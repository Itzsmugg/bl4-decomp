// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143c79abe FUN_143c79abe body=55 status=ok
// SIG undefined FUN_143c79abe(void)

void FUN_143c79abe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69ed0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69ed0 = FUN_14171c317(FUN_1465240c9,uVar1,L"EInventoryEffectFlag");
  }
  return;
}



// FUNCTION 143c79af6 FUN_143c79af6 body=48 status=ok
// SIG undefined FUN_143c79af6(void)

longlong FUN_143c79af6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140c2f40c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c79b26 FUN_143c79b26 body=48 status=ok
// SIG undefined FUN_143c79b26(void)

longlong FUN_143c79b26(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140c2f40c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c79b9c FUN_143c79b9c body=57 status=ok
// SIG undefined FUN_143c79b9c(void)

void FUN_143c79b9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69bc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69bc8 = FUN_140002ddd(FUN_146523243,uVar1,L"InventoryBodySettings");
  }
  return;
}



// FUNCTION 143c79c48 FUN_143c79c48 body=57 status=ok
// SIG undefined FUN_143c79c48(void)

void FUN_143c79c48(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69d00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69d00 = FUN_140002ddd(FUN_1465236c5,uVar1,L"InventoryBodyControlAspect");
  }
  return;
}



// FUNCTION 143c79d8c FUN_143c79d8c body=57 status=ok
// SIG undefined FUN_143c79d8c(void)

void FUN_143c79d8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69d78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69d78 = FUN_140002ddd(FUN_146523941,uVar1,L"InventoryBodyMaterialParamControl");
  }
  return;
}



// FUNCTION 143c79ebc FUN_143c79ebc body=57 status=ok
// SIG undefined FUN_143c79ebc(void)

void FUN_143c79ebc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69e10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69e10 = FUN_140002ddd(FUN_146523edd,uVar1,L"InventoryBodyParticleEffectAspect");
  }
  return;
}



// FUNCTION 143c79f24 FUN_143c79f24 body=57 status=ok
// SIG undefined FUN_143c79f24(void)

void FUN_143c79f24(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69e40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69e40 = FUN_140002ddd(FUN_14652403b,uVar1,L"InventoryBodySimpleMotionBoneControl");
  }
  return;
}



// FUNCTION 143c7a024 FUN_143c7a024 body=49 status=ok
// SIG undefined FUN_143c7a024(void)

void FUN_143c7a024(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143c7a0ee FUN_143c7a0ee body=57 status=ok
// SIG undefined FUN_143c7a0ee(void)

void FUN_143c7a0ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69f60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69f60 = FUN_140002ddd(FUN_14652438c,uVar1,L"InventoryCriteriaPresetDef");
  }
  return;
}



// FUNCTION 143c7a144 FUN_143c7a144 body=57 status=ok
// SIG undefined FUN_143c7a144(void)

void FUN_143c7a144(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69f90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69f90 = FUN_140002ddd(FUN_146524482,uVar1,L"InventoryCriterionPresetDef");
  }
  return;
}



// FUNCTION 143c7a1b9 FUN_143c7a1b9 body=892 status=ok
// SIG undefined FUN_143c7a1b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c7a1b9(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb69bb8 = (ulonglong)uVar2;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2fa860,2,&PTR_FUN_14b2fa810);
  _DAT_14cb69c38 = 0x47efffffe0000000;
  _DAT_14cb69c40 = 0x47efffffe0000000;
  _DAT_14cb69c48 = 0x47efffffe0000000;
  _DAT_14cb69c50 = 0x47efffffe0000000;
  _DAT_14cb69c58 = 0x47efffffe0000000;
  _DAT_14cb69c60 = 0x47efffffe0000000;
  _DAT_14cb69c68 = 0x47efffffe0000000;
  _DAT_14cb69c70 = 0x47efffffe0000000;
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cb69c78);
  if (cVar1 == '\0') {
    _DAT_14cb69c78 = 0;
    uRam000000014cb69c80 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_40 = "bone";
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  FUN_1446f470e(&DAT_14cb69ca0,L"BlueprintSwitchedMode",1);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2faeb0,1,&PTR_FUN_14b2fae80);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2fb1e0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2fb3e0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2fb660);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b2fbc00;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2fbc20);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2fbe20);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2fc010);
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2fd8e0,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2fdaa0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2fe090);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2feb60);
  ppuStack_50 = &PTR_FUN_14b2ff9b0;
  local_58 = 3;
  uStack_48 = 6;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2ffa70);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2ffcb0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2ffd60);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3002f0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3006c0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c7a538 FUN_143c7a538 body=55 status=ok
// SIG undefined FUN_143c7a538(void)

void FUN_143c7a538(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69fc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69fc8 = FUN_14171c317(FUN_14652482d,uVar1,L"EInventoryPickupInteractionType");
  }
  return;
}



// FUNCTION 143c7a56f FUN_143c7a56f body=55 status=ok
// SIG undefined FUN_143c7a56f(void)

void FUN_143c7a56f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69fe0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69fe0 = FUN_14171c317(FUN_14652485c,uVar1,L"ECriterionCreationMethod");
  }
  return;
}



// FUNCTION 143c7a5b6 FUN_143c7a5b6 body=55 status=ok
// SIG undefined FUN_143c7a5b6(void)

void FUN_143c7a5b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a160 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a160 = FUN_14171c317(FUN_146524fb2,uVar1,L"EInventoryItemFlags");
  }
  return;
}



// FUNCTION 143c7a622 FUN_143c7a622 body=57 status=ok
// SIG undefined FUN_143c7a622(void)

void FUN_143c7a622(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a010 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a010 = FUN_140002ddd(FUN_1465248ec,uVar1,L"InventoryNamePartDef");
  }
  return;
}



// FUNCTION 143c7a6ae FUN_143c7a6ae body=57 status=ok
// SIG undefined FUN_143c7a6ae(void)

void FUN_143c7a6ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a040 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a040 = FUN_140002ddd(FUN_1465249e6,uVar1,L"InventoryNamingStrategyDef");
  }
  return;
}



// FUNCTION 143c7a7de FUN_143c7a7de body=57 status=ok
// SIG undefined FUN_143c7a7de(void)

void FUN_143c7a7de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a070 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a070 = FUN_140002ddd(FUN_146524aa8,uVar1,L"InventoryPartDef");
  }
  return;
}



// FUNCTION 143c7a914 FUN_143c7a914 body=57 status=ok
// SIG undefined FUN_143c7a914(void)

void FUN_143c7a914(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a0e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a0e8 = FUN_140002ddd(FUN_146524d60,uVar1,L"InventoryCompDef");
  }
  return;
}



// FUNCTION 143c7a982 FUN_143c7a982 body=97 status=ok
// SIG undefined FUN_143c7a982(void)

void FUN_143c7a982(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd8);
  *(undefined4 *)((longlong)param_2 + 0x6c) = 0x80;
  *(undefined4 *)((longlong)param_2 + 0x70) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0xf;
  *(undefined1 *)((longlong)param_2 + 0xc0) = 1;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  return;
}



// FUNCTION 143c7aa26 FUN_143c7aa26 body=55 status=ok
// SIG undefined FUN_143c7aa26(void)

void FUN_143c7aa26(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x000143c7aa59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c7abfc FUN_143c7abfc body=57 status=ok
// SIG undefined FUN_143c7abfc(void)

void FUN_143c7abfc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a238 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a238 = FUN_140002ddd(FUN_146525473,uVar1,L"InventoryMaterialAspect");
  }
  return;
}



// FUNCTION 143c7aca9 FUN_143c7aca9 body=539 status=ok
// SIG undefined FUN_143c7aca9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c7aca9(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb69fb8 = (ulonglong)uVar1;
  uStack_48 = 2;
  ppuStack_50 = &PTR_FUN_14b307410;
  local_58 = 0xb;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b307450);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3077e0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3078b0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b307930);
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b307c90,1,0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b307f60;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b307f80);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3081b0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b308310);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3083f0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b308520);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b308a20);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 4;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b309d20,1,&PTR_FUN_14b309c80);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c7aec8 FUN_143c7aec8 body=55 status=ok
// SIG undefined FUN_143c7aec8(void)

void FUN_143c7aec8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a3c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a3c0 = FUN_14171c317(FUN_146525f1c,uVar1,L"FInventoryParamType");
  }
  return;
}



// FUNCTION 143c7aeff FUN_143c7aeff body=55 status=ok
// SIG undefined FUN_143c7aeff(void)

void FUN_143c7aeff(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a500 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a500 = FUN_14171c317(FUN_1465263e4,uVar1,L"EInventoryCriterionFlag");
  }
  return;
}



// FUNCTION 143c7af36 FUN_143c7af36 body=55 status=ok
// SIG undefined FUN_143c7af36(void)

void FUN_143c7af36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a668 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a668 = FUN_14171c317(FUN_1465269e1,uVar1,L"EInventoryStatsRoundingMode");
  }
  return;
}



// FUNCTION 143c7af9e FUN_143c7af9e body=48 status=ok
// SIG undefined FUN_143c7af9e(void)

longlong FUN_143c7af9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_140c2f21a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c7afce FUN_143c7afce body=48 status=ok
// SIG undefined FUN_143c7afce(void)

longlong FUN_143c7afce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_140c2f21a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c7affe FUN_143c7affe body=48 status=ok
// SIG undefined FUN_143c7affe(void)

longlong FUN_143c7affe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x520;
  FUN_140c2f21a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c7b02e FUN_143c7b02e body=48 status=ok
// SIG undefined FUN_143c7b02e(void)

longlong FUN_143c7b02e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x528;
  FUN_140c2f21a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c7b06e FUN_143c7b06e body=48 status=ok
// SIG undefined FUN_143c7b06e(void)

longlong FUN_143c7b06e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x568;
  FUN_140c2f21a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c7b09e FUN_143c7b09e body=48 status=ok
// SIG undefined FUN_143c7b09e(void)

longlong FUN_143c7b09e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x570;
  FUN_140c2f21a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c7b0ce FUN_143c7b0ce body=48 status=ok
// SIG undefined FUN_143c7b0ce(void)

longlong FUN_143c7b0ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x590;
  FUN_140c2f21a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c7b0fe FUN_143c7b0fe body=48 status=ok
// SIG undefined FUN_143c7b0fe(void)

longlong FUN_143c7b0fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x598;
  FUN_140c2f21a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c7b132 FUN_143c7b132 body=48 status=ok
// SIG undefined FUN_143c7b132(void)

longlong FUN_143c7b132(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x5b0;
  FUN_140c2f21a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c7b16a FUN_143c7b16a body=48 status=ok
// SIG undefined FUN_143c7b16a(void)

longlong FUN_143c7b16a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x5b8;
  FUN_140c2f21a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c7b1f6 FUN_143c7b1f6 body=57 status=ok
// SIG undefined FUN_143c7b1f6(void)

void FUN_143c7b1f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a300 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a300 = FUN_140002ddd(FUN_146525c23,uVar1,L"InventoryMaterialParamsDataAssetAspect");
  }
  return;
}



// FUNCTION 143c7b28c FUN_143c7b28c body=57 status=ok
// SIG undefined FUN_143c7b28c(void)

void FUN_143c7b28c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a340 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a340 = FUN_140002ddd(FUN_146525d3b,uVar1,L"InventoryMaterialsDataAssetAspect");
  }
  return;
}



// FUNCTION 143c7b2d4 FUN_143c7b2d4 body=57 status=ok
// SIG undefined FUN_143c7b2d4(void)

void FUN_143c7b2d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a358 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a358 = FUN_140002ddd(FUN_146525dd1,uVar1,L"InventoryMeshAspect");
  }
  return;
}



// FUNCTION 143c7b35e FUN_143c7b35e body=57 status=ok
// SIG undefined FUN_143c7b35e(void)

void FUN_143c7b35e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a390 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a390 = FUN_140002ddd(FUN_146525e64,uVar1,L"InventoryNamingAspect");
  }
  return;
}



// FUNCTION 143c7b3e8 FUN_143c7b3e8 body=57 status=ok
// SIG undefined FUN_143c7b3e8(void)

void FUN_143c7b3e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a3f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a3f0 = FUN_140002ddd(FUN_146525fe2,uVar1,L"InventoryParamsDef");
  }
  return;
}



// FUNCTION 143c7b44a FUN_143c7b44a body=57 status=ok
// SIG undefined FUN_143c7b44a(void)

void FUN_143c7b44a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a4b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a4b8 = FUN_140002ddd(FUN_146526256,uVar1,L"InventoryRarityDef");
  }
  return;
}



// FUNCTION 143c7b51c FUN_143c7b51c body=57 status=ok
// SIG undefined FUN_143c7b51c(void)

void FUN_143c7b51c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a4e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a4e8 = FUN_140002ddd(FUN_146526385,uVar1,L"InventoryScriptAspect");
  }
  return;
}



