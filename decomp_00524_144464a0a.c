// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144464a0a FUN_144464a0a body=93 status=ok
// SIG undefined FUN_144464a0a(void)

void FUN_144464a0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bac2be0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144464a68 FUN_144464a68 body=126 status=ok
// SIG undefined FUN_144464a68(void)

void FUN_144464a68(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bac2be0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144464ad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144464ae6 FUN_144464ae6 body=34 status=ok
// SIG undefined FUN_144464ae6(void)

undefined8 FUN_144464ae6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  FUN_14445ca98(lVar1,0);
  *(undefined1 *)(lVar1 + 0x230) = 0;
  return 0;
}



// FUNCTION 144464b08 FUN_144464b08 body=34 status=ok
// SIG undefined FUN_144464b08(void)

undefined1 FUN_144464b08(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  FUN_14445ca98(lVar1,0);
  *(undefined1 *)(lVar1 + 0x230) = 0;
  return 1;
}



// FUNCTION 144464b2a FUN_144464b2a body=711 status=ok
// SIG undefined FUN_144464b2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144464b2a(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/USDClasses",0,0,&PTR_FUN_14babe2c0);
  ppuStack_60 = &PTR_FUN_14babfea0;
  local_68 = 0;
  uStack_58 = 2;
  FUN_14282b410(L"/Script/USDClasses",&PTR_FUN_14babfee0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/USDClasses",&PTR_FUN_14bac0430,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14bac0610;
  local_68 = 1;
  FUN_14282b410(L"/Script/USDClasses",0,0,&PTR_FUN_14bac0630);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/USDClasses",0,0,&PTR_FUN_14bac08f0);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cbfe700);
  if (cVar1 == '\0') {
    _DAT_14cbfe700 = 0;
    uRam000000014cbfe708 = 0;
  }
  if (local_48 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cbfe710,L"USD.OnDemandCachedAssetLoading",&DAT_14c764a34,
                L"When true will cause the USD Asset Cache to only load cached UObjects from disk once they are needed, regardless of when the actual Asset Cache asset itself is loaded."
               );
  atexit(FUN_144456911);
  local_48 = "AssetRegistry";
  local_40 = 0xd;
  local_3c = 0;
  uVar2 = FUN_14001a6c0(&local_48,1);
  _DAT_14cbfe738 = (ulonglong)uVar2;
  _DAT_14cbfe778 = 0;
  _DAT_14cbfe780 = 0;
  _DAT_14cbfe758 = 0;
  uRam000000014cbfe760 = 0;
  _DAT_14cbfe784 = 0xffffffff00000080;
  _DAT_14cbfe78c = 0;
  DAT_14cbfe798 = 0;
  _DAT_14cbfe7a0 = 0;
  atexit(FUN_14445f7d4);
  local_48 = (char *)0x800000014bac0d22;
  local_34 = 10;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_1466801c6(&local_48);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cbfe7b0,L"USD.Bounds.UseWholeExtentsToDetectSelection",&DAT_14c764a40,
                L"When true it means we can select the UUsdDrawModeComponents in \'bounds\', \'cards\' or \'origin\' mode by clicking anywhere on the extent\'s \'volume\' itself, and not only by clicking directly on the drawn lines"
               );
  atexit(FUN_14445f803);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cbfe7c0,L"USD.Bounds.BoundsLineThickness",&DAT_14c764a44,
                L"Line thickness to use when drawing \'bounds\' or \'origin\' alternate prim draw modes from UsdGeomModelAPI"
               );
  atexit(FUN_14445f848);
  FUN_140056680(&DAT_14cbfe7d0,L"!DisplayColor");
  atexit((_func_5014 *)&LAB_144460dc1);
  DAT_14cbfe7e0 = 0;
  _DAT_14cbfe7e8 = 0;
  atexit((_func_5014 *)&LAB_144460dd2);
  _DAT_14cbfe7f0 = 0xffffffff;
  _DAT_14cbfe7f4 = 0;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144464df4 FUN_144464df4 body=55 status=ok
// SIG undefined FUN_144464df4(void)

void FUN_144464df4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe830 == 0) {
    uVar1 = FUN_141462c69();
    DAT_14cbfe830 = FUN_14171c317(FUN_14668039c,uVar1,L"EUsdPurpose");
  }
  return;
}



// FUNCTION 144464e2b FUN_144464e2b body=55 status=ok
// SIG undefined FUN_144464e2b(void)

void FUN_144464e2b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe848 == 0) {
    uVar1 = FUN_141462c69();
    DAT_14cbfe848 = FUN_14171c317(FUN_1466803cb,uVar1,L"EUsdDefaultKind");
  }
  return;
}



// FUNCTION 144464e62 FUN_144464e62 body=55 status=ok
// SIG undefined FUN_144464e62(void)

void FUN_144464e62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe860 == 0) {
    uVar1 = FUN_141462c69();
    DAT_14cbfe860 = FUN_14171c317(FUN_1466803fa,uVar1,L"EUsdLoadPolicy");
  }
  return;
}



// FUNCTION 144464e99 FUN_144464e99 body=55 status=ok
// SIG undefined FUN_144464e99(void)

void FUN_144464e99(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe878 == 0) {
    uVar1 = FUN_141462c69();
    DAT_14cbfe878 = FUN_14171c317(FUN_146680429,uVar1,L"EUsdInitialLoadSet");
  }
  return;
}



// FUNCTION 144464ed0 FUN_144464ed0 body=55 status=ok
// SIG undefined FUN_144464ed0(void)

void FUN_144464ed0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe890 == 0) {
    uVar1 = FUN_141462c69();
    DAT_14cbfe890 = FUN_14171c317(FUN_146680458,uVar1,L"EUsdInterpolationType");
  }
  return;
}



// FUNCTION 144464f07 FUN_144464f07 body=55 status=ok
// SIG undefined FUN_144464f07(void)

void FUN_144464f07(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe8a8 == 0) {
    uVar1 = FUN_141462c69();
    DAT_14cbfe8a8 = FUN_14171c317(FUN_146680489,uVar1,L"EUsdRootMotionHandling");
  }
  return;
}



// FUNCTION 144464f3e FUN_144464f3e body=55 status=ok
// SIG undefined FUN_144464f3e(void)

void FUN_144464f3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe8c0 == 0) {
    uVar1 = FUN_141462c69();
    DAT_14cbfe8c0 = FUN_14171c317(FUN_1466804b8,uVar1,L"EGeometryCacheImport");
  }
  return;
}



// FUNCTION 144464f75 FUN_144464f75 body=55 status=ok
// SIG undefined FUN_144464f75(void)

void FUN_144464f75(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbfe8d8 == 0) {
    uVar1 = FUN_141462c69();
    DAT_14cbfe8d8 = FUN_14171c317(FUN_1466804e7,uVar1,L"EUsdListPosition");
  }
  return;
}



// FUNCTION 144465067 FUN_144465067 body=49 status=ok
// SIG undefined FUN_144465067(void)

void FUN_144465067(void)

{
  FUN_144760e21(DAT_14cbfea90,DAT_14cbfea98);
  if (DAT_14cbfea90 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144465098 FUN_144465098 body=49 status=ok
// SIG undefined FUN_144465098(void)

void FUN_144465098(void)

{
  FUN_144760e21(DAT_14cbfeaa8,DAT_14cbfeab0);
  if (DAT_14cbfeaa8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444650c9 FUN_1444650c9 body=42 status=ok
// SIG undefined FUN_1444650c9(void)

void FUN_1444650c9(void)

{
  if (DAT_14cbfeac8 == '\x01') {
    if (DAT_14cbfeac4 != 0xffffffff) {
      TlsFree(DAT_14cbfeac4);
    }
    DAT_14cbfeac8 = '\0';
  }
  return;
}



// FUNCTION 1444650f3 FUN_1444650f3 body=66 status=ok
// SIG undefined FUN_1444650f3(void)

void FUN_1444650f3(void)

{
  undefined *puVar1;
  longlong lVar2;
  
  puVar1 = &DAT_14cbfff78;
  lVar2 = -0x14f8;
  do {
    *(undefined4 *)(puVar1 + 0x48) = 0;
    if (*(longlong *)(puVar1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(puVar1);
    puVar1 = puVar1 + -0x58;
    lVar2 = lVar2 + 0x58;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 144465150 FUN_144465150 body=14 status=ok
// SIG undefined FUN_144465150(void)

undefined8 * FUN_144465150(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x1000000000;
  param_2[1] = 0x200400000008;
  return param_2;
}



// FUNCTION 14446515e FUN_14446515e body=14 status=ok
// SIG undefined FUN_14446515e(void)

undefined8 * FUN_14446515e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x1000000000;
  param_2[1] = 0x200400000008;
  return param_2;
}



// FUNCTION 14446516c FUN_14446516c body=1284 status=ok
// SIG undefined FUN_14446516c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14446516c(void)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = &PTR_FUN_14bac3580;
  local_78 = 2;
  local_68 = 8;
  FUN_14282b410(L"/Script/UnrealUSDWrapper",0,0,&PTR_FUN_14bac3680);
  FUN_1446f470e(&DAT_14cbfe930,L"Transform",1);
  FUN_1446f470e(&DAT_14cbfe938,L"bHiddenInGame",1);
  FUN_1446f470e(&DAT_14cbfe940,L"bHidden",1);
  FUN_1446f470e(&DAT_14cbfe948,L"CurrentFocalLength",1);
  FUN_1446f470e(&DAT_14cbfe950,L"FocusSettings.ManualFocusDistance",1);
  FUN_1446f470e(&DAT_14cbfe958,L"CurrentAperture",1);
  FUN_1446f470e(&DAT_14cbfe960,L"Filmback.SensorWidth",1);
  FUN_1446f470e(&DAT_14cbfe968,L"Filmback.SensorHeight",1);
  FUN_1446f470e(&DAT_14cbfe970,L"Intensity",1);
  FUN_1446f470e(&DAT_14cbfe978,L"LightColor",1);
  FUN_1446f470e(&DAT_14cbfe980,L"bUseTemperature",1);
  FUN_1446f470e(&DAT_14cbfe988,L"Temperature",1);
  FUN_1446f470e(&DAT_14cbfe990,L"SourceWidth",1);
  FUN_1446f470e(&DAT_14cbfe998,L"SourceHeight",1);
  FUN_1446f470e(&DAT_14cbfe9a0,L"SourceRadius",1);
  FUN_1446f470e(&DAT_14cbfe9a8,L"OuterConeAngle",1);
  FUN_1446f470e(&DAT_14cbfe9b0,L"InnerConeAngle",1);
  FUN_1446f470e(&DAT_14cbfe9b8,L"LightSourceAngle",1);
  FUN_140056680(&DAT_14cbfe9c0,L"allPurpose");
  atexit((_func_5014 *)&LAB_144464fac);
  FUN_140056680(&DAT_14cbfe9d0,&DAT_149dfb77a);
  atexit((_func_5014 *)&LAB_144464fbd);
  FUN_140056680(&DAT_14cbfe9e0,L"preview");
  atexit((_func_5014 *)&LAB_144464fce);
  FUN_140056680(&DAT_14cbfe9f0,&DAT_14a3cba14);
  atexit((_func_5014 *)&LAB_144464fdf);
  FUN_140056680(&DAT_14cbfea00,L"primvars:displayColor");
  atexit((_func_5014 *)&LAB_144464ff0);
  FUN_140056680(&DAT_14cbfea10,L"primvars:displayOpacity");
  atexit((_func_5014 *)&LAB_144465001);
  FUN_140056680(&DAT_14cbfea20,L"doubleSided");
  atexit((_func_5014 *)&LAB_144465012);
  FUN_140056680(&DAT_14cbfea30,L"model:drawMode");
  atexit((_func_5014 *)&LAB_144465023);
  FUN_140056680(&DAT_14cbfea40,L"model:applyDrawMode");
  atexit((_func_5014 *)&LAB_144465034);
  FUN_140056680(&DAT_14cbfea50,&DAT_149e31048);
  atexit((_func_5014 *)&LAB_144465045);
  DAT_14cbfea60 = 0;
  FUN_1446f470e(&DAT_14cbfea68,L"unreal",1);
  FUN_1446f470e(&DAT_14cbfea70,L"mtlx",1);
  FUN_1446f470e(&DAT_14cbfea78,&DAT_14bac395c,1);
  FUN_140056680(&DAT_14cbfea80,L"universal");
  atexit((_func_5014 *)&LAB_144465056);
  DAT_14cbfea90 = 0;
  _DAT_14cbfea98 = 0;
  _DAT_14cbfeaa0 = 2;
  atexit(FUN_144465067);
  DAT_14cbfeaa8 = 0;
  _DAT_14cbfeab0 = 0;
  _DAT_14cbfeab8 = 2;
  atexit(FUN_144465098);
  local_58 = 0x800000014bac3978;
  local_44 = 0x10;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_146680604(&local_58);
  DAT_14cbfeac8 = 0;
  atexit(FUN_1444650c9);
  memset(&DAT_14cbfead0,0,0x14f8);
  lVar1 = 0;
  do {
    InitializeSRWLock((PSRWLOCK)(&DAT_14cbfead0 + lVar1));
    *(undefined8 *)((longlong)&DAT_14cbfeaf8 + lVar1) = 0;
    *(undefined4 *)((longlong)&DAT_14cbfeb00 + lVar1) = 0;
    *(undefined8 *)(&DAT_14cbfead8 + lVar1) = 0;
    *(undefined8 *)(lVar1 + 0x14cbfeae0) = 0;
    *(undefined8 *)((longlong)&DAT_14cbfeb04 + lVar1) = 0xffffffff00000080;
    *(undefined4 *)((longlong)&DAT_14cbfeb0c + lVar1) = 0;
    *(undefined8 *)((longlong)&DAT_14cbfeb18 + lVar1) = 0;
    *(undefined4 *)((longlong)&DAT_14cbfeb20 + lVar1) = 0;
    lVar1 = lVar1 + 0x58;
  } while (lVar1 != 0x14f8);
  atexit(FUN_1444650f3);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cbfffc8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cbfffc8,4000);
  atexit((_func_5014 *)&LAB_144465135);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144465674 FUN_144465674 body=55 status=ok
// SIG undefined FUN_144465674(void)

void FUN_144465674(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc00098 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc00098 = FUN_14171c317(FUN_146680b78,uVar1,L"ERigVMPinDirection");
  }
  return;
}



// FUNCTION 1444656ab FUN_1444656ab body=55 status=ok
// SIG undefined FUN_1444656ab(void)

void FUN_1444656ab(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc000b0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc000b0 = FUN_14171c317(FUN_146680ba7,uVar1,L"ERigVMFunctionArgumentDirection");
  }
  return;
}



// FUNCTION 1444656e2 FUN_1444656e2 body=55 status=ok
// SIG undefined FUN_1444656e2(void)

void FUN_1444656e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc000c8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc000c8 = FUN_14171c317(FUN_141905e60,uVar1,L"ERigVMTransformSpace");
  }
  return;
}



// FUNCTION 144465719 FUN_144465719 body=55 status=ok
// SIG undefined FUN_144465719(void)

void FUN_144465719(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc000e0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc000e0 = FUN_14171c317(FUN_146680bd6,uVar1,L"ERigVMClampSpatialMode");
  }
  return;
}



// FUNCTION 144465750 FUN_144465750 body=55 status=ok
// SIG undefined FUN_144465750(void)

void FUN_144465750(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc00300 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc00300 = FUN_14171c317(FUN_1466822ab,uVar1,L"ERigVMParameterType");
  }
  return;
}



// FUNCTION 144465802 FUN_144465802 body=147 status=ok
// SIG undefined FUN_144465802(void)

void FUN_144465802(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(local_38,L"Entry(\'%s\') cannot be found.");
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    pcVar2 = (code *)*puVar1;
    plVar4 = puVar1 + 4;
    if ((longlong *)puVar1[2] != (longlong *)0x0) {
      plVar4 = (longlong *)puVar1[2];
    }
    local_28 = param_1;
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,param_2,&local_28,local_38);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144465896 FUN_144465896 body=147 status=ok
// SIG undefined FUN_144465896(void)

void FUN_144465896(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(local_38,L"Entry(\'%s\') is being invoked recursively (%s).");
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    pcVar2 = (code *)*puVar1;
    plVar4 = puVar1 + 4;
    if ((longlong *)puVar1[2] != (longlong *)0x0) {
      plVar4 = (longlong *)puVar1[2];
    }
    local_28 = param_1;
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,param_2,&local_28,local_38);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14446592a FUN_14446592a body=1157 status=ok
// SIG undefined FUN_14446592a(void)

undefined4 FUN_14446592a(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int *piVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  ushort uVar12;
  ushort uVar13;
  undefined1 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_98 [39];
  undefined1 local_71;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_2 + 0x1c8);
  uVar6 = *(undefined8 *)(param_2 + 0x1d4);
  *(longlong *)(param_2 + 0x1d4) = *param_3;
  uVar14 = *(undefined1 *)(param_2 + 0x1dc);
  *(bool *)(param_2 + 0x1dc) = iVar1 == 0;
  lVar4 = param_1[0x3d];
  if (iVar1 == 0) {
    *(undefined1 *)(param_2 + 0x1d0) = 1;
    LOCK();
    *(int *)(param_1 + 0x40) = (int)param_1[0x40] + 1;
    UNLOCK();
    if ((int)param_1[0x3f] != 0) {
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      local_71 = uVar14;
      local_70 = uVar6;
      uVar6 = (**(code **)(*param_1 + 0x360))(param_1,param_2,0);
      uStack_50._0_4_ = 1;
      FUN_141906014(&local_58,0);
      iVar3 = (uint)uStack_50;
      *local_58 = uVar6;
      lVar15 = (longlong)(int)(uint)uStack_50;
      uStack_50._0_4_ = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < (uint)uStack_50) {
        FUN_141906014(&local_58,iVar3);
      }
      local_58[lVar15] = param_1 + 5;
      uVar6 = (**(code **)(*param_1 + 0x360))(param_1,param_2,3);
      lVar15 = (longlong)(int)(uint)uStack_50;
      uStack_50._0_4_ = (uint)uStack_50 + 1;
      if (uStack_50._4_4_ < (uint)uStack_50) {
        FUN_141906014(&local_58);
      }
      uVar14 = local_71;
      local_58[lVar15] = uVar6;
      *(undefined8 **)(param_2 + 0x1e0) = local_58;
      *(uint *)(param_2 + 0x1e8) = (uint)uStack_50;
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (*(char *)(lVar4 + 0xa9) == '\x01') {
        lVar15 = FUN_141357b6a(param_2);
        if (lVar15 == 0) {
          local_58 = (undefined8 *)0x0;
          uStack_50 = 0;
        }
        else {
          uVar6 = FUN_141357b6a(param_2);
          local_58 = (undefined8 *)0x0;
          uStack_50 = 0;
          FUN_1401031ac(uVar6,0);
        }
        uVar6 = local_70;
        iVar3 = *(int *)(lVar4 + 0x50);
        if (iVar3 < 2) {
LAB_144465ac8:
          *(undefined1 *)(param_2 + 0x1d0) = 0;
          if (local_58 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_144465ad9;
        }
        if (iVar3 == (uint)uStack_50) {
          lVar15 = 0;
          while( true ) {
            uVar12 = *(ushort *)(*(longlong *)(lVar4 + 0x48) + lVar15);
            uVar7 = (ulonglong)uVar12;
            uVar13 = *(ushort *)((longlong)local_58 + lVar15);
            if (uVar12 != uVar13) break;
            if (uVar12 == 0) goto LAB_144465b5f;
LAB_144465b1d:
            lVar15 = lVar15 + 2;
          }
          if ((uVar13 | uVar12) < 0x80) {
            uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar11 = (ulonglong)uVar13;
            uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar11]) goto LAB_144465b1d;
          }
          if (uVar12 != uVar13) goto LAB_144465ac8;
        }
        else if ((uint)uStack_50 + iVar3 != 1) goto LAB_144465ac8;
LAB_144465b5f:
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      local_68 = *(longlong *)(param_2 + 0xc0);
      FUN_1401fa1fe(param_2);
      plVar8 = (longlong *)(param_2 + 0xf0);
      uVar2 = *(uint *)(param_1 + 0x3f);
      iVar3 = *(int *)(param_2 + 0xf8);
      *(uint *)(param_2 + 0xf8) = iVar3 + uVar2;
      if ((uint)(*(int *)(param_2 + 0xfc) - iVar3) < uVar2) {
        local_60 = plVar8;
        FUN_14488eebe(plVar8);
        plVar8 = local_60;
      }
      memset((void *)((longlong)iVar3 * 2 + *plVar8),0,(longlong)(int)uVar2 * 2);
      lVar15 = local_68;
      uVar6 = local_70;
      goto LAB_144465bce;
    }
    *(undefined1 *)(param_2 + 0x1d0) = 0;
LAB_144465ad9:
    *(undefined1 *)(param_2 + 0x1dc) = uVar14;
    *(undefined8 *)(param_2 + 0x1d4) = uVar6;
    uVar5 = 0;
  }
  else {
    lVar15 = *(longlong *)(param_2 + 0xc0);
LAB_144465bce:
    lVar16 = *(longlong *)(param_2 + 0xd8);
    *(longlong **)(param_2 + 0xd8) = param_1;
    uVar2 = *(uint *)(lVar4 + 0x20);
    uVar7 = (ulonglong)uVar2;
    if (*param_3 == 0) {
      if (uVar7 != 0) {
        piVar9 = (int *)(*(longlong *)(lVar4 + 0x18) + 8);
        uVar11 = 0;
        do {
          if (*piVar9 == 0) {
            local_71 = uVar14;
            local_70 = uVar6;
            if (iVar1 != 0) goto LAB_144465ca4;
            if ((int)uVar2 <= (int)uVar11) goto LAB_144465c49;
            *(undefined8 *)(lVar15 + 8) = *(undefined8 *)(piVar9 + -2);
            goto LAB_144465ca4;
          }
          uVar11 = uVar11 + 1;
          piVar9 = piVar9 + 3;
        } while (uVar7 != uVar11);
      }
      uVar11 = 0xffffffff;
      local_71 = uVar14;
      local_70 = uVar6;
      if (iVar1 == 0) {
LAB_144465c49:
        *(undefined8 *)(lVar15 + 8) = 0;
        local_71 = uVar14;
        local_70 = uVar6;
      }
LAB_144465ca4:
      plVar8 = (longlong *)(param_2 + 0x1c0);
      iVar3 = *(int *)(param_2 + 0x1c8);
      *(uint *)(param_2 + 0x1c8) = iVar3 + 1U;
      if (*(uint *)(param_2 + 0x1cc) < iVar3 + 1U) {
        FUN_1446f48e2(plVar8,iVar3);
      }
      *(int *)(*plVar8 + (longlong)iVar3 * 4) = (int)uVar11;
      if (iVar1 == 0) {
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      }
      uVar5 = FUN_144465db0(param_1,param_2,*(undefined2 *)(lVar15 + 0x18),(int)param_1[0x3f] + -1);
      *(char *)(param_2 + 0x1d0) = (char)uVar5;
      *(int *)(param_2 + 0x1c8) = *(int *)(param_2 + 0x1c8) + -1;
      FUN_14479f406(plVar8);
      uVar6 = local_70;
      uVar14 = local_71;
    }
    else {
      if (0 < (int)uVar2) {
        puVar10 = (undefined2 *)(*(longlong *)(lVar4 + 0x18) + 8);
        uVar11 = 0;
        do {
          if (*(longlong *)(puVar10 + -4) == *param_3) {
            local_71 = uVar14;
            local_70 = uVar6;
            local_68 = lVar16;
            (**(code **)(*param_1 + 0x3c0))(param_1,param_2,*puVar10);
            lVar16 = local_68;
            if (iVar1 == 0) {
              *(longlong *)(lVar15 + 8) = *param_3;
            }
            goto LAB_144465ca4;
          }
          uVar11 = uVar11 + 1;
          puVar10 = puVar10 + 6;
        } while (uVar7 != uVar11);
      }
      *(undefined1 *)(param_2 + 0x1d0) = 0;
      uVar5 = 0;
    }
    *(longlong *)(param_2 + 0xd8) = lVar16;
    *(undefined1 *)(param_2 + 0x1dc) = uVar14;
    *(undefined8 *)(param_2 + 0x1d4) = uVar6;
    if (iVar1 != 0) goto LAB_144465d46;
  }
  LOCK();
  *(int *)(param_1 + 0x40) = (int)param_1[0x40] + -1;
  UNLOCK();
LAB_144465d46:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 144465db0 FUN_144465db0 body=3646 status=ok
// SIG undefined FUN_144465db0(void)

ulonglong FUN_144465db0(longlong *param_1,longlong param_2,ulonglong param_3,ushort param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  size_t sVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  char *_Str;
  longlong lVar17;
  undefined *puVar18;
  int *piVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  undefined8 *puVar24;
  short sVar25;
  longlong lVar26;
  ushort *puVar27;
  uint uVar28;
  longlong *unaff_R12;
  undefined2 uVar29;
  int *piVar30;
  bool bVar31;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 *local_210;
  undefined *local_208;
  code *local_200;
  longlong local_1f8;
  uint local_1ec;
  longlong *local_1e8;
  undefined2 local_1da;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  char *local_1a8;
  undefined4 local_1a0;
  longlong local_88;
  int local_80;
  longlong local_78;
  uint local_70;
  uint local_68 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar17 = *(longlong *)(param_2 + 0xc0);
  uVar29 = *(undefined2 *)(lVar17 + 0x18);
  *(short *)(lVar17 + 0x18) = (short)param_3;
  uVar15 = param_3 & 0xffff;
  iVar7 = (int)param_1[0x3f];
  if ((int)uVar15 < iVar7) {
    plVar14 = (longlong *)param_1[0x3d];
    local_1b0 = (longlong *)param_1[0x46];
    local_1b8 = (longlong *)param_1[0x49];
    uVar20 = (uint)param_4;
    local_1d8 = (longlong *)(lVar17 + 0xe8);
    local_1e8 = (longlong *)(lVar17 + 0xf8);
    local_1ec = (uint)param_4;
    local_1f8 = param_2;
    local_1d0 = param_1;
    local_1c8 = lVar17;
    do {
      lVar4 = local_1f8;
      uVar8 = (uint)param_3;
      if (uVar20 < (uint)uVar15) break;
      sVar25 = (short)param_3;
      uVar15 = param_3 & 0xffff;
      uVar11 = (ulonglong)(uint)((int)uVar15 << 4);
      uVar28 = (uint)*(byte *)(param_1[0x3e] + 8 + uVar11);
      if (0x27 < uVar28 - 0x41) goto switchD_144465e9d_caseD_4f;
      plVar16 = (longlong *)(param_1[0x3e] + uVar11);
      switch(uVar28) {
      case 0x41:
        lVar4 = *(longlong *)(param_2 + 0x1a8);
        lVar23 = (longlong)*(int *)(param_1[0x56] + uVar15 * 4) * 0x20;
        puVar24 = *(undefined8 **)(*(longlong *)(lVar4 + 8 + lVar23) + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952210) &&
           (FUN_144b3d300(&DAT_14c952210), param_2 = local_1f8, DAT_14c952210 == -1)) {
          FUN_14475b26a();
          local_200 = FUN_1405ebbb2;
          local_208 = &DAT_14c9520b8;
          local_210 = (undefined8 *)0x0;
          local_218 = 0x1008081;
          FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
          atexit(FUN_142816fad);
          _Init_thread_footer(&DAT_14c952210);
          param_2 = local_1f8;
        }
        if (DAT_14c9521c8 == 0) {
          bVar31 = puVar24 != (undefined8 *)0x0;
          if (puVar24 != &DAT_14c9521c0 && bVar31) {
            do {
              puVar24 = (undefined8 *)puVar24[6];
              bVar31 = puVar24 != (undefined8 *)0x0;
              if (puVar24 == &DAT_14c9521c0) break;
            } while (puVar24 != (undefined8 *)0x0);
          }
          if (!bVar31) goto LAB_1444667d8;
        }
        else if ((puVar24[3] & DAT_14c9521c8) == 0) {
LAB_1444667d8:
          puVar18 = *(undefined **)(*(longlong *)(lVar4 + lVar23 + 8) + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9520b0) &&
             (FUN_144b3d300(&DAT_14c9520b0), param_2 = local_1f8, DAT_14c9520b0 == -1)) {
            local_208 = (undefined *)FUN_1446ddbd2();
            local_200 = FUN_1409e12a0;
            local_210 = (undefined8 *)0x0;
            local_218 = 0xa001;
            FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
            atexit(FUN_142816ef9);
            _Init_thread_footer(&DAT_14c9520b0);
            param_2 = local_1f8;
          }
          param_1 = local_1d0;
          uVar20 = local_1ec;
          if (DAT_14c952068 == 0) {
            bVar31 = puVar18 != (undefined *)0x0;
            if (puVar18 != &DAT_14c952060 && bVar31) {
              do {
                puVar18 = *(undefined **)(puVar18 + 0x30);
                bVar31 = puVar18 != (undefined *)0x0;
                if (puVar18 == &DAT_14c952060) break;
              } while (puVar18 != (undefined *)0x0);
            }
            if (bVar31) goto LAB_144466865;
          }
          else if ((*(ulonglong *)(puVar18 + 0x18) & DAT_14c952068) != 0) {
LAB_144466865:
            **(undefined8 **)
              (*(longlong *)(param_2 + 0x1a8) +
              (longlong)*(int *)(local_1d0[0x56] + (ulonglong)*(ushort *)(lVar17 + 0x18) * 4) * 0x20
              ) = 0;
          }
          break;
        }
        **(undefined4 **)
          (*(longlong *)(param_2 + 0x1a8) +
          (longlong)*(int *)(local_1d0[0x56] + (ulonglong)*(ushort *)(lVar17 + 0x18) * 4) * 0x20) =
             0;
        param_1 = local_1d0;
        uVar20 = local_1ec;
        break;
      case 0x42:
        **(undefined1 **)
          (*(longlong *)(param_2 + 0x1a8) + (longlong)*(int *)(param_1[0x56] + uVar15 * 4) * 0x20) =
             0;
        break;
      case 0x43:
        **(undefined1 **)
          (*(longlong *)(param_2 + 0x1a8) + (longlong)*(int *)(param_1[0x56] + uVar15 * 4) * 0x20) =
             1;
        break;
      case 0x44:
        iVar7 = *(int *)(param_1[0x56] + uVar15 * 4);
        lVar4 = *(longlong *)(param_2 + 0x1a8);
        lVar23 = (longlong)iVar7 * 0x20;
        lVar26 = (longlong)(iVar7 + 1) * 0x20;
        local_210 = *(undefined8 **)(lVar4 + 0x10 + lVar23);
        if (local_210 == (undefined8 *)0x0) {
          local_210 = &DAT_14cc01170;
        }
        local_218 = *(undefined8 *)(lVar4 + lVar23);
        puVar24 = *(undefined8 **)(lVar4 + 0x10 + lVar26);
        if (puVar24 == (undefined8 *)0x0) {
          puVar24 = &DAT_14cc01170;
        }
        FUN_140162cc4(*(undefined8 *)(lVar4 + 8 + lVar26),*(undefined8 *)(lVar4 + lVar26),puVar24,
                      *(undefined8 *)(lVar4 + 8 + lVar23));
        param_2 = local_1f8;
        break;
      case 0x45:
        piVar19 = *(int **)(*(longlong *)(param_2 + 0x1a8) +
                           (longlong)*(int *)(param_1[0x56] + uVar15 * 4) * 0x20);
        *piVar19 = *piVar19 + 1;
        break;
      case 0x46:
        piVar19 = *(int **)(*(longlong *)(param_2 + 0x1a8) +
                           (longlong)*(int *)(param_1[0x56] + uVar15 * 4) * 0x20);
        *piVar19 = *piVar19 + -1;
        break;
      case 0x47:
      case 0x48:
        iVar7 = *(int *)(param_1[0x56] + uVar15 * 4);
        lVar4 = *(longlong *)(param_2 + 0x1a8);
        lVar26 = (longlong)iVar7 * 0x20;
        lVar23 = (longlong)(iVar7 + 1) * 0x20;
        puVar24 = (undefined8 *)(lVar4 + lVar23);
        unaff_R12 = *(longlong **)(lVar4 + 8 + lVar26);
        lVar23 = *(longlong *)(lVar4 + 0x10 + lVar23);
        if (lVar23 == 0) {
          uVar10 = *puVar24;
        }
        else {
          uVar10 = FUN_140162dd2(lVar23,*puVar24,puVar24[1]);
        }
        puVar24 = (undefined8 *)(lVar4 + lVar26);
        if (puVar24[2] == 0) {
          uVar13 = *puVar24;
        }
        else {
          uVar13 = FUN_140162dd2(puVar24[2],*puVar24,puVar24[1]);
        }
        uVar6 = (**(code **)(*unaff_R12 + 200))(unaff_R12,uVar13,uVar10,0);
        **(undefined1 **)
          (*(longlong *)(local_1f8 + 0x1a8) +
          (longlong)(*(int *)(param_1[0x56] + (ulonglong)*(ushort *)(lVar17 + 0x18) * 4) + 2) * 0x20
          ) = uVar6;
        param_3 = (ulonglong)(*(int *)(lVar17 + 0x18) + 1);
        param_2 = local_1f8;
        uVar20 = local_1ec;
        goto LAB_144466777;
      case 0x49:
        param_3 = (ulonglong)*(ushort *)(*plVar14 + 4 + *plVar16);
        goto LAB_144466777;
      case 0x4a:
        param_3 = (ulonglong)(ushort)(sVar25 + *(short *)(*plVar14 + 4 + *plVar16));
        goto LAB_144466777;
      case 0x4b:
        param_3 = (ulonglong)(ushort)(sVar25 - *(short *)(*plVar14 + 4 + *plVar16));
        goto LAB_144466777;
      case 0x4c:
        if (**(char **)(*(longlong *)(param_2 + 0x1a8) +
                       (longlong)*(int *)(param_1[0x56] + uVar15 * 4) * 0x20) ==
            *(char *)(*plVar14 + 0xc + *plVar16)) {
          param_3 = (ulonglong)*(ushort *)(*plVar14 + 8 + *plVar16);
          goto LAB_144466777;
        }
        goto LAB_1444666e2;
      case 0x4d:
        uVar28 = 1;
        if (**(char **)(*(longlong *)(param_2 + 0x1a8) +
                       (longlong)*(int *)(param_1[0x56] + uVar15 * 4) * 0x20) ==
            *(char *)(*plVar14 + 0xc + *plVar16)) {
          uVar28 = (uint)*(ushort *)(*plVar14 + 8 + *plVar16);
        }
        param_3 = (ulonglong)(uVar28 + uVar8);
        goto LAB_144466777;
      case 0x4e:
        if (**(char **)(*(longlong *)(param_2 + 0x1a8) +
                       (longlong)*(int *)(param_1[0x56] + uVar15 * 4) * 0x20) !=
            *(char *)(*plVar14 + 0xc + *plVar16)) goto LAB_1444666e2;
        param_3 = (ulonglong)(ushort)(sVar25 - *(short *)(*plVar14 + 8 + *plVar16));
        goto LAB_144466777;
      default:
        goto switchD_144465e9d_caseD_4f;
      case 0x50:
        uVar15 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
        if (*(char *)(param_2 + 0x1dc) == '\x01') {
          FUN_141165eb6(param_2 + 0x1f0,param_2 + 0x1d4);
        }
        goto LAB_144466b4d;
      case 0x51:
        iVar7 = *(int *)(param_1[0x56] + uVar15 * 4);
        FUN_1490da7c4(param_2,**(undefined4 **)
                                (*(longlong *)(param_2 + 0x1a8) + (longlong)iVar7 * 0x20),
                      **(undefined4 **)
                        (*(longlong *)(param_2 + 0x1a8) + (longlong)(iVar7 + 1) * 0x20));
        param_2 = local_1f8;
        break;
      case 0x52:
        FUN_1490da8ac(param_2);
        param_2 = local_1f8;
        break;
      case 99:
        unaff_R12 = (longlong *)(*plVar14 + *plVar16 + 4);
        cVar5 = FUN_1490da410(param_1,param_2,unaff_R12);
        if (cVar5 == '\0') {
          *(undefined1 *)(param_2 + 0x1d0) = 0;
          goto LAB_144466bc1;
        }
        FUN_1490da922(&local_1a8,lVar17,lVar17);
        uVar8 = (**(code **)(*param_1 + 0x338))(param_1,param_2,unaff_R12);
        if ((char)uVar8 == '\x01') {
          FUN_1490da9b2(&local_1a8);
          param_3 = (ulonglong)(*(int *)(lVar17 + 0x18) + 1);
          param_2 = local_1f8;
          goto LAB_144466777;
        }
        uVar15 = (ulonglong)uVar8;
        *(char *)(local_1f8 + 0x1d0) = (char)uVar8;
        FUN_1490da9b2(&local_1a8);
        goto LAB_144466b4d;
      case 100:
        iVar7 = (int)plVar14[6];
        if (iVar7 != 0) {
          uVar15 = **(ulonglong **)
                     (*(longlong *)(param_2 + 0x1a8) +
                     (longlong)*(int *)(param_1[0x56] + uVar15 * 4) * 0x20);
          lVar4 = *plVar14;
          lVar23 = *plVar16;
          bVar31 = false;
          do {
            iVar22 = *(int *)(lVar4 + 8 + lVar23);
            if (iVar22 < iVar7) {
              puVar27 = (ushort *)(plVar14[5] + (longlong)iVar22 * 0x18 + 0x14);
              lVar26 = (longlong)iVar7 - (longlong)iVar22;
              do {
                if (*(uint *)(puVar27 + -4) != (uint)*(ushort *)(lVar17 + 0x18)) break;
                if (*(ulonglong *)(puVar27 + -8) == uVar15) {
                  param_3 = (ulonglong)*puVar27;
                  param_2 = local_1f8;
                  param_1 = local_1d0;
                  goto LAB_144466777;
                }
                puVar27 = puVar27 + 0xc;
                lVar26 = lVar26 + -1;
              } while (lVar26 != 0);
            }
            if ((bVar31) || (cVar5 = FUN_1403f35db(uVar15,&DAT_14cc00db0), cVar5 != '\0'))
            goto LAB_144466bc1;
            if ((longlong)DAT_14cc00db0 < 0) {
              _Str = (char *)(DAT_14cc00db0 & 0x7fffffffffffffff);
              if (DAT_14cc00dbc == '\x01') {
                FUN_1446f470e(&local_1a8,_Str,1);
                uVar8 = (uint)local_1a8;
              }
              else {
                local_1a8 = _Str;
                if (_Str == (char *)0x0) {
                  local_1a0 = 0;
                }
                else {
                  sVar12 = strlen(_Str);
                  local_1a0 = (undefined4)sVar12;
                }
                FUN_14001c09c(local_68,&local_1a8,1);
                lVar17 = local_1c8;
                uVar20 = local_1ec;
                uVar8 = local_68[0];
              }
              uVar11 = (ulonglong)uVar8;
              uVar15 = (ulonglong)DAT_14cc00db8 << 0x20;
              DAT_14cc00db0 = uVar11;
            }
            else {
              uVar11 = (ulonglong)DAT_14cc00db8 << 0x20;
              uVar15 = DAT_14cc00db0 & 0xffffffff;
            }
            uVar15 = uVar15 | uVar11;
            iVar7 = (int)plVar14[6];
            bVar31 = true;
          } while( true );
        }
      case 0x68:
        *(undefined1 *)(param_2 + 0x1d0) = 0;
LAB_144466bc1:
        uVar15 = 0;
        goto LAB_144466b4d;
      case 0x65:
        lVar23 = *plVar16;
        iVar7 = *(int *)(param_1[0x56] + uVar15 * 4);
        local_80 = *(int *)(param_1[0x56] + 4 + uVar15 * 4) - iVar7;
        local_78 = 0;
        local_88 = (longlong)iVar7 * 0x20 + *(longlong *)(param_2 + 0x1a8);
        if (local_80 < 1) {
          local_80 = 0;
          local_88 = local_78;
        }
        lVar26 = *plVar14;
        uVar1 = *(ushort *)(lVar26 + 8 + lVar23);
        local_70 = 0;
        if (uVar1 != 0) {
          local_78 = (ulonglong)((uint)*(ushort *)(lVar26 + 6 + lVar23) * 0x30) + plVar14[7];
          local_70 = (uint)uVar1;
        }
        *(undefined8 *)(local_1f8 + 0x100) =
             *(undefined8 *)(*local_1b8 + (ulonglong)*(ushort *)(lVar26 + 2 + lVar23) * 8);
        (**(code **)(*(longlong *)(*local_1b0 + (ulonglong)*(ushort *)(lVar26 + 2 + lVar23) * 8) +
                    0x20))(local_1f8,&local_88,&local_78);
        param_2 = lVar4;
        break;
      case 0x66:
        lVar4 = *plVar16;
        lVar23 = *plVar14;
        iVar7 = *(int *)(lVar23 + 8 + lVar4);
        if (((iVar7 != -1) && (iVar22 = *(int *)(lVar23 + 0xc + lVar4), iVar22 != -1)) &&
           (iVar7 <= iVar22)) {
          unaff_R12 = *(longlong **)
                       (*(longlong *)(param_2 + 0x1a8) +
                       (longlong)*(int *)(param_1[0x56] + uVar15 * 4) * 0x20);
          uVar9 = FUN_1490daa46(param_2);
          local_1a8 = (char *)CONCAT44(local_1a8._4_4_,uVar9);
          local_68[0] = 0xffffffff;
          plVar16 = (longlong *)FUN_14726b53a(unaff_R12,uVar9,&local_1a8,local_68);
          iVar7 = *(int *)(lVar17 + 0x1c);
          if ((int)*plVar16 != iVar7) {
            FUN_144465db0(param_1,local_1f8,*(undefined4 *)(lVar23 + 8 + lVar4),
                          *(undefined4 *)(lVar23 + 0xc + lVar4));
            *(int *)plVar16 = iVar7;
            unaff_R12 = plVar16;
          }
          uVar8 = (uint)*(ushort *)(lVar17 + 0x18);
          param_2 = local_1f8;
        }
        param_3 = (ulonglong)(uVar8 + 1);
        uVar20 = local_1ec;
        goto LAB_144466777;
      case 0x67:
        *(undefined4 *)(lVar17 + 0xf0) = 0;
        if (*(int *)(lVar17 + 0xf4) < 0) {
          FUN_1490efc60(local_1d8,0);
          param_2 = local_1f8;
        }
        *(undefined4 *)(lVar17 + 0x100) = 0;
        if (*(int *)(lVar17 + 0x104) < 0) {
          FUN_1459747b8(local_1e8,0);
          param_2 = local_1f8;
        }
        puVar24 = *(undefined8 **)
                   (*(longlong *)(param_2 + 0x1a8) +
                   (longlong)*(int *)(param_1[0x56] + (ulonglong)*(ushort *)(lVar17 + 0x18) * 4) *
                   0x20);
        iVar7 = *(int *)(puVar24 + 1);
        if (iVar7 < 0) {
LAB_144466be7:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar7);
        }
        if (*(int *)(lVar17 + 0xf4) < iVar7) {
          FUN_1490efc60(local_1d8);
          iVar7 = *(int *)(puVar24 + 1);
          param_2 = local_1f8;
          if (iVar7 < 0) goto LAB_144466be7;
        }
        local_1da = uVar29;
        local_1c0 = plVar14;
        if (*(int *)(lVar17 + 0x104) < iVar7) {
          FUN_1459747b8();
          iVar7 = *(int *)(puVar24 + 1);
          param_2 = local_1f8;
        }
        if (iVar7 != 0) {
          piVar19 = (int *)*puVar24;
          piVar30 = piVar19 + iVar7;
          iVar22 = -1;
          iVar7 = 0;
          plVar14 = local_1e8;
          do {
            lVar17 = (longlong)*piVar19;
            if ((-1 < lVar17) && (*piVar19 < *(int *)(param_2 + 0x40))) {
              lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x38) + lVar17 * 8);
              if (lVar4 != 0) {
                puVar18 = *(undefined **)(lVar4 + 8);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c952a58) &&
                   (FUN_144b3d300(&DAT_14c952a58), plVar14 = local_1e8, param_2 = local_1f8,
                   DAT_14c952a58 == -1)) {
                  local_208 = (undefined *)FUN_1446ddbd2();
                  local_200 = FUN_1403a682c;
                  local_210 = (undefined8 *)0x0;
                  local_218 = 0x108001;
                  FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
                  atexit(FUN_142818c9e);
                  _Init_thread_footer(&DAT_14c952a58);
                  plVar14 = local_1e8;
                  param_2 = local_1f8;
                }
                if (DAT_14c952a10 == 0) {
                  bVar31 = puVar18 != (undefined *)0x0;
                  if (puVar18 != &DAT_14c952a08 && bVar31) {
                    do {
                      puVar18 = *(undefined **)(puVar18 + 0x30);
                      bVar31 = puVar18 != (undefined *)0x0;
                      if (puVar18 == &DAT_14c952a08) break;
                    } while (puVar18 != (undefined *)0x0);
                  }
                  if (bVar31) goto LAB_144466105;
                }
                else if ((*(ulonglong *)(puVar18 + 0x18) & DAT_14c952a10) != 0) {
LAB_144466105:
                  lVar23 = *(longlong *)(lVar4 + 0x70);
                  if (lVar23 != 0) {
                    if (DAT_14cc00260 == 0) {
                      uVar10 = FUN_1408ed7fc();
                      DAT_14cc00260 = FUN_140002ddd(FUN_146681ef3,uVar10,L"RigVMTrait");
                      plVar14 = local_1e8;
                      param_2 = local_1f8;
                      if (DAT_14cc00260 == 0) goto LAB_144466168;
                    }
                    if ((*(int *)(DAT_14cc00260 + 0x38) <= *(int *)(lVar23 + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(lVar23 + 0x30) +
                         (longlong)*(int *)(DAT_14cc00260 + 0x38) * 8) == DAT_14cc00260 + 0x30)) {
                      if (iVar22 == -1) {
                        iVar22 = 0;
                        lVar23 = 0;
                      }
                      else {
                        lVar23 = (longlong)iVar22 * 0x20 + *plVar14;
                        iVar22 = iVar7;
                      }
                      uVar10 = *(undefined8 *)(lVar4 + 0x70);
                      iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x38) + lVar17 * 8) +
                                      0x44);
                      lVar17 = *(longlong *)(param_2 + 0x18);
                      iVar21 = *(int *)(local_1c8 + 0xf0);
                      *(uint *)(local_1c8 + 0xf0) = iVar21 + 1U;
                      if (*(uint *)(local_1c8 + 0xf4) < iVar21 + 1U) {
                        FUN_1490efcc0(local_1d8,iVar21);
                        plVar14 = local_1e8;
                        param_2 = local_1f8;
                      }
                      lVar4 = *local_1d8;
                      unaff_R12 = (longlong *)((longlong)iVar21 * 0x20);
                      *(longlong *)(lVar4 + (longlong)unaff_R12) = iVar2 + lVar17;
                      *(undefined8 *)(lVar4 + 8 + (longlong)unaff_R12) = uVar10;
                      *(longlong *)(lVar4 + 0x10 + (longlong)unaff_R12) = lVar23;
                      *(int *)(lVar4 + 0x18 + (longlong)unaff_R12) = iVar22;
                      iVar22 = -1;
                      goto LAB_1444661c8;
                    }
                  }
                }
              }
LAB_144466168:
              iVar2 = *(int *)(local_1c8 + 0x100);
              iVar21 = iVar22;
              if (iVar22 == -1) {
                iVar21 = iVar2;
              }
              lVar17 = *(longlong *)(*(longlong *)(param_2 + 0x38) + lVar17 * 8);
              iVar3 = *(int *)(lVar17 + 0x44);
              lVar4 = *(longlong *)(param_2 + 0x18);
              *(uint *)(local_1c8 + 0x100) = iVar2 + 1U;
              if (*(uint *)(local_1c8 + 0x104) < iVar2 + 1U) {
                FUN_1490ef800(plVar14,iVar2);
                plVar14 = local_1e8;
                param_2 = local_1f8;
              }
              unaff_R12 = (longlong *)((longlong)iVar2 * 0x20);
              lVar23 = *plVar14;
              *(longlong *)(lVar23 + (longlong)unaff_R12) = iVar3 + lVar4;
              *(longlong *)(lVar23 + 8 + (longlong)unaff_R12) = lVar17;
              iVar7 = iVar7 + 1;
              if (iVar22 == -1) {
                iVar7 = 1;
              }
              puVar24 = (undefined8 *)(lVar23 + 0x10 + (longlong)unaff_R12);
              *puVar24 = 0;
              puVar24[1] = 0;
              iVar22 = iVar21;
            }
LAB_1444661c8:
            piVar19 = piVar19 + 1;
          } while (piVar19 != piVar30);
        }
        param_3 = (ulonglong)(*(int *)(local_1c8 + 0x18) + 1);
        plVar14 = local_1c0;
        param_1 = local_1d0;
        lVar17 = local_1c8;
        uVar29 = local_1da;
        uVar20 = local_1ec;
        goto LAB_144466777;
      }
      uVar8 = *(uint *)(lVar17 + 0x18);
LAB_1444666e2:
      param_3 = (ulonglong)(uVar8 + 1);
LAB_144466777:
      *(short *)(lVar17 + 0x18) = (short)param_3;
      iVar7 = (int)param_1[0x3f];
switchD_144465e9d_caseD_4f:
      uVar15 = param_3 & 0xffff;
    } while ((int)uVar15 < iVar7);
  }
  *(undefined1 *)(param_2 + 0x1d0) = 1;
  uVar15 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
LAB_144466b4d:
  *(undefined2 *)(lVar17 + 0x18) = uVar29;
  if ((local_60 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144466c01 FUN_144466c01 body=55 status=ok
// SIG undefined FUN_144466c01(void)

void FUN_144466c01(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc00460 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc00460 = FUN_14171c317(FUN_146682a46,uVar1,L"ERigVMOpCode");
  }
  return;
}



// FUNCTION 144466c38 FUN_144466c38 body=55 status=ok
// SIG undefined FUN_144466c38(void)

void FUN_144466c38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc00538 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc00538 = FUN_14171c317(FUN_146682f2a,uVar1,L"ERigVMCopyType");
  }
  return;
}



// FUNCTION 144466c80 FUN_144466c80 body=55 status=ok
// SIG undefined FUN_144466c80(void)

void FUN_144466c80(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc007c8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc007c8 = FUN_14171c317(FUN_14668369c,uVar1,L"ERigVMBreakpointAction");
  }
  return;
}



// FUNCTION 144466cd6 FUN_144466cd6 body=49 status=ok
// SIG undefined FUN_144466cd6(void)

void FUN_144466cd6(void)

{
  FUN_1457f2ec5(DAT_14cc00860,DAT_14cc00868);
  if (DAT_14cc00860 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144466d18 FUN_144466d18 body=204 status=ok
// SIG undefined FUN_144466d18(void)

undefined8
FUN_144466d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144479fc8(&local_40,param_3,param_4);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_1490de260(param_1,local_58);
  FUN_1400021e4(local_58,&local_50);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_140002266(param_2,L"%s::%s",puVar1,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144466de6 FUN_144466de6 body=10 status=ok
// SIG undefined FUN_144466de6(void)

void FUN_144466de6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144466ded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))();
  return;
}



// FUNCTION 144466df0 FUN_144466df0 body=23 status=ok
// SIG undefined FUN_144466df0(void)

undefined8 FUN_144466df0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x58))();
  return param_2;
}



// FUNCTION 144466e08 FUN_144466e08 body=22 status=ok
// SIG undefined FUN_144466e08(void)

undefined8 FUN_144466e08(undefined8 param_1,undefined8 param_2)

{
  FUN_144466d18();
  return param_2;
}



// FUNCTION 144466e1e FUN_144466e1e body=1398 status=ok
// SIG undefined FUN_144466e1e(void)

longlong FUN_144466e1e(longlong *param_1)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  longlong local_1a0;
  code *local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180 [2];
  int local_170;
  char local_169;
  undefined8 *local_168;
  int local_160;
  code *local_158;
  int local_150;
  undefined1 local_148 [64];
  longlong local_108;
  undefined4 local_100;
  char local_f8;
  longlong local_f0 [3];
  longlong local_d8;
  longlong *local_c8;
  longlong local_b8 [4];
  char local_94;
  code *local_88;
  int local_80;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_14001a7b2();
  FUN_1490de260(param_1,&local_188);
  plVar3 = (longlong *)(**(code **)(DAT_14cc012d0 + 0x148))(&DAT_14cc012d0,&local_188);
  if (plVar3 != param_1) {
    lVar4 = FUN_144466e1e(plVar3);
    goto LAB_1444671f3;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc00820);
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    local_1a8 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
    if ((longlong)(int)local_1a8[1] != 0) {
      lVar4 = *local_1a8;
      local_190 = (longlong)(int)local_1a8[1] * 0x50 + lVar4;
      do {
        FUN_1490fc8cc(lVar4,&local_168);
        pcVar7 = local_158;
        if (local_f8 == '\0') {
          iVar6 = -1;
          if ((longlong)local_150 != 0) {
            lVar5 = (longlong)local_150 << 2;
            lVar9 = 0;
            do {
              cVar2 = (**(code **)(DAT_14cc012d0 + 200))
                                (&DAT_14cc012d0,*(undefined4 *)(pcVar7 + lVar9 * 4));
              if (cVar2 != '\0') {
                iVar6 = (int)lVar9;
                break;
              }
              lVar9 = lVar9 + 1;
              lVar5 = lVar5 + -4;
              iVar6 = -1;
            } while (lVar5 != 0);
          }
        }
        else if (local_d8 == 0) {
          FUN_1456acd6c(&local_88,local_f0);
          if ((longlong)local_80 == 0) {
            iVar6 = -1;
          }
          else {
            local_198 = local_88 + (longlong)local_80 * 0x10;
            iVar6 = 0;
            pcVar7 = local_88;
            local_1a0 = lVar4;
            do {
              iVar1 = *(int *)(pcVar7 + 8);
              if ((longlong)iVar1 != 0) {
                lVar4 = *(longlong *)pcVar7;
                lVar5 = 0;
                iVar8 = 0;
                do {
                  cVar2 = (**(code **)(DAT_14cc012d0 + 200))
                                    (&DAT_14cc012d0,*(undefined4 *)(lVar4 + lVar5));
                  if (cVar2 != '\0') {
                    if (iVar8 != 1) {
                      iVar6 = iVar6 - iVar8;
                      lVar4 = local_1a0;
                      goto LAB_14446718b;
                    }
                    break;
                  }
                  iVar8 = iVar8 + -1;
                  lVar5 = lVar5 + 4;
                } while ((longlong)iVar1 * 4 != lVar5);
              }
              iVar6 = iVar6 + *(int *)(pcVar7 + 8);
              pcVar7 = pcVar7 + 0x10;
            } while (pcVar7 != local_198);
            iVar6 = -1;
            lVar4 = local_1a0;
          }
LAB_14446718b:
          if (local_88 != (code *)0x0) {
            FUN_1400020a8(local_88);
          }
        }
        else {
          local_169 = '\0';
          local_170 = 0;
          FUN_1456acd6c(local_180,local_f0);
          local_88 = (code *)0x0;
          local_78 = (longlong *)0x0;
          local_78 = (longlong *)FUN_14001cc68(0x28,8);
          *local_78 = (longlong)&PTR_FUN_14bad5640;
          local_78[1] = (longlong)&local_168;
          local_78[2] = (longlong)&local_170;
          local_78[3] = (longlong)&local_169;
          local_78[4] = (longlong)&DAT_14cc012d0;
          if (local_78 + 1 != (longlong *)0x0) {
            local_88 = FUN_14446cc50;
          }
          FUN_144478dec(local_180,&local_88);
          if (local_88 != (code *)0x0) {
            plVar3 = local_78;
            if (local_78 == (longlong *)0x0) {
              plVar3 = local_68;
            }
            (**(code **)(*plVar3 + 0x10))();
          }
          if (local_180[0] != 0) {
            FUN_1400020a8();
          }
          iVar6 = -1;
          if (local_169 != '\0') {
            iVar6 = local_170;
          }
        }
        if (local_94 == '\x01') {
          local_94 = '\0';
        }
        if (local_d8 != 0) {
          plVar3 = local_c8;
          if (local_c8 == (longlong *)0x0) {
            plVar3 = local_b8;
          }
          (**(code **)(*plVar3 + 0x10))();
        }
        if (local_f0[0] != 0) {
          FUN_1400020a8();
        }
        local_100 = 0;
        if (local_108 != 0) {
          FUN_1400020a8();
        }
        FUN_14083ed90(local_148);
        if (local_158 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (iVar6 != -1) {
          lVar4 = 0;
          goto LAB_1444671e6;
        }
        lVar4 = lVar4 + 0x50;
      } while (lVar4 != local_190);
    }
    local_168 = (undefined8 *)0x0;
    local_160 = 0;
    local_88 = (code *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,2,0x10);
    local_80 = 2;
    *(undefined ***)local_88 = &PTR_LAB_14bad56d0;
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
    *(longlong *)(local_88 + 0x10) = lVar5;
    *(undefined ***)local_88 = &PTR_FUN_14bad5660;
    *(longlong *)(local_88 + 0x18) = local_188;
    local_158 = local_88;
    local_150 = 2;
    FUN_1490de260(param_1,&local_88);
    lVar4 = (**(code **)(DAT_14cc012d0 + 0x140))(&DAT_14cc012d0,&local_88,local_1a8,&local_168);
    param_1[2] = lVar4;
    if (local_150 == 0) {
LAB_14446731d:
      if (local_158 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_158 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_158)(local_158,0);
      FUN_1446efa72(&local_158,0,0,0x10);
      local_150 = 0;
      goto LAB_14446731d;
    }
    if (local_160 != 0) {
      if (local_168 == (undefined8 *)0x0) goto LAB_1444671e6;
      (**(code **)*local_168)(local_168,0);
      FUN_1446efa72(&local_168,0,0,0x10);
      local_160 = 0;
    }
    if (local_168 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1444671e6:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc00820);
LAB_1444671f3:
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 144467395 FUN_144467395 body=55 status=ok
// SIG undefined FUN_144467395(void)

void FUN_144467395(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc008b0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc008b0 = FUN_14171c317(FUN_1466838f0,uVar1,L"ERigVMDrawSettings");
  }
  return;
}



// FUNCTION 1444673cc FUN_1444673cc body=69 status=ok
// SIG undefined FUN_1444673cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444673cc(void)

{
  _DAT_14cc008f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014446740e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc008f8,1);
  return;
}



// FUNCTION 144467412 FUN_144467412 body=64 status=ok
// SIG undefined FUN_144467412(void)

void FUN_144467412(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1490f2448((longlong *)(param_1 + 8),iVar1);
  }
  FUN_1490eb446((longlong)iVar1 * 0xd0 + *(longlong *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 144467452 FUN_144467452 body=3 status=ok
// SIG undefined FUN_144467452(void)

undefined1 FUN_144467452(void)

{
  return 1;
}



// FUNCTION 144467456 FUN_144467456 body=245 status=ok
// SIG undefined FUN_144467456(void)

void FUN_144467456(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0;
  undefined4 *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined8 local_b8 [12];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar6 = local_b8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = (undefined4 *)0x0;
  local_d8 = *param_5;
  uStack_d4 = param_5[1];
  uStack_d0 = param_5[2];
  uStack_cc = param_5[3];
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_e0 = 1;
  local_c8 = param_4;
  FUN_1403e3958(&local_e8,0);
  *(undefined8 *)(local_e8 + 4) = *(undefined8 *)(param_3 + 4);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *local_e8 = *param_3;
  local_e8[1] = uVar2;
  local_e8[2] = uVar3;
  local_e8[3] = uVar4;
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1490f2448((longlong *)(param_1 + 8),iVar1);
  }
  FUN_1490eb446((longlong)iVar1 * 0xd0 + *(longlong *)(param_1 + 8),&local_f8);
  FUN_1490de8da(&local_f8);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14446754c FUN_14446754c body=253 status=ok
// SIG undefined FUN_14446754c(void)

void FUN_14446754c(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0;
  void *local_e8;
  ulonglong uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined8 local_b8 [12];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar4 = local_b8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = (void *)0x0;
  local_d8 = *param_5;
  uStack_d4 = param_5[1];
  uStack_d0 = param_5[2];
  uStack_cc = param_5[3];
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uVar1 = *(uint *)(param_3 + 1);
  _Src = (void *)*param_3;
  uStack_e0 = (ulonglong)uVar1;
  local_c8 = param_4;
  if ((longlong)(int)uVar1 != 0) {
    FUN_1403e3958(&local_e8,0);
    memcpy(local_e8,_Src,(longlong)(int)uVar1 * 0x18);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_1490f2448((longlong *)(param_1 + 8),iVar2);
  }
  FUN_1490eb446((longlong)iVar2 * 0xd0 + *(longlong *)(param_1 + 8),&local_f8);
  FUN_1490de8da(&local_f8);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14446764a FUN_14446764a body=312 status=ok
// SIG undefined FUN_14446764a(void)

void FUN_14446764a(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_100;
  undefined4 *local_f8;
  uint uStack_f0;
  uint uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined8 local_c8 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  puVar8 = local_c8;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *param_2;
    param_2 = param_2 + 1;
    puVar8 = puVar8 + 1;
  }
  local_108 = 0;
  local_100 = 1;
  local_f8 = (undefined4 *)0x0;
  local_e8 = *param_5;
  uStack_e4 = param_5[1];
  uStack_e0 = param_5[2];
  uStack_dc = param_5[3];
  local_d8 = param_6;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_f0 = 1;
  uStack_ec = 0;
  FUN_1403e3958(&local_f8,0);
  uVar6 = uStack_f0;
  *(undefined8 *)(local_f8 + 4) = *(undefined8 *)(param_3 + 4);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_f8 = *param_3;
  local_f8[1] = uVar3;
  local_f8[2] = uVar4;
  local_f8[3] = uVar5;
  lVar7 = (longlong)(int)uStack_f0;
  uStack_f0 = uStack_f0 + 1;
  if (uStack_ec < uStack_f0) {
    FUN_1403e3958(&local_f8,uVar6);
  }
  *(undefined8 *)(local_f8 + lVar7 * 6 + 4) = *(undefined8 *)(param_4 + 4);
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  puVar1 = local_f8 + lVar7 * 6;
  *puVar1 = *param_4;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_1490f2448((longlong *)(param_1 + 8),iVar2);
  }
  FUN_1490eb446((longlong)iVar2 * 0xd0 + *(longlong *)(param_1 + 8),&local_108);
  FUN_1490de8da(&local_108);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144467784 FUN_144467784 body=254 status=ok
// SIG undefined FUN_144467784(void)

void FUN_144467784(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0;
  void *local_e8;
  ulonglong uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined8 local_b8 [12];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar4 = local_b8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  local_f8 = 0;
  local_f0 = 1;
  local_e8 = (void *)0x0;
  local_d8 = *param_4;
  uStack_d4 = param_4[1];
  uStack_d0 = param_4[2];
  uStack_cc = param_4[3];
  local_c8 = param_5;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uVar1 = *(uint *)(param_3 + 1);
  _Src = (void *)*param_3;
  uStack_e0 = (ulonglong)uVar1;
  if ((longlong)(int)uVar1 != 0) {
    FUN_1403e3958(&local_e8,0);
    memcpy(local_e8,_Src,(longlong)(int)uVar1 * 0x18);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_1490f2448((longlong *)(param_1 + 8),iVar2);
  }
  FUN_1490eb446((longlong)iVar2 * 0xd0 + *(longlong *)(param_1 + 8),&local_f8);
  FUN_1490de8da(&local_f8);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144467884 FUN_144467884 body=254 status=ok
// SIG undefined FUN_144467884(void)

void FUN_144467884(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0;
  void *local_e8;
  ulonglong uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined8 local_b8 [12];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar4 = local_b8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  local_f8 = 0;
  local_f0 = 2;
  local_e8 = (void *)0x0;
  local_d8 = *param_4;
  uStack_d4 = param_4[1];
  uStack_d0 = param_4[2];
  uStack_cc = param_4[3];
  local_c8 = param_5;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uVar1 = *(uint *)(param_3 + 1);
  _Src = (void *)*param_3;
  uStack_e0 = (ulonglong)uVar1;
  if ((longlong)(int)uVar1 != 0) {
    FUN_1403e3958(&local_e8,0);
    memcpy(local_e8,_Src,(longlong)(int)uVar1 * 0x18);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_1490f2448((longlong *)(param_1 + 8),iVar2);
  }
  FUN_1490eb446((longlong)iVar2 * 0xd0 + *(longlong *)(param_1 + 8),&local_f8);
  FUN_1490de8da(&local_f8);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144467984 FUN_144467984 body=3750 status=ok
// SIG undefined FUN_144467984(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144467984(longlong param_1,double *param_2,double *param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  double dVar14;
  double dVar15;
  double dVar17;
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  double dVar24;
  undefined1 auVar23 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_318 [32];
  double local_2f8;
  undefined8 *local_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double local_2a0;
  undefined8 *local_298;
  uint uStack_290;
  uint uStack_28c;
  double local_288;
  double dStack_280;
  double local_278;
  double local_268;
  double dStack_260;
  undefined1 local_258 [16];
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  auVar19 = *(undefined1 (*) [16])(param_2 + 8);
  dVar15 = auVar19._0_8_;
  dVar2 = auVar19._8_8_;
  auVar20 = *(undefined1 (*) [16])(param_2 + 10);
  dVar21 = auVar20._0_8_;
  dVar17 = auVar20._8_8_;
  auVar22 = *(undefined1 (*) [16])(param_3 + 8);
  dVar11 = auVar22._0_8_;
  dVar13 = auVar22._8_8_;
  auVar12 = *(undefined1 (*) [16])(param_3 + 10);
  dVar14 = auVar12._0_8_;
  auVar19 = minpd(auVar22,auVar19);
  auVar22 = minpd(auVar12,auVar20);
  auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
  auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
  iVar7 = movmskpd((int)local_d0,auVar20);
  auVar19._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
  auVar19._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
  uVar8 = movmskpd((int)param_1,auVar19);
  if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
    dVar30 = *param_3;
    dVar28 = param_3[1];
    dVar29 = param_3[2];
    dVar31 = param_3[3];
    dVar3 = *param_2;
    dVar4 = param_2[1];
    dVar5 = param_2[2];
    dVar6 = param_2[3];
    dVar27 = param_2[3];
    dVar18 = param_2[3];
    dVar1 = param_2[1];
    dVar24 = param_2[1];
    dVar25 = param_2[2];
    dVar26 = param_2[2];
    local_268 = dVar28 * dVar25 * -1.0 + dVar29 * dVar1 + dVar31 * *param_2 * 1.0 + dVar30 * dVar27;
    dStack_260 = dVar30 * dVar26 * 1.0 +
                 dVar31 * dVar24 + dVar29 * *param_2 * -1.0 + dVar28 * dVar18;
    local_258._0_8_ =
         dVar31 * dVar25 * 1.0 + ((*param_2 * dVar28 * 1.0 + dVar29 * dVar27) - dVar30 * dVar1);
    local_258._8_8_ =
         dVar29 * dVar26 * -1.0 + ((*param_2 * dVar30 * -1.0 + dVar31 * dVar18) - dVar28 * dVar24);
    dVar1 = param_3[4] * dVar15;
    dVar24 = param_3[5] * dVar2;
    dVar28 = param_3[6] * dVar21;
    dVar29 = param_3[7] * dVar17;
    dVar25 = dVar24 * dVar3 - dVar4 * dVar1;
    dVar26 = dVar28 * dVar4 - dVar5 * dVar24;
    dVar30 = dVar1 * dVar5 - dVar3 * dVar28;
    dVar31 = dVar29 * dVar6 - dVar6 * dVar29;
    dVar26 = dVar26 + dVar26;
    dVar30 = dVar30 + dVar30;
    dVar25 = dVar25 + dVar25;
    dVar31 = dVar31 + dVar31;
    local_248 = (dVar25 * dVar4 - dVar5 * dVar30) + dVar27 * dVar26 + dVar1 + param_2[4];
    dStack_240 = (dVar26 * dVar5 - dVar25 * dVar3) + dVar18 * dVar30 + dVar24 + param_2[5];
    local_238 = (dVar30 * dVar3 - dVar4 * dVar26) + dVar27 * dVar25 + dVar28 + param_2[6];
    dStack_230 = (dVar31 * dVar6 - dVar31 * dVar6) + dVar18 * dVar31 + dVar29 + param_2[7];
    dVar11 = dVar11 * dVar15;
    dVar13 = dVar13 * dVar2;
    dVar14 = dVar14 * dVar21;
    dVar17 = auVar12._8_8_ * dVar17;
  }
  else {
    dVar1 = *param_2;
    dVar24 = param_2[1];
    dVar25 = param_2[2];
    dVar26 = dVar24 + dVar24;
    dVar30 = dVar25 + dVar25;
    dVar27 = dVar1 * (dVar1 + dVar1);
    local_108 = (1.0 - (dVar27 + dVar24 * dVar26)) * dVar21;
    dVar18 = param_2[3];
    dVar28 = dVar30 * dVar18;
    dVar29 = (dVar1 + dVar1) * param_2[3];
    dVar18 = dVar26 * dVar18;
    local_118 = (dVar18 + *param_2 * dVar30) * dVar21;
    dVar17 = dVar17 * auVar12._8_8_;
    local_2d8._8_4_ = SUB84(dVar17,0);
    local_2d8._0_8_ = dVar21 * dVar14;
    local_2d8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    dStack_130 = (1.0 - (dVar25 * dVar30 + dVar27)) * dVar2;
    dVar17 = (dVar26 * dVar1 + dVar28) * dVar15;
    local_128 = (dVar30 * dVar24 + dVar29) * dVar2;
    local_138 = (dVar26 * dVar1 - dVar28) * dVar2;
    dStack_110 = (dVar30 * dVar24 - dVar29) * dVar21;
    local_148 = (*param_2 * dVar30 - dVar18) * dVar15;
    local_158._8_4_ = SUB84(dVar17,0);
    local_158._0_8_ = (1.0 - (dVar25 * dVar30 + dVar24 * dVar26)) * dVar15;
    local_158._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    uStack_140 = 0;
    uStack_120 = 0;
    uStack_100 = 0;
    local_f8 = param_2[4];
    dStack_f0 = param_2[5];
    local_e8 = param_2[6];
    uStack_e0 = 0x3ff0000000000000;
    dVar18 = *param_3;
    dVar27 = param_3[1];
    dVar1 = param_3[2];
    dVar24 = dVar27 + dVar27;
    dVar25 = dVar1 + dVar1;
    dVar17 = dVar18 * (dVar18 + dVar18);
    local_188 = (1.0 - (dVar17 + dVar27 * dVar24)) * dVar14;
    dVar21 = param_3[3];
    dVar26 = dVar25 * dVar21;
    dVar30 = (dVar18 + dVar18) * param_3[3];
    dVar21 = dVar24 * dVar21;
    local_198 = (dVar21 + *param_3 * dVar25) * dVar14;
    local_1b8 = (dVar24 * dVar18 - dVar26) * dVar13;
    dStack_190 = (dVar25 * dVar27 - dVar30) * dVar14;
    local_2e8._8_4_ = SUB84(dVar2 * dVar13,0);
    local_2e8._0_8_ = dVar15 * dVar11;
    local_2e8._12_4_ = (int)((ulonglong)(dVar2 * dVar13) >> 0x20);
    local_1d8 = (1.0 - (dVar1 * dVar25 + dVar27 * dVar24)) * dVar11;
    dStack_1b0 = (1.0 - (dVar1 * dVar25 + dVar17)) * dVar13;
    dStack_1d0 = (dVar24 * dVar18 + dVar26) * dVar11;
    local_1a8 = (dVar25 * dVar27 + dVar30) * dVar13;
    local_1c8 = (*param_3 * dVar25 - dVar21) * dVar11;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_3[4];
    dStack_170 = param_3[5];
    local_168 = *(undefined4 *)(param_3 + 6);
    uStack_164 = *(undefined4 *)((longlong)param_3 + 0x34);
    uStack_160 = 0;
    uStack_15c = 0x3ff00000;
    FUN_1447fea8d(&local_2a8,&local_1d8,local_158);
    local_2f0 = local_298;
    dVar21 = (double)local_298 * (double)local_298 + local_2a8 * local_2a8 + local_2a0 * local_2a0;
    local_2f8 = local_278;
    dVar11 = local_278 * local_278 + local_288 * local_288 + dStack_280 * dStack_280;
    dVar15 = (double)local_258._0_8_ * (double)local_258._0_8_ +
             local_268 * local_268 + dStack_260 * dStack_260;
    uVar10 = -(ulonglong)(0.0 <= dVar21 + -9.99999993922529e-09);
    dVar21 = (double)(~uVar10 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar21)) & uVar10);
    uVar10 = -(ulonglong)(0.0 <= dVar11 + -9.99999993922529e-09);
    dVar2 = (double)(~uVar10 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar11)) & uVar10);
    uVar10 = -(ulonglong)(0.0 <= dVar15 + -9.99999993922529e-09);
    dVar15 = (double)(~uVar10 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar15)) & uVar10);
    dVar14 = (double)local_2d8._0_8_;
    dVar17 = (double)local_2d8._8_8_;
    dVar11 = (double)local_2e8._0_8_;
    dVar13 = (double)local_2e8._8_8_;
    auVar22._8_8_ = -(ulonglong)(0.0 <= (double)local_2e8._8_8_);
    auVar22._0_8_ = -(ulonglong)(0.0 <= (double)local_2e8._0_8_);
    auVar19 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar22);
    dVar18 = (double)(~-(ulonglong)(0.0 <= (double)local_2d8._0_8_) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= (double)local_2d8._0_8_) & 0x3ff0000000000000);
    dVar27 = auVar19._0_8_;
    local_2a8 = local_2a8 * dVar21 * dVar27;
    local_2a0 = local_2a0 * dVar21 * dVar27;
    local_298 = (undefined8 *)(dVar21 * (double)local_298 * dVar27);
    dVar21 = auVar19._8_8_;
    local_278 = dVar2 * local_278 * dVar21;
    dStack_280 = dStack_280 * dVar2 * dVar21;
    local_288 = dVar21 * local_288 * dVar2;
    dStack_260 = dStack_260 * dVar15 * dVar18;
    local_268 = dVar18 * local_268 * dVar15;
    local_258._0_8_ = dVar15 * (double)local_258._0_8_ * dVar18;
    FUN_14481fd10(&local_2c8,&local_2a8);
    dVar15 = local_2b8 * local_2b8 + local_2c8 * local_2c8;
    dVar21 = dStack_2b0 * dStack_2b0 + dStack_2c0 * dStack_2c0;
    auVar16._0_8_ = dVar15 + dVar21;
    auVar16._8_8_ = dVar15 + dVar21;
    auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
    auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
    auVar19 = sqrtpd(auVar16,auVar16);
    auVar19 = divpd(_DAT_149934d80,auVar19);
    auVar23._0_8_ = auVar19._0_8_ * local_2b8;
    auVar23._8_8_ = auVar19._8_8_ * dStack_2b0;
    local_268 = (double)((ulonglong)(local_2c8 * auVar19._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_));
    dStack_260 = (double)((ulonglong)(dStack_2c0 * auVar19._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_));
    local_258 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar23,auVar12);
    dStack_230 = 0.0;
  }
  local_2a8 = 0.0;
  local_2a0 = (double)CONCAT71(local_2a0._1_7_,1);
  local_298 = (undefined8 *)0x0;
  local_288 = (double)*param_4;
  dStack_280 = (double)param_4[1];
  local_278 = (double)CONCAT44(local_278._4_4_,param_5);
  local_228._8_4_ = SUB84(dVar13,0);
  local_228._0_8_ = dVar11;
  local_228._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  local_218._8_4_ = SUB84(dVar17,0);
  local_218._0_8_ = dVar14;
  local_218._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_290 = 1;
  uStack_28c = 0;
  FUN_1403e3958(&local_298,0);
  uVar8 = uStack_290;
  *local_298 = 0x3fe0000000000000;
  local_298[1] = 0x3fe0000000000000;
  local_298[2] = 0x3fe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 1] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 2] = 0x3fe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 1] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 2] = 0x3fe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 1] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 2] = 0x3fe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 1] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 2] = 0x3fe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 1] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 2] = 0x3fe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 1] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 2] = 0x3fe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 1] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 2] = 0x3fe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 1] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 2] = 0xbfe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 1] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 2] = 0xbfe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 1] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 2] = 0xbfe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 1] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 2] = 0xbfe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 1] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 2] = 0xbfe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 1] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 2] = 0xbfe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 1] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 2] = 0xbfe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 1] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 2] = 0xbfe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 1] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 2] = 0x3fe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 1] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 2] = 0xbfe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 1] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 2] = 0x3fe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 1] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 2] = 0xbfe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 1] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 2] = 0x3fe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 1] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 2] = 0xbfe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = uStack_290;
  local_298[lVar9 * 3] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 1] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 2] = 0x3fe0000000000000;
  lVar9 = (longlong)(int)uStack_290;
  uStack_290 = uStack_290 + 1;
  if (uStack_28c < uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  local_298[lVar9 * 3] = 0xbfe0000000000000;
  local_298[lVar9 * 3 + 1] = 0x3fe0000000000000;
  local_298[lVar9 * 3 + 2] = 0xbfe0000000000000;
  iVar7 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar7 + 1U) {
    FUN_1490f2448((longlong *)(param_1 + 8),iVar7);
  }
  FUN_1490eb446((longlong)iVar7 * 0xd0 + *(longlong *)(param_1 + 8),&local_2a8);
  FUN_1490de8da(&local_2a8);
  if ((local_d0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14446882c FUN_14446882c body=1122 status=ok
// SIG undefined FUN_14446882c(void)

void FUN_14446882c(undefined8 param_1,undefined8 param_2,double *param_3,float param_4,
                  undefined4 param_5)

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
  undefined1 auStack_128 [32];
  undefined *local_108;
  undefined4 local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_d8 [16];
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  dVar11 = (double)param_4;
  dVar6 = param_3[8] * dVar11;
  dVar7 = param_3[9] * 0.0;
  dVar5 = param_3[10] * 0.0;
  dVar1 = param_3[3];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  local_f8 = param_3[4];
  dStack_f0 = param_3[5];
  dVar8 = dVar7 * dVar2 - dVar6 * dVar3;
  dVar9 = dVar5 * dVar3 - dVar7 * dVar4;
  dVar10 = dVar6 * dVar4 - dVar2 * dVar5;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  dVar7 = (dVar4 * dVar9 - dVar2 * dVar8) + param_3[3] * dVar10 + dVar7 + dStack_f0;
  local_e8 = param_3[6];
  local_d8._8_4_ = SUB84(dVar7,0);
  local_d8._0_8_ = (dVar8 * dVar3 - dVar10 * dVar4) + dVar1 * dVar9 + dVar6 + local_f8;
  local_d8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_c8 = dVar8 * dVar1 + dVar5 + (dVar10 * dVar2 - dVar9 * dVar3) + local_e8;
  local_100 = param_5;
  local_108 = &DAT_149e1dd34;
  FUN_14446764a(local_f8,local_e8,&local_f8,local_d8);
  dVar6 = param_3[8] * 0.0;
  dVar7 = dVar11 * param_3[9];
  dVar5 = param_3[10] * 0.0;
  dVar1 = param_3[3];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  local_f8 = param_3[4];
  dStack_f0 = param_3[5];
  dVar8 = dVar7 * dVar2 - dVar6 * dVar3;
  dVar9 = dVar5 * dVar3 - dVar7 * dVar4;
  dVar10 = dVar6 * dVar4 - dVar2 * dVar5;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  dVar7 = (dVar4 * dVar9 - dVar2 * dVar8) + param_3[3] * dVar10 + dVar7 + dStack_f0;
  local_e8 = param_3[6];
  local_d8._8_4_ = SUB84(dVar7,0);
  local_d8._0_8_ = (dVar8 * dVar3 - dVar10 * dVar4) + dVar1 * dVar9 + dVar6 + local_f8;
  local_d8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_c8 = dVar8 * dVar1 + dVar5 + (dVar10 * dVar2 - dVar9 * dVar3) + local_e8;
  local_100 = param_5;
  local_108 = &DAT_149e1dd14;
  FUN_14446764a(param_1,param_2,&local_f8,local_d8);
  dVar8 = param_3[8] * 0.0;
  dVar10 = param_3[9] * 0.0;
  dVar11 = dVar11 * param_3[10];
  dVar1 = param_3[3];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar4 = param_3[2];
  local_f8 = param_3[4];
  dStack_f0 = param_3[5];
  dVar5 = dVar10 * dVar2 - dVar8 * dVar3;
  dVar6 = dVar11 * dVar3 - dVar10 * dVar4;
  dVar7 = dVar8 * dVar4 - dVar2 * dVar11;
  dVar6 = dVar6 + dVar6;
  dVar7 = dVar7 + dVar7;
  dVar5 = dVar5 + dVar5;
  dVar10 = (dVar4 * dVar6 - dVar2 * dVar5) + param_3[3] * dVar7 + dVar10 + dStack_f0;
  local_e8 = param_3[6];
  local_d8._8_4_ = SUB84(dVar10,0);
  local_d8._0_8_ = (dVar5 * dVar3 - dVar7 * dVar4) + dVar1 * dVar6 + dVar8 + local_f8;
  local_d8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  local_c8 = dVar5 * dVar1 + dVar11 + (dVar7 * dVar2 - dVar6 * dVar3) + local_e8;
  local_100 = param_5;
  local_108 = &DAT_149e1dd04;
  FUN_14446764a(param_1,param_2,&local_f8,local_d8);
  if ((local_c0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144468c90 FUN_144468c90 body=1333 status=ok
// SIG undefined FUN_144468c90(void)

void FUN_144468c90(longlong param_1,undefined8 *param_2,double *param_3,undefined4 *param_4,
                  float param_5,undefined4 param_6)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined1 local_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined8 local_128 [12];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_188;
  puVar13 = local_128;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *param_2;
    param_2 = param_2 + 1;
    puVar13 = puVar13 + 1;
  }
  local_168 = 0;
  local_160 = 1;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = *param_4;
  uStack_144 = param_4[1];
  uStack_140 = param_4[2];
  uStack_13c = param_4[3];
  local_138 = param_6;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  FUN_1447a8aa0(&local_158,6);
  dVar16 = param_3[4];
  dVar3 = param_3[5];
  dVar2 = param_3[6];
  lVar11 = (longlong)(int)(uint)uStack_150;
  uVar10 = (uint)uStack_150 + 1;
  if (uStack_150._4_4_ < uVar10) {
    uVar12 = uStack_150 & 0xffffffff;
    uStack_150._0_4_ = uVar10;
    FUN_1403e3958(&local_158,uVar12);
    uVar10 = (uint)uStack_150;
  }
  uStack_150._0_4_ = uVar10;
  uVar10 = (uint)uStack_150;
  pdVar1 = (double *)(local_158 + lVar11 * 0x18);
  *pdVar1 = dVar16;
  pdVar1[1] = dVar3;
  *(double *)(local_158 + 0x10 + lVar11 * 0x18) = dVar2;
  dVar22 = (double)param_5;
  dVar14 = param_3[8] * dVar22;
  dVar16 = param_3[9] * 0.0;
  dVar18 = param_3[10] * 0.0;
  dVar8 = *param_3;
  dVar9 = param_3[1];
  dVar15 = param_3[2];
  dVar2 = param_3[3];
  dVar17 = dVar16 * dVar8 - dVar14 * dVar9;
  dVar19 = dVar18 * dVar9 - dVar16 * dVar15;
  dVar20 = dVar14 * dVar15 - dVar8 * dVar18;
  dVar19 = dVar19 + dVar19;
  dVar20 = dVar20 + dVar20;
  dVar17 = dVar17 + dVar17;
  dVar3 = param_3[4];
  dVar21 = (dVar15 * dVar19 - dVar8 * dVar17) + param_3[3] * dVar20 + dVar16 + param_3[5];
  dVar16 = param_3[6];
  lVar11 = (longlong)(int)(uint)uStack_150;
  uStack_150._0_4_ = (uint)uStack_150 + 1;
  if (uStack_150._4_4_ < (uint)uStack_150) {
    FUN_1403e3958(&local_158,uVar10);
  }
  uVar10 = (uint)uStack_150;
  auVar7._8_4_ = SUB84(dVar21,0);
  auVar7._0_8_ = (dVar17 * dVar9 - dVar20 * dVar15) + dVar2 * dVar19 + dVar14 + dVar3;
  auVar7._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(local_158 + lVar11 * 0x18) = auVar7;
  *(double *)(local_158 + 0x10 + lVar11 * 0x18) =
       dVar17 * dVar2 + dVar18 + (dVar20 * dVar8 - dVar19 * dVar9) + dVar16;
  dVar16 = param_3[4];
  dVar3 = param_3[5];
  dVar2 = param_3[6];
  lVar11 = (longlong)(int)(uint)uStack_150;
  uStack_150._0_4_ = (uint)uStack_150 + 1;
  if (uStack_150._4_4_ < (uint)uStack_150) {
    FUN_1403e3958(&local_158,uVar10);
  }
  uVar10 = (uint)uStack_150;
  pdVar1 = (double *)(local_158 + lVar11 * 0x18);
  *pdVar1 = dVar16;
  pdVar1[1] = dVar3;
  *(double *)(local_158 + 0x10 + lVar11 * 0x18) = dVar2;
  dVar18 = param_3[8] * 0.0;
  dVar16 = dVar22 * param_3[9];
  dVar14 = param_3[10] * 0.0;
  dVar8 = *param_3;
  dVar9 = param_3[1];
  dVar15 = param_3[2];
  dVar2 = param_3[3];
  dVar17 = dVar16 * dVar8 - dVar18 * dVar9;
  dVar19 = dVar14 * dVar9 - dVar16 * dVar15;
  dVar21 = dVar18 * dVar15 - dVar8 * dVar14;
  dVar19 = dVar19 + dVar19;
  dVar21 = dVar21 + dVar21;
  dVar17 = dVar17 + dVar17;
  dVar3 = param_3[4];
  dVar20 = (dVar15 * dVar19 - dVar8 * dVar17) + param_3[3] * dVar21 + dVar16 + param_3[5];
  dVar16 = param_3[6];
  lVar11 = (longlong)(int)(uint)uStack_150;
  uStack_150._0_4_ = (uint)uStack_150 + 1;
  if (uStack_150._4_4_ < (uint)uStack_150) {
    FUN_1403e3958(&local_158,uVar10);
  }
  uVar10 = (uint)uStack_150;
  auVar5._8_4_ = SUB84(dVar20,0);
  auVar5._0_8_ = (dVar17 * dVar9 - dVar21 * dVar15) + dVar2 * dVar19 + dVar18 + dVar3;
  auVar5._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])(local_158 + lVar11 * 0x18) = auVar5;
  *(double *)(local_158 + 0x10 + lVar11 * 0x18) =
       dVar17 * dVar2 + dVar14 + (dVar21 * dVar8 - dVar19 * dVar9) + dVar16;
  dVar16 = param_3[4];
  dVar3 = param_3[5];
  dVar2 = param_3[6];
  lVar11 = (longlong)(int)(uint)uStack_150;
  uStack_150._0_4_ = (uint)uStack_150 + 1;
  if (uStack_150._4_4_ < (uint)uStack_150) {
    FUN_1403e3958(&local_158,uVar10);
  }
  uVar10 = (uint)uStack_150;
  pdVar1 = (double *)(local_158 + lVar11 * 0x18);
  *pdVar1 = dVar16;
  pdVar1[1] = dVar3;
  *(double *)(local_158 + 0x10 + lVar11 * 0x18) = dVar2;
  dVar15 = param_3[8] * 0.0;
  dVar16 = param_3[9] * 0.0;
  dVar22 = dVar22 * param_3[10];
  dVar21 = *param_3;
  dVar8 = param_3[1];
  dVar9 = param_3[2];
  dVar2 = param_3[3];
  dVar18 = dVar16 * dVar21 - dVar15 * dVar8;
  dVar14 = dVar22 * dVar8 - dVar16 * dVar9;
  dVar17 = dVar15 * dVar9 - dVar21 * dVar22;
  dVar14 = dVar14 + dVar14;
  dVar17 = dVar17 + dVar17;
  dVar18 = dVar18 + dVar18;
  dVar3 = param_3[4];
  dVar20 = (dVar9 * dVar14 - dVar21 * dVar18) + param_3[3] * dVar17 + dVar16 + param_3[5];
  dVar16 = param_3[6];
  lVar11 = (longlong)(int)(uint)uStack_150;
  uStack_150._0_4_ = (uint)uStack_150 + 1;
  if (uStack_150._4_4_ < (uint)uStack_150) {
    FUN_1403e3958(&local_158,uVar10);
  }
  auVar6._8_4_ = SUB84(dVar20,0);
  auVar6._0_8_ = (dVar18 * dVar8 - dVar17 * dVar9) + dVar2 * dVar14 + dVar15 + dVar3;
  auVar6._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])(local_158 + lVar11 * 0x18) = auVar6;
  *(double *)(local_158 + 0x10 + lVar11 * 0x18) =
       dVar18 * dVar2 + dVar22 + (dVar17 * dVar21 - dVar14 * dVar8) + dVar16;
  iVar4 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar4 + 1U) {
    FUN_1490f2448((longlong *)(param_1 + 8),iVar4);
  }
  FUN_1490eb446((longlong)iVar4 * 0xd0 + *(longlong *)(param_1 + 8),&local_168);
  FUN_1490de8da(&local_168);
  if ((local_90 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444691c6 FUN_1444691c6 body=2648 status=ok
// SIG undefined FUN_1444691c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444691c6(longlong param_1,double *param_2,double *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar15;
  double dVar17;
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  double dVar24;
  undefined1 auVar23 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_338 [32];
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  double local_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined8 local_2d8;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  undefined8 uStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double local_268;
  double dStack_260;
  undefined1 local_258 [16];
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  auVar19 = *(undefined1 (*) [16])(param_2 + 8);
  dVar31 = auVar19._0_8_;
  dVar2 = auVar19._8_8_;
  auVar20 = *(undefined1 (*) [16])(param_2 + 10);
  dVar30 = auVar20._0_8_;
  dVar17 = auVar20._8_8_;
  auVar22 = *(undefined1 (*) [16])(param_3 + 8);
  dVar11 = auVar22._0_8_;
  dVar14 = auVar22._8_8_;
  auVar12 = *(undefined1 (*) [16])(param_3 + 10);
  dVar15 = auVar12._0_8_;
  auVar19 = minpd(auVar22,auVar19);
  auVar22 = minpd(auVar12,auVar20);
  auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
  auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
  iVar7 = movmskpd((int)local_d0,auVar20);
  auVar19._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
  auVar19._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
  uVar8 = movmskpd((int)param_1,auVar19);
  local_2d8 = param_4;
  if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
    dVar25 = *param_3;
    dVar27 = param_3[1];
    dVar32 = param_3[2];
    dVar33 = param_3[3];
    dVar3 = *param_2;
    dVar4 = param_2[1];
    dVar5 = param_2[2];
    dVar6 = param_2[3];
    dVar29 = param_2[3];
    dVar18 = param_2[3];
    dVar24 = param_2[1];
    dVar1 = param_2[1];
    dVar26 = param_2[2];
    dVar21 = param_2[2];
    local_268 = dVar27 * dVar26 * -1.0 + dVar32 * dVar24 + dVar33 * *param_2 * 1.0 + dVar25 * dVar29
    ;
    dStack_260 = dVar25 * dVar21 * 1.0 + dVar33 * dVar1 + dVar32 * *param_2 * -1.0 + dVar27 * dVar18
    ;
    local_258._0_8_ =
         dVar33 * dVar26 * 1.0 + ((*param_2 * dVar27 * 1.0 + dVar32 * dVar29) - dVar25 * dVar24);
    local_258._8_8_ =
         dVar32 * dVar21 * -1.0 + ((*param_2 * dVar25 * -1.0 + dVar33 * dVar18) - dVar27 * dVar1);
    dVar1 = param_3[4] * dVar31;
    dVar24 = param_3[5] * dVar2;
    dVar21 = param_3[6] * dVar30;
    dVar26 = param_3[7] * dVar17;
    dVar25 = dVar24 * dVar3 - dVar4 * dVar1;
    dVar27 = dVar21 * dVar4 - dVar5 * dVar24;
    dVar32 = dVar1 * dVar5 - dVar3 * dVar21;
    dVar33 = dVar26 * dVar6 - dVar6 * dVar26;
    dVar27 = dVar27 + dVar27;
    dVar32 = dVar32 + dVar32;
    dVar25 = dVar25 + dVar25;
    dVar33 = dVar33 + dVar33;
    local_248 = (dVar25 * dVar4 - dVar5 * dVar32) + dVar29 * dVar27 + dVar1 + param_2[4];
    dStack_240 = (dVar27 * dVar5 - dVar25 * dVar3) + dVar18 * dVar32 + dVar24 + param_2[5];
    local_238 = (dVar32 * dVar3 - dVar4 * dVar27) + dVar29 * dVar25 + dVar21 + param_2[6];
    dStack_230 = (dVar33 * dVar6 - dVar33 * dVar6) + dVar18 * dVar33 + dVar26 + param_2[7];
    dVar11 = dVar11 * dVar31;
    dVar14 = dVar14 * dVar2;
    dVar15 = dVar15 * dVar30;
    dVar17 = auVar12._8_8_ * dVar17;
  }
  else {
    dVar29 = *param_2;
    dVar1 = param_2[1];
    dVar24 = param_2[2];
    dVar21 = dVar1 + dVar1;
    dVar26 = dVar24 + dVar24;
    dVar32 = dVar29 * (dVar29 + dVar29);
    local_108 = (1.0 - (dVar32 + dVar1 * dVar21)) * dVar30;
    dVar18 = param_2[3];
    dVar25 = dVar26 * dVar18;
    dVar27 = (dVar29 + dVar29) * param_2[3];
    dVar18 = dVar21 * dVar18;
    local_118 = (dVar18 + *param_2 * dVar26) * dVar30;
    dVar17 = dVar17 * auVar12._8_8_;
    local_2e8._8_4_ = SUB84(dVar17,0);
    local_2e8._0_8_ = dVar30 * dVar15;
    local_2e8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    local_158 = (1.0 - (dVar24 * dVar26 + dVar1 * dVar21)) * dVar31;
    dStack_130 = (1.0 - (dVar24 * dVar26 + dVar32)) * dVar2;
    dStack_150 = (dVar21 * dVar29 + dVar25) * dVar31;
    local_128 = (dVar26 * dVar1 + dVar27) * dVar2;
    local_138 = (dVar21 * dVar29 - dVar25) * dVar2;
    dStack_110 = (dVar26 * dVar1 - dVar27) * dVar30;
    local_148 = (*param_2 * dVar26 - dVar18) * dVar31;
    uStack_140 = 0;
    uStack_120 = 0;
    uStack_100 = 0;
    local_f8 = param_2[4];
    dStack_f0 = param_2[5];
    local_e8 = param_2[6];
    uStack_e0 = 0x3ff0000000000000;
    dVar18 = *param_3;
    dVar29 = param_3[1];
    dVar1 = param_3[2];
    dVar24 = dVar29 + dVar29;
    dVar21 = dVar1 + dVar1;
    dVar17 = dVar18 * (dVar18 + dVar18);
    local_188 = (1.0 - (dVar17 + dVar29 * dVar24)) * dVar15;
    dVar30 = param_3[3];
    dVar26 = dVar21 * dVar30;
    dVar25 = (dVar18 + dVar18) * param_3[3];
    dVar30 = dVar24 * dVar30;
    local_198 = (dVar30 + *param_3 * dVar21) * dVar15;
    local_1b8 = (dVar24 * dVar18 - dVar26) * dVar14;
    dStack_190 = (dVar21 * dVar29 - dVar25) * dVar15;
    local_2f8._8_4_ = SUB84(dVar2 * dVar14,0);
    local_2f8._0_8_ = dVar31 * dVar11;
    local_2f8._12_4_ = (int)((ulonglong)(dVar2 * dVar14) >> 0x20);
    local_1d8 = (1.0 - (dVar1 * dVar21 + dVar29 * dVar24)) * dVar11;
    dStack_1b0 = (1.0 - (dVar1 * dVar21 + dVar17)) * dVar14;
    dStack_1d0 = (dVar24 * dVar18 + dVar26) * dVar11;
    local_1a8 = (dVar21 * dVar29 + dVar25) * dVar14;
    local_1c8 = (*param_3 * dVar21 - dVar30) * dVar11;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_3[4];
    dStack_170 = param_3[5];
    local_168 = *(undefined4 *)(param_3 + 6);
    uStack_164 = *(undefined4 *)((longlong)param_3 + 0x34);
    uStack_160 = 0;
    uStack_15c = 0x3ff00000;
    FUN_1447fea8d(&local_2a8,&local_1d8,&local_158);
    local_300 = local_298;
    dVar30 = local_298 * local_298 + local_2a8 * local_2a8 + local_2a0 * local_2a0;
    dVar11 = local_278 * local_278 + local_288 * local_288 + dStack_280 * dStack_280;
    dVar31 = (double)local_258._0_8_ * (double)local_258._0_8_ +
             local_268 * local_268 + dStack_260 * dStack_260;
    uVar10 = -(ulonglong)(0.0 <= dVar30 + -9.99999993922529e-09);
    local_318 = 0;
    uStack_314 = 0;
    uStack_310 = 0;
    uStack_30c = 0;
    dVar30 = (double)(~uVar10 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar30)) & uVar10);
    uVar10 = -(ulonglong)(0.0 <= dVar11 + -9.99999993922529e-09);
    dVar2 = (double)(~uVar10 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar11)) & uVar10);
    uVar10 = -(ulonglong)(0.0 <= dVar31 + -9.99999993922529e-09);
    dVar18 = (double)(~uVar10 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar31)) & uVar10);
    dVar15 = (double)local_2e8._0_8_;
    dVar17 = (double)local_2e8._8_8_;
    dVar11 = (double)local_2f8._0_8_;
    dVar14 = (double)local_2f8._8_8_;
    auVar12._8_8_ = -(ulonglong)(0.0 <= (double)local_2f8._8_8_);
    auVar12._0_8_ = -(ulonglong)(0.0 <= (double)local_2f8._0_8_);
    auVar19 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar12);
    dVar31 = (double)(~-(ulonglong)(0.0 <= (double)local_2e8._0_8_) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= (double)local_2e8._0_8_) & 0x3ff0000000000000);
    dVar29 = auVar19._0_8_;
    local_2a8 = local_2a8 * dVar30 * dVar29;
    local_2a0 = local_2a0 * dVar30 * dVar29;
    local_298 = dVar30 * local_298 * dVar29;
    dVar30 = auVar19._8_8_;
    local_278 = dVar2 * local_278 * dVar30;
    dStack_280 = dStack_280 * dVar2 * dVar30;
    local_288 = dVar30 * local_288 * dVar2;
    dStack_260 = dStack_260 * dVar18 * dVar31;
    local_268 = dVar31 * local_268 * dVar18;
    local_258._0_8_ = dVar18 * (double)local_258._0_8_ * dVar31;
    FUN_14481fd10(&local_2c8,&local_2a8);
    dVar31 = local_2b8 * local_2b8 + local_2c8 * local_2c8;
    dVar30 = dStack_2b0 * dStack_2b0 + dStack_2c0 * dStack_2c0;
    auVar16._0_8_ = dVar31 + dVar30;
    auVar16._8_8_ = dVar31 + dVar30;
    auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
    auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
    auVar19 = sqrtpd(auVar16,auVar16);
    auVar19 = divpd(_DAT_149934d80,auVar19);
    auVar23._0_8_ = auVar19._0_8_ * local_2b8;
    auVar23._8_8_ = auVar19._8_8_ * dStack_2b0;
    local_268 = (double)((ulonglong)(local_2c8 * auVar19._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_));
    dStack_260 = (double)((ulonglong)(dStack_2c0 * auVar19._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_));
    uStack_310 = 0;
    uStack_30c = 0x3ff00000;
    auVar22._4_4_ = uStack_314;
    auVar22._0_4_ = local_318;
    auVar22._8_4_ = 0;
    auVar22._12_4_ = 0x3ff00000;
    local_258 = blendvpd(auVar22,auVar23,auVar13);
    dStack_230 = 0.0;
  }
  local_2a8 = 0.0;
  local_2a0 = (double)CONCAT71(local_2a0._1_7_,2);
  local_298 = 0.0;
  uStack_290 = 0;
  local_288 = (double)*param_5;
  dStack_280 = (double)param_5[1];
  local_278 = (double)CONCAT44(local_278._4_4_,param_6);
  local_228._8_4_ = SUB84(dVar14,0);
  local_228._0_8_ = dVar11;
  local_228._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  fVar28 = (float)local_2d8 * 0.5;
  local_218._8_4_ = SUB84(dVar17,0);
  local_218._0_8_ = dVar15;
  local_218._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  FUN_1447a8aa0(&local_298,5);
  dVar31 = (double)-fVar28;
  lVar9 = (longlong)(int)(uint)uStack_290;
  uVar8 = (uint)uStack_290 + 1;
  if (uStack_290._4_4_ < uVar8) {
    uVar10 = uStack_290 & 0xffffffff;
    uStack_290._0_4_ = uVar8;
    FUN_1403e3958(&local_298,uVar10);
    uVar8 = (uint)uStack_290;
  }
  uStack_290._0_4_ = uVar8;
  uVar8 = (uint)uStack_290;
  *(double *)((longlong)local_298 + lVar9 * 0x18) = dVar31;
  *(double *)((longlong)local_298 + 8 + lVar9 * 0x18) = dVar31;
  *(undefined8 *)((longlong)local_298 + 0x10 + lVar9 * 0x18) = 0;
  dVar30 = (double)fVar28;
  lVar9 = (longlong)(int)(uint)uStack_290;
  uStack_290._0_4_ = (uint)uStack_290 + 1;
  if (uStack_290._4_4_ < (uint)uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = (uint)uStack_290;
  *(double *)((longlong)local_298 + lVar9 * 0x18) = dVar31;
  *(double *)((longlong)local_298 + 8 + lVar9 * 0x18) = dVar30;
  *(undefined8 *)((longlong)local_298 + 0x10 + lVar9 * 0x18) = 0;
  lVar9 = (longlong)(int)(uint)uStack_290;
  uStack_290._0_4_ = (uint)uStack_290 + 1;
  if (uStack_290._4_4_ < (uint)uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = (uint)uStack_290;
  *(double *)((longlong)local_298 + lVar9 * 0x18) = dVar30;
  *(double *)((longlong)local_298 + 8 + lVar9 * 0x18) = dVar30;
  *(undefined8 *)((longlong)local_298 + 0x10 + lVar9 * 0x18) = 0;
  lVar9 = (longlong)(int)(uint)uStack_290;
  uStack_290._0_4_ = (uint)uStack_290 + 1;
  if (uStack_290._4_4_ < (uint)uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  uVar8 = (uint)uStack_290;
  *(double *)((longlong)local_298 + lVar9 * 0x18) = dVar30;
  *(double *)((longlong)local_298 + 8 + lVar9 * 0x18) = dVar31;
  *(undefined8 *)((longlong)local_298 + 0x10 + lVar9 * 0x18) = 0;
  lVar9 = (longlong)(int)(uint)uStack_290;
  uStack_290._0_4_ = (uint)uStack_290 + 1;
  if (uStack_290._4_4_ < (uint)uStack_290) {
    FUN_1403e3958(&local_298,uVar8);
  }
  *(double *)((longlong)local_298 + lVar9 * 0x18) = dVar31;
  *(double *)((longlong)local_298 + 8 + lVar9 * 0x18) = dVar31;
  *(undefined8 *)((longlong)local_298 + 0x10 + lVar9 * 0x18) = 0;
  iVar7 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar7 + 1U) {
    FUN_1490f2448((longlong *)(param_1 + 8),iVar7);
  }
  FUN_1490eb446((longlong)iVar7 * 0xd0 + *(longlong *)(param_1 + 8),&local_2a8);
  FUN_1490de8da(&local_2a8);
  if ((local_d0 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144469c20 FUN_144469c20 body=3006 status=ok
// SIG undefined FUN_144469c20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144469c20(longlong param_1,double *param_2,double *param_3,float param_4,float param_5,
                  float param_6,undefined8 *param_7,undefined4 param_8,int param_9)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar14;
  undefined1 auVar13 [16];
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar19;
  undefined1 auVar18 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_318 [44];
  float local_2ec;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  undefined8 uStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double local_268;
  double dStack_260;
  undefined1 local_258 [16];
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  iVar6 = 0x20;
  if (param_9 < 0x20) {
    iVar6 = param_9;
  }
  iVar8 = 4;
  if (4 < iVar6) {
    iVar8 = iVar6;
  }
  auVar21 = *(undefined1 (*) [16])(param_2 + 8);
  dVar33 = auVar21._0_8_;
  dVar17 = auVar21._8_8_;
  auVar22 = *(undefined1 (*) [16])(param_2 + 10);
  dVar31 = auVar22._0_8_;
  dVar19 = auVar22._8_8_;
  auVar23 = *(undefined1 (*) [16])(param_3 + 8);
  dVar11 = auVar23._0_8_;
  dVar14 = auVar23._8_8_;
  auVar13 = *(undefined1 (*) [16])(param_3 + 10);
  dVar16 = auVar13._0_8_;
  auVar21 = minpd(auVar23,auVar21);
  auVar23 = minpd(auVar13,auVar22);
  auVar22._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
  auVar22._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
  iVar6 = movmskpd(param_9,auVar22);
  auVar21._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
  auVar21._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
  uVar7 = movmskpd((int)local_d0,auVar21);
  local_2ec = param_4;
  if ((uVar7 & 0x3fffffff) == 0 && iVar6 == 0) {
    dVar25 = *param_3;
    dVar27 = param_3[1];
    dVar29 = param_3[2];
    dVar30 = param_3[3];
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar4 = param_2[2];
    dVar5 = param_2[3];
    dVar32 = param_2[3];
    dVar12 = param_2[3];
    dVar26 = param_2[1];
    dVar20 = param_2[1];
    dVar34 = param_2[2];
    dVar28 = param_2[2];
    local_268 = dVar27 * dVar34 * -1.0 + dVar29 * dVar26 + dVar30 * *param_2 * 1.0 + dVar25 * dVar32
    ;
    dStack_260 = dVar25 * dVar28 * 1.0 +
                 dVar30 * dVar20 + dVar29 * *param_2 * -1.0 + dVar27 * dVar12;
    local_258._0_8_ =
         dVar30 * dVar34 * 1.0 + ((*param_2 * dVar27 * 1.0 + dVar29 * dVar32) - dVar25 * dVar26);
    local_258._8_8_ =
         dVar29 * dVar28 * -1.0 + ((*param_2 * dVar25 * -1.0 + dVar30 * dVar12) - dVar27 * dVar20);
    dVar29 = param_3[4] * dVar33;
    dVar30 = param_3[5] * dVar17;
    dVar20 = param_3[6] * dVar31;
    dVar26 = param_3[7] * dVar19;
    dVar25 = dVar30 * dVar2 - dVar3 * dVar29;
    dVar27 = dVar20 * dVar3 - dVar4 * dVar30;
    dVar28 = dVar29 * dVar4 - dVar2 * dVar20;
    dVar34 = dVar26 * dVar5 - dVar5 * dVar26;
    dVar27 = dVar27 + dVar27;
    dVar28 = dVar28 + dVar28;
    dVar25 = dVar25 + dVar25;
    dVar34 = dVar34 + dVar34;
    local_248 = (dVar25 * dVar3 - dVar4 * dVar28) + dVar32 * dVar27 + dVar29 + param_2[4];
    dStack_240 = (dVar27 * dVar4 - dVar25 * dVar2) + dVar12 * dVar28 + dVar30 + param_2[5];
    local_238 = (dVar28 * dVar2 - dVar3 * dVar27) + dVar32 * dVar25 + dVar20 + param_2[6];
    dStack_230 = (dVar34 * dVar5 - dVar34 * dVar5) + dVar12 * dVar34 + dVar26 + param_2[7];
    dVar11 = dVar11 * dVar33;
    dVar14 = dVar14 * dVar17;
    dVar16 = dVar16 * dVar31;
    dVar19 = auVar13._8_8_ * dVar19;
  }
  else {
    dVar12 = *param_2;
    dVar20 = param_2[1];
    dVar26 = param_2[2];
    dVar28 = dVar20 + dVar20;
    dVar34 = dVar26 + dVar26;
    dVar29 = dVar12 * (dVar12 + dVar12);
    local_108 = (1.0 - (dVar29 + dVar20 * dVar28)) * dVar31;
    dVar32 = param_2[3];
    dVar25 = dVar34 * dVar32;
    dVar27 = (dVar12 + dVar12) * param_2[3];
    dVar32 = dVar28 * dVar32;
    local_118 = (dVar32 + *param_2 * dVar34) * dVar31;
    local_2d8 = dVar31 * dVar16;
    dStack_2d0 = dVar19 * auVar13._8_8_;
    local_158 = (1.0 - (dVar26 * dVar34 + dVar20 * dVar28)) * dVar33;
    dStack_130 = (1.0 - (dVar26 * dVar34 + dVar29)) * dVar17;
    dStack_150 = (dVar28 * dVar12 + dVar25) * dVar33;
    local_128 = (dVar34 * dVar20 + dVar27) * dVar17;
    local_138 = (dVar28 * dVar12 - dVar25) * dVar17;
    dStack_110 = (dVar34 * dVar20 - dVar27) * dVar31;
    local_148 = (*param_2 * dVar34 - dVar32) * dVar33;
    uStack_140 = 0;
    uStack_120 = 0;
    uStack_100 = 0;
    local_f8 = param_2[4];
    dStack_f0 = param_2[5];
    local_e8 = param_2[6];
    uStack_e0 = 0x3ff0000000000000;
    dVar19 = *param_3;
    dVar32 = param_3[1];
    dVar12 = param_3[2];
    dVar20 = dVar32 + dVar32;
    dVar26 = dVar12 + dVar12;
    dVar25 = dVar19 * (dVar19 + dVar19);
    local_188 = (1.0 - (dVar25 + dVar32 * dVar20)) * dVar16;
    dVar31 = param_3[3];
    dVar28 = dVar26 * dVar31;
    dVar34 = (dVar19 + dVar19) * param_3[3];
    dVar31 = dVar20 * dVar31;
    local_198 = (dVar31 + *param_3 * dVar26) * dVar16;
    local_1b8 = (dVar20 * dVar19 - dVar28) * dVar14;
    dStack_190 = (dVar26 * dVar32 - dVar34) * dVar16;
    local_2e8._8_4_ = SUB84(dVar17 * dVar14,0);
    local_2e8._0_8_ = dVar33 * dVar11;
    local_2e8._12_4_ = (int)((ulonglong)(dVar17 * dVar14) >> 0x20);
    local_1d8 = (1.0 - (dVar12 * dVar26 + dVar32 * dVar20)) * dVar11;
    dStack_1b0 = (1.0 - (dVar12 * dVar26 + dVar25)) * dVar14;
    dStack_1d0 = (dVar20 * dVar19 + dVar28) * dVar11;
    local_1a8 = (dVar26 * dVar32 + dVar34) * dVar14;
    local_1c8 = (*param_3 * dVar26 - dVar31) * dVar11;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_3[4];
    dStack_170 = param_3[5];
    local_168 = *(undefined4 *)(param_3 + 6);
    uStack_164 = *(undefined4 *)((longlong)param_3 + 0x34);
    uStack_160 = 0;
    uStack_15c = 0x3ff00000;
    FUN_1447fea8d(&local_2a8,&local_1d8,&local_158);
    dVar19 = dStack_2d0;
    dVar16 = local_2d8;
    dVar33 = local_298 * local_298 + local_2a8 * local_2a8 + local_2a0 * local_2a0;
    dVar11 = local_278 * local_278 + local_288 * local_288 + dStack_280 * dStack_280;
    dVar14 = (double)local_258._0_8_ * (double)local_258._0_8_ +
             local_268 * local_268 + dStack_260 * dStack_260;
    uVar10 = -(ulonglong)(0.0 <= dVar33 + -9.99999993922529e-09);
    dVar31 = (double)(~uVar10 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar33)) & uVar10);
    uVar10 = -(ulonglong)(0.0 <= dVar11 + -9.99999993922529e-09);
    dVar17 = (double)(~uVar10 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar11)) & uVar10);
    uVar10 = -(ulonglong)(0.0 <= dVar14 + -9.99999993922529e-09);
    dVar32 = (double)(~uVar10 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar14)) & uVar10);
    dVar11 = (double)local_2e8._0_8_;
    dVar14 = (double)local_2e8._8_8_;
    auVar23._8_8_ = -(ulonglong)(0.0 <= (double)local_2e8._8_8_);
    auVar23._0_8_ = -(ulonglong)(0.0 <= (double)local_2e8._0_8_);
    auVar21 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar23);
    dVar33 = (double)(~-(ulonglong)(0.0 <= local_2d8) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_2d8) & 0x3ff0000000000000);
    dVar12 = auVar21._0_8_;
    local_2a8 = local_2a8 * dVar31 * dVar12;
    local_2a0 = local_2a0 * dVar31 * dVar12;
    local_298 = dVar31 * local_298 * dVar12;
    dVar31 = auVar21._8_8_;
    local_278 = dVar17 * local_278 * dVar31;
    dStack_280 = dStack_280 * dVar17 * dVar31;
    local_288 = dVar31 * local_288 * dVar17;
    dStack_260 = dStack_260 * dVar32 * dVar33;
    local_268 = dVar33 * local_268 * dVar32;
    local_258._0_8_ = dVar32 * (double)local_258._0_8_ * dVar33;
    FUN_14481fd10(&local_2c8,&local_2a8);
    dVar33 = local_2b8 * local_2b8 + local_2c8 * local_2c8;
    dVar31 = dStack_2b0 * dStack_2b0 + dStack_2c0 * dStack_2c0;
    auVar18._0_8_ = dVar33 + dVar31;
    auVar18._8_8_ = dVar33 + dVar31;
    auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
    auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
    auVar21 = sqrtpd(auVar18,auVar18);
    auVar21 = divpd(_DAT_149934d80,auVar21);
    auVar24._0_8_ = auVar21._0_8_ * local_2b8;
    auVar24._8_8_ = auVar21._8_8_ * dStack_2b0;
    local_268 = (double)((ulonglong)(local_2c8 * auVar21._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_));
    dStack_260 = (double)((ulonglong)(dStack_2c0 * auVar21._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_));
    local_258 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar24,auVar13);
    dStack_230 = 0.0;
  }
  local_2a8 = 0.0;
  local_2a0 = (double)CONCAT71(local_2a0._1_7_,2);
  local_298 = 0.0;
  uStack_290 = 0;
  local_288 = (double)*param_7;
  dStack_280 = (double)param_7[1];
  local_278 = (double)CONCAT44(local_278._4_4_,param_8);
  local_218._8_4_ = SUB84(dVar19,0);
  local_218._0_8_ = dVar16;
  local_218._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  local_228 = dVar11;
  dStack_220 = dVar14;
  FUN_1447a8aa0(&local_298,iVar8);
  dVar19 = (double)local_2ec;
  dVar11 = sin((double)param_5 * 0.5);
  dVar16 = cos((double)param_5 * 0.5);
  uVar10 = uStack_290;
  dVar31 = dVar11 * 0.0;
  dVar33 = dVar11 * -0.0 + dVar31 * 0.0;
  dVar14 = dVar31 * 0.0 - dVar19 * dVar31;
  dVar17 = dVar11 * dVar19 + dVar31 * -0.0;
  dVar14 = dVar14 + dVar14;
  dVar17 = dVar17 + dVar17;
  dVar33 = dVar33 + dVar33;
  dVar32 = dVar14 * dVar31;
  dVar14 = (dVar31 * dVar17 - dVar33 * dVar31) + dVar16 * dVar14 + 0.0;
  dVar31 = (dVar11 * dVar33 - dVar32) + dVar16 * dVar17 + 0.0;
  dVar33 = (dVar32 - dVar17 * dVar11) + dVar16 * dVar33 + dVar19;
  lVar9 = (longlong)(int)uStack_290;
  uVar7 = (int)uStack_290 + 1;
  uStack_290 = CONCAT44(uStack_290._4_4_,uVar7);
  if (uStack_290._4_4_ < uVar7) {
    FUN_1403e3958(&local_298,uVar10 & 0xffffffff);
  }
  *(double *)((longlong)local_298 + lVar9 * 0x18) = dVar33;
  *(double *)((longlong)local_298 + 8 + lVar9 * 0x18) = dVar31;
  *(double *)((longlong)local_298 + 0x10 + lVar9 * 0x18) = dVar14;
  bVar1 = ABS(param_6 - param_5) < 6.2831855;
  fVar15 = 6.2831855;
  if (bVar1) {
    fVar15 = param_6 - param_5;
  }
  dVar11 = (double)(fVar15 / (float)iVar8) * 0.5;
  iVar8 = iVar8 - (uint)bVar1;
  dVar16 = sin(dVar11);
  dVar17 = cos(dVar11);
  dVar19 = dVar16 * 0.0;
  dVar11 = -dVar19;
  do {
    uVar10 = uStack_290;
    lVar9 = (longlong)(int)uStack_290;
    uVar7 = (int)uStack_290 + 1;
    uStack_290 = CONCAT44(uStack_290._4_4_,uVar7);
    if (uStack_290._4_4_ < uVar7) {
      FUN_1403e3958(&local_298,uVar10 & 0xffffffff);
    }
    dVar20 = dVar19 * dVar14 + dVar31 * -dVar16;
    dVar20 = dVar20 + dVar20;
    dVar32 = dVar19 * dVar31 + dVar33 * dVar11;
    dVar32 = dVar32 + dVar32;
    dVar12 = dVar16 * dVar33 + dVar14 * dVar11;
    dVar12 = dVar12 + dVar12;
    dVar14 = dVar19 * dVar12 + dVar20 * dVar11 + dVar17 * dVar32 + dVar14;
    dVar31 = dVar32 * dVar11 + dVar16 * dVar20 + dVar17 * dVar12 + dVar31;
    dVar33 = dVar12 * -dVar16 + dVar19 * dVar32 + dVar17 * dVar20 + dVar33;
    *(double *)((longlong)local_298 + lVar9 * 0x18) = dVar33;
    *(double *)((longlong)local_298 + 8 + lVar9 * 0x18) = dVar31;
    *(double *)((longlong)local_298 + 0x10 + lVar9 * 0x18) = dVar14;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar6 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar6 + 1U) {
    FUN_1490f2448((longlong *)(param_1 + 8),iVar6);
  }
  FUN_1490eb446((longlong)iVar6 * 0xd0 + *(longlong *)(param_1 + 8),&local_2a8);
  FUN_1490de8da(&local_2a8);
  if ((local_d0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14446a7e0 FUN_14446a7e0 body=3100 status=ok
// SIG undefined FUN_14446a7e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14446a7e0(longlong param_1,double *param_2,double *param_3,undefined4 param_4,
                  undefined4 param_5,uint param_6,char param_7,undefined8 param_8,undefined8 param_9
                  )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  void **ppvVar10;
  longlong lVar11;
  ulonglong uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar17;
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_388 [32];
  undefined8 local_368;
  void **local_360;
  void **local_358;
  undefined4 local_34c;
  undefined1 local_348 [16];
  double local_338;
  double local_330;
  double local_328;
  double dStack_320;
  longlong local_318;
  ulonglong uStack_310;
  void *local_308;
  ulonglong uStack_300;
  void *local_2f8;
  ulonglong uStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_288;
  double dStack_280;
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  undefined1 local_238 [16];
  void *local_228;
  ulonglong uStack_220;
  void *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_360 = &local_2f8;
  local_2f8 = (void *)0x0;
  uStack_2f0 = 0;
  ppvVar10 = &local_308;
  local_308 = (void *)0x0;
  uStack_300 = 0;
  local_368 = CONCAT44(local_368._4_4_,param_6);
  local_358 = ppvVar10;
  uVar7 = FUN_147cb471d(ppvVar10,param_5);
  local_348 = *(undefined1 (*) [16])(param_2 + 8);
  auVar30 = *(undefined1 (*) [16])(param_2 + 10);
  dVar20 = auVar30._0_8_;
  dVar17 = auVar30._8_8_;
  auVar19 = *(undefined1 (*) [16])(param_3 + 8);
  dVar24 = auVar19._0_8_;
  dVar29 = auVar19._8_8_;
  auVar14 = *(undefined1 (*) [16])(param_3 + 10);
  dVar15 = auVar14._0_8_;
  auVar19 = minpd(auVar19,local_348);
  auVar21 = minpd(auVar14,auVar30);
  auVar30._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
  auVar30._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
  iVar8 = movmskpd(uVar7,auVar30);
  auVar19._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
  auVar19._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
  uVar9 = movmskpd((int)ppvVar10,auVar19);
  if ((uVar9 & 0x3fffffff) == 0 && iVar8 == 0) {
    dVar25 = *param_3;
    dVar27 = param_3[1];
    dVar31 = param_3[2];
    dVar32 = param_3[3];
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    dVar4 = param_2[3];
    dVar13 = param_2[3];
    dVar18 = param_2[3];
    dVar28 = param_2[1];
    dVar33 = param_2[1];
    dVar23 = param_2[2];
    dVar26 = param_2[2];
    local_288 = dVar27 * dVar23 * -1.0 + dVar31 * dVar28 + dVar32 * *param_2 * 1.0 + dVar25 * dVar13
    ;
    dStack_280 = dVar25 * dVar26 * 1.0 +
                 dVar32 * dVar33 + dVar31 * *param_2 * -1.0 + dVar27 * dVar18;
    local_278._0_8_ =
         dVar32 * dVar23 * 1.0 + ((*param_2 * dVar27 * 1.0 + dVar31 * dVar13) - dVar25 * dVar28);
    local_278._8_8_ =
         dVar31 * dVar26 * -1.0 + ((*param_2 * dVar25 * -1.0 + dVar32 * dVar18) - dVar27 * dVar33);
    dVar23 = param_3[4] * (double)local_348._0_8_;
    dVar26 = param_3[5] * (double)local_348._8_8_;
    dVar31 = param_3[6] * dVar20;
    dVar32 = param_3[7] * dVar17;
    dVar25 = dVar26 * dVar1 - dVar2 * dVar23;
    dVar27 = dVar31 * dVar2 - dVar3 * dVar26;
    dVar28 = dVar23 * dVar3 - dVar1 * dVar31;
    dVar33 = dVar32 * dVar4 - dVar4 * dVar32;
    dVar27 = dVar27 + dVar27;
    dVar28 = dVar28 + dVar28;
    dVar25 = dVar25 + dVar25;
    dVar33 = dVar33 + dVar33;
    local_268 = (dVar25 * dVar2 - dVar3 * dVar28) + dVar13 * dVar27 + dVar23 + param_2[4];
    dStack_260 = (dVar27 * dVar3 - dVar25 * dVar1) + dVar18 * dVar28 + dVar26 + param_2[5];
    local_258 = (dVar28 * dVar1 - dVar2 * dVar27) + dVar13 * dVar25 + dVar31 + param_2[6];
    dStack_250 = (dVar33 * dVar4 - dVar33 * dVar4) + dVar18 * dVar33 + dVar32 + param_2[7];
    dVar15 = dVar15 * dVar20;
    dVar17 = auVar14._8_8_ * dVar17;
    local_248 = dVar24 * (double)local_348._0_8_;
    dStack_240 = dVar29 * (double)local_348._8_8_;
  }
  else {
    dVar13 = *param_2;
    dVar28 = param_2[1];
    dVar33 = param_2[2];
    dVar23 = dVar28 + dVar28;
    dVar26 = dVar33 + dVar33;
    dVar31 = dVar13 * (dVar13 + dVar13);
    local_128 = (1.0 - (dVar31 + dVar28 * dVar23)) * dVar20;
    dVar18 = param_2[3];
    dVar25 = dVar26 * dVar18;
    dVar27 = (dVar13 + dVar13) * param_2[3];
    dVar18 = dVar23 * dVar18;
    local_138 = (dVar18 + *param_2 * dVar26) * dVar20;
    local_328 = dVar20 * dVar15;
    dStack_320 = dVar17 * auVar14._8_8_;
    local_178 = (1.0 - (dVar33 * dVar26 + dVar28 * dVar23)) * (double)local_348._0_8_;
    dStack_150 = (1.0 - (dVar33 * dVar26 + dVar31)) * (double)local_348._8_8_;
    dStack_170 = (dVar23 * dVar13 + dVar25) * (double)local_348._0_8_;
    local_148 = (dVar26 * dVar28 + dVar27) * (double)local_348._8_8_;
    local_158 = (dVar23 * dVar13 - dVar25) * (double)local_348._8_8_;
    dStack_130 = (dVar26 * dVar28 - dVar27) * dVar20;
    local_168 = (*param_2 * dVar26 - dVar18) * (double)local_348._0_8_;
    uStack_160 = 0;
    uStack_140 = 0;
    uStack_120 = 0;
    local_118 = param_2[4];
    dStack_110 = param_2[5];
    local_108 = param_2[6];
    uStack_100 = 0x3ff0000000000000;
    dVar17 = *param_3;
    dVar18 = param_3[1];
    dVar13 = param_3[2];
    dVar28 = dVar18 + dVar18;
    dVar33 = dVar13 + dVar13;
    dVar25 = dVar17 * (dVar17 + dVar17);
    local_1a8 = (1.0 - (dVar25 + dVar18 * dVar28)) * dVar15;
    dVar20 = param_3[3];
    dVar23 = dVar33 * dVar20;
    dVar26 = (dVar17 + dVar17) * param_3[3];
    dVar20 = dVar28 * dVar20;
    local_1b8 = (dVar20 + *param_3 * dVar33) * dVar15;
    local_1d8 = (dVar28 * dVar17 - dVar23) * dVar29;
    dStack_1b0 = (dVar33 * dVar18 - dVar26) * dVar15;
    dVar15 = (double)local_348._8_8_ * dVar29;
    local_348._8_4_ = SUB84(dVar15,0);
    local_348._0_8_ = (double)local_348._0_8_ * dVar24;
    local_348._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    dStack_1d0 = (1.0 - (dVar13 * dVar33 + dVar25)) * dVar29;
    local_1c8 = (dVar33 * dVar18 + dVar26) * dVar29;
    local_1e8 = (*param_3 * dVar33 - dVar20) * dVar24;
    local_1f8._8_8_ = (dVar28 * dVar17 + dVar23) * dVar24;
    local_1f8._0_8_ = (1.0 - (dVar13 * dVar33 + dVar18 * dVar28)) * dVar24;
    uStack_1e0 = 0;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    local_198 = param_3[4];
    dStack_190 = param_3[5];
    local_188 = *(undefined4 *)(param_3 + 6);
    uStack_184 = *(undefined4 *)((longlong)param_3 + 0x34);
    uStack_180 = 0;
    uStack_17c = 0x3ff00000;
    FUN_1447fea8d(&local_2c8);
    dVar17 = dStack_320;
    dVar15 = local_328;
    local_330 = local_2b8;
    dVar24 = local_2b8 * local_2b8 + local_2c8 * local_2c8 + local_2c0 * local_2c0;
    local_338 = local_298;
    dVar29 = local_298 * local_298 + local_2a8 * local_2a8 + dStack_2a0 * dStack_2a0;
    dVar20 = (double)local_278._0_8_ * (double)local_278._0_8_ +
             local_288 * local_288 + dStack_280 * dStack_280;
    uVar12 = -(ulonglong)(0.0 <= dVar24 + -9.99999993922529e-09);
    dVar24 = (double)(~uVar12 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar24)) & uVar12);
    uVar12 = -(ulonglong)(0.0 <= dVar29 + -9.99999993922529e-09);
    dVar29 = (double)(~uVar12 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar29)) & uVar12);
    uVar12 = -(ulonglong)(0.0 <= dVar20 + -9.99999993922529e-09);
    dVar18 = (double)(~uVar12 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar20)) & uVar12);
    auVar14._8_8_ = -(ulonglong)(0.0 <= (double)local_348._8_8_);
    auVar14._0_8_ = -(ulonglong)(0.0 <= (double)local_348._0_8_);
    auVar30 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar14);
    dVar20 = (double)(~-(ulonglong)(0.0 <= local_328) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_328) & 0x3ff0000000000000);
    dVar13 = auVar30._0_8_;
    local_2c8 = local_2c8 * dVar24 * dVar13;
    local_2c0 = local_2c0 * dVar24 * dVar13;
    local_2b8 = dVar24 * local_2b8 * dVar13;
    dVar24 = auVar30._8_8_;
    local_298 = dVar29 * local_298 * dVar24;
    dStack_2a0 = dStack_2a0 * dVar29 * dVar24;
    local_2a8 = dVar24 * local_2a8 * dVar29;
    dStack_280 = dStack_280 * dVar18 * dVar20;
    local_288 = dVar20 * local_288 * dVar18;
    local_278._0_8_ = dVar18 * (double)local_278._0_8_ * dVar20;
    local_34c = param_4;
    FUN_14481fd10(&local_2e8,&local_2c8);
    dVar20 = local_2d8 * local_2d8 + local_2e8 * local_2e8;
    dVar24 = dStack_2d0 * dStack_2d0 + dStack_2e0 * dStack_2e0;
    auVar16._0_8_ = dVar20 + dVar24;
    auVar16._8_8_ = dVar20 + dVar24;
    auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_);
    auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_);
    auVar30 = sqrtpd(auVar16,auVar16);
    auVar30 = divpd(_DAT_149934d80,auVar30);
    auVar22._0_8_ = auVar30._0_8_ * local_2d8;
    auVar22._8_8_ = auVar30._8_8_ * dStack_2d0;
    local_288 = (double)((ulonglong)(local_2e8 * auVar30._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar16._0_8_));
    dStack_280 = (double)((ulonglong)(dStack_2e0 * auVar30._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar16._8_8_));
    local_278 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar22,auVar21);
    dStack_250 = 0.0;
    param_4 = local_34c;
    local_248 = (double)local_348._0_8_;
    dStack_240 = (double)local_348._8_8_;
  }
  pvVar5 = local_2f8;
  local_2c8 = 0.0;
  local_2b8 = 0.0;
  uStack_2b0 = 0;
  local_2a8 = 5.26354424712089e-315;
  dStack_2a0 = 0.0078125;
  local_298 = (double)((ulonglong)local_298 & 0xffffffff00000000);
  local_228 = (void *)0x0;
  local_218 = (void *)0x0;
  uStack_210 = 0;
  local_208 = 0;
  local_2c0 = (double)CONCAT71(local_2c0._1_7_,3);
  local_238._8_4_ = SUB84(dVar17,0);
  local_238._0_8_ = dVar15;
  local_238._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  lVar11 = (longlong)(int)uStack_2f0;
  uStack_220 = uStack_2f0 & 0xffffffff;
  iVar8 = 0;
  if (lVar11 != 0) {
    FUN_147a6efc8(&local_228,uStack_2f0 & 0xffffffff,0);
    memcpy(local_228,pvVar5,lVar11 * 0x58);
    iVar8 = uStack_210._4_4_;
  }
  pvVar5 = local_308;
  iVar6 = (int)uStack_300;
  lVar11 = (longlong)(int)uStack_300;
  uStack_210 = CONCAT44(uStack_210._4_4_,(int)uStack_300);
  if ((int)uStack_300 == 0 && iVar8 == 0) {
    uStack_210 = uStack_300 & 0xffffffff;
  }
  else {
    FUN_1447bda9e(&local_218,uStack_300 & 0xffffffff);
    if (iVar6 != 0) {
      memcpy(local_218,pvVar5,lVar11 << 2);
    }
  }
  local_208 = param_9;
  iVar8 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar8 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar8 + 1U) {
    FUN_1490f2448((longlong *)(param_1 + 8),iVar8);
  }
  FUN_1490eb446((longlong)iVar8 * 0xd0 + *(longlong *)(param_1 + 8),&local_2c8);
  if (param_7 != '\0') {
    local_318 = 0;
    uStack_310 = (ulonglong)param_6;
    if (param_6 != 0) {
      FUN_1403e3958(&local_318,0);
    }
    iVar8 = 0;
    do {
      FUN_147cb4549(&local_178,param_4);
      dVar28 = local_178 * param_3[8];
      dVar15 = dStack_170 * param_3[9];
      dVar13 = local_168 * param_3[10];
      dVar20 = param_3[3];
      dVar17 = *param_3;
      dVar29 = param_3[1];
      dVar18 = param_3[2];
      local_2e8 = param_3[4];
      dStack_2e0 = param_3[5];
      dVar33 = dVar15 * dVar17 - dVar28 * dVar29;
      dVar23 = dVar13 * dVar29 - dVar15 * dVar18;
      dVar24 = dVar28 * dVar18 - dVar17 * dVar13;
      dVar23 = dVar23 + dVar23;
      dVar24 = dVar24 + dVar24;
      dVar33 = dVar33 + dVar33;
      dVar15 = (dVar18 * dVar23 - dVar17 * dVar33) + param_3[3] * dVar24 + dVar15 + dStack_2e0;
      local_2d8 = param_3[6];
      local_1f8._8_4_ = SUB84(dVar15,0);
      local_1f8._0_8_ = (dVar33 * dVar29 - dVar24 * dVar18) + dVar20 * dVar23 + dVar28 + local_2e8;
      local_1f8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      local_1e8 = dVar33 * dVar20 + dVar13 + (dVar24 * dVar17 - dVar23 * dVar29) + local_2d8;
      local_368 = param_8;
      local_360 = (void **)CONCAT44(local_360._4_4_,0x3f800000);
      FUN_14446764a(param_1,param_2,&local_2e8,local_1f8);
      iVar8 = iVar8 + 1;
    } while (iVar8 != 4);
    if (local_318 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1490de8da(&local_2c8);
  if (local_308 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_2f8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14446b3fe FUN_14446b3fe body=958 status=ok
// SIG undefined FUN_14446b3fe(void)

void FUN_14446b3fe(longlong param_1,undefined8 *param_2,double *param_3,double *param_4,
                  undefined4 *param_5,undefined4 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  double dVar7;
  longlong lVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined1 local_150;
  double *local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined8 local_118 [12];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  puVar9 = local_118;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar9 = *param_2;
    param_2 = param_2 + 1;
    puVar9 = puVar9 + 1;
  }
  local_158 = 0;
  local_150 = 1;
  local_148 = (double *)0x0;
  uStack_140 = 0;
  local_138 = *param_5;
  uStack_134 = param_5[1];
  uStack_130 = param_5[2];
  uStack_12c = param_5[3];
  local_128 = param_6;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  FUN_14051b394(&local_148,6,1);
  local_148[2] = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  *local_148 = DAT_14c8464e0;
  local_148[1] = dVar1;
  local_148[5] = param_3[2];
  dVar1 = param_3[1];
  local_148[3] = *param_3;
  local_148[4] = dVar1;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  local_148[8] = param_3[2];
  local_148[6] = dVar1;
  local_148[7] = dVar2;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar10 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar10 != 1.0) || (dVar11 = dVar1, dVar12 = dVar2, dVar13 = dVar3, NAN(dVar10))) &&
     (dVar11 = DAT_14c8464e0, dVar12 = DAT_14c8464e8, dVar13 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar10)) {
    dVar10 = 1.0 / SQRT(dVar10);
    dVar11 = dVar10 * dVar1;
    dVar12 = dVar2 * dVar10;
    dVar13 = dVar3 * dVar10;
  }
  dVar10 = *param_4;
  dVar4 = param_4[1];
  dVar5 = param_4[2];
  dVar7 = SQRT(dVar5 * dVar5 + dVar10 * dVar10 + dVar4 * dVar4);
  local_148[9] = (dVar1 - dVar11 * dVar7) + dVar10;
  local_148[10] = (dVar2 - dVar12 * dVar7) + dVar4;
  local_148[0xb] = (dVar3 - dVar13 * dVar7) + dVar5;
  local_148[0xe] = local_148[5];
  local_148[0xc] = local_148[3];
  local_148[0xd] = local_148[4];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar10 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar10 != 1.0) || (dVar11 = dVar1, dVar12 = dVar3, dVar13 = dVar2, NAN(dVar10))) &&
     (dVar11 = DAT_14c8464e0, dVar12 = DAT_14c8464f0, dVar13 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar10)) {
    dVar10 = 1.0 / SQRT(dVar10);
    dVar11 = dVar10 * dVar1;
    dVar12 = dVar3 * dVar10;
    dVar13 = dVar2 * dVar10;
  }
  dVar10 = *param_4;
  dVar4 = param_4[1];
  dVar5 = param_4[2];
  dVar7 = SQRT(dVar5 * dVar5 + dVar10 * dVar10 + dVar4 * dVar4);
  local_148[0xf] = (dVar1 - dVar11 * dVar7) - dVar10;
  local_148[0x10] = (dVar2 - dVar13 * dVar7) - dVar4;
  local_148[0x11] = (dVar3 - dVar12 * dVar7) - dVar5;
  iVar6 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar6 + 1U) {
    FUN_1490f2448((longlong *)(param_1 + 8),iVar6);
  }
  FUN_1490eb446((longlong)iVar6 * 0xd0 + *(longlong *)(param_1 + 8),&local_158);
  FUN_1490de8da(&local_158);
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14446b7be FUN_14446b7be body=1333 status=ok
// SIG undefined FUN_14446b7be(void)

void FUN_14446b7be(longlong param_1,undefined8 *param_2,double *param_3,undefined8 param_4,
                  char param_5,undefined4 *param_6,undefined8 param_7)

{
  longlong *plVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_338 [32];
  undefined8 *local_318;
  undefined8 *local_310;
  float local_308;
  float local_304;
  undefined4 local_300;
  float local_2fc;
  float local_2f8;
  undefined4 local_2f4;
  float local_2f0;
  float local_2ec;
  undefined4 local_2e8;
  float local_2e4;
  float local_2e0;
  undefined4 local_2dc;
  undefined8 *local_2d8;
  undefined8 *local_2d0;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  longlong local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined8 local_288 [3];
  undefined1 local_270 [72];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined1 local_1c0 [88];
  undefined8 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined8 local_128 [12];
  float *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_338;
  fVar9 = (float)param_3[1];
  fVar10 = (float)*param_3;
  local_168 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0x3f800000;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_13c = 0x3f800000;
  local_138 = 0;
  local_c8 = (float *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_160 = 3;
  puVar7 = param_2;
  puVar8 = local_128;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  local_2dc = 0;
  local_2e4 = -fVar10;
  local_2e0 = fVar9;
  FUN_1415874d8(&local_2c8);
  local_2e8 = 0;
  local_2f0 = fVar10;
  local_2ec = fVar9;
  FUN_1415874d8(local_270);
  local_2f4 = 0;
  local_2fc = fVar10;
  local_2f8 = -fVar9;
  FUN_1415874d8(&local_218);
  local_300 = 0;
  local_308 = -fVar10;
  local_304 = -fVar9;
  FUN_1415874d8(local_1c0);
  local_2d0 = &local_168;
  local_2d8 = &local_2c8;
  FUN_1490de9b6(&local_c8);
  local_2c8 = 0x100000000;
  uStack_2c0 = 2;
  uStack_2bc = 2;
  local_2b8 = 3;
  local_310 = &uStack_2b0;
  local_318 = &local_2c8;
  FUN_1490cd99a(&local_b8);
  local_a8 = param_7;
  plVar1 = (longlong *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
    FUN_1490f2448(plVar1,iVar3);
  }
  FUN_1490eb446((longlong)iVar3 * 0xd0 + *plVar1,&local_168);
  if (param_5 != '\0') {
    puVar7 = local_288;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *param_2;
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 1;
    }
    local_2c8 = 0;
    uStack_2c0 = CONCAT31(uStack_2c0._1_3_,2);
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2a8 = *param_6;
    uStack_2a4 = param_6[1];
    uStack_2a0 = param_6[2];
    uStack_29c = param_6[3];
    local_298 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    FUN_1447a8aa0(&local_2b8,5);
    fVar9 = local_c8[2];
    fVar10 = local_c8[1];
    fVar2 = *local_c8;
    lVar5 = (longlong)(int)(uint)uStack_2b0;
    uVar4 = (uint)uStack_2b0 + 1;
    if (uStack_2b0._4_4_ < uVar4) {
      uVar6 = uStack_2b0 & 0xffffffff;
      uStack_2b0._0_4_ = uVar4;
      FUN_1403e3958(&local_2b8,uVar6);
      uVar4 = (uint)uStack_2b0;
    }
    uStack_2b0._0_4_ = uVar4;
    uVar4 = (uint)uStack_2b0;
    *(double *)(local_2b8 + lVar5 * 0x18) = (double)fVar2;
    *(double *)(local_2b8 + 8 + lVar5 * 0x18) = (double)fVar10;
    *(double *)(local_2b8 + 0x10 + lVar5 * 0x18) = (double)fVar9;
    fVar9 = local_c8[0x18];
    fVar10 = local_c8[0x17];
    fVar2 = local_c8[0x16];
    lVar5 = (longlong)(int)(uint)uStack_2b0;
    uStack_2b0._0_4_ = (uint)uStack_2b0 + 1;
    if (uStack_2b0._4_4_ < (uint)uStack_2b0) {
      FUN_1403e3958(&local_2b8,uVar4);
    }
    uVar4 = (uint)uStack_2b0;
    *(double *)(local_2b8 + lVar5 * 0x18) = (double)fVar2;
    *(double *)(local_2b8 + 8 + lVar5 * 0x18) = (double)fVar10;
    *(double *)(local_2b8 + 0x10 + lVar5 * 0x18) = (double)fVar9;
    fVar9 = local_c8[0x2e];
    fVar10 = local_c8[0x2d];
    fVar2 = local_c8[0x2c];
    lVar5 = (longlong)(int)(uint)uStack_2b0;
    uStack_2b0._0_4_ = (uint)uStack_2b0 + 1;
    if (uStack_2b0._4_4_ < (uint)uStack_2b0) {
      FUN_1403e3958(&local_2b8,uVar4);
    }
    uVar4 = (uint)uStack_2b0;
    *(double *)(local_2b8 + lVar5 * 0x18) = (double)fVar2;
    *(double *)(local_2b8 + 8 + lVar5 * 0x18) = (double)fVar10;
    *(double *)(local_2b8 + 0x10 + lVar5 * 0x18) = (double)fVar9;
    fVar9 = local_c8[0x44];
    fVar10 = local_c8[0x43];
    fVar2 = local_c8[0x42];
    lVar5 = (longlong)(int)(uint)uStack_2b0;
    uStack_2b0._0_4_ = (uint)uStack_2b0 + 1;
    if (uStack_2b0._4_4_ < (uint)uStack_2b0) {
      FUN_1403e3958(&local_2b8,uVar4);
    }
    uVar4 = (uint)uStack_2b0;
    *(double *)(local_2b8 + lVar5 * 0x18) = (double)fVar2;
    *(double *)(local_2b8 + 8 + lVar5 * 0x18) = (double)fVar10;
    *(double *)(local_2b8 + 0x10 + lVar5 * 0x18) = (double)fVar9;
    fVar9 = local_c8[2];
    fVar10 = local_c8[1];
    fVar2 = *local_c8;
    lVar5 = (longlong)(int)(uint)uStack_2b0;
    uStack_2b0._0_4_ = (uint)uStack_2b0 + 1;
    if (uStack_2b0._4_4_ < (uint)uStack_2b0) {
      FUN_1403e3958(&local_2b8,uVar4);
    }
    uVar4 = (uint)uStack_2b0;
    *(double *)(local_2b8 + lVar5 * 0x18) = (double)fVar2;
    *(double *)(local_2b8 + 8 + lVar5 * 0x18) = (double)fVar10;
    *(double *)(local_2b8 + 0x10 + lVar5 * 0x18) = (double)fVar9;
    fVar9 = local_c8[0x2e];
    fVar10 = local_c8[0x2d];
    fVar2 = local_c8[0x2c];
    lVar5 = (longlong)(int)(uint)uStack_2b0;
    uStack_2b0._0_4_ = (uint)uStack_2b0 + 1;
    if (uStack_2b0._4_4_ < (uint)uStack_2b0) {
      FUN_1403e3958(&local_2b8,uVar4);
    }
    *(double *)(local_2b8 + lVar5 * 0x18) = (double)fVar2;
    *(double *)(local_2b8 + 8 + lVar5 * 0x18) = (double)fVar10;
    *(double *)(local_2b8 + 0x10 + lVar5 * 0x18) = (double)fVar9;
    iVar3 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
      FUN_1490f2448(plVar1,iVar3);
    }
    FUN_1490eb446((longlong)iVar3 * 0xd0 + *plVar1,&local_2c8);
    FUN_1490de8da(&local_2c8);
  }
  FUN_1490de8da(&local_168);
  if ((local_90 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14446bcf4 FUN_14446bcf4 body=69 status=ok
// SIG undefined FUN_14446bcf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14446bcf4(void)

{
  _DAT_14cc00968 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014446bd36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc00970,1);
  return;
}



// FUNCTION 14446bd4a FUN_14446bd4a body=635 status=ok
// SIG undefined FUN_14446bd4a(void)

longlong * FUN_14446bd4a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_80 [2];
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = (longlong *)(param_1 + 0x40);
  if ((*(int *)(param_1 + 0x48) == 0) && (*(int *)(param_1 + 0x38) != 0)) {
    lVar4 = FUN_14001a7b2();
    local_50 = 0x101;
    local_58 = lVar4;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar4 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_58 + 0x3a8) = (undefined1)local_50;
      UNLOCK();
    }
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar4 = FUN_1490ded04(param_1);
      if (lVar4 != 0) {
        uVar7 = 0xffffffff;
        if ((longlong)*(int *)(lVar4 + 0x38) != 0) {
          lVar5 = (longlong)*(int *)(lVar4 + 0x38) << 2;
          uVar10 = 0;
          do {
            if (*(int *)(*(longlong *)(lVar4 + 0x30) + uVar10 * 4) == *(int *)(param_1 + 0x28)) {
              uVar7 = uVar10 & 0xffffffff;
              break;
            }
            uVar10 = uVar10 + 1;
            lVar5 = lVar5 + -4;
          } while (lVar5 != 0);
        }
        if ((longlong)*(int *)(param_1 + 0x38) != 0) {
          puVar9 = *(undefined8 **)(param_1 + 0x30);
          puVar8 = puVar9 + (longlong)*(int *)(param_1 + 0x38) * 7;
          do {
            FUN_1446f470e(local_80,*puVar9,1);
            if ((longlong)*(int *)(lVar4 + 0x18) != 0) {
              lVar5 = *(longlong *)(lVar4 + 0x10);
              lVar6 = (longlong)*(int *)(lVar4 + 0x18) * 0xe0;
              do {
                if (*(longlong *)(lVar5 + 4) == local_80[0]) goto LAB_14446bf84;
                lVar5 = lVar5 + 0xe0;
                lVar6 = lVar6 + -0xe0;
              } while (lVar6 != 0);
            }
            lVar5 = 0;
LAB_14446bf84:
            uVar3 = FUN_1444788ce(lVar5,uVar7);
            iVar2 = *(int *)(param_1 + 0x48);
            *(uint *)(param_1 + 0x48) = iVar2 + 1U;
            if (*(uint *)(param_1 + 0x4c) < iVar2 + 1U) {
              FUN_1446f48e2(local_88,iVar2);
            }
            *(undefined4 *)(*local_88 + (longlong)iVar2 * 4) = uVar3;
            puVar9 = puVar9 + 7;
          } while (puVar9 != puVar8);
        }
      }
    }
    else if ((longlong)*(int *)(param_1 + 0x38) != 0) {
      puVar9 = *(undefined8 **)(param_1 + 0x30);
      puVar8 = puVar9 + (longlong)*(int *)(param_1 + 0x38) * 7;
      do {
        lVar4 = *(longlong *)(param_1 + 0x10);
        FUN_1446f470e(&local_60,*puVar9,1);
        for (lVar4 = *(longlong *)(lVar4 + 0x70); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x48)) {
          if (*(longlong *)(lVar4 + 0x20) == local_60) {
            local_68 = 0;
            local_70 = 0;
            FUN_1409a6d33(lVar4,&local_68,&local_70);
            FUN_14575417c(local_80,&local_68,local_70);
            FUN_14001a7b2();
            uVar3 = (**(code **)(DAT_14cc012d0 + 0x80))(&DAT_14cc012d0,local_80,0);
            iVar2 = *(int *)(param_1 + 0x48);
            *(uint *)(param_1 + 0x48) = iVar2 + 1U;
            if (*(uint *)(param_1 + 0x4c) < iVar2 + 1U) {
              FUN_1446f48e2(local_88,iVar2);
            }
            *(undefined4 *)(*local_88 + (longlong)iVar2 * 4) = uVar3;
            break;
          }
        }
        puVar9 = puVar9 + 7;
      } while (puVar9 != puVar8);
    }
    FUN_1409be446(&local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return local_88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14446c0a8 FUN_14446c0a8 body=25 status=ok
// SIG undefined FUN_14446c0a8(void)

undefined8 FUN_14446c0a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14446c0d4 FUN_14446c0d4 body=239 status=ok
// SIG undefined FUN_14446c0d4(void)

bool FUN_14446c0d4(longlong *param_1,undefined8 param_2,undefined4 *param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  int local_70;
  int local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x30))(param_1,local_78,param_2,*param_3);
  if (local_70 != local_44) {
    iVar1 = *(int *)(param_4 + 0x58);
    *(uint *)(param_4 + 0x58) = iVar1 + 1U;
    if (*(uint *)(param_4 + 0x5c) < iVar1 + 1U) {
      FUN_14446c1c8(param_4,iVar1);
    }
    lVar2 = *(longlong *)(param_4 + 0x50);
    if (*(longlong *)(param_4 + 0x50) == 0) {
      lVar2 = param_4;
    }
    lVar3 = (longlong)iVar1 * 0x50;
    *(undefined8 *)(lVar2 + 0x20 + lVar3) = 0;
    *(undefined4 *)(lVar2 + 0x28 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    ((undefined8 *)(lVar2 + lVar3))[1] = 0;
    *(undefined8 *)(lVar2 + 0x2c + lVar3) = 0xffffffff00000080;
    *(undefined4 *)(lVar2 + 0x34 + lVar3) = 0;
    *(undefined8 *)(lVar2 + 0x40 + lVar3) = 0;
    *(undefined4 *)(lVar2 + 0x48 + lVar3) = 0;
    FUN_140816cc4(lVar2 + lVar3,local_78);
  }
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return local_70 != local_44;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14446c1c8 FUN_14446c1c8 body=267 status=ok
// SIG undefined FUN_14446c1c8(void)

void FUN_14446c1c8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x5c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = lVar3 * 0x50;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar4 < 0x7ff1) {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
          }
        }
        else {
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
        }
      }
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
        uVar5 = uVar4 / 0x50 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x5c) = (int)uVar5;
    FUN_14446c2d4(param_1,param_2,uVar5,0x50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14446c2d4 FUN_14446c2d4 body=141 status=ok
// SIG undefined FUN_14446c2d4(void)

void FUN_14446c2d4(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x50);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x50);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x50,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x50),param_1,(longlong)param_2 * 0x50);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x50,param_2,param_3,param_4);
  return;
}



// FUNCTION 14446c3c6 FUN_14446c3c6 body=90 status=ok
// SIG undefined FUN_14446c3c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14446c3c6(void)

{
  _DAT_14cc00eb8 = 0;
  if (DAT_14cc00eb0 != 0) {
    FUN_1400020a8();
  }
  FUN_1401f9860(&DAT_14cc00e70);
  _DAT_14cc00e68 = 0;
  if (DAT_14cc00e60 != 0) {
    FUN_1400020a8();
  }
  FUN_1401f9898(&DAT_14cc00e20);
  return;
}



// FUNCTION 14446c766 FUN_14446c766 body=12 status=ok
// SIG undefined FUN_14446c766(void)

void FUN_14446c766(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014446c76f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14446c772 FUN_14446c772 body=29 status=ok
// SIG undefined FUN_14446c772(void)

undefined8 FUN_14446c772(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14446c796 FUN_14446c796 body=107 status=ok
// SIG undefined FUN_14446c796(void)

void FUN_14446c796(longlong *param_1,int *param_2)

{
  undefined1 auStack_48 [32];
  code **local_28;
  longlong local_20;
  code *local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_1;
  local_10 = &local_20;
  local_28 = &local_18;
  local_18 = FUN_14446c802;
  FUN_14131dd70(local_20,param_1[1],(longlong)*param_2,
                *(undefined4 *)(*(longlong *)(local_20 + 0x2b0) + (longlong)*param_2 * 4));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14446c802 FUN_14446c802 body=372 status=ok
// SIG undefined FUN_14446c802(void)

void FUN_14446c802(longlong *param_1,longlong param_2,int *param_3,int *param_4,char *param_5)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar3 = *param_3;
  param_1 = (longlong *)*param_1;
  lVar6 = (**(code **)(*param_1 + 0x360))(param_1,param_2,*param_5);
  uVar2 = *(ushort *)(param_5 + 4);
  if (*param_5 == '\x02') {
    if (uVar2 == 0xffff) {
      lVar6 = 0;
    }
    else {
      lVar6 = (ulonglong)uVar2 * 0x20 + param_1[0x25];
    }
    uVar9 = 0xffffffffffffffff;
    if ((ulonglong)*(ushort *)(param_5 + 2) != 0xffff) {
      uVar9 = (ulonglong)*(ushort *)(param_5 + 2);
    }
    lVar8 = *(longlong *)(param_2 + 0x1a8);
    uVar5 = *(undefined8 *)(param_1[0x59] + 8 + uVar9 * 0x28);
    lVar11 = (longlong)iVar3 * 0x20;
    *(undefined8 *)(lVar8 + lVar11) = *(undefined8 *)(*(longlong *)(param_2 + 0x218) + uVar9 * 8);
    *(undefined8 *)(lVar8 + 8 + lVar11) = uVar5;
    *(longlong *)(lVar8 + 0x10 + lVar11) = lVar6;
    *(undefined8 *)(lVar8 + 0x18 + lVar11) = 0;
  }
  else {
    if (uVar2 == 0xffff) {
      lVar8 = 0;
    }
    else {
      lVar8 = (ulonglong)uVar2 * 0x20 + *(longlong *)(lVar6 + 0x38);
    }
    uVar9 = 0xffffffffffffffff;
    if ((ulonglong)*(ushort *)(param_5 + 2) != 0xffff) {
      uVar9 = (ulonglong)*(ushort *)(param_5 + 2);
    }
    lVar11 = *(longlong *)(*(longlong *)(lVar6 + 0x28) + uVar9 * 8);
    lVar4 = *(longlong *)(param_2 + 0x1a8);
    lVar10 = (longlong)iVar3 * 0x20;
    *(longlong *)(lVar4 + lVar10) = (longlong)*(int *)(lVar11 + 0x44) + *(longlong *)(lVar6 + 8);
    *(longlong *)(lVar4 + 8 + lVar10) = lVar11;
    *(longlong *)(lVar4 + 0x10 + lVar10) = lVar8;
    *(undefined8 *)(lVar4 + 0x18 + lVar10) = 0;
    if (((*param_4 != -1) && (param_4[1] != -1)) && (*(longlong *)(param_4 + 2) != 0)) {
      piVar7 = (int *)FUN_1411591a0(param_1[0x3d],param_4);
      if (piVar7 != (int *)0x0) {
        lVar6 = param_1[0x5b];
        lVar8 = (longlong)*piVar7 * 0x60;
        *(longlong **)(lVar6 + lVar8) = param_1;
        uVar5 = *(undefined8 *)(piVar7 + 2);
        puVar1 = (undefined8 *)(lVar6 + 8 + lVar8);
        *puVar1 = *(undefined8 *)piVar7;
        puVar1[1] = uVar5;
        *(undefined8 *)(lVar6 + 0x18 + lVar8) = *(undefined8 *)(piVar7 + 4);
        *(longlong *)(lVar4 + lVar10 + 0x18) = lVar6 + lVar8;
      }
    }
  }
  return;
}



// FUNCTION 14446c976 FUN_14446c976 body=473 status=ok
// SIG undefined FUN_14446c976(void)

undefined8 FUN_14446c976(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_d8 [44];
  undefined4 local_ac;
  longlong local_a8 [10];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_ac = *param_2;
  if (*(char *)*param_1 == '\x01') {
    local_58 = (longlong *)0x0;
    local_50 = 0x100000000;
    (**(code **)(*(longlong *)param_1[1] + 0x38))
              ((longlong *)param_1[1],param_1[2],&local_ac,local_a8);
    plVar8 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar8 = local_a8;
    }
    if ((longlong)(int)local_50 != 0) {
      plVar9 = plVar8 + (longlong)(int)local_50 * 10;
      do {
        plVar3 = (longlong *)param_1[3];
        if (0 < (int)plVar3[1]) {
          lVar7 = 0;
          do {
            if ((int)plVar8[1] == *(int *)((longlong)plVar8 + 0x34)) {
LAB_14446cafb:
              *(undefined1 *)*param_1 = 0;
              break;
            }
            lVar1 = *(longlong *)(*plVar3 + lVar7 * 0x50);
            uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
            uVar5 = (uint)lVar1 & 0xffff;
            plVar3 = (longlong *)plVar8[8];
            if ((longlong *)plVar8[8] == (longlong *)0x0) {
              plVar3 = plVar8 + 7;
            }
            iVar6 = *(int *)((longlong)plVar3 +
                            (ulonglong)
                            ((int)plVar8[9] - 1U &
                            (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
            if (iVar6 == -1) goto LAB_14446cafb;
            while (plVar3 = (longlong *)(*plVar8 + (longlong)iVar6 * 0x14), *plVar3 != lVar1) {
              iVar6 = *(int *)((longlong)plVar3 + 0xc);
              if (iVar6 == -1) goto LAB_14446cafb;
            }
            if ((plVar3 == (longlong *)0x0) || (plVar3 + 1 == (longlong *)0x0)) goto LAB_14446cafb;
            lVar1 = *(longlong *)param_1[4];
            lVar4 = lVar7 * 0x10;
            iVar6 = *(int *)(lVar1 + 8 + lVar4);
            *(uint *)(lVar1 + 8 + lVar4) = iVar6 + 1U;
            if (*(uint *)(lVar1 + 0xc + lVar4) < iVar6 + 1U) {
              FUN_1446f48e2((longlong *)(lVar1 + lVar4),iVar6);
            }
            *(int *)(*(longlong *)(lVar1 + lVar4) + (longlong)iVar6 * 4) = (int)plVar3[1];
            lVar7 = lVar7 + 1;
            plVar3 = (longlong *)param_1[3];
          } while (lVar7 < (int)plVar3[1]);
        }
      } while ((*(char *)*param_1 == '\x01') && (plVar8 = plVar8 + 10, plVar8 != plVar9));
    }
    FUN_14446cbe0(local_a8);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14446cb50 FUN_14446cb50 body=78 status=ok
// SIG undefined FUN_14446cb50(void)

undefined8 * FUN_14446cb50(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14bad5620;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 14446cba4 FUN_14446cba4 body=29 status=ok
// SIG undefined FUN_14446cba4(void)

void FUN_14446cba4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14446cbc2 FUN_14446cbc2 body=29 status=ok
// SIG undefined FUN_14446cbc2(void)

undefined8 FUN_14446cbc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14446cbe0 FUN_14446cbe0 body=53 status=ok
// SIG undefined FUN_14446cbe0(void)

void FUN_14446cbe0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar1 = param_1;
  }
  FUN_14446cc15(lVar1,*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14446cc15 FUN_14446cc15 body=59 status=ok
// SIG undefined FUN_14446cc15(void)

void FUN_14446cc15(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1401ad17c(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 14446cc50 FUN_14446cc50 body=156 status=ok
// SIG undefined FUN_14446cc50(void)

ulonglong FUN_14446cc50(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = *param_2;
  lVar1 = *param_1;
  pcVar2 = *(code **)(lVar1 + 0x90);
  plVar5 = (longlong *)(lVar1 + 0xb0);
  if (*(longlong **)(lVar1 + 0xa0) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0xa0);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  cVar3 = (*pcVar2)(uVar4,&local_24);
  uVar6 = CONCAT71((int7)((ulonglong)&local_24 >> 8),1);
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(*(longlong *)param_1[3] + 200))((longlong *)param_1[3],local_24);
    if (cVar3 == '\0') {
      *(int *)param_1[1] = *(int *)param_1[1] + 1;
    }
    else {
      *(undefined1 *)param_1[2] = 1;
      uVar6 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14446ccee FUN_14446ccee body=70 status=ok
// SIG undefined FUN_14446ccee(void)

undefined8 * FUN_14446ccee(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14bad5640;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 14446cd3a FUN_14446cd3a body=29 status=ok
// SIG undefined FUN_14446cd3a(void)

void FUN_14446cd3a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14446cd58 FUN_14446cd58 body=29 status=ok
// SIG undefined FUN_14446cd58(void)

undefined8 FUN_14446cd58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14446cd76 FUN_14446cd76 body=29 status=ok
// SIG undefined FUN_14446cd76(void)

undefined8 FUN_14446cd76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14446cda8 FUN_14446cda8 body=93 status=ok
// SIG undefined FUN_14446cda8(void)

void FUN_14446cda8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bad56d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bad5660;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14446ce06 FUN_14446ce06 body=93 status=ok
// SIG undefined FUN_14446ce06(void)

void FUN_14446ce06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bad56d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bad5660;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14446ce64 FUN_14446ce64 body=126 status=ok
// SIG undefined FUN_14446ce64(void)

void FUN_14446ce64(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bad56d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bad5660;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014446ced3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14446cee2 FUN_14446cee2 body=46 status=ok
// SIG undefined FUN_14446cee2(void)

void FUN_14446cee2(longlong param_1)

{
  FUN_14001a7b2();
                    /* WARNING: Could not recover jumptable at 0x00014446cf0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_14cc012d0 + 0x148))(&DAT_14cc012d0,param_1 + 0x18);
  return;
}



// FUNCTION 14446cf10 FUN_14446cf10 body=45 status=ok
// SIG undefined FUN_14446cf10(void)

undefined8 FUN_14446cf10(longlong param_1)

{
  FUN_14001a7b2();
  (**(code **)(DAT_14cc012d0 + 0x148))(&DAT_14cc012d0,param_1 + 0x18);
  return 1;
}



// FUNCTION 14446cf3d FUN_14446cf3d body=1841 status=ok
// SIG undefined FUN_14446cf3d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14446cf3d(void)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  uint local_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446f470e(&local_50,PTR_u_bool_14c764e60,1);
  FUN_1446f470e(&local_50,PTR_u_float_14c764e68,1);
  FUN_1446f470e(&local_50,PTR_u_double_14c764e70,1);
  FUN_1446f470e(&local_50,PTR_DAT_14c764e78,1);
  FUN_1446f470e(&local_50,PTR_u_int32_14c764e80,1);
  FUN_1446f470e(&local_50,PTR_u_int64_14c764e88,1);
  FUN_1446f470e(&local_50,PTR_u_uint8_14c764e90,1);
  FUN_1446f470e(&local_50,PTR_u_uint32_14c764e98,1);
  FUN_1446f470e(&local_50,PTR_u_uint64_14c764ea0,1);
  FUN_1446f470e(&local_50,PTR_u_FName_14c764ea8,1);
  FUN_1446f470e(&local_50,PTR_u_FString_14c764eb0,1);
  FUN_1446f470e(&local_50,PTR_u_FText_14c764eb8,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<bool>_14c764ec0,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<float>_14c764ec8,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<double>_14c764ed0,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<int32>_14c764ed8,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<uint32>_14c764ee0,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<uint8>_14c764ee8,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<FName>_14c764ef0,1);
  FUN_1446f470e(&local_50,PTR_u_TArray<FString>_14c764ef8,1);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  lVar2 = 0;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bac48c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bac49a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bac4ad0);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14bac4c50 + lVar2),L"/Script/RigVM",
                  *(undefined8 *)((longlong)&PTR_u_ERigVMPinDirection_14bac4c58 + lVar2),
                  *(undefined8 *)((longlong)&PTR_DAT_14bac4c60 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x40);
  lVar2 = 0;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14bac4dc0 + lVar2),L"/Script/RigVM",
                  *(undefined8 *)((longlong)&PTR_u_ERigVMTransformSpace_14bac4dc8 + lVar2),
                  *(undefined8 *)((longlong)&PTR_DAT_14bac4dd0 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x40);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bac4e80);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bac4ff0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bac5130);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bac52a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bac5490);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bac55d0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/RigVM",&PTR_FUN_14bac5b40,1,&PTR_FUN_14bac5b10);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bac5bf0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bac6150);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bac6270);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bac6700);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cc002b8);
  if (cVar1 == '\0') {
    _DAT_14cc002b8 = 0;
    uRam000000014cc002c0 = 0;
  }
  if (CONCAT44(uStack_4c,local_50) != 0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/RigVM",&PTR_FUN_14bac6e10,1,&PTR_FUN_14bac6de0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14bac96a0;
  local_68 = 1;
  FUN_14282b410(L"/Script/RigVM",&PTR_FUN_14bac96f0,1,&PTR_FUN_14bac96c0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/RigVM",&PTR_FUN_14baca0e0,2,0);
  DAT_14cc00b50 = 0;
  uRam000000014cc00b58 = 0;
  atexit((_func_5014 *)&LAB_144466bf0);
  uStack_58 = 2;
  ppuStack_60 = &PTR_FUN_14bacba50;
  local_68 = 0x16;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bacba90);
  DAT_14cc00680 = 0;
  uRam000000014cc00688 = 0;
  atexit((_func_5014 *)&LAB_144466c6f);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14bacbf80;
  local_68 = 2;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bacbfa0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bacc070);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cc00820);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cc00820,4000);
  atexit((_func_5014 *)&LAB_144466cb7);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bacc1b0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14bacc500;
  local_68 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bacc520);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bacc5c0);
  local_50 = 0;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cc008f0,L"RigVM.EnableDrawInterfaceInShipping",&local_50,
                L"Set to 1 to enable control rig draw interface in shipping");
  atexit(FUN_1444673cc);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bacc8d0);
  local_50 = local_50 & 0xffffff00;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cc00968,L"RigVM.ReportAllMessages",&local_50,
                L"Report all log messages, even when no logging procedure has been setup.");
  atexit(FUN_14446bcf4);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 7;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bace3e0);
  DAT_14cc00a60 = 0;
  DAT_14cc00a70 = 0;
  atexit((_func_5014 *)&LAB_14446bfc6);
  DAT_14cc00aa0 = 0;
  DAT_14cc00ab0 = 0;
  atexit((_func_5014 *)&LAB_14446bfed);
  DAT_14cc00ae0 = 0;
  DAT_14cc00af0 = 0;
  atexit((_func_5014 *)&LAB_14446c014);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14446d670 FUN_14446d670 body=55 status=ok
// SIG undefined FUN_14446d670(void)

void FUN_14446d670(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01010 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01010 = FUN_14171c317(FUN_1466849ad,uVar1,L"ERigVMMemoryType");
  }
  return;
}



// FUNCTION 14446d6ac FUN_14446d6ac body=55 status=ok
// SIG undefined FUN_14446d6ac(void)

void FUN_14446d6ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01058 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01058 = FUN_14171c317(FUN_146684ad2,uVar1,L"ERigVMRegisterType");
  }
  return;
}



// FUNCTION 14446d6e4 FUN_14446d6e4 body=2403 status=ok
// SIG undefined FUN_14446d6e4(void)

ulonglong FUN_14446d6e4(longlong param_1,undefined2 **param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140056680(&local_78,&DAT_149e0635c);
  local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
  local_a8 = CONCAT44(local_a8._4_4_,1);
  cVar3 = FUN_1407cdbc6(param_2,&local_78,&local_58,&local_68);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (&local_58 != param_2 && cVar3 == '\0') {
    uVar4 = *(uint *)(param_2 + 1);
    puVar6 = *param_2;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
    if (uVar4 == 0 && uStack_50._4_4_ == 0) {
      uStack_50 = (ulonglong)uVar4;
    }
    else {
      FUN_1446dd670(&local_58,uVar4);
      if (uVar4 != 0) {
        memcpy(local_58,puVar6,(longlong)(int)uVar4 * 2);
      }
    }
  }
  puVar6 = local_58;
  if ((int)uStack_50 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_80,puVar6,1);
  for (plVar9 = *(longlong **)(param_1 + 0x70); plVar9 != (longlong *)0x0;
      plVar9 = (longlong *)plVar9[9]) {
    if (plVar9[4] == local_80) {
      iVar1 = *(int *)((longlong)plVar9 + 0x44);
      uVar4 = *(uint *)(param_3 + 1);
      lVar7 = (longlong)(int)uVar4;
      if (lVar7 < 1) {
        *(uint *)(param_3 + 1) = uVar4 + 1;
        if (*(uint *)((longlong)param_3 + 0xc) < uVar4 + 1) {
LAB_14446d83d:
          FUN_1446f48e2(param_3,uVar4);
        }
        lVar5 = *param_3;
LAB_14446d84a:
        *(int *)(lVar5 + lVar7 * 4) = iVar1;
      }
      else {
        lVar5 = *param_3;
        iVar2 = *(int *)(lVar5 + -4 + lVar7 * 4);
        if (iVar2 < 0) {
          *(uint *)(param_3 + 1) = uVar4 + 1;
          if (*(uint *)((longlong)param_3 + 0xc) <= uVar4) goto LAB_14446d83d;
          goto LAB_14446d84a;
        }
        *(int *)(lVar5 + -4 + lVar7 * 4) = iVar2 + iVar1;
      }
      if (1 < (int)uStack_60) {
        puVar8 = (undefined *)plVar9[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952a58) &&
           (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
            local_98 = (undefined *)FUN_140342cba();
            local_90 = FUN_1468c7f1e;
            local_a0 = 0;
            local_a8 = 0x8001;
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
          local_90 = FUN_1403a682c;
          local_98 = &DAT_14c951a38;
          local_a0 = 0;
          local_a8 = 0x108001;
          FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
          atexit(FUN_142818c9e);
          _Init_thread_footer(&DAT_14c952a58);
        }
        if (DAT_14c952a10 != 0) {
          if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c952a10) != 0) goto LAB_14446d8bb;
          goto LAB_14446d9d7;
        }
        bVar12 = puVar8 != (undefined *)0x0;
        if (puVar8 != &DAT_14c952a08 && bVar12) goto LAB_14446d9bb;
        goto LAB_14446d9cf;
      }
      (**(code **)(*plVar9 + 0x70))(plVar9,&local_78,0,0);
      puVar6 = local_78;
      if (local_70 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_88,puVar6,1);
      *(undefined8 *)((longlong)param_3 + 0x14) = local_88;
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      *(undefined2 *)((longlong)param_3 + 0x34) = *(undefined2 *)((longlong)plVar9 + 0x34);
      puVar8 = (undefined *)plVar9[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_98 = (undefined *)FUN_140342cba();
          local_90 = FUN_1468c7f1e;
          local_a0 = 0;
          local_a8 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_90 = FUN_140b31576;
        local_98 = &DAT_14c951a38;
        local_a0 = 0;
        local_a8 = 0x208001;
        FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
        atexit(FUN_14280cbf7);
        _Init_thread_footer(&DAT_14c951ae0);
      }
      if (DAT_14c951a98 != 0) {
        if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c951a98) != 0) goto LAB_14446d94c;
        goto LAB_14446daa1;
      }
      bVar12 = puVar8 != (undefined *)0x0;
      if (puVar8 != &DAT_14c951a90 && bVar12) goto LAB_14446da3b;
      goto LAB_14446da4f;
    }
  }
  uVar10 = 0;
  goto LAB_14446db82;
  while (puVar8 != (undefined *)0x0) {
LAB_14446d9bb:
    puVar8 = *(undefined **)(puVar8 + 0x30);
    bVar12 = puVar8 != (undefined *)0x0;
    if (puVar8 == &DAT_14c952a08) break;
  }
LAB_14446d9cf:
  if (bVar12) {
LAB_14446d8bb:
    uVar4 = FUN_14446d6e4(plVar9[0xe],&local_68,param_3);
LAB_14446db80:
    uVar10 = (ulonglong)uVar4;
    goto LAB_14446db82;
  }
LAB_14446d9d7:
  plVar11 = (longlong *)plVar9[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      local_98 = (undefined *)FUN_140342cba();
      local_90 = FUN_1468c7f1e;
      local_a0 = 0;
      local_a8 = 0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    local_90 = FUN_140b31576;
    local_98 = &DAT_14c951a38;
    local_a0 = 0;
    local_a8 = 0x208001;
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  if (DAT_14c951a98 == 0) {
    bVar12 = plVar11 != (longlong *)0x0;
    if (plVar11 != (longlong *)&DAT_14c951a90 && bVar12) {
      do {
        plVar11 = (longlong *)plVar11[6];
        bVar12 = plVar11 != (longlong *)0x0;
        if (plVar11 == (longlong *)&DAT_14c951a90) break;
      } while (plVar11 != (longlong *)0x0);
    }
    uVar10 = CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
    if (!bVar12) goto LAB_14446db82;
LAB_14446db70:
    uVar4 = FUN_14447acac(plVar9,&local_68,param_3);
    goto LAB_14446db80;
  }
  if ((plVar11[3] & DAT_14c951a98) != 0) goto LAB_14446db70;
  goto LAB_14446db36;
  while (puVar8 != (undefined *)0x0) {
LAB_14446da3b:
    puVar8 = *(undefined **)(puVar8 + 0x30);
    bVar12 = puVar8 != (undefined *)0x0;
    if (puVar8 == &DAT_14c951a90) break;
  }
LAB_14446da4f:
  if (bVar12) {
LAB_14446d94c:
    iVar1 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
      FUN_1446f48e2(param_3,iVar1);
    }
    *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = 0xffffffff;
    plVar11 = (longlong *)plVar9[0xf];
    (**(code **)(*plVar11 + 0x70))(plVar11,&local_78,0,0);
    puVar6 = local_78;
    if (local_70 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_88,puVar6,1);
    *(undefined8 *)((longlong)param_3 + 0x14) = local_88;
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *(undefined2 *)((longlong)param_3 + 0x34) = *(undefined2 *)(plVar9[0xf] + 0x34);
    plVar9 = plVar11;
    if (plVar11 != (longlong *)0x0) goto LAB_14446daa1;
  }
  else {
LAB_14446daa1:
    puVar8 = (undefined *)plVar9[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_98 = (undefined *)FUN_140342cba();
        local_90 = FUN_1468c7f1e;
        local_a0 = 0;
        local_a8 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_90 = FUN_1403a682c;
      local_98 = &DAT_14c951a38;
      local_a0 = 0;
      local_a8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
    if (DAT_14c952a10 == 0) {
      bVar12 = puVar8 != (undefined *)0x0;
      if (puVar8 != &DAT_14c952a08 && bVar12) {
        do {
          puVar8 = *(undefined **)(puVar8 + 0x30);
          bVar12 = puVar8 != (undefined *)0x0;
          if (puVar8 == &DAT_14c952a08) break;
        } while (puVar8 != (undefined *)0x0);
      }
      if (bVar12) goto LAB_14446dadc;
    }
    else if ((*(ulonglong *)(puVar8 + 0x18) & DAT_14c952a10) != 0) {
LAB_14446dadc:
      lVar7 = plVar9[0xe];
      if (DAT_14c950c29 == '\x01') {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = plVar9[0xe];
        }
      }
      param_3[4] = lVar7;
      *(undefined1 *)(param_3 + 2) = 3;
      plVar11 = plVar9;
      goto LAB_14446db36;
    }
  }
  *(undefined1 *)(param_3 + 2) = 0;
  plVar11 = plVar9;
LAB_14446db36:
  uVar10 = CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
LAB_14446db82:
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14446e048 FUN_14446e048 body=4995 status=ok
// SIG undefined FUN_14446e048(void)

void FUN_14446e048(byte *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  longlong *plVar6;
  short sVar7;
  longlong lVar8;
  DWORD DVar9;
  ushort uVar10;
  DWORD DVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  void *pvVar16;
  undefined2 *puVar17;
  int iVar18;
  longlong lVar19;
  byte *pbVar20;
  uint uVar21;
  byte bVar22;
  longlong lVar23;
  PSRWLOCK pRVar24;
  byte *pbVar25;
  undefined2 uVar26;
  size_t _Size;
  longlong *plVar27;
  PSRWLOCK pRVar28;
  byte *pbVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined1 auStack_198 [32];
  wchar_t *local_178;
  PSRWLOCK *local_170;
  PSRWLOCK *local_168;
  wchar_t *local_160;
  wchar_t *local_158;
  code *local_150;
  undefined1 *local_148;
  PSRWLOCK *local_140;
  code *local_138;
  code *local_130;
  byte *local_128;
  byte *local_120;
  byte *local_118;
  byte *local_110;
  longlong *local_108;
  byte *local_100;
  PSRWLOCK local_f8 [2];
  PSRWLOCK local_e8;
  code ***pppcStack_e0;
  ulonglong local_d8;
  PSRWLOCK local_c8;
  code ***pppcStack_c0;
  ulonglong local_b8 [2];
  longlong local_a8;
  ulonglong uStack_a0;
  PSRWLOCK local_98;
  ulonglong uStack_90;
  PSRWLOCK local_80;
  undefined1 local_78 [8];
  PSRWLOCK local_70;
  PSRWLOCK *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar18 = 0;
    do {
      FUN_1490f555c(param_1,iVar18);
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(param_1 + 0x10));
  }
  piVar5 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
    local_c8 = (PSRWLOCK)CONCAT44(local_c8._4_4_,(uint)*param_1);
    (**(code **)(*param_2 + 0x170))(param_2,&local_c8,4);
    if (1 < (uint)local_c8) {
      FUN_14572541c(param_2);
    }
    *param_1 = (uint)local_c8 != 0;
  }
  else {
    *param_1 = *piVar5 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  pbVar20 = param_1 + 8;
  pbVar29 = *(byte **)param_2[1];
  if ((byte *)((undefined8 *)param_2[1])[1] < pbVar29 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,1);
  }
  else {
    param_1[1] = *pbVar29;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  FUN_149154942(param_2,pbVar20);
  local_100 = param_1 + 0x18;
  FUN_149154b2c(param_2);
  param_1[0x98] = 0;
  iVar18 = *(int *)(param_1 + 0x20);
  local_128 = param_1;
  if ((longlong)iVar18 != 0) {
    lVar30 = *(longlong *)(param_1 + 0x18);
    lVar19 = 0;
    do {
      if (*(char *)(lVar30 + 0x10 + lVar19) == '\x04') {
        (**(code **)(*param_2 + 0x18))(param_2,&local_c8);
        local_128[0x98] = 1;
        if (local_c8 != (PSRWLOCK)0x0) {
          FUN_1400020a8();
        }
      }
      lVar19 = lVar19 + 0x48;
    } while ((longlong)iVar18 * 0x48 != lVar19);
  }
  pbVar25 = local_128;
  pbVar29 = local_128 + 0x38;
  iVar18 = *(int *)(local_128 + 0x44);
  local_128[0x40] = 0;
  local_128[0x41] = 0;
  local_128[0x42] = 0;
  local_128[0x43] = 0;
  local_110 = pbVar20;
  if (iVar18 < 0) {
    FUN_140b3dcb0(pbVar29,0);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_118 = pbVar29;
  local_108 = param_2;
  FUN_1405d0c38(param_2,&local_a8);
  lVar30 = local_a8;
  local_120 = (byte *)(longlong)(int)uStack_a0;
  if (local_120 != (byte *)0x0) {
    local_120 = (byte *)((longlong)local_120 << 4);
    pbVar29 = (byte *)0x0;
    pbVar20 = local_118;
    do {
      puVar17 = &DAT_149dfb77a;
      if (*(int *)(pbVar29 + lVar30 + 8) != 0) {
        puVar17 = *(undefined2 **)(pbVar29 + lVar30);
      }
      FUN_140056680(&local_c8,puVar17);
      lVar19 = FUN_14447d018(&local_c8);
      if (lVar19 == 0) {
LAB_14446e28d:
        lVar19 = 0;
      }
      else {
        if (DAT_14c948fa0 == 0) {
          local_70 = (PSRWLOCK)&DAT_1427db2a2;
          lVar13 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c948fa0 = lVar13;
          FUN_1446f470e(&local_68,L"ScriptStruct",1);
          local_140 = &local_70;
          local_148 = &LAB_1468915ce;
          local_150 = FUN_1427dc742;
          local_160 = L"Engine";
          local_158 = (wchar_t *)CONCAT44(local_158._4_4_,199);
          local_168 = (PSRWLOCK *)&DAT_00000010;
          local_170 = (PSRWLOCK *)CONCAT44(local_170._4_4_,0x10000020);
          local_178._0_4_ = 8;
          FUN_14574b4b2(lVar13);
          DAT_14c948fa0 = lVar13;
          if (DAT_14c927740 == 0) {
            local_e8 = (PSRWLOCK)FUN_1449e2820;
            local_130 = FUN_14081d0ea;
            local_138 = FUN_14081d0ea;
            local_140 = &local_e8;
            local_148 = &LAB_146856450;
            local_150 = FUN_1427b121c;
            local_158 = L"Engine";
            local_160 = (wchar_t *)0x0;
            local_168 = (PSRWLOCK *)CONCAT44(local_168._4_4_,0x10000021);
            local_170 = (PSRWLOCK *)CONCAT44(local_170._4_4_,8);
            local_178._0_4_ = 0x28;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          }
          lVar23 = DAT_14c948fa0;
          lVar13 = DAT_14c927740;
          if (DAT_14c948f88 == 0) {
            local_f8[0] = (PSRWLOCK)&DAT_1427db2a2;
            lVar14 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c948f88 = lVar14;
            FUN_1446f470e(&local_98,L"Struct",1);
            local_140 = local_f8;
            local_148 = &LAB_146891313;
            local_150 = FUN_146272f63;
            local_160 = L"Engine";
            local_158 = (wchar_t *)CONCAT44(local_158._4_4_,199);
            local_168 = (PSRWLOCK *)&DAT_00000008;
            local_170 = (PSRWLOCK *)CONCAT44(local_170._4_4_,0x10000020);
            local_178._0_4_ = 8;
            FUN_14574b4b2(lVar14);
            DAT_14c948f88 = lVar14;
            if (DAT_14c927740 == 0) {
              local_e8 = (PSRWLOCK)FUN_1449e2820;
              local_130 = FUN_14081d0ea;
              local_138 = FUN_14081d0ea;
              local_140 = &local_e8;
              local_148 = &LAB_146856450;
              local_150 = FUN_1427b121c;
              local_158 = L"Engine";
              local_160 = (wchar_t *)0x0;
              local_168 = (PSRWLOCK *)CONCAT44(local_168._4_4_,0x10000021);
              local_170 = (PSRWLOCK *)CONCAT44(local_170._4_4_,8);
              local_178._0_4_ = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            }
            lVar8 = DAT_14c948f88;
            lVar14 = DAT_14c927740;
            uVar15 = FUN_1400163b0();
            local_178 = L"Struct";
            FUN_14574b446(uVar15,lVar8,lVar14,L"/Script/CoreUObject");
          }
          local_178 = L"ScriptStruct";
          FUN_14574b446(DAT_14c948f88,lVar23,lVar13,L"/Script/CoreUObject");
          pbVar20 = local_118;
          pbVar25 = local_128;
        }
        if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < *(int *)(DAT_14c948fa0 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) != DAT_14c948fa0 + 0x30))
        goto LAB_14446e28d;
      }
      if (local_c8 != (PSRWLOCK)0x0) {
        FUN_1400020a8();
      }
      if (lVar19 == 0) {
        local_c8 = (PSRWLOCK)0x0;
        pppcStack_c0 = (code ***)0x0;
        local_b8[0] = 0;
        local_e8 = *(PSRWLOCK *)(pbVar29 + lVar30);
        iVar18 = *(int *)(pbVar29 + lVar30 + 8) + -1;
        if (*(int *)(pbVar29 + lVar30 + 8) == 0) {
          iVar18 = 0;
        }
        pppcStack_e0 = (code ***)CONCAT44(pppcStack_e0._4_4_,iVar18);
        FUN_1448405cc(&local_e8,&local_c8,&pppcStack_c0,local_b8);
        DVar9 = DAT_14c949610;
        local_98 = (PSRWLOCK)&DAT_14c949608;
        uStack_90 = CONCAT71(uStack_90._1_7_,1);
        if (DAT_14c949610 == 0) {
          AcquireSRWLockShared((PSRWLOCK)&DAT_14c949608);
        }
        else {
          DVar11 = GetCurrentThreadId();
          if (DVar9 == DVar11) {
            DAT_14c949614 = DAT_14c949614 + 1;
            pbVar25 = local_128;
          }
          else {
            AcquireSRWLockShared((PSRWLOCK)&DAT_14c949608);
            pbVar25 = local_128;
          }
        }
        local_e8 = (PSRWLOCK)0x0;
        pppcStack_e0 = (code ***)0x0;
        local_d8 = 0;
        local_170 = &local_98;
        local_178 = (wchar_t *)((ulonglong)local_178 & 0xffffffff00000000);
        FUN_140159c68(4,&local_c8,&local_e8,0);
        pRVar28 = local_98;
        if ((char)uStack_90 == '\x01') {
          if (*(int *)((longlong)&local_98[1].Ptr + 4) < 1) {
            ReleaseSRWLockShared(local_98);
          }
          else {
            GetCurrentThreadId();
            piVar5 = (int *)((longlong)&pRVar28[1].Ptr + 4);
            *piVar5 = *piVar5 + -1;
          }
        }
        pbVar20 = local_118;
        if (((local_c8 != local_e8) || (pppcStack_c0 != pppcStack_e0)) || (local_b8[0] != local_d8))
        {
          FUN_14103ad02(&local_98,local_e8,pppcStack_e0,local_d8);
          pRVar28 = (PSRWLOCK)&DAT_149dfb77a;
          if ((int)uStack_90 != 0) {
            pRVar28 = local_98;
          }
          if (DAT_14c948fa0 == 0) {
            local_80 = (PSRWLOCK)&DAT_1427db2a2;
            lVar19 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c948fa0 = lVar19;
            FUN_1446f470e(local_78,L"ScriptStruct",1);
            local_140 = &local_80;
            local_148 = &LAB_1468915ce;
            local_150 = FUN_1427dc742;
            local_160 = L"Engine";
            local_158 = (wchar_t *)CONCAT44(local_158._4_4_,199);
            local_168 = (PSRWLOCK *)&DAT_00000010;
            local_170 = (PSRWLOCK *)CONCAT44(local_170._4_4_,0x10000020);
            local_178._0_4_ = 8;
            FUN_14574b4b2(lVar19);
            DAT_14c948fa0 = lVar19;
            if (DAT_14c927740 == 0) {
              local_f8[0] = (PSRWLOCK)FUN_1449e2820;
              local_130 = FUN_14081d0ea;
              local_138 = FUN_14081d0ea;
              local_140 = local_f8;
              local_148 = &LAB_146856450;
              local_150 = FUN_1427b121c;
              local_158 = L"Engine";
              local_160 = (wchar_t *)0x0;
              local_168 = (PSRWLOCK *)CONCAT44(local_168._4_4_,0x10000021);
              local_170 = (PSRWLOCK *)CONCAT44(local_170._4_4_,8);
              local_178._0_4_ = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            }
            lVar13 = DAT_14c948fa0;
            lVar19 = DAT_14c927740;
            if (DAT_14c948f88 == 0) {
              local_70 = (PSRWLOCK)&DAT_1427db2a2;
              lVar23 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              DAT_14c948f88 = lVar23;
              FUN_1446f470e(&local_68,L"Struct",1);
              local_140 = &local_70;
              local_148 = &LAB_146891313;
              local_150 = FUN_146272f63;
              local_160 = L"Engine";
              local_158 = (wchar_t *)CONCAT44(local_158._4_4_,199);
              local_168 = (PSRWLOCK *)&DAT_00000008;
              local_170 = (PSRWLOCK *)CONCAT44(local_170._4_4_,0x10000020);
              local_178._0_4_ = 8;
              FUN_14574b4b2(lVar23);
              DAT_14c948f88 = lVar23;
              if (DAT_14c927740 == 0) {
                local_f8[0] = (PSRWLOCK)FUN_1449e2820;
                local_130 = FUN_14081d0ea;
                local_138 = FUN_14081d0ea;
                local_140 = local_f8;
                local_148 = &LAB_146856450;
                local_150 = FUN_1427b121c;
                local_158 = L"Engine";
                local_160 = (wchar_t *)0x0;
                local_168 = (PSRWLOCK *)CONCAT44(local_168._4_4_,0x10000021);
                local_170 = (PSRWLOCK *)CONCAT44(local_170._4_4_,8);
                local_178._0_4_ = 0x28;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
              }
              lVar14 = DAT_14c948f88;
              lVar23 = DAT_14c927740;
              uVar15 = FUN_1400163b0();
              local_178 = L"Struct";
              FUN_14574b446(uVar15,lVar14,lVar23,L"/Script/CoreUObject");
            }
            local_178 = L"ScriptStruct";
            FUN_14574b446(DAT_14c948f88,lVar13,lVar19,L"/Script/CoreUObject");
            pbVar20 = local_118;
            pbVar25 = local_128;
          }
          lVar19 = FUN_140277b32(DAT_14c948fa0,0,pRVar28,0);
          if (local_98 != (PSRWLOCK)0x0) {
            FUN_1400020a8();
          }
          if (lVar19 != 0) goto LAB_14446e444;
        }
        (**(code **)(*local_108 + 0x18))(local_108,&local_c8);
        pbVar25[0x98] = 1;
        if (local_c8 != (PSRWLOCK)0x0) {
          FUN_1400020a8();
        }
        bVar22 = 0;
        lVar19 = 0;
      }
      else {
LAB_14446e444:
        bVar22 = 1;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar19);
        }
      }
      iVar18 = *(int *)(pbVar25 + 0x40);
      *(uint *)(pbVar25 + 0x40) = iVar18 + 1U;
      if (*(uint *)(pbVar25 + 0x44) < iVar18 + 1U) {
        FUN_140c48848(pbVar20,iVar18);
      }
      *(longlong *)(*(longlong *)pbVar20 + (longlong)iVar18 * 8) = lVar19;
      if ((bVar22 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar19);
      }
      pbVar29 = pbVar29 + 0x10;
    } while (local_120 != pbVar29);
  }
  plVar27 = local_108;
  pbVar20 = local_110;
  local_70 = (PSRWLOCK)0x0;
  plVar6 = (longlong *)local_108[1];
  if ((undefined8 *)plVar6[1] < (undefined8 *)*plVar6 + 1) {
    if ((*(byte *)((longlong)local_108 + 0x2a) & 2) == 0) {
      (**(code **)(*local_108 + 0x170))(local_108,&local_70,8);
    }
    else {
      FUN_146821949(local_108);
    }
  }
  else {
    local_70 = *(PSRWLOCK *)*plVar6;
    *plVar6 = *plVar6 + 8;
  }
  pbVar29 = pbVar25 + 0x28;
  pbVar25[0x30] = 0;
  pbVar25[0x31] = 0;
  pbVar25[0x32] = 0;
  pbVar25[0x33] = 0;
  if (*(int *)(pbVar25 + 0x34) != 0) {
    FUN_144893a1c(pbVar29);
  }
  iVar18 = *(int *)(pbVar25 + 0x10);
  if (pbVar25[0x98] == 0) {
    if (0 < iVar18) {
      lVar19 = 0;
      lVar30 = 0;
      do {
        lVar13 = *(longlong *)pbVar20;
        lVar23 = (longlong)*(int *)(lVar13 + 0x1c + lVar19);
        if ((lVar23 == -1) ||
           (lVar23 = *(longlong *)(*(longlong *)local_118 + lVar23 * 8), lVar23 == 0)) {
          if (*(char *)(lVar13 + lVar19) == '\x02') {
            uVar10 = 8;
            goto LAB_14446f248;
          }
          if (*(char *)(lVar13 + lVar19) == '\x01') {
            uVar10 = 0x10;
            goto LAB_14446f248;
          }
        }
        else {
          sVar7 = (short)*(undefined4 *)(lVar23 + 0x5c);
          uVar10 = -sVar7 & ((short)*(undefined4 *)(lVar23 + 0x58) + sVar7) - 1U;
LAB_14446f248:
          *(ushort *)(lVar13 + 8 + lVar19) = uVar10;
        }
        *(undefined1 *)(lVar13 + 0xe + lVar19) = 0;
        *(undefined2 *)(lVar13 + 0x10 + lVar19) = 0;
        if (*(char *)(*(longlong *)pbVar20 + 0x21 + lVar19) == '\x01') {
          iVar18 = *(int *)(pbVar25 + 0x30);
          *(int *)(pbVar25 + 0x30) = iVar18 + 0x10;
          if ((uint)(*(int *)(pbVar25 + 0x34) - iVar18) < 0x10) {
            FUN_1447403be(pbVar29);
          }
          lVar23 = *(longlong *)pbVar29;
          *(undefined8 *)(lVar23 + iVar18) = 0;
          ((undefined8 *)(lVar23 + iVar18))[1] = 0;
        }
        else {
          uVar10 = *(short *)(lVar13 + 8 + lVar19) * *(short *)(lVar13 + 10 + lVar19) *
                   *(short *)(lVar13 + 0xc + lVar19);
          iVar18 = *(int *)(pbVar25 + 0x30);
          *(uint *)(pbVar25 + 0x30) = iVar18 + (uint)uVar10;
          if ((uint)(*(int *)(pbVar25 + 0x34) - iVar18) < (uint)uVar10) {
            FUN_1447403be(pbVar29);
          }
          memset((void *)((longlong)iVar18 + *(longlong *)pbVar29),0,(ulonglong)uVar10);
        }
        *(int *)(lVar13 + 4 + lVar19) = iVar18;
        lVar30 = lVar30 + 1;
        lVar19 = lVar19 + 0x24;
      } while (lVar30 < *(int *)(pbVar25 + 0x10));
    }
    FUN_1490f50de();
    plVar27 = local_108;
    if (0 < *(int *)(pbVar25 + 0x20)) {
      lVar30 = 0x34;
      lVar19 = 0;
      do {
        lVar13 = *(longlong *)local_100;
        lVar23 = *(longlong *)(lVar13 + -0x14 + lVar30);
        if (lVar23 != 0) {
          sVar7 = (short)*(undefined4 *)(lVar23 + 0x5c);
          *(ushort *)(lVar13 + lVar30) =
               -sVar7 & ((short)*(undefined4 *)(lVar23 + 0x58) + sVar7) - 1U;
        }
        cVar3 = *(char *)(lVar13 + -0x24 + lVar30);
        if (cVar3 == '\x02') {
          uVar26 = 8;
LAB_14446f361:
          *(undefined2 *)(lVar13 + lVar30) = uVar26;
        }
        else if (cVar3 == '\x01') {
          uVar26 = 0x10;
          goto LAB_14446f361;
        }
        lVar19 = lVar19 + 1;
        lVar30 = lVar30 + 0x48;
      } while (lVar19 < *(int *)(pbVar25 + 0x20));
    }
    iVar18 = *(int *)(pbVar25 + 0x10);
    if (iVar18 < 1) goto LAB_14446f191;
    lVar30 = 0x21;
    uVar31 = 0;
    do {
      if (*(char *)(*(longlong *)pbVar20 + lVar30) == '\0') {
        FUN_1490f537a(pbVar25,uVar31 & 0xffffffff);
        iVar18 = *(int *)(pbVar25 + 0x10);
      }
      uVar31 = uVar31 + 1;
      lVar30 = lVar30 + 0x24;
    } while ((longlong)uVar31 < (longlong)iVar18);
  }
  local_120 = pbVar29;
  if (0 < iVar18) {
    lVar30 = 0;
    do {
      puVar1 = (undefined1 *)(*(longlong *)pbVar20 + lVar30 * 0x24);
      if (*(short *)(puVar1 + 10) == 0) {
        if ((puVar1[0x21] & 1) == 0) goto switchD_14446ec95_default;
LAB_14446ece0:
        if (puVar1[0x20] == '\0') {
          switch(*puVar1) {
          case 0:
            local_c8 = (PSRWLOCK)0x0;
            pppcStack_c0 = (code ***)0x0;
            FUN_140077068(plVar27,&local_c8);
            break;
          case 1:
          case 3:
            local_c8 = (PSRWLOCK)0x0;
            pppcStack_c0 = (code ***)0x0;
            FUN_1405d0c38(plVar27,&local_c8);
            FUN_1447a1747(local_c8,(ulonglong)pppcStack_c0 & 0xffffffff);
            break;
          case 2:
            local_c8 = (PSRWLOCK)0x0;
            pppcStack_c0 = (code ***)0x0;
            FUN_140219018(plVar27,&local_c8);
            break;
          default:
            goto switchD_14446ec95_default;
          }
          goto LAB_14446f0c6;
        }
        if (pbVar25[0x98] == 0) {
          lVar23 = (longlong)*(int *)(puVar1 + 4);
          lVar13 = *(longlong *)local_120;
          lVar19 = lVar13 + lVar23;
          iVar18 = *(int *)(lVar13 + 0xc + lVar23);
          FUN_1459ab2e7(*(undefined8 *)(lVar13 + lVar23),*(undefined4 *)(lVar13 + 8 + lVar23));
          *(undefined4 *)(lVar13 + 8 + lVar23) = 0;
          if ((iVar18 < 0) && (*(int *)(lVar19 + 0xc) != 0)) {
            FUN_146b27f1e(lVar19,0);
          }
          FUN_1490f571c(lVar19,*(undefined2 *)(puVar1 + 0xc));
          pbVar25 = local_128;
          pbVar20 = local_110;
        }
        if (*(short *)(puVar1 + 0xc) != 0) {
          uVar21 = 0;
          do {
            switch(*puVar1) {
            case 0:
              local_c8 = (PSRWLOCK)0x0;
              pppcStack_c0 = (code ***)0x0;
              FUN_140077068(plVar27,&local_c8);
              break;
            case 1:
            case 3:
              local_c8 = (PSRWLOCK)0x0;
              pppcStack_c0 = (code ***)0x0;
              FUN_1405d0c38(plVar27,&local_c8);
              FUN_1447a1747(local_c8,(ulonglong)pppcStack_c0 & 0xffffffff);
              break;
            case 2:
              local_c8 = (PSRWLOCK)0x0;
              pppcStack_c0 = (code ***)0x0;
              FUN_140219018(plVar27,&local_c8);
              break;
            default:
              goto switchD_14446ed14_default;
            }
            if (local_c8 != (PSRWLOCK)0x0) {
              FUN_1400020a8();
            }
switchD_14446ed14_default:
            uVar21 = uVar21 + 1;
          } while (uVar21 < *(ushort *)(puVar1 + 0xc));
        }
        goto switchD_14446ec95_default;
      }
      if ((puVar1[0x21] & 1) != 0) goto LAB_14446ece0;
      switch(*puVar1) {
      case 0:
        local_c8 = (PSRWLOCK)0x0;
        pppcStack_c0 = (code ***)0x0;
        FUN_140077068(plVar27,&local_c8);
        if (pbVar25[0x98] == 0) {
          _Size = (size_t)(int)pppcStack_c0;
          pvVar16 = (void *)((longlong)*(int *)(puVar1 + 4) + *(longlong *)local_120);
LAB_14446ee11:
          memcpy(pvVar16,local_c8,_Size);
        }
        goto LAB_14446f0c6;
      case 1:
        local_c8 = (PSRWLOCK)0x0;
        pppcStack_c0 = (code ***)0x0;
        FUN_1405d0c38(plVar27,&local_c8);
        pRVar28 = local_c8;
        uVar31 = (ulonglong)pppcStack_c0 & 0xffffffff;
        if ((pbVar25[0x98] == 0) && (0 < (int)pppcStack_c0)) {
          pRVar24 = (PSRWLOCK)((longlong)*(int *)(puVar1 + 4) + *(longlong *)local_120);
          lVar19 = 0;
          do {
            if (pRVar24 != pRVar28) {
              iVar18 = *(int *)((longlong)&pRVar24[1].Ptr + lVar19 + 4);
              iVar4 = *(int *)((longlong)&pRVar28[1].Ptr + lVar19);
              pvVar16 = *(void **)((longlong)&pRVar28->Ptr + lVar19);
              *(int *)((longlong)&pRVar24[1].Ptr + lVar19) = iVar4;
              if (iVar4 == 0 && iVar18 == 0) {
                *(undefined4 *)((longlong)&pRVar24[1].Ptr + lVar19 + 4) = 0;
              }
              else {
                pcVar2 = (code *)((longlong)&pRVar24->Ptr + lVar19);
                FUN_1446dd670(pcVar2,iVar4);
                if (iVar4 != 0) {
                  memcpy(*(void **)pcVar2,pvVar16,(longlong)iVar4 * 2);
                }
              }
            }
            lVar19 = lVar19 + 0x10;
          } while (uVar31 << 4 != lVar19);
          uVar31 = (ulonglong)pppcStack_c0 & 0xffffffff;
          pbVar25 = local_128;
          plVar27 = local_108;
        }
        FUN_1447a1747(local_c8,uVar31);
        pbVar20 = local_110;
        if (local_c8 != (PSRWLOCK)0x0) {
          FUN_1400020a8();
          pbVar20 = local_110;
        }
        break;
      case 2:
        local_c8 = (PSRWLOCK)0x0;
        pppcStack_c0 = (code ***)0x0;
        FUN_140219018(plVar27,&local_c8);
        if (pbVar25[0x98] == 0) {
          pvVar16 = (void *)((longlong)*(int *)(puVar1 + 4) + *(longlong *)local_120);
          _Size = (longlong)(int)pppcStack_c0 << 3;
          goto LAB_14446ee11;
        }
LAB_14446f0c6:
        if (local_c8 != (PSRWLOCK)0x0) {
          FUN_1400020a8();
        }
        break;
      case 3:
        local_98 = (PSRWLOCK)0x0;
        uStack_90 = 0;
        FUN_1405d0c38(plVar27,&local_98);
        if ((((pbVar25[0x98] == 0) && ((longlong)*(int *)(puVar1 + 0x1c) != -1)) &&
            (lVar19 = *(longlong *)(*(longlong *)local_118 + (longlong)*(int *)(puVar1 + 0x1c) * 8),
            lVar19 != 0)) && (*(short *)(puVar1 + 0xc) != 0 && *(short *)(puVar1 + 10) != 0)) {
          lVar13 = (longlong)*(int *)(puVar1 + 4) + *(longlong *)local_120;
          uVar21 = 1;
          do {
            pppcStack_c0 = (code ***)CONCAT62(pppcStack_c0._2_6_,0x100);
            local_c8 = (PSRWLOCK)&PTR_FUN_14bb016e0;
            local_b8[0] = local_b8[0] & 0xffffffff00000000;
            local_e8 = *(PSRWLOCK *)(lVar19 + 0x18);
            FUN_1400021e4(&local_e8,local_f8);
            uVar31 = (ulonglong)((uVar21 - 1 & 0xffff) << 4);
            puVar17 = &DAT_149dfb77a;
            if (*(int *)((longlong)&local_98[1].Ptr + uVar31) != 0) {
              puVar17 = *(undefined2 **)((longlong)&local_98->Ptr + uVar31);
            }
            local_68 = local_f8;
            pppcStack_e0 = (code ***)&local_68;
            local_e8 = (PSRWLOCK)FUN_1427ded96;
            local_168 = &local_e8;
            local_170 = &local_c8;
            local_160 = (wchar_t *)CONCAT71(local_160._1_7_,1);
            local_178 = (wchar_t *)((ulonglong)local_178 & 0xffffffff00000000);
            FUN_1408de6dc(lVar19,puVar17,lVar13,0);
            if (local_f8[0] != (PSRWLOCK)0x0) {
              FUN_1400020a8();
            }
            if (0 < (int)local_b8[0]) {
              pbVar25[0x98] = 1;
              break;
            }
            lVar13 = lVar13 + (ulonglong)*(ushort *)(puVar1 + 8);
            uVar12 = uVar21 & 0xffff;
            uVar21 = uVar21 + 1;
          } while (uVar12 < (uint)*(ushort *)(puVar1 + 0xc) * (uint)*(ushort *)(puVar1 + 10));
        }
        FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
        pbVar20 = local_110;
        if (local_98 != (PSRWLOCK)0x0) {
          FUN_1400020a8();
          pbVar20 = local_110;
        }
      }
switchD_14446ec95_default:
      lVar30 = lVar30 + 1;
    } while (lVar30 < *(int *)(pbVar25 + 0x10));
  }
LAB_14446f191:
  FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14446f3dd FUN_14446f3dd body=49 status=ok
// SIG undefined FUN_14446f3dd(void)

void FUN_14446f3dd(void)

{
  FUN_1401f9f1c(DAT_14cc01108,DAT_14cc01110);
  if (DAT_14cc01108 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14446f40e FUN_14446f40e body=11400 status=ok
// SIG undefined FUN_14446f40e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14446f40e(longlong *param_1,ulonglong *param_2,longlong *param_3,ulonglong *param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined7 uVar8;
  uint uVar9;
  longlong lVar10;
  ushort uVar11;
  int iVar12;
  ulonglong uVar13;
  double *pdVar14;
  float *pfVar15;
  undefined2 *puVar16;
  undefined *puVar17;
  ushort uVar18;
  undefined8 *puVar19;
  undefined2 *puVar20;
  wchar_t *pwVar21;
  bool bVar22;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined2 *local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined2 *local_d8;
  int local_d0;
  undefined2 *local_c8;
  int local_c0;
  wchar_t *local_b8;
  int local_b0;
  undefined2 *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined4 local_54;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar3 = (**(code **)(*param_1 + 0x1b0))(param_1,param_3);
  uVar8 = (undefined7)((ulonglong)param_3 >> 8);
  if (cVar3 == '\0') {
    if (param_1 == (longlong *)0x0) goto LAB_144470021;
    puVar19 = (undefined8 *)param_1[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_e8 = (wchar_t *)FUN_140342cba();
          local_e0 = FUN_1468c7f1e;
          local_f0 = (undefined2 *)0x0;
          local_f8 = (undefined2 *)0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_e0 = FUN_1468e0f50;
        local_e8 = (wchar_t *)&DAT_14c951a38;
        local_f0 = (undefined2 *)0x0;
        local_f8 = (undefined2 *)0x1008001;
        FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
        atexit(FUN_142816f26);
        _Init_thread_footer(&DAT_14c952108);
      }
      local_e0 = FUN_1408a629c;
      local_e8 = (wchar_t *)&DAT_14c9520b8;
      local_f0 = (undefined2 *)0x0;
      local_f8 = (undefined2 *)0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
    if (DAT_14c952380 == 0) {
      bVar22 = puVar19 != (undefined8 *)0x0;
      if (puVar19 != &DAT_14c952378 && bVar22) {
        do {
          puVar19 = (undefined8 *)puVar19[6];
          bVar22 = puVar19 != (undefined8 *)0x0;
          if (puVar19 == &DAT_14c952378) break;
        } while (puVar19 != (undefined8 *)0x0);
      }
      if (!bVar22) goto LAB_14446f524;
LAB_14446f49b:
      if (param_3 != (longlong *)0x0) {
        puVar17 = (undefined *)param_3[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952420) &&
           (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
            {
              local_e8 = (wchar_t *)FUN_140342cba();
              local_e0 = FUN_1468c7f1e;
              local_f0 = (undefined2 *)0x0;
              local_f8 = (undefined2 *)0x8001;
              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
              atexit(FUN_14280c819);
              _Init_thread_footer(&DAT_14c951a88);
            }
            local_e0 = FUN_1468e0f50;
            local_e8 = (wchar_t *)&DAT_14c951a38;
            local_f0 = (undefined2 *)0x0;
            local_f8 = (undefined2 *)0x1008001;
            FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
            atexit(FUN_142816f26);
            _Init_thread_footer(&DAT_14c952108);
          }
          local_e0 = FUN_14079c5e4;
          local_e8 = (wchar_t *)&DAT_14c9520b8;
          local_f8 = (undefined2 *)0x101008001;
          local_f0 = (undefined2 *)0x0;
          FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
          atexit(FUN_1428170bb);
          _Init_thread_footer(&DAT_14c952420);
        }
        if (DAT_14c9523d8 == 0) {
          bVar22 = puVar17 != (undefined *)0x0;
          if (puVar17 != &DAT_14c9523d0 && bVar22) {
            do {
              puVar17 = *(undefined **)(puVar17 + 0x30);
              bVar22 = puVar17 != (undefined *)0x0;
              if (puVar17 == &DAT_14c9523d0) break;
            } while (puVar17 != (undefined *)0x0);
          }
          if (!(bool)(bVar22 ^ 1U | param_3 == (longlong *)0x0)) goto LAB_14446f6c0;
        }
        else if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c9523d8) != 0) {
LAB_14446f6c0:
          if ((int)param_1[6] == (int)param_3[6]) {
            uVar5 = CONCAT71(uVar8,1);
            if (0 < (int)param_1[6]) {
              lVar4 = 0;
              do {
                *(float *)((longlong)param_2 + lVar4 * 4) = (float)(double)param_4[lVar4];
                lVar4 = lVar4 + 1;
              } while (lVar4 < (int)param_1[6]);
            }
            goto LAB_144470070;
          }
        }
      }
      goto LAB_144470021;
    }
    if ((puVar19[3] & DAT_14c952380) != 0) goto LAB_14446f49b;
LAB_14446f524:
    puVar17 = (undefined *)param_1[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_e8 = (wchar_t *)FUN_140342cba();
          local_e0 = FUN_1468c7f1e;
          local_f0 = (undefined2 *)0x0;
          local_f8 = (undefined2 *)0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_e0 = FUN_1468e0f50;
        local_e8 = (wchar_t *)&DAT_14c951a38;
        local_f0 = (undefined2 *)0x0;
        local_f8 = (undefined2 *)0x1008001;
        FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
        atexit(FUN_142816f26);
        _Init_thread_footer(&DAT_14c952108);
      }
      local_e0 = FUN_14079c5e4;
      local_e8 = (wchar_t *)&DAT_14c9520b8;
      local_f8 = (undefined2 *)0x101008001;
      local_f0 = (undefined2 *)0x0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
    if (DAT_14c9523d8 == 0) {
      bVar22 = puVar17 != (undefined *)0x0;
      if (puVar17 != &DAT_14c9523d0 && bVar22) {
        do {
          puVar17 = *(undefined **)(puVar17 + 0x30);
          bVar22 = puVar17 != (undefined *)0x0;
          if (puVar17 == &DAT_14c9523d0) break;
        } while (puVar17 != (undefined *)0x0);
      }
      if (!bVar22) goto LAB_14446f5ec;
LAB_14446f563:
      if (param_3 != (longlong *)0x0) {
        puVar19 = (undefined8 *)param_3[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9523c8) &&
           (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
            {
              local_e8 = (wchar_t *)FUN_140342cba();
              local_e0 = FUN_1468c7f1e;
              local_f0 = (undefined2 *)0x0;
              local_f8 = (undefined2 *)0x8001;
              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
              atexit(FUN_14280c819);
              _Init_thread_footer(&DAT_14c951a88);
            }
            local_e0 = FUN_1468e0f50;
            local_e8 = (wchar_t *)&DAT_14c951a38;
            local_f0 = (undefined2 *)0x0;
            local_f8 = (undefined2 *)0x1008001;
            FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
            atexit(FUN_142816f26);
            _Init_thread_footer(&DAT_14c952108);
          }
          local_e0 = FUN_1408a629c;
          local_e8 = (wchar_t *)&DAT_14c9520b8;
          local_f0 = (undefined2 *)0x0;
          local_f8 = (undefined2 *)0x1008101;
          FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
          atexit(FUN_14281708e);
          _Init_thread_footer(&DAT_14c9523c8);
        }
        if (DAT_14c952380 == 0) {
          bVar22 = puVar19 != (undefined8 *)0x0;
          if (puVar19 != &DAT_14c952378 && bVar22) {
            do {
              puVar19 = (undefined8 *)puVar19[6];
              bVar22 = puVar19 != (undefined8 *)0x0;
              if (puVar19 == &DAT_14c952378) break;
            } while (puVar19 != (undefined8 *)0x0);
          }
          if (!(bool)(bVar22 ^ 1U | param_3 == (longlong *)0x0)) goto LAB_14446f803;
        }
        else if ((puVar19[3] & DAT_14c952380) != 0) {
LAB_14446f803:
          if ((int)param_1[6] == (int)param_3[6]) {
            uVar5 = CONCAT71(uVar8,1);
            if (0 < (int)param_1[6]) {
              lVar4 = 0;
              do {
                param_2[lVar4] = (ulonglong)(double)*(float *)((longlong)param_4 + lVar4 * 4);
                lVar4 = lVar4 + 1;
              } while (lVar4 < (int)param_1[6]);
            }
            goto LAB_144470070;
          }
        }
      }
      goto LAB_144470021;
    }
    if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c9523d8) != 0) goto LAB_14446f563;
LAB_14446f5ec:
    puVar17 = (undefined *)param_1[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_e8 = (wchar_t *)FUN_140342cba();
          local_e0 = FUN_1468c7f1e;
          local_f0 = (undefined2 *)0x0;
          local_f8 = (undefined2 *)0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_e0 = FUN_1468e0f50;
        local_e8 = (wchar_t *)&DAT_14c951a38;
        local_f0 = (undefined2 *)0x0;
        local_f8 = (undefined2 *)0x1008001;
        FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
        atexit(FUN_142816f26);
        _Init_thread_footer(&DAT_14c952108);
      }
      local_e0 = FUN_1409f1a5c;
      local_e8 = (wchar_t *)&DAT_14c9520b8;
      local_f0 = (undefined2 *)0x0;
      local_f8 = (undefined2 *)0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
    if (DAT_14c951d30 == 0) {
      bVar22 = puVar17 != (undefined *)0x0;
      if (puVar17 != &DAT_14c951d28 && bVar22) {
        do {
          puVar17 = *(undefined **)(puVar17 + 0x30);
          bVar22 = puVar17 != (undefined *)0x0;
          if (puVar17 == &DAT_14c951d28) break;
        } while (puVar17 != (undefined *)0x0);
      }
      if (!bVar22) goto LAB_14446f72f;
LAB_14446f62f:
      if (param_3 != (longlong *)0x0) {
        puVar17 = (undefined *)param_3[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9496d8) &&
           (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
            local_e8 = (wchar_t *)FUN_140342cba();
            local_e0 = FUN_1468c7f1e;
            local_f0 = (undefined2 *)0x0;
            local_f8 = (undefined2 *)0x8001;
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
          local_e0 = FUN_140a4831c;
          local_e8 = (wchar_t *)&DAT_14c951a38;
          local_f8 = (undefined2 *)0x1000000008001;
          local_f0 = (undefined2 *)0x0;
          FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
          atexit(FUN_1427e14fe);
          _Init_thread_footer(&DAT_14c9496d8);
        }
        if (DAT_14c949690 == 0) {
          bVar22 = puVar17 != (undefined *)0x0;
          if (puVar17 != &DAT_14c949688 && bVar22) {
            do {
              puVar17 = *(undefined **)(puVar17 + 0x30);
              bVar22 = puVar17 != (undefined *)0x0;
              if (puVar17 == &DAT_14c949688) break;
            } while (puVar17 != (undefined *)0x0);
          }
          if (!(bool)(bVar22 ^ 1U | param_3 == (longlong *)0x0)) goto LAB_14446f8ff;
        }
        else if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c949690) != 0) {
LAB_14446f8ff:
          if (param_1[0xe] == param_3[0xf]) goto LAB_144470034;
        }
      }
      goto LAB_144470021;
    }
    if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c951d30) != 0) goto LAB_14446f62f;
LAB_14446f72f:
    puVar17 = (undefined *)param_1[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_e8 = (wchar_t *)FUN_140342cba();
        local_e0 = FUN_1468c7f1e;
        local_f0 = (undefined2 *)0x0;
        local_f8 = (undefined2 *)0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_e0 = FUN_140a4831c;
      local_e8 = (wchar_t *)&DAT_14c951a38;
      local_f8 = (undefined2 *)0x1000000008001;
      local_f0 = (undefined2 *)0x0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
    if (DAT_14c949690 == 0) {
      bVar22 = puVar17 != (undefined *)0x0;
      if (puVar17 != &DAT_14c949688 && bVar22) {
        do {
          puVar17 = *(undefined **)(puVar17 + 0x30);
          bVar22 = puVar17 != (undefined *)0x0;
          if (puVar17 == &DAT_14c949688) break;
        } while (puVar17 != (undefined *)0x0);
      }
      if (!bVar22) goto LAB_14446f872;
LAB_14446f772:
      if (param_3 != (longlong *)0x0) {
        puVar17 = (undefined *)param_3[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951d78) &&
           (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
            {
              local_e8 = (wchar_t *)FUN_140342cba();
              local_e0 = FUN_1468c7f1e;
              local_f0 = (undefined2 *)0x0;
              local_f8 = (undefined2 *)0x8001;
              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
              atexit(FUN_14280c819);
              _Init_thread_footer(&DAT_14c951a88);
            }
            local_e0 = FUN_1468e0f50;
            local_e8 = (wchar_t *)&DAT_14c951a38;
            local_f0 = (undefined2 *)0x0;
            local_f8 = (undefined2 *)0x1008001;
            FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
            atexit(FUN_142816f26);
            _Init_thread_footer(&DAT_14c952108);
          }
          local_e0 = FUN_1409f1a5c;
          local_e8 = (wchar_t *)&DAT_14c9520b8;
          local_f0 = (undefined2 *)0x0;
          local_f8 = (undefined2 *)0x1008041;
          FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
          atexit(FUN_14281201f);
          _Init_thread_footer(&DAT_14c951d78);
        }
        if (DAT_14c951d30 == 0) {
          bVar22 = puVar17 != (undefined *)0x0;
          if (puVar17 != &DAT_14c951d28 && bVar22) {
            do {
              puVar17 = *(undefined **)(puVar17 + 0x30);
              bVar22 = puVar17 != (undefined *)0x0;
              if (puVar17 == &DAT_14c951d28) break;
            } while (puVar17 != (undefined *)0x0);
          }
          if (!(bool)(bVar22 ^ 1U | param_3 == (longlong *)0x0)) goto LAB_14446f9d6;
        }
        else if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c951d30) != 0) {
LAB_14446f9d6:
          if (param_3[0xe] == param_1[0xf]) goto LAB_144470034;
        }
      }
    }
    else {
      if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c949690) != 0) goto LAB_14446f772;
LAB_14446f872:
      puVar17 = (undefined *)param_1[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_e8 = (wchar_t *)FUN_140342cba();
          local_e0 = FUN_1468c7f1e;
          local_f0 = (undefined2 *)0x0;
          local_f8 = (undefined2 *)0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_e0 = FUN_140b31576;
        local_e8 = (wchar_t *)&DAT_14c951a38;
        local_f0 = (undefined2 *)0x0;
        local_f8 = (undefined2 *)0x208001;
        FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
        atexit(FUN_14280cbf7);
        _Init_thread_footer(&DAT_14c951ae0);
      }
      if (DAT_14c951a98 == 0) {
        bVar22 = puVar17 != (undefined *)0x0;
        if (puVar17 != &DAT_14c951a90 && bVar22) {
          do {
            puVar17 = *(undefined **)(puVar17 + 0x30);
            bVar22 = puVar17 != (undefined *)0x0;
            if (puVar17 == &DAT_14c951a90) break;
          } while (puVar17 != (undefined *)0x0);
        }
        if (!(bool)(bVar22 ^ 1U | param_3 == (longlong *)0x0)) goto LAB_14446f952;
      }
      else if ((param_3 != (longlong *)0x0) &&
              ((DAT_14c951a98 & *(ulonglong *)(puVar17 + 0x18)) != 0)) {
LAB_14446f952:
        puVar17 = (undefined *)param_3[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951ae0) &&
           (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
            local_e8 = (wchar_t *)FUN_140342cba();
            local_e0 = FUN_1468c7f1e;
            local_f0 = (undefined2 *)0x0;
            local_f8 = (undefined2 *)0x8001;
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
          local_e0 = FUN_140b31576;
          local_e8 = (wchar_t *)&DAT_14c951a38;
          local_f0 = (undefined2 *)0x0;
          local_f8 = (undefined2 *)0x208001;
          FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
          atexit(FUN_14280cbf7);
          _Init_thread_footer(&DAT_14c951ae0);
        }
        if (DAT_14c951a98 == 0) {
          bVar22 = puVar17 != (undefined *)0x0;
          if (puVar17 != &DAT_14c951a90 && bVar22) {
            do {
              puVar17 = *(undefined **)(puVar17 + 0x30);
              bVar22 = puVar17 != (undefined *)0x0;
              if (puVar17 == &DAT_14c951a90) break;
            } while (puVar17 != (undefined *)0x0);
          }
          if (!(bool)(bVar22 ^ 1U | param_3 == (longlong *)0x0)) goto LAB_14446fa29;
        }
        else if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c951a98) != 0) {
LAB_14446fa29:
          bVar1 = *(byte *)(param_1 + 0xe);
          local_54 = (**(code **)(*(longlong *)param_1[0xf] + 0x178))();
          local_68 = (undefined2 *)param_1[0xf];
          local_58 = *(int *)(local_68 + 0x1a);
          bVar2 = *(byte *)(param_3 + 0xe);
          uStack_60 = param_2;
          local_50 = bVar1;
          (**(code **)(*(longlong *)param_3[0xf] + 0x178))();
          iVar12 = *(int *)(param_3[0xf] + 0x34);
          puVar19 = *(undefined8 **)(param_1[0xf] + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1))
            {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951a88) &&
                 (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                local_e8 = (wchar_t *)FUN_140342cba();
                local_e0 = FUN_1468c7f1e;
                local_f0 = (undefined2 *)0x0;
                local_f8 = (undefined2 *)0x8001;
                FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                atexit(FUN_14280c819);
                _Init_thread_footer(&DAT_14c951a88);
              }
              local_e0 = FUN_1468e0f50;
              local_e8 = (wchar_t *)&DAT_14c951a38;
              local_f0 = (undefined2 *)0x0;
              local_f8 = (undefined2 *)0x1008001;
              FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
              atexit(FUN_142816f26);
              _Init_thread_footer(&DAT_14c952108);
            }
            local_e0 = FUN_1408a629c;
            local_e8 = (wchar_t *)&DAT_14c9520b8;
            local_f0 = (undefined2 *)0x0;
            local_f8 = (undefined2 *)0x1008101;
            FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
            atexit(FUN_14281708e);
            _Init_thread_footer(&DAT_14c9523c8);
          }
          if (DAT_14c952380 != 0) {
            if ((puVar19[3] & DAT_14c952380) != 0) goto LAB_14446fac4;
LAB_14446fb4a:
            puVar17 = *(undefined **)(param_1[0xf] + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1))
            {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c952108) &&
                 (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c951a88) &&
                   (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                  local_e8 = (wchar_t *)FUN_140342cba();
                  local_e0 = FUN_1468c7f1e;
                  local_f0 = (undefined2 *)0x0;
                  local_f8 = (undefined2 *)0x8001;
                  FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                  atexit(FUN_14280c819);
                  _Init_thread_footer(&DAT_14c951a88);
                }
                local_e0 = FUN_1468e0f50;
                local_e8 = (wchar_t *)&DAT_14c951a38;
                local_f0 = (undefined2 *)0x0;
                local_f8 = (undefined2 *)0x1008001;
                FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
                atexit(FUN_142816f26);
                _Init_thread_footer(&DAT_14c952108);
              }
              local_e0 = FUN_14079c5e4;
              local_e8 = (wchar_t *)&DAT_14c9520b8;
              local_f8 = (undefined2 *)0x101008001;
              local_f0 = (undefined2 *)0x0;
              FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
              atexit(FUN_1428170bb);
              _Init_thread_footer(&DAT_14c952420);
            }
            if (DAT_14c9523d8 == 0) {
              bVar22 = puVar17 != (undefined *)0x0;
              if (puVar17 != &DAT_14c9523d0 && bVar22) {
                do {
                  puVar17 = *(undefined **)(puVar17 + 0x30);
                  bVar22 = puVar17 != (undefined *)0x0;
                  if (puVar17 == &DAT_14c9523d0) break;
                } while (puVar17 != (undefined *)0x0);
              }
              if (!bVar22) goto LAB_14446fcf9;
LAB_14446fb92:
              puVar19 = *(undefined8 **)(param_3[0xf] + 8);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c9523c8) &&
                 (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c952108) &&
                   (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c951a88) &&
                     (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                    local_e8 = (wchar_t *)FUN_140342cba();
                    local_e0 = FUN_1468c7f1e;
                    local_f0 = (undefined2 *)0x0;
                    local_f8 = (undefined2 *)0x8001;
                    FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                    atexit(FUN_14280c819);
                    _Init_thread_footer(&DAT_14c951a88);
                  }
                  local_e0 = FUN_1468e0f50;
                  local_e8 = (wchar_t *)&DAT_14c951a38;
                  local_f0 = (undefined2 *)0x0;
                  local_f8 = (undefined2 *)0x1008001;
                  FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
                  atexit(FUN_142816f26);
                  _Init_thread_footer(&DAT_14c952108);
                }
                local_e0 = FUN_1408a629c;
                local_e8 = (wchar_t *)&DAT_14c9520b8;
                local_f0 = (undefined2 *)0x0;
                local_f8 = (undefined2 *)0x1008101;
                FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
                atexit(FUN_14281708e);
                _Init_thread_footer(&DAT_14c9523c8);
              }
              if (DAT_14c952380 == 0) {
                bVar22 = puVar19 != (undefined8 *)0x0;
                if (puVar19 != &DAT_14c952378 && bVar22) {
                  do {
                    puVar19 = (undefined8 *)puVar19[6];
                    bVar22 = puVar19 != (undefined8 *)0x0;
                    if (puVar19 == &DAT_14c952378) break;
                  } while (puVar19 != (undefined8 *)0x0);
                }
                if (bVar22) goto LAB_14446fdd9;
              }
              else if ((puVar19[3] & DAT_14c952380) != 0) {
LAB_14446fdd9:
                FUN_144a8a902(&local_68);
                if (0 < (int)uStack_60[1]) {
                  lVar4 = 0;
                  lVar10 = 0;
                  do {
                    if ((local_50 & 1) == 0) {
                      uVar5 = *uStack_60;
                    }
                    else {
                      uVar5 = *uStack_60;
                      if ((uVar5 & 1) != 0) {
                        uVar5 = (longlong)uStack_60 + ((longlong)uVar5 >> 0x18);
                      }
                    }
                    if ((int)param_4[1] == 0) {
                      pfVar15 = (float *)0x0;
                    }
                    else {
                      if ((bVar2 & 1) == 0) {
                        uVar13 = *param_4;
                      }
                      else {
                        uVar13 = *param_4;
                        if ((uVar13 & 1) != 0) {
                          uVar13 = ((longlong)uVar13 >> 0x18) + (longlong)param_4;
                        }
                      }
                      pfVar15 = (float *)(uVar13 + lVar4);
                    }
                    *(double *)(uVar5 + local_58 * lVar10) = (double)*pfVar15;
                    lVar10 = lVar10 + 1;
                    lVar4 = lVar4 + iVar12;
                  } while (lVar10 < (int)uStack_60[1]);
                }
                goto LAB_14446fe7c;
              }
              goto LAB_144470021;
            }
            if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c9523d8) != 0) goto LAB_14446fb92;
LAB_14446fcf9:
            lVar4 = param_1[0xf];
            if (lVar4 == 0) goto LAB_144470021;
            puVar17 = *(undefined **)(lVar4 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1))
            {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c952108) &&
                 (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c951a88) &&
                   (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                  local_e8 = (wchar_t *)FUN_140342cba();
                  local_e0 = FUN_1468c7f1e;
                  local_f0 = (undefined2 *)0x0;
                  local_f8 = (undefined2 *)0x8001;
                  FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                  atexit(FUN_14280c819);
                  _Init_thread_footer(&DAT_14c951a88);
                }
                local_e0 = FUN_1468e0f50;
                local_e8 = (wchar_t *)&DAT_14c951a38;
                local_f0 = (undefined2 *)0x0;
                local_f8 = (undefined2 *)0x1008001;
                FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
                atexit(FUN_142816f26);
                _Init_thread_footer(&DAT_14c952108);
              }
              local_e0 = FUN_1409f1a5c;
              local_e8 = (wchar_t *)&DAT_14c9520b8;
              local_f0 = (undefined2 *)0x0;
              local_f8 = (undefined2 *)0x1008041;
              FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
              atexit(FUN_14281201f);
              _Init_thread_footer(&DAT_14c951d78);
            }
            if (DAT_14c951d30 == 0) {
              bVar22 = puVar17 != (undefined *)0x0;
              if (puVar17 != &DAT_14c951d28 && bVar22) {
                do {
                  puVar17 = *(undefined **)(puVar17 + 0x30);
                  bVar22 = puVar17 != (undefined *)0x0;
                  if (puVar17 == &DAT_14c951d28) break;
                } while (puVar17 != (undefined *)0x0);
              }
              if (!bVar22) goto LAB_14446febc;
LAB_14446fd4a:
              lVar10 = param_3[0xf];
              if (lVar10 != 0) {
                puVar17 = *(undefined **)(lVar10 + 8);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c9496d8) &&
                   (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c951a88) &&
                     (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                    local_e8 = (wchar_t *)FUN_140342cba();
                    local_e0 = FUN_1468c7f1e;
                    local_f0 = (undefined2 *)0x0;
                    local_f8 = (undefined2 *)0x8001;
                    FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                    atexit(FUN_14280c819);
                    _Init_thread_footer(&DAT_14c951a88);
                  }
                  local_e0 = FUN_140a4831c;
                  local_e8 = (wchar_t *)&DAT_14c951a38;
                  local_f8 = (undefined2 *)0x1000000008001;
                  local_f0 = (undefined2 *)0x0;
                  FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
                  atexit(FUN_1427e14fe);
                  _Init_thread_footer(&DAT_14c9496d8);
                }
                if (DAT_14c949690 == 0) {
                  bVar22 = puVar17 != (undefined *)0x0;
                  if (puVar17 != &DAT_14c949688 && bVar22) {
                    do {
                      puVar17 = *(undefined **)(puVar17 + 0x30);
                      bVar22 = puVar17 != (undefined *)0x0;
                      if (puVar17 == &DAT_14c949688) break;
                    } while (puVar17 != (undefined *)0x0);
                  }
                  if (bVar22) goto LAB_14446ff46;
                }
                else if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c949690) != 0) {
LAB_14446ff46:
                  if (*(longlong *)(lVar4 + 0x70) == *(longlong *)(lVar10 + 0x78))
                  goto LAB_14447049c;
                }
              }
              goto LAB_144470021;
            }
            if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c951d30) != 0) goto LAB_14446fd4a;
LAB_14446febc:
            lVar4 = param_1[0xf];
            if (lVar4 == 0) goto LAB_144470021;
            puVar17 = *(undefined **)(lVar4 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1))
            {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951a88) &&
                 (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                local_e8 = (wchar_t *)FUN_140342cba();
                local_e0 = FUN_1468c7f1e;
                local_f0 = (undefined2 *)0x0;
                local_f8 = (undefined2 *)0x8001;
                FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                atexit(FUN_14280c819);
                _Init_thread_footer(&DAT_14c951a88);
              }
              local_e0 = FUN_140a4831c;
              local_e8 = (wchar_t *)&DAT_14c951a38;
              local_f8 = (undefined2 *)0x1000000008001;
              local_f0 = (undefined2 *)0x0;
              FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
              atexit(FUN_1427e14fe);
              _Init_thread_footer(&DAT_14c9496d8);
            }
            if (DAT_14c949690 == 0) {
              bVar22 = puVar17 != (undefined *)0x0;
              if (puVar17 != &DAT_14c949688 && bVar22) {
                do {
                  puVar17 = *(undefined **)(puVar17 + 0x30);
                  bVar22 = puVar17 != (undefined *)0x0;
                  if (puVar17 == &DAT_14c949688) break;
                } while (puVar17 != (undefined *)0x0);
              }
              if (bVar22) goto LAB_14446ff93;
              goto LAB_144470021;
            }
            if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c949690) == 0) goto LAB_144470021;
LAB_14446ff93:
            lVar10 = param_3[0xf];
            if (lVar10 == 0) goto LAB_144470021;
            puVar17 = *(undefined **)(lVar10 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1))
            {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c952108) &&
                 (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c951a88) &&
                   (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                  local_e8 = (wchar_t *)FUN_140342cba();
                  local_e0 = FUN_1468c7f1e;
                  local_f0 = (undefined2 *)0x0;
                  local_f8 = (undefined2 *)0x8001;
                  FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                  atexit(FUN_14280c819);
                  _Init_thread_footer(&DAT_14c951a88);
                }
                local_e0 = FUN_1468e0f50;
                local_e8 = (wchar_t *)&DAT_14c951a38;
                local_f0 = (undefined2 *)0x0;
                local_f8 = (undefined2 *)0x1008001;
                FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
                atexit(FUN_142816f26);
                _Init_thread_footer(&DAT_14c952108);
              }
              local_e0 = FUN_1409f1a5c;
              local_e8 = (wchar_t *)&DAT_14c9520b8;
              local_f0 = (undefined2 *)0x0;
              local_f8 = (undefined2 *)0x1008041;
              FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
              atexit(FUN_14281201f);
              _Init_thread_footer(&DAT_14c951d78);
            }
            if (DAT_14c951d30 == 0) {
              bVar22 = puVar17 != (undefined *)0x0;
              if (puVar17 != &DAT_14c951d28 && bVar22) {
                do {
                  puVar17 = *(undefined **)(puVar17 + 0x30);
                  bVar22 = puVar17 != (undefined *)0x0;
                  if (puVar17 == &DAT_14c951d28) break;
                } while (puVar17 != (undefined *)0x0);
              }
              if (bVar22) goto LAB_144470012;
              goto LAB_144470021;
            }
            if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c951d30) == 0) goto LAB_144470021;
LAB_144470012:
            if (*(longlong *)(lVar10 + 0x70) != *(longlong *)(lVar4 + 0x78)) goto LAB_144470021;
LAB_14447049c:
            if (param_2 != param_4) {
              if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
                (**(code **)(*param_1 + 0x100))(param_1,param_2,param_4,(int)param_1[6]);
              }
              else {
                memcpy(param_2,param_4,
                       (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
              }
            }
LAB_14446fe7c:
            uVar5 = CONCAT71(uVar8,1);
            goto LAB_144470070;
          }
          bVar22 = puVar19 != (undefined8 *)0x0;
          if (puVar19 != &DAT_14c952378 && bVar22) {
            do {
              puVar19 = (undefined8 *)puVar19[6];
              bVar22 = puVar19 != (undefined8 *)0x0;
              if (puVar19 == &DAT_14c952378) break;
            } while (puVar19 != (undefined8 *)0x0);
          }
          if (!bVar22) goto LAB_14446fb4a;
LAB_14446fac4:
          puVar17 = *(undefined **)(param_3[0xf] + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1))
            {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951a88) &&
                 (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                local_e8 = (wchar_t *)FUN_140342cba();
                local_e0 = FUN_1468c7f1e;
                local_f0 = (undefined2 *)0x0;
                local_f8 = (undefined2 *)0x8001;
                FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                atexit(FUN_14280c819);
                _Init_thread_footer(&DAT_14c951a88);
              }
              local_e0 = FUN_1468e0f50;
              local_e8 = (wchar_t *)&DAT_14c951a38;
              local_f0 = (undefined2 *)0x0;
              local_f8 = (undefined2 *)0x1008001;
              FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
              atexit(FUN_142816f26);
              _Init_thread_footer(&DAT_14c952108);
            }
            local_e0 = FUN_14079c5e4;
            local_e8 = (wchar_t *)&DAT_14c9520b8;
            local_f8 = (undefined2 *)0x101008001;
            local_f0 = (undefined2 *)0x0;
            FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
            atexit(FUN_1428170bb);
            _Init_thread_footer(&DAT_14c952420);
          }
          if (DAT_14c9523d8 == 0) {
            bVar22 = puVar17 != (undefined *)0x0;
            if (puVar17 != &DAT_14c9523d0 && bVar22) {
              do {
                puVar17 = *(undefined **)(puVar17 + 0x30);
                bVar22 = puVar17 != (undefined *)0x0;
                if (puVar17 == &DAT_14c9523d0) break;
              } while (puVar17 != (undefined *)0x0);
            }
            if (bVar22) goto LAB_14446fc18;
          }
          else if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c9523d8) != 0) {
LAB_14446fc18:
            FUN_144a8a902(&local_68);
            if (0 < (int)uStack_60[1]) {
              lVar4 = 0;
              lVar10 = 0;
              do {
                if ((local_50 & 1) == 0) {
                  uVar5 = *uStack_60;
                }
                else {
                  uVar5 = *uStack_60;
                  if ((uVar5 & 1) != 0) {
                    uVar5 = (longlong)uStack_60 + ((longlong)uVar5 >> 0x18);
                  }
                }
                if ((int)param_4[1] == 0) {
                  pdVar14 = (double *)0x0;
                }
                else {
                  if ((bVar2 & 1) == 0) {
                    uVar13 = *param_4;
                  }
                  else {
                    uVar13 = *param_4;
                    if ((uVar13 & 1) != 0) {
                      uVar13 = ((longlong)uVar13 >> 0x18) + (longlong)param_4;
                    }
                  }
                  pdVar14 = (double *)(uVar13 + lVar4);
                }
                *(float *)(uVar5 + local_58 * lVar10) = (float)*pdVar14;
                lVar10 = lVar10 + 1;
                lVar4 = lVar4 + iVar12;
              } while (lVar10 < (int)uStack_60[1]);
            }
            goto LAB_14446fe7c;
          }
        }
      }
    }
LAB_144470021:
    cVar3 = (**(code **)(*param_1 + 0x1b0))(param_1,param_3);
    if (cVar3 == '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc01168) && (FUN_144b3d300(&DAT_14cc01168), DAT_14cc01168 == -1))
      {
        _DAT_14cc01138 = 0;
        _DAT_14cc01140 = 0;
        DAT_14cc01118 = 0;
        _DAT_14cc01120 = 0;
        _DAT_14cc01144 = 0xffffffff00000080;
        DAT_14cc0114c = 0;
        DAT_14cc01158 = (undefined *)0x0;
        DAT_14cc01160 = 0;
        atexit(FUN_144472097);
        _Init_thread_footer(&DAT_14cc01168);
      }
      local_68 = (undefined2 *)0x0;
      uStack_60 = (ulonglong *)0x0;
      local_78 = (undefined2 *)0x0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      (**(code **)(*param_1 + 0x70))(param_1,&local_a8,&local_88,0);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_68 = local_a8;
      uStack_60 = (ulonglong *)CONCAT44(uStack_9c,iStack_a0);
      (**(code **)(*param_3 + 0x70))(param_3,&local_a8,&local_98,0);
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_78 = local_a8;
      iVar12 = (int)uStack_80 + -1;
      if ((int)uStack_80 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_68,local_88,iVar12);
      iVar12 = (int)uStack_90 + -1;
      if ((int)uStack_90 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_78,local_98,iVar12);
      lVar4 = FUN_14689b0d6(param_1);
      if (lVar4 == 0) {
        pwVar21 = L"<Unknown Package>";
      }
      else {
        local_a8 = *(undefined2 **)(lVar4 + 0x18);
        FUN_1400021e4(&local_a8,&local_b8);
        pwVar21 = local_b8;
        if (local_b0 == 0) {
          pwVar21 = L"";
        }
      }
      puVar6 = local_68;
      if ((int)uStack_60 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      if (param_1 == (longlong *)0x0) {
        FUN_140056680(&local_c8,&DAT_149e01fe8);
      }
      else {
        FUN_1400021e4(param_1 + 4,&local_c8);
      }
      puVar20 = &DAT_149dfb77a;
      if (local_c0 != 0) {
        puVar20 = local_c8;
      }
      if (param_3 == (longlong *)0x0) {
        FUN_140056680(&local_d8,&DAT_149e01fe8);
      }
      else {
        FUN_1400021e4(param_3 + 4,&local_d8);
      }
      puVar16 = local_d8;
      if (local_d0 == 0) {
        puVar16 = &DAT_149dfb77a;
      }
      local_f8 = puVar20;
      local_f0 = puVar6;
      local_e8 = pwVar21;
      FUN_140002266(&local_a8,L"Failed to copy %s (%s) to %s (%s) in package %s",puVar16);
      if (local_d8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_c8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((lVar4 != 0) && (local_b8 != (wchar_t *)0x0)) {
        FUN_1400020a8();
      }
      uVar9 = 0;
      iVar12 = iStack_a0 + -1;
      if (iStack_a0 == 0) {
        iVar12 = 0;
      }
      if (0 < iVar12) {
        puVar6 = local_a8;
        if (iStack_a0 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        lVar4 = 0;
        do {
          uVar7 = ((uint)(0x19 < (ushort)puVar6[lVar4] - 0x61) * 0x20 + (uint)(ushort)puVar6[lVar4])
                  - 0x20;
          uVar9 = uVar9 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar9 ^ uVar7) & 0xff) * 4);
          uVar9 = uVar9 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar7 >> 8 & 0xff) * 4);
          lVar4 = lVar4 + 1;
        } while (iVar12 != (int)lVar4);
      }
      if (DAT_14cc01120 != DAT_14cc0114c) {
        puVar17 = &DAT_14cc01150;
        if (DAT_14cc01158 != (undefined *)0x0) {
          puVar17 = DAT_14cc01158;
        }
        iVar12 = *(int *)(puVar17 + (ulonglong)(DAT_14cc01160 - 1U & uVar9) * 4);
        if (iVar12 != -1) {
LAB_1444703b0:
          lVar4 = (longlong)iVar12;
          iVar12 = *(int *)(DAT_14cc01118 + 8 + lVar4 * 0x18);
          if (iVar12 == iStack_a0) {
            if (1 < iStack_a0) {
              lVar10 = 0;
              do {
                uVar18 = *(ushort *)(*(longlong *)(DAT_14cc01118 + lVar4 * 0x18) + lVar10);
                uVar5 = (ulonglong)uVar18;
                uVar11 = *(ushort *)((longlong)local_a8 + lVar10);
                if (uVar18 == uVar11) {
                  if (uVar18 == 0) break;
                }
                else {
                  if (0x7f < (uVar11 | uVar18)) goto LAB_14447041a;
                  uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                  uVar13 = (ulonglong)uVar11;
                  uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                  if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[uVar13]) goto LAB_14447041a;
                }
                lVar10 = lVar10 + 2;
              } while( true );
            }
          }
          else if (iVar12 + iStack_a0 != 1) goto LAB_1444703ca;
          goto LAB_144470443;
        }
      }
LAB_144470424:
      FUN_14482b35e(&DAT_14cc01118,&local_c8,&local_a8,0);
LAB_144470443:
      if (local_a8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar5 = 0;
      goto LAB_144470070;
    }
  }
LAB_144470034:
  uVar5 = CONCAT71(uVar8,1);
  if (param_2 != param_4) {
    if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
      (**(code **)(*param_1 + 0x100))(param_1,param_2,param_4,(int)param_1[6]);
    }
    else {
      memcpy(param_2,param_4,
             (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
    }
  }
LAB_144470070:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14447041a:
  if (uVar18 == uVar11) goto LAB_144470443;
LAB_1444703ca:
  iVar12 = *(int *)(DAT_14cc01118 + 0x10 + lVar4 * 0x18);
  if (iVar12 == -1) goto LAB_144470424;
  goto LAB_1444703b0;
}



// FUNCTION 144472097 FUN_144472097 body=47 status=ok
// SIG undefined FUN_144472097(void)

void FUN_144472097(void)

{
  DAT_14cc01160 = 0;
  if (DAT_14cc01158 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&DAT_14cc01118);
  return;
}



// FUNCTION 1444720d8 FUN_1444720d8 body=561 status=ok
// SIG undefined FUN_1444720d8(void)

void FUN_1444720d8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  char cStack_58;
  undefined7 uStack_57;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  uStack_80 = 0;
  iVar1 = (int)param_2[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  local_a0 = param_3;
  if (iVar1 != 0) {
    FUN_1457c98a0(&local_88);
    if ((longlong)(int)param_2[1] != 0) {
      lVar12 = *param_2;
      lVar10 = (longlong)(int)param_2[1] * 0x48;
      do {
        FUN_1490f6038(&local_78,lVar12);
        uVar7 = uStack_80;
        if (cStack_58 != '\0') {
          lVar11 = (longlong)(int)uStack_80;
          uVar3 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar3);
          if (uStack_80._4_4_ < uVar3) {
            FUN_146896bce(&local_88,uVar7 & 0xffffffff);
          }
          lVar6 = local_88;
          *(longlong *)(local_88 + lVar11 * 0x30) = local_78;
          if ((local_78 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          lVar6 = lVar6 + lVar11 * 0x30;
          *(undefined8 *)(lVar6 + 0x28) = local_50;
          *(undefined8 *)(lVar6 + 0x18) = local_60;
          *(ulonglong *)(lVar6 + 0x20) = CONCAT71(uStack_57,cStack_58);
          *(undefined4 *)(lVar6 + 8) = local_70;
          *(undefined4 *)(lVar6 + 0xc) = uStack_6c;
          *(undefined4 *)(lVar6 + 0x10) = uStack_68;
          *(undefined4 *)(lVar6 + 0x14) = uStack_64;
        }
        lVar12 = lVar12 + 0x48;
        lVar10 = lVar10 + -0x48;
      } while (lVar10 != 0);
    }
  }
  local_98 = local_88;
  local_90 = (int)uStack_80;
  FUN_14688e972(param_1);
  FUN_1401fa034(param_1 + 0x18,local_a0);
  FUN_1411569ea(param_1);
  FUN_145814828(param_1);
  iVar1 = *(int *)(param_1 + 0x30);
  if ((0 < (longlong)iVar1) && (iVar1 == (int)param_2[1])) {
    uVar7 = 0;
    do {
      iVar2 = *(int *)(*param_2 + 0x40 + uVar7 * 0x48);
      if (1 < iVar2) {
        if (iVar2 == DAT_14cc01198) {
          lVar12 = 0;
          while( true ) {
            uVar4 = *(ushort *)(*(longlong *)(*param_2 + uVar7 * 0x48 + 0x38) + lVar12);
            uVar5 = (ulonglong)uVar4;
            uVar8 = *(ushort *)(DAT_14cc01190 + lVar12);
            if (uVar4 != uVar8) break;
            if (uVar4 == 0) goto LAB_1444722b2;
LAB_144472274:
            lVar12 = lVar12 + 2;
          }
          if ((uVar8 | uVar4) < 0x80) {
            uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
            uVar9 = (ulonglong)uVar8;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar9]) goto LAB_144472274;
          }
          if (uVar4 != uVar8) goto LAB_14447229f;
        }
        else if (DAT_14cc01198 + iVar2 != 1) {
LAB_14447229f:
          FUN_1490f642c(param_1,uVar7 & 0xffffffff);
        }
      }
LAB_1444722b2:
      uVar7 = uVar7 + 1;
    } while (uVar7 != (longlong)iVar1);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14447231c FUN_14447231c body=49 status=ok
// SIG undefined FUN_14447231c(void)

void FUN_14447231c(void)

{
  FUN_1401f9f1c(DAT_14cc011b0,DAT_14cc011b8);
  if (DAT_14cc011b0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14447234d FUN_14447234d body=47 status=ok
// SIG undefined FUN_14447234d(void)

void FUN_14447234d(void)

{
  DAT_14cc01208 = 0;
  if (DAT_14cc01200 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&DAT_14cc011c0);
  return;
}



// FUNCTION 14447238d FUN_14447238d body=48 status=ok
// SIG undefined FUN_14447238d(void)

void FUN_14447238d(void)

{
  if (DAT_14cc01180 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cc01170 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444723be FUN_1444723be body=242 status=ok
// SIG undefined FUN_1444723be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444723be(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x18) << 5;
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x10) + 8);
    do {
      lVar2 = *plVar6;
      if ((((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) &&
          (*(longlong *)(lVar2 + 0x10) != 0)) && (cVar3 = FUN_1410f9880(lVar2,1), cVar3 != '\0')) {
        uVar1 = *(uint *)(*plVar6 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          if ((((*(uint *)(lVar2 + 8 + (ulonglong)(ushort)uVar1 * 0x18) >> 0x19 & 1) == 0) &&
              (uVar1 != 0xffffffff)) &&
             (((*(uint *)(lVar2 + (ulonglong)(ushort)uVar1 * 0x18 + 8) & 0x10000000) == 0 &&
              ((plVar4 = (longlong *)(lVar2 + (ulonglong)((uVar1 & 0xffff) * 0x18)),
               plVar4 != (longlong *)0x0 && (*plVar6 == *plVar4)))))) {
            (**(code **)(*param_2 + 0x88))(param_2,plVar6,0,0);
          }
        }
      }
      plVar6 = plVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 1444724c2 FUN_1444724c2 body=1767 status=ok
// SIG undefined FUN_1444724c2(void)

ulonglong FUN_1444724c2(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  wchar_t *local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  code *local_78;
  int local_70;
  code *local_68;
  undefined1 local_60 [8];
  code *local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar8 = 0xffffffff;
  if (((int)param_2 < 0) || ((int)param_1[3] <= (int)param_2)) goto LAB_1444726d5;
  uVar7 = *(uint *)(param_1[2] + 0x1c + (ulonglong)param_2 * 0x20);
  uVar8 = (ulonglong)uVar7;
  if (uVar7 != 0xffffffff) goto LAB_1444726d5;
  lVar9 = param_1[2] + (ulonglong)param_2 * 0x20;
  lVar11 = *(longlong *)(lVar9 + 8);
  if (lVar11 == 0) {
LAB_1444725d3:
    FUN_1400021e4(lVar9,&local_78);
    uVar8 = 0;
    iVar6 = local_70 + -1;
    if (local_70 == 0) {
      iVar6 = 0;
    }
    if (0 < iVar6) {
      pcVar3 = (code *)&DAT_149dfb77a;
      if (local_70 != 0) {
        pcVar3 = local_78;
      }
      lVar11 = 0;
      uVar8 = 0;
      do {
        uVar7 = ((uint)*(ushort *)(pcVar3 + lVar11 * 2) +
                (uint)(0x19 < *(ushort *)(pcVar3 + lVar11 * 2) - 0x61) * 0x20) - 0x20;
        uVar10 = (uint)(uVar8 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar7) & 0xff) * 4);
        uVar8 = (ulonglong)
                (uVar10 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar7 >> 8 & 0xff) * 4));
        lVar11 = lVar11 + 1;
      } while (iVar6 != (int)lVar11);
    }
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (DAT_14c948fa0 == 0) {
      local_68 = (code *)&DAT_1427db2a2;
      lVar11 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar11;
      FUN_1446f470e(local_60,L"ScriptStruct",1);
      local_98 = &LAB_1468915ce;
      local_a0 = FUN_1427dc742;
      local_b0 = L"Engine";
      local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,199);
      local_b8 = 0x10;
      local_c0 = 0x10000020;
      local_c8._0_4_ = 8;
      local_90 = &local_68;
      FUN_14574b4b2(lVar11);
      DAT_14c948fa0 = lVar11;
      if (DAT_14c927740 == 0) {
        local_90 = &local_78;
        local_78 = FUN_1449e2820;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_14081d0ea;
        local_98 = &LAB_146856450;
        local_a0 = FUN_1427b121c;
        local_a8 = L"Engine";
        local_b0 = (wchar_t *)0x0;
        local_b8 = CONCAT44(local_b8._4_4_,0x10000021);
        local_c0 = 8;
        local_c8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar2 = DAT_14c948fa0;
      lVar11 = DAT_14c927740;
      if (DAT_14c948f88 == 0) {
        local_58 = (code *)&DAT_1427db2a2;
        lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948f88 = lVar5;
        FUN_1446f470e(local_50,L"Struct",1);
        local_98 = &LAB_146891313;
        local_a0 = FUN_146272f63;
        local_b0 = L"Engine";
        local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,199);
        local_b8 = 8;
        local_c0 = 0x10000020;
        local_c8._0_4_ = 8;
        local_90 = &local_58;
        FUN_14574b4b2(lVar5);
        DAT_14c948f88 = lVar5;
        if (DAT_14c927740 == 0) {
          local_90 = &local_78;
          local_78 = FUN_1449e2820;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_14081d0ea;
          local_98 = &LAB_146856450;
          local_a0 = FUN_1427b121c;
          local_a8 = L"Engine";
          local_b0 = (wchar_t *)0x0;
          local_b8 = CONCAT44(local_b8._4_4_,0x10000021);
          local_c0 = 8;
          local_c8._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        lVar1 = DAT_14c948f88;
        lVar5 = DAT_14c927740;
        uVar4 = FUN_1400163b0();
        local_c8 = L"Struct";
        FUN_14574b446(uVar4,lVar1,lVar5,L"/Script/CoreUObject");
      }
      local_c8 = L"ScriptStruct";
      FUN_14574b446(DAT_14c948f88,lVar2,lVar11,L"/Script/CoreUObject");
      lVar11 = *(longlong *)(lVar9 + 8);
      if (lVar11 == 0) goto LAB_1444725d3;
    }
    if ((((DAT_14c948fa0 == 0) || (lVar2 = *(longlong *)(lVar11 + 0x10), lVar2 == 0)) ||
        (*(int *)(lVar2 + 0x38) < *(int *)(DAT_14c948fa0 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) !=
        DAT_14c948fa0 + 0x30)) {
      if (DAT_14c948f88 == 0) {
        local_58 = (code *)&DAT_1427db2a2;
        lVar11 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948f88 = lVar11;
        FUN_1446f470e(local_50,L"Struct",1);
        local_98 = &LAB_146891313;
        local_a0 = FUN_146272f63;
        local_b0 = L"Engine";
        local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,199);
        local_b8 = 8;
        local_c0 = 0x10000020;
        local_c8._0_4_ = 8;
        local_90 = &local_58;
        FUN_14574b4b2(lVar11);
        DAT_14c948f88 = lVar11;
        if (DAT_14c927740 == 0) {
          local_90 = &local_78;
          local_78 = FUN_1449e2820;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_14081d0ea;
          local_98 = &LAB_146856450;
          local_a0 = FUN_1427b121c;
          local_a8 = L"Engine";
          local_b0 = (wchar_t *)0x0;
          local_b8 = CONCAT44(local_b8._4_4_,0x10000021);
          local_c0 = 8;
          local_c8._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        lVar2 = DAT_14c948f88;
        lVar11 = DAT_14c927740;
        uVar4 = FUN_1400163b0();
        local_c8 = L"Struct";
        FUN_14574b446(uVar4,lVar2,lVar11,L"/Script/CoreUObject");
        lVar11 = *(longlong *)(lVar9 + 8);
        if (lVar11 == 0) goto LAB_1444725d3;
      }
      if (((DAT_14c948f88 == 0) || (lVar11 = *(longlong *)(lVar11 + 0x10), lVar11 == 0)) ||
         ((*(int *)(lVar11 + 0x38) < *(int *)(DAT_14c948f88 + 0x38) ||
          (*(longlong *)
            (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8) !=
           DAT_14c948f88 + 0x30)))) {
        lVar2 = FUN_140851d9a();
        lVar11 = *(longlong *)(lVar9 + 8);
        if (((lVar11 == 0) || (lVar2 == 0)) ||
           ((lVar5 = *(longlong *)(lVar11 + 0x10), lVar5 == 0 ||
            ((*(int *)(lVar5 + 0x38) < *(int *)(lVar2 + 0x38) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30)))))) goto LAB_1444725d3;
        uVar7 = (**(code **)(*param_1 + 0x188))(param_1,lVar11,0);
      }
      else {
        uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
      }
    }
    else {
      uVar7 = (**(code **)(*param_1 + 0x178))(param_1,lVar11,0);
    }
    uVar8 = (ulonglong)uVar7;
  }
  if (*(longlong *)(lVar9 + 8) != 0) {
    lVar11 = FUN_1408cc5f4();
    if ((((*(longlong *)(lVar9 + 8) != 0) && (lVar11 != 0)) &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar9 + 8) + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
         lVar11 + 0x30)))) goto LAB_1444726d5;
  }
  *(int *)(lVar9 + 0x1c) = (int)uVar8;
LAB_1444726d5:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 144472baa FUN_144472baa body=10149 status=ok
// SIG undefined FUN_144472baa(void)

int FUN_144472baa(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  code *pcVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  code *pcVar22;
  ulonglong uVar23;
  int7 iVar24;
  uint7 uVar25;
  undefined7 uVar26;
  code cVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined2 *puVar35;
  longlong *plVar36;
  longlong *plVar37;
  undefined1 auStack_288 [32];
  wchar_t *local_268;
  undefined4 local_260;
  undefined8 local_258;
  wchar_t *local_250;
  wchar_t *local_248;
  code *local_240;
  undefined1 *local_238;
  code **local_230;
  code *local_228;
  code *local_220;
  ulonglong local_210;
  ulonglong local_208;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  undefined8 *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  code *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  code *local_1a8;
  undefined8 uStack_1a0;
  code *local_198;
  longlong *local_190;
  code *local_188;
  undefined8 uStack_180;
  code *local_170;
  undefined1 local_168 [8];
  code *local_160;
  undefined8 uStack_158;
  code *local_150;
  undefined1 local_148 [16];
  longlong local_138;
  undefined1 local_128 [64];
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d0;
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  char local_74;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  iVar8 = (**(code **)(*param_1 + 0x98))();
  if (iVar8 != -1) goto LAB_1444746b0;
  local_208 = CONCAT71(local_208._1_7_,param_3);
  pcVar22 = (code *)*param_2;
  local_190 = (longlong *)param_2[1];
  local_1e8 = param_2;
  local_198 = pcVar22;
  if ((local_190 != (longlong *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
LAB_144472c58:
  FUN_1400021e4(&local_198,&local_1c8);
  pcVar12 = local_1c8;
  if ((int)uStack_1c0 == 0) {
    pcVar12 = (code *)&DAT_149dfb77a;
  }
  lVar21 = 7;
  lVar30 = 0;
LAB_144472c82:
  uVar3 = *(ushort *)(pcVar12 + lVar30);
  uVar4 = *(ushort *)((longlong)&DAT_14bb01910 + lVar30);
  if (uVar3 == uVar4) {
    iVar8 = 0;
    if ((uVar3 == 0) || (iVar8 = 0, lVar21 == 1)) goto LAB_144472cdb;
LAB_144472c9f:
    lVar21 = lVar21 + -1;
    lVar30 = lVar30 + 2;
    goto LAB_144472c82;
  }
  if ((uVar4 | uVar3) < 0x80) {
    if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4]) {
      iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
      goto LAB_144472cdb;
    }
    if (lVar21 == 1) {
      iVar8 = 0;
      goto LAB_144472cdb;
    }
    goto LAB_144472c9f;
  }
  iVar8 = (uint)uVar3 - (uint)uVar4;
LAB_144472cdb:
  if (local_1c8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (iVar8 == 0) {
    FUN_1400021e4(&local_198,&local_188);
    pcVar22 = (code *)&DAT_149dfb77a;
    if ((int)uStack_180 != 0) {
      pcVar22 = local_188;
    }
    uVar10 = (int)uStack_180 - 1;
    if ((int)uStack_180 == 0) {
      uVar10 = 0;
    }
    uVar16 = 7;
    if ((int)uVar10 < 7) {
      uVar16 = uVar10;
    }
    uVar19 = (ulonglong)uVar16;
    if ((int)uVar16 < 1) {
      uVar19 = 0;
    }
    FUN_14006620a(&local_160,pcVar22 + uVar19 * 2,uVar10 - (int)uVar19);
    uVar10 = (int)uStack_158 - 1;
    if ((int)uStack_158 == 0) {
      uVar10 = 0;
    }
    uVar16 = 1;
    if (1 < (int)uVar10) {
      uVar16 = uVar10;
    }
    uVar16 = uVar16 - 1;
    bVar5 = 0 < (int)(uVar10 - uVar16);
    iVar8 = (int)uStack_158;
    if ((int)uVar16 < (int)uVar10) {
      iVar8 = (int)uStack_158 - (uVar16 + bVar5);
      if (iVar8 != 0) {
        memmove(local_160 + (ulonglong)uVar16 * 2,local_160 + (ulonglong)uVar16 * 2 + 2,
                (longlong)iVar8 * 2);
      }
      iVar8 = (int)uStack_158 - (uint)bVar5;
    }
    local_1c8 = local_160;
    uVar11 = uStack_158._4_4_;
    local_160 = (code *)0x0;
    uStack_158 = (undefined4 *)0x0;
    uStack_1c0 = (longlong *)CONCAT44(uVar11,iVar8);
    FUN_140ded26a(&local_1c8);
    FUN_140ded312(&local_1c8);
    pcVar12 = local_1c8;
    iVar8 = (int)uStack_1c0;
    local_1c8 = (code *)0x0;
    uStack_1c0 = (longlong *)0x0;
    if (local_160 != (code *)0x0) {
      FUN_1400020a8();
    }
    pcVar22 = pcVar12;
    if (iVar8 == 0) {
      pcVar22 = (code *)&DAT_149dfb77a;
    }
    FUN_1446f470e(&local_1c8,pcVar22);
    pcVar22 = local_1c8;
    local_198 = local_1c8;
    if (pcVar12 != (code *)0x0) {
      FUN_1400020a8(pcVar12);
    }
    if (local_188 != (code *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_144472c58;
  }
  local_200 = local_190;
  local_1d0 = pcVar22;
  if (local_190 == (longlong *)0x0 || (byte)local_208 != '\0') {
    plVar36 = local_190;
    if (local_190 != (longlong *)0x0) goto LAB_144472f4c;
LAB_144472f7b:
    local_208 = local_208 & 0xffffffff00000000;
  }
  else {
    if (DAT_14c949118 == 0) {
      local_150 = FUN_140631fbe;
      lVar21 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar21;
      FUN_1446f470e(&local_1a8,L"Class",1);
      local_238 = &LAB_146891e90;
      local_240 = (code *)&LAB_146273097;
      local_250 = L"Engine";
      local_248 = (wchar_t *)CONCAT44(local_248._4_4_,199);
      local_258 = 0x20;
      local_260 = 0x10000000;
      local_268._0_4_ = 8;
      local_230 = &local_150;
      FUN_14574b4b2(lVar21);
      DAT_14c949118 = lVar21;
      if (DAT_14c951858 == 0) {
        local_1c8 = FUN_1449e2820;
        local_220 = FUN_14081d0ea;
        local_228 = FUN_14081d0ea;
        local_238 = &LAB_1468c5283;
        local_240 = FUN_142809da0;
        local_248 = L"Engine";
        local_250 = (wchar_t *)0x400000000;
        local_258 = CONCAT44(local_258._4_4_,0x10000000);
        local_260 = 8;
        local_268._0_4_ = 0x50;
        local_230 = (code **)&local_1c8;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar30 = DAT_14c951858;
      lVar21 = DAT_14c949118;
      if (DAT_14c948f88 == 0) {
        local_188 = (code *)&DAT_1427db2a2;
        uVar19 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948f88 = uVar19;
        FUN_1446f470e(&local_160,L"Struct",1);
        local_230 = &local_188;
        local_238 = &LAB_146891313;
        local_240 = FUN_146272f63;
        local_250 = L"Engine";
        local_248 = (wchar_t *)CONCAT44(local_248._4_4_,199);
        local_258 = 8;
        local_260 = 0x10000020;
        local_268._0_4_ = 8;
        FUN_14574b4b2(uVar19);
        DAT_14c948f88 = uVar19;
        if (DAT_14c927740 == (longlong *)0x0) {
          local_1c8 = FUN_1449e2820;
          local_220 = FUN_14081d0ea;
          local_228 = FUN_14081d0ea;
          local_238 = &LAB_146856450;
          local_240 = FUN_1427b121c;
          local_248 = L"Engine";
          local_250 = (wchar_t *)0x0;
          local_258 = CONCAT44(local_258._4_4_,0x10000021);
          local_260 = 8;
          local_268._0_4_ = 0x28;
          local_230 = (code **)&local_1c8;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        uVar19 = DAT_14c948f88;
        plVar36 = DAT_14c927740;
        uVar14 = FUN_1400163b0();
        local_268 = L"Struct";
        FUN_14574b446(uVar14,uVar19,plVar36,L"/Script/CoreUObject");
      }
      local_268 = L"Class";
      FUN_14574b446(DAT_14c948f88,lVar21,lVar30,L"/Script/CoreUObject");
    }
    plVar36 = local_200;
    if ((*(int *)(local_200[2] + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(local_200[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) !=
        DAT_14c949118 + 0x30)) {
      lVar30 = FUN_140851d9a();
      lVar21 = plVar36[2];
      iVar8 = *(int *)(lVar21 + 0x38);
      if ((iVar8 < *(int *)(lVar30 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar21 + 0x30) + (longlong)*(int *)(lVar30 + 0x38) * 8) !=
          lVar30 + 0x30)) {
        if (DAT_14c948f88 == 0) {
          local_188 = (code *)&DAT_1427db2a2;
          uVar19 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c948f88 = uVar19;
          FUN_1446f470e(&local_160,L"Struct",1);
          local_230 = &local_188;
          local_238 = &LAB_146891313;
          local_240 = FUN_146272f63;
          local_250 = L"Engine";
          local_248 = (wchar_t *)CONCAT44(local_248._4_4_,199);
          local_258 = 8;
          local_260 = 0x10000020;
          local_268._0_4_ = 8;
          FUN_14574b4b2(uVar19);
          DAT_14c948f88 = uVar19;
          if (DAT_14c927740 == (longlong *)0x0) {
            local_1c8 = FUN_1449e2820;
            local_220 = FUN_14081d0ea;
            local_228 = FUN_14081d0ea;
            local_238 = &LAB_146856450;
            local_240 = FUN_1427b121c;
            local_248 = L"Engine";
            local_250 = (wchar_t *)0x0;
            local_258 = CONCAT44(local_258._4_4_,0x10000021);
            local_260 = 8;
            local_268._0_4_ = 0x28;
            local_230 = (code **)&local_1c8;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          }
          uVar19 = DAT_14c948f88;
          plVar36 = DAT_14c927740;
          uVar14 = FUN_1400163b0();
          local_268 = L"Struct";
          FUN_14574b446(uVar14,uVar19,plVar36,L"/Script/CoreUObject");
          lVar21 = local_200[2];
          iVar8 = *(int *)(lVar21 + 0x38);
          plVar36 = local_200;
        }
        if ((iVar8 < *(int *)(DAT_14c948f88 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(lVar21 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8) !=
            DAT_14c948f88 + 0x30)) goto LAB_144472f4c;
        cVar7 = FUN_14093db12(param_1,plVar36);
      }
      else {
        cVar7 = FUN_1408cca6c(plVar36);
      }
    }
    else {
      cVar7 = FUN_1408cc7aa(param_1,local_200);
    }
    iVar8 = -1;
    if (cVar7 == '\0') goto LAB_1444746b0;
LAB_144472f4c:
    if (DAT_14c948fa0 == 0) {
      local_150 = (code *)&DAT_1427db2a2;
      lVar21 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar21;
      FUN_1446f470e(&local_1a8,L"ScriptStruct",1);
      local_238 = &LAB_1468915ce;
      local_240 = FUN_1427dc742;
      local_250 = L"Engine";
      local_248 = (wchar_t *)CONCAT44(local_248._4_4_,199);
      local_258 = 0x10;
      local_260 = 0x10000020;
      local_268._0_4_ = 8;
      local_230 = &local_150;
      FUN_14574b4b2(lVar21);
      DAT_14c948fa0 = lVar21;
      if (DAT_14c927740 == (longlong *)0x0) {
        local_1c8 = FUN_1449e2820;
        local_220 = FUN_14081d0ea;
        local_228 = FUN_14081d0ea;
        local_238 = &LAB_146856450;
        local_240 = FUN_1427b121c;
        local_248 = L"Engine";
        local_250 = (wchar_t *)0x0;
        local_258 = CONCAT44(local_258._4_4_,0x10000021);
        local_260 = 8;
        local_268._0_4_ = 0x28;
        local_230 = (code **)&local_1c8;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar21 = DAT_14c948fa0;
      plVar36 = DAT_14c927740;
      if (DAT_14c948f88 == 0) {
        local_188 = (code *)&DAT_1427db2a2;
        uVar19 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948f88 = uVar19;
        FUN_1446f470e(&local_160,L"Struct",1);
        local_230 = &local_188;
        local_238 = &LAB_146891313;
        local_240 = FUN_146272f63;
        local_250 = L"Engine";
        local_248 = (wchar_t *)CONCAT44(local_248._4_4_,199);
        local_258 = 8;
        local_260 = 0x10000020;
        local_268._0_4_ = 8;
        FUN_14574b4b2(uVar19);
        DAT_14c948f88 = uVar19;
        if (DAT_14c927740 == (longlong *)0x0) {
          local_1c8 = FUN_1449e2820;
          local_220 = FUN_14081d0ea;
          local_228 = FUN_14081d0ea;
          local_238 = &LAB_146856450;
          local_240 = FUN_1427b121c;
          local_248 = L"Engine";
          local_250 = (wchar_t *)0x0;
          local_258 = CONCAT44(local_258._4_4_,0x10000021);
          local_260 = 8;
          local_268._0_4_ = 0x28;
          local_230 = (code **)&local_1c8;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        uVar19 = DAT_14c948f88;
        plVar37 = DAT_14c927740;
        uVar14 = FUN_1400163b0();
        local_268 = L"Struct";
        FUN_14574b446(uVar14,uVar19,plVar37,L"/Script/CoreUObject");
      }
      local_268 = L"ScriptStruct";
      FUN_14574b446(DAT_14c948f88,lVar21,plVar36,L"/Script/CoreUObject");
      plVar36 = local_200;
    }
    if ((((*(int *)(plVar36[2] + 0x38) < *(int *)(DAT_14c948fa0 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar36[2] + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) !=
          DAT_14c948fa0 + 0x30)) || (lVar21 = FUN_1408cc5ba(), lVar21 == 0)) ||
       ((int)plVar36[7] < *(int *)(lVar21 + 0x38))) goto LAB_144472f7b;
    local_208 = CONCAT44(local_208._4_4_,
                         (int)CONCAT71((int7)((ulonglong)(lVar21 + 0x30) >> 8),
                                       *(longlong *)
                                        (plVar36[6] + (longlong)*(int *)(lVar21 + 0x38) * 8) ==
                                       lVar21 + 0x30));
  }
  local_188 = (code *)0x0;
  uStack_180 = 0;
  FUN_14481578e(&local_188,3);
  plVar37 = param_1 + 2;
  local_1f8 = param_1 + 4;
  local_1f0 = param_1 + 6;
  local_1e0 = param_1 + 0xb;
  uVar10 = 0;
  local_1d8 = plVar37;
  do {
    local_1a8 = local_1d0;
    uVar16 = uVar10;
    uStack_1a0 = plVar36;
    if ((plVar36 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(plVar36);
    }
    for (; uVar16 != 0; uVar16 = uVar16 - 1) {
      FUN_14001c1ae(&local_1a8);
    }
    FUN_140821024(&local_1c8);
    local_1b8 = (undefined2 *)0xffffffffffffffff;
    uStack_1b0._0_4_ = (uint)uStack_1b0 & 0xffff0000;
    uStack_1b0 = CONCAT44(0xffffffff,(uint)uStack_1b0);
    local_1c8 = local_1a8;
    plVar36 = uStack_1a0;
    if (DAT_14c950c29 == 1) {
      if (uStack_1a0 == (longlong *)0x0) {
        plVar36 = (longlong *)0x0;
      }
      else {
        FUN_1456cec3c();
        plVar36 = uStack_1a0;
      }
    }
    uStack_1b0._0_2_ = CONCAT11((char)local_208,uVar10 != 0);
    local_210 = (ulonglong)*(uint *)(param_1 + 3);
    uVar16 = *(uint *)(param_1 + 3) + 1;
    *(uint *)(param_1 + 3) = uVar16;
    uStack_1c0 = plVar36;
    if (*(uint *)((longlong)param_1 + 0x1c) < uVar16) {
      FUN_1466b6c52(plVar37);
    }
    lVar21 = *plVar37;
    lVar30 = (longlong)(int)local_210 * 0x20;
    *(code **)(lVar21 + lVar30) = local_1c8;
    *(longlong **)(lVar21 + 8 + lVar30) = uStack_1c0;
    if ((uStack_1c0 != (longlong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    lVar21 = lVar21 + lVar30;
    *(undefined4 *)(lVar21 + 0x10) = (undefined4)local_1b8;
    *(undefined4 *)(lVar21 + 0x14) = local_1b8._4_4_;
    *(uint *)(lVar21 + 0x18) = (uint)uStack_1b0;
    *(undefined4 *)(lVar21 + 0x1c) = uStack_1b0._4_4_;
    if (*(int *)((longlong)param_1 + 0x54) == 0) {
      iVar8 = (int)param_1[5];
      *(int *)(param_1 + 5) = iVar8 + 1;
      if (*(int *)((longlong)param_1 + 0x2c) == iVar8) {
        FUN_1447711aa(local_1f8,iVar8);
      }
      iVar20 = (int)param_1[9];
      if (iVar20 == 0) {
        iVar17 = -1;
      }
      else {
        iVar17 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar17 = iVar20 + -1;
        }
        iVar17 = iVar17 >> 5;
      }
      iVar18 = iVar20 + 1;
      iVar28 = iVar20 + 0x1f;
      if (-1 < iVar20) {
        iVar28 = iVar20;
      }
      if (iVar28 >> 5 == iVar17) {
        *(int *)(param_1 + 9) = iVar18;
      }
      else {
        if (*(int *)((longlong)param_1 + 0x4c) <= iVar20) {
          iVar17 = iVar20;
          if (iVar20 + 0x20U < 0xa0) {
            iVar18 = 0x80;
          }
          else {
            uVar16 = iVar20 + 0x20U >> 5;
            if (*(int *)((longlong)param_1 + 0x4c) + 0x1fU < 0xa0) {
              uVar32 = 4;
              if (4 < uVar16) {
                uVar32 = uVar16;
              }
            }
            else {
              uVar32 = uVar16 + (uVar16 * 3 >> 3) + 0x10;
            }
            uVar19 = (ulonglong)(uVar32 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar33 = (uint)(uVar19 + 0xf);
                if (uVar32 < 0x1ffd) {
                  uVar19 = (ulonglong)
                           (ushort)(&DAT_14c841d90)
                                   [0x32 - (byte)(&DAT_14c841e00)[uVar19 + 0xf >> 4]];
                }
                else {
                  uVar13 = (ulonglong)(uVar33 & 0xfffffff0);
                  if (uVar13 < 0x7ff1) {
                    bVar15 = (&DAT_14c841e00)[uVar33 >> 4];
                    uVar23 = 0x32;
                    if (0x32 < bVar15) {
                      uVar23 = (ulonglong)bVar15;
                    }
                    uVar31 = 0x32 - (ulonglong)bVar15;
                    do {
                      uVar19 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar31 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar31 & 0xffffffff] & 0xf) == 0) goto LAB_144473577;
                      lVar21 = uVar23 + 1 + uVar31;
                      uVar31 = uVar31 - 1;
                    } while (lVar21 != 0x33);
                  }
                  uVar19 = (ulonglong)DAT_14c841df8;
                  if (DAT_14c841df8 < 0x11) {
                    uVar19 = 0x10;
                  }
                  uVar19 = -uVar19 & (uVar13 + uVar19) - 1;
                }
              }
              else {
                uVar19 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar19,0);
                iVar17 = (int)param_1[9];
              }
            }
LAB_144473577:
            iVar9 = (int)(uVar19 >> 2);
            iVar18 = iVar9 << 5;
            if (iVar9 < (int)uVar16) {
              iVar18 = -0x20;
            }
          }
          *(int *)((longlong)param_1 + 0x4c) = iVar18;
          FUN_1446efbd8(local_1f0,iVar17);
          iVar18 = (int)param_1[9] + 1;
        }
        iVar17 = iVar18 + 0x1f;
        if (-1 < iVar18) {
          iVar17 = iVar18;
        }
        *(int *)(param_1 + 9) = iVar18;
        if (iVar18 % 0x20 != 0) {
          plVar36 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar36 = local_1f0;
          }
          bVar15 = -(char)(iVar18 % 0x20);
          *(uint *)((longlong)plVar36 + (longlong)(iVar17 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar36 + (longlong)(iVar17 >> 5) * 4) << (bVar15 & 0x1f))
               >> (bVar15 & 0x1f);
        }
      }
      lVar21 = (longlong)iVar8;
      plVar36 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar36 = local_1f0;
      }
      bVar15 = (byte)iVar20 & 0x1f;
      puVar1 = (uint *)((longlong)plVar36 + (longlong)(iVar28 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
    }
    else {
      iVar8 = (int)param_1[10];
      lVar21 = (longlong)iVar8;
      iVar20 = *(int *)(param_1[4] + 4 + lVar21 * 0x20);
      *(int *)(param_1 + 10) = iVar20;
      iVar17 = *(int *)((longlong)param_1 + 0x54) + -1;
      *(int *)((longlong)param_1 + 0x54) = iVar17;
      if (iVar17 != 0) {
        *(undefined4 *)(param_1[4] + (longlong)iVar20 * 0x20) = 0xffffffff;
      }
    }
    plVar36 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar36 = local_1f0;
    }
    iVar20 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar20 = iVar8;
    }
    puVar1 = (uint *)((longlong)plVar36 + (longlong)(iVar20 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
    lVar30 = param_1[4];
    lVar21 = lVar21 * 0x20;
    *(code **)(lVar30 + lVar21) = local_1a8;
    *(longlong **)(lVar30 + 8 + lVar21) = uStack_1a0;
    if ((uStack_1a0 != (longlong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    plVar36 = (longlong *)(lVar30 + lVar21);
    *(int *)(plVar36 + 2) = (int)local_210;
    *(undefined4 *)(plVar36 + 3) = 0xffffffff;
    FUN_1400021e4(plVar36,&local_160);
    uVar16 = 0;
    iVar20 = (int)uStack_158 + -1;
    if ((int)uStack_158 == 0) {
      iVar20 = 0;
    }
    if (0 < iVar20) {
      pcVar22 = local_160;
      if ((int)uStack_158 == 0) {
        pcVar22 = (code *)&DAT_149dfb77a;
      }
      lVar21 = 0;
      uVar19 = 0;
      do {
        uVar16 = ((uint)*(ushort *)(pcVar22 + lVar21 * 2) +
                 (uint)(0x19 < *(ushort *)(pcVar22 + lVar21 * 2) - 0x61) * 0x20) - 0x20;
        uVar32 = (uint)(uVar19 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar19 ^ uVar16) & 0xff) * 4);
        uVar16 = uVar32 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar32 & 0xff ^ uVar16 >> 8 & 0xff) * 4);
        uVar19 = (ulonglong)uVar16;
        lVar21 = lVar21 + 1;
      } while (iVar20 != (int)lVar21);
    }
    if (local_160 != (code *)0x0) {
      FUN_1400020a8();
    }
    uVar32 = (int)param_1[5] - *(int *)((longlong)param_1 + 0x54);
    if (1 < uVar32) {
      plVar37 = (longlong *)param_1[0xc];
      if ((longlong *)param_1[0xc] == (longlong *)0x0) {
        plVar37 = local_1e0;
      }
      iVar20 = *(int *)((longlong)plVar37 + (ulonglong)((int)param_1[0xd] - 1U & uVar16) * 4);
      if (iVar20 != -1) {
        do {
          puVar2 = (undefined4 *)(*local_1f8 + (longlong)iVar20 * 0x20);
          if (*(longlong *)(*local_1f8 + (longlong)iVar20 * 0x20) == *plVar36) {
            lVar21 = *plVar36;
            uVar11 = *(undefined4 *)((longlong)plVar36 + 4);
            lVar30 = plVar36[1];
            uVar6 = *(undefined4 *)((longlong)plVar36 + 0xc);
            *(longlong *)(puVar2 + 4) = plVar36[2];
            *puVar2 = (int)lVar21;
            puVar2[1] = uVar11;
            puVar2[2] = (int)lVar30;
            puVar2[3] = uVar6;
            FUN_14447e4d2(local_1f8,iVar8);
            goto LAB_1444733cf;
          }
          iVar20 = puVar2[6];
        } while (iVar20 != -1);
      }
    }
    iVar20 = 1;
    if (3 < uVar32) {
      uVar19 = (ulonglong)(uVar32 & 0xfffffffe) + 0xf;
      lVar21 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar20 = 1 << ((byte)lVar21 & 0x1f);
    }
    if (((int)uVar32 < 1) || (iVar20 <= (int)param_1[0xd])) {
      uVar16 = (int)param_1[0xd] - 1U & uVar16;
      *(uint *)((longlong)plVar36 + 0x1c) = uVar16;
      plVar37 = (longlong *)param_1[0xc];
      if ((longlong *)param_1[0xc] == (longlong *)0x0) {
        plVar37 = local_1e0;
      }
      *(undefined4 *)(plVar36 + 3) =
           *(undefined4 *)
            ((longlong)plVar37 + ((longlong)(int)param_1[0xd] - 1U & (longlong)(int)uVar16) * 4);
      plVar36 = (longlong *)param_1[0xc];
      if ((longlong *)param_1[0xc] == (longlong *)0x0) {
        plVar36 = local_1e0;
      }
      *(int *)((longlong)plVar36 + ((longlong)(int)param_1[0xd] - 1U & (longlong)(int)uVar16) * 4) =
           iVar8;
    }
    else {
      *(int *)(param_1 + 0xd) = iVar20;
      FUN_14001c594(local_1f8);
    }
LAB_1444733cf:
    uVar19 = uStack_180;
    plVar37 = local_1d8;
    plVar36 = local_200;
    uVar11 = (undefined4)local_210;
    lVar21 = (longlong)(int)uStack_180;
    uVar16 = (int)uStack_180 + 1;
    uStack_180 = CONCAT44(uStack_180._4_4_,uVar16);
    if (uStack_180._4_4_ < uVar16) {
      FUN_1446f48e2(&local_188,uVar19 & 0xffffffff);
      uVar11 = (undefined4)local_210;
    }
    *(undefined4 *)(local_188 + lVar21 * 4) = uVar11;
    uVar16 = uVar10 + 1;
  } while ((uVar10 < 2) && (uVar10 = uVar16, (uVar16 == 2 & (byte)local_208) == 0));
  *(int *)(*plVar37 + 0x10 + (longlong)*(int *)(local_188 + 4) * 0x20) = *(int *)local_188;
  *(int *)(*plVar37 + 0x14 + (longlong)*(int *)local_188 * 0x20) = *(int *)(local_188 + 4);
  if ((byte)local_208 == 0) {
    *(int *)(*plVar37 + 0x10 + (longlong)*(int *)(local_188 + 8) * 0x20) = *(int *)(local_188 + 4);
    *(int *)(*plVar37 + 0x14 + (longlong)*(int *)(local_188 + 4) * 0x20) = *(int *)(local_188 + 8);
  }
  local_1a8 = (code *)0x0;
  uStack_1a0 = (longlong *)0x0;
  uVar19 = 0;
  do {
    uVar11 = *(undefined4 *)(local_188 + uVar19 * 4);
    iVar8 = (int)uVar19;
    if (plVar36 == (longlong *)0x0) {
      if (iVar8 == 1) {
        FUN_144475350(param_1,5,uVar11);
        uVar13 = (ulonglong)uStack_1a0;
        lVar21 = (longlong)(int)uStack_1a0;
        uVar10 = (int)uStack_1a0 + 1;
        uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,uVar10);
        if (uStack_1a0._4_4_ < uVar10) {
          FUN_141906530(&local_1a8,uVar13 & 0xffffffff);
        }
        local_1a8[lVar21 * 8] = (code)0x5;
        goto LAB_144473bf6;
      }
      if (iVar8 == 2) {
        FUN_144475350(param_1,6,uVar11);
        uVar13 = (ulonglong)uStack_1a0;
        lVar21 = (longlong)(int)uStack_1a0;
        uVar10 = (int)uStack_1a0 + 1;
        uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,uVar10);
        if (uStack_1a0._4_4_ < uVar10) {
          FUN_141906530(&local_1a8,uVar13 & 0xffffffff);
        }
        local_1a8[lVar21 * 8] = (code)0x6;
        goto LAB_144473ba7;
      }
      FUN_144475350(param_1,4,uVar11);
      uVar13 = (ulonglong)uStack_1a0;
      lVar21 = (longlong)(int)uStack_1a0;
      uVar10 = (int)uStack_1a0 + 1;
      uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,uVar10);
      if (uStack_1a0._4_4_ < uVar10) {
        FUN_141906530(&local_1a8,uVar13 & 0xffffffff);
      }
      local_1a8[lVar21 * 8] = (code)0x4;
LAB_144473c42:
      *(undefined4 *)(local_1a8 + lVar21 * 8 + 4) = uVar11;
      cVar27 = (code)0x1;
      uVar14 = 1;
LAB_144473c4e:
      FUN_144475350(param_1,uVar14,uVar11);
      iVar8 = (int)uStack_1a0;
      uVar10 = (int)uStack_1a0 + 1;
      uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,uVar10);
      if (uStack_1a0._4_4_ < uVar10) {
        FUN_141906530(&local_1a8);
      }
      local_1a8[(longlong)iVar8 * 8] = cVar27;
      *(undefined4 *)(local_1a8 + (longlong)iVar8 * 8 + 4) = uVar11;
      plVar36 = local_200;
    }
    else {
      if (DAT_14c949118 == 0) {
        local_170 = FUN_140631fbe;
        lVar21 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar21;
        FUN_1446f470e(local_168,L"Class",1);
        local_230 = &local_170;
        local_238 = &LAB_146891e90;
        local_240 = (code *)&LAB_146273097;
        local_250 = L"Engine";
        local_248 = (wchar_t *)CONCAT44(local_248._4_4_,199);
        local_258 = 0x20;
        local_260 = 0x10000000;
        local_268._0_4_ = 8;
        FUN_14574b4b2(lVar21);
        DAT_14c949118 = lVar21;
        if (DAT_14c951858 == 0) {
          local_1c8 = FUN_1449e2820;
          local_220 = FUN_14081d0ea;
          local_228 = FUN_14081d0ea;
          local_230 = (code **)&local_1c8;
          local_238 = &LAB_1468c5283;
          local_240 = FUN_142809da0;
          local_248 = L"Engine";
          local_250 = (wchar_t *)0x400000000;
          local_258 = CONCAT44(local_258._4_4_,0x10000000);
          local_260 = 8;
          local_268._0_4_ = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar30 = DAT_14c951858;
        lVar21 = DAT_14c949118;
        if (DAT_14c948f88 == 0) {
          local_150 = (code *)&DAT_1427db2a2;
          DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          local_210 = DAT_14c948f88;
          FUN_1446f470e(&local_160,L"Struct",1);
          local_230 = &local_150;
          local_238 = &LAB_146891313;
          local_240 = FUN_146272f63;
          local_250 = L"Engine";
          local_248 = (wchar_t *)CONCAT44(local_248._4_4_,199);
          local_258 = 8;
          local_260 = 0x10000020;
          local_268._0_4_ = 8;
          FUN_14574b4b2(local_210);
          DAT_14c948f88 = local_210;
          local_1f8 = DAT_14c927740;
          if (DAT_14c927740 == (longlong *)0x0) {
            local_1c8 = FUN_1449e2820;
            local_220 = FUN_14081d0ea;
            local_228 = FUN_14081d0ea;
            local_230 = (code **)&local_1c8;
            local_238 = &LAB_146856450;
            local_240 = FUN_1427b121c;
            local_248 = L"Engine";
            local_250 = (wchar_t *)0x0;
            local_258 = CONCAT44(local_258._4_4_,0x10000021);
            local_260 = 8;
            local_268._0_4_ = 0x28;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            local_210 = DAT_14c948f88;
          }
          DAT_14c948f88 = local_210;
          local_1f8 = DAT_14c927740;
          uVar14 = FUN_1400163b0();
          local_268 = L"Struct";
          FUN_14574b446(uVar14,local_210,local_1f8,L"/Script/CoreUObject");
        }
        local_268 = L"Class";
        FUN_14574b446(DAT_14c948f88,lVar21,lVar30);
        plVar36 = local_200;
      }
      iVar20 = *(int *)(DAT_14c949118 + 0x38);
      if ((iVar20 <= *(int *)(plVar36[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar36[2] + 0x30) + (longlong)iVar20 * 8) ==
          DAT_14c949118 + 0x30)) {
        iVar24 = (int7)(int3)((uint)iVar20 >> 8);
        if (iVar8 != 1) {
          if (iVar8 != 2) {
            FUN_144475350(param_1,CONCAT71(iVar24,0x10),uVar11);
            uVar13 = (ulonglong)uStack_1a0;
            lVar21 = (longlong)(int)uStack_1a0;
            uVar10 = (int)uStack_1a0 + 1;
            uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,uVar10);
            if (uStack_1a0._4_4_ < uVar10) {
              FUN_141906530(&local_1a8,uVar13 & 0xffffffff);
            }
            local_1a8[lVar21 * 8] = (code)0x10;
            goto LAB_144473c42;
          }
          FUN_144475350(param_1,CONCAT71(iVar24,0x12),uVar11);
          uVar13 = (ulonglong)uStack_1a0;
          lVar21 = (longlong)(int)uStack_1a0;
          uVar10 = (int)uStack_1a0 + 1;
          uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,uVar10);
          if (uStack_1a0._4_4_ < uVar10) {
            FUN_141906530(&local_1a8,uVar13 & 0xffffffff);
          }
          local_1a8[lVar21 * 8] = (code)0x12;
LAB_144473ba7:
          *(undefined4 *)(local_1a8 + lVar21 * 8 + 4) = uVar11;
          cVar27 = (code)0x3;
          uVar14 = 3;
          goto LAB_144473c4e;
        }
        FUN_144475350(param_1,CONCAT71(iVar24,0x11),uVar11);
        uVar13 = (ulonglong)uStack_1a0;
        lVar21 = (longlong)(int)uStack_1a0;
        uVar10 = (int)uStack_1a0 + 1;
        uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,uVar10);
        if (uStack_1a0._4_4_ < uVar10) {
          FUN_141906530(&local_1a8,uVar13 & 0xffffffff);
        }
        local_1a8[lVar21 * 8] = (code)0x11;
LAB_144473bf6:
        *(undefined4 *)(local_1a8 + lVar21 * 8 + 4) = uVar11;
        cVar27 = (code)0x2;
        uVar14 = 2;
        goto LAB_144473c4e;
      }
      lVar30 = FUN_140851d9a();
      lVar21 = plVar36[2];
      iVar20 = *(int *)(lVar21 + 0x38);
      if ((*(int *)(lVar30 + 0x38) <= iVar20) &&
         (*(longlong *)(*(longlong *)(lVar21 + 0x30) + (longlong)*(int *)(lVar30 + 0x38) * 8) ==
          lVar30 + 0x30)) {
        uVar25 = (uint7)(uint3)((uint)iVar20 >> 8);
        if (iVar8 != 1) {
          if (iVar8 != 2) {
            FUN_144475350(param_1,CONCAT71(uVar25,0xd),uVar11);
            uVar13 = (ulonglong)uStack_1a0;
            lVar21 = (longlong)(int)uStack_1a0;
            uVar10 = (int)uStack_1a0 + 1;
            uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,uVar10);
            if (uStack_1a0._4_4_ < uVar10) {
              FUN_141906530(&local_1a8,uVar13 & 0xffffffff);
            }
            local_1a8[lVar21 * 8] = (code)0xd;
            goto LAB_144473c42;
          }
          FUN_144475350(param_1,CONCAT71(uVar25,0xf),uVar11);
          uVar13 = (ulonglong)uStack_1a0;
          lVar21 = (longlong)(int)uStack_1a0;
          uVar10 = (int)uStack_1a0 + 1;
          uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,uVar10);
          if (uStack_1a0._4_4_ < uVar10) {
            FUN_141906530(&local_1a8,uVar13 & 0xffffffff);
          }
          local_1a8[lVar21 * 8] = (code)0xf;
          goto LAB_144473ba7;
        }
        FUN_144475350(param_1,CONCAT71(uVar25,0xe),uVar11);
        uVar13 = (ulonglong)uStack_1a0;
        lVar21 = (longlong)(int)uStack_1a0;
        uVar10 = (int)uStack_1a0 + 1;
        uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,uVar10);
        if (uStack_1a0._4_4_ < uVar10) {
          FUN_141906530(&local_1a8,uVar13 & 0xffffffff);
        }
        local_1a8[lVar21 * 8] = (code)0xe;
        goto LAB_144473bf6;
      }
      if (DAT_14c948f88 == 0) {
        local_150 = (code *)&DAT_1427db2a2;
        uVar13 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948f88 = uVar13;
        FUN_1446f470e(&local_160,L"Struct",1);
        local_230 = &local_150;
        local_238 = &LAB_146891313;
        local_240 = FUN_146272f63;
        local_250 = L"Engine";
        local_248 = (wchar_t *)CONCAT44(local_248._4_4_,199);
        local_258 = 8;
        local_260 = 0x10000020;
        local_268._0_4_ = 8;
        FUN_14574b4b2(uVar13);
        DAT_14c948f88 = uVar13;
        if (DAT_14c927740 == (longlong *)0x0) {
          local_1c8 = FUN_1449e2820;
          local_220 = FUN_14081d0ea;
          local_228 = FUN_14081d0ea;
          local_230 = (code **)&local_1c8;
          local_238 = &LAB_146856450;
          local_240 = FUN_1427b121c;
          local_248 = L"Engine";
          local_250 = (wchar_t *)0x0;
          local_258 = CONCAT44(local_258._4_4_,0x10000021);
          local_260 = 8;
          local_268._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        uVar13 = DAT_14c948f88;
        plVar36 = DAT_14c927740;
        uVar14 = FUN_1400163b0();
        local_268 = L"Struct";
        FUN_14574b446(uVar14,uVar13,plVar36);
        lVar21 = local_200[2];
        iVar20 = *(int *)(lVar21 + 0x38);
        plVar36 = local_200;
      }
      if ((*(int *)(DAT_14c948f88 + 0x38) <= iVar20) &&
         (*(longlong *)(*(longlong *)(lVar21 + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8)
          == DAT_14c948f88 + 0x30)) {
        lVar21 = FUN_1408cc5ba();
        if ((lVar21 == 0) ||
           (((int)plVar36[7] < *(int *)(lVar21 + 0x38) ||
            (*(longlong *)(plVar36[6] + (longlong)*(int *)(lVar21 + 0x38) * 8) != lVar21 + 0x30))))
        {
          FUN_14001beea();
          if ((longlong)DAT_14cc012c0 != 0) {
            lVar21 = 0;
            do {
              if (*(longlong **)(DAT_14cc012b8 + lVar21) == plVar36) {
                uVar26 = (undefined7)((ulonglong)lVar21 >> 8);
                if (iVar8 == 1) {
                  FUN_144475350(param_1,CONCAT71(uVar26,8),uVar11);
                  uVar13 = (ulonglong)uStack_1a0;
                  lVar21 = (longlong)(int)uStack_1a0;
                  uVar10 = (int)uStack_1a0 + 1;
                  uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,uVar10);
                  if (uStack_1a0._4_4_ < uVar10) {
                    FUN_141906530(&local_1a8,uVar13 & 0xffffffff);
                  }
                  local_1a8[lVar21 * 8] = (code)0x8;
                  *(undefined4 *)(local_1a8 + lVar21 * 8 + 4) = uVar11;
                  goto LAB_144473bb8;
                }
                if (iVar8 == 2) {
                  FUN_144475350(param_1,CONCAT71(uVar26,9),uVar11);
                  uVar13 = (ulonglong)uStack_1a0;
                  lVar21 = (longlong)(int)uStack_1a0;
                  uVar10 = (int)uStack_1a0 + 1;
                  uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,uVar10);
                  if (uStack_1a0._4_4_ < uVar10) {
                    FUN_141906530(&local_1a8,uVar13 & 0xffffffff);
                  }
                  local_1a8[lVar21 * 8] = (code)0x9;
                  *(undefined4 *)(local_1a8 + lVar21 * 8 + 4) = uVar11;
                  goto LAB_144473b69;
                }
                FUN_144475350(param_1,CONCAT71(uVar26,7),uVar11);
                uVar13 = (ulonglong)uStack_1a0;
                lVar21 = (longlong)(int)uStack_1a0;
                uVar10 = (int)uStack_1a0 + 1;
                uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,uVar10);
                if (uStack_1a0._4_4_ < uVar10) {
                  FUN_141906530(&local_1a8,uVar13 & 0xffffffff);
                }
                local_1a8[lVar21 * 8] = (code)0x7;
                *(undefined4 *)(local_1a8 + lVar21 * 8 + 4) = uVar11;
                break;
              }
              lVar21 = lVar21 + 8;
            } while ((longlong)DAT_14cc012c0 * 8 != lVar21);
          }
          if (iVar8 != 1) {
            if (iVar8 != 2) {
              FUN_144475350(param_1,10,uVar11);
              uVar13 = (ulonglong)uStack_1a0;
              lVar21 = (longlong)(int)uStack_1a0;
              uVar10 = (int)uStack_1a0 + 1;
              uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,uVar10);
              if (uStack_1a0._4_4_ < uVar10) {
                FUN_141906530(&local_1a8,uVar13 & 0xffffffff);
              }
              local_1a8[lVar21 * 8] = (code)0xa;
              goto LAB_144473c42;
            }
LAB_144473b69:
            FUN_144475350(param_1,0xc,uVar11);
            uVar13 = (ulonglong)uStack_1a0;
            lVar21 = (longlong)(int)uStack_1a0;
            uVar10 = (int)uStack_1a0 + 1;
            uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,uVar10);
            if (uStack_1a0._4_4_ < uVar10) {
              FUN_141906530(&local_1a8,uVar13 & 0xffffffff);
            }
            local_1a8[lVar21 * 8] = (code)0xc;
            goto LAB_144473ba7;
          }
LAB_144473bb8:
          FUN_144475350(param_1,0xb,uVar11);
          uVar13 = (ulonglong)uStack_1a0;
          lVar21 = (longlong)(int)uStack_1a0;
          uVar10 = (int)uStack_1a0 + 1;
          uStack_1a0 = (longlong *)CONCAT44(uStack_1a0._4_4_,uVar10);
          if (uStack_1a0._4_4_ < uVar10) {
            FUN_141906530(&local_1a8,uVar13 & 0xffffffff);
          }
          local_1a8[lVar21 * 8] = (code)0xb;
          goto LAB_144473bf6;
        }
        if (uVar19 == 0) {
          cVar27 = (code)0x0;
          uVar14 = 0;
          goto LAB_144473c4e;
        }
      }
    }
    uVar13 = uVar19 + 1;
  } while ((uVar19 < 2) && (uVar19 = uVar13, (uVar13 == 2 & (byte)local_208) == 0));
  if ((longlong)(int)uStack_1a0 != 0) {
    pcVar22 = local_1a8 + (longlong)(int)uStack_1a0 * 8;
    pcVar12 = local_1a8;
LAB_1444741f3:
    if ((char)param_1[0x73] == '\0') {
      cVar27 = *pcVar12;
      if ((int)param_1[0x42] != *(int *)((longlong)param_1 + 0x23c)) {
        plVar36 = (longlong *)param_1[0x49];
        if ((longlong *)param_1[0x49] == (longlong *)0x0) {
          plVar36 = param_1 + 0x48;
        }
        iVar8 = *(int *)((longlong)plVar36 +
                        (ulonglong)((int)param_1[0x4a] - 1U & (uint)(byte)cVar27) * 4);
        if (iVar8 != -1) {
          do {
            lVar21 = param_1[0x41] + (longlong)iVar8 * 0x20;
            if (*(code *)(param_1[0x41] + (longlong)iVar8 * 0x20) == cVar27) goto LAB_144474253;
            iVar8 = *(int *)(lVar21 + 0x18);
          } while (iVar8 != -1);
        }
      }
      lVar21 = 0;
LAB_144474253:
      if ((longlong)*(int *)(lVar21 + 0x10) != 0) {
        lVar30 = 0;
        do {
          if (*(int *)(*(longlong *)(lVar21 + 8) + lVar30) == *(int *)(pcVar12 + 4)) {
            if ((int)param_1[0x4c] == *(int *)((longlong)param_1 + 0x28c)) goto LAB_1444742d1;
            plVar36 = (longlong *)param_1[0x53];
            if ((longlong *)param_1[0x53] == (longlong *)0x0) {
              plVar36 = param_1 + 0x52;
            }
            iVar8 = *(int *)((longlong)plVar36 +
                            (ulonglong)((int)param_1[0x54] - 1U & (uint)(byte)cVar27) * 4);
            if (iVar8 == -1) goto LAB_1444742d1;
            goto LAB_1444742b8;
          }
          lVar30 = lVar30 + 4;
        } while ((longlong)*(int *)(lVar21 + 0x10) * 4 != lVar30);
      }
    }
    goto LAB_14447432a;
  }
LAB_144474337:
  if (local_200 == (longlong *)0x0) {
    iVar8 = (**(code **)(*param_1 + 0x98))(param_1,local_1e8);
  }
  else {
    if (DAT_14c948f88 == 0) {
      local_150 = (code *)&DAT_1427db2a2;
      uVar19 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948f88 = uVar19;
      FUN_1446f470e(&local_160,L"Struct",1);
      local_230 = &local_150;
      local_238 = &LAB_146891313;
      local_240 = FUN_146272f63;
      local_250 = L"Engine";
      local_248 = (wchar_t *)CONCAT44(local_248._4_4_,199);
      local_258 = 8;
      local_260 = 0x10000020;
      local_268._0_4_ = 8;
      FUN_14574b4b2(uVar19);
      DAT_14c948f88 = uVar19;
      if (DAT_14c927740 == (longlong *)0x0) {
        local_1c8 = FUN_1449e2820;
        local_220 = FUN_14081d0ea;
        local_228 = FUN_14081d0ea;
        local_230 = (code **)&local_1c8;
        local_238 = &LAB_146856450;
        local_240 = FUN_1427b121c;
        local_248 = L"Engine";
        local_250 = (wchar_t *)0x0;
        local_258 = CONCAT44(local_258._4_4_,0x10000021);
        local_260 = 8;
        local_268._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      uVar19 = DAT_14c948f88;
      plVar36 = DAT_14c927740;
      uVar14 = FUN_1400163b0();
      local_268 = L"Struct";
      FUN_14574b446(uVar14,uVar19,plVar36,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c948f88 + 0x38) <= *(int *)(local_200[2] + 0x38)) &&
       (plVar36 = local_200,
       *(longlong *)
        (*(longlong *)(local_200[2] + 0x30) + (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8) ==
       DAT_14c948f88 + 0x30)) {
      do {
        lVar21 = plVar36[10];
LAB_144474731:
        if (lVar21 != 0) {
          if ((~*(uint *)(*(longlong *)(lVar21 + 8) + 0x18) & 0x8001) != 0)
          goto code_r0x000144474746;
LAB_14447478b:
          cVar7 = FUN_14093e018(param_1,lVar21);
          if (cVar7 != '\0') {
            FUN_1490fc0aa(local_148,lVar21,param_1);
            if (local_74 == '\x01') {
              local_74 = '\0';
            }
            if (local_b8 != 0) {
              plVar37 = local_a8;
              if (local_a8 == (longlong *)0x0) {
                plVar37 = local_98;
              }
              (**(code **)(*plVar37 + 0x10))();
            }
            if (local_d0 != 0) {
              FUN_1400020a8();
            }
            local_e0 = 0;
            if (local_e8 != 0) {
              FUN_1400020a8();
            }
            FUN_14083ed90(local_128);
            if (local_138 != 0) {
              FUN_1400020a8();
            }
          }
          plVar37 = (longlong *)(lVar21 + 0x18);
          do {
            for (lVar21 = *plVar37; lVar21 != 0; lVar21 = *(longlong *)(lVar21 + 0x18)) {
              if ((~*(uint *)(*(longlong *)(lVar21 + 8) + 0x18) & 0x8001) == 0) goto LAB_14447478b;
            }
            if (*(code **)(*plVar36 + 0x2b0) == (code *)&LAB_1446e8c94) {
              plVar36 = (longlong *)plVar36[8];
            }
            else {
              plVar36 = (longlong *)(**(code **)(*plVar36 + 0x2b0))(plVar36);
            }
            plVar37 = plVar36 + 10;
          } while (plVar36 != (longlong *)0x0);
          break;
        }
        if (*(code **)(*plVar36 + 0x2b0) == (code *)&LAB_1446e8c94) {
          plVar36 = (longlong *)plVar36[8];
        }
        else {
          plVar36 = (longlong *)(**(code **)(*plVar36 + 0x2b0))(plVar36);
        }
      } while (plVar36 != (longlong *)0x0);
    }
    iVar8 = (**(code **)(*param_1 + 0x98))(param_1,local_1e8);
    plVar36 = local_200;
    if ((*(uint *)(local_200 + 1) >> 0x1e & 1) == 0) {
      lVar21 = FUN_1408cc5f4();
      if ((*(int *)(plVar36[2] + 0x38) < *(int *)(lVar21 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar36[2] + 0x30) + (longlong)*(int *)(lVar21 + 0x38) * 8) !=
          lVar21 + 0x30)) {
        lVar21 = FUN_1414cc200();
        if ((*(int *)(plVar36[2] + 0x38) < *(int *)(lVar21 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar36[2] + 0x30) + (longlong)*(int *)(lVar21 + 0x38) * 8)
            != lVar21 + 0x30)) goto LAB_14447468c;
      }
      uVar11 = (**(code **)(*param_1 + 0x98))(param_1,&local_198);
      plVar37 = param_1 + 0x55;
      FUN_1400bbfc4(&local_1c8,plVar36);
      uVar10 = (uint)((ulonglong)uStack_1c0 >> 0x10);
      uVar33 = (uint)uStack_1c0 & 0xffff;
      uVar16 = (uint)((ulonglong)local_1c8 >> 0x10);
      uVar32 = (uint)local_1c8 & 0xffff;
      uVar16 = ((uint)local_1c8 << 0x10 | uVar32) + (int)((ulonglong)local_1c8 >> 0x20) +
               (uVar16 << 0x13 | uVar16 & 0xffff) + (uVar32 >> 4);
      uVar16 = (uVar16 >> 2) + 0x9e3779b9 +
               ((uint)uStack_1c0 << 0x10 | uVar33) + (int)((ulonglong)uStack_1c0 >> 0x20) +
               (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar33 >> 4) + uVar16 * 0x40 ^ uVar16;
      uVar32 = uVar16 >> 0xd ^ -uVar16;
      uVar10 = uVar32 << 8 ^ (-0x61c88647 - uVar16) - uVar32;
      uVar16 = uVar10 >> 0xd ^ (uVar16 - uVar32) - uVar10;
      uVar32 = uVar16 >> 0xc ^ (uVar32 - uVar10) - uVar16;
      uVar10 = uVar32 << 0x10 ^ (uVar10 - uVar16) - uVar32;
      uVar34 = uVar10 >> 5 ^ (uVar16 - uVar32) - uVar10;
      uVar33 = uVar34 >> 3 ^ (uVar32 - uVar10) - uVar34;
      uVar16 = uVar33 << 10 ^ (uVar10 - uVar34) - uVar33;
      uVar32 = 0;
      uVar10 = (uint)uStack_1b0 - 1;
      if ((uint)uStack_1b0 == 0) {
        uVar10 = uVar32;
      }
      if (0 < (int)uVar10) {
        puVar35 = &DAT_149dfb77a;
        if ((uint)uStack_1b0 != 0) {
          puVar35 = local_1b8;
        }
        lVar21 = 0;
        uVar32 = 0;
        do {
          uVar29 = ((uint)(0x19 < (ushort)puVar35[lVar21] - 0x61) * 0x20 +
                   (uint)(ushort)puVar35[lVar21]) - 0x20;
          uVar32 = uVar32 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar32 ^ uVar29) & 0xff) * 4);
          uVar32 = uVar32 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar32 & 0xff ^ uVar29 >> 8 & 0xff) * 4);
          lVar21 = lVar21 + 1;
        } while (uVar10 != (uint)lVar21);
      }
      uVar33 = uVar32 >> 0xd ^ (uVar16 >> 0xf ^ uVar34 - (uVar33 + uVar16)) - uVar32;
      uVar16 = uVar33 << 8 ^ (-0x61c88647 - uVar32) - uVar33;
      uVar10 = uVar16 >> 0xd ^ (uVar32 - uVar33) - uVar16;
      uVar32 = uVar10 >> 0xc ^ (uVar33 - uVar16) - uVar10;
      uVar33 = uVar32 << 0x10 ^ (uVar16 - uVar10) - uVar32;
      uVar16 = uVar33 >> 5 ^ (uVar10 - uVar32) - uVar33;
      uVar10 = uVar16 >> 3 ^ (uVar32 - uVar33) - uVar16;
      uVar32 = uVar10 << 10 ^ (uVar33 - uVar16) - uVar10;
      uVar10 = uVar32 >> 0xf ^ uVar16 - (uVar10 + uVar32);
      iVar20 = FUN_1468c2192(plVar37,uVar10,&local_1c8);
      if (iVar20 == -1) {
LAB_1444748a2:
        FUN_1468f1fa4(plVar37,&local_160);
        puVar2 = uStack_158;
        *uStack_158 = (undefined4)local_1c8;
        uStack_158[1] = local_1c8._4_4_;
        uStack_158[2] = (int)uStack_1c0;
        uStack_158[3] = uStack_1c0._4_4_;
        *(undefined2 **)(uStack_158 + 4) = local_1b8;
        local_1b8 = (undefined2 *)0x0;
        uStack_158[6] = (uint)uStack_1b0;
        uStack_158[7] = uStack_1b0._4_4_;
        uStack_1b0 = 0;
        uStack_158[8] = 0;
        uStack_158[10] = 0xffffffff;
        iVar20 = (int)local_160;
        local_208 = (ulonglong)(int)local_160;
        local_268 = (wchar_t *)0x0;
        cVar7 = FUN_1468f2092(plVar37,uVar10,uStack_158,&local_160);
        if (cVar7 == '\0') {
          uVar16 = (int)param_1[0x56] - *(int *)((longlong)param_1 + 0x2dc);
          iVar17 = 1;
          if (3 < uVar16) {
            uVar19 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
            lVar21 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            iVar17 = 1 << ((byte)lVar21 & 0x1f);
          }
          if (((int)uVar16 < 1) || (iVar17 <= (int)param_1[0x5e])) {
            uVar10 = (int)param_1[0x5e] - 1U & uVar10;
            puVar2[0xb] = uVar10;
            plVar36 = (longlong *)param_1[0x5d];
            if ((longlong *)param_1[0x5d] == (longlong *)0x0) {
              plVar36 = param_1 + 0x5c;
            }
            puVar2[10] = *(undefined4 *)
                          ((longlong)plVar36 +
                          ((longlong)(int)param_1[0x5e] - 1U & (longlong)(int)uVar10) * 4);
            plVar36 = (longlong *)param_1[0x5d];
            if ((longlong *)param_1[0x5d] == (longlong *)0x0) {
              plVar36 = param_1 + 0x5c;
            }
            *(int *)((longlong)plVar36 +
                    ((longlong)(int)param_1[0x5e] - 1U & (longlong)(int)uVar10) * 4) = iVar20;
          }
          else {
            *(int *)(param_1 + 0x5e) = iVar17;
            FUN_1468f21c2(plVar37);
          }
        }
        lVar21 = *plVar37 + local_208 * 0x30;
      }
      else {
        if (*plVar37 + (longlong)iVar20 * 0x30 == 0) goto LAB_1444748a2;
        lVar21 = (longlong)iVar20 * 0x30 + *plVar37;
      }
      *(undefined4 *)(lVar21 + 0x20) = uVar11;
      if (local_1b8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14447468c:
  if (local_1a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_188 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1444746b0:
  if ((local_60 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (iVar8 = *(int *)(lVar21 + 0x18), iVar8 != -1) {
LAB_1444742b8:
    lVar21 = param_1[0x4b] + (longlong)iVar8 * 0x20;
    if (*(code *)(param_1[0x4b] + (longlong)iVar8 * 0x20) == cVar27) goto LAB_1444742d3;
  }
LAB_1444742d1:
  lVar21 = 0;
LAB_1444742d3:
  iVar8 = *(int *)(lVar21 + 0x10);
  if ((longlong)iVar8 != 0) {
    lVar21 = *(longlong *)(lVar21 + 8);
    lVar30 = 0;
    do {
      iVar20 = *(int *)(lVar21 + lVar30);
      FUN_1490f82fa((ulonglong)(uint)(iVar20 % 0x59) * 0xb8 +
                    *(longlong *)(param_1[0x11] + (longlong)(iVar20 / 0x59) * 8));
      lVar30 = lVar30 + 4;
    } while ((longlong)iVar8 * 4 != lVar30);
  }
LAB_14447432a:
  pcVar12 = pcVar12 + 8;
  if (pcVar12 == pcVar22) goto LAB_144474337;
  goto LAB_1444741f3;
code_r0x000144474746:
  lVar21 = *(longlong *)(lVar21 + 0x18);
  goto LAB_144474731;
}



// FUNCTION 144475350 FUN_144475350 body=148 status=ok
// SIG undefined FUN_144475350(void)

void FUN_144475350(longlong param_1,byte param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x210) != *(int *)(param_1 + 0x23c)) {
    lVar2 = param_1 + 0x240;
    if (*(longlong *)(param_1 + 0x248) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x248);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x250) + 0x7fU & (uint)param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x208) + (longlong)iVar1 * 0x20;
        if (*(byte *)(*(longlong *)(param_1 + 0x208) + (longlong)iVar1 * 0x20) == param_2)
        goto LAB_1444753b9;
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  lVar2 = 0;
LAB_1444753b9:
  iVar1 = *(int *)(lVar2 + 0x10);
  *(uint *)(lVar2 + 0x10) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x14) < iVar1 + 1U) {
    FUN_1446f48e2((longlong *)(lVar2 + 8),iVar1);
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 8) + (longlong)iVar1 * 4) = param_3;
  return;
}



// FUNCTION 1444753e4 FUN_1444753e4 body=1393 status=ok
// SIG undefined FUN_1444753e4(void)

undefined8 FUN_1444753e4(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined7 uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined2 *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  byte bVar24;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  uint *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar7 = param_1 + 0x55;
  uVar5 = *param_2;
  uVar1 = param_2[1];
  uVar12 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar20 = (uint)uVar1 & 0xffff;
  uVar11 = (uint)((ulonglong)uVar5 >> 0x10);
  uVar18 = (uint)uVar5 & 0xffff;
  uVar11 = ((uint)uVar5 << 0x10 | uVar18) + (int)((ulonglong)uVar5 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar18 >> 4);
  uVar11 = (uVar11 >> 2) + 0x9e3779b9 +
           ((uint)uVar1 << 0x10 | uVar20) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar20 >> 4) + uVar11 * 0x40 ^ uVar11;
  uVar18 = uVar11 >> 0xd ^ -uVar11;
  uVar12 = uVar18 << 8 ^ (-0x61c88647 - uVar11) - uVar18;
  uVar11 = uVar12 >> 0xd ^ (uVar11 - uVar18) - uVar12;
  uVar18 = uVar11 >> 0xc ^ (uVar18 - uVar12) - uVar11;
  uVar12 = uVar18 << 0x10 ^ (uVar12 - uVar11) - uVar18;
  uVar21 = uVar12 >> 5 ^ (uVar11 - uVar18) - uVar12;
  uVar20 = uVar21 >> 3 ^ (uVar18 - uVar12) - uVar21;
  uVar11 = uVar20 << 10 ^ (uVar12 - uVar21) - uVar20;
  iVar3 = *(int *)(param_2 + 3);
  uVar18 = 0;
  uVar12 = iVar3 - 1;
  if (iVar3 == 0) {
    uVar12 = uVar18;
  }
  puVar17 = &DAT_149dfb77a;
  if (0 < (int)uVar12) {
    if (iVar3 != 0) {
      puVar17 = (undefined2 *)param_2[2];
    }
    lVar22 = 0;
    uVar18 = 0;
    do {
      uVar14 = ((uint)(ushort)puVar17[lVar22] + (uint)(0x19 < (ushort)puVar17[lVar22] - 0x61) * 0x20
               ) - 0x20;
      uVar18 = uVar18 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar18 ^ uVar14) & 0xff) * 4);
      uVar18 = uVar18 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar18 & 0xff ^ uVar14 >> 8 & 0xff) * 4);
      lVar22 = lVar22 + 1;
    } while (uVar12 != (uint)lVar22);
  }
  uVar20 = uVar18 >> 0xd ^ (uVar11 >> 0xf ^ uVar21 - (uVar20 + uVar11)) - uVar18;
  uVar11 = uVar20 << 8 ^ (-0x61c88647 - uVar18) - uVar20;
  uVar12 = uVar11 >> 0xd ^ (uVar18 - uVar20) - uVar11;
  uVar18 = uVar12 >> 0xc ^ (uVar20 - uVar11) - uVar12;
  uVar20 = uVar18 << 0x10 ^ (uVar11 - uVar12) - uVar18;
  uVar11 = uVar20 >> 5 ^ (uVar12 - uVar18) - uVar20;
  uVar12 = uVar11 >> 3 ^ (uVar18 - uVar20) - uVar11;
  uVar18 = uVar12 << 10 ^ (uVar20 - uVar11) - uVar12;
  plVar8 = plVar7;
  local_88 = param_3;
  iVar3 = FUN_1468c2192(plVar7,uVar18 >> 0xf ^ uVar11 - (uVar12 + uVar18),param_2);
  bVar24 = (byte)plVar8;
  if (iVar3 != -1) {
    lVar22 = (longlong)iVar3 * 0x30 + *plVar7;
    bVar24 = lVar22 != 0;
    puVar4 = (uint *)(lVar22 + 0x20);
    if (puVar4 != (uint *)0x0 && (bool)bVar24) {
      uVar12 = *puVar4;
      uVar15 = (ulonglong)uVar12;
      uVar5 = FUN_14447de14(plVar7,param_2);
      if (uVar12 == 0xffffffff) {
        uVar10 = (undefined7)((ulonglong)uVar5 >> 8);
        bVar2 = 1;
        bVar24 = 0;
      }
      else {
        local_58 = (uint *)0x0;
        uStack_50 = 0;
        local_78 = 0xffffffff;
        FUN_1448156a8(&local_58,&local_78,3);
        *local_58 = uVar12;
        uVar12 = (**(code **)(*param_1 + 0x100))(param_1,*local_58);
        local_58[1] = uVar12;
        if (local_58[1] != 0xffffffff) {
          uVar12 = (**(code **)(*param_1 + 0x100))(param_1);
          local_58[2] = uVar12;
        }
        local_90 = param_1 + 4;
        plVar7 = param_1 + 0xb;
        lVar16 = 0;
        lVar22 = local_88;
        local_80 = plVar7;
        do {
          uVar12 = local_58[lVar16];
          if ((longlong)(int)uVar12 == -1) break;
          lVar6 = FUN_1414cc200();
          uVar10 = (undefined7)(uVar15 >> 8);
          iVar3 = (int)lVar16;
          if (lVar6 == lVar22) {
            if (iVar3 == 2) {
              uVar15 = CONCAT71(uVar10,3);
              uVar5 = 0xf;
            }
            else if (iVar3 == 1) {
              uVar15 = CONCAT71(uVar10,2);
              uVar5 = 0xe;
            }
            else {
              uVar15 = CONCAT71(uVar10,1);
              uVar5 = 0xd;
            }
LAB_144475747:
            FUN_144475956(param_1,uVar5,uVar12);
            FUN_144475956(param_1,uVar15,uVar12);
          }
          else {
            lVar6 = FUN_1408cc5f4();
            if (lVar6 == lVar22) {
              if (iVar3 == 2) {
                uVar15 = CONCAT71(uVar10,3);
                uVar5 = 0xc;
              }
              else if (iVar3 == 1) {
                uVar15 = CONCAT71(uVar10,2);
                uVar5 = 0xb;
              }
              else {
                uVar15 = CONCAT71(uVar10,1);
                uVar5 = 10;
              }
              goto LAB_144475747;
            }
          }
          plVar7 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1,uVar12);
          if ((int)param_1[5] != *(int *)((longlong)param_1 + 0x54)) {
            FUN_1400021e4(plVar7,&local_78);
            uVar15 = 0;
            iVar3 = local_70 + -1;
            if (local_70 == 0) {
              iVar3 = 0;
            }
            if (0 < iVar3) {
              puVar17 = (undefined2 *)CONCAT44(uStack_74,local_78);
              if (local_70 == 0) {
                puVar17 = &DAT_149dfb77a;
              }
              lVar22 = 0;
              uVar15 = 0;
              do {
                uVar11 = ((uint)(0x19 < (ushort)puVar17[lVar22] - 0x61) * 0x20 +
                         (uint)(ushort)puVar17[lVar22]) - 0x20;
                uVar18 = (uint)(uVar15 >> 8) ^
                         *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar11) & 0xff) * 4)
                ;
                uVar15 = (ulonglong)
                         (uVar18 >> 8 ^
                         *(uint *)(&DAT_14c75d150 +
                                  (ulonglong)(uVar18 & 0xff ^ uVar11 >> 8 & 0xff) * 4));
                lVar22 = lVar22 + 1;
              } while (iVar3 != (int)lVar22);
            }
            if ((undefined2 *)CONCAT44(uStack_74,local_78) != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            lVar22 = local_88;
            plVar8 = (longlong *)param_1[0xc];
            if ((longlong *)param_1[0xc] == (longlong *)0x0) {
              plVar8 = local_80;
            }
            iVar3 = *(int *)((longlong)plVar8 +
                            ((longlong)(int)uVar15 & (longlong)(int)param_1[0xd] - 1U) * 4);
            if (iVar3 != -1) {
              lVar6 = *local_90;
LAB_14447583f:
              lVar13 = lVar6 + (longlong)iVar3 * 0x20;
              if (*(longlong *)(lVar6 + (longlong)iVar3 * 0x20) != *plVar7)
              goto code_r0x000144475850;
              iVar19 = *(int *)((longlong)plVar8 + (longlong)*(int *)(lVar13 + 0x1c) * 4);
              if (iVar19 == iVar3) {
                puVar9 = (undefined4 *)((longlong)plVar8 + (longlong)*(int *)(lVar13 + 0x1c) * 4);
              }
              else {
                do {
                  lVar23 = (longlong)iVar19;
                  iVar19 = *(int *)(lVar6 + 0x18 + lVar23 * 0x20);
                } while (iVar19 != iVar3);
                puVar9 = (undefined4 *)(lVar23 * 0x20 + lVar6 + 0x18);
              }
              *puVar9 = *(undefined4 *)(lVar13 + 0x18);
              FUN_14447e4d2(local_90);
            }
          }
LAB_144475896:
          FUN_140821024(&local_78);
          local_68 = -1;
          uStack_60 = uStack_60 & 0xffff0000;
          uStack_5c = 0xffffffff;
          lVar6 = param_1[2];
          lVar23 = (longlong)(int)uVar12 * 0x20;
          *(ulonglong *)(lVar6 + lVar23) = CONCAT44(uStack_74,local_78);
          lVar13 = CONCAT44(uStack_6c,local_70);
          if (DAT_14c950c29 == '\x01') {
            if (lVar13 == 0) {
              lVar13 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar13 = CONCAT44(uStack_6c,local_70);
            }
          }
          lVar6 = lVar6 + lVar23;
          *(longlong *)(lVar6 + 8) = lVar13;
          plVar7 = &local_68;
          *(undefined4 *)(lVar6 + 0x10) = (undefined4)local_68;
          *(undefined4 *)(lVar6 + 0x14) = local_68._4_4_;
          *(uint *)(lVar6 + 0x18) = uStack_60;
          *(undefined4 *)(lVar6 + 0x1c) = uStack_5c;
          lVar16 = lVar16 + 1;
        } while (lVar16 != 3);
        if (local_58 != (uint *)0x0) {
          plVar7 = (longlong *)FUN_1400020a8();
        }
        uVar10 = (undefined7)((ulonglong)plVar7 >> 8);
        bVar2 = 1;
        bVar24 = 1;
      }
      goto LAB_14447592c;
    }
  }
  bVar2 = 0;
  uVar10 = 0;
LAB_14447592c:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar10,bVar2 & bVar24);
code_r0x000144475850:
  iVar3 = *(int *)(lVar13 + 0x18);
  if (iVar3 == -1) goto LAB_144475896;
  goto LAB_14447583f;
}



// FUNCTION 144475956 FUN_144475956 body=1446 status=ok
// SIG undefined FUN_144475956(void)

void FUN_144475956(longlong param_1,byte param_2,int param_3)

{
  ulonglong uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auStack_128 [44];
  int local_fc;
  int *local_f8;
  longlong local_f0;
  int *local_e8;
  int *local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b0;
  int local_a8;
  uint local_a0 [4];
  uint *local_90;
  int local_88;
  int local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_1 + 0x210) != *(int *)(param_1 + 0x23c)) {
    lVar13 = param_1 + 0x240;
    if (*(longlong *)(param_1 + 0x248) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x248);
    }
    iVar10 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x250) + 0x7fU & (uint)param_2) * 4);
    if (iVar10 != -1) {
      do {
        lVar13 = *(longlong *)(param_1 + 0x208) + (longlong)iVar10 * 0x20;
        if (*(byte *)(*(longlong *)(param_1 + 0x208) + (longlong)iVar10 * 0x20) == param_2)
        goto LAB_1444759e0;
        iVar10 = *(int *)(lVar13 + 0x18);
      } while (iVar10 != -1);
    }
  }
  lVar13 = 0;
LAB_1444759e0:
  iVar10 = *(int *)(lVar13 + 0x10);
  lVar19 = (longlong)iVar10;
  local_fc = param_3;
  if (lVar19 != 0) {
    piVar3 = *(int **)(lVar13 + 8);
    iVar11 = 0;
    bVar15 = *piVar3 == param_3;
    iVar8 = 0;
    local_f0 = param_1;
    do {
      lVar7 = (longlong)iVar8;
      iVar5 = iVar8;
      lVar14 = lVar7;
      iVar4 = iVar8 + 1;
      if (iVar8 + 1 < iVar10) {
        iVar4 = iVar10;
      }
      do {
        lVar14 = lVar14 + 1;
        iVar17 = iVar4;
        if (lVar19 <= lVar14) break;
        iVar17 = iVar5 + 1;
        iVar5 = iVar17;
      } while (bVar15 == (piVar3[lVar14] == local_fc));
      if (bVar15 == false) {
        local_f8 = piVar3;
        if (iVar11 != iVar8) {
          memmove(piVar3 + iVar11,piVar3 + lVar7,(longlong)(iVar17 - iVar8) << 2);
        }
        iVar11 = iVar11 + (iVar17 - iVar8);
        piVar3 = local_f8;
      }
      bVar15 = (bool)(bVar15 ^ 1);
      iVar8 = iVar17;
    } while (lVar14 < lVar19);
    *(int *)(lVar13 + 0x10) = iVar11;
    param_1 = local_f0;
  }
  if (*(int *)(param_1 + 0x260) != *(int *)(param_1 + 0x28c)) {
    lVar13 = param_1 + 0x290;
    if (*(longlong *)(param_1 + 0x298) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x298);
    }
    iVar10 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x2a0) + 0x7fU & (uint)param_2) * 4);
    if (iVar10 != -1) {
      do {
        lVar13 = *(longlong *)(param_1 + 600) + (longlong)iVar10 * 0x20;
        if (*(byte *)(*(longlong *)(param_1 + 600) + (longlong)iVar10 * 0x20) == param_2)
        goto LAB_144475a4e;
        iVar10 = *(int *)(lVar13 + 0x18);
      } while (iVar10 != -1);
    }
  }
  lVar13 = 0;
LAB_144475a4e:
  if ((longlong)*(int *)(lVar13 + 0x10) != 0) {
    piVar3 = *(int **)(lVar13 + 8);
    local_e8 = piVar3 + *(int *)(lVar13 + 0x10);
    local_f0 = param_1;
    do {
      lVar13 = *(longlong *)(*(longlong *)(local_f0 + 0x88) + (longlong)(*piVar3 / 0x59) * 8);
      lVar19 = (ulonglong)(uint)(*piVar3 % 0x59) * 0xb8;
      piVar9 = (int *)(lVar13 + lVar19);
      *(undefined4 *)(lVar13 + 0x90 + lVar19) = 0xffffffff;
      local_c8 = 0;
      uStack_c0 = 0;
      local_e0 = piVar3;
      if (0 < *(int *)(lVar13 + 0x38 + lVar19)) {
        iVar10 = 0;
        local_f8 = piVar9;
        do {
          FUN_144478b26(piVar9,&local_b0);
          local_d8 = 0;
          uStack_d0 = 0;
          iVar8 = local_a8 - local_7c;
          if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar8);
          }
          if (iVar8 != 0) {
            FUN_14481578e(&local_d8);
          }
          if (local_88 == 0) {
            uVar16 = 1;
            uVar12 = 0;
            iVar11 = 0;
            iVar8 = 0;
          }
          else {
            puVar6 = local_90;
            if (local_90 == (uint *)0x0) {
              puVar6 = local_a0;
            }
            uVar18 = *puVar6;
            if (uVar18 == 0) {
              iVar8 = local_88 + 0x1e;
              if (-1 < local_88 + -1) {
                iVar8 = local_88 + -1;
              }
              uVar12 = 0;
              uVar16 = (ulonglong)(uint)(iVar8 >> 5);
              if (iVar8 >> 5 < 1) {
                uVar16 = uVar12;
              }
              iVar11 = 0;
              do {
                if (uVar16 == uVar12) goto LAB_144475c90;
                iVar11 = iVar11 + 0x20;
                uVar18 = puVar6[uVar12 + 1];
                uVar12 = uVar12 + 1;
              } while (uVar18 == 0);
            }
            else {
              uVar12 = 0;
              iVar11 = 0;
            }
            uVar16 = (ulonglong)(-uVar18 & uVar18);
            uVar1 = uVar16 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            iVar8 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if (local_88 <= iVar8) {
              iVar8 = local_88;
            }
          }
          if (iVar8 < local_88) {
            uVar18 = 0xffffffff;
            do {
              lVar13 = local_b0;
              uVar1 = uStack_d0;
              lVar19 = (longlong)(int)uStack_d0;
              uVar2 = (int)uStack_d0 + 1;
              uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar2);
              if (uStack_d0._4_4_ < uVar2) {
                FUN_1446f48e2(&local_d8,uVar1 & 0xffffffff);
              }
              *(undefined4 *)(local_d8 + lVar19 * 4) =
                   *(undefined4 *)(lVar13 + (longlong)iVar8 * 0x14 + 8);
              uVar18 = uVar18 & ~(uint)uVar16;
              puVar6 = local_90;
              if (local_90 == (uint *)0x0) {
                puVar6 = local_a0;
              }
              iVar8 = (int)uVar12;
              lVar13 = (longlong)iVar8;
              uVar2 = puVar6[lVar13] & uVar18;
              if (uVar2 == 0) {
                iVar4 = local_88 + 0x1e;
                if (-1 < local_88 + -1) {
                  iVar4 = local_88 + -1;
                }
                iVar4 = iVar4 >> 5;
                iVar5 = iVar4;
                if (iVar4 < iVar8) {
                  iVar5 = iVar8;
                }
                if (iVar4 <= iVar8) break;
                lVar19 = 0;
                while( true ) {
                  iVar11 = iVar11 + 0x20;
                  uVar2 = puVar6[lVar13 + lVar19 + 1];
                  if (uVar2 != 0) break;
                  lVar19 = lVar19 + 1;
                  if (iVar5 - lVar13 == lVar19) goto LAB_144475c90;
                }
                uVar12 = (ulonglong)(iVar8 + (int)lVar19 + 1);
                uVar18 = 0xffffffff;
              }
              uVar16 = (ulonglong)(-uVar2 & uVar2);
              uVar1 = uVar16 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iVar8 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            } while (iVar8 < local_88);
          }
LAB_144475c90:
          uVar12 = uStack_c0;
          piVar9 = local_f8;
          if ((longlong)(int)uStack_d0 != 0) {
            lVar13 = 0;
            do {
              if (*(int *)(local_d8 + lVar13) == local_fc) {
                lVar13 = (longlong)(int)uStack_c0;
                uVar18 = (int)uStack_c0 + 1;
                uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar18);
                if (uStack_c0._4_4_ < uVar18) {
                  FUN_1446f48e2(&local_c8,uVar12 & 0xffffffff);
                }
                *(int *)(local_c8 + lVar13 * 4) = iVar10;
                break;
              }
              lVar13 = lVar13 + 4;
            } while ((longlong)(int)uStack_d0 * 4 != lVar13);
          }
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          local_68 = 0;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          FUN_1401ad17c(&local_b0);
          iVar10 = iVar10 + 1;
        } while (iVar10 < piVar9[0xe]);
      }
      if ((longlong)piVar9[6] != 0) {
        lVar13 = *(longlong *)(piVar9 + 4);
        lVar19 = (longlong)piVar9[6] * 0xe0 + lVar13;
        do {
          iVar10 = *(int *)(lVar13 + 0x18);
          if (0 < iVar10) {
            uVar12 = 0;
            do {
              if ((longlong)(int)uStack_c0 != 0) {
                lVar14 = 0;
                do {
                  if (uVar12 == *(uint *)(local_c8 + lVar14)) {
                    *(undefined4 *)(*(longlong *)(lVar13 + 0x10) + uVar12 * 4) = 0xffffffff;
                    iVar10 = *(int *)(lVar13 + 0x18);
                    break;
                  }
                  lVar14 = lVar14 + 4;
                } while ((longlong)(int)uStack_c0 * 4 != lVar14);
              }
              uVar12 = uVar12 + 1;
            } while ((longlong)uVar12 < (longlong)iVar10);
          }
          lVar13 = lVar13 + 0xe0;
        } while (lVar13 != lVar19);
        if ((longlong)piVar9[6] != 0) {
          lVar13 = (longlong)piVar9[6] * 0xe0;
          lVar19 = *(longlong *)(piVar9 + 4) + 0x20;
          do {
            FUN_1483078a6(lVar19,local_fc);
            lVar19 = lVar19 + 0xe0;
            lVar13 = lVar13 + -0xe0;
          } while (lVar13 != 0);
        }
      }
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      piVar3 = local_e0 + 1;
    } while (piVar3 != local_e8);
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144475f0a FUN_144475f0a body=313 status=ok
// SIG undefined FUN_144475f0a(void)

undefined4 FUN_144475f0a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(param_2,&local_40);
  uVar3 = 0;
  iVar4 = local_38 + -1;
  if (local_38 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    puVar2 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar2 = local_40;
    }
    lVar6 = 0;
    uVar5 = 0;
    do {
      uVar3 = ((uint)(ushort)puVar2[lVar6] + (uint)(0x19 < (ushort)puVar2[lVar6] - 0x61) * 0x20) -
              0x20;
      uVar7 = (uint)(uVar5 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar3) & 0xff) * 4);
      uVar3 = uVar7 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar3 >> 8 & 0xff) * 4);
      uVar5 = (ulonglong)uVar3;
      lVar6 = lVar6 + 1;
    } while (iVar4 != (int)lVar6);
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar6 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x60);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & uVar3) * 4);
    if (iVar4 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20) == *param_2) {
          if ((undefined4 *)(lVar6 + 0x10) != (undefined4 *)0x0 && lVar6 != 0) {
            uVar1 = *(undefined4 *)(lVar6 + 0x10);
          }
          break;
        }
        iVar4 = *(int *)(lVar6 + 0x18);
      } while (iVar4 != -1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 144476044 FUN_144476044 body=125 status=ok
// SIG undefined FUN_144476044(void)

undefined * FUN_144476044(longlong param_1,uint param_2)

{
  undefined *puVar1;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x18) <= (int)param_2)) {
    puVar1 = &DAT_14cc016a0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc016b0) {
      FUN_144b3d300(&DAT_14cc016b0);
      if (DAT_14cc016b0 == -1) {
        puVar1 = &DAT_14cc016a0;
        FUN_140821024(&DAT_14cc016a0);
        _Init_thread_footer(&DAT_14cc016b0);
      }
    }
  }
  else {
    puVar1 = (undefined *)((ulonglong)param_2 * 0x20 + *(longlong *)(param_1 + 0x10));
  }
  return puVar1;
}



// FUNCTION 1444760c2 FUN_1444760c2 body=426 status=ok
// SIG undefined FUN_1444760c2(void)

int FUN_1444760c2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar6 = -1;
  if (1 < *(int *)(param_2 + 1)) {
    FUN_1446f470e(&local_40,*param_2,1);
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      lVar3 = 0;
      iVar6 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar3) == local_40) {
          if (iVar6 != 1) goto LAB_1444761d0;
          break;
        }
        iVar6 = iVar6 + -1;
        lVar3 = lVar3 + 0x20;
      } while ((longlong)*(int *)(param_1 + 0x18) * 0x20 != lVar3);
    }
    FUN_14001a7b2();
    (**(code **)(DAT_14cc012d0 + 0x48))(&DAT_14cc012d0);
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      lVar3 = 0;
      iVar6 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar3) == local_40) {
          if (iVar6 != 1) goto LAB_1444761d0;
          break;
        }
        iVar6 = iVar6 + -1;
        lVar3 = lVar3 + 0x20;
      } while ((longlong)*(int *)(param_1 + 0x18) * 0x20 != lVar3);
    }
    FUN_14001a25e(&local_50,param_2,0);
    _Src = local_50;
    local_60 = (undefined2 *)0x0;
    local_58 = local_48;
    if ((longlong)local_48 == 0) {
      local_54 = 0;
    }
    else {
      FUN_1446dd670(&local_60,local_48,0);
      memcpy(local_60,_Src,(longlong)local_48 * 2);
    }
    iVar1 = *(int *)(param_1 + 0x18);
    iVar6 = -1;
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x10);
      lVar7 = 0;
      iVar5 = 0;
      do {
        puVar4 = &DAT_149dfb77a;
        if (local_58 != 0) {
          puVar4 = local_60;
        }
        cVar2 = FUN_1402ca022(*(undefined8 *)(lVar3 + lVar7),puVar4);
        iVar6 = iVar5;
        if (cVar2 != '\0') break;
        iVar5 = iVar5 + 1;
        lVar7 = lVar7 + 0x20;
        iVar6 = -1;
      } while ((longlong)iVar1 * 0x20 != lVar7);
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144476247:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
LAB_1444761d0:
  iVar6 = -iVar6;
  goto LAB_144476247;
}



// FUNCTION 1444762aa FUN_1444762aa body=101 status=ok
// SIG undefined FUN_1444762aa(void)

ulonglong FUN_1444762aa(longlong *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  if (*param_2 != -1) {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*param_2 == DAT_14c764f00) goto LAB_144476305;
    cVar1 = (**(code **)(*param_1 + 200))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0xc0))(param_1,*param_2);
      iVar2 = DAT_14c764f00;
      if (cVar1 != '\0') {
        iVar2 = (**(code **)(*param_1 + 0x100))(param_1,DAT_14c764f00);
      }
      *param_2 = iVar2;
      goto LAB_144476305;
    }
  }
  uVar3 = 0;
LAB_144476305:
  return uVar3 & 0xffffffff;
}



// FUNCTION 144476310 FUN_144476310 body=56 status=ok
// SIG undefined FUN_144476310(void)

int FUN_144476310(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[3])) {
    if (*(char *)(param_1[2] + 0x18 + (ulonglong)param_2 * 0x20) == '\x01') {
      iVar1 = (**(code **)(*param_1 + 0xd8))
                        (param_1,*(undefined4 *)(param_1[2] + (ulonglong)param_2 * 0x20 + 0x10));
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}



// FUNCTION 14447635e FUN_14447635e body=202 status=ok
// SIG undefined FUN_14447635e(void)

bool FUN_14447635e(longlong *param_1,uint param_2,uint param_3,char param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if (-1 < (int)param_2) {
    if (*(uint *)(param_1 + 3) <= param_3) {
      return false;
    }
    if ((int)param_3 < 0) {
      return false;
    }
    if ((int)*(uint *)(param_1 + 3) <= (int)param_2) {
      return false;
    }
    if (param_2 == param_3) {
      return true;
    }
    cVar2 = (**(code **)(*param_1 + 200))(param_1,param_2);
    if ((cVar2 != '\0') && (cVar2 = (**(code **)(*param_1 + 200))(param_1,param_3), cVar2 != '\0'))
    {
      iVar3 = (**(code **)(*param_1 + 0xd8))(param_1,param_2);
      iVar4 = (**(code **)(*param_1 + 0xd8))(param_1,param_3);
      return iVar3 == iVar4;
    }
    if (param_4 != '\0') {
      uVar1 = param_3;
      if (param_2 >= param_3 && param_2 != param_3) {
        uVar1 = param_2;
      }
      if (param_2 < param_3) {
        param_3 = param_2;
      }
      if ((param_3 == DAT_14c764f0c) && (uVar1 == DAT_14c764f10)) {
        return true;
      }
      if ((param_3 == DAT_14c764f28) && (uVar1 == DAT_14c764f2c)) {
        return true;
      }
    }
  }
  return false;
}



// FUNCTION 144476428 FUN_144476428 body=701 status=ok
// SIG undefined FUN_144476428(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144476428(undefined8 param_1,int param_2)

{
  int iVar1;
  _func_5014 *p_Var2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  
  if (DAT_14c764f0c == param_2) {
    if (DAT_14cc016e0 <=
        *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110)) {
      return &DAT_14cc016d0;
    }
    puVar4 = &DAT_14cc016e0;
    FUN_144b3d300(&DAT_14cc016e0);
    iVar1 = DAT_14c764f10;
    if (DAT_14cc016e0 != -1) {
      return &DAT_14cc016d0;
    }
    DAT_14cc016d0 = (int *)0x0;
    puVar3 = &DAT_14cc016d0;
    _DAT_14cc016d8 = 1;
    FUN_144a06ca8(&DAT_14cc016d0,1,0);
    *DAT_14cc016d0 = iVar1;
    p_Var2 = (_func_5014 *)&LAB_1444766e5;
  }
  else if (DAT_14c764f10 == param_2) {
    if (DAT_14cc016f8 <=
        *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110)) {
      return &DAT_14cc016e8;
    }
    puVar4 = &DAT_14cc016f8;
    FUN_144b3d300(&DAT_14cc016f8);
    iVar1 = DAT_14c764f0c;
    if (DAT_14cc016f8 != -1) {
      return &DAT_14cc016e8;
    }
    DAT_14cc016e8 = (int *)0x0;
    puVar3 = &DAT_14cc016e8;
    _DAT_14cc016f0 = 1;
    FUN_144a06ca8(&DAT_14cc016e8,1,0);
    *DAT_14cc016e8 = iVar1;
    p_Var2 = (_func_5014 *)&LAB_1444766f6;
  }
  else if (DAT_14c764f28 == param_2) {
    if (DAT_14cc01710 <=
        *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110)) {
      return &DAT_14cc01700;
    }
    puVar4 = &DAT_14cc01710;
    FUN_144b3d300(&DAT_14cc01710);
    iVar1 = DAT_14c764f2c;
    if (DAT_14cc01710 != -1) {
      return &DAT_14cc01700;
    }
    DAT_14cc01700 = (int *)0x0;
    puVar3 = &DAT_14cc01700;
    _DAT_14cc01708 = 1;
    FUN_144a06ca8(&DAT_14cc01700,1,0);
    *DAT_14cc01700 = iVar1;
    p_Var2 = (_func_5014 *)&LAB_144476707;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110);
    if (DAT_14c764f2c == param_2) {
      if (DAT_14cc01728 <= iVar1) {
        return &DAT_14cc01718;
      }
      puVar4 = &DAT_14cc01728;
      FUN_144b3d300(&DAT_14cc01728);
      iVar1 = DAT_14c764f28;
      if (DAT_14cc01728 != -1) {
        return &DAT_14cc01718;
      }
      DAT_14cc01718 = (int *)0x0;
      puVar3 = &DAT_14cc01718;
      _DAT_14cc01720 = 1;
      FUN_144a06ca8(&DAT_14cc01718,1,0);
      *DAT_14cc01718 = iVar1;
      p_Var2 = (_func_5014 *)&LAB_144476718;
    }
    else {
      if (DAT_14cc01740 <= iVar1) {
        return &DAT_14cc01730;
      }
      puVar4 = &DAT_14cc01740;
      FUN_144b3d300(&DAT_14cc01740);
      if (DAT_14cc01740 != -1) {
        return &DAT_14cc01730;
      }
      DAT_14cc01730 = 0;
      uRam000000014cc01738 = 0;
      puVar3 = &DAT_14cc01730;
      p_Var2 = (_func_5014 *)&LAB_144476729;
    }
  }
  atexit(p_Var2);
  _Init_thread_footer(puVar4);
  return puVar3;
}



// FUNCTION 1444767da FUN_1444767da body=952 status=ok
// SIG undefined FUN_1444767da(void)

undefined8 *
FUN_1444767da(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  int iVar1;
  char cVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d4 [8];
  int local_cc;
  undefined2 *local_c8;
  undefined8 uStack_c0;
  undefined2 *local_b8;
  undefined8 uStack_b0;
  undefined2 *local_a8;
  int local_a0;
  int local_9c;
  longlong local_98 [3];
  undefined8 *local_80;
  undefined2 local_78;
  longlong *local_70;
  int *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  if (1 < *(int *)(param_3 + 1)) {
    FUN_14001a7b2();
    local_80 = &DAT_14cc012d0;
    local_78 = 1;
    FUN_14001a7b2();
    local_98[0] = 0;
    local_98[1] = 0;
    local_a8 = (undefined2 *)0x0;
    local_a0 = *(int *)(param_3 + 1);
    lVar5 = (longlong)local_a0;
    _Src = (void *)*param_3;
    if (lVar5 == 0) {
      local_9c = 0;
    }
    else {
      local_e0 = param_4;
      FUN_1446dd670(&local_a8,local_a0,0);
      memcpy(local_a8,_Src,lVar5 * 2);
      if (1 < local_a0) {
        do {
          FUN_140056680(&local_70,&DAT_149e06196);
          local_f0 = 0;
          local_f8 = 1;
          cVar2 = FUN_1407cdbc6(&local_a8,&local_70,local_98,&local_a8);
          if (local_70 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (cVar2 == '\0') {
            iVar1 = local_a0 + -1;
            if (local_a0 == 0) {
              iVar1 = 0;
            }
            FUN_1402980a2(local_98,local_a8,iVar1);
            local_a0 = 0;
            if (local_9c < 0) {
              FUN_1446f8c06(&local_a8,0);
            }
            if (local_a8 != (undefined2 *)0x0) {
              *local_a8 = 0;
            }
          }
          local_b8 = (undefined2 *)0x0;
          uStack_b0 = 0;
          local_c8 = (undefined2 *)0x0;
          uStack_c0 = 0;
          FUN_140056680(&local_70,&DAT_149e31048);
          local_f0 = 0;
          local_f8 = 1;
          cVar2 = FUN_1407cdbc6(local_98,&local_70,&local_b8,&local_c8);
          if (local_70 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (cVar2 != '\0') {
            puVar3 = &DAT_149dfb77a;
            if ((int)uStack_b0 != 0) {
              puVar3 = local_b8;
            }
            FUN_1446f470e(&local_70,puVar3,1);
            if ((longlong)*(int *)(param_1 + 0x18) != 0) {
              plVar4 = (longlong *)(*(longlong *)(param_1 + 0x10) + 4);
              lVar5 = (longlong)*(int *)(param_1 + 0x18) * 0xe0;
              do {
                if ((longlong *)*plVar4 == local_70) {
                  if (plVar4 == (longlong *)&DAT_00000004) break;
                  local_cc = (**(code **)(DAT_14cc012d0 + 0xb8))(&DAT_14cc012d0,&local_c8);
                  if (local_cc == -1) {
                    cVar2 = FUN_1444791ee(&local_c8);
                    if (cVar2 != '\0') {
                      local_e8 = FUN_14447975e(&local_c8,local_e0);
                      puVar3 = &DAT_149dfb77a;
                      if ((int)uStack_c0 != 0) {
                        puVar3 = local_c8;
                      }
                      FUN_1446f470e(local_d4,puVar3,1);
                      FUN_14575417c(&local_70,local_d4,local_e8);
                      local_cc = (**(code **)(DAT_14cc012d0 + 0x80))(&DAT_14cc012d0,&local_70,0);
                    }
                    if (local_cc == -1) break;
                  }
                  local_68 = &local_cc;
                  local_70 = plVar4;
                  FUN_140171856(param_2,local_d4,&local_70,0);
                  break;
                }
                plVar4 = plVar4 + 0x1c;
                lVar5 = lVar5 + -0xe0;
              } while (lVar5 != 0);
            }
          }
          if (local_c8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_b8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        } while (1 < local_a0);
      }
    }
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1409be446(&local_80);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144476b94 FUN_144476b94 body=2395 status=ok
// SIG undefined FUN_144476b94(void)

uint FUN_144476b94(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  uint *puVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_248 [40];
  ulonglong local_220;
  longlong local_218;
  longlong local_210;
  uint *local_208;
  undefined8 uStack_200;
  int local_1ec;
  longlong local_1e8;
  undefined8 uStack_1e0;
  undefined8 *local_1d8;
  undefined2 local_1d0;
  uint *local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1ac [4];
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  int local_174;
  undefined1 local_170 [8];
  undefined1 *local_168;
  int local_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  int local_124;
  undefined1 local_120 [8];
  undefined1 *local_118;
  int local_110;
  uint *local_108;
  longlong *plStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  uVar12 = 0;
  local_188 = 0;
  local_180 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_17c = 0xffffffff00000080;
  local_174 = 0;
  local_168 = (undefined1 *)0x0;
  local_160 = 0;
  FUN_140816cc4(&local_1a8);
  local_208 = (uint *)0x0;
  uStack_200 = (int *)0x0;
  FUN_14001a7b2();
  local_1d8 = &DAT_14cc012d0;
  local_1d0 = 0;
  FUN_14001a7b2();
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  FUN_140816cc4(&local_b8,&local_1a8);
  FUN_14005eae2();
  uStack_200 = (int *)((ulonglong)uStack_200 & 0xffffffff00000000);
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      piVar4 = uStack_200;
      lVar11 = (longlong)(int)uStack_200;
      uVar6 = (int)uStack_200 + 1;
      uStack_200 = (int *)CONCAT44(uStack_200._4_4_,uVar6);
      if (uStack_200._4_4_ < uVar6) {
        FUN_1446f48e2(&local_208,(ulonglong)piVar4 & 0xffffffff);
      }
      local_208[lVar11] = uVar12;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < *(int *)(param_1 + 0x38));
  }
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x10);
    lVar13 = (longlong)*(int *)(param_1 + 0x18) * 0xe0 + lVar11;
    do {
      if ((int)uStack_b0 != local_84) {
        lVar3 = *(longlong *)(lVar11 + 4);
        uVar12 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar6 = (uint)lVar3 & 0xffff;
        puVar9 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar9 = local_80;
        }
        iVar8 = *(int *)(puVar9 + (ulonglong)
                                  (local_70 - 1U &
                                  (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                                  (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar6 >> 4)) * 4);
        while (iVar8 != -1) {
          plVar10 = (longlong *)(local_b8 + (longlong)iVar8 * 0x14);
          if (*plVar10 == lVar3) goto LAB_144476d4d;
          iVar8 = *(int *)((longlong)plVar10 + 0xc);
        }
      }
      plVar10 = (longlong *)0x0;
LAB_144476d4d:
      puVar1 = (uint *)(lVar11 + 4);
      plVar15 = plVar10 + 1;
      if (plVar10 == (longlong *)0x0) {
        plVar15 = (longlong *)0x0;
      }
      local_108 = (uint *)0x0;
      plStack_100 = (longlong *)0x0;
      cVar5 = FUN_144478822(lVar11,&local_108);
      if (cVar5 == '\0') {
        if (plVar15 != (longlong *)0x0) {
          local_1e8 = 0;
          uStack_1e0 = 0;
          local_218 = param_1;
          local_210 = lVar13;
          FUN_144478c64(lVar11,&local_1e8);
          local_1ec = (int)*plVar15;
          iVar8 = 0;
          local_e8 = 0;
          local_e0 = 0;
          local_108 = (uint *)0x0;
          plStack_100 = (longlong *)0x0;
          local_dc = 0xffffffff00000080;
          local_d4 = 0;
          local_c8 = 0;
          local_c0 = 0;
          local_1c8 = (uint *)((ulonglong)local_1c8 & 0xffffffff00000000);
          local_220 = 0;
          if (0 < (int)uStack_1e0) {
            local_220 = 0;
            bVar16 = false;
            do {
              iVar8 = *(int *)(local_1e8 + (longlong)iVar8 * 4);
              cVar5 = (**(code **)(DAT_14cc012d0 + 0xe8))(&DAT_14cc012d0,iVar8,(int)*plVar15,0);
              puVar9 = (undefined1 *)FUN_149157c7a(&local_108,(ulonglong)local_1c8 & 0xffffffff);
              if (cVar5 == '\0') {
                *puVar9 = 0;
              }
              else {
                *puVar9 = 1;
                local_220 = CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
                if (bVar16) {
                  bVar16 = true;
                }
                else {
                  bVar16 = iVar8 == (int)*plVar15;
                  local_1ec = iVar8;
                }
              }
              iVar8 = (int)local_1c8 + 1;
              local_1c8 = (uint *)CONCAT44(local_1c8._4_4_,iVar8);
            } while (iVar8 < (int)uStack_1e0);
          }
          local_138 = 0;
          local_130 = 0;
          local_158 = 0;
          uStack_150 = 0;
          local_12c = 0xffffffff00000080;
          local_124 = 0;
          local_118 = (undefined1 *)0x0;
          local_110 = 0;
          FUN_14912c940(&local_158,&local_108);
          local_1c8 = (uint *)0x0;
          uStack_1c0 = (int *)0x0;
          if ((longlong)(int)uStack_200 != 0) {
            puVar2 = local_208 + (int)uStack_200;
            puVar14 = local_208;
            do {
              piVar4 = uStack_1c0;
              if ((int)uStack_150 != local_124) {
                puVar9 = local_118;
                if (local_118 == (undefined1 *)0x0) {
                  puVar9 = local_120;
                }
                iVar8 = *(int *)(puVar9 + (ulonglong)(local_110 - 1U & *puVar14) * 4);
                while (iVar8 != -1) {
                  lVar13 = local_158 + (longlong)iVar8 * 0x10;
                  if (*(uint *)(local_158 + (longlong)iVar8 * 0x10) == *puVar14) {
                    if (((char *)(lVar13 + 4) != (char *)0x0 && lVar13 != 0) &&
                       (*(char *)(lVar13 + 4) == '\x01')) {
                      lVar13 = (longlong)(int)uStack_1c0;
                      uVar12 = (int)uStack_1c0 + 1;
                      uStack_1c0 = (int *)CONCAT44(uStack_1c0._4_4_,uVar12);
                      if (uStack_1c0._4_4_ < uVar12) {
                        FUN_1446f48e2(&local_1c8,(ulonglong)piVar4 & 0xffffffff);
                      }
                      local_1c8[lVar13] = *puVar14;
                    }
                    break;
                  }
                  iVar8 = *(int *)(lVar13 + 8);
                }
              }
              puVar14 = puVar14 + 1;
            } while (puVar14 != puVar2);
          }
          local_110 = 0;
          if (local_118 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          FUN_1456c3d4c(&local_158);
          param_1 = local_218;
          if (local_208 != (uint *)0x0) {
            FUN_1400020a8();
          }
          lVar13 = local_210;
          local_208 = local_1c8;
          uStack_200 = uStack_1c0;
          iVar8 = 0;
          if ((local_220 & 1) != 0) {
            uStack_1c0 = &local_1ec;
            local_1c8 = puVar1;
            FUN_140171856(&local_1a8,local_1ac);
            iVar8 = 6;
          }
          local_c0 = 0;
          if (local_c8 != 0) {
            FUN_1400020a8();
          }
          FUN_1456c3d4c(&local_108);
          if (local_1e8 != 0) {
            FUN_1400020a8();
          }
          if ((local_220 & 1) != 0) goto LAB_144476dfd;
        }
        iVar8 = FUN_1490fc79c(lVar11);
        if (iVar8 == 1) {
          plStack_100 = (longlong *)&DAT_14c764f38;
        }
        else {
          if (iVar8 == 3) {
            plStack_100 = (longlong *)&DAT_14c764f20;
            local_108 = puVar1;
            FUN_140171856(&local_1a8,&local_1c8);
            if ((plVar15 != (longlong *)0x0) &&
               (cVar5 = (**(code **)(DAT_14cc012d0 + 0xc0))(), cVar5 != '\0')) {
              if ((int)uStack_1a0 != local_174) {
                lVar3 = *(longlong *)puVar1;
                uVar12 = (uint)((ulonglong)lVar3 >> 0x10);
                uVar6 = (uint)lVar3 & 0xffff;
                puVar9 = local_168;
                if (local_168 == (undefined1 *)0x0) {
                  puVar9 = local_170;
                }
                iVar8 = *(int *)(puVar9 + (ulonglong)
                                          (local_160 - 1U &
                                          (int)((ulonglong)lVar3 >> 0x20) +
                                          ((uint)lVar3 << 0x10 | uVar6) +
                                          (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar6 >> 4)) * 4);
                while (iVar8 != -1) {
                  plVar10 = (longlong *)(local_1a8 + (longlong)iVar8 * 0x14);
                  if (*plVar10 == lVar3) goto LAB_144476f4b;
                  iVar8 = *(int *)((longlong)plVar10 + 0xc);
                }
              }
              plVar10 = (longlong *)0x0;
LAB_144476f4b:
              *(undefined4 *)(plVar10 + 1) = DAT_14c764f38;
            }
            goto LAB_144476e0a;
          }
          plStack_100 = (longlong *)&DAT_14c764f20;
        }
        local_108 = puVar1;
        FUN_140171856(&local_1a8,&local_1c8);
      }
      else {
        uVar7 = FUN_1444788ce(lVar11,0);
        local_1e8 = CONCAT44(local_1e8._4_4_,uVar7);
        if (((plVar15 == (longlong *)0x0) ||
            (cVar5 = (**(code **)(DAT_14cc012d0 + 0xe0))(&DAT_14cc012d0,(int)*plVar15),
            cVar5 != '\0')) ||
           (cVar5 = (**(code **)(DAT_14cc012d0 + 0xe8))(&DAT_14cc012d0,(int)*plVar15), cVar5 != '\0'
           )) {
          plStack_100 = &local_1e8;
          local_108 = puVar1;
          FUN_140171856(&local_1a8,&local_1c8);
          iVar8 = 6;
        }
        else {
          bVar16 = (longlong)uStack_200 < 0;
          uStack_200 = (int *)((ulonglong)uStack_200 & 0xffffffff00000000);
          iVar8 = 1;
          if (bVar16) {
            FUN_14481578e(&local_208,0);
          }
        }
LAB_144476dfd:
        if ((iVar8 != 6) && (iVar8 != 0)) goto LAB_14447743d;
      }
LAB_144476e0a:
      lVar11 = lVar11 + 0xe0;
    } while (lVar11 != lVar13);
  }
  if ((int)uStack_200 == 1) {
    FUN_14005eae2(&local_1a8);
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x10);
      lVar13 = (longlong)*(int *)(param_1 + 0x18) * 0xe0 + lVar11;
      do {
        uVar7 = FUN_1444788ce(lVar11,*local_208);
        local_1e8 = CONCAT44(local_1e8._4_4_,uVar7);
        local_108 = (uint *)(lVar11 + 4);
        plStack_100 = &local_1e8;
        FUN_1410952c6(&local_1a8,&local_1c8,&local_108,0);
        lVar11 = lVar11 + 0xe0;
      } while (lVar11 != lVar13);
    }
  }
  else if ((1 < (int)uStack_200) && ((longlong)*(int *)(param_1 + 0x18) != 0)) {
    lVar11 = *(longlong *)(param_1 + 0x10);
    lVar13 = (longlong)*(int *)(param_1 + 0x18) * 0xe0 + lVar11;
    do {
      cVar5 = FUN_144478822(lVar11,&local_208);
      if (cVar5 != '\0') {
        uVar7 = FUN_1444788ce(lVar11,*local_208);
        if ((int)uStack_1a0 != local_174) {
          lVar3 = *(longlong *)(lVar11 + 4);
          uVar12 = (uint)((ulonglong)lVar3 >> 0x10);
          uVar6 = (uint)lVar3 & 0xffff;
          puVar9 = local_168;
          if (local_168 == (undefined1 *)0x0) {
            puVar9 = local_170;
          }
          iVar8 = *(int *)(puVar9 + (ulonglong)
                                    (local_160 - 1U &
                                    (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6)
                                    + (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar6 >> 4)) * 4);
          while (iVar8 != -1) {
            plVar10 = (longlong *)(local_1a8 + (longlong)iVar8 * 0x14);
            if (*plVar10 == lVar3) goto LAB_144477429;
            iVar8 = *(int *)((longlong)plVar10 + 0xc);
          }
        }
        plVar10 = (longlong *)0x0;
LAB_144477429:
        *(undefined4 *)(plVar10 + 1) = uVar7;
      }
      lVar11 = lVar11 + 0xe0;
    } while (lVar11 != lVar13);
  }
LAB_14447743d:
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(&local_b8);
  FUN_1409be446(&local_1d8);
  uVar12 = 0xffffffff;
  if ((int)uStack_200 == 1) {
    uVar12 = *local_208;
  }
  if (local_208 != (uint *)0x0) {
    FUN_1400020a8();
  }
  local_160 = 0;
  if (local_168 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(&local_1a8);
  if ((local_60 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144477501 FUN_144477501 body=47 status=ok
// SIG undefined FUN_144477501(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144477501(void)

{
  _DAT_14cc017d8 = 0;
  if (DAT_14cc017d0 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&DAT_14cc01790);
  return;
}



// FUNCTION 144477530 FUN_144477530 body=49 status=ok
// SIG undefined FUN_144477530(void)

void FUN_144477530(void)

{
  FUN_141535be2(DAT_14cc017e8,DAT_14cc017f0);
  if (DAT_14cc017e8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144477562 FUN_144477562 body=4797 status=ok
// SIG undefined FUN_144477562(void)

longlong FUN_144477562(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  int *piVar14;
  undefined1 *puVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  void *pvVar23;
  longlong lVar24;
  ulonglong uVar25;
  byte *pbVar26;
  int iVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  byte *pbVar30;
  undefined1 auStack_218 [44];
  uint local_1ec;
  ulonglong local_1e8;
  ulonglong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  ulonglong uStack_1c0;
  undefined1 local_1ac [4];
  ulonglong local_1a8;
  undefined8 uStack_1a0;
  void *local_198;
  ulonglong uStack_190;
  undefined1 local_188;
  longlong local_180;
  undefined8 local_178;
  undefined1 *local_168;
  undefined8 uStack_160;
  uint local_158 [4];
  uint *local_148;
  uint local_140;
  uint local_13c;
  int iStack_138;
  int local_134;
  undefined1 local_130 [8];
  undefined1 *local_128;
  int local_120;
  undefined1 local_118 [4];
  undefined1 local_114 [12];
  void *local_108;
  uint local_100;
  undefined1 local_e8 [136];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1d8 = param_4;
  FUN_1490fa54a(local_118);
  uVar13 = 0;
  uVar25 = 0;
  if ((longlong)(int)local_100 != 0) {
    lVar21 = (longlong)(int)local_100 * 0xe0;
    lVar20 = 0;
    uVar25 = 0;
    pvVar23 = local_108;
    do {
      uVar7 = FUN_1490fa6b0(pvVar23);
      local_168 = (undefined1 *)0x0;
      uStack_160 = (ulonglong *)0x0;
      cVar3 = FUN_144478822(pvVar23);
      uVar19 = (uint)uVar25;
      if (((1 < (int)uVar19) && (uVar7 != uVar19)) && (cVar3 == '\0')) goto LAB_144478520;
      if ((int)uVar19 < (int)uVar7) {
        uVar25 = (ulonglong)uVar7;
      }
      pvVar23 = (void *)((longlong)pvVar23 + 0xe0);
      lVar21 = lVar21 + -0xe0;
    } while (lVar21 != 0);
    if ((longlong)(int)local_100 != 0) {
      lVar20 = (longlong)(int)local_100 * 0xe0;
      plVar22 = (longlong *)((longlong)local_108 + 0x78);
      do {
        plVar1 = plVar22 + -0xf;
        iVar4 = FUN_1490fa6b0(plVar1);
        if (iVar4 == 1) {
          uVar5 = FUN_1444788ce(plVar1,0);
          cVar3 = (**(code **)(*param_1 + 0xe0))(param_1);
          if (cVar3 != '\0') {
            FUN_1483078a6(plVar22 + -0xb,uVar5);
            cVar3 = (**(code **)(*param_1 + 0xc0))(param_1);
            lVar21 = plVar22[1];
            uVar13 = (int)lVar21 + 1;
            *(uint *)(plVar22 + 1) = uVar13;
            if (*(uint *)((longlong)plVar22 + 0xc) < uVar13) {
              FUN_149156c7a(plVar22);
            }
            *(char *)(*plVar22 + (longlong)(int)lVar21) = cVar3 + '\x01';
            *(undefined1 *)(plVar22 + -1) = 1;
            if (*(int *)((longlong)plVar22 + -0x5c) < 0) {
              *(undefined4 *)(plVar22 + -0xc) = 0;
              FUN_14481578e(plVar22 + -0xd);
            }
            else {
              *(undefined4 *)(plVar22 + -0xc) = 0;
            }
            uVar13 = FUN_1490fa6b0(plVar1);
            if ((int)uVar25 < (int)uVar13) {
              uVar25 = (ulonglong)uVar13;
            }
          }
        }
        plVar22 = plVar22 + 0x1c;
        lVar20 = lVar20 + -0xe0;
      } while (lVar20 != 0);
      local_1a8 = 0;
      uStack_1a0 = 0;
      uVar13 = local_100;
      if (local_100 == 1) {
        local_148 = (uint *)0x0;
        local_140 = 0;
        local_168 = (undefined1 *)0x0;
        uStack_160 = (ulonglong *)0x0;
        local_13c = 0x80;
        iStack_138 = 0xffffffff;
        local_134 = 0;
        local_128 = (undefined1 *)0x0;
        local_120 = 0;
        uVar13 = (uint)uVar25;
        if (uVar13 != 0) {
          FUN_1400bac10(&local_168,uVar25);
          iVar4 = 1;
          if (3 < uVar13) {
            uVar7 = (uVar13 | 1) + 0xe;
            iVar4 = 0x1f;
            if (uVar7 != 0) {
              for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
              }
            }
            iVar4 = 1 << ((byte)iVar4 & 0x1f);
          }
          if ((local_120 == 0) || (local_120 < iVar4)) {
            local_120 = iVar4;
            FUN_144a56d22();
          }
        }
        local_198 = local_108;
        uStack_190 = CONCAT71(uStack_190._1_7_,*(longlong *)((longlong)local_108 + 0x90) != 0);
        local_188 = 0;
        local_180 = 0;
        local_178 = 0xffffffff00000000;
        if (0 < (int)uVar13) {
          uVar7 = 0;
          do {
            uVar19 = FUN_144478ae4(&local_198,uVar7);
            uVar29 = uStack_1a0;
            local_1c8 = CONCAT44(local_1c8._4_4_,uVar19);
            if ((int)uStack_160 != local_134) {
              puVar15 = local_128;
              if (local_128 == (undefined1 *)0x0) {
                puVar15 = local_130;
              }
              for (iVar4 = *(int *)(puVar15 + (ulonglong)(local_120 - 1U & uVar19) * 4); iVar4 != -1
                  ; iVar4 = *(int *)(local_168 + (longlong)iVar4 * 0xc + 4)) {
                if (*(uint *)(local_168 + (longlong)iVar4 * 0xc) == uVar19) {
                  lVar20 = (longlong)(int)uStack_1a0;
                  uVar19 = (int)uStack_1a0 + 1;
                  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar19);
                  if (uStack_1a0._4_4_ < uVar19) {
                    FUN_1446f48e2(&local_1a8,uVar29 & 0xffffffff);
                  }
                  *(uint *)(local_1a8 + lVar20 * 4) = uVar7;
                  goto LAB_1444786f7;
                }
              }
            }
            FUN_1447cbafe(&local_168,local_1ac,&local_1c8,0);
LAB_1444786f7:
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar13);
          if ((local_178._4_4_ != -1) && (local_180 != 0)) {
            FUN_1400020a8();
          }
        }
        local_120 = 0;
        if (local_128 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        uVar29 = (ulonglong)uStack_160 >> 0x20;
        uStack_160 = (ulonglong *)((ulonglong)uStack_160 & 0xffffffff00000000);
        if ((int)uVar29 != 0) {
          FUN_1447a08a2(&local_168,0);
        }
        goto joined_r0x0001444787fe;
      }
    }
  }
  uStack_1a0 = 0;
  local_1a8 = 0;
  local_148 = (uint *)0x0;
  local_140 = 0;
  local_168 = (undefined1 *)0x0;
  uStack_160 = (ulonglong *)0x0;
  local_13c = 0x80;
  iStack_138 = -1;
  local_134 = 0;
  local_128 = (undefined1 *)0x0;
  local_120 = 0;
  uVar7 = (uint)uVar25;
  if (uVar7 != 0) {
    if ((int)uVar7 < 1) {
LAB_1444777ba:
      uVar19 = (uVar7 | 1) + 0xe;
      iVar4 = 0x1f;
      if (uVar19 != 0) {
        for (; uVar19 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 1 << ((byte)iVar4 & 0x1f);
    }
    else {
      FUN_144727cd0(&local_168);
      iVar4 = (int)uStack_160;
      lVar20 = (longlong)(int)uStack_160;
      uStack_160 = (ulonglong *)CONCAT44(uStack_160._4_4_,(int)uStack_160 + uVar7);
      if ((uint)(uStack_160._4_4_ - iVar4) < uVar7) {
        FUN_14482b872(&local_168);
      }
      if (iVar4 < (int)uVar7) {
        piVar14 = (int *)(local_168 + uVar25 * 0x18 + -0x14);
        uVar29 = uVar25;
        do {
          uVar28 = uVar29 - 1;
          if (local_134 == 0) {
            iVar4 = (int)uVar29 + -1;
          }
          else {
            *(int *)(local_168 + (longlong)iStack_138 * 0x18) = (int)uVar29 + -1;
            iVar4 = (int)uVar28;
          }
          piVar14[-1] = -1;
          iVar27 = -1;
          if (0 < local_134) {
            iVar27 = iStack_138;
          }
          *piVar14 = iVar27;
          local_134 = local_134 + 1;
          piVar14 = piVar14 + -6;
          uVar29 = uVar28;
          iStack_138 = iVar4;
        } while (lVar20 < (longlong)uVar28);
      }
      uVar19 = uVar7 + 0x1f >> 5;
      puVar10 = local_148;
      local_140 = uVar7;
      if (local_13c + 0x1f >> 5 < uVar19) {
        puVar10 = (uint *)0x0;
        if (local_148 != (uint *)0x0 || 0x80 < uVar7) {
          if (0x80 < uVar7) {
            puVar10 = (uint *)(ulonglong)uVar19;
          }
          FUN_1446efa72(&local_148,0,puVar10,4);
          puVar10 = local_148;
        }
        local_13c = uVar7 + 0x1f & 0xffffffe0;
      }
      if (puVar10 == (uint *)0x0) {
        puVar10 = local_158;
      }
      if (uVar7 < 0x101) {
        uVar19 = uVar19 + (uVar19 == 0);
      }
      memset(puVar10,0,(ulonglong)(uVar19 << 2));
      uVar19 = local_140 + 0x1f;
      if (-1 < (int)local_140) {
        uVar19 = local_140;
      }
      if ((int)local_140 % 0x20 != 0) {
        puVar10 = local_158;
        if (local_148 != (uint *)0x0) {
          puVar10 = local_148;
        }
        bVar12 = -(char)((int)local_140 % 0x20);
        puVar10[(int)uVar19 >> 5] =
             (puVar10[(int)uVar19 >> 5] << (bVar12 & 0x1f)) >> (bVar12 & 0x1f);
      }
      iVar4 = 1;
      if (3 < uVar7) goto LAB_1444777ba;
    }
    if ((local_120 == 0) || (local_120 < iVar4)) {
      local_120 = iVar4;
      FUN_14447e544();
    }
  }
  local_198 = (void *)0x0;
  uStack_190 = 0;
  if ((int)uVar13 < 1) {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar13);
    }
  }
  else {
    uStack_190 = (ulonglong)uVar13;
    FUN_1446f48e2(&local_198);
    memset(local_198,0,(ulonglong)uVar13 << 2);
  }
  local_1c8 = 0;
  uStack_1c0 = 0;
  FUN_1490fa84c(&local_1c8,uVar13);
  if (0 < (int)uVar7) {
    uVar29 = (ulonglong)uVar13;
    iVar4 = 0;
    local_1ec = uVar13;
    local_1e8 = uVar29;
    local_1e0 = uVar25;
    do {
      if (0 < (int)uVar13) {
        lVar21 = 0;
        lVar20 = 0;
        uVar28 = 0;
        do {
          FUN_1490fa8c8(local_1c8 + lVar20,(longlong)local_108 + lVar21);
          uVar5 = FUN_144478ae4(local_1c8 + lVar20,iVar4);
          *(undefined4 *)((longlong)local_198 + uVar28 * 4) = uVar5;
          uVar28 = uVar28 + 1;
          lVar20 = lVar20 + 0x28;
          lVar21 = lVar21 + 0xe0;
        } while (uVar29 != uVar28);
      }
      if ((longlong)(int)uStack_190 == 0) {
        uVar28 = 0;
      }
      else {
        lVar20 = 0;
        uVar28 = 0;
        do {
          uVar28 = (ulonglong)
                   ((uint)uVar28 ^
                   *(int *)((longlong)local_198 + lVar20) + (int)(uVar28 >> 2) + (uint)uVar28 * 0x40
                   + 0x9e3779b9);
          lVar20 = lVar20 + 4;
        } while ((longlong)(int)uStack_190 * 4 != lVar20);
      }
      iVar6 = FUN_14447e81a(&local_168,uVar28);
      iVar27 = iStack_138;
      uVar28 = (ulonglong)uStack_160;
      if (iVar6 == -1) {
        if (local_134 == 0) {
          iVar27 = (int)uStack_160;
          uStack_160 = (ulonglong *)CONCAT44(uStack_160._4_4_,(int)uStack_160 + 1);
          if (uStack_160._4_4_ == iVar27) {
            FUN_14482b872(&local_168,uVar28 & 0xffffffff);
          }
          uVar13 = local_140;
          if (local_140 == 0) {
            iVar6 = -1;
          }
          else {
            iVar6 = local_140 + 0x1e;
            if (-1 < (int)(local_140 - 1)) {
              iVar6 = local_140 - 1;
            }
            iVar6 = iVar6 >> 5;
          }
          uVar7 = local_140 + 1;
          uVar19 = local_140 + 0x1f;
          if (-1 < (int)local_140) {
            uVar19 = local_140;
          }
          if ((int)uVar19 >> 5 == iVar6) {
            local_140 = uVar7;
          }
          else {
            if ((int)local_13c <= (int)local_140) {
              if (local_140 + 0x20 < 0xa0) {
                local_13c = 0x80;
              }
              else {
                uVar7 = local_140 + 0x20 >> 5;
                if (local_13c + 0x1f < 0xa0) {
                  uVar16 = 4;
                  if (4 < uVar7) {
                    uVar16 = uVar7;
                  }
                }
                else {
                  uVar16 = uVar7 + (uVar7 * 3 >> 3) + 0x10;
                }
                uVar25 = (ulonglong)(uVar16 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar9 = (uint)(uVar25 + 0xf);
                    if (uVar16 < 0x1ffd) {
                      uVar25 = (ulonglong)
                               (ushort)(&DAT_14c841d90)
                                       [0x32 - (byte)(&DAT_14c841e00)[uVar25 + 0xf >> 4]];
                    }
                    else {
                      uVar29 = (ulonglong)(uVar9 & 0xfffffff0);
                      if (uVar29 < 0x7ff1) {
                        bVar12 = (&DAT_14c841e00)[uVar9 >> 4];
                        uVar28 = 0x32;
                        if (0x32 < bVar12) {
                          uVar28 = (ulonglong)bVar12;
                        }
                        uVar18 = 0x32 - (ulonglong)bVar12;
                        do {
                          uVar25 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar18 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar18 & 0xffffffff] & 0xf) == 0)
                          goto LAB_144477d7a;
                          lVar20 = uVar28 + 1 + uVar18;
                          uVar18 = uVar18 - 1;
                        } while (lVar20 != 0x33);
                      }
                      uVar25 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar25 = 0x10;
                      }
                      uVar25 = -uVar25 & (uVar29 + uVar25) - 1;
                    }
                  }
                  else {
                    uVar25 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar25,0);
                  }
                }
LAB_144477d7a:
                iVar6 = (int)(uVar25 >> 2);
                local_13c = iVar6 << 5;
                if (iVar6 < (int)uVar7) {
                  local_13c = 0xffffffe0;
                }
              }
              FUN_1446efbd8(local_158,local_140);
              uVar7 = local_140 + 1;
            }
            uVar16 = uVar7 + 0x1f;
            if (-1 < (int)uVar7) {
              uVar16 = uVar7;
            }
            local_140 = uVar7;
            if ((int)uVar7 % 0x20 != 0) {
              puVar10 = local_148;
              if (local_148 == (uint *)0x0) {
                puVar10 = local_158;
              }
              bVar12 = -(char)((int)uVar7 % 0x20);
              puVar10[(int)uVar16 >> 5] =
                   (puVar10[(int)uVar16 >> 5] << (bVar12 & 0x1f)) >> (bVar12 & 0x1f);
            }
          }
          lVar20 = (longlong)iVar27;
          puVar10 = local_148;
          if (local_148 == (uint *)0x0) {
            puVar10 = local_158;
          }
          bVar12 = (byte)uVar13 & 0x1f;
          puVar10[(int)uVar19 >> 5] =
               puVar10[(int)uVar19 >> 5] & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
        }
        else {
          lVar20 = (longlong)iStack_138;
          iStack_138 = *(int *)(local_168 + lVar20 * 0x18 + 4);
          local_134 = local_134 + -1;
          if (local_134 != 0) {
            *(undefined4 *)(local_168 + (longlong)*(int *)(local_168 + lVar20 * 0x18 + 4) * 0x18) =
                 0xffffffff;
          }
        }
        pvVar23 = local_198;
        uVar13 = 1 << ((byte)iVar27 & 0x1f);
        puVar10 = local_148;
        if (local_148 == (uint *)0x0) {
          puVar10 = local_158;
        }
        iVar6 = iVar27 + 0x1f;
        if (-1 < iVar27) {
          iVar6 = iVar27;
        }
        local_1d0 = (longlong)(iVar6 >> 5);
        puVar10[local_1d0] = puVar10[local_1d0] | uVar13;
        plVar22 = (longlong *)(local_168 + lVar20 * 0x18);
        *plVar22 = 0;
        lVar20 = (longlong)(int)uStack_190;
        *(int *)(plVar22 + 1) = (int)uStack_190;
        if (lVar20 == 0) {
          *(undefined8 *)((longlong)plVar22 + 0xc) = 0xffffffff00000000;
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          FUN_144a06ca8(plVar22,uStack_190 & 0xffffffff,0);
          memcpy((void *)*plVar22,pvVar23,lVar20 << 2);
          *(undefined4 *)(plVar22 + 2) = 0xffffffff;
          if ((longlong)(int)plVar22[1] != 0) {
            lVar20 = 0;
            uVar7 = 0;
            do {
              uVar7 = uVar7 ^ *(int *)(*plVar22 + lVar20) + (uVar7 >> 2) + uVar7 * 0x40 + 0x9e3779b9
              ;
              lVar20 = lVar20 + 4;
            } while ((longlong)(int)plVar22[1] * 4 != lVar20);
          }
        }
        uVar19 = (int)uStack_160 - local_134;
        iVar6 = 1;
        if (uVar19 != 1) {
          iVar8 = FUN_14447e81a(&local_168,uVar7);
          puVar15 = local_168;
          if (iVar8 != -1) {
            if (*(longlong *)(local_168 + (longlong)iVar8 * 0x18) != 0) {
              FUN_1400020a8();
            }
            lVar20 = plVar22[1];
            *(longlong *)(puVar15 + (longlong)iVar8 * 0x18) = *plVar22;
            *(longlong *)((longlong)(puVar15 + (longlong)iVar8 * 0x18) + 8) = lVar20;
            if (local_134 != 0) {
              *(int *)(local_168 + (longlong)iStack_138 * 0x18) = iVar27;
            }
            *(undefined4 *)(local_168 + (longlong)iVar27 * 0x18) = 0xffffffff;
            iVar6 = -1;
            if (0 < local_134) {
              iVar6 = iStack_138;
            }
            *(int *)(local_168 + (longlong)iVar27 * 0x18 + 4) = iVar6;
            iStack_138 = iVar27;
            local_134 = local_134 + 1;
            puVar10 = local_148;
            if (local_148 == (uint *)0x0) {
              puVar10 = local_158;
            }
            puVar10[local_1d0] = puVar10[local_1d0] & (uVar13 ^ 0xffffffff);
            uVar29 = local_1e8;
            uVar25 = local_1e0;
            uVar13 = local_1ec;
            goto LAB_144477c65;
          }
          if (3 < uVar19) {
            uVar25 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
            lVar20 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            iVar6 = 1 << ((byte)lVar20 & 0x1f);
          }
        }
        if (((int)uVar19 < 1) || (iVar6 <= local_120)) {
          uVar7 = local_120 - 1U & uVar7;
          *(uint *)((longlong)plVar22 + 0x14) = uVar7;
          puVar15 = local_128;
          if (local_128 == (undefined1 *)0x0) {
            puVar15 = local_130;
          }
          *(undefined4 *)(plVar22 + 2) =
               *(undefined4 *)(puVar15 + ((longlong)local_120 - 1U & (longlong)(int)uVar7) * 4);
          puVar15 = local_128;
          if (local_128 == (undefined1 *)0x0) {
            puVar15 = local_130;
          }
          *(int *)(puVar15 + ((longlong)local_120 - 1U & (longlong)(int)uVar7) * 4) = iVar27;
          uVar29 = local_1e8;
          uVar25 = local_1e0;
          uVar13 = local_1ec;
        }
        else {
          local_120 = iVar6;
          FUN_14447e544(&local_168);
          uVar29 = local_1e8;
          uVar25 = local_1e0;
          uVar13 = local_1ec;
        }
      }
      else {
        lVar20 = (longlong)(int)uStack_1a0;
        uVar7 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar7);
        if (uStack_1a0._4_4_ < uVar7) {
          FUN_1446f48e2(&local_1a8);
        }
        *(int *)(local_1a8 + lVar20 * 4) = iVar4;
      }
LAB_144477c65:
      iVar4 = iVar4 + 1;
    } while (iVar4 != (int)uVar25);
  }
  FUN_149156cf7(local_1c8,uStack_1c0 & 0xffffffff);
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  if (local_198 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_120 = 0;
  if (local_128 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_140 == 0) {
    uVar29 = 0;
    uVar18 = 1;
    iVar4 = 0;
    uVar13 = 0;
  }
  else {
    puVar10 = local_148;
    if (local_148 == (uint *)0x0) {
      puVar10 = local_158;
    }
    uVar13 = *puVar10;
    if (uVar13 == 0) {
      iVar4 = local_140 + 0x1e;
      if (-1 < (int)(local_140 - 1)) {
        iVar4 = local_140 - 1;
      }
      uVar29 = 0;
      uVar28 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar28 = uVar29;
      }
      iVar4 = 0;
      do {
        if (uVar28 == uVar29) goto LAB_144478153;
        iVar4 = iVar4 + 0x20;
        uVar13 = puVar10[uVar29 + 1];
        uVar29 = uVar29 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar29 = 0;
      iVar4 = 0;
    }
    uVar18 = (ulonglong)(-uVar13 & uVar13);
    uVar28 = uVar18 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar13 = (iVar4 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if ((int)local_140 <= (int)uVar13) {
      uVar13 = local_140;
    }
  }
  if ((int)uVar13 < (int)local_140) {
    uVar19 = 0xffffffff;
    uVar7 = local_140;
    do {
      if (*(longlong *)(local_168 + (longlong)(int)uVar13 * 0x18) != 0) {
        FUN_1400020a8();
        uVar7 = local_140;
      }
      uVar19 = uVar19 & ~(uint)uVar18;
      puVar10 = local_148;
      if (local_148 == (uint *)0x0) {
        puVar10 = local_158;
      }
      iVar27 = (int)uVar29;
      lVar20 = (longlong)iVar27;
      uVar13 = puVar10[lVar20] & uVar19;
      if (uVar13 == 0) {
        iVar6 = uVar7 + 0x1e;
        if (-1 < (int)(uVar7 - 1)) {
          iVar6 = uVar7 - 1;
        }
        iVar6 = iVar6 >> 5;
        iVar8 = iVar6;
        if (iVar6 < iVar27) {
          iVar8 = iVar27;
        }
        if (iVar6 <= iVar27) break;
        lVar21 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar13 = puVar10[lVar20 + lVar21 + 1];
          if (uVar13 != 0) break;
          lVar21 = lVar21 + 1;
          if (iVar8 - lVar20 == lVar21) goto LAB_144478153;
        }
        uVar29 = (ulonglong)(iVar27 + (int)lVar21 + 1);
        uVar19 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar13 & uVar13);
      uVar28 = uVar18 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uVar13 = (iVar4 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    } while ((int)uVar13 < (int)uVar7);
  }
LAB_144478153:
  uVar29 = (ulonglong)uStack_160 >> 0x20;
  uStack_160 = (ulonglong *)((ulonglong)uStack_160 & 0xffffffff00000000);
  if ((int)uVar29 != 0) {
    FUN_144727cd0(&local_168,0);
  }
joined_r0x0001444787fe:
  local_134 = 0;
  iStack_138 = 0xffffffff;
  local_140 = 0;
  if (0x80 < local_13c) {
    local_134 = 0;
    iStack_138 = 0xffffffff;
    local_13c = 0x80;
    local_140 = 0;
    FUN_1446efbd8(local_158,0);
  }
  if (local_148 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_168 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar20 = (longlong)(int)uStack_1a0;
  iVar4 = (int)uStack_1a0;
  if (0 < (longlong)(int)uStack_1a0) {
    do {
      if ((longlong)(int)local_100 != 0) {
        lVar21 = (longlong)(int)local_100 * 0xe0;
        plVar22 = (longlong *)((longlong)local_108 + 0x10);
        do {
          uVar13 = *(uint *)(local_1a8 + (lVar20 + -1) * 4);
          lVar11 = (longlong)(int)uVar13;
          if ((-1 < lVar11) && (iVar4 = (int)plVar22[1], (int)uVar13 < iVar4)) {
            if (~uVar13 + iVar4 != 0) {
              memmove((void *)(*plVar22 + lVar11 * 4),(void *)(*plVar22 + lVar11 * 4 + 4),
                      (longlong)(int)(~uVar13 + iVar4) << 2);
              iVar4 = (int)plVar22[1];
            }
            *(int *)(plVar22 + 1) = iVar4 + -1;
            FUN_14479f406(plVar22);
          }
          plVar22 = plVar22 + 0x1c;
          lVar21 = lVar21 + -0xe0;
        } while (lVar21 != 0);
      }
      bVar2 = 1 < lVar20;
      lVar20 = lVar20 + -1;
    } while (bVar2);
    iVar4 = (int)uStack_1a0;
  }
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if ((longlong)(int)local_100 != 0) {
    lVar20 = (longlong)(int)local_100 * 0xe0;
    pvVar23 = local_108;
    do {
      FUN_1490fa978(pvVar23);
      pvVar23 = (void *)((longlong)pvVar23 + 0xe0);
      lVar20 = lVar20 + -0xe0;
    } while (lVar20 != 0);
  }
  local_168 = (undefined1 *)CONCAT44(local_168._4_4_,0xffffffff);
  FUN_1448156a8(local_e8,&local_168,(int)uVar25 - iVar4);
  FUN_1490faa9a(local_118);
  iVar4 = FUN_149157096(param_1 + 0x11);
  FUN_149156f20((ulonglong)(uint)(iVar4 % 0x59) * 0xb8 +
                *(longlong *)(param_1[0x11] + (longlong)(iVar4 / 0x59) * 8),local_118);
  lVar21 = local_1d8;
  iVar27 = (int)param_1[0x13];
  iVar4 = iVar27 + -1;
  local_1a8 = CONCAT44(local_1a8._4_4_,iVar4);
  iVar6 = (int)((ulonglong)((longlong)iVar4 * -0x47e8fd1f) >> 0x20) + iVar27 + -1;
  iVar6 = (iVar6 >> 6) - (iVar6 >> 0x1f);
  lVar11 = (ulonglong)((iVar27 + iVar6 * -0x59) - 1) * 0xb8;
  *(int *)(*(longlong *)(param_1[0x11] + (longlong)iVar6 * 8) + lVar11) = iVar4;
  lVar20 = *(longlong *)(param_1[0x11] + (longlong)iVar6 * 8);
  FUN_14447b7a0(lVar20 + 0x98 + lVar11,local_1d8);
  FUN_14912c082(lVar20 + lVar11 + 0xa8,lVar21 + 0x10);
  local_168 = local_114;
  uStack_160 = &local_1a8;
  FUN_140171856(param_1 + 0x2d,&local_198,&local_168,0);
  uVar25 = (ulonglong)(int)local_1a8;
  lVar11 = param_1[0x11];
  lVar21 = *(longlong *)(lVar11 + (longlong)((int)local_1a8 / 0x59) * 8);
  lVar24 = (ulonglong)(uint)((int)local_1a8 % 0x59) * 0xb8;
  lVar20 = lVar21 + lVar24;
  if (0 < *(int *)(lVar21 + 0x18 + lVar24)) {
    lVar21 = 0;
    do {
      lVar24 = (longlong)*(int *)(*(longlong *)(lVar20 + 0x10) + 0x80 + lVar21 * 0xe0);
      if (lVar24 != 0) {
        pbVar26 = *(byte **)(*(longlong *)(lVar20 + 0x10) + 0x78 + lVar21 * 0xe0);
        pbVar30 = pbVar26 + lVar24;
        do {
          if ((int)param_1[0x4c] != *(int *)((longlong)param_1 + 0x28c)) {
            plVar22 = (longlong *)param_1[0x53];
            if ((longlong *)param_1[0x53] == (longlong *)0x0) {
              plVar22 = param_1 + 0x52;
            }
            iVar4 = *(int *)((longlong)plVar22 +
                            (ulonglong)((int)param_1[0x54] - 1U & (uint)*pbVar26) * 4);
            if (iVar4 != -1) {
              do {
                lVar20 = param_1[0x4b] + (longlong)iVar4 * 0x20;
                if (*(byte *)(param_1[0x4b] + (longlong)iVar4 * 0x20) == *pbVar26)
                goto LAB_1444784bc;
                iVar4 = *(int *)(lVar20 + 0x18);
              } while (iVar4 != -1);
            }
          }
          lVar20 = 0;
LAB_1444784bc:
          FUN_1449e3bb0(lVar20 + 8,&local_1a8);
          pbVar26 = pbVar26 + 1;
        } while (pbVar26 != pbVar30);
        uVar25 = local_1a8 & 0xffffffff;
        lVar11 = param_1[0x11];
      }
      lVar21 = lVar21 + 1;
      lVar24 = *(longlong *)(lVar11 + (longlong)((int)uVar25 / 0x59) * 8);
      lVar17 = (ulonglong)(uint)((int)uVar25 % 0x59) * 0xb8;
      lVar20 = lVar24 + lVar17;
    } while (lVar21 < *(int *)(lVar24 + 0x18 + lVar17));
  }
LAB_144478520:
  FUN_1490fab88(local_118);
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return lVar20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144478822 FUN_144478822 body=171 status=ok
// SIG undefined FUN_144478822(void)

ulonglong FUN_144478822(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x54) != 1) {
    if (*(char *)(param_1 + 0x70) == '\0') {
      uVar2 = *(uint *)(param_2 + 1);
      if (uVar2 == 0) {
        uVar3 = FUN_1490fa6b0(param_1);
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)*param_2;
        uVar3 = uVar2;
      }
      iVar4 = FUN_1444788ce(param_1,uVar6);
      if (1 < (int)uVar3) {
        uVar9 = 1;
        do {
          if (uVar2 == 0) {
            uVar7 = uVar9 & 0xffffffff;
          }
          else {
            uVar7 = (ulonglong)*(uint *)(*param_2 + uVar9 * 4);
          }
          iVar5 = FUN_1444788ce(param_1,uVar7);
          uVar8 = CONCAT71((int7)(uVar8 >> 8),iVar5 == iVar4);
        } while ((iVar5 == iVar4) &&
                (lVar1 = (2 - (ulonglong)uVar3) + uVar9, uVar9 = uVar9 + 1, lVar1 != 1));
      }
    }
    else {
      uVar8 = 0;
    }
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1444788ce FUN_1444788ce body=532 status=ok
// SIG undefined FUN_1444788ce(void)

undefined4 FUN_1444788ce(longlong param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  int local_a0;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  int local_80;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x70) == '\0') {
    if (((int)param_2 < 0) || (*(int *)(param_1 + 0x18) <= (int)param_2)) {
      puVar4 = *(undefined4 **)(param_1 + 0x10);
    }
    else {
      puVar4 = (undefined4 *)((ulonglong)param_2 * 4 + *(longlong *)(param_1 + 0x10));
    }
    uVar9 = *puVar4;
  }
  else if (*(longlong *)(param_1 + 0x90) == 0) {
    FUN_1456acd6c(&local_88);
    uVar9 = 0xffffffff;
    if ((longlong)local_80 != 0) {
      lVar8 = 0;
      do {
        lVar1 = lVar8 + 8;
        if ((int)param_2 < *(int *)(local_88 + lVar1) && -1 < (int)param_2) {
          uVar9 = *(undefined4 *)(*(longlong *)(local_88 + lVar8) + (ulonglong)param_2 * 4);
          break;
        }
        lVar8 = lVar8 + 0x10;
        param_2 = param_2 - *(int *)(local_88 + lVar1);
      } while ((longlong)local_80 * 0x10 != lVar8);
    }
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_90 = 0xffffffff;
    local_94 = 0;
    FUN_1456acd6c(&local_a8,param_1 + 0x78);
    local_88 = (code *)0x0;
    local_78 = (longlong *)FUN_14001cc68(0x28,8);
    *local_78 = (longlong)&PTR_FUN_14bb2bbd0;
    local_78[1] = param_1;
    local_78[2] = (longlong)&local_94;
    *(uint *)(local_78 + 3) = param_2;
    local_78[4] = (longlong)&local_90;
    if (local_78 + 1 != (longlong *)0x0) {
      local_88 = FUN_14447ec6a;
    }
    if ((longlong)local_a0 != 0) {
      plVar10 = local_a8 + (longlong)local_a0 * 2;
      plVar7 = local_a8;
      do {
        lVar8 = plVar7[1];
        if ((longlong)(int)lVar8 != 0) {
          lVar1 = *plVar7;
          lVar11 = 0;
          do {
            pcVar2 = local_88;
            local_8c = *(undefined4 *)(lVar1 + lVar11);
            plVar6 = local_78;
            if (local_78 == (longlong *)0x0) {
              plVar6 = local_68;
            }
            uVar5 = (**(code **)(*plVar6 + 8))();
            cVar3 = (*pcVar2)(uVar5,&local_8c);
            if (cVar3 == '\0') goto LAB_144478a91;
            lVar11 = lVar11 + 4;
          } while ((longlong)(int)lVar8 * 4 != lVar11);
        }
        plVar7 = plVar7 + 2;
      } while (plVar7 != plVar10);
    }
LAB_144478a91:
    if (local_88 != (code *)0x0) {
      plVar7 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar7 = local_68;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    uVar9 = local_90;
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8();
      uVar9 = local_90;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 144478ae4 FUN_144478ae4 body=66 status=ok
// SIG undefined FUN_144478ae4(void)

ulonglong FUN_144478ae4(undefined8 *param_1,int param_2)

{
  ulonglong uVar1;
  
  if (*(int *)((longlong)param_1 + 0x24) == -1) {
    if (*(char *)(param_1 + 1) != '\x01') {
      uVar1 = FUN_1444788ce(*param_1,param_2);
      return uVar1;
    }
    FUN_1490fd168(param_1);
  }
  return (ulonglong)*(uint *)(param_1[3] + (longlong)param_2 * 4);
}



// FUNCTION 144478b26 FUN_144478b26 body=299 status=ok
// SIG undefined FUN_144478b26(void)

undefined8 * FUN_144478b26(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined1 local_7c [4];
  longlong local_78;
  int *piStack_70;
  int local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  local_80 = param_3;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar6 = 0;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      lVar5 = lVar1 + lVar6;
      local_78 = 0;
      piStack_70 = (int *)0x0;
      cVar2 = FUN_144478822(lVar5,&local_78);
      if (cVar2 == '\0') {
        iVar3 = FUN_1444788ce(lVar5,local_80);
        if (iVar3 == -1) {
          local_64 = 0;
          FUN_14005eae2(param_2);
          break;
        }
      }
      else {
        iVar3 = FUN_1444788ce(lVar5,0);
      }
      local_64 = 1;
      local_78 = lVar6 + 4 + lVar1;
      piStack_70 = &local_68;
      local_68 = iVar3;
      FUN_140171856(param_2,local_7c,&local_78,0);
      lVar4 = lVar4 + 1;
      lVar6 = lVar6 + 0xe0;
    } while (lVar4 < *(int *)(param_1 + 0x18));
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144478c64 FUN_144478c64 body=375 status=ok
// SIG undefined FUN_144478c64(void)

void FUN_144478c64(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  ulonglong unaff_RBP;
  longlong lVar10;
  undefined4 *puVar11;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    FUN_14054c6c4(param_2,param_1 + 0x10);
    return;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_14481578e(param_2,0);
  }
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    puVar9 = *(undefined1 **)(param_1 + 0x78);
    puVar1 = puVar9 + *(int *)(param_1 + 0x80);
    do {
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*puVar9);
      lVar10 = *(longlong *)(param_1 + 0x90);
      FUN_14001a7b2();
      puVar6 = (undefined8 *)
               (**(code **)(DAT_14cc012d0 + 0xf8))(&DAT_14cc012d0,unaff_RBP & 0xffffffff);
      if (lVar10 == 0) {
        uVar3 = *(uint *)(puVar6 + 1);
        if ((longlong)(int)uVar3 != 0) {
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + uVar3;
          if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar3) {
            FUN_1446f48e2(param_2,iVar2);
          }
          memcpy((void *)((longlong)iVar2 * 4 + *param_2),(void *)*puVar6,(longlong)(int)uVar3 << 2)
          ;
        }
      }
      else if ((longlong)*(int *)(puVar6 + 1) != 0) {
        puVar11 = (undefined4 *)*puVar6;
        lVar10 = (longlong)*(int *)(puVar6 + 1) << 2;
        do {
          pcVar4 = *(code **)(param_1 + 0x90);
          plVar8 = *(longlong **)(param_1 + 0xa0);
          if (*(longlong **)(param_1 + 0xa0) == (longlong *)0x0) {
            plVar8 = (longlong *)(param_1 + 0xb0);
          }
          uVar7 = (**(code **)(*plVar8 + 8))();
          cVar5 = (*pcVar4)(uVar7,puVar11);
          if (cVar5 != '\0') {
            iVar2 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
              FUN_1446f48e2(param_2,iVar2);
            }
            *(undefined4 *)(*param_2 + (longlong)iVar2 * 4) = *puVar11;
          }
          puVar11 = puVar11 + 1;
          lVar10 = lVar10 + -4;
        } while (lVar10 != 0);
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
  }
  return;
}



// FUNCTION 144478dec FUN_144478dec body=188 status=ok
// SIG undefined FUN_144478dec(void)

void FUN_144478dec(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)(int)param_1[1] != 0) {
    plVar8 = (longlong *)*param_1;
    local_58 = plVar8 + (longlong)(int)param_1[1] * 2;
    do {
      lVar3 = plVar8[1];
      if ((longlong)(int)lVar3 != 0) {
        lVar1 = *plVar8;
        lVar7 = 0;
        do {
          local_4c = *(undefined4 *)(lVar1 + lVar7);
          pcVar2 = (code *)*param_2;
          plVar6 = (longlong *)param_2[2];
          if ((longlong *)param_2[2] == (longlong *)0x0) {
            plVar6 = param_2 + 4;
          }
          uVar5 = (**(code **)(*plVar6 + 8))();
          cVar4 = (*pcVar2)(uVar5,&local_4c);
          if (cVar4 == '\0') goto LAB_144478e81;
          lVar7 = lVar7 + 4;
        } while ((longlong)(int)lVar3 * 4 != lVar7);
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != local_58);
  }
LAB_144478e81:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144478eaa FUN_144478eaa body=276 status=ok
// SIG undefined FUN_144478eaa(void)

undefined8 *
FUN_144478eaa(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_4 + 1);
  lVar2 = (longlong)local_38;
  pvVar1 = (void *)*param_4;
  if (lVar2 == 0) {
    local_34 = 0;
    param_1[4] = 0;
    param_1[6] = &PTR_FUN_14bb2bc30;
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    FUN_144a06ca8(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar2 << 2);
    pvVar1 = local_40;
    lVar2 = (longlong)local_38;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[6] = &PTR_FUN_14bb2bc30;
    param_1[7] = 0;
    *(int *)(param_1 + 8) = local_38;
    if (lVar2 != 0) {
      FUN_144a06ca8(param_1 + 7,local_38,0);
      memcpy((void *)param_1[7],pvVar1,lVar2 << 2);
      goto LAB_144478f81;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
LAB_144478f81:
  param_1[2] = FUN_14447ef72;
  if (local_40 != (void *)0x0) {
    FUN_1400020a8(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144478fc0 FUN_144478fc0 body=45 status=ok
// SIG undefined FUN_144478fc0(void)

void FUN_144478fc0(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bb2bc50;
  *(undefined4 *)(param_1 + 7) = param_4;
  param_1[2] = FUN_14447f114;
  return;
}



// FUNCTION 144478fee FUN_144478fee body=443 status=ok
// SIG undefined FUN_144478fee(void)

undefined8 *
FUN_144478fee(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
             longlong *param_5)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  size_t sVar5;
  undefined1 auStack_a8 [32];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_4 + 1);
  sVar5 = (size_t)local_80;
  pvVar2 = (void *)*param_4;
  if (sVar5 == 0) {
    local_7c = 0;
  }
  else {
    FUN_149157980(&local_88,local_80,0);
    memcpy(local_88,pvVar2,sVar5);
  }
  local_78 = *param_5;
  local_68[0] = 0;
  if (local_78 != 0) {
    plVar4 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_5[2];
    }
    (**(code **)*plVar4)(plVar4,local_68);
  }
  param_1[2] = 0;
  param_1[4] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  pvVar2 = local_88;
  param_1[4] = puVar3;
  *puVar3 = &PTR_FUN_14bb2bc70;
  puVar1 = puVar3 + 2;
  puVar3[2] = 0;
  sVar5 = (size_t)local_80;
  *(int *)(puVar3 + 3) = local_80;
  if (sVar5 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
  }
  else {
    FUN_149157980(puVar1,local_80,0);
    memcpy((void *)*puVar1,pvVar2,sVar5);
  }
  puVar3[4] = local_78;
  puVar3[6] = local_68[0];
  local_68[0] = 0;
  *(undefined4 *)(puVar3 + 10) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x54) = uStack_44;
  *(undefined4 *)(puVar3 + 0xb) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x5c) = uStack_3c;
  *(undefined4 *)(puVar3 + 8) = local_58;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_54;
  *(undefined4 *)(puVar3 + 9) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_4c;
  if (local_78 != 0) {
    local_78 = 0;
  }
  if (puVar1 != (undefined8 *)0x0) {
    param_1[2] = FUN_14447f230;
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_5 != 0) {
    plVar4 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444791ee FUN_1444791ee body=1391 status=ok
// SIG undefined FUN_1444791ee(void)

undefined8 FUN_1444791ee(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  ushort uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  ushort uVar12;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined1 *local_140;
  undefined8 *local_138;
  undefined1 *local_130;
  ulonglong *local_128 [2];
  ulonglong local_118 [2];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc04148) && (FUN_144b3d300(&DAT_14cc04148), DAT_14cc04148 == -1)) {
    FUN_140056680(local_118,&DAT_149e25bf0);
    FUN_140056680(local_108,L"TArray<F");
    FUN_140056680(local_f8,L"TArray<TArray<F");
    FUN_140056680(local_e8,&DAT_149e8ad72);
    FUN_140056680(local_d8,L"TArray<E");
    FUN_140056680(local_c8,L"TArray<TArray<E");
    FUN_140056680(local_b8,&DAT_149e71d4c);
    FUN_140056680(local_a8,L"TArray<U");
    FUN_140056680(local_98,L"TArray<TArray<U");
    FUN_140056680(local_88,L"TObjectPtr<");
    FUN_140056680(local_78,L"TArray<TObjectPtr<");
    FUN_140056680(local_68,L"TArray<TArray<TObjectPtr<");
    FUN_140056680(local_58,L"TScriptInterface<TSubclassOf<");
    local_128[1] = &local_48;
    local_128[0] = local_118;
    FUN_141469cae(&DAT_14cc04138);
    lVar11 = 0xd0;
    do {
      if (*(longlong *)((longlong)local_128 + lVar11) != 0) {
        FUN_1400020a8();
      }
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
    atexit(FUN_14447b8f2);
    _Init_thread_footer(&DAT_14cc04148);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc04160) && (FUN_144b3d300(&DAT_14cc04160), DAT_14cc04160 == -1)) {
    FUN_140056680(local_118,L"UInt");
    FUN_140056680(local_108,L"TArray<UInt");
    FUN_140056680(local_f8,L"TArray<TArray<UInt");
    FUN_140056680(local_e8,L"uint");
    FUN_140056680(local_d8,L"TArray<uint");
    FUN_140056680(local_c8,L"TArray<TArray<uint");
    local_130 = local_b8;
    local_138 = local_118;
    FUN_141469cae(&DAT_14cc04150);
    lVar11 = 0x60;
    do {
      if (*(longlong *)((longlong)local_128 + lVar11) != 0) {
        FUN_1400020a8();
      }
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
    atexit(FUN_14447b923);
    _Init_thread_footer(&DAT_14cc04160);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc04178) && (FUN_144b3d300(&DAT_14cc04178), DAT_14cc04178 == -1)) {
    FUN_140056680(local_118,L"FString");
    FUN_140056680(local_108,L"TArray<FString>");
    FUN_140056680(local_f8,L"TArray<TArray<FString>>");
    FUN_140056680(local_e8,L"FName");
    FUN_140056680(local_d8,L"TArray<FName>");
    FUN_140056680(local_c8,L"TArray<TArray<FName>>");
    local_140 = local_b8;
    local_148 = local_118;
    FUN_141469cae(&DAT_14cc04168);
    lVar11 = 0x60;
    do {
      if (*(longlong *)((longlong)local_128 + lVar11) != 0) {
        FUN_1400020a8();
      }
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
    atexit(FUN_14447b954);
    _Init_thread_footer(&DAT_14cc04178);
  }
  lVar11 = DAT_14cc04150;
  if ((longlong)DAT_14cc04170 != 0) {
    iVar1 = (int)param_1[1];
    plVar4 = DAT_14cc04168;
LAB_14447938e:
    if ((int)plVar4[1] == iVar1) {
      if (1 < iVar1) {
        lVar7 = 0;
        do {
          uVar12 = *(ushort *)(*plVar4 + lVar7);
          uVar2 = (ulonglong)uVar12;
          uVar6 = *(ushort *)(*param_1 + lVar7);
          if (uVar12 == uVar6) {
            if (uVar12 == 0) break;
          }
          else {
            if (0x7f < (uVar6 | uVar12)) goto LAB_1444793ef;
            uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
            uVar8 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[uVar8]) goto LAB_1444793ef;
          }
          lVar7 = lVar7 + 2;
        } while( true );
      }
    }
    else if ((int)plVar4[1] + iVar1 != 1) goto LAB_1444793a0;
    goto LAB_14447936c;
  }
LAB_144479295:
  lVar7 = (longlong)DAT_14cc04158;
  if (lVar7 != 0) {
    pwVar10 = L"";
    if ((int)param_1[1] != 0) {
      pwVar10 = (wchar_t *)*param_1;
    }
    lVar9 = 0;
    do {
      iVar1 = *(int *)(lVar11 + 8 + lVar9);
      uVar2 = (ulonglong)(iVar1 - 1);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      if (0 < (int)uVar2) {
        pwVar5 = L"";
        if (iVar1 != 0) {
          pwVar5 = *(wchar_t **)(lVar11 + lVar9);
        }
        iVar1 = wcsncmp(pwVar10,pwVar5,uVar2);
        if (iVar1 == 0) goto LAB_14447936c;
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar7 * 0x10 != lVar9);
  }
  lVar11 = DAT_14cc04138;
  lVar7 = (longlong)DAT_14cc04140;
  if (lVar7 != 0) {
    pwVar10 = L"";
    if ((int)param_1[1] != 0) {
      pwVar10 = (wchar_t *)*param_1;
    }
    lVar9 = 0;
    do {
      iVar1 = *(int *)(lVar11 + 8 + lVar9);
      uVar2 = (ulonglong)(iVar1 - 1);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      if (0 < (int)uVar2) {
        pwVar5 = L"";
        if (iVar1 != 0) {
          pwVar5 = *(wchar_t **)(lVar11 + lVar9);
        }
        iVar1 = wcsncmp(pwVar10,pwVar5,uVar2);
        if (iVar1 == 0) {
          uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
          goto LAB_1444793fe;
        }
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar7 * 0x10 != lVar9);
  }
LAB_14447936c:
  uVar3 = 0;
LAB_1444793fe:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
LAB_1444793ef:
  if (uVar12 == uVar6) goto LAB_14447936c;
LAB_1444793a0:
  plVar4 = plVar4 + 2;
  if (plVar4 == DAT_14cc04168 + (longlong)DAT_14cc04170 * 2) goto LAB_144479295;
  goto LAB_14447938e;
}



// FUNCTION 14447975e FUN_14447975e body=2153 status=ok
// SIG undefined FUN_14447975e(void)

longlong FUN_14447975e(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  void *_Src;
  bool bVar2;
  undefined8 *puVar3;
  char cVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ushort *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ushort uVar14;
  int iVar15;
  int iVar16;
  undefined2 *puVar17;
  ushort uVar18;
  ulonglong uVar19;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  undefined8 local_98;
  ushort *local_90;
  int local_88;
  undefined4 local_84;
  ushort *local_80;
  undefined8 uStack_78;
  ushort *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar4 = FUN_1444791ee();
  if (cVar4 != '\0') {
    local_90 = (ushort *)0x0;
    local_88 = *(int *)(param_1 + 1);
    lVar10 = (longlong)local_88;
    _Src = (void *)*param_1;
    local_a0 = param_1;
    local_98 = param_2;
    if (lVar10 == 0) {
      local_84 = 0;
      iVar15 = 0;
    }
    else {
      FUN_1446dd670(&local_90,local_88,0);
      memcpy(local_90,_Src,lVar10 * 2);
      iVar15 = local_88;
    }
    puVar9 = local_90;
    iVar16 = local_88;
    uVar1 = local_84;
    do {
      local_84 = uVar1;
      local_88 = iVar16;
      local_90 = puVar9;
      puVar9 = local_90;
      puVar5 = local_90;
      if (iVar15 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      lVar10 = 7;
      lVar8 = 0;
      while( true ) {
        uVar14 = *(ushort *)((longlong)puVar5 + lVar8);
        uVar19 = (ulonglong)uVar14;
        uVar18 = *(ushort *)((longlong)&DAT_14bb01910 + lVar8);
        if (uVar14 != uVar18) break;
        if (uVar14 == 0) goto LAB_144479875;
LAB_144479839:
        lVar10 = lVar10 + -1;
        if (lVar10 == 0) goto LAB_144479875;
        lVar8 = lVar8 + 2;
      }
      if ((uVar18 | uVar14) < 0x80) {
        uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
        uVar13 = (ulonglong)uVar18;
        uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar13]) goto LAB_144479839;
      }
      if (uVar14 != uVar18) {
        local_70 = (ushort *)0x0;
        local_68 = CONCAT44(local_68._4_4_,iVar15);
        if (iVar15 == 0) {
          local_68 = 0;
          puVar9 = &DAT_149dfb77a;
        }
        else {
          FUN_1446dd670(&local_70,iVar15,0);
          memcpy(local_70,puVar9,(longlong)iVar15 * 2);
          puVar9 = &DAT_149dfb77a;
          if ((int)local_68 != 0) {
            puVar9 = local_70;
          }
        }
        lVar10 = 0xc;
        lVar8 = 0;
        goto LAB_1444799d4;
      }
LAB_144479875:
      uVar7 = iVar15 - 1;
      if (iVar15 == 0) {
        uVar7 = 0;
      }
      uVar6 = 7;
      if ((int)uVar7 < 7) {
        uVar6 = uVar7;
      }
      uVar19 = (ulonglong)uVar6;
      if ((int)uVar6 < 1) {
        uVar19 = 0;
      }
      FUN_14006620a(&local_80,puVar5 + uVar19,uVar7 - (int)uVar19);
      uVar7 = (int)uStack_78 - 1;
      if ((int)uStack_78 == 0) {
        uVar7 = 0;
      }
      uVar6 = 1;
      if (1 < (int)uVar7) {
        uVar6 = uVar7;
      }
      uVar6 = uVar6 - 1;
      bVar2 = 0 < (int)(uVar7 - uVar6);
      iVar15 = (int)uStack_78;
      if ((int)uVar6 < (int)uVar7) {
        iVar15 = (int)uStack_78 - (uVar6 + bVar2);
        if (iVar15 != 0) {
          memmove(local_80 + uVar6,local_80 + (ulonglong)uVar6 + 1,(longlong)iVar15 * 2);
        }
        iVar15 = (int)uStack_78 - (uint)bVar2;
      }
      local_70 = local_80;
      local_68._4_4_ = uStack_78._4_4_;
      local_80 = (ushort *)0x0;
      uStack_78 = 0;
      local_68._0_4_ = iVar15;
      FUN_140ded26a(&local_70);
      FUN_140ded312(&local_70);
      iVar15 = (int)local_68;
      puVar9 = local_70;
      local_70 = (ushort *)0x0;
      iVar16 = (int)local_68;
      uVar1 = local_68._4_4_;
      local_68 = 0;
      if (local_80 != (ushort *)0x0) {
        FUN_1400020a8();
      }
      if (local_90 != (ushort *)0x0) {
        FUN_1400020a8();
      }
    } while( true );
  }
  lVar10 = 0;
  goto LAB_144479e82;
LAB_1444799d4:
  uVar14 = *(ushort *)((longlong)puVar9 + lVar8);
  uVar18 = *(ushort *)((longlong)L"TSubclassOf<" + lVar8);
  if (uVar14 == uVar18) {
    iVar15 = 0;
    if ((uVar14 == 0) || (lVar10 == 1)) goto LAB_144479a2c;
LAB_1444799f1:
    lVar10 = lVar10 + -1;
    lVar8 = lVar8 + 2;
    goto LAB_1444799d4;
  }
  if ((uVar18 | uVar14) < 0x80) {
    if ((&DAT_149e05da0)[uVar14] != (&DAT_149e05da0)[(uint)uVar18]) {
      iVar15 = (uint)(byte)(&DAT_149e05da0)[uVar14] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar18];
      goto LAB_144479a2c;
    }
    if (lVar10 == 1) {
      iVar15 = 0;
      goto LAB_144479a2c;
    }
    goto LAB_1444799f1;
  }
  iVar15 = (uint)uVar14 - (uint)uVar18;
LAB_144479a2c:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc04190) && (FUN_144b3d300(&DAT_14cc04190), DAT_14cc04190 == -1)) {
    FUN_140056680(&DAT_14cc04180,L"TObjectPtr<");
    atexit((_func_5014 *)&LAB_14447b985);
    _Init_thread_footer(&DAT_14cc04190);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc041a8) && (FUN_144b3d300(&DAT_14cc041a8), DAT_14cc041a8 == -1)) {
    FUN_140056680(&DAT_14cc04198,L"TSubclassOf<");
    atexit((_func_5014 *)&LAB_14447b996);
    _Init_thread_footer(&DAT_14cc041a8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc041c0) && (FUN_144b3d300(&DAT_14cc041c0), DAT_14cc041c0 == -1)) {
    FUN_140056680(&DAT_14cc041b0);
    atexit((_func_5014 *)&LAB_14447b9a7);
    _Init_thread_footer(&DAT_14cc041c0);
  }
  uVar19 = (ulonglong)(DAT_14cc04188 - 1);
  if (DAT_14cc04188 == 0) {
    uVar19 = 0;
  }
  if ((int)uVar19 < 1) {
LAB_144479b32:
    uVar7 = DAT_14cc041a0 - 1;
    if (DAT_14cc041a0 == 0) {
      uVar7 = 0;
    }
    if (0 < (int)uVar7) {
      puVar17 = &DAT_149dfb77a;
      if (DAT_14cc041a0 != 0) {
        puVar17 = DAT_14cc04198;
      }
      uVar19 = (ulonglong)uVar7;
      puVar9 = &DAT_149dfb77a;
      if ((int)local_68 != 0) {
        puVar9 = local_70;
      }
      lVar10 = 0;
      while( true ) {
        uVar14 = *(ushort *)((longlong)puVar9 + lVar10);
        uVar13 = (ulonglong)uVar14;
        uVar18 = *(ushort *)((longlong)puVar17 + lVar10);
        iVar16 = DAT_14cc041a0;
        if (uVar14 != uVar18) break;
        if (uVar14 == 0) goto LAB_144479c4f;
LAB_144479b81:
        uVar19 = uVar19 - 1;
        if (uVar19 == 0) goto LAB_144479c4f;
        lVar10 = lVar10 + 2;
      }
      if ((uVar18 | uVar14) < 0x80) {
        uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        uVar11 = (ulonglong)uVar18;
        uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar11]) goto LAB_144479b81;
      }
      if (uVar14 != uVar18) goto LAB_144479bb9;
      goto LAB_144479c4f;
    }
LAB_144479bb9:
    puVar9 = local_70;
    if ((int)local_68 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    lVar10 = 0x11;
    lVar8 = 0;
    while( true ) {
      uVar14 = *(ushort *)((longlong)puVar9 + lVar8);
      uVar19 = (ulonglong)uVar14;
      uVar18 = *(ushort *)((longlong)L"TScriptInterface<" + lVar8);
      if (uVar14 != uVar18) break;
      if (uVar14 == 0) goto LAB_144479c25;
LAB_144479bea:
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) goto LAB_144479c25;
      lVar8 = lVar8 + 2;
    }
    if ((uVar18 | uVar14) < 0x80) {
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
      uVar13 = (ulonglong)uVar18;
      uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar13]) goto LAB_144479bea;
    }
    if (uVar14 != uVar18) goto LAB_144479d22;
LAB_144479c25:
    uVar7 = DAT_14cc041b8 + (uint)(DAT_14cc041b8 == 0);
    uVar6 = (int)local_68 - 1;
    if ((int)local_68 == 0) {
      uVar6 = 0;
    }
    if ((int)uVar6 <= (int)uVar7) {
      uVar7 = uVar6;
    }
    if ((int)uVar7 < 1) {
      uVar7 = 0;
    }
    iVar16 = uVar6 - uVar7;
    puVar9 = puVar9 + uVar7;
  }
  else {
    puVar17 = &DAT_149dfb77a;
    if (DAT_14cc04188 != 0) {
      puVar17 = DAT_14cc04180;
    }
    puVar9 = &DAT_149dfb77a;
    if ((int)local_68 != 0) {
      puVar9 = local_70;
    }
    lVar10 = 0;
    while( true ) {
      uVar14 = *(ushort *)((longlong)puVar9 + lVar10);
      uVar13 = (ulonglong)uVar14;
      uVar18 = *(ushort *)((longlong)puVar17 + lVar10);
      iVar16 = DAT_14cc04188;
      if (uVar14 != uVar18) break;
      if (uVar14 == 0) goto LAB_144479c4f;
LAB_144479af5:
      uVar19 = uVar19 - 1;
      if (uVar19 == 0) goto LAB_144479c4f;
      lVar10 = lVar10 + 2;
    }
    if ((uVar18 | uVar14) < 0x80) {
      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      uVar11 = (ulonglong)uVar18;
      uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
      if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar11]) goto LAB_144479af5;
    }
    if (uVar14 != uVar18) goto LAB_144479b32;
LAB_144479c4f:
    uVar7 = iVar16 + (uint)(iVar16 == 0);
    uVar6 = (int)local_68 - 1;
    if ((int)local_68 == 0) {
      uVar6 = 0;
    }
    if ((int)uVar6 <= (int)uVar7) {
      uVar7 = uVar6;
    }
    if ((int)uVar7 < 1) {
      uVar7 = 0;
    }
    iVar16 = uVar6 - uVar7;
    puVar9 = puVar9 + uVar7;
  }
  FUN_14006620a(&local_80,puVar9,iVar16);
  iVar16 = (int)uStack_78 + -1;
  if ((int)uStack_78 == 0) {
    iVar16 = 0;
  }
  iVar12 = 1;
  if (1 < iVar16) {
    iVar12 = iVar16;
  }
  uVar7 = iVar12 - 1;
  iVar12 = (int)uStack_78;
  if ((int)uVar7 < iVar16) {
    uVar6 = (uint)(0 < (int)(iVar16 - uVar7));
    iVar16 = (int)uStack_78 - (uVar7 + uVar6);
    if (iVar16 != 0) {
      memmove(local_80 + uVar7,local_80 + (ulonglong)uVar7 + 1,(longlong)iVar16 * 2);
    }
    iVar12 = (int)uStack_78 - uVar6;
  }
  puVar9 = local_80;
  uVar1 = uStack_78._4_4_;
  local_80 = (ushort *)0x0;
  uStack_78 = 0;
  if (local_70 == (ushort *)0x0) {
    local_70 = puVar9;
    local_68 = CONCAT44(uVar1,iVar12);
  }
  else {
    FUN_1400020a8();
    local_70 = puVar9;
    local_68 = CONCAT44(uVar1,iVar12);
    if (local_80 != (ushort *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144479d22:
  puVar9 = local_70;
  if ((int)local_68 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  lVar10 = FUN_14447b9b8(puVar9);
  if (lVar10 == 0) {
    iVar16 = (int)local_68;
    if ((int)local_68 < 2) {
LAB_144479da7:
      puVar9 = local_70;
      if (iVar16 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
    }
    else {
      puVar9 = local_70;
      if ((*local_70 - 0x41 < 0x15) && ((0x100021U >> (*local_70 - 0x41 & 0x1f) & 1) != 0)) {
        FUN_14006620a(&local_80,local_70 + 1,(int)local_68 + -2);
        if (local_70 != (ushort *)0x0) {
          FUN_1400020a8();
        }
        local_70 = local_80;
        iVar16 = (int)uStack_78;
        local_68 = uStack_78;
        goto LAB_144479da7;
      }
    }
    lVar10 = FUN_14447b9b8(puVar9);
    if (lVar10 != 0) goto LAB_144479df9;
    iVar16 = local_88 + -1;
    if (local_88 == 0) {
      iVar16 = 0;
    }
    FUN_1402980a2(&local_70,local_90,iVar16);
    lVar10 = FUN_149172ea7(&local_70,local_98);
    puVar3 = local_a0;
    if (lVar10 != 0) goto LAB_144479df9;
    *(undefined4 *)(local_a0 + 1) = 0;
    if (*(int *)((longlong)local_a0 + 0xc) < 0) {
      FUN_1446f8c06(local_a0,0);
    }
    if ((undefined2 *)*puVar3 != (undefined2 *)0x0) {
      *(undefined2 *)*puVar3 = 0;
    }
    lVar10 = 0;
  }
  else {
LAB_144479df9:
    FUN_1408ccf3c(&local_80,lVar10,iVar15 != 0);
    if (local_70 != (ushort *)0x0) {
      FUN_1400020a8();
    }
    local_70 = local_80;
    local_68 = uStack_78;
    puVar9 = local_80;
    if ((int)uStack_78 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    puVar5 = &DAT_149dfb77a;
    if (local_88 != 0) {
      puVar5 = local_90;
    }
    FUN_1448097c4(local_a0,puVar5,puVar9,1);
  }
  if (local_70 != (ushort *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (ushort *)0x0) {
    FUN_1400020a8();
  }
LAB_144479e82:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 144479fc8 FUN_144479fc8 body=987 status=ok
// SIG undefined FUN_144479fc8(void)

/* WARNING: Removing unreachable block (ram,0x00014447a1f0) */

undefined8 * FUN_144479fc8(undefined8 *param_1,longlong *param_2,char param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  int iVar11;
  undefined2 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  ulonglong local_a8;
  uint *local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined1 local_50;
  char local_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14001a7b2();
  local_58 = &DAT_14cc012d0;
  local_50 = 0;
  local_4f = param_3;
  if (param_3 != '\0') {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14cc01670);
    LOCK();
    iVar11 = DAT_14cc0167c + 1;
    UNLOCK();
    bVar19 = DAT_14cc0167c == 0;
    DAT_14cc0167c = iVar11;
    if (bVar19) {
      LOCK();
      *(undefined1 *)(local_58 + 0x75) = local_50;
      UNLOCK();
    }
  }
  FUN_14001a7b2();
  local_68 = 0;
  uStack_60 = 0;
  uVar3 = *(uint *)(param_2 + 5);
  local_b0 = param_1;
  if (uVar3 == 0) {
    uVar15 = 1;
    uVar17 = 0;
    iVar11 = 0;
    uVar2 = 0;
  }
  else {
    puVar4 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar4 = (uint *)(param_2 + 2);
    }
    uVar2 = *puVar4;
    if (uVar2 == 0) {
      iVar11 = uVar3 + 0x1e;
      if (-1 < (int)(uVar3 - 1)) {
        iVar11 = uVar3 - 1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar11 = 0;
      do {
        if (uVar15 == uVar17) goto LAB_14447a0ed;
        iVar11 = iVar11 + 0x20;
        uVar2 = puVar4[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar2 == 0);
    }
    else {
      uVar17 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar2 & uVar2);
    uVar1 = uVar15 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar2 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if ((int)uVar3 <= (int)uVar2) {
      uVar2 = uVar3;
    }
  }
  if (uVar2 == uVar3) {
LAB_14447a0ed:
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar8 = 0xffffffff;
    local_a8 = (ulonglong)uVar3;
    local_a0 = (uint *)(param_2 + 2);
    do {
      lVar10 = *param_2;
      uVar5 = (**(code **)(DAT_14cc012d0 + 0xa0))
                        (&DAT_14cc012d0,*(undefined4 *)(lVar10 + 8 + (longlong)(int)uVar2 * 0x14));
      FUN_1400021e4(uVar5,&local_88);
      puVar9 = &DAT_149dfb77a;
      if (local_80 != 0) {
        puVar9 = local_88;
      }
      FUN_1400021e4((longlong)(int)uVar2 * 0x14 + lVar10,&local_98);
      puVar12 = &DAT_149dfb77a;
      if (local_90 != 0) {
        puVar12 = local_98;
      }
      FUN_140002266(&local_78,L"%s:%s",puVar12,puVar9);
      lVar10 = (longlong)(int)uStack_60;
      uVar3 = (int)uStack_60 + 1;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar3);
      if (uStack_60._4_4_ < uVar3) {
        FUN_1447a1bd6(&local_68);
      }
      lVar10 = lVar10 * 0x10;
      *(undefined8 *)(local_68 + lVar10) = 0;
      *(undefined8 *)(local_68 + lVar10) = local_78;
      *(undefined4 *)(local_68 + 8 + lVar10) = (undefined4)local_70;
      *(undefined4 *)(local_68 + 0xc + lVar10) = local_70._4_4_;
      local_70 = 0;
      local_78 = 0;
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar10 = local_68;
      puVar18 = local_b0;
      uVar8 = uVar8 & ~(uint)uVar15;
      puVar4 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar4 = local_a0;
      }
      uVar3 = *(uint *)(param_2 + 5);
      iVar16 = (int)uVar17;
      lVar13 = (longlong)iVar16;
      uVar2 = puVar4[lVar13] & uVar8;
      if (uVar2 == 0) {
        iVar6 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar6 = uVar3 - 1;
        }
        iVar6 = iVar6 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar16) {
          iVar7 = iVar16;
        }
        if (iVar16 < iVar6) {
          lVar14 = 0;
          do {
            uVar2 = puVar4[lVar13 + lVar14 + 1];
            if (uVar2 != 0) {
              uVar17 = (ulonglong)(iVar16 + (int)lVar14 + 1);
              uVar8 = 0xffffffff;
              goto LAB_14447a28d;
            }
            iVar11 = iVar11 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar7 - lVar13 != lVar14);
          uVar8 = 0xffffffff;
          iVar16 = iVar7;
        }
        uVar17 = (ulonglong)(iVar16 + 1);
        uVar2 = uVar3;
      }
      else {
LAB_14447a28d:
        uVar15 = (ulonglong)(-uVar2 & uVar2);
        uVar1 = uVar15 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar2 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar2) {
          uVar2 = uVar3;
        }
      }
    } while (uVar2 != (uint)local_a8);
    lVar13 = (longlong)(int)uStack_60;
    *local_b0 = 0;
    local_b0[1] = 0;
    if (lVar13 != 0) {
      iVar11 = 1;
      lVar14 = 0;
      do {
        if ((char)iVar11 == '\0') {
          FUN_1400020e8(puVar18,&DAT_149e06196,1);
        }
        iVar16 = *(int *)(lVar10 + 8 + lVar14);
        iVar11 = 0;
        iVar6 = iVar16 + -1;
        if (iVar16 == 0) {
          iVar6 = iVar11;
        }
        FUN_1400020e8(puVar18,*(undefined8 *)(lVar10 + lVar14),iVar6);
        lVar14 = lVar14 + 0x10;
      } while (lVar13 * 0x10 != lVar14);
      uVar15 = uStack_60 & 0xffffffff;
      goto LAB_14447a345;
    }
  }
  uVar15 = 0;
  puVar18 = local_b0;
LAB_14447a345:
  FUN_1447a1747(local_68,uVar15);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1409be446(&local_58);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return puVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14447a3a4 FUN_14447a3a4 body=55 status=ok
// SIG undefined FUN_14447a3a4(void)

void FUN_14447a3a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01900 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01900 = FUN_14171c317(FUN_1466854da,uVar1,L"ERigVMUserWorkflowType");
  }
  return;
}



// FUNCTION 14447a3dc FUN_14447a3dc body=98 status=ok
// SIG undefined FUN_14447a3dc(void)

void FUN_14447a3dc(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x90) != 0) && (*(longlong **)(param_1 + 0x88) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x90) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x88);
      }
                    /* WARNING: Could not recover jumptable at 0x00014447a43b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,4,*(undefined8 *)(param_1 + 0x28),param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14447a43e FUN_14447a43e body=447 status=ok
// SIG undefined FUN_14447a43e(void)

void FUN_14447a43e(longlong param_1,int param_2)

{
  DWORD DVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  LPVOID pvVar5;
  bool bVar6;
  undefined1 auStack_58 [38];
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x90) != 0) && (*(longlong **)(param_1 + 0x88) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))(), cVar2 != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if (param_2 == 3) {
    DVar3 = DAT_14c75b110;
    if (DAT_14c75b110 == 0xffffffff) {
      DVar3 = TlsAlloc();
      DVar4 = 0xffffffff;
      LOCK();
      bVar6 = DAT_14c75b110 != 0xffffffff;
      DVar1 = DVar3;
      if (bVar6) {
        DVar4 = DAT_14c75b110;
        DVar1 = DAT_14c75b110;
      }
      DAT_14c75b110 = DVar1;
      UNLOCK();
      if (bVar6) {
        TlsFree(DVar3);
        DVar3 = DVar4;
      }
    }
    pvVar5 = TlsGetValue(DVar3);
    if (pvVar5 == (LPVOID)0x0) {
      pvVar5 = (LPVOID)FUN_14626bb4c(&local_31);
      FUN_140fddf04(pvVar5);
      TlsSetValue(DVar3,pvVar5);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if (param_2 == 1) {
    DVar3 = DAT_14c75b110;
    if (DAT_14c75b110 == 0xffffffff) {
      DVar3 = TlsAlloc();
      DVar4 = 0xffffffff;
      LOCK();
      bVar6 = DAT_14c75b110 != 0xffffffff;
      DVar1 = DVar3;
      if (bVar6) {
        DVar4 = DAT_14c75b110;
        DVar1 = DAT_14c75b110;
      }
      DAT_14c75b110 = DVar1;
      UNLOCK();
      if (bVar6) {
        TlsFree(DVar3);
        DVar3 = DVar4;
      }
    }
    pvVar5 = TlsGetValue(DVar3);
    if (pvVar5 == (LPVOID)0x0) {
      pvVar5 = (LPVOID)FUN_14626bb4c(&local_32);
      FUN_140fddf04(pvVar5);
      TlsSetValue(DVar3,pvVar5);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14447a63c FUN_14447a63c body=69 status=ok
// SIG undefined FUN_14447a63c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14447a63c(void)

{
  _DAT_14cc01968 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014447a67e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc01970,1);
  return;
}



// FUNCTION 14447a681 FUN_14447a681 body=55 status=ok
// SIG undefined FUN_14447a681(void)

void FUN_14447a681(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01a78 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01a78 = FUN_14171c317(FUN_146687154,uVar1,L"ERigUnitDebugPointMode");
  }
  return;
}



// FUNCTION 14447a6b8 FUN_14447a6b8 body=55 status=ok
// SIG undefined FUN_14447a6b8(void)

void FUN_14447a6b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01b78 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01b78 = FUN_14171c317(FUN_146688c44,uVar1,L"ERigUnitDebugTransformMode");
  }
  return;
}



// FUNCTION 14447a6ef FUN_14447a6ef body=55 status=ok
// SIG undefined FUN_14447a6ef(void)

void FUN_14447a6ef(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc01bd8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc01bd8 = FUN_14171c317(FUN_1466894ac,uVar1,L"ERigUnitVisualDebugPointMode");
  }
  return;
}



// FUNCTION 14447a748 FUN_14447a748 body=63 status=ok
// SIG undefined FUN_14447a748(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14447a748(void)

{
  _DAT_14cc02e10 = &PTR_LAB_14bb1a690;
  FUN_140f8ceac(&DAT_14cc03130);
  FUN_1401f96ee(&DAT_14cc02f00);
  FUN_140dc53ba(&DAT_14cc02e10);
  return;
}



// FUNCTION 14447a7b2 FUN_14447a7b2 body=593 status=ok
// SIG undefined FUN_14447a7b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14447a7b2(undefined8 param_1,undefined8 *param_2)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  ulonglong *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  param_2 = (undefined8 *)*param_2;
  pdVar2 = (double *)*param_2;
  pdVar3 = (double *)param_2[4];
  dVar7 = *pdVar2;
  dVar1 = pdVar2[1];
  dVar8 = *pdVar3;
  dVar12 = pdVar3[1];
  dVar10 = pdVar2[2];
  dVar5 = pdVar3[2];
  uVar16 = SUB84(dVar5,0);
  uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
  dVar9 = pdVar2[3];
  uVar18 = SUB84(dVar9,0);
  uVar19 = (undefined4)((ulonglong)dVar9 >> 0x20);
  dVar6 = pdVar3[3];
  uVar20 = SUB84(dVar6,0);
  uVar21 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar5 = dVar9 * dVar6 + dVar10 * dVar5 + dVar7 * dVar8 + dVar1 * dVar12;
  puVar4 = (ulonglong *)param_2[0xc];
  dVar6 = dVar5 * (double)(&DAT_149931160)[0.0 <= dVar5];
  dVar9 = 1.0 - (double)*(float *)param_2[8];
  dVar5 = (double)(&DAT_149931160)[0.0 <= dVar5] * (double)*(float *)param_2[8];
  if (dVar6 < 0.9999) {
    dVar7 = dVar6;
    if (1.0 <= dVar6) {
      dVar7 = 1.0;
    }
    dVar7 = acos((double)(-(ulonglong)(dVar6 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar6 < -1.0) & (ulonglong)dVar7));
    dVar8 = sin(dVar7);
    dVar9 = sin(dVar9 * dVar7);
    dVar9 = dVar9 * (1.0 / dVar8);
    dVar5 = sin(dVar5 * dVar7);
    dVar5 = dVar5 * (1.0 / dVar8);
    uVar18 = SUB84(pdVar2[3],0);
    uVar19 = (undefined4)((ulonglong)pdVar2[3] >> 0x20);
    uVar20 = SUB84(pdVar3[3],0);
    uVar21 = (undefined4)((ulonglong)pdVar3[3] >> 0x20);
    dVar10 = pdVar2[2];
    uVar16 = SUB84(pdVar3[2],0);
    uVar17 = (undefined4)((ulonglong)pdVar3[2] >> 0x20);
    dVar7 = *pdVar2;
    dVar1 = pdVar2[1];
    dVar8 = *pdVar3;
    dVar12 = pdVar3[1];
  }
  dVar6 = (double)CONCAT44(uVar19,uVar18) * dVar9 + (double)CONCAT44(uVar21,uVar20) * dVar5;
  dVar10 = dVar10 * dVar9 + (double)CONCAT44(uVar17,uVar16) * dVar5;
  dVar12 = dVar1 * dVar9 + dVar12 * dVar5;
  dVar7 = dVar7 * dVar9 + dVar8 * dVar5;
  dVar8 = dVar10 * dVar10 + dVar7 * dVar7;
  dVar5 = dVar6 * dVar6 + dVar12 * dVar12;
  auVar13._0_8_ = dVar8 + dVar5;
  auVar13._8_8_ = dVar8 + dVar5;
  auVar11._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar13._8_8_);
  auVar11._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar13._0_8_);
  auVar14 = sqrtpd(auVar13,auVar13);
  auVar14 = divpd(_DAT_149934d80,auVar14);
  auVar15._0_8_ = auVar14._0_8_ * dVar10;
  auVar15._8_8_ = auVar14._8_8_ * dVar6;
  auVar11 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar15,auVar11);
  *puVar4 = (ulonglong)(dVar7 * auVar14._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar13._0_8_)
  ;
  puVar4[1] = (ulonglong)(dVar12 * auVar14._8_8_) &
              -(ulonglong)(9.99999993922529e-09 <= auVar13._8_8_);
  *(undefined1 (*) [16])(puVar4 + 2) = auVar11;
  return;
}



// FUNCTION 14447aa03 FUN_14447aa03 body=55 status=ok
// SIG undefined FUN_14447aa03(void)

void FUN_14447aa03(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc036d0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc036d0 = FUN_14171c317(FUN_1466a6598,uVar1,L"ERBFKernelType");
  }
  return;
}



// FUNCTION 14447aa3a FUN_14447aa3a body=55 status=ok
// SIG undefined FUN_14447aa3a(void)

void FUN_14447aa3a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc036e8 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc036e8 = FUN_14171c317(FUN_1466a65c7,uVar1,L"ERBFQuatDistanceType");
  }
  return;
}



// FUNCTION 14447aa71 FUN_14447aa71 body=55 status=ok
// SIG undefined FUN_14447aa71(void)

void FUN_14447aa71(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc03700 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc03700 = FUN_14171c317(FUN_1466a65f6,uVar1,L"ERBFVectorDistanceType");
  }
  return;
}



// FUNCTION 14447aaca FUN_14447aaca body=81 status=ok
// SIG undefined FUN_14447aaca(void)

void FUN_14447aaca(longlong *param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14575417c(local_28);
  (**(code **)(*param_1 + 0x98))(param_1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14447ab22 FUN_14447ab22 body=77 status=ok
// SIG undefined FUN_14447ab22(void)

void FUN_14447ab22(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14575417c(local_28);
  FUN_144475f0a(param_1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14447abc4 FUN_14447abc4 body=56 status=ok
// SIG undefined FUN_14447abc4(void)

int FUN_14447abc4(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[3])) {
    if (*(char *)(param_1[2] + 0x18 + (ulonglong)param_2 * 0x20) == '\x01') {
      iVar1 = (**(code **)(*param_1 + 0xd8))
                        (param_1,*(undefined4 *)(param_1[2] + (ulonglong)param_2 * 0x20 + 0x10));
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}



// FUNCTION 14447acac FUN_14447acac body=2333 status=ok
// SIG undefined FUN_14447acac(void)

ulonglong FUN_14447acac(undefined *param_1,wchar_t **param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined *puVar9;
  longlong lVar10;
  uint *puVar11;
  undefined *puVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  undefined8 local_80;
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140056680(&local_78,&DAT_149e0635c);
  local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
  local_a8 = CONCAT44(local_a8._4_4_,1);
  cVar1 = FUN_1407cdbc6(param_2,&local_78,&local_58,&local_68);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (&local_58 != param_2 && cVar1 == '\0') {
    uVar3 = *(uint *)(param_2 + 1);
    pwVar5 = *param_2;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
    if (uVar3 == 0 && uStack_50._4_4_ == 0) {
      uStack_50 = (ulonglong)uVar3;
    }
    else {
      FUN_1446dd670(&local_58,uVar3);
      if (uVar3 != 0) {
        memcpy(local_58,pwVar5,(longlong)(int)uVar3 * 2);
      }
    }
  }
  pwVar5 = local_58;
  if ((int)uStack_50 == 0) {
    pwVar5 = L"";
  }
  iVar2 = _wtoi(pwVar5);
  uVar7 = ~(iVar2 * *(int *)(*(longlong *)(param_1 + 0x78) + 0x34));
  uVar3 = *(uint *)(param_3 + 1);
  lVar10 = (longlong)(int)uVar3;
  if (lVar10 < 1) {
    *(uint *)(param_3 + 1) = uVar3 + 1;
    if (*(uint *)((longlong)param_3 + 0xc) < uVar3 + 1) {
      FUN_1446f48e2(param_3,uVar3);
    }
    puVar11 = (uint *)(lVar10 * 4 + *param_3);
  }
  else {
    lVar4 = *param_3;
    if (*(int *)(lVar4 + -4 + lVar10 * 4) == 0) {
      puVar11 = (uint *)(lVar4 + lVar10 * 4 + -4);
    }
    else {
      *(uint *)(param_3 + 1) = uVar3 + 1;
      if (*(uint *)((longlong)param_3 + 0xc) <= uVar3) {
        FUN_1446f48e2(param_3,uVar3);
        lVar4 = *param_3;
      }
      puVar11 = (uint *)(lVar4 + lVar10 * 4);
    }
  }
  *puVar11 = uVar7;
  if ((int)uStack_60 < 2) {
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x70))
              (*(longlong **)(param_1 + 0x78),&local_78,0,0);
    puVar6 = local_78;
    if (local_70 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_80,puVar6,1);
    *(undefined8 *)((longlong)param_3 + 0x14) = local_80;
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *(undefined2 *)((longlong)param_3 + 0x34) =
         *(undefined2 *)(*(longlong *)(param_1 + 0x78) + 0x34);
    puVar9 = *(undefined **)(param_1 + 0x78);
    if (puVar9 != (undefined *)0x0) {
      puVar12 = *(undefined **)(puVar9 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_98 = (undefined *)FUN_140342cba();
          local_90 = FUN_1468c7f1e;
          local_a0 = 0;
          local_a8 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_90 = FUN_140b31576;
        local_98 = &DAT_14c951a38;
        local_a0 = 0;
        local_a8 = 0x208001;
        FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
        atexit(FUN_14280cbf7);
        _Init_thread_footer(&DAT_14c951ae0);
      }
      if (DAT_14c951a98 == 0) {
        bVar13 = puVar12 != (undefined *)0x0;
        if (puVar12 != &DAT_14c951a90 && bVar13) {
          do {
            puVar12 = *(undefined **)(puVar12 + 0x30);
            bVar13 = puVar12 != (undefined *)0x0;
            if (puVar12 == &DAT_14c951a90) break;
          } while (puVar12 != (undefined *)0x0);
        }
        if (bVar13) goto LAB_14447aff2;
      }
      else if ((*(ulonglong *)(puVar12 + 0x18) & DAT_14c951a98) != 0) {
LAB_14447aff2:
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_3,iVar2);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = 0xffffffff;
        param_1 = puVar9;
      }
    }
    lVar10 = *(longlong *)(param_1 + 0x78);
    if (lVar10 == 0) {
LAB_14447b0b6:
      *(undefined1 *)(param_3 + 2) = 0;
    }
    else {
      puVar9 = *(undefined **)(lVar10 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_98 = (undefined *)FUN_140342cba();
          local_90 = FUN_1468c7f1e;
          local_a0 = 0;
          local_a8 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_90 = FUN_1403a682c;
        local_98 = &DAT_14c951a38;
        local_a0 = 0;
        local_a8 = 0x108001;
        FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
        atexit(FUN_142818c9e);
        _Init_thread_footer(&DAT_14c952a58);
      }
      if (DAT_14c952a10 == 0) {
        bVar13 = puVar9 != (undefined *)0x0;
        if (puVar9 != &DAT_14c952a08 && bVar13) {
          do {
            puVar9 = *(undefined **)(puVar9 + 0x30);
            bVar13 = puVar9 != (undefined *)0x0;
            if (puVar9 == &DAT_14c952a08) break;
          } while (puVar9 != (undefined *)0x0);
        }
        if (!bVar13) goto LAB_14447b0b6;
      }
      else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c952a10) == 0) goto LAB_14447b0b6;
      lVar4 = *(longlong *)(lVar10 + 0x70);
      if (DAT_14c950c29 == '\x01') {
        if (lVar4 == 0) {
          lVar4 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar4 = *(longlong *)(lVar10 + 0x70);
        }
      }
      param_3[4] = lVar4;
      *(undefined1 *)(param_3 + 2) = 3;
    }
    uVar8 = CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
    goto LAB_14447b104;
  }
  lVar10 = *(longlong *)(param_1 + 0x78);
  uVar8 = CONCAT71((uint7)(uint3)(uVar7 >> 8),1);
  if (lVar10 == 0) goto LAB_14447b104;
  puVar9 = *(undefined **)(lVar10 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      local_98 = (undefined *)FUN_140342cba();
      local_90 = FUN_1468c7f1e;
      local_a0 = 0;
      local_a8 = 0x8001;
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    local_90 = FUN_1403a682c;
    local_98 = &DAT_14c951a38;
    local_a0 = 0;
    local_a8 = 0x108001;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  if (DAT_14c952a10 == 0) {
    bVar13 = puVar9 != (undefined *)0x0;
    if (puVar9 != &DAT_14c952a08 && bVar13) {
      do {
        puVar9 = *(undefined **)(puVar9 + 0x30);
        bVar13 = puVar9 != (undefined *)0x0;
        if (puVar9 == &DAT_14c952a08) break;
      } while (puVar9 != (undefined *)0x0);
    }
    if (bVar13) goto LAB_14447ae8a;
LAB_14447af69:
    lVar10 = *(longlong *)(param_1 + 0x78);
    if (lVar10 == 0) goto LAB_14447b104;
    puVar9 = *(undefined **)(lVar10 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_98 = (undefined *)FUN_140342cba();
        local_90 = FUN_1468c7f1e;
        local_a0 = 0;
        local_a8 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_90 = FUN_140b31576;
      local_98 = &DAT_14c951a38;
      local_a0 = 0;
      local_a8 = 0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    if (DAT_14c951a98 == 0) {
      bVar13 = puVar9 != (undefined *)0x0;
      if (puVar9 != &DAT_14c951a90 && bVar13) {
        do {
          puVar9 = *(undefined **)(puVar9 + 0x30);
          bVar13 = puVar9 != (undefined *)0x0;
          if (puVar9 == &DAT_14c951a90) break;
        } while (puVar9 != (undefined *)0x0);
      }
      if (!bVar13) goto LAB_14447b104;
    }
    else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c951a98) == 0) goto LAB_14447b104;
    uVar3 = FUN_14447acac(lVar10,&local_68,param_3);
  }
  else {
    if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c952a10) == 0) goto LAB_14447af69;
LAB_14447ae8a:
    uVar3 = FUN_14446d6e4(*(undefined8 *)(lVar10 + 0x70),&local_68,param_3);
  }
  uVar8 = (ulonglong)uVar3;
LAB_14447b104:
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14447b614 FUN_14447b614 body=360 status=ok
// SIG undefined FUN_14447b614(void)

void FUN_14447b614(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cc04100 <=
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110)) || (FUN_144b3d300(&DAT_14cc04100), DAT_14cc04100 != -1)) goto LAB_14447b64a;
  if (DAT_14cc018e0 == (longlong *)0x0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc018e0 = (longlong *)FUN_140002ddd(FUN_146685446,uVar1,L"RigVMUnknownType");
    if (DAT_14cc018e0 != (longlong *)0x0) goto LAB_14447b6b7;
    plVar3 = (longlong *)0x0;
LAB_14447b6c9:
    (**(code **)(*plVar3 + 0x378))(plVar3,&DAT_14cc040f0,0);
  }
  else {
LAB_14447b6b7:
    plVar3 = DAT_14cc018e0;
    lVar2 = FUN_1408cc5f4();
    if ((*(int *)(plVar3[2] + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) goto LAB_14447b6c9;
    (**(code **)(*plVar3 + 0x370))(plVar3,local_38);
    local_28 = (undefined2 *)0x0;
    uStack_20 = 0;
    FUN_1407c869a(local_38,&local_28,0);
    puVar4 = local_28;
    if ((int)uStack_20 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(&DAT_14cc040f0,L"FUserDefinedStruct_%s",puVar4);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  atexit((_func_5014 *)&LAB_14447b77d);
  _Init_thread_footer(&DAT_14cc04100);
LAB_14447b64a:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14447b7a0 FUN_14447b7a0 body=294 status=ok
// SIG undefined FUN_14447b7a0(void)

void FUN_14447b7a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_14447b869;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_14447b818:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_14447b818;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_14447b869;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14447b869:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14447b8f2 FUN_14447b8f2 body=49 status=ok
// SIG undefined FUN_14447b8f2(void)

void FUN_14447b8f2(void)

{
  FUN_1447a1747(DAT_14cc04138,DAT_14cc04140);
  if (DAT_14cc04138 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14447b923 FUN_14447b923 body=49 status=ok
// SIG undefined FUN_14447b923(void)

void FUN_14447b923(void)

{
  FUN_1447a1747(DAT_14cc04150,DAT_14cc04158);
  if (DAT_14cc04150 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14447b954 FUN_14447b954 body=49 status=ok
// SIG undefined FUN_14447b954(void)

void FUN_14447b954(void)

{
  FUN_1447a1747(DAT_14cc04168,DAT_14cc04170);
  if (DAT_14cc04168 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14447b9b8 FUN_14447b9b8 body=780 status=ok
// SIG undefined FUN_14447b9b8(void)

longlong * FUN_14447b9b8(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined2 *puVar6;
  short *psVar7;
  int iVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined2 *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88 [2];
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  short *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = FUN_1400163b0();
  local_b8 = 0;
  plVar4 = (longlong *)FUN_140277cc4(uVar3,param_1,4,0);
  if (plVar4 != (longlong *)0x0) goto LAB_14447bb38;
  FUN_140056680(&local_50,param_1);
  if ((local_48 < 2) || (*local_50 != 0x45)) {
LAB_14447bb79:
    local_78 = 0;
    uStack_70 = 0;
    plVar4 = (longlong *)0x0;
    local_68 = 0;
    iVar2 = local_48 + -1;
    if (local_48 == 0) {
      iVar2 = 0;
    }
    uStack_90 = CONCAT44(uStack_90._4_4_,iVar2);
    FUN_1448405cc(&local_98,&local_78,&uStack_70);
    local_88[0] = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_b8 = CONCAT44(local_b8._4_4_,1);
    cVar1 = FUN_14689995c(0xe,&local_78,&local_98,0);
    if (cVar1 != '\0') {
      FUN_1400021e4(&local_98,&local_60);
      if (local_88[0] == 0) {
LAB_14447bc70:
        puVar6 = local_60;
        if (local_58 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        uVar3 = FUN_1400163b0();
        local_b8 = 0;
        plVar4 = (longlong *)FUN_140277cc4(uVar3,puVar6,4,0);
      }
      else {
        FUN_1400021e4(local_88,&local_a8);
        puVar6 = local_a8;
        if (local_a0 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        lVar5 = FUN_140277851(0,puVar6);
        if (local_a8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (lVar5 == 0) goto LAB_14447bc70;
        puVar6 = local_60;
        if (local_58 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        uVar3 = FUN_1400163b0();
        plVar4 = (longlong *)FUN_140277b32(uVar3,lVar5,puVar6,0);
        if (plVar4 == (longlong *)0x0) goto LAB_14447bc70;
      }
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    plVar4 = &local_78;
    local_78 = 0;
    uStack_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    FUN_140056680(&local_60,&DAT_149e5e24e);
    local_b0 = 0;
    local_b8 = CONCAT44(local_b8._4_4_,1);
    cVar1 = FUN_1407cdbc6(&local_50,&local_60,plVar4,&local_98);
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (cVar1 == '\0') {
LAB_14447bb00:
      iVar8 = 1;
    }
    else {
      iVar8 = 0;
      iVar2 = (int)uStack_70 + -1;
      if ((int)uStack_70 == 0) {
        iVar2 = iVar8;
      }
      FUN_1402980a2(&local_50,local_78,iVar2);
      psVar7 = local_50;
      if (local_48 == 0) {
        psVar7 = &DAT_149dfb77a;
      }
      uVar3 = FUN_1400163b0();
      local_b8 = 0;
      plVar4 = (longlong *)FUN_140277cc4(uVar3,psVar7,4,0);
      if (plVar4 == (longlong *)0x0) goto LAB_14447bb00;
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if ((char)iVar8 != '\0') goto LAB_14447bb79;
  }
  if (local_50 != (short *)0x0) {
    FUN_1400020a8();
  }
LAB_14447bb38:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 14447d018 FUN_14447d018 body=1316 status=ok
// SIG undefined FUN_14447d018(void)

longlong FUN_14447d018(longlong *param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  void *_Src;
  DWORD DVar4;
  PSRWLOCK pRVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  code *local_98;
  longlong lStack_90;
  longlong local_88;
  code *local_78;
  longlong lStack_70;
  longlong local_68;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  undefined8 uStack_40;
  PSRWLOCK local_38;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (1 < (int)param_1[1]) {
    local_98 = (code *)0x0;
    FUN_1400021e4(&local_98,&local_78);
    iVar8 = (int)param_1[1];
    if (iVar8 == (int)lStack_70) {
      bVar14 = true;
      if (1 < iVar8) {
        lVar12 = 0;
        while( true ) {
          uVar2 = *(ushort *)(*param_1 + lVar12);
          uVar7 = (uint)uVar2;
          uVar3 = *(ushort *)(local_78 + lVar12);
          uVar13 = (uint)uVar3;
          if (uVar2 != uVar3) {
            if ((uVar3 | uVar2) < 0x80) {
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14447d099;
            }
            iVar8 = uVar7 - uVar13;
            goto LAB_14447d0d6;
          }
          if (uVar2 == 0) break;
LAB_14447d099:
          lVar12 = lVar12 + 2;
        }
        iVar8 = 0;
LAB_14447d0d6:
        bVar14 = iVar8 == 0;
      }
    }
    else {
      bVar14 = (int)lStack_70 + iVar8 == 1;
    }
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar14) {
      local_48 = (undefined2 *)0x0;
      uStack_40 = 0;
      local_58 = (undefined2 *)0x0;
      local_50 = (int)param_1[1];
      lVar12 = (longlong)local_50;
      _Src = (void *)*param_1;
      if (lVar12 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar12 * 2);
      }
      FUN_140056680(&local_78,&DAT_149e0635c);
      local_e0 = (PSRWLOCK *)((ulonglong)local_e0._4_4_ << 0x20);
      local_e8 = CONCAT44(local_e8._4_4_,1);
      cVar6 = FUN_1407cdbc6(param_1,&local_78,&local_48,&local_58);
      if (local_78 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (cVar6 == '\0') {
        uVar10 = 0;
      }
      else {
        puVar11 = local_48;
        if ((int)uStack_40 == 0) {
          puVar11 = &DAT_149dfb77a;
        }
        uVar10 = FUN_140277851(0,puVar11);
      }
      puVar11 = local_58;
      if (local_50 == 0) {
        puVar11 = &DAT_149dfb77a;
      }
      if (DAT_14c927740 == 0) {
        local_78 = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_14081d0ea;
        local_b8 = &LAB_146856450;
        local_c0 = FUN_1427b121c;
        local_c8 = L"Engine";
        local_d0 = 0;
        local_d8 = 0x10000021;
        local_e0 = (PSRWLOCK *)CONCAT44(local_e0._4_4_,8);
        local_e8 = CONCAT44(local_e8._4_4_,0x28);
        local_b0 = &local_78;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar12 = FUN_140277b32(DAT_14c927740,uVar10,puVar11,0);
      if (lVar12 == 0) {
        if ((int)param_1[1] == 0) {
          puVar11 = &DAT_149dfb77a;
        }
        else {
          puVar11 = (undefined2 *)*param_1;
        }
        if (DAT_14c927740 == 0) {
          local_78 = FUN_1449e2820;
          local_a0 = FUN_14081d0ea;
          local_a8 = FUN_14081d0ea;
          local_b8 = &LAB_146856450;
          local_c0 = FUN_1427b121c;
          local_c8 = L"Engine";
          local_d0 = 0;
          local_d8 = 0x10000021;
          local_e0 = (PSRWLOCK *)CONCAT44(local_e0._4_4_,8);
          local_e8 = CONCAT44(local_e8._4_4_,0x28);
          local_b0 = &local_78;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        local_e8 = 0;
        lVar12 = FUN_140277cc4(DAT_14c927740,puVar11,0xc,0);
        if (lVar12 == 0) {
          local_78 = (code *)0x0;
          lStack_70 = 0;
          local_68 = 0;
          local_98 = (code *)*param_1;
          iVar8 = (int)param_1[1] + -1;
          if ((int)param_1[1] == 0) {
            iVar8 = 0;
          }
          lStack_90 = CONCAT44(lStack_90._4_4_,iVar8);
          FUN_1448405cc(&local_98,&local_78,&lStack_70);
          DVar4 = DAT_14c949610;
          local_38 = (PSRWLOCK)&DAT_14c949608;
          local_30 = '\x01';
          if ((DAT_14c949610 == 0) || (DVar9 = GetCurrentThreadId(), DVar4 != DVar9)) {
            AcquireSRWLockShared((PSRWLOCK)&DAT_14c949608);
          }
          else {
            DAT_14c949614 = DAT_14c949614 + 1;
          }
          local_98 = (code *)0x0;
          lStack_90 = 0;
          local_88 = 0;
          local_e0 = &local_38;
          local_e8 = local_e8 & 0xffffffff00000000;
          FUN_140159c68(4,&local_78,&local_98,0);
          pRVar5 = local_38;
          if (local_30 == '\x01') {
            if (*(int *)((longlong)&local_38[1].Ptr + 4) < 1) {
              ReleaseSRWLockShared(local_38);
            }
            else {
              GetCurrentThreadId();
              piVar1 = (int *)((longlong)&pRVar5[1].Ptr + 4);
              *piVar1 = *piVar1 + -1;
            }
          }
          if (((local_78 == local_98) && (lStack_70 == lStack_90)) && (local_68 == local_88)) {
            lVar12 = 0;
          }
          else {
            FUN_14103ad02(&local_38,local_98,lStack_90,local_88);
            lVar12 = FUN_14447d018(&local_38);
            if (local_38 != (PSRWLOCK)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14447d0eb;
    }
  }
  lVar12 = 0;
LAB_14447d0eb:
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar12;
}



// FUNCTION 14447d53e FUN_14447d53e body=137 status=ok
// SIG undefined FUN_14447d53e(void)

void FUN_14447d53e(void)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  undefined2 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_14001a7b2();
  local_18 = &DAT_14cc012d0;
  local_10 = 0x101;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cc01670);
  LOCK();
  iVar1 = DAT_14cc0167c + 1;
  UNLOCK();
  bVar2 = DAT_14cc0167c == 0;
  DAT_14cc0167c = iVar1;
  if (bVar2) {
    LOCK();
    *(undefined1 *)(local_18 + 0x75) = (undefined1)local_10;
    UNLOCK();
  }
  FUN_1408cbd9a(&DAT_14cc012d0);
  FUN_1409be446(&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14447d5c8 FUN_14447d5c8 body=531 status=ok
// SIG undefined FUN_14447d5c8(void)

void FUN_14447d5c8(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = (int)param_1[9];
    iVar13 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar13 = iVar2;
    }
    if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar13 >> 2) {
      iVar2 = (int)param_1[5];
      if (iVar2 == 0) {
        uVar12 = 1;
        iVar9 = 0;
        uVar10 = 0;
        iVar13 = 0;
      }
      else {
        puVar11 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 2);
        }
        uVar8 = *puVar11;
        if (uVar8 == 0) {
          iVar13 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar13 = iVar2 + -1;
          }
          uVar10 = 0;
          uVar12 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar12 = uVar10;
          }
          iVar9 = 0;
          do {
            if (uVar12 == uVar10) goto LAB_14447d6c0;
            iVar9 = iVar9 + 0x20;
            uVar8 = puVar11[uVar10 + 1];
            uVar10 = uVar10 + 1;
          } while (uVar8 == 0);
        }
        else {
          iVar9 = 0;
          uVar10 = 0;
        }
        uVar12 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar12 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar13 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar13) {
          iVar13 = iVar2;
        }
      }
      if (iVar13 != iVar2) {
        uVar8 = 0xffffffff;
        do {
          *(undefined4 *)
           ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0x1c + (longlong)iVar13 * 0x20) * 4) =
               0xffffffff;
          uVar8 = ~(uint)uVar12 & uVar8;
          puVar11 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar11 = (uint *)(param_1 + 2);
          }
          iVar3 = (int)param_1[5];
          iVar13 = (int)uVar10;
          lVar15 = (longlong)iVar13;
          uVar7 = puVar11[lVar15] & uVar8;
          if (uVar7 == 0) {
            iVar5 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar5 = iVar3 + -1;
            }
            iVar5 = iVar5 >> 5;
            iVar9 = iVar9 + 0x20;
            iVar6 = iVar5;
            if (iVar5 < iVar13) {
              iVar6 = iVar13;
            }
            if (iVar13 < iVar5) {
              lVar14 = 0;
              do {
                uVar7 = puVar11[lVar15 + lVar14 + 1];
                if (uVar7 != 0) {
                  uVar10 = (ulonglong)(iVar13 + (int)lVar14 + 1);
                  uVar8 = 0xffffffff;
                  goto LAB_14447d789;
                }
                iVar9 = iVar9 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar6 - lVar15 != lVar14);
              uVar8 = 0xffffffff;
              iVar13 = iVar6;
            }
            uVar10 = (ulonglong)(iVar13 + 1);
            iVar13 = iVar3;
          }
          else {
LAB_14447d789:
            uVar12 = (ulonglong)(-uVar7 & uVar7);
            uVar1 = uVar12 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar13 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar13) {
              iVar13 = iVar3;
            }
          }
        } while (iVar13 != iVar2);
      }
    }
    else if (0 < iVar2) {
      lVar15 = 0;
      do {
        *(undefined4 *)((longlong)plVar4 + lVar15 * 4) = 0xffffffff;
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)param_1[9]);
    }
LAB_14447d6c0:
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_1446f4a44(param_1,0);
    }
    param_1[6] = 0xffffffff;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 14447d7dc FUN_14447d7dc body=475 status=ok
// SIG undefined FUN_14447d7dc(void)

void FUN_14447d7dc(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar2 = (int)param_1[9];
  iVar8 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar8 = iVar2;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar8 >> 2) {
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      uVar13 = 1;
      iVar10 = 0;
      uVar11 = 0;
      iVar8 = 0;
    }
    else {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        uVar11 = 0;
        uVar13 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar13 = uVar11;
        }
        iVar10 = 0;
        do {
          if (uVar13 == uVar11) {
            return;
          }
          iVar10 = iVar10 + 0x20;
          uVar9 = puVar12[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar9 == 0);
      }
      else {
        iVar10 = 0;
        uVar11 = 0;
      }
      uVar13 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar8) {
        iVar8 = iVar2;
      }
    }
    if (iVar8 != iVar2) {
      uVar9 = 0xffffffff;
      do {
        *(undefined4 *)
         ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0x2c + (longlong)iVar8 * 0x30) * 4) =
             0xffffffff;
        uVar9 = ~(uint)uVar13 & uVar9;
        puVar12 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 2);
        }
        iVar3 = (int)param_1[5];
        iVar8 = (int)uVar11;
        lVar14 = (longlong)iVar8;
        uVar5 = puVar12[lVar14] & uVar9;
        if (uVar5 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar8) {
            iVar7 = iVar8;
          }
          if (iVar8 < iVar6) {
            lVar15 = 0;
            do {
              uVar5 = puVar12[lVar14 + lVar15 + 1];
              if (uVar5 != 0) {
                uVar11 = (ulonglong)(iVar8 + (int)lVar15 + 1);
                uVar9 = 0xffffffff;
                goto LAB_14447d968;
              }
              iVar10 = iVar10 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar7 - lVar14 != lVar15);
            uVar9 = 0xffffffff;
            lVar14 = (longlong)iVar7;
          }
          uVar11 = lVar14 + 1U & 0xffffffff;
          iVar8 = iVar3;
        }
        else {
LAB_14447d968:
          uVar13 = (ulonglong)(-uVar5 & uVar5);
          uVar1 = uVar13 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar2);
    }
  }
  else if (0 < iVar2) {
    lVar14 = 0;
    do {
      *(undefined4 *)((longlong)plVar4 + lVar14 * 4) = 0xffffffff;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)param_1[9]);
  }
  return;
}



// FUNCTION 14447d9b8 FUN_14447d9b8 body=402 status=ok
// SIG undefined FUN_14447d9b8(void)

void FUN_14447d9b8(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar9 = 0;
    uVar12 = 1;
    iVar10 = 0;
    iVar3 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 2);
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar9 = 0;
      uVar12 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar12 = uVar9;
      }
      iVar10 = 0;
      do {
        if (uVar12 == uVar9) goto LAB_14447db0d;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar7[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar3 * 0x30) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)uVar9;
      lVar11 = (longlong)iVar3;
      uVar4 = puVar7[lVar11] & uVar13;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar5 <= iVar3) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar4 = puVar7[lVar11 + lVar8 + 1];
          if (uVar4 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar6 - lVar11 == lVar8) goto LAB_14447db0d;
        }
        uVar9 = (ulonglong)(iVar3 + (int)lVar8 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar2);
  }
LAB_14447db0d:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 14447db4a FUN_14447db4a body=29 status=ok
// SIG undefined FUN_14447db4a(void)

undefined8 FUN_14447db4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14447db7c FUN_14447db7c body=93 status=ok
// SIG undefined FUN_14447db7c(void)

void FUN_14447db7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb2b8f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14447dbda FUN_14447dbda body=93 status=ok
// SIG undefined FUN_14447dbda(void)

void FUN_14447dbda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bb2b8f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14447dc38 FUN_14447dc38 body=126 status=ok
// SIG undefined FUN_14447dc38(void)

void FUN_14447dc38(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bb2b8f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014447dca7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14447dcc0 FUN_14447dcc0 body=20 status=ok
// SIG undefined FUN_14447dcc0(void)

undefined1 FUN_14447dcc0(longlong param_1)

{
  FUN_14447dcd4(param_1 + 0x18);
  return 1;
}



// FUNCTION 14447dcd4 FUN_14447dcd4 body=319 status=ok
// SIG undefined FUN_14447dcd4(void)

void FUN_14447dcd4(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)*param_1;
  (**(code **)(*plVar1 + 0x78))(plVar1);
  FUN_1446f470e(&local_20,L"AssetRegistry",1);
  plVar2 = (longlong *)FUN_1447c1074(local_20);
  if ((plVar2 != (longlong *)0x0) && (DAT_14c9485b8 != 0)) {
    plVar3 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2);
    uVar4 = (**(code **)(*plVar3 + 0x338))(plVar3);
    FUN_14126849c(uVar4,plVar1);
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2);
    uVar4 = (**(code **)(*plVar2 + 0x348))(plVar2);
    FUN_14126849c(uVar4,plVar1);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c926f30) {
    FUN_144b3d300(&DAT_14c926f30);
    if (DAT_14c926f30 == -1) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
  }
  uVar4 = (**(code **)(DAT_14c926ca8 + 0x130))(&DAT_14c926ca8);
  FUN_140457ffc(uVar4,plVar1);
  FUN_140457ffc(&DAT_14caccb58,plVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14447de14 FUN_14447de14 body=892 status=ok
// SIG undefined FUN_14447de14(void)

void FUN_14447de14(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar4 = *param_2;
    lVar2 = param_2[1];
    uVar7 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar13 = (uint)lVar2 & 0xffff;
    uVar11 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar17 = (uint)lVar4 & 0xffff;
    uVar11 = ((uint)lVar4 << 0x10 | uVar17) + (int)((ulonglong)lVar4 >> 0x20) +
             (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar17 >> 4);
    uVar11 = (uVar11 >> 2) + 0x9e3779b9 +
             ((uint)lVar2 << 0x10 | uVar13) + (int)((ulonglong)lVar2 >> 0x20) +
             (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar13 >> 4) + uVar11 * 0x40 ^ uVar11;
    uVar13 = uVar11 >> 0xd ^ -uVar11;
    uVar7 = uVar13 << 8 ^ (-0x61c88647 - uVar11) - uVar13;
    uVar11 = uVar7 >> 0xd ^ (uVar11 - uVar13) - uVar7;
    uVar13 = uVar11 >> 0xc ^ (uVar13 - uVar7) - uVar11;
    uVar7 = uVar13 << 0x10 ^ (uVar7 - uVar11) - uVar13;
    uVar11 = uVar7 >> 5 ^ (uVar11 - uVar13) - uVar7;
    uVar13 = uVar11 >> 3 ^ (uVar13 - uVar7) - uVar11;
    uVar17 = uVar13 << 10 ^ (uVar7 - uVar11) - uVar13;
    iVar3 = (int)param_2[3];
    uVar18 = 0;
    uVar7 = iVar3 - 1;
    if (iVar3 == 0) {
      uVar7 = uVar18;
    }
    if (0 < (int)uVar7) {
      if (iVar3 == 0) {
        puVar15 = &DAT_149dfb77a;
      }
      else {
        puVar15 = (undefined2 *)param_2[2];
      }
      lVar21 = 0;
      uVar18 = 0;
      do {
        uVar8 = ((uint)(ushort)puVar15[lVar21] +
                (uint)(0x19 < (ushort)puVar15[lVar21] - 0x61) * 0x20) - 0x20;
        uVar18 = uVar18 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar18 ^ uVar8) & 0xff) * 4);
        uVar18 = uVar18 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar18 & 0xff ^ uVar8 >> 8 & 0xff) * 4);
        lVar21 = lVar21 + 1;
      } while (uVar7 != (uint)lVar21);
    }
    uVar7 = uVar18 >> 0xd ^ (uVar17 >> 0xf ^ uVar11 - (uVar13 + uVar17)) - uVar18;
    uVar13 = uVar7 << 8 ^ (-0x61c88647 - uVar18) - uVar7;
    uVar11 = uVar13 >> 0xd ^ (uVar18 - uVar7) - uVar13;
    uVar17 = uVar11 >> 0xc ^ (uVar7 - uVar13) - uVar11;
    uVar7 = uVar17 << 0x10 ^ (uVar13 - uVar11) - uVar17;
    uVar13 = uVar7 >> 5 ^ (uVar11 - uVar17) - uVar7;
    uVar11 = uVar13 >> 3 ^ (uVar17 - uVar7) - uVar13;
    uVar7 = uVar11 << 10 ^ (uVar7 - uVar13) - uVar11;
    plVar16 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar16 +
                     ((longlong)(int)(uVar7 >> 0xf ^ uVar13 - (uVar11 + uVar7)) &
                     (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar14 != -1) {
      lVar21 = *param_1;
LAB_14447e08e:
      lVar10 = (longlong)iVar14 * 0x30;
      lVar1 = lVar21 + lVar10;
      if ((*(longlong *)(lVar21 + lVar10) == lVar4) && (*(longlong *)(lVar1 + 8) == lVar2)) {
        if (*(int *)(lVar1 + 0x18) == iVar3) {
          if (1 < iVar3) {
            lVar20 = 0;
            do {
              uVar6 = *(ushort *)(*(longlong *)(lVar1 + 0x10) + lVar20);
              uVar9 = (ulonglong)uVar6;
              uVar12 = *(ushort *)(param_2[2] + lVar20);
              if (uVar6 == uVar12) {
                if (uVar6 == 0) break;
              }
              else {
                if (0x7f < (uVar12 | uVar6)) goto LAB_14447e109;
                uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                uVar19 = (ulonglong)uVar12;
                uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
                if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar19]) goto LAB_14447e109;
              }
              lVar20 = lVar20 + 2;
            } while( true );
          }
          goto LAB_14447e119;
        }
        if (*(int *)(lVar1 + 0x18) + iVar3 == 1) goto LAB_14447e119;
      }
      goto LAB_14447e0a3;
    }
  }
  return;
LAB_14447e109:
  if (uVar6 == uVar12) {
LAB_14447e119:
    iVar3 = *(int *)((longlong)plVar16 + (longlong)*(int *)(lVar1 + 0x2c) * 4);
    if (iVar3 == iVar14) {
      puVar5 = (undefined4 *)((longlong)plVar16 + (longlong)*(int *)(lVar1 + 0x2c) * 4);
    }
    else {
      do {
        lVar4 = (longlong)iVar3;
        iVar3 = *(int *)(lVar21 + 0x28 + lVar4 * 0x30);
      } while (iVar3 != iVar14);
      puVar5 = (undefined4 *)(lVar21 + lVar4 * 0x30 + 0x28);
    }
    *puVar5 = *(undefined4 *)(lVar1 + 0x28);
    if (*(longlong *)(*param_1 + 0x10 + lVar10) != 0) {
      FUN_1400020a8();
    }
    FUN_1468f212c(param_1,iVar14,1);
    return;
  }
LAB_14447e0a3:
  iVar14 = *(int *)(lVar1 + 0x28);
  if (iVar14 == -1) {
    return;
  }
  goto LAB_14447e08e;
}



// FUNCTION 14447e190 FUN_14447e190 body=832 status=ok
// SIG undefined FUN_14447e190(void)

undefined4 * FUN_14447e190(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1468f1fa4(param_1,local_50);
  puVar1 = (undefined4 *)*param_3;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *(undefined4 *)local_48 = *puVar1;
  *(undefined4 *)((longlong)local_48 + 4) = uVar4;
  *(undefined4 *)(local_48 + 1) = uVar5;
  *(undefined4 *)((longlong)local_48 + 0xc) = uVar6;
  local_48[2] = *(undefined8 *)(puVar1 + 4);
  uVar8 = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined4 *)(local_48 + 3) = puVar1[6];
  *(undefined4 *)((longlong)local_48 + 0x1c) = puVar1[7];
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined4 *)(local_48 + 4) = 0;
  *(undefined4 *)(local_48 + 5) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = *local_48;
  uVar3 = local_48[1];
  uVar9 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar16 = (uint)uVar3 & 0xffff;
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar14 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar14) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar14 >> 4);
  uVar10 = (uVar10 >> 2) + 0x9e3779b9 +
           ((uint)uVar3 << 0x10 | uVar16) + (int)((ulonglong)uVar3 >> 0x20) +
           (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar16 >> 4) + uVar10 * 0x40 ^ uVar10;
  uVar14 = uVar10 >> 0xd ^ -uVar10;
  uVar9 = uVar14 << 8 ^ (-0x61c88647 - uVar10) - uVar14;
  uVar10 = uVar9 >> 0xd ^ (uVar10 - uVar14) - uVar9;
  uVar14 = uVar10 >> 0xc ^ (uVar14 - uVar9) - uVar10;
  uVar16 = uVar14 << 0x10 ^ (uVar9 - uVar10) - uVar14;
  uVar9 = uVar16 >> 5 ^ (uVar10 - uVar14) - uVar16;
  uVar14 = uVar9 >> 3 ^ (uVar14 - uVar16) - uVar9;
  uVar10 = uVar14 << 10 ^ (uVar16 - uVar9) - uVar14;
  iVar11 = *(int *)(local_48 + 3);
  iVar13 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar13 = 0;
  }
  if (0 < iVar13) {
    if (iVar11 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)local_48[2];
    }
    lVar15 = 0;
    uVar8 = 0;
    do {
      uVar16 = ((uint)(ushort)puVar12[lVar15] + (uint)(0x19 < (ushort)puVar12[lVar15] - 0x61) * 0x20
               ) - 0x20;
      uVar17 = (uint)(uVar8 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar16) & 0xff) * 4);
      uVar8 = (ulonglong)
              (uVar17 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar17 & 0xff ^ uVar16 >> 8 & 0xff) * 4));
      lVar15 = lVar15 + 1;
    } while (iVar13 != (int)lVar15);
  }
  iVar11 = (int)uVar8;
  uVar9 = (uint)(uVar8 >> 0xd) ^ (uVar10 >> 0xf ^ uVar9 - (uVar14 + uVar10)) - iVar11;
  uVar10 = uVar9 << 8 ^ (-0x61c88647 - iVar11) - uVar9;
  uVar14 = uVar10 >> 0xd ^ (iVar11 - uVar9) - uVar10;
  uVar9 = uVar14 >> 0xc ^ (uVar9 - uVar10) - uVar14;
  uVar10 = uVar9 << 0x10 ^ (uVar10 - uVar14) - uVar9;
  uVar14 = uVar10 >> 5 ^ (uVar14 - uVar9) - uVar10;
  uVar16 = uVar14 >> 3 ^ (uVar9 - uVar10) - uVar14;
  uVar9 = uVar16 << 10 ^ (uVar10 - uVar14) - uVar16;
  uVar9 = uVar9 >> 0xf ^ uVar14 - (uVar16 + uVar9);
  local_68 = 0;
  cVar7 = FUN_1468f2092(param_1,uVar9,local_48,&local_54);
  if (cVar7 == '\0') {
    uVar10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar10) {
      uVar8 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar15 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar15 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_48 + 0x2c) = uVar9;
      lVar15 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar15 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 5) =
           *(undefined4 *)
            (lVar15 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar15 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar15 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar15 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_1468f21c2(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14447e4d2 FUN_14447e4d2 body=114 status=ok
// SIG undefined FUN_14447e4d2(void)

void FUN_14447e4d2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14447e544 FUN_14447e544 body=725 status=ok
// SIG undefined FUN_14447e544(void)

void FUN_14447e544(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  
  plVar3 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar3,0,0,4);
  }
  uVar13 = *(uint *)(param_1 + 9);
  if (uVar13 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar13 == 1) {
    if (*plVar3 != 0) {
      FUN_1446efa72(plVar3,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar3,0,uVar13,4);
    if ((int)uVar13 < 1) goto LAB_14447e5c1;
  }
  uVar2 = 0;
  do {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = plVar1;
    }
    *(undefined4 *)((longlong)plVar3 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar13 != uVar2);
LAB_14447e5c1:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar11 = 1;
    iVar6 = 0;
    iVar16 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar13 = *puVar12;
    if (uVar13 == 0) {
      iVar6 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar6 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar11 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar11 = uVar4;
      }
      iVar6 = 0;
      do {
        if (uVar11 == uVar4) {
          return;
        }
        iVar6 = iVar6 + 0x20;
        uVar13 = puVar12[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar4 = 0;
      iVar6 = 0;
    }
    uVar11 = (ulonglong)(-uVar13 & uVar13);
    uVar9 = uVar11 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar16 = (iVar6 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar13 = 0xffffffff;
    do {
      lVar10 = *param_1;
      lVar8 = (longlong)iVar16;
      lVar5 = (longlong)*(int *)(lVar10 + 8 + lVar8 * 0x18);
      uVar2 = 0;
      if (lVar5 != 0) {
        lVar17 = 0;
        uVar2 = 0;
        do {
          uVar2 = uVar2 ^ (uVar2 >> 2) + uVar2 * 0x40 +
                          *(int *)(*(longlong *)(lVar10 + lVar8 * 0x18) + lVar17) + 0x9e3779b9;
          lVar17 = lVar17 + 4;
        } while (lVar5 * 4 != lVar17);
      }
      lVar10 = lVar10 + lVar8 * 0x18;
      uVar9 = (longlong)(int)uVar2 & (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar9;
      *(int *)(lVar10 + 0x14) = iVar7;
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = plVar1;
      }
      *(undefined4 *)(lVar10 + 0x10) =
           *(undefined4 *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = plVar1;
      }
      *(int *)((longlong)plVar3 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar13 = uVar13 & ~(uint)uVar11;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar10 = (longlong)iVar16;
      uVar2 = puVar12[lVar10] & uVar13;
      if (uVar2 == 0) {
        iVar14 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar14 = iVar7 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar15 = iVar14;
        if (iVar14 < iVar16) {
          iVar15 = iVar16;
        }
        if (iVar14 <= iVar16) {
          return;
        }
        lVar5 = 0;
        while( true ) {
          iVar6 = iVar6 + 0x20;
          uVar2 = puVar12[lVar10 + lVar5 + 1];
          if (uVar2 != 0) break;
          lVar5 = lVar5 + 1;
          if (iVar15 - lVar10 == lVar5) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar5 + 1);
        uVar13 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar9 = uVar11 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar16 = (iVar6 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 14447e81a FUN_14447e81a body=144 status=ok
// SIG undefined FUN_14447e81a(void)

int FUN_14447e81a(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Buf2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      iVar1 = *(int *)(param_3 + 1);
      _Buf2 = (void *)*param_3;
      do {
        lVar5 = (longlong)iVar6;
        if (*(int *)(lVar2 + 8 + lVar5 * 0x18) == iVar1) {
          if (iVar1 == 0) {
            return iVar6;
          }
          iVar3 = memcmp(*(void **)(lVar2 + lVar5 * 0x18),_Buf2,(longlong)iVar1 << 2);
          if (iVar3 == 0) {
            return iVar6;
          }
        }
        iVar6 = *(int *)(lVar2 + 0x10 + lVar5 * 0x18);
      } while (iVar6 != -1);
    }
  }
  return -1;
}



// FUNCTION 14447e8aa FUN_14447e8aa body=599 status=ok
// SIG undefined FUN_14447e8aa(void)

longlong * FUN_14447e8aa(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = (int)param_2[9];
  plVar6 = param_1 + 8;
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
    if (iVar2 == 0) goto LAB_14447e93b;
  }
  else {
    FUN_1446efa72(plVar6,0,iVar2,4);
  }
  plVar8 = param_1 + 7;
  if ((longlong *)*plVar6 != (longlong *)0x0) {
    plVar8 = (longlong *)*plVar6;
  }
  plVar6 = param_2 + 7;
  if ((longlong *)param_2[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_2[8];
  }
  memcpy(plVar8,plVar6,(longlong)iVar2 << 2);
LAB_14447e93b:
  *(int *)(param_1 + 9) = iVar2;
  uVar1 = *(uint *)(param_2 + 1);
  FUN_14083edc8(param_1,(ulonglong)uVar1);
  lVar4 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
    FUN_1447711aa(param_1);
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar5 = (int)param_2[5] + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar7 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar7 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(param_1 + 2,0);
  }
  iVar2 = (int)param_2[5];
  *(int *)(param_1 + 5) = iVar2;
  if (iVar2 != 0) {
    plVar6 = (longlong *)param_2[4];
    if ((longlong *)param_2[4] == (longlong *)0x0) {
      plVar6 = param_2 + 2;
    }
    plVar8 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    memcpy(plVar8,plVar6,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (0 < (int)uVar1) {
    lVar4 = *param_1;
    lVar3 = *param_2;
    lVar9 = 0;
    uVar10 = 0;
    do {
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      uVar5 = *(uint *)((longlong)plVar6 + (uVar10 >> 5 & 0x7ffffff) * 4);
      *(undefined4 *)(lVar4 + lVar9) = *(undefined4 *)(lVar3 + lVar9);
      if ((uVar5 >> ((uint)uVar10 & 0x1f) & 1) == 0) {
        *(undefined4 *)(lVar4 + 4 + lVar9) = *(undefined4 *)(lVar3 + 4 + lVar9);
      }
      else {
        *(undefined8 *)(lVar4 + 8 + lVar9) = 0;
        iVar2 = *(int *)(lVar3 + 0x10 + lVar9);
        _Src = *(void **)(lVar3 + 8 + lVar9);
        *(int *)(lVar4 + 0x10 + lVar9) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)(lVar4 + 0x14 + lVar9) = 0;
        }
        else {
          FUN_144a06ca8(lVar4 + 8 + lVar9,iVar2,0);
          memcpy(*(void **)(lVar4 + 8 + lVar9),_Src,(longlong)iVar2 << 2);
        }
        *(undefined8 *)(lVar4 + 0x18 + lVar9) = *(undefined8 *)(lVar3 + 0x18 + lVar9);
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x20;
    } while (uVar1 != uVar10);
  }
  return param_1;
}



// FUNCTION 14447eb02 FUN_14447eb02 body=124 status=ok
// SIG undefined FUN_14447eb02(void)

undefined8 FUN_14447eb02(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = *param_2;
  plVar4 = (longlong *)FUN_140147222(*param_1 + 0x20);
  iVar1 = *(int *)param_1[1];
  *(int *)param_1[1] = iVar1 + 1;
  iVar2 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(plVar4,iVar2);
  }
  lVar3 = *plVar4;
  *(int *)(lVar3 + (longlong)iVar2 * 4) = iVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14447eb9e FUN_14447eb9e body=12 status=ok
// SIG undefined FUN_14447eb9e(void)

void FUN_14447eb9e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014447eba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14447ebaa FUN_14447ebaa body=29 status=ok
// SIG undefined FUN_14447ebaa(void)

undefined8 FUN_14447ebaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14447ebc8 FUN_14447ebc8 body=81 status=ok
// SIG undefined FUN_14447ebc8(void)

undefined8 FUN_14447ebc8(undefined8 *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (*(int *)*param_1 == *param_2) {
    plVar2 = (longlong *)param_1[1];
    puVar3 = (undefined4 *)param_1[2];
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_1446f48e2(plVar2,iVar1);
    }
    *(undefined4 *)(*plVar2 + (longlong)iVar1 * 4) = *puVar3;
  }
  piVar4 = (int *)param_1[2];
  *piVar4 = *piVar4 + 1;
  return CONCAT71((int7)((ulonglong)piVar4 >> 8),1);
}



// FUNCTION 14447ec40 FUN_14447ec40 body=12 status=ok
// SIG undefined FUN_14447ec40(void)

void FUN_14447ec40(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014447ec49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14447ec4c FUN_14447ec4c body=29 status=ok
// SIG undefined FUN_14447ec4c(void)

undefined8 FUN_14447ec4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14447ec6a FUN_14447ec6a body=101 status=ok
// SIG undefined FUN_14447ec6a(void)

undefined8 FUN_14447ec6a(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar2 = *param_1;
  pcVar3 = *(code **)(lVar2 + 0x90);
  plVar6 = (longlong *)(lVar2 + 0xb0);
  if (*(longlong **)(lVar2 + 0xa0) != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar2 + 0xa0);
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  cVar4 = (*pcVar3)(uVar5,param_2);
  uVar5 = 1;
  if (cVar4 != '\0') {
    iVar1 = *(int *)param_1[1];
    if (iVar1 == (int)param_1[2]) {
      *(undefined4 *)param_1[3] = *param_2;
      uVar5 = 0;
    }
    else {
      *(int *)param_1[1] = iVar1 + 1;
    }
  }
  return uVar5;
}



// FUNCTION 14447ecd0 FUN_14447ecd0 body=70 status=ok
// SIG undefined FUN_14447ecd0(void)

undefined8 * FUN_14447ecd0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14bb2bbd0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 14447ed16 FUN_14447ed16 body=5 status=ok
// SIG undefined FUN_14447ed16(void)

longlong FUN_14447ed16(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14447ed1c FUN_14447ed1c body=29 status=ok
// SIG undefined FUN_14447ed1c(void)

void FUN_14447ed1c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14447ed3a FUN_14447ed3a body=29 status=ok
// SIG undefined FUN_14447ed3a(void)

undefined8 FUN_14447ed3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14447ed58 FUN_14447ed58 body=78 status=ok
// SIG undefined FUN_14447ed58(void)

undefined8 FUN_14447ed58(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar1 = *param_1;
  pcVar2 = *(code **)(lVar1 + 0x90);
  plVar5 = (longlong *)(lVar1 + 0xb0);
  if (*(longlong **)(lVar1 + 0xa0) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0xa0);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  cVar3 = (*pcVar2)(uVar4,param_2);
  if (cVar3 != '\0') {
    *(int *)param_1[1] = *(int *)param_1[1] + 1;
  }
  return 1;
}



// FUNCTION 14447edbe FUN_14447edbe body=5 status=ok
// SIG undefined FUN_14447edbe(void)

longlong FUN_14447edbe(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14447edc4 FUN_14447edc4 body=12 status=ok
// SIG undefined FUN_14447edc4(void)

void FUN_14447edc4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014447edcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14447edd0 FUN_14447edd0 body=29 status=ok
// SIG undefined FUN_14447edd0(void)

undefined8 FUN_14447edd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14447edee FUN_14447edee body=164 status=ok
// SIG undefined FUN_14447edee(void)

undefined8 FUN_14447edee(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  lVar1 = *param_1;
  pcVar2 = *(code **)(lVar1 + 0x90);
  plVar5 = (longlong *)(lVar1 + 0xb0);
  if (*(longlong **)(lVar1 + 0xa0) != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar1 + 0xa0);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  cVar3 = (*pcVar2)(uVar4,&local_28);
  uVar4 = 1;
  if (cVar3 != '\0') {
    local_24 = local_28;
    pcVar2 = (code *)param_1[2];
    plVar5 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[4];
    }
    uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
    uVar4 = (*pcVar2)(uVar4,&local_24);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14447ee94 FUN_14447ee94 body=114 status=ok
// SIG undefined FUN_14447ee94(void)

undefined8 * FUN_14447ee94(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14bb2bc10;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar1;
  puVar2[6] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 6);
  }
  return puVar2 + 2;
}



// FUNCTION 14447ef06 FUN_14447ef06 body=5 status=ok
// SIG undefined FUN_14447ef06(void)

longlong FUN_14447ef06(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 14447ef0c FUN_14447ef0c body=29 status=ok
// SIG undefined FUN_14447ef0c(void)

void FUN_14447ef0c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14447ef2a FUN_14447ef2a body=71 status=ok
// SIG undefined FUN_14447ef2a(void)

undefined8 * FUN_14447ef2a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bb2bc10;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14447ef72 FUN_14447ef72 body=244 status=ok
// SIG undefined FUN_14447ef72(void)

undefined4 *
FUN_14447ef72(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  void *_Src;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *param_4;
  uVar3 = *param_3;
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 1) = uVar3;
  *(undefined1 *)(param_1 + 3) = uVar1;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  param_1[6] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 4,iVar2,0);
    memcpy(*(void **)(param_1 + 4),_Src,(longlong)iVar2 << 2);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0xffffffff00000080;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_14001a7b2();
  if ((longlong)(int)param_1[6] != 0) {
    lVar4 = *(longlong *)(param_1 + 4);
    lVar5 = (longlong)(int)param_1[6] << 2;
    do {
      (**(code **)(DAT_14cc012d0 + 0xd0))(&DAT_14cc012d0,lVar4);
      lVar4 = lVar4 + 4;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  FUN_1490fa978(param_1);
  return param_1;
}



// FUNCTION 14447f066 FUN_14447f066 body=97 status=ok
// SIG undefined FUN_14447f066(void)

undefined8 * FUN_14447f066(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14bb2bc30;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_144a06ca8(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 << 2);
  }
  return puVar1;
}



// FUNCTION 14447f0da FUN_14447f0da body=57 status=ok
// SIG undefined FUN_14447f0da(void)

undefined8 * FUN_14447f0da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb2bc30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14447f114 FUN_14447f114 body=213 status=ok
// SIG undefined FUN_14447f114(void)

undefined4 *
FUN_14447f114(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *param_4;
  uVar3 = *param_3;
  uVar2 = *param_2;
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 1) = uVar3;
  *(undefined1 *)(param_1 + 3) = uVar1;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 1;
  FUN_144a06ca8(param_1 + 4,1,0);
  **(undefined4 **)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0xffffffff00000080;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_14001a7b2();
  if ((longlong)(int)param_1[6] != 0) {
    lVar4 = *(longlong *)(param_1 + 4);
    lVar5 = (longlong)(int)param_1[6] << 2;
    do {
      (**(code **)(DAT_14cc012d0 + 0xd0))(&DAT_14cc012d0,lVar4);
      lVar4 = lVar4 + 4;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  FUN_1490fa978(param_1);
  return param_1;
}



// FUNCTION 14447f212 FUN_14447f212 body=29 status=ok
// SIG undefined FUN_14447f212(void)

undefined8 FUN_14447f212(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14447f230 FUN_14447f230 body=1576 status=ok
// SIG undefined FUN_14447f230(void)

undefined4 *
FUN_14447f230(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  void *_Src;
  code *pcVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined4 **ppuVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_158 [40];
  undefined4 **local_130;
  undefined4 *local_128;
  undefined1 *local_120;
  undefined4 *local_118;
  undefined8 uStack_110;
  undefined4 *local_108;
  undefined8 uStack_100;
  int *local_f8;
  undefined8 uStack_f0;
  int *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  longlong *local_c8 [2];
  longlong local_b8 [4];
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  int local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar1 = *param_4;
  uVar7 = *param_3;
  local_d8 = param_2[2];
  local_c8[0] = (longlong *)0x0;
  if (local_d8 != 0) {
    puVar8 = param_2 + 6;
    if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)param_2[4];
    }
    (**(code **)*puVar8)(puVar8,local_c8);
  }
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 1) = uVar7;
  *(undefined1 *)(param_1 + 3) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0xffffffff00000080;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  iVar5 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  param_1[0x20] = iVar5;
  if ((longlong)iVar5 == 0) {
    param_1[0x21] = 0;
  }
  else {
    FUN_149157980(param_1 + 0x1e,iVar5,0);
    memcpy(*(void **)(param_1 + 0x1e),_Src,(longlong)iVar5);
  }
  *(longlong *)(param_1 + 0x24) = local_d8;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (local_d8 != 0) {
    plVar6 = local_c8[0];
    if (local_c8[0] == (longlong *)0x0) {
      plVar6 = local_b8;
    }
    (**(code **)*plVar6)(plVar6,param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x35) = 0;
  uVar15 = param_1[0x20];
  uVar13 = (ulonglong)uVar15;
  if ((int)uVar15 < 1) goto LAB_14447f7cd;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_e8 = (int *)0x0;
  uStack_e0 = 0;
  local_f8 = (int *)0x0;
  uStack_f0 = 0;
  FUN_14481578e(&local_f8,uVar13);
  if ((int)uStack_e0._4_4_ < (int)uVar15) {
    FUN_14481578e(&local_e8,uVar15);
  }
  ppuVar11 = (undefined4 **)(param_1 + 4);
  *(bool *)(param_1 + 0x1c) = uVar15 == 1;
  if (uVar15 == 1) {
LAB_14447f3bc:
    param_1[6] = 0;
    if ((int)param_1[7] < 0) {
      FUN_14481578e(ppuVar11,0);
    }
  }
  else {
    local_120 = (undefined1 *)(longlong)(int)param_1[0x20];
    local_130 = ppuVar11;
    local_128 = param_1;
    if (local_120 != (undefined1 *)0x0) {
      puVar9 = *(undefined1 **)(param_1 + 0x1e);
      local_120 = local_120 + (longlong)puVar9;
      do {
        uVar1 = *puVar9;
        FUN_14001a7b2();
        plVar6 = (longlong *)
                 (**(code **)(DAT_14cc012d0 + 0xf8))
                           (&DAT_14cc012d0,CONCAT71((int7)(uVar13 >> 8),uVar1) & 0xffffffff);
        iVar5 = (int)plVar6[1];
        uVar15 = ((int)uStack_90 - local_64) + iVar5;
        if ((uint)((int)uStack_90 - local_64) < uVar15) {
          if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456acd4b((longlong)(int)uVar15);
          }
          FUN_1400bac10(&local_98,uVar15);
          iVar5 = 1;
          if (3 < uVar15) {
            uVar15 = (uVar15 | 1) + 0xe;
            iVar5 = 0x1f;
            if (uVar15 != 0) {
              for (; uVar15 >> iVar5 == 0; iVar5 = iVar5 + -1) {
              }
            }
            iVar5 = 1 << ((byte)iVar5 & 0x1f);
          }
          if ((local_50 == 0) || (local_50 < iVar5)) {
            local_50 = iVar5;
            FUN_144a56d22(&local_98);
          }
          iVar5 = (int)plVar6[1];
        }
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          lVar12 = *plVar6;
          lVar10 = 0;
          do {
            local_108 = (undefined4 *)CONCAT44(local_108._4_4_,*(undefined4 *)(lVar12 + lVar10));
            FUN_1447cbafe(&local_98,&local_118,&local_108,0);
            lVar10 = lVar10 + 4;
          } while ((longlong)iVar5 * 4 != lVar10);
          iVar5 = (int)plVar6[1];
        }
        uVar13 = uStack_e0;
        lVar12 = (longlong)(int)uStack_e0;
        uVar15 = (int)uStack_e0 + 1;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar15);
        if (uStack_e0._4_4_ < uVar15) {
          FUN_1446f48e2(&local_e8,uVar13 & 0xffffffff);
        }
        uVar3 = uStack_f0;
        local_e8[lVar12] = iVar5;
        iVar5 = (int)uStack_90 - local_64;
        uVar13 = (ulonglong)(int)uStack_f0;
        uVar15 = (int)uStack_f0 + 1;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar15);
        if (uStack_f0._4_4_ < uVar15) {
          FUN_1446f48e2(&local_f8,uVar3 & 0xffffffff);
        }
        local_f8[uVar13] = iVar5;
        puVar9 = puVar9 + 1;
      } while (puVar9 != local_120);
    }
    param_1 = local_128;
    ppuVar11 = local_130;
    if (*local_e8 == *local_f8) {
      if ((longlong)(int)uStack_e0 == 0) {
        iVar5 = 0;
      }
      else {
        lVar12 = 0;
        iVar5 = 0;
        do {
          iVar5 = iVar5 + *(int *)((longlong)local_e8 + lVar12);
          lVar12 = lVar12 + 4;
        } while ((longlong)(int)uStack_e0 * 4 != lVar12);
      }
      bVar16 = iVar5 == (int)uStack_90 - local_64;
      *(bool *)(local_128 + 0x1c) = bVar16;
      if (bVar16) goto LAB_14447f3bc;
    }
    else {
      *(undefined1 *)(local_128 + 0x1c) = 0;
    }
    FUN_140619b9c(&local_98,&local_108);
    if (*(longlong *)(param_1 + 0x24) != 0) {
      local_118 = (undefined4 *)0x0;
      uStack_110 = 0;
      if ((longlong)(int)uStack_100 != 0) {
        lVar12 = (longlong)(int)uStack_100 << 2;
        puVar14 = local_108;
        do {
          pcVar2 = *(code **)(param_1 + 0x24);
          plVar6 = *(longlong **)(param_1 + 0x28);
          if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
            plVar6 = (longlong *)(param_1 + 0x2c);
          }
          uVar7 = (**(code **)(*plVar6 + 8))();
          cVar4 = (*pcVar2)(uVar7,puVar14);
          uVar13 = uStack_110;
          if (cVar4 != '\0') {
            lVar10 = (longlong)(int)uStack_110;
            uVar15 = (int)uStack_110 + 1;
            uStack_110 = CONCAT44(uStack_110._4_4_,uVar15);
            if (uStack_110._4_4_ < uVar15) {
              FUN_1446f48e2(&local_118,uVar13 & 0xffffffff);
            }
            local_118[lVar10] = *puVar14;
          }
          puVar14 = puVar14 + 1;
          lVar12 = lVar12 + -4;
          ppuVar11 = local_130;
        } while (lVar12 != 0);
      }
      if (local_108 != (undefined4 *)0x0) {
        FUN_1400020a8(local_108);
      }
      local_108 = local_118;
      uStack_100 = uStack_110;
    }
    if (ppuVar11 != &local_108) {
      if (*ppuVar11 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      *(undefined4 **)(param_1 + 4) = local_108;
      local_108 = (undefined4 *)0x0;
      param_1[6] = (int)uStack_100;
      param_1[7] = uStack_100._4_4_;
      uStack_100 = 0;
    }
    FUN_14001a7b2();
    if ((longlong)(int)param_1[6] != 0) {
      lVar12 = *(longlong *)(param_1 + 4);
      lVar10 = (longlong)(int)param_1[6] << 2;
      do {
        (**(code **)(DAT_14cc012d0 + 0xd0))(&DAT_14cc012d0,lVar12);
        lVar12 = lVar12 + 4;
        lVar10 = lVar10 + -4;
      } while (lVar10 != 0);
    }
    if (local_108 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1490fa978(param_1);
  if (local_f8 != (int *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (int *)0x0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar13 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar13 != 0) {
    FUN_1447a08a2(&local_98,0);
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
LAB_14447f7cd:
  if (local_d8 != 0) {
    plVar6 = local_c8[0];
    if (local_c8[0] == (longlong *)0x0) {
      plVar6 = local_b8;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14447f85a FUN_14447f85a body=180 status=ok
// SIG undefined FUN_14447f85a(void)

undefined8 * FUN_14447f85a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14bb2bc70;
  puVar1 = puVar4 + 2;
  puVar4[2] = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar4 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
  }
  else {
    FUN_149157980(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  puVar4[4] = lVar3;
  puVar4[6] = 0;
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar5)(puVar5,puVar4 + 6);
  }
  return puVar1;
}



// FUNCTION 14447f914 FUN_14447f914 body=29 status=ok
// SIG undefined FUN_14447f914(void)

void FUN_14447f914(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14447f932 FUN_14447f932 body=85 status=ok
// SIG undefined FUN_14447f932(void)

undefined8 * FUN_14447f932(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bb2bc70;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14447f988 FUN_14447f988 body=3823 status=ok
// SIG undefined FUN_14447f988(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14447f988(longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 *******_Src;
  void **ppvVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined ***pppuVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong lVar21;
  int *piVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  uint *puVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auStack_168 [32];
  longlong local_148;
  uint local_13c;
  longlong *local_138;
  int local_12c;
  longlong *local_128;
  ulonglong local_120;
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  undefined4 local_fc;
  void *local_f8;
  int local_f0;
  undefined8 *******local_e8;
  void **ppvStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c4;
  uint local_c0;
  int local_bc;
  undefined8 *******local_b8;
  undefined8 uStack_b0;
  undefined ***local_a8;
  undefined **local_98;
  undefined8 *local_90;
  void **local_88;
  undefined4 *local_80;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar3 = *param_2;
  lVar24 = *param_1;
  lVar25 = param_1[3];
  iVar8 = *(int *)(lVar24 + 0x5c);
  lVar26 = *(longlong *)(lVar24 + 0x50);
  if (*(longlong *)(lVar24 + 0x50) == 0) {
    lVar26 = lVar24;
  }
  local_fc = uVar3;
  FUN_14446cc15(lVar26,*(undefined4 *)(lVar24 + 0x58));
  *(undefined4 *)(lVar24 + 0x58) = 0;
  if ((iVar8 < 0) && (*(int *)(lVar24 + 0x5c) != 0)) {
    FUN_144480908(lVar24);
  }
  plVar10 = *(longlong **)param_1[1];
  if (plVar10 == (longlong *)0x0) {
    if (((*(int *)(lVar25 + 0xa0) != 0) && (*(longlong **)(lVar25 + 0x98) != (longlong *)0x0)) &&
       (cVar6 = (**(code **)(**(longlong **)(lVar25 + 0x98) + 0x30))(), cVar6 != '\0')) {
      if (*(int *)(lVar25 + 0xa0) == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = *(longlong **)(lVar25 + 0x98);
      }
      (**(code **)(*plVar10 + 0x58))(plVar10,&local_b8,param_1[2] + 4,uVar3);
      lVar24 = *param_1;
      iVar8 = *(int *)(lVar24 + 0x58);
      *(uint *)(lVar24 + 0x58) = iVar8 + 1U;
      if (*(uint *)(lVar24 + 0x5c) < iVar8 + 1U) {
        FUN_14446c1c8(lVar24,iVar8);
      }
      lVar26 = *(longlong *)(lVar24 + 0x50);
      if (*(longlong *)(lVar24 + 0x50) == 0) {
        lVar26 = lVar24;
      }
      lVar24 = (longlong)iVar8 * 0x50;
      *(undefined8 *)(lVar26 + 0x20 + lVar24) = 0;
      *(undefined4 *)(lVar26 + 0x28 + lVar24) = 0;
      *(undefined8 *)(lVar26 + lVar24) = 0;
      ((undefined8 *)(lVar26 + lVar24))[1] = 0;
      *(undefined8 *)(lVar26 + 0x2c + lVar24) = 0xffffffff00000080;
      *(undefined4 *)(lVar26 + 0x34 + lVar24) = 0;
      *(undefined8 *)(lVar26 + 0x40 + lVar24) = 0;
      *(undefined4 *)(lVar26 + 0x48 + lVar24) = 0;
      FUN_140816cc4(lVar26 + lVar24,&local_b8);
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_1401ad17c(&local_b8);
    }
  }
  else {
    (**(code **)(*plVar10 + 0x38))(plVar10,param_1[2] + 4,&local_fc,*param_1);
  }
  plVar10 = (longlong *)*param_1;
  if ((longlong)(int)plVar10[0xb] == 0) {
    puVar11 = (undefined1 *)param_1[5];
LAB_144480796:
    *puVar11 = 0;
  }
  else {
    plVar18 = (longlong *)plVar10[10];
    if ((longlong *)plVar10[10] == (longlong *)0x0) {
      plVar18 = plVar10;
    }
    local_108 = plVar18 + (longlong)(int)plVar10[0xb] * 10;
    local_110 = lVar25 + 0x30;
    local_128 = (longlong *)(lVar25 + 0x40);
    local_118 = lVar25 + 0x78;
    local_148 = lVar25;
    local_138 = param_1;
    do {
      if ((int)plVar18[1] - *(int *)((longlong)plVar18 + 0x34) == *(int *)(lVar25 + 0x18)) {
        puVar30 = (uint *)(plVar18 + 2);
        iVar8 = (int)plVar18[5];
        if (iVar8 == 0) {
          uVar28 = 1;
          uVar27 = 0;
          iVar19 = 0;
          iVar12 = 0;
        }
        else {
          puVar9 = (uint *)plVar18[4];
          if ((uint *)plVar18[4] == (uint *)0x0) {
            puVar9 = puVar30;
          }
          uVar7 = *puVar9;
          if (uVar7 == 0) {
            iVar12 = iVar8 + 0x1e;
            if (-1 < iVar8 + -1) {
              iVar12 = iVar8 + -1;
            }
            uVar27 = 0;
            uVar28 = (ulonglong)(uint)(iVar12 >> 5);
            if (iVar12 >> 5 < 1) {
              uVar28 = uVar27;
            }
            iVar19 = 0;
            do {
              if (uVar28 == uVar27) goto LAB_14447fc21;
              iVar19 = iVar19 + 0x20;
              uVar7 = puVar9[uVar27 + 1];
              uVar27 = uVar27 + 1;
            } while (uVar7 == 0);
          }
          else {
            uVar27 = 0;
            iVar19 = 0;
          }
          uVar28 = (ulonglong)(-uVar7 & uVar7);
          uVar2 = uVar28 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          iVar12 = (iVar19 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
          if (iVar8 <= iVar12) {
            iVar12 = iVar8;
          }
        }
        if (iVar12 == iVar8) {
LAB_14447fc21:
          FUN_14001a7b2();
          iVar8 = (int)plVar18[5];
          iVar23 = iVar8;
          if (iVar8 == 0) {
            uVar28 = 1;
            uVar27 = 0;
            iVar19 = 0;
            iVar12 = 0;
          }
          else {
            puVar9 = (uint *)plVar18[4];
            if ((uint *)plVar18[4] == (uint *)0x0) {
              puVar9 = puVar30;
            }
            uVar7 = *puVar9;
            if (uVar7 == 0) {
              iVar12 = iVar8 + 0x1e;
              if (-1 < iVar8 + -1) {
                iVar12 = iVar8 + -1;
              }
              uVar27 = 0;
              uVar28 = (ulonglong)(uint)(iVar12 >> 5);
              if (iVar12 >> 5 < 1) {
                uVar28 = uVar27;
              }
              iVar19 = 0;
              do {
                if (uVar28 == uVar27) goto LAB_14447fcb4;
                iVar19 = iVar19 + 0x20;
                uVar7 = puVar9[uVar27 + 1];
                uVar27 = uVar27 + 1;
              } while (uVar7 == 0);
            }
            else {
              uVar27 = 0;
              iVar19 = 0;
            }
            uVar28 = (ulonglong)(-uVar7 & uVar7);
            uVar2 = uVar28 * 2 + 1;
            lVar24 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            iVar12 = (iVar19 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
            if (iVar8 <= iVar12) {
              iVar12 = iVar8;
            }
          }
          if (iVar12 != iVar8) {
            uVar7 = 0xffffffff;
            do {
              cVar6 = (**(code **)(DAT_14cc012d0 + 0xe0))
                                (&DAT_14cc012d0,
                                 *(undefined4 *)(*plVar18 + 8 + (longlong)iVar12 * 0x14));
              if (cVar6 != '\0') {
                iVar23 = (int)plVar18[5];
                goto LAB_14447ff62;
              }
              uVar7 = uVar7 & ~(uint)uVar28;
              puVar9 = (uint *)plVar18[4];
              if ((uint *)plVar18[4] == (uint *)0x0) {
                puVar9 = puVar30;
              }
              iVar23 = (int)plVar18[5];
              iVar12 = (int)uVar27;
              lVar24 = (longlong)iVar12;
              uVar13 = puVar9[lVar24] & uVar7;
              if (uVar13 == 0) {
                iVar14 = iVar23 + 0x1e;
                if (-1 < iVar23 + -1) {
                  iVar14 = iVar23 + -1;
                }
                iVar14 = iVar14 >> 5;
                iVar19 = iVar19 + 0x20;
                iVar15 = iVar14;
                if (iVar14 < iVar12) {
                  iVar15 = iVar12;
                }
                if (iVar12 < iVar14) {
                  lVar25 = 0;
                  do {
                    uVar13 = puVar9[lVar24 + lVar25 + 1];
                    if (uVar13 != 0) {
                      uVar27 = (ulonglong)(iVar12 + (int)lVar25 + 1);
                      uVar7 = 0xffffffff;
                      goto LAB_14447ff1b;
                    }
                    iVar19 = iVar19 + 0x20;
                    lVar25 = lVar25 + 1;
                  } while (iVar15 - lVar24 != lVar25);
                  uVar7 = 0xffffffff;
                  iVar12 = iVar15;
                }
                uVar27 = (ulonglong)(iVar12 + 1);
                iVar12 = iVar23;
              }
              else {
LAB_14447ff1b:
                uVar28 = (ulonglong)(-uVar13 & uVar13);
                uVar2 = uVar28 * 2 + 1;
                lVar24 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                  }
                }
                iVar12 = (iVar19 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                if (iVar23 <= iVar12) {
                  iVar12 = iVar23;
                }
              }
            } while (iVar12 != iVar8);
          }
LAB_14447fcb4:
          iVar8 = *(int *)(local_148 + 0x18);
          if ((longlong)iVar8 == 0) goto LAB_14447ff62;
          plVar10 = plVar18 + 7;
          if ((longlong *)plVar18[8] != (longlong *)0x0) {
            plVar10 = (longlong *)plVar18[8];
          }
          if ((int)plVar18[1] == *(int *)((longlong)plVar18 + 0x34)) goto LAB_14447ff62;
          lVar24 = *(longlong *)(local_148 + 0x10);
          lVar25 = (longlong)iVar8 * 0xe0 + lVar24;
          uVar7 = 0;
          do {
            lVar26 = *(longlong *)(lVar24 + 4);
            uVar13 = (uint)((ulonglong)lVar26 >> 0x10);
            uVar31 = (uint)lVar26 & 0xffff;
            iVar12 = *(int *)((longlong)plVar10 +
                             (ulonglong)
                             ((int)((ulonglong)lVar26 >> 0x20) + ((uint)lVar26 << 0x10 | uVar31) +
                              (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar31 >> 4) &
                             (int)plVar18[9] - 1U) * 4);
            while( true ) {
              if (iVar12 == -1) goto LAB_14447ff62;
              plVar17 = (longlong *)(*plVar18 + (longlong)iVar12 * 0x14);
              if (*plVar17 == lVar26) break;
              iVar12 = *(int *)((longlong)plVar17 + 0xc);
            }
            if ((plVar17 == (longlong *)0x0) || ((uint *)(plVar17 + 1) == (uint *)0x0))
            goto LAB_14447ff62;
            uVar13 = *(uint *)(plVar17 + 1);
            uVar31 = uVar13 >> 0xd ^ uVar7 - uVar13;
            uVar7 = uVar31 << 8 ^ (-0x61c88647 - uVar13) - uVar31;
            uVar13 = uVar7 >> 0xd ^ (uVar13 - uVar31) - uVar7;
            uVar29 = uVar13 >> 0xc ^ (uVar31 - uVar7) - uVar13;
            uVar32 = uVar29 << 0x10 ^ (uVar7 - uVar13) - uVar29;
            uVar31 = uVar32 >> 5 ^ (uVar13 - uVar29) - uVar32;
            uVar7 = uVar31 >> 3 ^ (uVar29 - uVar32) - uVar31;
            uVar13 = uVar7 << 10 ^ (uVar32 - uVar31) - uVar7;
            uVar31 = uVar31 - (uVar7 + uVar13);
            uVar13 = uVar13 >> 0xf;
            uVar7 = uVar31 ^ uVar13;
            lVar24 = lVar24 + 0xe0;
          } while (lVar24 != lVar25);
          if (uVar31 == uVar13) goto LAB_14447ff62;
          plVar10 = local_138;
          lVar24 = local_148;
          if (*(int *)(local_148 + 0x48) != *(int *)(local_148 + 0x74)) {
            lVar25 = *(longlong *)(local_148 + 0x80);
            if (*(longlong *)(local_148 + 0x80) == 0) {
              lVar25 = local_118;
            }
            iVar12 = *(int *)(lVar25 + (ulonglong)(*(int *)(local_148 + 0x88) - 1U & uVar7) * 4);
            if (iVar12 != -1) {
              do {
                if (*(uint *)(*local_128 + (longlong)iVar12 * 0x10) == uVar7) goto LAB_144480799;
                iVar12 = *(int *)((longlong)iVar12 * 0x10 + *local_128 + 8);
              } while (iVar12 != -1);
            }
          }
        }
        else {
          uVar7 = 0xffffffff;
          do {
            (**(code **)(*(longlong *)local_138[4] + 0xd0))
                      ((longlong *)local_138[4],*plVar18 + (longlong)iVar12 * 0x14 + 8);
            uVar7 = ~(uint)uVar28 & uVar7;
            puVar9 = (uint *)plVar18[4];
            if ((uint *)plVar18[4] == (uint *)0x0) {
              puVar9 = puVar30;
            }
            iVar23 = (int)plVar18[5];
            iVar12 = (int)uVar27;
            lVar24 = (longlong)iVar12;
            uVar13 = puVar9[lVar24] & uVar7;
            if (uVar13 == 0) {
              iVar14 = iVar23 + 0x1e;
              if (-1 < iVar23 + -1) {
                iVar14 = iVar23 + -1;
              }
              iVar14 = iVar14 >> 5;
              iVar19 = iVar19 + 0x20;
              iVar15 = iVar14;
              if (iVar14 < iVar12) {
                iVar15 = iVar12;
              }
              if (iVar12 < iVar14) {
                lVar25 = 0;
                do {
                  uVar13 = puVar9[lVar24 + lVar25 + 1];
                  if (uVar13 != 0) {
                    uVar27 = (ulonglong)(iVar12 + (int)lVar25 + 1);
                    uVar7 = 0xffffffff;
                    goto LAB_14447fbcc;
                  }
                  iVar19 = iVar19 + 0x20;
                  lVar25 = lVar25 + 1;
                } while (iVar15 - lVar24 != lVar25);
                uVar7 = 0xffffffff;
                iVar12 = iVar15;
              }
              uVar27 = (ulonglong)(iVar12 + 1);
              iVar12 = iVar23;
            }
            else {
LAB_14447fbcc:
              uVar28 = (ulonglong)(-uVar13 & uVar13);
              uVar2 = uVar28 * 2 + 1;
              lVar24 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              iVar12 = (iVar19 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
              if (iVar23 <= iVar12) {
                iVar12 = iVar23;
              }
            }
          } while (iVar12 != iVar8);
          if ((int)plVar18[1] - *(int *)((longlong)plVar18 + 0x34) == *(int *)(local_148 + 0x18))
          goto LAB_14447fc21;
LAB_14447ff62:
          local_e8 = (undefined8 *******)0x0;
          ppvStack_e0 = (void **)0x0;
          lVar24 = local_148;
          plVar10 = local_138;
          if (iVar23 == 0) {
            uVar27 = 1;
            uVar28 = 0;
            iVar12 = 0;
            iVar8 = 0;
          }
          else {
            puVar9 = (uint *)plVar18[4];
            if ((uint *)plVar18[4] == (uint *)0x0) {
              puVar9 = puVar30;
            }
            uVar7 = *puVar9;
            if (uVar7 == 0) {
              iVar8 = iVar23 + 0x1e;
              if (-1 < iVar23 + -1) {
                iVar8 = iVar23 + -1;
              }
              uVar28 = 0;
              uVar27 = (ulonglong)(uint)(iVar8 >> 5);
              if (iVar8 >> 5 < 1) {
                uVar27 = uVar28;
              }
              iVar12 = 0;
              do {
                if (uVar27 == uVar28) {
                  bVar4 = true;
                  goto LAB_144480489;
                }
                iVar12 = iVar12 + 0x20;
                uVar7 = puVar9[uVar28 + 1];
                uVar28 = uVar28 + 1;
              } while (uVar7 == 0);
            }
            else {
              uVar28 = 0;
              iVar12 = 0;
            }
            uVar27 = (ulonglong)(-uVar7 & uVar7);
            uVar2 = uVar27 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            iVar8 = (iVar12 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
            if (iVar23 <= iVar8) {
              iVar8 = iVar23;
            }
          }
          bVar4 = true;
          if (iVar8 != iVar23) {
            local_13c = 0xffffffff;
            do {
              local_120 = uVar27;
              if ((longlong)*(int *)(lVar24 + 0x18) == 0) {
LAB_144480486:
                bVar4 = false;
                break;
              }
              plVar17 = (longlong *)(*plVar18 + (longlong)iVar8 * 0x14);
              lVar25 = *(longlong *)(lVar24 + 0x10) + 0x58;
              lVar26 = (longlong)*(int *)(lVar24 + 0x18) * 0xe0;
              while (*(longlong *)(lVar25 + -0x54) != *plVar17) {
                lVar25 = lVar25 + 0xe0;
                lVar26 = lVar26 + -0xe0;
                if (lVar26 == 0) goto LAB_144480486;
              }
              if (lVar25 + -0x58 == 0) goto LAB_144480486;
              local_c0 = *(uint *)(plVar17 + 1);
              plVar17 = (longlong *)(lVar25 + -0x38);
              local_12c = iVar12;
              if (*(int *)(lVar25 + -0x30) != *(int *)(lVar25 + -4)) {
                lVar26 = *(longlong *)(lVar25 + 8);
                if (*(longlong *)(lVar25 + 8) == 0) {
                  lVar26 = lVar25;
                }
                iVar8 = *(int *)(lVar26 + (ulonglong)(*(int *)(lVar25 + 0x10) - 1U & local_c0) * 4);
                if (iVar8 != -1) {
                  do {
                    lVar26 = *plVar17 + (longlong)iVar8 * 0x20;
                    if (*(uint *)(*plVar17 + (longlong)iVar8 * 0x20) == local_c0) {
                      if (lVar26 != 0) {
                        puVar20 = (undefined8 *)(lVar26 + 8);
                        goto LAB_1444801ad;
                      }
                      break;
                    }
                    iVar8 = *(int *)(lVar26 + 0x18);
                  } while (iVar8 != -1);
                }
              }
              local_c4 = 0;
              local_d8 = (void *)0x0;
              uStack_d0 = 0;
              local_a8 = (undefined ***)0x0;
              local_98 = &PTR_LAB_14bb2bbb0;
              local_90 = (undefined8 *)&local_c0;
              local_88 = &local_d8;
              local_80 = &local_c4;
              local_b8 = (undefined8 *******)FUN_14447ebc8;
              FUN_140019f06(lVar25 + -0x58,&local_b8);
              if (local_b8 != (undefined8 *******)0x0) {
                pppuVar16 = local_a8;
                if (local_a8 == (undefined ***)0x0) {
                  pppuVar16 = &local_98;
                }
                (*(code *)(*pppuVar16)[2])();
              }
              if ((int)uStack_d0 == 0) {
                puVar20 = &DAT_14cc01860;
                if (*(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x110) < DAT_14cc01870) {
                  FUN_144b3d300(&DAT_14cc01870);
                  puVar20 = &DAT_14cc01860;
                  if (DAT_14cc01870 == -1) {
                    DAT_14cc01860 = 0;
                    _DAT_14cc01868 = 0;
                    atexit((_func_5014 *)&LAB_144478ddb);
                    _Init_thread_footer(&DAT_14cc01870);
                    puVar20 = &DAT_14cc01860;
                  }
                }
              }
              else {
                local_b8 = (undefined8 *******)&local_c0;
                uStack_b0 = &local_d8;
                FUN_146c58b4c(plVar17,&local_bc,&local_b8,0);
                puVar20 = (undefined8 *)((longlong)local_bc * 0x20 + *plVar17 + 8);
              }
              if (local_d8 != (void *)0x0) {
                FUN_1400020a8();
              }
LAB_1444801ad:
              _Src = local_e8;
              if (*(int *)(puVar20 + 1) == 0) goto LAB_144480486;
              lVar25 = (longlong)(int)ppvStack_e0;
              if (lVar25 == 0) {
                FUN_14054c6c4(&local_e8,puVar20);
                iVar12 = local_12c;
              }
              else {
                local_f8 = (void *)0x0;
                local_f0 = (int)ppvStack_e0;
                FUN_144a06ca8(&local_f8,(ulonglong)ppvStack_e0 & 0xffffffff,0);
                memcpy(local_f8,_Src,lVar25 << 2);
                local_b8 = (undefined8 *******)0x0;
                uStack_b0 = (void **)0x0;
                if ((longlong)*(int *)(puVar20 + 1) != 0) {
                  piVar22 = (int *)*puVar20;
                  piVar1 = piVar22 + *(int *)(puVar20 + 1);
                  do {
                    ppvVar5 = uStack_b0;
                    if ((longlong)local_f0 != 0) {
                      lVar24 = 0;
                      do {
                        if (*(int *)((longlong)local_f8 + lVar24) == *piVar22) {
                          lVar24 = (longlong)(int)uStack_b0;
                          uVar7 = (int)uStack_b0 + 1;
                          uStack_b0 = (void **)CONCAT44(uStack_b0._4_4_,uVar7);
                          if (uStack_b0._4_4_ < uVar7) {
                            FUN_1446f48e2(&local_b8,(ulonglong)ppvVar5 & 0xffffffff);
                          }
                          *(int *)((longlong)local_b8 + lVar24 * 4) = *piVar22;
                          break;
                        }
                        lVar24 = lVar24 + 4;
                      } while ((longlong)local_f0 * 4 != lVar24);
                    }
                    piVar22 = piVar22 + 1;
                  } while (piVar22 != piVar1);
                }
                if (local_f8 != (void *)0x0) {
                  FUN_1400020a8();
                }
                iVar12 = local_12c;
                plVar10 = local_138;
                lVar24 = local_148;
                if (local_e8 != (undefined8 *******)0x0) {
                  FUN_1400020a8();
                }
                local_e8 = local_b8;
                ppvStack_e0 = uStack_b0;
                if ((int)uStack_b0 == 0) goto LAB_144480486;
              }
              local_13c = local_13c & ~(uint)local_120;
              puVar9 = (uint *)plVar18[4];
              if ((uint *)plVar18[4] == (uint *)0x0) {
                puVar9 = puVar30;
              }
              iVar19 = (int)plVar18[5];
              iVar8 = (int)uVar28;
              lVar25 = (longlong)iVar8;
              uVar7 = puVar9[lVar25] & local_13c;
              if (uVar7 == 0) {
                iVar14 = iVar19 + 0x1e;
                if (-1 < iVar19 + -1) {
                  iVar14 = iVar19 + -1;
                }
                iVar14 = iVar14 >> 5;
                iVar12 = iVar12 + 0x20;
                iVar15 = iVar14;
                if (iVar14 < iVar8) {
                  iVar15 = iVar8;
                }
                if (iVar8 < iVar14) {
                  lVar26 = 0;
                  do {
                    uVar7 = puVar9[lVar25 + lVar26 + 1];
                    if (uVar7 != 0) {
                      uVar28 = (ulonglong)(iVar8 + (int)lVar26 + 1);
                      local_13c = 0xffffffff;
                      goto LAB_144480390;
                    }
                    iVar12 = iVar12 + 0x20;
                    lVar26 = lVar26 + 1;
                  } while (iVar15 - lVar25 != lVar26);
                  local_13c = 0xffffffff;
                  iVar8 = iVar15;
                }
                uVar28 = (ulonglong)(iVar8 + 1);
                plVar10 = local_138;
                uVar27 = local_120;
                lVar24 = local_148;
                iVar8 = iVar19;
              }
              else {
LAB_144480390:
                uVar27 = (ulonglong)(-uVar7 & uVar7);
                uVar2 = uVar27 * 2 + 1;
                lVar25 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                  }
                }
                iVar8 = (iVar12 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
                if (iVar19 <= iVar8) {
                  iVar8 = iVar19;
                }
              }
              bVar4 = true;
            } while (iVar8 != iVar23);
          }
LAB_144480489:
          if (local_e8 != (undefined8 *******)0x0) {
            FUN_1400020a8();
          }
          if (bVar4) break;
          iVar8 = *(int *)(lVar24 + 0x18);
        }
        local_e8 = (undefined8 *******)((ulonglong)local_e8 & 0xffffffff00000000);
        if (0 < iVar8) {
          lVar25 = 0;
          do {
            if ((int)plVar18[1] == *(int *)((longlong)plVar18 + 0x34)) {
LAB_144480745:
              puVar11 = (undefined1 *)plVar10[5];
              goto LAB_144480796;
            }
            lVar26 = *(longlong *)(*(longlong *)(lVar24 + 0x10) + 4 + lVar25 * 0xe0);
            uVar7 = (uint)((ulonglong)lVar26 >> 0x10);
            uVar13 = (uint)lVar26 & 0xffff;
            plVar17 = (longlong *)plVar18[8];
            if ((longlong *)plVar18[8] == (longlong *)0x0) {
              plVar17 = plVar18 + 7;
            }
            iVar8 = *(int *)((longlong)plVar17 +
                            (ulonglong)
                            ((int)plVar18[9] - 1U &
                            (int)((ulonglong)lVar26 >> 0x20) + ((uint)lVar26 << 0x10 | uVar13) +
                            (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar13 >> 4)) * 4);
            if (iVar8 == -1) goto LAB_144480745;
            lVar21 = *(longlong *)(lVar24 + 0x10) + lVar25 * 0xe0;
            while (plVar17 = (longlong *)(*plVar18 + (longlong)iVar8 * 0x14), *plVar17 != lVar26) {
              iVar8 = *(int *)((longlong)plVar17 + 0xc);
              if (iVar8 == -1) goto LAB_144480745;
            }
            if (((plVar17 == (longlong *)0x0) ||
                (puVar30 = (uint *)(plVar17 + 1), puVar30 == (uint *)0x0)) ||
               (uVar7 = *puVar30, uVar7 == 0xffffffff)) goto LAB_144480745;
            uVar31 = uVar7 >> 0xd ^ (int)local_e8 - uVar7;
            uVar13 = uVar31 << 8 ^ (-0x61c88647 - uVar7) - uVar31;
            uVar29 = uVar13 >> 0xd ^ (uVar7 - uVar31) - uVar13;
            uVar7 = uVar29 >> 0xc ^ (uVar31 - uVar13) - uVar29;
            uVar31 = uVar7 << 0x10 ^ (uVar13 - uVar29) - uVar7;
            uVar13 = uVar31 >> 5 ^ (uVar29 - uVar7) - uVar31;
            uVar29 = uVar13 >> 3 ^ (uVar7 - uVar31) - uVar13;
            uVar7 = uVar29 << 10 ^ (uVar31 - uVar13) - uVar29;
            local_e8 = (undefined8 *******)
                       CONCAT44(local_e8._4_4_,uVar7 >> 0xf ^ uVar13 - (uVar29 + uVar7));
            if (*(char *)(lVar21 + 0x70) == '\0') {
              local_b8 = (undefined8 *******)0x0;
              uStack_b0 = (void **)0x0;
              cVar6 = FUN_144478822(lVar21,&local_b8);
              if (cVar6 == '\0') {
                iVar8 = *(int *)(lVar21 + 0x18);
                *(uint *)(lVar21 + 0x18) = iVar8 + 1U;
                if (*(uint *)(lVar21 + 0x1c) < iVar8 + 1U) {
                  FUN_1446f48e2(lVar21 + 0x10,iVar8);
                }
                uVar7 = *puVar30;
                *(uint *)(*(longlong *)(lVar21 + 0x10) + (longlong)iVar8 * 4) = uVar7;
                plVar10 = (longlong *)FUN_140147222(lVar21 + 0x20,uVar7,puVar30);
                uVar3 = *(undefined4 *)(local_148 + 0x38);
                iVar8 = (int)plVar10[1];
                *(uint *)(plVar10 + 1) = iVar8 + 1U;
                if (*(uint *)((longlong)plVar10 + 0xc) < iVar8 + 1U) {
                  FUN_1446f48e2(plVar10,iVar8);
                }
                *(undefined4 *)(*plVar10 + (longlong)iVar8 * 4) = uVar3;
                plVar10 = local_138;
                lVar24 = local_148;
              }
            }
            lVar25 = lVar25 + 1;
          } while (lVar25 < *(int *)(lVar24 + 0x18));
        }
        iVar8 = *(int *)(lVar24 + 0x38);
        *(uint *)(lVar24 + 0x38) = iVar8 + 1U;
        if (*(uint *)(lVar24 + 0x3c) < iVar8 + 1U) {
          FUN_1446f48e2(local_110,iVar8);
        }
        lVar25 = local_148;
        *(undefined4 *)(*(longlong *)(local_148 + 0x30) + (longlong)iVar8 * 4) = 0xffffffff;
        local_f8 = (void *)CONCAT44(local_f8._4_4_,*(int *)(local_148 + 0x38) + -1);
        local_b8 = &local_e8;
        uStack_b0 = &local_f8;
        FUN_149157e44(local_128,&local_d8,&local_b8);
        param_1 = local_138;
      }
      else {
        *(undefined1 *)param_1[5] = 0;
      }
      plVar18 = plVar18 + 10;
    } while (plVar18 != local_108);
  }
LAB_144480799:
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144480878 FUN_144480878 body=78 status=ok
// SIG undefined FUN_144480878(void)

undefined8 * FUN_144480878(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14bb2bc90;
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



// FUNCTION 1444808cc FUN_1444808cc body=29 status=ok
// SIG undefined FUN_1444808cc(void)

void FUN_1444808cc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1444808ea FUN_1444808ea body=29 status=ok
// SIG undefined FUN_1444808ea(void)

undefined8 FUN_1444808ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144480908 FUN_144480908 body=79 status=ok
// SIG undefined FUN_144480908(void)

void FUN_144480908(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x50),
              (longlong)*(int *)((longlong)param_1 + 0x58) * 0x50);
      FUN_1446efa72((longlong)param_1 + 0x50,0,0,0x50);
      return;
    }
  }
  return;
}



// FUNCTION 144480958 FUN_144480958 body=53 status=ok
// SIG undefined FUN_144480958(void)

undefined8 FUN_144480958(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + (longlong)iVar2 * 4) = uVar1;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 1444809ac FUN_1444809ac body=12 status=ok
// SIG undefined FUN_1444809ac(void)

void FUN_1444809ac(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001444809b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1444809b8 FUN_1444809b8 body=29 status=ok
// SIG undefined FUN_1444809b8(void)

undefined8 FUN_1444809b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444809e6 FUN_1444809e6 body=3191 status=ok
// SIG undefined FUN_1444809e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444809e6(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  code *local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined **local_78;
  code *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1446f470e(&local_98,PTR_u_bool_14c764e60,1);
  _DAT_14cc00ec8 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00ed0 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00ed4 = 0;
  FUN_1446f470e(&local_98,PTR_u_float_14c764e68,1);
  _DAT_14cc00ed8 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00ee0 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00ee4 = 0;
  FUN_1446f470e(&local_98,PTR_u_double_14c764e70,1);
  _DAT_14cc00ee8 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00ef0 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00ef4 = 0;
  FUN_1446f470e(&local_98,PTR_DAT_14c764e78,1);
  _DAT_14cc00ef8 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00f00 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00f04 = 0;
  FUN_1446f470e(&local_98,PTR_u_int32_14c764e80,1);
  _DAT_14cc00f08 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00f10 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00f14 = 0;
  FUN_1446f470e(&local_98,PTR_u_int64_14c764e88,1);
  _DAT_14cc00f18 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00f20 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00f24 = 0;
  FUN_1446f470e(&local_98,PTR_u_uint8_14c764e90,1);
  _DAT_14cc00f28 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00f30 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00f34 = 0;
  FUN_1446f470e(&local_98,PTR_u_uint32_14c764e98,1);
  _DAT_14cc00f38 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00f40 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00f44 = 0;
  FUN_1446f470e(&local_98,PTR_u_uint64_14c764ea0,1);
  _DAT_14cc00f48 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00f50 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00f54 = 0;
  FUN_1446f470e(&local_98,PTR_u_FName_14c764ea8,1);
  _DAT_14cc00f58 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00f60 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00f64 = 0;
  FUN_1446f470e(&local_98,PTR_u_FString_14c764eb0,1);
  _DAT_14cc00f68 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00f70 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00f74 = 0;
  FUN_1446f470e(&local_98,PTR_u_FText_14c764eb8,1);
  _DAT_14cc00f78 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00f80 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00f84 = 0;
  FUN_1446f470e(&local_98,PTR_u_TArray<bool>_14c764ec0,1);
  _DAT_14cc00f88 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00f90 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00f94 = 0;
  FUN_1446f470e(&local_98,PTR_u_TArray<float>_14c764ec8,1);
  _DAT_14cc00f98 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00fa0 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00fa4 = 0;
  FUN_1446f470e(&local_98,PTR_u_TArray<double>_14c764ed0,1);
  _DAT_14cc00fa8 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00fb0 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00fb4 = 0;
  FUN_1446f470e(&local_98,PTR_u_TArray<int32>_14c764ed8,1);
  _DAT_14cc00fb8 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00fc0 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00fc4 = 0;
  FUN_1446f470e(&local_98,PTR_u_TArray<uint32>_14c764ee0,1);
  _DAT_14cc00fc8 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00fd0 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00fd4 = 0;
  FUN_1446f470e(&local_98,PTR_u_TArray<uint8>_14c764ee8,1);
  _DAT_14cc00fd8 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00fe0 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00fe4 = 0;
  FUN_1446f470e(&local_98,PTR_u_TArray<FName>_14c764ef0,1);
  _DAT_14cc00fe8 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc00ff0 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc00ff4 = 0;
  FUN_1446f470e(&local_98,PTR_u_TArray<FString>_14c764ef8,1);
  _DAT_14cc00ff8 = (ulonglong)local_98 & 0xffffffff;
  _DAT_14cc01000 = (undefined4)((ulonglong)local_98 >> 0x20);
  DAT_14cc01004 = 0;
  uStack_a8 = 1;
  ppuStack_b0 = &PTR_FUN_14bad6710;
  local_b8 = 2;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bad6730);
  uStack_a8 = 1;
  ppuStack_b0 = &PTR_FUN_14bad7450;
  local_b8 = 3;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bad7470);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/RigVM",&PTR_FUN_14bad7f00,2,&PTR_FUN_14bad7ed0);
  DAT_14cc010f8 = 0;
  uRam000000014cc01100 = 0;
  atexit((_func_5014 *)&LAB_14446f3cc);
  DAT_14cc01108 = 0;
  _DAT_14cc01110 = 0;
  atexit(FUN_14446f3dd);
  FUN_140056680(&DAT_14cc01190,&DAT_149e6ee3c);
  atexit((_func_5014 *)&LAB_1444720c6);
  DAT_14cc011a0 = 0;
  uRam000000014cc011a8 = 0;
  atexit((_func_5014 *)&LAB_14447230b);
  DAT_14cc011b0 = 0;
  _DAT_14cc011b8 = 0;
  atexit(FUN_14447231c);
  uStack_a8 = 0;
  local_b8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  FUN_14282b410(L"/Script/RigVM",&PTR_FUN_14bad84a0,1,0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 2;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bad8930);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 2;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bad8a80);
  DAT_14cc01180 = 0;
  uRam000000014cc01188 = 0;
  DAT_14cc01170 = 0;
  uRam000000014cc01178 = 0;
  atexit(FUN_14447238d);
  local_98 = (code *)&DAT_14a19662d;
  local_90 = 4;
  local_8c = 0;
  FUN_14001a6c0(&local_98,1);
  local_98 = (code *)0x149fca2ba;
  local_90 = 0xd;
  local_8c = 0;
  uVar2 = FUN_14001a6c0(&local_98,1);
  _DAT_14cc012a8 = (ulonglong)uVar2;
  local_88 = 0;
  local_78 = &PTR_LAB_149e01e20;
  local_70 = FUN_14447d53e;
  local_98 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cc012b0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 2;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bad9300);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bad9480);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bad9590);
  uStack_a8 = 1;
  ppuStack_b0 = &PTR_FUN_14bada180;
  local_b8 = 1;
  FUN_14282b410(L"/Script/RigVM",&PTR_FUN_14bada1d0,1,&PTR_FUN_14bada1a0);
  local_98 = (code *)CONCAT71(local_98._1_7_,1);
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cc01968,L"RigVM.EnableVariants",&local_98,
                L"enables the UI bits to create a variant of assets / functions");
  atexit(FUN_14447a63c);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 2;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bada770);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14badaaa0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14badabf0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14badad30);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14badb0a0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 2;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14badb3c0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14badb6f0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14badb9d0);
  uStack_a8 = 1;
  ppuStack_b0 = &PTR_FUN_14badc140;
  local_b8 = 2;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14badc160);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 5;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14badd0b0);
  uStack_a8 = 1;
  ppuStack_b0 = &PTR_FUN_14baddb90;
  local_b8 = 3;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14baddbb0);
  uStack_a8 = 1;
  ppuStack_b0 = &PTR_FUN_14badec00;
  local_b8 = 6;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14badec20);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14badef50);
  uStack_a8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  local_b8 = 1;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14badf110);
  uStack_a8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  local_b8 = 0x14;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bae0b40);
  uStack_a8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  local_b8 = 0xc;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bae2320);
  uStack_a8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  local_b8 = 10;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bae3270);
  uStack_a8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  local_b8 = 0x33;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bae7580);
  uStack_a8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  local_b8 = 0x34;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14baebfa0);
  uStack_a8 = 0;
  ppuStack_b0 = (undefined **)0x0;
  local_b8 = 0x1d;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14baeec10);
  FUN_140056680(&local_98,L"FRigVMFunction_MathIntToNameTest");
  FUN_142770dbc(&DAT_14cc02e10,&local_98,0);
  _DAT_14cc02e10 = &PTR_LAB_14bb1a690;
  FUN_14190668c(&DAT_14cc02f00,0);
  _DAT_14cc03128 = &DAT_14cc03130;
  _DAT_14cc03130 = &PTR_FUN_14bad5c20;
  _DAT_14cc03138 = 0;
  uRam000000014cc03140 = 0;
  _DAT_14cc03148 = 0;
  _DAT_14cc0314c = 0;
  uRam000000014cc03154 = 0;
  _DAT_14cc0315c = 0;
  _DAT_14cc03160 = 0x3f91111111111111;
  _DAT_14cc03168 = 0x800;
  _DAT_14cc03170 = 0;
  uRam000000014cc03178 = 0;
  _DAT_14cc03180 = 0;
  uRam000000014cc03188 = 0;
  _DAT_14cc03190 = 0;
  puVar4 = &DAT_14c846480;
  puVar5 = &DAT_14cc031a0;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  _DAT_14cc03230 = 0;
  uRam000000014cc03238 = 0;
  _DAT_14cc03220 = 0;
  uRam000000014cc03228 = 0;
  _DAT_14cc03210 = 0;
  uRam000000014cc03218 = 0;
  _DAT_14cc03200 = 0;
  uRam000000014cc03208 = 0;
  _DAT_14cc02e10 = &PTR_FUN_14bb1a5e0;
  _DAT_14cc03240 = &PTR_FUN_14bb1a560;
  _DAT_14cc03248 = 0;
  uRam000000014cc03250 = 0;
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_14447a748);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 0xb;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14baf0180);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 0x1f;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14baf3be0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 5;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14baf4a70);
  ppuStack_b0 = &PTR_FUN_14baf7b90;
  uStack_a8 = 3;
  local_b8 = 0x19;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14baf7bf0);
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 0x17;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bafae20);
  FUN_1400b22c2(&local_98,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_98,&DAT_14cc03bbc);
  if (cVar1 == '\0') {
    _DAT_14cc03bbc = 0;
    uRam000000014cc03bc4 = 0;
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_b0 = (undefined **)0x0;
  uStack_a8 = 0;
  local_b8 = 0x35;
  FUN_14282b410(L"/Script/RigVM",0,0,&PTR_FUN_14bb00660);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144481660 FUN_144481660 body=55 status=ok
// SIG undefined FUN_144481660(void)

void FUN_144481660(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc042c0 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc042c0 = FUN_14171c317(FUN_1419067fc,uVar1,L"ERigVMAnimEasingType");
  }
  return;
}



// FUNCTION 144481697 FUN_144481697 body=55 status=ok
// SIG undefined FUN_144481697(void)

void FUN_144481697(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc04308 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc04308 = FUN_14171c317(FUN_1466b8434,uVar1,L"ERigVMSimPointIntegrateType");
  }
  return;
}



// FUNCTION 1444816ce FUN_1444816ce body=241 status=ok
// SIG undefined FUN_1444816ce(void)

void FUN_1444816ce(longlong param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  
  pdVar6 = *(double **)(param_1 + 8);
  dVar3 = *pdVar6;
  dVar4 = pdVar6[1];
  dVar5 = pdVar6[2];
  if (((9.999999747378752e-05 < ABS(dVar3)) || (9.999999747378752e-05 < ABS(dVar4))) ||
     (9.999999747378752e-05 < ABS(dVar5))) {
    fVar7 = (float)SQRT(dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4);
    fVar1 = **(float **)(param_1 + 0x18);
    fVar2 = *(float *)(param_1 + 0x10);
    fVar10 = fVar7;
    if (((1e-08 <= fVar1) && (fVar2 < fVar1)) && (fVar1 <= fVar7)) {
      fVar10 = fVar1;
    }
    if (fVar10 <= fVar2) {
      fVar10 = fVar2;
    }
    dVar8 = (double)fVar10;
    dVar9 = 1.0 / (double)fVar7;
    *pdVar6 = dVar9 * dVar3 * dVar8;
    pdVar6[1] = dVar4 * dVar8 * dVar9;
    pdVar6[2] = dVar5 * dVar8 * dVar9;
  }
  return;
}



// FUNCTION 1444817c0 FUN_1444817c0 body=527 status=ok
// SIG undefined FUN_1444817c0(void)

void FUN_1444817c0(longlong param_1)

{
  float fVar1;
  float fVar2;
  double *pdVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  
  pdVar3 = *(double **)(param_1 + 8);
  dVar6 = pdVar3[2];
  if (*(int *)(param_1 + 0x10) == 2) {
    dVar8 = pdVar3[1] * 0.0;
    dVar5 = *pdVar3;
    if (((ABS(dVar5) <= 9.999999747378752e-05) && (ABS(dVar8) <= 9.999999747378752e-05)) &&
       (ABS(dVar6) <= 9.999999747378752e-05)) {
      return;
    }
    dVar8 = dVar6 * dVar6 + dVar5 * dVar5 + dVar8 * dVar8;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 1) {
      dVar8 = dVar6 * 0.0;
      dVar5 = *pdVar3;
      dVar6 = pdVar3[1];
      if (((ABS(dVar5) <= 9.999999747378752e-05) && (ABS(dVar6) <= 9.999999747378752e-05)) &&
         (ABS(dVar8) <= 9.999999747378752e-05)) {
        return;
      }
      fVar7 = (float)SQRT(dVar8 * dVar8 + dVar5 * dVar5 + dVar6 * dVar6);
      fVar1 = **(float **)(param_1 + 0x18);
      fVar2 = *(float *)(param_1 + 0x14);
      fVar9 = fVar7;
      if (((1e-08 <= fVar1) && (fVar2 < fVar1)) && (fVar1 <= fVar7)) {
        fVar9 = fVar1;
      }
      if (fVar9 <= fVar2) {
        fVar9 = fVar2;
      }
      lVar4 = 8;
      goto LAB_14448199d;
    }
    dVar5 = pdVar3[1];
    dVar8 = *pdVar3 * 0.0;
    if (((ABS(dVar8) <= 9.999999747378752e-05) && (ABS(dVar5) <= 9.999999747378752e-05)) &&
       (ABS(dVar6) <= 9.999999747378752e-05)) {
      return;
    }
    pdVar3 = pdVar3 + 1;
    dVar8 = dVar6 * dVar6 + dVar8 * dVar8 + dVar5 * dVar5;
  }
  fVar7 = (float)SQRT(dVar8);
  fVar1 = **(float **)(param_1 + 0x18);
  fVar2 = *(float *)(param_1 + 0x14);
  fVar9 = fVar7;
  if (((1e-08 <= fVar1) && (fVar2 < fVar1)) && (fVar1 <= fVar7)) {
    fVar9 = fVar1;
  }
  if (fVar9 <= fVar2) {
    fVar9 = fVar2;
  }
  lVar4 = 0x10;
LAB_14448199d:
  *pdVar3 = (1.0 / (double)fVar7) * dVar5 * (double)fVar9;
  *(double *)(*(longlong *)(param_1 + 8) + lVar4) = dVar6 * (double)fVar9 * (1.0 / (double)fVar7);
  return;
}



// FUNCTION 144481a02 FUN_144481a02 body=49 status=ok
// SIG undefined FUN_144481a02(void)

void FUN_144481a02(void)

{
  FUN_1457f2ec5(DAT_14cc04608,DAT_14cc04610);
  if (DAT_14cc04608 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144481a34 FUN_144481a34 body=427 status=ok
// SIG undefined FUN_144481a34(void)

undefined8
FUN_144481a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  size_t sVar3;
  ulonglong uVar4;
  ulonglong *_Str;
  ulonglong **ppuVar5;
  char **ppcVar6;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  char **local_70;
  ulonglong *local_68;
  undefined4 local_5c;
  char *local_58;
  undefined4 local_50;
  char *local_48;
  ulonglong *local_40;
  undefined4 *local_38;
  ulonglong *local_30;
  undefined4 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_5c = param_4;
  if ((longlong)DAT_14cc04340 < 0) {
    local_40 = (ulonglong *)(DAT_14cc04340 & 0x7fffffffffffffff);
    if (DAT_14cc0434c == '\x01') {
      ppuVar5 = &local_40;
      FUN_1446f470e(ppuVar5,local_40,1);
    }
    else {
      if (local_40 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)local_40);
        uVar1 = (undefined4)sVar3;
      }
      local_38 = (undefined4 *)CONCAT44(local_38._4_4_,uVar1);
      ppuVar5 = (ulonglong **)&local_58;
      FUN_14001c09c(ppuVar5,&local_40,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar5;
    local_78 = (ulonglong)DAT_14cc04348 << 0x20;
    DAT_14cc04340 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04348 << 0x20;
    local_78 = DAT_14cc04340 & 0xffffffff;
  }
  local_78 = local_78 | uVar2;
  local_40 = &local_78;
  local_38 = &local_5c;
  if ((longlong)DAT_14cc04330 < 0) {
    _Str = (ulonglong *)(DAT_14cc04330 & 0x7fffffffffffffff);
    if (DAT_14cc0433c == '\x01') {
      ppcVar6 = &local_58;
      FUN_1446f470e(ppcVar6,_Str,1);
    }
    else {
      local_58 = (char *)_Str;
      if (_Str == (ulonglong *)0x0) {
        local_50 = 0;
      }
      else {
        sVar3 = strlen((char *)_Str);
        local_50 = (undefined4)sVar3;
      }
      ppcVar6 = &local_48;
      FUN_14001c09c(ppcVar6,&local_58,1);
    }
    uVar2 = (ulonglong)*(uint *)ppcVar6;
    uVar4 = (ulonglong)DAT_14cc04338 << 0x20;
    DAT_14cc04330 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04338 << 0x20;
    uVar4 = DAT_14cc04330 & 0xffffffff;
  }
  local_48 = (char *)(uVar4 | uVar2);
  local_30 = (ulonglong *)&local_48;
  local_70 = (char **)&local_40;
  local_68 = &local_20;
  local_28 = &local_5c;
  FUN_144481be0(param_2);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144481be0 FUN_144481be0 body=247 status=ok
// SIG undefined FUN_144481be0(void)

undefined8 * FUN_144481be0(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar4 = (ulonglong)(param_2[1] - *param_2) >> 4;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_141724914(param_1,uVar4 & 0xffffffff);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_1 + 9) == 0) || (*(int *)(param_1 + 9) < iVar2)) {
      *(int *)(param_1 + 9) = iVar2;
      FUN_14487ddf8(param_1);
    }
  }
  puVar5 = (undefined4 *)*param_2;
  puVar1 = (undefined4 *)param_2[1];
  if (puVar5 != puVar1) {
    do {
      local_48 = *puVar5;
      uStack_44 = puVar5[1];
      uStack_40 = puVar5[2];
      uStack_3c = puVar5[3];
      FUN_140171856(param_1,local_34,&local_48,0);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144481cd9 FUN_144481cd9 body=49 status=ok
// SIG undefined FUN_144481cd9(void)

void FUN_144481cd9(void)

{
  FUN_1457f2ec5(DAT_14cc04620,DAT_14cc04628);
  if (DAT_14cc04620 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144481d0a FUN_144481d0a body=250 status=ok
// SIG undefined FUN_144481d0a(void)

undefined8
FUN_144481d0a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar4;
  ulonglong **ppuVar5;
  undefined1 auStack_68 [32];
  char **local_48;
  ulonglong *local_40;
  undefined4 local_34;
  char *local_30;
  ulonglong *local_28;
  undefined4 *local_20;
  ulonglong local_18;
  size_t sVar3;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = param_4;
  if ((longlong)DAT_14cc04330 < 0) {
    local_28 = (ulonglong *)(DAT_14cc04330 & 0x7fffffffffffffff);
    if (DAT_14cc0433c == '\x01') {
      ppuVar5 = &local_28;
      FUN_1446f470e(ppuVar5,local_28,1);
    }
    else {
      if (local_28 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)local_28);
        uVar1 = (undefined4)sVar3;
      }
      local_20 = (undefined4 *)CONCAT44(local_20._4_4_,uVar1);
      ppuVar5 = (ulonglong **)&local_30;
      FUN_14001c09c(ppuVar5,&local_28,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar5;
    uVar4 = (ulonglong)DAT_14cc04338 << 0x20;
    DAT_14cc04330 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04338 << 0x20;
    uVar4 = DAT_14cc04330 & 0xffffffff;
  }
  local_30 = (char *)(uVar4 | uVar2);
  local_28 = (ulonglong *)&local_30;
  local_48 = (char **)&local_28;
  local_20 = &local_34;
  local_40 = &local_18;
  FUN_144481be0(param_2);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144481e05 FUN_144481e05 body=49 status=ok
// SIG undefined FUN_144481e05(void)

void FUN_144481e05(void)

{
  FUN_1457f2ec5(DAT_14cc04668,DAT_14cc04670);
  if (DAT_14cc04668 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144481e36 FUN_144481e36 body=441 status=ok
// SIG undefined FUN_144481e36(void)

undefined8
FUN_144481e36(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  size_t sVar3;
  ulonglong uVar4;
  ulonglong *_Str;
  ulonglong **ppuVar5;
  char **ppcVar6;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  char **local_68;
  ulonglong *local_60;
  undefined4 local_54;
  char *local_50;
  undefined4 local_48;
  char *local_40;
  ulonglong *local_38;
  undefined4 *local_30;
  ulonglong *local_28;
  undefined4 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_54 = param_4;
  if ((longlong)DAT_14cc04330 < 0) {
    local_38 = (ulonglong *)(DAT_14cc04330 & 0x7fffffffffffffff);
    if (DAT_14cc0433c == '\x01') {
      ppuVar5 = &local_38;
      FUN_1446f470e(ppuVar5,local_38,1);
    }
    else {
      if (local_38 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)local_38);
        uVar1 = (undefined4)sVar3;
      }
      local_30 = (undefined4 *)CONCAT44(local_30._4_4_,uVar1);
      ppuVar5 = (ulonglong **)&local_50;
      FUN_14001c09c(ppuVar5,&local_38,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar5;
    local_70 = (ulonglong)DAT_14cc04338 << 0x20;
    DAT_14cc04330 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04338 << 0x20;
    local_70 = DAT_14cc04330 & 0xffffffff;
  }
  local_70 = local_70 | uVar2;
  local_38 = &local_70;
  local_30 = &local_54;
  if ((longlong)DAT_14cc04350 < 0) {
    _Str = (ulonglong *)(DAT_14cc04350 & 0x7fffffffffffffff);
    if (DAT_14cc0435c == '\x01') {
      ppcVar6 = &local_50;
      FUN_1446f470e(ppcVar6,_Str,1);
    }
    else {
      local_50 = (char *)_Str;
      if (_Str == (ulonglong *)0x0) {
        local_48 = 0;
      }
      else {
        sVar3 = strlen((char *)_Str);
        local_48 = (undefined4)sVar3;
      }
      ppcVar6 = &local_40;
      FUN_14001c09c(ppcVar6,&local_50,1);
    }
    uVar2 = (ulonglong)*(uint *)ppcVar6;
    uVar4 = (ulonglong)DAT_14cc04358 << 0x20;
    DAT_14cc04350 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04358 << 0x20;
    uVar4 = DAT_14cc04350 & 0xffffffff;
  }
  local_40 = (char *)(uVar4 | uVar2);
  local_28 = (ulonglong *)&local_40;
  local_68 = (char **)&local_38;
  local_20 = &DAT_14c764f14;
  local_60 = &local_18;
  FUN_144481be0(param_2);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144481ff0 FUN_144481ff0 body=49 status=ok
// SIG undefined FUN_144481ff0(void)

void FUN_144481ff0(void)

{
  FUN_1457f2ec5(DAT_14cc046a8,DAT_14cc046b0);
  if (DAT_14cc046a8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144482022 FUN_144482022 body=441 status=ok
// SIG undefined FUN_144482022(void)

undefined8
FUN_144482022(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  size_t sVar3;
  ulonglong uVar4;
  ulonglong *_Str;
  ulonglong **ppuVar5;
  char **ppcVar6;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  char **local_68;
  ulonglong *local_60;
  undefined4 local_54;
  char *local_50;
  undefined4 local_48;
  char *local_40;
  ulonglong *local_38;
  undefined4 *local_30;
  ulonglong *local_28;
  undefined4 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_54 = param_4;
  if ((longlong)DAT_14cc04330 < 0) {
    local_38 = (ulonglong *)(DAT_14cc04330 & 0x7fffffffffffffff);
    if (DAT_14cc0433c == '\x01') {
      ppuVar5 = &local_38;
      FUN_1446f470e(ppuVar5,local_38,1);
    }
    else {
      if (local_38 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)local_38);
        uVar1 = (undefined4)sVar3;
      }
      local_30 = (undefined4 *)CONCAT44(local_30._4_4_,uVar1);
      ppuVar5 = (ulonglong **)&local_50;
      FUN_14001c09c(ppuVar5,&local_38,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar5;
    local_70 = (ulonglong)DAT_14cc04338 << 0x20;
    DAT_14cc04330 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04338 << 0x20;
    local_70 = DAT_14cc04330 & 0xffffffff;
  }
  local_70 = local_70 | uVar2;
  local_38 = &local_70;
  local_30 = &local_54;
  if ((longlong)DAT_14cc04350 < 0) {
    _Str = (ulonglong *)(DAT_14cc04350 & 0x7fffffffffffffff);
    if (DAT_14cc0435c == '\x01') {
      ppcVar6 = &local_50;
      FUN_1446f470e(ppcVar6,_Str,1);
    }
    else {
      local_50 = (char *)_Str;
      if (_Str == (ulonglong *)0x0) {
        local_48 = 0;
      }
      else {
        sVar3 = strlen((char *)_Str);
        local_48 = (undefined4)sVar3;
      }
      ppcVar6 = &local_40;
      FUN_14001c09c(ppcVar6,&local_50,1);
    }
    uVar2 = (ulonglong)*(uint *)ppcVar6;
    uVar4 = (ulonglong)DAT_14cc04358 << 0x20;
    DAT_14cc04350 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04358 << 0x20;
    uVar4 = DAT_14cc04350 & 0xffffffff;
  }
  local_40 = (char *)(uVar4 | uVar2);
  local_28 = (ulonglong *)&local_40;
  local_68 = (char **)&local_38;
  local_20 = &DAT_14c764f14;
  local_60 = &local_18;
  FUN_144481be0(param_2);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444821dc FUN_1444821dc body=49 status=ok
// SIG undefined FUN_1444821dc(void)

void FUN_1444821dc(void)

{
  FUN_1457f2ec5(DAT_14cc046f8,DAT_14cc04700);
  if (DAT_14cc046f8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14448220e FUN_14448220e body=663 status=ok
// SIG undefined FUN_14448220e(void)

undefined8
FUN_14448220e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  size_t sVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong **ppuVar6;
  char **ppcVar7;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  ulonglong local_80;
  char **local_78;
  ulonglong *local_70;
  undefined4 local_64;
  char *local_60;
  undefined4 local_58;
  char *local_50;
  ulonglong *local_48;
  undefined4 *local_40;
  ulonglong *local_38;
  undefined4 *local_30;
  ulonglong *local_28;
  char **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_64 = param_4;
  if ((longlong)DAT_14cc04330 < 0) {
    local_48 = (ulonglong *)(DAT_14cc04330 & 0x7fffffffffffffff);
    if (DAT_14cc0433c == '\x01') {
      ppuVar6 = &local_48;
      FUN_1446f470e(ppuVar6,local_48,1);
    }
    else {
      if (local_48 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)local_48);
        uVar1 = (undefined4)sVar3;
      }
      local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar1);
      ppuVar6 = (ulonglong **)&local_60;
      FUN_14001c09c(ppuVar6,&local_48,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar6;
    local_80 = (ulonglong)DAT_14cc04338 << 0x20;
    DAT_14cc04330 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04338 << 0x20;
    local_80 = DAT_14cc04330 & 0xffffffff;
  }
  local_80 = local_80 | uVar2;
  local_48 = &local_80;
  local_40 = &local_64;
  if ((longlong)DAT_14cc04350 < 0) {
    puVar5 = (ulonglong *)(DAT_14cc04350 & 0x7fffffffffffffff);
    if (DAT_14cc0435c == '\x01') {
      ppcVar7 = &local_60;
      FUN_1446f470e(ppcVar7,puVar5,1);
    }
    else {
      local_60 = (char *)puVar5;
      if (puVar5 == (ulonglong *)0x0) {
        local_58 = 0;
      }
      else {
        sVar3 = strlen((char *)puVar5);
        local_58 = (undefined4)sVar3;
      }
      ppcVar7 = &local_50;
      FUN_14001c09c(ppcVar7,&local_60,1);
    }
    uVar2 = (ulonglong)*(uint *)ppcVar7;
    local_88 = (ulonglong)DAT_14cc04358 << 0x20;
    DAT_14cc04350 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04358 << 0x20;
    local_88 = DAT_14cc04350 & 0xffffffff;
  }
  local_88 = local_88 | uVar2;
  local_38 = &local_88;
  local_30 = &DAT_14c764f14;
  if ((longlong)DAT_14cc04370 < 0) {
    puVar5 = (ulonglong *)(DAT_14cc04370 & 0x7fffffffffffffff);
    if (DAT_14cc0437c == '\x01') {
      ppcVar7 = &local_60;
      FUN_1446f470e(ppcVar7,puVar5,1);
    }
    else {
      local_60 = (char *)puVar5;
      if (puVar5 == (ulonglong *)0x0) {
        local_58 = 0;
      }
      else {
        sVar3 = strlen((char *)puVar5);
        local_58 = (undefined4)sVar3;
      }
      ppcVar7 = &local_50;
      FUN_14001c09c(ppcVar7,&local_60,1);
    }
    uVar2 = (ulonglong)*(uint *)ppcVar7;
    uVar4 = (ulonglong)DAT_14cc04378 << 0x20;
    DAT_14cc04370 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04378 << 0x20;
    uVar4 = DAT_14cc04370 & 0xffffffff;
  }
  local_50 = (char *)(uVar4 | uVar2);
  FUN_14001a7b2();
  uVar1 = (**(code **)(DAT_14cc012d0 + 0x108))(&DAT_14cc012d0,local_64);
  local_20 = &local_60;
  local_60 = (char *)CONCAT44(local_60._4_4_,uVar1);
  local_28 = (ulonglong *)&local_50;
  local_78 = (char **)&local_48;
  local_70 = &local_18;
  FUN_144481be0(param_2);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444824a6 FUN_1444824a6 body=49 status=ok
// SIG undefined FUN_1444824a6(void)

void FUN_1444824a6(void)

{
  FUN_1457f2ec5(DAT_14cc04748,DAT_14cc04750);
  if (DAT_14cc04748 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444824d8 FUN_1444824d8 body=1323 status=ok
// SIG undefined FUN_1444824d8(void)

undefined8
FUN_1444824d8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  size_t sVar4;
  ulonglong uVar5;
  char ***pppcVar6;
  ulonglong *puVar7;
  ulonglong **ppuVar8;
  char **ppcVar9;
  undefined1 auStack_c8 [44];
  undefined4 local_9c;
  char **local_98 [2];
  ulonglong local_88;
  ulonglong local_80;
  char **local_78 [2];
  undefined1 local_64 [4];
  char *local_60;
  undefined4 local_58;
  char *local_50;
  ulonglong *local_48;
  undefined4 *local_40;
  ulonglong *local_38;
  undefined4 *local_30;
  ulonglong *local_28;
  char **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_64 = (undefined1  [4])param_4;
  cVar1 = FUN_1403f35db(*param_3,&DAT_14cc04330);
  if (cVar1 == '\0') {
    if ((longlong)DAT_14cc04330 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04330 & 0x7fffffffffffffff);
      if (DAT_14cc0433c == '\x01') {
        ppuVar8 = &local_48;
        FUN_1446f470e(ppuVar8,puVar7,1);
      }
      else {
        local_48 = puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          uVar2 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          uVar2 = (undefined4)sVar4;
        }
        local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar2);
        ppuVar8 = (ulonglong **)&local_60;
        FUN_14001c09c(ppuVar8,&local_48,1);
      }
      uVar3 = (ulonglong)*(uint *)ppuVar8;
      local_80 = (ulonglong)DAT_14cc04338 << 0x20;
      DAT_14cc04330 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04338 << 0x20;
      local_80 = DAT_14cc04330 & 0xffffffff;
    }
    local_80 = local_80 | uVar3;
    FUN_14001a7b2();
    local_9c = (**(code **)(DAT_14cc012d0 + 0x100))(&DAT_14cc012d0,local_64);
    local_40 = &local_9c;
    local_48 = &local_80;
    if ((longlong)DAT_14cc04360 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04360 & 0x7fffffffffffffff);
      if (DAT_14cc0436c == '\x01') {
        ppcVar9 = &local_60;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_60 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_58 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_58 = (undefined4)sVar4;
        }
        ppcVar9 = &local_50;
        FUN_14001c09c(ppcVar9,&local_60,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      local_88 = (ulonglong)DAT_14cc04368 << 0x20;
      DAT_14cc04360 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04368 << 0x20;
      local_88 = DAT_14cc04360 & 0xffffffff;
    }
    local_88 = local_88 | uVar3;
    local_38 = &local_88;
    local_30 = &DAT_14c764f14;
    if ((longlong)DAT_14cc04370 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04370 & 0x7fffffffffffffff);
      if (DAT_14cc0437c == '\x01') {
        ppcVar9 = &local_60;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_60 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_58 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_58 = (undefined4)sVar4;
        }
        ppcVar9 = &local_50;
        FUN_14001c09c(ppcVar9,&local_60,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      uVar5 = (ulonglong)DAT_14cc04378 << 0x20;
      DAT_14cc04370 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04378 << 0x20;
      uVar5 = DAT_14cc04370 & 0xffffffff;
    }
    local_50 = (char *)(uVar5 | uVar3);
    local_98[0] = (char **)&local_48;
    local_20 = (char **)local_64;
    pppcVar6 = local_98;
  }
  else {
    if ((longlong)DAT_14cc04330 < 0) {
      local_48 = (ulonglong *)(DAT_14cc04330 & 0x7fffffffffffffff);
      if (DAT_14cc0433c == '\x01') {
        ppuVar8 = &local_48;
        FUN_1446f470e(ppuVar8,local_48,1);
      }
      else {
        if (local_48 == (ulonglong *)0x0) {
          uVar2 = 0;
        }
        else {
          sVar4 = strlen((char *)local_48);
          uVar2 = (undefined4)sVar4;
        }
        local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar2);
        ppuVar8 = (ulonglong **)&local_60;
        FUN_14001c09c(ppuVar8,&local_48,1);
      }
      uVar3 = (ulonglong)*(uint *)ppuVar8;
      local_80 = (ulonglong)DAT_14cc04338 << 0x20;
      DAT_14cc04330 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04338 << 0x20;
      local_80 = DAT_14cc04330 & 0xffffffff;
    }
    local_80 = local_80 | uVar3;
    local_48 = &local_80;
    local_40 = (undefined4 *)local_64;
    if ((longlong)DAT_14cc04360 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04360 & 0x7fffffffffffffff);
      if (DAT_14cc0436c == '\x01') {
        ppcVar9 = &local_60;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_60 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_58 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_58 = (undefined4)sVar4;
        }
        ppcVar9 = &local_50;
        FUN_14001c09c(ppcVar9,&local_60,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      local_88 = (ulonglong)DAT_14cc04368 << 0x20;
      DAT_14cc04360 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04368 << 0x20;
      local_88 = DAT_14cc04360 & 0xffffffff;
    }
    local_88 = local_88 | uVar3;
    local_38 = &local_88;
    local_30 = &DAT_14c764f14;
    if ((longlong)DAT_14cc04370 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04370 & 0x7fffffffffffffff);
      if (DAT_14cc0437c == '\x01') {
        ppcVar9 = &local_60;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_60 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_58 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_58 = (undefined4)sVar4;
        }
        ppcVar9 = &local_50;
        FUN_14001c09c(ppcVar9,&local_60,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      uVar5 = (ulonglong)DAT_14cc04378 << 0x20;
      DAT_14cc04370 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04378 << 0x20;
      uVar5 = DAT_14cc04370 & 0xffffffff;
    }
    local_50 = (char *)(uVar5 | uVar3);
    FUN_14001a7b2();
    uVar2 = (**(code **)(DAT_14cc012d0 + 0x108))(&DAT_14cc012d0,local_64);
    local_20 = &local_60;
    local_60 = (char *)CONCAT44(local_60._4_4_,uVar2);
    local_78[0] = (char **)&local_48;
    pppcVar6 = local_78;
  }
  local_28 = (ulonglong *)&local_50;
  pppcVar6[1] = (char **)&local_18;
  FUN_144481be0(param_2);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144482a04 FUN_144482a04 body=49 status=ok
// SIG undefined FUN_144482a04(void)

void FUN_144482a04(void)

{
  FUN_1457f2ec5(DAT_14cc04798,DAT_14cc047a0);
  if (DAT_14cc04798 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144482a36 FUN_144482a36 body=1323 status=ok
// SIG undefined FUN_144482a36(void)

undefined8
FUN_144482a36(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  size_t sVar4;
  ulonglong uVar5;
  char ***pppcVar6;
  ulonglong *puVar7;
  ulonglong **ppuVar8;
  char **ppcVar9;
  undefined1 auStack_c8 [44];
  undefined4 local_9c;
  char **local_98 [2];
  ulonglong local_88;
  ulonglong local_80;
  char **local_78 [2];
  undefined1 local_64 [4];
  char *local_60;
  undefined4 local_58;
  char *local_50;
  ulonglong *local_48;
  undefined4 *local_40;
  ulonglong *local_38;
  undefined4 *local_30;
  ulonglong *local_28;
  char **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_64 = (undefined1  [4])param_4;
  cVar1 = FUN_1403f35db(*param_3,&DAT_14cc04330);
  if (cVar1 == '\0') {
    if ((longlong)DAT_14cc04330 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04330 & 0x7fffffffffffffff);
      if (DAT_14cc0433c == '\x01') {
        ppuVar8 = &local_48;
        FUN_1446f470e(ppuVar8,puVar7,1);
      }
      else {
        local_48 = puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          uVar2 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          uVar2 = (undefined4)sVar4;
        }
        local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar2);
        ppuVar8 = (ulonglong **)&local_60;
        FUN_14001c09c(ppuVar8,&local_48,1);
      }
      uVar3 = (ulonglong)*(uint *)ppuVar8;
      local_80 = (ulonglong)DAT_14cc04338 << 0x20;
      DAT_14cc04330 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04338 << 0x20;
      local_80 = DAT_14cc04330 & 0xffffffff;
    }
    local_80 = local_80 | uVar3;
    FUN_14001a7b2();
    local_9c = (**(code **)(DAT_14cc012d0 + 0x100))(&DAT_14cc012d0,local_64);
    local_40 = &local_9c;
    local_48 = &local_80;
    if ((longlong)DAT_14cc04360 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04360 & 0x7fffffffffffffff);
      if (DAT_14cc0436c == '\x01') {
        ppcVar9 = &local_60;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_60 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_58 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_58 = (undefined4)sVar4;
        }
        ppcVar9 = &local_50;
        FUN_14001c09c(ppcVar9,&local_60,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      local_88 = (ulonglong)DAT_14cc04368 << 0x20;
      DAT_14cc04360 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04368 << 0x20;
      local_88 = DAT_14cc04360 & 0xffffffff;
    }
    local_88 = local_88 | uVar3;
    local_38 = &local_88;
    local_30 = &DAT_14c764f14;
    if ((longlong)DAT_14cc04370 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04370 & 0x7fffffffffffffff);
      if (DAT_14cc0437c == '\x01') {
        ppcVar9 = &local_60;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_60 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_58 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_58 = (undefined4)sVar4;
        }
        ppcVar9 = &local_50;
        FUN_14001c09c(ppcVar9,&local_60,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      uVar5 = (ulonglong)DAT_14cc04378 << 0x20;
      DAT_14cc04370 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04378 << 0x20;
      uVar5 = DAT_14cc04370 & 0xffffffff;
    }
    local_50 = (char *)(uVar5 | uVar3);
    local_98[0] = (char **)&local_48;
    local_20 = (char **)local_64;
    pppcVar6 = local_98;
  }
  else {
    if ((longlong)DAT_14cc04330 < 0) {
      local_48 = (ulonglong *)(DAT_14cc04330 & 0x7fffffffffffffff);
      if (DAT_14cc0433c == '\x01') {
        ppuVar8 = &local_48;
        FUN_1446f470e(ppuVar8,local_48,1);
      }
      else {
        if (local_48 == (ulonglong *)0x0) {
          uVar2 = 0;
        }
        else {
          sVar4 = strlen((char *)local_48);
          uVar2 = (undefined4)sVar4;
        }
        local_40 = (undefined4 *)CONCAT44(local_40._4_4_,uVar2);
        ppuVar8 = (ulonglong **)&local_60;
        FUN_14001c09c(ppuVar8,&local_48,1);
      }
      uVar3 = (ulonglong)*(uint *)ppuVar8;
      local_80 = (ulonglong)DAT_14cc04338 << 0x20;
      DAT_14cc04330 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04338 << 0x20;
      local_80 = DAT_14cc04330 & 0xffffffff;
    }
    local_80 = local_80 | uVar3;
    local_48 = &local_80;
    local_40 = (undefined4 *)local_64;
    if ((longlong)DAT_14cc04360 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04360 & 0x7fffffffffffffff);
      if (DAT_14cc0436c == '\x01') {
        ppcVar9 = &local_60;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_60 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_58 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_58 = (undefined4)sVar4;
        }
        ppcVar9 = &local_50;
        FUN_14001c09c(ppcVar9,&local_60,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      local_88 = (ulonglong)DAT_14cc04368 << 0x20;
      DAT_14cc04360 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04368 << 0x20;
      local_88 = DAT_14cc04360 & 0xffffffff;
    }
    local_88 = local_88 | uVar3;
    local_38 = &local_88;
    local_30 = &DAT_14c764f14;
    if ((longlong)DAT_14cc04370 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04370 & 0x7fffffffffffffff);
      if (DAT_14cc0437c == '\x01') {
        ppcVar9 = &local_60;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_60 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_58 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_58 = (undefined4)sVar4;
        }
        ppcVar9 = &local_50;
        FUN_14001c09c(ppcVar9,&local_60,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      uVar5 = (ulonglong)DAT_14cc04378 << 0x20;
      DAT_14cc04370 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04378 << 0x20;
      uVar5 = DAT_14cc04370 & 0xffffffff;
    }
    local_50 = (char *)(uVar5 | uVar3);
    FUN_14001a7b2();
    uVar2 = (**(code **)(DAT_14cc012d0 + 0x108))(&DAT_14cc012d0,local_64);
    local_20 = &local_60;
    local_60 = (char *)CONCAT44(local_60._4_4_,uVar2);
    local_78[0] = (char **)&local_48;
    pppcVar6 = local_78;
  }
  local_28 = (ulonglong *)&local_50;
  pppcVar6[1] = (char **)&local_18;
  FUN_144481be0(param_2);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144482f62 FUN_144482f62 body=49 status=ok
// SIG undefined FUN_144482f62(void)

void FUN_144482f62(void)

{
  FUN_1457f2ec5(DAT_14cc047e8,DAT_14cc047f0);
  if (DAT_14cc047e8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144482f93 FUN_144482f93 body=49 status=ok
// SIG undefined FUN_144482f93(void)

void FUN_144482f93(void)

{
  FUN_1457f2ec5(DAT_14cc04828,DAT_14cc04830);
  if (DAT_14cc04828 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144482fc4 FUN_144482fc4 body=441 status=ok
// SIG undefined FUN_144482fc4(void)

undefined8
FUN_144482fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  size_t sVar3;
  ulonglong uVar4;
  ulonglong *_Str;
  ulonglong **ppuVar5;
  char **ppcVar6;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  char **local_68;
  ulonglong *local_60;
  undefined4 local_54;
  char *local_50;
  undefined4 local_48;
  char *local_40;
  ulonglong *local_38;
  undefined4 *local_30;
  ulonglong *local_28;
  undefined4 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_54 = param_4;
  if ((longlong)DAT_14cc04330 < 0) {
    local_38 = (ulonglong *)(DAT_14cc04330 & 0x7fffffffffffffff);
    if (DAT_14cc0433c == '\x01') {
      ppuVar5 = &local_38;
      FUN_1446f470e(ppuVar5,local_38,1);
    }
    else {
      if (local_38 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)local_38);
        uVar1 = (undefined4)sVar3;
      }
      local_30 = (undefined4 *)CONCAT44(local_30._4_4_,uVar1);
      ppuVar5 = (ulonglong **)&local_50;
      FUN_14001c09c(ppuVar5,&local_38,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar5;
    local_70 = (ulonglong)DAT_14cc04338 << 0x20;
    DAT_14cc04330 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04338 << 0x20;
    local_70 = DAT_14cc04330 & 0xffffffff;
  }
  local_70 = local_70 | uVar2;
  local_38 = &local_70;
  local_30 = &local_54;
  if ((longlong)DAT_14cc04360 < 0) {
    _Str = (ulonglong *)(DAT_14cc04360 & 0x7fffffffffffffff);
    if (DAT_14cc0436c == '\x01') {
      ppcVar6 = &local_50;
      FUN_1446f470e(ppcVar6,_Str,1);
    }
    else {
      local_50 = (char *)_Str;
      if (_Str == (ulonglong *)0x0) {
        local_48 = 0;
      }
      else {
        sVar3 = strlen((char *)_Str);
        local_48 = (undefined4)sVar3;
      }
      ppcVar6 = &local_40;
      FUN_14001c09c(ppcVar6,&local_50,1);
    }
    uVar2 = (ulonglong)*(uint *)ppcVar6;
    uVar4 = (ulonglong)DAT_14cc04368 << 0x20;
    DAT_14cc04360 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04368 << 0x20;
    uVar4 = DAT_14cc04360 & 0xffffffff;
  }
  local_40 = (char *)(uVar4 | uVar2);
  local_28 = (ulonglong *)&local_40;
  local_68 = (char **)&local_38;
  local_20 = &DAT_14c764f14;
  local_60 = &local_18;
  FUN_144481be0(param_2);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14448317e FUN_14448317e body=49 status=ok
// SIG undefined FUN_14448317e(void)

void FUN_14448317e(void)

{
  FUN_1457f2ec5(DAT_14cc04888,DAT_14cc04890);
  if (DAT_14cc04888 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444831b0 FUN_1444831b0 body=1700 status=ok
// SIG undefined FUN_1444831b0(void)

undefined8
FUN_1444831b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  size_t sVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  ulonglong **ppuVar8;
  char **ppcVar9;
  undefined1 auStack_d8 [32];
  longlong local_b8 [2];
  ulonglong local_a8;
  undefined4 local_9c;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88 [2];
  undefined4 local_74;
  char *local_70;
  undefined4 local_68;
  char *local_60;
  ulonglong *local_58;
  undefined4 *local_50;
  ulonglong *local_48;
  undefined4 *local_40;
  ulonglong *local_38;
  undefined4 *local_30;
  ulonglong *local_28;
  undefined4 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_74 = param_4;
  cVar1 = FUN_1403f35db(*param_3,&DAT_14cc04330);
  if (cVar1 == '\0') {
    if ((longlong)DAT_14cc04330 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04330 & 0x7fffffffffffffff);
      if (DAT_14cc0433c == '\x01') {
        ppuVar8 = &local_58;
        FUN_1446f470e(ppuVar8,puVar7,1);
      }
      else {
        local_58 = puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          uVar2 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          uVar2 = (undefined4)sVar4;
        }
        local_50 = (undefined4 *)CONCAT44(local_50._4_4_,uVar2);
        ppuVar8 = (ulonglong **)&local_70;
        FUN_14001c09c(ppuVar8,&local_58,1);
      }
      uVar3 = (ulonglong)*(uint *)ppuVar8;
      local_90 = (ulonglong)DAT_14cc04338 << 0x20;
      DAT_14cc04330 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04338 << 0x20;
      local_90 = DAT_14cc04330 & 0xffffffff;
    }
    local_90 = local_90 | uVar3;
    FUN_14001a7b2();
    local_9c = (**(code **)(DAT_14cc012d0 + 0x100))(&DAT_14cc012d0,local_74);
    local_50 = &local_9c;
    local_58 = &local_90;
    if ((longlong)DAT_14cc04370 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04370 & 0x7fffffffffffffff);
      if (DAT_14cc0437c == '\x01') {
        ppcVar9 = &local_70;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_70 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_68 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_68 = (undefined4)sVar4;
        }
        ppcVar9 = &local_60;
        FUN_14001c09c(ppcVar9,&local_70,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      local_98 = (ulonglong)DAT_14cc04378 << 0x20;
      DAT_14cc04370 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04378 << 0x20;
      local_98 = DAT_14cc04370 & 0xffffffff;
    }
    local_98 = local_98 | uVar3;
    local_48 = &local_98;
    local_40 = &local_74;
    if ((longlong)DAT_14cc04360 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04360 & 0x7fffffffffffffff);
      if (DAT_14cc0436c == '\x01') {
        ppcVar9 = &local_70;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_70 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_68 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_68 = (undefined4)sVar4;
        }
        ppcVar9 = &local_60;
        FUN_14001c09c(ppcVar9,&local_70,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      local_a8 = (ulonglong)DAT_14cc04368 << 0x20;
      DAT_14cc04360 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04368 << 0x20;
      local_a8 = DAT_14cc04360 & 0xffffffff;
    }
    local_a8 = local_a8 | uVar3;
    local_38 = &local_a8;
    local_30 = &DAT_14c764f14;
    if ((longlong)DAT_14cc04380 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04380 & 0x7fffffffffffffff);
      if (DAT_14cc0438c == '\x01') {
        ppcVar9 = &local_70;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_70 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_68 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_68 = (undefined4)sVar4;
        }
        ppcVar9 = &local_60;
        FUN_14001c09c(ppcVar9,&local_70,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      uVar5 = (ulonglong)DAT_14cc04388 << 0x20;
      DAT_14cc04380 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04388 << 0x20;
      uVar5 = DAT_14cc04380 & 0xffffffff;
    }
    local_60 = (char *)(uVar5 | uVar3);
    plVar6 = local_b8;
  }
  else {
    if ((longlong)DAT_14cc04330 < 0) {
      local_58 = (ulonglong *)(DAT_14cc04330 & 0x7fffffffffffffff);
      if (DAT_14cc0433c == '\x01') {
        ppuVar8 = &local_58;
        FUN_1446f470e(ppuVar8,local_58,1);
      }
      else {
        if (local_58 == (ulonglong *)0x0) {
          uVar2 = 0;
        }
        else {
          sVar4 = strlen((char *)local_58);
          uVar2 = (undefined4)sVar4;
        }
        local_50 = (undefined4 *)CONCAT44(local_50._4_4_,uVar2);
        ppuVar8 = (ulonglong **)&local_70;
        FUN_14001c09c(ppuVar8,&local_58,1);
      }
      uVar3 = (ulonglong)*(uint *)ppuVar8;
      local_90 = (ulonglong)DAT_14cc04338 << 0x20;
      DAT_14cc04330 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04338 << 0x20;
      local_90 = DAT_14cc04330 & 0xffffffff;
    }
    local_90 = local_90 | uVar3;
    local_58 = &local_90;
    local_50 = &local_74;
    if ((longlong)DAT_14cc04370 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04370 & 0x7fffffffffffffff);
      if (DAT_14cc0437c == '\x01') {
        ppcVar9 = &local_70;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_70 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_68 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_68 = (undefined4)sVar4;
        }
        ppcVar9 = &local_60;
        FUN_14001c09c(ppcVar9,&local_70,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      local_98 = (ulonglong)DAT_14cc04378 << 0x20;
      DAT_14cc04370 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04378 << 0x20;
      local_98 = DAT_14cc04370 & 0xffffffff;
    }
    local_98 = local_98 | uVar3;
    FUN_14001a7b2();
    local_9c = (**(code **)(DAT_14cc012d0 + 0x108))(&DAT_14cc012d0,local_74);
    local_40 = &local_9c;
    local_48 = &local_98;
    if ((longlong)DAT_14cc04360 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04360 & 0x7fffffffffffffff);
      if (DAT_14cc0436c == '\x01') {
        ppcVar9 = &local_70;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_70 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_68 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_68 = (undefined4)sVar4;
        }
        ppcVar9 = &local_60;
        FUN_14001c09c(ppcVar9,&local_70,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      local_a8 = (ulonglong)DAT_14cc04368 << 0x20;
      DAT_14cc04360 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04368 << 0x20;
      local_a8 = DAT_14cc04360 & 0xffffffff;
    }
    local_a8 = local_a8 | uVar3;
    local_38 = &local_a8;
    local_30 = &DAT_14c764f14;
    if ((longlong)DAT_14cc04380 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04380 & 0x7fffffffffffffff);
      if (DAT_14cc0438c == '\x01') {
        ppcVar9 = &local_70;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_70 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_68 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_68 = (undefined4)sVar4;
        }
        ppcVar9 = &local_60;
        FUN_14001c09c(ppcVar9,&local_70,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      uVar5 = (ulonglong)DAT_14cc04388 << 0x20;
      DAT_14cc04380 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04388 << 0x20;
      uVar5 = DAT_14cc04380 & 0xffffffff;
    }
    local_60 = (char *)(uVar5 | uVar3);
    plVar6 = local_88;
  }
  local_28 = (ulonglong *)&local_60;
  local_20 = &DAT_14c764f08;
  *plVar6 = (longlong)&local_58;
  plVar6[1] = (longlong)&local_18;
  FUN_144481be0(param_2);
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144483856 FUN_144483856 body=147 status=ok
// SIG undefined FUN_144483856(void)

void FUN_144483856(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(local_38,L"Array(\'%s\') doesn\'t support searching for element(\'%$s\').");
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    pcVar2 = (code *)*puVar1;
    plVar4 = puVar1 + 4;
    if ((longlong *)puVar1[2] != (longlong *)0x0) {
      plVar4 = (longlong *)puVar1[2];
    }
    local_28 = param_1;
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,param_2,&local_28,local_38);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444838ea FUN_1444838ea body=49 status=ok
// SIG undefined FUN_1444838ea(void)

void FUN_1444838ea(void)

{
  FUN_1457f2ec5(DAT_14cc048c8,DAT_14cc048d0);
  if (DAT_14cc048c8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14448391c FUN_14448391c body=427 status=ok
// SIG undefined FUN_14448391c(void)

undefined8
FUN_14448391c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  size_t sVar3;
  ulonglong uVar4;
  ulonglong *_Str;
  ulonglong **ppuVar5;
  char **ppcVar6;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  char **local_70;
  ulonglong *local_68;
  undefined4 local_5c;
  char *local_58;
  undefined4 local_50;
  char *local_48;
  ulonglong *local_40;
  undefined4 *local_38;
  ulonglong *local_30;
  undefined4 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_5c = param_4;
  if ((longlong)DAT_14cc04330 < 0) {
    local_40 = (ulonglong *)(DAT_14cc04330 & 0x7fffffffffffffff);
    if (DAT_14cc0433c == '\x01') {
      ppuVar5 = &local_40;
      FUN_1446f470e(ppuVar5,local_40,1);
    }
    else {
      if (local_40 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)local_40);
        uVar1 = (undefined4)sVar3;
      }
      local_38 = (undefined4 *)CONCAT44(local_38._4_4_,uVar1);
      ppuVar5 = (ulonglong **)&local_58;
      FUN_14001c09c(ppuVar5,&local_40,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar5;
    local_78 = (ulonglong)DAT_14cc04338 << 0x20;
    DAT_14cc04330 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04338 << 0x20;
    local_78 = DAT_14cc04330 & 0xffffffff;
  }
  local_78 = local_78 | uVar2;
  local_40 = &local_78;
  local_38 = &local_5c;
  if ((longlong)DAT_14cc04390 < 0) {
    _Str = (ulonglong *)(DAT_14cc04390 & 0x7fffffffffffffff);
    if (DAT_14cc0439c == '\x01') {
      ppcVar6 = &local_58;
      FUN_1446f470e(ppcVar6,_Str,1);
    }
    else {
      local_58 = (char *)_Str;
      if (_Str == (ulonglong *)0x0) {
        local_50 = 0;
      }
      else {
        sVar3 = strlen((char *)_Str);
        local_50 = (undefined4)sVar3;
      }
      ppcVar6 = &local_48;
      FUN_14001c09c(ppcVar6,&local_58,1);
    }
    uVar2 = (ulonglong)*(uint *)ppcVar6;
    uVar4 = (ulonglong)DAT_14cc04398 << 0x20;
    DAT_14cc04390 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04398 << 0x20;
    uVar4 = DAT_14cc04390 & 0xffffffff;
  }
  local_48 = (char *)(uVar4 | uVar2);
  local_30 = (ulonglong *)&local_48;
  local_70 = (char **)&local_40;
  local_68 = &local_20;
  local_28 = &local_5c;
  FUN_144481be0(param_2);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144483ac8 FUN_144483ac8 body=49 status=ok
// SIG undefined FUN_144483ac8(void)

void FUN_144483ac8(void)

{
  FUN_1457f2ec5(DAT_14cc04908,DAT_14cc04910);
  if (DAT_14cc04908 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144483afa FUN_144483afa body=427 status=ok
// SIG undefined FUN_144483afa(void)

undefined8
FUN_144483afa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  size_t sVar3;
  ulonglong uVar4;
  ulonglong *_Str;
  ulonglong **ppuVar5;
  char **ppcVar6;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  char **local_70;
  ulonglong *local_68;
  undefined4 local_5c;
  char *local_58;
  undefined4 local_50;
  char *local_48;
  ulonglong *local_40;
  undefined4 *local_38;
  ulonglong *local_30;
  undefined4 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_5c = param_4;
  if ((longlong)DAT_14cc04330 < 0) {
    local_40 = (ulonglong *)(DAT_14cc04330 & 0x7fffffffffffffff);
    if (DAT_14cc0433c == '\x01') {
      ppuVar5 = &local_40;
      FUN_1446f470e(ppuVar5,local_40,1);
    }
    else {
      if (local_40 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)local_40);
        uVar1 = (undefined4)sVar3;
      }
      local_38 = (undefined4 *)CONCAT44(local_38._4_4_,uVar1);
      ppuVar5 = (ulonglong **)&local_58;
      FUN_14001c09c(ppuVar5,&local_40,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar5;
    local_78 = (ulonglong)DAT_14cc04338 << 0x20;
    DAT_14cc04330 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04338 << 0x20;
    local_78 = DAT_14cc04330 & 0xffffffff;
  }
  local_78 = local_78 | uVar2;
  local_40 = &local_78;
  local_38 = &local_5c;
  if ((longlong)DAT_14cc043a0 < 0) {
    _Str = (ulonglong *)(DAT_14cc043a0 & 0x7fffffffffffffff);
    if (DAT_14cc043ac == '\x01') {
      ppcVar6 = &local_58;
      FUN_1446f470e(ppcVar6,_Str,1);
    }
    else {
      local_58 = (char *)_Str;
      if (_Str == (ulonglong *)0x0) {
        local_50 = 0;
      }
      else {
        sVar3 = strlen((char *)_Str);
        local_50 = (undefined4)sVar3;
      }
      ppcVar6 = &local_48;
      FUN_14001c09c(ppcVar6,&local_58,1);
    }
    uVar2 = (ulonglong)*(uint *)ppcVar6;
    uVar4 = (ulonglong)DAT_14cc043a8 << 0x20;
    DAT_14cc043a0 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc043a8 << 0x20;
    uVar4 = DAT_14cc043a0 & 0xffffffff;
  }
  local_48 = (char *)(uVar4 | uVar2);
  local_30 = (ulonglong *)&local_48;
  local_70 = (char **)&local_40;
  local_68 = &local_20;
  local_28 = &local_5c;
  FUN_144481be0(param_2);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144483ca6 FUN_144483ca6 body=49 status=ok
// SIG undefined FUN_144483ca6(void)

void FUN_144483ca6(void)

{
  FUN_1457f2ec5(DAT_14cc04958,DAT_14cc04960);
  if (DAT_14cc04958 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144483cd8 FUN_144483cd8 body=625 status=ok
// SIG undefined FUN_144483cd8(void)

undefined8
FUN_144483cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  size_t sVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong **ppuVar6;
  char **ppcVar7;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  ulonglong local_88;
  char **local_80;
  ulonglong *local_78;
  undefined4 local_6c;
  char *local_68;
  undefined4 local_60;
  char *local_58;
  ulonglong *local_50;
  undefined4 *local_48;
  ulonglong *local_40;
  undefined4 *local_38;
  ulonglong *local_30;
  undefined4 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_6c = param_4;
  if ((longlong)DAT_14cc04330 < 0) {
    local_50 = (ulonglong *)(DAT_14cc04330 & 0x7fffffffffffffff);
    if (DAT_14cc0433c == '\x01') {
      ppuVar6 = &local_50;
      FUN_1446f470e(ppuVar6,local_50,1);
    }
    else {
      if (local_50 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)local_50);
        uVar1 = (undefined4)sVar3;
      }
      local_48 = (undefined4 *)CONCAT44(local_48._4_4_,uVar1);
      ppuVar6 = (ulonglong **)&local_68;
      FUN_14001c09c(ppuVar6,&local_50,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar6;
    local_88 = (ulonglong)DAT_14cc04338 << 0x20;
    DAT_14cc04330 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04338 << 0x20;
    local_88 = DAT_14cc04330 & 0xffffffff;
  }
  local_88 = local_88 | uVar2;
  local_50 = &local_88;
  local_48 = &local_6c;
  if ((longlong)DAT_14cc04390 < 0) {
    puVar5 = (ulonglong *)(DAT_14cc04390 & 0x7fffffffffffffff);
    if (DAT_14cc0439c == '\x01') {
      ppcVar7 = &local_68;
      FUN_1446f470e(ppcVar7,puVar5,1);
    }
    else {
      local_68 = (char *)puVar5;
      if (puVar5 == (ulonglong *)0x0) {
        local_60 = 0;
      }
      else {
        sVar3 = strlen((char *)puVar5);
        local_60 = (undefined4)sVar3;
      }
      ppcVar7 = &local_58;
      FUN_14001c09c(ppcVar7,&local_68,1);
    }
    uVar2 = (ulonglong)*(uint *)ppcVar7;
    local_90 = (ulonglong)DAT_14cc04398 << 0x20;
    DAT_14cc04390 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04398 << 0x20;
    local_90 = DAT_14cc04390 & 0xffffffff;
  }
  local_90 = local_90 | uVar2;
  local_40 = &local_90;
  local_38 = &local_6c;
  if ((longlong)DAT_14cc043d0 < 0) {
    puVar5 = (ulonglong *)(DAT_14cc043d0 & 0x7fffffffffffffff);
    if (DAT_14cc043dc == '\x01') {
      ppcVar7 = &local_68;
      FUN_1446f470e(ppcVar7,puVar5,1);
    }
    else {
      local_68 = (char *)puVar5;
      if (puVar5 == (ulonglong *)0x0) {
        local_60 = 0;
      }
      else {
        sVar3 = strlen((char *)puVar5);
        local_60 = (undefined4)sVar3;
      }
      ppcVar7 = &local_58;
      FUN_14001c09c(ppcVar7,&local_68,1);
    }
    uVar2 = (ulonglong)*(uint *)ppcVar7;
    uVar4 = (ulonglong)DAT_14cc043d8 << 0x20;
    DAT_14cc043d0 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc043d8 << 0x20;
    uVar4 = DAT_14cc043d0 & 0xffffffff;
  }
  local_58 = (char *)(uVar4 | uVar2);
  local_30 = (ulonglong *)&local_58;
  local_80 = (char **)&local_50;
  local_78 = &local_20;
  local_28 = &local_6c;
  FUN_144481be0(param_2);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144483f4a FUN_144483f4a body=49 status=ok
// SIG undefined FUN_144483f4a(void)

void FUN_144483f4a(void)

{
  FUN_1457f2ec5(DAT_14cc049d8,DAT_14cc049e0);
  if (DAT_14cc049d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144483f9e FUN_144483f9e body=2581 status=ok
// SIG undefined FUN_144483f9e(void)

undefined8
FUN_144483f9e(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  size_t sVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  ulonglong **ppuVar8;
  char **ppcVar9;
  undefined1 auStack_118 [40];
  longlong local_f0 [2];
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined4 local_c4;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_b0 [2];
  undefined4 local_9c;
  char *local_98;
  undefined4 local_90;
  char *local_88;
  ulonglong *local_80;
  undefined4 *local_78;
  ulonglong *local_70;
  undefined4 *local_68;
  ulonglong *local_60;
  undefined4 *local_58;
  ulonglong *local_50;
  undefined4 *local_48;
  ulonglong *local_40;
  undefined4 *local_38;
  ulonglong *local_30;
  undefined4 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_9c = param_4;
  cVar1 = FUN_1403f35db(*param_3,&DAT_14cc04330);
  if (cVar1 == '\0') {
    if ((longlong)DAT_14cc04330 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04330 & 0x7fffffffffffffff);
      if (DAT_14cc0433c == '\x01') {
        ppuVar8 = &local_80;
        FUN_1446f470e(ppuVar8,puVar7,1);
      }
      else {
        local_80 = puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          uVar2 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          uVar2 = (undefined4)sVar4;
        }
        local_78 = (undefined4 *)CONCAT44(local_78._4_4_,uVar2);
        ppuVar8 = (ulonglong **)&local_98;
        FUN_14001c09c(ppuVar8,&local_80,1);
      }
      uVar3 = (ulonglong)*(uint *)ppuVar8;
      local_b8 = (ulonglong)DAT_14cc04338 << 0x20;
      DAT_14cc04330 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04338 << 0x20;
      local_b8 = DAT_14cc04330 & 0xffffffff;
    }
    local_b8 = local_b8 | uVar3;
    FUN_14001a7b2();
    local_c4 = (**(code **)(DAT_14cc012d0 + 0x100))(&DAT_14cc012d0,local_9c);
    local_78 = &local_c4;
    local_80 = &local_b8;
    if ((longlong)DAT_14cc04370 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04370 & 0x7fffffffffffffff);
      if (DAT_14cc0437c == '\x01') {
        ppcVar9 = &local_98;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_98 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_90 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_90 = (undefined4)sVar4;
        }
        ppcVar9 = &local_88;
        FUN_14001c09c(ppcVar9,&local_98,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      local_c0 = (ulonglong)DAT_14cc04378 << 0x20;
      DAT_14cc04370 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04378 << 0x20;
      local_c0 = DAT_14cc04370 & 0xffffffff;
    }
    local_c0 = local_c0 | uVar3;
    local_70 = &local_c0;
    local_68 = &local_9c;
    if ((longlong)DAT_14cc04360 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04360 & 0x7fffffffffffffff);
      if (DAT_14cc0436c == '\x01') {
        ppcVar9 = &local_98;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_98 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_90 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_90 = (undefined4)sVar4;
        }
        ppcVar9 = &local_88;
        FUN_14001c09c(ppcVar9,&local_98,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      local_d0 = (ulonglong)DAT_14cc04368 << 0x20;
      DAT_14cc04360 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04368 << 0x20;
      local_d0 = DAT_14cc04360 & 0xffffffff;
    }
    local_d0 = local_d0 | uVar3;
    local_60 = &local_d0;
    local_58 = &DAT_14c764f14;
    if ((longlong)DAT_14cc043b0 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc043b0 & 0x7fffffffffffffff);
      if (DAT_14cc043bc == '\x01') {
        ppcVar9 = &local_98;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_98 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_90 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_90 = (undefined4)sVar4;
        }
        ppcVar9 = &local_88;
        FUN_14001c09c(ppcVar9,&local_98,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      local_d8 = (ulonglong)DAT_14cc043b8 << 0x20;
      DAT_14cc043b0 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc043b8 << 0x20;
      local_d8 = DAT_14cc043b0 & 0xffffffff;
    }
    local_d8 = local_d8 | uVar3;
    local_50 = &local_d8;
    local_48 = &DAT_14c764f14;
    if ((longlong)DAT_14cc043c0 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc043c0 & 0x7fffffffffffffff);
      if (DAT_14cc043cc == '\x01') {
        ppcVar9 = &local_98;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_98 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_90 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_90 = (undefined4)sVar4;
        }
        ppcVar9 = &local_88;
        FUN_14001c09c(ppcVar9,&local_98,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      local_e0 = (ulonglong)DAT_14cc043c8 << 0x20;
      DAT_14cc043c0 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc043c8 << 0x20;
      local_e0 = DAT_14cc043c0 & 0xffffffff;
    }
    local_e0 = local_e0 | uVar3;
    local_40 = &local_e0;
    local_38 = &DAT_14c764f0c;
    if ((longlong)DAT_14cc00da0 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc00da0 & 0x7fffffffffffffff);
      if (DAT_14cc00dac == '\x01') {
        ppcVar9 = &local_98;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_98 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_90 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_90 = (undefined4)sVar4;
        }
        ppcVar9 = &local_88;
        FUN_14001c09c(ppcVar9,&local_98,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      uVar5 = (ulonglong)DAT_14cc00da8 << 0x20;
      DAT_14cc00da0 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc00da8 << 0x20;
      uVar5 = DAT_14cc00da0 & 0xffffffff;
    }
    local_88 = (char *)(uVar5 | uVar3);
    plVar6 = local_f0;
  }
  else {
    if ((longlong)DAT_14cc04330 < 0) {
      local_80 = (ulonglong *)(DAT_14cc04330 & 0x7fffffffffffffff);
      if (DAT_14cc0433c == '\x01') {
        ppuVar8 = &local_80;
        FUN_1446f470e(ppuVar8,local_80,1);
      }
      else {
        if (local_80 == (ulonglong *)0x0) {
          uVar2 = 0;
        }
        else {
          sVar4 = strlen((char *)local_80);
          uVar2 = (undefined4)sVar4;
        }
        local_78 = (undefined4 *)CONCAT44(local_78._4_4_,uVar2);
        ppuVar8 = (ulonglong **)&local_98;
        FUN_14001c09c(ppuVar8,&local_80,1);
      }
      uVar3 = (ulonglong)*(uint *)ppuVar8;
      local_b8 = (ulonglong)DAT_14cc04338 << 0x20;
      DAT_14cc04330 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04338 << 0x20;
      local_b8 = DAT_14cc04330 & 0xffffffff;
    }
    local_b8 = local_b8 | uVar3;
    local_80 = &local_b8;
    local_78 = &local_9c;
    if ((longlong)DAT_14cc04370 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04370 & 0x7fffffffffffffff);
      if (DAT_14cc0437c == '\x01') {
        ppcVar9 = &local_98;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_98 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_90 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_90 = (undefined4)sVar4;
        }
        ppcVar9 = &local_88;
        FUN_14001c09c(ppcVar9,&local_98,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      local_c0 = (ulonglong)DAT_14cc04378 << 0x20;
      DAT_14cc04370 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04378 << 0x20;
      local_c0 = DAT_14cc04370 & 0xffffffff;
    }
    local_c0 = local_c0 | uVar3;
    FUN_14001a7b2();
    local_c4 = (**(code **)(DAT_14cc012d0 + 0x108))(&DAT_14cc012d0,local_9c);
    local_68 = &local_c4;
    local_70 = &local_c0;
    if ((longlong)DAT_14cc04360 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc04360 & 0x7fffffffffffffff);
      if (DAT_14cc0436c == '\x01') {
        ppcVar9 = &local_98;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_98 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_90 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_90 = (undefined4)sVar4;
        }
        ppcVar9 = &local_88;
        FUN_14001c09c(ppcVar9,&local_98,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      local_d0 = (ulonglong)DAT_14cc04368 << 0x20;
      DAT_14cc04360 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc04368 << 0x20;
      local_d0 = DAT_14cc04360 & 0xffffffff;
    }
    local_d0 = local_d0 | uVar3;
    local_60 = &local_d0;
    local_58 = &DAT_14c764f14;
    if ((longlong)DAT_14cc043b0 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc043b0 & 0x7fffffffffffffff);
      if (DAT_14cc043bc == '\x01') {
        ppcVar9 = &local_98;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_98 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_90 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_90 = (undefined4)sVar4;
        }
        ppcVar9 = &local_88;
        FUN_14001c09c(ppcVar9,&local_98,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      local_d8 = (ulonglong)DAT_14cc043b8 << 0x20;
      DAT_14cc043b0 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc043b8 << 0x20;
      local_d8 = DAT_14cc043b0 & 0xffffffff;
    }
    local_d8 = local_d8 | uVar3;
    local_50 = &local_d8;
    local_48 = &DAT_14c764f14;
    if ((longlong)DAT_14cc043c0 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc043c0 & 0x7fffffffffffffff);
      if (DAT_14cc043cc == '\x01') {
        ppcVar9 = &local_98;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_98 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_90 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_90 = (undefined4)sVar4;
        }
        ppcVar9 = &local_88;
        FUN_14001c09c(ppcVar9,&local_98,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      local_e0 = (ulonglong)DAT_14cc043c8 << 0x20;
      DAT_14cc043c0 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc043c8 << 0x20;
      local_e0 = DAT_14cc043c0 & 0xffffffff;
    }
    local_e0 = local_e0 | uVar3;
    local_40 = &local_e0;
    local_38 = &DAT_14c764f0c;
    if ((longlong)DAT_14cc00da0 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc00da0 & 0x7fffffffffffffff);
      if (DAT_14cc00dac == '\x01') {
        ppcVar9 = &local_98;
        FUN_1446f470e(ppcVar9,puVar7,1);
      }
      else {
        local_98 = (char *)puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_90 = 0;
        }
        else {
          sVar4 = strlen((char *)puVar7);
          local_90 = (undefined4)sVar4;
        }
        ppcVar9 = &local_88;
        FUN_14001c09c(ppcVar9,&local_98,1);
      }
      uVar3 = (ulonglong)*(uint *)ppcVar9;
      uVar5 = (ulonglong)DAT_14cc00da8 << 0x20;
      DAT_14cc00da0 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc00da8 << 0x20;
      uVar5 = DAT_14cc00da0 & 0xffffffff;
    }
    local_88 = (char *)(uVar5 | uVar3);
    plVar6 = local_b0;
  }
  local_30 = (ulonglong *)&local_88;
  local_28 = &DAT_14c764f18;
  *plVar6 = (longlong)&local_80;
  plVar6[1] = (longlong)&local_20;
  FUN_144481be0(param_2);
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444849b4 FUN_1444849b4 body=49 status=ok
// SIG undefined FUN_1444849b4(void)

void FUN_1444849b4(void)

{
  FUN_1457f2ec5(DAT_14cc04a20,DAT_14cc04a28);
  if (DAT_14cc04a20 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444849f6 FUN_1444849f6 body=553 status=ok
// SIG undefined FUN_1444849f6(void)

bool FUN_1444849f6(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  size_t sVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong **ppuVar8;
  undefined1 auStack_d8 [40];
  ulonglong local_b0;
  ulonglong **local_a8;
  char **local_a0;
  char *local_98;
  ulonglong *local_90;
  undefined8 local_88;
  char **local_80;
  undefined4 *local_78;
  ulonglong *local_70;
  undefined4 local_68;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar2 = FUN_1403f35db(*param_2,&DAT_14cc00de0);
  if (cVar2 != '\0') {
    if ((longlong)DAT_14cc00de0 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc00de0 & 0x7fffffffffffffff);
      if (DAT_14cc00dec == '\x01') {
        ppuVar8 = &local_70;
        FUN_1446f470e(ppuVar8,puVar7,1);
      }
      else {
        local_70 = puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_68 = 0;
        }
        else {
          sVar5 = strlen((char *)puVar7);
          local_68 = (undefined4)sVar5;
        }
        ppuVar8 = &local_90;
        FUN_14001c09c(ppuVar8,&local_70,1);
      }
      uVar3 = (ulonglong)*(uint *)ppuVar8;
      local_b0 = (ulonglong)DAT_14cc00de8 << 0x20;
      DAT_14cc00de0 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc00de8 << 0x20;
      local_b0 = DAT_14cc00de0 & 0xffffffff;
    }
    local_b0 = local_b0 | uVar3;
    local_90 = &local_b0;
    local_88 = param_3;
    if ((longlong)DAT_14cc00df0 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc00df0 & 0x7fffffffffffffff);
      if (DAT_14cc00dfc == '\x01') {
        ppuVar8 = &local_70;
        FUN_1446f470e(ppuVar8,puVar7,1);
      }
      else {
        local_70 = puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_68 = 0;
        }
        else {
          sVar5 = strlen((char *)puVar7);
          local_68 = (undefined4)sVar5;
        }
        ppuVar8 = (ulonglong **)&local_98;
        FUN_14001c09c(ppuVar8,&local_70,1);
      }
      uVar3 = (ulonglong)*(uint *)ppuVar8;
      uVar6 = (ulonglong)DAT_14cc00df8 << 0x20;
      DAT_14cc00df0 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc00df8 << 0x20;
      uVar6 = DAT_14cc00df0 & 0xffffffff;
    }
    local_98 = (char *)(uVar6 | uVar3);
    local_80 = &local_98;
    local_a8 = &local_90;
    local_78 = &DAT_14c764f14;
    local_a0 = (char **)&local_70;
    FUN_144481be0(&local_70);
    iVar1 = *(int *)(param_4 + 0x58);
    *(uint *)(param_4 + 0x58) = iVar1 + 1U;
    if (*(uint *)(param_4 + 0x5c) < iVar1 + 1U) {
      FUN_14446c1c8(param_4,iVar1);
    }
    lVar4 = *(longlong *)(param_4 + 0x50);
    if (*(longlong *)(param_4 + 0x50) == 0) {
      lVar4 = param_4;
    }
    FUN_1406d3d1a((longlong)iVar1 * 0x50 + lVar4,&local_70);
    local_28 = 0;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    FUN_1401ad17c(&local_70);
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return *(int *)(param_4 + 0x58) != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144484c20 FUN_144484c20 body=49 status=ok
// SIG undefined FUN_144484c20(void)

void FUN_144484c20(void)

{
  FUN_1457f2ec5(DAT_14cc04a50,DAT_14cc04a58);
  if (DAT_14cc04a50 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144484c62 FUN_144484c62 body=553 status=ok
// SIG undefined FUN_144484c62(void)

bool FUN_144484c62(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  size_t sVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong **ppuVar8;
  undefined1 auStack_d8 [40];
  ulonglong local_b0;
  ulonglong **local_a8;
  char **local_a0;
  char *local_98;
  ulonglong *local_90;
  undefined4 *local_88;
  char **local_80;
  undefined8 local_78;
  ulonglong *local_70;
  undefined4 local_68;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar2 = FUN_1403f35db(*param_2,&DAT_14cc00df0);
  if (cVar2 != '\0') {
    if ((longlong)DAT_14cc00de0 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc00de0 & 0x7fffffffffffffff);
      if (DAT_14cc00dec == '\x01') {
        ppuVar8 = &local_70;
        FUN_1446f470e(ppuVar8,puVar7,1);
      }
      else {
        local_70 = puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_68 = 0;
        }
        else {
          sVar5 = strlen((char *)puVar7);
          local_68 = (undefined4)sVar5;
        }
        ppuVar8 = &local_90;
        FUN_14001c09c(ppuVar8,&local_70,1);
      }
      uVar3 = (ulonglong)*(uint *)ppuVar8;
      local_b0 = (ulonglong)DAT_14cc00de8 << 0x20;
      DAT_14cc00de0 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc00de8 << 0x20;
      local_b0 = DAT_14cc00de0 & 0xffffffff;
    }
    local_b0 = local_b0 | uVar3;
    local_90 = &local_b0;
    local_88 = &DAT_14c764f14;
    if ((longlong)DAT_14cc00df0 < 0) {
      puVar7 = (ulonglong *)(DAT_14cc00df0 & 0x7fffffffffffffff);
      if (DAT_14cc00dfc == '\x01') {
        ppuVar8 = &local_70;
        FUN_1446f470e(ppuVar8,puVar7,1);
      }
      else {
        local_70 = puVar7;
        if (puVar7 == (ulonglong *)0x0) {
          local_68 = 0;
        }
        else {
          sVar5 = strlen((char *)puVar7);
          local_68 = (undefined4)sVar5;
        }
        ppuVar8 = (ulonglong **)&local_98;
        FUN_14001c09c(ppuVar8,&local_70,1);
      }
      uVar3 = (ulonglong)*(uint *)ppuVar8;
      uVar6 = (ulonglong)DAT_14cc00df8 << 0x20;
      DAT_14cc00df0 = uVar3;
    }
    else {
      uVar3 = (ulonglong)DAT_14cc00df8 << 0x20;
      uVar6 = DAT_14cc00df0 & 0xffffffff;
    }
    local_98 = (char *)(uVar6 | uVar3);
    local_80 = &local_98;
    local_a8 = &local_90;
    local_a0 = (char **)&local_70;
    local_78 = param_3;
    FUN_144481be0(&local_70);
    iVar1 = *(int *)(param_4 + 0x58);
    *(uint *)(param_4 + 0x58) = iVar1 + 1U;
    if (*(uint *)(param_4 + 0x5c) < iVar1 + 1U) {
      FUN_14446c1c8(param_4,iVar1);
    }
    lVar4 = *(longlong *)(param_4 + 0x50);
    if (*(longlong *)(param_4 + 0x50) == 0) {
      lVar4 = param_4;
    }
    FUN_1406d3d1a((longlong)iVar1 * 0x50 + lVar4,&local_70);
    local_28 = 0;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    FUN_1401ad17c(&local_70);
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return *(int *)(param_4 + 0x58) != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144484e8c FUN_144484e8c body=49 status=ok
// SIG undefined FUN_144484e8c(void)

void FUN_144484e8c(void)

{
  FUN_1457f2ec5(DAT_14cc04a80,DAT_14cc04a88);
  if (DAT_14cc04a80 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144484ece FUN_144484ece body=49 status=ok
// SIG undefined FUN_144484ece(void)

void FUN_144484ece(void)

{
  FUN_1457f2ec5(DAT_14cc04ab0,DAT_14cc04ab8);
  if (DAT_14cc04ab0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144484f00 FUN_144484f00 body=1172 status=ok
// SIG undefined FUN_144484f00(void)

bool FUN_144484f00(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  size_t sVar6;
  longlong lVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_108 [32];
  ulonglong **local_e8;
  char **local_e0;
  ulonglong local_d8;
  ulonglong **local_d0;
  char **local_c8;
  ulonglong local_c0;
  ulonglong *local_b8;
  longlong local_b0;
  ulonglong *local_a8;
  longlong local_a0;
  char *local_98;
  undefined4 local_90;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar2 = FUN_1403f35db(*param_2,&DAT_14cc00e00);
  if (cVar2 == '\0') {
    cVar2 = FUN_1403f35db(*param_2,&DAT_14cc00e10);
    if (cVar2 != '\0') {
      FUN_14001a7b2();
      plVar4 = (longlong *)(**(code **)(DAT_14cc012d0 + 0xf8))(&DAT_14cc012d0,0x10);
      if ((longlong)(int)plVar4[1] != 0) {
        lVar9 = *plVar4;
        lVar10 = (longlong)(int)plVar4[1] << 2;
        do {
          if ((longlong)DAT_14cc00e00 < 0) {
            pcVar8 = (char *)(DAT_14cc00e00 & 0x7fffffffffffffff);
            if (DAT_14cc00e0c == '\x01') {
              FUN_1446f470e(&local_98,pcVar8,1);
              uVar3 = (uint)local_98;
            }
            else {
              local_98 = pcVar8;
              if (pcVar8 == (char *)0x0) {
                local_90 = 0;
              }
              else {
                sVar6 = strlen(pcVar8);
                local_90 = (undefined4)sVar6;
              }
              FUN_14001c09c(&local_c0,&local_98,1);
              uVar3 = (uint)local_c0;
            }
            uVar5 = (ulonglong)uVar3;
            local_d8 = (ulonglong)DAT_14cc00e08 << 0x20;
            DAT_14cc00e00 = uVar5;
          }
          else {
            uVar5 = (ulonglong)DAT_14cc00e08 << 0x20;
            local_d8 = DAT_14cc00e00 & 0xffffffff;
          }
          local_d8 = local_d8 | uVar5;
          local_b8 = &local_d8;
          local_b0 = lVar9;
          if ((longlong)DAT_14cc00e10 < 0) {
            pcVar8 = (char *)(DAT_14cc00e10 & 0x7fffffffffffffff);
            if (DAT_14cc00e1c == '\x01') {
              FUN_1446f470e(&local_98,pcVar8,1);
              local_c0._0_4_ = (uint)local_98;
            }
            else {
              local_98 = pcVar8;
              if (pcVar8 == (char *)0x0) {
                local_90 = 0;
              }
              else {
                sVar6 = strlen(pcVar8);
                local_90 = (undefined4)sVar6;
              }
              FUN_14001c09c(&local_c0,&local_98,1);
            }
            uVar5 = (ulonglong)(uint)local_c0;
            local_c0 = (ulonglong)DAT_14cc00e18 << 0x20;
            DAT_14cc00e10 = uVar5;
          }
          else {
            uVar5 = (ulonglong)DAT_14cc00e18 << 0x20;
            local_c0 = DAT_14cc00e10 & 0xffffffff;
          }
          local_c0 = local_c0 | uVar5;
          local_e8 = &local_b8;
          local_e0 = &local_98;
          local_a8 = &local_c0;
          local_a0 = param_3;
          FUN_144481be0(&local_98,&local_e8);
          iVar1 = *(int *)(param_4 + 0x58);
          *(uint *)(param_4 + 0x58) = iVar1 + 1U;
          if (*(uint *)(param_4 + 0x5c) < iVar1 + 1U) {
            FUN_14446c1c8(param_4,iVar1);
          }
          lVar7 = *(longlong *)(param_4 + 0x50);
          if (*(longlong *)(param_4 + 0x50) == 0) {
            lVar7 = param_4;
          }
          FUN_1406d3d1a((longlong)iVar1 * 0x50 + lVar7,&local_98);
          local_50 = 0;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          FUN_1401ad17c(&local_98);
          lVar9 = lVar9 + 4;
          lVar10 = lVar10 + -4;
        } while (lVar10 != 0);
      }
    }
  }
  else {
    FUN_14001a7b2();
    plVar4 = (longlong *)(**(code **)(DAT_14cc012d0 + 0xf8))(&DAT_14cc012d0,0x10);
    if ((longlong)(int)plVar4[1] != 0) {
      lVar9 = *plVar4;
      lVar10 = (longlong)(int)plVar4[1] << 2;
      do {
        if ((longlong)DAT_14cc00e00 < 0) {
          pcVar8 = (char *)(DAT_14cc00e00 & 0x7fffffffffffffff);
          if (DAT_14cc00e0c == '\x01') {
            FUN_1446f470e(&local_98,pcVar8,1);
            uVar3 = (uint)local_98;
          }
          else {
            local_98 = pcVar8;
            if (pcVar8 == (char *)0x0) {
              local_90 = 0;
            }
            else {
              sVar6 = strlen(pcVar8);
              local_90 = (undefined4)sVar6;
            }
            FUN_14001c09c(&local_c0,&local_98,1);
            uVar3 = (uint)local_c0;
          }
          uVar5 = (ulonglong)uVar3;
          local_d8 = (ulonglong)DAT_14cc00e08 << 0x20;
          DAT_14cc00e00 = uVar5;
        }
        else {
          uVar5 = (ulonglong)DAT_14cc00e08 << 0x20;
          local_d8 = DAT_14cc00e00 & 0xffffffff;
        }
        local_d8 = local_d8 | uVar5;
        local_b8 = &local_d8;
        local_b0 = param_3;
        if ((longlong)DAT_14cc00e10 < 0) {
          pcVar8 = (char *)(DAT_14cc00e10 & 0x7fffffffffffffff);
          if (DAT_14cc00e1c == '\x01') {
            FUN_1446f470e(&local_98,pcVar8,1);
            local_c0._0_4_ = (uint)local_98;
          }
          else {
            local_98 = pcVar8;
            if (pcVar8 == (char *)0x0) {
              local_90 = 0;
            }
            else {
              sVar6 = strlen(pcVar8);
              local_90 = (undefined4)sVar6;
            }
            FUN_14001c09c(&local_c0,&local_98,1);
          }
          uVar5 = (ulonglong)(uint)local_c0;
          local_c0 = (ulonglong)DAT_14cc00e18 << 0x20;
          DAT_14cc00e10 = uVar5;
        }
        else {
          uVar5 = (ulonglong)DAT_14cc00e18 << 0x20;
          local_c0 = DAT_14cc00e10 & 0xffffffff;
        }
        local_c0 = local_c0 | uVar5;
        local_d0 = &local_b8;
        local_c8 = &local_98;
        local_a8 = &local_c0;
        local_a0 = lVar9;
        FUN_144481be0(&local_98,&local_d0);
        iVar1 = *(int *)(param_4 + 0x58);
        *(uint *)(param_4 + 0x58) = iVar1 + 1U;
        if (*(uint *)(param_4 + 0x5c) < iVar1 + 1U) {
          FUN_14446c1c8(param_4,iVar1);
        }
        lVar7 = *(longlong *)(param_4 + 0x50);
        if (*(longlong *)(param_4 + 0x50) == 0) {
          lVar7 = param_4;
        }
        FUN_1406d3d1a((longlong)iVar1 * 0x50 + lVar7,&local_98);
        local_50 = 0;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_1401ad17c(&local_98);
        lVar9 = lVar9 + 4;
        lVar10 = lVar10 + -4;
      } while (lVar10 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(int *)(param_4 + 0x58) != 0;
}



// FUNCTION 144485395 FUN_144485395 body=49 status=ok
// SIG undefined FUN_144485395(void)

void FUN_144485395(void)

{
  FUN_1457f2ec5(DAT_14cc04af0,DAT_14cc04af8);
  if (DAT_14cc04af0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1444853d8 FUN_1444853d8 body=250 status=ok
// SIG undefined FUN_1444853d8(void)

undefined8
FUN_1444853d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar4;
  ulonglong **ppuVar5;
  undefined1 auStack_68 [32];
  char **local_48;
  ulonglong *local_40;
  undefined4 local_34;
  char *local_30;
  ulonglong *local_28;
  undefined4 *local_20;
  ulonglong local_18;
  size_t sVar3;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = param_4;
  if ((longlong)DAT_14cc04ac8 < 0) {
    local_28 = (ulonglong *)(DAT_14cc04ac8 & 0x7fffffffffffffff);
    if (DAT_14cc04ad4 == '\x01') {
      ppuVar5 = &local_28;
      FUN_1446f470e(ppuVar5,local_28,1);
    }
    else {
      if (local_28 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)local_28);
        uVar1 = (undefined4)sVar3;
      }
      local_20 = (undefined4 *)CONCAT44(local_20._4_4_,uVar1);
      ppuVar5 = (ulonglong **)&local_30;
      FUN_14001c09c(ppuVar5,&local_28,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar5;
    uVar4 = (ulonglong)DAT_14cc04ad0 << 0x20;
    DAT_14cc04ac8 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04ad0 << 0x20;
    uVar4 = DAT_14cc04ac8 & 0xffffffff;
  }
  local_30 = (char *)(uVar4 | uVar2);
  local_28 = (ulonglong *)&local_30;
  local_48 = (char **)&local_28;
  local_20 = &local_34;
  local_40 = &local_18;
  FUN_144481be0(param_2);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444854d3 FUN_1444854d3 body=49 status=ok
// SIG undefined FUN_1444854d3(void)

void FUN_1444854d3(void)

{
  FUN_1457f2ec5(DAT_14cc04ba8,DAT_14cc04bb0);
  if (DAT_14cc04ba8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144485516 FUN_144485516 body=673 status=ok
// SIG undefined FUN_144485516(void)

undefined8 *
FUN_144485516(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  size_t sVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong **ppuVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_44 [4];
  ulonglong *local_40;
  undefined4 *local_38;
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  local_48 = param_4;
  if ((longlong)DAT_14cc041f8 < 0) {
    local_40 = (ulonglong *)(DAT_14cc041f8 & 0x7fffffffffffffff);
    if (DAT_14cc04204 == '\x01') {
      ppuVar6 = &local_40;
      FUN_1446f470e(ppuVar6,local_40,1);
    }
    else {
      if (local_40 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)local_40);
        uVar1 = (undefined4)sVar3;
      }
      local_38 = (undefined4 *)CONCAT44(local_38._4_4_,uVar1);
      ppuVar6 = (ulonglong **)&local_30;
      FUN_14001c09c(ppuVar6,&local_40,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar6;
    uVar4 = (ulonglong)DAT_14cc04200 << 0x20;
    DAT_14cc041f8 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04200 << 0x20;
    uVar4 = DAT_14cc041f8 & 0xffffffff;
  }
  local_30 = (char *)(uVar4 | uVar2);
  local_40 = (ulonglong *)&local_30;
  local_38 = &local_48;
  FUN_14001ac2c(param_2,local_44,&local_40,0);
  if ((longlong)DAT_14cc04208 < 0) {
    puVar5 = (ulonglong *)(DAT_14cc04208 & 0x7fffffffffffffff);
    if (DAT_14cc04214 == '\x01') {
      ppuVar6 = &local_40;
      FUN_1446f470e(ppuVar6,puVar5,1);
    }
    else {
      local_40 = puVar5;
      if (puVar5 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)puVar5);
        uVar1 = (undefined4)sVar3;
      }
      local_38 = (undefined4 *)CONCAT44(local_38._4_4_,uVar1);
      ppuVar6 = (ulonglong **)&local_30;
      FUN_14001c09c(ppuVar6,&local_40,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar6;
    uVar4 = (ulonglong)DAT_14cc04210 << 0x20;
    DAT_14cc04208 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04210 << 0x20;
    uVar4 = DAT_14cc04208 & 0xffffffff;
  }
  local_30 = (char *)(uVar4 | uVar2);
  local_40 = (ulonglong *)&local_30;
  local_38 = &local_48;
  FUN_14001ac2c(param_2,local_44,&local_40,0);
  if ((longlong)DAT_14cc04218 < 0) {
    puVar5 = (ulonglong *)(DAT_14cc04218 & 0x7fffffffffffffff);
    if (DAT_14cc04224 == '\x01') {
      ppuVar6 = &local_40;
      FUN_1446f470e(ppuVar6,puVar5,1);
    }
    else {
      local_40 = puVar5;
      if (puVar5 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)puVar5);
        uVar1 = (undefined4)sVar3;
      }
      local_38 = (undefined4 *)CONCAT44(local_38._4_4_,uVar1);
      ppuVar6 = (ulonglong **)&local_30;
      FUN_14001c09c(ppuVar6,&local_40,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar6;
    uVar4 = (ulonglong)DAT_14cc04220 << 0x20;
    DAT_14cc04218 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04220 << 0x20;
    uVar4 = DAT_14cc04218 & 0xffffffff;
  }
  local_30 = (char *)(uVar4 | uVar2);
  local_38 = &DAT_14c764f08;
  local_40 = (ulonglong *)&local_30;
  FUN_14001ac2c(param_2,local_44,&local_40,0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444857b8 FUN_1444857b8 body=795 status=ok
// SIG undefined FUN_1444857b8(void)

code * FUN_1444857b8(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  size_t sVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  uint uVar11;
  char *_Str;
  char **ppcVar12;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  char *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)DAT_14cc041f8 < 0) {
    _Str = (char *)(DAT_14cc041f8 & 0x7fffffffffffffff);
    if (DAT_14cc04204 == '\x01') {
      ppcVar12 = &local_30;
      FUN_1446f470e(ppcVar12,_Str,1);
    }
    else {
      local_30 = _Str;
      if (_Str == (char *)0x0) {
        local_28 = 0;
      }
      else {
        sVar6 = strlen(_Str);
        local_28 = (undefined4)sVar6;
      }
      ppcVar12 = &local_20;
      FUN_14001c09c(ppcVar12,&local_30,1);
    }
    uVar8 = (ulonglong)*(uint *)ppcVar12;
    uVar3 = (ulonglong)DAT_14cc04200 << 0x20;
    DAT_14cc041f8 = uVar8;
  }
  else {
    uVar8 = (ulonglong)DAT_14cc04200 << 0x20;
    uVar3 = DAT_14cc041f8 & 0xffffffff;
  }
  uVar3 = uVar3 | uVar8;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar1 = (uint)(uVar3 >> 0x10);
    uVar11 = (uint)uVar3 & 0xffff;
    plVar9 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_2[8];
    }
    iVar7 = *(int *)((longlong)plVar9 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)(uVar3 >> 0x20) + ((uint)uVar3 << 0x10 | uVar11) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        puVar10 = (ulonglong *)(*param_2 + (longlong)iVar7 * 0x14);
        if (*puVar10 == uVar3) goto LAB_14448585f;
        iVar7 = *(int *)((longlong)puVar10 + 0xc);
      } while (iVar7 != -1);
    }
  }
  puVar10 = (ulonglong *)0x0;
LAB_14448585f:
  iVar7 = (int)puVar10[1];
  if (iVar7 == DAT_14c764f0c) {
    pcVar4 = FUN_149163bbc;
  }
  else if (iVar7 == DAT_14c764f10) {
    pcVar4 = FUN_149163bf4;
  }
  else if (iVar7 == DAT_14c764f14) {
    pcVar4 = FUN_149163c2c;
  }
  else if (iVar7 == DAT_14c764f18) {
    pcVar4 = FUN_149163c5a;
  }
  else if (iVar7 == DAT_14c764f1c) {
    pcVar4 = FUN_149163c96;
  }
  else {
    FUN_14001a7b2();
    uVar5 = FUN_14068e11a();
    FUN_1408ccbd2(&local_30,uVar5);
    iVar2 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,&local_30);
    if (iVar7 == iVar2) {
      pcVar4 = FUN_149163cec;
    }
    else {
      FUN_14001a7b2();
      uVar5 = FUN_1457aacfc();
      FUN_1408ccbd2(&local_30,uVar5);
      iVar2 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,&local_30);
      if (iVar7 == iVar2) {
        pcVar4 = FUN_149163d66;
      }
      else {
        FUN_14001a7b2();
        uVar5 = FUN_14016b782();
        FUN_1408ccbd2(&local_30,uVar5);
        iVar2 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,&local_30);
        if (iVar7 == iVar2) {
          pcVar4 = FUN_149163dc8;
        }
        else {
          FUN_14001a7b2();
          uVar5 = FUN_1456aed04();
          FUN_1408ccbd2(&local_30,uVar5);
          iVar2 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,&local_30);
          if (iVar7 == iVar2) {
            pcVar4 = FUN_149163edc;
          }
          else {
            FUN_14001a7b2();
            uVar5 = FUN_140ce9674();
            FUN_1408ccbd2(&local_30,uVar5);
            iVar2 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,&local_30);
            if (iVar7 == iVar2) {
              pcVar4 = FUN_149163fb6;
            }
            else {
              FUN_14001a7b2();
              uVar5 = FUN_140bf8bc4();
              FUN_1408ccbd2(&local_30,uVar5);
              iVar2 = (**(code **)(DAT_14cc012d0 + 0x98))(&DAT_14cc012d0,&local_30);
              pcVar4 = FUN_1491641a2;
              if (iVar7 == iVar2) {
                pcVar4 = FUN_149164118;
              }
            }
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar4;
}



// FUNCTION 144485ad4 FUN_144485ad4 body=49 status=ok
// SIG undefined FUN_144485ad4(void)

void FUN_144485ad4(void)

{
  FUN_1457f2ec5(DAT_14cc04bd8,DAT_14cc04be0);
  if (DAT_14cc04bd8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144485b16 FUN_144485b16 body=49 status=ok
// SIG undefined FUN_144485b16(void)

void FUN_144485b16(void)

{
  FUN_1457f2ec5(DAT_14cc04ca8,DAT_14cc04cb0);
  if (DAT_14cc04ca8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144485b58 FUN_144485b58 body=861 status=ok
// SIG undefined FUN_144485b58(void)

undefined8 *
FUN_144485b58(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  size_t sVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong **ppuVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_44 [4];
  ulonglong *local_40;
  undefined4 *local_38;
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  local_48 = param_4;
  if ((longlong)DAT_14cc04c08 < 0) {
    local_40 = (ulonglong *)(DAT_14cc04c08 & 0x7fffffffffffffff);
    if (DAT_14cc04c14 == '\x01') {
      ppuVar6 = &local_40;
      FUN_1446f470e(ppuVar6,local_40,1);
    }
    else {
      if (local_40 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)local_40);
        uVar1 = (undefined4)sVar3;
      }
      local_38 = (undefined4 *)CONCAT44(local_38._4_4_,uVar1);
      ppuVar6 = (ulonglong **)&local_30;
      FUN_14001c09c(ppuVar6,&local_40,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar6;
    uVar4 = (ulonglong)DAT_14cc04c10 << 0x20;
    DAT_14cc04c08 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04c10 << 0x20;
    uVar4 = DAT_14cc04c08 & 0xffffffff;
  }
  local_30 = (char *)(uVar4 | uVar2);
  local_38 = &DAT_14c764f08;
  local_40 = (ulonglong *)&local_30;
  FUN_14001ac2c(param_2,local_44,&local_40,0);
  if ((longlong)DAT_14cc04c18 < 0) {
    puVar5 = (ulonglong *)(DAT_14cc04c18 & 0x7fffffffffffffff);
    if (DAT_14cc04c24 == '\x01') {
      ppuVar6 = &local_40;
      FUN_1446f470e(ppuVar6,puVar5,1);
    }
    else {
      local_40 = puVar5;
      if (puVar5 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)puVar5);
        uVar1 = (undefined4)sVar3;
      }
      local_38 = (undefined4 *)CONCAT44(local_38._4_4_,uVar1);
      ppuVar6 = (ulonglong **)&local_30;
      FUN_14001c09c(ppuVar6,&local_40,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar6;
    uVar4 = (ulonglong)DAT_14cc04c20 << 0x20;
    DAT_14cc04c18 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04c20 << 0x20;
    uVar4 = DAT_14cc04c18 & 0xffffffff;
  }
  local_30 = (char *)(uVar4 | uVar2);
  local_40 = (ulonglong *)&local_30;
  local_38 = &local_48;
  FUN_14001ac2c(param_2,local_44,&local_40,0);
  if ((longlong)DAT_14cc04c28 < 0) {
    puVar5 = (ulonglong *)(DAT_14cc04c28 & 0x7fffffffffffffff);
    if (DAT_14cc04c34 == '\x01') {
      ppuVar6 = &local_40;
      FUN_1446f470e(ppuVar6,puVar5,1);
    }
    else {
      local_40 = puVar5;
      if (puVar5 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)puVar5);
        uVar1 = (undefined4)sVar3;
      }
      local_38 = (undefined4 *)CONCAT44(local_38._4_4_,uVar1);
      ppuVar6 = (ulonglong **)&local_30;
      FUN_14001c09c(ppuVar6,&local_40,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar6;
    uVar4 = (ulonglong)DAT_14cc04c30 << 0x20;
    DAT_14cc04c28 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04c30 << 0x20;
    uVar4 = DAT_14cc04c28 & 0xffffffff;
  }
  local_30 = (char *)(uVar4 | uVar2);
  local_40 = (ulonglong *)&local_30;
  local_38 = &local_48;
  FUN_14001ac2c(param_2,local_44,&local_40,0);
  if ((longlong)DAT_14cc04c38 < 0) {
    puVar5 = (ulonglong *)(DAT_14cc04c38 & 0x7fffffffffffffff);
    if (DAT_14cc04c44 == '\x01') {
      ppuVar6 = &local_40;
      FUN_1446f470e(ppuVar6,puVar5,1);
    }
    else {
      local_40 = puVar5;
      if (puVar5 == (ulonglong *)0x0) {
        uVar1 = 0;
      }
      else {
        sVar3 = strlen((char *)puVar5);
        uVar1 = (undefined4)sVar3;
      }
      local_38 = (undefined4 *)CONCAT44(local_38._4_4_,uVar1);
      ppuVar6 = (ulonglong **)&local_30;
      FUN_14001c09c(ppuVar6,&local_40,1);
    }
    uVar2 = (ulonglong)*(uint *)ppuVar6;
    uVar4 = (ulonglong)DAT_14cc04c40 << 0x20;
    DAT_14cc04c38 = uVar2;
  }
  else {
    uVar2 = (ulonglong)DAT_14cc04c40 << 0x20;
    uVar4 = DAT_14cc04c38 & 0xffffffff;
  }
  local_30 = (char *)(uVar4 | uVar2);
  local_40 = (ulonglong *)&local_30;
  local_38 = &local_48;
  FUN_14001ac2c(param_2,local_44,&local_40,0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144485ebe FUN_144485ebe body=49 status=ok
// SIG undefined FUN_144485ebe(void)

void FUN_144485ebe(void)

{
  FUN_1457f2ec5(DAT_14cc04d28,DAT_14cc04d30);
  if (DAT_14cc04d28 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}


