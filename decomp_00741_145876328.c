// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145876328 FUN_145876328 body=9 status=ok
// SIG undefined FUN_145876328(void)

undefined4 FUN_145876328(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x15c);
}



// FUNCTION 145876332 FUN_145876332 body=75 status=ok
// SIG undefined FUN_145876332(void)

longlong FUN_145876332(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((DAT_14cb0d2b0 != 0) && (lVar1 = FUN_141283ace(), lVar1 != 0)) {
    lVar2 = FUN_141283af6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14587637e FUN_14587637e body=244 status=ok
// SIG undefined FUN_14587637e(void)

undefined8 FUN_14587637e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e01f80;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b3f2550;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_145c419b4;
  FUN_140ca2242(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145876474 FUN_145876474 body=177 status=ok
// SIG undefined FUN_145876474(void)

void FUN_145876474(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  FUN_1415ef1f0(0);
  lVar2 = DAT_14cb0d2b0;
  lVar1 = *(longlong *)(DAT_14cb0d2b0 + 0x2c0);
  if (lVar1 != 0) {
    lVar3 = FUN_1458b5420();
    if (((lVar3 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar2 + 0x2c0);
    }
  }
  plVar4 = (longlong *)FUN_145876525(DAT_14c951640,uVar5);
  if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar4);
  }
  *(longlong **)(param_1 + 0x2c8) = plVar4;
  (**(code **)(*plVar4 + 0x308))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x000145876514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x2e0))(*(longlong **)(param_1 + 0x2c8),0);
  return;
}



// FUNCTION 145876525 FUN_145876525 body=187 status=ok
// SIG undefined FUN_145876525(void)

undefined8 FUN_145876525(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458765e2 FUN_1458765e2 body=281 status=ok
// SIG undefined FUN_1458765e2(void)

void FUN_1458765e2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined ***pppuVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  ulonglong uStack_70;
  undefined1 *local_68;
  undefined ***local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14b406f80;
    local_40 = FUN_143d64826;
    local_68 = &LAB_140255cce;
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    FUN_140255ee2(0,&local_78);
    if (((int)uStack_70 != 0) && (plVar1 = (longlong *)*local_78, plVar1 != (longlong *)0x0)) {
      lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
      lVar3 = FUN_146524dc2();
      if ((lVar3 != 0) &&
         ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)))) {
        FUN_141471d82(param_2,plVar1 + 6);
      }
    }
    FUN_140255aed(local_78,uStack_70 & 0xffffffff);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined1 *)0x0) {
      pppuVar4 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar4 = &local_48;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145876704 FUN_145876704 body=73 status=ok
// SIG undefined FUN_145876704(void)

undefined8 FUN_145876704(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39130);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  return 0;
}



// FUNCTION 145876826 FUN_145876826 body=39 status=ok
// SIG undefined FUN_145876826(void)

void FUN_145876826(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xa00))();
  (**(code **)(*plVar1 + 0x20))(plVar1);
  FUN_144807930(param_1);
  return;
}



// FUNCTION 14587684e FUN_14587684e body=38 status=ok
// SIG undefined FUN_14587684e(void)

void FUN_14587684e(longlong param_1)

