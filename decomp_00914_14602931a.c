// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14602931a FUN_14602931a body=108 status=ok
// SIG undefined FUN_14602931a(void)

undefined4 * FUN_14602931a(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  lVar9 = *(longlong *)(param_2 + 10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 10);
    }
  }
  *(longlong *)(param_1 + 10) = lVar9;
  FUN_140008f88(param_1 + 0xc,param_2 + 0xc);
  uVar8 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = uVar8;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  return param_1;
}



// FUNCTION 146029386 FUN_146029386 body=264 status=ok
// SIG undefined FUN_146029386(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_146029386(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab9178) {
    FUN_144b3d300(&DAT_14cab9178);
    if (DAT_14cab9178 == -1) {
      FUN_1446ddc76(&local_28,"SPostBufferUpdate",1);
      DAT_14cab9160 = 0;
      _DAT_14cab9168 = 0x100000000;
      DAT_14cab9140 = 0;
      _DAT_14cab9148 = 0;
      _DAT_14cab9170 = local_28;
      uVar1 = FUN_140a580e4();
      FUN_145b26348(local_20,&DAT_14cab9140,uVar1);
      FUN_146029490(local_20);
      FUN_140a5f69a(local_20);
      atexit(FUN_14333682e);
      _Init_thread_footer(&DAT_14cab9178);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return &DAT_14cab9140;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146029490 FUN_146029490 body=1 status=ok
// SIG undefined FUN_146029490(void)

void FUN_146029490(void)

{
  return;
}



// FUNCTION 14602949c FUN_14602949c body=255 status=ok
// SIG undefined FUN_14602949c(void)

undefined8 * FUN_14602949c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aee3b80;
  param_1[5] = &PTR_FUN_14aee3e20;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffff00000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000;
  param_1[0xd] = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x18] = &PTR_LAB_14aee56d0;
  param_1[0x19] = &LAB_14848437a;
  param_1[0x14] = &DAT_148483dca;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3ff00000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0x3ff0000000000000;
  param_1[0x25] = 0x3ff0000000000000;
  param_1[0x26] = 0x3ff0000000000000;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0xffffffff00000000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x8000000000;
  param_1[0x2e] = 0xffffffff;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  return param_1;
}



// FUNCTION 1460295a6 FUN_1460295a6 body=255 status=ok
// SIG undefined FUN_1460295a6(void)

undefined8 * FUN_1460295a6(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aee3f80;
  param_1[5] = &PTR_FUN_14aee4220;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffff00000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000;
  param_1[0xd] = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x18] = &PTR_LAB_14aee56d0;
  param_1[0x19] = &LAB_148484704;
  param_1[0x14] = &DAT_148483dca;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3ff00000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0x3ff0000000000000;
  param_1[0x25] = 0x3ff0000000000000;
  param_1[0x26] = 0x3ff0000000000000;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0xffffffff00000000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x8000000000;
  param_1[0x2e] = 0xffffffff;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  return param_1;
}



// FUNCTION 1460296a6 FUN_1460296a6 body=429 status=ok
// SIG undefined FUN_1460296a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460296a6(undefined8 param_1)

{
  _DAT_14cb73970 = 0;
  DAT_14cb73978 = 0;
  _DAT_14cb73980 = &PTR_FUN_14aff2260;
  _DAT_14cb73988 = 0;
  _DAT_14cb73990 = 0xffff0300;
  _DAT_14cb73968 = &PTR_FUN_14aff2090;
  _DAT_14cb73998 = 0;
  _DAT_14cb739c0 = 0;
  _DAT_14cb739c8 = 0;
  _DAT_14cb739a0 = 0;
  uRam000000014cb739a8 = 0;
  _DAT_14cb739cc = 0xffffffff00000080;
  _DAT_14cb739d4 = 0;
  _DAT_14cb739e0 = 0;
  _DAT_14cb739e8 = 0;
  _DAT_14cb73a28 = 0;
  _DAT_14cb73a30 = 0;
  _DAT_14cb73a00 = 0;
  uRam000000014cb73a08 = 0;
  _DAT_14cb739f0 = 0;
  uRam000000014cb739f8 = 0;
  _DAT_14cb73a10 = 0;
  _DAT_14cb73a34 = 0xffffffff00000080;
  _DAT_14cb73a3c = 0;
  _DAT_14cb73a48 = 0;
  _DAT_14cb73a50 = 0;
  _DAT_14cb73a58 = &DAT_14a171d50;
  _DAT_14cb73a70 = 0;
  _DAT_14cb73a60 = 0;
  uRam000000014cb73a68 = 0;
  _DAT_14cb73a78 = &DAT_14a171d50;
  _DAT_14cb73a90 = 0;
  _DAT_14cb73a80 = 0;
  uRam000000014cb73a88 = 0;
  DAT_14cb73a98 = 1;
  _DAT_14cb73aa0 = &DAT_14a171d50;
  _DAT_14cb73aa8 = 0;
  uRam000000014cb73ab0 = 0;
  _DAT_14cb73ab1 = 0;
  uRam000000014cb73ab8 = 0;
  uRam000000014cb73ab9 = 0;
  _DAT_14cb73ac8 = &DAT_14a171d50;
  _DAT_14cb73b18 = 0;
  _DAT_14cb73b20 = 0;
  _DAT_14cb73b00 = 0;
  _DAT_14cb73af0 = 0;
  uRam000000014cb73af8 = 0;
  _DAT_14cb73ae0 = 0;
  uRam000000014cb73ae8 = 0;
  _DAT_14cb73ad0 = 0;
  uRam000000014cb73ad8 = 0;
  _DAT_14cb73b24 = 0xffffffff00000080;
  _DAT_14cb73b2c = 0;
  _DAT_14cb73b38 = 0;
  _DAT_14cb73b40 = 0;
  _DAT_14cb73b68 = 0;
  _DAT_14cb73b70 = 0;
  _DAT_14cb73b48 = 0;
  uRam000000014cb73b50 = 0;
  _DAT_14cb73b74 = 0xffffffff00000080;
  _DAT_14cb73b7c = 0;
  _DAT_14cb73b88 = 0;
  _DAT_14cb73b90 = 0;
  _DAT_14cb73bc8 = 0;
  uRam000000014cb73bd0 = 0;
  _DAT_14cb73bb8 = 0;
  uRam000000014cb73bc0 = 0;
  _DAT_14cb73ba8 = 0;
  uRam000000014cb73bb0 = 0;
  _DAT_14cb73b98 = 0;
  uRam000000014cb73ba0 = 0;
  FUN_146029854(&DAT_14cb73970,param_1);
  return;
}



// FUNCTION 146029854 FUN_146029854 body=103 status=ok
// SIG undefined FUN_146029854(void)

void FUN_146029854(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_14129872a();
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  lVar1 = FUN_1400b0774(&DAT_14c9a0ea0);
  FUN_1447a97f4(lVar1,param_2);
  *(undefined2 *)(lVar1 + 0x28) = 0xffff;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  *param_1 = lVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 1460298c4 FUN_1460298c4 body=258 status=ok
// SIG undefined FUN_1460298c4(void)

undefined8 * FUN_1460298c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140e51bee(param_1,uVar1);
  *param_1 = &PTR_FUN_14b754cb0;
  param_1[0x72] = &PTR_FUN_14b755380;
  param_1[0x73] = &PTR_FUN_14b755400;
  param_1[0x74] = &PTR_FUN_14b755470;
  param_1[0x75] = &PTR_FUN_14b755498;
  param_1[0x76] = &PTR_FUN_14b7554b0;
  param_1[0xa4] = &PTR_FUN_14b7554e0;
  param_1[0xa5] = &PTR_FUN_14b755530;
  param_1[0xa6] = &PTR_FUN_14b755560;
  param_1[0xa7] = &PTR_FUN_14b755590;
  param_1[0xa8] = &PTR_FUN_14b7555a8;
  param_1[0x118] = &PTR_FUN_14b7555c0;
  param_1[0x119] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0xffffffff;
  param_1[0x11b] = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf9 | 2;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(undefined4 *)(param_1 + 0x34) = 0x40400000;
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) | 0x10;
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xfb;
  return param_1;
}



// FUNCTION 1460299c6 FUN_1460299c6 body=122 status=ok
// SIG undefined FUN_1460299c6(void)

ulonglong FUN_1460299c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (((*(longlong *)(param_1 + 0x170) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x178), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    uVar7 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        uVar7 = FUN_146029a40(0);
        return uVar7;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    uVar6 = FUN_146029a40(*(undefined8 *)(param_1 + 0x170));
    uVar7 = (ulonglong)uVar6;
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
  return uVar7;
}



// FUNCTION 146029a40 FUN_146029a40 body=11 status=ok
// SIG undefined FUN_146029a40(void)

bool FUN_146029a40(longlong param_1)

{
  return *(int *)(param_1 + 0x528) == 2;
}



// FUNCTION 146029a4c FUN_146029a4c body=427 status=ok
// SIG undefined FUN_146029a4c(void)

void FUN_146029a4c(void)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  wchar_t *local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_144a52528();
  FUN_1446ddc76(&local_40,"UniversalObjectLocator",1);
  uVar1 = FUN_144a52528();
  uVar1 = FUN_1402c9134(uVar1,local_40,&local_68,1);
  FUN_1446ddc76(&local_70,"usdprim",1);
  local_68 = L"UsdPrimLocatorFragment";
  local_60 = 0x16;
  FUN_1446e940c(local_84,&local_68);
  local_68 = L"USDStageModule";
  local_60 = 0xe;
  FUN_1446e940c(local_88,&local_68);
  FUN_140208bae(&local_80,local_88,local_84,L"UsdPrim");
  local_58 = local_70;
  local_68 = local_80;
  if (local_80 == (wchar_t *)0x0) {
    local_60 = local_78;
    local_50 = 0;
    local_48 = 0;
  }
  else {
    (**(code **)(*(longlong *)local_80 + 8))();
    local_60 = local_78;
    local_50 = 0;
    local_48 = 0;
    if (local_80 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_80 + 0x10))();
    }
  }
  FUN_1446ddc76(&local_50,"UsdPrim",1);
  FUN_146029bf8(uVar1,local_84,&local_68);
  DAT_14cc17280 = local_84[0];
  if (local_68 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_68 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146029bf8 FUN_146029bf8 body=265 status=ok
// SIG undefined FUN_146029bf8(void)

undefined1 * FUN_146029bf8(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_a8 [39];
  undefined1 local_81;
  code *local_80;
  code *local_78;
  undefined1 *local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  longlong *local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  FUN_144a5dc74(local_50);
  local_40 = *(undefined8 *)(param_3 + 0x10);
  local_38 = *(undefined8 *)(param_3 + 0x18);
  local_30 = *(undefined1 *)(param_3 + 0x20);
  lVar1 = FUN_146029d02();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  local_60 = FUN_149451584;
  local_78 = FUN_149455e54;
  local_80 = FUN_149455e82;
  local_70 = &LAB_149455e9e;
  local_68 = FUN_149455ea4;
  local_58 = lVar1;
  (**(code **)(*param_1 + 0x40))(param_1,&local_81,&local_80);
  *param_2 = local_81;
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146029d02 FUN_146029d02 body=55 status=ok
// SIG undefined FUN_146029d02(void)

void FUN_146029d02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc170c8 == 0) {
    uVar1 = FUN_146029d39();
    DAT_14cc170c8 = FUN_140002ddd(FUN_1467301c9,uVar1,L"UsdPrimLocatorFragment");
  }
  return;
}



// FUNCTION 146029d39 FUN_146029d39 body=49 status=ok
// SIG undefined FUN_146029d39(void)

longlong FUN_146029d39(void)

{
  if (DAT_14cc17110 == 0) {
    FUN_140f50038(&DAT_14cc17110,&PTR_s__Script_USDStage_14bcd2157_1_14bcd2138);
  }
  return DAT_14cc17110;
}



// FUNCTION 146029d76 FUN_146029d76 body=588 status=ok
// SIG undefined FUN_146029d76(void)

undefined8 * FUN_146029d76(undefined8 *param_1)

{
  FUN_14064ffa8();
  *param_1 = &PTR_FUN_14b5fb450;
  param_1[0x72] = &PTR_FUN_14b5fbac0;
  param_1[0x73] = &PTR_FUN_14b5fbae0;
  param_1[0x74] = &PTR_FUN_14b5fbb10;
  param_1[0x75] = &PTR_FUN_14b5fbb20;
  param_1[0x76] = &PTR_FUN_14b5fbb90;
  param_1[0x77] = &PTR_FUN_14b5fbbc0;
  param_1[0x78] = &PTR_FUN_14b5fbbf0;
  param_1[0x7f] = &PTR_FUN_14b5fbca0;
  param_1[0x80] = &PTR_FUN_14b5fbd10;
  param_1[0x81] = &PTR_FUN_14b5fbd80;
  param_1[0x82] = &PTR_FUN_14b5fbdb0;
  param_1[0x83] = &PTR_FUN_14b5fbdf0;
  param_1[0x84] = &PTR_FUN_14b5fbe90;
  param_1[0x85] = &PTR_FUN_14b5fbeb0;
  param_1[0x89] = &PTR_FUN_14b5fbed0;
  param_1[0x8a] = &PTR_FUN_14b5fbf90;
  param_1[0x8b] = &PTR_FUN_14b5fc010;
  param_1[0x8c] = &PTR_FUN_14b5fc060;
  param_1[0x8d] = &PTR_FUN_14b5fc0a0;
  param_1[0x8e] = &PTR_FUN_14b5fc0c0;
  param_1[0x8f] = &PTR_FUN_14b5fc0e0;
  param_1[0x90] = &PTR_FUN_14b5fc100;
  param_1[0x91] = &PTR_FUN_14b5fc120;
  param_1[0x92] = &PTR_FUN_14b5fc140;
  param_1[0x93] = &PTR_FUN_14b5fc160;
  param_1[0x94] = &PTR_FUN_14b5fc180;
  param_1[0x95] = &PTR_FUN_14b5fc1a0;
  param_1[0x96] = &PTR_FUN_14b5fc1c0;
  param_1[0x34b] = &PTR_FUN_14b5fc1e0;
  param_1[0x352] = &PTR_FUN_14b5fc1f0;
  param_1[0x353] = &PTR_FUN_14b5fc230;
  param_1[0x354] = &PTR_FUN_14b5fc270;
  param_1[0x355] = &PTR_FUN_14b5fc2c0;
  param_1[0x356] = &PTR_FUN_14b5fc2f0;
  param_1[0x359] = &PTR_FUN_14b5fc330;
  param_1[0x35a] = &PTR_FUN_14b5fc340;
  param_1[0x35b] = &PTR_FUN_14b5fc370;
  param_1[0x35c] = &PTR_FUN_14b5fc410;
  param_1[0x4c3] = 0;
  param_1[0x4c4] = 0;
  param_1[0x4c1] = 0;
  param_1[0x4c2] = 0;
  param_1[0x4bf] = 0;
  param_1[0x4c0] = 0;
  return param_1;
}



// FUNCTION 146029fca FUN_146029fca body=1016 status=ok
// SIG undefined FUN_146029fca(void)

undefined8 * FUN_146029fca(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14602a3c4();
  *param_1 = &PTR_FUN_14bc38900;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14020fad6(param_1 + 0xe,L"SkeletonNodeUid");
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_14020fad6(param_1 + 0x10,L"AnimationSampleRate");
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_14020fad6(param_1 + 0x12,L"AnimationStartTime");
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_14020fad6(param_1 + 0x14,L"AnimationStopTime");
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x51] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  FUN_140056680(local_40,L"__SceneNodeAnimationPayloadKeyUidMap__");
  local_50 = param_1[5];
  local_48 = (longlong *)param_1[6];
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  FUN_1414dec20(param_1 + 0x16,&local_50,local_40);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_40,L"__SceneNodeAnimationPayloadKeyTypeMap__");
  local_50 = param_1[5];
  local_48 = (longlong *)param_1[6];
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  FUN_1415c1980(param_1 + 0x25,&local_50,local_40);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_40,L"__MorphTargetPayloadKeyUidMap__");
  local_50 = param_1[5];
  local_48 = (longlong *)param_1[6];
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  FUN_1414dec20(param_1 + 0x34,&local_50,local_40);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_40,L"__MorphTargetPayloadKeyTypeMap__");
  local_50 = param_1[5];
  local_48 = (longlong *)param_1[6];
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  FUN_1415c1980(param_1 + 0x43,&local_50,local_40);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14602a3c4 FUN_14602a3c4 body=55 status=ok
// SIG undefined FUN_14602a3c4(void)

undefined8 * FUN_14602a3c4(undefined8 *param_1)

{
  FUN_1410832cc();
  *param_1 = &PTR_FUN_14bc35270;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14020fad6(param_1 + 0xc,L"CompletionMode");
  return param_1;
}



// FUNCTION 14602a3fc FUN_14602a3fc body=24 status=ok
// SIG undefined FUN_14602a3fc(void)

void FUN_14602a3fc(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014602a410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14602a414 FUN_14602a414 body=38 status=ok
// SIG undefined FUN_14602a414(void)

undefined8 FUN_14602a414(undefined8 param_1,int param_2)

{
  FUN_14602a43a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14602a43a FUN_14602a43a body=118 status=ok
// SIG undefined FUN_14602a43a(void)

void FUN_14602a43a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b9a0200;
  param_1[4] = &PTR_FUN_14b9a0220;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140af926c(param_1 + 4);
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014602a4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14602a4b0 FUN_14602a4b0 body=9 status=ok
// SIG undefined FUN_14602a4b0(void)

void FUN_14602a4b0(longlong param_1)

{
  FUN_14602a4ba(param_1 + 0x10);
  return;
}



// FUNCTION 14602a4ba FUN_14602a4ba body=95 status=ok
// SIG undefined FUN_14602a4ba(void)

void FUN_14602a4ba(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_1409580a1(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_14602a519(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014602a515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14602a519 FUN_14602a519 body=49 status=ok
// SIG undefined FUN_14602a519(void)

void FUN_14602a519(longlong param_1,int param_2)

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



// FUNCTION 14602a556 FUN_14602a556 body=522 status=ok
// SIG undefined FUN_14602a556(void)

undefined8 * FUN_14602a556(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_140bf9282();
  FUN_1409e1656(param_1 + 6);
  *param_1 = &PTR_FUN_14b78b710;
  param_1[6] = &PTR_FUN_14b78b9d0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
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
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[0x41] = puVar1;
  param_1[0x40] = puVar1;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  param_1[0x4f] = puVar1;
  param_1[0x4e] = puVar1;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 2;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  return param_1;
}



// FUNCTION 14602a760 FUN_14602a760 body=37 status=ok
// SIG undefined FUN_14602a760(void)

void FUN_14602a760(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xde0);
  FUN_14602a786(param_2);
  return;
}



// FUNCTION 14602a786 FUN_14602a786 body=1618 status=ok
// SIG undefined FUN_14602a786(void)

undefined8 * FUN_14602a786(undefined8 *param_1)

{
  FUN_14602ae1c();
  *param_1 = &PTR_FUN_14b777d00;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x44e10000;
  *(undefined4 *)(param_1 + 0x29) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x44e10000;
  FUN_1459c794e(param_1 + 0x2a);
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0x40a00000;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  memset(param_1 + 0x3a,0,0x180);
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0x3fc00000;
  memset(param_1 + 0x83,0,0xf0);
  *(undefined4 *)(param_1 + 0xa1) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0x40a00000;
  *(undefined4 *)(param_1 + 0xa2) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0x42700000;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x564) = 0;
  FUN_144928b90(param_1 + 0xad,0);
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0;
  param_1[0xbe] = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0xf00000d0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0x41a000003f800000;
  param_1[0xc2] = 0x42b40000427c0000;
  param_1[0xc3] = 0x4270000040e00000;
  *(undefined4 *)(param_1 + 0xc4) = 0x3d4ccccd;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0x3fc0000042c80000;
  param_1[0xd0] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0xd1) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x68c) = 0x44fa0000;
  *(undefined4 *)(param_1 + 0xd2) = 0x44160000;
  *(undefined4 *)((longlong)param_1 + 0x694) = 0x42c80000;
  param_1[0xd3] = 0x3fdcccccc0000000;
  param_1[0xd4] = 0x3fd1eb8520000000;
  param_1[0xd5] = 0x4010000000000000;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0xabcd1230;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x754) = 0;
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xed) = 0;
  param_1[0xf4] = 0;
  *(undefined4 *)(param_1 + 0xf5) = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7b4) = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0;
  param_1[0xfe] = 0;
  *(undefined4 *)(param_1 + 0xff) = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x804) = 0;
  param_1[0x102] = 0;
  *(undefined4 *)(param_1 + 0x103) = 0;
  param_1[0x108] = 0;
  *(undefined4 *)(param_1 + 0x109) = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x854) = 0;
  param_1[0x10c] = 0;
  *(undefined4 *)(param_1 + 0x10d) = 0;
  param_1[0x112] = 0;
  *(undefined4 *)(param_1 + 0x113) = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x89c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8a4) = 0;
  param_1[0x116] = 0;
  *(undefined4 *)(param_1 + 0x117) = 0;
  param_1[0x11c] = 0;
  *(undefined4 *)(param_1 + 0x11d) = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8f4) = 0;
  param_1[0x120] = 0;
  *(undefined4 *)(param_1 + 0x121) = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  FUN_14602add8(param_1 + 0x12a);
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  *(undefined4 *)(param_1 + 0x13d) = 0x3f800000;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0x3e99999a42c80000;
  param_1[0x148] = 0;
  *(undefined4 *)(param_1 + 0x149) = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa54) = 0;
  param_1[0x14c] = 0;
  *(undefined4 *)(param_1 + 0x14d) = 0;
  FUN_144a5dc74(param_1 + 0x14e);
  FUN_144a5dc74(param_1 + 0x150);
  FUN_144a5dc74(param_1 + 0x152);
  FUN_144a5dc74(param_1 + 0x154);
  param_1[0x156] = 0;
  FUN_1446f470e(param_1 + 0x157,L"Camera_Default",1);
  param_1[0x15c] = 0;
  *(undefined4 *)(param_1 + 0x15d) = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  *(undefined8 *)((longlong)param_1 + 0xaec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xaf4) = 0;
  param_1[0x160] = 0;
  *(undefined4 *)(param_1 + 0x161) = 0;
  param_1[0x16d] = 0;
  *(undefined4 *)(param_1 + 0x16e) = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb7c) = 0;
  param_1[0x171] = 0;
  *(undefined4 *)(param_1 + 0x172) = 0;
  param_1[0x177] = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbcc) = 0;
  param_1[0x17b] = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  param_1[0x187] = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4c) = 0;
  param_1[0x18b] = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  param_1[0x191] = 0;
  *(undefined4 *)(param_1 + 0x192) = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc9c) = 0;
  param_1[0x195] = 0;
  *(undefined4 *)(param_1 + 0x196) = 0;
  param_1[0x19b] = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  param_1[0x197] = 0;
  param_1[0x198] = 0;
  *(undefined8 *)((longlong)param_1 + 0xce4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcec) = 0;
  param_1[0x19f] = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  param_1[0x1a1] = 0x3d4ccccd3e800000;
  param_1[0x1a2] = 0x3d4ccccd3d4ccccd;
  param_1[0x1ac] = 0;
  *(undefined4 *)(param_1 + 0x1ad) = 0;
  param_1[0x1a9] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd74) = 0;
  param_1[0x1b0] = 0;
  *(undefined4 *)(param_1 + 0x1b1) = 0;
  param_1[0x1b6] = 0;
  *(undefined4 *)(param_1 + 0x1b7) = 0;
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc4) = 0;
  param_1[0x1ba] = 0;
  *(undefined4 *)(param_1 + 0x1bb) = 0;
  return param_1;
}