// FUNCTION 143c7b5fc FUN_143c7b5fc body=57 status=ok
// SIG undefined FUN_143c7b5fc(void)

void FUN_143c7b5fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a560 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a560 = FUN_140002ddd(FUN_1465265d8,uVar1,L"InventorySkillsAspect");
  }
  return;
}



// FUNCTION 143c7b65c FUN_143c7b65c body=57 status=ok
// SIG undefined FUN_143c7b65c(void)

void FUN_143c7b65c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a578 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a578 = FUN_140002ddd(FUN_146526638,uVar1,L"InventorySkinDef");
  }
  return;
}



// FUNCTION 143c7b6a4 FUN_143c7b6a4 body=57 status=ok
// SIG undefined FUN_143c7b6a4(void)

void FUN_143c7b6a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a590 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a590 =
         FUN_140002ddd(FUN_1465266cf,uVar1,L"GbxContextParam_InventoryStatsPropertyResolver");
  }
  return;
}



// FUNCTION 143c7b6ec FUN_143c7b6ec body=57 status=ok
// SIG undefined FUN_143c7b6ec(void)

void FUN_143c7b6ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a5a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a5a8 = FUN_140002ddd(FUN_14652672e,uVar1,L"InventoryStatsContainer");
  }
  return;
}



// FUNCTION 143c7b794 FUN_143c7b794 body=57 status=ok
// SIG undefined FUN_143c7b794(void)

void FUN_143c7b794(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a5f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a5f0 = FUN_140002ddd(FUN_1465268bc,uVar1,L"InventoryStatsContainerValueResolver");
  }
  return;
}



// FUNCTION 143c7b8cc FUN_143c7b8cc body=57 status=ok
// SIG undefined FUN_143c7b8cc(void)

void FUN_143c7b8cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a6f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a6f8 = FUN_140002ddd(FUN_146526d8a,uVar1,L"IOAudioProvider");
  }
  return;
}



// FUNCTION 143c7b936 FUN_143c7b936 body=410 status=ok
// SIG undefined FUN_143c7b936(void)

void FUN_143c7b936(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,800);
  param_2[1] = 0;
  param_2[9] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0xffffffff00000080;
  param_2[0xd] = 0;
  param_2[0x13] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0xffffffff00000080;
  param_2[0x17] = 0;
  param_2[0x23] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  *(undefined8 *)((longlong)param_2 + 0x124) = 0xffffffff00000080;
  param_2[0x27] = 0;
  param_2[0x31] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0xffffffff00000080;
  param_2[0x35] = 0;
  *(undefined1 *)(param_2 + 0x37) = 0;
  param_2[0x3e] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0x43480000;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0x42c80000;
  *(undefined8 *)((longlong)param_2 + 0x21c) = 0x4416000000000000;
  param_2[0x47] = 0;
  param_2[0x48] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x49] = 0x461c400041200000;
  *(undefined4 *)(param_2 + 0x4a) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x50) = 0;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  *(undefined8 *)((longlong)param_2 + 0x284) = 0xffffffff00000080;
  param_2[0x53] = 0;
  param_2[0x55] = 0;
  param_2[0x56] = 0;
  param_2[0x57] = 0x3e4ccccd00000002;
  param_2[0x5b] = 0;
  param_2[0x59] = 0;
  param_2[0x5a] = 0;
  *param_2 = &PTR_FUN_14b3162b0;
  *(undefined4 *)(param_2 + 0x61) = 0;
  param_2[0x5c] = 0;
  param_2[0x5d] = 0;
  *(undefined8 *)((longlong)param_2 + 0x30c) = 0xffffffff00000080;
  param_2[100] = 0;
  return;
}



// FUNCTION 143c7badc FUN_143c7badc body=57 status=ok
// SIG undefined FUN_143c7badc(void)

void FUN_143c7badc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a740 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a740 = FUN_140002ddd(FUN_146526f4d,uVar1,L"IOAudioProviderDef");
  }
  return;
}



// FUNCTION 143c7bb3a FUN_143c7bb3a body=57 status=ok
// SIG undefined FUN_143c7bb3a(void)

void FUN_143c7bb3a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a770 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a770 = FUN_140002ddd(FUN_146527008,uVar1,L"ItemPoolPreferredPartsDef");
  }
  return;
}



// FUNCTION 143c7bde4 FUN_143c7bde4 body=92 status=ok
// SIG undefined FUN_143c7bde4(void)

undefined8 * FUN_143c7bde4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  uVar2 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_140e8ac72(param_1 + 3,iVar1,0);
    FUN_140e8ab75(param_1[3],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 143c7be40 FUN_143c7be40 body=57 status=ok
// SIG undefined FUN_143c7be40(void)

void FUN_143c7be40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a7e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a7e8 = FUN_140002ddd(FUN_1465272c4,uVar1,L"ItemPoolDef");
  }
  return;
}



// FUNCTION 143c7bed4 FUN_143c7bed4 body=57 status=ok
// SIG undefined FUN_143c7bed4(void)

void FUN_143c7bed4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a800 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a800 = FUN_140002ddd(FUN_146527324,uVar1,L"ItemPoolListDef");
  }
  return;
}



// FUNCTION 143c7bf67 FUN_143c7bf67 body=1161 status=ok
// SIG undefined FUN_143c7bf67(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c7bf67(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b30c9a0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b30cff0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b30d150);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b30d400);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb6a368 = (ulonglong)uVar1;
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b30d510,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b30d800);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b30db50,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b30e040;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b30e060);
  _DAT_14cb6a400 = 0x47efffffe0000000;
  _DAT_14cb6a408 = 0x47efffffe0000000;
  _DAT_14cb6a410 = 0x47efffffe0000000;
  _DAT_14cb6a418 = 0x47efffffe0000000;
  _DAT_14cb6a420 = 0x47efffffe0000000;
  _DAT_14cb6a428 = 0x47efffffe0000000;
  _DAT_14cb6a430 = 0x47efffffe0000000;
  _DAT_14cb6a438 = 0x47efffffe0000000;
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b30e990,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b30ed70,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b30ef30);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b30f800);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b30f8f0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b30fa20);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b30ff90;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b30ffb0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b310070);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b310240);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b310330);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3104a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b310660);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3107f0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b310f10);
  FUN_14098d3d2(FUN_143c7af36,L"/Script/GbxGame",L"EInventoryStatsRoundingMode",&DAT_14cb6a660);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3110b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3117c0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b311910);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3119a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b311e20);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3121e0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 8;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b312f90);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c7c3f4 FUN_143c7c3f4 body=47 status=ok
// SIG undefined FUN_143c7c3f4(void)

longlong FUN_143c7c3f4(void)

{
  if (DAT_14cb6a938 == 0) {
    FUN_14000fc22(&DAT_14cb6a938,&PTR_FUN_14b31a300);
  }
  return DAT_14cb6a938;
}



// FUNCTION 143c7c424 FUN_143c7c424 body=1470 status=ok
// SIG undefined FUN_143c7c424(void)

void FUN_143c7c424(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_a8 = FUN_1446ddbd2();
      local_a0 = FUN_1468d96f0;
      local_b0 = 0;
      local_b8 = 0x4008001;
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_28);
            goto LAB_143c7c616;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_28) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_28,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_28,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_b0 = CONCAT44(local_b0._4_4_,(int)plVar4[6]);
        local_b8 = local_b8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_28,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_28,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
LAB_143c7c616:
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_a8 = FUN_1446ddbd2();
      local_a0 = FUN_1403a682c;
      local_b0 = 0;
      local_b8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_60);
            goto LAB_143c7c7c9;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_60) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_60,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_60,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_b0 = CONCAT44(local_b0._4_4_,(int)plVar4[6]);
        local_b8 = local_b8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_60,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_60,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_60);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_60);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_60 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_60);
    }
  }
LAB_143c7c7c9:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = CONCAT71(uStack_2f,local_30);
  local_78 = local_40;
  uStack_74 = uStack_3c;
  uStack_70 = uStack_38;
  uStack_6c = uStack_34;
  local_88 = local_50;
  uStack_84 = uStack_4c;
  uStack_80 = uStack_48;
  uStack_7c = uStack_44;
  local_98 = (undefined4)local_60;
  uStack_94 = local_60._4_4_;
  uStack_90 = uStack_58;
  uStack_8c = uStack_54;
  FUN_143d3542c(local_28);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c7c9e3 FUN_143c7c9e3 body=47 status=ok
// SIG undefined FUN_143c7c9e3(void)

longlong FUN_143c7c9e3(void)

{
  if (DAT_14cb6a940 == 0) {
    FUN_14000fc22(&DAT_14cb6a940,&PTR_FUN_14b31a3f0);
  }
  return DAT_14cb6a940;
}



// FUNCTION 143c7ca12 FUN_143c7ca12 body=1369 status=ok
// SIG undefined FUN_143c7ca12(void)

void FUN_143c7ca12(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_28);
            goto LAB_143c7cbdf;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_28) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_28,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_28,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_28,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_28,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
LAB_143c7cbdf:
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_30);
            goto LAB_143c7cd93;
          }
        }
        puVar8 = (undefined8 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar8 != &local_30) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_30,puVar8,(int)plVar4[6]);
          }
          else {
            memcpy(&local_30,puVar8,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_30,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_30,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
LAB_143c7cd93:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143d354e4(local_28,local_30);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c7cf6c FUN_143c7cf6c body=55 status=ok
// SIG undefined FUN_143c7cf6c(void)

void FUN_143c7cf6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a988 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a988 = FUN_14171c317(FUN_1465280dc,uVar1,L"EJunkItemOwnershipType");
  }
  return;
}



// FUNCTION 143c7cfa3 FUN_143c7cfa3 body=55 status=ok
// SIG undefined FUN_143c7cfa3(void)

void FUN_143c7cfa3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6aa00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6aa00 = FUN_14171c317(FUN_1465282cf,uVar1,L"ELatentSpawnButton");
  }
  return;
}



// FUNCTION 143c7cfda FUN_143c7cfda body=55 status=ok
// SIG undefined FUN_143c7cfda(void)

void FUN_143c7cfda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ac60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ac60 = FUN_14171c317(FUN_146528eee,uVar1,L"ELightBeamCollisionHandlerResult");
  }
  return;
}



// FUNCTION 143c7d011 FUN_143c7d011 body=55 status=ok
// SIG undefined FUN_143c7d011(void)

void FUN_143c7d011(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ac90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ac90 = FUN_14171c317(FUN_146529076,uVar1,L"ELightBeamLock");
  }
  return;
}



// FUNCTION 143c7d0c0 FUN_143c7d0c0 body=86 status=ok
// SIG undefined FUN_143c7d0c0(void)

undefined8
FUN_143c7d0c0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4,
             undefined4 *param_5)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_5,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *param_5 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  *param_4 = 1;
  return 1;
}



// FUNCTION 143c7d1c6 FUN_143c7d1c6 body=817 status=ok
// SIG undefined FUN_143c7d1c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c7d1c6(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b319210,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3192e0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb6a870 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b319680);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b319d40,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b319e00,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b31a950,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b31acc0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b31adb0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b31add0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b31b5f0,1,&PTR_FUN_14b31b5a0);
  FUN_14098d3d2(FUN_143c7cfa3,L"/Script/GbxGame",L"ELatentSpawnButton",&DAT_14cb6a9f8);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b31b810);
  FUN_1446f470e(&DAT_14cb6ab18,L"Multicast_SetBoolParamOnFXComponent",1);
  FUN_1446f470e(&DAT_14cb6ab28,L"Multicast_SetFloatParamOnFXComponent",1);
  FUN_1446f470e(&DAT_14cb6ab38,L"Multicast_SetIntParamOnFXComponent",1);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b31e590,1,&PTR_FUN_14b31e4f0);
  FUN_1446f470e(&DAT_14cb6ac10,L"StartBeamImpact",1);
  FUN_1446f470e(&DAT_14cb6ac20,L"StopBeamImpact",1);
  FUN_1446f470e(&DAT_14cb6ac30,L"UpdateBeamImpact",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b31edd0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b31f1d0;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b31f1f0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b320f80;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b320fa0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c7d4f8 FUN_143c7d4f8 body=55 status=ok
// SIG undefined FUN_143c7d4f8(void)

void FUN_143c7d4f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6acc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6acc0 = FUN_14171c317(FUN_146529423,uVar1,L"ELightBeamFlag");
  }
  return;
}



// FUNCTION 143c7d52f FUN_143c7d52f body=55 status=ok
// SIG undefined FUN_143c7d52f(void)

void FUN_143c7d52f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ad60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ad60 = FUN_14171c317(FUN_14652972c,uVar1,L"ELightBeamQueryActorType");
  }
  return;
}



// FUNCTION 143c7d676 FUN_143c7d676 body=207 status=ok
// SIG undefined FUN_143c7d676(void)