{
  if (*(int *)(param_1 + 0x20) == 2) {
    FUN_1414dc69c(*(undefined8 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  return;
}



// FUNCTION 14587687a FUN_14587687a body=221 status=ok
// SIG undefined FUN_14587687a(void)

longlong FUN_14587687a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99d260 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146fdd881;
    local_40 = FUN_146293598;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/ClothingSystemRuntimeInterface",L"ClothingAssetBase",&DAT_14c99d260,
                  &DAT_146fdd880);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99d260;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587695e FUN_14587695e body=221 status=ok
// SIG undefined FUN_14587695e(void)

longlong FUN_14587695e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1a630 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147e1ae65;
    local_40 = FUN_146418543;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxSpawn",L"SpawnEncounterCondition",&DAT_14cb1a630,&DAT_147e1ae64);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1a630;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145876a42 FUN_145876a42 body=221 status=ok
// SIG undefined FUN_145876a42(void)

longlong FUN_145876a42(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb44848 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1482164d9;
    local_40 = &LAB_14594eb60;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xe8;
    FUN_14081cfa3(L"/Script/CommonInput",L"CommonInputBaseControllerData",&DAT_14cb44848,
                  FUN_14647dab8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb44848;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145876b26 FUN_145876b26 body=221 status=ok
// SIG undefined FUN_145876b26(void)

longlong FUN_145876b26(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0dc08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14935742d;
    local_40 = &LAB_145ed1ef5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/VariantManagerContent",L"VariantSet",&DAT_14cc0dc08,FUN_1467237f2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0dc08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145876c0a FUN_145876c0a body=221 status=ok
// SIG undefined FUN_145876c0a(void)

longlong FUN_145876c0a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0db38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149356553;
    local_40 = &LAB_145f26892;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/VariantManagerContent",L"Variant",&DAT_14cc0db38,FUN_146723456);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0db38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145876cee FUN_145876cee body=221 status=ok
// SIG undefined FUN_145876cee(void)

longlong FUN_145876cee(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2db10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14986bb98;
    local_40 = &LAB_145dc0988;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x218;
    FUN_14081cfa3(L"/Script/IKRig",L"IKRetargeter",&DAT_14cc2db10,FUN_146769c0e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc2db10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145876dcc FUN_145876dcc body=42 status=ok
// SIG undefined FUN_145876dcc(void)

void FUN_145876dcc(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145876e0c(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145876de1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_145876f64();
  FUN_1459b4382(uVar2);
  return;
}



// FUNCTION 145876df6 FUN_145876df6 body=21 status=ok
// SIG undefined FUN_145876df6(void)

void FUN_145876df6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145876f64();
  FUN_1459b4382(uVar1);
  return;
}



// FUNCTION 145876e0c FUN_145876e0c body=191 status=ok
// SIG undefined FUN_145876e0c(void)

longlong FUN_145876e0c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_145876ecc();
  lVar3 = *param_1;
  if (DAT_14cb75bd0 != DAT_14cb75bfc) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb75c00;
    if (DAT_14cb75c08 != (undefined *)0x0) {
      puVar7 = DAT_14cb75c08;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb75c10 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb75bc8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb75bc0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 145876ecc FUN_145876ecc body=152 status=ok
// SIG undefined FUN_145876ecc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145876ecc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb75c18) {
    FUN_144b3d300(&DAT_14cb75c18);
    if (DAT_14cb75c18 == -1) {
      DAT_14cb75be8 = 0;
      DAT_14cb75bf0 = 0;
      DAT_14cb75bc8 = 0;
      _DAT_14cb75bd0 = 0;
      _DAT_14cb75bf4 = 0xffffffff00000080;
      DAT_14cb75bfc = 0;
      DAT_14cb75c08 = 0;
      DAT_14cb75c10 = 0;
      atexit(FUN_143cd9557);
      _Init_thread_footer(&DAT_14cb75c18);
      return;
    }
  }
  return;
}



// FUNCTION 145876f64 FUN_145876f64 body=113 status=ok
// SIG undefined FUN_145876f64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145876f64(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb75c20;
  if (DAT_14cb75c20 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x1380,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x27;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb75c20;
    DAT_14cb75c28 = DAT_14cb75c28 + 0x10;
  }
  DAT_14cb75c20 = (undefined8 *)*puVar2;
  _DAT_14cb75c2c = _DAT_14cb75c2c + 1;
  return;
}



// FUNCTION 145876fd6 FUN_145876fd6 body=410 status=ok
// SIG undefined FUN_145876fd6(void)

void FUN_145876fd6(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1458771b0();
    cVar1 = FUN_145877172(param_1);
    lVar5 = param_1 + 8;
    if (cVar1 == '\0') {
      cVar1 = FUN_144729dda();
      if (cVar1 != '\0') {
        lVar3 = FUN_14479d2ce(lVar5);
        local_38 = (undefined8 *)0x0;
        local_30 = 0;
        FUN_1446efa72(&local_38,0,2,0x10);
        local_30 = 2;
        *local_38 = &PTR_LAB_14b3e62a0;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar5 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar5 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar5;
        local_38[2] = lVar6;
        *local_38 = &PTR_FUN_14b401c10;
        local_38[3] = param_1;
        FUN_141285884(lVar3 + 0x2a8,&local_40,&local_38);
        FUN_1449db362(&local_38);
        *(undefined8 *)(param_1 + 0x1e0) = local_40;
      }
    }
    else {
      uVar4 = FUN_14479d2ce(lVar5);
      lVar3 = FUN_141285870(uVar4);
      uVar4 = FUN_14479d2ce(lVar5);
      lVar5 = FUN_1414cf3d2(uVar4);
      if ((lVar3 != 0) && (lVar5 != 0)) {
        FUN_1458772aa(lVar5,&local_38);
        if (-1 < (short)local_38) {
          iVar2 = FUN_140b9fef0(lVar5,&local_38,0);
          if (iVar2 != -1) {
            FUN_14587734e(lVar3,&DAT_14cb7d1d0,&local_38);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145877172 FUN_145877172 body=62 status=ok
// SIG undefined FUN_145877172(void)

undefined8 FUN_145877172(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_144729dda(param_1 + 8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 8);
    cVar1 = (**(code **)(*plVar2 + 0x498))(plVar2);
    if (0xfd < (byte)(cVar1 - 9U)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1458771b0 FUN_1458771b0 body=249 status=ok
// SIG undefined FUN_1458771b0(void)

void FUN_1458771b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x1d0) != 0) && (*(longlong *)(param_1 + 0x1d8) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x1d8) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x1d0);
    local_20 = *(longlong *)(param_1 + 0x1d8);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    plVar2 = *(longlong **)(param_1 + 0x1d8);
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
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
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    cVar3 = FUN_144729dda(param_1 + 8);
    if (cVar3 != '\0') {
      lVar4 = FUN_14479d2ce(param_1 + 8);
      if (*(longlong *)(param_1 + 0x1e0) != 0) {
        FUN_14480f766(lVar4 + 0x2a8);
      }
    }
    *(undefined8 *)(param_1 + 0x1e0) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458772aa FUN_1458772aa body=164 status=ok
// SIG undefined FUN_1458772aa(void)

undefined4 * FUN_1458772aa(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = param_1 + 0x90;
  cVar1 = FUN_144729dda(lVar5);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(lVar5);
    if (((*(longlong *)(lVar2 + 0x30) != 0) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x360) != 0)) &&
       (uVar3 = FUN_14490d72a(), (uVar3 & 0xfffffffd) != 0)) goto LAB_145877346;
  }
  uVar4 = FUN_14479d2ce(lVar5);
  lVar5 = FUN_145725aea(uVar4,1);
  if (lVar5 != 0) {
    lVar2 = FUN_1449f3324();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_140d27df6(param_1,param_2,lVar5);
      return param_2;
    }
  }
LAB_145877346:
  *param_2 = 0xffff;
  return param_2;
}



// FUNCTION 14587734e FUN_14587734e body=289 status=ok
// SIG undefined FUN_14587734e(void)

undefined4 FUN_14587734e(longlong param_1,uint *param_2,undefined8 param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0xffff;
  lVar4 = FUN_140b9fe48(param_1,param_3);
  if (((lVar4 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x38), lVar2 != 0)) &&
     (*(int *)(lVar2 + 0xb0) != *(int *)(lVar2 + 0xdc))) {
    lVar5 = lVar2 + 0xe0;
    if (*(longlong *)(lVar2 + 0xe8) != 0) {
      lVar5 = *(longlong *)(lVar2 + 0xe8);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar2 + 0xf0) - 1U & *param_2) * 4);
    if (iVar6 != -1) {
      do {
        lVar5 = *(longlong *)(lVar2 + 0xa8) + (longlong)iVar6 * 0x38;
        if (*(uint *)(*(longlong *)(lVar2 + 0xa8) + (longlong)iVar6 * 0x38) == *param_2) {
          uVar3 = 0;
          if ((lVar5 != 0) && ((ushort *)(lVar5 + 0x28) != (ushort *)0x0)) {
            uVar1 = *(ushort *)(lVar5 + 0x28);
            if (((short)uVar1 < 0) || (*(int *)(param_1 + 200) <= (int)(short)uVar1))
            goto LAB_14587745e;
            uVar3 = FUN_145a0da06(param_1,*(undefined8 *)
                                           (*(longlong *)(param_1 + 0xc0) + (ulonglong)uVar1 * 8),
                                  &local_38,lVar4);
          }
          break;
        }
        iVar6 = *(int *)(lVar5 + 0x30);
        uVar3 = 0;
      } while (iVar6 != -1);
      goto LAB_14587743e;
    }
  }
LAB_14587745e:
  uVar3 = 0;
LAB_14587743e:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14587747c FUN_14587747c body=54 status=ok
// SIG undefined FUN_14587747c(void)

undefined8 * FUN_14587747c(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6eccf0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x80;
  return param_1;
}



// FUNCTION 1458774f4 FUN_1458774f4 body=105 status=ok
// SIG undefined FUN_1458774f4(void)

void FUN_1458774f4(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1458775aa();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14587755e(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587755e FUN_14587755e body=76 status=ok
// SIG undefined FUN_14587755e(void)

void FUN_14587755e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1458775aa();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14587759b;
    }
  }
  lVar2 = 0;
LAB_14587759b:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1458775aa FUN_1458775aa body=228 status=ok
// SIG undefined FUN_1458775aa(void)

longlong FUN_1458775aa(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba8800 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_14107a1fc;
    local_38 = &LAB_148bff901;
    local_40 = FUN_1465d0e22;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacterMemorySubsystem",&DAT_14cba8800,&DAT_148bff900);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba8800;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145877690 FUN_145877690 body=40 status=ok
// SIG undefined FUN_145877690(void)

undefined8 FUN_145877690(undefined8 param_1,int param_2)

{
  FUN_1458776b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458776b8 FUN_1458776b8 body=205 status=ok
// SIG undefined FUN_1458776b8(void)

void FUN_1458776b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5b14d0;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  if (*(char *)(param_1 + 0x84) == '\x01') {
    *(undefined1 *)(param_1 + 0x84) = 0;
  }
  FUN_145877785(param_1[0x7f],*(undefined4 *)(param_1 + 0x80));
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  FUN_1402cb1d9(param_1[0x7d],*(undefined4 *)(param_1 + 0x7e));
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_141285bfd(param_1[0x75],*(undefined4 *)(param_1 + 0x76));
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145877785 FUN_145877785 body=73 status=ok
// SIG undefined FUN_145877785(void)

void FUN_145877785(longlong param_1,int param_2)

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



// FUNCTION 1458777ce FUN_1458777ce body=24 status=ok
// SIG undefined FUN_1458777ce(void)

void FUN_1458777ce(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001458777e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1458777e6 FUN_1458777e6 body=24 status=ok
// SIG undefined FUN_1458777e6(void)

void FUN_1458777e6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001458777fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1458777fe FUN_1458777fe body=72 status=ok
// SIG undefined FUN_1458777fe(void)

undefined8 * FUN_1458777fe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5b3690;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d0ec2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 145877846 FUN_145877846 body=72 status=ok
// SIG undefined FUN_145877846(void)

undefined8 * FUN_145877846(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5b3750;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d0ec2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14587788e FUN_14587788e body=40 status=ok
// SIG undefined FUN_14587788e(void)

undefined8 FUN_14587788e(undefined8 param_1,int param_2)

{
  FUN_1458778b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458778b6 FUN_1458778b6 body=74 status=ok
// SIG undefined FUN_1458778b6(void)

void FUN_1458778b6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6c9c30;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145877902 FUN_145877902 body=259 status=ok
// SIG undefined FUN_145877902(void)

void FUN_145877902(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *(undefined8 *)(param_1 + 0x348) = 0;
  plVar3 = *(longlong **)(param_1 + 0x350);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x350) = 0;
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
  *(undefined8 *)(param_1 + 0x338) = 0;
  plVar3 = *(longlong **)(param_1 + 0x340);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x340) = 0;
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
  *(undefined8 *)(param_1 + 0x328) = 0;
  plVar3 = *(longlong **)(param_1 + 0x330);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x330) = 0;
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
  lVar4 = FUN_145877a06(param_1);
  if (lVar4 == 0) {
    return;
  }
  FUN_140457ffc(lVar4 + 0x30,param_1);
  return;
}



// FUNCTION 145877a06 FUN_145877a06 body=77 status=ok
// SIG undefined FUN_145877a06(void)

undefined8 FUN_145877a06(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)FUN_1412865a4(param_1 + 99);
  if (plVar1 == (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0x2d0))(plVar1);
  }
  if (lVar2 != 0) {
    uVar3 = FUN_140e94dc2(lVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 145877a54 FUN_145877a54 body=113 status=ok
// SIG undefined FUN_145877a54(void)

undefined8 FUN_145877a54(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar2 = FUN_1412864c6();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (plVar1 = *(longlong **)(lVar3 + 0x20), plVar1 != (longlong *)0x0)) {
      lVar3 = FUN_1405e2bf2();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000145877abe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar1 + 0x2d0))(plVar1);
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 145877ac6 FUN_145877ac6 body=38 status=ok
// SIG undefined FUN_145877ac6(void)

undefined8 FUN_145877ac6(undefined8 param_1,int param_2)

{
  FUN_145877aec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145877aec FUN_145877aec body=68 status=ok
// SIG undefined FUN_145877aec(void)

void FUN_145877aec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae09d20;
  FUN_141308248(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_140137a40(param_1);
  return;
}



// FUNCTION 145877b30 FUN_145877b30 body=201 status=ok
// SIG undefined FUN_145877b30(void)

bool FUN_145877b30(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined2 local_40;
  undefined6 uStack_3e;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_40);
    lVar4 = CONCAT62(uStack_3e,local_40);
  }
  else {
    lVar4 = 0;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar3 != 0) {
    pcVar1 = *(code **)(param_1 + 0x20);
    local_40 = *param_3;
    local_38 = *(longlong *)(param_3 + 4);
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    (*pcVar1)(lVar3,param_2,&local_40);
  }
  if (lVar4 != 0) {
    FUN_140113f3a(lVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145877bfa FUN_145877bfa body=745 status=ok
// SIG undefined FUN_145877bfa(void)

void FUN_145877bfa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + -0x10);
  if (lVar3 != 0) {
    lVar7 = FUN_144a5dd5e();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      lVar7 = FUN_144a5dd5e();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        FUN_1449027d0(param_1 + -0x30,&local_58);
        plVar4 = *(longlong **)(local_58 + 0x290);
        AcquireSRWLockExclusive((PSRWLOCK)(plVar4 + 7));
        *(int *)(plVar4 + 6) = (int)plVar4[6] + 1;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
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
        FUN_145877fae(plVar4);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
        lVar7 = 0x4c;
        uVar11 = 0;
        do {
          *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
          lVar5 = *plVar4;
          lVar8 = FUN_1412868d8(lVar3,uVar11 & 0xffffffff);
          iVar6 = *(int *)(lVar5 + -0x48 + lVar7);
          if (uVar11 == *(byte *)(lVar5 + -0x4c + lVar7)) {
            if (iVar6 == 0) {
              iVar6 = 0;
              goto LAB_145877e4c;
            }
          }
          else {
LAB_145877e4c:
            *(char *)(lVar5 + -0x4c + lVar7) = (char)uVar11;
            *(int *)(lVar5 + -0x48 + lVar7) = iVar6 + 1;
          }
          FUN_145877ee4(&local_58,uVar11 & 0xffffffff);
          FUN_140775538(lVar7 + -0x44 + lVar5,&local_58);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          iVar6 = *(int *)(lVar8 + 0x30);
          iVar9 = *(int *)(lVar5 + -0x28 + lVar7);
          if ((iVar6 != *(int *)(lVar5 + -0x2c + lVar7)) || (bVar12 = iVar9 == 0, iVar9 = 0, bVar12)
             ) {
            *(int *)(lVar5 + -0x2c + lVar7) = iVar6;
            *(int *)(lVar5 + -0x28 + lVar7) = iVar9 + 1;
          }
          iVar9 = *(int *)(lVar8 + 0x38);
          iVar10 = *(int *)(lVar5 + -0x20 + lVar7);
          if ((iVar9 != *(int *)(lVar5 + -0x24 + lVar7)) ||
             (bVar12 = iVar10 == 0, iVar10 = 0, bVar12)) {
            *(int *)(lVar5 + -0x24 + lVar7) = iVar9;
            *(int *)(lVar5 + -0x20 + lVar7) = iVar10 + 1;
          }
          fVar15 = 0.0;
          if (iVar9 != 0) {
            fVar15 = (float)iVar6 / (float)iVar9;
          }
          fVar14 = *(float *)(lVar5 + -0x1c + lVar7);
          iVar10 = *(int *)(lVar5 + -0x18 + lVar7);
          if (((fVar15 != fVar14) || (NAN(fVar15) || NAN(fVar14))) ||
             (bVar12 = iVar10 == 0, iVar10 = 0, bVar12)) {
            *(float *)(lVar5 + -0x1c + lVar7) = fVar15;
            *(int *)(lVar5 + -0x18 + lVar7) = iVar10 + 1;
            fVar14 = fVar15;
          }
          fVar15 = DAT_14c764088;
          iVar10 = *(int *)(lVar5 + -0x10 + lVar7);
          if ((bool)*(char *)(lVar5 + -0x14 + lVar7) == fVar14 < DAT_14c764088) {
            if (iVar10 == 0) {
              iVar10 = 0;
              goto LAB_145877dcf;
            }
          }
          else {
LAB_145877dcf:
            *(bool *)(lVar5 + -0x14 + lVar7) = fVar14 < DAT_14c764088;
            *(int *)(lVar5 + -0x10 + lVar7) = iVar10 + 1;
          }
          iVar10 = *(int *)(lVar5 + -8 + lVar7);
          if ((bool)*(char *)(lVar5 + -0xc + lVar7) == (iVar6 == 0)) {
            if (iVar10 == 0) {
              iVar10 = 0;
              goto LAB_145877ded;
            }
          }
          else {
LAB_145877ded:
            *(bool *)(lVar5 + -0xc + lVar7) = iVar6 == 0;
            *(int *)(lVar5 + -8 + lVar7) = iVar10 + 1;
          }
          bVar12 = fVar15 <= fVar14 && (iVar6 < iVar9 && iVar6 != 0);
          iVar6 = *(int *)(lVar5 + lVar7);
          if (((bool)*(char *)(lVar5 + -4 + lVar7) != bVar12) ||
             (bVar13 = iVar6 == 0, iVar6 = 0, bVar13)) {
            *(bool *)(lVar5 + -4 + lVar7) = bVar12;
            *(int *)(lVar5 + lVar7) = iVar6 + 1;
          }
          uVar11 = uVar11 + 1;
          lVar7 = lVar7 + 0x50;
        } while (lVar7 != 0x22c);
        ReleaseSRWLockExclusive((PSRWLOCK)(plVar4 + 7));
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145877ee4 FUN_145877ee4 body=199 status=ok
// SIG undefined FUN_145877ee4(void)

longlong * FUN_145877ee4(longlong *param_1,undefined1 param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_1412868e8();
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  FUN_1401cfb1c(lVar3,&local_30,param_2);
  uVar2 = local_28 - 1;
  if (local_28 == 0) {
    uVar2 = 0;
  }
  if (0 < (int)uVar2) {
    uVar4 = 0;
    do {
      uVar1 = *(ushort *)(local_30 + uVar4 * 2);
      *(ushort *)(local_30 + uVar4 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
  }
  *param_1 = local_30;
  *(int *)(param_1 + 1) = local_28;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145877fae FUN_145877fae body=166 status=ok
// SIG undefined FUN_145877fae(void)

void FUN_145877fae(longlong *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 6) {
    *(undefined4 *)(param_1 + 1) = 6;
    uVar3 = 6 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_145878054(param_1,iVar1);
    }
    puVar2 = (undefined1 *)((longlong)iVar1 * 0x50 + *param_1);
    do {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 0x3c) = 0;
      puVar2[0x40] = 0;
      *(undefined4 *)(puVar2 + 0x44) = 0;
      puVar2[0x48] = 0;
      *(undefined4 *)(puVar2 + 0x4c) = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 0xc) = 0;
      *(undefined8 *)(puVar2 + 0x14) = 0;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      *(undefined8 *)(puVar2 + 0x28) = 0;
      *(undefined8 *)(puVar2 + 0x29) = 0;
      *(undefined8 *)(puVar2 + 0x31) = 0;
      puVar2 = puVar2 + 0x50;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    return;
  }
  if (iVar1 == 6) {
    return;
  }
  FUN_148e2418a(param_1,iVar1 + -6);
  FUN_148e241e2(param_1);
  return;
}



// FUNCTION 145878054 FUN_145878054 body=147 status=ok
// SIG undefined FUN_145878054(void)

void FUN_145878054(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1458780e8 FUN_1458780e8 body=29 status=ok
// SIG undefined FUN_1458780e8(void)

undefined1 FUN_1458780e8(undefined8 param_1)

{
  FUN_14587810e();
  FUN_145878106(param_1);
  return 1;
}



// FUNCTION 145878106 FUN_145878106 body=8 status=ok
// SIG undefined FUN_145878106(void)

void FUN_145878106(longlong param_1)

{
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 0x20;
  return;
}



// FUNCTION 14587810e FUN_14587810e body=96 status=ok
// SIG undefined FUN_14587810e(void)

void FUN_14587810e(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x178) != '\x01') {
    return;
  }
  if (*(char *)(param_1 + 0x170) == '\0') {
    cVar1 = FUN_145966fd4(param_1 + 0xc0,*(undefined8 *)(*param_2 + 0x40),
                          *(char *)(param_1 + 0xf9) == '\0');
    if (cVar1 == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  FUN_14587816e(param_1,param_2);
  return;
}



// FUNCTION 14587816e FUN_14587816e body=73 status=ok
// SIG undefined FUN_14587816e(void)

void FUN_14587816e(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if (*(char *)(param_2 + 0x20) != '\x01') {
    return;
  }
  cVar1 = FUN_1458781b8(param_2);
  if (cVar1 == '\0') {
    FUN_1458781c6();
    return;
  }
  FUN_145878280(param_1,&DAT_14cb8a9f8,param_2);
  return;
}



// FUNCTION 1458781b8 FUN_1458781b8 body=14 status=ok
// SIG undefined FUN_1458781b8(void)

undefined8 FUN_1458781b8(longlong *param_1)

{
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),(*(byte *)(*param_1 + 0x248) & 1) == 0);
}



// FUNCTION 1458781c6 FUN_1458781c6 body=185 status=ok
// SIG undefined FUN_1458781c6(void)

void FUN_1458781c6(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong local_30;
  ulonglong uStack_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 0x88) & 8) == 0) {
    local_80 = DAT_14cb8ae38;
    local_78 = *param_2;
    local_50 = 0;
    uStack_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uStack_48 = 0x8000000000;
    local_40 = 0xffffffff;
    local_20 = 1;
    FUN_14109984c(*(undefined8 *)(param_1 + 0x58),param_3,&local_80);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(&local_70);
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145878280 FUN_145878280 body=185 status=ok
// SIG undefined FUN_145878280(void)

void FUN_145878280(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong local_30;
  ulonglong uStack_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 0x88) & 0x10) == 0) {
    local_80 = DAT_14cb8ae38;
    local_78 = *param_2;
    local_50 = 0;
    uStack_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uStack_48 = 0x8000000000;
    local_40 = 0xffffffff;
    local_20 = 1;
    FUN_14109984c(*(undefined8 *)(param_1 + 0x58),param_3,&local_80);
    uStack_28 = uStack_28 & 0xffffffff00000000;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(&local_70);
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587833a FUN_14587833a body=57 status=ok
// SIG undefined FUN_14587833a(void)

void FUN_14587833a(longlong param_1,longlong param_2)

{
  FUN_145878374();
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x1ec0) == param_2)) {
    FUN_140bcbe96();
    *(undefined8 *)(param_1 + 0x1ec0) = 0;
  }
  return;
}



// FUNCTION 145878374 FUN_145878374 body=41 status=ok
// SIG undefined FUN_145878374(void)

void FUN_145878374(longlong param_1,undefined8 param_2)

{
  FUN_140cf4cae();
  FUN_140cf4c1e(param_1 + 0x638,param_2);
  return;
}



// FUNCTION 14587839e FUN_14587839e body=77 status=ok
// SIG undefined FUN_14587839e(void)

void FUN_14587839e(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar1 = param_1;
  }
  FUN_141286b11(lVar1,*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != param_2) {
    FUN_14587845c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1458783ec FUN_1458783ec body=111 status=ok
// SIG undefined FUN_1458783ec(void)

void FUN_1458783ec(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    uVar1 = param_2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,(ulonglong)param_2 << 3,8);
      uVar1 = (uint)(uVar2 >> 3);
    }
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 != *(uint *)(param_1 + 0xc)) {
    *(uint *)(param_1 + 0xc) = uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
  }
  return;
}