// FUNCTION 14602add8 FUN_14602add8 body=67 status=ok
// SIG undefined FUN_14602add8(void)

longlong FUN_14602add8(longlong param_1)

{
  FUN_144a5dc74();
  FUN_144a5dc74(param_1 + 0x10);
  FUN_144a5dc74(param_1 + 0x20);
  FUN_144a5dc74(param_1 + 0x30);
  FUN_144a5dc74(param_1 + 0x40);
  FUN_144a5dc74(param_1 + 0x50);
  return param_1;
}



// FUNCTION 14602ae1c FUN_14602ae1c body=144 status=ok
// SIG undefined FUN_14602ae1c(void)

void FUN_14602ae1c(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b466590;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = &PTR_FUN_14b4665c8;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = &PTR_FUN_14b4665c0;
  *(undefined1 *)(param_1 + 0x14) = 0;
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
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return;
}



// FUNCTION 14602aeac FUN_14602aeac body=115 status=ok
// SIG undefined FUN_14602aeac(void)

void FUN_14602aeac(ulonglong param_1)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  
  cVar1 = FUN_1415c1b86();
  if (cVar1 == '\0') {
    return;
  }
  iVar2 = (int)param_1;
  if (iVar2 == 0) {
LAB_14602aec1:
    uVar3 = 0;
  }
  else {
    if (iVar2 < 6) {
      param_1 = param_1 & 0xffffffff;
      do {
        cVar1 = FUN_1415c1e8e((int)param_1 + 2);
        if (cVar1 != '\0') {
          uVar3 = CONCAT71((int7)(param_1 >> 8),(char)param_1 + '\x02');
          goto LAB_14602aec3;
        }
        uVar4 = (int)param_1 + 1;
        param_1 = (ulonglong)uVar4;
      } while (uVar4 != 6);
      if (iVar2 < 1) goto LAB_14602aec1;
    }
    iVar2 = iVar2 + 3;
    do {
      cVar1 = FUN_1415c1e8e(iVar2 + -1);
      if (cVar1 != '\0') {
        uVar3 = (ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),(char)iVar2 + -1);
        break;
      }
      iVar2 = iVar2 + -1;
      uVar3 = 0;
    } while (3 < iVar2);
  }
LAB_14602aec3:
  FUN_1415c1c42(0,uVar3);
  return;
}



// FUNCTION 14602af20 FUN_14602af20 body=38 status=ok
// SIG undefined FUN_14602af20(void)

undefined8 FUN_14602af20(undefined8 param_1,int param_2)

{
  FUN_14602af46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14602af46 FUN_14602af46 body=162 status=ok
// SIG undefined FUN_14602af46(void)

void FUN_14602af46(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b692a50;
  plVar3 = (longlong *)param_1[0x6b];
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
  plVar3 = (longlong *)param_1[0x65];
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
  plVar3 = (longlong *)param_1[0x5f];
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
  FUN_141420c64(param_1);
  return;
}



// FUNCTION 14602aff4 FUN_14602aff4 body=520 status=ok
// SIG undefined FUN_14602aff4(void)

undefined8 * FUN_14602aff4(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a5a57e0;
  param_1[5] = &PTR_FUN_14a5a5dc0;
  param_1[6] = &PTR_LAB_14a5a5e00;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0x101;
  puVar1 = param_1 + 0x58;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0x3f800000;
  param_1[0x5b] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5e) = 0x40400000;
  param_1[0x5f] = 0;
  uVar3 = FUN_14001cc68(0xf0,0x10);
  FUN_1415c1f82(uVar3);
  param_1[0x60] = uVar3;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)((longlong)param_1 + 0x314) = 4;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 6;
  *(undefined1 *)(param_1 + 9) = 0;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  iVar2 = *(int *)(param_1 + 0x59);
  *(uint *)(param_1 + 0x59) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x2cc) < iVar2 + 1U) {
    FUN_14602b1fc(puVar1,iVar2);
  }
  *(undefined4 *)(param_1[0x58] + (longlong)iVar2 * 4) = 0xff0000ff;
  iVar2 = *(int *)(param_1 + 0x59);
  *(uint *)(param_1 + 0x59) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x2cc) < iVar2 + 1U) {
    FUN_14602b1fc(puVar1,iVar2);
  }
  *(undefined4 *)(param_1[0x58] + (longlong)iVar2 * 4) = 0xffff0000;
  iVar2 = *(int *)(param_1 + 0x59);
  *(uint *)(param_1 + 0x59) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x2cc) < iVar2 + 1U) {
    FUN_14602b1fc(puVar1,iVar2);
  }
  *(undefined4 *)(param_1[0x58] + (longlong)iVar2 * 4) = 0xff00ff00;
  iVar2 = *(int *)(param_1 + 0x59);
  *(uint *)(param_1 + 0x59) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x2cc) < iVar2 + 1U) {
    FUN_14602b1fc(puVar1,iVar2);
  }
  *(undefined4 *)(param_1[0x58] + (longlong)iVar2 * 4) = 0xffffff00;
  iVar2 = *(int *)(param_1 + 0x59);
  *(uint *)(param_1 + 0x59) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x2cc) < iVar2 + 1U) {
    FUN_14602b1fc(puVar1,iVar2);
  }
  *(undefined4 *)(param_1[0x58] + (longlong)iVar2 * 4) = 0xff00ffff;
  iVar2 = *(int *)(param_1 + 0x59);
  *(uint *)(param_1 + 0x59) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x2cc) < iVar2 + 1U) {
    FUN_14602b1fc(puVar1,iVar2);
  }
  *(undefined4 *)(param_1[0x58] + (longlong)iVar2 * 4) = 0xffff00ff;
  return param_1;
}



// FUNCTION 14602b1fc FUN_14602b1fc body=132 status=ok
// SIG undefined FUN_14602b1fc(void)

void FUN_14602b1fc(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14602b282 FUN_14602b282 body=74 status=ok
// SIG undefined FUN_14602b282(void)

void FUN_14602b282(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 4;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 4) {
    FUN_14602b2cc(param_1);
  }
  memset((void *)((longlong)iVar1 * 0x30 + *param_1),0,0xc0);
  return;
}



// FUNCTION 14602b2cc FUN_14602b2cc body=147 status=ok
// SIG undefined FUN_14602b2cc(void)

void FUN_14602b2cc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14602b360 FUN_14602b360 body=91 status=ok
// SIG undefined FUN_14602b360(void)

void FUN_14602b360(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_144a63f30();
  if (((*(uint *)(param_1 + 8) & 0x10) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd4) & 1) == 0)) {
    lVar1 = FUN_145a6ad2c();
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      FUN_140aa6c08(lVar1);
      lVar2 = *(longlong *)(lVar1 + 0x110);
    }
    FUN_14602b3bc(lVar2,param_1);
    return;
  }
  return;
}



// FUNCTION 14602b3bc FUN_14602b3bc body=179 status=ok
// SIG undefined FUN_14602b3bc(void)

void FUN_14602b3bc(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x18);
  local_38 = param_2;
  local_30 = uVar1;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar2 = FUN_144a788f7(uVar1 & 0xffffffff);
  plVar3 = (longlong *)
           FUN_14602b470(param_1 + 0x38,(int)(uVar1 >> 0x20) + iVar2,&local_30,&local_38);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *plVar3 = param_2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14602b470 FUN_14602b470 body=196 status=ok
// SIG undefined FUN_14602b470(void)

longlong * FUN_14602b470(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_14602b4c7;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_14602b536(param_1,&local_1c,param_2,&local_30);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_14602b4c7:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 14602b536 FUN_14602b536 body=306 status=ok
// SIG undefined FUN_14602b536(void)

undefined4 * FUN_14602b536(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14602b6ec(param_1,local_40);
  plVar1 = (longlong *)param_4[1];
  *local_38 = *(undefined8 *)*param_4;
  lVar6 = *plVar1;
  local_38[1] = lVar6;
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  cVar2 = FUN_14602b66a(param_1,param_3,local_38);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_38 + 0x14) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_40[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14602b7d4(param_1);
    }
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14602b66a FUN_14602b66a body=130 status=ok
// SIG undefined FUN_14602b66a(void)

undefined8 FUN_14602b66a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_147856e56((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14602b6ec FUN_14602b6ec body=231 status=ok
// SIG undefined FUN_14602b6ec(void)

int * FUN_14602b6ec(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14602b7d4 FUN_14602b7d4 body=464 status=ok
// SIG undefined FUN_14602b7d4(void)

void FUN_14602b7d4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar5 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar3 = *local_90;
        lVar10 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar10 * 0x18);
        iVar6 = FUN_144a788f7();
        uVar7 = (longlong)(iVar6 + (int)((ulonglong)uVar4 >> 0x20)) & (longlong)(int)param_1[9] - 1U
        ;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x14 + lVar10 * 0x18) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14602b9b0 FUN_14602b9b0 body=790 status=ok
// SIG undefined FUN_14602b9b0(void)

longlong * FUN_14602b9b0(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_14480568a();
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 2;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x63c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x654) = 0;
  *(undefined4 *)((longlong)param_1 + 0x65c) = 0;
  param_1[0xcc] = 2;
  *param_1 = (longlong)&PTR_FUN_14a6fea30;
  param_1[5] = (longlong)&PTR_FUN_14a6ff610;
  param_1[6] = (longlong)&PTR_LAB_14a6ff650;
  param_1[0x55] = (longlong)&PTR_FUN_14a6ff6a0;
  param_1[0x56] = (longlong)&PTR_FUN_14a6ff720;
  param_1[0x57] = (longlong)&PTR_FUN_14a6ff730;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x119] = DAT_14c846330;
  *(undefined4 *)(param_1 + 0x11a) = DAT_14c846338;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  *(undefined4 *)(param_1 + 0x122) = 0;
  *(undefined4 *)((longlong)param_1 + 0x914) = 0;
  *(undefined4 *)(param_1 + 0x123) = 0;
  *(undefined4 *)((longlong)param_1 + 0x91c) = 0x3ff00000;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x128] = 0x3ff0000000000000;
  param_1[0x129] = 0x3ff0000000000000;
  param_1[0x12a] = 0x3ff0000000000000;
  param_1[299] = 0;
  param_1[300] = 0;
  *(undefined1 *)(param_1 + 9) = 2;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf5 | 2;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 0x80;
  *(undefined4 *)((longlong)param_1 + 0x73c) = 0x40a00000;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(byte *)((longlong)param_1 + 0x691) = *(byte *)((longlong)param_1 + 0x691) & 0xfe;
  *(undefined1 *)(param_1 + 0xde) = 0;
  param_1[0xe1] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xdf) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x6fc) = uVar1;
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x704) = uVar3;
  lVar4 = 0;
  if (DAT_14c846538 == '\x01') {
    lVar4 = param_1[3];
  }
  FUN_140e70c9e(param_1 + 0x11e,lVar4);
  param_1[0xe4] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xe2) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x714) = uVar1;
  *(undefined4 *)(param_1 + 0xe3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x71c) = uVar3;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x693) = *(byte *)((longlong)param_1 + 0x693) & 0xfd;
  *(byte *)((longlong)param_1 + 0x692) = *(byte *)((longlong)param_1 + 0x692) & 0x6f | 0x80;
  *(undefined4 *)(param_1 + 0xef) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 2;
  *(undefined1 *)((longlong)param_1 + 0x694) = 0;
  *(undefined1 *)((longlong)param_1 + 0x69c) = 0;
  *(byte *)(param_1 + 0xd2) = *(byte *)(param_1 + 0xd2) & 0xdf;
  (**(code **)(*param_1 + 0x728))(param_1,DAT_14cad0f30,1);
  FUN_14127091c(param_1,0);
  *(byte *)((longlong)param_1 + 0x2dc) = *(byte *)((longlong)param_1 + 0x2dc) | 1;
  *(byte *)((longlong)param_1 + 0x2d4) = *(byte *)((longlong)param_1 + 0x2d4) & 0xbf;
  *(byte *)((longlong)param_1 + 0x1fa) = *(byte *)((longlong)param_1 + 0x1fa) & 0xf7;
  param_1[0x103] = 0x3ff0000000000000;
  param_1[0x104] = 0x3ff0000000000000;
  param_1[0x105] = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x974) = 0;
  *(undefined1 *)((longlong)param_1 + 0x69e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x744) = 0;
  *(byte *)((longlong)param_1 + 0x691) = *(byte *)((longlong)param_1 + 0x691) & 0x7f;
  *(byte *)((longlong)param_1 + 0x692) = *(byte *)((longlong)param_1 + 0x692) & 0xfc;
  *(undefined4 *)(param_1 + 0xd3) = 0x3fffffff;
  *(byte *)((longlong)param_1 + 0x2dd) = *(byte *)((longlong)param_1 + 0x2dd) | 4;
  return param_1;
}



// FUNCTION 14602bcce FUN_14602bcce body=259 status=ok
// SIG undefined FUN_14602bcce(void)

undefined8 * FUN_14602bcce(undefined8 *param_1)

{
  FUN_145a31890();
  *param_1 = &PTR_FUN_14aaaa450;
  *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) & 0xfe;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x1f40000000a;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xc2c00000;
  return param_1;
}



// FUNCTION 14602bdda FUN_14602bdda body=831 status=ok
// SIG undefined FUN_14602bdda(void)

undefined8 * FUN_14602bdda(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 *puStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140e3eac6();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *param_1 = &PTR_FUN_14ad709b0;
  param_1[6] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  uVar2 = FUN_144830b78((longlong)param_1 + 0x44,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  param_1[6] = &PTR_FUN_14ad6ad70;
  *(undefined4 *)(param_1 + 7) = 1;
  param_1[9] = &DAT_3f8000003f800000;
  local_78 = &DAT_3f8000003f800000;
  puStack_70 = &DAT_3f8000003f800000;
  param_1[10] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 0xb) = 1;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  uVar2 = FUN_144830b78((longlong)param_1 + 100,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 100) = uVar2;
  param_1[10] = &PTR_FUN_14ad6b1d0;
  param_1[0xd] = &DAT_3f8000003f800000;
  param_1[0xe] = &DAT_3f8000003f800000;
  param_1[0xf] = &DAT_3f8000003f800000;
  param_1[0x10] = &DAT_3f8000003f800000;
  FUN_14602c11a(param_1 + 10,&local_78);
  param_1[0x11] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 0x12) = 1;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  uVar2 = FUN_144830b78((longlong)param_1 + 0x9c,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar2;
  param_1[0x11] = &PTR_FUN_14ad6ad70;
  *(undefined4 *)(param_1 + 0x12) = 1;
  param_1[0x14] = &DAT_3f8000003f800000;
  local_78 = (undefined1 *)0x4120000041200000;
  param_1[0x15] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 0x16) = 1;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  uVar2 = FUN_144830b78((longlong)param_1 + 0xbc,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar2;
  param_1[0x15] = &PTR_FUN_14ad6aee0;
  uVar1 = DAT_14c84635c;
  param_1[0x18] = DAT_14c84635c;
  param_1[0x19] = uVar1;
  FUN_145cdcd4a(param_1 + 0x15,&local_78);
  param_1[0x1a] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 0x1b) = 1;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  uVar2 = FUN_144830b78((longlong)param_1 + 0xe4,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  param_1[0x1a] = &PTR_FUN_14ad6ad70;
  *(undefined4 *)(param_1 + 0x1b) = 1;
  param_1[0x1d] = 0;
  puStack_70 = (undefined1 *)CONCAT44(puStack_70._4_4_,DAT_14c846358);
  local_78 = DAT_14c846350;
  param_1[0x1e] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 0x1f) = 1;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  uVar2 = FUN_144830b78((longlong)param_1 + 0x104,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar2;
  param_1[0x1e] = &PTR_FUN_14ad6b060;
  param_1[0x21] = DAT_14c846330;
  *(undefined4 *)(param_1 + 0x22) = DAT_14c846338;
  *(undefined8 *)((longlong)param_1 + 0x114) = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 0x11c) = DAT_14c846338;
  FUN_1459ac994(param_1 + 0x1e,&local_78);
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x25] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 0x26) = 1;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  uVar2 = FUN_144830b78((longlong)param_1 + 0x13c,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x13c) = uVar2;
  param_1[0x25] = &PTR_FUN_14ad6ad70;
  *(undefined4 *)(param_1 + 0x26) = 1;
  param_1[0x28] = 0x4120000041200000;
  param_1[0x29] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 0x2a) = 1;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  uVar2 = FUN_144830b78((longlong)param_1 + 0x15c,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x15c) = uVar2;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x3f80000000000000;
  param_1[0x29] = &PTR_FUN_14ad6b790;
  FUN_14602c130(param_1 + 0x29,&DAT_14c846330);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14602c11a FUN_14602c11a body=22 status=ok
// SIG undefined FUN_14602c11a(void)

void FUN_14602c11a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 8) = 2;
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x28) = *param_2;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}



// FUNCTION 14602c130 FUN_14602c130 body=205 status=ok
// SIG undefined FUN_14602c130(void)

void FUN_14602c130(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 8) = 2;
  uStack_28 = *(undefined4 *)(param_2 + 1);
  local_30 = *param_2;
  uStack_24 = (undefined4)*param_2;
  uStack_20 = (undefined4)((ulonglong)*param_2 >> 0x20);
  local_1c = *(undefined4 *)(param_2 + 1);
  local_40 = (undefined4 *)0x0;
  local_38 = 2;
  FUN_140c0b9de(&local_40,2,0);
  *(ulonglong *)(local_40 + 4) = CONCAT44(local_1c,uStack_20);
  *local_40 = (undefined4)local_30;
  local_40[1] = local_30._4_4_;
  local_40[2] = uStack_28;
  local_40[3] = uStack_24;
  if ((undefined4 **)(param_1 + 0x18) == &local_40) {
    if (local_40 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8(*(longlong *)(param_1 + 0x18));
    }
    *(undefined4 **)(param_1 + 0x18) = local_40;
    *(undefined4 *)(param_1 + 0x20) = local_38;
    *(undefined4 *)(param_1 + 0x24) = local_34;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14602c1fe FUN_14602c1fe body=40 status=ok
// SIG undefined FUN_14602c1fe(void)

undefined8 FUN_14602c1fe(undefined8 param_1,int param_2)

{
  FUN_14602c226();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14602c226 FUN_14602c226 body=227 status=ok
// SIG undefined FUN_14602c226(void)

void FUN_14602c226(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ade0900;
  param_1[0x3e] = &DAT_14a176f00;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x3e] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x3f);
  param_1[0x2e] = &DAT_14a176f00;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2e] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x2f);
  param_1[0x1e] = &DAT_14a176f00;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1e] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x1f);
  param_1[0xe] = &DAT_14a176f00;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  param_1[0xe] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0xf);
  FUN_14081e1cc(param_1);
  return;
}



// FUNCTION 14602c30a FUN_14602c30a body=43 status=ok
// SIG undefined FUN_14602c30a(void)

undefined8 FUN_14602c30a(undefined8 param_1,int param_2)

{
  FUN_14602c336();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x708);
  }
  return param_1;
}



// FUNCTION 14602c336 FUN_14602c336 body=268 status=ok
// SIG undefined FUN_14602c336(void)

void FUN_14602c336(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8c1840;
  FUN_140f9c02e(param_1[0xdf],*(undefined4 *)(param_1 + 0xe0));
  if (param_1[0xdf] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7ede(param_1 + 0xd2);
  FUN_14121ab90(param_1 + 0x70);
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_1415c2420(param_1);
  return;
}



// FUNCTION 14602c442 FUN_14602c442 body=287 status=ok
// SIG undefined FUN_14602c442(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14602c442(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e8800) {
    FUN_144b3d300(&DAT_14c9e8800);
    if (DAT_14c9e8800 == -1) {
      FUN_14602c562();
      FUN_140db5666(&DAT_14c9e8758,2,&DAT_14c9e86f0,L"TLightMapDensityPSFNoLightMapPolicy",
                    L"/Engine/Private/LightMapDensityShader.usf",L"MainPixelShader",3,1,
                    FUN_1471d1144,FUN_1471d111c,FUN_141765e46,&LAB_1471d1118,&LAB_14712ac0c,
                    &LAB_14712ac08,0x120,0);
      _DAT_14c9e8758 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142ce702c);
      _Init_thread_footer(&DAT_14c9e8800);
    }
  }
  return &DAT_14c9e8758;
}