undefined1 FUN_143c7d676(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined1 *)(param_2 + 8 + lVar3) = *(undefined1 *)(param_3 + 8 + lVar3);
      lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 0x10 + lVar3) = lVar2;
      lVar2 = *(longlong *)(param_3 + 0x18 + lVar3);
      if ((*(longlong *)(param_2 + 0x18 + lVar3) != lVar2) ||
         (*(int *)(param_2 + 0x20 + lVar3) != *(int *)(param_3 + 0x20 + lVar3))) {
        *(longlong *)(param_2 + 0x18 + lVar3) = lVar2;
        *(undefined4 *)(param_2 + 0x20 + lVar3) = *(undefined4 *)(param_3 + 0x20 + lVar3);
        *(undefined8 *)(param_2 + 0x28 + lVar3) = 0;
      }
      *(undefined8 *)(param_2 + 0x30 + lVar3) = *(undefined8 *)(param_3 + 0x30 + lVar3);
      lVar3 = lVar3 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c7d77a FUN_143c7d77a body=178 status=ok
// SIG undefined FUN_143c7d77a(void)

undefined8 FUN_143c7d77a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar2 = *(longlong *)(param_3 + 8 + lVar6);
      if ((bVar3 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar6);
          bVar3 = DAT_14c950c29;
        }
      }
      plVar1[1] = lVar2;
      plVar4 = (longlong *)(param_3 + lVar6 + 0x10);
      plVar5 = plVar1 + 2;
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *plVar5 = *plVar4;
        plVar4 = plVar4 + 1;
        plVar5 = plVar5 + 1;
      }
      *(undefined4 *)(plVar1 + 0xb) = *(undefined4 *)(param_3 + lVar6 + 0x58);
      lVar6 = lVar6 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c7d856 FUN_143c7d856 body=158 status=ok
// SIG undefined FUN_143c7d856(void)

void FUN_143c7d856(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x160);
  *(undefined4 *)((longlong)param_2 + 0x10) = 0x34001;
  *(undefined1 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc0) = 0xbf800000;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0x300200000000;
  *(undefined4 *)((longlong)param_2 + 0x124) = 2;
  *(undefined8 *)((longlong)param_2 + 0x128) = 0;
  *(undefined8 *)((longlong)param_2 + 0x130) = 0;
  *(undefined8 *)((longlong)param_2 + 0x138) = 0;
  *(undefined4 *)((longlong)param_2 + 0x140) = 0x4fc71eb4;
  *(undefined8 *)((longlong)param_2 + 0x148) = 0;
  *(undefined8 *)((longlong)param_2 + 0x150) = 0;
  *(undefined4 *)((longlong)param_2 + 0x158) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x15d) = 0xff;
  return;
}



// FUNCTION 143c7d94c FUN_143c7d94c body=161 status=ok
// SIG undefined FUN_143c7d94c(void)

undefined1 FUN_143c7d94c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar5);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar5);
          bVar1 = DAT_14c950c29;
        }
      }
      plVar4 = (longlong *)(param_2 + lVar5);
      *plVar4 = lVar2;
      lVar2 = *(longlong *)(param_3 + 8 + lVar5);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar5);
          bVar1 = DAT_14c950c29;
        }
      }
      plVar4[1] = lVar2;
      plVar3 = (longlong *)(param_3 + lVar5 + 0x10);
      plVar4 = plVar4 + 2;
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *plVar4 = *plVar3;
        plVar3 = plVar3 + 1;
        plVar4 = plVar4 + 1;
      }
      lVar5 = lVar5 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c7da71 FUN_143c7da71 body=461 status=ok
// SIG undefined FUN_143c7da71(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c7da71(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14098d3d2(FUN_143c7d4f8,L"/Script/GbxGame",L"ELightBeamFlag",&DAT_14cb6acb8);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b323170);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb6ace8 = (ulonglong)uVar1;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b323860,1,&PTR_FUN_14b3237e0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b323b80;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b323ba0);
  FUN_1446f470e(&DAT_14cb6ad88,L"OnBegin",1);
  FUN_1446f470e(&DAT_14cb6ad98,L"OnShutdown",1);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b324050,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3248a0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b325b00,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 4;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3296a0,1,&PTR_FUN_14b329600);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c7dc40 FUN_143c7dc40 body=55 status=ok
// SIG undefined FUN_143c7dc40(void)

void FUN_143c7dc40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b0a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b0a0 = FUN_14171c317(FUN_14652ab3d,uVar1,L"ELightProjectileTracerThrottleLevel");
  }
  return;
}



// FUNCTION 143c7dc77 FUN_143c7dc77 body=55 status=ok
// SIG undefined FUN_143c7dc77(void)

void FUN_143c7dc77(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b0e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b0e8 = FUN_14171c317(FUN_14652ac68,uVar1,L"ELightProjectileFlag");
  }
  return;
}



// FUNCTION 143c7dcae FUN_143c7dcae body=55 status=ok
// SIG undefined FUN_143c7dcae(void)

void FUN_143c7dcae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b1c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b1c0 = FUN_14171c317(FUN_14652b098,uVar1,L"ELightProjectileQueryActorType");
  }
  return;
}



// FUNCTION 143c7dce5 FUN_143c7dce5 body=55 status=ok
// SIG undefined FUN_143c7dce5(void)

void FUN_143c7dce5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b2f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b2f8 = FUN_14171c317(FUN_14652b47f,uVar1,L"ELightProjectileSpeedModifierType");
  }
  return;
}



// FUNCTION 143c7dd1c FUN_143c7dd1c body=55 status=ok
// SIG undefined FUN_143c7dd1c(void)

void FUN_143c7dd1c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b328 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b328 = FUN_14171c317(FUN_14652b4de,uVar1,L"ELightProjectileSplitPattern");
  }
  return;
}



// FUNCTION 143c7dd54 FUN_143c7dd54 body=4045 status=ok
// SIG undefined FUN_143c7dd54(void)

void FUN_143c7dd54(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *_Src;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  code *local_b0;
  int local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60;
  undefined *local_58;
  longlong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uStack_90 = 0;
  uStack_8c = 0;
  local_88 = 3;
  local_80 = 0;
  local_78 = 0x34001;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1405c5fa2();
  local_58 = &DAT_14cb769e8;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = &PTR_FUN_14b0394b0;
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
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_90);
            goto LAB_143c7df57;
          }
        }
        puVar10 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar10 != &uStack_90) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_90,puVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_90,puVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_c0 = CONCAT44(local_c0._4_4_,(int)plVar4[6]);
        local_c8 = local_c8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_90,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_90,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&uStack_90);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_90);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_90 = (undefined4)uVar2;
      uStack_8c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_90);
    }
  }
LAB_143c7df57:
  puVar10 = &uStack_90;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar10 = *(undefined4 **)(param_2 + 0x38);
  }
  local_94 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_b0 = FUN_1408a629c;
      local_b8 = &DAT_14c9520b8;
      local_c0 = 0;
      local_c8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
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
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_94);
            goto LAB_143c7e119;
          }
        }
        puVar11 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar11 != &local_94) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_94,puVar11,(int)plVar4[6]);
          }
          else {
            memcpy(&local_94,puVar11,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_c0 = CONCAT44(local_c0._4_4_,(int)plVar4[6]);
        local_c8 = local_c8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_94,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_94,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&local_94);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_94);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_94 = (undefined4)uVar2;
      uStack_90 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_94);
    }
  }
LAB_143c7e119:
  uStack_98 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_b0 = FUN_1408a629c;
      local_b8 = &DAT_14c9520b8;
      local_c0 = 0;
      local_c8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
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
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_98);
            goto LAB_143c7e2cc;
          }
        }
        puVar11 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar11 != &uStack_98) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_98,puVar11,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_98,puVar11,
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
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
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
      uStack_98 = (undefined4)uVar2;
      local_94 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_98);
    }
  }
LAB_143c7e2cc:
  local_9c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_b0 = FUN_1408a629c;
      local_b8 = &DAT_14c9520b8;
      local_c0 = 0;
      local_c8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
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
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_9c);
            goto LAB_143c7e47f;
          }
        }
        puVar11 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar11 != &local_9c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_9c,puVar11,(int)plVar4[6]);
          }
          else {
            memcpy(&local_9c,puVar11,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_c0 = CONCAT44(local_c0._4_4_,(int)plVar4[6]);
        local_c8 = local_c8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_9c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_9c,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&local_9c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_9c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_9c = (undefined4)uVar2;
      uStack_98 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_9c);
    }
  }
LAB_143c7e47f:
  uStack_a0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_b0 = FUN_1408a629c;
      local_b8 = &DAT_14c9520b8;
      local_c0 = 0;
      local_c8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
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
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_a0);
            goto LAB_143c7e632;
          }
        }
        puVar11 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar11 != &uStack_a0) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_a0,puVar11,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_a0,puVar11,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_c0 = CONCAT44(local_c0._4_4_,(int)plVar4[6]);
        local_c8 = local_c8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_a0,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_a0,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&uStack_a0);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_a0);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_a0 = (undefined4)uVar2;
      local_9c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_a0);
    }
  }
LAB_143c7e632:
  local_a4 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_b8 = (undefined *)FUN_1446ddbd2();
      local_b0 = FUN_14067a048;
      local_c0 = 0;
      local_c8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_a4);
            goto LAB_143c7e7e5;
          }
        }
        _Src = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_a4) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_a4,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_a4,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_c0 = CONCAT44(local_c0._4_4_,(int)plVar4[6]);
        local_c8 = local_c8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_a4,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_a4,lVar5);
      }
    }
    else {
      puVar9 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar9;
        puVar9 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&local_a4);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_a4);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_a4 = (int)uVar2;
      uStack_a0 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_a4);
    }
  }
LAB_143c7e7e5:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c0 = CONCAT71(local_c0._1_7_,local_a4 != 0);
  local_c8 = CONCAT44(local_c8._4_4_,uStack_a0);
  FUN_1415d43c2(puVar10,local_94,uStack_98,local_9c);
  local_60 = (undefined **)&DAT_14a171d50;
  uVar7 = uStack_48 >> 0x20;
  uStack_48 = uStack_48 & 0xffffffff00000000;
  if ((int)uVar7 != 0) {
    FUN_140115c12(&local_50,0);
  }
  local_58 = (undefined *)0x0;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c7ed22 FUN_143c7ed22 body=48 status=ok
// SIG undefined FUN_143c7ed22(void)

longlong FUN_143c7ed22(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1414a7654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c7ed92 FUN_143c7ed92 body=48 status=ok
// SIG undefined FUN_143c7ed92(void)

longlong FUN_143c7ed92(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1414a7654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c7ee6c FUN_143c7ee6c body=860 status=ok
// SIG undefined FUN_143c7ee6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c7ee6c(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb6b090 = (ulonglong)uVar1;
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b32dde0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b32de00);
  FUN_14098d3d2(FUN_143c7dc77,L"/Script/GbxGame",L"ELightProjectileFlag",&DAT_14cb6b0e0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b32e060);
  FUN_1446f470e(&DAT_14cb6b180,L"ServerSendDebugProjectileImpact",1);
  FUN_1446f470e(&DAT_14cb6b190,L"ServerSendDebugProjectilePath",1);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 4;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b32ee30,1,&PTR_FUN_14b32ed90);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b32f160;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b32f180);
  FUN_1446f470e(&DAT_14cb6b1e8,L"OnAttached",1);
  FUN_1446f470e(&DAT_14cb6b1f8,L"OnBegin",1);
  FUN_1446f470e(&DAT_14cb6b208,L"OnBounce",1);
  FUN_1446f470e(&DAT_14cb6b218,L"OnDetached",1);
  FUN_1446f470e(&DAT_14cb6b228,L"OnDirectDamage",1);
  FUN_1446f470e(&DAT_14cb6b238,L"OnExplode",1);
  FUN_1446f470e(&DAT_14cb6b248,L"OnGameplayBounce",1);
  FUN_1446f470e(&DAT_14cb6b258,L"OnHomingTargetLost",1);
  FUN_1446f470e(&DAT_14cb6b268,L"OnHomingTargetReached",1);
  FUN_1446f470e(&DAT_14cb6b278,L"OnImpact",1);
  FUN_1446f470e(&DAT_14cb6b288,L"OnLastGameplayBounce",1);
  FUN_1446f470e(&DAT_14cb6b298,L"OnLifetimeExpired",1);
  FUN_1446f470e(&DAT_14cb6b2a8,L"OnNonGameplayBounce",1);
  FUN_1446f470e(&DAT_14cb6b2b8,L"OnProxyImpact",1);
  FUN_1446f470e(&DAT_14cb6b2c8,L"OnStopHomingDistanceReached",1);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3304a0,1,0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b330d50;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b330d70);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b332ec0;
  local_58 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b332ee0,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c7f1cc FUN_143c7f1cc body=55 status=ok