// FUNCTION 14587845c FUN_14587845c body=110 status=ok
// SIG undefined FUN_14587845c(void)

void FUN_14587845c(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((param_2 != 0) && (uVar3 = 6, 6 < param_2)) {
    uVar1 = param_2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,(ulonglong)param_2 << 4,0);
      uVar1 = (uint)(uVar2 >> 4);
    }
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x6c)) {
    return;
  }
  *(uint *)(param_1 + 0x6c) = uVar3;
  FUN_1458784ca(param_1,*(undefined4 *)(param_1 + 0x68));
  return;
}



// FUNCTION 1458784ca FUN_1458784ca body=131 status=ok
// SIG undefined FUN_1458784ca(void)

void FUN_1458784ca(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 7) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,0x10);
  return;
}



// FUNCTION 14587854e FUN_14587854e body=86 status=ok
// SIG undefined FUN_14587854e(void)

void FUN_14587854e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    uVar1 = (undefined4)param_3[1];
    FUN_141286b5e(param_1 + 0x10,lVar2,uVar1);
    FUN_140e3860a(param_1 + 0x28,lVar2,uVar1);
    FUN_140659abc(param_1 + 0x40,lVar2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1458785a4 FUN_1458785a4 body=30 status=ok
// SIG undefined FUN_1458785a4(void)

void FUN_1458785a4(undefined8 param_1)

{
  FUN_1458785c2(param_1,0);
  FUN_1458785c2(param_1,1);
  return;
}



// FUNCTION 1458785c2 FUN_1458785c2 body=496 status=ok
// SIG undefined FUN_1458785c2(void)

void FUN_1458785c2(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x58) == param_2) goto LAB_145878765;
  *(char *)(param_1 + 0x58) = param_2;
  lVar1 = FUN_14060e84c();
  if (lVar1 == 0) {
LAB_145878788:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  lVar2 = FUN_144a5dd5e();
  if (((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
       != lVar2 + 0x30)) ||
     (plVar3 = (longlong *)(**(code **)(*(longlong *)(lVar1 + 0x958) + 0x10))(lVar1 + 0x958),
     plVar3 == (longlong *)0x0)) goto LAB_145878788;
  lVar2 = (**(code **)(*plVar3 + 0x2b0))(plVar3);
  if (lVar2 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(lVar2 + 0x140);
  }
  lVar2 = (**(code **)(*plVar3 + 0x2b8))(plVar3);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_140e07122(lVar2,lVar1);
  }
  if (plVar4 == (longlong *)0x0) goto LAB_145878788;
  lVar1 = (**(code **)(*plVar4 + 0x38))(plVar4,lVar1);
  if (lVar1 != 0) {
    if (param_2 == '\0') {
      FUN_140457ffc(lVar1,param_1);
    }
    else {
      FUN_1458787c6(lVar1,local_38,param_1,&LAB_14060e590);
    }
  }
  lVar1 = (**(code **)(*plVar4 + 0x40))(plVar4);
  if (lVar1 != 0) {
    if (param_2 == '\0') {
      FUN_140457ffc(lVar1,param_1);
    }
    else {
      FUN_1458787c6(lVar1,local_38,param_1,&LAB_148d11820);
    }
  }
  lVar1 = (**(code **)(*plVar4 + 0x60))(plVar4);
  if (lVar1 == 0) {
    if (lVar2 != 0) {
      if (param_2 == '\0') goto LAB_14587874e;
LAB_145878728:
      FUN_145878ab0(lVar2 + 0x48,local_38,param_1);
    }
  }
  else if (param_2 == '\0') {
    FUN_140457ffc(lVar1,param_1);
    if (lVar2 != 0) {
LAB_14587874e:
      FUN_140457ffc(lVar2 + 0x48,param_1);
    }
  }
  else {
    FUN_1458789ba(lVar1,local_38,param_1);
    if (lVar2 != 0) goto LAB_145878728;
  }
  FUN_14060e596(param_1);
LAB_145878765:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458787c6 FUN_1458787c6 body=244 status=ok
// SIG undefined FUN_1458787c6(void)

undefined8
FUN_1458787c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b968050;
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
  *local_40 = &PTR_FUN_14b967fe0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1458788bc(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458788bc FUN_1458788bc body=216 status=ok
// SIG undefined FUN_1458788bc(void)

undefined8 * FUN_1458788bc(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1458789a2 FUN_1458789a2 body=24 status=ok
// SIG undefined FUN_1458789a2(void)

bool FUN_1458789a2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1458789ba FUN_1458789ba body=244 status=ok
// SIG undefined FUN_1458789ba(void)

undefined8 FUN_1458789ba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b9680c0;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_14060e596;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145878ab0 FUN_145878ab0 body=244 status=ok
// SIG undefined FUN_145878ab0(void)

undefined8 FUN_145878ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b405fd0;
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
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b968130;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_145ef252c;
  FUN_141286bf6(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145878bc2 FUN_145878bc2 body=87 status=ok
// SIG undefined FUN_145878bc2(void)

void FUN_145878bc2(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406d14fa();
  if (lVar1 != 0) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar1 = FUN_145878c1a(lVar1);
      if (lVar1 != 0) {
        FUN_145878cd0(lVar1 + 0x30);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145878c1a FUN_145878c1a body=105 status=ok
// SIG undefined FUN_145878c1a(void)

void FUN_145878c1a(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145ada494();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_145878c84(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145878c84 FUN_145878c84 body=76 status=ok
// SIG undefined FUN_145878c84(void)

void FUN_145878c84(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145ada494();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_145878cc1;
    }
  }
  lVar2 = 0;
LAB_145878cc1:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 145878cd0 FUN_145878cd0 body=173 status=ok
// SIG undefined FUN_145878cd0(void)

void FUN_145878cd0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  plVar1 = (longlong *)(param_1 + -0x30);
  lVar3 = FUN_1400d6ef8(plVar1);
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_1400d6e82(plVar1);
    lVar2 = *plVar4;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x88));
    *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + 1;
    uVar5 = FUN_1400d7050(param_1);
    FUN_145878d7e(lVar2,lVar3 + 0x88,uVar5);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x88));
    FUN_1412870b4(plVar1,lVar3 + 0x88);
  }
  lVar3 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    FUN_1400d6ce6();
    return;
  }
  return;
}



// FUNCTION 145878d7e FUN_145878d7e body=160 status=ok
// SIG undefined FUN_145878d7e(void)