// FUNCTION 14602c562 FUN_14602c562 body=210 status=ok
// SIG undefined FUN_14602c562(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602c562(void)

{
  if ((DAT_14c9e8757 & 2) == 0) {
    DAT_14c9e8757 = DAT_14c9e8757 | 2;
    _DAT_14c9e86f8 = L"TLightMapDensityPSFNoLightMapPolicy";
    _DAT_14c9e8710 = FUN_146826540;
    _DAT_14c9e8718 = FUN_146825d77;
    _DAT_14c9e8720 = FUN_146825fd6;
    _DAT_14c9e8728 = FUN_1407e02ea;
    _DAT_14c9e8730 = FUN_146826273;
    _DAT_14c9e8708 = FUN_1471d10de;
    _DAT_14c9e8748 = 0xffffffff00000120;
    _DAT_14c9e8750 = 8;
    DAT_14c9e8754 = 0;
    _DAT_14c9e8738 = &LAB_1471d1114;
    FUN_14602c634();
    FUN_14602c786();
    FUN_1407e00cc(&DAT_14c9e86f0);
    return;
  }
  return;
}



// FUNCTION 14602c634 FUN_14602c634 body=121 status=ok
// SIG undefined FUN_14602c634(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602c634(void)

{
  FUN_14602c6ae();
  _DAT_14c9eb370 = L"BuiltLightingAndSelectedFlags";
  DAT_14c9eb39a = FUN_140850cc5();
  _DAT_14c9eb378 = FUN_140ec6960();
  _DAT_14c9eb388 = &LAB_14682652b;
  _DAT_14c9eb390 = 0x10000010e;
  _DAT_14c9eb398 = 0;
  _DAT_14c9eb380 = DAT_14c9e8700;
  DAT_14c9e8700 = &DAT_14c9eb370;
  return;
}



// FUNCTION 14602c6ae FUN_14602c6ae body=216 status=ok
// SIG undefined FUN_14602c6ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602c6ae(void)

{
  _DAT_14c9eb3d0 = L"LightMapDensityDisplayOptions";
  DAT_14c9eb3fa = FUN_140850cc5();
  _DAT_14c9eb3d8 = FUN_140ec6960();
  _DAT_14c9eb3e8 = &LAB_14682652b;
  _DAT_14c9eb3f0 = 0x10000011a;
  _DAT_14c9eb3f8 = 0;
  _DAT_14c9eb3e0 = DAT_14c9e8700;
  DAT_14c9e8700 = &DAT_14c9eb3d0;
  _DAT_14c9eb3a0 = L"LightMapResolutionScale";
  DAT_14c9eb3ca = FUN_140850cc5();
  _DAT_14c9eb3a8 = FUN_140ec6960();
  _DAT_14c9eb3b8 = &LAB_14682652b;
  _DAT_14c9eb3c0 = 0x100000114;
  _DAT_14c9eb3c8 = 0;
  _DAT_14c9eb3b0 = DAT_14c9e8700;
  DAT_14c9e8700 = &DAT_14c9eb3a0;
  return;
}



// FUNCTION 14602c786 FUN_14602c786 body=235 status=ok
// SIG undefined FUN_14602c786(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602c786(void)

{
  _DAT_14c9eb400 = L"BASE";
  DAT_14c9eb42a = 4;
  FUN_1411cad6c();
  _DAT_14c9eb410 = DAT_14c9e8700;
  _DAT_14c9eb408 = &DAT_14c9e8fa8;
  _DAT_14c9eb418 = &LAB_14682652b;
  DAT_14c9e8700 = &DAT_14c9eb400;
  DAT_14c9e8755 = DAT_14c9e8755 + '\x01';
  _DAT_14c9eb420 = &DAT_100000108;
  if (DAT_14c9e900c != '\0') {
    DAT_14c9e8756 = DAT_14c9e8756 + '\x01';
  }
  _DAT_14c9eb430 = L"BASE";
  DAT_14c9eb45a = 4;
  _DAT_14c9eb438 = FUN_141092e92();
  _DAT_14c9eb440 = DAT_14c9e8700;
  _DAT_14c9eb448 = &LAB_14682652b;
  DAT_14c9e8700 = &DAT_14c9eb430;
  DAT_14c9e8755 = DAT_14c9e8755 + '\x01';
  _DAT_14c9eb450 = 0x100000000;
  if (*(char *)(_DAT_14c9eb438 + 100) != '\0') {
    DAT_14c9e8756 = DAT_14c9e8756 + '\x01';
  }
  return;
}



// FUNCTION 14602c872 FUN_14602c872 body=287 status=ok
// SIG undefined FUN_14602c872(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14602c872(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e8a50) {
    FUN_144b3d300(&DAT_14c9e8a50);
    if (DAT_14c9e8a50 == -1) {
      FUN_14602c992();
      FUN_140db5666(&DAT_14c9e89a8,2,&DAT_14c9e8940,L"TLightMapDensityPSFDummyLightMapPolicy",
                    L"/Engine/Private/LightMapDensityShader.usf",L"MainPixelShader",3,1,
                    FUN_1471d12c2,FUN_1471d129a,FUN_141765ee2,&LAB_1471d1296,&LAB_14712ac0c,
                    &LAB_14712ac08,0x120,0);
      _DAT_14c9e89a8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142ce7044);
      _Init_thread_footer(&DAT_14c9e8a50);
    }
  }
  return &DAT_14c9e89a8;
}



// FUNCTION 14602c992 FUN_14602c992 body=210 status=ok
// SIG undefined FUN_14602c992(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602c992(void)

{
  if ((DAT_14c9e89a7 & 2) == 0) {
    DAT_14c9e89a7 = DAT_14c9e89a7 | 2;
    _DAT_14c9e8948 = L"TLightMapDensityPSFDummyLightMapPolicy";
    _DAT_14c9e8960 = FUN_146826540;
    _DAT_14c9e8968 = FUN_146825d77;
    _DAT_14c9e8970 = FUN_146825fd6;
    _DAT_14c9e8978 = FUN_1407e02ea;
    _DAT_14c9e8980 = FUN_146826273;
    _DAT_14c9e8958 = FUN_1471d125c;
    _DAT_14c9e8998 = 0xffffffff00000120;
    _DAT_14c9e89a0 = 8;
    DAT_14c9e89a4 = 0;
    _DAT_14c9e8988 = &LAB_1471d1292;
    FUN_14602ca64();
    FUN_14602cbb6();
    FUN_1407e00cc(&DAT_14c9e8940);
    return;
  }
  return;
}



// FUNCTION 14602ca64 FUN_14602ca64 body=121 status=ok
// SIG undefined FUN_14602ca64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602ca64(void)

{
  FUN_14602cade();
  _DAT_14c9eb4c0 = L"BuiltLightingAndSelectedFlags";
  DAT_14c9eb4ea = FUN_140850cc5();
  _DAT_14c9eb4c8 = FUN_140ec6960();
  _DAT_14c9eb4d8 = &LAB_14682652b;
  _DAT_14c9eb4e0 = 0x10000010e;
  _DAT_14c9eb4e8 = 0;
  _DAT_14c9eb4d0 = DAT_14c9e8950;
  DAT_14c9e8950 = &DAT_14c9eb4c0;
  return;
}



// FUNCTION 14602cade FUN_14602cade body=216 status=ok
// SIG undefined FUN_14602cade(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602cade(void)

{
  _DAT_14c9eb520 = L"LightMapDensityDisplayOptions";
  DAT_14c9eb54a = FUN_140850cc5();
  _DAT_14c9eb528 = FUN_140ec6960();
  _DAT_14c9eb538 = &LAB_14682652b;
  _DAT_14c9eb540 = 0x10000011a;
  _DAT_14c9eb548 = 0;
  _DAT_14c9eb530 = DAT_14c9e8950;
  DAT_14c9e8950 = &DAT_14c9eb520;
  _DAT_14c9eb4f0 = L"LightMapResolutionScale";
  DAT_14c9eb51a = FUN_140850cc5();
  _DAT_14c9eb4f8 = FUN_140ec6960();
  _DAT_14c9eb508 = &LAB_14682652b;
  _DAT_14c9eb510 = 0x100000114;
  _DAT_14c9eb518 = 0;
  _DAT_14c9eb500 = DAT_14c9e8950;
  DAT_14c9e8950 = &DAT_14c9eb4f0;
  return;
}



// FUNCTION 14602cbb6 FUN_14602cbb6 body=235 status=ok
// SIG undefined FUN_14602cbb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602cbb6(void)

{
  _DAT_14c9eb550 = L"BASE";
  DAT_14c9eb57a = 4;
  FUN_1411cad6c();
  _DAT_14c9eb560 = DAT_14c9e8950;
  _DAT_14c9eb558 = &DAT_14c9e8fa8;
  _DAT_14c9eb568 = &LAB_14682652b;
  DAT_14c9e8950 = &DAT_14c9eb550;
  DAT_14c9e89a5 = DAT_14c9e89a5 + '\x01';
  _DAT_14c9eb570 = &DAT_100000108;
  if (DAT_14c9e900c != '\0') {
    DAT_14c9e89a6 = DAT_14c9e89a6 + '\x01';
  }
  _DAT_14c9eb580 = L"BASE";
  DAT_14c9eb5aa = 4;
  _DAT_14c9eb588 = FUN_141092e92();
  _DAT_14c9eb590 = DAT_14c9e8950;
  _DAT_14c9eb598 = &LAB_14682652b;
  DAT_14c9e8950 = &DAT_14c9eb580;
  DAT_14c9e89a5 = DAT_14c9e89a5 + '\x01';
  _DAT_14c9eb5a0 = 0x100000000;
  if (*(char *)(_DAT_14c9eb588 + 100) != '\0') {
    DAT_14c9e89a6 = DAT_14c9e89a6 + '\x01';
  }
  return;
}



// FUNCTION 14602cca2 FUN_14602cca2 body=287 status=ok
// SIG undefined FUN_14602cca2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14602cca2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e8ca0) {
    FUN_144b3d300(&DAT_14c9e8ca0);
    if (DAT_14c9e8ca0 == -1) {
      FUN_14602cdc2();
      FUN_140db5666(&DAT_14c9e8bf8,2,&DAT_14c9e8b90,L"TLightMapDensityPSTLightMapPolicyLQ",
                    L"/Engine/Private/LightMapDensityShader.usf",L"MainPixelShader",3,1,
                    FUN_1471d1440,FUN_1471d1418,FUN_141765f94,&LAB_1471d1414,&LAB_14712ac0c,
                    &LAB_14712ac08,0x120,0);
      _DAT_14c9e8bf8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142ce705c);
      _Init_thread_footer(&DAT_14c9e8ca0);
    }
  }
  return &DAT_14c9e8bf8;
}



// FUNCTION 14602cdc2 FUN_14602cdc2 body=210 status=ok
// SIG undefined FUN_14602cdc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602cdc2(void)

{
  if ((DAT_14c9e8bf7 & 2) == 0) {
    DAT_14c9e8bf7 = DAT_14c9e8bf7 | 2;
    _DAT_14c9e8b98 = L"TLightMapDensityPSTLightMapPolicyLQ";
    _DAT_14c9e8bb0 = FUN_146826540;
    _DAT_14c9e8bb8 = FUN_146825d77;
    _DAT_14c9e8bc0 = FUN_146825fd6;
    _DAT_14c9e8bc8 = FUN_1407e02ea;
    _DAT_14c9e8bd0 = FUN_146826273;
    _DAT_14c9e8ba8 = FUN_1471d13da;
    _DAT_14c9e8be8 = 0xffffffff00000120;
    _DAT_14c9e8bf0 = 8;
    DAT_14c9e8bf4 = 0;
    _DAT_14c9e8bd8 = &LAB_1471d1410;
    FUN_14602ce94();
    FUN_14602cfe6();
    FUN_1407e00cc(&DAT_14c9e8b90);
    return;
  }
  return;
}



// FUNCTION 14602ce94 FUN_14602ce94 body=121 status=ok
// SIG undefined FUN_14602ce94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602ce94(void)

{
  FUN_14602cf0e();
  _DAT_14c9eb610 = L"BuiltLightingAndSelectedFlags";
  DAT_14c9eb63a = FUN_140850cc5();
  _DAT_14c9eb618 = FUN_140ec6960();
  _DAT_14c9eb628 = &LAB_14682652b;
  _DAT_14c9eb630 = 0x10000010e;
  _DAT_14c9eb638 = 0;
  _DAT_14c9eb620 = DAT_14c9e8ba0;
  DAT_14c9e8ba0 = &DAT_14c9eb610;
  return;
}



// FUNCTION 14602cf0e FUN_14602cf0e body=216 status=ok
// SIG undefined FUN_14602cf0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602cf0e(void)

{
  _DAT_14c9eb670 = L"LightMapDensityDisplayOptions";
  DAT_14c9eb69a = FUN_140850cc5();
  _DAT_14c9eb678 = FUN_140ec6960();
  _DAT_14c9eb688 = &LAB_14682652b;
  _DAT_14c9eb690 = 0x10000011a;
  _DAT_14c9eb698 = 0;
  _DAT_14c9eb680 = DAT_14c9e8ba0;
  DAT_14c9e8ba0 = &DAT_14c9eb670;
  _DAT_14c9eb640 = L"LightMapResolutionScale";
  DAT_14c9eb66a = FUN_140850cc5();
  _DAT_14c9eb648 = FUN_140ec6960();
  _DAT_14c9eb658 = &LAB_14682652b;
  _DAT_14c9eb660 = 0x100000114;
  _DAT_14c9eb668 = 0;
  _DAT_14c9eb650 = DAT_14c9e8ba0;
  DAT_14c9e8ba0 = &DAT_14c9eb640;
  return;
}



// FUNCTION 14602cfe6 FUN_14602cfe6 body=235 status=ok
// SIG undefined FUN_14602cfe6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602cfe6(void)

{
  _DAT_14c9eb6a0 = L"BASE";
  DAT_14c9eb6ca = 4;
  FUN_1411cad6c();
  _DAT_14c9eb6b0 = DAT_14c9e8ba0;
  _DAT_14c9eb6a8 = &DAT_14c9e8fa8;
  _DAT_14c9eb6b8 = &LAB_14682652b;
  DAT_14c9e8ba0 = &DAT_14c9eb6a0;
  DAT_14c9e8bf5 = DAT_14c9e8bf5 + '\x01';
  _DAT_14c9eb6c0 = &DAT_100000108;
  if (DAT_14c9e900c != '\0') {
    DAT_14c9e8bf6 = DAT_14c9e8bf6 + '\x01';
  }
  _DAT_14c9eb6d0 = L"BASE";
  DAT_14c9eb6fa = 4;
  _DAT_14c9eb6d8 = FUN_141092e92();
  _DAT_14c9eb6e0 = DAT_14c9e8ba0;
  _DAT_14c9eb6e8 = &LAB_14682652b;
  DAT_14c9e8ba0 = &DAT_14c9eb6d0;
  DAT_14c9e8bf5 = DAT_14c9e8bf5 + '\x01';
  _DAT_14c9eb6f0 = 0x100000000;
  if (*(char *)(_DAT_14c9eb6d8 + 100) != '\0') {
    DAT_14c9e8bf6 = DAT_14c9e8bf6 + '\x01';
  }
  return;
}



// FUNCTION 14602d0d2 FUN_14602d0d2 body=287 status=ok
// SIG undefined FUN_14602d0d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14602d0d2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e8ef0) {
    FUN_144b3d300(&DAT_14c9e8ef0);
    if (DAT_14c9e8ef0 == -1) {
      FUN_14602d1f2();
      FUN_140db5666(&DAT_14c9e8e48,2,&DAT_14c9e8de0,L"TLightMapDensityPSTLightMapPolicyHQ",
                    L"/Engine/Private/LightMapDensityShader.usf",L"MainPixelShader",3,1,
                    FUN_1471d15be,FUN_1471d1596,FUN_141766048,&LAB_1471d1592,&LAB_14712ac0c,
                    &LAB_14712ac08,0x120,0);
      _DAT_14c9e8e48 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142ce7074);
      _Init_thread_footer(&DAT_14c9e8ef0);
    }
  }
  return &DAT_14c9e8e48;
}



// FUNCTION 14602d1f2 FUN_14602d1f2 body=210 status=ok
// SIG undefined FUN_14602d1f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602d1f2(void)

{
  if ((DAT_14c9e8e47 & 2) == 0) {
    DAT_14c9e8e47 = DAT_14c9e8e47 | 2;
    _DAT_14c9e8de8 = L"TLightMapDensityPSTLightMapPolicyHQ";
    _DAT_14c9e8e00 = FUN_146826540;
    _DAT_14c9e8e08 = FUN_146825d77;
    _DAT_14c9e8e10 = FUN_146825fd6;
    _DAT_14c9e8e18 = FUN_1407e02ea;
    _DAT_14c9e8e20 = FUN_146826273;
    _DAT_14c9e8df8 = FUN_1471d1558;
    _DAT_14c9e8e38 = 0xffffffff00000120;
    _DAT_14c9e8e40 = 8;
    DAT_14c9e8e44 = 0;
    _DAT_14c9e8e28 = &LAB_1471d158e;
    FUN_14602d2c4();
    FUN_14602d416();
    FUN_1407e00cc(&DAT_14c9e8de0);
    return;
  }
  return;
}



// FUNCTION 14602d2c4 FUN_14602d2c4 body=121 status=ok
// SIG undefined FUN_14602d2c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602d2c4(void)

{
  FUN_14602d33e();
  _DAT_14c9eb760 = L"BuiltLightingAndSelectedFlags";
  DAT_14c9eb78a = FUN_140850cc5();
  _DAT_14c9eb768 = FUN_140ec6960();
  _DAT_14c9eb778 = &LAB_14682652b;
  _DAT_14c9eb780 = 0x10000010e;
  _DAT_14c9eb788 = 0;
  _DAT_14c9eb770 = DAT_14c9e8df0;
  DAT_14c9e8df0 = &DAT_14c9eb760;
  return;
}



// FUNCTION 14602d33e FUN_14602d33e body=216 status=ok
// SIG undefined FUN_14602d33e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602d33e(void)

{
  _DAT_14c9eb7c0 = L"LightMapDensityDisplayOptions";
  DAT_14c9eb7ea = FUN_140850cc5();
  _DAT_14c9eb7c8 = FUN_140ec6960();
  _DAT_14c9eb7d8 = &LAB_14682652b;
  _DAT_14c9eb7e0 = 0x10000011a;
  _DAT_14c9eb7e8 = 0;
  _DAT_14c9eb7d0 = DAT_14c9e8df0;
  DAT_14c9e8df0 = &DAT_14c9eb7c0;
  _DAT_14c9eb790 = L"LightMapResolutionScale";
  DAT_14c9eb7ba = FUN_140850cc5();
  _DAT_14c9eb798 = FUN_140ec6960();
  _DAT_14c9eb7a8 = &LAB_14682652b;
  _DAT_14c9eb7b0 = 0x100000114;
  _DAT_14c9eb7b8 = 0;
  _DAT_14c9eb7a0 = DAT_14c9e8df0;
  DAT_14c9e8df0 = &DAT_14c9eb790;
  return;
}



// FUNCTION 14602d416 FUN_14602d416 body=235 status=ok
// SIG undefined FUN_14602d416(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14602d416(void)

{
  _DAT_14c9eb7f0 = L"BASE";
  DAT_14c9eb81a = 4;
  FUN_1411cad6c();
  _DAT_14c9eb800 = DAT_14c9e8df0;
  _DAT_14c9eb7f8 = &DAT_14c9e8fa8;
  _DAT_14c9eb808 = &LAB_14682652b;
  DAT_14c9e8df0 = &DAT_14c9eb7f0;
  DAT_14c9e8e45 = DAT_14c9e8e45 + '\x01';
  _DAT_14c9eb810 = &DAT_100000108;
  if (DAT_14c9e900c != '\0') {
    DAT_14c9e8e46 = DAT_14c9e8e46 + '\x01';
  }
  _DAT_14c9eb820 = L"BASE";
  DAT_14c9eb84a = 4;
  _DAT_14c9eb828 = FUN_141092e92();
  _DAT_14c9eb830 = DAT_14c9e8df0;
  _DAT_14c9eb838 = &LAB_14682652b;
  DAT_14c9e8df0 = &DAT_14c9eb820;
  DAT_14c9e8e45 = DAT_14c9e8e45 + '\x01';
  _DAT_14c9eb840 = 0x100000000;
  if (*(char *)(_DAT_14c9eb828 + 100) != '\0') {
    DAT_14c9e8e46 = DAT_14c9e8e46 + '\x01';
  }
  return;
}



// FUNCTION 14602d502 FUN_14602d502 body=393 status=ok
// SIG undefined FUN_14602d502(void)