// SIG undefined FUN_143c7f1cc(void)

void FUN_143c7f1cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b448 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b448 = FUN_14171c317(FUN_14652bb59,uVar1,L"ELootInstancingPolicy");
  }
  return;
}



// FUNCTION 143c7f203 FUN_143c7f203 body=55 status=ok
// SIG undefined FUN_143c7f203(void)

void FUN_143c7f203(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b490 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b490 = FUN_14171c317(FUN_14652bc77,uVar1,L"ECSVIdentityFormat");
  }
  return;
}



// FUNCTION 143c7f23a FUN_143c7f23a body=55 status=ok
// SIG undefined FUN_143c7f23a(void)

void FUN_143c7f23a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b4a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b4a8 = FUN_14171c317(FUN_14652bca6,uVar1,L"ECSVSummaryStatType");
  }
  return;
}



// FUNCTION 143c7f271 FUN_143c7f271 body=55 status=ok
// SIG undefined FUN_143c7f271(void)

void FUN_143c7f271(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b5b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b5b0 = FUN_14171c317(FUN_14652c22d,uVar1,L"EManagedActorDestroyOrder");
  }
  return;
}



// FUNCTION 143c7f2a8 FUN_143c7f2a8 body=55 status=ok
// SIG undefined FUN_143c7f2a8(void)

void FUN_143c7f2a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b660 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b660 = FUN_14171c317(FUN_14652c53b,uVar1,L"EMantleType");
  }
  return;
}



// FUNCTION 143c7f2e0 FUN_143c7f2e0 body=48 status=ok
// SIG undefined FUN_143c7f2e0(void)

longlong FUN_143c7f2e0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145be5ba4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c7f366 FUN_143c7f366 body=57 status=ok
// SIG undefined FUN_143c7f366(void)

void FUN_143c7f366(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b460 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b460 = FUN_140002ddd(FUN_14652bb8a,uVar1,L"GbxContextParam_PlayerSpawningLoot");
  }
  return;
}



// FUNCTION 143c7f3ca FUN_143c7f3ca body=151 status=ok
// SIG undefined FUN_143c7f3ca(void)

void FUN_143c7f3ca(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x110);
  *(undefined ***)((longlong)param_2 + 8) = &PTR_FUN_14b023b08;
  *(undefined1 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0x3b9cbb9e;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined4 *)((longlong)param_2 + 0x70) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_2 + 0xa8) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0xb8) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 200) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_2 + 0xf8) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x108) = 0x3f800000;
  return;
}



// FUNCTION 143c7f51e FUN_143c7f51e body=59 status=ok
// SIG undefined FUN_143c7f51e(void)

void FUN_143c7f51e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined4 *)((longlong)param_2 + 0x40) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  return;
}



// FUNCTION 143c7f5ae FUN_143c7f5ae body=57 status=ok
// SIG undefined FUN_143c7f5ae(void)

void FUN_143c7f5ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b550 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b550 = FUN_140002ddd(FUN_14652c01b,uVar1,L"LootConfigDef");
  }
  return;
}



// FUNCTION 143c7f664 FUN_143c7f664 body=57 status=ok
// SIG undefined FUN_143c7f664(void)

void FUN_143c7f664(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b6d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b6d8 = FUN_140002ddd(FUN_14652c6eb,uVar1,L"ManufacturerDef");
  }
  return;
}



// FUNCTION 143c7f6c0 FUN_143c7f6c0 body=238 status=ok
// SIG undefined FUN_143c7f6c0(void)

void FUN_143c7f6c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14b33eb80;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x200000000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x10] = DAT_14c8464e0;
  param_1[0x11] = uVar1;
  param_1[0x12] = DAT_14c8464f0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  *(undefined1 **)((longlong)param_1 + 0xc4) = &DAT_3f8000003f800000;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  return;
}



// FUNCTION 143c7f8a8 FUN_143c7f8a8 body=682 status=ok
// SIG undefined FUN_143c7f8a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c7f8a8(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb6b3e0 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb6b3e8);
  if (cVar1 == '\0') {
    _DAT_14cb6b3e8 = 0;
    uRam000000014cb6b3f0 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b334d20);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3355d0,1,0);
  uStack_58 = 3;
  ppuStack_60 = &PTR_FUN_14b336df0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b336ed0,1,&PTR_FUN_14b336e50);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3373d0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b337600);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3376f0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b337f20;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b337f70,1,&PTR_FUN_14b337f40);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b338340,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b338a60,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b33a620;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b33a6c0,2,&PTR_FUN_14b33a640);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b33a900);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b33af30,1,&PTR_FUN_14b33aee0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b33c7a0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c7fb54 FUN_143c7fb54 body=55 status=ok
// SIG undefined FUN_143c7fb54(void)

void FUN_143c7fb54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b7b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b7b0 = FUN_14171c317(FUN_14652cf94,uVar1,L"EMeleeReboundTrigger");
  }
  return;
}



// FUNCTION 143c7fb8b FUN_143c7fb8b body=121 status=ok
// SIG undefined FUN_143c7fb8b(void)

void FUN_143c7fb8b(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar3 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar3;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar3 = &PTR_FUN_14b33edf0;
  puVar3[5] = &PTR_FUN_14b33f090;
  puVar2 = &DAT_14c846480;
  puVar3 = puVar3 + 6;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 143c7fc04 FUN_143c7fc04 body=55 status=ok
// SIG undefined FUN_143c7fc04(void)

void FUN_143c7fc04(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b828 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b828 = FUN_14171c317(FUN_14652d18a,uVar1,L"EMissionActionConditionCompoundOp");
  }
  return;
}



// FUNCTION 143c7fc3b FUN_143c7fc3b body=55 status=ok
// SIG undefined FUN_143c7fc3b(void)

void FUN_143c7fc3b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b858 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b858 = FUN_14171c317(FUN_14652d218,uVar1,L"EMissionActionConditionEncounterStateQuery")
    ;
  }
  return;
}



// FUNCTION 143c7fc72 FUN_143c7fc72 body=55 status=ok
// SIG undefined FUN_143c7fc72(void)

void FUN_143c7fc72(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b918 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b918 = FUN_14171c317(FUN_14652d5c0,uVar1,L"EMissionActionConditionSpawnerStateQuery");
  }
  return;
}



// FUNCTION 143c7fca9 FUN_143c7fca9 body=55 status=ok
// SIG undefined FUN_143c7fca9(void)

void FUN_143c7fca9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b960 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b960 = FUN_14171c317(FUN_14652d6b6,uVar1,L"EMissionActionBlockingBehavior");
  }
  return;
}



// FUNCTION 143c7fce0 FUN_143c7fce0 body=55 status=ok
// SIG undefined FUN_143c7fce0(void)

void FUN_143c7fce0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b990 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b990 = FUN_140002ddd(FUN_143c7fd17,uVar1,L"MissionActionType_AddTimerPenalty");
  }
  return;
}



// FUNCTION 143c7fd17 FUN_143c7fd17 body=47 status=ok
// SIG undefined FUN_143c7fd17(void)

longlong FUN_143c7fd17(void)

{
  if (DAT_14cb6b988 == 0) {
    FUN_14086a14e(&DAT_14cb6b988,&PTR_FUN_14b340920);
  }
  return DAT_14cb6b988;
}



// FUNCTION 143c7fd46 FUN_143c7fd46 body=48 status=ok
// SIG undefined FUN_143c7fd46(void)

void FUN_143c7fd46(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b345060;
  return;
}



// FUNCTION 143c7fd76 FUN_143c7fd76 body=55 status=ok
// SIG undefined FUN_143c7fd76(void)

void FUN_143c7fd76(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b9d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b9d8 = FUN_14171c317(FUN_14652d87a,uVar1,L"EToggleAlias_FilterType");
  }
  return;
}



// FUNCTION 143c7fdad FUN_143c7fdad body=55 status=ok
// SIG undefined FUN_143c7fdad(void)

void FUN_143c7fdad(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bad0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bad0 = FUN_14171c317(FUN_14652dd18,uVar1,L"EMissionAction_ModuleEvent_Target");
  }
  return;
}



// FUNCTION 143c7fdf0 FUN_143c7fdf0 body=12 status=ok
// SIG undefined FUN_143c7fdf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c7fdf0(void)

{
  _DAT_14cb6bd58 = 0;
  return;
}



// FUNCTION 143c7fdfc FUN_143c7fdfc body=12 status=ok
// SIG undefined FUN_143c7fdfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c7fdfc(void)

{
  _DAT_14cb6bd60 = 0;
  return;
}



// FUNCTION 143c7fe08 FUN_143c7fe08 body=55 status=ok
// SIG undefined FUN_143c7fe08(void)

void FUN_143c7fe08(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bc08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bc08 = FUN_14171c317(FUN_14652e3a6,uVar1,L"EMissionNetScope");
  }
  return;
}



// FUNCTION 143c7fe6c FUN_143c7fe6c body=55 status=ok
// SIG undefined FUN_143c7fe6c(void)