void FUN_145878d7e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_138 [32];
  undefined1 local_118 [232];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_145878e20(param_1,(int)param_2[1]);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if ((longlong)(int)param_2[1] != 0) {
    lVar1 = *param_2;
    lVar2 = (longlong)(int)param_2[1] * 0x50;
    do {
      FUN_14147691e(local_118,lVar1,param_3);
      FUN_145a474bc(param_1,local_118);
      FUN_141286d76(local_118);
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145878e20 FUN_145878e20 body=61 status=ok
// SIG undefined FUN_145878e20(void)

void FUN_145878e20(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    FUN_145878e5e(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  FUN_145878e88(param_1);
  return;
}



// FUNCTION 145878e5e FUN_145878e5e body=41 status=ok
// SIG undefined FUN_145878e5e(void)

void FUN_145878e5e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_141286d76(param_1);
    param_1 = param_1 + 0xe8;
  }
  return;
}



// FUNCTION 145878e88 FUN_145878e88 body=58 status=ok
// SIG undefined FUN_145878e88(void)

void FUN_145878e88(undefined8 *param_1,int param_2)

{
  FUN_145878e5e(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_145878ec2(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145878ec2 FUN_145878ec2 body=111 status=ok
// SIG undefined FUN_145878ec2(void)

void FUN_145878ec2(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0xe8,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0xe8,8);
  }
  return;
}



// FUNCTION 145878f32 FUN_145878f32 body=111 status=ok
// SIG undefined FUN_145878f32(void)

undefined8 * FUN_145878f32(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a571b20;
  param_1[5] = &PTR_LAB_14a571f30;
  param_1[0x2d] = &PTR_LAB_14a571f70;
  param_1[0x2e] = &PTR_LAB_14a571f80;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_145878fa2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145878fa2 FUN_145878fa2 body=113 status=ok
// SIG undefined FUN_145878fa2(void)

void FUN_145878fa2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aaad120;
  param_1[5] = &PTR_FUN_14aaad530;
  param_1[0x2d] = &PTR_LAB_14aaad570;
  param_1[0x2e] = &PTR_FUN_14aaad580;
  FUN_1449db362(param_1 + 0x85);
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  FUN_145879014(param_1 + 0x7e);
  FUN_145879056(param_1);
  return;
}



// FUNCTION 145879014 FUN_145879014 body=65 status=ok
// SIG undefined FUN_145879014(void)

void FUN_145879014(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    if (puVar1[1] != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 145879056 FUN_145879056 body=380 status=ok
// SIG undefined FUN_145879056(void)

void FUN_145879056(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a7593c0;
  param_1[5] = &PTR_FUN_14a7597d0;
  param_1[0x2d] = &PTR_LAB_14a759810;
  param_1[0x2e] = &PTR_FUN_14a759820;
  plVar3 = (longlong *)param_1[0x7d];
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
  FUN_145879209(param_1[0x7a],*(undefined4 *)(param_1 + 0x7b));
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_1458791db(param_1[0x70],*(undefined4 *)(param_1 + 0x71));
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  FUN_145879236(param_1[0x62],*(undefined4 *)(param_1 + 99));
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_145821914(param_1 + 0x33);
  plVar3 = (longlong *)param_1[0x32];
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
  FUN_145879264(param_1);
  return;
}



// FUNCTION 1458791d2 FUN_1458791d2 body=9 status=ok
// SIG undefined FUN_1458791d2(void)

void FUN_1458791d2(longlong param_1)

{
  FUN_14587948a(param_1 + 0x10);
  return;
}



// FUNCTION 1458791db FUN_1458791db body=46 status=ok
// SIG undefined FUN_1458791db(void)

void FUN_1458791db(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145879209 FUN_145879209 body=45 status=ok
// SIG undefined FUN_145879209(void)

void FUN_145879209(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145879236 FUN_145879236 body=45 status=ok
// SIG undefined FUN_145879236(void)

void FUN_145879236(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145879264 FUN_145879264 body=277 status=ok
// SIG undefined FUN_145879264(void)

void FUN_145879264(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa9b340;
  param_1[5] = &PTR_FUN_14aa9b6e0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_1412895b6(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1412895b6(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1458793b1(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_14587937a(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1409da246(param_1 + 8);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14587937a FUN_14587937a body=55 status=ok
// SIG undefined FUN_14587937a(void)

void FUN_14587937a(longlong *param_1)

{
  FUN_14587940e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458793b1 FUN_1458793b1 body=92 status=ok
// SIG undefined FUN_1458793b1(void)

void FUN_1458793b1(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x98);
    do {
      plVar1[-0xe] = (longlong)&DAT_14a176f00;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1[-0xe] = (longlong)&PTR_FUN_14a177080;
      FUN_144a78a1a(plVar1 + -0xd);
      plVar1 = plVar1 + 0x17;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14587940e FUN_14587940e body=123 status=ok
// SIG undefined FUN_14587940e(void)

void FUN_14587940e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 14587948a FUN_14587948a body=240 status=ok
// SIG undefined FUN_14587948a(void)

void FUN_14587948a(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_145879583(param_1[0x16],(int)param_1[0x17]);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_145879583(param_1[0x14],(int)param_1[0x15]);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1400d7c38(param_1 + 10);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_141289612(param_1 + 5);
  FUN_14587957a(param_1 + 2);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14587957a FUN_14587957a body=9 status=ok
// SIG undefined FUN_14587957a(void)

void FUN_14587957a(longlong param_1)

{
  FUN_1458795b4(param_1 + 8);
  return;
}



// FUNCTION 145879583 FUN_145879583 body=49 status=ok
// SIG undefined FUN_145879583(void)

void FUN_145879583(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1458795b4 FUN_1458795b4 body=62 status=ok
// SIG undefined FUN_1458795b4(void)

void FUN_1458795b4(longlong *param_1)

{
  FUN_1458795f2();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1458795f2 FUN_1458795f2 body=74 status=ok
// SIG undefined FUN_1458795f2(void)

void FUN_1458795f2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_14102a02c(lVar2 + 0x10);
        thunk_FUN_1400020a8(lVar2,0x40);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 14587963c FUN_14587963c body=159 status=ok
// SIG undefined FUN_14587963c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14587963c(ushort param_1)

{
  undefined *puVar1;
  
  if ((DAT_14cb7f870 == 0) || (*(int *)(DAT_14cb7f870 + 0x398) <= (int)(uint)param_1)) {
    puVar1 = &DAT_14cb7f930;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb7f948) {
      FUN_144b3d300(&DAT_14cb7f948);
      if (DAT_14cb7f948 == -1) {
        _DAT_14cb7f930 = 0;
        DAT_14cb7f938 = 0;
        _DAT_14cb7f940 = 0;
        atexit(FUN_143d6a723);
        _Init_thread_footer(&DAT_14cb7f948);
      }
    }
  }
  else {
    puVar1 = (undefined *)((ulonglong)((uint)param_1 * 0x18) + *(longlong *)(DAT_14cb7f870 + 0x390))
    ;
  }
  return puVar1;
}



// FUNCTION 1458796dc FUN_1458796dc body=208 status=ok
// SIG undefined FUN_1458796dc(void)

void FUN_1458796dc(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x240) & 1) == 0) {
    FUN_141289672(&local_38);
    lVar3 = *(longlong *)(param_1 + 0x2f8);
    iVar2 = *(int *)(param_1 + 0x300);
    lVar4 = (longlong)iVar2;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(lVar3 + 8 + lVar5) == CONCAT44(uStack_2c,uStack_30)) goto LAB_145879769;
        lVar5 = lVar5 + 0x10;
      } while (lVar4 << 4 != lVar5);
    }
    *(uint *)(param_1 + 0x300) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x304) < iVar2 + 1U) {
      FUN_1458797ae((longlong *)(param_1 + 0x2f8),iVar2);
      lVar3 = *(longlong *)(param_1 + 0x2f8);
    }
    puVar1 = (undefined4 *)(lVar3 + lVar4 * 0x10);
    *puVar1 = local_38;
    puVar1[1] = uStack_34;
    puVar1[2] = uStack_30;
    puVar1[3] = uStack_2c;
    local_24 = *(undefined4 *)(param_1 + 0x300);
    FUN_1447cd2ec(param_1 + 0xe0);
  }
LAB_145879769:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458797ae FUN_1458797ae body=132 status=ok
// SIG undefined FUN_1458797ae(void)

void FUN_1458797ae(longlong param_1,int param_2)

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



// FUNCTION 145879832 FUN_145879832 body=62 status=ok
// SIG undefined FUN_145879832(void)

undefined1 FUN_145879832(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14587987e FUN_14587987e body=68 status=ok
// SIG undefined FUN_14587987e(void)

undefined8 * FUN_14587987e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2d2cc0;
  (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[*(byte *)(param_1 + 8)])(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1458798ca FUN_1458798ca body=156 status=ok
// SIG undefined FUN_1458798ca(void)

void FUN_1458798ca(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140485a1a(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140485a1a(param_1 + 5);
  *param_1 = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_140115c12(param_1 + 2,0);
  }
  param_1[1] = 0;
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145879966 FUN_145879966 body=48 status=ok
// SIG undefined FUN_145879966(void)

void FUN_145879966(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 145879996 FUN_145879996 body=87 status=ok
// SIG undefined FUN_145879996(void)

void FUN_145879996(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x2898) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x2898);
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      uVar3 = FUN_144a88394(lVar2);
      lVar2 = FUN_144a61814(uVar3,puVar1);
      if (lVar2 != 0) {
        FUN_1405a424c(uVar3,*puVar1);
      }
    }
    *puVar1 = 0;
  }
  return;
}



// FUNCTION 1458799ee FUN_1458799ee body=63 status=ok
// SIG undefined FUN_1458799ee(void)

void FUN_1458799ee(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145879a2e(param_1);
    FUN_14128a8bc(param_1);
    return;
  }
  FUN_14128a8bc(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14701b2f4(param_1);
  return;
}



// FUNCTION 145879a2e FUN_145879a2e body=339 status=ok
// SIG undefined FUN_145879a2e(void)

void FUN_145879a2e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145879b88 FUN_145879b88 body=175 status=ok
// SIG undefined FUN_145879b88(void)

void FUN_145879b88(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  short local_24 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_145879c38();
  if (lVar1 != 0) {
    lVar1 = FUN_1400f6f32(lVar1);
    if (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x68);
      goto LAB_145879bc0;
    }
  }
  lVar1 = 0;
LAB_145879bc0:
  uVar2 = FUN_145879c38(param_1);
  lVar3 = FUN_14128aaf8(uVar2);
  if ((lVar1 != 0) && (lVar3 != 0)) {
    FUN_140ceec26(lVar1,local_24,*(undefined4 *)(param_1 + 0x58));
    if (-1 < local_24[0]) {
      local_38 = 0;
      uStack_30 = 0;
      FUN_140ceec8e(lVar3,local_40,local_24);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145879c38 FUN_145879c38 body=58 status=ok
// SIG undefined FUN_145879c38(void)

undefined8 FUN_145879c38(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x50);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x50);
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      return *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
    }
  }
  return 0;
}



// FUNCTION 145879c72 FUN_145879c72 body=179 status=ok
// SIG undefined FUN_145879c72(void)

bool FUN_145879c72(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145879d26 FUN_145879d26 body=685 status=ok
// SIG undefined FUN_145879d26(void)

void FUN_145879d26(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  PSRWLOCK SRWLock;
  int *piVar2;
  PSRWLOCK SRWLock_00;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = FUN_1405d1fee(param_1 + 0x30);
  if (lVar5 == 0) goto LAB_145879f47;
  lVar6 = FUN_144a2f878();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) goto LAB_145879f47;
  FUN_140d128b6(param_1,&local_58);
  lVar6 = local_58;
  SRWLock = (PSRWLOCK)(local_58 + 0x638);
  AcquireSRWLockExclusive(SRWLock);
  local_80 = lVar6;
  piVar2 = (int *)(lVar6 + 0x630);
  *piVar2 = *piVar2 + 1;
  plVar4 = (longlong *)CONCAT44(uStack_4c,local_50);
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
  FUN_140bb46a8(param_1,&local_58);
  lVar6 = local_58;
  SRWLock_00 = (PSRWLOCK)(local_58 + 0x638);
  AcquireSRWLockExclusive(SRWLock_00);
  *(int *)(local_58 + 0x630) = *(int *)(local_58 + 0x630) + 1;
  plVar4 = (longlong *)CONCAT44(uStack_4c,local_50);
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
  if (((int)param_3 < 0) || (*(int *)(lVar5 + 0x78f0) <= (int)param_3)) {
    lVar5 = 0;
  }
  else {
    lVar5 = (ulonglong)param_3 * 0x48 + *(longlong *)(lVar5 + 0x78e8);
  }
  if ((param_2 == (longlong *)0x0) || (lVar7 = (**(code **)(*param_2 + 8))(param_2), lVar7 == 0)) {
    FUN_14128ad8c(&local_60,lVar5);
LAB_145879f83:
    local_78 = 0;
  }
  else {
    lVar7 = (**(code **)(*param_2 + 8))(param_2);
    lVar7 = *(longlong *)(lVar7 + 0x3f0);
    FUN_14128ad8c(&local_60,lVar5);
    if (lVar7 == 0) goto LAB_145879f83;
    local_78 = *(longlong *)(lVar7 + 0xa0);
    if ((local_78 == 0) && (local_78 = *(longlong *)(lVar7 + 0x98), local_78 == 0)) {
      local_78 = *(longlong *)(lVar7 + 0x3c);
    }
  }
  FUN_1400021e4(&local_78,&local_70);
  uVar8 = local_68 - 1;
  if (local_68 == 0) {
    uVar8 = 0;
  }
  if (0 < (int)uVar8) {
    uVar9 = 0;
    do {
      uVar3 = *(ushort *)(local_70 + uVar9 * 2);
      *(ushort *)(local_70 + uVar9 * 2) = (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
      uVar9 = uVar9 + 1;
    } while (uVar8 != uVar9);
  }
  local_58 = local_70;
  local_50 = local_68;
  uStack_4c = local_64;
  FUN_14128ab18(local_80,&local_58,local_60);
  FUN_14128ab18(lVar6,&local_58,local_60);
  *(undefined1 *)(param_1 + 0x220) = 1;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive(SRWLock_00);
  ReleaseSRWLockExclusive(SRWLock);
LAB_145879f47:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145879fd4 FUN_145879fd4 body=322 status=ok
// SIG undefined FUN_145879fd4(void)

undefined4 * FUN_145879fd4(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14587a20a(param_1,local_48);
  FUN_14587a118(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_58 = 0;
  cVar2 = FUN_14587a17c(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x1c) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14128aedc(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587a118 FUN_14587a118 body=100 status=ok
// SIG undefined FUN_14587a118(void)

undefined8 * FUN_14587a118(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 14587a17c FUN_14587a17c body=142 status=ok
// SIG undefined FUN_14587a17c(void)

void FUN_14587a17c(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar7 = FUN_14128acc0();
    if (iVar7 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
      if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_1489bdbfc(param_1,*param_4,1);
      *param_4 = iVar7;
      uVar6 = 1;
      goto LAB_14587a1b0;
    }
  }
  uVar6 = 0;
LAB_14587a1b0:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 14587a20a FUN_14587a20a body=230 status=ok
// SIG undefined FUN_14587a20a(void)

int * FUN_14587a20a(longlong *param_1,int *param_2)

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



// FUNCTION 14587a2f0 FUN_14587a2f0 body=254 status=ok
// SIG undefined FUN_14587a2f0(void)

ulonglong FUN_14587a2f0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  longlong local_60 [2];
  longlong local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_145d0c2fa();
    FUN_14475cc44(param_2,&local_40);
    (**(code **)(*param_1 + 0x458))(param_1,local_60,param_2);
    if (local_60[0] != 0) {
      FUN_14475cc44(local_60,&local_70);
      if (CONCAT44(uStack_3c,local_40) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_70;
      uStack_3c = uStack_6c;
    }
    (**(code **)(*param_1 + 0x4e8))(param_1,uVar3,&local_40,param_3);
    lVar1 = *param_3;
    lVar2 = param_3[2];
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_3c,local_40) != 0) {
      FUN_1400020a8();
    }
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),lVar1 != 0 && lVar2 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587a3f0 FUN_14587a3f0 body=500 status=ok
// SIG undefined FUN_14587a3f0(void)

undefined8 * FUN_14587a3f0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  void *_Src;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined1 local_88 [16];
  undefined2 *local_78;
  int local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_14587a656(local_88);
  uVar8 = (uint)local_88._8_8_ & 0xffff;
  uVar7 = (uint)local_88._0_8_ & 0xffff;
  uVar7 = ((uint)local_88._0_8_ << 0x10 | uVar7) + SUB84(local_88._0_8_,4) +
          (SUB84(local_88._0_8_,2) << 0x13 | SUB84(local_88._0_8_,2) & 0xffff) + (uVar7 >> 4);
  uVar10 = 0;
  uVar1 = FUN_144a78877(0,(uVar7 >> 2) +
                          ((uint)local_88._8_8_ << 0x10 | uVar8) + SUB84(local_88._8_8_,4) +
                          (SUB84(local_88._8_8_,2) << 0x13 | SUB84(local_88._8_8_,2) & 0xffff) +
                          (uVar8 >> 4) + uVar7 * 0x40 + 0x9e3779b9 ^ uVar7);
  puVar5 = local_78;
  if (local_70 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  uVar4 = (ulonglong)(local_70 - 1);
  if (local_70 == 0) {
    uVar4 = uVar10;
  }
  uVar2 = FUN_144a49b4a(uVar4,puVar5);
  uVar1 = FUN_144a78877(uVar1,uVar2);
  iVar3 = FUN_14587a5e6((longlong *)(param_1 + 0x408),uVar1,local_88);
  if (iVar3 != -1) {
    uVar10 = (longlong)iVar3 * 0x48 + *(longlong *)(param_1 + 0x408);
  }
  puVar9 = (undefined4 *)(uVar10 + 0x20);
  if (uVar10 == 0) {
    puVar9 = (undefined4 *)0x0;
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (puVar9 == (undefined4 *)0x0) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_98 = (void *)0x0;
    local_90 = param_3[6];
    lVar6 = (longlong)local_90;
    _Src = *(void **)(param_3 + 4);
    if (lVar6 == 0) {
      local_8c = 0;
    }
    else {
      FUN_1446dd670(&local_98,local_90,0);
      memcpy(local_98,_Src,lVar6 * 2);
    }
    local_a8 = *puVar9;
    uStack_a4 = puVar9[1];
    uStack_a0 = puVar9[2];
    uStack_9c = puVar9[3];
    FUN_14587a656(param_2,&local_a8,&local_98);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14587a5e6 FUN_14587a5e6 body=111 status=ok
// SIG undefined FUN_14587a5e6(void)

int FUN_14587a5e6(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_144a7afa6(lVar4 + (longlong)iVar1 * 0x48,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x40 + (longlong)iVar1 * 0x48);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14587a656 FUN_14587a656 body=126 status=ok
// SIG undefined FUN_14587a656(void)

undefined8 * FUN_14587a656(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = *param_3;
  *param_3 = 0;
  local_20 = (undefined4)param_3[1];
  local_1c = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  FUN_1400b3bc2(param_1);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587a6d6 FUN_14587a6d6 body=526 status=ok
// SIG undefined FUN_14587a6d6(void)

void FUN_14587a6d6(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined8 unaff_RBP;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined1 local_e9;
  longlong local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  int local_b0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar2 = FUN_144a38768(param_3,&DAT_14a18491c,2,0);
  if (cVar2 != '\0') {
    local_100 = 0xffffffff;
    local_108 = 0;
    iVar3 = FUN_1447ee042(param_3,&DAT_14a7e1ad6,3,0);
    if (iVar3 == -1) {
      local_e9 = *(undefined1 *)(param_1 + 0x35f);
      iVar3 = (int)param_3[1];
      if (iVar3 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = (undefined2 *)*param_3;
      }
      unaff_RBP = 0;
      iVar4 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      iVar3 = 2;
      if (2 < iVar4) {
        iVar3 = iVar4;
      }
      FUN_14006620a(&local_e8,puVar5,iVar3 + -2);
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = local_e8;
      local_b0 = local_e0 + -1;
      if (local_e0 == 0) {
        local_b0 = 0;
      }
      FUN_14475bf92(&local_d8);
      local_108 = CONCAT31(local_108._1_3_,1);
      (**(code **)(*param_2 + 0x98))(param_2,&local_b8,&local_d8,local_e9);
      FUN_14128b194(param_4,&local_b8);
      FUN_14128b0c2(&local_b8);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
      if ((*param_4 != 0) && (param_4[2] != 0)) goto LAB_14587a79d;
    }
  }
  uVar1 = *(undefined1 *)(param_1 + 0x35f);
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = *param_3;
  local_b0 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    local_b0 = 0;
  }
  FUN_14475bf92(&local_d8);
  local_108 = CONCAT31(local_108._1_3_,1);
  (**(code **)(*param_2 + 0x98))
            (param_2,&local_b8,&local_d8,
             CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
  FUN_14128b194(param_4,&local_b8);
  FUN_14128b0c2(&local_b8);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
LAB_14587a79d:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14587a8e6 FUN_14587a8e6 body=145 status=ok
// SIG undefined FUN_14587a8e6(void)

void FUN_14587a8e6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c927ac0);
  *(undefined8 *)(&DAT_14c927ae8 + (ulonglong)*(uint *)(param_1 + 0xb0) * 8) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c927ac0);
  lVar2 = *(longlong *)(param_1 + 0xb8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0xa8);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0xa0);
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar3) != 0) {
          FUN_1400020a8();
        }
        lVar3 = lVar3 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar3);
      lVar2 = *(longlong *)(param_1 + 0xb8);
    }
    FUN_1400020a8(lVar2);
    return;
  }
  return;
}



// FUNCTION 14587a978 FUN_14587a978 body=85 status=ok
// SIG undefined FUN_14587a978(void)

void FUN_14587a978(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x14;
  lVar5 = (longlong)*(int *)(lVar1 + 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0xc);
  FUN_14587a9ce();
  return;
}



// FUNCTION 14587a9ce FUN_14587a9ce body=114 status=ok
// SIG undefined FUN_14587a9ce(void)

void FUN_14587a9ce(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14587aa4e FUN_14587aa4e body=45 status=ok
// SIG undefined FUN_14587aa4e(void)

undefined8 FUN_14587aa4e(undefined8 param_1,int param_2)

{
  FUN_14587aa7c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x4e8);
  }
  return param_1;
}



// FUNCTION 14587aa7c FUN_14587aa7c body=496 status=ok
// SIG undefined FUN_14587aa7c(void)

void FUN_14587aa7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0f74d0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if (param_1[0x9b] != 0) {
    FUN_1400020a8();
  }
  FUN_14587ac6c(param_1 + 0x93);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  FUN_14587aca4(param_1 + 0x73);
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14587ac6c FUN_14587ac6c body=55 status=ok
// SIG undefined FUN_14587ac6c(void)

void FUN_14587ac6c(longlong *param_1)

{
  FUN_14587ae5e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14587aca4 FUN_14587aca4 body=55 status=ok
// SIG undefined FUN_14587aca4(void)

void FUN_14587aca4(longlong *param_1)

{
  FUN_14587acdc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14587acdc FUN_14587acdc body=384 status=ok
// SIG undefined FUN_14587acdc(void)

void FUN_14587acdc(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x20 + (longlong)iStack_54 * 0x38) != 0) {
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
    FUN_144748838(param_1,param_2);
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



// FUNCTION 14587ae5e FUN_14587ae5e body=397 status=ok
// SIG undefined FUN_14587ae5e(void)

void FUN_14587ae5e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
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
      lVar2 = *(longlong *)(*local_70 + 0x30 + (longlong)iStack_54 * 0x40);
      if ((lVar2 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(lVar2 + 0x50));
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
    FUN_140b7ce44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14587afec FUN_14587afec body=53 status=ok
// SIG undefined FUN_14587afec(void)

void FUN_14587afec(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x310) == '\x01') {
    FUN_140457ffc(&DAT_14c8672b0,param_1);
  }
  FUN_14128b468(param_1,param_2);
  return;
}



// FUNCTION 14587b022 FUN_14587b022 body=430 status=ok
// SIG undefined FUN_14587b022(void)

undefined8 * FUN_14587b022(undefined8 *param_1)

{
  undefined1 auStack_b8 [32];
  longlong local_98;
  int local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  int local_70;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14128c032();
  *param_1 = &PTR_FUN_14b712950;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  FUN_144a5dc74(param_1 + 0x23);
  *(undefined2 *)(param_1 + 0x25) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x12a) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  FUN_144a5dc74(param_1 + 0x27);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  FUN_14128c002(param_1 + 6,local_78);
  if (local_70 == 0) {
    FUN_1447a97f4(local_68,&DAT_14c9485f0);
  }
  else {
    FUN_14128c002(param_1 + 6,&local_98);
    local_88 = *(undefined8 *)(local_98 + (longlong)(local_90 + -1) * 0xc);
    local_80 = *(undefined4 *)(local_98 + 8 + (longlong)(local_90 + -1) * 0xc);
    FUN_1448075d0(local_68);
  }
  FUN_1404e49fa(param_1 + 0x11,local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587b224 FUN_14587b224 body=40 status=ok
// SIG undefined FUN_14587b224(void)

undefined8 FUN_14587b224(undefined8 param_1,int param_2)

{
  FUN_14587b24c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14587b24c FUN_14587b24c body=71 status=ok
// SIG undefined FUN_14587b24c(void)

void FUN_14587b24c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b18d660;
  FUN_14587b293(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14587b293 FUN_14587b293 body=73 status=ok
// SIG undefined FUN_14587b293(void)

void FUN_14587b293(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14587b2dc FUN_14587b2dc body=130 status=ok
// SIG undefined FUN_14587b2dc(void)

undefined8 FUN_14587b2dc(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auStack_58 [32];
  undefined2 local_38 [4];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x18);
  pcVar3 = *(code **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  local_38[0] = *param_3;
  local_30 = *(longlong *)(param_3 + 4);
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  (*pcVar3)(lVar2 + iVar1,param_2,local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587b368 FUN_14587b368 body=120 status=ok
// SIG undefined FUN_14587b368(void)

void FUN_14587b368(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar1 = FUN_140059518(param_1 + 0x44);
    if (lVar1 != 0) {
      lVar2 = FUN_1408bb964(param_1 + 0x44);
      if (lVar2 != 0) {
        lVar3 = FUN_1403ca142();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          FUN_14587b3e0(lVar2,*(undefined4 *)(lVar1 + 0xe0),*(undefined1 *)(param_2 + 8));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14587b3e0 FUN_14587b3e0 body=100 status=ok
// SIG undefined FUN_14587b3e0(void)

void FUN_14587b3e0(longlong param_1,undefined4 param_2,char param_3)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  if (param_3 != '\0') {
    FUN_1447cbafe(param_1 + 0x570,local_10,&local_c,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_144a7cc9e();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 14587b44c FUN_14587b44c body=2756 status=ok
// SIG undefined FUN_14587b44c(void)

void FUN_14587b44c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ushort uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong local_150;
  longlong **local_148;
  undefined8 uStack_140;
  longlong ***local_138;
  undefined8 uStack_130;
  longlong **local_120;
  longlong ****local_118;
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  longlong *local_a8;
  undefined8 uStack_a0;
  longlong ***local_88;
  longlong ***local_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_14587d038();
  if (*(longlong *)(param_1 + 0x160) == 0) {
    puVar6 = &DAT_14c9a1308;
  }
  else {
    puVar6 = (undefined8 *)FUN_1446e60f4(*(longlong *)(param_1 + 0x160),&DAT_14cbdec98);
  }
  uVar7 = FUN_140625082(puVar6,&DAT_14c9a12e0);
  FUN_1447325ac(uVar7,&local_120,1);
  *(longlong ***)(param_1 + 0x530) = local_120;
  local_150 = param_1 + 0x398;
  FUN_14587c7be();
  plVar1 = (longlong *)(param_1 + 1000);
  FUN_14587c7fe(plVar1);
  local_a8._0_1_ = 2;
  local_118 = (longlong ****)&DAT_14cbded38;
  local_120 = &local_a8;
  FUN_14587c078(plVar1,&local_88,&local_120);
  local_a8._0_1_ = 1;
  local_118 = (longlong ****)&DAT_14cbded48;
  local_120 = &local_a8;
  FUN_14587c078(plVar1,&local_88,&local_120);
  local_a8._0_1_ = 0;
  local_118 = (longlong ****)&DAT_14cbded58;
  local_120 = &local_a8;
  FUN_14587c078(plVar1,&local_88,&local_120);
  local_a8._0_1_ = 3;
  local_118 = (longlong ****)&DAT_14cbded68;
  local_120 = &local_a8;
  FUN_14587c078(plVar1,&local_88,&local_120);
  local_a8 = (longlong *)CONCAT71(local_a8._1_7_,4);
  local_118 = (longlong ****)&DAT_14cbded78;
  local_120 = &local_a8;
  FUN_14587c078(plVar1,&local_88,&local_120);
  if (DAT_14cbe4f78 != 0) {
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    FUN_14587c9f0(DAT_14cbe4f78,&local_a8);
    if ((longlong)(int)uStack_a0 != 0) {
      local_158 = local_a8 + (int)uStack_a0;
      lVar2 = param_1 + 0x420;
      plVar12 = local_a8;
      do {
        lVar4 = *plVar12;
        FUN_14587bf6c(&local_120);
        if (*(int *)(param_1 + 0x3f0) == *(int *)(param_1 + 0x41c)) {
LAB_14587bdb9:
          lVar8 = 0;
        }
        else {
          lVar8 = *(longlong *)(param_1 + 0x428);
          if (*(longlong *)(param_1 + 0x428) == 0) {
            lVar8 = lVar2;
          }
          iVar11 = *(int *)(lVar8 + (ulonglong)
                                    (*(int *)(param_1 + 0x430) - 1U & (uint)*(byte *)(lVar4 + 0x38))
                                    * 4);
          if (iVar11 == -1) goto LAB_14587bdb9;
          do {
            lVar8 = *plVar1 + (longlong)iVar11 * 0x20;
            if (*(byte *)(*plVar1 + (longlong)iVar11 * 0x20) == *(byte *)(lVar4 + 0x38)) break;
            iVar11 = *(int *)(lVar8 + 0x18);
            lVar8 = 0;
          } while (iVar11 != -1);
        }
        FUN_140775496(local_f0,lVar8 + 8);
        if (*(int *)(param_1 + 0x3f0) == *(int *)(param_1 + 0x41c)) {
LAB_14587bdc0:
          lVar8 = 0;
        }
        else {
          lVar8 = *(longlong *)(param_1 + 0x428);
          if (*(longlong *)(param_1 + 0x428) == 0) {
            lVar8 = lVar2;
          }
          iVar11 = *(int *)(lVar8 + (ulonglong)
                                    (*(int *)(param_1 + 0x430) - 1U & (uint)*(byte *)(lVar4 + 0x39))
                                    * 4);
          if (iVar11 == -1) goto LAB_14587bdc0;
          do {
            lVar8 = *plVar1 + (longlong)iVar11 * 0x20;
            if (*(byte *)(*plVar1 + (longlong)iVar11 * 0x20) == *(byte *)(lVar4 + 0x39)) break;
            iVar11 = *(int *)(lVar8 + 0x18);
            lVar8 = 0;
          } while (iVar11 != -1);
        }
        FUN_140775496(local_d8,lVar8 + 8);
        if (*(int *)(param_1 + 0x3f0) == *(int *)(param_1 + 0x41c)) {
LAB_14587bdc7:
          lVar8 = 0;
        }
        else {
          lVar8 = *(longlong *)(param_1 + 0x428);
          if (*(longlong *)(param_1 + 0x428) == 0) {
            lVar8 = lVar2;
          }
          iVar11 = *(int *)(lVar8 + (ulonglong)
                                    (*(int *)(param_1 + 0x430) - 1U & (uint)*(byte *)(lVar4 + 0x3a))
                                    * 4);
          if (iVar11 == -1) goto LAB_14587bdc7;
          do {
            lVar8 = *plVar1 + (longlong)iVar11 * 0x20;
            if (*(byte *)(*plVar1 + (longlong)iVar11 * 0x20) == *(byte *)(lVar4 + 0x3a)) break;
            iVar11 = *(int *)(lVar8 + 0x18);
            lVar8 = 0;
          } while (iVar11 != -1);
        }
        FUN_140775496(local_c0,lVar8 + 8);
        FUN_14000bbd8(&local_88,lVar4 + 0x18,0);
        FUN_1410d1eba(&local_138,&local_88);
        uVar7 = FUN_1447a1f4a(&local_138);
        FUN_1449a0272(&local_120,uVar7);
        if (local_138 != (longlong ***)0x0) {
          (*(code *)(*local_138)[2])();
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        puVar9 = *(undefined4 **)(lVar4 + 8);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = &DAT_14c9485f0;
        }
        local_138 = (longlong ***)0x0;
        uStack_130 = 0;
        FUN_1400b2348(puVar9,&local_138,1);
        local_80 = (longlong ***)uStack_130;
        uVar5 = (int)uStack_130 - 1;
        if ((int)uStack_130 == 0) {
          uVar5 = 0;
        }
        if (0 < (int)uVar5) {
          uVar10 = 0;
          do {
            uVar3 = *(ushort *)((longlong)local_138 + uVar10 * 2);
            *(ushort *)((longlong)local_138 + uVar10 * 2) =
                 (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
            uVar10 = uVar10 + 1;
          } while (uVar5 != uVar10);
        }
        local_88 = local_138;
        local_138 = (longlong ***)0x0;
        uStack_130 = 0;
        FUN_140775538(local_108,&local_88);
        if (local_88 != (longlong ***)0x0) {
          FUN_1400020a8();
        }
        if (local_138 != (longlong ***)0x0) {
          FUN_1400020a8();
        }
        puVar9 = *(undefined4 **)(lVar4 + 8);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = &DAT_14c9485f0;
        }
        local_148 = (longlong **)0x0;
        uStack_140 = 0;
        FUN_1400b2348(puVar9,&local_148,1);
        uStack_130 = uStack_140;
        uVar5 = (int)uStack_140 - 1;
        if ((int)uStack_140 == 0) {
          uVar5 = 0;
        }
        if (0 < (int)uVar5) {
          uVar10 = 0;
          do {
            uVar3 = *(ushort *)((longlong)local_148 + uVar10 * 2);
            *(ushort *)((longlong)local_148 + uVar10 * 2) =
                 (ushort)(uVar3 - 0x41 < 0x1a) * 0x20 + uVar3;
            uVar10 = uVar10 + 1;
          } while (uVar5 != uVar10);
        }
        local_138 = (longlong ***)local_148;
        local_148 = (longlong **)0x0;
        uStack_140 = 0;
        local_88 = (longlong ***)&local_138;
        local_80 = &local_120;
        FUN_14587c376(local_150);
        if (local_138 != (longlong ***)0x0) {
          FUN_1400020a8();
        }
        if (local_148 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        FUN_14587bf12(&local_120);
        plVar12 = plVar12 + 1;
      } while (plVar12 != local_158);
    }
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8(local_a8);
    }
  }
  param_1 = param_1 + 0x588;
  FUN_14587c83e(param_1,0);
  FUN_1400b22c2(&local_88,"Tediore");
  FUN_1400b22c2(&local_a8,"[tediore_icon]");
  local_120 = &local_a8;
  local_118 = &local_88;
  FUN_1411f1c38(param_1,&local_138,&local_120,0);
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong ****)local_88 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_88,"Daedalus");
  FUN_1400b22c2(&local_a8,"[daedalus_icon]");
  local_120 = &local_a8;
  local_118 = &local_88;
  FUN_1411f1c38(param_1,&local_138,&local_120,0);
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong ****)local_88 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_88,"Jakobs");
  FUN_1400b22c2(&local_a8,"[jakobs_icon]");
  local_120 = &local_a8;
  local_118 = &local_88;
  FUN_1411f1c38(param_1,&local_138,&local_120,0);
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong ****)local_88 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_88,"Maliwan");
  FUN_1400b22c2(&local_a8,"[maliwan_icon]");
  local_120 = &local_a8;
  local_118 = &local_88;
  FUN_1411f1c38(param_1,&local_138,&local_120,0);
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong ****)local_88 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_88,"Order");
  FUN_1400b22c2(&local_a8,"[order_icon]");
  local_120 = &local_a8;
  local_118 = &local_88;
  FUN_1411f1c38(param_1,&local_138,&local_120,0);
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong ****)local_88 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_88,&DAT_14b9c7dda);
  FUN_1400b22c2(&local_a8,"[borg_icon]");
  local_120 = &local_a8;
  local_118 = &local_88;
  FUN_1411f1c38(param_1,&local_138,&local_120,0);
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong ****)local_88 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_88,"Torgue");
  FUN_1400b22c2(&local_a8,"[torgue_icon]");
  local_120 = &local_a8;
  local_118 = &local_88;
  FUN_1411f1c38(param_1,&local_138,&local_120,0);
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong ****)local_88 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_88,"Vladof");
  FUN_1400b22c2(&local_a8,"[vladof_icon]");
  local_120 = &local_a8;
  local_118 = &local_88;
  FUN_1411f1c38(param_1,&local_138,&local_120,0);
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong ****)local_88 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_88,&DAT_14b9c7e15);
  FUN_1400b22c2(&local_a8,"[cov_icon]");
  local_120 = &local_a8;
  local_118 = &local_88;
  FUN_1411f1c38(param_1,&local_138,&local_120,0);
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong ****)local_88 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_88,"Atlas");
  FUN_1400b22c2(&local_a8,"[atlas_icon]");
  local_120 = &local_a8;
  local_118 = &local_88;
  FUN_1411f1c38(param_1,&local_138,&local_120,0);
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong ****)local_88 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_88,"Hyperion");
  FUN_1400b22c2(&local_a8,"[hyperion_icon]");
  local_120 = &local_a8;
  local_118 = &local_88;
  FUN_1411f1c38(param_1,&local_138,&local_120,0);
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong ****)local_88 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14587bf12 FUN_14587bf12 body=89 status=ok
// SIG undefined FUN_14587bf12(void)