void FUN_14602d502(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141245f18();
  param_1 = param_1 + 0x20;
  FUN_1412465d2(param_1,param_2);
  FUN_144a84a0c(&local_38,param_2);
  if (local_30 != (longlong *)0x0) {
    iVar6 = (int)local_30[1];
    do {
      if (iVar6 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_30[1];
      bVar8 = iVar6 == iVar4;
      if (bVar8) {
        *(int *)(local_30 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
      plVar7 = local_30;
    } while (!bVar8);
    LOCK();
    piVar2 = (int *)((longlong)local_30 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    lVar3 = local_38;
    if (plVar7 != (longlong *)0x0) {
      if ((local_38 != 0) && (cVar5 = FUN_1415c2500(), cVar5 != '\0')) {
        FUN_14082bc44(lVar3 + 0x1d0,param_2,param_1);
      }
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  }
  FUN_141246736(&local_38,param_2);
  if (local_30 != (longlong *)0x0) {
    iVar6 = (int)local_30[1];
    do {
      if (iVar6 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_30[1];
      bVar8 = iVar6 == iVar4;
      if (bVar8) {
        *(int *)(local_30 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
      plVar7 = local_30;
    } while (!bVar8);
    LOCK();
    piVar2 = (int *)((longlong)local_30 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_38 != 0) {
        FUN_14082bc44(local_38 + 0x20,param_2,param_1);
      }
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14602d68c FUN_14602d68c body=26 status=ok
// SIG undefined FUN_14602d68c(void)

void FUN_14602d68c(undefined8 param_1)

{
  FUN_1408453d0();
  FUN_14602d6a6(param_1);
  return;
}



// FUNCTION 14602d6a6 FUN_14602d6a6 body=740 status=ok
// SIG undefined FUN_14602d6a6(void)

void FUN_14602d6a6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_d8 [40];
  undefined1 *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_80;
  longlong *plStack_78;
  undefined1 local_70 [40];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar6 = FUN_14038f67a();
  if ((cVar6 != '\0') &&
     ((*(longlong *)(param_1 + 0xb0) != 0 || (lVar8 = FUN_1448abda6(param_1), lVar8 != 0)))) {
    FUN_145952c00(param_1);
    lVar8 = *(longlong *)(param_1 + 0xb0);
    if (lVar8 == 0) {
      lVar8 = FUN_1448abda6(param_1);
    }
    lVar8 = FUN_1402ad1e0(lVar8);
    if ((((lVar8 != 0) && (*(longlong *)(param_1 + 0x300) != 0)) &&
        ((*(uint *)(*(longlong *)(param_1 + 0x300) + 8) >> 0x1e & 1) == 0)) &&
       ((*(longlong *)(param_1 + 0x308) != 0 &&
        ((*(uint *)(*(longlong *)(param_1 + 0x308) + 8) >> 0x1e & 1) == 0)))) {
      local_b0 = (undefined1 *)0x0;
      FUN_14485c47a(&local_b0,param_1);
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar5 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_149e020b0;
      uVar9 = FUN_144a3f946();
      puVar5[2] = uVar9;
      *puVar5 = &PTR_FUN_14afab220;
      puVar5[3] = 0;
      FUN_14485c47a(puVar5 + 3,param_1);
      puVar5[4] = local_b0;
      lVar10 = FUN_14038f6f2();
      lVar11 = *(longlong *)(lVar10 + 0x110);
      if (lVar11 == 0) {
        FUN_140aa6c08(lVar10);
        lVar11 = *(longlong *)(lVar10 + 0x110);
      }
      if (lVar11 != 0 && DAT_14c950c29 == 1) {
        FUN_14689c22e(lVar11);
      }
      bVar3 = DAT_14c950c29;
      FUN_14602d98c(param_1 + 0x2a8,local_70,*(undefined4 *)(lVar11 + 0x2c));
      local_a8 = param_1 + 0x2d0;
      local_98 = *(undefined4 *)(param_1 + 0x2e8);
      local_a0 = *(undefined8 *)(param_1 + 0x2e0);
      lVar11 = *(longlong *)(param_1 + 0x300);
      local_b0 = local_70;
      if ((lVar11 != 0 & bVar3) == 1) {
        FUN_14689c22e(lVar11);
      }
      local_94 = 0;
      FUN_14485c47a(&local_94,lVar11);
      lVar11 = *(longlong *)(param_1 + 0x308);
      if ((lVar11 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar11);
      }
      local_8c = 0;
      FUN_14485c47a(&local_8c,lVar11);
      local_80 = 0;
      plStack_78 = (longlong *)0x0;
      uVar7 = FUN_14602db54(lVar8,&local_b0,&local_48);
      plVar4 = plStack_78;
      *(undefined4 *)(param_1 + 0x338) = uVar7;
      if (plStack_78 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_78 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_78)(plStack_78);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      FUN_1449db362(&local_48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14602d98c FUN_14602d98c body=166 status=ok
// SIG undefined FUN_14602d98c(void)

int * FUN_14602d98c(int *param_1,int *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  int iVar5;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  *param_2 = (int)((float)iVar1 * param_3);
  param_2[1] = (int)((float)iVar2 * param_3);
  param_2[2] = (int)((float)iVar3 * param_3);
  iVar2 = param_1[5];
  iVar3 = param_1[6];
  iVar5 = param_1[7];
  param_2[4] = param_1[4];
  param_2[5] = iVar2;
  param_2[6] = iVar3;
  param_2[7] = iVar5;
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
  FUN_14602da32(param_2);
  dVar4 = (double)((float)*param_2 / (float)iVar1);
  *(double *)(param_2 + 4) = *(double *)(param_2 + 4) * dVar4;
  *(double *)(param_2 + 6) = *(double *)(param_2 + 6) * dVar4;
  *(double *)(param_2 + 8) = dVar4 * *(double *)(param_2 + 8);
  return param_2;
}



// FUNCTION 14602da32 FUN_14602da32 body=167 status=ok
// SIG undefined FUN_14602da32(void)

void FUN_14602da32(uint *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  
  cVar4 = FUN_14602dada();
  if (cVar4 == '\0') {
    uVar5 = *param_1;
    if (0x7f < uVar5) {
      uVar5 = 0x80;
    }
    if (uVar5 < 0x21) {
      uVar5 = 0x20;
    }
    uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar5 = 0x80;
    if (param_1[1] < 0x80) {
      uVar5 = param_1[1];
    }
    if (uVar5 < 0x21) {
      uVar5 = 0x20;
    }
    uVar1 = (ulonglong)(uVar5 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    *param_1 = 1 << ((byte)lVar2 & 0x1f);
    param_1[1] = 1 << ((byte)lVar3 & 0x1f);
    uVar5 = 0x40;
    if (param_1[2] < 0x40) {
      uVar5 = param_1[2];
    }
    uVar6 = 0x10;
    if (0x10 < uVar5) {
      uVar6 = uVar5;
    }
    uVar1 = (ulonglong)(uVar6 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    param_1[2] = 1 << ((byte)lVar2 & 0x1f);
  }
  return;
}



// FUNCTION 14602dada FUN_14602dada body=121 status=ok
// SIG undefined FUN_14602dada(void)

undefined4 FUN_14602dada(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar2 = 0x80;
  if (uVar1 < 0x80) {
    uVar2 = uVar1;
  }
  uVar4 = 0x20;
  if (0x20 < uVar2) {
    uVar4 = uVar2;
  }
  uVar3 = 0;
  if ((uVar4 == uVar1) && ((uint)POPCOUNT(uVar1) < 2)) {
    uVar1 = param_1[1];
    uVar2 = 0x80;
    if (uVar1 < 0x80) {
      uVar2 = uVar1;
    }
    uVar4 = 0x20;
    if (0x20 < uVar2) {
      uVar4 = uVar2;
    }
    uVar3 = 0;
    if ((uVar4 == uVar1) && ((uint)POPCOUNT(uVar1) < 2)) {
      uVar1 = param_1[2];
      uVar2 = 0x40;
      if (uVar1 < 0x40) {
        uVar2 = uVar1;
      }
      uVar4 = 0x10;
      if (0x10 < uVar2) {
        uVar4 = uVar2;
      }
      uVar3 = CONCAT31((int3)(uVar1 >> 8),(uVar1 - 1 & uVar1) == 0 && uVar4 == uVar1);
    }
  }
  return uVar3;
}



// FUNCTION 14602db54 FUN_14602db54 body=293 status=ok
// SIG undefined FUN_14602db54(void)

void FUN_14602db54(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = FUN_144a126be();
  FUN_14602dc7a(&local_40);
  plVar1 = local_38;
  if (local_38 == (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x30) = local_40;
    plVar4 = *(longlong **)(param_2 + 0x38);
    if (plVar4 == (longlong *)0x0) goto LAB_14602dbb8;
    *(undefined8 *)(param_2 + 0x38) = 0;
LAB_14602dc16:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_14602dbb8;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_2 + 0x30) = local_40;
    plVar4 = *(longlong **)(param_2 + 0x38);
    if (local_38 != plVar4) {
      *(longlong **)(param_2 + 0x38) = local_38;
      if (plVar4 == (longlong *)0x0) goto LAB_14602dbb8;
      goto LAB_14602dc16;
    }
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14602dbb8;
    (**(code **)*local_38)(local_38);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_14602dbb8:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_1415c2508(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 14602dc7a FUN_14602dc7a body=630 status=ok
// SIG undefined FUN_14602dc7a(void)

undefined8 * FUN_14602dc7a(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  FUN_1458f8842(puVar3,&local_30,*param_2);
  *puVar3 = &PTR_FUN_14afa9ef0;
  uVar2 = DAT_14c8464e8;
  puVar3[6] = DAT_14c8464e0;
  puVar3[7] = uVar2;
  puVar3[8] = DAT_14c8464f0;
  puVar3[9] = 0x4059000000000000;
  puVar3[10] = 0x4059000000000000;
  puVar3[0xb] = 0x4059000000000000;
  puVar3[0xc] = 0x2000000020;
  *(undefined4 *)(puVar3 + 0xd) = 0x20;
  puVar3[0xe] = 0x4009000000000000;
  puVar3[0xf] = 0x4009000000000000;
  puVar3[0x10] = 0x4009000000000000;
  puVar3[0x11] = DAT_14c846330;
  *(undefined4 *)(puVar3 + 0x12) = DAT_14c846338;
  *(undefined8 *)((longlong)puVar3 + 0x94) = 0x44c800003f800000;
  *(undefined4 *)((longlong)puVar3 + 0x9c) = 0x3f800000;
  *(undefined4 *)((longlong)puVar3 + 0xac) = 0x3d08850a;
  *(undefined4 *)(puVar3 + 0x17) = DAT_14c846338;
  puVar3[0x16] = DAT_14c846330;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  *param_1 = puVar3;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14afab2b0;
  plVar4[2] = (longlong)puVar3;
  param_1[1] = plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    local_30 = 0;
    goto LAB_14602de0e;
  }
  if (((puVar3[1] == 0) || (puVar3[2] == 0)) || (*(int *)(puVar3[2] + 8) < 1)) {
    if (plVar4 == (longlong *)0x0) {
      puVar3[1] = puVar3;
      plVar5 = (longlong *)puVar3[2];
      if (plVar5 != (longlong *)0x0) {
LAB_14602de94:
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
        puVar3[2] = plVar4;
        if (plVar4 != (longlong *)0x0) goto LAB_14602ddfd;
      }
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      puVar3[1] = puVar3;
      if ((longlong *)puVar3[2] != plVar4) {
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)puVar3[2];
        if (plVar5 != (longlong *)0x0) goto LAB_14602de94;
        puVar3[2] = plVar4;
      }
LAB_14602ddfd:
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
  }
  local_30 = *param_1;
  plVar4 = (longlong *)param_1[1];
LAB_14602de0e:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_28 = plVar4;
  FUN_141332b2e(&local_30);
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_28 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14602defc FUN_14602defc body=246 status=ok
// SIG undefined FUN_14602defc(void)

undefined8 * FUN_14602defc(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6742f0;
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
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeac50) {
    FUN_144b3d300(&DAT_14caeac50);
    if (DAT_14caeac50 == -1) {
      FUN_1415c25ca();
      atexit(FUN_14356d700);
      _Init_thread_footer(&DAT_14caeac50);
    }
  }
  param_1[0x25] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((longlong)param_1 + 0x134) = 0;
  return param_1;
}



// FUNCTION 14602dff2 FUN_14602dff2 body=53 status=ok
// SIG undefined FUN_14602dff2(void)

void FUN_14602dff2(longlong *param_1)

{
  FUN_1415c26e0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14602e028 FUN_14602e028 body=623 status=ok
// SIG undefined FUN_14602e028(void)

int * FUN_14602e028(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*param_1 == -1) || (param_1[1] == -1)) ||
     (cVar7 = FUN_14602e2dc(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_14602e1f5;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4d88c0;
  plVar8[2] = (longlong)&PTR_FUN_14a4d88d8;
  plVar8[3] = *param_7;
  *(undefined4 *)(plVar8 + 6) = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(plVar8 + 4) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uVar4;
  *(undefined4 *)(plVar8 + 5) = uVar5;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = uVar6;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_14602e298(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_145ea4530;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar8 + 2;
  local_c8 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_14602e1c8;
    }
  }
  else {
LAB_14602e1c8:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_14602e1f5:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14602e298 FUN_14602e298 body=67 status=ok
// SIG undefined FUN_14602e298(void)

void FUN_14602e298(undefined2 *param_1,undefined8 param_2)

{
  FUN_140dba9e6(param_2,*param_1);
  FUN_140dba9e6(param_2,param_1[1]);
  if (param_1[2] != -1) {
    FUN_140dba9e6(param_2);
    return;
  }
  return;
}



// FUNCTION 14602e2dc FUN_14602e2dc body=112 status=ok
// SIG undefined FUN_14602e2dc(void)

undefined8 FUN_14602e2dc(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 14602e34c FUN_14602e34c body=258 status=ok
// SIG undefined FUN_14602e34c(void)

void FUN_14602e34c(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [36];
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar2 & 1) != 0) {
    uVar1 = *param_2;
    uVar3 = FUN_140732858();
    if (0 < (int)uVar1) {
      param_6 = param_6 + 8;
      uVar4 = 0;
      do {
        local_68 = *(longlong *)(param_5 + uVar4 * 8);
        if (local_68 != 0) {
          FUN_14602e450(param_1 + -0xd8,&local_74,&local_68,param_6);
          local_54 = *(undefined4 *)(param_4 + uVar4 * 4);
          local_4a = *(undefined2 *)(param_3 + uVar4 * 2);
          local_58 = local_6c;
          local_60 = local_74;
          local_50 = (byte)uVar2;
          FUN_1449da5a2(uVar3,&local_4a,&local_60);
        }
        uVar4 = uVar4 + 1;
        param_6 = param_6 + 0x14;
      } while (uVar1 != uVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14602e450 FUN_14602e450 body=193 status=ok
// SIG undefined FUN_14602e450(void)

longlong FUN_14602e450(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38);
    local_48 = local_38;
    lVar1 = *param_3;
  }
  local_40 = *param_4;
  FUN_14027461a(param_1 + 200,param_2,lVar1);
  FUN_14602e512(param_1,&local_38,&local_48);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_38;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14602e512 FUN_14602e512 body=320 status=ok
// SIG undefined FUN_14602e512(void)

int * FUN_14602e512(longlong param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  int local_68 [2];
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x18);
  uVar4 = FUN_144a78877(*param_3,param_3[1]);
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  iVar5 = FUN_140bf3c50(plVar1,(uVar7 >> 4) +
                               (uint)uVar2 * 0x10000 + uVar7 + (int)((ulonglong)uVar2 >> 0x20) +
                               (uVar4 >> 2) + uVar4 * 0x40 + (uVar3 << 0x13 | uVar3 & 0xffff) +
                               0x9e3779b9 ^ uVar4,param_3);
  if (((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x1c + *plVar1, lVar6 == 0)) ||
     (iVar5 = *(int *)(lVar6 + 0x10), *param_2 = iVar5, iVar5 == -1)) {
    local_58._0_4_ = *param_3;
    local_58._4_4_ = param_3[1];
    uStack_50._0_4_ = param_3[2];
    uStack_50._4_4_ = param_3[3];
    FUN_14602e654(param_1 + 0x68,local_68);
    *local_60 = (undefined4)local_58;
    local_60[1] = local_58._4_4_;
    local_60[2] = (undefined4)uStack_50;
    local_60[3] = uStack_50._4_4_;
    *(undefined1 *)(local_60 + 10) = 0;
    *(undefined8 *)(local_60 + 6) = 0;
    *(undefined2 *)(local_60 + 0xc) = 0;
    *(undefined1 *)(local_60 + 0xe) = 0;
    *param_2 = local_68[0];
    local_58 = param_3;
    uStack_50 = param_2;
    FUN_140bf3cbe(plVar1,local_68,&local_58,0);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14602e654 FUN_14602e654 body=230 status=ok
// SIG undefined FUN_14602e654(void)

int * FUN_14602e654(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 14602e73a FUN_14602e73a body=160 status=ok
// SIG undefined FUN_14602e73a(void)

undefined1 FUN_14602e73a(void)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  puVar1 = DAT_14c844ed8;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c948b04) {
    FUN_144b3d300(&DAT_14c948b04);
    if (DAT_14c948b04 == -1) {
      local_20 = 0;
      local_18 = 0x5000000;
      DAT_14c948b00 = FUN_1402df388(*puVar1);
      _Init_thread_footer(&DAT_14c948b04);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return DAT_14c948b00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14602e7dc FUN_14602e7dc body=65 status=ok
// SIG undefined FUN_14602e7dc(void)

void FUN_14602e7dc(longlong param_1)

{
  void *_Dst;
  
  _Dst = *(void **)(param_1 + 0x20);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)FUN_14001cc68(0x260);
    *(void **)(param_1 + 0x20) = _Dst;
  }
  memset(_Dst,0,0x260);
  FUN_14602e81e(param_1);
  return;
}



// FUNCTION 14602e81e FUN_14602e81e body=224 status=ok
// SIG undefined FUN_14602e81e(void)

void FUN_14602e81e(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 != 0) {
    *plVar1 = 0;
    LOCK();
    puVar2 = (uint *)(lVar4 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1415c292e(&local_20,*(longlong *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10),1);
    if (plVar1 != &local_20) {
      lVar4 = *plVar1;
      *plVar1 = local_20;
      local_20 = 0;
      if (lVar4 == 0) goto LAB_14602e881;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_20 != 0) {
      LOCK();
      puVar2 = (uint *)(local_20 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
LAB_14602e881:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14602e900 FUN_14602e900 body=144 status=ok
// SIG undefined FUN_14602e900(void)

code * FUN_14602e900(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a9258d(0);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SubstratePublic";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSubstratePublicGlobalUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x6b0000000d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146463990;
}



// FUNCTION 14602e990 FUN_14602e990 body=232 status=ok
// SIG undefined FUN_14602e990(void)

longlong * FUN_14602e990(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_146305c2c;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14602ea88 FUN_14602ea88 body=257 status=ok
// SIG undefined FUN_14602ea88(void)

undefined8 * FUN_14602ea88(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14ad61ff0;
  param_1[7] = &PTR_LAB_14ad62430;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x47) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4b) = 1;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0x1000000000000;
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_14043112a(param_1 + 0x19);
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14ad7f5c0;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
  puVar2[10] = 0;
  *(undefined4 *)(puVar2 + 0xb) = 0;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 14602eb94 FUN_14602eb94 body=125 status=ok
// SIG undefined FUN_14602eb94(void)

void FUN_14602eb94(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b99d7b0;
  param_1[4] = &PTR_FUN_14b99d7f0;
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
  *param_1 = &PTR_FUN_14b99d800;
  param_1[4] = &PTR_LAB_14b99d840;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 14602ec1c FUN_14602ec1c body=125 status=ok
// SIG undefined FUN_14602ec1c(void)

void FUN_14602ec1c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b99e3c0;
  param_1[4] = &PTR_FUN_14b99e400;
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
  *param_1 = &PTR_FUN_14b99e410;
  param_1[4] = &PTR_LAB_14b99e450;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 14602eca2 FUN_14602eca2 body=259 status=ok
// SIG undefined FUN_14602eca2(void)

undefined8 * FUN_14602eca2(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141083082();
  *param_1 = &PTR_FUN_14bc6e3a0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_14020fad6(param_1 + 0x2a,L"ShouldCreateLevel");
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_14020fad6(param_1 + 0x2c,L"SceneImportAssetFactoryNodeUid");
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_14020fad6(param_1 + 0x2e,L"CreateWorldPartitionLevel");
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_14020fad6(param_1 + 0x30,L"ParentLevelReference");
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_140056680(local_40,L"ActorFactoryNodeUids");
  FUN_1410835a0(param_1 + 0x32,param_1 + 5,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14602eda6 FUN_14602eda6 body=59 status=ok
// SIG undefined FUN_14602eda6(void)

void FUN_14602eda6(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  uVar3 = FUN_14007ca06();
  FUN_145c2210c(puVar1,uVar3);
  *puVar1 = &PTR_FUN_14bcb7850;
  puVar1[7] = &PTR_FUN_14bcb7b40;
  uVar2 = FUN_14602ede1();
  *(undefined1 *)(puVar1 + 8) = uVar2;
  return;
}



// FUNCTION 14602ede1 FUN_14602ede1 body=208 status=ok
// SIG undefined FUN_14602ede1(void)

undefined8 FUN_14602ede1(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined1 local_11;
  ulonglong local_10;
  undefined7 uVar5;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_145a7b834();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(char *)(lVar2 + 0x38));
  if (*(char *)(lVar2 + 0x38) == '\0') {
    lVar1 = FUN_145a7b748();
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      FUN_140aa6c08(lVar1);
      lVar2 = *(longlong *)(lVar1 + 0x110);
    }
    uVar5 = (undefined7)((ulonglong)lVar2 >> 8);
    uVar3 = CONCAT71(uVar5,*(char *)(lVar2 + 0x43));
    if (*(char *)(lVar2 + 0x43) == '\0') {
      local_11 = 1;
      if (DAT_14c872ce0 == 0) {
        uVar3 = CONCAT71(uVar5,2);
      }
      else {
        local_28 = &DAT_14c872bc8;
        uVar3 = FUN_14052bb08(DAT_14c872ce0,L"TextureImporter",L"FillPNGZeroAlpha",&local_11);
        uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),local_11) & 0xffffffffffffff01;
        uVar3 = CONCAT71((int7)(uVar4 >> 8),(char)uVar4 + '\x01');
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14602eebe FUN_14602eebe body=256 status=ok
// SIG undefined FUN_14602eebe(void)

undefined8 * FUN_14602eebe(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14be7bd40;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"DynamicVegetationComponent0",1);
  uVar1 = FUN_14599ded6();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[0x72] = lVar2;
  *(undefined1 *)(lVar2 + 0x89c) = 1;
  (**(code **)(*(longlong *)param_1[0x72] + 0x728))((longlong *)param_1[0x72],DAT_14cad0f30,1);
  lVar2 = param_1[0x72];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_1[0x72];
    }
  }
  param_1[0x39] = lVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14602efc0 FUN_14602efc0 body=158 status=ok
// SIG undefined FUN_14602efc0(void)

bool FUN_14602efc0(longlong param_1,undefined8 param_2)

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



// FUNCTION 14602f07c FUN_14602f07c body=122 status=ok
// SIG undefined FUN_14602f07c(void)

void FUN_14602f07c(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a();
  iVar1 = *(int *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x80) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
    FUN_14586ef1e((longlong *)(param_1 + 0x78),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 8) = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14602f0f8 FUN_14602f0f8 body=120 status=ok
// SIG undefined FUN_14602f0f8(void)

void FUN_14602f0f8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_14485c47a(&local_38);
  local_30 = &local_38;
  FUN_14602f172(param_1 + 0xf);
  (**(code **)(*param_1 + 0x2e0))(param_1,*(undefined4 *)(param_2 + 0x394));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14602f172 FUN_14602f172 body=299 status=ok
// SIG undefined FUN_14602f172(void)

int FUN_14602f172(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  iVar7 = 0;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar5 = FUN_14007c310(lVar2,*param_2);
    iVar7 = 0;
    iVar10 = 0;
    do {
      lVar9 = (longlong)iVar10;
      iVar3 = iVar10 + 1;
      if (iVar10 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      lVar12 = lVar2 + 8 + lVar9 * 8;
      lVar8 = lVar9;
      iVar11 = iVar10;
      do {
        lVar8 = lVar8 + 1;
        iVar4 = iVar3;
        if (lVar13 <= lVar8) break;
        bVar6 = FUN_14007c310(lVar12,*param_2);
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 8;
        iVar4 = iVar11;
      } while ((bVar5 & 1) == bVar6);
      if ((bVar5 & 1) == 0) {
        if (iVar7 != iVar10) {
          memmove((void *)(lVar2 + (longlong)iVar7 * 8),(void *)(lVar2 + lVar9 * 8),
                  (longlong)(iVar4 - iVar10) << 3);
        }
        iVar7 = iVar7 + (iVar4 - iVar10);
      }
      iVar10 = iVar4;
      bVar5 = bVar5 ^ 1;
    } while (lVar8 < lVar13);
    *(int *)(param_1 + 1) = iVar7;
    iVar7 = iVar1 - iVar7;
  }
  return iVar7;
}



// FUNCTION 14602f29e FUN_14602f29e body=1470 status=ok
// SIG undefined FUN_14602f29e(void)

void FUN_14602f29e(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  PSRWLOCK local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar11 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar11 != 0) {
    lVar8 = param_1 + 0x58;
    lVar13 = *(longlong *)(param_1 + 0x58);
    lVar9 = 0;
    do {
      if (*(int *)(lVar13 + 0x10 + lVar9) == param_2) {
        lVar9 = (lVar9 >> 3) * -0xf0f0f0f0f0f0f0f;
        uVar10 = (uint)lVar9;
        if ((-1 < (int)uVar10) && ((int)uVar10 < iVar11)) {
          local_90 = lVar9;
          FUN_1402815f4(param_1,&local_58);
          plVar2 = *(longlong **)(local_58 + 0x1e0);
          local_98 = (PSRWLOCK)(plVar2 + 6);
          AcquireSRWLockExclusive(local_98);
          plVar6 = local_50;
          *(int *)(plVar2 + 5) = (int)plVar2[5] + 1;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_50 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          lVar13 = lVar13 + (ulonglong)(uVar10 & 0x7fffffff) * 0x88;
          uVar10 = *(uint *)(plVar2 + 1);
          if ((int)uVar10 < 1) goto LAB_14602f472;
          iVar11 = (int)plVar2[2] + 2;
          lVar9 = 0x18;
          uVar14 = 0;
          goto LAB_14602f3a1;
        }
        break;
      }
      lVar9 = lVar9 + 0x88;
    } while ((longlong)iVar11 * 0x88 != lVar9);
  }
  goto LAB_14602f5a5;
  while( true ) {
    uVar14 = uVar14 + 1;
    iVar11 = iVar11 + 1;
    lVar9 = lVar9 + 0xd8;
    if (uVar10 == uVar14) break;
LAB_14602f3a1:
    *(int *)(plVar2 + 2) = iVar11 + -1;
    if (*(int *)(*plVar2 + -0x18 + lVar9) == *(int *)(lVar13 + 0x10)) {
      if ((int)uVar14 < (int)uVar10) {
        *(int *)(plVar2 + 2) = iVar11;
        iVar11 = *(int *)(*plVar2 + lVar9);
        local_a0 = lVar8;
        if (iVar11 == 1) {
          FUN_1402815f4(param_1,&local_58);
          lVar8 = *(longlong *)(local_58 + 0x560);
LAB_14602f405:
          AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x168));
          *(int *)(lVar8 + 0x160) = *(int *)(lVar8 + 0x160) + 1;
          FUN_14602fb9e(lVar8);
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x168));
LAB_14602f431:
          plVar6 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_50 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*local_50)(local_50);
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
        else {
          if (iVar11 == 0) {
            FUN_1402815f4(param_1,&local_58);
            lVar8 = *(longlong *)(local_58 + 0x550);
            AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x168));
            *(int *)(lVar8 + 0x160) = *(int *)(lVar8 + 0x160) + 1;
            FUN_14602fb9e(lVar8);
            ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x168));
            goto LAB_14602f431;
          }
          if (iVar11 == 2) {
            FUN_1402815f4(param_1,&local_58);
            lVar8 = *(longlong *)(local_58 + 0x570);
            goto LAB_14602f405;
          }
        }
        lVar8 = local_a0;
        cVar3 = FUN_14117900c(lVar13 + 8);
        if (cVar3 == '\0') {
          lVar4 = FUN_14479d2ce(lVar13 + 8);
          plVar6 = (longlong *)(**(code **)(*(longlong *)(lVar4 + 0x3bc8) + 0x10))(lVar4 + 0x3bc8);
          if (plVar6 != (longlong *)0x0) {
            uVar5 = FUN_140eaf18a();
            plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
            if (plVar6 != (longlong *)0x0) {
              uVar5 = FUN_140eaf18a();
              plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
              if ((plVar7 != (longlong *)0x0 && plVar6 != plVar7) &&
                 (plVar6 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7),
                 plVar6 != (longlong *)0x0)) {
                *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
                iVar11 = *(int *)(*plVar2 + lVar9);
                if (iVar11 == 2) {
                  FUN_1402815f4(param_1,&local_58);
                  local_88 = *(undefined8 *)(local_58 + 0x570);
                  local_80 = *(longlong *)(local_58 + 0x578);
                  if (local_80 != 0) {
                    LOCK();
                    *(int *)(local_80 + 0xc) = *(int *)(local_80 + 0xc) + 1;
                    UNLOCK();
                  }
                  lVar8 = *plVar6;
                  puVar12 = &local_88;
                }
                else if (iVar11 == 1) {
                  FUN_1402815f4(param_1,&local_58);
                  local_78 = *(undefined8 *)(local_58 + 0x560);
                  local_70 = *(longlong *)(local_58 + 0x568);
                  if (local_70 != 0) {
                    LOCK();
                    *(int *)(local_70 + 0xc) = *(int *)(local_70 + 0xc) + 1;
                    UNLOCK();
                  }
                  lVar8 = *plVar6;
                  puVar12 = &local_78;
                }
                else {
                  lVar8 = local_a0;
                  if (iVar11 != 0) goto LAB_14602f459;
                  FUN_1402815f4(param_1,&local_58);
                  local_68 = *(undefined8 *)(local_58 + 0x550);
                  local_60 = *(longlong *)(local_58 + 0x558);
                  if (local_60 != 0) {
                    LOCK();
                    *(int *)(local_60 + 0xc) = *(int *)(local_60 + 0xc) + 1;
                    UNLOCK();
                  }
                  lVar8 = *plVar6;
                  puVar12 = &local_68;
                }
                (**(code **)(lVar8 + 0x18))(plVar6,puVar12);
                lVar8 = local_a0;
                if (local_50 != (longlong *)0x0) {
                  LOCK();
                  plVar6 = local_50 + 1;
                  *(int *)plVar6 = (int)*plVar6 + -1;
                  UNLOCK();
                  if ((int)*plVar6 == 0) {
                    (**(code **)*local_50)(local_50);
                    LOCK();
                    piVar1 = (int *)((longlong)local_50 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    lVar8 = local_a0;
                    if (*piVar1 == 0) {
                      (**(code **)(*local_50 + 0x10))(local_50);
                      lVar8 = local_a0;
                    }
                  }
                }
              }
            }
          }
        }
LAB_14602f459:
        FUN_14602faa4(lVar13);
        FUN_14602f89c(plVar2,uVar14 & 0xffffffff);
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
      }
      break;
    }
  }
LAB_14602f472:
  lVar9 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar9 != 0) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      uVar5 = FUN_1401b4c98(lVar9);
      lVar4 = FUN_144a61814(uVar5,(undefined8 *)(lVar13 + 0x80));
      if (lVar4 != 0) {
        FUN_1405a424c(uVar5,*(undefined8 *)(lVar13 + 0x80));
      }
      *(undefined8 *)(lVar13 + 0x80) = 0;
      uVar5 = FUN_1401b4c98(lVar9);
      puVar12 = (undefined8 *)(lVar13 + 0x68);
      lVar9 = FUN_144a61814(uVar5,puVar12);
      if (lVar9 != 0) {
        FUN_1405a424c(uVar5,*puVar12);
      }
      *puVar12 = 0;
    }
  }
  if (*(int *)(lVar13 + 0x78) != 0) {
    puVar12 = *(undefined8 **)(lVar13 + 0x70);
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)(puVar12,0);
      FUN_1446efa72((longlong *)(lVar13 + 0x70),0,0,0x10);
      *(undefined4 *)(lVar13 + 0x78) = 0;
    }
  }
  if (*(int *)(lVar13 + 0x60) != 0) {
    puVar12 = *(undefined8 **)(lVar13 + 0x58);
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)(puVar12,0);
      FUN_1446efa72((longlong *)(lVar13 + 0x58),0,0,0x10);
      *(undefined4 *)(lVar13 + 0x60) = 0;
    }
  }
  iVar11 = *(int *)(lVar13 + 0x18);
  if ((-1 < (longlong)iVar11) && (iVar11 < *(int *)(param_1 + 0x70))) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar11 * 4) = 0xffffffff;
  }
  FUN_14602f9b8(lVar8,local_90);
  FUN_14602f85e(lVar8);
  ReleaseSRWLockExclusive(local_98);
LAB_14602f5a5:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14602f85e FUN_14602f85e body=62 status=ok
// SIG undefined FUN_14602f85e(void)

void FUN_14602f85e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14602fa2c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x88,8);
  }
  return;
}



// FUNCTION 14602f89c FUN_14602f89c body=109 status=ok
// SIG undefined FUN_14602f89c(void)

void FUN_14602f89c(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[1])) {
    _Dst = (void *)((ulonglong)param_2 * 0xd8 + *param_1);
    FUN_1459bf4fd(_Dst,1);
    iVar1 = (int)param_1[1];
    iVar2 = iVar1 - (param_2 + 1);
    if (iVar2 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0xd8),(longlong)iVar2 * 0xd8);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 + -1;
    FUN_14602f90a(param_1);
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 14602f90a FUN_14602f90a body=62 status=ok
// SIG undefined FUN_14602f90a(void)

void FUN_14602f90a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14602f948(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xd8,8);
  }
  return;
}



// FUNCTION 14602f948 FUN_14602f948 body=111 status=ok
// SIG undefined FUN_14602f948(void)

ulonglong FUN_14602f948(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0xd8) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0xd8,8);
      uVar1 = uVar1 / 0xd8;
    }
  }
  return uVar1;
}