void FUN_143c7fe6c(undefined8 param_1,longlong param_2)

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
                    /* WARNING: Could not recover jumptable at 0x000143c7fe9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c7fef8 FUN_143c7fef8 body=57 status=ok
// SIG undefined FUN_143c7fef8(void)

void FUN_143c7fef8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b840 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b840 = FUN_140002ddd(FUN_14652d1b9,uVar1,L"MissionActionCondition_Compound");
  }
  return;
}



// FUNCTION 143c7ff74 FUN_143c7ff74 body=57 status=ok
// SIG undefined FUN_143c7ff74(void)

void FUN_143c7ff74(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b888 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b888 = FUN_140002ddd(FUN_14652d2de,uVar1,L"MissionActionCondition_FactExpression");
  }
  return;
}



// FUNCTION 143c8007c FUN_143c8007c body=57 status=ok
// SIG undefined FUN_143c8007c(void)

void FUN_143c8007c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b8d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b8d0 = FUN_140002ddd(FUN_14652d4a1,uVar1,L"MissionActionCondition_ObjectiveStatus");
  }
  return;
}



// FUNCTION 143c80108 FUN_143c80108 body=57 status=ok
// SIG undefined FUN_143c80108(void)

void FUN_143c80108(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b8e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b8e8 = FUN_140002ddd(FUN_14652d500,uVar1,L"MissionActionCondition_OnLoadFilter");
  }
  return;
}



// FUNCTION 143c801c0 FUN_143c801c0 body=29 status=ok
// SIG undefined FUN_143c801c0(void)

undefined8 FUN_143c801c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c80262 FUN_143c80262 body=115 status=ok
// SIG undefined FUN_143c80262(void)

undefined8 FUN_143c80262(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      FUN_140427308(param_2 + 8 + lVar10,param_3 + 8 + lVar10);
      *(undefined8 *)(param_2 + 0x18 + lVar10) = *(undefined8 *)(param_3 + 0x18 + lVar10);
      puVar1 = (undefined4 *)(param_3 + 0x20 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x30 + lVar10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x30 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 0x20 + lVar10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      lVar10 = lVar10 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c802d6 FUN_143c802d6 body=39 status=ok
// SIG undefined FUN_143c802d6(void)

undefined8
FUN_143c802d6(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2,param_3,param_4);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 143c8031a FUN_143c8031a body=59 status=ok
// SIG undefined FUN_143c8031a(void)

undefined8 FUN_143c8031a(longlong *param_1)

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



// FUNCTION 143c80360 FUN_143c80360 body=62 status=ok
// SIG undefined FUN_143c80360(void)

void FUN_143c80360(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b345010;
    FUN_1400fd473(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 143c803f6 FUN_143c803f6 body=71 status=ok
// SIG undefined FUN_143c803f6(void)

undefined8 * FUN_143c803f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b345010;
  FUN_1400fd473(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c8043e FUN_143c8043e body=55 status=ok
// SIG undefined FUN_143c8043e(void)

void FUN_143c8043e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b990 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b990 = FUN_140002ddd(FUN_143c7fd17,uVar1,L"MissionActionType_AddTimerPenalty");
  }
  return;
}



// FUNCTION 143c804d4 FUN_143c804d4 body=57 status=ok
// SIG undefined FUN_143c804d4(void)

void FUN_143c804d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ba08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ba08 = FUN_140002ddd(FUN_14652d940,uVar1,L"MissionActionType_BinderDisable");
  }
  return;
}



// FUNCTION 143c8054e FUN_143c8054e body=57 status=ok
// SIG undefined FUN_143c8054e(void)

void FUN_143c8054e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ba20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ba20 = FUN_140002ddd(FUN_14652d9a0,uVar1,L"MissionActionType_BinderEnable");
  }
  return;
}



// FUNCTION 143c805ce FUN_143c805ce body=57 status=ok
// SIG undefined FUN_143c805ce(void)

void FUN_143c805ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ba38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ba38 = FUN_140002ddd(FUN_14652da37,uVar1,L"MissionActionType_DebugPrint");
  }
  return;
}



// FUNCTION 143c80638 FUN_143c80638 body=57 status=ok
// SIG undefined FUN_143c80638(void)

void FUN_143c80638(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ba50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ba50 = FUN_140002ddd(FUN_14652dacd,uVar1,L"MissionActionType_Delay");
  }
  return;
}



// FUNCTION 143c806a6 FUN_143c806a6 body=57 status=ok
// SIG undefined FUN_143c806a6(void)

void FUN_143c806a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ba68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ba68 = FUN_140002ddd(FUN_14652db2c,uVar1,L"MissionActionType_DialogHint");
  }
  return;
}



// FUNCTION 143c8072e FUN_143c8072e body=57 status=ok
// SIG undefined FUN_143c8072e(void)

void FUN_143c8072e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ba80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ba80 = FUN_140002ddd(FUN_14652dbc3,uVar1,L"MissionActionType_EndMoment");
  }
  return;
}



// FUNCTION 143c80776 FUN_143c80776 body=95 status=ok
// SIG undefined FUN_143c80776(void)

void FUN_143c80776(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x90);
  *param_2 = &PTR_FUN_14b346310;
  *(undefined1 *)((longlong)param_2 + 0x21) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_2 + 100) = 0;
  param_2[0xe] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined1 *)(param_2 + 0xb) = 0;
  return;
}



// FUNCTION 143c808b2 FUN_143c808b2 body=57 status=ok
// SIG undefined FUN_143c808b2(void)

void FUN_143c808b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bb48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bb48 = FUN_140002ddd(FUN_14652dfa1,uVar1,L"MissionActionType_ToggleSubAliasChildActor")
    ;
  }
  return;
}



// FUNCTION 143c80a2c FUN_143c80a2c body=57 status=ok
// SIG undefined FUN_143c80a2c(void)

void FUN_143c80a2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bd10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bd10 = FUN_140002ddd(FUN_14652e91a,uVar1,L"MissionBinderTarget_RegistryActor");
  }
  return;
}



// FUNCTION 143c80a9f FUN_143c80a9f body=1606 status=ok
// SIG undefined FUN_143c80a9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c80a9f(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b33ec80);
  FUN_14098d3d2(FUN_143c7fb54,L"/Script/GbxGame",L"EMeleeReboundTrigger",&DAT_14cb6b7a8);
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b33f0b0,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b33f190);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b33f280);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b33f3e0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b33f640;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b33f660);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b33f8d0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b33f8f0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b33fa10);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b33faf0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b33fc50);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b33fe10);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b33ff70);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3400f0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b340320;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b340340);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b340520);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b340770;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b340790);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b340960);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b340b00);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b340c10);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b340e90;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b340eb0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b340fd0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3410e0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b341310);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b341400);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b341510);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b341680);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3417a0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3418b0);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0();
  _DAT_14cb6bac0 = (ulonglong)uVar1;
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b341cd0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b341cf0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b341fb0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b342090);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3421a0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b342320);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3424b0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3425c0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b342660);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b342740);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b342810);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3428f0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b342c50;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b342cc0,1,&PTR_FUN_14b342c70);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b342df0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b343010);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3431c0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3433b0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3435a0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c810e8 FUN_143c810e8 body=55 status=ok
// SIG undefined FUN_143c810e8(void)

void FUN_143c810e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bdd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bdd8 = FUN_14171c317(FUN_14652f4c9,uVar1,L"EMissionChoiceType");
  }
  return;
}



// FUNCTION 143c8111f FUN_143c8111f body=55 status=ok
// SIG undefined FUN_143c8111f(void)

void FUN_143c8111f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6be38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6be38 = FUN_14171c317(FUN_14652f684,uVar1,L"EMatchTypeAdditionalTags");
  }
  return;
}



// FUNCTION 143c81156 FUN_143c81156 body=55 status=ok
// SIG undefined FUN_143c81156(void)

void FUN_143c81156(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6be88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6be88 = FUN_14171c317(FUN_14652f7a8,uVar1,L"EMissionReplicationType");
  }
  return;
}



// FUNCTION 143c8118d FUN_143c8118d body=55 status=ok
// SIG undefined FUN_143c8118d(void)

void FUN_143c8118d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bea0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bea0 = FUN_14171c317(FUN_14652f7d7,uVar1,L"EMissionOwnershipType");
  }
  return;
}



// FUNCTION 143c811ec FUN_143c811ec body=55 status=ok
// SIG undefined FUN_143c811ec(void)

void FUN_143c811ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bf00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bf00 = FUN_14171c317(FUN_14652f9c6,uVar1,L"EMissionDependencyConditionCompoundOp");
  }
  return;
}



// FUNCTION 143c81223 FUN_143c81223 body=55 status=ok
// SIG undefined FUN_143c81223(void)

void FUN_143c81223(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bf90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bf90 = FUN_14171c317(FUN_14652fcae,uVar1,L"EMissionDependencyConditionMissionStatus");
  }
  return;
}



// FUNCTION 143c8125a FUN_143c8125a body=55 status=ok
// SIG undefined FUN_143c8125a(void)

void FUN_143c8125a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bfd8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bfd8 =
         FUN_14171c317(FUN_14652fdd2,uVar1,L"EMissionDependencyConditionMissionSetStatus");
  }
  return;
}



// FUNCTION 143c81291 FUN_143c81291 body=55 status=ok
// SIG undefined FUN_143c81291(void)

void FUN_143c81291(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c020 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c020 = FUN_14171c317(FUN_14652ff2e,uVar1,L"EMissionDependencyConditionObjectiveStatus")
    ;
  }
  return;
}



// FUNCTION 143c812c8 FUN_143c812c8 body=55 status=ok
// SIG undefined FUN_143c812c8(void)

void FUN_143c812c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c098 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c098 = FUN_14171c317(FUN_146530108,uVar1,L"EMissionEntityOrderType");
  }
  return;
}



// FUNCTION 143c812ff FUN_143c812ff body=55 status=ok
// SIG undefined FUN_143c812ff(void)

void FUN_143c812ff(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c128 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c128 = FUN_14171c317(FUN_146530394,uVar1,L"EObjectiveFailureBehavior");
  }
  return;
}



// FUNCTION 143c81336 FUN_143c81336 body=55 status=ok
// SIG undefined FUN_143c81336(void)

void FUN_143c81336(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c140 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c140 = FUN_14171c317(FUN_1465303c3,uVar1,L"EMissionOwnershipFilter");
  }
  return;
}



// FUNCTION 143c8136d FUN_143c8136d body=55 status=ok
// SIG undefined FUN_143c8136d(void)

void FUN_143c8136d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c158 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c158 = FUN_14171c317(FUN_1465303f2,uVar1,L"EMissionObjectiveResolveType");
  }
  return;
}



// FUNCTION 143c813a4 FUN_143c813a4 body=55 status=ok
// SIG undefined FUN_143c813a4(void)

void FUN_143c813a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c170 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c170 = FUN_14171c317(FUN_146530423,uVar1,L"EMissionActionOnLoadFilter");
  }
  return;
}



// FUNCTION 143c813db FUN_143c813db body=55 status=ok
// SIG undefined FUN_143c813db(void)

void FUN_143c813db(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c188 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c188 = FUN_14171c317(FUN_146530452,uVar1,L"EMissionActionPreCompletedFilter");
  }
  return;
}



// FUNCTION 143c81412 FUN_143c81412 body=55 status=ok
// SIG undefined FUN_143c81412(void)

void FUN_143c81412(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c1a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c1a0 = FUN_14171c317(FUN_146530481,uVar1,L"EMissionStatus");
  }
  return;
}



// FUNCTION 143c81449 FUN_143c81449 body=55 status=ok
// SIG undefined FUN_143c81449(void)

void FUN_143c81449(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c1b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c1b8 = FUN_14171c317(FUN_1465304b0,uVar1,L"EMissionQueryOperator");
  }
  return;
}



// FUNCTION 143c81480 FUN_143c81480 body=55 status=ok
// SIG undefined FUN_143c81480(void)

void FUN_143c81480(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c1d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c1d0 = FUN_14171c317(FUN_1465304df,uVar1,L"EMissionTaskDefLocation");
  }
  return;
}



// FUNCTION 143c814b7 FUN_143c814b7 body=55 status=ok
// SIG undefined FUN_143c814b7(void)

void FUN_143c814b7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c1e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c1e8 = FUN_14171c317(FUN_14653050e,uVar1,L"EObjectiveUpdateCountDisplayType");
  }
  return;
}



// FUNCTION 143c814ee FUN_143c814ee body=55 status=ok
// SIG undefined FUN_143c814ee(void)

void FUN_143c814ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c200 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c200 = FUN_14171c317(FUN_14653053d,uVar1,L"EObjectiveStatusConditionQuery");
  }
  return;
}



// FUNCTION 143c815c4 FUN_143c815c4 body=144 status=ok
// SIG undefined FUN_143c815c4(void)

void FUN_143c815c4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0xa8);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b34f080;
  *(undefined1 *)(param_2 + 3) = 1;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined2 *)(param_2 + 0xb) = 4;
  *(undefined4 *)(param_2 + 8) = 0x3f800000;
  *(undefined1 *)(param_2 + 0xc) = 3;
  *(char *)(param_2 + 0xd) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined4 *)(param_2 + 0xe) = 0;
  param_2[0xf] = &DAT_14a171d50;
  param_2[0x16] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  return;
}



// FUNCTION 143c81660 FUN_143c81660 body=57 status=ok
// SIG undefined FUN_143c81660(void)

void FUN_143c81660(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6be50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6be50 = FUN_140002ddd(FUN_14652f6b3,uVar1,L"MissionChoiceOptionDef");
  }
  return;
}



// FUNCTION 143c8175a FUN_143c8175a body=57 status=ok
// SIG undefined FUN_143c8175a(void)

void FUN_143c8175a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bfa8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bfa8 = FUN_140002ddd(FUN_14652fcdd,uVar1,L"MissionDependencyCondition_Mission");
  }
  return;
}



// FUNCTION 143c817da FUN_143c817da body=249 status=ok
// SIG undefined FUN_143c817da(void)

void FUN_143c817da(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
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
  }
  plVar1 = DAT_14c844840;
  *param_2 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined2 *)(param_2 + 2) = 0;
  return;
}



// FUNCTION 143c819a6 FUN_143c819a6 body=580 status=ok
// SIG undefined FUN_143c819a6(void)

void FUN_143c819a6(undefined8 param_1,void *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  memset(param_2,0,0xc0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
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
  }
  plVar1 = DAT_14c844840;
  *(longlong **)((longlong)param_2 + 0x10) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)((longlong)param_2 + 0x18) = 0;
  *(undefined2 *)((longlong)param_2 + 0x20) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
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
  }
  plVar1 = DAT_14c844840;
  *(longlong **)((longlong)param_2 + 0x28) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)((longlong)param_2 + 0x30) = 0;
  *(undefined2 *)((longlong)param_2 + 0x38) = 0;
  *(undefined1 *)((longlong)param_2 + 0x40) = 0;
  *(undefined ***)((longlong)param_2 + 0x48) = &PTR_FUN_14b00be10;
  *(undefined8 *)((longlong)param_2 + 0x79) = 0;
  *(undefined8 *)((longlong)param_2 + 0x81) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)((longlong)param_2 + 0x90) = DAT_14c8464e0;
  *(undefined8 *)((longlong)param_2 + 0x98) = uVar2;
  *(undefined8 *)((longlong)param_2 + 0xa0) = DAT_14c8464f0;
  uVar2 = DAT_14c846500;
  *(undefined8 *)((longlong)param_2 + 0xa8) = DAT_14c8464f8;
  *(undefined8 *)((longlong)param_2 + 0xb0) = uVar2;
  *(undefined8 *)((longlong)param_2 + 0xb8) = DAT_14c846508;
  return;
}



// FUNCTION 143c81c1c FUN_143c81c1c body=46 status=ok
// SIG undefined FUN_143c81c1c(void)

void FUN_143c81c1c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  if (lVar1 == 0) {
    return;
  }
  FUN_144a2da94(lVar1);
  thunk_FUN_1400020a8(lVar1,0x38);
  return;
}



// FUNCTION 143c81c99 FUN_143c81c99 body=709 status=ok
// SIG undefined FUN_143c81c99(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c81c99(void)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b34a110,1,0);
  local_48 = 2;
  ppuStack_50 = &PTR_FUN_14b34aef0;
  local_58 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b34af30);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb6be60 = (ulonglong)uVar1;
  local_48 = 2;
  ppuStack_50 = &PTR_FUN_14b34be80;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b34bec0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b34c040);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b34c390;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b34c3b0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b34c5d0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b34c900;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b34c920);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b34cc40;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b34cc60);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b34d330;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b34d3a0,1,&PTR_FUN_14b34d350);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b34d610);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b34d930;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b34d950);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b34da20);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b34df20);
  lVar2 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14b34e510 + lVar2),L"/Script/GbxGame",
                  *(undefined8 *)(&UNK_14b34e518 + lVar2),
                  *(undefined8 *)((longlong)&PTR_FUN_14b34e520 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x150);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b34e9a0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c81f60 FUN_143c81f60 body=55 status=ok
// SIG undefined FUN_143c81f60(void)

void FUN_143c81f60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c290 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c290 = FUN_14171c317(FUN_146530bc7,uVar1,L"EMissionGbxDefType");
  }
  return;
}



// FUNCTION 143c81f97 FUN_143c81f97 body=55 status=ok
// SIG undefined FUN_143c81f97(void)

void FUN_143c81f97(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c2d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c2d8 = FUN_14171c317(FUN_146530cb3,uVar1,L"EMissionDeliveryType");
  }
  return;
}



// FUNCTION 143c81fce FUN_143c81fce body=55 status=ok
// SIG undefined FUN_143c81fce(void)

void FUN_143c81fce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c2f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c2f0 = FUN_14171c317(FUN_146530ce2,uVar1,L"EMissionGiverWaypointOption");
  }
  return;
}



// FUNCTION 143c82005 FUN_143c82005 body=55 status=ok
// SIG undefined FUN_143c82005(void)

void FUN_143c82005(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c410 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c410 = FUN_14171c317(FUN_146531245,uVar1,L"EMissionGraphAliasValidityStatus");
  }
  return;
}



// FUNCTION 143c8203c FUN_143c8203c body=55 status=ok
// SIG undefined FUN_143c8203c(void)

void FUN_143c8203c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c428 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c428 = FUN_14171c317(FUN_146531274,uVar1,L"EMissionGraphMissionFactLifetime");
  }
  return;
}



// FUNCTION 143c82073 FUN_143c82073 body=55 status=ok
// SIG undefined FUN_143c82073(void)

void FUN_143c82073(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c730 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c730 = FUN_14171c317(FUN_1465320e9,uVar1,L"EMissionObjectiveUpdateCountValueType");
  }
  return;
}



// FUNCTION 143c820aa FUN_143c820aa body=55 status=ok
// SIG undefined FUN_143c820aa(void)

void FUN_143c820aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c748 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c748 =
         FUN_14171c317(FUN_146532118,uVar1,L"EMissionObjectiveUpdateCountDynamicEvaluateTiming");
  }
  return;
}



// FUNCTION 143c8210e FUN_143c8210e body=55 status=ok
// SIG undefined FUN_143c8210e(void)

void FUN_143c8210e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000143c82141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c8227e FUN_143c8227e body=57 status=ok
// SIG undefined FUN_143c8227e(void)

void FUN_143c8227e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c350 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c350 = FUN_140002ddd(FUN_146530e5b,uVar1,L"MissionGiverType_Basic");
  }
  return;
}



// FUNCTION 143c822f4 FUN_143c822f4 body=57 status=ok
// SIG undefined FUN_143c822f4(void)

void FUN_143c822f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c3b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c3b0 = FUN_140002ddd(FUN_14653109b,uVar1,L"MissionGiverType_FactCondition");
  }
  return;
}



// FUNCTION 143c823a0 FUN_143c823a0 body=55 status=ok
// SIG undefined FUN_143c823a0(void)

void FUN_143c823a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000143c823d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c8242e FUN_143c8242e body=57 status=ok
// SIG undefined FUN_143c8242e(void)

void FUN_143c8242e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c488 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c488 = FUN_140002ddd(FUN_1465313ed,uVar1,L"MissionGraphAliasTypeData_FactsActor");
  }
  return;
}



// FUNCTION 143c8263a FUN_143c8263a body=55 status=ok
// SIG undefined FUN_143c8263a(void)

void FUN_143c8263a(undefined8 param_1,longlong param_2)

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
                    /* WARNING: Could not recover jumptable at 0x000143c8266d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c826bc FUN_143c826bc body=57 status=ok
// SIG undefined FUN_143c826bc(void)

void FUN_143c826bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c650 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c650 = FUN_140002ddd(FUN_146531d1b,uVar1,L"MissionObjectiveAspect_Binder");
  }
  return;
}



// FUNCTION 143c82742 FUN_143c82742 body=57 status=ok
// SIG undefined FUN_143c82742(void)

void FUN_143c82742(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c668 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c668 = FUN_140002ddd(FUN_146531d75,uVar1,L"MissionObjectiveAspect_Event");
  }
  return;
}



// FUNCTION 143c827b8 FUN_143c827b8 body=57 status=ok
// SIG undefined FUN_143c827b8(void)

void FUN_143c827b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c680 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c680 = FUN_140002ddd(FUN_146531dcf,uVar1,L"MissionObjectiveAspect_ResolveObjective");
  }
  return;
}



// FUNCTION 143c827f2 FUN_143c827f2 body=66 status=ok
// SIG undefined FUN_143c827f2(void)

void FUN_143c827f2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b35c3a0;
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
                    /* WARNING: Could not recover jumptable at 0x000143c82829. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c8289c FUN_143c8289c body=57 status=ok
// SIG undefined FUN_143c8289c(void)

void FUN_143c8289c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c698 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c698 = FUN_140002ddd(FUN_146531e29,uVar1,L"MissionObjectiveAspect_UpdateCount");
  }
  return;
}



// FUNCTION 143c828d6 FUN_143c828d6 body=109 status=ok
// SIG undefined FUN_143c828d6(void)

void FUN_143c828d6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b35c3c0;
  plVar3 = (longlong *)param_1[0xb];
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
  plVar3 = (longlong *)param_1[5];
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
                    /* WARNING: Could not recover jumptable at 0x000143c8293f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c82a3a FUN_143c82a3a body=55 status=ok
// SIG undefined FUN_143c82a3a(void)

void FUN_143c82a3a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000143c82a6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c82a79 FUN_143c82a79 body=1029 status=ok
// SIG undefined FUN_143c82a79(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c82a79(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3520e0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b352370);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b352440);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14b352660;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b352680);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b352720);
  uStack_58 = 2;
  local_60 = &PTR_FUN_14b352990;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3529d0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b352ad0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3530f0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b353260);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b353440);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b353560);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3536f0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b353b30);
  uStack_58 = 2;
  local_60 = &PTR_FUN_14b353e90;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b353ed0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 0xd;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b354dc0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b355080);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b355180);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b355770);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b355940);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b355b50);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b355d40);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b355f00);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b356140);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b356300);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0();
  _DAT_14cb6c6c0 = (ulonglong)uVar1;
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b356bd0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b356d20);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b357010);
  uStack_58 = 2;
  local_60 = &PTR_FUN_14b357400;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b357440);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c82e80 FUN_143c82e80 body=55 status=ok
// SIG undefined FUN_143c82e80(void)

void FUN_143c82e80(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c778 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c778 = FUN_14171c317(FUN_14653292e,uVar1,L"EMissionObjectiveUpdateFilterType");
  }
  return;
}



// FUNCTION 143c82eb8 FUN_143c82eb8 body=55 status=ok
// SIG undefined FUN_143c82eb8(void)

void FUN_143c82eb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c7a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c7a8 = FUN_140002ddd(FUN_143c82eef,uVar1,L"MissionObjectiveUxModifierRepUpdate");
  }
  return;
}



// FUNCTION 143c82eef FUN_143c82eef body=47 status=ok
// SIG undefined FUN_143c82eef(void)

longlong FUN_143c82eef(void)

{
  if (DAT_14cb6c7a0 == 0) {
    FUN_14086a14e(&DAT_14cb6c7a0,&PTR_FUN_14b35c698);
  }
  return DAT_14cb6c7a0;
}



// FUNCTION 143c82f1e FUN_143c82f1e body=48 status=ok
// SIG undefined FUN_143c82f1e(void)

void FUN_143c82f1e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b3637a0;
  return;
}



// FUNCTION 143c82f4e FUN_143c82f4e body=55 status=ok
// SIG undefined FUN_143c82f4e(void)

void FUN_143c82f4e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c7f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c7f0 =
         FUN_140002ddd(FUN_143c82f85,uVar1,L"MissionObjectiveUxModifierRepUpdate_ResolveTimer");
  }
  return;
}



// FUNCTION 143c82f85 FUN_143c82f85 body=47 status=ok
// SIG undefined FUN_143c82f85(void)

longlong FUN_143c82f85(void)

{
  if (DAT_14cb6c7e8 == 0) {
    FUN_14086a14e(&DAT_14cb6c7e8,&PTR_FUN_14b35c920);
  }
  return DAT_14cb6c7e8;
}



// FUNCTION 143c82fb4 FUN_143c82fb4 body=48 status=ok
// SIG undefined FUN_143c82fb4(void)

void FUN_143c82fb4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14b363bc0;
  return;
}



// FUNCTION 143c82fe4 FUN_143c82fe4 body=55 status=ok
// SIG undefined FUN_143c82fe4(void)

void FUN_143c82fe4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c888 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c888 = FUN_14171c317(FUN_146532cd5,uVar1,L"EMissionRewardInfoType");
  }
  return;
}



// FUNCTION 143c8301b FUN_143c8301b body=55 status=ok
// SIG undefined FUN_143c8301b(void)

void FUN_143c8301b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c960 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c960 = FUN_14171c317(FUN_146533179,uVar1,L"EMissionSourceSelectionType");
  }
  return;
}



// FUNCTION 143c83052 FUN_143c83052 body=55 status=ok
// SIG undefined FUN_143c83052(void)

void FUN_143c83052(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c978 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c978 = FUN_14171c317(FUN_1465331a8,uVar1,L"EMissionBlockType");
  }
  return;
}



// FUNCTION 143c83089 FUN_143c83089 body=55 status=ok
// SIG undefined FUN_143c83089(void)

void FUN_143c83089(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ca58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ca58 = FUN_14171c317(FUN_1465333fc,uVar1,L"EMissionSourceActionType");
  }
  return;
}



// FUNCTION 143c830da FUN_143c830da body=29 status=ok
// SIG undefined FUN_143c830da(void)

undefined8 FUN_143c830da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c83166 FUN_143c83166 body=108 status=ok
// SIG undefined FUN_143c83166(void)

undefined8 FUN_143c83166(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0x18;
    do {
      uVar2 = *(undefined8 *)(param_3 + -0x10 + lVar5);
      lVar3 = *(longlong *)(param_3 + -8 + lVar5);
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
        UNLOCK();
      }
      plVar4 = *(longlong **)(param_2 + -8 + lVar5);
      *(undefined8 *)(param_2 + -0x10 + lVar5) = uVar2;
      *(longlong *)(param_2 + -8 + lVar5) = lVar3;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      *(undefined4 *)(param_2 + lVar5) = *(undefined4 *)(param_3 + lVar5);
      lVar5 = lVar5 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c831fa FUN_143c831fa body=59 status=ok
// SIG undefined FUN_143c831fa(void)

undefined8 FUN_143c831fa(longlong *param_1)

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



// FUNCTION 143c83240 FUN_143c83240 body=55 status=ok
// SIG undefined FUN_143c83240(void)

void FUN_143c83240(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14b366820;
    plVar2 = (longlong *)param_2[2];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 143c832c6 FUN_143c832c6 body=64 status=ok
// SIG undefined FUN_143c832c6(void)

undefined8 * FUN_143c832c6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b366820;
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



// FUNCTION 143c83306 FUN_143c83306 body=55 status=ok
// SIG undefined FUN_143c83306(void)

void FUN_143c83306(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c7a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c7a8 = FUN_140002ddd(FUN_143c82eef,uVar1,L"MissionObjectiveUxModifierRepUpdate");
  }
  return;
}



// FUNCTION 143c8335c FUN_143c8335c body=29 status=ok
// SIG undefined FUN_143c8335c(void)

undefined8 FUN_143c8335c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c83404 FUN_143c83404 body=189 status=ok
// SIG undefined FUN_143c83404(void)

undefined8 FUN_143c83404(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0x30;
    do {
      uVar4 = *(undefined8 *)(param_3 + -0x28 + lVar10);
      lVar5 = *(longlong *)(param_3 + -0x20 + lVar10);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_2 + -0x20 + lVar10);
      *(undefined8 *)(param_2 + -0x28 + lVar10) = uVar4;
      *(longlong *)(param_2 + -0x20 + lVar10) = lVar5;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      *(undefined4 *)(param_2 + -0x18 + lVar10) = *(undefined4 *)(param_3 + -0x18 + lVar10);
      uVar4 = *(undefined8 *)(param_3 + -0x10 + lVar10);
      lVar5 = *(longlong *)(param_3 + -8 + lVar10);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(param_2 + -8 + lVar10);
      *(undefined8 *)(param_2 + -0x10 + lVar10) = uVar4;
      *(longlong *)(param_2 + -8 + lVar10) = lVar5;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      *(undefined4 *)(param_2 + 0x10 + lVar10) = *(undefined4 *)(param_3 + 0x10 + lVar10);
      puVar2 = (undefined4 *)(param_3 + lVar10);
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar3 = (undefined4 *)(param_2 + lVar10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      lVar10 = lVar10 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c834ea FUN_143c834ea body=59 status=ok
// SIG undefined FUN_143c834ea(void)

undefined8 FUN_143c834ea(longlong *param_1)

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



// FUNCTION 143c83530 FUN_143c83530 body=86 status=ok
// SIG undefined FUN_143c83530(void)

void FUN_143c83530(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 9) == '\x01') {
    *param_2 = &PTR_FUN_14b366800;
    plVar2 = (longlong *)param_2[5];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *param_2 = &PTR_FUN_14b366820;
    plVar2 = (longlong *)param_2[2];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined1 *)(param_2 + 9) = 0;
  }
  return;
}



// FUNCTION 143c835d4 FUN_143c835d4 body=95 status=ok
// SIG undefined FUN_143c835d4(void)

undefined8 * FUN_143c835d4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b366800;
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_14b366820;
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



// FUNCTION 143c83634 FUN_143c83634 body=55 status=ok
// SIG undefined FUN_143c83634(void)

void FUN_143c83634(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c7f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c7f0 =
         FUN_140002ddd(FUN_143c82f85,uVar1,L"MissionObjectiveUxModifierRepUpdate_ResolveTimer");
  }
  return;
}



// FUNCTION 143c8367a FUN_143c8367a body=120 status=ok
// SIG undefined FUN_143c8367a(void)

void FUN_143c8367a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b366b90;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
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
  FUN_1487892b2(param_1);
  return;
}



// FUNCTION 143c836f2 FUN_143c836f2 body=264 status=ok
// SIG undefined FUN_143c836f2(void)

longlong FUN_143c836f2(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  FUN_14878924c();
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  uVar4 = *(undefined4 *)(param_2 + 0x48);
  uVar5 = *(undefined4 *)(param_2 + 0x4c);
  uVar6 = *(undefined4 *)(param_2 + 0x4c);
  uVar7 = *(undefined4 *)(param_2 + 0x50);
  uVar8 = *(undefined4 *)(param_2 + 0x54);
  uVar9 = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  *(undefined4 *)(param_1 + 0x50) = uVar7;
  *(undefined4 *)(param_1 + 0x54) = uVar8;
  *(undefined4 *)(param_1 + 0x58) = uVar9;
  if (param_2 != param_1) {
    FUN_143c837fa(param_1 + 0x60,param_2 + 0x60);
    FUN_143c837fa(param_1 + 0x78,param_2 + 0x78);
    iVar1 = *(int *)(param_2 + 0x98);
    pvVar2 = *(void **)(param_2 + 0x90);
    *(int *)(param_1 + 0x98) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x9c) == 0) {
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
    else {
      FUN_143c83976((undefined8 *)(param_1 + 0x90),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x90),pvVar2,(longlong)iVar1 * 0x14);
      }
    }
    iVar1 = *(int *)(param_2 + 0xa8);
    pvVar2 = *(void **)(param_2 + 0xa0);
    *(int *)(param_1 + 0xa8) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0xac) == 0) {
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
    else {
      FUN_143c83abe((undefined8 *)(param_1 + 0xa0),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0xa0),pvVar2,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 143c837fa FUN_143c837fa body=378 status=ok
// SIG undefined FUN_143c837fa(void)

/* WARNING: Removing unreachable block (ram,0x000143c838d7) */