void FUN_14587bf12(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14587bf6c FUN_14587bf6c body=266 status=ok
// SIG undefined FUN_14587bf6c(void)

undefined8 * FUN_14587bf6c(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(&local_38,L"KINETIC ELEMENT");
  *param_1 = local_38;
  *(undefined4 *)(param_1 + 1) = local_30;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_140056680(&local_38,L"impact");
  param_1[3] = local_38;
  *(undefined4 *)(param_1 + 4) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x24) = local_2c;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_140056680(&local_38,L"normal");
  param_1[6] = local_38;
  *(undefined4 *)(param_1 + 7) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x3c) = local_2c;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_140056680(&local_38,L"normal");
  param_1[9] = local_38;
  *(undefined4 *)(param_1 + 10) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x54) = local_2c;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_140056680(&local_38,L"normal");
  param_1[0xc] = local_38;
  *(undefined4 *)(param_1 + 0xd) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x6c) = local_2c;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587c078 FUN_14587c078 body=269 status=ok
// SIG undefined FUN_14587c078(void)

undefined4 * FUN_14587c078(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14587c290(param_1,local_48);
  FUN_14587c186(param_3,local_40);
  local_40[0x18] = 0xff;
  local_40[0x19] = 0xff;
  local_40[0x1a] = 0xff;
  local_40[0x1b] = 0xff;
  local_4c = local_48[0];
  bVar1 = *local_40;
  cVar3 = FUN_14587c1f0(param_1,bVar1,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_40 + 0x1c) = uVar5;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x18) =
           *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar5) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14128d6fe(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587c186 FUN_14587c186 body=105 status=ok
// SIG undefined FUN_14587c186(void)

undefined1 * FUN_14587c186(undefined8 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined1 *)*param_1;
  *(undefined8 *)(param_2 + 8) = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 8,iVar1,0);
    memcpy(*(void **)(param_2 + 8),_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 14587c1f0 FUN_14587c1f0 body=159 status=ok
// SIG undefined FUN_14587c1f0(void)

undefined8 FUN_14587c1f0(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(char *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_148eb4cd2(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14587c290 FUN_14587c290 body=230 status=ok
// SIG undefined FUN_14587c290(void)

int * FUN_14587c290(longlong *param_1,int *param_2)

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



// FUNCTION 14587c376 FUN_14587c376 body=348 status=ok
// SIG undefined FUN_14587c376(void)

undefined4 * FUN_14587c376(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14587c600(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  uVar2 = param_3[1];
  *local_40 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  FUN_14587c560(local_40 + 2,uVar2);
  *(undefined4 *)(local_40 + 0x11) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*local_40;
    iVar8 = *(int *)(local_40 + 1) + -1;
  }
  uVar5 = FUN_144a49b4a(iVar8,puVar9);
  cVar4 = FUN_14587c4d4(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x8c) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x11) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14128d8a6(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14587c4d4 FUN_14587c4d4 body=140 status=ok
// SIG undefined FUN_14587c4d4(void)

undefined8 FUN_14587c4d4(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_14587c6f0(), iVar3 != -1)) {
    lVar2 = *param_1;
    plVar1 = (longlong *)(lVar2 + (longlong)iVar3 * 0x90);
    FUN_14587bf12(plVar1 + 2);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    memmove((void *)(lVar2 + (longlong)iVar3 * 0x90),param_3,0x88);
    FUN_148eb4d44(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 14587c560 FUN_14587c560 body=160 status=ok
// SIG undefined FUN_14587c560(void)

undefined8 * FUN_14587c560(undefined8 *param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144a787a6();
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_144a787a6(param_1 + 3,param_2 + 0x18);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_144a787a6(param_1 + 6,param_2 + 0x30);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_144a787a6(param_1 + 9,param_2 + 0x48);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_144a787a6(param_1 + 0xc,param_2 + 0x60);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  return param_1;
}



// FUNCTION 14587c600 FUN_14587c600 body=239 status=ok
// SIG undefined FUN_14587c600(void)

int * FUN_14587c600(longlong *param_1,int *param_2)

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
      FUN_140f20a84(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x90);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x90) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x90 + *param_1;
  return param_2;
}



// FUNCTION 14587c6f0 FUN_14587c6f0 body=206 status=ok
// SIG undefined FUN_14587c6f0(void)

int FUN_14587c6f0(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_14587c736:
      lVar10 = (longlong)iVar1 * 0x90;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14587c7aa;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14587c7aa;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14587c754;
    }
  }
  return -1;
LAB_14587c7aa:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14587c754:
  iVar1 = *(int *)(lVar4 + 0x88 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14587c736;
}



// FUNCTION 14587c7be FUN_14587c7be body=63 status=ok
// SIG undefined FUN_14587c7be(void)

void FUN_14587c7be(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14587cbce(param_1);
    FUN_145cdca00(param_1);
    return;
  }
  FUN_145cdca00(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14128d8a6(param_1);
  return;
}



// FUNCTION 14587c7fe FUN_14587c7fe body=63 status=ok
// SIG undefined FUN_14587c7fe(void)

void FUN_14587c7fe(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14587ca7e(param_1);
    FUN_145cb8718(param_1);
    return;
  }
  FUN_145cb8718(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14128d6fe(param_1);
  return;
}



// FUNCTION 14587c83e FUN_14587c83e body=107 status=ok
// SIG undefined FUN_14587c83e(void)

void FUN_14587c83e(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_14587c88d:
      FUN_1407a3aa0(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140b7fdd8(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_14587c88d;
  FUN_14587c8aa(param_1);
  FUN_1407a3aa0(param_1,param_2);
  return;
}



// FUNCTION 14587c8aa FUN_14587c8aa body=325 status=ok
// SIG undefined FUN_14587c8aa(void)

void FUN_14587c8aa(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14587c9f0 FUN_14587c9f0 body=141 status=ok
// SIG undefined FUN_14587c9f0(void)

void FUN_14587c9f0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_148eef708(param_2);
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = FUN_144328802;
  local_20 = &local_30;
  local_28 = FUN_14587cff4;
  local_48 = param_2;
  FUN_14587cd26(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587ca7e FUN_14587ca7e body=335 status=ok
// SIG undefined FUN_14587ca7e(void)

void FUN_14587ca7e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14587cbce FUN_14587cbce body=342 status=ok
// SIG undefined FUN_14587cbce(void)

void FUN_14587cbce(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x8c + (longlong)iVar4 * 0x90) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14587cd26 FUN_14587cd26 body=658 status=ok
// SIG undefined FUN_14587cd26(void)

void FUN_14587cd26(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar4 = (**(code **)(*param_1 + 0x300))();
  if (cVar4 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar2 = param_1 + 0x51;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = plVar2;
    if ((int)param_1[0x54] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[0x54];
    }
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70 = local_50;
    iStack_6c = iStack_4c;
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_88 = plVar1;
    if ((iStack_4c != iVar7) || (uStack_58 != plVar2)) {
      do {
        lVar5 = *(longlong *)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
        if ((lVar5 != 0) &&
           (((*(byte **)(lVar5 + 0x48) != (byte *)0x0 && ((**(byte **)(lVar5 + 0x48) & 0x6b) == 3))
            && (plVar3 = *(longlong **)(lVar5 + 0x30), plVar3 != (longlong *)0x0)))) {
          lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar6 = FUN_14587cfba();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            (*(code *)*param_2)(param_2[1],plVar3);
          }
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (local_88 != plVar1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar2 || iStack_6c != iVar7));
    }
  }
  else {
    plVar1 = param_1 + 0x39;
    plVar2 = param_1 + 0x3b;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = plVar2;
    if ((int)param_1[0x3e] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[0x3e];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    iStack_6c = iStack_4c;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_88 = plVar1;
    if ((iStack_4c != iVar7) || (uStack_58 != plVar2)) {
      do {
        plVar3 = *(longlong **)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
        if (plVar3 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar6 = FUN_14587cfba();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            (*(code *)*param_2)(param_2[1],plVar3);
          }
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (local_88 != plVar1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar2 || iStack_6c != iVar7));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14587cfba FUN_14587cfba body=57 status=ok
// SIG undefined FUN_14587cfba(void)

void FUN_14587cfba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3a28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3a28 = FUN_140002ddd(FUN_1465f938a,uVar1,L"UIElementDamageEffectDef");
  }
  return;
}



// FUNCTION 14587cff4 FUN_14587cff4 body=67 status=ok
// SIG undefined FUN_14587cff4(void)

void FUN_14587cff4(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587d038 FUN_14587d038 body=856 status=ok
// SIG undefined FUN_14587d038(void)

void FUN_14587d038(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ushort *puVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1407cbe30();
  lVar1 = param_1 + 0x160;
  plVar7 = (longlong *)FUN_144a7cdc2(lVar1,&DAT_14cbdb638);
  if (*plVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_14000584e(*plVar7,0);
  }
  *(undefined1 *)(param_1 + 0x2b0) = uVar4;
  uVar8 = FUN_144a7cdc2(lVar1,&DAT_14cbdb688);
  uVar6 = FUN_140e1edd4(uVar8,4);
  *(undefined4 *)(param_1 + 0x2e8) = uVar6;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) goto LAB_14587d2a6;
  plVar7 = (longlong *)FUN_144a7cdc2(lVar1,&DAT_14cbdb640);
  if (*plVar7 == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = FUN_14000584e(*plVar7,0);
  }
  if (*(char *)(lVar2 + 200) == cVar5) {
    iVar9 = 1;
    if (*(int *)(lVar2 + 0xcc) == 0) goto LAB_14587d102;
  }
  else {
    iVar9 = *(int *)(lVar2 + 0xcc) + 1;
LAB_14587d102:
    *(char *)(lVar2 + 200) = cVar5;
    *(int *)(lVar2 + 0xcc) = iVar9;
  }
  plVar7 = (longlong *)FUN_144a7cdc2(lVar1,&DAT_14cbdb648);
  if (*plVar7 == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = FUN_14000584e(*plVar7,0);
  }
  if (*(char *)(lVar2 + 0xd8) == cVar5) {
    iVar9 = 1;
    if (*(int *)(lVar2 + 0xdc) == 0) goto LAB_14587d14a;
  }
  else {
    iVar9 = *(int *)(lVar2 + 0xdc) + 1;
LAB_14587d14a:
    *(char *)(lVar2 + 0xd8) = cVar5;
    *(int *)(lVar2 + 0xdc) = iVar9;
  }
  plVar7 = (longlong *)FUN_144a7cdc2(lVar1,&DAT_14cbdb698);
  if (*plVar7 == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = FUN_14000584e(*plVar7,0);
  }
  if (*(char *)(lVar2 + 0x590) == cVar5) {
    iVar9 = 1;
    if (*(int *)(lVar2 + 0x594) == 0) goto LAB_14587d197;
  }
  else {
    iVar9 = *(int *)(lVar2 + 0x594) + 1;
LAB_14587d197:
    *(char *)(lVar2 + 0x590) = cVar5;
    *(int *)(lVar2 + 0x594) = iVar9;
  }
  uVar8 = FUN_144a7cdc2(lVar1,&DAT_14cbdb660);
  local_58 = FUN_144a7cdd6(uVar8,0);
  FUN_14128da96(lVar2 + 0x100,&local_58);
  uVar8 = FUN_144a7cdc2(lVar1,&DAT_14cbdb668);
  local_58 = FUN_144a7cdd6(uVar8,0);
  FUN_14128da96(lVar2 + 0x118,&local_58);
  uVar8 = FUN_144a7cdc2(lVar1,&DAT_14cbdb670);
  local_58 = FUN_144a7cdd6(uVar8,0);
  FUN_14128da96(lVar2 + 0x130,&local_58);
  uVar8 = FUN_144a7cdc2(lVar1,&DAT_14cbdb680);
  uVar6 = FUN_140b963dc(uVar8,0x40000000);
  *(undefined4 *)(lVar2 + 0x600) = uVar6;
  if (*(char *)(param_1 + 0x2b0) == *(char *)(lVar2 + 0xb8)) {
    iVar9 = 1;
    if (*(int *)(lVar2 + 0xbc) == 0) goto LAB_14587d27d;
  }
  else {
    iVar9 = *(int *)(lVar2 + 0xbc) + 1;
LAB_14587d27d:
    *(char *)(lVar2 + 0xb8) = *(char *)(param_1 + 0x2b0);
    *(int *)(lVar2 + 0xbc) = iVar9;
  }
  puVar3 = *(ushort **)(lVar2 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
  }
LAB_14587d2a6:
  uVar8 = FUN_144a7cdc2(lVar1,&DAT_14cbdb650);
  fVar10 = (float)FUN_140b963dc(uVar8,0);
  uVar8 = FUN_144a7cdc2(lVar1,&DAT_14cbdb658);
  fVar11 = (float)FUN_140b963dc(uVar8,0);
  *(double *)(param_1 + 0x2b8) = (double)fVar10;
  *(double *)(param_1 + 0x2c0) = (double)fVar11;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(byte *)(param_1 + 0x2b1) = (-(fVar11 != 0.0) | -(fVar10 != 0.0)) & 1;
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14587d392 FUN_14587d392 body=37 status=ok
// SIG undefined FUN_14587d392(void)

void FUN_14587d392(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x2e8);
  FUN_14128dafa(param_2);
  return;
}



// FUNCTION 14587d3be FUN_14587d3be body=57 status=ok
// SIG undefined FUN_14587d3be(void)

void FUN_14587d3be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb24e88 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb24e88 = FUN_140002ddd(FUN_1464446f6,uVar1,L"GbxAudioNodeAspectState_PostEvent");
  }
  return;
}



// FUNCTION 14587d3fe FUN_14587d3fe body=57 status=ok
// SIG undefined FUN_14587d3fe(void)

void FUN_14587d3fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25148 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25148 = FUN_140002ddd(FUN_146445c8e,uVar1,L"GbxAudioGraphState_Action");
  }
  return;
}



// FUNCTION 14587d446 FUN_14587d446 body=45 status=ok
// SIG undefined FUN_14587d446(void)

undefined8 FUN_14587d446(undefined8 param_1,int param_2)

{
  FUN_14587d474();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14587d474 FUN_14587d474 body=65 status=ok
// SIG undefined FUN_14587d474(void)

void FUN_14587d474(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b35b880;
  plVar3 = (longlong *)param_1[6];
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
                    /* WARNING: Could not recover jumptable at 0x00014587d4b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14587d4bc FUN_14587d4bc body=57 status=ok
// SIG undefined FUN_14587d4bc(void)

void FUN_14587d4bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a980 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a980 = FUN_140002ddd(FUN_1464cb5b3,uVar1,L"GbxBrainAspectSettings_CharacterSound");
  }
  return;
}



// FUNCTION 14587d4fc FUN_14587d4fc body=57 status=ok
// SIG undefined FUN_14587d4fc(void)

void FUN_14587d4fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60820 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60820 = FUN_140002ddd(FUN_1464ed930,uVar1,L"GbxMomentNodeState_Delay");
  }
  return;
}



// FUNCTION 14587d53c FUN_14587d53c body=57 status=ok
// SIG undefined FUN_14587d53c(void)

void FUN_14587d53c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9fee0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9fee0 = FUN_140002ddd(FUN_1465a7d99,uVar1,L"CharacterSelectStationObjectBodySettings");
  }
  return;
}



// FUNCTION 14587d576 FUN_14587d576 body=21 status=ok
// SIG undefined FUN_14587d576(void)

undefined8 FUN_14587d576(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14587d594 FUN_14587d594 body=29 status=ok
// SIG undefined FUN_14587d594(void)

void FUN_14587d594(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14587d5b2 FUN_14587d5b2 body=54 status=ok
// SIG undefined FUN_14587d5b2(void)

undefined8 * FUN_14587d5b2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b478f80;
  FUN_1458ce724(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14587d5e8 FUN_14587d5e8 body=54 status=ok
// SIG undefined FUN_14587d5e8(void)

void FUN_14587d5e8(longlong param_1)

{
  FUN_145811d76(param_1 + 0x3c28,1);
  FUN_1403ca8ec(param_1 + 0xd98,&DAT_14cbd9318);
  return;
}



// FUNCTION 14587d628 FUN_14587d628 body=181 status=ok
// SIG undefined FUN_14587d628(void)

void FUN_14587d628(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x150);
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
  plVar3 = *(longlong **)(param_1 + 0x140);
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
  FUN_14128eda1(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  FUN_14587d6dd(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_1);
  return;
}



// FUNCTION 14587d6dd FUN_14587d6dd body=38 status=ok
// SIG undefined FUN_14587d6dd(void)

void FUN_14587d6dd(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14587d704(param_1);
    param_1 = param_1 + 0x78;
  }
  return;
}



// FUNCTION 14587d704 FUN_14587d704 body=75 status=ok
// SIG undefined FUN_14587d704(void)

void FUN_14587d704(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x70);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(char *)(param_1 + 100) == '\x01') {
    *(undefined1 *)(param_1 + 100) = 0;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14587d75e FUN_14587d75e body=36 status=ok
// SIG undefined FUN_14587d75e(void)

undefined8 FUN_14587d75e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14587d790 FUN_14587d790 body=36 status=ok
// SIG undefined FUN_14587d790(void)

undefined8 FUN_14587d790(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14587d7b4 FUN_14587d7b4 body=40 status=ok
// SIG undefined FUN_14587d7b4(void)

undefined8 FUN_14587d7b4(undefined8 param_1,int param_2)

{
  thunk_FUN_14071fe68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14587d7dc thunk_FUN_14071fe68 body=5 status=ok
// SIG undefined thunk_FUN_14071fe68(void)

void thunk_FUN_14071fe68(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1ad920;
  param_1[5] = &PTR_FUN_14a1adbd0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[7];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14587d7e2 thunk_FUN_14071fe68 body=5 status=ok
// SIG undefined thunk_FUN_14071fe68(void)

void thunk_FUN_14071fe68(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1ad920;
  param_1[5] = &PTR_FUN_14a1adbd0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[7];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14587d7f6 FUN_14587d7f6 body=36 status=ok
// SIG undefined FUN_14587d7f6(void)

undefined8 FUN_14587d7f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14587d81a FUN_14587d81a body=40 status=ok
// SIG undefined FUN_14587d81a(void)

undefined8 FUN_14587d81a(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14587d842 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14587d848 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14587d84e FUN_14587d84e body=144 status=ok
// SIG undefined FUN_14587d84e(void)

bool FUN_14587d84e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587d8e0 FUN_14587d8e0 body=26 status=ok
// SIG undefined FUN_14587d8e0(void)

void FUN_14587d8e0(undefined8 param_1)

{
  FUN_1411c334a();
  FUN_140a1982e(param_1);
  return;
}



// FUNCTION 14587d90e FUN_14587d90e body=76 status=ok
// SIG undefined FUN_14587d90e(void)

undefined8 * FUN_14587d90e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e12ab0;
  FUN_1449db362(param_1 + 4);
  *param_1 = &PTR_LAB_149e12740;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14587d95a FUN_14587d95a body=45 status=ok
// SIG undefined FUN_14587d95a(void)

void FUN_14587d95a(undefined8 param_1,longlong param_2)

{
  FUN_14587d987(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14587d987 FUN_14587d987 body=51 status=ok
// SIG undefined FUN_14587d987(void)

void FUN_14587d987(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14587d9c6 FUN_14587d9c6 body=228 status=ok
// SIG undefined FUN_14587d9c6(void)

longlong FUN_14587d9c6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8d78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14632b264;
    local_38 = &LAB_14749039f;
    local_40 = FUN_14632b309;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/FieldSystemEngine",L"FieldNodeFloat",&DAT_14caa8d78,&DAT_14749039e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8d78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587dab2 FUN_14587dab2 body=228 status=ok
// SIG undefined FUN_14587dab2(void)

longlong FUN_14587dab2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab1c90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14633909e;
    local_38 = &LAB_14752022f;
    local_40 = FUN_1463390a3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneCondition",&DAT_14cab1c90,FUN_14633907c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab1c90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587db9c FUN_14587db9c body=228 status=ok
// SIG undefined FUN_14587db9c(void)

longlong FUN_14587db9c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab8fa0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417963e0;
    local_38 = &LAB_1477604ec;
    local_40 = &LAB_14635a39b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x7a0;
    FUN_14081cfa3(L"/Script/UMG",L"WidgetComponent",&DAT_14cab8fa0,FUN_14635a374);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab8fa0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587dc88 FUN_14587dc88 body=228 status=ok
// SIG undefined FUN_14587dc88(void)

longlong FUN_14587dc88(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf2a90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145893078;
    local_38 = &LAB_147be689d;
    local_40 = FUN_1463edd79;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"OnlineBlueprintCallProxyBase",&DAT_14caf2a90,&DAT_147be689c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf2a90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587dd72 FUN_14587dd72 body=228 status=ok
// SIG undefined FUN_14587dd72(void)

longlong FUN_14587dd72(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1e880 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_147e9f0d0;
    local_40 = &LAB_1459259d4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x12000004;
    local_60 = 8;
    local_68 = 0x148;
    FUN_14081cfa3(L"/Script/AIModule",L"PawnActionsComponent",&DAT_14cb1e880,FUN_14642814c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1e880;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587de5c FUN_14587de5c body=228 status=ok
// SIG undefined FUN_14587de5c(void)

longlong FUN_14587de5c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1f130 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146429e70;
    local_38 = &LAB_147eba2e7;
    local_40 = &LAB_145a319b2;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/AIModule",L"BTCompositeNode",&DAT_14cb1f130,&DAT_147eba2e6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1f130;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587df4c FUN_14587df4c body=228 status=ok
// SIG undefined FUN_14587df4c(void)

longlong FUN_14587df4c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb45d90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14634e584;
    local_38 = &LAB_148237dd0;
    local_40 = FUN_146482d30;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2f8;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonUserWidget",&DAT_14cb45d90,FUN_146482d0e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb45d90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587e036 FUN_14587e036 body=228 status=ok
// SIG undefined FUN_14587e036(void)

longlong FUN_14587e036(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4aa38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458cc12a;
    local_38 = &LAB_14840e5ef;
    local_40 = FUN_14648b114;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0xe0;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"MouseHoverBehavior",&DAT_14cb4aa38,
                  &DAT_14840e5ee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4aa38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587e120 FUN_14587e120 body=228 status=ok
// SIG undefined FUN_14587e120(void)

longlong FUN_14587e120(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4aee0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14842fec9;
    local_40 = FUN_14648cd59;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"GizmoTransformSource",&DAT_14cb4aee0,
                  FUN_14648cd32);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4aee0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587e20a FUN_14587e20a body=228 status=ok
// SIG undefined FUN_14587e20a(void)

longlong FUN_14587e20a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb57ed0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14864baff;
    local_40 = FUN_1464bfb18;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActivityActor",&DAT_14cb57ed0,&DAT_14864bafe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb57ed0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587e2f4 FUN_14587e2f4 body=228 status=ok
// SIG undefined FUN_14587e2f4(void)

longlong FUN_14587e2f4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb903d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_1489c5811;
    local_40 = &LAB_1465656d3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 600;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlBaseComponent",&DAT_14cb903d0,FUN_1465656ac);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb903d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587e3de FUN_14587e3de body=228 status=ok
// SIG undefined FUN_14587e3de(void)

longlong FUN_14587e3de(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf3b88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e62b54;
    local_38 = &LAB_148f71d6d;
    local_40 = FUN_146667f01;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xe0;
    FUN_14081cfa3(L"/Script/MeshModelingTools",L"ExistingMeshMaterialProperties",&DAT_14cbf3b88,
                  FUN_146667eda);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf3b88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587e4c8 FUN_14587e4c8 body=228 status=ok
// SIG undefined FUN_14587e4c8(void)

longlong FUN_14587e4c8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf3bd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e62b54;
    local_38 = &LAB_148f720f7;
    local_40 = FUN_1466680b5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 200;
    FUN_14081cfa3(L"/Script/MeshModelingTools",L"MeshUVChannelProperties",&DAT_14cbf3bd8,
                  FUN_14666808e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf3bd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587e5ae FUN_14587e5ae body=45 status=ok
// SIG undefined FUN_14587e5ae(void)

undefined8 FUN_14587e5ae(undefined8 param_1,int param_2)

{
  FUN_14587e5dc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14587e5dc FUN_14587e5dc body=101 status=ok
// SIG undefined FUN_14587e5dc(void)

void FUN_14587e5dc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b299010;
  FUN_14587e641(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[8];
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
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 14587e641 FUN_14587e641 body=40 status=ok
// SIG undefined FUN_14587e641(void)

void FUN_14587e641(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14587e66a(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 14587e66a FUN_14587e66a body=111 status=ok
// SIG undefined FUN_14587e66a(void)

void FUN_14587e66a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14587e6d9(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_14587e722(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014587e6ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14587e6d9 FUN_14587e6d9 body=73 status=ok
// SIG undefined FUN_14587e6d9(void)

void FUN_14587e6d9(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14587e722 FUN_14587e722 body=73 status=ok
// SIG undefined FUN_14587e722(void)

void FUN_14587e722(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14587e772 FUN_14587e772 body=87 status=ok
// SIG undefined FUN_14587e772(void)

undefined * FUN_14587e772(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  undefined *puVar3;
  
  uVar1 = *param_1;
  cVar2 = FUN_144a787fd();
  if ((((cVar2 == '\0') ||
       ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)uVar1 * 0x3c + 5) & 8) == 0)) ||
      ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3)) ||
     ((*(longlong *)(&DAT_14ca814b0 + (ulonglong)*param_1 * 0x3c) == DAT_14ca80038 &&
      ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)*param_1 * 0x3c + 3) & 1) == 0)))) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_14ca81401;
  }
  return puVar3;
}



// FUNCTION 14587e7c9 FUN_14587e7c9 body=35 status=ok
// SIG undefined FUN_14587e7c9(void)

void FUN_14587e7c9(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14587e7ec(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a453920;
  return;
}



// FUNCTION 14587e7ec FUN_14587e7ec body=32 status=ok
// SIG undefined FUN_14587e7ec(void)

undefined8 * FUN_14587e7ec(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a8cd330;
  return param_1;
}



// FUNCTION 14587e816 FUN_14587e816 body=58 status=ok
// SIG undefined FUN_14587e816(void)

void FUN_14587e816(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    FUN_1458271b2(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 14587e850 FUN_14587e850 body=35 status=ok
// SIG undefined FUN_14587e850(void)

void FUN_14587e850(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14587e874(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bcebe50;
  return;
}



// FUNCTION 14587e874 FUN_14587e874 body=32 status=ok
// SIG undefined FUN_14587e874(void)

undefined8 * FUN_14587e874(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bd0e720;
  return param_1;
}



// FUNCTION 14587e894 FUN_14587e894 body=38 status=ok
// SIG undefined FUN_14587e894(void)

undefined8 FUN_14587e894(undefined8 param_1,int param_2)

{
  FUN_14587e8ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14587e8ba FUN_14587e8ba body=82 status=ok
// SIG undefined FUN_14587e8ba(void)

void FUN_14587e8ba(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a78d7d0;
  if (param_1[2] != 0) {
    FUN_14128f1bc();
  }
  *param_1 = IQueuedWork::vftable;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014587e909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 14587e91a FUN_14587e91a body=278 status=ok
// SIG undefined FUN_14587e91a(void)

void FUN_14587e91a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined1 local_50 [40];
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50[0] = 0;
  local_28 = 0;
  lVar1 = FUN_14124a572(param_2,&DAT_14cbd2e20);
  if (lVar1 == 0) {
LAB_14587e965:
    lVar1 = 0;
  }
  else {
    lVar2 = FUN_144a7d050();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_14587e965;
  }
  local_80[0] = 0;
  local_58 = 0;
  lVar2 = FUN_14124a572(param_2,&DAT_14cbd2e18);
  if (lVar2 != 0) {
    lVar3 = FUN_144a7d050();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_14587e98e;
  }
  lVar2 = 0;
LAB_14587e98e:
  FUN_14587ea31(param_1 + 0x98,lVar2,lVar1);
  FUN_144a5ac3a(local_80);
  FUN_144a5ac3a(local_50);
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14587ea31 FUN_14587ea31 body=66 status=ok
// SIG undefined FUN_14587ea31(void)

void FUN_14587ea31(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587ea74 FUN_14587ea74 body=40 status=ok
// SIG undefined FUN_14587ea74(void)

undefined8 FUN_14587ea74(undefined8 param_1,int param_2)

{
  FUN_14587ea9c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14587ea9c FUN_14587ea9c body=1167 status=ok
// SIG undefined FUN_14587ea9c(void)

void FUN_14587ea9c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bb58940;
  puVar4 = (undefined8 *)param_1[0xb1];
  while (puVar4 != (undefined8 *)0x0) {
    param_1[0xb1] = *puVar4;
    thunk_FUN_1400020a8(puVar4,0x18);
    puVar4 = (undefined8 *)param_1[0xb1];
  }
  if (param_1[0xac] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa6));
  *(undefined4 *)(param_1 + 0xa4) = 0;
  if (param_1[0xa3] != 0) {
    FUN_1400020a8();
  }
  FUN_14128f766(param_1 + 0x9b);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (param_1[0x97] != 0) {
    FUN_1400020a8();
  }
  FUN_14587ef6e(param_1 + 0x8f);
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  FUN_14128f848(param_1 + 0x82);
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_14128f766(param_1 + 0x72);
  *(undefined4 *)(param_1 + 0x71) = 0;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  FUN_14128f766(param_1 + 0x68);
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5e],*(undefined4 *)(param_1 + 0x5f));
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  FUN_14587ef2b(param_1[0x59],*(undefined4 *)(param_1 + 0x5a));
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  FUN_14587ef2b(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  FUN_14587efda(param_1 + 0x4d);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_140e4a704(param_1 + 0x43);
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_14587efa4(param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f963a(param_1 + 0x23);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_14128f819(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x14];
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
  FUN_144760e21(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14587ef2b FUN_14587ef2b body=66 status=ok
// SIG undefined FUN_14587ef2b(void)

void FUN_14587ef2b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xd8);
    do {
      FUN_1447a1747(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14587ef6e FUN_14587ef6e body=53 status=ok
// SIG undefined FUN_14587ef6e(void)

void FUN_14587ef6e(longlong *param_1)

{
  FUN_14587f016();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14587efa4 FUN_14587efa4 body=53 status=ok
// SIG undefined FUN_14587efa4(void)

void FUN_14587efa4(longlong *param_1)

{
  FUN_14587f172();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14587efda FUN_14587efda body=59 status=ok
// SIG undefined FUN_14587efda(void)

void FUN_14587efda(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1410f2525(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14587f016 FUN_14587f016 body=346 status=ok
// SIG undefined FUN_14587f016(void)

void FUN_14587f016(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14587f172 FUN_14587f172 body=346 status=ok
// SIG undefined FUN_14587f172(void)

void FUN_14587f172(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + 0x10 + (longlong)iStack_4c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14587f2ce FUN_14587f2ce body=199 status=ok
// SIG undefined FUN_14587f2ce(void)

void FUN_14587f2ce(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0x400;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar2 + lVar4) + 0x20) = 0;
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    lVar2 = *(longlong *)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0x400;
    if ((longlong)iVar1 != 0) {
      lVar4 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar4);
        FUN_1413ff406(lVar3);
        *(undefined4 *)(lVar3 + 0x20) = 0;
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
  }
  FUN_14587f396(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) < 0) {
    FUN_1447ab16c(param_1 + 8,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 14587f396 FUN_14587f396 body=70 status=ok
// SIG undefined FUN_14587f396(void)

void FUN_14587f396(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_1459742da(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 14587f3dc FUN_14587f3dc body=199 status=ok
// SIG undefined FUN_14587f3dc(void)

void FUN_14587f3dc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0x400;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar2 + lVar4) + 0x20) = 0;
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    lVar2 = *(longlong *)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0x400;
    if ((longlong)iVar1 != 0) {
      lVar4 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar4);
        FUN_1413ff406(lVar3);
        *(undefined4 *)(lVar3 + 0x20) = 0;
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
  }
  FUN_14587f4a4(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) < 0) {
    FUN_1447ab16c(param_1 + 8,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 14587f4a4 FUN_14587f4a4 body=70 status=ok
// SIG undefined FUN_14587f4a4(void)

void FUN_14587f4a4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_1459742da(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 14587f4ea FUN_14587f4ea body=254 status=ok
// SIG undefined FUN_14587f4ea(void)

undefined8
FUN_14587f4ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b9a5710;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9a56a0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14587f5ea(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587f5ea FUN_14587f5ea body=214 status=ok
// SIG undefined FUN_14587f5ea(void)

undefined8 * FUN_14587f5ea(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14587f6ce FUN_14587f6ce body=24 status=ok
// SIG undefined FUN_14587f6ce(void)

bool FUN_14587f6ce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14587f6f4 FUN_14587f6f4 body=66 status=ok
// SIG undefined FUN_14587f6f4(void)

undefined8 * FUN_14587f6f4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0159c0;
  FUN_14051f4c4(param_1 + 0x23);
  FUN_14051f4c4(param_1 + 7);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14587f736 FUN_14587f736 body=53 status=ok
// SIG undefined FUN_14587f736(void)

void FUN_14587f736(undefined8 param_1,undefined8 param_2)

{
  FUN_14587f76c(param_2);
  FUN_14587f7d0(param_2);
  FUN_14587f834(param_2);
  FUN_14587f898(param_2);
  FUN_14129068c(param_2);
  return;
}



// FUNCTION 14587f76c FUN_14587f76c body=98 status=ok
// SIG undefined FUN_14587f76c(void)

void FUN_14587f76c(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14095c602();
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



// FUNCTION 14587f7d0 FUN_14587f7d0 body=98 status=ok
// SIG undefined FUN_14587f7d0(void)

void FUN_14587f7d0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140c70810();
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



// FUNCTION 14587f834 FUN_14587f834 body=98 status=ok
// SIG undefined FUN_14587f834(void)

void FUN_14587f834(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1411a0a54();
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



// FUNCTION 14587f898 FUN_14587f898 body=98 status=ok
// SIG undefined FUN_14587f898(void)

void FUN_14587f898(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140b473e0();
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



// FUNCTION 14587f8fc FUN_14587f8fc body=40 status=ok
// SIG undefined FUN_14587f8fc(void)

undefined8 FUN_14587f8fc(undefined8 param_1,int param_2)

{
  FUN_14587f924();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14587f924 FUN_14587f924 body=95 status=ok
// SIG undefined FUN_14587f924(void)

void FUN_14587f924(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5d8760;
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



// FUNCTION 14587f984 FUN_14587f984 body=40 status=ok
// SIG undefined FUN_14587f984(void)

undefined8 FUN_14587f984(undefined8 param_1,int param_2)

{
  FUN_14587f9ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14587f9ac FUN_14587f9ac body=226 status=ok
// SIG undefined FUN_14587f9ac(void)

void FUN_14587f9ac(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b950260;
  param_1[7] = &PTR_FUN_14b950520;
  plVar3 = (longlong *)param_1[0x24];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x20];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_140368c45(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1449e6b18((longlong)param_1 + 0x7c);
  FUN_1449e6b18(param_1 + 0xe);
  plVar3 = (longlong *)param_1[0xd];
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
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14587fa9c FUN_14587fa9c body=40 status=ok
// SIG undefined FUN_14587fa9c(void)

undefined8 FUN_14587fa9c(undefined8 param_1,int param_2)

{
  FUN_14587fac4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14587fac4 FUN_14587fac4 body=82 status=ok
// SIG undefined FUN_14587fac4(void)

void FUN_14587fac4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5ea620;
  FUN_1401b9920(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14587fb16(param_1 + 1);
  return;
}



// FUNCTION 14587fb16 FUN_14587fb16 body=55 status=ok
// SIG undefined FUN_14587fb16(void)

void FUN_14587fb16(longlong *param_1)

{
  FUN_1412906f0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14587fb4d FUN_14587fb4d body=76 status=ok
// SIG undefined FUN_14587fb4d(void)

void FUN_14587fb4d(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) {
    lVar1 = FUN_14587fb9a();
    if (lVar1 != 0) {
      FUN_1412909de(lVar1,param_3,param_2,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 14587fb9a FUN_14587fb9a body=105 status=ok
// SIG undefined FUN_14587fb9a(void)

void FUN_14587fb9a(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1412908f8();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14587fc04(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587fc04 FUN_14587fc04 body=76 status=ok
// SIG undefined FUN_14587fc04(void)

void FUN_14587fc04(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1412908f8();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14587fc41;
    }
  }
  lVar2 = 0;
LAB_14587fc41:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 14587fc50 FUN_14587fc50 body=385 status=ok
// SIG undefined FUN_14587fc50(void)

longlong FUN_14587fc50(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x10),4000);
  FUN_1412913be(param_1 + 400);
  FUN_14129142a(param_1);
  *(undefined8 *)(param_1 + 0x210) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x218));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x218),4000);
  FUN_1412913be(param_1 + 0x398);
  FUN_14129142a(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x418) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x420));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x420),4000);
  FUN_1412913be(param_1 + 0x5a0);
  FUN_14129142a(param_1 + 0x410);
  *(undefined8 *)(param_1 + 0x620) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x628));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x628),4000);
  FUN_1412913be(param_1 + 0x7a8);
  FUN_14129142a(param_1 + 0x618);
  *(undefined8 *)(param_1 + 0x828) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x830));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x830),4000);
  FUN_1412913be(param_1 + 0x9b0);
  FUN_14129142a(param_1 + 0x820);
  *(undefined8 *)(param_1 + 0xa30) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa38));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xa38),4000);
  FUN_1412913be(param_1 + 3000);
  FUN_14129142a(param_1 + 0xa28);
  return param_1;
}



// FUNCTION 14587fdd2 FUN_14587fdd2 body=9 status=ok
// SIG undefined FUN_14587fdd2(void)

void FUN_14587fdd2(longlong param_1)

{
  FUN_14587fddc(param_1 + 0x10);
  return;
}



// FUNCTION 14587fddc FUN_14587fddc body=96 status=ok
// SIG undefined FUN_14587fddc(void)

void FUN_14587fddc(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b420798;
  FUN_14587fe3c(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b421658;
  FUN_1449db362(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014587fe38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}