// FUNCTION 14602f9b8 FUN_14602f9b8 body=115 status=ok
// SIG undefined FUN_14602f9b8(void)

void FUN_14602f9b8(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  lVar2 = (ulonglong)param_2 * 0x88;
  FUN_1449db362(lVar1 + lVar2 + 0x70);
  FUN_1449db362(lVar1 + lVar2 + 0x58);
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    memmove((void *)(lVar1 + lVar2),(void *)(lVar1 + lVar2 + 0x88),
            (longlong)(int)(~param_2 + iVar3) * 0x88);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 14602fa2c FUN_14602fa2c body=119 status=ok
// SIG undefined FUN_14602fa2c(void)

ulonglong FUN_14602fa2c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x88) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x88,8);
      uVar1 = uVar1 / 0x88;
    }
  }
  return uVar1;
}



// FUNCTION 14602faa4 FUN_14602faa4 body=249 status=ok
// SIG undefined FUN_14602faa4(void)

void FUN_14602faa4(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 8;
  cVar1 = FUN_14117900c(lVar3);
  if (cVar1 == '\0') {
    lVar2 = FUN_14479d2ce(lVar3);
    if (lVar2 != -0x71a8) {
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_14480f766(lVar2 + 0x71b8);
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        FUN_14480f766(lVar2 + 0x71f8);
      }
      if (*(longlong *)(param_1 + 0x48) != 0) {
        FUN_14480f766(lVar2 + 0x7220);
      }
      if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_14480f766(lVar2 + 0x7248);
      }
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_14480f766(lVar2 + 0x7270);
      }
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_14480f766(lVar2 + 0x72c8);
      }
    }
    lVar3 = FUN_14479d2ce(lVar3);
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_14480f766(lVar3 + 0x3f80);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 14602fb9e FUN_14602fb9e body=541 status=ok
// SIG undefined FUN_14602fb9e(void)

void FUN_14602fb9e(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_140dcb5a6(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_148e2415a(param_1);
  }
  FUN_14602fdbc(param_1 + 2);
  FUN_14602fdbc(param_1 + 8);
  FUN_14602fdbc(param_1 + 0xe);
  FUN_14602fdbc(param_1 + 0x14);
  *(int *)(param_1 + 0x23) = *(int *)(param_1 + 0x23) + 1;
  FUN_14602fec6(param_1 + 0x1a);
  if (*(char *)((longlong)param_1 + 0x11c) == '\0') {
    iVar1 = 1;
    if (*(int *)(param_1 + 0x24) == 0) goto LAB_14602fc19;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24) + 1;
LAB_14602fc19:
    *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
    *(int *)(param_1 + 0x24) = iVar1;
  }
  if (*(char *)((longlong)param_1 + 0x124) == '\0') {
    if (*(int *)(param_1 + 0x25) == 0) {
      iVar1 = 1;
      goto LAB_14602fd5e;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x25) + 1;
LAB_14602fd5e:
    *(undefined1 *)((longlong)param_1 + 0x124) = 0;
    *(int *)(param_1 + 0x25) = iVar1;
  }
  if (*(char *)((longlong)param_1 + 300) == '\0') {
    if (*(int *)(param_1 + 0x26) == 0) {
      iVar1 = 1;
      goto LAB_14602fc56;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x26) + 1;
LAB_14602fc56:
    *(undefined1 *)((longlong)param_1 + 300) = 0;
    *(int *)(param_1 + 0x26) = iVar1;
  }
  if (*(char *)((longlong)param_1 + 0x134) == '\0') {
    iVar1 = 1;
    if (*(int *)(param_1 + 0x27) == 0) goto LAB_14602fc7f;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x27) + 1;
LAB_14602fc7f:
    *(undefined1 *)((longlong)param_1 + 0x134) = 0;
    *(int *)(param_1 + 0x27) = iVar1;
  }
  if (*(char *)((longlong)param_1 + 0x13c) == '\0') {
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar1 = 1;
      goto LAB_14602fd75;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28) + 1;
LAB_14602fd75:
    *(undefined1 *)((longlong)param_1 + 0x13c) = 0;
    *(int *)(param_1 + 0x28) = iVar1;
  }
  if (*(char *)((longlong)param_1 + 0x144) == '\0') {
    iVar1 = 1;
    if (*(int *)(param_1 + 0x29) == 0) goto LAB_14602fcc3;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x29) + 1;
LAB_14602fcc3:
    *(undefined1 *)((longlong)param_1 + 0x144) = 0;
    *(int *)(param_1 + 0x29) = iVar1;
  }
  if (*(int *)((longlong)param_1 + 0x14c) == 0) {
    if (*(int *)(param_1 + 0x2a) != 0) goto LAB_14602fce7;
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2a) + 1;
  }
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  *(int *)(param_1 + 0x2a) = iVar1;
LAB_14602fce7:
  if (*(int *)((longlong)param_1 + 0x154) == 0) {
    if (*(int *)(param_1 + 0x2b) != 0) {
      return;
    }
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2b) + 1;
  }
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(int *)(param_1 + 0x2b) = iVar1;
  return;
}



// FUNCTION 14602fdbc FUN_14602fdbc body=266 status=ok
// SIG undefined FUN_14602fdbc(void)

void FUN_14602fdbc(float *param_1)

{
  float fVar1;
  
  if ((*param_1 != 0.0) || (NAN(*param_1))) {
    fVar1 = (float)((int)param_1[1] + 1);
LAB_14602fdde:
    *param_1 = 0.0;
    param_1[1] = fVar1;
  }
  else {
    fVar1 = 1.4013e-45;
    if (param_1[1] == 0.0) goto LAB_14602fdde;
  }
  if ((param_1[2] != 0.0) || (NAN(param_1[2]))) {
    fVar1 = (float)((int)param_1[3] + 1);
LAB_14602fe07:
    param_1[2] = 0.0;
    param_1[3] = fVar1;
  }
  else {
    fVar1 = 1.4013e-45;
    if (param_1[3] == 0.0) goto LAB_14602fe07;
  }
  if ((param_1[4] != 0.0) || (NAN(param_1[4]))) {
    fVar1 = (float)((int)param_1[5] + 1);
LAB_14602fe31:
    param_1[4] = 0.0;
    param_1[5] = fVar1;
  }
  else {
    fVar1 = 1.4013e-45;
    if (param_1[5] == 0.0) goto LAB_14602fe31;
  }
  if ((param_1[6] != 0.0) || (NAN(param_1[6]))) {
    fVar1 = (float)((int)param_1[7] + 1);
LAB_14602fe53:
    param_1[6] = 0.0;
    param_1[7] = fVar1;
  }
  else {
    fVar1 = 1.4013e-45;
    if (param_1[7] == 0.0) goto LAB_14602fe53;
  }
  if ((param_1[8] != 0.0) || (NAN(param_1[8]))) {
    fVar1 = (float)((int)param_1[9] + 1);
  }
  else {
    fVar1 = 1.4013e-45;
    if (param_1[9] != 0.0) goto LAB_14602fe7f;
  }
  param_1[8] = 0.0;
  param_1[9] = fVar1;
LAB_14602fe7f:
  if (*(char *)(param_1 + 10) == '\0') {
    fVar1 = 1.4013e-45;
    if (param_1[0xb] != 0.0) {
      return;
    }
  }
  else {
    fVar1 = (float)((int)param_1[0xb] + 1);
  }
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = fVar1;
  return;
}



// FUNCTION 14602fec6 FUN_14602fec6 body=392 status=ok
// SIG undefined FUN_14602fec6(void)