void FUN_143c837fa(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c83976 FUN_143c83976 body=327 status=ok
// SIG undefined FUN_143c83976(void)

void FUN_143c83976(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x14;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143c839e4;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_143c839e4:
    iVar5 = (int)(uVar4 / 0x14);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x14,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 143c83abe FUN_143c83abe body=327 status=ok
// SIG undefined FUN_143c83abe(void)

void FUN_143c83abe(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x14;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143c83b2c;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_143c83b2c:
    iVar5 = (int)(uVar4 / 0x14);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x14,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 143c83c9e FUN_143c83c9e body=57 status=ok
// SIG undefined FUN_143c83c9e(void)

void FUN_143c83c9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c8e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c8e8 = FUN_140002ddd(FUN_146532eca,uVar1,L"MissionSetDef");
  }
  return;
}



// FUNCTION 143c83e04 FUN_143c83e04 body=55 status=ok
// SIG undefined FUN_143c83e04(void)

void FUN_143c83e04(undefined8 param_1,longlong param_2)

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
                    /* WARNING: Could not recover jumptable at 0x000143c83e37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c83eea FUN_143c83eea body=171 status=ok
// SIG undefined FUN_143c83eea(void)

void FUN_143c83eea(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0xe0);
  *param_2 = &PTR_FUN_14b366bf0;
  param_2[1] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = DAT_14cb86b60;
  *param_2 = &PTR_FUN_14b365a80;
  *(undefined1 *)(param_2 + 6) = 1;
  *(undefined4 *)(param_2 + 10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0x3ff00000;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x10] = 0x3ff0000000000000;
  param_2[0x11] = 0x3ff0000000000000;
  param_2[0x12] = 0x3ff0000000000000;
  param_2[0x13] = 0;
  *(undefined4 *)(param_2 + 0x17) = 0;
  param_2[0x14] = 0;
  *(undefined1 *)(param_2 + 0x15) = 0;
  *(undefined4 *)((longlong)param_2 + 0xdc) = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  return;
}



// FUNCTION 143c8401e FUN_143c8401e body=1537 status=ok
// SIG undefined FUN_143c8401e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c8401e(void)

{
  uint uVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14b35c5e0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b35c600);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b35c760);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b35c860);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b35ca10);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b35cac0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b35cb80,1,0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b35cc20);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b35d030,1,0);
  local_70 = "AssetRegistry";
  local_68 = 0xd;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb6c878 = (ulonglong)uVar1;
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14b35d260;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b35d280);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b35d380);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b35d5a0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b35e690,1,0);
  uStack_78 = 2;
  ppuStack_80 = &PTR_FUN_14b35efe0;
  local_88 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b35f020);
  local_70 = "__ms";
  local_68 = 4;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb6c9b8 = (ulonglong)uVar1;
  local_70 = "timers";
  local_68 = 6;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb6c9c0 = (ulonglong)uVar1;
  local_70 = "missions";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb6c9c8 = (ulonglong)uVar1;
  _DAT_14cb6c9d4 = 0;
  FUN_14052b5e0(&DAT_14cb6c9d0,"timer",0);
  _DAT_14cb6c9e0 = "timer";
  local_70 = "Running";
  local_68 = 7;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb6c9e8 = (ulonglong)uVar1;
  local_70 = "Finished";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb6c9f0 = (ulonglong)uVar1;
  local_70 = "Inactive";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb6c9f8 = (ulonglong)uVar1;
  local_70 = "Active";
  local_68 = 6;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb6ca00 = (ulonglong)uVar1;
  local_70 = "Inactive";
  local_68 = 8;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb6ca08 = (ulonglong)uVar1;
  local_70 = "Remove";
  local_68 = 6;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb6ca10 = (ulonglong)uVar1;
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b35f4b0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b35f850,1,0);
  uStack_78 = 1;
  ppuStack_80 = &PTR_FUN_14b35fec0;
  local_88 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b35fee0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b360150);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b360c30,2,0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b360f20);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b361190);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b361340);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b361520);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b361830);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b361960);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b362210,1,&PTR_FUN_14b3621c0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b362cb0,1,0);
  uStack_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3630b0,1,0);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b363530);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c84620 FUN_143c84620 body=55 status=ok
// SIG undefined FUN_143c84620(void)

void FUN_143c84620(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6cd08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6cd08 = FUN_14171c317(FUN_14653460a,uVar1,L"EMissionUIStateFlag");
  }
  return;
}



// FUNCTION 143c84657 FUN_143c84657 body=55 status=ok
// SIG undefined FUN_143c84657(void)

void FUN_143c84657(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6cd20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6cd20 = FUN_14171c317(FUN_146534639,uVar1,L"EMissionGiverUIStateFlag");
  }
  return;
}



// FUNCTION 143c8468e FUN_143c8468e body=55 status=ok
// SIG undefined FUN_143c8468e(void)

void FUN_143c8468e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6cda0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6cda0 = FUN_14171c317(FUN_1465347f2,uVar1,L"ECoordinatedMaterialParameterChannel");
  }
  return;
}



// FUNCTION 143c8478c FUN_143c8478c body=85 status=ok
// SIG undefined FUN_143c8478c(void)

undefined8 * FUN_143c8478c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b379650;
  plVar3 = (longlong *)param_1[5];
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



// FUNCTION 143c8487c FUN_143c8487c body=2339 status=ok
// SIG undefined FUN_143c8487c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c8487c(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = 0;
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b366f60,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b367300,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b367400);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14b367710 + lVar3),L"/Script/GbxGame",
                  *(undefined8 *)((longlong)&PTR_u_EMissionUIStateFlag_14b367718 + lVar3),
                  *(undefined8 *)((longlong)&PTR_DAT_14b367720 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0x40);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3677d0);
  _DAT_14cb6cd48 = 0xffffffff;
  _DAT_14cb6cd4c = 0;
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b367d40,2,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3680c0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b368380;
  local_58 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3683a0,1,0);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cb6cdc8);
  if (cVar1 == '\0') {
    _DAT_14cb6cdc8 = 0;
    uRam000000014cb6cdd0 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3684c0,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b3686c0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3688c0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3689e0,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b368b50);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b368d10,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3691d0,1,0);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb6ce88 = (ulonglong)uVar2;
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b369270);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b369620,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b369b40,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36a050,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36a560,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36aa90,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36afa0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36b4c0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36b590,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36b660,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36b730,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36b9e0,4,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36bb20,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36bc00,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36d950,6,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36df40,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36e470,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36e980,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36eeb0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36f3e0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36f910,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b36fe20,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b370340,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b370860,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b370d70,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b371280,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b371490,3,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3719f0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b371f00,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b372420,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b372930,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b372e40,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b373350,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b373870,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b373d80,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3742a0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3747b0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b374cd0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3751e0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3756e0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b375c00,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b376110,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b376640,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b376b50,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b377060,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b377570,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b377a80,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c851b8 FUN_143c851b8 body=534 status=ok
// SIG undefined FUN_143c851b8(void)

void FUN_143c851b8(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar14 = 0;
    uVar12 = 1;
    iVar9 = 0;
    iVar4 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar12 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar12 == uVar14) goto LAB_143c85334;
        iVar9 = iVar9 + 0x20;
        uVar13 = puVar8[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar2 = uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar13 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar4 * 0x60;
      *(undefined4 *)(lVar11 + 0x50 + lVar10) = 0;
      if (*(longlong *)(lVar11 + 0x48 + lVar10) != 0) {
        FUN_1400020a8();
      }
      FUN_143c853d0(lVar11 + lVar10 + 8);
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar14;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar13;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = puVar8[lVar11 + lVar10 + 1];
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar7 - lVar11 == lVar10) goto LAB_143c85334;
        }
        uVar14 = (ulonglong)(iVar4 + (int)lVar10 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_143c85334:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar13 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar5 = 0x80;
    if (0x80 < (int)uVar13) {
      uVar5 = uVar13;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 143c853d0 FUN_143c853d0 body=54 status=ok
// SIG undefined FUN_143c853d0(void)

void FUN_143c853d0(longlong *param_1)

{
  FUN_143c85406(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c85406 FUN_143c85406 body=128 status=ok
// SIG undefined FUN_143c85406(void)

void FUN_143c85406(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 143c85488 FUN_143c85488 body=534 status=ok
// SIG undefined FUN_143c85488(void)

void FUN_143c85488(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar14 = 0;
    uVar12 = 1;
    iVar9 = 0;
    iVar4 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar12 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar12 == uVar14) goto LAB_143c85604;
        iVar9 = iVar9 + 0x20;
        uVar13 = puVar8[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar2 = uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar13 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar4 * 0x60;
      *(undefined4 *)(lVar11 + 0x50 + lVar10) = 0;
      if (*(longlong *)(lVar11 + 0x48 + lVar10) != 0) {
        FUN_1400020a8();
      }
      FUN_143c856a0(lVar11 + lVar10 + 8);
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar14;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar13;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = puVar8[lVar11 + lVar10 + 1];
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar7 - lVar11 == lVar10) goto LAB_143c85604;
        }
        uVar14 = (ulonglong)(iVar4 + (int)lVar10 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_143c85604:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar13 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar5 = 0x80;
    if (0x80 < (int)uVar13) {
      uVar5 = uVar13;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 143c856a0 FUN_143c856a0 body=54 status=ok
// SIG undefined FUN_143c856a0(void)

void FUN_143c856a0(longlong *param_1)

{
  FUN_143c856d6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c856d6 FUN_143c856d6 body=128 status=ok
// SIG undefined FUN_143c856d6(void)

void FUN_143c856d6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 143c857d2 FUN_143c857d2 body=129 status=ok
// SIG undefined FUN_143c857d2(void)

void FUN_143c857d2(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b392a30;
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = &DAT_14a171d50;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = &DAT_14a171d50;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x12;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_2 + 0x1e) = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0xb] = &DAT_14cb70058;
  param_2[0xf] = &DAT_14cb70058;
  return;
}



// FUNCTION 143c8586c FUN_143c8586c body=57 status=ok
// SIG undefined FUN_143c8586c(void)

void FUN_143c8586c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6d9d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6d9d8 = FUN_140002ddd(FUN_146536ded,uVar1,L"GbxActivityAreaDef");
  }
  return;
}



// FUNCTION 143c858d0 FUN_143c858d0 body=65 status=ok
// SIG undefined FUN_143c858d0(void)

void FUN_143c858d0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b3914a0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 143c8591e FUN_143c8591e body=57 status=ok
// SIG undefined FUN_143c8591e(void)

void FUN_143c8591e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6da68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6da68 = FUN_140002ddd(FUN_146537029,uVar1,L"GbxStaticLIDef");
  }
  return;
}



// FUNCTION 143c85957 FUN_143c85957 body=2088 status=ok
// SIG undefined FUN_143c85957(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c85957(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb6d3e8 = (ulonglong)uVar1;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b37da00,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b37df10,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b37e430,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b37e970,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b37ee80,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b37f3b0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b37f8d0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b37fdf0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b380320,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b380840,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b380d60,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b381260,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b381760,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3826b0,3,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b382c00,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b382dd0,2,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3839e0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b383ee0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b384900,2,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b384e40,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b385350,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b385870,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b385d80,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b386290,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b3868a0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b387920,3,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b387a30,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b387af0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b388000,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b388500,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b388a60,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b388f60,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b389690,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b389ba0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38a0d0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38a600,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38ab00,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38b030,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38b520,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38ba30,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38bf50,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38c480,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38c9b0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38ceb0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38d3c0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38d8c0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38ddd0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38dea0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38df70,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38e480,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38e980,1,0);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38eee0,1,&PTR_FUN_14b38eeb0);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38f6c0,1,&PTR_FUN_14b38f670);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b38fed0,1,&PTR_FUN_14b38fe80);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b390280,1,0);
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b390820,1,&PTR_FUN_14b3907f0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b390bd0,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c86180 FUN_143c86180 body=55 status=ok
// SIG undefined FUN_143c86180(void)

void FUN_143c86180(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dae8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dae8 = FUN_14171c317(FUN_146537b9f,uVar1,L"ENumericDisplayValueSignStyle");
  }
  return;
}



// FUNCTION 143c861b7 FUN_143c861b7 body=55 status=ok
// SIG undefined FUN_143c861b7(void)

void FUN_143c861b7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6db00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6db00 = FUN_14171c317(FUN_146537bce,uVar1,L"ENumericDisplayValueRoundingMode");
  }
  return;
}



// FUNCTION 143c861ee FUN_143c861ee body=55 status=ok
// SIG undefined FUN_143c861ee(void)

void FUN_143c861ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6db48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6db48 = FUN_14171c317(FUN_146537cf2,uVar1,L"EObjectiveBoundaryType");
  }
  return;
}



// FUNCTION 143c86225 FUN_143c86225 body=55 status=ok
// SIG undefined FUN_143c86225(void)

void FUN_143c86225(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dc08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dc08 = FUN_14171c317(FUN_14653810a,uVar1,L"EObjectiveTriggerPlayerEventType");
  }
  return;
}



// FUNCTION 143c8625c FUN_143c8625c body=55 status=ok
// SIG undefined FUN_143c8625c(void)

void FUN_143c8625c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dc20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dc20 = FUN_14171c317(FUN_146538139,uVar1,L"EObjectiveTriggerPlayerCountEventType");
  }
  return;
}



// FUNCTION 143c86293 FUN_143c86293 body=55 status=ok
// SIG undefined FUN_143c86293(void)

void FUN_143c86293(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dc68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dc68 = FUN_14171c317(FUN_14653822e,uVar1,L"ECompositeObjectiveSubVisibility");
  }
  return;
}



// FUNCTION 143c862ca FUN_143c862ca body=55 status=ok
// SIG undefined FUN_143c862ca(void)

void FUN_143c862ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dce0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dce0 = FUN_14171c317(FUN_14653847e,uVar1,L"EObjectiveExternalSubType");
  }
  return;
}



// FUNCTION 143c86301 FUN_143c86301 body=55 status=ok
// SIG undefined FUN_143c86301(void)

void FUN_143c86301(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dd88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dd88 = FUN_14171c317(FUN_1465387b8,uVar1,L"EObjectiveKillSubType");
  }
  return;
}



// FUNCTION 143c86338 FUN_143c86338 body=55 status=ok
// SIG undefined FUN_143c86338(void)

void FUN_143c86338(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ddb8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ddb8 = FUN_14171c317(FUN_146538846,uVar1,L"EMultiPickupObjectiveDropTarget");
  }
  return;
}



// FUNCTION 143c8636f FUN_143c8636f body=55 status=ok
// SIG undefined FUN_143c8636f(void)

void FUN_143c8636f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dde8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dde8 = FUN_14171c317(FUN_14653890c,uVar1,L"EMissionObjectivePickupSpawnTiming");
  }
  return;
}



// FUNCTION 143c863a6 FUN_143c863a6 body=55 status=ok
// SIG undefined FUN_143c863a6(void)

void FUN_143c863a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6de48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6de48 = FUN_14171c317(FUN_146538aca,uVar1,L"ETravelObjectiveDetectionMethod");
  }
  return;
}



// FUNCTION 143c863ec FUN_143c863ec body=350 status=ok
// SIG undefined FUN_143c863ec(void)

void FUN_143c863ec(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *param_2 = &PTR_FUN_14b023b40;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = &PTR_FUN_14b00be70;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0xf00000d0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined1 *)((longlong)param_2 + 0x44) = 1;
  *(undefined4 *)(param_2 + 10) = 0xf00000d0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined4 *)(param_2 + 0xd) = 0xf00000d0;
  *(undefined4 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x84) = 6;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
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
  }
  plVar1 = DAT_14c844840;
  param_2[0x12] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x13) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  return;
}



// FUNCTION 143c8659c FUN_143c8659c body=47 status=ok
// SIG undefined FUN_143c8659c(void)

undefined8 FUN_143c8659c(undefined8 param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  
  if (((byte *)*param_2 == (byte *)0x0) || ((*(byte *)*param_2 & 3) != 1)) {
    uVar1 = 0;
  }
  else {
    *param_3 = 0;
    FUN_14049dff8(param_3 + 4);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143c8664e FUN_143c8664e body=329 status=ok
// SIG undefined FUN_143c8664e(void)

void FUN_143c8664e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b39b808;
  param_1[1] = &PTR_FUN_14b00be10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = &PTR_FUN_14b00be10;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = &PTR_FUN_14b00be10;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = &PTR_FUN_14b35c290;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x16] = &PTR_FUN_14b35c290;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1c] = &PTR_FUN_14b35c290;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x22] = &PTR_FUN_14b35c290;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x28] = &PTR_FUN_14b35c290;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2e] = &PTR_FUN_14b35c290;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x34] = &PTR_FUN_14b35c290;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = &PTR_FUN_14b00be10;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3f] = &PTR_FUN_14b00be10;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = &PTR_FUN_14b00be10;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  return;
}



// FUNCTION 143c8680a FUN_143c8680a body=55 status=ok
// SIG undefined FUN_143c8680a(void)

void FUN_143c8680a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x000143c8683d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143c86964 FUN_143c86964 body=57 status=ok
// SIG undefined FUN_143c86964(void)

void FUN_143c86964(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dc98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dc98 = FUN_140002ddd(FUN_1465382f3,uVar1,L"ObjectiveTypeSettings_Custom");
  }
  return;
}



// FUNCTION 143c869e4 FUN_143c869e4 body=128 status=ok
// SIG undefined FUN_143c869e4(void)

void FUN_143c869e4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x88);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x32) = 0;
  *(undefined2 *)((longlong)param_2 + 0x3a) = 0x101;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0x600000000000;
  *param_2 = &PTR_FUN_14b399fe0;
  *(undefined4 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x84) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x87) = 1;
  *(undefined4 *)(param_2 + 0x11) = 1;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  return;
}



// FUNCTION 143c86a70 FUN_143c86a70 body=57 status=ok
// SIG undefined FUN_143c86a70(void)

void FUN_143c86a70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dcc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dcc8 = FUN_140002ddd(FUN_14653841f,uVar1,L"ObjectiveTypeSettings_Encounter");
  }
  return;
}



// FUNCTION 143c86ab8 FUN_143c86ab8 body=123 status=ok
// SIG undefined FUN_143c86ab8(void)

void FUN_143c86ab8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x88);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x32) = 0;
  *(undefined2 *)((longlong)param_2 + 0x3a) = 0x101;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0x600000000000;
  *param_2 = &PTR_FUN_14b39a250;
  param_2[0x10] = 0;
  *(undefined4 *)(param_2 + 0x11) = 0x2001;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 143c86b40 FUN_143c86b40 body=57 status=ok
// SIG undefined FUN_143c86b40(void)

void FUN_143c86b40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dcf8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dcf8 = FUN_140002ddd(FUN_1465384e5,uVar1,L"ObjectiveTypeSettings_External");
  }
  return;
}



// FUNCTION 143c86bce FUN_143c86bce body=240 status=ok
// SIG undefined FUN_143c86bce(void)

void FUN_143c86bce(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x150);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x32) = 0;
  *(undefined2 *)((longlong)param_2 + 0x3a) = 0x101;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0x600000000000;
  *param_2 = &PTR_FUN_14b39ac80;
  *(undefined4 *)((longlong)param_2 + 0x7c) = 1;
  *(undefined1 *)(param_2 + 0x10) = 1;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  *(undefined4 *)(param_2 + 0x16) = 0xf00000d0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  *(undefined2 *)(param_2 + 0x1c) = 4;
  *(undefined4 *)(param_2 + 0x19) = 1;
  *(undefined1 *)(param_2 + 0x1d) = 2;
  *(byte *)(param_2 + 0x1e) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  param_2[0x20] = 0;
  *(undefined4 *)(param_2 + 0x21) = 0;
  *(undefined1 *)(param_2 + 0x25) = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  return;
}



// FUNCTION 143c86cca FUN_143c86cca body=57 status=ok
// SIG undefined FUN_143c86cca(void)

void FUN_143c86cca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ddd0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ddd0 = FUN_140002ddd(FUN_1465388ad,uVar1,L"ObjectiveTypeSettings_GbxMultiPickup");
  }
  return;
}



// FUNCTION 143c86d70 FUN_143c86d70 body=120 status=ok
// SIG undefined FUN_143c86d70(void)

void FUN_143c86d70(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3a) = 0x101;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x600000000000;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_14b39ba20;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7a) = 1;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x44fa0000;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return;
}



// FUNCTION 143c86e04 FUN_143c86e04 body=590 status=ok
// SIG undefined FUN_143c86e04(void)

void FUN_143c86e04(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  memset(param_2 + 1,0,0x208);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x32) = 0;
  *(undefined2 *)((longlong)param_2 + 0x3a) = 0x101;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0x600000000000;
  *param_2 = &PTR_FUN_14b39b760;
  param_2[0x13] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)((longlong)param_2 + 0x82) = 0;
  *(undefined8 *)((longlong)param_2 + 0x8a) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0x10;
  param_2[0x17] = 0;
  param_2[0x16] = &PTR_FUN_14b023b20;
  param_2[0x19] = &PTR_FUN_14b023b40;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = &PTR_FUN_14b00be70;
  *(undefined4 *)(param_2 + 0x1e) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x21) = 0;
  *(undefined1 *)((longlong)param_2 + 0x10c) = 1;
  *(undefined4 *)(param_2 + 0x23) = 0xf00000d0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  *(undefined4 *)(param_2 + 0x26) = 0xf00000d0;
  *(undefined1 *)(param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x144) = 0;
  *(undefined1 *)((longlong)param_2 + 0x149) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14c) = 6;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
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
  }
  plVar1 = DAT_14c844840;
  param_2[0x2b] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x2d) = 0;
  *(undefined2 *)(param_2 + 0x2e) = 0;
  *(undefined4 *)(param_2 + 0x2f) = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *(undefined4 *)(param_2 + 0x36) = 0xf00000d0;
  param_2[0x37] = 0;
  *(undefined4 *)(param_2 + 0x38) = 0x3f800000;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  return;
}