void FUN_14602fec6(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = param_1[1];
  if ((*param_1 != 0) || (bVar2 = iVar1 == 0, iVar1 = 0, bVar2)) {
    *param_1 = 0;
    param_1[1] = iVar1 + 1;
  }
  if (param_1[2] == 0) {
    if (param_1[3] == 0) {
      iVar1 = 1;
      goto LAB_14602fef1;
    }
  }
  else {
    iVar1 = param_1[3] + 1;
LAB_14602fef1:
    param_1[2] = 0;
    param_1[3] = iVar1;
  }
  if (((float)param_1[4] != 0.0) || (NAN((float)param_1[4]))) {
    iVar1 = param_1[5] + 1;
LAB_14602fffc:
    param_1[4] = 0;
    param_1[5] = iVar1;
  }
  else if (param_1[5] == 0) {
    iVar1 = 1;
    goto LAB_14602fffc;
  }
  if (((float)param_1[6] != 0.0) || (NAN((float)param_1[6]))) {
    iVar1 = param_1[7] + 1;
LAB_146030010:
    param_1[6] = 0;
    param_1[7] = iVar1;
  }
  else if (param_1[7] == 0) {
    iVar1 = 1;
    goto LAB_146030010;
  }
  if (((float)param_1[8] != 0.0) || (NAN((float)param_1[8]))) {
    iVar1 = param_1[9] + 1;
LAB_146030024:
    param_1[8] = 0;
    param_1[9] = iVar1;
  }
  else if (param_1[9] == 0) {
    iVar1 = 1;
    goto LAB_146030024;
  }
  if (((float)param_1[10] != 0.0) || (NAN((float)param_1[10]))) {
    iVar1 = param_1[0xb] + 1;
LAB_14602ff6c:
    param_1[10] = 0;
    param_1[0xb] = iVar1;
  }
  else if (param_1[0xb] == 0) {
    iVar1 = 1;
    goto LAB_14602ff6c;
  }
  if (((float)param_1[0xc] != 0.0) || (NAN((float)param_1[0xc]))) {
    iVar1 = param_1[0xd] + 1;
LAB_14602ff87:
    param_1[0xc] = 0;
    param_1[0xd] = iVar1;
  }
  else if (param_1[0xd] == 0) {
    iVar1 = 1;
    goto LAB_14602ff87;
  }
  if ((char)param_1[0xe] == '\0') {
    if (param_1[0xf] != 0) goto LAB_14602ffa2;
    iVar1 = 1;
  }
  else {
    iVar1 = param_1[0xf] + 1;
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = iVar1;
LAB_14602ffa2:
  if ((char)param_1[0x10] == '\0') {
    if (param_1[0x11] != 0) {
      return;
    }
    iVar1 = 1;
  }
  else {
    iVar1 = param_1[0x11] + 1;
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = iVar1;
  return;
}



// FUNCTION 14603004e FUN_14603004e body=709 status=ok
// SIG undefined FUN_14603004e(void)

longlong * FUN_14603004e(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x28))(param_1,&local_60);
  plVar4 = local_58;
  if (local_60 == 0) {
    local_60 = 0;
    goto LAB_1460301a2;
  }
  if (local_58 == (longlong *)0x0) {
    local_70 = local_60 + 0x50;
    local_68 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
    local_70 = local_60 + 0x50;
    local_68 = local_58;
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = local_58 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  uVar3 = param_3[3];
  plVar4 = (longlong *)param_3[4];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(local_60 + 0x78) = uVar3;
    plVar9 = *(longlong **)(local_60 + 0x80);
    if (plVar9 != (longlong *)0x0) {
      *(undefined8 *)(local_60 + 0x80) = 0;
LAB_14603025a:
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      if (plVar4 != (longlong *)0x0) goto LAB_146030109;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(local_60 + 0x78) = uVar3;
    plVar9 = *(longlong **)(local_60 + 0x80);
    if (plVar4 == plVar9) {
      LOCK();
      plVar9 = plVar4 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    else {
      *(longlong **)(local_60 + 0x80) = plVar4;
      if (plVar9 != (longlong *)0x0) goto LAB_14603025a;
    }
LAB_146030109:
    LOCK();
    plVar9 = plVar4 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  lVar8 = local_60;
  uVar5 = (**(code **)(*param_1 + 0x30))(param_1);
  *(undefined4 *)(lVar8 + 0x74) = uVar5;
  iVar6 = (**(code **)(*param_1 + 0x30))(param_1);
  if (0 < iVar6) {
    iVar6 = 0;
    do {
      lVar8 = (**(code **)(*param_1 + 0x38))(param_1,iVar6);
      if (lVar8 != 0) {
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        local_98 = &local_88;
        FUN_146030314(*param_3,&local_70,iVar6,lVar8 + 0x28);
      }
      iVar6 = iVar6 + 1;
      iVar7 = (**(code **)(*param_1 + 0x30))(param_1);
    } while (iVar6 < iVar7);
  }
  plVar4 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_68 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_1460301a2:
  *param_2 = local_60;
  param_2[1] = (longlong)local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_58 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146030314 FUN_146030314 body=162 status=ok
// SIG undefined FUN_146030314(void)

void FUN_146030314(undefined8 param_1,undefined8 *param_2,undefined4 param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_5 = (longlong *)*param_5;
  if ((param_5 != (longlong *)0x0) || (param_5 = (longlong *)*param_4, param_5 != (longlong *)0x0))
  {
    local_20 = *param_2;
    local_18 = (longlong *)param_2[1];
    if (local_18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
    }
    (**(code **)(*param_5 + 0x10))(param_5,param_1,&local_20,param_3);
    plVar3 = local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460303b8 FUN_1460303b8 body=142 status=ok
// SIG undefined FUN_1460303b8(void)

code * FUN_1460303b8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a92736();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"BatchedPrimitive";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FBatchedPrimitiveParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x5000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462b75c0;
}



// FUNCTION 146030446 FUN_146030446 body=232 status=ok
// SIG undefined FUN_146030446(void)

longlong * FUN_146030446(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462d40a4;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146030534 FUN_146030534 body=26 status=ok
// SIG undefined FUN_146030534(void)

undefined8 FUN_146030534(longlong param_1,undefined8 param_2)

{
  FUN_14603054e(param_1 + 0x18);
  return param_2;
}



// FUNCTION 14603054e FUN_14603054e body=438 status=ok
// SIG undefined FUN_14603054e(void)

undefined8 * FUN_14603054e(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  void *_Dst;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  void *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb78698 != (longlong *)0x0 && DAT_14cb786a0 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb78698 + 0x30))(), cVar2 != '\0')) {
    plVar3 = DAT_14cb78698;
    if (DAT_14cb786a0 == 0) {
      plVar3 = (longlong *)0x0;
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_38);
    goto LAB_14603062f;
  }
  _Dst = (void *)FUN_14001cc68(0x1e8);
  memset(_Dst,0,0x1e8);
  FUN_146030706(_Dst);
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b3f8f70;
  plVar3[2] = (longlong)_Dst;
  local_30 = plVar3;
  if (_Dst == (void *)0x0) {
    local_38 = (void *)0x0;
    goto LAB_14603062f;
  }
  local_38 = _Dst;
  if (((*(longlong *)((longlong)_Dst + 0x10) != 0) && (*(longlong *)((longlong)_Dst + 0x18) != 0))
     && (0 < *(int *)(*(longlong *)((longlong)_Dst + 0x18) + 8))) goto LAB_14603062f;
  if (plVar3 == (longlong *)0x0) {
    *(void **)((longlong)_Dst + 0x10) = _Dst;
    plVar4 = *(longlong **)((longlong)_Dst + 0x18);
    if (plVar4 != (longlong *)0x0) {
LAB_1460306aa:
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      *(longlong **)((longlong)_Dst + 0x18) = plVar3;
      if (plVar3 != (longlong *)0x0) goto LAB_146030625;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(void **)((longlong)_Dst + 0x10) = _Dst;
    if (*(longlong **)((longlong)_Dst + 0x18) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)((longlong)_Dst + 0x18);
      if (plVar4 != (longlong *)0x0) goto LAB_1460306aa;
      *(longlong **)((longlong)_Dst + 0x18) = plVar3;
    }
LAB_146030625:
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_14603062f:
  *param_2 = local_38;
  param_2[1] = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146030706 FUN_146030706 body=341 status=ok
// SIG undefined FUN_146030706(void)

undefined8 * FUN_146030706(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b3f8f50;
  FUN_1409e1656(param_1 + 4);
  *param_1 = &PTR_FUN_14b3f8ee0;
  param_1[4] = &PTR_FUN_14b3f8f00;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x200000000;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return param_1;
}



// FUNCTION 14603085c FUN_14603085c body=122 status=ok
// SIG undefined FUN_14603085c(void)

undefined8 * FUN_14603085c(void)

{
  DWORD DVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x118);
  memset(_Dst,0,0x118);
  FUN_1460308d6(_Dst);
  puVar2 = _Dst + 0x21;
  _Dst[0x21] = &PTR_FUN_149e5ddc8;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(_Dst + 0x22) = DVar1;
  *_Dst = &PTR_FUN_149e5dd90;
  _Dst[0x21] = &PTR_FUN_149e5dda8;
  if (_Dst == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



// FUNCTION 1460308d6 FUN_1460308d6 body=147 status=ok
// SIG undefined FUN_1460308d6(void)

void FUN_1460308d6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e5ddb0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 146030980 FUN_146030980 body=152 status=ok
// SIG undefined FUN_146030980(void)

void FUN_146030980(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_1460309b3;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_1460309b3:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  FUN_146030a18((longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c) + *plVar3,
                param_1 + 4);
  if ((char)param_1[0xc] == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146030a07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 146030a18 FUN_146030a18 body=95 status=ok
// SIG undefined FUN_146030a18(void)

longlong * FUN_146030a18(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 146030a80 FUN_146030a80 body=260 status=ok
// SIG undefined FUN_146030a80(void)

undefined8 * FUN_146030a80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14007ca06();
  FUN_144a0768c(param_1,uVar1);
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14a8d96d0;
  *(undefined2 *)(param_1 + 6) = 0x103;
  FUN_1446ddc76(&local_38,"InputDeviceTriggerResetProperty",1);
  *(undefined8 *)((longlong)param_1 + 0x34) = local_38;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 3;
  *param_1 = &PTR_FUN_14a8da300;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_1446ddc76(&local_38,"InputDeviceTriggerResistance",1);
  param_1[0x14] = local_38;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146030b86 FUN_146030b86 body=97 status=ok
// SIG undefined FUN_146030b86(void)

void FUN_146030b86(longlong *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_146030be8(param_1,param_3,param_4,param_5);
  return;
}



// FUNCTION 146030be8 FUN_146030be8 body=110 status=ok
// SIG undefined FUN_146030be8(void)

void FUN_146030be8(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_14021219d(param_1,param_3);
  FUN_146030c56(param_1,param_4);
  return;
}



// FUNCTION 146030c56 FUN_146030c56 body=62 status=ok
// SIG undefined FUN_146030c56(void)

void FUN_146030c56(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)param_1[1];
  if (puVar1 + 1 <= (undefined2 *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146030c7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    return;
  }
  thunk_FUN_1457251a8();
  return;
}



// FUNCTION 146030c94 FUN_146030c94 body=107 status=ok
// SIG undefined FUN_146030c94(void)

void FUN_146030c94(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ead26(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aba6fe0;
  puVar1[5] = &PTR_LAB_14aba75c0;
  puVar1[6] = &PTR_LAB_14aba7600;
  puVar1[0x55] = 0;
  puVar1[0x56] = 0;
  puVar1[0x57] = 0;
  FUN_146030d00(puVar1 + 0x56);
  puVar1[0x58] = 0;
  puVar1[0x59] = 0;
  return;
}



// FUNCTION 146030d00 FUN_146030d00 body=162 status=ok
// SIG undefined FUN_146030d00(void)

undefined8 FUN_146030d00(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0x60;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e06];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x60,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if (3 < (int)(uVar3 / 0x18)) {
    uVar4 = uVar3 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x18,8);
  }
  return uVar2;
}



// FUNCTION 146030da2 FUN_146030da2 body=155 status=ok
// SIG undefined FUN_146030da2(void)

void FUN_146030da2(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  
  DAT_14cb51ee8 = 0;
  iVar13 = 6;
  if (DAT_14cb51eec == 6) {
    uVar14 = 0;
    uVar12 = 6;
  }
  else {
    FUN_146030e3e(6);
    uVar14 = DAT_14cb51ee8;
    uVar12 = DAT_14cb51eec;
  }
  do {
    DAT_14cb51ee8 = uVar14 + 1;
    if (uVar12 < DAT_14cb51ee8) {
      FUN_1485f3984(uVar14);
      uVar12 = DAT_14cb51eec;
    }
    uVar11 = DAT_14cb51ee8;
    lVar10 = DAT_14cb51ee0;
    lVar15 = (longlong)(int)uVar14 * 0x2c;
    uVar3 = *param_1;
    uVar4 = param_1[1];
    uVar5 = param_1[2];
    uVar6 = param_1[3];
    uVar7 = *(undefined8 *)(param_1 + 4);
    uVar8 = *(undefined8 *)(param_1 + 6);
    uVar9 = *(undefined8 *)(param_1 + 9);
    puVar2 = (undefined8 *)(DAT_14cb51ee0 + 0x1c + lVar15);
    *puVar2 = *(undefined8 *)(param_1 + 7);
    puVar2[1] = uVar9;
    puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar15);
    *puVar2 = uVar7;
    puVar2[1] = uVar8;
    puVar1 = (undefined4 *)(lVar10 + lVar15);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    iVar13 = iVar13 + -1;
    uVar14 = uVar11;
  } while (iVar13 != 0);
  return;
}



// FUNCTION 146030e3e FUN_146030e3e body=114 status=ok
// SIG undefined FUN_146030e3e(void)

void FUN_146030e3e(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x2c,4);
    uVar2 = 0x7fffffff;
    if ((int)param_1 <= (int)(uVar1 / 0x2c)) {
      uVar2 = uVar1 / 0x2c & 0xffffffff;
    }
  }
  if ((int)uVar2 != DAT_14cb51eec) {
    DAT_14cb51eec = (int)uVar2;
    FUN_1446f8d3c(&DAT_14cb51ee0,DAT_14cb51ee8,uVar2,0x2c,4);
  }
  return;
}



// FUNCTION 146030eb0 FUN_146030eb0 body=40 status=ok
// SIG undefined FUN_146030eb0(void)

undefined8 FUN_146030eb0(undefined8 param_1,int param_2)

{
  FUN_146030ed8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146030ed8 FUN_146030ed8 body=229 status=ok
// SIG undefined FUN_146030ed8(void)

void FUN_146030ed8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bee1320;
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ec0(param_1 + 0x29);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_1410b31d0(param_1 + 0x1f);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1406feffc(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0xb);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 146030fbe FUN_146030fbe body=254 status=ok
// SIG undefined FUN_146030fbe(void)

longlong *
FUN_146030fbe(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_1460310c0(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_146031138(&local_30,plVar1);
  plVar2 = local_28;
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
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460310c0 FUN_1460310c0 body=120 status=ok
// SIG undefined FUN_1460310c0(void)

undefined8 * FUN_1460310c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b99c4c0;
  FUN_1404e4778(param_1 + 2,param_3);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_14b99c4e0;
  param_1[6] = &PTR_FUN_14b99c520;
  param_1[0x17] = *param_2;
  lVar1 = param_2[1];
  param_1[0x18] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 146031138 FUN_146031138 body=162 status=ok
// SIG undefined FUN_146031138(void)

void FUN_146031138(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x40) != 0) && (*(longlong *)(param_2 + 0x48) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x48) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x40) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x40) = param_2;
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_146031177;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_146031177;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x48) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146031177:
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
                    /* WARNING: Could not recover jumptable at 0x0001460311d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1460311da FUN_1460311da body=254 status=ok
// SIG undefined FUN_1460311da(void)

longlong *
FUN_1460311da(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FUN_14001cc68(200,0x10);
  FUN_1460312dc(plVar4,&local_40,param_4);
  plVar1 = plVar4 + 2;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_146031354(&local_30,plVar1);
  plVar2 = local_28;
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
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460312dc FUN_1460312dc body=120 status=ok
// SIG undefined FUN_1460312dc(void)

undefined8 * FUN_1460312dc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14b99df60;
  FUN_1404e4778(param_1 + 2,param_3);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[2] = &PTR_FUN_14b99df80;
  param_1[6] = &PTR_FUN_14b99dfc0;
  param_1[0x17] = *param_2;
  lVar1 = param_2[1];
  param_1[0x18] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 146031354 FUN_146031354 body=162 status=ok
// SIG undefined FUN_146031354(void)

void FUN_146031354(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x40) != 0) && (*(longlong *)(param_2 + 0x48) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x48) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x40) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x40) = param_2;
    if (*(longlong **)(param_2 + 0x48) == plVar2) goto LAB_146031393;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x48) = plVar2;
      goto LAB_146031393;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x48) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146031393:
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
                    /* WARNING: Could not recover jumptable at 0x0001460313f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1460313f6 FUN_1460313f6 body=826 status=ok
// SIG undefined FUN_1460313f6(void)

void FUN_1460313f6(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + -0x30;
  FUN_141237e80();
  lVar3 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(lVar1);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_141060562();
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
      if (*(longlong *)(param_1 + 0x70) == 0) {
        uVar4 = FUN_141546c72();
        local_38 = FUN_14581eb38;
        local_30 = 0;
        FUN_14603182c(uVar4,&local_40,lVar1);
        *(undefined8 *)(param_1 + 0x70) = local_40;
      }
      if (*(longlong *)(param_1 + 0x78) == 0) {
        local_38 = FUN_145c57122;
        local_30 = 0;
        FUN_14603192c(lVar3 + 0x18,&local_40,lVar1);
        *(undefined8 *)(param_1 + 0x78) = local_40;
      }
      if (*(longlong *)(param_1 + 0x80) == 0) {
        local_38 = FUN_148e39698;
        local_30 = 0;
        FUN_146031b12(lVar3 + 0x30,&local_40,lVar1);
        *(undefined8 *)(param_1 + 0x80) = local_40;
      }
      if (*(longlong *)(param_1 + 0x88) == 0) {
        uVar4 = FUN_145d6e79a();
        local_38 = (code *)&LAB_14596055a;
        local_30 = 0;
        FUN_146031c12(uVar4,&local_40,lVar1);
        *(undefined8 *)(param_1 + 0x88) = local_40;
      }
      local_38 = (code *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,3,0x10);
      pcVar2 = local_38;
      local_30 = 3;
      *(undefined ***)local_38 = &PTR_LAB_149e35290;
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
      *(longlong *)(local_38 + 0x10) = lVar6;
      *(undefined ***)local_38 = &PTR_FUN_14b9afa10;
      *(undefined8 *)(local_38 + 0x18) = 0;
      FUN_14485c47a(local_38 + 0x18,lVar1);
      *(longlong *)(pcVar2 + 0x20) = lVar1;
      FUN_140feff30(lVar3 + 0x48,&local_40,&local_38);
      FUN_1449db362(&local_38);
    }
  }
  lVar3 = FUN_1408bb964(param_1 + 0x14);
  if (lVar3 != 0) {
    lVar5 = FUN_1403ca142();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      local_38 = FUN_145a1b0ce;
      local_30 = 0;
      FUN_146031d12(lVar3 + 0x2a8,&local_40,lVar1);
      *(undefined8 *)(param_1 + 0x68) = local_40;
      lVar3 = *(longlong *)(lVar3 + 0x48);
      if (lVar3 != 0) {
        lVar5 = FUN_140b6d0be();
        if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
           (*(longlong *)(param_1 + 0xd0) == 0)) {
          local_38 = FUN_145ded4fa;
          local_30 = 0;
          FUN_146031e12(lVar3 + 0x4b8,&local_40,lVar1);
          *(undefined8 *)(param_1 + 0xd0) = local_40;
        }
      }
    }
  }
  local_38 = FUN_145c570dc;
  local_30 = 0;
  FUN_146031732(&local_40,lVar1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146031732 FUN_146031732 body=248 status=ok
// SIG undefined FUN_146031732(void)

undefined8 FUN_146031732(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a1e1a40;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b9afb60;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603182c FUN_14603182c body=254 status=ok
// SIG undefined FUN_14603182c(void)

undefined8
FUN_14603182c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b9af850;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603192c FUN_14603192c body=254 status=ok
// SIG undefined FUN_14603192c(void)

undefined8
FUN_14603192c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b4e8e10;
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
  *local_48 = &PTR_FUN_14b9af8c0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_146031a2c(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146031a2c FUN_146031a2c body=216 status=ok
// SIG undefined FUN_146031a2c(void)

undefined8 * FUN_146031a2c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 146031b12 FUN_146031b12 body=254 status=ok
// SIG undefined FUN_146031b12(void)

undefined8
FUN_146031b12(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e35290;
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
  *local_48 = &PTR_FUN_14b9af930;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_140feff30(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146031c12 FUN_146031c12 body=254 status=ok
// SIG undefined FUN_146031c12(void)

undefined8
FUN_146031c12(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b9af9a0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146031d12 FUN_146031d12 body=254 status=ok
// SIG undefined FUN_146031d12(void)

undefined8
FUN_146031d12(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b3e62a0;
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
  *local_48 = &PTR_FUN_14b9afa80;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141285884(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146031e12 FUN_146031e12 body=254 status=ok
// SIG undefined FUN_146031e12(void)

undefined8
FUN_146031e12(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b991aa0;
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
  *local_48 = &PTR_FUN_14b9afaf0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14586ed62(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146031f11 FUN_146031f11 body=32 status=ok
// SIG undefined FUN_146031f11(void)

void FUN_146031f11(void)

{
  FUN_146031f32(&DAT_14c9c0d40);
  atexit((_func_5014 *)&LAB_142b8db8f);
  return;
}



// FUNCTION 146031f32 FUN_146031f32 body=237 status=ok
// SIG undefined FUN_146031f32(void)

undefined8 * FUN_146031f32(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a1fbba0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f2120(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_146031f81;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_146031f81:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146032020 FUN_146032020 body=32 status=ok
// SIG undefined FUN_146032020(void)

void FUN_146032020(void)

{
  FUN_146032040(&DAT_14c9c0cf8);
  atexit((_func_5014 *)&LAB_142b8dc1f);
  return;
}



// FUNCTION 146032040 FUN_146032040 body=237 status=ok
// SIG undefined FUN_146032040(void)

undefined8 * FUN_146032040(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a1faf60;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f222a(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_14603208f;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_14603208f:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603212e FUN_14603212e body=32 status=ok
// SIG undefined FUN_14603212e(void)

void FUN_14603212e(void)

{
  FUN_14603214e(&DAT_14c9c0498);
  atexit((_func_5014 *)&LAB_142b8dc43);
  return;
}



// FUNCTION 14603214e FUN_14603214e body=237 status=ok
// SIG undefined FUN_14603214e(void)

undefined8 * FUN_14603214e(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a1f7b60;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f2548(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_14603219d;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_14603219d:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603223c FUN_14603223c body=32 status=ok
// SIG undefined FUN_14603223c(void)

void FUN_14603223c(void)

{
  FUN_14603225c(&DAT_14c9c0370);
  atexit((_func_5014 *)&LAB_142b8dc4f);
  return;
}



// FUNCTION 14603225c FUN_14603225c body=237 status=ok
// SIG undefined FUN_14603225c(void)

undefined8 * FUN_14603225c(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a1f75e0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f2652(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_1460322ab;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_1460322ab:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603234a FUN_14603234a body=32 status=ok
// SIG undefined FUN_14603234a(void)

void FUN_14603234a(void)

{
  FUN_14603236a(&DAT_14c9c0880);
  atexit((_func_5014 *)&LAB_142b8dc5b);
  return;
}



// FUNCTION 14603236a FUN_14603236a body=237 status=ok
// SIG undefined FUN_14603236a(void)

undefined8 * FUN_14603236a(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a1fab30;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f275c(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_1460323b9;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_1460323b9:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146032458 FUN_146032458 body=32 status=ok
// SIG undefined FUN_146032458(void)

void FUN_146032458(void)

{
  FUN_146032478(&DAT_14c9c05f0);
  atexit((_func_5014 *)&LAB_142b8dc67);
  return;
}



// FUNCTION 146032478 FUN_146032478 body=237 status=ok
// SIG undefined FUN_146032478(void)

undefined8 * FUN_146032478(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a1f82c0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f2866(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_1460324c7;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_1460324c7:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146032566 FUN_146032566 body=32 status=ok
// SIG undefined FUN_146032566(void)

void FUN_146032566(void)

{
  FUN_146032586(&DAT_14c9c04c8);
  atexit((_func_5014 *)&LAB_142b8dc73);
  return;
}



// FUNCTION 146032586 FUN_146032586 body=237 status=ok
// SIG undefined FUN_146032586(void)

undefined8 * FUN_146032586(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a1f7c70;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f2970(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_1460325d5;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_1460325d5:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146032674 FUN_146032674 body=32 status=ok
// SIG undefined FUN_146032674(void)

void FUN_146032674(void)

{
  FUN_146032694(&DAT_14c9c04b0);
  atexit((_func_5014 *)&LAB_142b8dcdf);
  return;
}



// FUNCTION 146032694 FUN_146032694 body=237 status=ok
// SIG undefined FUN_146032694(void)

undefined8 * FUN_146032694(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a1f7c40;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f2b84(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_1460326e3;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_1460326e3:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146032782 FUN_146032782 body=32 status=ok
// SIG undefined FUN_146032782(void)

void FUN_146032782(void)

{
  FUN_1460327a2(&DAT_14c9c0ec0);
  atexit((_func_5014 *)&LAB_142b8dd9f);
  return;
}



// FUNCTION 1460327a2 FUN_1460327a2 body=237 status=ok
// SIG undefined FUN_1460327a2(void)

undefined8 * FUN_1460327a2(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a1fc1a0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f2ea2(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_1460327f1;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_1460327f1:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146032890 FUN_146032890 body=32 status=ok
// SIG undefined FUN_146032890(void)

void FUN_146032890(void)

{
  FUN_1460328b0(&DAT_14c9c0ed8);
  atexit((_func_5014 *)&LAB_142b8ddab);
  return;
}



// FUNCTION 1460328b0 FUN_1460328b0 body=237 status=ok
// SIG undefined FUN_1460328b0(void)

undefined8 * FUN_1460328b0(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a1fc1d0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f2fac(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_1460328ff;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_1460328ff:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603299e FUN_14603299e body=32 status=ok
// SIG undefined FUN_14603299e(void)

void FUN_14603299e(void)

{
  FUN_1460329be(&DAT_14c9c4508);
  atexit((_func_5014 *)&LAB_142bc0275);
  return;
}



// FUNCTION 1460329be FUN_1460329be body=237 status=ok
// SIG undefined FUN_1460329be(void)

undefined8 * FUN_1460329be(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a202ed0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f32ca(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_146032a0d;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_146032a0d:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146032aac FUN_146032aac body=32 status=ok
// SIG undefined FUN_146032aac(void)

void FUN_146032aac(void)

{
  FUN_146032acc(&DAT_14c9c4530);
  atexit((_func_5014 *)&LAB_142bc0605);
  return;
}



// FUNCTION 146032acc FUN_146032acc body=237 status=ok
// SIG undefined FUN_146032acc(void)

undefined8 * FUN_146032acc(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a203780;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f7654(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_146032b1b;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_146032b1b:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146032bba FUN_146032bba body=32 status=ok
// SIG undefined FUN_146032bba(void)

void FUN_146032bba(void)

{
  FUN_146032bda(&DAT_14c9c9ae0);
  atexit((_func_5014 *)&LAB_142be536b);
  return;
}



// FUNCTION 146032bda FUN_146032bda body=237 status=ok
// SIG undefined FUN_146032bda(void)

undefined8 * FUN_146032bda(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a20bd60;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f7868(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_146032c29;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_146032c29:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146032cc8 FUN_146032cc8 body=32 status=ok
// SIG undefined FUN_146032cc8(void)

void FUN_146032cc8(void)

{
  FUN_146032ce8(&DAT_14c9cfd60);
  atexit((_func_5014 *)&LAB_142c1c8ad);
  return;
}



// FUNCTION 146032ce8 FUN_146032ce8 body=237 status=ok
// SIG undefined FUN_146032ce8(void)

undefined8 * FUN_146032ce8(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a217ab0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f7b86(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_146032d37;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_146032d37:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146032dd6 FUN_146032dd6 body=32 status=ok
// SIG undefined FUN_146032dd6(void)

void FUN_146032dd6(void)

{
  FUN_146032df6(&DAT_14c9cfd78);
  atexit((_func_5014 *)&LAB_142c1c8b9);
  return;
}



// FUNCTION 146032df6 FUN_146032df6 body=237 status=ok
// SIG undefined FUN_146032df6(void)

undefined8 * FUN_146032df6(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a217af0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f7c90(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_146032e45;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_146032e45:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146032ee4 FUN_146032ee4 body=32 status=ok
// SIG undefined FUN_146032ee4(void)

void FUN_146032ee4(void)

{
  FUN_146032f04(&DAT_14c9d5280);
  atexit((_func_5014 *)&LAB_142c3f96b);
  return;
}



// FUNCTION 146032f04 FUN_146032f04 body=237 status=ok
// SIG undefined FUN_146032f04(void)

undefined8 * FUN_146032f04(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a222ab0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f82cc(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_146032f53;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_146032f53:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146032ff2 FUN_146032ff2 body=32 status=ok
// SIG undefined FUN_146032ff2(void)

void FUN_146032ff2(void)

{
  FUN_146033012(&DAT_14c9d27b8);
  atexit((_func_5014 *)&LAB_142c3f977);
  return;
}



// FUNCTION 146033012 FUN_146033012 body=237 status=ok
// SIG undefined FUN_146033012(void)

undefined8 * FUN_146033012(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a2227d0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f83d6(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_146033061;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_146033061:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146033100 FUN_146033100 body=32 status=ok
// SIG undefined FUN_146033100(void)

void FUN_146033100(void)

{
  FUN_146033120(&DAT_14c9d57d8);
  atexit((_func_5014 *)&LAB_142c3f99b);
  return;
}



// FUNCTION 146033120 FUN_146033120 body=237 status=ok
// SIG undefined FUN_146033120(void)

undefined8 * FUN_146033120(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a2243c0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f85ea(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_14603316f;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_14603316f:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603320e FUN_14603320e body=32 status=ok
// SIG undefined FUN_14603320e(void)

void FUN_14603320e(void)

{
  FUN_14603322e(&DAT_14c9dc4b8);
  atexit((_func_5014 *)&LAB_142c6f1e2);
  return;
}



// FUNCTION 14603322e FUN_14603322e body=237 status=ok
// SIG undefined FUN_14603322e(void)

undefined8 * FUN_14603322e(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a22d020;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f86f4(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_14603327d;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_14603327d:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603331c FUN_14603331c body=32 status=ok
// SIG undefined FUN_14603331c(void)

void FUN_14603331c(void)

{
  FUN_14603333c(&DAT_14c9dc458);
  atexit((_func_5014 *)&LAB_142c6f1ee);
  return;
}



// FUNCTION 14603333c FUN_14603333c body=237 status=ok
// SIG undefined FUN_14603333c(void)

undefined8 * FUN_14603333c(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a22cf50;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f87fe(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_14603338b;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_14603338b:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14603342a FUN_14603342a body=32 status=ok
// SIG undefined FUN_14603342a(void)

void FUN_14603342a(void)

{
  FUN_14603344a(&DAT_14c9dc470);
  atexit((_func_5014 *)&LAB_142c6f1fa);
  return;
}



// FUNCTION 14603344a FUN_14603344a body=237 status=ok
// SIG undefined FUN_14603344a(void)

undefined8 * FUN_14603344a(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a22cf80;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f8908(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_146033499;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_146033499:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146033538 FUN_146033538 body=32 status=ok
// SIG undefined FUN_146033538(void)

void FUN_146033538(void)

{
  FUN_146033558(&DAT_14c9dc488);
  atexit((_func_5014 *)&LAB_142c6f206);
  return;
}



// FUNCTION 146033558 FUN_146033558 body=236 status=ok
// SIG undefined FUN_146033558(void)

undefined8 * FUN_146033558(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a22cfb0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f8a12(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_1460335a7;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_1460335a7:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146033646 FUN_146033646 body=32 status=ok
// SIG undefined FUN_146033646(void)

void FUN_146033646(void)

{
  FUN_146033666(&DAT_14c9dc4a0);
  atexit((_func_5014 *)&LAB_142c6f212);
  return;
}



// FUNCTION 146033666 FUN_146033666 body=237 status=ok
// SIG undefined FUN_146033666(void)

undefined8 * FUN_146033666(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a22cfe0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f8b1c(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_1460336b5;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_1460336b5:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146033754 FUN_146033754 body=32 status=ok
// SIG undefined FUN_146033754(void)

void FUN_146033754(void)

{
  FUN_146033774(&DAT_14c9e7538);
  atexit((_func_5014 *)&LAB_142ccceb6);
  return;
}



// FUNCTION 146033774 FUN_146033774 body=237 status=ok
// SIG undefined FUN_146033774(void)

undefined8 * FUN_146033774(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a241dc0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f8f44(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_1460337c3;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_1460337c3:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146033862 FUN_146033862 body=32 status=ok
// SIG undefined FUN_146033862(void)

void FUN_146033862(void)

{
  FUN_146033882(&DAT_14c9e7550);
  atexit((_func_5014 *)&LAB_142cccec2);
  return;
}



// FUNCTION 146033882 FUN_146033882 body=237 status=ok
// SIG undefined FUN_146033882(void)

undefined8 * FUN_146033882(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a241df0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f904e(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_1460338d1;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_1460338d1:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146033970 FUN_146033970 body=32 status=ok
// SIG undefined FUN_146033970(void)

void FUN_146033970(void)

{
  FUN_146033990(&DAT_14c9e7498);
  atexit((_func_5014 *)&LAB_142ccceda);
  return;
}



// FUNCTION 146033990 FUN_146033990 body=237 status=ok
// SIG undefined FUN_146033990(void)

undefined8 * FUN_146033990(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a241b20;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f9262(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_1460339df;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_1460339df:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146033a7e FUN_146033a7e body=32 status=ok
// SIG undefined FUN_146033a7e(void)

void FUN_146033a7e(void)

{
  FUN_146033a9e(&DAT_14c9e72e8);
  atexit((_func_5014 *)&LAB_142cccee6);
  return;
}



// FUNCTION 146033a9e FUN_146033a9e body=237 status=ok
// SIG undefined FUN_146033a9e(void)

undefined8 * FUN_146033a9e(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a241820;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f936c(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_146033aed;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_146033aed:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146033b8c FUN_146033b8c body=32 status=ok
// SIG undefined FUN_146033b8c(void)

void FUN_146033b8c(void)

{
  FUN_146033bac(&DAT_14c9f8368);
  atexit((_func_5014 *)&LAB_142d57abf);
  return;
}



// FUNCTION 146033bac FUN_146033bac body=237 status=ok
// SIG undefined FUN_146033bac(void)

undefined8 * FUN_146033bac(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a268750;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f968a(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_146033bfb;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_146033bfb:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146033c9a FUN_146033c9a body=32 status=ok
// SIG undefined FUN_146033c9a(void)

void FUN_146033c9a(void)

{
  FUN_146033cba(&DAT_14ca111e0);
  atexit((_func_5014 *)&LAB_142dee97e);
  return;
}



// FUNCTION 146033cba FUN_146033cba body=237 status=ok
// SIG undefined FUN_146033cba(void)

undefined8 * FUN_146033cba(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a291190;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f9ab2(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_146033d09;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_146033d09:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146033da8 FUN_146033da8 body=32 status=ok
// SIG undefined FUN_146033da8(void)

void FUN_146033da8(void)

{
  FUN_146033dc8(&DAT_14ca11200);
  atexit((_func_5014 *)&LAB_142deeace);
  return;
}



// FUNCTION 146033dc8 FUN_146033dc8 body=237 status=ok
// SIG undefined FUN_146033dc8(void)

undefined8 * FUN_146033dc8(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a291390;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415f9fe4(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_146033e17;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_146033e17:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146033eb6 FUN_146033eb6 body=32 status=ok
// SIG undefined FUN_146033eb6(void)

void FUN_146033eb6(void)

{
  FUN_146033ed6(&DAT_14ca30f88);
  atexit((_func_5014 *)&LAB_142f1020f);
  return;
}



// FUNCTION 146033ed6 FUN_146033ed6 body=237 status=ok
// SIG undefined FUN_146033ed6(void)

undefined8 * FUN_146033ed6(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a2c43d0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415fa516(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_146033f25;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_146033f25:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146033fc4 FUN_146033fc4 body=32 status=ok
// SIG undefined FUN_146033fc4(void)

void FUN_146033fc4(void)

{
  FUN_146033fe4(&DAT_14ca38460);
  atexit((_func_5014 *)&LAB_142f47d10);
  return;
}



// FUNCTION 146033fe4 FUN_146033fe4 body=237 status=ok
// SIG undefined FUN_146033fe4(void)

undefined8 * FUN_146033fe4(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a2d3670;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415fa72a(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_146034033;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_146034033:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460340d2 FUN_1460340d2 body=32 status=ok
// SIG undefined FUN_1460340d2(void)

void FUN_1460340d2(void)

{
  FUN_1460340f2(&DAT_14ca5e710);
  atexit((_func_5014 *)&LAB_14309d573);
  return;
}



// FUNCTION 1460340f2 FUN_1460340f2 body=237 status=ok
// SIG undefined FUN_1460340f2(void)

undefined8 * FUN_1460340f2(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a3122c0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415fb6c0(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_146034141;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_146034141:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460341e0 FUN_1460341e0 body=32 status=ok
// SIG undefined FUN_1460341e0(void)

void FUN_1460341e0(void)

{
  FUN_146034200(&DAT_14cab0078);
  atexit((_func_5014 *)&LAB_1432c70c5);
  return;
}



// FUNCTION 146034200 FUN_146034200 body=237 status=ok
// SIG undefined FUN_146034200(void)

undefined8 * FUN_146034200(undefined8 *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a452be0;
  param_1[2] = 0;
  if ((DAT_14ca84d88 == '\x01') && (DAT_14ca84f1d == '\x01')) {
    plVar1 = param_1 + 2;
    FUN_1415feedc(&local_28);
    if (plVar1 != &local_28) {
      lVar4 = *plVar1;
      *plVar1 = local_28;
      local_28 = 0;
      if (lVar4 == 0) goto LAB_14603424f;
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (local_28 != 0) {
      LOCK();
      puVar2 = (uint *)(local_28 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    FUN_140308182(param_1,0);
  }
LAB_14603424f:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460342ee FUN_1460342ee body=146 status=ok
// SIG undefined FUN_1460342ee(void)

code * FUN_1460342ee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1415c2a24();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SlateView";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSlateViewUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000555;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14caad2b8;
  return FUN_145df8d7c;
}



// FUNCTION 146034380 FUN_146034380 body=232 status=ok
// SIG undefined FUN_146034380(void)

longlong * FUN_146034380(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_14633756a;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146034476 FUN_146034476 body=262 status=ok
// SIG undefined FUN_146034476(void)

undefined8 * FUN_146034476(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140da6ea8(param_1,uVar1);
  *param_1 = &PTR_FUN_14ac94420;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0x41c80000461c4000;
  *(undefined4 *)(param_1 + 10) = 0x42c80000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xf;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x40a00000;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x10) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x459c4000;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8d) = 1;
  *(undefined4 *)(param_1 + 0x12) = 0x41000000;
  FUN_140056680(param_1 + 0x13,L"/Game/PhysicsSource");
  FUN_140056680(param_1 + 0x15,L"/Game/GeometryCollections");
  *(undefined1 *)(param_1 + 0x17) = 2;
  FUN_1446f470e((longlong)param_1 + 0xbc,L"DestructibleChunk",1);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x3f800000c4f50000;
  param_1[0x1f] = 0x3c23d70a3dcccccd;
  return param_1;
}



// FUNCTION 146034588 FUN_146034588 body=258 status=ok
// SIG undefined FUN_146034588(void)

undefined8 * FUN_146034588(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14bc5a7e0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 2;
  param_1[0x75] = 0;
  FUN_1446f470e(&local_20,L"Root",1);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  plVar2 = (longlong *)FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar2);
  }
  param_1[0x75] = plVar2;
  (**(code **)(*plVar2 + 0x588))(plVar2,0);
  lVar3 = param_1[0x75];
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_1[0x75];
    }
  }
  param_1[0x39] = lVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146034694 FUN_146034694 body=261 status=ok
// SIG undefined FUN_146034694(void)

longlong * FUN_146034694(longlong *param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14585458a();
  *param_1 = (longlong)&PTR_FUN_14bdb2440;
  param_1[5] = (longlong)&PTR_FUN_14bdb2880;
  param_1[0x13] = (longlong)&PTR_FUN_14bdb28a0;
  param_1[0x24] = (longlong)&PTR_FUN_14bdb28d0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  local_38 = L"ToolName";
  local_30 = 8;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"UOffsetMeshTool";
  local_30 = 0xf;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"Offset");
  (**(code **)(*param_1 + 0x370))(param_1,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460347a2 FUN_1460347a2 body=880 status=ok
// SIG undefined FUN_1460347a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1460347a2(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined1 local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = FUN_14007ca06();
  FUN_141246b4c(param_1,uVar5);
  *param_1 = &PTR_FUN_14b7aa5c0;
  param_1[5] = &PTR_FUN_14b7ab0a0;
  param_1[6] = &PTR_LAB_14b7ab0e0;
  param_1[0x55] = &PTR_FUN_14b7ab130;
  param_1[0x56] = &PTR_FUN_14b7ab1b0;
  param_1[0x57] = &PTR_FUN_14b7ab1c0;
  *(undefined4 *)(param_1 + 0xf3) = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0x3e4ccccd;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  *(undefined1 *)(param_1 + 0xfd) = 1;
  *(undefined1 **)((longlong)param_1 + 0x7ec) = &DAT_3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x7f4) = 0x3f800000;
  param_1[0xff] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ff) = 0;
  local_a0 = 0x4056800000000000;
  local_98 = 0x4056800000000000;
  local_90 = 0;
  local_b8 = local_b8 & 0xffffffffffffff00;
  FUN_14020f75c(param_1,&local_a0,0,0);
  auVar8 = *(undefined1 (*) [16])(param_1 + 0x36);
  dVar3 = auVar8._0_8_;
  dVar4 = auVar8._8_8_;
  dVar13 = (double)param_1[0x38];
  puVar7 = (undefined8 *)param_1[0x46];
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar5 = DAT_14c8463d8;
    *puVar7 = DAT_14c8463d0;
    puVar7[1] = uVar5;
    uVar5 = DAT_14c8463e8;
    puVar7[2] = DAT_14c8463e0;
    puVar7[3] = uVar5;
    uVar5 = DAT_14c846500;
    puVar7[4] = DAT_14c8464f8;
    puVar7[5] = uVar5;
    puVar7[6] = DAT_14c846508;
    param_1[0x46] = puVar7;
  }
  if ((((((double)puVar7[4] != dVar3) || (NAN((double)puVar7[4]) || NAN(dVar3))) ||
       ((double)puVar7[5] != dVar4)) ||
      ((NAN((double)puVar7[5]) || NAN(dVar4) || ((double)puVar7[6] != dVar13)))) ||
     (NAN((double)puVar7[6]) || NAN(dVar13))) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = dVar13;
    dVar1 = (double)DAT_1499387d0;
    dVar2 = DAT_1499387d0._8_8_;
    auVar8 = divpd(auVar8,_DAT_1499387d0);
    auVar11 = divpd(auVar16,_DAT_1499387d0);
    auVar8 = roundpd(auVar8,auVar8,3);
    auVar11 = roundpd(auVar11,auVar11,3);
    dVar3 = dVar3 - auVar8._0_8_ * dVar1;
    dVar4 = dVar4 - auVar8._8_8_ * dVar2;
    auVar17._0_8_ = dVar13 - auVar11._0_8_ * dVar1;
    auVar17._8_8_ = 0.0 - auVar11._8_8_ * dVar2;
    auVar15._0_8_ = dVar3 + dVar1;
    auVar15._8_8_ = dVar4 + dVar2;
    auVar14._0_8_ = dVar1 + auVar17._0_8_;
    auVar14._8_8_ = dVar2 + auVar17._8_8_;
    auVar11._8_8_ = -(ulonglong)(0.0 <= dVar4);
    auVar11._0_8_ = -(ulonglong)(0.0 <= dVar3);
    auVar8._8_4_ = SUB84(dVar4,0);
    auVar8._0_8_ = dVar3;
    auVar8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar11 = blendvpd(auVar15,auVar8,auVar11);
    auVar9._8_8_ = -(ulonglong)(0.0 <= auVar17._8_8_);
    auVar9._0_8_ = -(ulonglong)(0.0 <= auVar17._0_8_);
    auVar8 = blendvpd(auVar14,auVar17,auVar9);
    auVar12._0_8_ = auVar11._0_8_ + -360.0;
    auVar12._8_8_ = auVar11._8_8_ + -360.0;
    auVar10._8_8_ = -(ulonglong)(180.0 < auVar11._8_8_);
    auVar10._0_8_ = -(ulonglong)(180.0 < auVar11._0_8_);
    auVar11 = blendvpd(auVar11,auVar12,auVar10);
    dVar13 = auVar8._0_8_;
    *(undefined1 (*) [16])(puVar7 + 4) = auVar11;
    puVar7[6] = ~-(ulonglong)(180.0 < dVar13) & (ulonglong)dVar13 |
                (ulonglong)(dVar13 + -360.0) & -(ulonglong)(180.0 < dVar13);
    FUN_144a7484c(puVar7 + 4,&local_68);
    puVar7[2] = local_58;
    puVar7[3] = uStack_50;
    *puVar7 = local_68;
    puVar7[1] = uStack_60;
  }
  local_68 = *puVar7;
  uStack_60 = puVar7[1];
  local_58 = puVar7[2];
  uStack_50 = puVar7[3];
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0x3fb999999999999a;
  local_b0 = 0;
  local_b8 = 0;
  FUN_144927ad4(param_1,&local_88,&local_68,0);
  lVar6 = FUN_14595e0e8();
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  param_1[0xcb] = lVar6;
  *(undefined1 *)((longlong)param_1 + 0x699) = 0;
  param_1[0xcc] = 0x12c000007d0;
  FUN_146034b14(param_1);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146034b14 FUN_146034b14 body=1002 status=ok
// SIG undefined FUN_146034b14(void)

void FUN_146034b14(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a5dc74(&local_40);
  if ((int)param_1[0xf3] != 1) {
    if ((int)param_1[0xf3] != 2) goto LAB_146034b4b;
    lVar4 = param_1[0xf8];
    if (lVar4 == 0) {
      uVar7 = FUN_14036a63e();
      lVar4 = FUN_14477b664(uVar7);
      param_1[0xf8] = lVar4;
    }
    plVar1 = param_1 + 0xf7;
    lVar6 = param_1[0xf9];
    if (lVar6 == 0) {
      if ((lVar4 == 0) || (*plVar1 == 0)) goto LAB_146034b4b;
      plVar5 = *(longlong **)(lVar4 + 0xb8);
      if (plVar5 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5);
        if (cVar2 != '\0') {
          uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar6 = FUN_144aff482(uVar7,plVar1);
          param_1[0xf9] = lVar6;
          if (lVar6 == 0) goto LAB_146034b4b;
          lVar4 = param_1[0xf8];
          goto LAB_146034d0c;
        }
      }
      param_1[0xf9] = 0;
      goto LAB_146034b4b;
    }
LAB_146034d0c:
    if (lVar4 == 0) {
      uVar7 = FUN_14036a63e();
      lVar4 = FUN_14477b664(uVar7);
      param_1[0xf8] = lVar4;
      lVar6 = param_1[0xf9];
      if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*plVar1 != 0)) {
        plVar5 = *(longlong **)(lVar4 + 0xb8);
        if (plVar5 == (longlong *)0x0) {
LAB_146034efb:
          lVar6 = 0;
        }
        else {
          cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5);
          if (cVar2 == '\0') goto LAB_146034efb;
          uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar6 = FUN_144aff482(uVar7,plVar1);
        }
        param_1[0xf9] = lVar6;
      }
    }
    plVar5 = local_40;
    plVar1 = *(longlong **)(lVar6 + 0x18);
    if (local_40 != plVar1) {
      local_40 = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    local_38 = *(undefined4 *)(lVar6 + 0x20);
    goto LAB_146034b4b;
  }
  lVar4 = param_1[0xf5];
  if (lVar4 == 0) {
    uVar7 = FUN_141030812();
    lVar4 = FUN_14477b664(uVar7);
    param_1[0xf5] = lVar4;
  }
  plVar1 = param_1 + 0xf4;
  plVar5 = (longlong *)param_1[0xf6];
  if (plVar5 == (longlong *)0x0) {
    if ((lVar4 == 0) || (*plVar1 == 0)) goto LAB_146034b4b;
    plVar5 = *(longlong **)(lVar4 + 0xb8);
    if (plVar5 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5);
      if (cVar2 != '\0') {
        uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
        plVar5 = (longlong *)FUN_144aff482(uVar7,plVar1);
        param_1[0xf6] = (longlong)plVar5;
        if (plVar5 == (longlong *)0x0) goto LAB_146034b4b;
        lVar4 = param_1[0xf5];
        goto LAB_146034c2d;
      }
    }
    param_1[0xf6] = 0;
    goto LAB_146034b4b;
  }
LAB_146034c2d:
  if (lVar4 == 0) {
    uVar7 = FUN_141030812();
    lVar4 = FUN_14477b664(uVar7);
    param_1[0xf5] = lVar4;
    plVar5 = (longlong *)param_1[0xf6];
    if (((plVar5 == (longlong *)0x0) && (plVar5 = (longlong *)0x0, lVar4 != 0)) && (*plVar1 != 0)) {
      plVar5 = *(longlong **)(lVar4 + 0xb8);
      if (plVar5 == (longlong *)0x0) {
LAB_146034ef4:
        plVar5 = (longlong *)0x0;
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5);
        if (cVar2 == '\0') goto LAB_146034ef4;
        uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
        plVar5 = (longlong *)FUN_144aff482(uVar7,plVar1);
      }
      param_1[0xf6] = (longlong)plVar5;
    }
  }
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_30);
  FUN_140008f88(&local_40,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
LAB_146034b4b:
  lVar4 = (**(code **)(*param_1 + 0xaa0))(param_1);
  if (lVar4 != 0) {
    lVar6 = FUN_14595e0e8();
    if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
         == lVar6 + 0x30)) && (plVar1 = *(longlong **)(lVar4 + 0x2d0), plVar1 != (longlong *)0x0)) {
      local_30 = local_40;
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 8))();
      }
      local_28 = local_38;
      (**(code **)(*plVar1 + 0x348))(plVar1);
    }
  }
  iVar3 = FUN_1457c5e5a(2);
  FUN_1412ff0e6(param_1,-iVar3);
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146034f16 FUN_146034f16 body=143 status=ok
// SIG undefined FUN_146034f16(void)

void FUN_146034f16(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_1415c2bd0(param_1 + 0x71a8);
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x860) + 0x10))(param_1 + 0x860);
  FUN_1400bc8c2(lVar2 + 0x18,&DAT_14cbc1d58);
  FUN_1400bc8c2(lVar2 + 0x40,&DAT_14cbc1d58);
  cVar1 = FUN_144a783a6(param_1);
  if (cVar1 == '\0') {
    lVar2 = (**(code **)(*(longlong *)(param_1 + 0x1118) + 0x20))(param_1 + 0x1118);
    if (lVar2 != 0) {
      FUN_140ba2af2(lVar2,&DAT_14cbc1d58);
      return;
    }
  }
  return;
}



// FUNCTION 146034fa6 FUN_146034fa6 body=492 status=ok
// SIG undefined FUN_146034fa6(void)

undefined8 FUN_146034fa6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  int iStack_5c;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  int iStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = 0;
  local_40 = 0xffffffff00000000;
  local_58 = 0;
  local_50 = 0xffffffff00000000;
  local_68 = 0;
  local_60 = 0xffffffff00000000;
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_1 + 0x1a8);
  lVar2 = (longlong)local_70;
  pvVar1 = *(void **)(param_1 + 0x1a0);
  if (lVar2 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar1,lVar2 * 2);
  }
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_1 + 0x1b8);
  lVar2 = (longlong)local_80;
  pvVar1 = *(void **)(param_1 + 0x1b0);
  if (lVar2 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,pvVar1,lVar2 * 2);
  }
  local_98 = &local_48;
  local_a0 = &local_58;
  local_a8 = &local_68;
  FUN_146035194(param_2,&local_88,param_3,&local_78);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((iStack_5c != -1) && (local_68 != 0)) {
    FUN_1400020a8();
  }
  if (local_50._4_4_ != -1) {
    FUN_1447a1747(local_58,local_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((iStack_3c != -1) && (local_48 != 0)) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146035194 FUN_146035194 body=385 status=ok
// SIG undefined FUN_146035194(void)

undefined8 *
FUN_146035194(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,longlong param_6,longlong param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144a787a6(param_1 + 4);
  FUN_144a787a6(param_1 + 2,param_3);
  FUN_144a787a6(param_1,param_4);
  if (*(int *)(param_7 + 0xc) != -1) {
    FUN_144a787a6(param_1 + 8,param_7);
  }
  if (*(int *)(param_5 + 0xc) != -1) {
    FUN_144a787a6(param_1 + 6,param_5);
  }
  if ((*(int *)(param_6 + 0xc) != -1) &&
     (FUN_140bee9ec(param_1 + 0xc,param_6), *(int *)(param_1 + 0xd) != 0)) {
    lVar2 = 0;
    uVar1 = 0;
    do {
      FUN_1407753c8(param_1[0xc] + lVar2);
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar1 != *(uint *)(param_1 + 0xd));
  }
  FUN_14588d72e(param_1,&local_48);
  if (param_1 + 10 == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[10] != 0) {
      FUN_1400020a8();
    }
    param_1[10] = local_48;
    *(undefined4 *)(param_1 + 0xb) = local_40;
    *(undefined4 *)((longlong)param_1 + 0x5c) = local_3c;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146035316 FUN_146035316 body=249 status=ok
// SIG undefined FUN_146035316(void)

void FUN_146035316(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  FUN_146035410(param_1 + 0x10);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x450;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x500;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x5b0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x660;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x710;
  return;
}



// FUNCTION 146035410 FUN_146035410 body=292 status=ok
// SIG undefined FUN_146035410(void)

void FUN_146035410(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xc0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x170;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x220;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x2d0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x380;
  return;
}



// FUNCTION 146035534 FUN_146035534 body=174 status=ok
// SIG undefined FUN_146035534(void)

void FUN_146035534(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98f068) {
    FUN_144b3d300(&DAT_14c98f068);
    if (DAT_14c98f068 == -1) {
      FUN_1446ddc76(&local_18,"SExpandableButton",1);
      FUN_1460355e4(&DAT_14c98f030,local_18,FUN_146035668);
      atexit(FUN_142900fe6);
      _Init_thread_footer(&DAT_14c98f068);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460355e4 FUN_1460355e4 body=130 status=ok
// SIG undefined FUN_1460355e4(void)

undefined8 * FUN_1460355e4(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[4] = 0;
  param_1[5] = 0x100000000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = param_2;
  uVar1 = FUN_140eb2e18();
  FUN_145b26348(local_28,param_1,uVar1);
  (*param_3)(local_28);
  FUN_140a5f69a(local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146035668 FUN_146035668 body=234 status=ok
// SIG undefined FUN_146035668(void)

void FUN_146035668(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50[0] = 2;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446f470e(&local_58,L"IsExpanded",1);
  local_78 = local_50;
  FUN_14134b99c(param_1,local_38,local_58,0x2a0);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  puVar1 = local_68;
  local_60 = 2;
  *local_68 = &PTR_LAB_149ef0aa0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149f12ab0;
  FUN_14134bb3c(local_38,&local_68);
  FUN_1449db362(&local_48);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146035754 FUN_146035754 body=350 status=ok
// SIG undefined FUN_146035754(void)

void FUN_146035754(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1460358f4();
  lVar3 = thunk_FUN_1404eee4c(param_1 + 0x40);
  FUN_140457ffc(lVar3 + 8,param_1);
  FUN_1459b2c80(param_1);
  plVar1 = (longlong *)(param_1 + 0x118);
  lVar3 = param_1 + 0x128;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar3;
  if (*(int *)(param_1 + 0x140) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar6 = *(int *)(param_1 + 0x140);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar6) || (uStack_48 != lVar3)) {
    do {
      lVar5 = (longlong)iStack_5c * 0x18 + *local_78;
      cVar2 = FUN_144729dda(lVar5);
      if ((cVar2 != '\0') && (lVar4 = FUN_14479d2ce(lVar5), *(longlong *)(lVar5 + 8) != 0)) {
        FUN_14480f766(lVar4 + 0xc10);
        *(undefined8 *)(lVar5 + 8) = 0;
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (((iStack_5c != iVar6) || (CONCAT44(uStack_64,uStack_68) != lVar3)) ||
            (local_78 != plVar1));
  }
  FUN_1460358b4(plVar1);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460358b4 FUN_1460358b4 body=63 status=ok
// SIG undefined FUN_1460358b4(void)

void FUN_1460358b4(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14603593c(param_1);
    FUN_145c03ce0(param_1);
    return;
  }
  FUN_145c03ce0(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_145ab8e24(param_1);
  return;
}



// FUNCTION 1460358f4 FUN_1460358f4 body=72 status=ok
// SIG undefined FUN_1460358f4(void)

void FUN_1460358f4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14480f766(&DAT_14cadbeb0);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14480f766(&DAT_14cadbec8);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14603593c FUN_14603593c body=325 status=ok
// SIG undefined FUN_14603593c(void)

void FUN_14603593c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 146035a82 FUN_146035a82 body=25 status=ok
// SIG undefined FUN_146035a82(void)

undefined8 FUN_146035a82(undefined8 param_1,undefined8 param_2)

{
  FUN_146035a9c(param_2);
  return param_2;
}



// FUNCTION 146035a9c FUN_146035a9c body=380 status=ok
// SIG undefined FUN_146035a9c(void)

undefined8 * FUN_146035a9c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cbc9918 == (longlong *)0x0 || DAT_14cbc9920 == 0) ||
     (cVar3 = (**(code **)(*DAT_14cbc9918 + 0x30))(), cVar3 == '\0')) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_14b96b660;
    puVar4[10] = 0;
    *(undefined4 *)(puVar4 + 0xb) = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x5c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar4 + 100) = 0;
    puVar4[0xe] = 0;
    *(undefined4 *)(puVar4 + 0xf) = 0;
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14b96ea00;
    plVar5[2] = (longlong)puVar4;
    local_28 = plVar5;
    if (puVar4 == (undefined8 *)0x0) {
      local_30 = (undefined8 *)0x0;
    }
    else {
      local_30 = puVar4;
      if (plVar5 == (longlong *)0x0) {
        puVar4[2] = puVar4;
        local_28 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        puVar4[2] = puVar4;
        if ((longlong *)puVar4[3] != plVar5) {
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
          plVar2 = (longlong *)puVar4[3];
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))();
            }
          }
          puVar4[3] = plVar5;
        }
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
  }
  else {
    plVar5 = DAT_14cbc9918;
    if (DAT_14cbc9920 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,&local_30);
  }
  *param_1 = local_30;
  param_1[1] = local_28;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146035c1a FUN_146035c1a body=1187 status=ok
// SIG undefined FUN_146035c1a(void)

void FUN_146035c1a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78 [2];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1408e4d18(param_2 + 0x3a0,&local_68);
  if (local_68 != (longlong *)0x0) {
    lVar9 = (**(code **)(*param_1 + 0x2d0))(param_1);
    if (lVar9 != 0) {
      lVar10 = FUN_1403ca142();
      if ((((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
          (cVar6 = FUN_14015c354(lVar9), plVar5 = local_68, cVar6 != '\0')) &&
         ((longlong)(int)param_1[0x101] != 0)) {
        puVar11 = (undefined8 *)param_1[0x100];
        lVar9 = (longlong)(int)param_1[0x101] << 4;
        do {
          cVar6 = (**(code **)*plVar5)(plVar5,*puVar11);
          plVar1 = local_60;
          if (cVar6 != '\0') {
            if (puVar11 != (undefined8 *)0x0) {
              local_58 = local_68;
              plStack_50 = local_60;
              if (local_60 == (longlong *)0x0) {
                FUN_1460360be(param_1 + 0x100,&local_58);
              }
              else {
                LOCK();
                *(int *)(local_60 + 1) = (int)local_60[1] + 1;
                UNLOCK();
                FUN_1460360be(param_1 + 0x100);
                if (plVar1 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = plVar1 + 1;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)*plVar5 == 0) {
                    (**(code **)*plVar1)(plVar1);
                    LOCK();
                    piVar4 = (int *)((longlong)plVar1 + 0xc);
                    *piVar4 = *piVar4 + -1;
                    UNLOCK();
                    if (*piVar4 == 0) {
                      (**(code **)(*plVar1 + 0x10))(plVar1);
                    }
                  }
                }
              }
              lVar9 = (**(code **)(*param_1 + 0x180))(param_1);
              if (((lVar9 != 0) && (*(longlong *)(lVar9 + 0x1f0) != 0)) &&
                 (lVar9 = FUN_14583d3ae(), lVar9 != 0)) {
                local_58 = (longlong *)0x0;
                plStack_50 = (longlong *)0x0;
                local_78[0] = 0;
                local_78[1] = 0;
                local_88 = 0;
                plStack_80 = (longlong *)0x0;
                cVar6 = FUN_141179052(param_2);
                if (cVar6 != '\0') {
                  FUN_145d1c6f4(local_78,&local_58);
                  FUN_141672b84(lVar9,2,&local_58,0);
                }
                plVar5 = plStack_80;
                if (plStack_80 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plStack_80 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plStack_80)(plStack_80);
                    LOCK();
                    piVar4 = (int *)((longlong)plVar5 + 0xc);
                    *piVar4 = *piVar4 + -1;
                    UNLOCK();
                    if (*piVar4 == 0) {
                      (**(code **)(*plVar5 + 0x10))(plVar5);
                    }
                  }
                }
                if (local_78[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_58 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            break;
          }
          puVar11 = puVar11 + 2;
          lVar9 = lVar9 + -0x10;
        } while (lVar9 != 0);
      }
    }
    plVar1 = local_60;
    plVar5 = param_1 + 0xf6;
    if (local_60 == (longlong *)0x0) {
      plStack_50 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
      plStack_50 = local_60;
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    local_58 = local_68;
    uVar7 = (**(code **)(*local_68 + 0x40))();
    iVar8 = FUN_1460361b4(plVar5,uVar7,&local_58);
    plVar3 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_50 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar4 = (int *)((longlong)plVar3 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar1 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar4 = (int *)((longlong)plVar1 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    plVar1 = local_60;
    if (iVar8 != -1) {
      if (local_60 == (longlong *)0x0) {
        plStack_50 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
        plStack_50 = local_60;
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
      uVar7 = (**(code **)(*local_68 + 0x40))();
      FUN_1460361b4(plVar5,uVar7,&local_58);
      plVar3 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_50 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar4 = (int *)((longlong)plVar3 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar4 = (int *)((longlong)plVar1 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar4 = (int *)((longlong)plVar1 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      plVar1 = local_60;
      if (local_60 == (longlong *)0x0) {
        local_58 = local_68;
        plStack_50 = (longlong *)0x0;
        FUN_145bf707e(plVar5);
      }
      else {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
        local_58 = local_68;
        plStack_50 = local_60;
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
        FUN_145bf707e(plVar5);
        LOCK();
        plVar5 = plVar1 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar4 = (int *)((longlong)plVar1 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar4 = (int *)((longlong)local_60 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  plVar5 = (longlong *)param_1[0xb3];
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460360be FUN_1460360be body=86 status=ok
// SIG undefined FUN_1460360be(void)

void FUN_1460360be(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = 0;
    iVar1 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2) == *param_2) {
        if (iVar1 == 1) {
          return;
        }
        FUN_14603626c(param_1,-iVar1);
        FUN_146036114(param_1);
        return;
      }
      iVar1 = iVar1 + -1;
      lVar2 = lVar2 + 0x10;
    } while ((longlong)(int)param_1[1] * 0x10 != lVar2);
  }
  return;
}



// FUNCTION 146036114 FUN_146036114 body=64 status=ok
// SIG undefined FUN_146036114(void)

void FUN_146036114(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146036154(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146036154 FUN_146036154 body=95 status=ok
// SIG undefined FUN_146036154(void)

ulonglong FUN_146036154(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1460361b4 FUN_1460361b4 body=183 status=ok
// SIG undefined FUN_1460361b4(void)

int FUN_1460361b4(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar6 = *param_1;
      do {
        lVar8 = (longlong)iVar7 * 0x20;
        puVar3 = *(undefined8 **)(lVar6 + lVar8);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        cVar4 = '\x01';
        if (puVar3 != (undefined8 *)*param_3) {
          cVar4 = (**(code **)*puVar3)();
        }
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
        if (cVar4 != '\0') {
          return iVar7;
        }
        lVar6 = *param_1;
        iVar7 = *(int *)(lVar6 + 0x18 + lVar8);
      } while (iVar7 != -1);
    }
  }
  return -1;
}



// FUNCTION 14603626c FUN_14603626c body=113 status=ok
// SIG undefined FUN_14603626c(void)

void FUN_14603626c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_14127b1cd(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1460362de FUN_1460362de body=335 status=ok
// SIG undefined FUN_1460362de(void)

void FUN_1460362de(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14603643a(param_1 + 0x180);
  if (((*(longlong *)(param_1 + 0x50) != 0) && (cVar4 = FUN_1414e62ca(), cVar4 != '\0')) &&
     (cVar4 = FUN_14603642e(param_1), cVar4 != '\0')) {
    FUN_1408e4d18(param_2 + 0x3a0,&local_30);
    plVar1 = local_28;
    if (local_30 != 0) {
      local_40 = local_30;
      local_38 = local_28;
      if (local_28 == (longlong *)0x0) {
        cVar4 = FUN_145dd6d36(param_1 + 0x1f8,&local_40);
      }
      else {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
        cVar4 = FUN_145dd6d36(param_1 + 0x1f8);
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar1 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar1)(plVar1);
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
      if (cVar4 != '\0') {
        FUN_140056680(&local_40,L"player_disconnect");
        FUN_145c29a14(param_1,&local_40,&local_30);
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14603642e FUN_14603642e body=12 status=ok
// SIG undefined FUN_14603642e(void)

bool FUN_14603642e(longlong param_1)

{
  return *(longlong *)(param_1 + 0xb0) != 0;
}



// FUNCTION 14603643a FUN_14603643a body=157 status=ok
// SIG undefined FUN_14603643a(void)

void FUN_14603643a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar5 = 0;
    uVar4 = 0;
    do {
      lVar3 = FUN_14479d2ce(*(undefined8 *)(lVar2 + lVar5));
      if (lVar3 == param_2) {
        if ((int)uVar4 < 0) {
          return;
        }
        if (*(int *)(param_1 + 0x10) <= (int)uVar4) {
          return;
        }
        FUN_148da9c66(param_1,(ulonglong)(uVar4 & 0x7fffffff) * 0x10 + *(longlong *)(param_1 + 8));
        FUN_148db31fc(param_1 + 8,uVar4);
        FUN_148db3272(param_1 + 8);
        return;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 1460364d8 FUN_1460364d8 body=117 status=ok
// SIG undefined FUN_1460364d8(void)

longlong * FUN_1460364d8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_14603654e(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}


