// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14111c174 FUN_14111c174 body=94 status=ok
// SIG undefined FUN_14111c174(void)

void FUN_14111c174(longlong param_1)

{
  *(undefined2 **)(param_1 + 0x60) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_140115c12(param_1 + 0x70,0);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14111c1d2 FUN_14111c1d2 body=270 status=ok
// SIG undefined FUN_14111c1d2(void)

undefined8 FUN_14111c1d2(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14111c2da;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14111c2da;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14111c2da:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14111c288;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_14111c288;
    }
  }
  uVar6 = 0;
LAB_14111c288:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14111c2ec FUN_14111c2ec body=385 status=ok
// SIG undefined FUN_14111c2ec(void)

void FUN_14111c2ec(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
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
  if (*(char *)(param_1 + 0x357) == '\x01') {
    *(undefined1 *)(param_1 + 0x357) = 0;
    *(undefined4 *)(param_1 + 0x348) = 0;
    if (*(int *)(param_1 + 0x34c) < 0) {
      FUN_140c6998c(param_1 + 0x340,0);
    }
    plVar1 = (longlong *)(param_1 + 0x480);
    lVar2 = param_1 + 0x490;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0x4a8) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = *(int *)(param_1 + 0x4a8);
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar4 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar5 = local_60._4_4_;
    local_78 = plVar1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != lVar2)) {
      do {
        local_60 = uVar4;
        lVar3 = *(longlong *)(*local_78 + 8 + (longlong)iVar5 * 0x20);
        if (*(char *)(lVar3 + 0x80) == '\0') {
          local_50 = *(longlong *)(lVar3 + 0x30);
          if ((DAT_14c950c29 == '\x01') && (local_50 != 0)) {
            FUN_1456cec3c();
          }
          FUN_140bddff2(param_1 + 0x340,&local_50);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar5 = local_60._4_4_;
        uVar4 = local_60;
      } while (local_78 != plVar1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar2 || local_60._4_4_ != iVar6));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14111c46e FUN_14111c46e body=1701 status=ok
// SIG undefined FUN_14111c46e(void)

void FUN_14111c46e(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_498 [32];
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined1 local_44c;
  undefined1 local_448;
  undefined8 local_444;
  undefined8 local_438;
  undefined8 local_430;
  undefined4 local_428;
  undefined8 local_424;
  undefined4 local_41c;
  undefined5 uStack_418;
  undefined3 local_413;
  undefined5 uStack_410;
  undefined8 local_408;
  undefined2 local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  char local_2f4;
  undefined1 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 *puStack_2c0;
  int local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined4 local_274;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined1 local_1a8;
  undefined4 local_180;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_498;
  if ((((*(char *)(param_1 + 0x178) != '\x03') || (lVar4 = FUN_1447210f0(), lVar4 == 0)) ||
      (FUN_14111cb72(param_1), *(char *)(param_1 + 0x7923) != '\x01')) ||
     (lVar4 = FUN_140cf8388(param_1), lVar4 == 0)) goto LAB_14111c983;
  local_44c = 0;
  local_448 = 0;
  local_444 = 0;
  local_438 = 0;
  local_478 = 0;
  uStack_470 = 0;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  local_430 = DAT_14cb7bd68;
  local_428 = DAT_14cb7bd70;
  local_424 = DAT_14cb7bd80;
  local_41c = DAT_14cb7bd88;
  local_408 = 0;
  local_400 = 0;
  local_3f8 = 0;
  uStack_410 = 0;
  uStack_418 = 0;
  local_413 = 0;
  local_3f0 = 0xc000;
  local_398 = 0;
  uStack_390 = 0;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_3a8 = 0;
  local_388 = 0;
  uStack_384 = 0;
  uStack_380 = 0;
  uStack_37c = 0x3ff00000;
  local_378 = 0;
  uStack_370 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  uStack_354 = 0x3ff00000;
  uStack_350 = 0;
  uStack_34c = 0x3ff00000;
  local_348 = 0x3ff0000000000000;
  uStack_340 = 0;
  local_338 = 0;
  local_330 = 0;
  local_318 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_310 = 0xffffffff;
  uStack_30c = 0;
  local_308 = 0;
  local_300 = 0;
  local_2f4 = '\0';
  local_2f0 = 0;
  local_288 = 0;
  local_280 = 0;
  local_2a0 = 0;
  local_2b0 = 0;
  uStack_2a8 = 0;
  local_2b8 = 0;
  local_2c8 = 0;
  puStack_2c0 = (undefined8 *)0x0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_27c = 0xffffffff00000080;
  local_274 = 0;
  local_268 = 0;
  local_260 = 0;
  local_238 = 0;
  local_230 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_22c = 0xffffffff00000080;
  local_224 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0xffffffff00000000;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1cc = 0xffffffff00000080;
  local_1c4 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_180 = 0;
  local_158 = 0;
  local_150 = 0x200000000;
  local_140 = 0;
  local_138 = 0;
  uStack_134 = 0x20;
  uStack_130 = 0xffffffff;
  uStack_12c = 0;
  local_120 = 0;
  local_118 = 0;
  local_f0 = 0;
  local_e8 = 0x200000000;
  local_d8 = 0;
  local_d0 = 0;
  uStack_cc = 0x20;
  uStack_c8 = 0xffffffff;
  uStack_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_80 = 0x200000000;
  local_70 = 0;
  local_68 = 0;
  uStack_64 = 0x20;
  uStack_60 = 0xffffffff;
  uStack_5c = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar5 = FUN_14111d03a(param_1);
  FUN_14111cb14(&local_478,uVar5);
  FUN_1411f52f4(&local_468,param_1 + 0x7938);
  FUN_1406fa324(&local_328,param_1 + 0x7970);
  local_318 = *(undefined8 *)(param_1 + 0x7980);
  local_310 = 0;
  uStack_30c = (undefined4)*(undefined8 *)(param_1 + 0x7988);
  local_308 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x7988) >> 0x20);
  local_300 = *(undefined8 *)(param_1 + 0x7990);
  lVar11 = *(longlong *)(param_1 + 0x3f70);
  if (*(char *)(lVar11 + 0xcb8) == '\x01') {
    local_2f8 = *(undefined4 *)(lVar11 + 0xcbc);
    local_2f4 = '\x01';
  }
  else if (local_2f4 == '\x01') {
    local_2f4 = '\0';
  }
  local_2f0 = *(undefined1 *)(lVar11 + 0xcc0);
  if (local_2b8 != 3) {
    FUN_1446efa72(&puStack_2c0,0,3,0x10);
    local_2b8 = 3;
  }
  puVar1 = puStack_2c0;
  *puStack_2c0 = &PTR_LAB_149e020b0;
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
  puStack_2c0[2] = lVar7;
  *puStack_2c0 = &PTR_FUN_14b95bba0;
  puStack_2c0[3] = 0;
  if (param_1 == 0) {
    *(undefined4 *)((longlong)puStack_2c0 + 0x1c) = 0;
    puStack_2c0[4] = &LAB_140ebee4e;
    *(undefined4 *)(puStack_2c0 + 5) = 0;
    FUN_14054d68c(&local_2b0,0x7998);
    uRam0000000000007923 = 0;
LAB_14111c9d8:
    uVar8 = 0;
    FUN_14111dba4(lVar4,0,&local_478);
    uVar6 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0xc);
    *(uint *)(puStack_2c0 + 3) = uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar2 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar2 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar2 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar2 = iVar9;
      }
    }
    *(int *)((longlong)puVar1 + 0x1c) = iVar2;
    puVar1[4] = &LAB_140ebee4e;
    *(undefined4 *)(puVar1 + 5) = 0;
    FUN_14054d68c(&local_2b0,param_1 + 0x7998);
    *(undefined1 *)(param_1 + 0x7923) = 0;
    if (param_1 == 0) goto LAB_14111c9d8;
    uVar8 = *(uint *)(param_1 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar2 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar2 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar2 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar2 = iVar9;
      }
    }
    FUN_14111dba4(lVar4,CONCAT44(iVar2,uVar8),&local_478);
    uVar8 = *(uint *)(param_1 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar6 = (ulonglong)*(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar3 = *(uint *)(lVar11 + 0x10);
      bVar12 = uVar3 == 0;
      if (bVar12) {
        *(uint *)(lVar11 + 0x10) = uVar10;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar12) {
        uVar3 = uVar10;
      }
      uVar6 = (ulonglong)uVar3;
    }
  }
  FUN_14111cd7e(lVar4,(ulonglong)uVar8 | uVar6 << 0x20,0x3f800000,0);
  FUN_14111cc7e(&local_478);
LAB_14111c983:
  if ((local_38 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14111cb14 FUN_14111cb14 body=93 status=ok
// SIG undefined FUN_14111cb14(void)

undefined8 * FUN_14111cb14(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14096d0ce(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1406fe49c(param_1,iVar1);
      FUN_1406fd06e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14111cb72 FUN_14111cb72 body=170 status=ok
// SIG undefined FUN_14111cb72(void)

void FUN_14111cb72(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x7922) == '\0') {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 0x7922) = 1;
      local_28 = 0;
      uStack_20 = 0;
      FUN_14111ce82(param_1 + 0x3b08,&local_28);
      FUN_14111cc1e(param_1 + 0x7938,&local_28);
      FUN_140771728(local_28,uStack_20 & 0xffffffff);
      if (local_28 != 0) {
        FUN_1400020a8();
      }
      lVar1 = FUN_14111d03a(param_1);
      *(bool *)(param_1 + 0x7923) = *(int *)(lVar1 + 8) != 0 || *(int *)(param_1 + 0x7940) != 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14111cc1e FUN_14111cc1e body=95 status=ok
// SIG undefined FUN_14111cc1e(void)

void FUN_14111cc1e(longlong *param_1,undefined8 *param_2)

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
    FUN_1411f53a0(param_1,iVar2);
  }
  FUN_1406fce23((longlong)iVar2 * 0x300 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 14111cc7e FUN_14111cc7e body=255 status=ok
// SIG undefined FUN_14111cc7e(void)

void FUN_14111cc7e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  param_1[0x39] = 0;
  FUN_14076ba36(param_1 + 0x3a);
  plVar1 = param_1 + 0x37;
  if ((int)param_1[0x38] != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14111ccba;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14111ccba:
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x184) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x184) = 0;
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x2c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  }
  FUN_140771728(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14096d0ce(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14111cd7e FUN_14111cd7e body=259 status=ok
// SIG undefined FUN_14111cd7e(void)

void FUN_14111cd7e(longlong param_1,undefined8 param_2,float param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x48))(param_1 + 0x20);
  if (lVar2 == 0) goto LAB_14111ce41;
  local_58 = param_2;
  iVar1 = FUN_1406fc600((longlong *)(param_1 + 0x30),
                        (uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2);
  if (iVar1 == -1) goto LAB_14111ce41;
  lVar4 = *(longlong *)(param_1 + 0x30);
  lVar3 = lVar4 + (longlong)iVar1 * 0x260;
  if ((lVar3 == 0) || (lVar4 = (longlong)iVar1 * 0x260 + lVar4 + 0x10, lVar4 == 0))
  goto LAB_14111ce41;
  *(undefined4 *)(lVar3 + 0x1a0) = param_4;
  *(float *)(lVar3 + 0x184) = param_3 + *(float *)(lVar3 + 0x184);
  *(int *)(lVar3 + 0x1a8) = *(int *)(lVar3 + 0x1a8) + 1;
  iVar1 = *(int *)(lVar3 + 0x1ac);
  if (iVar1 < 0) {
    *(undefined1 *)(lVar3 + 0x160) = 0;
LAB_14111ce73:
    FUN_1411f3d3e(iVar1,lVar4,*(undefined8 *)(lVar2 + 0x6d0));
  }
  else {
    *(bool *)(lVar3 + 0x160) = iVar1 < *(int *)(lVar3 + 0x30);
    if (*(int *)(lVar3 + 0x30) <= iVar1) goto LAB_14111ce73;
  }
  FUN_1406fc6c4(param_1);
LAB_14111ce41:
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14111ce82 FUN_14111ce82 body=438 status=ok
// SIG undefined FUN_14111ce82(void)

void FUN_14111ce82(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = (**(code **)(*param_1 + 8))();
  if (lVar2 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_60 = &local_40;
      local_40 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1478c0a72;
      local_70 = &LAB_1417b2375;
      local_78 = L"Engine";
      local_80 = 0x1000000000;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if (((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
       (lVar3 = FUN_1447210f0(lVar2), lVar3 != 0)) {
      lVar1 = param_1[2];
      if ((longlong)(int)lVar1 != 0) {
        lVar5 = param_1[1];
        lVar6 = 0;
        do {
          FUN_1488f809e(*(undefined8 *)(lVar5 + lVar6),lVar2,param_2);
          lVar6 = lVar6 + 0x10;
        } while ((longlong)(int)lVar1 * 0x10 != lVar6);
      }
      lVar1 = DAT_14cb85d50;
      lVar5 = (longlong)DAT_14cb85d58;
      if (lVar5 != 0) {
        lVar6 = 0;
        do {
          lVar4 = FUN_1410d0064(*(undefined8 *)(lVar1 + lVar6));
          if (lVar4 == lVar3) {
            FUN_1488f809e(*(undefined8 *)(lVar1 + lVar6),lVar2,param_2);
          }
          lVar6 = lVar6 + 0x10;
        } while (lVar5 * 0x10 != lVar6);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14111d03a FUN_14111d03a body=985 status=ok
// SIG undefined FUN_14111d03a(void)

longlong * FUN_14111d03a(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined **ppuVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_e8 [40];
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar8 = *(longlong *)(param_1 + 0x3f70);
  plVar1 = (longlong *)(param_1 + 0x7928);
  if ((lVar8 != 0) && (*(int *)(param_1 + 0x7930) == 0)) {
    if ((*(char *)(param_1 + 0x7948) == '\0') && (*(char *)(lVar8 + 0xc78) == '\x01')) {
      lVar7 = FUN_140c38791();
      if (*(int *)(lVar7 + 0x28) != *(int *)(lVar7 + 0x54)) {
        lVar8 = *(longlong *)(lVar8 + 0xfb0);
        uVar3 = (uint)((ulonglong)lVar8 >> 0x10);
        uVar12 = (uint)lVar8 & 0xffff;
        lVar11 = lVar7 + 0x58;
        if (*(longlong *)(lVar7 + 0x60) != 0) {
          lVar11 = *(longlong *)(lVar7 + 0x60);
        }
        iVar10 = *(int *)(lVar11 + (ulonglong)
                                   (*(int *)(lVar7 + 0x68) - 1U &
                                   (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar12)
                                   + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar12 >> 4)) * 4);
        if (iVar10 != -1) {
          do {
            lVar11 = *(longlong *)(lVar7 + 0x20) + (longlong)iVar10 * 0x78;
            if (*(longlong *)(*(longlong *)(lVar7 + 0x20) + (longlong)iVar10 * 0x78) == lVar8) {
              if (lVar11 != 0) {
                local_c0 = &PTR_FUN_14b023b08;
                local_b8 = *(undefined8 *)(lVar11 + 0x10);
                local_b0 = CONCAT44(local_b0._4_4_,*(undefined4 *)(lVar11 + 0x18));
                uStack_a8 = 0;
                local_a0 = CONCAT62(local_a0._2_6_,*(undefined2 *)(lVar11 + 0x28));
                uStack_98 = 0;
                local_90 = 0;
                uStack_88 = 0;
                FUN_1401f3db8(&uStack_98,lVar11 + 0x30);
                local_80 = *(undefined8 *)(lVar11 + 0x48);
                uStack_78 = CONCAT44(uStack_78._4_4_,*(undefined4 *)(lVar11 + 0x50));
                local_70 = 0;
                uStack_68 = 0;
                iVar10 = *(int *)(lVar11 + 0x68);
                uVar9 = *(undefined8 *)(lVar11 + 0x60);
                local_60 = CONCAT44(local_60._4_4_,iVar10);
                if (iVar10 == 0) {
                  local_60 = 0;
                }
                else {
                  FUN_140e8ac72(&uStack_68,iVar10,0);
                  FUN_140e8ab75(uStack_68,uVar9,iVar10);
                }
                goto LAB_14111d1bc;
              }
              break;
            }
            iVar10 = *(int *)(lVar11 + 0x70);
          } while (iVar10 != -1);
        }
      }
      local_a0 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = &PTR_FUN_14b023b08;
      local_b8 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0x3b9cbb9e;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
LAB_14111d1bc:
      iVar10 = *(int *)(param_1 + 0x7930);
      *(uint *)(param_1 + 0x7930) = iVar10 + 1U;
      if (*(uint *)(param_1 + 0x7934) < iVar10 + 1U) {
        FUN_14111da36(plVar1,iVar10);
      }
      lVar8 = *plVar1 + (longlong)iVar10 * 0x68;
      puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar10 * 0x68);
      *puVar2 = &PTR_FUN_14b023b08;
      puVar2[1] = local_b8;
      *(undefined4 *)(puVar2 + 2) = (undefined4)local_b0;
      puVar2[3] = 0;
      *(undefined2 *)(puVar2 + 4) = (undefined2)local_a0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      FUN_1401f3db8(puVar2 + 5,&uStack_98);
      uVar5 = local_60;
      uVar9 = uStack_68;
      puVar2[8] = local_80;
      *(undefined4 *)(puVar2 + 9) = (undefined4)uStack_78;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      *(int *)(puVar2 + 0xc) = (int)local_60;
      if ((int)local_60 == 0) {
        *(undefined4 *)(lVar8 + 100) = 0;
      }
      else {
        FUN_140e8ac72(lVar8 + 0x58,local_60 & 0xffffffff,0);
        FUN_140e8ab75(*(undefined8 *)(lVar8 + 0x58),uVar9,uVar5 & 0xffffffff);
      }
      FUN_140485912(&local_c0);
    }
    if (*(char *)(param_1 + 0x7949) == '\0') {
      FUN_14111d414(plVar1,*(longlong *)(param_1 + 0x3f70) + 0xc80);
      FUN_14111d414(plVar1,param_1 + 0x9a08);
    }
    if (*(char *)(param_1 + 0x794a) == '\0') {
      local_58 = *(undefined8 *)(param_1 + 0x3f70);
      lVar8 = FUN_140c38791();
      cVar6 = FUN_14111d4c6(&local_58,lVar8 + 0x70,plVar1);
      if (cVar6 == '\0') {
        uVar9 = FUN_140f7e331();
        FUN_14111d472(uVar9,&local_c0);
        ppuVar4 = local_c0;
        lVar8 = (longlong)(int)local_b8;
        if (lVar8 != 0) {
          lVar7 = 0;
          do {
            cVar6 = FUN_14111d4c6(&local_58,*(longlong *)((longlong)ppuVar4 + lVar7) + 0x1d0,plVar1)
            ;
            if (cVar6 != '\0') break;
            bVar13 = lVar8 * 8 + -8 != lVar7;
            lVar7 = lVar7 + 8;
          } while (bVar13);
        }
        if (local_c0 != (undefined **)0x0) {
          FUN_1400020a8(local_c0);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 14111d414 FUN_14111d414 body=93 status=ok
// SIG undefined FUN_14111d414(void)

void FUN_14111d414(longlong *param_1,undefined8 *param_2)

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
    FUN_14111da36(param_1,iVar2);
  }
  FUN_1406fd06e((longlong)iVar2 * 0x68 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 14111d472 FUN_14111d472 body=84 status=ok
// SIG undefined FUN_14111d472(void)

undefined8 * FUN_14111d472(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_141208f94(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  return param_2;
}



// FUNCTION 14111d4c6 FUN_14111d4c6 body=1391 status=ok
// SIG undefined FUN_14111d4c6(void)

undefined8 FUN_14111d4c6(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong *local_a8;
  uint *local_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar21 = *param_1;
  lVar9 = param_2[1];
  if (lVar9 == 0) {
    uVar8 = FUN_140261af2();
    lVar9 = FUN_14477b664(uVar8);
    param_2[1] = lVar9;
  }
  lVar12 = param_2[2];
  if (lVar12 == 0) {
    uVar8 = 0;
    if ((lVar9 == 0) || (*param_2 == 0)) goto LAB_14111d9d3;
    plVar22 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar22 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar22 + 0x108))(plVar22), cVar5 == '\0')) {
      param_2[2] = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar22 + 0x110))(plVar22);
      lVar12 = FUN_144aff482(uVar8,param_2);
      param_2[2] = lVar12;
      if (lVar12 != 0) goto LAB_14111d520;
    }
    uVar8 = 0;
  }
  else {
LAB_14111d520:
    local_78 = 0;
    uStack_70 = 0;
    FUN_14016a17c(lVar12);
    iVar15 = *(int *)(lVar12 + 0x58) - *(int *)(lVar12 + 0x84);
    if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar15);
    }
    uStack_70 = uStack_70 & 0xffffffff00000000;
    if (iVar15 != 0) {
      FUN_1418d66d2(&local_78);
    }
    puVar19 = (uint *)(lVar12 + 0x60);
    iVar15 = *(int *)(lVar12 + 0x78);
    local_b0 = lVar21;
    local_a8 = param_3;
    if (iVar15 == 0) {
      uVar20 = 1;
      uVar16 = 0;
      iVar6 = 0;
      iVar17 = 0;
    }
    else {
      puVar10 = *(uint **)(lVar12 + 0x70);
      if (*(uint **)(lVar12 + 0x70) == (uint *)0x0) {
        puVar10 = puVar19;
      }
      uVar18 = *puVar10;
      if (uVar18 == 0) {
        iVar6 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar6 = iVar15 + -1;
        }
        uVar16 = 0;
        uVar20 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar20 = uVar16;
        }
        iVar17 = 0;
        do {
          if (uVar20 == uVar16) goto LAB_14111d6de;
          iVar17 = iVar17 + 0x20;
          uVar18 = puVar10[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar16 = 0;
        iVar17 = 0;
      }
      uVar20 = (ulonglong)(-uVar18 & uVar18);
      uVar2 = uVar20 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar6 = (iVar17 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      if (iVar15 <= iVar6) {
        iVar6 = iVar15;
      }
    }
    if (iVar6 != iVar15) {
      uVar18 = 0xffffffff;
      do {
        uVar2 = uStack_70;
        uVar8 = *(undefined8 *)(*(longlong *)(lVar12 + 0x50) + 8 + (longlong)iVar6 * 0x18);
        lVar21 = (longlong)(int)uStack_70;
        uVar7 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
        if (uStack_70._4_4_ < uVar7) {
          local_a0 = puVar19;
          FUN_148cd0944(&local_78,uVar2 & 0xffffffff);
          puVar19 = local_a0;
        }
        *(undefined8 *)(local_78 + lVar21 * 8) = uVar8;
        uVar18 = uVar18 & ~(uint)uVar20;
        puVar10 = *(uint **)(lVar12 + 0x70);
        if (*(uint **)(lVar12 + 0x70) == (uint *)0x0) {
          puVar10 = puVar19;
        }
        iVar3 = *(int *)(lVar12 + 0x78);
        iVar6 = (int)uVar16;
        lVar21 = (longlong)iVar6;
        uVar7 = puVar10[lVar21] & uVar18;
        if (uVar7 == 0) {
          iVar13 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar13 = iVar3 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar17 = iVar17 + 0x20;
          iVar14 = iVar13;
          if (iVar13 < iVar6) {
            iVar14 = iVar6;
          }
          if (iVar6 < iVar13) {
            lVar9 = 0;
            do {
              uVar7 = puVar10[lVar21 + lVar9 + 1];
              if (uVar7 != 0) {
                uVar16 = (ulonglong)(iVar6 + (int)lVar9 + 1);
                uVar18 = 0xffffffff;
                goto LAB_14111d687;
              }
              iVar17 = iVar17 + 0x20;
              lVar9 = lVar9 + 1;
            } while (iVar14 - lVar21 != lVar9);
            uVar18 = 0xffffffff;
            iVar6 = iVar14;
          }
          uVar16 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_14111d687:
          uVar20 = (ulonglong)(-uVar7 & uVar7);
          uVar2 = uVar20 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar6 = (iVar17 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar15);
    }
LAB_14111d6de:
    if ((int)uStack_70 < 1) {
      uVar8 = 0;
    }
    else {
      lVar9 = 0;
      uVar8 = 0;
      lVar21 = local_b0;
      plVar22 = local_a8;
      iVar15 = (int)uStack_70;
      do {
        lVar12 = *(longlong *)(local_78 + lVar9 * 8);
        if (lVar12 != 0) {
          lStack_90 = 0;
          local_88 = 0;
          local_98 = *(longlong *)(lVar12 + 8);
          uVar11 = FUN_14477b664(*(undefined8 *)(lVar12 + 0x10));
          lStack_90 = FUN_14477b664(uVar11);
          local_88 = *(longlong *)(lVar12 + 0x18);
          if (lStack_90 == 0) {
            uVar11 = FUN_140927942();
            lStack_90 = FUN_14477b664(uVar11);
          }
          if (local_88 == 0) {
            local_88 = 0;
            if ((((lStack_90 != 0) && (local_98 != 0)) &&
                (plVar4 = *(longlong **)(lStack_90 + 0xb8), plVar4 != (longlong *)0x0)) &&
               (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 != '\0')) {
              uVar11 = (**(code **)(*plVar4 + 0x110))(plVar4);
              local_88 = FUN_144aff482(uVar11,&local_98);
              if (local_88 != 0) goto LAB_14111d778;
            }
          }
          else {
LAB_14111d778:
            lVar12 = local_88;
            if (lStack_90 == 0) {
              uVar11 = FUN_140927942();
              lStack_90 = FUN_14477b664(uVar11);
              lVar12 = local_88;
              if (local_88 == 0) {
                if (lStack_90 == 0) {
                  lVar12 = 0;
                }
                else {
                  lVar12 = 0;
                  if (local_98 != 0) {
                    plVar4 = *(longlong **)(lStack_90 + 0xb8);
                    if ((plVar4 == (longlong *)0x0) ||
                       (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
                      lVar12 = 0;
                      local_88 = lVar12;
                    }
                    else {
                      uVar11 = (**(code **)(*plVar4 + 0x110))(plVar4);
                      lVar12 = FUN_144aff482(uVar11,&local_98);
                      local_88 = lVar12;
                    }
                  }
                }
              }
            }
            if (lVar21 == lVar12) {
              lVar21 = *(longlong *)(local_78 + lVar9 * 8);
              iVar15 = (int)plVar22[1];
              *(uint *)(plVar22 + 1) = iVar15 + 1U;
              if (*(uint *)((longlong)plVar22 + 0xc) < iVar15 + 1U) {
                FUN_14111da36(plVar22,iVar15);
              }
              lVar12 = *plVar22 + (longlong)iVar15 * 0x68;
              puVar1 = (undefined8 *)(*plVar22 + (longlong)iVar15 * 0x68);
              *puVar1 = &PTR_FUN_14b023b08;
              puVar1[1] = *(undefined8 *)(lVar21 + 0x28);
              *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(lVar21 + 0x30);
              puVar1[3] = 0;
              *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(lVar21 + 0x40);
              puVar1[5] = 0;
              puVar1[6] = 0;
              puVar1[7] = 0;
              FUN_1401f3db8(puVar1 + 5,lVar21 + 0x48);
              puVar1[8] = *(undefined8 *)(lVar21 + 0x60);
              *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(lVar21 + 0x68);
              puVar1[10] = 0;
              puVar1[0xb] = 0;
              iVar15 = *(int *)(lVar21 + 0x80);
              uVar8 = *(undefined8 *)(lVar21 + 0x78);
              *(int *)(puVar1 + 0xc) = iVar15;
              if (iVar15 == 0) {
                *(undefined4 *)(lVar12 + 100) = 0;
              }
              else {
                FUN_140e8ac72(lVar12 + 0x58,iVar15,0);
                FUN_140e8ab75(*(undefined8 *)(lVar12 + 0x58),uVar8);
              }
              uVar8 = CONCAT71((uint7)(uint3)((uint)iVar15 >> 8),1);
              lVar21 = local_b0;
              plVar22 = local_a8;
            }
          }
          iVar15 = (int)uStack_70;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar15);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
LAB_14111d9d3:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14111da36 FUN_14111da36 body=366 status=ok
// SIG undefined FUN_14111da36(void)

void FUN_14111da36(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 0x68;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14111dabb;
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
LAB_14111dabb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x68)) {
    uVar7 = uVar5 / 0x68 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x68,8);
  return;
}



// FUNCTION 14111dba4 FUN_14111dba4 body=4096 status=ok
// SIG undefined FUN_14111dba4(void)

void FUN_14111dba4(longlong param_1,ulonglong param_2,longlong param_3)

{
  int *piVar1;
  uint *puVar2;
  void *_Src;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  char *pcVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  undefined4 *puVar26;
  int iVar27;
  uint uVar28;
  undefined8 *puVar29;
  longlong lVar30;
  undefined8 *puVar31;
  longlong *plVar32;
  undefined8 uVar33;
  ulonglong uVar34;
  longlong **pplVar35;
  longlong *plVar36;
  bool bVar37;
  bool bVar38;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8;
  ulonglong local_2a0;
  ulonglong *local_298;
  undefined8 local_290;
  longlong *local_288;
  longlong *local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_258;
  undefined4 local_250;
  char local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  undefined5 local_218;
  undefined3 uStack_213;
  undefined4 local_210;
  undefined1 local_20c;
  undefined7 uStack_20b;
  undefined4 local_204;
  ushort local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  longlong lStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_198 [8];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined1 uStack_137;
  undefined6 uStack_136;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 local_104;
  char local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  lVar18 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x48))(param_1 + 0x20);
  if ((lVar18 == 0) || (*(int *)(param_3 + 8) == 0 && *(int *)(param_3 + 0x18) == 0))
  goto LAB_14111ea1c;
  local_298 = (ulonglong *)(param_1 + 0x30);
  memset(&local_288,0,0x240);
  local_230 = DAT_14cb7bd68;
  local_228 = DAT_14cb7bd70;
  local_224 = DAT_14cb7bd80;
  local_21c = DAT_14cb7bd88;
  local_200 = local_200 & 0xff00;
  local_1f8 = 0;
  local_218 = 0;
  uStack_213 = 0;
  local_210 = 0;
  local_20c = 0;
  local_1f0 = 0xc000;
  local_1e8 = 0;
  lStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  local_198[2] = 0;
  local_198[3] = 0x3ff0000000000000;
  local_198[4] = 0;
  local_198[5] = 0;
  local_198[6] = 0;
  local_198[7] = 0;
  local_158 = 0;
  uStack_154 = 0x3ff00000;
  uStack_150 = 0;
  uStack_14c = 0x3ff00000;
  local_148 = 0x3ff0000000000000;
  uStack_140 = 0;
  uStack_137 = 0;
  uStack_130 = DAT_14c8464e0;
  uStack_128 = DAT_14c8464e8;
  uStack_120 = DAT_14c8464f0;
  local_fc = 0;
  uStack_f4 = 0xffffffff00000000;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_ec = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  local_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  local_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0xffffffff;
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 100) == 0) {
    iVar27 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = iVar27 + 1;
    if (*(int *)(param_1 + 0x3c) == iVar27) {
      FUN_143dbc0ba(local_298,iVar27);
    }
    lVar30 = (longlong)iVar27;
    iVar17 = FUN_144a54ea4(param_1 + 0x40,1);
    lVar20 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar20 = param_1 + 0x40;
    }
    iVar15 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar15 = iVar17;
    }
    bVar5 = (byte)iVar17 & 0x1f;
    puVar2 = (uint *)(lVar20 + (longlong)(iVar15 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar27 = *(int *)(param_1 + 0x60);
    lVar30 = (longlong)iVar27;
    iVar17 = *(int *)(*(longlong *)(param_1 + 0x30) + 4 + lVar30 * 0x260);
    *(int *)(param_1 + 0x60) = iVar17;
    iVar15 = *(int *)(param_1 + 100) + -1;
    *(int *)(param_1 + 100) = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar17 * 0x260) = 0xffffffff;
    }
  }
  lVar20 = param_1 + 0x40;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar20 = *(longlong *)(param_1 + 0x50);
  }
  iVar17 = iVar27 + 0x1f;
  if (-1 < iVar27) {
    iVar17 = iVar27;
  }
  puVar2 = (uint *)(lVar20 + (longlong)(iVar17 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar27 & 0x1f);
  lVar20 = *(longlong *)(param_1 + 0x30);
  lVar30 = lVar30 * 0x260;
  puVar21 = (undefined8 *)(lVar20 + lVar30);
  *(ulonglong *)(lVar20 + lVar30) = param_2;
  *(longlong **)(lVar20 + 0x10 + lVar30) = local_288;
  *(undefined8 *)(lVar20 + 0x18 + lVar30) = 0;
  *(longlong **)(lVar20 + 0x18 + lVar30) = local_280;
  local_280 = (longlong *)0x0;
  *(undefined4 *)(lVar20 + 0x20 + lVar30) = (undefined4)local_278;
  *(undefined4 *)(lVar20 + 0x24 + lVar30) = local_278._4_4_;
  local_278 = 0;
  *(undefined8 *)(lVar20 + 0x28 + lVar30) = 0;
  *(undefined8 *)(lVar20 + 0x28 + lVar30) = local_270;
  local_270 = 0;
  *(undefined4 *)(lVar20 + 0x30 + lVar30) = (undefined4)local_268;
  *(undefined4 *)(lVar20 + 0x34 + lVar30) = local_268._4_4_;
  local_268 = 0;
  *(undefined8 *)(lVar20 + 0x40 + lVar30) = local_258;
  *(char *)(lVar20 + 0x4c + lVar30) = local_24c;
  if (local_24c == '\x01') {
    *(undefined4 *)(puVar21 + 9) = local_250;
  }
  puVar21[0xc] = local_238;
  *(undefined4 *)(puVar21 + 10) = local_248;
  *(undefined4 *)((longlong)puVar21 + 0x54) = uStack_244;
  *(undefined4 *)(puVar21 + 0xb) = uStack_240;
  *(undefined4 *)((longlong)puVar21 + 0x5c) = uStack_23c;
  *(undefined4 *)(puVar21 + 0xe) = local_228;
  puVar21[0xd] = local_230;
  *(undefined4 *)((longlong)puVar21 + 0x7c) = local_21c;
  *(undefined8 *)((longlong)puVar21 + 0x74) = local_224;
  *(undefined4 *)(puVar21 + 0x11) = local_210;
  puVar21[0x10] = CONCAT35(uStack_213,local_218);
  *(ulonglong *)((longlong)puVar21 + 0x8c) = CONCAT71(uStack_20b,local_20c);
  *(undefined4 *)((longlong)puVar21 + 0x94) = local_204;
  *(ushort *)(puVar21 + 0x13) = local_200;
  puVar21[0x14] = local_1f8;
  *(undefined4 *)(puVar21 + 0x15) = local_1f0;
  puVar21[0x16] = 0;
  puVar21[0x17] = lStack_1e0;
  local_2a0 = param_2;
  if ((lStack_1e0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar21[0x1e] = local_1a8;
  puVar21[0x1c] = local_1b8;
  puVar21[0x1d] = uStack_1b0;
  puVar21[0x1a] = local_1c8;
  puVar21[0x1b] = uStack_1c0;
  puVar21[0x18] = local_1d8;
  puVar21[0x19] = uStack_1d0;
  puVar29 = local_198;
  puVar31 = puVar21 + 0x20;
  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar31 = *puVar29;
    puVar29 = puVar29 + 1;
    puVar31 = puVar31 + 1;
  }
  *(undefined4 *)(puVar21 + 0x32) = local_108;
  *(undefined4 *)(puVar21 + 0x30) = (undefined4)local_118;
  *(undefined4 *)((longlong)puVar21 + 0x184) = local_118._4_4_;
  *(undefined4 *)(puVar21 + 0x31) = (undefined4)uStack_110;
  *(undefined4 *)((longlong)puVar21 + 0x18c) = uStack_110._4_4_;
  puVar21[0x2e] = uStack_128;
  puVar21[0x2f] = uStack_120;
  puVar21[0x2c] = CONCAT62(uStack_136,CONCAT11(uStack_137,local_138));
  puVar21[0x2d] = uStack_130;
  *(char *)(puVar21 + 0x33) = local_100;
  if (local_100 == '\x01') {
    *(undefined4 *)((longlong)puVar21 + 0x194) = local_104;
  }
  *(undefined4 *)((longlong)puVar21 + 0x1ac) = local_ec;
  *(ulonglong *)((longlong)puVar21 + 0x19c) = CONCAT44(uStack_f8,local_fc);
  *(undefined8 *)((longlong)puVar21 + 0x1a4) = uStack_f4;
  puVar21[0x36] = 0;
  puVar21[0x36] = CONCAT44(uStack_e4,uStack_e8);
  uStack_e8 = 0;
  uStack_e4 = 0;
  *(undefined4 *)(puVar21 + 0x37) = uStack_e0;
  *(undefined4 *)((longlong)puVar21 + 0x1bc) = uStack_dc;
  uStack_e0 = 0;
  uStack_dc = 0;
  puVar21[0x38] = 0;
  puVar21[0x38] = CONCAT44(uStack_d4,uStack_d8);
  uStack_d8 = 0;
  uStack_d4 = 0;
  *(undefined4 *)(puVar21 + 0x39) = uStack_d0;
  *(undefined4 *)((longlong)puVar21 + 0x1cc) = local_cc;
  uStack_d0 = 0;
  local_cc = 0;
  *(ulonglong *)((longlong)puVar21 + 0x1dc) = CONCAT44(uStack_b8,local_bc);
  *(ulonglong *)((longlong)puVar21 + 0x1e4) = CONCAT44(uStack_b0,uStack_b4);
  puVar21[0x3a] = CONCAT44(uStack_c4,uStack_c8);
  puVar21[0x3b] = CONCAT44(local_bc,uStack_c0);
  puVar21[0x3e] = local_a8;
  puVar21[0x3f] = uStack_a0;
  puVar21[0x40] = local_98;
  puVar21[0x41] = 0;
  puVar21[0x41] = uStack_90;
  uStack_90 = 0;
  *(undefined4 *)(puVar21 + 0x42) = (undefined4)local_88;
  *(undefined4 *)((longlong)puVar21 + 0x214) = local_88._4_4_;
  local_88 = 0;
  puVar21[0x43] = 0;
  *(undefined4 *)(puVar21 + 0x44) = 0;
  puVar21[0x43] = local_80;
  local_80 = 0;
  *(undefined4 *)(puVar21 + 0x44) = local_78;
  local_78 = 0;
  puVar21[0x45] = local_70;
  puVar21[0x46] = uStack_68;
  local_70 = 0;
  uStack_68 = 0;
  puVar21[0x47] = 0;
  puVar21[0x47] = local_60;
  local_60 = 0;
  *(undefined4 *)(puVar21 + 0x48) = (undefined4)uStack_58;
  *(undefined4 *)((longlong)puVar21 + 0x244) = uStack_58._4_4_;
  uStack_58 = 0;
  *(undefined1 *)(puVar21 + 0x49) = local_50;
  *(undefined4 *)(puVar21 + 0x4a) = 0xffffffff;
  uVar33 = *puVar21;
  uVar28 = (uint)((ulonglong)uVar33 >> 0x20) ^ (uint)uVar33;
  iVar17 = 1;
  if (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 100) == 1) {
    uVar16 = 1;
LAB_14111e1e3:
    iVar15 = iVar27;
    if (((int)uVar16 < 1) || (iVar17 <= *(int *)(param_1 + 0x78))) {
      uVar28 = *(int *)(param_1 + 0x78) - 1U & uVar28;
      *(uint *)((longlong)puVar21 + 0x254) = uVar28;
      lVar20 = *(longlong *)(param_1 + 0x70);
      if (*(longlong *)(param_1 + 0x70) == 0) {
        lVar20 = param_1 + 0x68;
      }
      *(undefined4 *)(puVar21 + 0x4a) =
           *(undefined4 *)
            (lVar20 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)(int)uVar28) * 4);
      lVar20 = *(longlong *)(param_1 + 0x70);
      if (*(longlong *)(param_1 + 0x70) == 0) {
        lVar20 = param_1 + 0x68;
      }
      *(int *)(lVar20 + ((longlong)*(int *)(param_1 + 0x78) - 1U & (longlong)(int)uVar28) * 4) =
           iVar27;
    }
    else {
      *(int *)(param_1 + 0x78) = iVar17;
      FUN_146554be4(local_298);
    }
  }
  else {
    local_290 = uVar33;
    iVar15 = FUN_1406fc600(local_298,uVar28);
    puVar25 = local_298;
    if (iVar15 == -1) {
      uVar16 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 100);
      if (3 < uVar16) {
        uVar24 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
        lVar20 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar17 = 1 << ((byte)lVar20 & 0x1f);
      }
      goto LAB_14111e1e3;
    }
    lVar20 = *local_298;
    FUN_1406fcf4a((longlong)iVar15 * 0x260 + lVar20 + 0x10);
    memmove((void *)(lVar20 + (longlong)iVar15 * 0x260),puVar21,0x250);
    FUN_140cfe2c8(puVar25,iVar27);
  }
  uVar24 = local_2a0;
  lVar20 = *local_298;
  lVar30 = (longlong)iVar15 * 0x260;
  FUN_1406fcf4a(&local_288);
  puVar21 = (undefined8 *)(lVar20 + lVar30 + 0x40);
  *puVar21 = *(undefined8 *)(param_3 + 0x20);
  if ((undefined8 *)(param_3 + 0x20) != puVar21) {
    pcVar19 = (char *)(lVar20 + lVar30 + 0x4c);
    if (*(char *)(param_3 + 0x2c) == '\x01') {
      *(undefined4 *)(lVar20 + lVar30 + 0x48) = *(undefined4 *)(param_3 + 0x28);
      cVar14 = '\x01';
    }
    else {
      if (*pcVar19 != '\x01') goto LAB_14111e294;
      cVar14 = '\0';
    }
    *pcVar19 = cVar14;
  }
LAB_14111e294:
  lVar23 = lVar20 + lVar30;
  puVar21 = (undefined8 *)(param_3 + 0x30);
  puVar29 = (undefined8 *)(lVar23 + 0x50);
  for (lVar22 = 9; lVar22 != 0; lVar22 = lVar22 + -1) {
    *puVar29 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar29 = puVar29 + 1;
  }
  *(undefined2 *)(lVar23 + 0x98) = *(undefined2 *)(param_3 + 0x78);
  if ((*(longlong *)(lVar23 + 0xa0) != *(longlong *)(param_3 + 0x80)) ||
     (*(int *)(lVar20 + 0xa8 + lVar30) != *(int *)(param_3 + 0x88))) {
    lVar23 = lVar20 + lVar30;
    *(longlong *)(lVar23 + 0xa0) = *(longlong *)(param_3 + 0x80);
    *(undefined4 *)(lVar23 + 0xa8) = *(undefined4 *)(param_3 + 0x88);
    *(undefined8 *)(lVar23 + 0xb0) = 0;
  }
  puVar25 = (ulonglong *)(lVar20 + lVar30 + 0x10);
  lVar23 = *(longlong *)(param_3 + 0x98);
  if (DAT_14c950c29 == 1) {
    if (lVar23 == 0) {
      lVar23 = 0;
      uVar24 = local_2a0;
    }
    else {
      FUN_1456cec3c();
      lVar23 = *(longlong *)(param_3 + 0x98);
      uVar24 = local_2a0;
    }
  }
  lVar22 = lVar20 + lVar30;
  *(longlong *)(lVar22 + 0xb8) = lVar23;
  uVar6 = *(undefined4 *)(param_3 + 0xa4);
  uVar7 = *(undefined4 *)(param_3 + 0xa8);
  uVar8 = *(undefined4 *)(param_3 + 0xac);
  uVar33 = *(undefined8 *)(param_3 + 0xb0);
  uVar13 = *(undefined8 *)(param_3 + 0xb8);
  uVar9 = *(undefined4 *)(param_3 + 0xc0);
  uVar10 = *(undefined4 *)(param_3 + 0xc4);
  uVar11 = *(undefined4 *)(param_3 + 200);
  uVar12 = *(undefined4 *)(param_3 + 0xcc);
  *(undefined4 *)(lVar22 + 0xc0) = *(undefined4 *)(param_3 + 0xa0);
  *(undefined4 *)(lVar22 + 0xc4) = uVar6;
  *(undefined4 *)(lVar22 + 200) = uVar7;
  *(undefined4 *)(lVar22 + 0xcc) = uVar8;
  *(undefined8 *)(lVar22 + 0xd0) = uVar33;
  *(undefined8 *)(lVar22 + 0xd8) = uVar13;
  *(undefined4 *)(lVar22 + 0xe0) = uVar9;
  *(undefined4 *)(lVar22 + 0xe4) = uVar10;
  *(undefined4 *)(lVar22 + 0xe8) = uVar11;
  *(undefined4 *)(lVar22 + 0xec) = uVar12;
  *(undefined8 *)(lVar22 + 0xf0) = *(undefined8 *)(param_3 + 0xd0);
  puVar21 = (undefined8 *)(param_3 + 0xe0);
  puVar29 = (undefined8 *)(lVar22 + 0x100);
  for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
    *puVar29 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar29 = puVar29 + 1;
  }
  *puVar25 = uVar24;
  lVar23 = lVar20 + lVar30;
  local_298 = puVar25;
  FUN_1406fa324(lVar23 + 0x1c0,param_3 + 0x150);
  *(undefined8 *)(lVar23 + 0x1d0) = *(undefined8 *)(param_3 + 0x160);
  *(undefined4 *)(lVar23 + 0x1e8) = *(undefined4 *)(param_3 + 0x168);
  *(undefined8 *)(lVar23 + 0x1d8) = *(undefined8 *)(param_3 + 0x16c);
  *(undefined8 *)(lVar23 + 0x1e0) = *(undefined8 *)(param_3 + 0x178);
  *(undefined8 *)(lVar23 + 0x1f0) = *(undefined8 *)(param_3 + 400);
  uVar6 = *(undefined4 *)(param_3 + 0x19c);
  uVar7 = *(undefined4 *)(param_3 + 0x1a0);
  uVar8 = *(undefined4 *)(param_3 + 0x1a4);
  *(undefined4 *)(lVar23 + 0x1f8) = *(undefined4 *)(param_3 + 0x198);
  *(undefined4 *)(lVar23 + 0x1fc) = uVar6;
  *(undefined4 *)(lVar23 + 0x200) = uVar7;
  *(undefined4 *)(lVar23 + 0x204) = uVar8;
  puVar21 = (undefined8 *)(lVar20 + lVar30 + 0x208);
  if (puVar21 != (undefined8 *)(param_3 + 0x1a8)) {
    iVar27 = *(int *)(param_3 + 0x1b0);
    _Src = *(void **)(param_3 + 0x1a8);
    *(int *)(lVar20 + 0x210 + lVar30) = iVar27;
    if (iVar27 == 0 && *(int *)(lVar20 + 0x214 + lVar30) == 0) {
      *(undefined4 *)(lVar20 + lVar30 + 0x214) = 0;
    }
    else {
      FUN_1446dd670(puVar21,iVar27);
      if (iVar27 != 0) {
        memcpy((void *)*puVar21,_Src,(longlong)iVar27 * 2);
      }
    }
  }
  FUN_14009d848(lVar20 + lVar30 + 0x218,param_3 + 0x1b8);
  puVar26 = (undefined4 *)(lVar20 + lVar30 + 0x194);
  if ((undefined4 *)(param_3 + 0x180) != puVar26) {
    pcVar19 = (char *)(lVar20 + lVar30 + 0x198);
    if (*(char *)(param_3 + 0x184) == '\x01') {
      *puVar26 = *(undefined4 *)(param_3 + 0x180);
      cVar14 = '\x01';
    }
    else {
      if (*pcVar19 != '\x01') goto LAB_14111e46b;
      cVar14 = '\0';
    }
    *pcVar19 = cVar14;
  }
LAB_14111e46b:
  *(undefined4 *)(lVar20 + 0x19c + lVar30) = *(undefined4 *)(param_3 + 0x148);
  *(undefined4 *)(lVar20 + 0x1a4 + lVar30) = *(undefined4 *)(param_3 + 0x144);
  *(undefined1 *)(lVar20 + 0x161 + lVar30) = *(undefined1 *)(param_3 + 0x188);
  uVar28 = -(uint)(0.0 < *(float *)(param_3 + 0x140));
  uVar28 = ~uVar28 & 0x3f800000 | (uint)*(float *)(param_3 + 0x140) & uVar28;
  *(uint *)(lVar20 + 0x188 + lVar30) = uVar28;
  *(uint *)(lVar20 + 0x18c + lVar30) = uVar28;
  if (*(int *)(param_3 + 8) != 0) {
    FUN_14111cb14(lVar20 + lVar30 + 0x28,param_3);
  }
  cVar14 = FUN_140dbf4b8(param_3 + 0x1c8);
  if (cVar14 != '\0') {
    FUN_1409e0c66(&local_288,lVar18);
    uVar24 = local_2a0;
    if (local_280 != (longlong *)0x0) {
      uVar34 = local_2a0 >> 0x20;
      iVar27 = (int)local_280[1];
      do {
        if (iVar27 == 0) {
          plVar32 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar17 = (int)local_280[1];
        bVar37 = iVar27 == iVar17;
        if (bVar37) {
          *(int *)(local_280 + 1) = iVar27 + 1;
          iVar17 = iVar27;
        }
        iVar27 = iVar17;
        UNLOCK();
        plVar32 = local_280;
      } while (!bVar37);
      LOCK();
      piVar1 = (int *)((longlong)local_280 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_280 + 0x10))();
      }
      if (plVar32 != (longlong *)0x0) {
        if (local_288 != (longlong *)0x0) {
          if (uVar34 == 0) {
LAB_14111ea5d:
            uVar33 = 0;
          }
          else {
            uVar33 = 0;
            uVar28 = (uint)local_2a0;
            if ((-1 < (int)uVar28) && ((int)uVar28 < DAT_14c9647dc)) {
              puVar21 = (undefined8 *)
                        ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                        *(longlong *)
                         (DAT_14c9647c8 + (ulonglong)((uint)(local_2a0 >> 0xd) & 0x3fff8)));
              if ((puVar21 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar21 + 2) != (int)(uVar24 >> 0x20) ||
                  ((*(uint *)(puVar21 + 1) & 0x10200000) != 0)))) goto LAB_14111ea5d;
              uVar33 = *puVar21;
            }
          }
          local_2a8 = 0;
          FUN_140a41f04(local_288,&local_288,uVar33,param_3 + 0x1c8);
          plVar3 = local_280;
          pplVar35 = (longlong **)(lVar20 + lVar30 + 0x228);
          if (pplVar35 != &local_288) {
            *pplVar35 = local_288;
            local_288 = (longlong *)0x0;
            plVar36 = *(longlong **)(lVar20 + 0x230 + lVar30);
            if (local_280 != plVar36) {
              local_280 = (longlong *)0x0;
              *(longlong **)(lVar20 + lVar30 + 0x230) = plVar3;
              if (plVar36 != (longlong *)0x0) {
                LOCK();
                plVar3 = plVar36 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*plVar36)(plVar36);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar36 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar36 + 0x10))(plVar36);
                  }
                }
              }
            }
          }
          plVar3 = local_280;
          if (local_280 != (longlong *)0x0) {
            LOCK();
            plVar36 = local_280 + 1;
            *(int *)plVar36 = (int)*plVar36 + -1;
            UNLOCK();
            if ((int)*plVar36 == 0) {
              (**(code **)*local_280)(local_280);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          plVar3 = *pplVar35;
          if (plVar3 != (longlong *)0x0) {
            *(undefined1 *)(lVar20 + 0x248 + lVar30) = 1;
            local_288 = (longlong *)0x0;
            local_280 = (longlong *)((ulonglong)local_280 & 0xffffffff00000000);
            lVar18 = 0;
            FUN_1446efa72(&local_288,0,4,0x10);
            local_280 = (longlong *)CONCAT44(local_280._4_4_,4);
            plVar36 = *(longlong **)(param_1 + 0x18);
            bVar37 = true;
            if (plVar36 == (longlong *)0x0) {
              plVar36 = (longlong *)0x0;
            }
            else {
              iVar27 = (int)plVar36[1];
              lVar18 = 0;
              do {
                if (iVar27 == 0) {
                  plVar36 = (longlong *)0x0;
                  goto LAB_14111e7cf;
                }
                LOCK();
                iVar17 = (int)plVar36[1];
                bVar38 = iVar27 == iVar17;
                if (bVar38) {
                  *(int *)(plVar36 + 1) = iVar27 + 1;
                  iVar17 = iVar27;
                }
                iVar27 = iVar17;
                UNLOCK();
              } while (!bVar38);
              lVar18 = *(longlong *)(param_1 + 0x10);
              LOCK();
              *(int *)(plVar36 + 1) = (int)plVar36[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar36 + 1) = (int)plVar36[1] + 1;
              UNLOCK();
              bVar37 = false;
            }
LAB_14111e7cf:
            *local_288 = (longlong)&PTR_LAB_14b413370;
            local_288[1] = local_2a0;
            LOCK();
            UNLOCK();
            lVar30 = DAT_14c758608 + 1;
            lVar20 = DAT_14c758608 + 1;
            if (lVar30 == 0) {
              LOCK();
              UNLOCK();
              lVar30 = DAT_14c758608 + 2;
              lVar20 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar20;
            local_288[2] = lVar30;
            *local_288 = (longlong)&PTR_FUN_14b413300;
            local_288[3] = lVar18;
            local_288[4] = (longlong)plVar36;
            if (bVar37) {
              local_288[5] = (longlong)FUN_143db376a;
              *(undefined4 *)(local_288 + 6) = 0;
            }
            else {
              LOCK();
              *(int *)((longlong)plVar36 + 0xc) = *(int *)((longlong)plVar36 + 0xc) + 1;
              UNLOCK();
              local_288[5] = (longlong)FUN_143db376a;
              *(undefined4 *)(local_288 + 6) = 0;
              LOCK();
              plVar4 = plVar36 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*plVar36)(plVar36);
                LOCK();
                piVar1 = (int *)((longlong)plVar36 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar36 + 0x10))(plVar36);
                }
              }
              LOCK();
              plVar4 = plVar36 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*plVar36)(plVar36);
                LOCK();
                piVar1 = (int *)((longlong)plVar36 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar36 + 0x10))(plVar36);
                }
              }
              LOCK();
              plVar4 = plVar36 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*plVar36)(plVar36);
                LOCK();
                piVar1 = (int *)((longlong)plVar36 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar36 + 0x10))(plVar36);
                }
              }
            }
            if (((int)local_280 == 0) || (local_288 == (longlong *)0x0)) {
LAB_14111eb58:
              if ((int)local_280 != 0) {
                if (local_288 == (longlong *)0x0) goto LAB_14111e9e4;
                (**(code **)*local_288)(local_288,0);
                FUN_1446efa72(&local_288,0,0,0x10);
                goto LAB_14111e9ce;
              }
            }
            else {
              cVar14 = (**(code **)(*local_288 + 0x30))();
              if (cVar14 == '\0') {
                goto LAB_14111eb58;
              }
              plVar36 = plVar3 + 0x26;
              if (*(int *)((longlong)plVar3 + 0x144) < 1) {
                iVar27 = (int)plVar3[0x27];
                iVar17 = (int)plVar3[0x28] + -1;
                *(int *)(plVar3 + 0x28) = iVar17;
                if (iVar17 <= iVar27) {
                  iVar17 = iVar27;
                  if (0 < iVar27) {
                    iVar15 = 0;
                    do {
                      if (((*(int *)(*plVar36 + 8 + (longlong)iVar15 * 0x10) == 0) ||
                          (plVar4 = *(longlong **)(*plVar36 + (longlong)iVar15 * 0x10),
                          plVar4 == (longlong *)0x0)) ||
                         (cVar14 = (**(code **)(*plVar4 + 0x28))(), cVar14 != '\0')) {
                        FUN_14005b288(plVar36,iVar15);
                        FUN_14005b248(plVar36);
                      }
                      else {
                        iVar15 = iVar15 + 1;
                      }
                      iVar17 = (int)plVar3[0x27];
                    } while (iVar15 < iVar17);
                  }
                  iVar15 = 2;
                  if (2 < iVar17 * 2) {
                    iVar15 = iVar17 * 2;
                  }
                  *(int *)(plVar3 + 0x28) = iVar15;
                  if ((iVar15 < iVar27) && (*(int *)((longlong)plVar3 + 0x13c) != iVar17)) {
                    FUN_14045812c();
                  }
                }
              }
              if (((int)local_280 != 0) && (local_288 != (longlong *)0x0)) {
                (**(code **)(*local_288 + 0x38))(local_288,&local_290);
              }
              iVar27 = (int)plVar3[0x27];
              *(uint *)(plVar3 + 0x27) = iVar27 + 1U;
              if (*(uint *)((longlong)plVar3 + 0x13c) < iVar27 + 1U) {
                FUN_1447a71f6(plVar36,iVar27);
              }
              lVar18 = *plVar36;
              lVar20 = (longlong)iVar27 * 0x10;
              *(undefined8 *)(lVar18 + lVar20) = 0;
              *(undefined4 *)(lVar18 + 8 + lVar20) = 0;
              *(longlong **)(lVar18 + lVar20) = local_288;
              local_288 = (longlong *)0x0;
              *(int *)(lVar18 + 8 + lVar20) = (int)local_280;
LAB_14111e9ce:
              local_280 = (longlong *)((ulonglong)local_280 & 0xffffffff00000000);
            }
            if (local_288 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
        }
LAB_14111e9e4:
        LOCK();
        plVar3 = plVar32 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar32)(plVar32);
          LOCK();
          piVar1 = (int *)((longlong)plVar32 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar32 + 0x10))(plVar32);
          }
        }
      }
    }
  }
  FUN_1411f4436(local_298,param_3 + 0x10);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_1406fc6c4(param_1);
  }
LAB_14111ea1c:
  if ((local_48 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14111eba6 FUN_14111eba6 body=60 status=ok
// SIG undefined FUN_14111eba6(void)

void FUN_14111eba6(longlong param_1)

{
  FUN_14111ebe2();
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(int *)(param_1 + 0x13c) == 0) {
    return;
  }
  FUN_14580b4ba(param_1 + 0x130,0);
  return;
}



// FUNCTION 14111ebe2 FUN_14111ebe2 body=300 status=ok
// SIG undefined FUN_14111ebe2(void)

void FUN_14111ebe2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((0 < *(int *)(param_1 + 0x138)) && (lVar1 = FUN_14479d2ce(param_1 + 0x120), lVar1 != 0)) &&
      ((lVar2 = *(longlong *)(lVar1 + 0xb0), lVar2 != 0 ||
       (lVar2 = FUN_1448abda6(lVar1), lVar2 != 0)))) && (*(longlong *)(lVar2 + 0x218) != 0)) {
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_14580b476(local_28,*(undefined4 *)(param_1 + 0x138));
    if (0 < *(int *)(param_1 + 0x138)) {
      lVar1 = 0;
      lVar3 = 0;
      do {
        *(undefined4 *)(local_28[0] + lVar1) = 2;
        *(undefined8 *)(local_28[0] + 8 + lVar1) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x130) + lVar3 * 8);
        lVar3 = lVar3 + 1;
        lVar1 = lVar1 + 0xe0;
      } while (lVar3 < *(int *)(param_1 + 0x138));
    }
    (**(code **)(**(longlong **)(lVar2 + 0x218) + 0x140))(*(longlong **)(lVar2 + 0x218),local_28);
    *(undefined4 *)(param_1 + 0x138) = 0;
    if (*(int *)(param_1 + 0x13c) != 0) {
      FUN_14580b4ba(param_1 + 0x130,0);
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14111ed0f FUN_14111ed0f body=819 status=ok
// SIG undefined FUN_14111ed0f(void)

void FUN_14111ed0f(ulonglong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 *local_60;
  longlong **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != '\0') {
    if (DAT_14c9a7d10 == (longlong *)0x0) {
      DAT_14c9a7d10 = (longlong *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    plVar3 = DAT_14c9a7d10;
    cVar6 = FUN_14111f043(param_1,DAT_14c9a7d10[3]);
    if ((cVar6 != '\0') && (lVar8 = (longlong)(int)plVar3[1], lVar8 != 0)) {
      lVar14 = *plVar3;
      lVar8 = lVar8 * 0x78 + lVar14;
      uVar7 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar7 = uVar7 >> 0x10 ^ uVar7;
      do {
        if (*(int *)(lVar14 + 0x30) != *(int *)(lVar14 + 0x5c)) {
          lVar12 = *(longlong *)(lVar14 + 0x68);
          if (*(longlong *)(lVar14 + 0x68) == 0) {
            lVar12 = lVar14 + 0x60;
          }
          iVar10 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar14 + 0x70) - 1U & uVar7) * 4);
          if (iVar10 != -1) {
            plVar3 = (longlong *)(lVar14 + 0x28);
            do {
              lVar12 = *plVar3 + (longlong)iVar10 * 0x20;
              if (*(ulonglong *)(*plVar3 + (longlong)iVar10 * 0x20) == param_1) {
                if (lVar12 != 0) {
                  local_70 = *(longlong **)(lVar12 + 8);
                  local_68 = *(longlong **)(lVar12 + 0x10);
                  if (local_68 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
                    UNLOCK();
                  }
                  if (local_70 == (longlong *)0x0) goto LAB_14111eec7;
                  if (*(int *)(lVar14 + 0x30) == *(int *)(lVar14 + 0x5c)) goto LAB_14111eeb2;
                  lVar12 = lVar14 + 0x60;
                  if (*(longlong *)(lVar14 + 0x68) != 0) {
                    lVar12 = *(longlong *)(lVar14 + 0x68);
                  }
                  iVar10 = *(int *)(lVar12 + ((longlong)(int)uVar7 &
                                             (longlong)*(int *)(lVar14 + 0x70) - 1U) * 4);
                  if (iVar10 == -1) goto LAB_14111eeb2;
                  lVar4 = *plVar3;
                  goto LAB_14111ee60;
                }
                break;
              }
              iVar10 = *(int *)(lVar12 + 0x18);
            } while (iVar10 != -1);
          }
        }
LAB_14111edae:
        lVar14 = lVar14 + 0x78;
      } while (lVar14 != lVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14111ee60:
  lVar11 = (longlong)iVar10 * 0x20;
  lVar2 = lVar4 + lVar11;
  if (*(ulonglong *)(lVar4 + lVar11) != param_1) goto LAB_14111efcc;
  iVar13 = *(int *)(lVar12 + (longlong)*(int *)(lVar2 + 0x1c) * 4);
  if (iVar13 == iVar10) {
    piVar9 = (int *)(lVar12 + (longlong)*(int *)(lVar2 + 0x1c) * 4);
  }
  else {
    do {
      piVar9 = (int *)((longlong)iVar13 * 0x20 + lVar4 + 0x18);
      iVar13 = *piVar9;
    } while (iVar13 != iVar10);
  }
  *piVar9 = *(int *)(lVar2 + 0x18);
  plVar5 = *(longlong **)(*plVar3 + 0x10 + lVar11);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar9 = (int *)((longlong)plVar5 + 0xc);
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_14111f098(plVar3);
LAB_14111eeb2:
  if (((*(byte *)(lVar14 + 0x20) & 0x20) == 0) || ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) == 0))
  {
LAB_14111eeba:
    (**(code **)(*local_70 + 8))(local_70,0);
  }
  else {
    lVar12 = 0;
    while (lVar4 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar12),
          *(ulonglong *)(lVar4 + 0x360) != param_1) {
      lVar12 = lVar12 + 8;
      if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 == lVar12) goto LAB_14111eeba;
    }
    if ((lVar4 == 0) || (*(char *)(lVar4 + 0x88) != '\x01')) goto LAB_14111eeba;
    local_78 = *(undefined8 *)(lVar4 + 0x80);
    (**(code **)(*local_70 + 8))();
    FUN_140457ffc(param_1 + 0x7a0,local_70);
    local_60 = &local_78;
    local_58 = &local_70;
    FUN_14111f10c(plVar3,local_4c,&local_60);
  }
LAB_14111eec7:
  plVar3 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_68 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar9 = (int *)((longlong)plVar3 + 0xc);
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  goto LAB_14111edae;
LAB_14111efcc:
  iVar10 = *(int *)(lVar2 + 0x18);
  if (iVar10 == -1) goto LAB_14111eeb2;
  goto LAB_14111ee60;
}



// FUNCTION 14111f043 FUN_14111f043 body=85 status=ok
// SIG undefined FUN_14111f043(void)

undefined8 FUN_14111f043(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if (((param_1 != 0) &&
      (((7 < *(byte *)(param_1 + 0x152) || ((0xc1U >> (*(byte *)(param_1 + 0x152) & 0x1f) & 1) == 0)
        ) && (cVar1 = FUN_1410e9f0d(param_1), cVar1 == '\0')))) &&
     ((param_2 == (longlong *)0x0 ||
      (cVar1 = (**(code **)(*param_2 + 8))(param_2,param_1), cVar1 != '\0')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14111f098 FUN_14111f098 body=116 status=ok
// SIG undefined FUN_14111f098(void)

void FUN_14111f098(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 14111f10c FUN_14111f10c body=1545 status=ok
// SIG undefined FUN_14111f10c(void)

int * FUN_14111f10c(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  longlong *plVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar23 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar23 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar23) {
      FUN_1447711aa(param_1,iVar23);
    }
    iVar25 = (int)param_1[5];
    if (iVar25 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar9 = iVar25 + -1;
      }
      iVar9 = iVar9 >> 5;
    }
    plVar20 = param_1 + 2;
    iVar14 = iVar25 + 1;
    iVar18 = iVar25 + 0x1f;
    if (-1 < iVar25) {
      iVar18 = iVar25;
    }
    if (iVar18 >> 5 == iVar9) {
      *(int *)(param_1 + 5) = iVar14;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar25) {
        if (iVar25 + 0x20U < 0xa0) {
          iVar14 = 0x80;
          iVar9 = iVar25;
        }
        else {
          uVar17 = iVar25 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar17) {
              uVar10 = uVar17;
            }
          }
          else {
            uVar10 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
          }
          uVar12 = FUN_144a3809e(uVar10 << 2,0);
          iVar9 = (int)(uVar12 >> 2);
          iVar14 = -0x20;
          if ((int)uVar17 <= iVar9) {
            iVar14 = iVar9 << 5;
          }
          iVar9 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar14;
        FUN_1446efbd8(plVar20,iVar9);
        iVar14 = (int)param_1[5] + 1;
      }
      iVar9 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar9 = iVar14;
      }
      *(int *)(param_1 + 5) = iVar14;
      if (iVar14 % 0x20 != 0) {
        plVar21 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar21 = plVar20;
        }
        bVar13 = -(char)(iVar14 % 0x20);
        *(uint *)((longlong)plVar21 + (longlong)(iVar9 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar21 + (longlong)(iVar9 >> 5) * 4) << (bVar13 & 0x1f)) >>
             (bVar13 & 0x1f);
      }
    }
    lVar11 = (longlong)iVar23;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar20 = (longlong *)param_1[4];
    }
    bVar13 = (byte)iVar25 & 0x1f;
    puVar2 = (uint *)((longlong)plVar20 + (longlong)(iVar18 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
  }
  else {
    iVar23 = (int)param_1[6];
    lVar11 = (longlong)iVar23;
    iVar25 = *(int *)(*param_1 + 4 + lVar11 * 0x20);
    *(int *)(param_1 + 6) = iVar25;
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar25 * 0x20) = 0xffffffff;
    }
  }
  puVar2 = (uint *)(param_1 + 2);
  uVar17 = 1;
  puVar15 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar15 = puVar2;
  }
  iVar25 = iVar23 + 0x1f;
  if (-1 < iVar23) {
    iVar25 = iVar23;
  }
  puVar15[iVar25 >> 5] = puVar15[iVar25 >> 5] | 1 << ((byte)iVar23 & 0x1f);
  lVar24 = *param_1;
  lVar11 = lVar11 * 0x20;
  puVar3 = (ulonglong *)(lVar24 + lVar11);
  puVar5 = (undefined8 *)param_3[1];
  uVar12 = *(ulonglong *)*param_3;
  *(ulonglong *)(lVar24 + lVar11) = uVar12;
  *(undefined8 *)(lVar24 + 8 + lVar11) = *puVar5;
  lVar6 = puVar5[1];
  *(longlong *)(lVar24 + 0x10 + lVar11) = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    uVar12 = *puVar3;
  }
  *(undefined4 *)(puVar3 + 3) = 0xffffffff;
  uVar10 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar10 = uVar10 >> 0x10 ^ uVar10;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar16 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar20 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar20 = (longlong *)param_1[8];
      }
      iVar25 = *(int *)((longlong)plVar20 + (ulonglong)((int)param_1[9] - 1U & uVar10) * 4);
      if (iVar25 != -1) {
        do {
          puVar4 = (undefined4 *)(*param_1 + (longlong)iVar25 * 0x20);
          if (*(ulonglong *)(*param_1 + (longlong)iVar25 * 0x20) == uVar12) {
            plVar20 = *(longlong **)(puVar4 + 4);
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              plVar21 = plVar20 + 1;
              *(int *)plVar21 = (int)*plVar21 + -1;
              UNLOCK();
              if ((int)*plVar21 == 0) {
                (**(code **)*plVar20)(plVar20);
                LOCK();
                piVar1 = (int *)((longlong)plVar20 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                }
              }
            }
            uVar12 = *puVar3;
            uVar7 = *(undefined4 *)((longlong)puVar3 + 4);
            uVar22 = puVar3[1];
            uVar8 = *(undefined4 *)((longlong)puVar3 + 0xc);
            *(ulonglong *)(puVar4 + 4) = puVar3[2];
            *puVar4 = (int)uVar12;
            puVar4[1] = uVar7;
            puVar4[2] = (int)uVar22;
            puVar4[3] = uVar8;
            FUN_14111f098(param_1,iVar23);
            iVar23 = iVar25;
            goto LAB_14111f4c0;
          }
          iVar25 = puVar4[6];
        } while (iVar25 != -1);
      }
    }
    if (3 < uVar16) {
      uVar12 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar17 = 1 << ((byte)lVar11 & 0x1f);
    }
  }
  if (((int)uVar16 < 1) || ((int)uVar17 <= (int)param_1[9])) {
    uVar10 = (int)param_1[9] - 1U & uVar10;
    *(uint *)((longlong)puVar3 + 0x1c) = uVar10;
    plVar20 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar20 = param_1 + 7;
    }
    *(undefined4 *)(puVar3 + 3) =
         *(undefined4 *)
          ((longlong)plVar20 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar20 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar20 = param_1 + 7;
    }
    *(int *)((longlong)plVar20 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar23;
    goto LAB_14111f4c0;
  }
  *(uint *)(param_1 + 9) = uVar17;
  plVar20 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar20,0,0,4);
    uVar17 = *(uint *)(param_1 + 9);
  }
  plVar21 = param_1 + 7;
  if (uVar17 == 1) {
    if (*plVar20 != 0) {
      FUN_1446efa72(plVar20,0,0,4);
    }
LAB_14111f294:
    uVar10 = 0;
    do {
      plVar20 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar20 = plVar21;
      }
      *(undefined4 *)((longlong)plVar20 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4) =
           0xffffffff;
      uVar10 = uVar10 + 1;
    } while (uVar17 != uVar10);
  }
  else {
    if (uVar17 == 0) goto LAB_14111f4c0;
    FUN_1446efa72(plVar20,0,uVar17,4);
    if (0 < (int)uVar17) goto LAB_14111f294;
  }
  iVar25 = (int)param_1[5];
  if (iVar25 == 0) {
    uVar12 = 0;
    uVar22 = 1;
    iVar9 = 0;
    iVar14 = 0;
  }
  else {
    puVar15 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar15 = puVar2;
    }
    uVar17 = *puVar15;
    if (uVar17 == 0) {
      iVar9 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar9 = iVar25 + -1;
      }
      uVar12 = 0;
      uVar22 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar22 = uVar12;
      }
      iVar14 = 0;
      do {
        if (uVar22 == uVar12) goto LAB_14111f4c0;
        iVar14 = iVar14 + 0x20;
        uVar17 = puVar15[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar12 = 0;
      iVar14 = 0;
    }
    uVar22 = (ulonglong)(-uVar17 & uVar17);
    uVar26 = uVar22 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = (iVar14 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar25 <= iVar9) {
      iVar9 = iVar25;
    }
  }
  if (iVar9 < iVar25) {
    uVar17 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar24 = (longlong)iVar9 * 0x20;
      uVar10 = ((uint)(*(ulonglong *)(lVar11 + lVar24) >> 0x14) & 0xffff ^
               (uint)(*(ulonglong *)(lVar11 + lVar24) >> 4)) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      uVar26 = (longlong)(int)(uVar10 >> 0x10 ^ uVar10) & (longlong)(int)param_1[9] - 1U;
      iVar25 = (int)uVar26;
      *(int *)(lVar11 + 0x1c + lVar24) = iVar25;
      plVar20 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar20 = plVar21;
      }
      *(undefined4 *)(lVar11 + 0x18 + lVar24) =
           *(undefined4 *)((longlong)plVar20 + ((longlong)(int)param_1[9] - 1U & uVar26) * 4);
      plVar20 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar20 = plVar21;
      }
      *(int *)((longlong)plVar20 + ((longlong)iVar25 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
      uVar17 = ~(uint)uVar22 & uVar17;
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puVar2;
      }
      iVar25 = (int)param_1[5];
      iVar9 = (int)uVar12;
      lVar11 = (longlong)iVar9;
      uVar10 = puVar15[lVar11] & uVar17;
      if (uVar10 == 0) {
        iVar18 = iVar25 + 0x1e;
        if (-1 < iVar25 + -1) {
          iVar18 = iVar25 + -1;
        }
        iVar18 = iVar18 >> 5;
        iVar19 = iVar18;
        if (iVar18 < iVar9) {
          iVar19 = iVar9;
        }
        if (iVar18 <= iVar9) break;
        lVar24 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar10 = puVar15[lVar11 + lVar24 + 1];
          if (uVar10 != 0) break;
          lVar24 = lVar24 + 1;
          if (iVar19 - lVar11 == lVar24) goto LAB_14111f4c0;
        }
        uVar12 = (ulonglong)(iVar9 + (int)lVar24 + 1);
        uVar17 = 0xffffffff;
      }
      uVar22 = (ulonglong)(-uVar10 & uVar10);
      uVar26 = uVar22 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar9 = (iVar14 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar25);
  }
LAB_14111f4c0:
  *param_2 = iVar23;
  return param_2;
}



// FUNCTION 14111f716 FUN_14111f716 body=1649 status=ok
// SIG undefined FUN_14111f716(void)

void FUN_14111f716(longlong *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  uint uVar4;
  code *pcVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  undefined *puVar12;
  undefined8 unaff_RBP;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_258 [32];
  uint local_238;
  int local_230;
  undefined4 local_228;
  undefined8 local_220;
  wchar_t *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  code **local_200;
  undefined1 *local_1f8;
  code *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [24];
  longlong local_1a8;
  longlong local_198;
  undefined2 *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined4 local_170;
  int local_16c;
  longlong local_168;
  int local_158;
  int local_154;
  uint local_150 [4];
  longlong *local_140;
  int local_128;
  code *local_120 [2];
  longlong local_110;
  int local_108;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  plVar2 = param_1 + -0x778;
  lVar9 = param_1[0x76];
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0xdb8) == '\0')) {
    local_1d8 = *(undefined8 *)(lVar9 + 0xda0);
    uVar8 = FUN_14477b664(*(undefined8 *)(lVar9 + 0xda8));
    local_1d0 = FUN_14477b664(uVar8);
    local_1c8 = *(undefined8 *)(lVar9 + 0xdb0);
    FUN_14111ff08(plVar2,&local_1d8);
  }
  if ((((char)param_1[-0x749] == '\x03') && (param_1[0x76] != 0)) && ((int)param_1[0x7a9] != 0)) {
    lVar9 = (**(code **)(*param_1 + 0x10))(param_1);
    uVar3 = *(undefined1 *)(lVar9 + 0x57);
    local_154 = -1;
    local_158 = -1;
    lVar9 = FUN_14011c349();
    FUN_140ae5c1d(lVar9 + 0x78,&local_154,&local_158);
    iVar13 = (local_158 + 1) - local_154;
    if (iVar13 != 0) {
      iVar14 = 0;
      do {
        uVar15 = local_154 + iVar14;
        if ((((-1 < (int)uVar15) && ((1 << ((byte)uVar15 & 0x1f) & *(uint *)(param_1 + 0x7a9)) != 0)
             ) && (((int)uVar15 < (int)param_1[0x7a6] &&
                   ((lVar9 = (ulonglong)uVar15 * 0x48 + param_1[0x7a5], lVar9 != 0 &&
                    (*(longlong **)(lVar9 + 0x28) != (longlong *)0x0 &&
                     *(longlong *)(lVar9 + 0x20) != 0)))))) &&
           (lVar9 = (**(code **)(**(longlong **)(lVar9 + 0x28) + 8))(), lVar9 != 0)) {
          if (DAT_14cb939a8 == 0) {
            local_120[0] = FUN_140940982;
            local_1f0 = FUN_14081d0ea;
            local_1f8 = &LAB_146522c26;
            local_200 = local_120;
            local_208 = &LAB_148a0db91;
            local_210 = &LAB_146572ba7;
            local_218 = L"Engine";
            local_220 = 0;
            local_228 = 0x10000004;
            local_230 = 8;
            local_238 = 0xdd8;
            FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
          }
          if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) {
            FUN_14100aa2a(local_1c0,lVar9 + 0x3f0);
            FUN_14100aaae(local_1c0,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar3) & 0xffffffff);
            pcVar5 = *(code **)(*plVar2 + 0x5e8);
            if (pcVar5 == FUN_140972dde) {
              lVar9 = param_1[-0x702];
              if (lVar9 == 0) {
                pcVar5 = *(code **)(*plVar2 + 0x5f8);
                if (pcVar5 == FUN_144784df4) {
                  if (*(code **)(param_1[0xc] + 0x18) == (code *)&LAB_144904684) {
                    if ((*(int *)((longlong)param_1 + 0x39f4) != 0) &&
                       (uVar4 = *(uint *)(param_1 + 0x73e), -1 < (int)uVar4)) {
                      lVar9 = 0;
                      if (DAT_14c9647dc <= (int)uVar4) goto LAB_14111faa8;
                      plVar10 = (longlong *)
                                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
                      if (((plVar10 != (longlong *)0x0) &&
                          ((int)plVar10[2] == *(int *)((longlong)param_1 + 0x39f4))) &&
                         ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) {
                        if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
                          lVar9 = *plVar10;
                        }
                        else {
                          lVar9 = 0;
                        }
                        lVar9 = lVar9 + 0x110;
                        goto LAB_14111fb73;
                      }
                    }
                  }
                  else {
                    lVar9 = (**(code **)(param_1[0xc] + 0x18))(param_1 + 0xc);
LAB_14111fb73:
                    if (lVar9 != 0) {
                      lVar9 = *(longlong *)(lVar9 + 0x20);
                      goto LAB_14111fb80;
                    }
                  }
                }
                else {
                  lVar9 = (*pcVar5)(plVar2);
LAB_14111fb80:
                  if (lVar9 != 0) {
                    lVar9 = *(longlong *)(lVar9 + 0x3b0);
                    goto LAB_14111faa8;
                  }
                }
                lVar9 = 0;
              }
            }
            else {
              lVar9 = (*pcVar5)(plVar2);
            }
LAB_14111faa8:
            local_150[0] = local_150[0] & 0xffffff00;
            local_128 = 0;
            FUN_1456bb102(local_150,plVar2);
            FUN_140368c94(local_1c0,local_120,local_150,lVar9 == 0);
            if ((longlong)local_128 != 0) {
              lVar9 = (longlong)local_128 + -1;
              local_1e0 = DAT_14c9a3da0;
              local_1e8 = lVar9 * 0x10;
              FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + local_1e8),
                            *(undefined4 *)(DAT_14c9a3da0 + 8 + local_1e8));
              if (*(longlong *)(local_1e0 + local_1e8) != 0) {
                FUN_1400020a8();
              }
              lVar7 = DAT_14c9a3da0;
              iVar16 = (int)lVar9;
              if (DAT_14c9a3dd4 != 0) {
                *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar16;
              }
              *(undefined4 *)(lVar7 + local_1e8) = 0xffffffff;
              iVar11 = -1;
              if (0 < DAT_14c9a3dd4) {
                iVar11 = DAT_14c9a3dd0;
              }
              *(int *)(lVar7 + 4 + local_1e8) = iVar11;
              DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
              puVar12 = &DAT_14c9a3db0;
              if (DAT_14c9a3dc0 != (undefined *)0x0) {
                puVar12 = DAT_14c9a3dc0;
              }
              iVar11 = iVar16 + 0x1f;
              if (-1 < iVar16) {
                iVar11 = iVar16;
              }
              bVar6 = (byte)lVar9 & 0x1f;
              DAT_14c9a3dd0 = iVar16;
              *(uint *)(puVar12 + (longlong)(iVar11 >> 5) * 4) =
                   *(uint *)(puVar12 + (longlong)(iVar11 >> 5) * 4) &
                   (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
              local_128 = 0;
            }
            if (((char)local_150[0] == '\x03') && (local_140 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_140 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_140 + 0x10))();
              }
            }
            if (local_120[0] != (code *)0x0) {
              if ((longlong)local_108 != 0) {
                lVar9 = 0;
                do {
                  if (*(longlong *)(local_110 + lVar9) == 0) goto LAB_14111f951;
                  lVar9 = lVar9 + 8;
                } while ((longlong)local_108 << 3 != lVar9);
              }
              local_150[0] = 0xffffffff;
              local_228 = 0;
              local_238 = local_238 & 0xffffff00;
              local_230 = iVar14;
              (**(code **)(param_1[5] + 0xa8))(param_1 + 5,local_150,local_120,uVar15);
            }
LAB_14111f951:
            FUN_140368b56(local_120);
            if (local_168 != 0) {
              FUN_1400020a8();
            }
            local_188 = &DAT_14a171d50;
            local_170 = 0;
            if (local_16c != 0) {
              FUN_140115c12(&local_178,0);
            }
            local_180 = 0;
            if (local_178 != 0) {
              FUN_1400020a8();
            }
            if (local_198 != 0) {
              FUN_1400020a8();
            }
            if (local_1a8 != 0) {
              FUN_1400020a8();
            }
          }
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != iVar13 + (uint)(iVar13 == 0));
    }
  }
  FUN_14036a0d2(plVar2);
  FUN_14111fe08(param_1 + 0xa8c,param_2);
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14111fd88(plVar2);
  return;
}



// FUNCTION 14111fd88 FUN_14111fd88 body=127 status=ok
// SIG undefined FUN_14111fd88(void)

void FUN_14111fd88(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  DWORD DVar5;
  DWORD DVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x858);
  if (lVar3 == 0) {
    return;
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 != 1) {
      return;
    }
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    if (DVar5 != DVar6) {
      return;
    }
  }
  plVar4 = *(longlong **)(lVar3 + 0x1530);
  *(undefined8 *)(lVar3 + 0x1528) = 0;
  *(undefined8 *)(lVar3 + 0x1530) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014111fe03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14111fe08 FUN_14111fe08 body=256 status=ok
// SIG undefined FUN_14111fe08(void)

void FUN_14111fe08(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  lVar7 = (longlong)(int)param_1[1];
  if (lVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    uVar8 = lVar7 + 1;
    lVar7 = lVar7 * 0x10 + -8;
    bVar5 = 0;
    do {
      if (((*(int *)(*param_1 + lVar7) == 0) ||
          (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar3 == '\0')) {
        bVar5 = 1;
      }
      uVar8 = uVar8 - 1;
      lVar7 = lVar7 + -0x10;
    } while (1 < uVar8);
    iVar1 = *(int *)((longlong)param_1 + 0x14);
    *(int *)((longlong)param_1 + 0x14) = iVar1 + -1;
    if ((bool)(bVar5 & iVar1 < 2)) {
      iVar1 = (int)param_1[1];
      iVar4 = iVar1;
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          if (((*(int *)(*param_1 + 8 + (longlong)iVar6 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*param_1 + (longlong)iVar6 * 0x10), plVar2 == (longlong *)0x0
              )) || (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
            FUN_14005b288(param_1,iVar6);
            FUN_14005b248(param_1);
          }
          else {
            iVar6 = iVar6 + 1;
          }
          iVar4 = (int)param_1[1];
        } while (iVar6 < iVar4);
      }
      iVar6 = 2;
      if (2 < iVar4 * 2) {
        iVar6 = iVar4 * 2;
      }
      *(int *)(param_1 + 2) = iVar6;
      if ((iVar6 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
        FUN_14045812c(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14111ff08 FUN_14111ff08 body=450 status=ok
// SIG undefined FUN_14111ff08(void)

void FUN_14111ff08(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar6 = *param_2;
    if (*(longlong *)(param_1 + 0x7f50) != lVar6) {
      *(undefined8 *)(param_1 + 0x7f60) = 0;
    }
    *(longlong *)(param_1 + 0x7f50) = lVar6;
    if (*(longlong *)(param_1 + 0x7f58) != param_2[1]) {
      *(undefined8 *)(param_1 + 0x7f60) = 0;
    }
    uVar3 = FUN_14477b664();
    uVar3 = FUN_14477b664(uVar3);
    *(undefined8 *)(param_1 + 0x7f58) = uVar3;
    *(longlong *)(param_1 + 0x7f60) = param_2[2];
    bVar1 = *(byte *)(param_1 + 0x9017);
    FUN_1411200cc(param_1,&local_38);
    if (*(longlong *)(param_1 + 0x7f68) != local_38) {
      *(undefined8 *)(param_1 + 0x7f78) = 0;
    }
    *(longlong *)(param_1 + 0x7f68) = local_38;
    if (*(longlong *)(param_1 + 0x7f70) != local_30) {
      *(undefined8 *)(param_1 + 0x7f78) = 0;
    }
    FUN_14477b664();
    uVar3 = FUN_14477b664();
    *(undefined8 *)(param_1 + 0x7f70) = uVar3;
    *(undefined8 *)(param_1 + 0x7f78) = local_28;
    *(uint *)(param_1 + 0x7f80) = (uint)bVar1;
    uVar2 = *(ulonglong *)(param_1 + 0x28);
    if (uVar2 < 0xffffffff00000000) {
      plVar7 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar7 = (longlong *)0x0;
      }
      (**(code **)(*plVar7 + 0x58))(plVar7,param_1,uVar2,0x47);
    }
    else {
      uVar8 = (uint)uVar2;
      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c998088)) {
        puVar5 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar5 = DAT_14c998080;
        }
        if ((*(uint *)(puVar5 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar8 & 0x1f) & 1) != 0) {
          lVar4 = DAT_14c998060 + (ulonglong)(uVar8 & 0x7fffffff) * 0x68;
          lVar6 = *(longlong *)(lVar4 + 0x18);
          if (*(longlong *)(lVar4 + 0x18) == 0) {
            lVar6 = lVar4 + 8;
          }
          *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x80;
          *(byte *)(lVar4 + 0x60) = *(byte *)(lVar4 + 0x60) | 1;
        }
      }
    }
    FUN_140da0d80(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411200cc FUN_1411200cc body=239 status=ok
// SIG undefined FUN_1411200cc(void)

undefined8 * FUN_1411200cc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x7f40);
  if (lVar5 == 0) {
    uVar4 = FUN_1411201bc();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x7f40) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x7f38);
  if (*(longlong *)(param_1 + 0x7f48) == 0) {
    if ((*plVar1 != 0) && (lVar5 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x7f48) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0x7f48) = lVar5;
        if (lVar5 != 0) goto LAB_141120191;
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x7f58);
    if (lVar5 == 0) {
      lVar5 = FUN_140da11f2();
    }
    *param_2 = *(undefined8 *)(param_1 + 0x7f50);
    uVar4 = FUN_14477b664(lVar5);
    param_2[1] = uVar4;
    param_2[2] = *(undefined8 *)(param_1 + 0x7f60);
    return param_2;
  }
LAB_141120191:
  FUN_14580b54c(param_2,plVar1);
  return param_2;
}



// FUNCTION 1411201bc FUN_1411201bc body=57 status=ok
// SIG undefined FUN_1411201bc(void)

void FUN_1411201bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb91e98 == 0) {
    uVar1 = FUN_14580b51a();
    DAT_14cb91e98 = FUN_140002ddd(FUN_14656b4fb,uVar1,L"GbxUIDisplayDataDef");
  }
  return;
}



// FUNCTION 1411201f6 FUN_1411201f6 body=422 status=ok
// SIG undefined FUN_1411201f6(void)

undefined8 * FUN_1411201f6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar7 = (**(code **)(*(longlong *)(param_1 + -0x16e0) + 0x28))(param_1 + -0x16e0);
  FUN_1406c9d00(uVar7,&local_40);
  if (local_38 == 0) {
    uVar7 = FUN_140927942();
    local_38 = FUN_14477b664(uVar7);
  }
  if (local_30 == (longlong *)0x0) {
    if ((((local_38 != 0) && (local_40 != 0)) &&
        (plVar2 = *(longlong **)(local_38 + 0xb8), plVar2 != (longlong *)0x0)) &&
       (cVar6 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar6 != '\0')) {
      uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
      local_30 = (longlong *)FUN_144aff482(uVar7,&local_40);
      if (local_30 != (longlong *)0x0) goto LAB_14112024d;
    }
  }
  else {
LAB_14112024d:
    plVar2 = local_30;
    lVar8 = (**(code **)(*local_30 + 8))(local_30);
    lVar9 = FUN_14112039e();
    if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
         lVar9 + 0x30 && (*(char *)((longlong)plVar2 + 0x459) == '\x01')))) {
      lVar8 = FUN_14580b593();
      *param_2 = *(undefined8 *)(lVar8 + 0x20);
      uVar3 = *(undefined4 *)(lVar8 + 0x2c);
      uVar4 = *(undefined4 *)(lVar8 + 0x30);
      uVar5 = *(undefined4 *)(lVar8 + 0x34);
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar8 + 0x28);
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
      *(undefined4 *)(param_2 + 2) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
      param_2[3] = 0;
      iVar1 = *(int *)(lVar8 + 0x40);
      _Src = *(void **)(lVar8 + 0x38);
      *(int *)(param_2 + 4) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_2 + 0x24) = 0;
      }
      else {
        FUN_1446dd670(param_2 + 3,iVar1,0);
        memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
      }
      goto LAB_141120295;
    }
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
LAB_141120295:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14112039e FUN_14112039e body=57 status=ok
// SIG undefined FUN_14112039e(void)

void FUN_14112039e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba49b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba49b8 = FUN_140002ddd(FUN_1465bf5ee,uVar1,L"InteractiveDamageableDef");
  }
  return;
}



// FUNCTION 1411203d8 FUN_1411203d8 body=1 status=ok
// SIG undefined FUN_1411203d8(void)

void FUN_1411203d8(void)

{
  return;
}



// FUNCTION 1411203da FUN_1411203da body=71 status=ok
// SIG undefined FUN_1411203da(void)

void FUN_1411203da(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0be130;
  FUN_1408a47eb(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 141120422 FUN_141120422 body=120 status=ok
// SIG undefined FUN_141120422(void)

longlong * FUN_141120422(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  plVar3 = (longlong *)*param_1;
  iVar2 = (int)plVar3[1];
  lVar6 = (longlong)iVar2;
  *(uint *)(plVar3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
    FUN_14112049a(plVar3,iVar2);
  }
  lVar4 = *plVar3;
  puVar1 = (undefined8 *)(lVar4 + lVar6 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar6 * 0x18) = 0;
  *(undefined8 *)(lVar4 + lVar6 * 0x18) = *param_2;
  uVar5 = FUN_14477b664(param_2[1]);
  uVar5 = FUN_14477b664(uVar5);
  *(undefined8 *)(lVar4 + 8 + lVar6 * 0x18) = uVar5;
  *(undefined8 *)(lVar4 + 0x10 + lVar6 * 0x18) = param_2[2];
  return param_1;
}



// FUNCTION 14112049a FUN_14112049a body=373 status=ok
// SIG undefined FUN_14112049a(void)

void FUN_14112049a(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141120523;
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
LAB_141120523:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14112061c FUN_14112061c body=274 status=ok
// SIG undefined FUN_14112061c(void)

longlong * FUN_14112061c(longlong *param_1)

{
  FUN_14112072e();
  *param_1 = (longlong)&PTR_FUN_14b72a550;
  param_1[5] = (longlong)&PTR_FUN_14b72b150;
  param_1[6] = (longlong)&PTR_FUN_14b72b190;
  param_1[0x55] = (longlong)&PTR_FUN_14b72b1e0;
  param_1[0x56] = (longlong)&PTR_FUN_14b72b260;
  param_1[0x57] = (longlong)&PTR_FUN_14b72b270;
  param_1[0xe3] = (longlong)&PTR_FUN_14b72b2a0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc6540) {
    FUN_144b3d300(&DAT_14cbc6540);
    if (DAT_14cbc6540 == -1) {
      FUN_1446f470e(&DAT_14cbc6538,L"OverlapOnlyProjectile",1);
      _Init_thread_footer(&DAT_14cbc6540);
    }
  }
  (**(code **)(*param_1 + 0x728))(param_1,DAT_14cbc6538,1);
  *(byte *)((longlong)param_1 + 0x2d4) = *(byte *)((longlong)param_1 + 0x2d4) & 0xbf;
  return param_1;
}



// FUNCTION 14112072e FUN_14112072e body=158 status=ok
// SIG undefined FUN_14112072e(void)

undefined8 * FUN_14112072e(undefined8 *param_1)

{
  FUN_1400f3bfc();
  *param_1 = &PTR_FUN_14b5226d0;
  param_1[5] = &PTR_FUN_14b5232d0;
  param_1[6] = &PTR_FUN_14b523310;
  param_1[0x55] = &PTR_FUN_14b523360;
  param_1[0x56] = &PTR_FUN_14b5233e0;
  param_1[0x57] = &PTR_FUN_14b5233f0;
  param_1[0xe3] = &PTR_FUN_14b523420;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  FUN_1411207cc(param_1,1);
  return param_1;
}



// FUNCTION 1411207cc FUN_1411207cc body=340 status=ok
// SIG undefined FUN_1411207cc(void)

void FUN_1411207cc(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((*(byte *)(param_1 + 0x7d4) & 0x20) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x7d4) = *(byte *)(param_1 + 0x7d4) & 0xdf | param_2 << 5;
    if (param_2 == '\0') {
      *(undefined4 *)(param_1 + 0x738) = 0;
      if (*(int *)(param_1 + 0x73c) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x728);
      if (*(int *)(param_1 + 0x738) != iVar5) {
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar5);
        }
        plVar1 = (longlong *)(param_1 + 0x730);
        *(undefined4 *)(param_1 + 0x738) = 0;
        if (*(int *)(param_1 + 0x73c) != iVar5) {
          FUN_144920e50(plVar1);
          iVar5 = *(int *)(param_1 + 0x728);
        }
        if (iVar5 != 0) {
          lVar3 = *(longlong *)(param_1 + 0x720);
          lVar6 = 0;
          do {
            puVar7 = (undefined8 *)(lVar3 + lVar6);
            puVar8 = local_c8;
            for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            iVar2 = *(int *)(param_1 + 0x738);
            *(uint *)(param_1 + 0x738) = iVar2 + 1U;
            if (*(uint *)(param_1 + 0x73c) < iVar2 + 1U) {
              FUN_140518214(plVar1,iVar2);
            }
            puVar7 = local_c8;
            puVar8 = (undefined8 *)((longlong)iVar2 * 0x80 + *plVar1);
            for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            lVar6 = lVar6 + 0x80;
          } while ((longlong)iVar5 * 0x80 != lVar6);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14112093f FUN_14112093f body=73 status=ok
// SIG undefined FUN_14112093f(void)

void FUN_14112093f(longlong param_1,int param_2)

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



// FUNCTION 141120b9a FUN_141120b9a body=121 status=ok
// SIG undefined FUN_141120b9a(void)

undefined8 * FUN_141120b9a(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14ad909b0;
  param_1[4] = 0;
  uVar1 = FUN_144830b78(param_1 + 5,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 5) = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14ad91010;
  lVar2 = 0x40;
  do {
    FUN_1406ed278((longlong)param_1 + lVar2);
    lVar2 = lVar2 + 0x110;
  } while (lVar2 != 0x480);
  *(undefined4 *)(param_1 + 0x90) = 0;
  return param_1;
}



// FUNCTION 141120c14 FUN_141120c14 body=428 status=ok
// SIG undefined FUN_141120c14(void)

void FUN_141120c14(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1c = (int)uVar2;
      uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141120dc2(param_1,local_1c != 0);
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141120dc2 FUN_141120dc2 body=673 status=ok
// SIG undefined FUN_141120dc2(void)

void FUN_141120dc2(longlong param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined1 *)(param_1 + 0x2911) = param_2;
  lVar5 = FUN_1447210f0();
  if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x238))) {
    lVar9 = 0;
    while( true ) {
      iVar1 = *(int *)(*(longlong *)(lVar5 + 0x230) + 4 + lVar9 * 8);
      if (((((iVar1 == 0) ||
            (uVar2 = *(uint *)(*(longlong *)(lVar5 + 0x230) + lVar9 * 8), (int)uVar2 < 0)) ||
           (DAT_14c9647dc <= (int)uVar2)) ||
          ((plVar7 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar7 == (longlong *)0x0 || ((int)plVar7[2] != iVar1)))) ||
         (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 ||
          (plVar7 = (longlong *)*plVar7, plVar7 == (longlong *)0x0)))) break;
      if (DAT_14cbadd90 == 0) {
        local_50 = FUN_141030f22;
        local_60 = FUN_14081d0ea;
        local_68 = &LAB_1459f2e4c;
        local_78 = &LAB_148c39de3;
        local_80 = &LAB_1457a9eb2;
        local_88 = &DAT_149e063b2;
        local_90 = 0;
        local_98 = 0x10000004;
        local_a0 = 0x10;
        local_a8 = 0x3de0;
        local_70 = &local_50;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if (((*(int *)(plVar7[2] + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) !=
           DAT_14cbadd90 + 0x30)) || (cVar3 = (**(code **)(*plVar7 + 0x6c8))(plVar7), cVar3 == '\0')
         ) break;
      uVar2 = *(uint *)((longlong)plVar7 + 0xc);
      local_50 = (code *)(ulonglong)uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar4 = *(uint *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar8 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar8);
        }
        LOCK();
        uVar4 = *(uint *)(lVar10 + 0x10);
        bVar11 = uVar4 == 0;
        if (bVar11) {
          *(uint *)(lVar10 + 0x10) = uVar8;
          uVar4 = 0;
        }
        UNLOCK();
        uVar2 = (uint)local_50;
        if (bVar11) {
          uVar4 = uVar8;
        }
      }
      local_50._0_4_ = uVar2;
      local_50 = (code *)CONCAT44(uVar4,(uint)local_50);
      puVar6 = (undefined1 *)FUN_141121064(param_1 + 0x28c0,uVar4 ^ (uint)local_50,&local_50);
      FUN_14112155a(param_1,plVar7,*puVar6);
      lVar9 = lVar9 + 1;
      if (*(int *)(lVar5 + 0x238) <= lVar9) break;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141121064 FUN_141121064 body=144 status=ok
// SIG undefined FUN_141121064(void)

longlong FUN_141121064(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1411210f6();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x14 != 0) goto LAB_1411210ba;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_1411211b0(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_1411210ba:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x14 + 8;
}



// FUNCTION 1411210f6 FUN_1411210f6 body=185 status=ok
// SIG undefined FUN_1411210f6(void)

int FUN_1411210f6(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x14);
        cVar1 = FUN_14088c7fa(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14112111f;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14112111f:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1411211b0 FUN_1411211b0 body=296 status=ok
// SIG undefined FUN_1411211b0(void)

undefined4 *
FUN_1411211b0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14112137e(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  *(undefined1 *)(local_50 + 1) = 0;
  *(undefined4 *)((longlong)local_50 + 0xc) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1411212da(param_1,param_3,local_50,local_58);
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
      *(uint *)(local_50 + 2) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_50 + 0xc) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_141121a6c(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411212da FUN_1411212da body=163 status=ok
// SIG undefined FUN_1411212da(void)

void FUN_1411212da(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    iVar4 = FUN_14612029a();
    if (iVar4 != -1) {
      lVar1 = *param_1;
      uVar2 = *param_3;
      *(undefined4 *)(lVar1 + 8 + (longlong)iVar4 * 0x14) = *(undefined4 *)(param_3 + 1);
      *(undefined8 *)(lVar1 + (longlong)iVar4 * 0x14) = uVar2;
      FUN_1461204b8(param_1,*param_4);
      *param_4 = iVar4;
      uVar3 = 1;
      goto LAB_141121308;
    }
  }
  uVar3 = 0;
LAB_141121308:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14112137e FUN_14112137e body=476 status=ok
// SIG undefined FUN_14112137e(void)

int * FUN_14112137e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_140171ad2(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x14);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x14) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 14112155a FUN_14112155a body=1084 status=ok
// SIG undefined FUN_14112155a(void)

void FUN_14112155a(longlong param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != 0) {
    plVar7 = (longlong *)(param_1 + 0x2600);
    uVar1 = *(uint *)(param_2 + 0xc);
    if ((param_3 & *(byte *)(param_1 + 0x2911)) == 1) {
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      uVar4 = *(uint *)(lVar9 + 0x10);
      if (*(uint *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar8);
        }
        LOCK();
        uVar4 = *(uint *)(lVar9 + 0x10);
        bVar10 = uVar4 == 0;
        if (bVar10) {
          *(uint *)(lVar9 + 0x10) = uVar8;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar4 = uVar8;
        }
      }
      local_40 = CONCAT44(uVar4,uVar1);
      iVar3 = FUN_1411219b2(plVar7,uVar1 ^ uVar4);
      if (iVar3 != -1) {
        local_48 = 0;
        FUN_14485c47a(&local_48,param_2);
        local_40 = local_48;
        iVar3 = FUN_1411219b2(plVar7,(uint)((ulonglong)local_48 >> 0x20) ^ (uint)local_48);
        if (iVar3 == -1) {
          lVar9 = 0;
        }
        else {
          lVar9 = (longlong)iVar3 * 0x18 + *plVar7;
        }
        cVar2 = FUN_144729dda(lVar9 + 8);
        if (cVar2 != '\0') goto LAB_14112160a;
      }
      lVar9 = FUN_1402d1dc0(*(longlong *)(param_1 + 10000) + 0x4e8);
      if ((lVar9 != 0) &&
         (lVar5 = FUN_144a545f2(param_1,*(undefined8 *)(*(longlong *)(param_1 + 10000) + 0x510),0),
         lVar5 != 0)) {
        local_c8 = &local_68;
        local_58 = DAT_14c846508;
        local_68 = DAT_14c8464f8;
        uStack_60 = DAT_14c846500;
        local_88 = (undefined4)DAT_14c8464e0;
        uStack_84 = DAT_14c8464e0._4_4_;
        uStack_80 = (undefined4)DAT_14c8464e8;
        uStack_7c = DAT_14c8464e8._4_4_;
        local_78 = DAT_14c8464f0;
        local_b0 = 0;
        local_b8 = 0;
        local_a8 = 1;
        local_c0 = 2;
        lVar9 = FUN_140a44468(lVar9,lVar5,*(undefined8 *)(*(longlong *)(param_1 + 10000) + 0x510));
        if (lVar9 != 0) {
          FUN_140357fa8(lVar9,8,0);
          FUN_140e996a4(lVar9,param_2);
          local_40 = 0;
          FUN_14485c47a(&local_40,param_2);
          uVar6 = FUN_14580b838(plVar7,(uint)((ulonglong)local_40 >> 0x20) ^ (uint)local_40,
                                &local_40);
          FUN_14485c47a(uVar6,lVar9);
        }
      }
    }
    else {
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      uVar4 = *(uint *)(lVar9 + 0x10);
      if (*(uint *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar8);
        }
        LOCK();
        uVar4 = *(uint *)(lVar9 + 0x10);
        bVar10 = uVar4 == 0;
        if (bVar10) {
          *(uint *)(lVar9 + 0x10) = uVar8;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar4 = uVar8;
        }
      }
      local_40 = CONCAT44(uVar4,uVar1);
      iVar3 = FUN_1411219b2(plVar7,uVar1 ^ uVar4);
      if (iVar3 != -1) {
        local_90 = 0;
        FUN_14485c47a(&local_90,param_2);
        local_40 = local_90;
        iVar3 = FUN_1411219b2(plVar7,(uint)((ulonglong)local_90 >> 0x20) ^ (uint)local_90);
        if (iVar3 == -1) {
          lVar9 = 0;
        }
        else {
          lVar9 = (longlong)iVar3 * 0x18 + *plVar7;
        }
        cVar2 = FUN_144729dda(lVar9 + 8);
        if (cVar2 != '\0') {
          local_98 = 0;
          FUN_14485c47a(&local_98,param_2);
          local_40 = local_98;
          iVar3 = FUN_1411219b2(plVar7,(uint)((ulonglong)local_98 >> 0x20) ^ (uint)local_98);
          if (iVar3 == -1) {
            lVar9 = 0;
          }
          else {
            lVar9 = (longlong)iVar3 * 0x18 + *plVar7;
          }
          plVar7 = (longlong *)FUN_14479d2ce(lVar9 + 8);
          (**(code **)(*plVar7 + 0xa68))(plVar7);
          local_a0 = 0;
          FUN_14485c47a(&local_a0,param_2);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_e8);
        }
      }
    }
  }
LAB_14112160a:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411219b2 FUN_1411219b2 body=185 status=ok
// SIG undefined FUN_1411219b2(void)

int FUN_1411219b2(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_1407052fc(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1411219db;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1411219db:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 141121a6c FUN_141121a6c body=650 status=ok
// SIG undefined FUN_141121a6c(void)

void FUN_141121a6c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar8 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar8,4);
    if ((int)uVar8 < 1) goto LAB_141121acf;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar8 != uVar3);
LAB_141121acf:
  iVar15 = (int)param_1[5];
  if (iVar15 == 0) {
    uVar4 = 0;
    uVar12 = 1;
    iVar14 = 0;
    iVar5 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 2);
    }
    uVar8 = *puVar11;
    if (uVar8 == 0) {
      iVar14 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar14 = iVar15 + -1;
      }
      uVar4 = 0;
      uVar12 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar12 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar12 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar8 = puVar11[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar12 = (ulonglong)(-uVar8 & uVar8);
    uVar16 = uVar12 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar14 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar14) {
      iVar14 = iVar15;
    }
  }
  if (iVar14 < iVar15) {
    uVar8 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar13 = (longlong)iVar14;
      uVar2 = *(undefined8 *)(lVar7 + lVar13 * 0x14);
      uVar16 = (longlong)(int)((uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2) &
               (longlong)(int)param_1[9] - 1U;
      iVar15 = (int)uVar16;
      *(int *)(lVar7 + 0x10 + lVar13 * 0x14) = iVar15;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar7 + 0xc + lVar13 * 0x14) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar15 & (longlong)(int)param_1[9] - 1U) * 4) = iVar14;
      uVar8 = ~(uint)uVar12 & uVar8;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 2);
      }
      iVar15 = (int)param_1[5];
      iVar14 = (int)uVar4;
      lVar7 = (longlong)iVar14;
      uVar3 = puVar11[lVar7] & uVar8;
      if (uVar3 == 0) {
        iVar9 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar9 = iVar15 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar14) {
          iVar10 = iVar14;
        }
        if (iVar9 <= iVar14) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar11[lVar7 + lVar13 + 1];
          if (uVar3 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar10 - lVar7 == lVar13) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar14 + (int)lVar13 + 1);
        uVar8 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar16 = uVar12 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar14 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar15);
  }
  return;
}



// FUNCTION 141121cf6 FUN_141121cf6 body=96 status=ok
// SIG undefined FUN_141121cf6(void)

ulonglong FUN_141121cf6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_141121d39:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_141121d39;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 141121d6a FUN_141121d6a body=293 status=ok
// SIG undefined FUN_141121d6a(void)

void FUN_141121d6a(longlong param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  
  iVar2 = *(int *)(param_1 + 0x1f0);
  if ((longlong)iVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x1b9);
    lVar5 = *(longlong *)(param_1 + 0x1e8);
    lVar10 = 0;
    do {
      iVar3 = *(int *)(lVar5 + 4 + lVar10);
      if (((iVar3 != 0) && (uVar4 = *(uint *)(lVar5 + lVar10), -1 < (int)uVar4)) &&
         ((int)uVar4 < DAT_14c9647dc)) {
        plVar9 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((((plVar9 != (longlong *)0x0) && ((int)plVar9[2] == iVar3)) &&
            (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 &&
             ((lVar6 = *plVar9, lVar6 != 0 && ((*(byte *)(lVar6 + 0x2dc) & 0x40) >> 6 == bVar1))))))
           && (*(byte *)(lVar6 + 0x2dc) = (*(byte *)(lVar6 + 0x2dc) & 0xbf | bVar1 << 6) ^ 0x40,
              (~*(byte *)(lVar6 + 0x9c) & 3) == 0)) {
          bVar7 = *(byte *)(lVar6 + 0x9d);
          if ((bVar7 & 1) == 0) {
LAB_141121e43:
            *(byte *)(lVar6 + 0x9d) = bVar7 | 1;
            FUN_1401057d4(lVar6);
            FUN_14010586c(&DAT_14cad0140,lVar6);
          }
          else if (*(longlong *)(lVar6 + 0xb0) == 0) {
            lVar8 = FUN_1448abda6(lVar6);
            if (lVar8 == 0) {
              bVar7 = *(byte *)(lVar6 + 0x9d);
              goto LAB_141121e43;
            }
          }
        }
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar2 * 8 != lVar10);
  }
  return;
}



// FUNCTION 141121e90 FUN_141121e90 body=104 status=ok
// SIG undefined FUN_141121e90(void)

undefined8 * FUN_141121e90(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  *param_1 = 0;
  if (iVar1 == -1) {
    param_1[1] = 0xffffffff00000000;
  }
  else {
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
  }
  return param_1;
}



// FUNCTION 141121ef8 FUN_141121ef8 body=84 status=ok
// SIG undefined FUN_141121ef8(void)

void FUN_141121ef8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x10) != 0) {
      FUN_1400d2a94(*(longlong *)(param_2 + 0x9c8) + 0x100);
      lVar1 = *(longlong *)(param_1 + 0x48);
    }
    FUN_141121f4c(*(longlong *)(param_2 + 0x9c8) + 0xa60,*(undefined4 *)(lVar1 + 0x18));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 141121f4c FUN_141121f4c body=1042 status=ok
// SIG undefined FUN_141121f4c(void)

void FUN_141121f4c(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x88);
  lVar8 = (longlong)(int)param_2;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + lVar8 * 8);
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar8 * 8);
    if (plVar3 != (longlong *)0x0) {
      local_40 = lVar2;
      FUN_14081b998((longlong)(int)plVar3[1] * 0x10 + *(longlong *)(*plVar3 + 0x1b8),&local_40,
                    CONCAT71((int7)((ulonglong)*plVar3 >> 8),1));
    }
    FUN_1400020a8(lVar2);
    *(undefined8 *)(*plVar1 + lVar8 * 8) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x30);
  uVar6 = ~param_2;
  iVar5 = iVar4 + uVar6;
  if (iVar5 != 0) {
    iVar7 = 1;
    if (iVar5 < 1) {
      iVar7 = iVar5;
    }
    memmove((void *)(*(longlong *)(param_1 + 0x28) + lVar8 * 8),
            (void *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar4 - iVar7) * 8),
            (longlong)iVar7 << 3);
    iVar4 = *(int *)(param_1 + 0x30);
  }
  *(int *)(param_1 + 0x30) = iVar4 + -1;
  FUN_1411223e0(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x40);
  iVar5 = iVar4 + uVar6;
  if (iVar5 != 0) {
    iVar7 = 1;
    if (iVar5 < 1) {
      iVar7 = iVar5;
    }
    memmove((void *)(*(longlong *)(param_1 + 0x38) + lVar8 * 0x18),
            (void *)(*(longlong *)(param_1 + 0x38) + (longlong)(iVar4 - iVar7) * 0x18),
            (longlong)iVar7 * 0x18);
    iVar4 = *(int *)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x40) = iVar4 + -1;
  FUN_1411223a0(param_1 + 0x38);
  iVar4 = *(int *)(param_1 + 0x50);
  iVar5 = iVar4 + uVar6;
  if (iVar5 != 0) {
    iVar7 = 1;
    if (iVar5 < 1) {
      iVar7 = iVar5;
    }
    memmove((void *)(lVar8 * 0x88 + *(longlong *)(param_1 + 0x48)),
            (void *)((longlong)(iVar4 - iVar7) * 0x88 + *(longlong *)(param_1 + 0x48)),
            (longlong)iVar7 * 0x88);
    iVar4 = *(int *)(param_1 + 0x50);
  }
  *(int *)(param_1 + 0x50) = iVar4 + -1;
  FUN_141122360(param_1 + 0x48);
  iVar4 = *(int *)(param_1 + 0x60);
  iVar5 = iVar4 + uVar6;
  if (iVar5 != 0) {
    iVar7 = 1;
    if (iVar5 < 1) {
      iVar7 = iVar5;
    }
    memmove((void *)(lVar8 * 0x50 + *(longlong *)(param_1 + 0x58)),
            (void *)((longlong)(iVar4 - iVar7) * 0x50 + *(longlong *)(param_1 + 0x58)),
            (longlong)iVar7 * 0x50);
    iVar4 = *(int *)(param_1 + 0x60);
  }
  *(int *)(param_1 + 0x60) = iVar4 + -1;
  FUN_1411227a6(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x70);
  iVar5 = iVar4 + uVar6;
  if (iVar5 != 0) {
    iVar7 = 1;
    if (iVar5 < 1) {
      iVar7 = iVar5;
    }
    memmove((void *)(*(longlong *)(param_1 + 0x68) + lVar8),
            (void *)((longlong)(iVar4 - iVar7) + *(longlong *)(param_1 + 0x68)),(longlong)iVar7);
    iVar4 = *(int *)(param_1 + 0x70);
  }
  *(int *)(param_1 + 0x70) = iVar4 + -1;
  FUN_1403ed828(param_1 + 0x68);
  iVar4 = *(int *)(param_1 + 0x80);
  iVar5 = iVar4 + uVar6;
  if (iVar5 != 0) {
    iVar7 = 1;
    if (iVar5 < 1) {
      iVar7 = iVar5;
    }
    memmove((void *)(*(longlong *)(param_1 + 0x78) + lVar8 * 8),
            (void *)(*(longlong *)(param_1 + 0x78) + (longlong)(iVar4 - iVar7) * 8),
            (longlong)iVar7 << 3);
    iVar4 = *(int *)(param_1 + 0x80);
  }
  *(int *)(param_1 + 0x80) = iVar4 + -1;
  FUN_141122562(param_1 + 0x78);
  iVar4 = *(int *)(param_1 + 0xa8);
  iVar5 = iVar4 + uVar6;
  if (iVar5 != 0) {
    iVar7 = 1;
    if (iVar5 < 1) {
      iVar7 = iVar5;
    }
    memmove((void *)(lVar8 * 0x60 + *(longlong *)(param_1 + 0xa0)),
            (void *)((longlong)(iVar4 - iVar7) * 0x60 + *(longlong *)(param_1 + 0xa0)),
            (longlong)iVar7 * 0x60);
    iVar4 = *(int *)(param_1 + 0xa8);
  }
  *(int *)(param_1 + 0xa8) = iVar4 + -1;
  FUN_141122840(param_1 + 0xa0);
  iVar4 = *(int *)(param_1 + 0xb8);
  iVar5 = iVar4 + uVar6;
  if (iVar5 != 0) {
    iVar7 = 1;
    if (iVar5 < 1) {
      iVar7 = iVar5;
    }
    memmove((void *)(lVar8 * 0x10c + *(longlong *)(param_1 + 0xb0)),
            (void *)((longlong)(iVar4 - iVar7) * 0x10c + *(longlong *)(param_1 + 0xb0)),
            (longlong)iVar7 * 0x10c);
    iVar4 = *(int *)(param_1 + 0xb8);
  }
  *(int *)(param_1 + 0xb8) = iVar4 + -1;
  FUN_141122676(param_1 + 0xb0);
  iVar4 = *(int *)(param_1 + 200);
  iVar5 = iVar4 + uVar6;
  if (iVar5 != 0) {
    iVar7 = 1;
    if (iVar5 < 1) {
      iVar7 = iVar5;
    }
    memmove((void *)(lVar8 * 0x160 + *(longlong *)(param_1 + 0xc0)),
            (void *)((longlong)(iVar4 - iVar7) * 0x160 + *(longlong *)(param_1 + 0xc0)),
            (longlong)iVar7 * 0x160);
    iVar4 = *(int *)(param_1 + 200);
  }
  *(int *)(param_1 + 200) = iVar4 + -1;
  FUN_14112270e(param_1 + 0xc0);
  iVar4 = *(int *)(param_1 + 0x90);
  iVar5 = uVar6 + iVar4;
  if (iVar5 != 0) {
    iVar7 = 1;
    if (iVar5 < 1) {
      iVar7 = iVar5;
    }
    memmove((void *)(*(longlong *)(param_1 + 0x88) + lVar8 * 8),
            (void *)(*(longlong *)(param_1 + 0x88) + (longlong)(iVar4 - iVar7) * 8),
            (longlong)iVar7 << 3);
    iVar4 = *(int *)(param_1 + 0x90);
  }
  *(int *)(param_1 + 0x90) = iVar4 + -1;
  FUN_1411225ec(plVar1);
  if ((int)param_2 < *(int *)(param_1 + 0x90)) {
    *(uint *)(*(longlong *)(*plVar1 + lVar8 * 8) + 0x18) = param_2;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141122360 FUN_141122360 body=64 status=ok
// SIG undefined FUN_141122360(void)

void FUN_141122360(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_141122478(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x88,8);
  }
  return;
}



// FUNCTION 1411223a0 FUN_1411223a0 body=64 status=ok
// SIG undefined FUN_1411223a0(void)

void FUN_1411223a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1411224f4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1411223e0 FUN_1411223e0 body=64 status=ok
// SIG undefined FUN_1411223e0(void)

void FUN_1411223e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_141122420(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 141122420 FUN_141122420 body=87 status=ok
// SIG undefined FUN_141122420(void)

ulonglong FUN_141122420(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 141122478 FUN_141122478 body=123 status=ok
// SIG undefined FUN_141122478(void)

ulonglong FUN_141122478(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x88) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x88,8);
      uVar1 = uVar1 / 0x88;
    }
  }
  return uVar1;
}



// FUNCTION 1411224f4 FUN_1411224f4 body=109 status=ok
// SIG undefined FUN_1411224f4(void)

ulonglong FUN_1411224f4(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 141122562 FUN_141122562 body=137 status=ok
// SIG undefined FUN_141122562(void)

void FUN_141122562(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 1411225ec FUN_1411225ec body=137 status=ok
// SIG undefined FUN_1411225ec(void)

void FUN_1411225ec(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 141122676 FUN_141122676 body=151 status=ok
// SIG undefined FUN_141122676(void)

void FUN_141122676(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x10c)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x10c,4);
      uVar3 = uVar3 / 0x10c;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10c,4);
    }
  }
  return;
}



// FUNCTION 14112270e FUN_14112270e body=151 status=ok
// SIG undefined FUN_14112270e(void)

void FUN_14112270e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x160)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x160,0x10);
      uVar3 = uVar3 / 0x160;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x160,0x10);
    }
  }
  return;
}



// FUNCTION 1411227a6 FUN_1411227a6 body=153 status=ok
// SIG undefined FUN_1411227a6(void)

void FUN_1411227a6(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x50)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x50,8);
      uVar3 = uVar3 / 0x50;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x50,8);
    }
  }
  return;
}



// FUNCTION 141122840 FUN_141122840 body=153 status=ok
// SIG undefined FUN_141122840(void)

void FUN_141122840(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x60)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x60,8);
      uVar3 = uVar3 / 0x60;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x60,8);
    }
  }
  return;
}



// FUNCTION 1411228da FUN_1411228da body=262 status=ok
// SIG undefined FUN_1411228da(void)

void FUN_1411228da(longlong param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  
  bVar3 = (byte)param_2;
  *(byte *)(param_1 + 0x1d34) = *(byte *)(param_1 + 0x1d34) & 0xfd | bVar3 * '\x02' & 2;
  if (*(longlong *)(param_1 + 0x1eb8) != 0) {
    *(byte *)(*(longlong *)(param_1 + 0x1eb8) + 0xb3) = bVar3 >> 1 & 1;
    *(byte *)(*(longlong *)(param_1 + 0x1eb8) + 0xb4) = bVar3 >> 2 & 1;
  }
  *(uint *)(param_1 + 0x44b8) =
       *(uint *)(param_1 + 0x44b8) & 0xfffffffe | (param_2 & 0xffff) >> 8 & 1;
  if ((param_2 & 0x1e00) == 0) goto LAB_14112294e;
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) == '\x01') {
      lVar2 = param_1 + 0x3210;
      goto LAB_1411229c7;
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x3170) + 0xd8;
LAB_1411229c7:
    lVar2 = FUN_140153468(lVar2);
    if (lVar2 != 0) goto LAB_14112294e;
  }
  bVar3 = 1;
  if ((param_2 & 0x600) != 0) {
    bVar3 = ~(byte)(param_2 >> 8) & 2;
  }
  bVar1 = 3;
  if ((param_2 & 0xe00) != 0) {
    bVar1 = bVar3;
  }
  *(byte *)(param_1 + 0x4448) = bVar1;
  FUN_1411229e0(param_1,1);
LAB_14112294e:
  *(byte *)(param_1 + 0x4500) = (byte)(param_2 >> 0xd) & 1;
  *(byte *)(param_1 + 0x4501) = (byte)(param_2 >> 0xe) & 1;
  return;
}



// FUNCTION 1411229e0 FUN_1411229e0 body=401 status=ok
// SIG undefined FUN_1411229e0(void)

void FUN_1411229e0(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  int local_40;
  int local_3c;
  undefined1 local_38 [16];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[0x886] == 0) goto LAB_141122aed;
  lVar3 = param_1[0x886] + 0x18;
  lVar1 = FUN_14485c28e(lVar3);
  if (lVar1 == 0) goto LAB_141122aed;
  lVar1 = FUN_14485c28e(lVar3);
  if (lVar1 == 0) goto LAB_141122aed;
  local_3c = 3;
  if (param_2 == '\0') {
    if (param_1[0x15] == 0) {
      local_3c = 1;
    }
    else {
      local_3c = (*(char *)(param_1[0x15] + 0x178) == '\x02') + 1;
    }
  }
  local_40 = 1;
  if (-2 < (int)param_1[0x6b4]) {
    local_40 = (int)param_1[0x6b4] + 1;
  }
  *(int *)(param_1 + 0x6b4) = local_40;
  local_28 = '\0';
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = &DAT_14c8464e0;
  FUN_141122b72(param_1,&local_40,lVar1,0);
  lVar1 = param_1[0x16];
  if (lVar1 == 0) {
    lVar3 = FUN_1448abda6(param_1);
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = param_1[0x16];
      if (lVar1 == 0) {
        lVar1 = FUN_1448abda6(param_1);
      }
      goto LAB_141122aa3;
    }
  }
  else {
LAB_141122aa3:
    lVar1 = *(longlong *)(lVar1 + 0x6d0);
  }
  param_1[0x88a] = lVar1;
  lVar1 = param_1[0x841];
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x3b38) + 0x18))(lVar1 + 0x3b38);
    FUN_1409c9c98(uVar2,1);
  }
  (**(code **)(*param_1 + 0xef8))(param_1);
  if (local_28 == '\x01') {
    FUN_1449db362(local_38);
  }
LAB_141122aed:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141122b72 FUN_141122b72 body=659 status=ok
// SIG undefined FUN_141122b72(void)

undefined4
FUN_141122b72(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4,
             undefined8 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  longlong local_110;
  undefined4 *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  char local_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_1[0x15] == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(char *)(param_1[0x15] + 0x178) == '\x01';
  }
  uVar2 = 0;
  if ((param_3 == 0) || (bVar4)) goto LAB_141122d41;
  if (param_1[0x62e] == 0) {
    if ((char)param_1[0x696] == '\x01') {
      plVar3 = param_1 + 0x642;
      goto LAB_141122dc5;
    }
  }
  else {
    plVar3 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_141122dc5:
    cVar1 = FUN_143cf5d7e(plVar3);
    if (cVar1 != '\0') {
      uVar2 = 0;
      goto LAB_141122d41;
    }
  }
  local_c0 = '\0';
  local_b8 = 0;
  lStack_b0 = 0;
  local_a8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_a0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_98 = DAT_14c8464f0;
  local_90 = 0;
  local_88 = 0;
  local_d8 = *param_2;
  FUN_1403ed422(local_d0,param_2 + 1);
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_3);
  }
  local_b8 = param_3;
  if ((param_4 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_4);
  }
  local_98 = param_5[2];
  local_a8 = *param_5;
  uStack_a0 = param_5[1];
  local_90 = CONCAT44(param_7,param_6);
  local_88 = param_8;
  local_f8 = *(undefined4 *)param_5;
  uStack_f4 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_f0 = *(undefined4 *)(param_5 + 1);
  uStack_ec = *(undefined4 *)((longlong)param_5 + 0xc);
  local_108 = &local_f8;
  local_e8 = param_5[2];
  local_118 = param_8;
  local_120 = param_7;
  local_128 = param_6;
  local_110 = param_4;
  lStack_b0 = param_4;
  uVar2 = FUN_141122e06(param_1,param_2,param_3,0);
  if (((((char)uVar2 != '\0') && (param_1[0x15] != 0)) &&
      (*(char *)(param_1[0x15] + 0x178) == '\x02')) && ((*(byte *)(param_3 + 0x101) & 0x20) == 0)) {
    (**(code **)(*param_1 + 3000))(param_1);
    FUN_14580bf9a(param_1,&local_d8);
  }
  if (local_c0 == '\x01') {
    FUN_1449db362(local_d0);
  }
LAB_141122d41:
  if ((local_80 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141122e06 FUN_141122e06 body=1394 status=ok
// SIG undefined FUN_141122e06(void)

undefined8
FUN_141122e06(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,longlong param_8,
             undefined8 *param_9)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined1 local_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar3 = (**(code **)(*param_1 + 0x600))();
  if ((cVar3 != '\0') && (plVar6 = (longlong *)param_1[0x39d], plVar6 != (longlong *)0x0)) {
    uVar5 = FUN_1407ca880();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
    if (plVar6 != (longlong *)0x0) {
      uVar5 = FUN_1407ca880();
      plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
      uVar5 = 0;
      if ((plVar6 == plVar7) || (plVar7 == (longlong *)0x0)) goto LAB_14112318c;
      param_1[0x6a9] = *param_2;
      FUN_1403ed422(param_1 + 0x6aa,param_2 + 1);
      if (param_4 == 0) {
        *(undefined4 *)(param_1 + 0x6ad) = 0;
        iVar4 = 0;
      }
      else {
        uVar2 = *(uint *)(param_4 + 0xc);
        *(uint *)(param_1 + 0x6ad) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar4 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar4 = *(int *)(lVar10 + 0x10);
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(lVar10 + 0x10) = iVar9;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar4 = iVar9;
          }
        }
      }
      *(int *)((longlong)param_1 + 0x356c) = iVar4;
      local_d8._0_4_ = param_5;
      local_d8._0_4_ = param_5;
      local_d8._4_4_ = param_6;
      uStack_d0 = param_7;
      uStack_cc = 0;
      iStack_c8 = 0;
      if (param_8 == 0) {
        local_b0 = param_9[2];
        uStack_c0 = *param_9;
        uStack_b8 = param_9[1];
      }
      else {
        uStack_cc = *(uint *)(param_8 + 0xc);
        if ((int)uStack_cc < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uStack_cc & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_cc >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar4 = *(int *)(lVar10 + 0x10);
        if (iVar4 == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar4 = *(int *)(lVar10 + 0x10);
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(lVar10 + 0x10) = iVar9;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar4 = iVar9;
          }
          local_b0 = param_9[2];
          uStack_c0 = *param_9;
          uStack_b8 = param_9[1];
          iStack_c8 = iVar4;
          if (iVar4 == 0) goto LAB_141123059;
        }
        else {
          uStack_c0 = *param_9;
          uStack_b8 = param_9[1];
          local_b0 = param_9[2];
        }
        uVar2 = uStack_cc;
        iStack_c8 = iVar4;
        if ((((((int)uStack_cc < 0) || (DAT_14c9647dc <= (int)uStack_cc)) ||
             (plVar6 = (longlong *)
                       ((ulonglong)((uStack_cc & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_cc >> 0x10) * 8)),
             plVar6 == (longlong *)0x0)) ||
            (((int)plVar6[2] != iVar4 || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) ||
           (lVar10 = *plVar6, lVar10 == 0)) {
LAB_141123013:
          if (((-1 < (int)uVar2) &&
              ((((int)uVar2 < DAT_14c9647dc &&
                (plVar6 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                plVar6 != (longlong *)0x0)) && ((int)plVar6[2] == iVar4)))) &&
             (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar10 = *plVar6, lVar10 != 0)))) {
            lVar8 = FUN_14490fee6();
            if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
               ((*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30 &&
                (lVar10 = *(longlong *)(lVar10 + 0x3d0), lVar10 != 0)))) goto LAB_1411232ed;
          }
        }
        else {
          lVar8 = FUN_144a7cbb2();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_141123013;
LAB_1411232ed:
          FUN_14485c47a(&uStack_cc,lVar10);
        }
      }
LAB_141123059:
      *(undefined4 *)(param_1 + 0x6b2) = (undefined4)uStack_b8;
      *(undefined4 *)((longlong)param_1 + 0x3594) = uStack_b8._4_4_;
      *(undefined4 *)(param_1 + 0x6b3) = (undefined4)local_b0;
      *(undefined4 *)((longlong)param_1 + 0x359c) = local_b0._4_4_;
      *(int *)(param_1 + 0x6b0) = iStack_c8;
      *(undefined4 *)((longlong)param_1 + 0x3584) = uStack_c4;
      *(undefined4 *)(param_1 + 0x6b1) = (undefined4)uStack_c0;
      *(undefined4 *)((longlong)param_1 + 0x358c) = uStack_c0._4_4_;
      *(undefined4 *)(param_1 + 0x6ae) = (undefined4)local_d8;
      *(undefined4 *)((longlong)param_1 + 0x3574) = local_d8._4_4_;
      *(undefined4 *)(param_1 + 0x6af) = uStack_d0;
      *(uint *)((longlong)param_1 + 0x357c) = uStack_cc;
      uVar5 = (**(code **)(*plVar7 + 0x50))(plVar7);
      uStack_b8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      iStack_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      local_b0 = 0x8000000000;
      uStack_a8 = 0xffffffff;
      local_f0 = 1;
      local_f8 = &local_d8;
      FUN_14096dfee(uVar5,local_e8,param_3,1);
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_e0 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_e0 + 0x10))(local_e0);
          }
        }
      }
      uStack_90 = uStack_90 & 0xffffffff00000000;
      if (uStack_98 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_d8);
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      iStack_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      uStack_cc = 0;
      uStack_98 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_90 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      local_88 = DAT_14c8464f0;
      param_1[0x6a9] = 0;
      FUN_14112337a(param_1 + 0x6aa,&uStack_d0);
      param_1[0x6ad] = uStack_b8;
      *(undefined4 *)(param_1 + 0x6b2) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)param_1 + 0x3594) = uStack_90._4_4_;
      *(undefined4 *)(param_1 + 0x6b3) = (undefined4)local_88;
      *(undefined4 *)((longlong)param_1 + 0x359c) = local_88._4_4_;
      *(undefined4 *)(param_1 + 0x6b0) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)param_1 + 0x3584) = uStack_a0._4_4_;
      *(undefined4 *)(param_1 + 0x6b1) = (undefined4)uStack_98;
      *(undefined4 *)((longlong)param_1 + 0x358c) = uStack_98._4_4_;
      *(undefined4 *)(param_1 + 0x6ae) = (undefined4)local_b0;
      *(undefined4 *)((longlong)param_1 + 0x3574) = local_b0._4_4_;
      *(undefined4 *)(param_1 + 0x6af) = (undefined4)uStack_a8;
      *(undefined4 *)((longlong)param_1 + 0x357c) = uStack_a8._4_4_;
      if ((char)uStack_c0 == '\x01') {
        FUN_1449db362(&uStack_d0);
      }
      uVar5 = 1;
      goto LAB_14112318c;
    }
  }
  uVar5 = 0;
LAB_14112318c:
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14112337a FUN_14112337a body=97 status=ok
// SIG undefined FUN_14112337a(void)

undefined8 * FUN_14112337a(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 2) == '\x01') {
      if (*(char *)(param_1 + 2) != '\0') {
        FUN_1449db362(param_1);
      }
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      *param_1 = *param_2;
      *param_2 = 0;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)(param_2 + 1) = 0;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 2) == '\0') {
        return param_1;
      }
      FUN_1449db362(param_1);
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 2) = uVar1;
  }
  return param_1;
}



// FUNCTION 1411233dc FUN_1411233dc body=617 status=ok
// SIG undefined FUN_1411233dc(void)

void FUN_1411233dc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = param_1[0x3e];
  if (((lVar7 == 0) || ((*(byte *)(lVar7 + 0x60) & 0x10) == 0)) ||
     (*(char *)(lVar7 + 0x178) != '\x02')) goto LAB_141123566;
  lVar7 = param_1[0x102];
  if (lVar7 == 0) {
    lVar7 = (**(code **)(param_1[0x3d] + 0x28))(param_1 + 0x3d);
    param_1[0x102] = lVar7;
    if (lVar7 == 0) goto LAB_141123566;
  }
  if (*(longlong *)(lVar7 + 0x38) == 0) goto LAB_141123566;
  lVar8 = param_1[0x16];
  if (lVar8 == 0) {
    if ((param_1[0x15] != 0) && ((*(uint *)(param_1[0x15] + 8) & 0x10) == 0)) {
      lVar8 = FUN_1447210f0();
      if (lVar8 != 0) goto LAB_141123496;
    }
    lVar8 = param_1[4];
    if (lVar8 != 0) {
      if (DAT_14cb10130 == 0) {
        local_50 = &local_38;
        local_38 = FUN_140754f84;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_147da9a76;
        local_60 = FUN_1409f3105;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x990;
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
      goto LAB_141123496;
    }
    lVar8 = 0;
  }
LAB_141123496:
  *(float *)(lVar7 + 8) = (float)*(double *)(lVar8 + 0x6e0);
  uVar3 = *(undefined8 *)(lVar7 + 0x38);
  puVar4 = *(undefined8 **)(lVar7 + 0x40);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)(lVar7 + 0x38) = 0;
  }
  else {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
    plVar5 = *(longlong **)(lVar7 + 0x40);
    *(undefined8 *)(lVar7 + 0x38) = 0;
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(lVar7 + 0x40) = 0;
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
  }
  cVar6 = (**(code **)(*param_1 + 0xaa0))(param_1);
  if (cVar6 == '\0') {
    (**(code **)(*param_1 + 0xa18))(param_1,uVar3,0);
  }
  else {
    (**(code **)(*param_1 + 0xa20))(param_1,uVar3,0,0);
  }
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar2 = (int *)((longlong)puVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
      }
    }
  }
LAB_141123566:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14112365e FUN_14112365e body=117 status=ok
// SIG undefined FUN_14112365e(void)

void FUN_14112365e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_14aac8f28;
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
  param_1[0x15] = param_2;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  return;
}



// FUNCTION 1411236d4 FUN_1411236d4 body=42 status=ok
// SIG undefined FUN_1411236d4(void)

undefined8 * FUN_1411236d4(undefined8 *param_1)

{
  FUN_1411236fe();
  *param_1 = &PTR_FUN_14b9df6e0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  return param_1;
}



// FUNCTION 1411236fe FUN_1411236fe body=245 status=ok
// SIG undefined FUN_1411236fe(void)

void FUN_1411236fe(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b4862f0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xf] = 2;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 2;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  lVar1 = 0xd4;
  do {
    *(undefined1 *)((longlong)param_1 + lVar1 + -0x24) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + -0xc) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + -4) = 0x200000000;
    lVar1 = lVar1 + 0x28;
  } while (lVar1 != 0x174);
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0x200000000;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0x200000000;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x200000000;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0x200000000;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
  *(byte *)((longlong)param_1 + 0x15c) = *(byte *)((longlong)param_1 + 0x15c) & 0xf0;
  return;
}



// FUNCTION 1411237f4 FUN_1411237f4 body=156 status=ok
// SIG undefined FUN_1411237f4(void)

void FUN_1411237f4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x200000000;
  return;
}



// FUNCTION 141123890 FUN_141123890 body=228 status=ok
// SIG undefined FUN_141123890(void)

longlong FUN_141123890(void)

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
  if (DAT_14cb994b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14658c4dc;
    local_38 = &LAB_148ad28cb;
    local_40 = &LAB_14658d5bb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xcf0;
    FUN_14081cfa3(L"/Script/ChaosVehicles",L"ChaosWheeledVehicleMovementComponent",&DAT_14cb994b0,
                  FUN_14658d594);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb994b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141123976 FUN_141123976 body=475 status=ok
// SIG undefined FUN_141123976(void)

void FUN_141123976(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 2;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbd) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0xffffffff00000000;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0x200000000;
  param_1[0x47] = 0;
  param_1[0x48] = 0x2000000000;
  param_1[0x49] = 0xffffffff;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0x200000000;
  param_1[0x54] = 0;
  param_1[0x55] = 0x2000000000;
  param_1[0x56] = 0xffffffff;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0x200000000;
  param_1[0x61] = 0;
  param_1[0x62] = 0x2000000000;
  param_1[99] = 0xffffffff;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x341) = 0;
  *(undefined8 *)((longlong)param_1 + 0x349) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined4 *)((longlong)param_1 + 0x374) = 2;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0x200000000;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  return;
}



// FUNCTION 141123b52 FUN_141123b52 body=194 status=ok
// SIG undefined FUN_141123b52(void)

undefined8 * FUN_141123b52(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b283110;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_141123c14(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  param_1[7] = &PTR_FUN_14b283190;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  param_1[7] = &PTR_FUN_14b2841e0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b284200;
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



// FUNCTION 141123c14 FUN_141123c14 body=40 status=ok
// SIG undefined FUN_141123c14(void)

void FUN_141123c14(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14872d196(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 141123c4a FUN_141123c4a body=149 status=ok
// SIG undefined FUN_141123c4a(void)

undefined8 * FUN_141123c4a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b240a30;
  FUN_140b47c46(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[9];
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
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b23dd30;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141123ce0 FUN_141123ce0 body=173 status=ok
// SIG undefined FUN_141123ce0(void)

void FUN_141123ce0(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_141123d77;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_141123d77:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 141123d8e FUN_141123d8e body=253 status=ok
// SIG undefined FUN_141123d8e(void)

void FUN_141123d8e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d8 [168];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = *param_3;
  local_f8 = param_2;
  if (DAT_14c950c29 == 1) {
    if (local_e8 == 0) {
      local_e8 = 0;
    }
    else {
      FUN_1456cec3c();
      local_e8 = *param_3;
    }
  }
  local_e0 = param_3[1];
  if ((DAT_14c950c29 & 1) != 0) {
    if (local_e0 == 0) {
      local_e0 = 0;
    }
    else {
      FUN_1456cec3c();
      local_e0 = param_3[1];
    }
  }
  bVar1 = DAT_14c950c29;
  memcpy(local_d8,param_3 + 2,0xa4);
  local_30 = param_3[0x17];
  if ((bVar1 & 1) != 0) {
    if (local_30 == 0) {
      local_30 = 0;
    }
    else {
      FUN_1456cec3c();
      local_30 = param_3[0x17];
    }
  }
  FUN_1447cd2ec(param_1);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141123e8c FUN_141123e8c body=38 status=ok
// SIG undefined FUN_141123e8c(void)

undefined8 FUN_141123e8c(undefined8 param_1,int param_2)

{
  FUN_141123eb2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141123eb2 FUN_141123eb2 body=126 status=ok
// SIG undefined FUN_141123eb2(void)

void FUN_141123eb2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f535b0;
  if (param_1[0xb2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xaf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xac] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa6] != 0) {
    FUN_1400020a8();
  }
  FUN_141123f30(param_1);
  return;
}



// FUNCTION 141123f30 FUN_141123f30 body=725 status=ok
// SIG undefined FUN_141123f30(void)

void FUN_141123f30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f535d0;
  if (param_1[0xa2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x97] != 0) {
    FUN_1400020a8();
  }
  FUN_140191cbb(param_1[0x94],*(undefined4 *)(param_1 + 0x95));
  if (param_1[0x94] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x91] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6d] != 0) {
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
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_141124206(param_1);
  return;
}



// FUNCTION 141124206 FUN_141124206 body=88 status=ok
// SIG undefined FUN_141124206(void)

void FUN_141124206(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f53550;
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  FUN_14112425e(param_1);
  return;
}



// FUNCTION 14112425e FUN_14112425e body=649 status=ok
// SIG undefined FUN_14112425e(void)

void FUN_14112425e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f53150;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_140056653(param_1[0x3a],*(undefined4 *)(param_1 + 0x3b));
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_1400565a5(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_14005b1fd(param_1[0x34],*(undefined4 *)(param_1 + 0x35));
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_14006c805(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1411244e8(param_1);
  return;
}



// FUNCTION 1411244e8 FUN_1411244e8 body=75 status=ok
// SIG undefined FUN_1411244e8(void)

void FUN_1411244e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f53170;
  FUN_144756766(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140191d2e(param_1);
  return;
}



// FUNCTION 141124534 FUN_141124534 body=2143 status=ok
// SIG undefined FUN_141124534(void)

ulonglong FUN_141124534(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  char *pcVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  undefined2 *puVar16;
  undefined8 *puVar17;
  undefined2 **ppuVar18;
  undefined8 *puVar19;
  int iVar20;
  char *pcVar21;
  undefined8 *puVar22;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined8 local_140;
  undefined4 local_12c;
  undefined1 local_128 [96];
  undefined2 *local_c8;
  int local_c0;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar7 = *(longlong *)(param_1 + 0x4d0);
  if ((lVar7 == 0) ||
     (local_12c = (undefined4)CONCAT71((int7)((ulonglong)param_2 >> 8),1),
     (*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0)) {
    LOCK();
    UNLOCK();
    iVar20 = DAT_14cc077d4 + 1;
    DAT_14cc077d4 = DAT_14cc077d4 + 1;
    FUN_140002266(&local_c8,L"CacheValidationHierarchy_%u",iVar20);
    puVar16 = local_c8;
    if (local_c0 == 0) {
      puVar16 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_68,puVar16,1);
    local_140 = 0;
    local_148 = 0;
    lVar7 = FUN_14591e996(param_1,local_68,0x40,0);
    if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar7);
    }
    *(longlong *)(param_1 + 0x4d0) = lVar7;
    *(undefined1 *)(lVar7 + 0x4c8) = 0;
    if (local_c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar7 = *(longlong *)(param_1 + 0x4d0);
    local_12c = 0;
  }
  FUN_140ad4952(lVar7,param_1,1);
  lVar7 = *(longlong *)(param_1 + 0x4d0);
  if (0 < *(int *)(lVar7 + 0xc0)) {
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0xb8) + lVar8 * 8);
      if (lVar7 == 0) goto LAB_1411246ad;
      bVar2 = *(byte *)(lVar7 + 0x10);
      if (bVar2 == 1) {
LAB_141124678:
        pcVar21 = *(char **)(lVar7 + 0xc0);
        if (pcVar21 == (char *)0x0) {
          pcVar21 = "";
        }
        if (*pcVar21 == '\0') {
          pcVar12 = *(char **)(lVar7 + 0xb0);
          pcVar21 = pcVar12;
LAB_141124699:
          if (pcVar12 == (char *)0x0) {
            pcVar12 = "";
          }
          if (*pcVar12 == '\0') {
            if (pcVar21 == (char *)0x0) {
              pcVar21 = &DAT_14cc07bfc;
            }
            *pcVar21 = '\x01';
          }
        }
      }
      else if (bVar2 < 0x10) {
        if (bVar2 == 2) {
          pcVar21 = *(char **)(lVar7 + 0xc0);
          pcVar12 = pcVar21;
          if (pcVar21 == (char *)0x0) {
            pcVar12 = "";
          }
          if (*pcVar12 == '\0') {
            pcVar12 = *(char **)(lVar7 + 0xb0);
            goto LAB_141124699;
          }
        }
        else if (bVar2 == 4) {
          pcVar21 = *(char **)(lVar7 + 0x478);
          if (pcVar21 == (char *)0x0) {
            pcVar21 = "";
          }
          if (*pcVar21 == '\0') {
            pcVar21 = *(char **)(lVar7 + 0x468);
            pcVar12 = pcVar21;
            if (pcVar21 == (char *)0x0) {
              pcVar12 = "";
            }
            if (*pcVar12 == '\0') {
              if (pcVar21 == (char *)0x0) {
                pcVar21 = &DAT_14cc07bfc;
              }
              *pcVar21 = '\x01';
            }
          }
          pcVar21 = *(char **)(lVar7 + 0xc0);
          if (pcVar21 == (char *)0x0) {
            pcVar21 = "";
          }
          if (*pcVar21 == '\0') {
            pcVar21 = *(char **)(lVar7 + 0xb0);
            pcVar12 = pcVar21;
            if (pcVar21 == (char *)0x0) {
              pcVar12 = "";
            }
            if (*pcVar12 == '\0') {
              if (pcVar21 == (char *)0x0) {
                pcVar21 = &DAT_14cc07bfc;
              }
              *pcVar21 = '\x01';
            }
          }
          pcVar21 = *(char **)(lVar7 + 0x4f8);
          if (pcVar21 == (char *)0x0) {
            pcVar21 = "";
          }
          if (*pcVar21 == '\0') {
            pcVar12 = *(char **)(lVar7 + 0x4e8);
            pcVar21 = pcVar12;
            goto LAB_141124699;
          }
        }
      }
      else if (((bVar2 == 0x10) || (bVar2 == 0x20)) || (bVar2 == 0x80)) goto LAB_141124678;
LAB_1411246ad:
      lVar8 = lVar8 + 1;
      lVar7 = *(longlong *)(param_1 + 0x4d0);
    } while (lVar8 < *(int *)(lVar7 + 0xc0));
  }
  FUN_141124f54();
  if (0 < *(int *)(param_1 + 0xc0)) {
    lVar7 = 0;
    do {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar7 * 8);
      if (lVar8 == 0) goto LAB_141124873;
      bVar2 = *(byte *)(lVar8 + 0x10);
      if (bVar2 == 1) {
LAB_1411247d1:
        uVar9 = *(undefined8 *)(param_1 + 0x4d0);
        uVar5 = FUN_140813180(uVar9);
        uVar9 = FUN_141124d94(uVar9,uVar5);
        pcVar21 = *(char **)(lVar8 + 0xc0);
        if (pcVar21 == (char *)0x0) {
          pcVar21 = "";
        }
        if (*pcVar21 == '\0') {
          pcVar21 = *(char **)(lVar8 + 0xb0);
          if (pcVar21 == (char *)0x0) {
            pcVar21 = "";
          }
          if (*pcVar21 == '\0') {
            puVar22 = *(undefined8 **)(lVar8 + 0x80);
            if (((puVar22 == (undefined8 *)0x0) &&
                (puVar22 = &DAT_14cc07c00,
                *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
                < DAT_14cc07c60)) && (FUN_144b3d300(&DAT_14cc07c60), DAT_14cc07c60 == -1)) {
              puVar22 = &DAT_14cc07c00;
              puVar17 = &DAT_14c846480;
              puVar19 = &DAT_14cc07c00;
              for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                *puVar19 = *puVar17;
                puVar17 = puVar17 + 1;
                puVar19 = puVar19 + 1;
              }
              _Init_thread_footer(&DAT_14cc07c60);
            }
            ppuVar18 = &local_c8;
            for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
              *ppuVar18 = (undefined2 *)*puVar22;
              puVar22 = puVar22 + 1;
              ppuVar18 = ppuVar18 + 1;
            }
            FUN_1401571e4(*(undefined8 *)(param_1 + 0x4d0),local_128,uVar9,2);
            cVar4 = FUN_141124de2(local_128,&local_c8,0x3c23d70a);
            if (cVar4 == '\0') {
              puVar11 = *(undefined1 **)(lVar8 + 0xb0);
LAB_141124c8c:
              puVar15 = &DAT_14cc07bfc;
              if (puVar11 != (undefined1 *)0x0) {
                puVar15 = puVar11;
              }
              *puVar15 = 1;
            }
          }
        }
      }
      else if (bVar2 < 0x10) {
        if (bVar2 == 2) {
          uVar9 = FUN_1491dfd72(*(undefined8 *)(param_1 + 0x4d0),lVar8 + 0x10);
          pcVar21 = *(char **)(lVar8 + 0xc0);
          if (pcVar21 == (char *)0x0) {
            pcVar21 = "";
          }
          if (*pcVar21 == '\0') {
            pcVar21 = *(char **)(lVar8 + 0xb0);
            if (pcVar21 == (char *)0x0) {
              pcVar21 = "";
            }
            if (*pcVar21 == '\0') {
              puVar22 = (undefined8 *)FUN_144b3cbe6(lVar8 + 0x78);
              ppuVar18 = &local_c8;
              for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
                *ppuVar18 = (undefined2 *)*puVar22;
                puVar22 = puVar22 + 1;
                ppuVar18 = ppuVar18 + 1;
              }
              FUN_1401571e4(*(undefined8 *)(param_1 + 0x4d0),local_128,uVar9,2);
              cVar4 = FUN_141124de2(local_128,&local_c8,0x3c23d70a);
              if (cVar4 == '\0') {
                puVar11 = *(undefined1 **)(lVar8 + 0xc0);
                goto LAB_141124c8c;
              }
            }
          }
        }
        else if (bVar2 == 4) {
          lVar13 = *(longlong *)(param_1 + 0x4d0);
          uVar6 = FUN_140813180(lVar13);
          if ((((int)uVar6 < 0) || (*(int *)(lVar13 + 0xc0) <= (int)uVar6)) ||
             ((lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0xb8) + (ulonglong)uVar6 * 8),
              lVar13 == 0 || (*(char *)(lVar13 + 0x10) != '\x04')))) {
            lVar13 = 0;
          }
          pcVar21 = *(char **)(lVar8 + 0x478);
          if (pcVar21 == (char *)0x0) {
            pcVar21 = "";
          }
          if (*pcVar21 == '\0') {
            pcVar21 = *(char **)(lVar8 + 0x468);
            if (pcVar21 == (char *)0x0) {
              pcVar21 = "";
            }
            if (*pcVar21 == '\0') {
              puVar22 = (undefined8 *)FUN_144b3cbe6(lVar13 + 0x430);
              ppuVar18 = &local_c8;
              for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
                *ppuVar18 = (undefined2 *)*puVar22;
                puVar22 = puVar22 + 1;
                ppuVar18 = ppuVar18 + 1;
              }
              FUN_1401261c4(*(undefined8 *)(param_1 + 0x4d0),local_128,lVar13,2);
              cVar4 = FUN_141124de2(local_128,&local_c8,0x3c23d70a);
              if (cVar4 == '\0') {
                puVar11 = &DAT_14cc07bfc;
                if (*(undefined1 **)(lVar8 + 0x468) != (undefined1 *)0x0) {
                  puVar11 = *(undefined1 **)(lVar8 + 0x468);
                }
                *puVar11 = 1;
              }
            }
          }
          pcVar21 = *(char **)(lVar8 + 0xc0);
          if (pcVar21 == (char *)0x0) {
            pcVar21 = "";
          }
          if (*pcVar21 == '\0') {
            pcVar21 = *(char **)(lVar8 + 0xb0);
            if (pcVar21 == (char *)0x0) {
              pcVar21 = "";
            }
            if (*pcVar21 == '\0') {
              puVar22 = (undefined8 *)FUN_144b3cbe6(lVar8 + 0x78);
              ppuVar18 = &local_c8;
              for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
                *ppuVar18 = (undefined2 *)*puVar22;
                puVar22 = puVar22 + 1;
                ppuVar18 = ppuVar18 + 1;
              }
              FUN_1401571e4(*(undefined8 *)(param_1 + 0x4d0),local_128,lVar13,2);
              cVar4 = FUN_141124de2(local_128,&local_c8,0x3c23d70a);
              if (cVar4 == '\0') {
                puVar11 = &DAT_14cc07bfc;
                if (*(undefined1 **)(lVar8 + 0xb0) != (undefined1 *)0x0) {
                  puVar11 = *(undefined1 **)(lVar8 + 0xb0);
                }
                *puVar11 = 1;
              }
            }
          }
          pcVar21 = *(char **)(lVar8 + 0x4f8);
          if (pcVar21 == (char *)0x0) {
            pcVar21 = "";
          }
          if (*pcVar21 == '\0') {
            pcVar21 = *(char **)(lVar8 + 0x4e8);
            if (pcVar21 == (char *)0x0) {
              pcVar21 = "";
            }
            if (*pcVar21 == '\0') {
              puVar22 = (undefined8 *)FUN_144b3cbe6(lVar8 + 0x4b0);
              ppuVar18 = &local_c8;
              for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
                *ppuVar18 = (undefined2 *)*puVar22;
                puVar22 = puVar22 + 1;
                ppuVar18 = ppuVar18 + 1;
              }
              FUN_14449ed30(*(undefined8 *)(param_1 + 0x4d0),local_128,lVar13,2);
              cVar4 = FUN_141124de2(local_128,&local_c8,0x3c23d70a);
              if (cVar4 == '\0') {
                puVar11 = *(undefined1 **)(lVar8 + 0x4e8);
                goto LAB_141124c8c;
              }
            }
          }
        }
      }
      else if (((bVar2 == 0x10) || (bVar2 == 0x20)) || (bVar2 == 0x80)) goto LAB_1411247d1;
LAB_141124873:
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0xc0));
  }
  uVar10 = FUN_140ad5be4(param_1,0xff);
  if (((char)local_12c == '\0') &&
     (plVar3 = *(longlong **)(param_1 + 0x4d0), plVar3 != (longlong *)0x0)) {
    uVar9 = FUN_1409ffe1d();
    lVar7 = 0;
    (**(code **)(*plVar3 + 0x170))(plVar3,0,uVar9,0x34);
    uVar6 = *(uint *)(*(longlong *)(param_1 + 0x4d0) + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    FUN_14482b126(lVar7,0x40000000);
    lVar7 = *(longlong *)(param_1 + 0x4d0);
    FUN_144757f48(lVar7,0x40000000);
    uVar6 = *(uint *)(lVar7 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    do {
      uVar6 = *(uint *)(lVar7 + 8);
      uVar10 = (ulonglong)uVar6;
      if ((uVar6 >> 0x15 & 1) != 0) break;
      LOCK();
      uVar1 = *(uint *)(lVar7 + 8);
      if (uVar6 == uVar1) {
        *(uint *)(lVar7 + 8) = uVar6 | 0x200000;
      }
      else {
        uVar10 = (ulonglong)uVar1;
      }
      UNLOCK();
    } while (uVar6 != uVar1);
    *(undefined8 *)(param_1 + 0x4d0) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 141124d94 FUN_141124d94 body=77 status=ok
// SIG undefined FUN_141124d94(void)

longlong FUN_141124d94(longlong param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xc0))) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)param_2 * 8);
    if ((lVar2 != 0) &&
       ((bVar1 = *(byte *)(lVar2 + 0x10), bVar1 - 1 < 2 ||
        (((bVar1 < 0x21 && ((0x100010010U >> ((ulonglong)(uint)bVar1 & 0x3f) & 1) != 0)) ||
         (bVar1 == 0x80)))))) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 141124de2 FUN_141124de2 body=370 status=ok
// SIG undefined FUN_141124de2(void)

bool FUN_141124de2(double *param_1,double *param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  uint uVar6;
  undefined4 in_R8D;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  
  dVar10 = (double)param_3;
  bVar5 = false;
  if (((ABS(param_1[4] - param_2[4]) <= dVar10) && (ABS(param_1[5] - param_2[5]) <= dVar10)) &&
     (ABS(param_1[6] - param_2[6]) <= dVar10)) {
    lVar9 = -(ulonglong)(dVar10 < ABS(param_1[1] - param_2[1]));
    auVar4._8_4_ = (int)lVar9;
    auVar4._0_8_ = -(ulonglong)(dVar10 < ABS(*param_1 - *param_2));
    auVar4._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    uVar6 = movmskpd(0,auVar4);
    lVar9 = -(ulonglong)(dVar10 < ABS(param_1[3] - param_2[3]));
    auVar3._8_4_ = (int)lVar9;
    auVar3._0_8_ = -(ulonglong)(dVar10 < ABS(param_1[2] - param_2[2]));
    auVar3._12_4_ = (int)((ulonglong)lVar9 >> 0x20);
    iVar7 = movmskpd(in_R8D,auVar3);
    uVar8 = iVar7 << 2 | uVar6;
    if (uVar8 != 0) {
      auVar2._8_8_ = -(ulonglong)(dVar10 < ABS(param_1[1] + param_2[1]));
      auVar2._0_8_ = -(ulonglong)(dVar10 < ABS(*param_1 + *param_2));
      iVar7 = movmskpd(uVar6,auVar2);
      auVar1._8_8_ = -(ulonglong)(dVar10 < ABS(param_1[3] + param_2[3]));
      auVar1._0_8_ = -(ulonglong)(dVar10 < ABS(param_1[2] + param_2[2]));
      uVar6 = movmskpd(uVar8,auVar1);
      if ((uVar6 & 0x3fffffff) != 0 || iVar7 != 0) {
        return false;
      }
    }
    bVar5 = false;
    if ((ABS(param_1[8] - param_2[8]) <= dVar10) &&
       (bVar5 = false, ABS(param_1[9] - param_2[9]) <= dVar10)) {
      bVar5 = ABS(param_1[10] - param_2[10]) <= dVar10;
    }
  }
  return bVar5;
}



// FUNCTION 141124f54 FUN_141124f54 body=254 status=ok
// SIG undefined FUN_141124f54(void)

void FUN_141124f54(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < *(int *)(param_1 + 0xc0)) {
    uVar3 = 0;
    do {
      iVar2 = 0;
      do {
        if ((((longlong)uVar3 < (longlong)*(int *)(param_1 + 0xc0)) &&
            (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + uVar3 * 8), lVar1 != 0)) &&
           (*(char *)(lVar1 + 0x10) == '\x04')) {
          FUN_1401261c4(param_1,local_88,lVar1,iVar2);
        }
        lVar1 = FUN_141125054(param_1,uVar3 & 0xffffffff);
        if (lVar1 != 0) {
          FUN_1401571e4(param_1,local_88,lVar1,iVar2);
        }
        if ((((longlong)uVar3 < (longlong)*(int *)(param_1 + 0xc0)) &&
            (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + uVar3 * 8), lVar1 != 0)) &&
           (*(char *)(lVar1 + 0x10) == '\x04')) {
          FUN_14449ed30(param_1,local_88,lVar1,iVar2);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 4);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0xc0));
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141125054 FUN_141125054 body=77 status=ok
// SIG undefined FUN_141125054(void)

longlong FUN_141125054(longlong param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xc0))) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)param_2 * 8);
    if ((lVar2 != 0) &&
       ((bVar1 = *(byte *)(lVar2 + 0x10), bVar1 - 1 < 2 ||
        (((bVar1 < 0x21 && ((0x100010010U >> ((ulonglong)(uint)bVar1 & 0x3f) & 1) != 0)) ||
         (bVar1 == 0x80)))))) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1411250a2 FUN_1411250a2 body=145 status=ok
// SIG undefined FUN_1411250a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411250a2(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x2f0);
  while (plVar2 = plVar1, plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[5];
    *(undefined4 *)(plVar2 + 3) = 0;
    if (*(int *)((longlong)plVar2 + 0x1c) != 0) {
      FUN_141125134(plVar2 + 2);
    }
    if (plVar2[2] != 0) {
      FUN_1400020a8();
    }
    _DAT_14cb7ca9c = _DAT_14cb7ca9c + -1;
    *plVar2 = (longlong)DAT_14cb7ca90;
    DAT_14cb7ca90 = plVar2;
  }
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  FUN_14580d0b8(param_1 + 0x300);
  return;
}



// FUNCTION 141125134 FUN_141125134 body=48 status=ok
// SIG undefined FUN_141125134(void)

void FUN_141125134(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 141125164 FUN_141125164 body=766 status=ok
// SIG undefined FUN_141125164(void)

void FUN_141125164(longlong *param_1,undefined8 param_2,char *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  longlong local_190;
  longlong local_188;
  undefined1 local_180 [24];
  longlong local_168;
  longlong local_158;
  longlong *plStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar5 = FUN_140ccfc10();
  local_1a0 = 0;
  local_198 = 0;
  local_190 = param_1[0x12];
  if (*param_3 == '\x02') {
    FUN_141125464(lVar5 + 0x90,&local_158,&local_1a0);
    lVar9 = 0;
    if ((int)plStack_150 != 0x4fc71eb4) {
      lVar9 = local_158;
    }
    if (local_158 != 0) {
      lVar9 = local_158;
    }
    iVar8 = (int)plStack_150;
    if (lVar9 != 0 && (int)plStack_150 - 1U < 0xfffffffe) {
      bVar10 = true;
      lVar5 = local_158;
      goto LAB_141125200;
    }
  }
  else {
    lVar9 = 0;
    iVar8 = 0x4fc71eb4;
  }
  FUN_141125464(lVar5 + 0x78,&local_158,&local_1a0);
  lVar5 = local_158;
  if (iVar8 == (int)plStack_150) {
    lVar5 = lVar9;
  }
  if (lVar9 != local_158) {
    lVar5 = local_158;
  }
  bVar10 = (int)plStack_150 - 1U < 0xfffffffe;
LAB_141125200:
  if ((lVar5 != 0) && (bVar10)) {
    lVar9 = param_1[0x30];
    if (lVar9 == 0) {
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar9 = param_1[4];
      }
      else {
        lVar9 = 0;
      }
    }
    uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_1407f7f84(&local_158,uVar6);
    if (plStack_150 != (longlong *)0x0) {
      iVar8 = (int)plStack_150[1];
      do {
        if (iVar8 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)plStack_150[1];
        bVar10 = iVar8 == iVar4;
        if (bVar10) {
          *(int *)(plStack_150 + 1) = iVar8 + 1;
          iVar4 = iVar8;
        }
        iVar8 = iVar4;
        UNLOCK();
        plVar7 = plStack_150;
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)plStack_150 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_150 + 0x10))();
      }
      lVar3 = local_158;
      if (plVar7 != (longlong *)0x0) {
        if (local_158 != 0) {
          local_128 = 0;
          uStack_120 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_148 = 0;
          uStack_140 = 0;
          local_158 = 0;
          plStack_150 = (longlong *)0x0;
          local_118 = 0xc0;
          local_108 = 0;
          local_f8 = 0;
          local_c8 = 0;
          local_b8 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          local_70 = 0x3ff0000000000000;
          local_68 = 0x3ff0000000000000;
          local_60 = 0x3ff0000000000000;
          local_58 = 0;
          local_50 = 0;
          local_54 = (undefined4)param_1[0x4e];
          local_188 = lVar5;
          FUN_1446dcdd4(local_180);
          if (((DAT_14cb78ff0 != 0) && (lVar5 = FUN_144837462(DAT_14cb78ff0,local_180), lVar9 != 0))
             && (lVar5 != 0)) {
            local_1a8 = 0;
            local_1b8 = 1;
            local_1b0 = &local_158;
            FUN_1408f2522(lVar3,lVar5,lVar9,param_2);
          }
          if (local_168 != 0) {
            FUN_1400020a8();
          }
          FUN_141466e9a(&local_158);
        }
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141125464 FUN_141125464 body=233 status=ok
// SIG undefined FUN_141125464(void)

longlong * FUN_141125464(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  if ((lVar1 != 0) && ((int)param_1[1] - 1U < 0xfffffffe)) {
    if ((int)param_1[1] == 0x4fc71eb4) {
      *param_2 = lVar1;
      param_2[2] = 0;
      *(undefined4 *)(param_2 + 1) = 0x4fc71eb4;
      goto LAB_14112551c;
    }
    local_58 = lVar1;
    FUN_1446dcdd4(local_50);
    if (DAT_14cb78d20 == 0) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      plVar2 = (longlong *)FUN_144837462(DAT_14cb78d20,local_50);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3);
        goto LAB_14112551c;
      }
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0x4fc71eb4;
  param_2[2] = 0;
LAB_14112551c:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14112554e FUN_14112554e body=1064 status=ok
// SIG undefined FUN_14112554e(void)

void FUN_14112554e(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
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
  undefined8 local_80;
  longlong *local_78;
  code *local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *plStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  lVar7 = *(longlong *)(param_1 + 0x48);
  cVar6 = FUN_140337e44(lVar7 + 0x38,*(longlong *)(param_1 + 0x40) + 0x240,lVar7 + 0x50);
  *(bool *)(param_1 + 0x54) = *(char *)(lVar7 + 0x51) != cVar6;
  uVar9 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x58,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x70);
  *(undefined4 *)(param_1 + 0x58) = uVar9;
  if (*(longlong *)(param_1 + 0x60) != 0) goto LAB_1411255d4;
  lVar7 = *(longlong *)(param_1 + 0x40);
  if (((((lVar7 == 0) || (*(int *)(lVar7 + 0x4c) == 0)) ||
       (uVar2 = *(uint *)(lVar7 + 0x48), (int)uVar2 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar2 ||
       (plVar8 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0)))) ||
     (((int)plVar8[2] != *(int *)(lVar7 + 0x4c) ||
      (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (lVar7 = *plVar8, lVar7 == 0)))))) {
LAB_14112578b:
    lVar7 = 0;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_a0 = &local_70;
      local_70 = FUN_141030f22;
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
    }
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_14112578b;
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  fVar10 = (float)FUN_1411259a0();
  fVar11 = (float)FUN_140309e34(lVar3 + 0xb0,*(longlong *)(param_1 + 0x40) + 0x240,lVar3 + 200);
  if (fVar10 <= fVar11) {
    fVar11 = fVar10;
  }
  if (*(char *)(lVar3 + 0x80) == '\x01') {
    FUN_141125a0c(&local_70,lVar7,fVar11);
    plVar4 = local_68;
    *(code **)(param_1 + 0x60) = local_70;
    local_70 = (code *)0x0;
    plVar8 = *(longlong **)(param_1 + 0x68);
    if (local_68 != plVar8) {
      local_68 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x68) = plVar4;
      if (plVar8 == (longlong *)0x0) goto LAB_1411255d4;
      LOCK();
      plVar4 = plVar8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    plVar8 = local_68;
    if (local_68 == (longlong *)0x0) goto LAB_1411255d4;
    LOCK();
    plVar4 = local_68 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1411255d4;
    (**(code **)*local_68)(local_68);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1411255d4;
    lVar7 = *plVar8;
  }
  else {
    if (*(longlong *)(lVar3 + 0xa8) == 0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      puVar5 = *(undefined8 **)(param_1 + 0x68);
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x68) = 0;
        LOCK();
        piVar1 = (int *)(puVar5 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(puVar5);
          LOCK();
          piVar1 = (int *)((longlong)puVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_f8);
          }
        }
      }
      goto LAB_1411255d4;
    }
    local_70 = (code *)0x0;
    local_68 = (longlong *)CONCAT44(local_68._4_4_,0xffffffff);
    local_60 = 0;
    plStack_58 = (longlong *)0x0;
    FUN_1437fee74(*(longlong *)(lVar3 + 0xa8),&local_70);
    FUN_141125b0a(&local_80,lVar7,&local_70,fVar11);
    plVar8 = local_78;
    if ((undefined8 *)(param_1 + 0x60) != &local_80) {
      *(undefined8 *)(param_1 + 0x60) = local_80;
      local_80 = 0;
      plVar4 = *(longlong **)(param_1 + 0x68);
      if (local_78 != plVar4) {
        local_78 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x68) = plVar8;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar4 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
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
    }
    plVar8 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_78 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (plStack_58 == (longlong *)0x0) goto LAB_1411255d4;
    LOCK();
    piVar1 = (int *)((longlong)plStack_58 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1411255d4;
    lVar7 = *plStack_58;
    plVar8 = plStack_58;
  }
  (**(code **)(lVar7 + 0x10))(plVar8);
LAB_1411255d4:
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411259a0 FUN_1411259a0 body=107 status=ok
// SIG undefined FUN_1411259a0(void)

undefined4 FUN_1411259a0(void)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  
  lVar2 = DAT_14cb1ce68;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar5 = 1;
  }
  return *(undefined4 *)(lVar2 + uVar5 * 4);
}



// FUNCTION 141125a0c FUN_141125a0c body=252 status=ok
// SIG undefined FUN_141125a0c(void)

undefined8 * FUN_141125a0c(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    lVar3 = FUN_140a40fb0(param_2);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x1518), lVar3 != 0)) {
      local_48 = *(undefined4 *)(lVar3 + 0x250);
      local_50 = *(undefined8 *)(lVar3 + 0x5d0);
      local_40 = *(undefined8 *)(lVar3 + 0x480);
      plVar2 = *(longlong **)(lVar3 + 0x488);
      local_38 = plVar2;
      if (plVar2 == (longlong *)0x0) {
        FUN_141125b0a(param_1,param_2,&local_50,param_3);
      }
      else {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        FUN_141125b0a(param_1,param_2,&local_50,param_3);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141125b0a FUN_141125b0a body=316 status=ok
// SIG undefined FUN_141125b0a(void)

undefined8 * FUN_141125b0a(undefined8 *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *(uint *)(param_3 + 8);
  if (0x14 < uVar3) {
    if (uVar3 - 0x15 < 10) {
      FUN_14102fe8e(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    if ((uVar3 == 0x200) && (param_2 != 0)) {
      uVar7 = FUN_1447210f0(param_2);
      FUN_141246736(&local_28,uVar7);
      if (local_20 != (longlong *)0x0) {
        iVar6 = (int)local_20[1];
        do {
          if (iVar6 == 0) {
            plVar8 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar5 = (int)local_20[1];
          bVar9 = iVar6 == iVar5;
          if (bVar9) {
            *(int *)(local_20 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
          plVar8 = local_20;
        } while (!bVar9);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_20 + 0x10))();
        }
        if (plVar8 != (longlong *)0x0) {
          if (local_28 != 0) {
            *param_1 = *(undefined8 *)(local_28 + 0x3c0);
            lVar4 = *(longlong *)(local_28 + 0x3c8);
            param_1[1] = lVar4;
            if (lVar4 != 0) {
              LOCK();
              *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
              UNLOCK();
            }
            LOCK();
            plVar2 = plVar8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
            goto LAB_141125b31;
          }
          LOCK();
          plVar2 = plVar8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_141125b31:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141125c4a FUN_141125c4a body=1 status=ok
// SIG undefined FUN_141125c4a(void)

void FUN_141125c4a(void)

{
  return;
}



// FUNCTION 141125c4c FUN_141125c4c body=277 status=ok
// SIG undefined FUN_141125c4c(void)

undefined8 FUN_141125c4c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_141125d5b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141125d5b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_141125d5b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141125d09;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_141125d09;
    }
  }
  uVar6 = 0;
LAB_141125d09:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141125d64 FUN_141125d64 body=944 status=ok
// SIG undefined FUN_141125d64(void)

void FUN_141125d64(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  double _Y;
  double _X;
  undefined1 auStack_158 [32];
  double local_138;
  double local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  char local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  char local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar7 = FUN_141169abc();
  if (lVar7 == 0) goto LAB_141126095;
  FUN_1449027d0(param_1,&local_108);
  lVar3 = *(longlong *)(CONCAT44(uStack_104,local_108) + 0x410);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b0));
  plVar6 = (longlong *)CONCAT44(uStack_fc,uStack_100);
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
  if (0 < *(int *)(lVar3 + 0x198)) {
    lVar9 = 0;
    bVar10 = false;
LAB_141125ea9:
    lVar8 = lVar9 * 0x60;
    do {
      lVar4 = *(longlong *)(lVar3 + 400);
      FUN_145aaae1a(lVar7,&local_108,lVar4 + lVar8);
      _Y = 0.5;
      _X = 0.5;
      if (local_f8 == '\x01') {
        if (ABS((double)CONCAT44(uStack_104,local_108)) < 1.0) {
          _Y = 0.5;
          _X = 0.5;
          if (ABS((double)CONCAT44(uStack_fc,uStack_100)) < 1.0) goto LAB_141125f13;
        }
        local_118 = local_f8;
        local_128 = local_108;
        uStack_124 = uStack_104;
        uStack_120 = uStack_100;
        uStack_11c = uStack_fc;
        FUN_148e24c4c(&local_138,&local_128);
        uVar11 = 0;
        uVar13 = 0;
        _Y = 0.0 - (local_130 + -1.0) * 0.5;
        dVar5 = (local_138 + 1.0) * 0.5;
        _X = dVar5 + 0.0;
        if ((((_Y != 0.0) || (NAN(_Y))) || (dVar5 != 0.0)) || (NAN(dVar5))) goto LAB_141125f13;
      }
      else {
LAB_141125f13:
        dVar5 = atan2(_Y,_X);
        uVar11 = SUB84(dVar5,0);
        uVar13 = (undefined4)((ulonglong)dVar5 >> 0x20);
      }
      fVar12 = (float)((double)CONCAT44(uVar13,uVar11) * 3.1415927410125732 * 57.29577951308232);
      if (((1.0 < ABS(*(double *)(lVar4 + 0x10 + lVar8) - _X)) ||
          (1.0 < ABS(*(double *)(lVar4 + 0x18 + lVar8) - _Y))) ||
         (0.1 < ABS(fVar12 - *(float *)(lVar4 + 0x58 + lVar8)))) goto LAB_141126018;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x60;
      if (*(int *)(lVar3 + 0x198) <= lVar9) {
        if (!bVar10) break;
        goto LAB_141126084;
      }
    } while( true );
  }
  goto LAB_14112608c;
LAB_141126018:
  *(double *)(lVar4 + 0x10 + lVar8) = _X;
  *(double *)(lVar4 + 0x18 + lVar8) = _Y;
  *(byte *)(lVar4 + 0x5c + lVar8) = (-(1.0 <= _Y) | -(_Y <= 0.0) | -(1.0 <= _X) | -(_X <= 0.0)) & 1;
  *(float *)(lVar4 + 0x58 + lVar8) = fVar12;
  lVar9 = lVar9 + 1;
  bVar10 = true;
  if (*(int *)(lVar3 + 0x198) <= lVar9) goto LAB_141126084;
  goto LAB_141125ea9;
LAB_141126084:
  *(int *)(lVar3 + 0x1a0) = *(int *)(lVar3 + 0x1a0) + 1;
LAB_14112608c:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1b0));
LAB_141126095:
  if ((local_f0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141126115 FUN_141126115 body=315 status=ok
// SIG undefined FUN_141126115(void)

void FUN_141126115(longlong *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)*param_1;
  FUN_1446f470e(&local_30,L"GbxNewLocalFogSettingsVolumeComponent",1);
  uVar3 = FUN_141126252();
  FUN_140486538(param_1,local_30);
  FUN_14048646a(param_1 + 4,local_30,uVar3,0);
  FUN_140834366(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a90d730;
  puVar1[0x72] = 0;
  FUN_1446f470e(&local_38,L"GbxLocalFogSettingsVolumeComponent",1);
  uVar3 = FUN_141126252();
  local_40 = 0;
  local_48 = 1;
  lVar4 = FUN_14048696c(puVar1,local_38,uVar3,uVar3);
  if (lVar4 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar4);
  }
  bVar2 = DAT_14c950c29;
  puVar1[0x72] = lVar4;
  if ((lVar4 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(lVar4);
    lVar4 = puVar1[0x72];
  }
  puVar1[0x39] = lVar4;
  *(byte *)((longlong)puVar1 + 0x3a) = *(byte *)((longlong)puVar1 + 0x3a) & 0xfd;
  FUN_1405bab3a(puVar1,0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141126252 FUN_141126252 body=228 status=ok
// SIG undefined FUN_141126252(void)

longlong FUN_141126252(void)

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
  if (DAT_14cadc010 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147ad4dd3;
    local_40 = FUN_1417c88ad;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 800;
    FUN_14081cfa3(L"/Script/Engine",L"GbxLocalFogSettingsVolumeComponent",&DAT_14cadc010,
                  &DAT_147ad4dd2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cadc010;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141126338 FUN_141126338 body=1496 status=ok
// SIG undefined FUN_141126338(void)

undefined8 *
FUN_141126338(longlong *param_1,undefined8 *param_2,undefined4 *param_3,longlong param_4,
             undefined4 *param_5,undefined8 *param_6)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  wchar_t *local_1d8;
  code *local_1d0;
  undefined1 *local_1c8;
  code **local_1c0;
  code *local_1b8;
  code *local_1b0;
  undefined4 local_1a4;
  void *local_1a0;
  uint local_198;
  int local_194;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong *local_178;
  code *local_170;
  undefined2 *local_168;
  undefined2 *local_160;
  ulonglong *local_158;
  char local_150;
  undefined2 local_148 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_190 = *param_6;
  local_188 = param_6[1];
  if (local_188 != 0) {
    LOCK();
    *(int *)(local_188 + 8) = *(int *)(local_188 + 8) + 1;
    UNLOCK();
  }
  lVar7 = (**(code **)(*param_1 + 0x328))(param_1,&local_190);
  if (((char)param_1[6] == '\x01') && (*(char *)(lVar7 + 0x152) != '\x02')) {
    iVar6 = FUN_14490d72a(lVar7);
    bVar12 = iVar6 != 0;
  }
  else {
    bVar12 = false;
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_1a0);
  iVar6 = FUN_14031352e(param_4,param_3);
  if ((iVar6 != -1) && (lVar7 = (longlong)iVar6 * 0x80 + *(longlong *)(param_4 + 0x70), lVar7 != 0))
  {
    if (((int)local_198 < 2) && (&local_1a0 != (void **)(lVar7 + 0x48))) {
      uVar2 = *(uint *)(lVar7 + 0x50);
      pvVar3 = *(void **)(lVar7 + 0x48);
      local_198 = uVar2;
      if (uVar2 == 0 && local_194 == 0) {
        local_194 = 0;
      }
      else {
        FUN_1446dd670(&local_1a0,uVar2);
        if (uVar2 != 0) {
          memcpy(local_1a0,pvVar3,(longlong)(int)uVar2 * 2);
        }
      }
    }
    if (bVar12) {
      local_1a4 = *param_5;
      local_180 = *param_6;
      plVar4 = (longlong *)param_6[1];
      if (plVar4 == (longlong *)0x0) {
        local_178 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_178 = plVar4;
      }
      plVar8 = (longlong *)FUN_140165676(&local_180);
      if (plVar8 == (longlong *)0x0) {
        lVar7 = FUN_14479d2ce();
      }
      else {
        lVar7 = (**(code **)(*plVar8 + 0x20))();
      }
      uVar2 = local_198;
      pvVar3 = local_1a0;
      if (lVar7 == 0) {
        *param_2 = 0;
      }
      else {
        local_168 = local_148;
        local_150 = '\0';
        iVar6 = local_198 - 1;
        if (local_198 == 0) {
          iVar6 = 0;
        }
        local_158 = &local_48;
        lVar10 = (longlong)iVar6;
        local_160 = local_168;
        if (0x7f < iVar6) {
          FUN_140213274(&local_168,lVar10);
        }
        puVar5 = local_160;
        if (1 < uVar2) {
          memcpy(local_160,pvVar3,lVar10 * 2);
          local_160 = puVar5 + lVar10;
        }
        FUN_140212e80(&local_168,L"_0x%08X",local_1a4);
        local_1f0 = param_3[3];
        local_1f8 = param_3[2];
        FUN_140212e80(&local_168,L"_%08X%08X%08X%08X",*param_3,param_3[1]);
        if (DAT_14cac9ca8 == 0) {
          local_1c0 = &local_170;
          local_170 = FUN_141030f22;
          local_1b0 = FUN_14081d0ea;
          local_1b8 = FUN_14081d0ea;
          local_1c8 = &LAB_1478c0a72;
          local_1d0 = (code *)&LAB_1417b2375;
          local_1d8 = L"Engine";
          local_1e0 = 0x1000000000;
          local_1e8 = 0x10000004;
          local_1f0 = 8;
          local_1f8 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        lVar10 = DAT_14cac9ca8;
        if (DAT_14c951858 == 0) {
          local_1c0 = &local_170;
          local_170 = FUN_1449e2820;
          local_1b0 = FUN_14081d0ea;
          local_1b8 = FUN_14081d0ea;
          local_1c8 = &LAB_1468c5283;
          local_1d0 = FUN_142809da0;
          local_1d8 = L"Engine";
          local_1e0 = 0x400000000;
          local_1e8 = 0x10000000;
          local_1f0 = 8;
          local_1f8 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar9 = *(longlong *)(lVar7 + 0x20);
        if (lVar9 == 0) {
joined_r0x000141126859:
          if (local_158 <= local_160 + 1) {
            FUN_140213274(&local_168,1);
          }
          *local_160 = 0x5f;
          local_170 = *(code **)(lVar7 + 0x18);
        }
        else {
          iVar6 = *(int *)(lVar10 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar6) ||
               (lVar11 = lVar9,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar6 * 8) !=
               lVar10 + 0x30)) {
              lVar11 = 0;
            }
          } while ((lVar11 == 0) && (lVar9 = *(longlong *)(lVar9 + 0x20), lVar9 != 0));
          if (lVar11 == 0) goto joined_r0x000141126859;
          if (local_158 <= local_160 + 1) {
            FUN_140213274(&local_168,1);
          }
          *local_160 = 0x5f;
          local_170 = *(code **)(lVar11 + 0x18);
        }
        local_160 = local_160 + 1;
        FUN_14005eb5c();
        FUN_1446f82e2(param_2,(ulonglong)((longlong)local_160 - (longlong)local_168) >> 1,local_168,
                      1);
        if (local_150 == '\x01') {
          FUN_1400020a8(local_168);
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar4 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
      goto LAB_141126451;
    }
  }
  *param_2 = 0;
LAB_141126451:
  if (local_1a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_6[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14112691c FUN_14112691c body=281 status=ok
// SIG undefined FUN_14112691c(void)

longlong FUN_14112691c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = *(int *)(*param_2 + 0x1c);
  if ((((iVar3 == 0) || (uVar4 = *(uint *)(*param_2 + 0x18), (int)uVar4 < 0)) ||
      (DAT_14c9647dc <= (int)uVar4)) ||
     (((plVar8 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != iVar3)) ||
      (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || ((longlong *)*plVar8 == (longlong *)0x0)))))) {
    local_28 = *(longlong *)(param_1 + 0x34);
    lVar5 = 0;
    lVar7 = 0;
    if (local_28 == 0) goto LAB_1411269b9;
  }
  else {
    lVar5 = (**(code **)(*(longlong *)*plVar8 + 0x180))();
    local_28 = *(longlong *)(param_1 + 0x34);
    lVar7 = lVar5;
    if (local_28 == 0) goto LAB_1411269b9;
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else if (*(longlong *)(lVar5 + 0x18) == local_28) goto LAB_1411269b9;
  }
  lVar6 = FUN_1475a24b4(&local_28,lVar5);
  lVar7 = lVar5;
  if (lVar6 != 0) {
    lVar5 = FUN_1475a25ce(lVar6 + 0x28);
    if (lVar5 != 0) {
      lVar7 = FUN_1475a25ce(lVar6 + 0x28);
    }
  }
LAB_1411269b9:
  plVar8 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 141126a36 FUN_141126a36 body=618 status=ok
// SIG undefined FUN_141126a36(void)

void FUN_141126a36(longlong param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined *puVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  switchD_143c3d4dc::caseD_1d();
  if (param_1 == 0) goto LAB_141126b80;
  cVar3 = FUN_140114204(param_1 + 0x38);
  if ((cVar3 == '\0') || (DAT_14c872bd8 != '\0')) goto LAB_141126b80;
  lVar5 = FUN_14479d2ce(param_1 + 0x88);
  if (lVar5 == 0) {
LAB_141126c9a:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_144a79464();
    if ((((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) != lVar6 + 0x30)) || (*(longlong *)(lVar5 + 0x1e0) == 0)) ||
       (plVar7 = *(longlong **)(*(longlong *)(lVar5 + 0x1e0) + 0x38), plVar7 == (longlong *)0x0))
    goto LAB_141126c9a;
    lVar5 = 0;
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x308))(plVar7,0);
    if (plVar7 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar7 + 0x2b0))(plVar7);
    }
  }
  local_60 = FUN_14479d2ce(param_1 + 0x80);
  if (DAT_14cb7bf98 != DAT_14cb7bfc4) {
    puVar8 = &DAT_14cb7bfc8;
    if (DAT_14cb7bfd0 != (undefined *)0x0) {
      puVar8 = DAT_14cb7bfd0;
    }
    iVar10 = *(int *)(puVar8 + (ulonglong)(DAT_14cb7bfd8 - 1U & *(uint *)(param_1 + 0x9c)) * 4);
    while (iVar10 != -1) {
      lVar6 = DAT_14cb7bf90 + (longlong)iVar10 * 0x20;
      if (*(uint *)(DAT_14cb7bf90 + (longlong)iVar10 * 0x20) == *(uint *)(param_1 + 0x9c)) {
        plVar7 = (longlong *)(lVar6 + 8);
        if (plVar7 != (longlong *)0x0 && lVar6 != 0) {
          uVar9 = (ulonglong)*(int *)(lVar6 + 0x10);
          if (0 < (longlong)uVar9) {
            iVar10 = -*(int *)(lVar6 + 0x10);
            lVar11 = uVar9 * 8;
            do {
              lVar11 = lVar11 + -8;
              cVar3 = FUN_141126ca2(*plVar7 + lVar11,param_1);
              if ((cVar3 != '\0') || (cVar3 = FUN_144729dda(*plVar7 + lVar11), cVar3 == '\0')) {
                uVar4 = *(uint *)(lVar6 + 0x10);
                if (uVar9 != uVar4) {
                  iVar2 = iVar10 + uVar4;
                  if (0 < (int)(iVar10 + uVar4)) {
                    iVar2 = 1;
                  }
                  memmove((void *)(*(longlong *)(lVar6 + 8) + uVar9 * 8 + -8),
                          (void *)(*(longlong *)(lVar6 + 8) + (longlong)(int)(uVar4 - iVar2) * 8),
                          (longlong)iVar2 << 3);
                  uVar4 = *(uint *)(lVar6 + 0x10);
                }
                *(uint *)(lVar6 + 0x10) = uVar4 - 1;
                FUN_14580d3a6(plVar7);
                if (*(int *)(lVar6 + 0x10) == 0) {
                  local_58 = local_60;
                  local_50 = *(undefined4 *)(param_1 + 0x98);
                  if (lVar5 != 0) {
                    FUN_140825b72(param_1 + 0x38,*(undefined8 *)(param_1 + 0x90),lVar5,&local_58);
                  }
                }
              }
              iVar10 = iVar10 + 1;
              bVar1 = 1 < uVar9;
              uVar9 = uVar9 - 1;
            } while (bVar1);
          }
        }
        break;
      }
      iVar10 = *(int *)(lVar6 + 0x18);
    }
  }
LAB_141126b80:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141126ca2 FUN_141126ca2 body=259 status=ok
// SIG undefined FUN_141126ca2(void)

ulonglong FUN_141126ca2(uint *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    uVar4 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar4 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar4 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar4 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar4 = uVar6;
      }
    }
  }
  local_24 = uVar4;
  if ((*param_1 != local_28) ||
     (uVar3 = CONCAT71((uint7)(uint3)(*param_1 >> 8),1), param_1[1] != uVar4)) {
    cVar2 = FUN_144729dda(param_1);
    if (cVar2 == '\0') {
      uVar3 = FUN_144729dda(&local_28);
      uVar3 = uVar3 ^ 1;
    }
    else {
      uVar3 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 141126da6 FUN_141126da6 body=381 status=ok
// SIG undefined FUN_141126da6(void)

void FUN_141126da6(undefined8 param_1,void *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  memset(param_2,0,0x440);
  *(undefined4 *)((longlong)param_2 + 8) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  uVar1 = FUN_144830b78((longlong)param_2 + 0x20);
  *(undefined4 *)((longlong)param_2 + 0x20) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined4 *)((longlong)param_2 + 0x58) = 0xffffffff;
  *(byte *)((longlong)param_2 + 0x5c) = *(byte *)((longlong)param_2 + 0x5c) & 0xfc;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined2 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined2 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_2 + 200) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_2 + 0xd8) = 0;
  *(undefined ***)((longlong)param_2 + 0xb0) = &PTR_LAB_14adda920;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_2 + 0x27c) = DAT_14c846338;
  *(undefined8 *)((longlong)param_2 + 0x274) = DAT_14c846330;
  *(undefined8 *)((longlong)param_2 + 0x280) = DAT_14c846330;
  *(undefined4 *)((longlong)param_2 + 0x288) = DAT_14c846338;
  *(undefined4 *)((longlong)param_2 + 0x28c) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x2d0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2d8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2b0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2b8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x290) = 0;
  *(undefined8 *)((longlong)param_2 + 0x298) = 0;
  *(byte *)((longlong)param_2 + 0x2e4) = *(byte *)((longlong)param_2 + 0x2e4) | 8;
  *(undefined1 *)((longlong)param_2 + 0x319) = 0;
  *(undefined8 *)((longlong)param_2 + 0x408) = 0;
  *(undefined4 *)((longlong)param_2 + 0x410) = 0;
  memset((void *)((longlong)param_2 + 0x31c),0,0xdc);
  *(undefined8 *)((longlong)param_2 + 0x414) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x41c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x428) = 0;
  *(undefined4 *)((longlong)param_2 + 0x430) = 0;
  FUN_141126f24(param_2,param_1,param_3);
  return;
}



// FUNCTION 141126f24 FUN_141126f24 body=20870 status=ok
// SIG undefined FUN_141126f24(void)

undefined8 FUN_141126f24(uint *param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined2 uVar5;
  PSRWLOCK pRVar6;
  PVOID pvVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  longlong *plVar31;
  wchar_t *pwVar32;
  longlong *plVar33;
  longlong *plVar34;
  longlong *plVar35;
  longlong lVar36;
  longlong lVar37;
  longlong *plVar38;
  uint *puVar39;
  ulonglong *puVar40;
  ulonglong uVar41;
  wchar_t *pwVar42;
  undefined8 *puVar43;
  double *pdVar44;
  undefined8 uVar45;
  uint *puVar46;
  byte bVar47;
  uint uVar48;
  uint uVar49;
  longlong lVar50;
  byte bVar51;
  longlong lVar52;
  ulonglong *puVar53;
  int iVar54;
  double *pdVar55;
  double **ppdVar56;
  uint uVar57;
  double *pdVar58;
  ulonglong *puVar59;
  undefined8 *puVar60;
  int iVar61;
  ulonglong uVar62;
  double *pdVar63;
  ulonglong uVar64;
  bool bVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  double dVar70;
  double dVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  float fVar79;
  undefined1 auStack_4c8 [32];
  undefined4 local_4a8;
  undefined4 local_4a0;
  undefined4 local_498;
  undefined8 local_490;
  wchar_t *local_488;
  code *local_480;
  undefined1 *local_478;
  double **local_470;
  code *local_468;
  code *local_460;
  uint *local_450;
  longlong *local_448;
  ulonglong *local_440;
  longlong *local_438;
  ulonglong local_430;
  ulonglong *local_428;
  uint *local_420;
  undefined8 local_418;
  uint *local_410;
  longlong *local_408;
  longlong *local_400;
  ulonglong *local_3f8;
  PSRWLOCK local_3f0;
  uint *local_3e8;
  ulonglong *local_3e0;
  ulonglong local_3d8;
  uint *local_3d0;
  ulonglong *local_3c8;
  uint *local_3c0;
  ulonglong local_3b8;
  uint *local_3b0;
  uint *local_3a8;
  uint *local_3a0;
  undefined8 local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  char local_35a;
  char local_359;
  undefined8 local_358;
  undefined8 uStack_350;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  double *local_318;
  double *pdStack_310;
  undefined1 *local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  undefined1 local_f8 [8];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  uVar49 = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  puVar46 = param_1 + 0x3c;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar43 = &DAT_14c846400;
  puVar39 = puVar46;
  for (lVar37 = 0x10; lVar37 != 0; lVar37 = lVar37 + -1) {
    *(undefined8 *)puVar39 = *puVar43;
    puVar43 = puVar43 + 1;
    puVar39 = puVar39 + 2;
  }
  puVar43 = &DAT_14c846400;
  puVar39 = param_1 + 0x5c;
  for (lVar37 = 0x10; lVar37 != 0; lVar37 = lVar37 + -1) {
    *(undefined8 *)puVar39 = *puVar43;
    puVar43 = puVar43 + 1;
    puVar39 = puVar39 + 2;
  }
  local_420 = param_1 + 0x7c;
  puVar43 = &DAT_14c846400;
  puVar39 = local_420;
  for (lVar37 = 0x10; lVar37 != 0; lVar37 = lVar37 + -1) {
    *(undefined8 *)puVar39 = *puVar43;
    puVar43 = puVar43 + 1;
    puVar39 = puVar39 + 2;
  }
  param_1[0x9c] = *(uint *)(*(longlong *)(param_3 + 0x30) + 0x6f4);
  param_1[0xb8] = *(uint *)((longlong)param_2 + 0xfc);
  uVar27 = param_1[0xb9] & 0xfffffffb;
  param_1[0xb9] = uVar27;
  pwVar42 = (wchar_t *)0x0;
  if (*(char *)((longlong)param_2 + 0xf9) == '\x01') {
    if (DAT_14cb366a0 == (wchar_t *)0x0) {
      local_470 = &local_318;
      local_318 = (double *)FUN_1449e2820;
      local_460 = FUN_14081d0ea;
      local_468 = (code *)&LAB_140eca530;
      local_478 = &LAB_148063819;
      local_480 = (code *)&LAB_1460672b6;
      local_488 = L"Niagara";
      local_490 = 0;
      local_498 = 0x10000006;
      local_4a0 = 8;
      local_4a8 = 0x130;
      pwVar42 = L"/Script/Niagara";
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
    }
    pwVar32 = DAT_14cb366a0;
    lVar37 = *(longlong *)(DAT_14cb366a0 + 0x88);
    if (lVar37 == 0) {
      pwVar42 = DAT_14cb366a0;
      (**(code **)(*(longlong *)DAT_14cb366a0 + 1000))(DAT_14cb366a0);
      lVar37 = *(longlong *)(pwVar32 + 0x88);
    }
    uVar49 = (uint)*(byte *)(lVar37 + 0xec);
    uVar27 = param_1[0xb9];
  }
  param_1[0xb9] = (uVar27 & 0xffffffe7) + uVar49 * 8;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(undefined1 *)(param_1 + 0xc6) = 0;
  param_1[0x9f] = DAT_14c846338;
  *(undefined8 *)(param_1 + 0x9d) = DAT_14c846330;
  param_1[0xa2] = DAT_14c846338;
  *(undefined8 *)(param_1 + 0xa0) = DAT_14c846330;
  if (*(int *)(param_3 + 0x4c) == 0) {
LAB_1411274c2:
    plVar33 = (longlong *)0x0;
  }
  else {
    uVar49 = *(uint *)(param_3 + 0x48);
    pwVar42 = (wchar_t *)(ulonglong)uVar49;
    plVar33 = (longlong *)0x0;
    if ((-1 < (int)uVar49) && ((int)uVar49 < DAT_14c9647dc)) {
      pwVar42 = (wchar_t *)(ulonglong)(uVar49 >> 0x10);
      puVar43 = (undefined8 *)
                ((ulonglong)((uVar49 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (longlong)pwVar42 * 8));
      if ((puVar43 == (undefined8 *)0x0) ||
         ((*(int *)(puVar43 + 2) != *(int *)(param_3 + 0x4c) ||
          ((*(uint *)(puVar43 + 1) & 0x10200000) != 0)))) goto LAB_1411274c2;
      plVar33 = (longlong *)*puVar43;
    }
  }
  local_398 = &local_358;
  bVar47 = *(byte *)(param_2 + 7);
  local_450 = param_1;
  local_448 = param_2;
  local_430 = param_3;
  local_358 = param_2;
  if (param_2[0x11] == 0) {
LAB_141127240:
    if (1 < bVar47) {
LAB_14112728c:
      if ((plVar33 != (longlong *)0x0) &&
         (plVar31 = plVar33, lVar37 = DAT_14cad2858, (bVar47 & 0xfd) == 0)) {
        do {
          if (lVar37 == 0) {
            local_318 = (double *)FUN_144a7958c;
            local_460 = FUN_14081d0ea;
            local_468 = (code *)&LAB_146395584;
            local_470 = &local_318;
            local_478 = &LAB_147a0ba80;
            local_480 = (code *)&LAB_14575ccce;
            local_488 = L"Engine";
            local_490 = 0x40000000000;
            local_498 = 0x10000004;
            local_4a0 = 0x10;
            local_4a8 = 0x1180;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
            lVar37 = DAT_14cad2858;
          }
          if (((*(int *)(lVar37 + 0x38) <= *(int *)(plVar31[2] + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(plVar31[2] + 0x30) + (longlong)*(int *)(lVar37 + 0x38) * 8) ==
               lVar37 + 0x30)) && ((*(uint *)(plVar31 + 1) >> 0x1e & 1) == 0)) {
            param_1 = local_450;
            param_2 = local_448;
            if ((longlong)(int)local_358[0xf] == 0) goto LAB_14112755a;
            pwVar32 = (wchar_t *)local_358[0xe];
            pwVar42 = pwVar32 + (longlong)(int)local_358[0xf] * 4;
            do {
              if (*(longlong *)pwVar32 == 0) {
LAB_14112734b:
                if (pwVar32 != (wchar_t *)0x0) goto LAB_141127507;
                break;
              }
              if ((longlong)(int)plVar31[0xf] != 0) {
                lVar50 = 0;
                do {
                  if (*(longlong *)(plVar31[0xe] + lVar50) == *(longlong *)pwVar32)
                  goto LAB_14112734b;
                  lVar50 = lVar50 + 8;
                } while ((longlong)(int)plVar31[0xf] * 8 != lVar50);
              }
              pwVar32 = pwVar32 + 4;
            } while (pwVar32 != pwVar42);
          }
          plVar34 = plVar31 + 0x24;
          plVar31 = (longlong *)*plVar34;
        } while ((longlong *)*plVar34 != (longlong *)0x0);
        if (DAT_14c951858 == 0) {
          local_318 = (double *)FUN_1449e2820;
          local_460 = FUN_14081d0ea;
          local_468 = FUN_14081d0ea;
          local_470 = &local_318;
          local_478 = &LAB_1468c5283;
          local_480 = FUN_142809da0;
          local_488 = L"Engine";
          local_490 = 0x400000000;
          local_498 = 0x10000000;
          local_4a0 = 8;
          local_4a8 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        plVar34 = (longlong *)plVar33[4];
        plVar35 = plVar33;
        param_1 = local_450;
        param_2 = local_448;
        if (plVar34 != (longlong *)0x0) {
          do {
            if ((*(int *)(plVar34[2] + 0x38) < *(int *)(lVar37 + 0x38)) ||
               (plVar31 = plVar34,
               *(longlong *)
                (*(longlong *)(plVar34[2] + 0x30) + (longlong)*(int *)(lVar37 + 0x38) * 8) !=
               lVar37 + 0x30)) {
              plVar31 = (longlong *)0x0;
            }
          } while ((plVar31 == (longlong *)0x0) &&
                  (plVar34 = (longlong *)plVar34[4], plVar34 != (longlong *)0x0));
          if ((plVar31 != (longlong *)0x0) && ((*(uint *)(plVar31 + 1) >> 0x1e & 1) == 0)) {
            if ((longlong)(int)local_358[0xf] == 0) goto LAB_14112755a;
            pwVar32 = (wchar_t *)local_358[0xe];
            pwVar42 = pwVar32 + (longlong)(int)local_358[0xf] * 4;
            do {
              if (*(longlong *)pwVar32 == 0) {
LAB_1411274c9:
                if (pwVar32 != (wchar_t *)0x0) goto LAB_141127507;
                break;
              }
              if ((longlong)(int)plVar31[0xf] != 0) {
                lVar37 = 0;
                do {
                  if (*(longlong *)(plVar31[0xe] + lVar37) == *(longlong *)pwVar32)
                  goto LAB_1411274c9;
                  lVar37 = lVar37 + 8;
                } while ((longlong)(int)plVar31[0xf] * 8 != lVar37);
              }
              pwVar32 = pwVar32 + 4;
            } while (pwVar32 != pwVar42);
          }
        }
        do {
          plVar31 = plVar35;
          plVar35 = (longlong *)plVar31[0x24];
        } while (plVar35 != (longlong *)0x0);
        plVar31 = (longlong *)plVar31[0x15];
        pwVar42 = (wchar_t *)0x0;
        if (plVar31 != (longlong *)0x0) {
          uVar45 = 1;
          goto LAB_1411274ff;
        }
      }
LAB_14112751e:
      param_1[0] = 0;
      param_1[1] = 0;
      goto LAB_141127526;
    }
    plVar31 = (longlong *)param_2[0x10];
    if ((plVar31 == (longlong *)0x0) || ((*(uint *)(plVar31 + 1) >> 0x1e & 1) != 0)) {
      pwVar32 = (wchar_t *)(param_2 + 9);
      pwVar42 = pwVar32;
      lVar37 = FUN_1404101e2(pwVar32);
      if (lVar37 != 0) {
        plVar31 = (longlong *)FUN_1404101e2(pwVar32);
        goto LAB_141127284;
      }
      goto LAB_14112728c;
    }
LAB_14112755a:
    param_1[0] = 0;
    param_1[1] = 0;
LAB_141127562:
    puVar59 = (ulonglong *)plVar31[0xcb];
    if (puVar59 == (ulonglong *)0x0) {
      puVar59 = (ulonglong *)plVar31[0xcc];
      if ((DAT_14c950c29 == '\x01') && (puVar59 != (ulonglong *)0x0)) goto LAB_14112beb8;
      if (puVar59 != (ulonglong *)0x0) goto LAB_14112757f;
LAB_14112b883:
      puVar59 = (ulonglong *)0x0;
    }
    else {
      if (DAT_14c950c29 == '\x01') {
LAB_14112beb8:
        FUN_1456cec3c(puVar59);
      }
LAB_14112757f:
      if (DAT_14cb06da8 == 0) {
        local_470 = &local_318;
        local_318 = (double *)FUN_1449e2820;
        local_460 = FUN_14081d0ea;
        local_468 = (code *)&LAB_1464003b0;
        local_478 = &LAB_147d17bdf;
        local_480 = (code *)&LAB_1417edf22;
        local_488 = L"Engine";
        local_490 = 0;
        local_498 = 0x10000000;
        local_4a0 = 8;
        local_4a8 = 0x588;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
      }
      if ((*(int *)(puVar59[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(puVar59[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
          DAT_14cb06da8 + 0x30)) goto LAB_14112b883;
    }
    uVar49 = *(uint *)((longlong)plVar31 + 0xc);
    *param_1 = uVar49;
    if ((int)uVar49 < DAT_14c9647dc) {
      lVar37 = (ulonglong)((uVar49 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar49 >> 0x10) * 8);
    }
    else {
      lVar37 = 0;
    }
    uVar49 = *(uint *)(lVar37 + 0x10);
    if (*(uint *)(lVar37 + 0x10) == 0) {
      LOCK();
      iVar54 = DAT_14c964868 + 1;
      UNLOCK();
      uVar27 = DAT_14c964868 + 1;
      bVar65 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar54;
      if (bVar65) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar27);
      }
      LOCK();
      uVar49 = *(uint *)(lVar37 + 0x10);
      bVar65 = uVar49 == 0;
      if (bVar65) {
        *(uint *)(lVar37 + 0x10) = uVar27;
        uVar49 = 0;
      }
      UNLOCK();
      if (bVar65) {
        uVar49 = uVar27;
      }
    }
    param_1[1] = uVar49;
    uVar49 = (**(code **)(*plVar31 + 0xc00))(plVar31);
    local_418 = (ulonglong *)((ulonglong)local_418._4_4_ << 0x20);
  }
  else {
    pwVar42 = (wchar_t *)(param_2 + 0x12);
    plVar31 = (longlong *)FUN_144741050(pwVar42);
    if (((local_430 == 0) || (param_1 == (uint *)0x0)) || (*plVar31 == 0)) goto LAB_141127240;
    pwVar42 = (wchar_t *)(param_1 + 2);
    plVar31 = (longlong *)FUN_1404e5848(pwVar42,local_430 + 0x1e8,param_2 + 0x11);
    *(longlong **)(param_1 + 0x12) = plVar31;
    if (plVar31 == (longlong *)0x0) goto LAB_14112751e;
    if (DAT_14cad2858 == 0) {
      local_470 = &local_318;
      local_318 = (double *)FUN_144a7958c;
      local_460 = FUN_14081d0ea;
      local_468 = (code *)&LAB_146395584;
      local_478 = &LAB_147a0ba80;
      local_480 = (code *)&LAB_14575ccce;
      local_488 = L"Engine";
      local_490 = 0x40000000000;
      local_498 = 0x10000004;
      local_4a0 = 0x10;
      local_4a8 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar37 = plVar31[2];
    pwVar42 = (wchar_t *)(ulonglong)*(uint *)(lVar37 + 0x38);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= (int)*(uint *)(lVar37 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar37 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8)
        == DAT_14cad2858 + 0x30)) {
      if ((*(uint *)(plVar31 + 1) >> 0x1e & 1) != 0) goto LAB_14112751e;
      goto LAB_14112755a;
    }
    if (DAT_14cac9ca8 == 0) {
      local_470 = &local_318;
      local_318 = (double *)FUN_141030f22;
      local_460 = FUN_14081d0ea;
      local_468 = FUN_14081d0ea;
      local_478 = &LAB_1478c0a72;
      local_480 = (code *)&LAB_1417b2375;
      local_488 = L"Engine";
      local_490 = 0x1000000000;
      local_498 = 0x10000004;
      local_4a0 = 8;
      local_4a8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      lVar37 = plVar31[2];
      pwVar42 = (wchar_t *)(ulonglong)*(uint *)(lVar37 + 0x38);
    }
    if (((int)pwVar42 < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar37 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
        != DAT_14cac9ca8 + 0x30)) goto LAB_14112751e;
LAB_141127284:
    uVar45 = 0;
LAB_1411274ff:
    pwVar42 = (wchar_t *)&local_398;
    plVar31 = (longlong *)FUN_143a6665c(pwVar42,plVar31,uVar45);
LAB_141127507:
    param_1[0] = 0;
    param_1[1] = 0;
    param_2 = local_448;
    if (plVar31 != (longlong *)0x0) goto LAB_141127562;
LAB_141127526:
    if ((bVar47 == 3) || (bVar47 == 0)) {
      puVar59 = (ulonglong *)param_2[8];
    }
    else {
      puVar59 = (ulonglong *)0x0;
    }
    uVar49 = 0xffffffff;
    local_418 = (ulonglong *)
                CONCAT44(local_418._4_4_,(int)CONCAT71((int7)((ulonglong)pwVar42 >> 8),1));
    plVar31 = (longlong *)0x0;
  }
  local_3e8 = param_1 + 0x14;
  param_1[0x10e] = uVar49;
  local_440 = puVar59;
  local_438 = plVar31;
  if (puVar59 == (ulonglong *)0x0) {
    *local_3e8 = 0;
    uVar27 = 0;
    uVar49 = 0;
  }
  else {
    uVar49 = *(uint *)((longlong)puVar59 + 0xc);
    *local_3e8 = uVar49;
    if ((int)uVar49 < DAT_14c9647dc) {
      lVar37 = (ulonglong)((uVar49 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar49 >> 0x10) * 8);
    }
    else {
      lVar37 = 0;
    }
    uVar27 = 2;
    uVar49 = *(uint *)(lVar37 + 0x10);
    if (*(uint *)(lVar37 + 0x10) == 0) {
      LOCK();
      iVar54 = DAT_14c964868 + 1;
      UNLOCK();
      uVar57 = DAT_14c964868 + 1;
      bVar65 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar54;
      if (bVar65) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar57);
      }
      LOCK();
      uVar49 = *(uint *)(lVar37 + 0x10);
      bVar65 = uVar49 == 0;
      if (bVar65) {
        *(uint *)(lVar37 + 0x10) = uVar57;
        uVar49 = 0;
      }
      UNLOCK();
      if (bVar65) {
        uVar49 = uVar57;
      }
    }
  }
  param_1[0x15] = uVar49;
  uVar49 = param_1[0xb9];
  param_1[0xb9] = uVar49 & 0xfffffffd | uVar27;
  uVar57 = param_1[1];
  if (((uVar57 == 0) || (uVar30 = *param_1, (int)uVar30 < 0)) || (DAT_14c9647dc <= (int)uVar30)) {
    param_1[0xb9] = uVar49 & 0xfffffffc | uVar27;
LAB_1411277a5:
    pdVar55 = (double *)(local_430 + 0x50);
    pdVar63 = (double *)(local_430 + 0x60);
    dVar71 = *(double *)(local_430 + 0x70);
    dVar75 = *(double *)(local_430 + 0x78);
    dVar70 = *(double *)(local_430 + 0x80);
    pdVar44 = (double *)(local_430 + 0x90);
    pdVar58 = (double *)(local_430 + 0xa0);
  }
  else {
    lVar37 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
    if ((lVar37 == 0) || (*(uint *)(lVar37 + 0x10) != uVar57)) {
      bVar65 = false;
    }
    else {
      bVar65 = (*(uint *)(lVar37 + 8) & 0x10200000) == 0;
    }
    param_1[0xb9] = uVar49 & 0xfffffffc | uVar27 | (uint)bVar65;
    plVar31 = (longlong *)
              ((ulonglong)((uVar30 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8));
    if (((plVar31 == (longlong *)0x0) || (*(uint *)(plVar31 + 2) != uVar57)) ||
       (((*(uint *)(plVar31 + 1) & 0x10200000) != 0 || (lVar37 = *plVar31, lVar37 == 0))))
    goto LAB_1411277a5;
    pdVar55 = (double *)(lVar37 + 0x240);
    pdVar63 = (double *)(lVar37 + 0x250);
    pdVar44 = (double *)(lVar37 + 0x280);
    pdVar58 = (double *)(lVar37 + 0x290);
    dVar71 = (double)*(float *)(local_430 + 0xc) * -65536.0 + *(double *)(lVar37 + 0x260);
    dVar75 = (double)*(float *)(local_430 + 0x10) * -65536.0 + *(double *)(lVar37 + 0x268);
    dVar70 = (double)*(float *)(local_430 + 0x14) * -65536.0 + *(double *)(lVar37 + 0x270);
  }
  dVar10 = *pdVar58;
  dVar21 = *pdVar44;
  dVar9 = pdVar44[1];
  dVar11 = *pdVar63;
  dVar24 = *pdVar55;
  dVar25 = pdVar55[1];
  dVar20 = dVar25 + dVar25;
  dVar17 = dVar11 + dVar11;
  dVar12 = dVar24 * (dVar24 + dVar24);
  dVar74 = (1.0 - (dVar11 * dVar17 + dVar25 * dVar20)) * dVar21;
  dVar76 = (1.0 - (dVar11 * dVar17 + dVar12)) * dVar9;
  dVar11 = (1.0 - (dVar12 + dVar25 * dVar20)) * dVar10;
  dVar12 = pdVar63[1];
  dVar18 = dVar17 * dVar12;
  dVar19 = (dVar24 + dVar24) * pdVar63[1];
  dVar12 = dVar20 * dVar12;
  dVar14 = (dVar20 * dVar24 + dVar18) * dVar21;
  dVar15 = (dVar17 * dVar25 + dVar19) * dVar9;
  dVar13 = (*pdVar55 * dVar17 + dVar12) * dVar10;
  dVar21 = (*pdVar55 * dVar17 - dVar12) * dVar21;
  dVar9 = (dVar20 * dVar24 - dVar18) * dVar9;
  dVar10 = (dVar17 * dVar25 - dVar19) * dVar10;
  auVar16._8_4_ = SUB84(dVar14,0);
  auVar16._0_8_ = dVar74;
  auVar16._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x3c) = auVar16;
  *(double *)(param_1 + 0x40) = dVar21;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  auVar22._8_4_ = SUB84(dVar76,0);
  auVar22._0_8_ = dVar9;
  auVar22._12_4_ = (int)((ulonglong)dVar76 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x44) = auVar22;
  *(double *)(param_1 + 0x48) = dVar15;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  auVar23._8_4_ = SUB84(dVar10,0);
  auVar23._0_8_ = dVar13;
  auVar23._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x4c) = auVar23;
  *(double *)(param_1 + 0x50) = dVar11;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  auVar8._8_4_ = SUB84(dVar75,0);
  auVar8._0_8_ = dVar71;
  auVar8._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x54) = auVar8;
  *(double *)(param_1 + 0x58) = dVar70;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0x3ff00000;
  if (((((((9.99999993922529e-09 < ABS(dVar74)) || (9.99999993922529e-09 < ABS(dVar14))) ||
         (9.99999993922529e-09 < ABS(dVar21))) ||
        ((9.99999993922529e-09 < ABS(dVar9) || (9.99999993922529e-09 < ABS(dVar76))))) ||
       (9.99999993922529e-09 < ABS(dVar15))) ||
      ((9.99999993922529e-09 < ABS(dVar13) || (9.99999993922529e-09 < ABS(dVar10))))) ||
     (9.99999993922529e-09 < ABS(dVar11))) {
    FUN_14007522e(&local_318,puVar46);
  }
  else {
    puVar43 = &DAT_14c846400;
    ppdVar56 = &local_318;
    for (lVar37 = 0x10; lVar37 != 0; lVar37 = lVar37 + -1) {
      *ppdVar56 = (double *)*puVar43;
      puVar43 = puVar43 + 1;
      ppdVar56 = ppdVar56 + 1;
    }
  }
  *(double **)(param_1 + 0x5c) = local_318;
  *(double *)(param_1 + 0x5e) = local_2f8;
  *(double *)(param_1 + 0x60) = local_2d8;
  *(double *)(param_1 + 0x62) = local_2b8;
  *(double **)(param_1 + 100) = pdStack_310;
  *(double *)(param_1 + 0x66) = dStack_2f0;
  *(double *)(param_1 + 0x68) = dStack_2d0;
  *(double *)(param_1 + 0x6a) = local_2b0;
  *(undefined1 **)(param_1 + 0x6c) = local_308;
  *(double *)(param_1 + 0x6e) = local_2e8;
  *(double *)(param_1 + 0x70) = local_2c8;
  *(double *)(param_1 + 0x72) = local_2a8;
  *(double *)(param_1 + 0x74) = dStack_300;
  *(double *)(param_1 + 0x76) = dStack_2e0;
  *(double *)(param_1 + 0x78) = dStack_2c0;
  *(double *)(param_1 + 0x7a) = local_2a0;
  puVar39 = local_420;
  for (lVar37 = 0x10; lVar37 != 0; lVar37 = lVar37 + -1) {
    *(undefined8 *)puVar39 = *(undefined8 *)puVar46;
    puVar46 = puVar46 + 2;
    puVar39 = puVar39 + 2;
  }
  if (plVar33 != (longlong *)0x0) {
    if (plVar33[0x24] == 0) {
      param_1[0x10] = 0;
      uVar49 = 0;
    }
    else {
      uVar49 = *(uint *)(plVar33[0x24] + 0xc);
      param_1[0x10] = uVar49;
      if ((int)uVar49 < DAT_14c9647dc) {
        lVar37 = (ulonglong)((uVar49 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar49 >> 0x10) * 8);
      }
      else {
        lVar37 = 0;
      }
      uVar49 = *(uint *)(lVar37 + 0x10);
      if (*(uint *)(lVar37 + 0x10) == 0) {
        LOCK();
        iVar54 = DAT_14c964868 + 1;
        UNLOCK();
        uVar27 = DAT_14c964868 + 1;
        bVar65 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar54;
        if (bVar65) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar27);
        }
        LOCK();
        uVar49 = *(uint *)(lVar37 + 0x10);
        bVar65 = uVar49 == 0;
        if (bVar65) {
          *(uint *)(lVar37 + 0x10) = uVar27;
          uVar49 = 0;
        }
        UNLOCK();
        if (bVar65) {
          uVar49 = uVar27;
        }
      }
    }
    param_1[0x11] = uVar49;
  }
  *(undefined1 *)((longlong)param_1 + 0x319) = 0;
  param_1[199] = 0;
  puVar43 = *(undefined8 **)(param_1 + 200);
  if (puVar43 != (undefined8 *)0x0) {
    param_1[200] = 0;
    param_1[0xc9] = 0;
    LOCK();
    piVar1 = (int *)(puVar43 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar43)(puVar43,1);
    }
  }
  uVar64 = local_430;
  local_3f8 = (ulonglong *)(param_1 + 0x28);
  param_1[0x2a] = 0;
  if (param_1[0x2b] != 0) {
    FUN_14481578e(local_3f8,0);
  }
  local_359 = '\x01';
  lVar37 = *(longlong *)(param_1 + 0xf2);
  uVar49 = param_1[0xf4];
  if ((longlong)(int)uVar49 == 0) {
    uVar49 = 0;
  }
  else {
    lVar50 = 0;
    do {
      puVar43 = *(undefined8 **)(lVar37 + lVar50);
      if (puVar43 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar43 + 1) = *(int *)(puVar43 + 1) + 1;
        UNLOCK();
        LOCK();
        piVar1 = (int *)(puVar43 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar43)(puVar43,1);
        }
      }
      lVar50 = lVar50 + 8;
    } while ((longlong)(int)uVar49 * 8 != lVar50);
    uVar49 = param_1[0xf4];
    lVar37 = *(longlong *)(param_1 + 0xf2);
  }
  puVar46 = param_1 + 0xf2;
  FUN_143a6d2fc(lVar37,uVar49);
  param_1[0xf4] = 0;
  if (param_1[0xf5] != 0) {
    FUN_14182b678(puVar46,0);
  }
  local_3d0 = param_1 + 0xca;
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_2e8 = 0.0;
  dStack_2e0 = 0.0;
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_308 = (undefined1 *)0x0;
  dStack_300 = 0.0;
  local_318 = (double *)0x0;
  pdStack_310 = (double *)0x0;
  FUN_143a6cf62(local_3d0,&local_318);
  FUN_14058aa5c(&local_318);
  local_3a8 = param_1 + 0xde;
  local_2d8 = 0.0;
  dStack_2d0 = 0.0;
  local_2e8 = 0.0;
  dStack_2e0 = 0.0;
  local_2f8 = 0.0;
  dStack_2f0 = 0.0;
  local_308 = (undefined1 *)0x0;
  dStack_300 = 0.0;
  local_318 = (double *)0x0;
  pdStack_310 = (double *)0x0;
  FUN_143a6cf62(local_3a8,&local_318);
  FUN_14058aa5c(&local_318);
  puVar39 = param_1 + 0xf6;
  param_1[0xf8] = 0;
  if (param_1[0xf9] != 0) {
    FUN_14182b7b0(puVar39,0);
  }
  local_410 = param_1 + 0xfa;
  FUN_1409f2caa();
  plVar33 = local_438;
  local_3a0 = puVar46;
  if ((char)local_418 == '\0') {
    uVar66 = (**(code **)(*local_438 + 0xbf0))(local_438);
    local_420 = (uint *)CONCAT44(local_420._4_4_,uVar66);
    uVar45 = FUN_141483292();
    plVar33 = (longlong *)(**(code **)(*plVar33 + 0x288))(plVar33,uVar45);
    if (plVar33 != (longlong *)0x0) {
      uVar45 = FUN_141483292();
      plVar31 = (longlong *)FUN_144718840(plVar33,uVar45);
      if (plVar31 != (longlong *)0x0 && plVar33 != plVar31) {
        local_318 = (double *)0x0;
        pdStack_310 = (double *)0x0;
        (**(code **)(*plVar31 + 0x10))(plVar31,&local_318);
        uVar41 = (ulonglong)pdStack_310 & 0xffffffff;
        if (0 < (int)pdStack_310 && 0 < (int)param_2[0x17]) {
          uVar62 = (ulonglong)pdStack_310 & 0xffffffff;
          do {
            iVar54 = (int)uVar41;
            lVar37 = (longlong)*(int *)((longlong)local_318[uVar62 - 1] + 0x4a8);
            if (lVar37 != 0) {
              plVar33 = *(longlong **)((longlong)local_318[uVar62 - 1] + 0x4a0);
              plVar31 = plVar33 + lVar37 * 6;
              do {
                if ((int)local_448[0x17] != 0) {
                  lVar37 = 0;
                  do {
                    if (*(longlong *)(local_448[0x16] + lVar37) == *plVar33) goto LAB_141127e32;
                    lVar37 = lVar37 + 8;
                  } while ((longlong)(int)local_448[0x17] << 3 != lVar37);
                }
                plVar33 = plVar33 + 6;
              } while (plVar33 != plVar31);
            }
            if (uVar62 != uVar41) {
              iVar61 = iVar54 - (int)uVar62;
              if (0 < iVar61) {
                iVar61 = 1;
              }
              memmove(local_318 + (uVar62 - 1),local_318 + (iVar54 - iVar61),(longlong)iVar61 << 3);
              iVar54 = (int)pdStack_310;
            }
            uVar41 = (ulonglong)(iVar54 - 1U);
            pdStack_310 = (double *)CONCAT44(pdStack_310._4_4_,iVar54 - 1U);
LAB_141127e32:
            bVar65 = 1 < (longlong)uVar62;
            uVar62 = uVar62 - 1;
          } while (bVar65);
        }
        uVar49 = (uint)uVar41;
        if (uVar49 != 0) {
          uVar27 = param_1[0xf8];
          param_1[0xf8] = uVar27 + uVar49;
          if (param_1[0xf9] - uVar27 < uVar49) {
            FUN_14076aab4(puVar39,uVar27);
          }
          FUN_143a7007c((longlong)(int)uVar27 * 8 + *(longlong *)puVar39,local_318,uVar41);
        }
        if (local_318 != (double *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  else {
    local_420 = (uint *)((ulonglong)local_420 & 0xffffffff00000000);
  }
  uVar49 = param_1[0xf8];
  if (0 < (int)uVar49) {
    puVar39 = *(uint **)puVar39;
    if (puVar39[1] == 0) {
      lVar37 = 0;
    }
    else {
      uVar27 = *puVar39;
      lVar37 = 0;
      if ((-1 < (int)uVar27) && ((int)uVar27 < DAT_14c9647dc)) {
        plVar33 = (longlong *)
                  ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8));
        if ((plVar33 == (longlong *)0x0) ||
           ((*(uint *)(plVar33 + 2) != puVar39[1] || ((*(uint *)(plVar33 + 1) & 0x10200000) != 0))))
        {
          lVar37 = 0;
        }
        else {
          lVar37 = *plVar33;
        }
      }
    }
    if (local_440 == (ulonglong *)0x0) goto LAB_141128179;
    if (lVar37 == 0) goto LAB_1411280a2;
    uVar30 = 0x7fffffff;
    uVar57 = 0x80000000;
    lVar37 = 0;
    uVar27 = 0x7fffffff;
    do {
      uVar64 = *(ulonglong *)((longlong)puVar39 + lVar37);
      uVar28 = (uint)uVar64;
      iVar54 = (int)(uVar64 >> 0x20);
      if ((uVar64 >> 0x20 == 0) || ((int)uVar28 < 0)) {
LAB_14112808e:
        lVar50 = 0;
      }
      else {
        lVar50 = 0;
        if ((int)uVar28 < DAT_14c9647dc) {
          plVar33 = (longlong *)
                    ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)(uVar64 >> 0xd) & 0x3fff8)));
          if (((plVar33 == (longlong *)0x0) || ((int)plVar33[2] != iVar54)) ||
             ((*(uint *)(plVar33 + 1) & 0x10200000) != 0)) goto LAB_14112808e;
          lVar50 = *plVar33;
        }
      }
      bVar47 = *(byte *)(lVar50 + 0xc6);
      if (*(byte *)(lVar50 + 0xc5) < *(byte *)(lVar50 + 0xc6)) {
        bVar47 = *(byte *)(lVar50 + 0xc5);
      }
      if (bVar47 == 0) goto LAB_14112829f;
      if (bVar47 <= uVar27) {
        uVar27 = (uint)bVar47;
      }
      if ((uVar64 >> 0x20 == 0) || ((int)uVar28 < 0)) {
LAB_141128095:
        uVar45 = 0;
      }
      else {
        uVar45 = 0;
        if ((int)uVar28 < DAT_14c9647dc) {
          puVar43 = (undefined8 *)
                    ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0xd & 0x3fff8)));
          if (((puVar43 == (undefined8 *)0x0) || (*(int *)(puVar43 + 2) != iVar54)) ||
             ((*(uint *)(puVar43 + 1) & 0x10200000) != 0)) goto LAB_141128095;
          uVar45 = *puVar43;
        }
      }
      uVar48 = ((uint)*(byte *)(lVar50 + 0xc4) - (uint)bVar47) + (uint)*(byte *)(lVar50 + 0xc3);
      local_4a8 = CONCAT31(local_4a8._1_3_,(char)local_420);
      uVar28 = FUN_143a66b0e(local_448,uVar45,local_3f8,&local_359);
      if ((int)uVar57 < (int)uVar48) {
        uVar57 = uVar48;
      }
      if ((int)uVar28 <= (int)uVar30) {
        uVar30 = uVar28;
      }
      lVar37 = lVar37 + 8;
    } while ((ulonglong)uVar49 << 3 != lVar37);
LAB_1411280f6:
    if (uVar27 == 0) {
LAB_14112829f:
      local_450[199] = 0;
      *(undefined1 *)((longlong)local_450 + 0x319) = 0;
      puVar59 = (ulonglong *)0x0;
LAB_1411282b9:
      uVar64 = local_430;
      param_1 = local_450;
      local_440 = puVar59;
      if (0 < (int)local_450[0xf8]) {
        uVar66 = 0;
        uVar67 = 0;
        dVar71 = 0.0;
        dVar75 = 0.0;
        uVar68 = 0;
        uVar69 = 0;
        uVar72 = 0;
        uVar73 = 0;
        uVar77 = 0;
        uVar78 = 0;
        if ((char)local_418 == '\0') {
          uVar66 = (undefined4)local_438[0x2c];
          uVar67 = (undefined4)((ulonglong)local_438[0x2c] >> 0x20);
          dVar71 = (double)local_438[0x2d];
          dVar75 = (double)local_438[0x2e];
          uVar68 = (undefined4)local_438[0x2f];
          uVar69 = (undefined4)((ulonglong)local_438[0x2f] >> 0x20);
          uVar72 = (undefined4)local_438[0x30];
          uVar73 = (undefined4)((ulonglong)local_438[0x30] >> 0x20);
          uVar77 = (undefined4)local_438[0x31];
          uVar78 = (undefined4)((ulonglong)local_438[0x31] >> 0x20);
        }
        local_450[0x9d] = (uint)(float)(double)CONCAT44(uVar67,uVar66);
        local_450[0x9e] = (uint)(float)dVar71;
        local_450[0x9f] = (uint)(float)dVar75;
        local_450[0xa0] = (uint)(float)(double)CONCAT44(uVar69,uVar68);
        local_450[0xa1] = (uint)(float)(double)CONCAT44(uVar73,uVar72);
        local_450[0xa2] = (uint)(float)(double)CONCAT44(uVar78,uVar77);
      }
      goto LAB_141128385;
    }
    if (uVar30 != 0xffffffff) {
      if ((int)uVar30 < (int)uVar57) {
        *(undefined1 *)((longlong)local_450 + 0x319) = 1;
        uVar30 = uVar57;
      }
      local_450[199] = uVar30;
      if ((char)local_420 == '\0') {
        plVar33 = (longlong *)(**(code **)(*local_440 + 0x388))();
      }
      else {
        plVar33 = (longlong *)(**(code **)(*local_438 + 0xa90))(local_438);
      }
      puVar46 = local_450;
      if (plVar33 == (longlong *)0x0) goto LAB_14112829f;
      uVar49 = local_450[199];
      if (((longlong)(int)uVar49 < 0) || ((int)plVar33[1] <= (int)uVar49)) {
LAB_1411281f6:
        puVar43 = *(undefined8 **)(puVar46 + 200);
      }
      else {
        puVar43 = *(undefined8 **)(*plVar33 + (longlong)(int)uVar49 * 8);
        puVar60 = *(undefined8 **)(local_450 + 200);
        if (puVar60 != puVar43) {
          *(undefined8 **)(local_450 + 200) = puVar43;
          if (puVar43 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar43 + 1) = *(int *)(puVar43 + 1) + 1;
            UNLOCK();
          }
          if (puVar60 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar60 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar60)(puVar60,1);
            }
          }
          goto LAB_1411281f6;
        }
      }
      puVar59 = local_440;
      if ((local_440 == (ulonglong *)0x0) || (puVar43 == (undefined8 *)0x0)) goto LAB_14112829f;
      (**(code **)(*local_440 + 0x3d0))(local_440,&local_318);
      local_450[0x9d] = (uint)(float)(double)local_318;
      local_450[0x9e] = (uint)(float)(double)pdStack_310;
      local_450[0x9f] = (uint)(float)(double)local_308;
      local_450[0xa0] = (uint)(float)dStack_300;
      local_450[0xa1] = (uint)(float)local_2f8;
      local_450[0xa2] = (uint)(float)dStack_2f0;
      goto LAB_1411282b9;
    }
LAB_141128b99:
    uVar45 = 0;
    goto LAB_14112b59e;
  }
  if (local_440 != (ulonglong *)0x0) {
LAB_1411280a2:
    bVar47 = *(byte *)((longlong)local_440 + 0xc5);
    if (*(byte *)((longlong)local_440 + 0xc6) < *(byte *)((longlong)local_440 + 0xc5)) {
      bVar47 = *(byte *)((longlong)local_440 + 0xc6);
    }
    uVar27 = (uint)bVar47;
    uVar57 = (*(byte *)((longlong)local_440 + 0xc4) - uVar27) +
             (uint)*(byte *)((longlong)local_440 + 0xc3);
    local_4a8 = CONCAT31(local_4a8._1_3_,(char)local_420);
    uVar30 = FUN_143a66b0e(local_448,local_440,local_3f8,&local_359);
    goto LAB_1411280f6;
  }
LAB_141128179:
  local_440 = (ulonglong *)0x0;
LAB_141128385:
  uVar49 = param_1[199];
  iVar54 = (uint)((byte)((char)local_448[0x15] - 1U) < 2) +
           (uint)((char)local_448[0x15] == '\x02') * 2;
  if ((char)local_418 == '\0') {
    uVar27 = *(uint *)((longlong)local_438 + 0xc);
    if ((int)uVar27 < DAT_14c9647dc) {
      lVar37 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
    }
    else {
      lVar37 = 0;
    }
    uVar57 = *(uint *)(lVar37 + 0x10);
    if (*(uint *)(lVar37 + 0x10) == 0) {
      LOCK();
      iVar61 = DAT_14c964868 + 1;
      UNLOCK();
      uVar30 = DAT_14c964868 + 1;
      bVar65 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar61;
      if (bVar65) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar30);
      }
      LOCK();
      uVar57 = *(uint *)(lVar37 + 0x10);
      bVar65 = uVar57 == 0;
      if (bVar65) {
        *(uint *)(lVar37 + 0x10) = uVar30;
        uVar57 = 0;
      }
      UNLOCK();
      uVar64 = local_430;
      if (bVar65) {
        uVar57 = uVar30;
      }
    }
    uVar45 = FUN_1400bd118(*(undefined8 *)(uVar64 + 0x30));
    lVar37 = FUN_1415467be(uVar45);
    pdVar55 = (double *)CONCAT44(iVar54,uVar49);
    pRVar6 = (PSRWLOCK)(lVar37 + 8);
    AcquireSRWLockShared(pRVar6);
    plVar33 = (longlong *)(lVar37 + 0x10);
    pdVar63 = (double *)CONCAT44(uVar57,uVar27);
    uVar27 = uVar27 ^ uVar57;
    local_318 = pdVar63;
    iVar54 = FUN_1408f90aa(plVar33,uVar27);
    uVar64 = local_430;
    plVar31 = local_448;
    if (iVar54 != -1) {
      lVar50 = *plVar33 + (longlong)iVar54 * 0x20;
      if ((lVar50 != 0) && (*plVar33 + (longlong)iVar54 * 0x20 != -8)) {
        pdStack_310 = *(double **)(lVar50 + 8);
        local_308 = *(undefined1 **)(lVar50 + 0x10);
        if (local_308 != (undefined1 *)0x0) {
          LOCK();
          *(int *)(local_308 + 8) = *(int *)(local_308 + 8) + 1;
          UNLOCK();
        }
        local_318 = pdVar55;
        if (pdStack_310 != (double *)0x0) {
          FUN_1404912f2(pdStack_310,pdVar55);
        }
        ReleaseSRWLockShared(pRVar6);
        goto LAB_14112874c;
      }
    }
    ReleaseSRWLockShared(pRVar6);
    AcquireSRWLockExclusive(pRVar6);
    plVar34 = (longlong *)FUN_14001cc68(0x90,0x10);
    plVar34[1] = (longlong)&DAT_100000001;
    *plVar34 = (longlong)&PTR_FUN_14addd470;
    *(undefined1 *)(plVar34 + 2) = 0;
    InitializeSRWLock((PSRWLOCK)(plVar34 + 3));
    plVar34[4] = (longlong)pdVar63;
    *(undefined4 *)(plVar34 + 5) = 0x3d086595;
    *(undefined8 *)((longlong)plVar34 + 0x2c) = 0;
    *(undefined8 *)((longlong)plVar34 + 0x34) = 0;
    *(undefined8 *)((longlong)plVar34 + 0x3c) = 0;
    *(undefined8 *)((longlong)plVar34 + 0x44) = 0;
    *(undefined8 *)((longlong)plVar34 + 0x4c) = 0;
    *(undefined8 *)((longlong)plVar34 + 0x54) = 0;
    *(undefined8 *)((longlong)plVar34 + 0x5c) = 0;
    *(undefined8 *)((longlong)plVar34 + 100) = 0;
    *(undefined8 *)((longlong)plVar34 + 0x6c) = 0;
    *(undefined8 *)((longlong)plVar34 + 0x74) = 0;
    *(undefined8 *)((longlong)plVar34 + 0x79) = 0;
    *(undefined8 *)((longlong)plVar34 + 0x81) = 0;
    if (plVar34 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar34 + 1) = (int)plVar34[1] + 1;
      UNLOCK();
    }
    plVar31 = plVar34 + 2;
    local_408 = plVar33;
    local_3f0 = pRVar6;
    if (*(int *)(lVar37 + 0x44) == 0) {
      uVar49 = *(uint *)(lVar37 + 0x18);
      local_428 = (ulonglong *)(ulonglong)uVar49;
      *(uint *)(lVar37 + 0x18) = uVar49 + 1;
      local_400 = plVar31;
      if (*(uint *)(lVar37 + 0x1c) == uVar49) {
        FUN_1447711aa(plVar33);
        uVar49 = (uint)local_428;
      }
      lVar52 = (longlong)(int)uVar49;
      iVar54 = FUN_144a54ea4(lVar37 + 0x20,1);
      lVar50 = *(longlong *)(lVar37 + 0x30);
      if (*(longlong *)(lVar37 + 0x30) == 0) {
        lVar50 = lVar37 + 0x20;
      }
      iVar61 = iVar54 + 0x1f;
      if (-1 < iVar54) {
        iVar61 = iVar54;
      }
      bVar47 = (byte)iVar54 & 0x1f;
      puVar46 = (uint *)(lVar50 + (longlong)(iVar61 >> 5) * 4);
      *puVar46 = *puVar46 & (-2 << bVar47 | 0xfffffffeU >> 0x20 - bVar47);
      plVar31 = local_400;
      puVar59 = local_428;
    }
    else {
      uVar49 = *(uint *)(lVar37 + 0x40);
      lVar52 = (longlong)(int)uVar49;
      iVar54 = *(int *)(*(longlong *)(lVar37 + 0x10) + 4 + lVar52 * 0x20);
      *(int *)(lVar37 + 0x40) = iVar54;
      iVar61 = *(int *)(lVar37 + 0x44) + -1;
      *(int *)(lVar37 + 0x44) = iVar61;
      puVar59 = (ulonglong *)(ulonglong)uVar49;
      if (iVar61 != 0) {
        *(undefined4 *)(*(longlong *)(lVar37 + 0x10) + (longlong)iVar54 * 0x20) = 0xffffffff;
      }
    }
    iVar54 = (int)puVar59;
    lVar50 = lVar37 + 0x20;
    if (*(longlong *)(lVar37 + 0x30) != 0) {
      lVar50 = *(longlong *)(lVar37 + 0x30);
    }
    iVar61 = iVar54 + 0x1f;
    if (-1 < iVar54) {
      iVar61 = iVar54;
    }
    puVar46 = (uint *)(lVar50 + (longlong)(iVar61 >> 5) * 4);
    *puVar46 = *puVar46 | 1 << ((byte)puVar59 & 0x1f);
    iVar54 = 1;
    lVar50 = *(longlong *)(lVar37 + 0x10);
    lVar52 = lVar52 * 0x20;
    puVar2 = (undefined4 *)(lVar50 + lVar52);
    *(double **)(lVar50 + lVar52) = pdVar63;
    *(longlong **)(lVar50 + 8 + lVar52) = plVar31;
    *(longlong **)(lVar50 + 0x10 + lVar52) = plVar34;
    *(undefined4 *)(lVar50 + 0x18 + lVar52) = 0xffffffff;
    if (*(int *)(lVar37 + 0x18) - *(int *)(lVar37 + 0x44) == 1) {
      uVar49 = 1;
LAB_14112866a:
      plVar33 = local_408;
      plVar31 = local_448;
      param_1 = local_450;
      iVar61 = (int)puVar59;
      if (((int)uVar49 < 1) || (iVar54 <= *(int *)(lVar37 + 0x58))) {
        uVar27 = *(int *)(lVar37 + 0x58) - 1U & uVar27;
        puVar2[7] = uVar27;
        lVar50 = *(longlong *)(lVar37 + 0x50);
        if (*(longlong *)(lVar37 + 0x50) == 0) {
          lVar50 = lVar37 + 0x48;
        }
        puVar2[6] = *(undefined4 *)
                     (lVar50 + ((longlong)*(int *)(lVar37 + 0x58) - 1U & (longlong)(int)uVar27) * 4)
        ;
        lVar50 = lVar37 + 0x48;
        if (*(longlong *)(lVar37 + 0x50) != 0) {
          lVar50 = *(longlong *)(lVar37 + 0x50);
        }
        *(int *)(lVar50 + ((longlong)*(int *)(lVar37 + 0x58) - 1U & (longlong)(int)uVar27) * 4) =
             iVar61;
      }
      else {
        *(int *)(lVar37 + 0x58) = iVar54;
        FUN_14182b4b6(local_408);
      }
    }
    else {
      local_428 = puVar59;
      local_318 = pdVar63;
      iVar61 = FUN_1408f90aa(local_408,uVar27);
      if (iVar61 == -1) {
        uVar49 = *(int *)(lVar37 + 0x18) - *(int *)(lVar37 + 0x44);
        puVar59 = local_428;
        if (3 < uVar49) {
          uVar64 = (ulonglong)(uVar49 & 0xfffffffe) + 0xf;
          lVar50 = 0x3f;
          if (uVar64 != 0) {
            for (; uVar64 >> lVar50 == 0; lVar50 = lVar50 + -1) {
            }
          }
          iVar54 = 1 << ((byte)lVar50 & 0x1f);
        }
        goto LAB_14112866a;
      }
      puVar3 = (undefined4 *)(*local_408 + (longlong)iVar61 * 0x20);
      plVar33 = *(longlong **)(*local_408 + 0x10 + (longlong)iVar61 * 0x20);
      if (plVar33 != (longlong *)0x0) {
        LOCK();
        plVar31 = plVar33 + 1;
        *(int *)plVar31 = (int)*plVar31 + -1;
        UNLOCK();
        if ((int)*plVar31 == 0) {
          (**(code **)*plVar33)(plVar33);
          LOCK();
          piVar1 = (int *)((longlong)plVar33 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar33 + 0x10))(plVar33);
          }
        }
      }
      plVar33 = local_408;
      uVar66 = *puVar2;
      uVar67 = puVar2[1];
      uVar68 = puVar2[2];
      uVar69 = puVar2[3];
      *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
      *puVar3 = uVar66;
      puVar3[1] = uVar67;
      puVar3[2] = uVar68;
      puVar3[3] = uVar69;
      FUN_143a6fc02(local_408,local_428);
      param_1 = local_450;
      plVar31 = local_448;
    }
    pRVar6 = local_3f0;
    uVar64 = local_430;
    pdStack_310 = *(double **)(*plVar33 + 8 + (longlong)iVar61 * 0x20);
    local_308 = *(undefined1 **)(*plVar33 + 0x10 + (longlong)iVar61 * 0x20);
    if (local_308 != (undefined1 *)0x0) {
      LOCK();
      *(int *)(local_308 + 8) = *(int *)(local_308 + 8) + 1;
      UNLOCK();
    }
    local_318 = pdVar55;
    if (pdStack_310 != (double *)0x0) {
      FUN_1404912f2(pdStack_310,pdVar55);
    }
    if (plVar34 != (longlong *)0x0) {
      LOCK();
      plVar33 = plVar34 + 1;
      *(int *)plVar33 = (int)*plVar33 + -1;
      UNLOCK();
      if ((int)*plVar33 == 0) {
        (**(code **)*plVar34)(plVar34);
        LOCK();
        piVar1 = (int *)((longlong)plVar34 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar34 + 0x10))(plVar34);
        }
      }
    }
    ReleaseSRWLockExclusive(pRVar6);
  }
  else {
    local_318 = (double *)CONCAT44(iVar54,uVar49);
    pdStack_310 = (double *)0x0;
    local_308 = (undefined1 *)0x0;
    plVar31 = local_448;
  }
LAB_14112874c:
  FUN_143a60f52(param_1 + 0x16,&local_318);
  FUN_140e956ce(&local_318);
  bVar47 = 0;
  local_398 = (undefined8 *)((ulonglong)local_398 & 0xffffffffffffff00);
  local_35a = '\0';
  FUN_14499183e(uVar64,DAT_14cb399d8,&local_398,&local_35a);
  FUN_14499183e(uVar64,DAT_14cb399e0,&local_398,&local_35a);
  bVar51 = 0;
  if (param_1[0x15] != 0) {
    uVar49 = *local_3e8;
    bVar47 = 0;
    if ((int)uVar49 < 0) {
LAB_14112b6f3:
      bVar47 = 0;
      bVar51 = 0;
    }
    else if ((int)uVar49 < DAT_14c9647dc) {
      lVar37 = (ulonglong)((uVar49 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar49 >> 0x10) * 8);
      if ((lVar37 == 0) || (*(uint *)(lVar37 + 0x10) != param_1[0x15])) goto LAB_14112b6f3;
      bVar47 = (*(uint *)(lVar37 + 8) & 0x10200000) == 0 & (byte)local_398;
      bVar51 = 0;
      if (((*(uint *)(lVar37 + 8) & 0x10200000) == 0) && (local_35a != '\0')) {
        bVar51 = (*(byte *)(plVar31 + 6) & 4) >> 2;
      }
    }
  }
  if ((bVar47 == 0) && (bVar51 == 0)) {
    local_358 = (longlong *)0x0;
    uStack_350 = 0;
    FUN_1408e0fde(&local_318,0,&local_358,0);
  }
  else {
    uVar45 = FUN_1400bd118(*(undefined8 *)(uVar64 + 0x30));
    uVar45 = FUN_1415467be(uVar45);
    local_4a8 = *(undefined4 *)((longlong)plVar31 + 0xf4);
    local_4a0 = CONCAT22(local_4a0._2_2_,CONCAT11(bVar51,bVar47));
    FUN_14819075c(uVar45,&local_318,local_3e8,param_1[199]);
  }
  FUN_14392eb40(param_1 + 0x1c,&local_318);
  FUN_14392eaf2(&local_318);
  bVar47 = 0;
  local_358 = (longlong *)((ulonglong)local_358 & 0xffffffffffffff00);
  local_398 = (undefined8 *)((ulonglong)local_398 & 0xffffffffffffff00);
  FUN_14499183e(uVar64,DAT_14cb399e8,&local_358,&local_398);
  FUN_14499183e(uVar64,DAT_14cb399f0,&local_358,&local_398);
  puVar59 = local_440;
  bVar51 = 0;
  if (param_1[0x15] != 0) {
    uVar49 = *local_3e8;
    bVar47 = 0;
    if ((int)uVar49 < 0) {
LAB_14112b6fc:
      bVar47 = 0;
      bVar51 = 0;
    }
    else if ((int)uVar49 < DAT_14c9647dc) {
      lVar37 = (ulonglong)((uVar49 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar49 >> 0x10) * 8);
      if ((lVar37 == 0) || (*(uint *)(lVar37 + 0x10) != param_1[0x15])) goto LAB_14112b6fc;
      bVar47 = (*(uint *)(lVar37 + 8) & 0x10200000) == 0 & (byte)local_358;
      bVar51 = 0;
      if (((*(uint *)(lVar37 + 8) & 0x10200000) == 0) && ((byte)local_398 != '\0')) {
        bVar51 = (*(byte *)(plVar31 + 6) & 4) >> 2;
      }
    }
  }
  if ((bVar47 == 0) && (bVar51 == 0)) {
    local_318 = (double *)((ulonglong)local_318 & 0xffffffffffff0000);
    pdStack_310 = (double *)0x0;
    local_308 = (undefined1 *)0x0;
  }
  else {
    uVar45 = FUN_1400bd118(*(undefined8 *)(uVar64 + 0x30));
    uVar45 = FUN_1415467be(uVar45);
    local_4a8 = CONCAT22(local_4a8._2_2_,CONCAT11(bVar51,bVar47));
    FUN_148190962(uVar45,&local_318,local_3e8,param_1[199]);
  }
  FUN_143a66cb0(param_1 + 0x22,&local_318);
  FUN_143a66d4e(&local_318);
  if ((1 < (int)param_1[0x2a]) && (local_359 == '\x01')) {
    *(uint **)(param_1 + 0x38) = param_1;
    (**(code **)(*(longlong *)(param_1 + 0x2c) + 0x10))(param_1 + 0x2c);
  }
  uVar45 = 1;
  if (puVar59 == (ulonglong *)0x0) goto LAB_14112b59e;
  *(undefined1 *)(param_1 + 0xc6) = 1;
  if ((((param_1[1] == 0) || (uVar49 = *param_1, (int)uVar49 < 0)) || (DAT_14c9647dc <= (int)uVar49)
      ) || (((plVar33 = (longlong *)
                        ((ulonglong)((uVar49 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar49 >> 0x10) * 8)),
             plVar33 == (longlong *)0x0 || (*(uint *)(plVar33 + 2) != param_1[1])) ||
            (((*(uint *)(plVar33 + 1) & 0x10200000) != 0 || (lVar37 = *plVar33, lVar37 == 0)))))) {
LAB_141128a22:
    lVar37 = *(longlong *)(param_1 + 200) + 0x138;
    if (*(longlong *)(param_1 + 200) == 0) {
      lVar37 = 0;
    }
  }
  else {
    if (DAT_14cad2858 == 0) {
      local_318 = (double *)FUN_144a7958c;
      local_460 = FUN_14081d0ea;
      local_468 = (code *)&LAB_146395584;
      local_470 = &local_318;
      local_478 = &LAB_147a0ba80;
      local_480 = (code *)&LAB_14575ccce;
      local_488 = L"Engine";
      local_490 = 0x40000000000;
      local_498 = 0x10000004;
      local_4a0 = 0x10;
      local_4a8 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(*(longlong *)(lVar37 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar37 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) goto LAB_141128a22;
    lVar50 = *(longlong *)(lVar37 + 0x658);
    if (lVar50 == 0) {
      lVar50 = *(longlong *)(lVar37 + 0x660);
      if ((DAT_14c950c29 == '\x01') && (lVar50 != 0)) goto LAB_14112bf6e;
      if (lVar50 != 0) goto LAB_141129a30;
      goto LAB_141128a22;
    }
    if (DAT_14c950c29 == '\x01') {
LAB_14112bf6e:
      FUN_1456cec3c(lVar50);
    }
LAB_141129a30:
    if (DAT_14cb06da8 == 0) {
      local_318 = (double *)FUN_1449e2820;
      local_460 = FUN_14081d0ea;
      local_468 = (code *)&LAB_1464003b0;
      local_470 = &local_318;
      local_478 = &LAB_147d17bdf;
      local_480 = (code *)&LAB_1417edf22;
      local_488 = L"Engine";
      local_490 = 0;
      local_498 = 0x10000000;
      local_4a0 = 8;
      local_4a8 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(*(longlong *)(lVar50 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar50 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) goto LAB_141128a22;
    lVar37 = FUN_1417c143e(lVar37,param_1[199],0);
  }
  puVar59 = local_440;
  lVar50 = (**(code **)(*local_440 + 800))(local_440,param_1[199]);
  if ((*(byte *)(lVar50 + 0xd0) & 4) == 0) {
LAB_141128a91:
    bVar65 = false;
  }
  else {
    plVar33 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x28);
    if (plVar33 == (longlong *)0x0) goto LAB_141128a91;
    iVar54 = *(int *)(lVar37 + 0x40);
    iVar61 = *(int *)(*(longlong *)(param_1 + 200) + 0xec);
    iVar29 = (**(code **)(*plVar33 + 0x50))();
    bVar65 = (iVar61 != 0 && iVar54 != 0) && 0 < iVar29;
  }
  *(bool *)(param_1 + 0xc6) = bVar65;
  local_400 = (longlong *)(**(code **)(*puVar59 + 0x310))(puVar59);
  param_1[0xa3] = 0xffffffff;
  if (((*(byte *)(plVar31 + 0x1e) & 1) != 0) && (lVar50 = plVar31[0x1d], lVar50 != 0)) {
    uVar49 = 0xffffffff;
    if ((int)local_400[0x13] != *(int *)((longlong)local_400 + 0xc4)) {
      uVar27 = (uint)((ulonglong)lVar50 >> 0x10);
      uVar57 = (uint)lVar50 & 0xffff;
      plVar33 = local_400 + 0x19;
      if ((longlong *)local_400[0x1a] != (longlong *)0x0) {
        plVar33 = (longlong *)local_400[0x1a];
      }
      iVar54 = *(int *)((longlong)plVar33 +
                       (ulonglong)
                       ((int)local_400[0x1b] - 1U &
                       (int)((ulonglong)lVar50 >> 0x20) + ((uint)lVar50 << 0x10 | uVar57) +
                       (uVar27 << 0x13 | uVar27 & 0xffff) + (uVar57 >> 4)) * 4);
      if (iVar54 != -1) {
        do {
          plVar33 = (longlong *)(local_400[0x12] + (longlong)iVar54 * 0x14);
          if (*plVar33 == lVar50) {
            if ((plVar33 != (longlong *)0x0) && ((uint *)(plVar33 + 1) != (uint *)0x0)) {
              uVar49 = *(uint *)(plVar33 + 1);
            }
            break;
          }
          iVar54 = *(int *)((longlong)plVar33 + 0xc);
        } while (iVar54 != -1);
      }
    }
    param_1[0xa3] = uVar49;
  }
  uVar49 = *(uint *)(local_400 + 5);
  if ((longlong)(int)plVar31[0x1a] < 1) {
    param_1[0xa5] = uVar49;
  }
  else {
    if (0xffff < (int)uVar49) goto LAB_141128b99;
    local_318 = &local_2f8;
    dStack_300 = (double)((ulonglong)dStack_300 & 0xffffffffffffff00);
    local_308 = local_f8;
    pdStack_310 = local_318;
    if ((int)uVar49 < 0) goto LAB_14112b937;
    puVar46 = param_1 + 0xa6;
    if ((int)param_1[0xa9] < (int)uVar49) {
      FUN_1448759c8(puVar46);
      plVar35 = local_400;
      if ((longlong)(int)plVar31[0x1a] != 0) {
        plVar34 = (longlong *)local_448[0x19];
        plVar33 = plVar34 + (int)plVar31[0x1a];
        goto LAB_141128c31;
      }
    }
    else {
      plVar34 = (longlong *)plVar31[0x19];
      plVar33 = plVar34 + (int)plVar31[0x1a];
LAB_141128c31:
      plVar31 = local_400 + 0x19;
      plVar35 = local_400;
      do {
        lVar50 = *plVar34;
        if ((lVar50 != 0) && ((int)plVar35[0x13] != *(int *)((longlong)plVar35 + 0xc4))) {
          uVar49 = (uint)((ulonglong)lVar50 >> 0x10);
          uVar27 = (uint)lVar50 & 0xffff;
          plVar38 = (longlong *)plVar35[0x1a];
          if ((longlong *)plVar35[0x1a] == (longlong *)0x0) {
            plVar38 = plVar31;
          }
          iVar54 = *(int *)((longlong)plVar38 +
                           (ulonglong)
                           ((int)plVar35[0x1b] - 1U &
                           (int)((ulonglong)lVar50 >> 0x20) + ((uint)lVar50 << 0x10 | uVar27) +
                           (uVar49 << 0x13 | uVar49 & 0xffff) + (uVar27 >> 4)) * 4);
          if (iVar54 != -1) {
            do {
              plVar38 = (longlong *)(plVar35[0x12] + (longlong)iVar54 * 0x14);
              if (*plVar38 == lVar50) {
                if (((plVar38 != (longlong *)0x0) && (plVar38 + 1 != (longlong *)0x0)) &&
                   (iVar54 = (int)plVar38[1], iVar54 != -1)) {
                  uVar49 = param_1[0xa8];
                  param_1[0xa8] = uVar49 + 1;
                  if (param_1[0xa9] < uVar49 + 1) {
                    FUN_14488eebe(puVar46,uVar49);
                    plVar35 = local_400;
                  }
                  *(short *)(*(longlong *)(param_1 + 0xa6) + (longlong)(int)uVar49 * 2) =
                       (short)iVar54;
                  param_1[0xa4] = param_1[0xa4] + 1;
                }
                break;
              }
              iVar54 = *(int *)((longlong)plVar38 + 0xc);
            } while (iVar54 != -1);
          }
        }
        plVar34 = plVar34 + 1;
      } while (plVar34 != plVar33);
    }
    iVar54 = (int)plVar35[5];
    if (0 < iVar54) {
      uVar49 = 0;
      do {
        if (uVar49 != param_1[0xa3]) {
          if (0 < (longlong)(int)param_1[0xa4]) {
            lVar50 = 0;
            do {
              if (uVar49 == *(ushort *)(*(longlong *)puVar46 + lVar50 * 2)) goto LAB_141128d93;
              lVar50 = lVar50 + 1;
            } while ((int)param_1[0xa4] != lVar50);
          }
          uVar27 = param_1[0xa8];
          param_1[0xa8] = uVar27 + 1;
          if (param_1[0xa9] < uVar27 + 1) {
            FUN_14488eebe(puVar46,uVar27);
            plVar35 = local_400;
          }
          *(short *)(*(longlong *)(param_1 + 0xa6) + (longlong)(int)uVar27 * 2) = (short)uVar49;
          param_1[0xa5] = param_1[0xa5] + 1;
          iVar54 = (int)plVar35[5];
        }
LAB_141128d93:
        uVar49 = uVar49 + 1;
      } while ((int)uVar49 < iVar54);
    }
    plVar31 = local_448;
    if (dStack_300._0_1_ == '\x01') {
      FUN_1400020a8(local_318);
      plVar31 = local_448;
    }
  }
  puVar46 = param_1 + 0xaa;
  uVar49 = *(uint *)(plVar31 + 0x1c);
  uVar27 = param_1[0xac];
  if ((int)uVar27 < (int)uVar49) {
    param_1[0xac] = uVar49;
    if (param_1[0xad] - uVar27 < uVar49 - uVar27) {
      FUN_14182b810(puVar46,uVar27);
    }
    FUN_143a7013e((longlong)(int)uVar27 * 0x40 + *(longlong *)puVar46,uVar49 - uVar27);
  }
  else {
    if ((int)uVar49 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar49);
    }
    if ((int)uVar49 < (int)uVar27) {
      param_1[0xac] = uVar49;
      FUN_14819e9ec(puVar46);
    }
  }
  plVar31 = local_438;
  plVar33 = local_448;
  if ((char)local_418 == '\0') {
    if (0 < (int)param_1[0xac]) {
      lVar50 = 0x30;
      lVar52 = 0;
      do {
        local_318 = (double *)0x0;
        pdStack_310 = (double *)0x0;
        local_308 = (undefined1 *)0x0;
        dStack_300 = 1.0;
        local_2e8 = 0.0;
        dStack_2e0 = 0.0;
        local_2f8 = 0.0;
        dStack_2f0 = 0.0;
        local_2d8 = 1.0;
        dStack_2d0 = 1.0;
        local_2c8 = 1.0;
        dStack_2c0 = 0.0;
        FUN_1400848ec(plVar31,*(undefined8 *)(plVar33[0x1b] + lVar52 * 8),&local_318);
        lVar36 = *(longlong *)(param_1 + 0xaa);
        pfVar4 = (float *)(lVar36 + -0x30 + lVar50);
        *pfVar4 = (float)(double)local_318;
        pfVar4[1] = (float)(double)pdStack_310;
        pfVar4[2] = (float)(double)local_308;
        pfVar4[3] = (float)dStack_300;
        pfVar4 = (float *)(lVar36 + -0x20 + lVar50);
        *pfVar4 = (float)local_2f8;
        pfVar4[1] = (float)dStack_2f0;
        pfVar4[2] = (float)local_2e8;
        pfVar4[3] = (float)dStack_2e0;
        pfVar4 = (float *)(lVar36 + -0x10 + lVar50);
        *pfVar4 = (float)local_2d8;
        pfVar4[1] = (float)dStack_2d0;
        pfVar4[2] = (float)local_2c8;
        pfVar4[3] = (float)dStack_2c0;
        lVar52 = lVar52 + 1;
        lVar50 = lVar50 + 0x40;
      } while (lVar52 < (int)param_1[0xac]);
    }
  }
  else if (0 < (int)param_1[0xac]) {
    lVar52 = 0;
    lVar50 = 0;
    do {
      (**(code **)(*local_440 + 0x348))
                (local_440,&local_318,*(undefined8 *)(plVar33[0x1b] + lVar50 * 8));
      local_358 = (longlong *)CONCAT44((float)(double)pdStack_310,(float)(double)local_318);
      uStack_350 = CONCAT44((float)dStack_300,(float)(double)local_308);
      local_348 = (float)local_2f8;
      local_344 = (float)dStack_2f0;
      local_340 = (float)local_2e8;
      local_33c = (float)dStack_2e0;
      local_338 = (float)local_2d8;
      local_334 = (float)dStack_2d0;
      local_330 = (float)local_2c8;
      local_32c = (float)dStack_2c0;
      local_328 = (float)local_2b8;
      local_324 = (float)local_2b0;
      local_320 = (float)local_2a8;
      local_31c = (float)local_2a0;
      FUN_1467f5cc4(&local_398,&local_358);
      lVar36 = *(longlong *)(param_1 + 0xaa);
      puVar43 = (undefined8 *)(lVar36 + 0x20 + lVar52);
      *puVar43 = local_378;
      puVar43[1] = uStack_370;
      puVar43 = (undefined8 *)(lVar36 + 0x10 + lVar52);
      *puVar43 = local_388;
      puVar43[1] = uStack_380;
      puVar2 = (undefined4 *)(lVar36 + lVar52);
      *puVar2 = (undefined4)local_398;
      puVar2[1] = local_398._4_4_;
      puVar2[2] = uStack_390;
      puVar2[3] = uStack_38c;
      *(undefined4 *)(*(longlong *)(param_1 + 0xaa) + 0x30 + lVar52) = 0xffffffff;
      lVar50 = lVar50 + 1;
      lVar52 = lVar52 + 0x40;
    } while (lVar50 < (int)param_1[0xac]);
  }
  lVar50 = (**(code **)(*local_440 + 0x310))();
  param_1[0xae] = *(uint *)(lVar50 + 0x28);
  param_1[0xaf] = 0;
  puVar46 = param_1 + 0xb0;
  FUN_141829162(puVar46,(int)plVar33[0x1c]);
  FUN_14076b618(puVar46,(int)plVar33[0x1c]);
  FUN_1403ec2c8(param_1);
  puVar39 = param_1 + 0xb4;
  FUN_141829162(puVar39,(int)plVar33[0x1c]);
  uVar49 = param_1[0xb2];
  if ((longlong)(int)uVar49 != 0) {
    uVar27 = param_1[0xb6];
    param_1[0xb6] = uVar27 + uVar49;
    if (param_1[0xb7] - uVar27 < uVar49) {
      FUN_1406ce8b4(puVar39,uVar27);
    }
    memcpy((void *)((longlong)(int)uVar27 * 0x30 + *(longlong *)puVar39),*(void **)puVar46,
           (longlong)(int)uVar49 * 0x30);
  }
  puVar59 = local_440;
  if ((*(byte *)(plVar33 + 6) & 4) != 0) {
    param_1[0xb9] = param_1[0xb9] & 0xffffffef | (uint)*(byte *)(lVar37 + 0x21) << 4;
    param_1[0xbe] =
         ((uint)*(byte *)(lVar37 + 0x28) + (uint)*(byte *)(lVar37 + 0x29) + 2) *
         *(int *)(lVar37 + 0x24);
    param_1[0xbf] = *(byte *)(lVar37 + 0x28) + 1;
    param_1[0xc0] = *(byte *)(lVar37 + 0x29) + 1;
    *(longlong *)(param_1 + 0xba) = lVar37;
    *(longlong *)(param_1 + 0xbc) = lVar37 + 0x48;
    lVar37 = (**(code **)(*local_440 + 800))(local_440,param_1[199]);
    param_1[0xb9] =
         param_1[0xb9] & 0xfffffffb | (uint)(byte)(local_359 << 2 & -(*(byte *)(lVar37 + 0xe8) & 1))
    ;
    if (DAT_14cb366a0 == (wchar_t *)0x0) {
      local_318 = (double *)FUN_1449e2820;
      local_460 = FUN_14081d0ea;
      local_468 = (code *)&LAB_140eca530;
      local_470 = &local_318;
      local_478 = &LAB_148063819;
      local_480 = (code *)&LAB_1460672b6;
      local_488 = L"Niagara";
      local_490 = 0;
      local_498 = 0x10000006;
      local_4a0 = 8;
      local_4a8 = 0x130;
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0);
    }
    puVar46 = local_3a0;
    if (*(longlong *)(DAT_14cb366a0 + 0x88) == 0) {
      (**(code **)(*(longlong *)DAT_14cb366a0 + 1000))();
    }
    if ((char)local_420 == '\0') {
      uVar49 = param_1[199];
      if (((longlong)(int)uVar49 < 0) || ((int)(uint)puVar59[0x97] <= (int)uVar49)) {
        lVar37 = 0;
      }
      else {
        lVar37 = (longlong)(int)uVar49 * 0x48 + puVar59[0x96];
      }
      uVar49 = param_1[0xb9] & 4;
      if (lVar37 == 0) {
        uVar49 = 0;
      }
      param_1[0xb9] = param_1[0xb9] & 0xfffffffb | uVar49;
      puVar43 = (undefined8 *)FUN_14001cc68(0x180);
      memset(puVar43,0,0x180);
      *(undefined4 *)(puVar43 + 1) = 0xffffffff;
      *(undefined2 *)((longlong)puVar43 + 0xc) = 0x105;
      *puVar43 = &PTR_FUN_14adda950;
      *(undefined4 *)(puVar43 + 8) = 0;
      puVar43[10] = 0;
      puVar43[0xb] = 0;
      puVar43[2] = 0;
      puVar43[3] = 0;
      puVar43[4] = 0;
      puVar43[5] = 0;
      *(undefined8 *)((longlong)puVar43 + 0x29) = 0;
      *(undefined8 *)((longlong)puVar43 + 0x31) = 0;
      puVar43[9] = &PTR_FUN_14a355380;
      puVar43[0xe] = 0;
      puVar43[0xf] = 0;
      puVar43[0xd] = &PTR_FUN_14aa68d10;
      puVar43[0x12] = 0;
      puVar43[0x13] = 0;
      puVar43[0x11] = &PTR_FUN_14aa68d10;
      puVar43[0x15] = 0;
      puVar43[0x16] = 0;
      puVar43[0x17] = 0;
      puVar43[0x18] = 0;
      puVar43[0x19] = 0;
      puVar43[0x1a] = 0;
      *(undefined4 *)(puVar43 + 0x1c) = 0xffffffff;
      puVar43[0x1e] = 0;
      puVar43[0x1f] = 0;
      puVar43[0x1d] = &PTR_FUN_14a3d46e0;
      puVar43[0x21] = 0;
      puVar43[0x22] = 0;
      *(undefined8 *)((longlong)puVar43 + 0x112) = 0;
      *(undefined8 *)((longlong)puVar43 + 0x11a) = 0;
      puVar43[0x25] = 0;
      puVar43[0x26] = 0;
      puVar43[0x27] = 0;
      puVar43[0x28] = 0;
      puVar43[0x29] = 0;
      puVar43[0x2a] = 0;
      *(undefined4 *)(puVar43 + 0x2f) = 0;
      *(undefined1 *)((longlong)puVar43 + 0x17c) = 0;
      *(undefined8 **)(param_1 + 0xc2) = puVar43;
      lVar50 = *(longlong *)(param_1 + 200);
      *(uint *)(puVar43 + 0x2b) = param_1[199];
      *(undefined4 *)(puVar43 + 0x2e) = 0;
      *(undefined4 *)(puVar43 + 0x1b) = 0;
      *(undefined4 *)(puVar43 + 0x23) = 0;
      if (param_1 != (uint *)0x0) {
        puVar43[2] = *(undefined8 *)local_450;
        puVar43[0x2d] = lVar37;
        *(byte *)((longlong)puVar43 + 0x17c) = (byte)local_450[0xb9] >> 2 & 1;
        puVar43[0x2c] = lVar50;
        iVar54 = (**(code **)(**(longlong **)(lVar50 + 0x28) + 0x50))();
        *(int *)(puVar43 + 0x2e) = iVar54 / 3;
        *(undefined4 *)((longlong)puVar43 + 0x174) = *(undefined4 *)(lVar50 + 0xec);
        if ((*(char *)((longlong)puVar43 + 0x17c) == '\x01') &&
           (*(int *)(puVar43[0x2d] + 0x10) != iVar54 / 3)) {
          *(undefined1 *)((longlong)puVar43 + 0x17c) = 0;
        }
        *(uint *)(puVar43 + 0x1b) = local_450[0xa4];
        *(uint *)((longlong)puVar43 + 0xdc) = local_450[0xa5];
        *(uint *)(puVar43 + 0x1c) = local_450[0xa3];
        uVar49 = local_450[0xa8];
        if ((int)uVar49 < 0) goto LAB_14112b937;
        puVar59 = puVar43 + 0x1e;
        if (*(int *)((longlong)puVar43 + 0xfc) < (int)uVar49) {
          FUN_1404d5fcc(puVar59);
          uVar49 = local_450[0xa8];
        }
        if (uVar49 != 0) {
          lVar37 = *(longlong *)(local_450 + 0xa6);
          lVar50 = 0;
          do {
            uVar5 = *(undefined2 *)(lVar37 + lVar50);
            iVar54 = *(int *)(puVar43 + 0x1f);
            uVar27 = iVar54 + 1;
            *(uint *)(puVar43 + 0x1f) = uVar27;
            if (*(uint *)((longlong)puVar43 + 0xfc) < uVar27) {
              FUN_141794766(puVar59);
            }
            uVar64 = *puVar59;
            uVar41 = ((longlong)uVar64 >> 0x18) + (longlong)puVar59;
            if ((uVar64 & 1) == 0) {
              uVar41 = uVar64;
            }
            *(undefined2 *)(uVar41 + (longlong)iVar54 * 2) = uVar5;
            lVar50 = lVar50 + 2;
          } while ((longlong)(int)uVar49 * 2 != lVar50);
        }
        *(uint *)(puVar43 + 0x23) = local_450[0xac];
        *(uint *)((longlong)puVar43 + 0x11c) = local_450[0xae];
        uVar49 = local_450[0x2a];
        if (0 < (longlong)(int)uVar49) {
          iVar54 = 0;
          if (local_450[0x15] == 0) {
LAB_14112b804:
            plVar33 = (longlong *)0x0;
          }
          else {
            uVar27 = *local_3e8;
            plVar33 = (longlong *)0x0;
            if ((-1 < (int)uVar27) && ((int)uVar27 < DAT_14c9647dc)) {
              puVar60 = (undefined8 *)
                        ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8));
              if ((puVar60 == (undefined8 *)0x0) ||
                 ((*(uint *)(puVar60 + 2) != local_450[0x15] ||
                  ((*(uint *)(puVar60 + 1) & 0x10200000) != 0)))) goto LAB_14112b804;
              plVar33 = (longlong *)*puVar60;
            }
          }
          local_418 = puVar43 + 10;
          puVar59 = puVar43 + 0xe;
          puVar53 = puVar43 + 0x12;
          *(undefined1 *)(puVar43 + 7) = 1;
          *(undefined8 *)((longlong)puVar43 + 0x3c) = 0;
          uVar64 = *local_3f8;
          bVar47 = 1;
          lVar37 = 0;
          iVar61 = 0;
          do {
            lVar50 = plVar33[0x98];
            lVar52 = (longlong)*(int *)(uVar64 + lVar37) * 0x78;
            iVar61 = iVar61 + *(int *)(lVar50 + 8 + lVar52);
            *(int *)((longlong)puVar43 + 0x3c) = iVar61;
            iVar54 = iVar54 + *(int *)(lVar50 + 0x18 + lVar52);
            *(int *)(puVar43 + 8) = iVar54;
            bVar47 = bVar47 & *(int *)(lVar50 + 0x40 + lVar52) == *(int *)(lVar50 + 8 + lVar52);
            *(byte *)(puVar43 + 7) = bVar47;
            lVar37 = lVar37 + 4;
          } while ((longlong)(int)uVar49 * 4 != lVar37);
          uVar49 = FUN_143a60dfd();
          iVar54 = *(int *)(puVar43 + 0xb);
          *(uint *)(puVar43 + 0xb) = iVar54 + uVar49;
          if ((uint)(*(int *)((longlong)puVar43 + 0x5c) - iVar54) < uVar49) {
            FUN_14042c7ac(local_418);
          }
          uVar49 = *(uint *)((longlong)puVar43 + 0x3c);
          if ((int)uVar49 < 0) {
LAB_14112b937:
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar49);
          }
          if (*(int *)((longlong)puVar43 + 0x7c) < (int)uVar49) {
            FUN_141067c74(puVar59);
          }
          uVar49 = *(uint *)(puVar43 + 8);
          if ((int)uVar49 < 0) goto LAB_14112b937;
          if (*(int *)((longlong)puVar43 + 0x9c) < (int)uVar49) {
            FUN_141067c74(puVar53);
          }
          if ((longlong)(int)local_450[0x2a] != 0) {
            puVar40 = *(ulonglong **)(local_450 + 0x28);
            local_3f8 = (ulonglong *)((longlong)puVar40 + (longlong)(int)local_450[0x2a] * 4);
            uVar64 = 0;
            local_430 = 0;
            local_438 = plVar33;
            do {
              local_448 = (longlong *)((longlong)(int)(uint)*puVar40 * 0x78 + local_438[0x98]);
              local_440 = puVar40;
              local_420 = (uint *)uVar64;
              if (*(char *)(puVar43 + 7) == '\x01') {
                uVar64 = *local_418;
                uVar41 = ((longlong)uVar64 >> 0x18) + (longlong)local_418;
                if ((uVar64 & 1) == 0) {
                  uVar41 = uVar64;
                }
                iVar61 = (int)local_430;
                FUN_1481904c6(uVar41 + (longlong)iVar61 * 4,local_448 + 6);
                iVar54 = FUN_143a60dfd((int)local_448[8]);
                local_430 = (ulonglong)(uint)(iVar61 + iVar54);
              }
              lVar37 = local_448[1];
              plVar33 = local_448;
              if ((longlong)(int)lVar37 != 0) {
                lVar50 = *local_448;
                lVar52 = 0;
                do {
                  iVar54 = *(int *)(lVar50 + lVar52);
                  iVar61 = *(int *)(puVar43 + 0xf);
                  *(uint *)(puVar43 + 0xf) = iVar61 + 1U;
                  if (*(uint *)((longlong)puVar43 + 0x7c) < iVar61 + 1U) {
                    FUN_1474381b8(puVar59,iVar61);
                    plVar33 = local_448;
                  }
                  uVar64 = *puVar59;
                  uVar41 = ((longlong)uVar64 >> 0x18) + (longlong)puVar59;
                  if ((uVar64 & 1) == 0) {
                    uVar41 = uVar64;
                  }
                  *(int *)(uVar41 + (longlong)iVar61 * 4) = iVar54 / 3;
                  lVar52 = lVar52 + 4;
                } while ((longlong)(int)lVar37 * 4 != lVar52);
              }
              lVar37 = plVar33[3];
              if ((longlong)(int)lVar37 != 0) {
                lVar50 = plVar33[2];
                lVar52 = 0;
                do {
                  uVar66 = *(undefined4 *)(lVar50 + lVar52);
                  iVar54 = *(int *)(puVar43 + 0x13);
                  *(uint *)(puVar43 + 0x13) = iVar54 + 1U;
                  if (*(uint *)((longlong)puVar43 + 0x9c) < iVar54 + 1U) {
                    FUN_1474381b8(puVar53,iVar54);
                    plVar33 = local_448;
                  }
                  uVar64 = *puVar53;
                  uVar41 = ((longlong)uVar64 >> 0x18) + (longlong)puVar53;
                  if ((uVar64 & 1) == 0) {
                    uVar41 = uVar64;
                  }
                  *(undefined4 *)(uVar41 + (longlong)iVar54 * 4) = uVar66;
                  lVar52 = lVar52 + 4;
                } while ((longlong)(int)lVar37 * 4 != lVar52);
              }
              uVar64 = (ulonglong)(uint)((int)local_420 + (int)plVar33[1]);
              puVar40 = (ulonglong *)((longlong)local_440 + 4);
            } while (puVar40 != local_3f8);
          }
        }
      }
      puVar39 = local_450;
      puVar46 = local_450 + 0xc2;
      iVar54 = 0;
      FUN_140308182(*(undefined8 *)(local_450 + 0xc2),0);
      puVar43 = (undefined8 *)FUN_14001cc68(0x68,0x10);
      *(undefined4 *)(puVar43 + 1) = 0xffffffff;
      *(undefined2 *)((longlong)puVar43 + 0xc) = 0x105;
      *(undefined1 *)((longlong)puVar43 + 0xe) = 0;
      *puVar43 = &PTR_FUN_14addaac0;
      puVar43[2] = 0;
      puVar43[4] = 0;
      puVar43[5] = 0;
      puVar43[6] = 0;
      puVar43[7] = 0;
      puVar43[8] = 0;
      puVar43[9] = 0;
      puVar43[10] = 0;
      puVar43[0xb] = 0;
      *(undefined4 *)((longlong)puVar43 + 0x5f) = 0;
      *(undefined8 **)(puVar39 + 0xc4) = puVar43;
      uVar49 = puVar39[0xac];
      lVar37 = *(longlong *)(puVar39 + 200);
      *(undefined4 *)(puVar43 + 3) = 0;
      lVar50 = (longlong)*(int *)(lVar37 + 0x18);
      if (lVar50 != 0) {
        lVar37 = *(longlong *)(lVar37 + 0x10);
        lVar52 = 0;
        do {
          iVar54 = iVar54 + *(int *)(lVar37 + 0x40 + lVar52);
          *(int *)(puVar43 + 3) = iVar54;
          lVar52 = lVar52 + 0xf8;
        } while (lVar50 * 0xf8 - lVar52 != 0);
      }
      *(int *)(puVar43 + 2) = (int)local_400[5];
      *(uint *)((longlong)puVar43 + 0x14) = uVar49;
      FUN_140308182(puVar43,0);
      puVar26 = local_3a8;
      if (*(longlong *)puVar46 != 0) {
        plVar33 = (longlong *)FUN_14001cc68(0x20,0x10);
        plVar33[1] = (longlong)&DAT_100000001;
        *plVar33 = (longlong)&PTR_FUN_14addcac0;
        plVar33[2] = 0;
        plVar33[3] = 0;
        if (plVar33 == (longlong *)0x0) {
          puVar39[0xde] = 0x10;
          puVar39[0xdf] = 0;
          plVar31 = *(longlong **)(puVar39 + 0xe0);
          if (plVar31 != (longlong *)0x0) {
            puVar39[0xe0] = 0;
            puVar39[0xe1] = 0;
LAB_14112b142:
            LOCK();
            plVar34 = plVar31 + 1;
            *(int *)plVar34 = (int)*plVar34 + -1;
            UNLOCK();
            if ((int)*plVar34 == 0) {
              (**(code **)*plVar31)(plVar31);
              LOCK();
              piVar1 = (int *)((longlong)plVar31 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar31 + 0x10))(plVar31);
              }
            }
            if (plVar33 != (longlong *)0x0) goto LAB_14112b192;
          }
        }
        else {
          LOCK();
          *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
          UNLOCK();
          *(longlong **)(puVar39 + 0xde) = plVar33 + 2;
          plVar31 = *(longlong **)(puVar39 + 0xe0);
          if (plVar33 == plVar31) {
            LOCK();
            plVar31 = plVar33 + 1;
            *(int *)plVar31 = (int)*plVar31 + -1;
            UNLOCK();
            if ((int)*plVar31 == 0) {
              (**(code **)*plVar33)(plVar33);
              LOCK();
              piVar1 = (int *)((longlong)plVar33 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar33 + 0x10))(plVar33);
              }
            }
          }
          else {
            *(longlong **)(puVar39 + 0xe0) = plVar33;
            if (plVar31 != (longlong *)0x0) goto LAB_14112b142;
          }
LAB_14112b192:
          LOCK();
          plVar31 = plVar33 + 1;
          *(int *)plVar31 = (int)*plVar31 + -1;
          UNLOCK();
          if ((int)*plVar31 == 0) {
            (**(code **)*plVar33)(plVar33);
            LOCK();
            piVar1 = (int *)((longlong)plVar33 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar33 + 0x10))(plVar33);
            }
          }
        }
        plVar33 = *(longlong **)puVar26;
        uVar49 = *(uint *)((longlong)plVar33 + 0xc);
        if ((int)uVar49 < 1) {
          FUN_14182ace4(plVar33,1);
          plVar33 = *(longlong **)puVar26;
          uVar49 = *(uint *)((longlong)plVar33 + 0xc);
        }
        iVar54 = (int)plVar33[1];
        *(uint *)(plVar33 + 1) = iVar54 + 1U;
        if (uVar49 < iVar54 + 1U) {
          FUN_14182ae20(plVar33,iVar54);
        }
        *(undefined8 *)(*plVar33 + (longlong)iVar54 * 8) = *(undefined8 *)puVar46;
      }
      if (*(longlong *)(puVar39 + 0xc4) != 0) {
        plVar33 = (longlong *)FUN_14001cc68(0x20,0x10);
        plVar33[1] = (longlong)&DAT_100000001;
        *plVar33 = (longlong)&PTR_FUN_14addcae0;
        plVar33[2] = 0;
        plVar33[3] = 0;
        if (plVar33 == (longlong *)0x0) {
          puVar39[0xe2] = 0x10;
          puVar39[0xe3] = 0;
          plVar31 = *(longlong **)(puVar39 + 0xe4);
          if (plVar31 != (longlong *)0x0) {
            puVar39[0xe4] = 0;
            puVar39[0xe5] = 0;
LAB_14112b287:
            LOCK();
            plVar34 = plVar31 + 1;
            *(int *)plVar34 = (int)*plVar34 + -1;
            UNLOCK();
            if ((int)*plVar34 == 0) {
              (**(code **)*plVar31)(plVar31);
              LOCK();
              piVar1 = (int *)((longlong)plVar31 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar31 + 0x10))(plVar31);
              }
            }
            if (plVar33 != (longlong *)0x0) goto LAB_14112b2c8;
          }
        }
        else {
          LOCK();
          *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
          UNLOCK();
          *(longlong **)(puVar39 + 0xe2) = plVar33 + 2;
          plVar31 = *(longlong **)(puVar39 + 0xe4);
          if (plVar33 == plVar31) {
            LOCK();
            plVar31 = plVar33 + 1;
            *(int *)plVar31 = (int)*plVar31 + -1;
            UNLOCK();
            if ((int)*plVar31 == 0) {
              (**(code **)*plVar33)(plVar33);
              LOCK();
              piVar1 = (int *)((longlong)plVar33 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar33 + 0x10))(plVar33);
              }
            }
          }
          else {
            *(longlong **)(puVar39 + 0xe4) = plVar33;
            if (plVar31 != (longlong *)0x0) goto LAB_14112b287;
          }
LAB_14112b2c8:
          LOCK();
          plVar31 = plVar33 + 1;
          *(int *)plVar31 = (int)*plVar31 + -1;
          UNLOCK();
          if ((int)*plVar31 == 0) {
            (**(code **)*plVar33)(plVar33);
            LOCK();
            piVar1 = (int *)((longlong)plVar33 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar33 + 0x10))(plVar33);
            }
          }
        }
        plVar33 = *(longlong **)(puVar39 + 0xe2);
        uVar49 = *(uint *)((longlong)plVar33 + 0xc);
        if ((int)uVar49 < 1) {
          FUN_14182af82(plVar33,1);
          plVar33 = *(longlong **)(puVar39 + 0xe2);
          uVar49 = *(uint *)((longlong)plVar33 + 0xc);
        }
        iVar54 = (int)plVar33[1];
        *(uint *)(plVar33 + 1) = iVar54 + 1U;
        if (uVar49 < iVar54 + 1U) {
          FUN_14182b0be(plVar33,iVar54);
        }
        *(undefined8 *)(*plVar33 + (longlong)iVar54 * 8) = *(undefined8 *)(puVar39 + 0xc4);
      }
      if (*(longlong *)(puVar39 + 0xba) != 0) {
        plVar33 = (longlong *)FUN_14001cc68(0x20,0x10);
        plVar33[1] = (longlong)&DAT_100000001;
        *plVar33 = (longlong)&PTR_FUN_14addcb00;
        plVar33[2] = 0;
        plVar33[3] = 0;
        if (plVar33 == (longlong *)0x0) {
          puVar39[0xe6] = 0x10;
          puVar39[0xe7] = 0;
          plVar31 = *(longlong **)(puVar39 + 0xe8);
          if (plVar31 != (longlong *)0x0) {
            puVar39[0xe8] = 0;
            puVar39[0xe9] = 0;
LAB_14112b3c1:
            LOCK();
            plVar34 = plVar31 + 1;
            *(int *)plVar34 = (int)*plVar34 + -1;
            UNLOCK();
            if ((int)*plVar34 == 0) {
              (**(code **)*plVar31)(plVar31);
              LOCK();
              piVar1 = (int *)((longlong)plVar31 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar31 + 0x10))(plVar31);
              }
            }
            if (plVar33 != (longlong *)0x0) goto LAB_14112b402;
          }
        }
        else {
          LOCK();
          *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
          UNLOCK();
          *(longlong **)(puVar39 + 0xe6) = plVar33 + 2;
          plVar31 = *(longlong **)(puVar39 + 0xe8);
          if (plVar33 == plVar31) {
            LOCK();
            plVar31 = plVar33 + 1;
            *(int *)plVar31 = (int)*plVar31 + -1;
            UNLOCK();
            if ((int)*plVar31 == 0) {
              (**(code **)*plVar33)(plVar33);
              LOCK();
              piVar1 = (int *)((longlong)plVar33 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar33 + 0x10))(plVar33);
              }
            }
          }
          else {
            *(longlong **)(puVar39 + 0xe8) = plVar33;
            if (plVar31 != (longlong *)0x0) goto LAB_14112b3c1;
          }
LAB_14112b402:
          LOCK();
          plVar31 = plVar33 + 1;
          *(int *)plVar31 = (int)*plVar31 + -1;
          UNLOCK();
          if ((int)*plVar31 == 0) {
            (**(code **)*plVar33)(plVar33);
            LOCK();
            piVar1 = (int *)((longlong)plVar33 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar33 + 0x10))(plVar33);
            }
          }
        }
        plVar33 = *(longlong **)(puVar39 + 0xe6);
        uVar49 = *(uint *)((longlong)plVar33 + 0xc);
        if ((int)uVar49 < 1) {
          FUN_14182b220(plVar33,1);
          plVar33 = *(longlong **)(puVar39 + 0xe6);
          uVar49 = *(uint *)((longlong)plVar33 + 0xc);
        }
        iVar54 = (int)plVar33[1];
        *(uint *)(plVar33 + 1) = iVar54 + 1U;
        if (uVar49 < iVar54 + 1U) {
          FUN_14182a7fa(plVar33,iVar54);
        }
        *(undefined8 *)(*plVar33 + (longlong)iVar54 * 8) = *(undefined8 *)(puVar39 + 0xba);
      }
      if (*(longlong *)(puVar39 + 0xbc) != 0) {
        plVar33 = (longlong *)FUN_14001cc68(0x20,0x10);
        plVar33[1] = (longlong)&DAT_100000001;
        *plVar33 = (longlong)&PTR_FUN_14addcb20;
        plVar33[2] = 0;
        plVar33[3] = 0;
        if (plVar33 == (longlong *)0x0) {
          puVar39[0xea] = 0x10;
          puVar39[0xeb] = 0;
          plVar31 = *(longlong **)(puVar39 + 0xec);
          if (plVar31 != (longlong *)0x0) {
            puVar39[0xec] = 0;
            puVar39[0xed] = 0;
LAB_14112b4fb:
            LOCK();
            plVar34 = plVar31 + 1;
            *(int *)plVar34 = (int)*plVar34 + -1;
            UNLOCK();
            if ((int)*plVar34 == 0) {
              (**(code **)*plVar31)(plVar31);
              LOCK();
              piVar1 = (int *)((longlong)plVar31 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar31 + 0x10))(plVar31);
              }
            }
            if (plVar33 != (longlong *)0x0) goto LAB_14112b53c;
          }
        }
        else {
          LOCK();
          *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
          UNLOCK();
          *(longlong **)(puVar39 + 0xea) = plVar33 + 2;
          plVar31 = *(longlong **)(puVar39 + 0xec);
          if (plVar33 == plVar31) {
            LOCK();
            plVar31 = plVar33 + 1;
            *(int *)plVar31 = (int)*plVar31 + -1;
            UNLOCK();
            if ((int)*plVar31 == 0) {
              (**(code **)*plVar33)(plVar33);
              LOCK();
              piVar1 = (int *)((longlong)plVar33 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar33 + 0x10))(plVar33);
              }
            }
          }
          else {
            *(longlong **)(puVar39 + 0xec) = plVar33;
            if (plVar31 != (longlong *)0x0) goto LAB_14112b4fb;
          }
LAB_14112b53c:
          LOCK();
          plVar31 = plVar33 + 1;
          *(int *)plVar31 = (int)*plVar31 + -1;
          UNLOCK();
          if ((int)*plVar31 == 0) {
            (**(code **)*plVar33)(plVar33);
            LOCK();
            piVar1 = (int *)((longlong)plVar33 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar33 + 0x10))(plVar33);
            }
          }
        }
        plVar33 = *(longlong **)(puVar39 + 0xea);
        uVar49 = *(uint *)((longlong)plVar33 + 0xc);
        if ((int)uVar49 < 1) {
          FUN_14182b35c(plVar33,1);
          plVar33 = *(longlong **)(puVar39 + 0xea);
          uVar49 = *(uint *)((longlong)plVar33 + 0xc);
        }
        iVar54 = (int)plVar33[1];
        *(uint *)(plVar33 + 1) = iVar54 + 1U;
        if (uVar49 < iVar54 + 1U) {
          FUN_14182a95c(plVar33,iVar54);
        }
        *(undefined8 *)(*plVar33 + (longlong)iVar54 * 8) = *(undefined8 *)(puVar39 + 0xbc);
      }
    }
    else {
      uVar49 = param_1[0xf8];
      uVar64 = (ulonglong)uVar49;
      if ((int)uVar49 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar64);
      }
      if ((int)param_1[0xf5] < (int)uVar49) {
        FUN_14182b678(puVar46,uVar49);
      }
      plVar33 = (longlong *)FUN_14001cc68(0x20,0x10);
      plVar33[1] = (longlong)&DAT_100000001;
      *plVar33 = (longlong)&PTR_FUN_14addcac0;
      plVar33[2] = 0;
      plVar33[3] = 0;
      if (plVar33 == (longlong *)0x0) {
        param_1[0xca] = 0x10;
        param_1[0xcb] = 0;
        plVar31 = *(longlong **)(param_1 + 0xcc);
        if (plVar31 != (longlong *)0x0) {
          param_1[0xcc] = 0;
          param_1[0xcd] = 0;
LAB_141129b3f:
          LOCK();
          plVar34 = plVar31 + 1;
          *(int *)plVar34 = (int)*plVar34 + -1;
          UNLOCK();
          if ((int)*plVar34 == 0) {
            (**(code **)*plVar31)(plVar31);
            LOCK();
            piVar1 = (int *)((longlong)plVar31 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar31 + 0x10))(plVar31);
            }
          }
          if (plVar33 != (longlong *)0x0) goto LAB_141129b82;
        }
      }
      else {
        LOCK();
        *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
        UNLOCK();
        *(longlong **)(param_1 + 0xca) = plVar33 + 2;
        plVar31 = *(longlong **)(param_1 + 0xcc);
        if (plVar33 == plVar31) {
          LOCK();
          plVar31 = plVar33 + 1;
          *(int *)plVar31 = (int)*plVar31 + -1;
          UNLOCK();
          if ((int)*plVar31 == 0) {
            (**(code **)*plVar33)(plVar33);
            LOCK();
            piVar1 = (int *)((longlong)plVar33 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar33 + 0x10))(plVar33);
            }
          }
        }
        else {
          *(longlong **)(param_1 + 0xcc) = plVar33;
          if (plVar31 != (longlong *)0x0) goto LAB_141129b3f;
        }
LAB_141129b82:
        LOCK();
        plVar31 = plVar33 + 1;
        *(int *)plVar31 = (int)*plVar31 + -1;
        UNLOCK();
        if ((int)*plVar31 == 0) {
          (**(code **)*plVar33)(plVar33);
          LOCK();
          piVar1 = (int *)((longlong)plVar33 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar33 + 0x10))(plVar33);
          }
        }
      }
      plVar33 = (longlong *)FUN_14001cc68(0x20,0x10);
      plVar33[1] = (longlong)&DAT_100000001;
      *plVar33 = (longlong)&PTR_FUN_14addcae0;
      plVar33[2] = 0;
      plVar33[3] = 0;
      if (plVar33 == (longlong *)0x0) {
        param_1[0xce] = 0x10;
        param_1[0xcf] = 0;
        plVar31 = *(longlong **)(param_1 + 0xd0);
        if (plVar31 != (longlong *)0x0) {
          param_1[0xd0] = 0;
          param_1[0xd1] = 0;
LAB_141129c12:
          LOCK();
          plVar34 = plVar31 + 1;
          *(int *)plVar34 = (int)*plVar34 + -1;
          UNLOCK();
          if ((int)*plVar34 == 0) {
            (**(code **)*plVar31)(plVar31);
            LOCK();
            piVar1 = (int *)((longlong)plVar31 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar31 + 0x10))(plVar31);
            }
          }
          if (plVar33 != (longlong *)0x0) goto LAB_141129c55;
        }
      }
      else {
        LOCK();
        *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
        UNLOCK();
        *(longlong **)(param_1 + 0xce) = plVar33 + 2;
        plVar31 = *(longlong **)(param_1 + 0xd0);
        if (plVar33 == plVar31) {
          LOCK();
          plVar31 = plVar33 + 1;
          *(int *)plVar31 = (int)*plVar31 + -1;
          UNLOCK();
          if ((int)*plVar31 == 0) {
            (**(code **)*plVar33)(plVar33);
            LOCK();
            piVar1 = (int *)((longlong)plVar33 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar33 + 0x10))(plVar33);
            }
          }
        }
        else {
          *(longlong **)(param_1 + 0xd0) = plVar33;
          if (plVar31 != (longlong *)0x0) goto LAB_141129c12;
        }
LAB_141129c55:
        LOCK();
        plVar31 = plVar33 + 1;
        *(int *)plVar31 = (int)*plVar31 + -1;
        UNLOCK();
        if ((int)*plVar31 == 0) {
          (**(code **)*plVar33)(plVar33);
          LOCK();
          piVar1 = (int *)((longlong)plVar33 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar33 + 0x10))(plVar33);
          }
        }
      }
      plVar33 = (longlong *)FUN_14001cc68(0x20,0x10);
      plVar33[1] = (longlong)&DAT_100000001;
      *plVar33 = (longlong)&PTR_FUN_14addcb00;
      plVar33[2] = 0;
      plVar33[3] = 0;
      if (plVar33 == (longlong *)0x0) {
        param_1[0xd2] = 0x10;
        param_1[0xd3] = 0;
        plVar31 = *(longlong **)(param_1 + 0xd4);
        if (plVar31 != (longlong *)0x0) {
          param_1[0xd4] = 0;
          param_1[0xd5] = 0;
LAB_141129ce5:
          LOCK();
          plVar34 = plVar31 + 1;
          *(int *)plVar34 = (int)*plVar34 + -1;
          UNLOCK();
          if ((int)*plVar34 == 0) {
            (**(code **)*plVar31)(plVar31);
            LOCK();
            piVar1 = (int *)((longlong)plVar31 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar31 + 0x10))(plVar31);
            }
          }
          if (plVar33 != (longlong *)0x0) goto LAB_141129d28;
        }
      }
      else {
        LOCK();
        *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
        UNLOCK();
        *(longlong **)(param_1 + 0xd2) = plVar33 + 2;
        plVar31 = *(longlong **)(param_1 + 0xd4);
        if (plVar33 == plVar31) {
          LOCK();
          plVar31 = plVar33 + 1;
          *(int *)plVar31 = (int)*plVar31 + -1;
          UNLOCK();
          if ((int)*plVar31 == 0) {
            (**(code **)*plVar33)(plVar33);
            LOCK();
            piVar1 = (int *)((longlong)plVar33 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar33 + 0x10))(plVar33);
            }
          }
        }
        else {
          *(longlong **)(param_1 + 0xd4) = plVar33;
          if (plVar31 != (longlong *)0x0) goto LAB_141129ce5;
        }
LAB_141129d28:
        LOCK();
        plVar31 = plVar33 + 1;
        *(int *)plVar31 = (int)*plVar31 + -1;
        UNLOCK();
        if ((int)*plVar31 == 0) {
          (**(code **)*plVar33)(plVar33);
          LOCK();
          piVar1 = (int *)((longlong)plVar33 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar33 + 0x10))(plVar33);
          }
        }
      }
      plVar33 = (longlong *)FUN_14001cc68(0x20,0x10);
      plVar33[1] = (longlong)&DAT_100000001;
      *plVar33 = (longlong)&PTR_FUN_14addcb20;
      plVar33[2] = 0;
      plVar33[3] = 0;
      if (plVar33 == (longlong *)0x0) {
        param_1[0xd6] = 0x10;
        param_1[0xd7] = 0;
        plVar31 = *(longlong **)(param_1 + 0xd8);
        if (plVar31 != (longlong *)0x0) {
          param_1[0xd8] = 0;
          param_1[0xd9] = 0;
LAB_141129db8:
          LOCK();
          plVar34 = plVar31 + 1;
          *(int *)plVar34 = (int)*plVar34 + -1;
          UNLOCK();
          if ((int)*plVar34 == 0) {
            (**(code **)*plVar31)(plVar31);
            LOCK();
            piVar1 = (int *)((longlong)plVar31 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar31 + 0x10))(plVar31);
            }
          }
          if (plVar33 != (longlong *)0x0) goto LAB_141129dfb;
        }
      }
      else {
        LOCK();
        *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
        UNLOCK();
        *(longlong **)(param_1 + 0xd6) = plVar33 + 2;
        plVar31 = *(longlong **)(param_1 + 0xd8);
        if (plVar33 == plVar31) {
          LOCK();
          plVar31 = plVar33 + 1;
          *(int *)plVar31 = (int)*plVar31 + -1;
          UNLOCK();
          if ((int)*plVar31 == 0) {
            (**(code **)*plVar33)(plVar33);
            LOCK();
            piVar1 = (int *)((longlong)plVar33 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar33 + 0x10))(plVar33);
            }
          }
        }
        else {
          *(longlong **)(param_1 + 0xd8) = plVar33;
          if (plVar31 != (longlong *)0x0) goto LAB_141129db8;
        }
LAB_141129dfb:
        LOCK();
        plVar31 = plVar33 + 1;
        *(int *)plVar31 = (int)*plVar31 + -1;
        UNLOCK();
        if ((int)*plVar31 == 0) {
          (**(code **)*plVar33)(plVar33);
          LOCK();
          piVar1 = (int *)((longlong)plVar33 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar33 + 0x10))(plVar33);
          }
        }
      }
      plVar33 = (longlong *)FUN_14001cc68(0x20);
      plVar33[1] = (longlong)&DAT_100000001;
      *plVar33 = (longlong)&PTR_FUN_14addcb40;
      plVar33[2] = 0;
      plVar33[3] = 0;
      if (plVar33 == (longlong *)0x0) {
        param_1[0xda] = 0x10;
        param_1[0xdb] = 0;
        plVar31 = *(longlong **)(param_1 + 0xdc);
        if (plVar31 != (longlong *)0x0) {
          param_1[0xdc] = 0;
          param_1[0xdd] = 0;
LAB_141129e8b:
          LOCK();
          plVar34 = plVar31 + 1;
          *(int *)plVar34 = (int)*plVar34 + -1;
          UNLOCK();
          if ((int)*plVar34 == 0) {
            (**(code **)*plVar31)(plVar31);
            LOCK();
            piVar1 = (int *)((longlong)plVar31 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar31 + 0x10))(plVar31);
            }
          }
          if (plVar33 != (longlong *)0x0) goto LAB_141129ece;
        }
      }
      else {
        LOCK();
        *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
        UNLOCK();
        *(longlong **)(param_1 + 0xda) = plVar33 + 2;
        plVar31 = *(longlong **)(param_1 + 0xdc);
        if (plVar33 == plVar31) {
          LOCK();
          plVar31 = plVar33 + 1;
          *(int *)plVar31 = (int)*plVar31 + -1;
          UNLOCK();
          if ((int)*plVar31 == 0) {
            (**(code **)*plVar33)(plVar33);
            LOCK();
            piVar1 = (int *)((longlong)plVar33 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar33 + 0x10))(plVar33);
            }
          }
        }
        else {
          *(longlong **)(param_1 + 0xdc) = plVar33;
          if (plVar31 != (longlong *)0x0) goto LAB_141129e8b;
        }
LAB_141129ece:
        LOCK();
        plVar31 = plVar33 + 1;
        *(int *)plVar31 = (int)*plVar31 + -1;
        UNLOCK();
        if ((int)*plVar31 == 0) {
          (**(code **)*plVar33)(plVar33);
          LOCK();
          piVar1 = (int *)((longlong)plVar33 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar33 + 0x10))(plVar33);
          }
        }
      }
      if (*(int *)(*(longlong *)local_3d0 + 0xc) < (int)uVar49) {
        FUN_14182ace4();
      }
      if (*(int *)(*(longlong *)(param_1 + 0xce) + 0xc) < (int)uVar49) {
        FUN_14182af82();
      }
      if (*(int *)(*(longlong *)(param_1 + 0xd2) + 0xc) < (int)uVar49) {
        FUN_14182b220();
      }
      if (*(int *)(*(longlong *)(param_1 + 0xd6) + 0xc) < (int)uVar49) {
        FUN_14182b35c();
      }
      uVar27 = param_1[0xfc];
      local_3d8 = uVar64;
      if (uVar27 - param_1[0x107] < uVar49) {
        if ((int)uVar27 < (int)uVar49) {
          uVar28 = uVar49 - uVar27;
          uVar57 = param_1[0xfd];
          uVar30 = uVar27;
          if ((int)uVar57 < (int)uVar49) {
            FUN_144727cd0(local_410);
            uVar30 = param_1[0xfc];
            uVar57 = param_1[0xfd];
          }
          param_1[0xfc] = uVar30 + uVar28;
          if (uVar57 - uVar30 < uVar28) {
            FUN_14482b872(local_410);
          }
          if ((int)uVar30 < (int)uVar49) {
            lVar37 = *(longlong *)local_410;
            uVar49 = param_1[0x107];
            puVar46 = (uint *)(lVar37 + uVar64 * 0x18 + -0x14);
            uVar41 = uVar64;
            do {
              iVar54 = (int)uVar41;
              if (uVar49 != 0) {
                *(int *)(lVar37 + (longlong)(int)param_1[0x106] * 0x18) = iVar54 + -1;
              }
              puVar46[-1] = 0xffffffff;
              if ((int)param_1[0x107] < 1) {
                uVar49 = 0xffffffff;
              }
              else {
                uVar49 = param_1[0x106];
              }
              uVar41 = uVar41 - 1;
              *puVar46 = uVar49;
              param_1[0x106] = iVar54 - 1;
              uVar49 = param_1[0x107] + 1;
              param_1[0x107] = uVar49;
              puVar46 = puVar46 + -6;
            } while ((longlong)(int)uVar30 < (longlong)uVar41);
          }
          if (uVar27 == 0) {
            puVar46 = param_1 + 0xfe;
            param_1[0x104] = uVar28;
            uVar49 = uVar28 + 0x1f >> 5;
            if (param_1[0x105] + 0x1f >> 5 < uVar49) {
              if ((0x80 < uVar28) || (*(longlong *)(local_450 + 0x102) != 0)) {
                uVar27 = 0;
                if (0x80 < uVar28) {
                  uVar27 = uVar49;
                }
                FUN_1446efa72(local_450 + 0x102,0,uVar27);
              }
              local_450[0x105] = uVar28 + 0x1f & 0xffffffe0;
              uVar64 = local_3d8;
              param_1 = local_450;
            }
            puVar39 = *(uint **)(param_1 + 0x102);
            if (*(uint **)(param_1 + 0x102) == (uint *)0x0) {
              puVar39 = puVar46;
            }
            if (uVar28 < 0x101) {
              uVar49 = uVar49 + (uVar49 == 0);
            }
            memset(puVar39,0,(ulonglong)(uVar49 << 2));
            uVar49 = param_1[0x104];
            uVar27 = uVar49 + 0x1f;
            if (-1 < (int)uVar49) {
              uVar27 = uVar49;
            }
            if ((int)uVar49 % 0x20 != 0) {
              if (*(uint **)(param_1 + 0x102) != (uint *)0x0) {
                puVar46 = *(uint **)(param_1 + 0x102);
              }
              bVar47 = -(char)((int)uVar49 % 0x20);
              puVar46[(int)uVar27 >> 5] =
                   (puVar46[(int)uVar27 >> 5] << (bVar47 & 0x1f)) >> (bVar47 & 0x1f);
            }
          }
          else if (-1 < (int)uVar28) {
            uVar66 = FUN_144a54ea4(param_1 + 0xfe,uVar28);
            FUN_1447c6044(param_1 + 0xfe,uVar66,uVar28);
          }
        }
        uVar49 = 1;
        if (3 < (uint)uVar64) {
          uVar49 = ((uint)uVar64 | 1) + 0xe;
          iVar54 = 0x1f;
          if (uVar49 != 0) {
            for (; uVar49 >> iVar54 == 0; iVar54 = iVar54 + -1) {
            }
          }
          uVar49 = 1 << ((byte)iVar54 & 0x1f);
        }
        if ((param_1[0x10c] == 0) || ((int)param_1[0x10c] < (int)uVar49)) {
          param_1[0x10c] = uVar49;
          FUN_1409f2e88(local_410);
        }
      }
      iVar54 = (int)uVar64;
      if ((longlong)(int)param_1[0xf8] != 0) {
        puVar53 = *(ulonglong **)(param_1 + 0xf6);
        puVar59 = puVar53 + (int)param_1[0xf8];
        local_3c0 = param_1 + 0xfe;
        local_3b0 = param_1 + 0x108;
        local_3e0 = puVar59;
        do {
          uVar41 = *puVar53;
          if ((uVar41 >> 0x20 == 0) || (uVar49 = (uint)uVar41, (int)uVar49 < 0)) {
LAB_14112abd2:
            plVar33 = (longlong *)0x0;
          }
          else {
            plVar33 = (longlong *)0x0;
            if ((int)uVar49 < DAT_14c9647dc) {
              puVar43 = (undefined8 *)
                        ((ulonglong)((uVar49 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar49 >> 0xd & 0x3fff8)));
              if (((puVar43 == (undefined8 *)0x0) ||
                  (*(int *)(puVar43 + 2) != (int)(uVar41 >> 0x20))) ||
                 ((*(uint *)(puVar43 + 1) & 0x10200000) != 0)) goto LAB_14112abd2;
              plVar33 = (longlong *)*puVar43;
            }
          }
          lVar37 = (**(code **)(*plVar33 + 0x388))(plVar33);
          if ((-1 < (int)param_1[199]) && ((int)param_1[199] < *(int *)(lVar37 + 8))) {
            plVar31 = (longlong *)(**(code **)(*plVar33 + 0x388))(plVar33);
            pRVar6 = *(PSRWLOCK *)(*plVar31 + (longlong)(int)param_1[199] * 8);
            if (pRVar6 != (PSRWLOCK)0x0) {
              LOCK();
              *(int *)&pRVar6[1].Ptr = *(int *)&pRVar6[1].Ptr + 1;
              UNLOCK();
            }
            uVar49 = param_1[0xf4];
            param_1[0xf4] = uVar49 + 1;
            local_428 = puVar53;
            if (param_1[0xf5] < uVar49 + 1) {
              FUN_14819ea88(local_3a0,uVar49);
            }
            *(PSRWLOCK *)(*(longlong *)(param_1 + 0xf2) + (longlong)(int)uVar49 * 8) = pRVar6;
            local_3f0 = pRVar6;
            puVar43 = (undefined8 *)FUN_14001cc68(0x180);
            memset(puVar43,0,0x180);
            pRVar6 = local_3f0;
            *(undefined4 *)(puVar43 + 1) = 0xffffffff;
            *(undefined2 *)((longlong)puVar43 + 0xc) = 0x105;
            *puVar43 = &PTR_FUN_14adda950;
            *(undefined4 *)(puVar43 + 8) = 0;
            puVar43[10] = 0;
            puVar43[0xb] = 0;
            puVar43[2] = 0;
            puVar43[3] = 0;
            puVar43[4] = 0;
            puVar43[5] = 0;
            *(undefined8 *)((longlong)puVar43 + 0x29) = 0;
            *(undefined8 *)((longlong)puVar43 + 0x31) = 0;
            puVar43[9] = &PTR_FUN_14a355380;
            puVar43[0xe] = 0;
            puVar43[0xf] = 0;
            puVar43[0xd] = &PTR_FUN_14aa68d10;
            puVar43[0x12] = 0;
            puVar43[0x13] = 0;
            puVar43[0x11] = &PTR_FUN_14aa68d10;
            puVar43[0x15] = 0;
            puVar43[0x16] = 0;
            puVar43[0x17] = 0;
            puVar43[0x18] = 0;
            puVar43[0x19] = 0;
            puVar43[0x1a] = 0;
            puVar43[0x1b] = 0;
            *(undefined4 *)(puVar43 + 0x1c) = 0xffffffff;
            puVar43[0x1e] = 0;
            puVar43[0x1f] = 0;
            puVar43[0x1d] = &PTR_FUN_14a3d46e0;
            puVar43[0x21] = 0;
            puVar43[0x22] = 0;
            *(undefined8 *)((longlong)puVar43 + 0x112) = 0;
            *(undefined8 *)((longlong)puVar43 + 0x11a) = 0;
            puVar43[0x25] = 0;
            puVar43[0x26] = 0;
            puVar43[0x27] = 0;
            puVar43[0x28] = 0;
            puVar43[0x29] = 0;
            puVar43[0x2a] = 0;
            *(undefined4 *)(puVar43 + 0x2b) = 0xffffffff;
            puVar43[0x2c] = 0;
            puVar43[0x2d] = 0;
            *(undefined8 *)((longlong)puVar43 + 0x16d) = 0;
            *(undefined8 *)((longlong)puVar43 + 0x175) = 0;
            uVar49 = param_1[199];
            lVar37 = plVar33[0x96];
            *(uint *)(puVar43 + 0x2b) = uVar49;
            puVar43[0x2c] = 0;
            puVar43[0x2e] = 0;
            puVar43[0x1b] = 0;
            *(undefined4 *)(puVar43 + 0x1f) = 0;
            puVar43[0x23] = 0;
            local_408 = plVar33;
            if (param_1 != (uint *)0x0) {
              puVar43[2] = *(undefined8 *)param_1;
              puVar43[0x2d] = lVar37 + (longlong)(int)uVar49 * 0x48;
              *(byte *)((longlong)puVar43 + 0x17c) = (byte)param_1[0xb9] >> 2 & 1;
              puVar43[0x2c] = local_3f0;
              iVar54 = (**(code **)(*(longlong *)local_3f0[5].Ptr + 0x50))();
              *(int *)(puVar43 + 0x2e) = iVar54 / 3;
              *(undefined4 *)((longlong)puVar43 + 0x174) =
                   *(undefined4 *)((longlong)&pRVar6[0x1d].Ptr + 4);
              if ((*(char *)((longlong)puVar43 + 0x17c) == '\x01') &&
                 (*(int *)(puVar43[0x2d] + 0x10) != iVar54 / 3)) {
                *(undefined1 *)((longlong)puVar43 + 0x17c) = 0;
              }
              *(uint *)(puVar43 + 0x1b) = param_1[0xa4];
              *(uint *)((longlong)puVar43 + 0xdc) = param_1[0xa5];
              *(uint *)(puVar43 + 0x1c) = param_1[0xa3];
              uVar49 = param_1[0xa8];
              if ((int)uVar49 < 0) goto LAB_14112b937;
              puVar59 = puVar43 + 0x1e;
              if (*(int *)((longlong)puVar43 + 0xfc) < (int)uVar49) {
                FUN_1404d5fcc(puVar59);
                uVar49 = param_1[0xa8];
              }
              if (uVar49 != 0) {
                lVar37 = *(longlong *)(local_450 + 0xa6);
                lVar50 = 0;
                do {
                  uVar5 = *(undefined2 *)(lVar37 + lVar50);
                  iVar54 = *(int *)(puVar43 + 0x1f);
                  *(uint *)(puVar43 + 0x1f) = iVar54 + 1U;
                  if (*(uint *)((longlong)puVar43 + 0xfc) < iVar54 + 1U) {
                    FUN_141794766(puVar59,iVar54);
                  }
                  uVar64 = *puVar59;
                  uVar41 = ((longlong)uVar64 >> 0x18) + (longlong)puVar59;
                  if ((uVar64 & 1) == 0) {
                    uVar41 = uVar64;
                  }
                  *(undefined2 *)(uVar41 + (longlong)iVar54 * 2) = uVar5;
                  lVar50 = lVar50 + 2;
                } while ((longlong)(int)uVar49 * 2 != lVar50);
              }
              param_1 = local_450;
              *(uint *)(puVar43 + 0x23) = local_450[0xac];
              *(uint *)((longlong)puVar43 + 0x11c) = local_450[0xae];
              uVar49 = local_450[0x2a];
              if (0 < (longlong)(int)uVar49) {
                if ((local_450[0x15] == 0) || (uVar27 = *local_3e8, (int)uVar27 < 0)) {
LAB_14112abed:
                  uVar64 = 0;
                }
                else {
                  uVar64 = 0;
                  if ((int)uVar27 < DAT_14c9647dc) {
                    puVar59 = (ulonglong *)
                              ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8));
                    if (((puVar59 == (ulonglong *)0x0) || ((uint)puVar59[2] != local_450[0x15])) ||
                       ((puVar59[1] & 0x10200000) != 0)) goto LAB_14112abed;
                    uVar64 = *puVar59;
                  }
                }
                local_3c8 = puVar43 + 10;
                puVar59 = puVar43 + 0xe;
                puVar53 = puVar43 + 0x12;
                *(undefined1 *)(puVar43 + 7) = 1;
                *(undefined8 *)((longlong)puVar43 + 0x3c) = 0;
                uVar41 = *local_3f8;
                lVar37 = 0;
                bVar47 = 1;
                iVar61 = 0;
                iVar54 = 0;
                do {
                  lVar50 = *(longlong *)(uVar64 + 0x4c0);
                  lVar52 = (longlong)*(int *)(uVar41 + lVar37) * 0x78;
                  iVar54 = iVar54 + *(int *)(lVar50 + 8 + lVar52);
                  *(int *)((longlong)puVar43 + 0x3c) = iVar54;
                  iVar61 = iVar61 + *(int *)(lVar50 + 0x18 + lVar52);
                  *(int *)(puVar43 + 8) = iVar61;
                  bVar47 = bVar47 & *(int *)(lVar50 + 0x40 + lVar52) ==
                                    *(int *)(lVar50 + 8 + lVar52);
                  *(byte *)(puVar43 + 7) = bVar47;
                  lVar37 = lVar37 + 4;
                } while ((longlong)(int)uVar49 * 4 != lVar37);
                uVar49 = FUN_143a60dfd();
                iVar54 = *(int *)(puVar43 + 0xb);
                *(uint *)(puVar43 + 0xb) = iVar54 + uVar49;
                if ((uint)(*(int *)((longlong)puVar43 + 0x5c) - iVar54) < uVar49) {
                  FUN_14042c7ac(local_3c8);
                }
                uVar49 = *(uint *)((longlong)puVar43 + 0x3c);
                if ((int)uVar49 < 0) goto LAB_14112b937;
                if (*(int *)((longlong)puVar43 + 0x7c) < (int)uVar49) {
                  FUN_141067c74(puVar59);
                }
                uVar49 = *(uint *)(puVar43 + 8);
                if ((int)uVar49 < 0) goto LAB_14112b937;
                if (*(int *)((longlong)puVar43 + 0x9c) < (int)uVar49) {
                  FUN_141067c74(puVar53);
                }
                if ((longlong)(int)param_1[0x2a] != 0) {
                  puVar40 = *(ulonglong **)(param_1 + 0x28);
                  local_418 = (ulonglong *)((longlong)puVar40 + (longlong)(int)param_1[0x2a] * 4);
                  iVar54 = 0;
                  local_3b8 = 0;
                  local_430 = uVar64;
                  do {
                    local_448 = (longlong *)
                                ((longlong)(int)(uint)*puVar40 * 0x78 +
                                *(longlong *)(local_430 + 0x4c0));
                    local_440 = puVar40;
                    if (*(char *)(puVar43 + 7) == '\x01') {
                      uVar64 = *local_3c8;
                      uVar41 = ((longlong)uVar64 >> 0x18) + (longlong)local_3c8;
                      if ((uVar64 & 1) == 0) {
                        uVar41 = uVar64;
                      }
                      iVar29 = (int)local_3b8;
                      FUN_1481904c6(uVar41 + (longlong)iVar29 * 4,local_448 + 6,iVar54);
                      iVar61 = FUN_143a60dfd((int)local_448[8]);
                      local_3b8 = (ulonglong)(uint)(iVar29 + iVar61);
                    }
                    local_420 = (uint *)CONCAT44(local_420._4_4_,iVar54);
                    lVar37 = local_448[1];
                    plVar33 = local_448;
                    if ((longlong)(int)lVar37 != 0) {
                      lVar50 = *local_448;
                      lVar52 = 0;
                      do {
                        iVar54 = *(int *)(lVar50 + lVar52);
                        iVar61 = *(int *)(puVar43 + 0xf);
                        *(uint *)(puVar43 + 0xf) = iVar61 + 1U;
                        if (*(uint *)((longlong)puVar43 + 0x7c) < iVar61 + 1U) {
                          FUN_1474381b8(puVar59,iVar61);
                          plVar33 = local_448;
                        }
                        uVar64 = *puVar59;
                        uVar41 = ((longlong)uVar64 >> 0x18) + (longlong)puVar59;
                        if ((uVar64 & 1) == 0) {
                          uVar41 = uVar64;
                        }
                        *(int *)(uVar41 + (longlong)iVar61 * 4) = iVar54 / 3;
                        lVar52 = lVar52 + 4;
                      } while ((longlong)(int)lVar37 * 4 != lVar52);
                    }
                    lVar37 = plVar33[3];
                    if ((longlong)(int)lVar37 != 0) {
                      lVar50 = plVar33[2];
                      lVar52 = 0;
                      do {
                        uVar66 = *(undefined4 *)(lVar50 + lVar52);
                        iVar54 = *(int *)(puVar43 + 0x13);
                        *(uint *)(puVar43 + 0x13) = iVar54 + 1U;
                        if (*(uint *)((longlong)puVar43 + 0x9c) < iVar54 + 1U) {
                          FUN_1474381b8(puVar53,iVar54);
                          plVar33 = local_448;
                        }
                        uVar64 = *puVar53;
                        uVar41 = ((longlong)uVar64 >> 0x18) + (longlong)puVar53;
                        if ((uVar64 & 1) == 0) {
                          uVar41 = uVar64;
                        }
                        *(undefined4 *)(uVar41 + (longlong)iVar54 * 4) = uVar66;
                        lVar52 = lVar52 + 4;
                      } while ((longlong)(int)lVar37 * 4 != lVar52);
                    }
                    iVar54 = (int)local_420 + (int)plVar33[1];
                    puVar40 = (ulonglong *)((longlong)local_440 + 4);
                    param_1 = local_450;
                  } while (puVar40 != local_418);
                }
              }
            }
            FUN_140308182(puVar43,0);
            plVar33 = *(longlong **)local_3d0;
            iVar54 = (int)plVar33[1];
            *(uint *)(plVar33 + 1) = iVar54 + 1U;
            if (*(uint *)((longlong)plVar33 + 0xc) < iVar54 + 1U) {
              FUN_14182ae20(plVar33,iVar54);
            }
            *(undefined8 **)(*plVar33 + (longlong)iVar54 * 8) = puVar43;
            puVar43 = (undefined8 *)FUN_14001cc68(0x68,0x10);
            *(undefined4 *)(puVar43 + 1) = 0xffffffff;
            *(undefined2 *)((longlong)puVar43 + 0xc) = 0x105;
            *(undefined1 *)((longlong)puVar43 + 0xe) = 0;
            *puVar43 = &PTR_FUN_14addaac0;
            puVar43[2] = 0;
            puVar43[4] = 0;
            puVar43[5] = 0;
            puVar43[6] = 0;
            puVar43[7] = 0;
            puVar43[8] = 0;
            puVar43[9] = 0;
            puVar43[10] = 0;
            puVar43[0xb] = 0;
            *(undefined4 *)((longlong)puVar43 + 0x5f) = 0;
            uVar49 = param_1[0xac];
            *(undefined4 *)(puVar43 + 3) = 0;
            iVar54 = *(int *)&local_3f0[3].Ptr;
            if ((longlong)iVar54 != 0) {
              pvVar7 = local_3f0[2].Ptr;
              lVar37 = 0;
              iVar61 = 0;
              do {
                iVar61 = iVar61 + *(int *)((longlong)pvVar7 + lVar37 + 0x40);
                *(int *)(puVar43 + 3) = iVar61;
                lVar37 = lVar37 + 0xf8;
              } while ((longlong)iVar54 * 0xf8 - lVar37 != 0);
            }
            *(int *)(puVar43 + 2) = (int)local_400[5];
            *(uint *)((longlong)puVar43 + 0x14) = uVar49;
            FUN_140308182(puVar43,0);
            uVar64 = local_3d8;
            plVar33 = *(longlong **)(param_1 + 0xce);
            iVar54 = (int)plVar33[1];
            *(uint *)(plVar33 + 1) = iVar54 + 1U;
            if (*(uint *)((longlong)plVar33 + 0xc) < iVar54 + 1U) {
              FUN_14182b0be(plVar33,iVar54);
            }
            *(undefined8 **)(*plVar33 + (longlong)iVar54 * 8) = puVar43;
            if (local_408 == (longlong *)0x0) {
              uVar49 = 0;
              uVar41 = 0;
            }
            else {
              uVar49 = *(uint *)((longlong)local_408 + 0xc);
              if ((int)uVar49 < DAT_14c9647dc) {
                lVar37 = (ulonglong)((uVar49 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar49 >> 0x10) * 8);
              }
              else {
                lVar37 = 0;
              }
              uVar41 = (ulonglong)*(uint *)(lVar37 + 0x10);
              if (*(uint *)(lVar37 + 0x10) == 0) {
                LOCK();
                iVar54 = DAT_14c964868 + 1;
                UNLOCK();
                uVar27 = DAT_14c964868 + 1;
                bVar65 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar54;
                if (bVar65) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar27);
                }
                LOCK();
                uVar57 = *(uint *)(lVar37 + 0x10);
                bVar65 = uVar57 == 0;
                if (bVar65) {
                  *(uint *)(lVar37 + 0x10) = uVar27;
                  uVar57 = 0;
                }
                UNLOCK();
                if (bVar65) {
                  uVar57 = uVar27;
                }
                uVar41 = (ulonglong)uVar57;
              }
            }
            if (param_1[0x107] == 0) {
              uVar27 = param_1[0xfc];
              param_1[0xfc] = uVar27 + 1;
              if (param_1[0xfd] == uVar27) {
                FUN_14482b872(local_410,uVar27);
              }
              puVar46 = local_3c0;
              lVar37 = (longlong)(int)uVar27;
              iVar54 = FUN_144a54ea4(local_3c0,1);
              puVar39 = *(uint **)(local_450 + 0x102);
              if (*(uint **)(local_450 + 0x102) == (uint *)0x0) {
                puVar39 = puVar46;
              }
              iVar61 = iVar54 + 0x1f;
              if (-1 < iVar54) {
                iVar61 = iVar54;
              }
              bVar47 = (byte)iVar54 & 0x1f;
              puVar39[iVar61 >> 5] =
                   puVar39[iVar61 >> 5] & (-2 << bVar47 | 0xfffffffeU >> 0x20 - bVar47);
              uVar64 = local_3d8;
              param_1 = local_450;
            }
            else {
              uVar27 = param_1[0x106];
              lVar37 = (longlong)(int)uVar27;
              uVar57 = *(uint *)(*(longlong *)(param_1 + 0xfa) + 4 + lVar37 * 0x18);
              param_1[0x106] = uVar57;
              uVar30 = param_1[0x107] - 1;
              param_1[0x107] = uVar30;
              if (uVar30 != 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0xfa) + (longlong)(int)uVar57 * 0x18) =
                     0xffffffff;
              }
            }
            puVar59 = local_3e0;
            puVar53 = local_428;
            puVar46 = *(uint **)(param_1 + 0x102);
            if (*(uint **)(param_1 + 0x102) == (uint *)0x0) {
              puVar46 = local_3c0;
            }
            uVar57 = uVar27 + 0x1f;
            if (-1 < (int)uVar27) {
              uVar57 = uVar27;
            }
            puVar46[(int)uVar57 >> 5] = puVar46[(int)uVar57 >> 5] | 1 << ((byte)uVar27 & 0x1f);
            puVar60 = (undefined8 *)(*(longlong *)(param_1 + 0xfa) + lVar37 * 0x18);
            *puVar60 = puVar43;
            puVar60[1] = (ulonglong)uVar49 | uVar41 << 0x20;
            *(undefined4 *)(puVar60 + 2) = 0xffffffff;
            uVar49 = ((uint)((ulonglong)puVar43 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar43 >> 4))
                     * -0x7a143595;
            uVar49 = (uVar49 >> 0xd ^ uVar49) * -0x3d4d51cb;
            uVar49 = uVar49 >> 0x10 ^ uVar49;
            uVar57 = param_1[0xfc] - param_1[0x107];
            if ((uVar57 != 0) && (uVar57 != 1)) {
              puVar46 = *(uint **)(param_1 + 0x10a);
              if (*(uint **)(param_1 + 0x10a) == (uint *)0x0) {
                puVar46 = local_3b0;
              }
              uVar30 = puVar46[param_1[0x10c] - 1 & uVar49];
              if (uVar30 != 0xffffffff) {
                do {
                  plVar33 = (longlong *)(*(longlong *)local_410 + (longlong)(int)uVar30 * 0x18);
                  if ((undefined8 *)*plVar33 == puVar43) {
                    uVar66 = *(undefined4 *)((longlong)puVar60 + 4);
                    uVar67 = *(undefined4 *)(puVar60 + 1);
                    uVar68 = *(undefined4 *)((longlong)puVar60 + 0xc);
                    *(undefined4 *)plVar33 = *(undefined4 *)puVar60;
                    *(undefined4 *)((longlong)plVar33 + 4) = uVar66;
                    *(undefined4 *)(plVar33 + 1) = uVar67;
                    *(undefined4 *)((longlong)plVar33 + 0xc) = uVar68;
                    FUN_14819eb0e(local_410,uVar27);
                    puVar59 = local_3e0;
                    puVar53 = local_428;
                    goto LAB_14112ab28;
                  }
                  uVar30 = *(uint *)(plVar33 + 2);
                } while (uVar30 != 0xffffffff);
              }
            }
            if (uVar57 < 4) {
              uVar30 = 1;
            }
            else {
              uVar41 = (ulonglong)(uVar57 & 0xfffffffe) + 0xf;
              lVar37 = 0x3f;
              if (uVar41 != 0) {
                for (; uVar41 >> lVar37 == 0; lVar37 = lVar37 + -1) {
                }
              }
              uVar30 = 1 << ((byte)lVar37 & 0x1f);
            }
            if (((int)uVar57 < 1) || ((int)uVar30 <= (int)param_1[0x10c])) {
              uVar49 = param_1[0x10c] - 1 & uVar49;
              *(uint *)((longlong)puVar60 + 0x14) = uVar49;
              puVar46 = *(uint **)(param_1 + 0x10a);
              if (*(uint **)(param_1 + 0x10a) == (uint *)0x0) {
                puVar46 = local_3b0;
              }
              *(uint *)(puVar60 + 2) =
                   puVar46[(longlong)(int)param_1[0x10c] - 1U & (longlong)(int)uVar49];
              puVar46 = *(uint **)(param_1 + 0x10a);
              if (*(uint **)(param_1 + 0x10a) == (uint *)0x0) {
                puVar46 = local_3b0;
              }
              puVar46[(longlong)(int)param_1[0x10c] - 1U & (longlong)(int)uVar49] = uVar27;
            }
            else {
              param_1[0x10c] = uVar30;
              FUN_1409f2e88(local_410);
            }
LAB_14112ab28:
            lVar37 = FUN_1417c143e(local_438,param_1[199],local_408);
            if (lVar37 != 0) {
              plVar33 = *(longlong **)(param_1 + 0xd2);
              iVar54 = (int)plVar33[1];
              *(uint *)(plVar33 + 1) = iVar54 + 1U;
              if (*(uint *)((longlong)plVar33 + 0xc) < iVar54 + 1U) {
                FUN_14182a7fa(plVar33,iVar54);
              }
              *(longlong *)(*plVar33 + (longlong)iVar54 * 8) = lVar37;
              plVar33 = *(longlong **)(param_1 + 0xd6);
              iVar54 = (int)plVar33[1];
              *(uint *)(plVar33 + 1) = iVar54 + 1U;
              if (*(uint *)((longlong)plVar33 + 0xc) < iVar54 + 1U) {
                FUN_14182a95c(plVar33,iVar54);
              }
              *(longlong *)(*plVar33 + (longlong)iVar54 * 8) = lVar37 + 0x48;
              puVar59 = local_3e0;
              puVar53 = local_428;
            }
          }
          iVar54 = (int)uVar64;
          puVar53 = puVar53 + 1;
        } while (puVar53 != puVar59);
      }
      if (*(int *)(*(longlong *)(param_1 + 0xda) + 0xc) < iVar54) {
        FUN_14482f6fa(*(longlong *)(param_1 + 0xda),iVar54);
      }
      puVar46 = local_450;
      if (DAT_14c7628a4 == 0) {
        uVar49 = param_1[0xf8];
        if ((longlong)(int)uVar49 != 0) {
          lVar37 = *(longlong *)(local_450 + 0xf6);
          lVar50 = 0;
          do {
            puVar46 = local_450;
            uVar64 = *(ulonglong *)(lVar37 + lVar50);
            if (uVar64 >> 0x20 == 0) {
              plVar33 = (longlong *)0x0;
            }
            else {
              uVar27 = (uint)uVar64;
              if ((int)uVar27 < 0) {
LAB_14112b106:
                plVar33 = (longlong *)0x0;
              }
              else {
                plVar33 = (longlong *)0x0;
                if ((int)uVar27 < DAT_14c9647dc) {
                  puVar43 = (undefined8 *)
                            ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0xd & 0x3fff8)));
                  if (((puVar43 == (undefined8 *)0x0) ||
                      (*(int *)(puVar43 + 2) != (int)(uVar64 >> 0x20))) ||
                     ((*(uint *)(puVar43 + 1) & 0x10200000) != 0)) goto LAB_14112b106;
                  plVar33 = (longlong *)*puVar43;
                }
              }
            }
            lVar52 = (**(code **)(*plVar33 + 0x388))();
            uVar27 = puVar46[199];
            if ((-1 < (int)uVar27) && ((int)uVar27 < *(int *)(lVar52 + 8))) {
              plVar33 = *(longlong **)(puVar46 + 0xda);
              iVar61 = (int)plVar33[1];
              *(uint *)(plVar33 + 1) = iVar61 + 1U;
              if (*(uint *)((longlong)plVar33 + 0xc) < iVar61 + 1U) {
                FUN_14475e4ac(plVar33,iVar61);
              }
              *(float *)(*plVar33 + (longlong)iVar61 * 4) = 1.0 / (float)iVar54;
            }
            lVar50 = lVar50 + 8;
          } while ((longlong)(int)uVar49 * 8 != lVar50);
        }
      }
      else {
        uVar49 = param_1[0xf8];
        if ((longlong)(int)uVar49 != 0) {
          lVar37 = *(longlong *)(local_450 + 0xf6);
          fVar79 = 0.0;
          lVar50 = 0;
          do {
            uVar64 = *(ulonglong *)(lVar37 + lVar50);
            uVar27 = (uint)uVar64;
            iVar54 = (int)(uVar64 >> 0x20);
            if ((uVar64 >> 0x20 == 0) || ((int)uVar27 < 0)) {
LAB_14112ae87:
              plVar33 = (longlong *)0x0;
            }
            else {
              plVar33 = (longlong *)0x0;
              if ((int)uVar27 < DAT_14c9647dc) {
                puVar43 = (undefined8 *)
                          ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                          *(longlong *)
                           (DAT_14c9647c8 + (ulonglong)((uint)(uVar64 >> 0xd) & 0x3fff8)));
                if (((puVar43 == (undefined8 *)0x0) || (*(int *)(puVar43 + 2) != iVar54)) ||
                   ((*(uint *)(puVar43 + 1) & 0x10200000) != 0)) goto LAB_14112ae87;
                plVar33 = (longlong *)*puVar43;
              }
            }
            lVar52 = (**(code **)(*plVar33 + 0x388))();
            uVar57 = puVar46[199];
            if ((-1 < (int)uVar57) && ((int)uVar57 < *(int *)(lVar52 + 8))) {
              if ((uVar64 >> 0x20 == 0) || ((int)uVar27 < 0)) {
LAB_14112ae8e:
                plVar33 = (longlong *)0x0;
              }
              else {
                plVar33 = (longlong *)0x0;
                if ((int)uVar27 < DAT_14c9647dc) {
                  puVar43 = (undefined8 *)
                            ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0xd & 0x3fff8)));
                  if (((puVar43 == (undefined8 *)0x0) || (*(int *)(puVar43 + 2) != iVar54)) ||
                     ((*(uint *)(puVar43 + 1) & 0x10200000) != 0)) goto LAB_14112ae8e;
                  plVar33 = (longlong *)*puVar43;
                }
              }
              (**(code **)(*plVar33 + 0x3d0))(plVar33,&local_318);
              fVar79 = (float)((double)fVar79 + local_2e8);
            }
            lVar50 = lVar50 + 8;
          } while ((longlong)(int)uVar49 * 8 != lVar50);
          lVar37 = (longlong)(int)puVar46[0xf8];
          if (lVar37 != 0) {
            lVar50 = *(longlong *)(local_450 + 0xf6);
            lVar52 = 0;
            do {
              uVar64 = *(ulonglong *)(lVar50 + lVar52);
              uVar49 = (uint)uVar64;
              iVar54 = (int)(uVar64 >> 0x20);
              if ((uVar64 >> 0x20 == 0) || ((int)uVar49 < 0)) {
LAB_14112b009:
                plVar33 = (longlong *)0x0;
              }
              else {
                plVar33 = (longlong *)0x0;
                if ((int)uVar49 < DAT_14c9647dc) {
                  puVar43 = (undefined8 *)
                            ((ulonglong)((uVar49 & 0xffff) * 0x18) +
                            *(longlong *)
                             (DAT_14c9647c8 + (ulonglong)((uint)(uVar64 >> 0xd) & 0x3fff8)));
                  if (((puVar43 == (undefined8 *)0x0) || (*(int *)(puVar43 + 2) != iVar54)) ||
                     ((*(uint *)(puVar43 + 1) & 0x10200000) != 0)) goto LAB_14112b009;
                  plVar33 = (longlong *)*puVar43;
                }
              }
              lVar36 = (**(code **)(*plVar33 + 0x388))();
              if ((-1 < (int)local_450[199]) && ((int)local_450[199] < *(int *)(lVar36 + 8))) {
                plVar33 = *(longlong **)(local_450 + 0xda);
                if ((uVar64 >> 0x20 == 0) || ((int)uVar49 < 0)) {
LAB_14112b010:
                  plVar31 = (longlong *)0x0;
                }
                else {
                  plVar31 = (longlong *)0x0;
                  if ((int)uVar49 < DAT_14c9647dc) {
                    puVar43 = (undefined8 *)
                              ((ulonglong)((uVar49 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar49 >> 0xd & 0x3fff8)));
                    if (((puVar43 == (undefined8 *)0x0) || (*(int *)(puVar43 + 2) != iVar54)) ||
                       ((*(uint *)(puVar43 + 1) & 0x10200000) != 0)) goto LAB_14112b010;
                    plVar31 = (longlong *)*puVar43;
                  }
                }
                (**(code **)(*plVar31 + 0x3d0))(plVar31,&local_318);
                dVar71 = local_2e8;
                iVar54 = (int)plVar33[1];
                *(uint *)(plVar33 + 1) = iVar54 + 1U;
                if (*(uint *)((longlong)plVar33 + 0xc) < iVar54 + 1U) {
                  FUN_14475e4ac(plVar33,iVar54);
                }
                *(float *)(*plVar33 + (longlong)iVar54 * 4) = (float)(dVar71 / (double)fVar79);
              }
              lVar52 = lVar52 + 8;
            } while (lVar37 * 8 != lVar52);
          }
        }
      }
      FUN_143a6611e(local_3a8,local_3d0);
    }
  }
  uVar45 = 1;
LAB_14112b59e:
  if ((local_f0 ^ (ulonglong)auStack_4c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar45;
}



// FUNCTION 14112c0b0 FUN_14112c0b0 body=9 status=ok
// SIG undefined FUN_14112c0b0(void)

void FUN_14112c0b0(longlong param_1)

{
  FUN_1424ea330(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 14112c0c2 FUN_14112c0c2 body=215 status=ok
// SIG undefined FUN_14112c0c2(void)

undefined8 * FUN_14112c0c2(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14b3ee6e0;
  local_58 = DAT_14cb72618;
  FUN_1446dcdd4(local_50);
  if (DAT_14c947fe0 == 0) {
    lVar1 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar1);
    DAT_14c947fe0 = lVar1;
  }
  FUN_140045924(DAT_14c947fe0,param_1 + 1,local_50,1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  param_1[2] = 0;
  param_1[3] = 0x40a0000000000000;
  *(undefined1 *)(param_1 + 4) = 0;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14112c19a FUN_14112c19a body=481 status=ok
// SIG undefined FUN_14112c19a(void)

ulonglong FUN_14112c19a(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar1 = (int)param_2[1];
  uVar3 = 0;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    lVar6 = 0;
    uVar3 = 0;
    do {
      uVar5 = ((uint)(0x19 < (ushort)puVar2[lVar6] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar6]) -
              0x20;
      uVar7 = (uint)(uVar3 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar3 ^ uVar5) & 0xff) * 4);
      uVar3 = (ulonglong)
              (uVar7 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar5 >> 8 & 0xff) * 4));
      lVar6 = lVar6 + 1;
    } while (iVar4 != (int)lVar6);
  }
  iVar1 = FUN_140c4443c(param_1,uVar3,param_2);
  if (iVar1 == -1) {
LAB_14112c266:
    local_58 = param_2;
    FUN_140c5653a(param_1,&local_4c,&local_58,0);
    lVar6 = *param_1 + (longlong)local_4c * 0x40;
    plVar8 = (longlong *)(lVar6 + 0x10);
    *(undefined4 *)(lVar6 + 0x20) = 1;
    *(undefined8 *)(lVar6 + 0x18) = 1;
    lVar6 = param_1[0xb];
    param_1[0xb] = lVar6 + 1;
    if (param_1[0xc] == lVar6) {
      FUN_14112c458(param_1 + 10,lVar6);
    }
    *(undefined1 *)(param_1[10] + lVar6) = 0;
    *plVar8 = lVar6;
  }
  else {
    lVar6 = *param_1 + (longlong)iVar1 * 0x40;
    if (lVar6 == 0) goto LAB_14112c266;
    uVar3 = 0x100000;
    if (*(int *)(lVar6 + 0x20) != 1) goto LAB_14112c2f4;
    plVar8 = (longlong *)(*param_1 + (longlong)iVar1 * 0x40 + 0x10);
    uVar3 = 0x400000;
    if ((*plVar8 < 0) || (param_1[0xb] <= *plVar8)) goto LAB_14112c2f4;
  }
  *(undefined4 *)((longlong)plVar8 + 0x14) = param_4;
  uVar3 = FUN_14112c37c(param_1,plVar8,local_60);
  if ((uVar3 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_14112c2f4:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14112c37c FUN_14112c37c body=218 status=ok
// SIG undefined FUN_14112c37c(void)

undefined8 FUN_14112c37c(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else if ((int)param_2[2] == 1) {
    if (param_2[1] == 1) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        uVar1 = 1;
        FUN_140c54cf0(&local_48,param_3,1);
        *(undefined4 *)(param_2 + 3) = local_48;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_44;
        *(undefined4 *)(param_2 + 4) = uStack_40;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_3c;
        *(undefined1 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
      }
    }
    else {
      uVar1 = 0x200000;
    }
  }
  else {
    uVar1 = 0x100000;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14112c458 FUN_14112c458 body=355 status=ok
// SIG undefined FUN_14112c458(void)

void FUN_14112c458(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = *(ulonglong *)(param_1 + 8);
  if ((longlong)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar4 = 4;
    if (4 < uVar3) {
      uVar4 = uVar3;
    }
  }
  else {
    uVar4 = (uVar3 * 3 >> 3) + uVar3 + 0x10;
  }
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar4 + 0xf;
      if (uVar4 < 0x7ff1) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14112c4da;
            lVar1 = uVar5 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,1);
    }
  }
LAB_14112c4da:
  uVar6 = 0x7fffffffffffffff;
  if ((longlong)uVar3 <= (longlong)uVar4) {
    uVar6 = uVar4;
  }
  *(ulonglong *)(param_1 + 0x10) = uVar6;
  FUN_140d2d5e4(param_1,param_2,uVar6,1,1);
  return;
}



// FUNCTION 14112c5bc FUN_14112c5bc body=31 status=ok
// SIG undefined FUN_14112c5bc(void)

void FUN_14112c5bc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = *param_3;
  lVar1 = param_3[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14112c5dc FUN_14112c5dc body=292 status=ok
// SIG undefined FUN_14112c5dc(void)

longlong FUN_14112c5dc(longlong param_1)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x88) != 0) && (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 8))();
    if (lVar1 != 0) {
      if (DAT_14cba8288 == 0) {
        local_30 = &local_18;
        local_18 = FUN_141864c34;
        local_20 = FUN_14081d0ea;
        local_28 = &LAB_1464cee30;
        local_38 = &LAB_148bfac22;
        local_40 = &LAB_140f21842;
        local_48 = &DAT_149e063b2;
        local_50 = 0;
        local_58 = 0x10000004;
        local_60 = 0x10;
        local_68 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30))
      goto LAB_14112c640;
    }
  }
  lVar1 = 0;
LAB_14112c640:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14112c702 FUN_14112c702 body=375 status=ok
// SIG undefined FUN_14112c702(void)

undefined8 * FUN_14112c702(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14112c886 FUN_14112c886 body=568 status=ok
// SIG undefined FUN_14112c886(void)

undefined1 * FUN_14112c886(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  
  FUN_14112cad2(param_3,*(undefined4 *)(param_1 + 0x10));
  lVar1 = param_1 + 0x28;
  iVar6 = *(int *)(param_1 + 0xa8);
  *(uint *)(param_1 + 0xa8) = iVar6 + *(uint *)(param_1 + 0x10);
  if ((uint)(*(int *)(param_1 + 0xac) - iVar6) < *(uint *)(param_1 + 0x10)) {
    FUN_147d6b09a(lVar1,iVar6);
  }
  lVar8 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    lVar8 = lVar1;
  }
  FUN_14112cabe(lVar8 + (longlong)iVar6 * 8);
  lVar8 = param_1 + 0xb0;
  uVar7 = *(uint *)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 0x130);
  *(uint *)(param_1 + 0x130) = uVar7 + iVar6;
  if ((uint)(*(int *)(param_1 + 0x134) - iVar6) < uVar7) {
    FUN_147d6b196(lVar8);
  }
  lVar15 = *(longlong *)(param_1 + 0x128);
  if (*(longlong *)(param_1 + 0x128) == 0) {
    lVar15 = lVar8;
  }
  memset((void *)(lVar15 + (longlong)iVar6 * 8),0,(longlong)(int)uVar7 << 3);
  lVar15 = (longlong)*(int *)(param_1 + 0x14);
  if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0x10)) {
    lVar16 = lVar15 * 6 + 4;
    do {
      lVar13 = *(longlong *)(param_3 + 0x2d0);
      if (*(longlong *)(param_3 + 0x2d0) == 0) {
        lVar13 = param_3;
      }
      lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x10) + lVar15 * 8);
      bVar2 = *(byte *)(*(longlong *)(param_2 + 8) + 0x84);
      *(byte *)(lVar13 + -0x10 + lVar16 * 8) = bVar2;
      uVar3 = *(ushort *)(lVar11 + 0x48);
      *(uint *)(lVar13 + -0xc + lVar16 * 8) = (uint)uVar3;
      uVar4 = *(ushort *)(lVar11 + 0x4a);
      *(uint *)(lVar13 + -8 + lVar16 * 8) = (uint)uVar4;
      uVar5 = *(ushort *)(lVar11 + 0x4c);
      *(uint *)(lVar13 + lVar16 * 8) = (uint)uVar5;
      uVar14 = (ulonglong)((uint)bVar2 * 0x30);
      uVar7 = *(uint *)((longlong)&DAT_14c87341c + uVar14);
      if ((int)uVar7 < 1) {
        uVar12 = 0;
      }
      else {
        uVar12 = (ulonglong)((uVar3 + uVar7 + (uint)(uVar3 == 0)) - 1) / (ulonglong)uVar7;
      }
      uVar7 = *(uint *)((longlong)&DAT_14c873420 + uVar14);
      if ((int)uVar7 < 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulonglong)(((uint)uVar4 + (uint)(uVar4 == 0) + uVar7) - 1) / (ulonglong)uVar7;
      }
      lVar11 = uVar12 * uVar5 * uVar10 * (longlong)*(int *)((longlong)&DAT_14c873428 + uVar14);
      *(longlong *)(lVar13 + -0x18 + lVar16 * 8) = lVar11;
      lVar9 = FUN_14001cc68(lVar11,0x10);
      *(longlong *)(lVar13 + -0x20 + lVar16 * 8) = lVar9;
      lVar11 = *(longlong *)(param_1 + 0xa0);
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        lVar11 = lVar1;
      }
      if (*(longlong *)(lVar11 + lVar15 * 8) != lVar9) {
        *(longlong *)(lVar11 + lVar15 * 8) = lVar9;
        FUN_1400020a8();
      }
      lVar11 = *(longlong *)(param_1 + 0x128);
      if (*(longlong *)(param_1 + 0x128) == 0) {
        lVar11 = lVar8;
      }
      *(ulonglong *)(lVar11 + lVar15 * 8) =
           *(ulonglong *)(lVar13 + -0x18 + lVar16 * 8) / (ulonglong)*(uint *)(lVar13 + lVar16 * 8);
      lVar15 = lVar15 + 1;
      lVar16 = lVar16 + 6;
    } while (lVar15 < *(int *)(param_1 + 0x10));
  }
  *(undefined1 **)(param_1 + 0x18) = &DAT_100000001;
  return &DAT_100000001;
}



// FUNCTION 14112cabe FUN_14112cabe body=19 status=ok
// SIG undefined FUN_14112cabe(void)

void FUN_14112cabe(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 14112cad2 FUN_14112cad2 body=133 status=ok
// SIG undefined FUN_14112cad2(void)

void FUN_14112cad2(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x2d8);
  *(uint *)(param_1 + 0x2d8) = iVar1 + param_2;
  if ((uint)(*(int *)(param_1 + 0x2dc) - iVar1) < param_2) {
    FUN_147d6af7c(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x2d0);
  if (*(longlong *)(param_1 + 0x2d0) == 0) {
    lVar2 = param_1;
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x30 + lVar2);
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined1 *)(puVar3 + 2) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = 6;
    puVar3 = puVar3 + 6;
  }
  return;
}



// FUNCTION 14112cb58 FUN_14112cb58 body=667 status=ok
// SIG undefined FUN_14112cb58(void)

void FUN_14112cb58(longlong param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined *puVar8;
  ulonglong unaff_R12;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 *local_90;
  int local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  double local_68;
  double local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x668) != 0) {
    puVar8 = &DAT_14cb53c70;
    lVar7 = 0;
    lVar6 = 0;
    do {
      if (*(longlong *)(param_1 + 0x8f8) == 0) {
        unaff_R12 = 0;
      }
      else {
        unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),
                             lVar6 < *(int *)(*(longlong *)(param_1 + 0x8f8) + 0x38));
      }
      FUN_140474144(&local_78,&DAT_14cb53bf0,puVar8);
      puVar5 = &DAT_149dfb77a;
      if (iStack_70 != 0) {
        puVar5 = (undefined2 *)CONCAT44(uStack_74,local_78);
      }
      FUN_1446f470e(&local_50,puVar5,1);
      FUN_1408c9a80(param_1,local_50,unaff_R12 & 0xffffffff);
      if (CONCAT44(uStack_74,local_78) != 0) {
        FUN_1400020a8();
      }
      if ((char)unaff_R12 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x8f8) + 0x30);
        local_60 = (double)*(float *)(lVar3 + 0x24 + lVar7);
        local_68 = (double)*(float *)(lVar3 + 0x20 + lVar7);
        puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar7);
        local_78 = *puVar1;
        uStack_74 = puVar1[1];
        iStack_70 = puVar1[2];
        uStack_6c = puVar1[3];
        FUN_140474144(&local_90,&DAT_14cb53c00,puVar8);
        puVar5 = &DAT_149dfb77a;
        if (local_88 != 0) {
          puVar5 = local_90;
        }
        FUN_1446f470e(&local_80,puVar5,1);
        FUN_14112d1d2(param_1,local_80,&local_78);
        if (local_90 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar4 = *(undefined8 *)(lVar3 + 8 + lVar7);
        FUN_140474144(&local_90,&DAT_14cb53c10,puVar8);
        puVar5 = &DAT_149dfb77a;
        if (local_88 != 0) {
          puVar5 = local_90;
        }
        FUN_1446f470e(&local_98,puVar5,1);
        FUN_14112d480(param_1,local_98,uVar4);
        if (local_90 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar2 = *(undefined1 *)(lVar3 + lVar7);
        FUN_140474144(&local_90,&DAT_14cb53c20,puVar8);
        puVar5 = &DAT_149dfb77a;
        if (local_88 != 0) {
          puVar5 = local_90;
        }
        FUN_1446f470e(&local_a0,puVar5,1);
        FUN_1408c9a80(param_1,local_a0,CONCAT71((int7)((ulonglong)uVar4 >> 8),uVar2) & 0xffffffff);
        if (local_90 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        unaff_R12 = (ulonglong)*(byte *)(lVar3 + 0x28 + lVar7);
        FUN_140474144(&local_90,&DAT_14cb53c30,puVar8);
        puVar5 = &DAT_149dfb77a;
        if (local_88 != 0) {
          puVar5 = local_90;
        }
        FUN_1446f470e(&local_a8,puVar5,1);
        FUN_14042f9da(param_1,local_a8,unaff_R12);
        if (local_90 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x30;
      puVar8 = puVar8 + 0x10;
    } while (lVar6 != 6);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14112cdf4 FUN_14112cdf4 body=989 status=ok
// SIG undefined FUN_14112cdf4(void)

void FUN_14112cdf4(longlong param_1)

{
  float *pfVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined8 *unaff_RBX;
  undefined *puVar7;
  ulonglong unaff_R12;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  double local_78;
  double local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x668) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x8f0);
    if (lVar5 != 0) {
      puVar6 = DAT_14cb53c50;
      if (DAT_14cb53c58 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      unaff_RBX = &local_50;
      FUN_1446f470e(unaff_RBX,puVar6,1);
      FUN_14112d1d2(param_1,local_50,lVar5 + 0x50);
      if (((*(longlong *)(param_1 + 0xb0) != 0) || (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)) &&
         (lVar5 = *(longlong *)(param_1 + 0x8d8), lVar5 != 0)) {
        lVar8 = *(longlong *)(param_1 + 0xb0);
        if (lVar8 == 0) {
          lVar8 = FUN_1448abda6(param_1);
          lVar5 = *(longlong *)(param_1 + 0x8d8);
        }
        lVar5 = FUN_1448e494c(lVar8,lVar5);
        if (lVar5 != 0) {
          lVar8 = *(longlong *)(param_1 + 0x8f0);
          local_88 = (float)*(double *)(lVar8 + 0x50);
          fStack_84 = (float)*(double *)(lVar8 + 0x58);
          fStack_80 = (float)*(double *)(lVar8 + 0x60);
          fStack_7c = (float)*(double *)(lVar8 + 0x68);
          FUN_144938f46(lVar5,*(undefined8 *)(param_1 + 0x8e0));
        }
      }
    }
    uVar2 = *(undefined1 *)(param_1 + 0x8e8);
    puVar6 = &DAT_149dfb77a;
    if (DAT_14cb53c48 != 0) {
      puVar6 = DAT_14cb53c40;
    }
    FUN_1446f470e(&local_58,puVar6,1);
    FUN_1408c9a80(param_1,local_58,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
    puVar7 = &DAT_14cb53c70;
    lVar8 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(param_1 + 0x8f0) == 0) {
        unaff_R12 = 0;
      }
      else {
        unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),
                             lVar5 < *(int *)(*(longlong *)(param_1 + 0x8f0) + 0x38));
      }
      FUN_140474144(&local_88,&DAT_14cb53ba0,puVar7);
      puVar6 = &DAT_149dfb77a;
      if (fStack_80 != 0.0) {
        puVar6 = (undefined2 *)CONCAT44(fStack_84,local_88);
      }
      FUN_1446f470e(&local_60,puVar6,1);
      FUN_1408c9a80(param_1,local_60,unaff_R12 & 0xffffffff);
      if (CONCAT44(fStack_84,local_88) != 0) {
        FUN_1400020a8();
      }
      if ((char)unaff_R12 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x8f0) + 0x30);
        local_70 = (double)*(float *)(lVar3 + 0x24 + lVar8);
        local_78 = (double)*(float *)(lVar3 + 0x20 + lVar8);
        pfVar1 = (float *)(lVar3 + 0x10 + lVar8);
        local_88 = *pfVar1;
        fStack_84 = pfVar1[1];
        fStack_80 = pfVar1[2];
        fStack_7c = pfVar1[3];
        FUN_140474144(&local_a0,&DAT_14cb53bb0,puVar7);
        puVar6 = &DAT_149dfb77a;
        if (local_98 != 0) {
          puVar6 = local_a0;
        }
        FUN_1446f470e(&local_90,puVar6,1);
        FUN_14112d1d2(param_1,local_90,&local_88);
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar4 = *(undefined8 *)(lVar3 + 8 + lVar8);
        FUN_140474144(&local_a0,&DAT_14cb53bc0,puVar7);
        puVar6 = &DAT_149dfb77a;
        if (local_98 != 0) {
          puVar6 = local_a0;
        }
        FUN_1446f470e(&local_a8,puVar6,1);
        FUN_14112d480(param_1,local_a8,uVar4);
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar2 = *(undefined1 *)(lVar3 + lVar8);
        FUN_140474144(&local_a0,&DAT_14cb53bd0,puVar7);
        puVar6 = &DAT_149dfb77a;
        if (local_98 != 0) {
          puVar6 = local_a0;
        }
        FUN_1446f470e(&local_b0,puVar6,1);
        FUN_1408c9a80(param_1,local_b0,CONCAT71((int7)((ulonglong)uVar4 >> 8),uVar2) & 0xffffffff);
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        unaff_R12 = (ulonglong)*(byte *)(lVar3 + 0x28 + lVar8);
        FUN_140474144(&local_a0,&DAT_14cb53be0,puVar7);
        puVar6 = &DAT_149dfb77a;
        if (local_98 != 0) {
          puVar6 = local_a0;
        }
        FUN_1446f470e(&local_b8,puVar6,1);
        FUN_14042f9da(param_1,local_b8,unaff_R12);
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar5 = lVar5 + 1;
      lVar8 = lVar8 + 0x30;
      puVar7 = puVar7 + 0x10;
    } while (lVar5 != 6);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14112d1d2 FUN_14112d1d2 body=448 status=ok
// SIG undefined FUN_14112d1d2(void)

void FUN_14112d1d2(longlong param_1,undefined8 param_2,double *param_3)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_c8 [32];
  float *local_a8;
  undefined8 local_98;
  undefined4 local_90 [2];
  longlong local_88;
  undefined8 uStack_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  fVar5 = (float)param_3[3];
  fVar6 = (float)param_3[2];
  fVar7 = (float)param_3[1];
  fVar8 = (float)*param_3;
  local_98 = param_2;
  local_90[0] = FUN_144830b78(local_90,&DAT_14cb42160);
  local_88 = 0;
  uStack_80 = 0;
  if (*(longlong *)(param_1 + 0x760) == 0) {
    lVar1 = param_1 + 0x678;
    pfVar2 = (float *)(**(code **)(*(longlong *)(param_1 + 0x678) + 0x58))(lVar1,&local_98,0);
    if (pfVar2 == (float *)0x0) {
      local_78 = -NAN;
    }
    else {
      local_78 = *pfVar2;
      lVar3 = (longlong)(int)local_78;
      if (lVar3 != -1) {
        lVar1 = *(longlong *)(param_1 + 0x698);
        *(float *)(lVar1 + lVar3) = fVar8;
        *(float *)(lVar1 + 4 + lVar3) = fVar7;
        *(float *)(lVar1 + 8 + lVar3) = fVar6;
        *(float *)(lVar1 + 0xc + lVar3) = fVar5;
        *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 1;
        goto LAB_14112d286;
      }
    }
    local_a8 = &local_78;
    (**(code **)(*(longlong *)(param_1 + 0x678) + 0x10))(lVar1,&local_98,0,0);
    lVar4 = (longlong)(int)local_78;
    lVar3 = *(longlong *)(param_1 + 0x698);
    *(float *)(lVar3 + lVar4) = fVar8;
    *(float *)(lVar3 + 4 + lVar4) = fVar7;
    *(float *)(lVar3 + 8 + lVar4) = fVar6;
    *(float *)(lVar3 + 0xc + lVar4) = fVar5;
    FUN_140219f72(lVar1);
  }
  else {
    local_78 = fVar8;
    local_74 = fVar7;
    local_70 = fVar6;
    local_6c = fVar5;
    FUN_14112d394(*(longlong *)(param_1 + 0x760),param_2);
  }
LAB_14112d286:
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14112d394 FUN_14112d394 body=234 status=ok
// SIG undefined FUN_14112d394(void)

void FUN_14112d394(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 uStack_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_14112d41b;
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb42160);
  local_38 = 0;
  uStack_30 = 0;
  plVar2 = *(longlong **)(param_1 + 0x28);
  piVar6 = (int *)(**(code **)(*plVar2 + 0x58))(plVar2,&local_48,0);
  if (piVar6 == (int *)0x0) {
    local_24 = -1;
LAB_14112d442:
    local_58 = &local_24;
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_48,0,0);
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    puVar1 = (undefined4 *)(plVar2[4] + (longlong)local_24);
    *puVar1 = *param_3;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_140219f72(plVar2);
  }
  else {
    local_24 = *piVar6;
    if ((longlong)local_24 == -1) goto LAB_14112d442;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    puVar1 = (undefined4 *)(plVar2[4] + (longlong)local_24);
    *puVar1 = *param_3;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    *(byte *)(plVar2 + 0x10) = *(byte *)(plVar2 + 0x10) | 1;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_14112d41b:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14112d480 FUN_14112d480 body=403 status=ok
// SIG undefined FUN_14112d480(void)

void FUN_14112d480(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48 [2];
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  local_48[0] = FUN_144830b78(local_48,&DAT_14cb413b0);
  local_40 = 0;
  uStack_38 = 0;
  if (*(longlong *)(param_1 + 0x760) == 0) {
    piVar4 = (int *)(**(code **)(*(longlong *)(param_1 + 0x678) + 0x58))
                              (param_1 + 0x678,&local_50,0);
    if ((piVar4 != (int *)0x0) && (iVar1 = *piVar4, (longlong)iVar1 != -1)) {
      lVar7 = *(longlong *)(param_1 + 0x6b8);
      if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_3);
      }
      *(longlong *)(lVar7 + (longlong)iVar1 * 8) = param_3;
      *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 4;
    }
  }
  else {
    if (param_3 == 0) {
      uVar6 = 0;
      uVar3 = 0;
    }
    else {
      uVar6 = *(uint *)(param_3 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar3 = (ulonglong)*(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar5);
        }
        LOCK();
        uVar2 = *(uint *)(lVar7 + 0x10);
        bVar8 = uVar2 == 0;
        if (bVar8) {
          *(uint *)(lVar7 + 0x10) = uVar5;
          uVar2 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar2 = uVar5;
        }
        uVar3 = (ulonglong)uVar2;
      }
    }
    FUN_14112d614(*(undefined8 *)(param_1 + 0x760),param_2,(ulonglong)uVar6 | uVar3 << 0x20);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14112d614 FUN_14112d614 body=283 status=ok
// SIG undefined FUN_14112d614(void)

void FUN_14112d614(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_14112d6fa;
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb413b0);
  local_38 = 0;
  uStack_30 = 0;
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (param_3 >> 0x20 == 0) {
LAB_14112d71b:
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    uVar6 = (uint)param_3;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0xd & 0x3fff8)));
      if ((plVar4 == (longlong *)0x0) ||
         (((int)plVar4[2] != (int)(param_3 >> 0x20) || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)))
         ) goto LAB_14112d71b;
      lVar7 = *plVar4;
    }
  }
  piVar5 = (int *)(**(code **)(*plVar2 + 0x58))(plVar2,&local_48,0);
  if ((piVar5 != (int *)0x0) && (iVar1 = *piVar5, (longlong)iVar1 != -1)) {
    lVar3 = plVar2[8];
    if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar7);
    }
    *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar7;
    *(byte *)(plVar2 + 0x10) = *(byte *)(plVar2 + 0x10) | 4;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_14112d6fa:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14112d730 FUN_14112d730 body=157 status=ok
// SIG undefined FUN_14112d730(void)

longlong * FUN_14112d730(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = FUN_144a7954a();
  if (lVar3 != 0) {
    FUN_144a7954a(param_1);
    plVar4 = (longlong *)FUN_144a7954a(param_1);
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x3b8))(plVar4);
    if (0 < (int)plVar4[1]) {
      lVar3 = 8;
      lVar5 = 0;
      do {
        lVar2 = *plVar4;
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f84a2(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar3);
        lVar5 = lVar5 + 1;
        lVar3 = lVar3 + 0x28;
      } while (lVar5 < (int)plVar4[1]);
    }
  }
  return param_2;
}



// FUNCTION 14112d7ce FUN_14112d7ce body=24 status=ok
// SIG undefined FUN_14112d7ce(void)

void FUN_14112d7ce(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014112d7e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14112d7e6 FUN_14112d7e6 body=53 status=ok
// SIG undefined FUN_14112d7e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14112d7e6(undefined8 *param_1,int param_2)

{
  FUN_14112d81c();
  if (param_2 != 0) {
    _DAT_14cb8aa64 = _DAT_14cb8aa64 + -1;
    *param_1 = DAT_14cb8aa58;
    DAT_14cb8aa58 = param_1;
  }
  return param_1;
}



// FUNCTION 14112d81c FUN_14112d81c body=231 status=ok
// SIG undefined FUN_14112d81c(void)

void FUN_14112d81c(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b4256e8;
  if (*(char *)((longlong)param_1 + 0x244) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x244) = 0;
  }
  puVar4 = param_1 + 0x19;
  if ((undefined8 *)param_1[0x46] != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)param_1[0x46];
  }
  FUN_14112d903(puVar4,*(undefined4 *)(param_1 + 0x47));
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_1448173f8(param_1 + 0xc);
  cVar2 = *(char *)(param_1 + 7);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      param_1[8] = 0;
    }
    else if ((cVar2 == '\x03') && (plVar3 = (longlong *)param_1[9], plVar3 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  FUN_1448173f8(param_1 + 6);
  cVar2 = *(char *)(param_1 + 1);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      param_1[2] = 0;
    }
    else if ((cVar2 == '\x03') && (plVar3 = (longlong *)param_1[3], plVar3 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 14112d903 FUN_14112d903 body=139 status=ok
// SIG undefined FUN_14112d903(void)

void FUN_14112d903(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    do {
      plVar4 = *(longlong **)(param_1 + 0x10);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      FUN_1448173f8(param_1);
      cVar3 = *(char *)(param_1 + -0x28);
      if (cVar3 != '\0') {
        if (cVar3 == '\x01') {
          *(undefined8 *)(param_1 + -0x20) = 0;
        }
        else if ((cVar3 == '\x03') &&
                (plVar4 = *(longlong **)(param_1 + -0x18), plVar4 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        *(undefined1 *)(param_1 + -0x28) = 0;
      }
      param_1 = param_1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14112d98e FUN_14112d98e body=191 status=ok
// SIG undefined FUN_14112d98e(void)

longlong FUN_14112d98e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_14112da4e();
  lVar3 = *param_1;
  if (DAT_14cb81768 != DAT_14cb81794) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb81798;
    if (DAT_14cb817a0 != (undefined *)0x0) {
      puVar7 = DAT_14cb817a0;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb817a8 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb81760 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb81758;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 14112da4e FUN_14112da4e body=152 status=ok
// SIG undefined FUN_14112da4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14112da4e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb817b0) {
    FUN_144b3d300(&DAT_14cb817b0);
    if (DAT_14cb817b0 == -1) {
      DAT_14cb81780 = 0;
      DAT_14cb81788 = 0;
      DAT_14cb81760 = 0;
      _DAT_14cb81768 = 0;
      _DAT_14cb8178c = 0xffffffff00000080;
      DAT_14cb81794 = 0;
      DAT_14cb817a0 = 0;
      DAT_14cb817a8 = 0;
      atexit(FUN_143d915c8);
      _Init_thread_footer(&DAT_14cb817b0);
      return;
    }
  }
  return;
}



// FUNCTION 14112dae6 FUN_14112dae6 body=113 status=ok
// SIG undefined FUN_14112dae6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14112dae6(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb817b8;
  if (DAT_14cb817b8 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x2400,0);
    lVar4 = 0x1f;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x24;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb817b8;
    DAT_14cb817c0 = DAT_14cb817c0 + 0x20;
  }
  DAT_14cb817b8 = (undefined8 *)*puVar2;
  _DAT_14cb817c4 = _DAT_14cb817c4 + 1;
  return;
}



// FUNCTION 14112db58 FUN_14112db58 body=223 status=ok
// SIG undefined FUN_14112db58(void)

void FUN_14112db58(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == DAT_14cbd2ce8) {
    lVar4 = param_1 + 0x80;
  }
  else {
    if (*param_2 != DAT_14cbd2cf0) goto LAB_14112dbe8;
    lVar4 = param_1 + 0x98;
  }
  FUN_141085fe4(param_1,&local_38);
  local_28 = local_38;
  local_20 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  FUN_14112dc38(lVar4,&local_28);
  plVar2 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)local_30 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
LAB_14112dbe8:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14112dc38 FUN_14112dc38 body=162 status=ok
// SIG undefined FUN_14112dc38(void)

void FUN_14112dc38(longlong *param_1,undefined8 param_2)

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
        goto LAB_14112dcc5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14112dcc5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14112dcda FUN_14112dcda body=114 status=ok
// SIG undefined FUN_14112dcda(void)

undefined8 * FUN_14112dcda(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149eb0588;
  if (param_1[0xb] != 0) {
    FUN_14112dd4c();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149eb5db0;
  puVar1 = TlsGetValue(DAT_14c75ec34);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c75ec34,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14112dd4c FUN_14112dd4c body=74 status=ok
// SIG undefined FUN_14112dd4c(void)

void FUN_14112dd4c(int *param_1)

{
  *param_1 = *param_1 + -1;
  if (param_1 == (int *)0x0 || *param_1 != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 4) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14112dd96 FUN_14112dd96 body=101 status=ok
// SIG undefined FUN_14112dd96(void)

void FUN_14112dd96(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)((longlong)param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    FUN_144883a74(param_1 + 2,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  if (-1 < *(int *)((longlong)param_1 + 0xcc)) {
    *(undefined4 *)(param_1 + 0x19) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  FUN_144883a74(param_1 + 0xe,0);
  return;
}



// FUNCTION 14112de04 FUN_14112de04 body=144 status=ok
// SIG undefined FUN_14112de04(void)

undefined8 FUN_14112de04(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  longlong local_58;
  undefined8 local_48 [5];
  ulonglong local_20;
  
  lVar1 = DAT_14cb26498;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb26498 == 0) {
    uVar2 = 0;
  }
  else {
    local_48[0] = param_1;
    FUN_1446dcdd4(local_70);
    FUN_1447a97f4(local_48,local_70);
    uVar2 = FUN_14013edca(lVar1,local_48);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14112de95 FUN_14112de95 body=60 status=ok
// SIG undefined FUN_14112de95(void)

void FUN_14112de95(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14112ded2(param_1,param_2);
    param_1 = param_1 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return;
}



// FUNCTION 14112ded2 FUN_14112ded2 body=647 status=ok
// SIG undefined FUN_14112ded2(void)

undefined8 * FUN_14112ded2(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  *param_1 = &PTR_FUN_14b0703c0;
  FUN_1447a97f4(param_1 + 1,param_2 + 8);
  FUN_1447a97f4(param_1 + 6,param_2 + 0x30);
  uVar6 = *(undefined4 *)(param_2 + 0x5c);
  uVar7 = *(undefined4 *)(param_2 + 0x60);
  uVar8 = *(undefined4 *)(param_2 + 100);
  uVar9 = *(undefined4 *)(param_2 + 0x68);
  uVar10 = *(undefined4 *)(param_2 + 0x6c);
  uVar11 = *(undefined4 *)(param_2 + 0x70);
  uVar12 = *(undefined4 *)(param_2 + 0x74);
  uVar13 = *(undefined4 *)(param_2 + 0x74);
  uVar14 = *(undefined4 *)(param_2 + 0x78);
  uVar15 = *(undefined4 *)(param_2 + 0x7c);
  uVar16 = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar6;
  *(undefined4 *)(param_1 + 0xc) = uVar7;
  *(undefined4 *)((longlong)param_1 + 100) = uVar8;
  *(undefined4 *)(param_1 + 0xd) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar10;
  *(undefined4 *)(param_1 + 0xe) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar13;
  *(undefined4 *)(param_1 + 0xf) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar15;
  *(undefined4 *)(param_1 + 0x10) = uVar16;
  *param_1 = &PTR_FUN_14b712950;
  FUN_1447a97f4(param_1 + 0x11,param_2 + 0x88);
  uVar6 = *(undefined4 *)(param_2 + 0xb4);
  uVar7 = *(undefined4 *)(param_2 + 0xb8);
  uVar8 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar6;
  *(undefined4 *)(param_1 + 0x17) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar8;
  param_1[0x18] = 0;
  iVar1 = *(int *)(param_2 + 200);
  pvVar2 = *(void **)(param_2 + 0xc0);
  *(int *)(param_1 + 0x19) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x18,iVar1,0);
    memcpy((void *)param_1[0x18],pvVar2,(longlong)iVar1 * 2);
  }
  uVar6 = *(undefined4 *)(param_2 + 0xd0);
  uVar7 = *(undefined4 *)(param_2 + 0xd4);
  uVar8 = *(undefined4 *)(param_2 + 0xd8);
  uVar9 = *(undefined4 *)(param_2 + 0xdc);
  uVar10 = *(undefined4 *)(param_2 + 0xe0);
  uVar11 = *(undefined4 *)(param_2 + 0xe4);
  uVar12 = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1c) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar11;
  *(undefined4 *)(param_1 + 0x1d) = uVar12;
  *(undefined4 *)(param_1 + 0x1a) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar7;
  *(undefined4 *)(param_1 + 0x1b) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar9;
  FUN_1447a97f4(param_1 + 0x1e,param_2 + 0xf0);
  plVar3 = *(longlong **)(param_2 + 0x118);
  param_1[0x23] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x120);
  param_1[0x25] = *(undefined8 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x130);
  plVar3 = *(longlong **)(param_2 + 0x138);
  param_1[0x27] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x140);
  FUN_1447a97f4(param_1 + 0x29,param_2 + 0x148);
  param_1[0x2e] = 0;
  iVar1 = *(int *)(param_2 + 0x178);
  uVar4 = *(undefined8 *)(param_2 + 0x170);
  *(int *)(param_1 + 0x2f) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  }
  else {
    FUN_140b70aa4(param_1 + 0x2e,iVar1,0);
    FUN_140b709f1(param_1[0x2e],uVar4,iVar1);
  }
  param_1[0x30] = *(undefined8 *)(param_2 + 0x180);
  lVar5 = *(longlong *)(param_2 + 0x188);
  param_1[0x31] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  param_1[0x32] = *(undefined8 *)(param_2 + 400);
  lVar5 = *(longlong *)(param_2 + 0x198);
  param_1[0x33] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  param_1[0x34] = 0;
  iVar1 = *(int *)(param_2 + 0x1a8);
  pvVar2 = *(void **)(param_2 + 0x1a0);
  *(int *)(param_1 + 0x35) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x34,iVar1,0);
    memcpy((void *)param_1[0x34],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_2 + 0x1b0);
  return param_1;
}



// FUNCTION 14112e15a FUN_14112e15a body=274 status=ok
// SIG undefined FUN_14112e15a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14112e15a(undefined8 *param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  *param_1 = &PTR_FUN_14a398f08;
  puVar3 = (undefined8 *)param_1[0xc];
  if (param_1[0xb] != 0) {
    *(undefined8 **)(param_1[0xb] + 8) = puVar3;
  }
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = param_1[0xb];
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_140187b9a();
  puVar1 = param_1 + 4;
  FUN_14112e26c(&DAT_14caa0fa0,puVar1);
  if ((*(byte *)(param_1 + 5) & 2) != 0) {
    FUN_140a0f4bc();
    if ((int)DAT_14caa0f90 < 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      uVar5 = DAT_14caa0f90;
      do {
        uVar2 = (uVar5 >> 1) + uVar6;
        if (*(ulonglong *)(*(longlong *)(DAT_14caa0f88 + (ulonglong)uVar2 * 8) + 0x20) < *puVar1) {
          uVar6 = uVar2 + (uVar5 & 1);
        }
        bVar4 = 1 < uVar5;
        uVar5 = uVar5 >> 1;
      } while (bVar4);
    }
    if (((int)DAT_14caa0f90 <= (int)uVar6) ||
       (*puVar1 < *(ulonglong *)(*(longlong *)(DAT_14caa0f88 + (ulonglong)uVar6 * 8) + 0x20))) {
      uVar6 = 0xffffffff;
    }
    if (~uVar6 + DAT_14caa0f90 != 0) {
      memmove((void *)(DAT_14caa0f88 + (longlong)(int)uVar6 * 8),
              (void *)(DAT_14caa0f88 + (longlong)(int)uVar6 * 8 + 8),
              (longlong)(int)(~uVar6 + DAT_14caa0f90) << 3);
    }
    DAT_14caa0f90 = DAT_14caa0f90 - 1;
    FUN_14112e3ca(&DAT_14caa0f88);
  }
  _DAT_14caa0964 = _DAT_14caa0964 + -1;
  return;
}



// FUNCTION 14112e26c FUN_14112e26c body=122 status=ok
// SIG undefined FUN_14112e26c(void)

undefined8 FUN_14112e26c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == lVar2) {
          FUN_14112e2e6();
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14112e2e6 FUN_14112e2e6 body=91 status=ok
// SIG undefined FUN_14112e2e6(void)

void FUN_14112e2e6(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_14112e342(param_1,param_2,1);
  return;
}



// FUNCTION 14112e342 FUN_14112e342 body=136 status=ok
// SIG undefined FUN_14112e342(void)

void FUN_14112e342(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14112e3ca FUN_14112e3ca body=137 status=ok
// SIG undefined FUN_14112e3ca(void)

void FUN_14112e3ca(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 14112e454 FUN_14112e454 body=31 status=ok
// SIG undefined FUN_14112e454(void)

void FUN_14112e454(longlong *param_1)

{
  FUN_1448c4a0e();
                    /* WARNING: Could not recover jumptable at 0x00014112e46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa80))(param_1);
  return;
}



// FUNCTION 14112e474 FUN_14112e474 body=767 status=ok
// SIG undefined FUN_14112e474(void)

void FUN_14112e474(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x768) != 0) {
    FUN_14112e8e8();
    if (*(char *)(param_1 + 0x791) == '\x01') {
      FUN_140457ffc(*(longlong *)(param_1 + 0x768) + 0x1c8,param_1);
      *(undefined1 *)(param_1 + 0x791) = 0;
    }
    *(undefined8 *)(param_1 + 0x768) = 0;
  }
  if (*(longlong *)(param_1 + 0x770) != 0) {
    FUN_14112e8e8();
    *(undefined8 *)(param_1 + 0x770) = 0;
    plVar3 = *(longlong **)(param_1 + 0x778);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x778) = 0;
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)();
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x760);
  if (lVar7 != 0) {
    uVar5 = FUN_14493c560();
    if (uVar5 == 0) {
      uVar6 = 0;
      uVar9 = 0;
      lVar8 = 0;
    }
    else {
      uVar9 = (ulonglong)(uVar5 >> 0xe);
      uVar6 = uVar5 & 0x3fff;
      lVar8 = (ulonglong)(uVar6 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar9 * 8);
    }
    *(longlong *)(lVar8 + 8) = lVar7;
    do {
      local_58 = DAT_14ca96680;
      local_60 = (DAT_14ca96680 & 0xfffffffffc000000) + 0x4000000;
      if (local_60 >> 0x1a < DAT_14ca96680 >> 0x1a) {
        FUN_14274643a();
      }
      local_60 = local_60 & 0xfffffffffc000000 | (ulonglong)uVar5;
      if (uVar5 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(longlong *)(&DAT_14c833b00 + uVar9 * 8) + (ulonglong)(uVar6 * 0x18);
      }
      *(uint *)(lVar7 + 0x10) = (uint)local_58 & 0x3ffffff;
      LOCK();
      bVar10 = local_58 != DAT_14ca96680;
      uVar4 = local_60;
      if (bVar10) {
        uVar4 = DAT_14ca96680;
      }
      DAT_14ca96680 = uVar4;
      UNLOCK();
    } while (bVar10);
    *(undefined8 *)(param_1 + 0x760) = 0;
  }
  uVar9 = *(ulonglong *)(param_1 + 0x740);
  if (uVar9 != 0) {
    if (((*(char *)(param_1 + 0x698) != '\x01') || (*(char *)(param_1 + 0x728) != '\0')) &&
       (DAT_14c98e618 != 0)) {
      plVar3 = *(longlong **)(param_1 + 0x748);
      local_58 = uVar9;
      if (plVar3 == (longlong *)0x0) {
        local_50 = (longlong *)0x0;
        FUN_14112e774();
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_50 = plVar3;
        FUN_14112e774();
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
    *(undefined8 *)(param_1 + 0x740) = 0;
    plVar3 = *(longlong **)(param_1 + 0x748);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x748) = 0;
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14112e774 FUN_14112e774 body=111 status=ok
// SIG undefined FUN_14112e774(void)

void FUN_14112e774(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  FUN_14112e7e4(param_1 + 0x1c0);
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
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14112e7e4 FUN_14112e7e4 body=259 status=ok
// SIG undefined FUN_14112e7e4(void)

int FUN_14112e7e4(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar13 = 0;
    bVar9 = *plVar1 == *(longlong *)*param_2;
    iVar10 = 0;
    do {
      lVar7 = (longlong)iVar10;
      iVar3 = iVar10 + 1;
      if (iVar10 + 1 < iVar4) {
        iVar3 = iVar4;
      }
      plVar6 = plVar1 + lVar7 * 2 + 2;
      iVar11 = iVar10;
      lVar8 = lVar7;
      do {
        lVar8 = lVar8 + 1;
        iVar12 = iVar3;
        if (lVar5 <= lVar8) break;
        lVar2 = *plVar6;
        iVar11 = iVar11 + 1;
        plVar6 = plVar6 + 2;
        iVar12 = iVar11;
      } while (bVar9 == (lVar2 == *(longlong *)*param_2));
      iVar3 = iVar12 - iVar10;
      if (bVar9 == false) {
        if (iVar13 != iVar10) {
          memmove(plVar1 + (longlong)iVar13 * 2,plVar1 + lVar7 * 2,(longlong)iVar3 << 4);
        }
        iVar13 = iVar13 + iVar3;
      }
      else {
        FUN_1401b439d(plVar1 + lVar7 * 2,iVar3);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar10 = iVar12;
    } while (lVar8 < lVar5);
    *(int *)(param_1 + 1) = iVar13;
    iVar4 = iVar4 - iVar13;
  }
  return iVar4;
}



// FUNCTION 14112e8e8 FUN_14112e8e8 body=335 status=ok
// SIG undefined FUN_14112e8e8(void)

void FUN_14112e8e8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x718) = 0;
  lVar7 = *(longlong *)(param_1 + 0xb0);
  if ((((lVar7 != 0) || (lVar7 = FUN_1448abda6(param_1), lVar7 != 0)) &&
      (lVar7 = FUN_1449baec6(lVar7), lVar7 != 0)) &&
     ((lVar8 = FUN_14112ea38(param_1), lVar8 != 0 &&
      (plVar3 = *(longlong **)(lVar7 + 0x138), plVar3 != (longlong *)0x0)))) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14112e997;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    plVar4 = *(longlong **)(lVar7 + 0x130);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x48))(plVar4,&local_30,lVar8,param_1 + 0x71c);
      plVar4 = local_28;
      if (local_30 != 0) {
        if (local_28 == (longlong *)0x0) {
          FUN_147760dfe(local_30,param_1);
        }
        else {
          LOCK();
          *(int *)(local_28 + 1) = (int)local_28[1] + 1;
          UNLOCK();
          FUN_147760dfe(local_30,param_1);
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_28 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_28 + 0x10))(local_28);
          }
        }
      }
    }
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
LAB_14112e997:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14112ea38 FUN_14112ea38 body=464 status=ok
// SIG undefined FUN_14112ea38(void)

longlong FUN_14112ea38(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x6a0);
  if (lVar1 != 0) goto LAB_14112eae5;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if (DAT_14caf64b8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_147c45ce0;
      local_50 = &LAB_1463f1ff4;
      local_58 = &DAT_149e063b2;
      local_60 = 0x4000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if (((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) == DAT_14caf64b8 + 0x30)) &&
       (lVar1 = *(longlong *)(lVar1 + 0x3c0), lVar1 != 0)) {
      lVar2 = FUN_144a75eb4();
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
    if (lVar1 != 0) goto LAB_14112eaba;
  }
  else {
LAB_14112eaba:
    lVar1 = *(longlong *)(lVar1 + 0x1f0);
    if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x40))) {
      lVar1 = **(longlong **)(lVar1 + 0x38);
      if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
        FUN_1456cec3c(lVar1);
      }
      goto LAB_14112eae5;
    }
  }
  lVar1 = 0;
LAB_14112eae5:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14112ec1a FUN_14112ec1a body=44 status=ok
// SIG undefined FUN_14112ec1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14112ec1a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7eb1c = _DAT_14cb7eb1c + -1;
  *param_1 = DAT_14cb7eb10;
  DAT_14cb7eb10 = param_1;
  return;
}



// FUNCTION 14112ec46 FUN_14112ec46 body=132 status=ok
// SIG undefined FUN_14112ec46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14112ec46(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14112ecca FUN_14112ecca body=16 status=ok
// SIG undefined FUN_14112ecca(void)

char FUN_14112ecca(void)

{
  char cVar1;
  
  cVar1 = FUN_14112ecda();
  return cVar1 * '\x02';
}



// FUNCTION 14112ecda FUN_14112ecda body=1110 status=ok
// SIG undefined FUN_14112ecda(void)

bool FUN_14112ecda(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined *puVar10;
  undefined8 *******pppppppuVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_b8 [40];
  char local_90 [8];
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined1 local_70;
  int local_68;
  undefined8 ******local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar9 = *(longlong *)(param_1 + 0x48);
  if (*(int *)(lVar9 + 0x80) == 1) {
    lVar14 = *(longlong *)(param_1 + 0x40);
    if (lVar14 == 0) {
      lVar13 = 0;
      local_88 = 0;
LAB_14112f09c:
      local_80 = (longlong *)0x0;
      bVar15 = true;
    }
    else {
      if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_14112efb4:
        lVar13 = 0;
      }
      else {
        uVar2 = *(uint *)(lVar14 + 0x48);
        lVar13 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar6 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar6 == (longlong *)0x0) ||
             (((int)plVar6[2] != *(int *)(lVar14 + 0x4c) ||
              ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) goto LAB_14112efb4;
          lVar13 = *plVar6;
        }
      }
      plVar6 = *(longlong **)(lVar14 + 0x118);
      local_88 = param_1;
      if (plVar6 == (longlong *)0x0) goto LAB_14112f09c;
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      bVar15 = false;
      local_80 = plVar6;
    }
    plVar6 = local_80;
    local_68 = 0;
    local_90[0] = '\x03';
    local_78._0_4_ = 0;
    if (lVar13 == 0) {
      iVar5 = 0;
      uVar2 = (uint)local_78;
    }
    else {
      uVar2 = *(uint *)(lVar13 + 0xc);
      local_78 = (ulonglong)uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar5 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar5 = *(int *)(lVar14 + 0x10);
        bVar16 = iVar5 == 0;
        if (bVar16) {
          *(int *)(lVar14 + 0x10) = iVar12;
          iVar5 = 0;
        }
        UNLOCK();
        uVar2 = (uint)local_78;
        if (bVar16) {
          iVar5 = iVar12;
        }
      }
    }
    local_78._0_4_ = uVar2;
    local_78 = CONCAT44(iVar5,(uint)local_78);
    local_70 = 2;
    if (local_68 != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_68 + -1,1);
      local_68 = 0;
    }
    if (!bVar15) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    FUN_1447c3578(lVar9 + 0x88,local_60,local_90);
    plVar6 = (longlong *)FUN_14070d842(local_60);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar3 != (code *)0x0) {
      pppppppuVar11 = local_60;
      if (0x18 < local_48) {
        pppppppuVar11 = (undefined8 *******)local_60[0];
      }
      (*pcVar3)(pppppppuVar11);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60[0]);
    }
    lVar9 = DAT_14c9a3da0;
    if ((longlong)local_68 != 0) {
      lVar14 = (longlong)local_68 + -1;
      lVar13 = lVar14 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
      if (*(longlong *)(lVar9 + lVar13) != 0) {
        FUN_1400020a8();
      }
      lVar9 = DAT_14c9a3da0;
      iVar5 = (int)lVar14;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
      }
      *(undefined4 *)(lVar9 + lVar13) = 0xffffffff;
      iVar12 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar12 = DAT_14c9a3dd0;
      }
      *(int *)(lVar9 + 4 + lVar13) = iVar12;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar10 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar10 = DAT_14c9a3dc0;
      }
      iVar12 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar12 = iVar5;
      }
      bVar4 = (byte)lVar14 & 0x1f;
      DAT_14c9a3dd0 = iVar5;
      *(uint *)(puVar10 + (longlong)(iVar12 >> 5) * 4) =
           *(uint *)(puVar10 + (longlong)(iVar12 >> 5) * 4) &
           (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      local_68 = 0;
    }
    if (local_90[0] == '\x01') {
      local_88 = 0;
    }
    else if ((local_90[0] == '\x03') && (local_80 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))();
      }
    }
  }
  else {
    plVar6 = (longlong *)FUN_140343d7a(param_1);
  }
  if (plVar6 != (longlong *)0x0) {
    uVar7 = FUN_1412c0c36();
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar7);
    if (plVar6 != (longlong *)0x0) {
      uVar7 = FUN_1412c0c36();
      plVar8 = (longlong *)FUN_144718840(plVar6,uVar7);
      bVar15 = false;
      if ((plVar6 == plVar8) || (plVar8 == (longlong *)0x0)) goto LAB_14112eda9;
      lVar9 = (**(code **)(*plVar8 + 0x10))();
      if ((lVar9 != 0) &&
         (((*(char *)(*(longlong *)(param_1 + 0x48) + 0xc1) != '\x01' ||
           (*(longlong *)(lVar9 + 0xc0) == 0)) ||
          (*(char *)(*(longlong *)(lVar9 + 0xc0) + 0xa0) != '\0')))) {
        if (*(char *)(*(longlong *)(param_1 + 0x48) + 0xc0) == '\0') {
          bVar15 = *(char *)(lVar9 + 0xd0) == '\x01';
        }
        else {
          bVar15 = *(char *)(lVar9 + 0xd0) == '\x03';
        }
        goto LAB_14112eda9;
      }
    }
  }
  bVar15 = false;
LAB_14112eda9:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return bVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14112f132 FUN_14112f132 body=91 status=ok
// SIG undefined FUN_14112f132(void)

undefined8 * FUN_14112f132(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_140f50f54(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_140f50f54();
  }
  FUN_140aed1ce(param_1,param_2);
  *param_1 = &PTR_FUN_14b962810;
  return param_1;
}



// FUNCTION 14112f18e FUN_14112f18e body=379 status=ok
// SIG undefined FUN_14112f18e(void)

undefined8 FUN_14112f18e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(param_3 + lVar7);
      if (DAT_14c950c29 == 1) {
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          FUN_14689c22e();
          lVar5 = *(longlong *)(param_3 + lVar7);
        }
      }
      bVar4 = DAT_14c950c29;
      plVar1 = (longlong *)(param_2 + lVar7);
      *plVar1 = lVar5;
      lVar5 = *(longlong *)(param_3 + 8 + lVar7);
      if ((bVar4 & 1) != 0) {
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          FUN_14689c22e();
          lVar5 = *(longlong *)(param_3 + 8 + lVar7);
        }
      }
      *(longlong *)(param_2 + 8 + lVar7) = lVar5;
      *(undefined8 *)(param_2 + 0x10 + lVar7) = *(undefined8 *)(param_3 + 0x10 + lVar7);
      if (plVar1 != (longlong *)(param_3 + lVar7)) {
        iVar2 = *(int *)(param_3 + 0x20 + lVar7);
        uVar3 = *(undefined8 *)(param_3 + 0x18 + lVar7);
        *(int *)(param_2 + 0x20 + lVar7) = iVar2;
        if (iVar2 == 0 && *(int *)(param_2 + 0x24 + lVar7) == 0) {
          *(undefined4 *)(param_2 + 0x24 + lVar7) = 0;
        }
        else {
          puVar6 = (undefined8 *)(param_2 + lVar7 + 0x18);
          FUN_14786faf8(puVar6,iVar2);
          FUN_14786fb6b(*puVar6,uVar3,iVar2);
        }
        FUN_140cbe320(*(undefined8 *)(param_2 + 0x28 + lVar7),
                      *(undefined4 *)(param_2 + 0x30 + lVar7));
        iVar2 = *(int *)(param_3 + 0x30 + lVar7);
        uVar3 = *(undefined8 *)(param_3 + 0x28 + lVar7);
        *(int *)(param_2 + 0x30 + lVar7) = iVar2;
        if (iVar2 == 0 && *(int *)(param_2 + 0x34 + lVar7) == 0) {
          *(undefined4 *)(param_2 + 0x34 + lVar7) = 0;
        }
        else {
          puVar6 = (undefined8 *)(param_2 + lVar7 + 0x28);
          FUN_14786fbd0(puVar6,iVar2);
          FUN_14786fc43(*puVar6,uVar3,iVar2);
        }
      }
      FUN_14112f30a(plVar1 + 7,param_3 + lVar7 + 0x38);
      lVar7 = lVar7 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14112f30a FUN_14112f30a body=79 status=ok
// SIG undefined FUN_14112f30a(void)

undefined8 * FUN_14112f30a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14580e690(param_1,iVar1);
      FUN_14580e635(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14112f35a FUN_14112f35a body=72 status=ok
// SIG undefined FUN_14112f35a(void)

undefined8 * FUN_14112f35a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_144976d68(param_1,param_3,1);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_14112f3a2(lVar1);
    *param_2 = *puVar2;
    lVar1 = puVar2[1];
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 14112f3a2 FUN_14112f3a2 body=242 status=ok
// SIG undefined FUN_14112f3a2(void)

longlong FUN_14112f3a2(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar1 = param_1 + 0x70;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    return lVar1;
  }
  plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b400520;
  *(undefined1 *)(plVar4 + 2) = 1;
  plVar4[3] = param_1;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x78);
    if (plVar5 == (longlong *)0x0) {
      return lVar1;
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x70) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x78);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      goto LAB_14112f40e;
    }
    *(longlong **)(param_1 + 0x78) = plVar4;
    if (plVar5 == (longlong *)0x0) goto LAB_14112f40e;
  }
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
  if (plVar4 == (longlong *)0x0) {
    return lVar1;
  }
LAB_14112f40e:
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar3 = (int *)((longlong)plVar4 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return lVar1;
}



// FUNCTION 14112f49c FUN_14112f49c body=228 status=ok
// SIG undefined FUN_14112f49c(void)

undefined8 * FUN_14112f49c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *param_1 = &PTR_FUN_14b0d2ee0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x14) = 4;
  *(undefined4 *)(param_1 + 0x11) = 3;
  *(undefined1 *)(param_1 + 0x15) = 2;
  *(byte *)(param_1 + 0x16) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 4;
  *(undefined4 *)(param_1 + 0x18) = 9;
  *(undefined1 *)(param_1 + 0x1c) = 2;
  *(byte *)(param_1 + 0x1d) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x79) = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  return param_1;
}



// FUNCTION 14112f588 FUN_14112f588 body=773 status=ok
// SIG undefined FUN_14112f588(void)

ulonglong FUN_14112f588(undefined4 *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_2 == 0) {
    puVar6 = &DAT_14c9a1308;
  }
  else {
    puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb78dd8);
  }
  if ((((byte *)*puVar6 == (byte *)0x0) || (bVar1 = *(byte *)*puVar6, (bVar1 & 3) == 0)) ||
     ((bVar1 & 0x68) != 0)) {
    plVar10 = &DAT_14c9a1308;
    puVar6 = &DAT_14c9a1308;
    if (*param_2 != 0) {
      puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb78dc0);
    }
    uVar14 = FUN_140b963dc(puVar6,0);
    *param_1 = uVar14;
    if (*param_2 != 0) {
      plVar10 = (longlong *)FUN_1446e60f4(*param_2,&DAT_14cb78dc8);
    }
    if (*plVar10 == 0) {
      puVar7 = &DAT_14c9a12e0;
    }
    else {
      puVar7 = (undefined4 *)FUN_140625092(*plVar10,&DAT_14c9a12e0);
    }
    FUN_1447325ac(puVar7,&local_70,1);
    if (*(longlong *)(param_1 + 2) != local_70) {
      *(undefined8 *)(param_1 + 6) = 0;
    }
    *(longlong *)(param_1 + 2) = local_70;
    FUN_14580e838(param_1 + 8);
    if (*param_2 == 0) {
      puVar6 = &DAT_14c9a1308;
    }
    else {
      puVar6 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb78dd0);
    }
    uVar12 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if (((byte *)*puVar6 != (byte *)0x0) && ((*(byte *)*puVar6 & 0x6b) == 3)) {
      plVar8 = (longlong *)FUN_1412446d2(puVar6);
      plVar10 = plVar8 + 3;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = plVar10;
      if ((int)plVar8[6] == 0) {
        iVar11 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar11 = (int)plVar8[6];
      }
      local_90 = (undefined4)local_68;
      uStack_8c = local_68._4_4_;
      uStack_88 = (undefined4)uStack_60;
      uStack_84 = uStack_60._4_4_;
      uStack_78 = CONCAT44(uStack_4c,uStack_50);
      local_80 = local_58;
      uVar4 = local_80;
      local_80._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar5 = local_80._4_4_;
      local_98 = plVar8;
      if ((local_80._4_4_ != iVar11) || (local_80 = local_58, uStack_60 != plVar10)) {
        do {
          local_80 = uVar4;
          lVar2 = *local_98;
          FUN_1447325ac(lVar2 + (longlong)iVar5 * 0x40,&local_a0,1);
          local_68 = local_a0;
          uStack_60 = (longlong *)CONCAT44(uStack_60._4_4_,0x3002);
          local_58 = 0;
          uVar3 = (uint)((ulonglong)local_a0 >> 0x10);
          uVar13 = (uint)local_a0 & 0xffff;
          uVar14 = FUN_144a78877(((uint)local_a0 << 0x10 | uVar13) +
                                 (int)((ulonglong)local_a0 >> 0x20) +
                                 (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar13 >> 4),0x3002);
          plVar9 = (longlong *)FUN_148838798(param_1 + 8,uVar14,&local_68);
          lVar2 = *(longlong *)(lVar2 + 0x28 + (longlong)iVar5 * 0x40);
          if (lVar2 == 0) {
            puVar7 = &DAT_14c9a12e0;
          }
          else {
            puVar7 = (undefined4 *)FUN_140625092(lVar2,&DAT_14c9a12e0);
          }
          FUN_1447325ac(puVar7,&local_a8,1);
          if (*plVar9 != local_a8) {
            plVar9[2] = 0;
          }
          *plVar9 = local_a8;
          local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
          FUN_1449c0562(&local_90);
          iVar5 = local_80._4_4_;
          uVar4 = local_80;
        } while (local_98 != plVar8 ||
                 ((longlong *)CONCAT44(uStack_84,uStack_88) != plVar10 || local_80._4_4_ != iVar11))
        ;
      }
    }
  }
  else {
    uVar12 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 14112f88e FUN_14112f88e body=305 status=ok
// SIG undefined FUN_14112f88e(void)

void FUN_14112f88e(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_14112f928;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_14112f901:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_14112f901;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_14112f928;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14112f928:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14112f9c0 FUN_14112f9c0 body=118 status=ok
// SIG undefined FUN_14112f9c0(void)

void FUN_14112f9c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b429a90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b429a20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14112fa36 FUN_14112fa36 body=370 status=ok
// SIG undefined FUN_14112fa36(void)

undefined8 * FUN_14112fa36(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14112fbd2 FUN_14112fbd2 body=300 status=ok
// SIG undefined FUN_14112fbd2(void)

void FUN_14112fbd2(undefined8 *param_1)

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
  param_1[0x14] = 0;
  param_1[0x15] = 0xffffffff00000000;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x200000000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x2000000000;
  param_1[0x2f] = 0xffffffff;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0x200000000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x2000000000;
  param_1[0x3c] = 0xffffffff;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0x200000000;
  param_1[0x47] = 0;
  param_1[0x48] = 0x2000000000;
  param_1[0x49] = 0xffffffff;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}



// FUNCTION 14112fcfe FUN_14112fcfe body=40 status=ok
// SIG undefined FUN_14112fcfe(void)

undefined8 FUN_14112fcfe(undefined8 param_1,int param_2)

{
  FUN_14112fd26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14112fd26 FUN_14112fd26 body=203 status=ok
// SIG undefined FUN_14112fd26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14112fd26(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b2ed060;
  FUN_1408c28ac(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00014112fdc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14112fdf2 FUN_14112fdf2 body=1705 status=ok
// SIG undefined FUN_14112fdf2(void)

void FUN_14112fdf2(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *_Src;
  undefined1 *puVar7;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2c);
            goto LAB_14112fedc;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2c,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_2c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_2c,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
LAB_14112fedc:
  local_2d = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_48 = (undefined *)FUN_1446ddbd2();
      local_40 = FUN_140a4831c;
      local_58 = 0x1000000008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2d);
            goto LAB_14112ffa5;
          }
        }
        puVar7 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_2d) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2d,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2d,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_2d,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_2d,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
LAB_14112ffa5:
  local_2e = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_48 = (undefined *)FUN_1446ddbd2();
      local_40 = FUN_140a4831c;
      local_58 = 0x1000000008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2e);
            goto LAB_14113006e;
          }
        }
        puVar7 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_2e) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2e,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2e,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_2e,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_2e,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2e);
  }
LAB_14113006e:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa88))(param_1,local_2c,local_2d,local_2e);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411304a8 FUN_1411304a8 body=194 status=ok
// SIG undefined FUN_1411304a8(void)

void FUN_1411304a8(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14113054f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14113054f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14113056a FUN_14113056a body=142 status=ok
// SIG undefined FUN_14113056a(void)

longlong FUN_14113056a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1411305fa();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x80;
    if (lVar3 + lVar2 != 0) goto LAB_1411305a3;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_14580ec7a(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 7;
LAB_1411305a3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411305fa FUN_1411305fa body=95 status=ok
// SIG undefined FUN_1411305fa(void)

int FUN_1411305fa(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x80;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x78 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14113065a FUN_14113065a body=468 status=ok
// SIG undefined FUN_14113065a(void)

void FUN_14113065a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar9 = local_68._4_4_;
      local_68 = uVar4;
      do {
        piVar2 = (int *)(*local_80 + (longlong)iVar9 * 0x80);
        iVar5 = *(int *)(*local_80 + 8 + (longlong)iVar9 * 0x80);
        if (iVar5 == 0) {
          iVar5 = *piVar2;
        }
        else {
          iVar5 = FUN_144a78877(*piVar2,iVar5);
        }
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        piVar2[0x1f] = iVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        piVar2[0x1e] = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141130830 FUN_141130830 body=1333 status=ok
// SIG undefined FUN_141130830(void)

void FUN_141130830(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  int *piVar10;
  int *piVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_108 [47];
  undefined1 local_d9;
  longlong local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  int local_b8;
  undefined1 local_b0 [4];
  undefined1 local_ac;
  char local_a8;
  undefined7 uStack_a7;
  longlong *local_a0;
  int local_98 [6];
  longlong local_80;
  int local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0x84) == 0) {
LAB_141130d04:
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x80);
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x84) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_141130d04;
      uVar5 = *puVar6;
    }
  }
  local_d9 = param_2;
  FUN_140630e34(&local_a8,uVar5);
  if (local_a0 == (longlong *)0x0) goto LAB_141130cd6;
  iVar3 = (int)local_a0[1];
  do {
    if (iVar3 == 0) {
      plVar9 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar4 = (int)local_a0[1];
    bVar16 = iVar3 == iVar4;
    if (bVar16) {
      *(int *)(local_a0 + 1) = iVar3 + 1;
      iVar4 = iVar3;
    }
    iVar3 = iVar4;
    UNLOCK();
    plVar9 = local_a0;
  } while (!bVar16);
  LOCK();
  piVar10 = (int *)((longlong)local_a0 + 0xc);
  *piVar10 = *piVar10 + -1;
  UNLOCK();
  if (*piVar10 == 0) {
    (**(code **)(*local_a0 + 0x10))();
  }
  if (plVar9 == (longlong *)0x0) goto LAB_141130cd6;
  local_d8 = CONCAT71(uStack_a7,local_a8);
  if (local_d8 != 0) {
    if (*(longlong *)(param_1 + 0x68) == 0) {
LAB_141130d0b:
      local_b8 = DAT_14c948620;
      local_c0 = DAT_14c948618;
    }
    else {
      piVar10 = *(int **)(*(longlong *)(param_1 + 0x68) + 8);
      piVar11 = &DAT_14c9485f0;
      if (piVar10 != (int *)0x0) {
        piVar11 = piVar10;
      }
      if (((*piVar11 == 0) || (iVar3 = piVar11[1], iVar3 == 0)) || (*piVar11 == DAT_14c948000))
      goto LAB_141130d0b;
      if ((iVar3 < 2) && (piVar11[9] < 1)) {
        piVar11 = piVar11 + 2;
      }
      else {
        piVar11 = *(int **)(piVar11 + 6);
      }
      if (iVar3 < 1) goto LAB_141130d0b;
      local_b8 = piVar11[2];
      local_c0 = *(undefined8 *)piVar11;
    }
    local_c8 = plVar9;
    if ((longlong)*(int *)(param_1 + 0x110) != 0) {
      lVar15 = *(longlong *)(param_1 + 0x108);
      lVar14 = (longlong)*(int *)(param_1 + 0x110) * 0x38 + lVar15;
      local_d0 = (longlong *)(local_d8 + 0x148);
      do {
        FUN_140c258c2(lVar15,&local_a8);
        iVar3 = local_98[0];
        if (local_a8 == '\x01') {
          FUN_1447a97f4(&local_70,local_98);
          if (0 < local_6c) {
            lVar8 = 0;
            uVar7 = 0;
            iVar3 = local_6c;
            iVar4 = DAT_14c948000;
            do {
              bVar16 = local_70 != 0;
              bVar17 = local_70 != iVar4;
              piVar10 = &DAT_14c948620;
              piVar11 = (int *)&DAT_14c948618;
              if (bVar17 && bVar16) {
                puVar12 = local_68;
                if (0 < local_4c) {
                  puVar12 = local_58;
                }
                if (1 < iVar3) {
                  puVar12 = local_58;
                }
                piVar10 = (int *)(puVar12 + lVar8 + 8);
                piVar11 = (int *)(puVar12 + lVar8);
              }
              if ((*piVar11 == DAT_14cb7beb0) && (*piVar10 == DAT_14cb7beb8)) {
LAB_141130bb9:
                FUN_1402b5374(&local_70,uVar7 & 0xffffffff,0);
                iVar3 = local_6c;
                iVar4 = DAT_14c948000;
              }
              else {
                piVar10 = &DAT_14c948620;
                piVar11 = (int *)&DAT_14c948618;
                if (bVar17 && bVar16) {
                  puVar12 = local_68;
                  if (0 < local_4c) {
                    puVar12 = local_58;
                  }
                  if (1 < iVar3) {
                    puVar12 = local_58;
                  }
                  piVar10 = (int *)(puVar12 + lVar8 + 8);
                  piVar11 = (int *)(puVar12 + lVar8);
                }
                if ((*piVar11 == DAT_14cb7bec8) && (*piVar10 == DAT_14cb7bed0)) goto LAB_141130bb9;
                piVar10 = &DAT_14c948620;
                piVar11 = (int *)&DAT_14c948618;
                if (bVar17 && bVar16) {
                  puVar12 = local_68;
                  if (0 < local_4c) {
                    puVar12 = local_58;
                  }
                  if (1 < iVar3) {
                    puVar12 = local_58;
                  }
                  piVar10 = (int *)(puVar12 + lVar8 + 8);
                  piVar11 = (int *)(puVar12 + lVar8);
                }
                if ((*piVar11 == DAT_14cb7bee0) && (*piVar10 == DAT_14cb7bee8)) goto LAB_141130bb9;
                piVar10 = &DAT_14c948620;
                piVar11 = (int *)&DAT_14c948618;
                if (bVar17 && bVar16) {
                  puVar12 = local_68;
                  if (0 < local_4c) {
                    puVar12 = local_58;
                  }
                  if (1 < iVar3) {
                    puVar12 = local_58;
                  }
                  piVar10 = (int *)(puVar12 + lVar8 + 8);
                  piVar11 = (int *)(puVar12 + lVar8);
                }
                if ((*piVar11 == DAT_14cb7bef8) && (*piVar10 == DAT_14cb7bf00)) goto LAB_141130bb9;
                piVar10 = &DAT_14c948620;
                piVar11 = (int *)&DAT_14c948618;
                if (bVar17 && bVar16) {
                  puVar12 = local_68;
                  if (0 < local_4c) {
                    puVar12 = local_58;
                  }
                  if (1 < iVar3) {
                    puVar12 = local_58;
                  }
                  piVar10 = (int *)(puVar12 + lVar8 + 8);
                  piVar11 = (int *)(puVar12 + lVar8);
                }
                if ((*piVar11 == DAT_14cb7bf10) && (*piVar10 == DAT_14cb7bf18)) goto LAB_141130bb9;
              }
              uVar7 = uVar7 + 1;
              lVar8 = lVar8 + 0xc;
            } while ((longlong)uVar7 < (longlong)iVar3);
          }
          iVar3 = local_70;
          if (local_58 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
        }
        iVar3 = FUN_1402b3efe(local_d0,iVar3,&local_a8);
        if (iVar3 != -1) {
          if ((*local_d0 + (longlong)iVar3 * 0x48 != 0) &&
             (piVar10 = (int *)(*local_d0 + (longlong)iVar3 * 0x48 + 0x38), piVar10 != (int *)0x0))
          {
            iVar3 = *piVar10;
            if ((-1 < (longlong)iVar3) && (iVar3 < *(int *)(local_d8 + 0x80))) {
              lVar8 = *(longlong *)(local_d8 + 0x78);
              lVar13 = (longlong)iVar3 * 0x280;
              *(undefined1 *)(lVar8 + 0x92 + lVar13) = local_d9;
              *(undefined8 *)(lVar8 + 0xa0 + lVar13) = local_c0;
              *(int *)(lVar8 + 0xa8 + lVar13) = local_b8;
              local_ac = 0;
              FUN_141130d84(local_d8,*piVar10,0,local_b0);
            }
          }
        }
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        lVar15 = lVar15 + 0x38;
        plVar9 = local_c8;
      } while (lVar15 != lVar14);
    }
  }
  LOCK();
  plVar1 = plVar9 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar10 = (int *)((longlong)plVar9 + 0xc);
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
    }
  }
LAB_141130cd6:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141130d84 FUN_141130d84 body=959 status=ok
// SIG undefined FUN_141130d84(void)

void FUN_141130d84(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  longlong lVar14;
  int *piVar15;
  undefined1 auStack_98 [40];
  longlong local_70;
  int *local_68;
  longlong local_60;
  undefined1 local_58 [4];
  int local_54;
  undefined4 local_50;
  char local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *(longlong *)(param_1 + 0x78);
  lVar14 = (longlong)param_2 * 0x280;
  local_54 = param_2;
  if (*(char *)(local_70 + 0x91 + lVar14) == '\x01') {
    FUN_1447cbafe((longlong *)(param_1 + 0xf8),local_58,&local_54,0);
  }
  else if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
    lVar7 = *(longlong *)(param_1 + 0x138);
    if (*(longlong *)(param_1 + 0x138) == 0) {
      lVar7 = param_1 + 0x130;
    }
    piVar12 = (int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x140) - 1U & (longlong)param_2) * 4);
    local_60 = param_1 + 0x108;
    do {
      iVar2 = *piVar12;
      lVar7 = (longlong)iVar2;
      if (lVar7 == -1) break;
      lVar4 = *(longlong *)(param_1 + 0xf8);
      piVar13 = (int *)(lVar7 * 0xc + lVar4);
      iVar3 = *piVar13;
      if (iVar3 == param_2) {
        lVar8 = *(longlong *)(param_1 + 0x138);
        if (*(longlong *)(param_1 + 0x138) == 0) {
          lVar8 = param_1 + 0x130;
        }
        iVar10 = *(int *)(lVar8 + (longlong)piVar13[2] * 4);
        if (iVar10 == iVar2) {
          piVar15 = (int *)(lVar8 + (longlong)piVar13[2] * 4);
        }
        else {
          do {
            piVar15 = (int *)((longlong)iVar10 * 0xc + 4 + lVar4);
            iVar10 = *piVar15;
          } while (iVar10 != iVar2);
        }
        *piVar15 = piVar13[1];
        lVar4 = *(longlong *)(param_1 + 0xf8);
        if (*(int *)(param_1 + 300) != 0) {
          *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x128) * 0xc) = iVar2;
        }
        *(undefined4 *)(lVar4 + lVar7 * 0xc) = 0xffffffff;
        uVar9 = 0xffffffff;
        if (0 < *(int *)(param_1 + 300)) {
          uVar9 = *(undefined4 *)(param_1 + 0x128);
        }
        *(undefined4 *)(lVar4 + lVar7 * 0xc + 4) = uVar9;
        *(int *)(param_1 + 0x128) = iVar2;
        *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
        lVar7 = *(longlong *)(param_1 + 0x118);
        if (*(longlong *)(param_1 + 0x118) == 0) {
          lVar7 = local_60;
        }
        iVar10 = iVar2 + 0x1f;
        if (-1 < iVar2) {
          iVar10 = iVar2;
        }
        bVar5 = (byte)iVar2 & 0x1f;
        puVar1 = (uint *)(lVar7 + (longlong)(iVar10 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
        local_68 = piVar12;
      }
      else {
        piVar12 = piVar13 + 1;
      }
    } while (iVar3 != param_2);
  }
  iVar2 = local_54;
  cVar6 = FUN_141131144(param_1,local_54);
  if (cVar6 == '\0') {
    if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
      lVar14 = *(longlong *)(param_1 + 0xe8);
      if (*(longlong *)(param_1 + 0xe8) == 0) {
        lVar14 = param_1 + 0xe0;
      }
      piVar12 = (int *)(lVar14 + ((longlong)*(int *)(param_1 + 0xf0) - 1U & (longlong)iVar2) * 4);
      do {
        iVar3 = *piVar12;
        lVar14 = (longlong)iVar3;
        if (lVar14 == -1) break;
        piVar13 = (int *)(*(longlong *)(param_1 + 0xa8) + lVar14 * 0xc);
        iVar10 = *piVar13;
        if (iVar10 == iVar2) {
          lVar7 = *(longlong *)(param_1 + 0xe8);
          if (*(longlong *)(param_1 + 0xe8) == 0) {
            lVar7 = param_1 + 0xe0;
          }
          iVar11 = *(int *)(lVar7 + (longlong)piVar13[2] * 4);
          if (iVar11 == iVar3) {
            piVar15 = (int *)(lVar7 + (longlong)piVar13[2] * 4);
          }
          else {
            do {
              piVar15 = (int *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar11 * 0xc + 4);
              iVar11 = *piVar15;
            } while (iVar11 != iVar3);
          }
          *piVar15 = piVar13[1];
          lVar7 = *(longlong *)(param_1 + 0xa8);
          if (*(int *)(param_1 + 0xdc) != 0) {
            *(int *)(lVar7 + (longlong)*(int *)(param_1 + 0xd8) * 0xc) = iVar3;
          }
          *(undefined4 *)(lVar7 + lVar14 * 0xc) = 0xffffffff;
          uVar9 = 0xffffffff;
          if (0 < *(int *)(param_1 + 0xdc)) {
            uVar9 = *(undefined4 *)(param_1 + 0xd8);
          }
          *(undefined4 *)(lVar7 + lVar14 * 0xc + 4) = uVar9;
          *(int *)(param_1 + 0xd8) = iVar3;
          *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
          lVar14 = *(longlong *)(param_1 + 200);
          if (*(longlong *)(param_1 + 200) == 0) {
            lVar14 = param_1 + 0xb8;
          }
          iVar11 = iVar3 + 0x1f;
          if (-1 < iVar3) {
            iVar11 = iVar3;
          }
          bVar5 = (byte)iVar3 & 0x1f;
          puVar1 = (uint *)(lVar14 + (longlong)(iVar11 >> 5) * 4);
          *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
        }
        else {
          piVar12 = piVar13 + 1;
        }
      } while (iVar10 != iVar2);
    }
  }
  else if (param_3 == '\0') {
    FUN_1447cbafe(param_1 + 0xa8,local_58,&local_54,0);
  }
  else {
    local_4c = *(char *)(param_4 + 1);
    if (local_4c == '\x01') {
      local_50 = *param_4;
    }
    FUN_1405d8cf6(param_1,local_70 + lVar14,1,&local_50);
  }
  if (*(char *)(param_4 + 1) == '\x01') {
    *(undefined1 *)(param_4 + 1) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141131144 FUN_141131144 body=115 status=ok
// SIG undefined FUN_141131144(void)

bool FUN_141131144(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    lVar1 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x98) + lVar1) == param_2) {
        if (*(char *)(*(longlong *)(param_1 + 0x78) + 0x90 + (longlong)param_2 * 0x280) != '\0') {
          return false;
        }
        lVar1 = *(longlong *)(param_1 + 0x78) + (longlong)param_2 * 0x280;
        if (*(char *)(lVar1 + 0x92) != '\0') {
          return false;
        }
        if (*(char *)(lVar1 + 0x91) != '\0') {
          return false;
        }
        if (*(char *)(lVar1 + 0x110) == '\0') {
          return (*(byte *)(lVar1 + 0x94) & 1) == 0;
        }
        return false;
      }
      lVar1 = lVar1 + 4;
    } while ((longlong)*(int *)(param_1 + 0xa0) * 4 != lVar1);
  }
  return false;
}



// FUNCTION 1411311bc FUN_1411311bc body=221 status=ok
// SIG undefined FUN_1411311bc(void)

longlong FUN_1411311bc(void)

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
  if (DAT_14cad4a98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a473d7;
    local_40 = FUN_1463c1fd8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Engine",L"DamageType",&DAT_14cad4a98,&DAT_147a473d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad4a98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113129a FUN_14113129a body=88 status=ok
// SIG undefined FUN_14113129a(void)

undefined8 * FUN_14113129a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1411312f2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1411312f2 FUN_1411312f2 body=317 status=ok
// SIG undefined FUN_1411312f2(void)

void FUN_1411312f2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141131360;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_141131360:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 141131444 FUN_141131444 body=82 status=ok
// SIG undefined FUN_141131444(void)

undefined8 * FUN_141131444(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149e13ce0;
  lVar1 = 0x60;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x40);
  FUN_141131496(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141131496 FUN_141131496 body=414 status=ok
// SIG undefined FUN_141131496(void)

void FUN_141131496(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
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
  *param_1 = &PTR_LAB_149e12580;
  if ((param_1[9] != 0) && (*(char *)(param_1[9] + 0x10) == '\x01')) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14c83f438;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14c83f450 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14c83f450;
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_78 = &DAT_14c83f428;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14c83f438)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar2;
      do {
        FUN_1467be528(*(undefined8 *)(*local_78 + 8 + (longlong)iVar3 * 0x18),param_1);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != &DAT_14c83f428 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14c83f438 ||
               local_60._4_4_ != iVar4));
    }
    local_60 = uVar2;
    plVar1 = (longlong *)param_1[9];
    if (plVar1 != (longlong *)0x0) {
      FUN_1467bf674(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar1);
    }
  }
  *param_1 = &PTR_LAB_149e12290;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141131636 FUN_141131636 body=118 status=ok
// SIG undefined FUN_141131636(void)

void FUN_141131636(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      uVar4 = 1 << ((byte)iVar5 & 0x1f);
      uVar3 = *(uint *)(param_1 + 4);
      if ((char)param_1[3] == '\0') {
        if (0 < (int)(uVar3 & uVar4)) {
LAB_14113167e:
          uVar3 = uVar3 & ~uVar4;
          lVar2 = 0x10;
          goto LAB_141131687;
        }
      }
      else if (0 < (int)(uVar3 & uVar4) != 0 < (int)(*(uint *)((longlong)param_1 + 0x1c) & uVar4)) {
        if ((int)(*(uint *)((longlong)param_1 + 0x1c) & uVar4) < 1) goto LAB_14113167e;
        uVar3 = uVar3 | uVar4;
        lVar2 = 8;
LAB_141131687:
        *(uint *)(param_1 + 4) = uVar3;
        (**(code **)(*param_1 + lVar2))(param_1,iVar5);
        iVar1 = *(int *)((longlong)param_1 + 0x24);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return;
}



// FUNCTION 1411316ac FUN_1411316ac body=117 status=ok
// SIG undefined FUN_1411316ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1411316ac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99a4a0) {
    FUN_144b3d300(&DAT_14c99a4a0);
    if (DAT_14c99a4a0 == -1) {
      DAT_14c99a488 = 0;
      _DAT_14c99a490 = 0;
      _DAT_14c99a498 = 2;
      atexit(FUN_142aa2acb);
      _Init_thread_footer(&DAT_14c99a4a0);
    }
  }
  return &DAT_14c99a488;
}



// FUNCTION 141131722 FUN_141131722 body=117 status=ok
// SIG undefined FUN_141131722(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141131722(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99a4c0) {
    FUN_144b3d300(&DAT_14c99a4c0);
    if (DAT_14c99a4c0 == -1) {
      DAT_14c99a4a8 = 0;
      _DAT_14c99a4b0 = 0;
      _DAT_14c99a4b8 = 2;
      atexit(FUN_142aa2afc);
      _Init_thread_footer(&DAT_14c99a4c0);
    }
  }
  return &DAT_14c99a4a8;
}



// FUNCTION 141131798 FUN_141131798 body=40 status=ok
// SIG undefined FUN_141131798(void)

undefined8 FUN_141131798(undefined8 param_1,int param_2)

{
  FUN_1411317c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1411317c0 FUN_1411317c0 body=170 status=ok
// SIG undefined FUN_1411317c0(void)

void FUN_1411317c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a84e020;
  param_1[5] = &PTR_FUN_14a84ea30;
  param_1[6] = &PTR_LAB_14a84ea70;
  param_1[0x55] = &PTR_FUN_14a84eac0;
  param_1[0x56] = &PTR_FUN_14a84eb40;
  param_1[0x57] = &PTR_FUN_14a84eb50;
  FUN_140f8cf94(param_1[0xc9],*(undefined4 *)(param_1 + 0xca));
  if (param_1[0xc9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 141131880 FUN_141131880 body=397 status=ok
// SIG undefined FUN_141131880(void)

void FUN_141131880(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  bVar2 = *(byte *)(param_1 + 0xd8);
  cVar5 = *(char *)(param_1 + 0xd4);
  bVar3 = *(byte *)(param_1 + 0xd5);
  *(byte *)(param_1 + 0xd4) = bVar3 >> 4 & 7;
  *(byte *)(param_1 + 0xd8) = bVar2 & 0xfe | -((char)bVar3 >> 7);
  if ((byte)-((char)bVar3 >> 7) != (bVar2 & 1)) {
    if ((char)bVar3 < '\0') {
      FUN_141131b52();
    }
    else {
      FUN_141131a0e(param_1);
    }
  }
  if ((*(char *)(param_1 + 0xd4) != cVar5) &&
     (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x1b0), plVar4 != (longlong *)0x0)) {
    cVar5 = (**(code **)(*plVar4 + 0x700))();
    if (*(char *)(param_1 + 0xd4) == '\x01') {
      if (cVar5 == '\0') {
        FUN_141358340(param_1,0);
        return;
      }
    }
    else if (*(char *)(param_1 + 0xd4) == '\x02') {
      if (cVar5 == '\0') {
        FUN_145c7b52e(param_1,1);
        return;
      }
      uVar6 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x30));
      lVar7 = FUN_144a61814(uVar6,(undefined8 *)(param_1 + 0x100));
      if (lVar7 != 0) {
        FUN_1405a424c(uVar6,*(undefined8 *)(param_1 + 0x100));
      }
      *(undefined8 *)(param_1 + 0x100) = 0;
      lVar7 = FUN_144a61814(uVar6,(undefined8 *)(param_1 + 0xf8));
      if (lVar7 != 0) {
        FUN_1405a424c(uVar6,*(undefined8 *)(param_1 + 0xf8));
      }
      *(undefined8 *)(param_1 + 0xf8) = 0;
      FUN_145c7b52e(param_1,1);
      FUN_140898514(param_1 + 0x58,(*(byte *)(param_1 + 0xd8) & 1) == 0);
      if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x30);
        bVar2 = *(byte *)(lVar7 + 0xbd8);
        if ((int)(uint)bVar2 < *(int *)(lVar7 + 0xbf0)) {
          pbVar1 = (byte *)(*(longlong *)(lVar7 + 0xbe8) + 5 +
                           (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8);
          *pbVar1 = *pbVar1 | 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 141131a0e FUN_141131a0e body=168 status=ok
// SIG undefined FUN_141131a0e(void)

void FUN_141131a0e(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  
  FUN_141131d4c();
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  if (0.0 < *(float *)(param_1 + 0xec)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    bVar2 = *(byte *)(lVar3 + 0xbd8);
    if (((int)(uint)bVar2 < *(int *)(lVar3 + 0xbf0)) &&
       (lVar3 = *(longlong *)
                 (*(longlong *)(lVar3 + 0xbe8) + 0x40 +
                 (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8), lVar3 != 0)) {
      *(undefined4 *)(lVar3 + 0xc0) = 0xbf800000;
    }
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  bVar2 = *(byte *)(lVar3 + 0xbd8);
  if ((int)(uint)bVar2 < *(int *)(lVar3 + 0xbf0)) {
    pbVar1 = (byte *)(*(longlong *)(lVar3 + 0xbe8) + 5 +
                     (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  FUN_141131ab6(param_1);
  return;
}



// FUNCTION 141131ab6 FUN_141131ab6 body=155 status=ok
// SIG undefined FUN_141131ab6(void)

void FUN_141131ab6(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x14c) != -1) {
    FUN_140994e4c(*(undefined8 *)(param_1 + 0x30),
                  *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x1d8),*(char *)(param_1 + 0x14c),
                  0);
    *(undefined1 *)(param_1 + 0x14c) = 0xff;
  }
  if ((*(byte *)(param_1 + 0xd8) & 2) != 0) {
    *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfd;
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x1e8);
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x1e0);
      lVar4 = 0;
      do {
        FUN_140980406(uVar1,*(undefined8 *)(lVar2 + lVar4),0,0,0);
        lVar4 = lVar4 + 8;
      } while (lVar3 * 8 != lVar4);
    }
  }
  return;
}



// FUNCTION 141131b52 FUN_141131b52 body=195 status=ok
// SIG undefined FUN_141131b52(void)

void FUN_141131b52(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
  lVar1 = *(longlong *)(param_1 + 0x30);
  FUN_141131c16(lVar1,1,1);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x1d0);
  if (lVar2 != 0) {
    FUN_140980406(lVar1,lVar2,*(undefined1 *)(lVar1 + 0xbd8),0,0);
  }
  FUN_141131c98(param_1);
  if ((*(char *)(lVar1 + 0x178) == '\x03') && (lVar1 = *(longlong *)(lVar1 + 0x168), lVar1 != 0)) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1447f69b6(lVar1 + 0x5840);
      return;
    }
  }
  return;
}



// FUNCTION 141131c16 FUN_141131c16 body=129 status=ok
// SIG undefined FUN_141131c16(void)

void FUN_141131c16(longlong param_1,byte param_2,byte param_3)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  
  bVar2 = *(byte *)(param_1 + 0xbd8);
  if ((int)(uint)bVar2 < *(int *)(param_1 + 0xbf0)) {
    lVar1 = (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8;
    *(byte *)(*(longlong *)(param_1 + 0xbe8) + 5 + lVar1) =
         *(byte *)(*(longlong *)(param_1 + 0xbe8) + 5 + lVar1) & 0xfe | param_2;
    if ((param_3 & param_2) == 1) {
      if (*(char *)(param_1 + 0x178) == '\x03') {
LAB_141131c81:
        FUN_140e3bfea(param_1,*(undefined1 *)(param_1 + 0xbd8),1);
        return;
      }
      if (*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0) {
        cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x700))();
        if (cVar3 != '\0') goto LAB_141131c81;
      }
    }
  }
  return;
}



// FUNCTION 141131c98 FUN_141131c98 body=179 status=ok
// SIG undefined FUN_141131c98(void)

void FUN_141131c98(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((*(char *)(param_1 + 0x14c) == -1) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x1d8) != 0)) {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0xbd8);
    *(undefined1 *)(param_1 + 0x14c) = uVar1;
    FUN_140980406(*(longlong *)(param_1 + 0x30),
                  *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x1d8),uVar1,0,0);
  }
  if (((*(byte *)(param_1 + 0xd8) & 2) == 0) &&
     (lVar3 = *(longlong *)(param_1 + 0xa0), 0 < *(int *)(lVar3 + 0x1e8))) {
    *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) | 2;
    iVar2 = *(int *)(lVar3 + 0x1e8);
    if ((longlong)iVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      lVar3 = *(longlong *)(lVar3 + 0x1e0);
      lVar5 = 0;
      do {
        FUN_140994e4c(uVar4,*(undefined8 *)(lVar3 + lVar5),0,0);
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar2 * 8 != lVar5);
    }
  }
  return;
}



// FUNCTION 141131d4c FUN_141131d4c body=598 status=ok
// SIG undefined FUN_141131d4c(void)

void FUN_141131d4c(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  
  if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x178) != '\x03') {
    return;
  }
  iVar10 = (int)((float)(*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xb4)) * 0.5 +
                (float)*(int *)(param_1 + 0xb4));
  uVar3 = rand();
  fVar11 = *(float *)(param_1 + 0xf4);
  if ((float)(uVar3 & 0x7fff) / 32767.0 < fVar11) {
    *(float *)(param_1 + 0xf4) = fVar11 - *(float *)(param_1 + 200);
    iVar9 = *(int *)(param_1 + 0xb4);
    iVar10 = iVar10 - iVar9;
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    else {
      uVar3 = rand();
      iVar4 = (int)((float)(iVar10 + 1) * ((float)(uVar3 & 0x7fff) / 32767.0));
      if (iVar4 < iVar10) {
        iVar10 = iVar4;
      }
    }
    iVar10 = iVar10 + iVar9;
    if (*(int *)(param_1 + 0xcc) == iVar10) goto LAB_141131e47;
    *(int *)(param_1 + 0xcc) = iVar10;
  }
  else {
    *(float *)(param_1 + 0xf4) = fVar11 + *(float *)(param_1 + 200);
    iVar9 = *(int *)(param_1 + 0xc0) - iVar10;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    else {
      uVar3 = rand();
      iVar4 = (int)((float)(iVar9 + 1) * ((float)(uVar3 & 0x7fff) / 32767.0));
      if (iVar4 < iVar9) {
        iVar9 = iVar4;
      }
    }
    if (*(int *)(param_1 + 0xcc) == iVar9 + iVar10) goto LAB_141131e47;
    *(int *)(param_1 + 0xcc) = iVar9 + iVar10;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x38);
  if (uVar2 < 0xffffffff00000000) {
    plVar8 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar8 = (longlong *)0x0;
    }
    (**(code **)(*plVar8 + 0x58))(plVar8,param_1,uVar2,1);
  }
  else {
    uVar3 = (uint)uVar2;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c998088)) {
      puVar6 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar6 = DAT_14c998080;
      }
      if ((*(uint *)(puVar6 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar3 & 0x1f) & 1) != 0) {
        lVar5 = DAT_14c998060 + (ulonglong)(uVar3 & 0x7fffffff) * 0x68;
        puVar7 = *(uint **)(lVar5 + 0x18);
        if (*(uint **)(lVar5 + 0x18) == (uint *)0x0) {
          puVar7 = (uint *)(lVar5 + 8);
        }
        *puVar7 = *puVar7 | 2;
        *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
      }
    }
  }
LAB_141131e47:
  *(undefined4 *)(param_1 + 0xd0) = 0;
  lVar5 = *(longlong *)(param_1 + 0x30);
  bVar1 = *(byte *)(lVar5 + 0xbd8);
  if (((int)(uint)bVar1 < *(int *)(lVar5 + 0xbf0)) &&
     (plVar8 = *(longlong **)
                (*(longlong *)(lVar5 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8),
     plVar8 != (longlong *)0x0)) {
    fVar11 = (float)(**(code **)(*plVar8 + 0x350))();
    *(float *)(param_1 + 0xd0) = (float)*(int *)(param_1 + 0xcc) * fVar11;
  }
  return;
}



// FUNCTION 141131fa2 FUN_141131fa2 body=170 status=ok
// SIG undefined FUN_141131fa2(void)

undefined8 FUN_141131fa2(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1411321ea();
  if (((*(int *)(param_1 + 0x68) == -1) || (*(int *)(param_1 + 0x6c) == -1)) &&
     (*(int *)(param_1 + 0x80) != 0)) {
    FUN_14113204e(param_1,param_3,param_4);
    (**(code **)(*param_2 + 0x308))(param_2,&local_38,param_3,0);
    uVar1 = *(undefined8 *)(*(longlong *)(param_2[5] + 0x58) + 0x300);
    *(undefined8 *)(param_1 + 0x68) = local_38;
    *(undefined8 *)(param_1 + 0x70) = uVar1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113204e FUN_14113204e body=219 status=ok
// SIG undefined FUN_14113204e(void)

void FUN_14113204e(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = *(undefined4 *)(param_1 + 0x80);
  (**(code **)(*param_2 + 0x188))(param_2);
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    puVar5 = *(uint **)(param_1 + 0x78);
    puVar1 = puVar5 + *(int *)(param_1 + 0x80);
    do {
      if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
        lVar3 = *(longlong *)(param_1 + 0x58);
        if (*(longlong *)(param_1 + 0x58) == 0) {
          lVar3 = param_1 + 0x50;
        }
        uVar4 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & *puVar5) * 4);
        if (uVar4 != 0xffffffff) {
          do {
            puVar2 = (uint *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar4 * 0x48);
            if (*puVar2 == *puVar5) break;
            uVar4 = puVar2[0x10];
          } while (uVar4 != 0xffffffff);
        }
      }
      FUN_14113212a();
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14113212a FUN_14113212a body=191 status=ok
// SIG undefined FUN_14113212a(void)

void FUN_14113212a(undefined8 param_1,longlong *param_2,char param_3,longlong param_4)

{
  ulonglong *puVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == '\0') {
    if (*(int *)(param_4 + 8) == -1) goto LAB_141132193;
    local_20 = CONCAT44(local_20._4_4_,*(int *)(param_4 + 8));
    puVar1 = (ulonglong *)param_2[1];
    if (puVar1[1] < *puVar1 + 4) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_20);
      }
    }
    else {
      *puVar1 = *puVar1 + 4;
    }
  }
  else {
    local_20 = FUN_14479d2ce(param_4);
    if (local_20 == 0) goto LAB_141132193;
    (**(code **)(*param_2 + 0x150))(param_2,&local_20);
  }
  FUN_1403f5866(param_4 + 0x10,param_2);
LAB_141132193:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411321ea FUN_1411321ea body=279 status=ok
// SIG undefined FUN_1411321ea(void)

void FUN_1411321ea(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined ***pppuVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(int *)((longlong)param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 1), -1 < (int)uVar1)
      ) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)((longlong)param_1 + 0xc))) &&
       (((*(uint *)(lVar4 + 8) & 0x10200000) == 0 &&
        (plVar2 = (longlong *)*param_1, plVar2 != (longlong *)0x0)))) {
      local_28 = &local_68;
      local_68 = 0;
      uStack_60 = 0;
      local_48 = (undefined ***)0x0;
      local_38 = &PTR_LAB_14b42daf0;
      local_58[0] = FUN_143e42e26;
      local_30 = param_1;
      (**(code **)(*plVar2 + 0x18))(plVar2,local_58);
      if (local_58[0] != (code *)0x0) {
        pppuVar3 = local_48;
        if (local_48 == (undefined ***)0x0) {
          pppuVar3 = &local_38;
        }
        (*(code *)(*pppuVar3)[2])();
      }
      if ((int)uStack_60 != 0) {
        FUN_141132302(param_1 + 0xd,&local_68);
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141132302 FUN_141132302 body=602 status=ok
// SIG undefined FUN_141132302(void)

void FUN_141132302(int *param_1,int *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*param_1 == -1) || (param_1[1] == -1)) {
    if (param_1 + 4 != param_2) {
      if (*(longlong *)(param_1 + 4) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)param_2;
      param_2[0] = 0;
      param_2[1] = 0;
      param_1[6] = param_2[2];
      param_1[7] = param_2[3];
      param_2[2] = 0;
      param_2[3] = 0;
    }
  }
  else {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_14580f1b6(&local_98,param_2);
    iVar6 = param_1[6];
    if ((longlong)iVar6 != 0) {
      lVar3 = *(longlong *)(param_1 + 4);
      lVar7 = 0;
      do {
        local_e0 = (longlong *)CONCAT44(local_e0._4_4_,*(undefined4 *)(lVar3 + lVar7));
        FUN_1447cbafe(&local_98,&local_b8,&local_e0,0);
        lVar7 = lVar7 + 4;
      } while ((longlong)iVar6 * 4 != lVar7);
    }
    iVar6 = (int)uStack_90 - local_64;
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    plVar1 = (longlong *)(param_1 + 4);
    param_1[6] = 0;
    if (param_1[7] != iVar6) {
      FUN_14481578e(plVar1);
    }
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    uStack_a0 = 0;
    uStack_b0 = local_88;
    if (local_70 == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_b8);
      iVar6 = local_70;
    }
    uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
    local_c8 = local_a8;
    uVar4 = local_c8;
    local_d8 = (undefined4)local_b8;
    uStack_d4 = local_b8._4_4_;
    uStack_d0 = (undefined4)uStack_b0;
    uStack_cc = uStack_b0._4_4_;
    local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_e0 = &local_98;
    if ((local_c8._4_4_ != iVar6) || (uStack_b0 != local_88)) {
      iVar5 = local_c8._4_4_;
      local_c8 = uVar4;
      do {
        uVar2 = *(undefined4 *)(*local_e0 + (longlong)iVar5 * 0xc);
        iVar5 = param_1[6];
        param_1[6] = iVar5 + 1U;
        if ((uint)param_1[7] < iVar5 + 1U) {
          FUN_1446f48e2(plVar1,iVar5);
        }
        *(undefined4 *)(*plVar1 + (longlong)iVar5 * 4) = uVar2;
        local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~uStack_d4);
        FUN_1449c0562(&local_d8);
        iVar5 = local_c8._4_4_;
      } while (((local_c8._4_4_ != iVar6) ||
               ((undefined1 *)CONCAT44(uStack_cc,uStack_d0) != local_88)) ||
              (uVar4 = local_c8, local_e0 != &local_98));
    }
    local_c8 = uVar4;
    param_1[0] = -1;
    param_1[1] = -1;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14113255e FUN_14113255e body=48 status=ok
// SIG undefined FUN_14113255e(void)

void FUN_14113255e(longlong param_1)

{
  FUN_14113258e();
  if (*(char *)(param_1 + 0x2978) != '\x01') {
    return;
  }
  FUN_14580f29e(param_1 + 0x2a10,param_1);
  return;
}



// FUNCTION 14113258e FUN_14113258e body=172 status=ok
// SIG undefined FUN_14113258e(void)

void FUN_14113258e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = *(longlong *)(param_1 + 0x2650);
  if (lVar2 == 0) {
    local_18 = *(undefined8 *)(param_1 + 0x2640);
    lVar2 = FUN_14050aea0();
    *(longlong *)(param_1 + 0x2650) = lVar2;
    if (lVar2 == 0) goto LAB_1411325c1;
  }
  lVar2 = FUN_1407c8d60(lVar2);
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x32) == '\x01')) &&
     (plVar1 = *(longlong **)(param_1 + 0x2670), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x420))(plVar1,0);
    *(undefined8 *)(param_1 + 0x2670) = 0;
  }
LAB_1411325c1:
  FUN_140f05dd8(param_1);
  FUN_14113263c(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14113263c FUN_14113263c body=1991 status=ok
// SIG undefined FUN_14113263c(void)

void FUN_14113263c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iVar14;
  code *pcVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_158 [32];
  undefined8 **local_138;
  undefined8 local_128;
  longlong *local_120;
  undefined8 *local_118;
  int local_110;
  undefined8 **local_108;
  ulonglong uStack_100;
  code *local_f8;
  longlong *plStack_f0;
  code *local_e8;
  longlong *local_e0;
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar8 = *(longlong *)(param_1 + 0x2650);
  if (lVar8 == 0) {
    local_e8 = *(code **)(param_1 + 0x2640);
    lVar8 = FUN_14050aea0();
    *(longlong *)(param_1 + 0x2650) = lVar8;
    if (lVar8 == 0) goto LAB_141132701;
  }
  lVar9 = FUN_1407c8d60(lVar8);
  if ((((lVar9 != 0) && (*(char *)(lVar9 + 0x29) != '\0')) ||
      ((lVar9 = FUN_1407c8d60(lVar8), lVar9 != 0 && (*(char *)(lVar9 + 0x2b) != '\0')))) ||
     ((lVar9 = FUN_1407c8d60(lVar8), lVar9 != 0 && (*(char *)(lVar9 + 0x2a) != '\0'))))
  goto LAB_141132701;
  uVar10 = FUN_1447210f0(param_1);
  lVar9 = FUN_140149a73(uVar10,0);
  if (lVar9 == 0) goto LAB_141132701;
  lVar11 = FUN_1412d7224(lVar9);
  if (lVar11 != 0) {
    uVar7 = FUN_14574753c(lVar9);
    local_e8 = (code *)CONCAT44(local_e8._4_4_,uVar7);
    lVar11 = FUN_140d17acc(lVar9);
    if (lVar11 != 0) {
      if ((*(longlong *)(param_1 + 0x2678) == 0) ||
         ((*(byte *)(*(longlong *)(param_1 + 0x2678) + 0x10) & 1) == 0)) {
        local_f8 = (code *)0x0;
        plStack_f0 = (longlong *)0x0;
        if (*(int *)(lVar8 + 0x170) == 0) {
          iVar16 = 0;
        }
        else {
          local_138 = (undefined8 **)((ulonglong)local_138 & 0xffffffffffffff00);
          FUN_140b11b44(lVar8 + 0x168,&local_e8,0,0);
          if (local_f8 != (code *)0x0) {
            FUN_1400020a8();
          }
          local_f8 = local_e8;
          plStack_f0 = local_e0;
          iVar16 = (int)local_e0;
        }
        pcVar15 = local_f8;
        lVar11 = *(longlong *)(lVar8 + 0x1a0);
        if (lVar11 == 0) {
          local_e8 = *(code **)(lVar8 + 400);
          lVar11 = FUN_14050aea0();
          *(longlong *)(lVar8 + 0x1a0) = lVar11;
          if (lVar11 != 0) goto LAB_14113282f;
        }
        else {
LAB_14113282f:
          do {
            if (*(int *)(lVar11 + 0x170) != 0) {
              if (iVar16 < 2) {
                local_138 = (undefined8 **)((ulonglong)local_138._1_7_ << 8);
                FUN_140b11b44(lVar11 + 0x168,&local_e8,0,0);
                if (local_f8 != (code *)0x0) {
                  FUN_1400020a8();
                }
                local_f8 = local_e8;
                plStack_f0 = local_e0;
                pcVar15 = local_e8;
                iVar16 = (int)local_e0;
              }
              else {
                local_138 = (undefined8 **)((ulonglong)local_138._1_7_ << 8);
                FUN_140b11b44(lVar11 + 0x168,&local_108,0,0);
                pcVar15 = local_f8;
                local_138 = (undefined8 **)&DAT_149dfb77a;
                if ((int)uStack_100 != 0) {
                  local_138 = local_108;
                }
                FUN_140002266(&local_e8,L"%s %s %s");
                if (pcVar15 != (code *)0x0) {
                  FUN_1400020a8();
                }
                pcVar15 = local_e8;
                local_f8 = local_e8;
                local_e8 = (code *)0x0;
                iVar16 = (int)local_e0;
                plStack_f0 = local_e0;
                local_e0 = (longlong *)0x0;
                if (local_108 != (undefined8 **)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            lVar12 = *(longlong *)(lVar11 + 0x1a0);
            if (lVar12 == 0) {
              local_e8 = *(code **)(lVar11 + 400);
              lVar12 = FUN_14050aea0(&local_e8);
              *(longlong *)(lVar11 + 0x1a0) = lVar12;
            }
            lVar11 = lVar12;
          } while (lVar12 != 0);
        }
        if (1 < iVar16) {
          local_108 = (undefined8 **)0x0;
          uStack_100 = 0;
          FUN_140bf89dc(&local_108,&local_f8,0);
          local_118 = (undefined8 *)0x0;
          local_110 = 0;
          FUN_1446efa72(&local_118,0,3,0x10);
          puVar6 = local_118;
          local_110 = 3;
          *local_118 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 1;
          lVar11 = DAT_14c758608 + 1;
          if (lVar12 == 0) {
            LOCK();
            UNLOCK();
            lVar12 = DAT_14c758608 + 2;
            lVar11 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar11;
          local_118[2] = lVar12;
          *local_118 = &PTR_FUN_14b9a5780;
          local_118[3] = 0;
          iVar16 = 0;
          if (param_1 != 0) {
            uVar3 = *(uint *)(param_1 + 0xc);
            *(uint *)(local_118 + 3) = uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar11 = 0;
            }
            iVar16 = *(int *)(lVar11 + 0x10);
            if (*(int *)(lVar11 + 0x10) == 0) {
              LOCK();
              iVar16 = DAT_14c964868 + 1;
              UNLOCK();
              iVar14 = DAT_14c964868 + 1;
              bVar17 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar16;
              if (bVar17) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar14);
              }
              LOCK();
              iVar16 = *(int *)(lVar11 + 0x10);
              bVar17 = iVar16 == 0;
              if (bVar17) {
                *(int *)(lVar11 + 0x10) = iVar14;
                iVar16 = 0;
              }
              UNLOCK();
              if (bVar17) {
                iVar16 = iVar14;
              }
            }
          }
          *(int *)((longlong)puVar6 + 0x1c) = iVar16;
          puVar6[4] = FUN_1411174fc;
          *(undefined4 *)(puVar6 + 5) = 0;
          memset(&local_e8,0,0xa0);
          uVar10 = FUN_140d84236(lVar9);
          uVar13 = FUN_140d84280(param_1 + 0x2678);
          local_138 = &local_118;
          FUN_140d84456(uVar13,&local_108,uVar10,&local_e8);
          if (local_88 != 0) {
            if (local_78 == (longlong *)0x0) {
              local_78 = local_68;
            }
            (**(code **)(*local_78 + 0x10))();
          }
          if (local_c8 != 0) {
            if (local_b8 == (longlong *)0x0) {
              local_b8 = local_a8;
            }
            (**(code **)(*local_b8 + 0x10))();
          }
          if (local_110 == 0) {
LAB_141132b10:
            if (local_118 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_118 != (undefined8 *)0x0) {
            (**(code **)*local_118)(local_118,0);
            FUN_1446efa72(&local_118,0,0,0x10);
            local_110 = 0;
            goto LAB_141132b10;
          }
          FUN_1447cd778(local_108,uStack_100 & 0xffffffff);
          pcVar15 = local_f8;
          if (local_108 != (undefined8 **)0x0) {
            FUN_1400020a8();
            pcVar15 = local_f8;
          }
        }
        if (pcVar15 != (code *)0x0) {
          FUN_1400020a8(pcVar15);
        }
      }
      if (*(int *)(param_1 + 0x2690) == 0) {
        local_120 = (longlong *)(param_1 + 0x2688);
        uVar10 = FUN_1447210f0(param_1);
        local_128 = FUN_1406f625c(uVar10);
        do {
          plVar4 = *(longlong **)(lVar8 + 0x178);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,&local_e8);
            pcVar15 = local_e8;
            if (local_e8 != (code *)0x0) {
              pcVar5 = *(code **)(lVar8 + 0x178);
              plVar4 = *(longlong **)(lVar8 + 0x180);
              if (plVar4 == (longlong *)0x0) {
                plStack_f0 = (longlong *)0x0;
                local_f8 = pcVar5;
                FUN_143defa18(local_e8,local_128,&local_f8);
              }
              else {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
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
                local_f8 = pcVar5;
                plStack_f0 = plVar4;
                FUN_143defa18(pcVar15,local_128,&local_f8);
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
              (**(code **)(*(longlong *)local_e8 + 0x10))();
              local_f8 = FUN_1411174fc;
              plStack_f0 = (longlong *)((ulonglong)plStack_f0 & 0xffffffff00000000);
              FUN_146636b38(local_e8 + 0x20,&local_108,param_1,&local_f8);
              plVar4 = local_e0;
              pcVar15 = local_e8;
              if (local_e0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
                UNLOCK();
              }
              iVar16 = *(int *)(param_1 + 0x2690);
              *(uint *)(param_1 + 0x2690) = iVar16 + 1U;
              if (*(uint *)(param_1 + 0x2694) < iVar16 + 1U) {
                FUN_146557a24(local_120,iVar16);
              }
              lVar11 = *local_120;
              *(code **)(lVar11 + (longlong)iVar16 * 0x10) = pcVar15;
              *(longlong **)(lVar11 + 8 + (longlong)iVar16 * 0x10) = plVar4;
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
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
            plVar4 = local_e0;
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_e0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_e0)(local_e0);
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
          lVar11 = *(longlong *)(lVar8 + 0x1a0);
          if (lVar11 == 0) {
            local_e8 = *(code **)(lVar8 + 400);
            lVar11 = FUN_14050aea0(&local_e8);
            *(longlong *)(lVar8 + 0x1a0) = lVar11;
          }
          lVar8 = lVar11;
        } while (lVar11 != 0);
      }
      if (*(longlong *)(param_1 + 0x2620) != 0) {
        FUN_140457ffc(lVar9 + 8,param_1);
        *(undefined8 *)(param_1 + 0x2620) = 0;
      }
      goto LAB_141132701;
    }
  }
  if (*(longlong *)(param_1 + 0x2620) == 0) {
    local_e8 = FUN_1458b74ca;
    local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
    FUN_14587f4ea(lVar9 + 8,&local_f8,param_1);
    *(code **)(param_1 + 0x2620) = local_f8;
  }
LAB_141132701:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141132e04 FUN_141132e04 body=270 status=ok
// SIG undefined FUN_141132e04(void)

undefined8 FUN_141132e04(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_141132f0c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141132f0c;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_141132f0c:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141132eba;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_141132eba;
    }
  }
  uVar6 = 0;
LAB_141132eba:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141132f14 FUN_141132f14 body=599 status=ok
// SIG undefined FUN_141132f14(void)

void FUN_141132f14(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x58);
  local_48 = param_1 + 0x68;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_78 = local_40;
  iStack_74 = iStack_3c;
  local_70 = local_38;
  local_6c = local_34;
  local_88 = local_50;
  local_80 = local_48;
  local_58 = 0;
  local_90 = plVar1;
  local_68 = plVar1;
  local_60 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      lVar2 = *local_90;
      lVar8 = (longlong)iStack_74;
      lVar3 = *(longlong *)(lVar2 + lVar8 * 0x20);
      if (((((lVar3 == 0) || (lVar5 = FUN_1411080a4(), lVar5 == 0)) ||
           (*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38))) ||
          ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
            lVar5 + 0x30 || (lVar2 = *(longlong *)(lVar2 + lVar8 * 0x20), lVar2 == 0)))) ||
         ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
        FUN_1479aee42(local_68,iStack_74);
        local_58 = CONCAT11(local_58._1_1_,1);
      }
      else {
        iVar7 = *(int *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20);
        if (0 < (longlong)iVar7) {
          lVar2 = *local_90 + (longlong)iStack_74 * 0x20;
          iVar10 = -iVar7;
          uVar9 = (longlong)iVar7;
          do {
            lVar3 = *(longlong *)(lVar2 + 8);
            lVar8 = *(longlong *)(lVar3 + -8 + uVar9 * 8);
            if ((lVar8 == 0) || ((*(uint *)(lVar8 + 8) >> 0x1e & 1) != 0)) {
              uVar6 = *(uint *)(lVar2 + 0x10);
              if (uVar9 != uVar6) {
                iVar7 = iVar10 + uVar6;
                if (0 < iVar7) {
                  iVar7 = 1;
                }
                memmove((void *)(lVar3 + uVar9 * 8 + -8),
                        (void *)(lVar3 + (longlong)(int)(uVar6 - iVar7) * 8),(longlong)iVar7 << 3);
                uVar6 = *(uint *)(lVar2 + 0x10);
              }
              *(uint *)(lVar2 + 0x10) = uVar6 - 1;
              FUN_1479aeda6((longlong *)(lVar2 + 8));
            }
            iVar10 = iVar10 + 1;
            bVar4 = 1 < uVar9;
            uVar9 = uVar9 - 1;
          } while (bVar4);
        }
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 0x18));
    if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
      FUN_1479aeadc(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14113316c FUN_14113316c body=1155 status=ok
// SIG undefined FUN_14113316c(void)

void FUN_14113316c(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140be4ae0();
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
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
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = 0xb;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_14170fd90;
      local_a0 = 0x8000000000000000;
      local_a8 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_50);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_50);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_50);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_50 = (undefined4)uVar2;
      uStack_4c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_50);
    }
  }
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_90 = FUN_1408a629c;
      local_98 = &DAT_14c9520b8;
      local_a0 = 0;
      local_a8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_54);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_54);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_54 = (undefined4)uVar2;
      uStack_50 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_54);
    }
  }
  uVar4 = local_54;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = CONCAT44(uStack_4c,uStack_50);
  local_68 = local_48;
  local_60 = 0;
  local_80 = local_38;
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_78 = uStack_30;
  FUN_1411335f0(&local_80,&local_70,uVar4);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411335f0 FUN_1411335f0 body=324 status=ok
// SIG undefined FUN_1411335f0(void)

void FUN_1411335f0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    lVar2 = FUN_140414d56();
    if (lVar2 != 0) {
      if (*param_1 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[1];
      }
      uVar3 = (**(code **)(*plVar4 + 0x10))();
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      local_3c = 0xff;
      local_40 = 0;
      local_48 = 0;
      FUN_14488cef8(uVar3,&local_58,lVar2,0);
      if ((((plStack_50 != (longlong *)0x0) && (local_58._4_4_ != 0)) && (-1 < (int)(uint)local_58))
         && ((int)(uint)local_58 < DAT_14c9647dc)) {
        lVar2 = (ulonglong)(((uint)local_58 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_58 >> 0x10) * 8);
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == local_58._4_4_)) &&
           ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
          uVar3 = (**(code **)(*plStack_50 + 0x10))();
          cVar1 = FUN_14486eb0e(uVar3,&local_58);
          if (cVar1 != '\0') {
            uVar3 = FUN_14008e0ae(&local_58);
            FUN_1409d461e(uVar3,param_3,1);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141133736 FUN_141133736 body=1332 status=ok
// SIG undefined FUN_141133736(void)

void FUN_141133736(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  code *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  longlong local_140;
  longlong local_138;
  undefined1 local_130 [16];
  longlong local_120;
  longlong local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined8 local_f4;
  code *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  int local_a8;
  undefined4 local_a4;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined1 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined5 uStack_78;
  undefined3 local_73;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 local_59;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar12 = (longlong)*(int *)(param_3 + 0x10);
  if (((lVar12 < 0) || (*(int *)(param_1 + 0x70) <= *(int *)(param_3 + 0x10))) ||
     (lVar11 = *(longlong *)(param_1 + 0x68), *(longlong *)(lVar11 + lVar12 * 0x28) == 0))
  goto LAB_141133aad;
  local_140 = *(longlong *)(param_1 + 0x58);
  lVar7 = FUN_141133cd0();
  if (DAT_14c951858 == 0) {
    local_160 = &local_e8;
    local_e8 = FUN_1449e2820;
    local_150 = FUN_14081d0ea;
    local_158 = FUN_14081d0ea;
    local_168 = &LAB_1468c5283;
    local_170 = FUN_142809da0;
    local_178 = L"Engine";
    local_180 = 0x400000000;
    local_188 = 0x10000000;
    local_190 = 8;
    local_198 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar8 = *(longlong *)(param_1 + -0xd8);
  if (lVar8 == 0) {
    lVar13 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (lVar13 = lVar8,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         != lVar7 + 0x30)) {
        lVar13 = 0;
      }
    } while ((lVar13 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
  }
  lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x548) + 8);
  lVar10 = (ulonglong)*(ushort *)(param_3 + 0x30) * 0x128;
  lVar7 = lVar8 + lVar10;
  local_c8 = *(undefined8 *)(lVar8 + 0x88 + lVar10);
  puVar1 = (undefined8 *)(lVar8 + 0x68 + lVar10);
  local_e8 = (code *)*puVar1;
  uStack_e0 = *(undefined4 *)(puVar1 + 1);
  uStack_dc = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar2 = (undefined4 *)(lVar8 + 0x78 + lVar10);
  local_d8 = *puVar2;
  uStack_d4 = puVar2[1];
  uStack_d0 = puVar2[2];
  uStack_cc = puVar2[3];
  local_c0 = *(undefined8 *)(lVar8 + 0x90 + lVar10);
  local_b8 = *(undefined4 *)(lVar8 + 0x98 + lVar10);
  local_b0 = 0;
  iVar3 = *(int *)(lVar8 + 0xa8 + lVar10);
  uVar9 = *(undefined8 *)(lVar8 + 0xa0 + lVar10);
  local_138 = lVar11;
  local_a8 = iVar3;
  if (iVar3 == 0) {
    local_a4 = 0;
  }
  else {
    FUN_14753cf4a(&local_b0,iVar3,0);
    FUN_14753cfbd(local_b0,uVar9,iVar3);
  }
  local_a0 = (void *)0x0;
  local_98 = *(int *)(lVar7 + 0xb8);
  lVar11 = (longlong)local_98;
  pvVar4 = *(void **)(lVar7 + 0xb0);
  if (lVar11 == 0) {
    local_94 = 0;
  }
  else {
    FUN_1456c5740(&local_a0,local_98,0);
    memcpy(local_a0,pvVar4,lVar11 << 3);
  }
  local_90 = *(undefined1 *)(lVar7 + 0xc0);
  local_88 = (void *)0x0;
  local_80 = *(int *)(lVar7 + 0xd0);
  lVar11 = (longlong)local_80;
  pvVar4 = *(void **)(lVar7 + 200);
  if (lVar11 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1447bda9e(&local_88,local_80,0);
    memcpy(local_88,pvVar4,lVar11 << 2);
  }
  uVar9 = *(undefined8 *)(lVar7 + 0xd8);
  uVar5 = *(ulonglong *)(lVar7 + 0xdd);
  uStack_70 = (undefined4)(uVar5 >> 0x18);
  uStack_6c = (undefined1)(uVar5 >> 0x38);
  uStack_78 = (undefined5)uVar9;
  local_73 = (undefined3)((ulonglong)uVar9 >> 0x28);
  if (((int)uVar9 != 0) && ((uVar5 & 0x200000000000000) == 0)) {
    if ((int)local_c8 == 0) {
      bVar6 = *(byte *)(lVar13 + 0x108) & 1;
joined_r0x000141133aec:
      if (bVar6 == 0) goto LAB_141133a66;
    }
    else if ((int)local_c8 == 1) {
      bVar6 = *(byte *)(lVar13 + 0x108) & 2;
      goto joined_r0x000141133aec;
    }
    if (*(char *)(lVar13 + 0x10c) == '\x02') {
      uVar9 = FUN_1475c8954(param_2);
    }
    else if (*(char *)(lVar13 + 0x10c) == '\0') {
      uVar9 = FUN_1475c88f0();
    }
    else {
      uVar9 = FUN_141133c6c();
    }
    FUN_14087ad3e(&local_c0,local_130);
    local_59 = 0xf;
    FUN_1405bad34(local_130,&local_58,*(undefined4 *)(local_140 + lVar12 * 4));
    if (local_120 != 0) {
      FUN_1400020a8();
    }
    if (local_50 == '\x01') {
      FUN_141133e44(local_130,local_138 + lVar12 * 0x28);
      puVar2 = *(undefined4 **)(param_3 + 8);
      if (puVar2 == (undefined4 *)0x0) {
        local_108 = 0;
        uStack_104 = 0;
        uStack_100 = 0;
        uStack_fc = 0;
      }
      else {
        local_108 = *puVar2;
        uStack_104 = puVar2[1];
        uStack_100 = puVar2[2];
        uStack_fc = puVar2[3];
      }
      local_f8 = *(undefined4 *)(lVar7 + 0x110);
      local_f4 = local_58;
      FUN_141133db6(uVar9,*(undefined4 *)(lVar7 + 0x122),local_130);
      *(undefined8 *)(param_2 + 0x278) = *(undefined8 *)(param_2 + 0x270);
      *(undefined1 *)(param_2 + 0x289) = 1;
      if (local_118 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_141133a66:
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447bda9c(local_b0,local_a8);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
LAB_141133aad:
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141133c6c FUN_141133c6c body=98 status=ok
// SIG undefined FUN_141133c6c(void)

void FUN_141133c6c(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_141134102();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14009ee5c(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141133cd0 FUN_141133cd0 body=228 status=ok
// SIG undefined FUN_141133cd0(void)

longlong FUN_141133cd0(void)

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
  if (DAT_14cab6568 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1410f863e;
    local_38 = &LAB_1476be2bd;
    local_40 = FUN_1417a8caa;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x120;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneEventTrack",&DAT_14cab6568,&DAT_1476be2bc)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6568;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141133db6 FUN_141133db6 body=141 status=ok
// SIG undefined FUN_141133db6(void)

void FUN_141133db6(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  plVar10 = (longlong *)FUN_14113403a(param_1 + 0x40,param_2 & 0xffff);
  iVar2 = (int)plVar10[1];
  *(uint *)(plVar10 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar10 + 0xc) < iVar2 + 1U) {
    FUN_1411341e8(plVar10,iVar2);
  }
  lVar1 = *plVar10 + (longlong)iVar2 * 0x48;
  FUN_141133e44(lVar1,param_3);
  uVar3 = *(undefined4 *)(param_3 + 0x2c);
  uVar4 = *(undefined4 *)(param_3 + 0x30);
  uVar5 = *(undefined4 *)(param_3 + 0x34);
  uVar6 = *(undefined4 *)(param_3 + 0x34);
  uVar7 = *(undefined4 *)(param_3 + 0x38);
  uVar8 = *(undefined4 *)(param_3 + 0x3c);
  uVar9 = *(undefined4 *)(param_3 + 0x40);
  *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(lVar1 + 0x2c) = uVar3;
  *(undefined4 *)(lVar1 + 0x30) = uVar4;
  *(undefined4 *)(lVar1 + 0x34) = uVar5;
  *(undefined4 *)(lVar1 + 0x34) = uVar6;
  *(undefined4 *)(lVar1 + 0x38) = uVar7;
  *(undefined4 *)(lVar1 + 0x3c) = uVar8;
  *(undefined4 *)(lVar1 + 0x40) = uVar9;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141133e44 FUN_141133e44 body=502 status=ok
// SIG undefined FUN_141133e44(void)

longlong * FUN_141133e44(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar3 = *param_2;
  *param_1 = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar1 = param_2 + 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951a88) {
    FUN_144b3d300(&DAT_14c951a88);
    if (DAT_14c951a88 == -1) {
      uVar4 = FUN_140342cba();
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar4,FUN_1468c7f1e);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
  }
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    if ((int)param_2[4] != 0) goto LAB_141133f2e;
  }
  else {
    if (*(int *)((longlong)param_2 + 0x14) == 0) {
LAB_141133f20:
      bVar7 = false;
    }
    else {
      uVar2 = *(uint *)(param_2 + 2);
      bVar7 = false;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        if ((lVar6 == 0) || (*(int *)(lVar6 + 0x10) != *(int *)((longlong)param_2 + 0x14)))
        goto LAB_141133f20;
        bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) == 0;
      }
    }
    if ((bVar7) || ((int)param_2[4] == 0)) goto LAB_141133ef9;
LAB_141133f2e:
    lVar3 = FUN_14007daa4(plVar1,0,0);
    if (lVar3 != 0) {
      puVar5 = *(undefined **)(lVar3 + 8);
      if (DAT_14c951a40 == 0) {
        bVar7 = puVar5 != (undefined *)0x0;
        if (puVar5 != &DAT_14c951a38 && bVar7) {
          do {
            puVar5 = *(undefined **)(puVar5 + 0x30);
            bVar7 = puVar5 != (undefined *)0x0;
            if (puVar5 == &DAT_14c951a38) break;
          } while (puVar5 != (undefined *)0x0);
        }
        if (!bVar7) goto LAB_141134027;
      }
      else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c951a40) == 0) goto LAB_141134027;
      *plVar1 = lVar3;
      goto LAB_141133ef9;
    }
LAB_141134027:
    if (*plVar1 != 0) {
      *plVar1 = 0;
      param_2[2] = 0;
    }
  }
  lVar3 = 0;
LAB_141133ef9:
  param_1[1] = lVar3;
  param_1[2] = param_2[2];
  FUN_1406fa324(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 14113403a FUN_14113403a body=199 status=ok
// SIG undefined FUN_14113403a(void)

longlong FUN_14113403a(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar2 != 0) goto LAB_141134092;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_14113435a(param_1,&local_1c,param_2);
  lVar2 = (longlong)local_1c * 0x20 + *param_1;
LAB_141134092:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 141134102 FUN_141134102 body=228 status=ok
// SIG undefined FUN_141134102(void)

longlong FUN_141134102(void)

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
  if (DAT_14cab5df8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145990c80;
    local_38 = &LAB_14765c777;
    local_40 = FUN_14634acee;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieScenePostEvalEventSystem",&DAT_14cab5df8,
                  &DAT_14765c776);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab5df8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411341e8 FUN_1411341e8 body=370 status=ok
// SIG undefined FUN_1411341e8(void)

void FUN_1411341e8(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 0x48;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141134271;
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
LAB_141134271:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 14113435a FUN_14113435a body=857 status=ok
// SIG undefined FUN_14113435a(void)

int * FUN_14113435a(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  char cVar17;
  int *piVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1447711aa(param_1,iVar15);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar5 = iVar12 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar7 = param_1 + 2;
    iVar10 = iVar12 + 1;
    iVar16 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar16 = iVar12;
    }
    if (iVar16 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar5 = iVar12;
        }
        else {
          uVar6 = iVar12 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar6) {
              uVar9 = uVar6;
            }
          }
          else {
            uVar9 = (uVar6 * 3 >> 3) + uVar6 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar9 << 2,0);
          iVar5 = (int)(uVar11 >> 2);
          iVar10 = -0x20;
          if ((int)uVar6 <= iVar5) {
            iVar10 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar7,iVar5);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar5 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar5 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar7;
        }
        bVar8 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar5 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar14 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar12 & 0x1f;
    puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar14 = (longlong)iVar15;
    iVar12 = *(int *)(*param_1 + 4 + lVar14 * 0x20);
    *(int *)(param_1 + 6) = iVar12;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x20) = 0xffffffff;
    }
  }
  plVar7 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[4];
  }
  iVar12 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar12 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar12 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  lVar4 = *param_1;
  lVar14 = lVar14 * 0x20;
  piVar18 = (int *)(lVar4 + lVar14);
  *(undefined4 *)(lVar4 + lVar14) = *(undefined4 *)*param_4;
  puVar3 = (undefined8 *)(lVar4 + 8 + lVar14);
  *puVar3 = 0;
  puVar3[1] = 0;
  cVar17 = '\0';
  FUN_140ee3645(0,0);
  *(undefined4 *)(lVar4 + 0x18 + lVar14) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar7 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[8];
      }
      iVar12 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
      if (iVar12 != -1) {
        do {
          piVar2 = (int *)(*param_1 + (longlong)iVar12 * 0x20);
          if (*(int *)(*param_1 + (longlong)iVar12 * 0x20) == *piVar18) {
            FUN_140ee3645(*(undefined8 *)(piVar2 + 2),piVar2[4]);
            if (*(longlong *)(piVar2 + 2) != 0) {
              FUN_1400020a8();
            }
            iVar12 = *piVar18;
            iVar5 = piVar18[1];
            iVar10 = piVar18[2];
            iVar16 = piVar18[3];
            *(undefined8 *)(piVar2 + 4) = *(undefined8 *)(piVar18 + 4);
            *piVar2 = iVar12;
            piVar2[1] = iVar5;
            piVar2[2] = iVar10;
            piVar2[3] = iVar16;
            FUN_14768a2a8(param_1,iVar15);
            cVar17 = '\x01';
            break;
          }
          iVar12 = piVar2[6];
          cVar17 = '\0';
        } while (iVar12 != -1);
        goto LAB_141134475;
      }
    }
    cVar17 = '\0';
  }
LAB_141134475:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar17;
  }
  if (cVar17 == '\0') {
    uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar12 = 1;
    if (3 < uVar6) {
      uVar11 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar12 <= (int)param_1[9])) {
      param_3 = (int)param_1[9] - 1U & param_3;
      piVar18[7] = param_3;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      piVar18[6] = *(int *)((longlong)plVar7 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
           iVar15;
    }
    else {
      *(int *)(param_1 + 9) = iVar12;
      FUN_14580f4f4(param_1);
    }
  }
  *param_2 = iVar15;
  return param_2;
}



// FUNCTION 1411346b4 FUN_1411346b4 body=145 status=ok
// SIG undefined FUN_1411346b4(void)

void FUN_1411346b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8041d0;
  param_1[5] = &PTR_FUN_14a8047e0;
  param_1[6] = &PTR_LAB_14a804820;
  if (param_1[0x184] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x173] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6b] != 0) {
    FUN_1400020a8();
  }
  FUN_1400e59f7(param_1[0x69],*(undefined4 *)(param_1 + 0x6a));
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 141134746 FUN_141134746 body=91 status=ok
// SIG undefined FUN_141134746(void)

void FUN_141134746(longlong param_1)

{
  FUN_1411347a1(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1411347a1 FUN_1411347a1 body=79 status=ok
// SIG undefined FUN_1411347a1(void)

void FUN_1411347a1(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-8] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1411347f0 FUN_1411347f0 body=55 status=ok
// SIG undefined FUN_1411347f0(void)

void FUN_1411347f0(longlong *param_1)

{
  FUN_141134828(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141134828 FUN_141134828 body=522 status=ok
// SIG undefined FUN_141134828(void)

void FUN_141134828(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      if (*(longlong *)(lVar11 + 0x38 + (longlong)iVar6 * 0x50) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar11 + (longlong)iVar6 * 0x50 + 8) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar11 == lVar8) goto LAB_141134981;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_141134981:
  iVar13 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_140e9549c(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar12 = iVar13 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141134a34 FUN_141134a34 body=490 status=ok
// SIG undefined FUN_141134a34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141134a34(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_14001cc68(0x398,0x10);
  plVar2[1] = (longlong)&DAT_100000001;
  *plVar2 = (longlong)&PTR_FUN_14b965ad0;
  FUN_141134c20(plVar2 + 2,param_1,param_3);
  plVar5 = plVar2 + 2;
  *plVar5 = (longlong)&PTR_FUN_14b964d20;
  local_48 = plVar5;
  if ((plVar5 == (longlong *)0x0) ||
     (((plVar2[3] != 0 && (plVar2[4] != 0)) && (0 < *(int *)(plVar2[4] + 8))))) {
    if (plVar2 == (longlong *)0x0) goto LAB_141134bd6;
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar4 = (longlong *)&DAT_00000020;
      plVar3 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_141134bbd:
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
        *plVar4 = (longlong)plVar2;
        if (plVar2 != (longlong *)0x0) goto LAB_141134ae0;
      }
LAB_141134bd6:
      local_40 = (longlong *)0x0;
      (**(code **)(*param_1 + 0x2f0))(param_1,&local_48,param_3);
      *param_2 = plVar5;
      param_2[1] = 0;
      goto LAB_141134b24;
    }
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar2[3] = (longlong)plVar5;
    if ((longlong *)plVar2[4] != plVar2) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar2[4] != (longlong *)0x0) {
        plVar4 = plVar2 + 4;
        plVar3 = (longlong *)plVar2[4];
        goto LAB_141134bbd;
      }
      plVar2[4] = (longlong)plVar2;
    }
LAB_141134ae0:
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  UNLOCK();
  LOCK();
  plVar4 = plVar2 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  UNLOCK();
  local_40 = plVar2;
  (**(code **)(*param_1 + 0x2f0))(param_1,&local_48,param_3);
  *param_2 = plVar5;
  param_2[1] = plVar2;
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  UNLOCK();
  LOCK();
  plVar5 = plVar2 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
LAB_141134b24:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141134c20 FUN_141134c20 body=284 status=ok
// SIG undefined FUN_141134c20(void)

undefined8 * FUN_141134c20(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  FUN_140724c88();
  *param_1 = &PTR_FUN_14b3f62d0;
  param_1[0x1a] = 0;
  FUN_141134e22(param_1 + 0x1b);
  param_1[0x6f] = param_2;
  param_1[0x70] = 0;
  lVar5 = param_1[0x15];
  if (lVar5 != 0) {
    lVar3 = FUN_141134d3c();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar1 = *(uint *)(lVar5 + 0xc);
      *(uint *)(param_1 + 0x70) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar2 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar6 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar6) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar2 = *(int *)(lVar5 + 0x10);
        bVar6 = iVar2 == 0;
        if (bVar6) {
          *(int *)(lVar5 + 0x10) = iVar4;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar6) {
          iVar2 = iVar4;
        }
      }
      goto LAB_141134ccc;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  iVar2 = 0;
LAB_141134ccc:
  *(int *)((longlong)param_1 + 900) = iVar2;
  FUN_141135066(param_1 + 0x1b);
  return param_1;
}



// FUNCTION 141134d3c FUN_141134d3c body=228 status=ok
// SIG undefined FUN_141134d3c(void)

longlong FUN_141134d3c(void)

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
  if (DAT_14cb56050 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464b60d2;
    local_38 = &LAB_14862d99b;
    local_40 = FUN_141844aba;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTrickScript_ControlledMove",&DAT_14cb56050,&DAT_14862d99a)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb56050;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141134e22 FUN_141134e22 body=580 status=ok
// SIG undefined FUN_141134e22(void)

void FUN_141134e22(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x13] = DAT_14c8464e0;
  param_1[0x14] = uVar1;
  param_1[0x15] = DAT_14c8464f0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1f] = DAT_14c8464e0;
  param_1[0x20] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x22] = DAT_14c8464e0;
  param_1[0x23] = uVar1;
  param_1[0x24] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x28] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x26] = DAT_14c8464e0;
  param_1[0x27] = uVar1;
  param_1[0x2b] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x29] = DAT_14c8464e0;
  param_1[0x2a] = uVar1;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x30] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x2e] = DAT_14c8464e0;
  param_1[0x2f] = uVar1;
  param_1[0x33] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x31] = DAT_14c8464e0;
  param_1[0x32] = uVar1;
  param_1[0x36] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x34] = DAT_14c8464e0;
  param_1[0x35] = uVar1;
  param_1[0x39] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x37] = DAT_14c8464e0;
  param_1[0x38] = uVar1;
  param_1[0x3c] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x3a] = DAT_14c8464e0;
  param_1[0x3b] = uVar1;
  param_1[0x3d] = 0;
  *(undefined1 *)((longlong)param_1 + 500) = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x40] = DAT_14c8464e0;
  param_1[0x41] = uVar1;
  param_1[0x45] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x43] = DAT_14c8464e0;
  param_1[0x44] = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x46] = 0;
  param_1[0x4c] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x4a] = DAT_14c8464e0;
  param_1[0x4b] = uVar1;
  param_1[0x4f] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x4d] = DAT_14c8464e0;
  param_1[0x4e] = uVar1;
  param_1[0x52] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x50] = DAT_14c8464e0;
  param_1[0x51] = uVar1;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(byte *)((longlong)param_1 + 0x299) = *(byte *)((longlong)param_1 + 0x299) & 0xe0;
  return;
}



// FUNCTION 141135066 FUN_141135066 body=1682 status=ok
// SIG undefined FUN_141135066(void)

void FUN_141135066(uint *param_1)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  longlong lVar12;
  undefined1 uVar13;
  bool bVar14;
  undefined1 auStack_328 [40];
  longlong local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  uint local_2e8 [4];
  longlong *local_2d8;
  longlong local_2d0;
  char local_2c8;
  undefined8 local_2c0;
  undefined8 *local_2b8;
  int local_2b0;
  char local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined8 uStack_25c;
  uint local_250;
  uint uStack_24c;
  uint uStack_248;
  uint uStack_244;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  undefined8 local_120;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  uint local_f8;
  byte local_f4;
  undefined8 local_f0;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if (param_1[1] == 0) {
LAB_14113569e:
    lVar12 = 0;
  }
  else {
    uVar6 = *param_1;
    lVar12 = 0;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         ((*(uint *)(plVar8 + 2) != param_1[1] || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0))))
      goto LAB_14113569e;
      lVar12 = *plVar8;
    }
  }
  param_1[0] = 0;
  param_1[1] = 0;
  puVar11 = param_1 + 2;
  local_2f0 = *(undefined8 *)(param_1 + 2);
  plVar8 = *(longlong **)(param_1 + 4);
  if (plVar8 == (longlong *)0x0) {
    puVar11[0] = 0;
    puVar11[1] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_1 + 4);
    puVar11[0] = 0;
    puVar11[1] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  bVar2 = (byte)param_1[8];
  bVar5 = bVar2;
  if ((bVar2 == 1) &&
     (local_300 = *(longlong *)(param_1 + 6), (local_300 != 0 & DAT_14c950c29) == 1)) {
    FUN_1456cec3c(local_300);
    bVar5 = (byte)param_1[8];
  }
  if ((bVar5 & 1) != 0) {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  local_2c8 = '\0';
  local_2c0 = 0;
  local_2a8 = '\0';
  local_2a0 = 0;
  uStack_298 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_270 = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  local_2e8[0] = 0;
  local_2e8[1] = 0;
  local_2e8[2] = 0;
  local_2e8[3] = 0;
  local_2d8 = (longlong *)0x0;
  local_250 = (uint)DAT_14c8464e0;
  uStack_24c = DAT_14c8464e0._4_4_;
  uStack_248 = (uint)DAT_14c8464e8;
  uStack_244 = DAT_14c8464e8._4_4_;
  local_240 = DAT_14c8464f0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1e0 = DAT_14c8464f0;
  local_1f0 = CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
  uStack_1e8 = CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
  local_1c8 = DAT_14c8464f0;
  local_1c0 = 0;
  local_1a8 = DAT_14c8464f0;
  local_190 = DAT_14c8464f0;
  local_188 = 0;
  local_180 = 0;
  local_168 = DAT_14c8464f0;
  local_150 = DAT_14c8464f0;
  local_138 = DAT_14c8464f0;
  uStack_e8 = (uint)DAT_14c8464e0;
  uStack_e4 = DAT_14c8464e0._4_4_;
  uStack_e0 = (uint)DAT_14c8464e8;
  uStack_dc = DAT_14c8464e8._4_4_;
  local_120 = DAT_14c8464f0;
  local_108 = DAT_14c8464f0;
  local_100 = 0;
  local_f4 = 0;
  local_f0 = 0;
  uStack_d8 = DAT_14c8464f0;
  local_c0 = DAT_14c8464f0;
  local_a4 = 0;
  local_b8 = 0;
  local_b0._0_1_ = 0;
  local_88 = DAT_14c8464f0;
  local_98 = CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
  uStack_90 = CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
  local_70 = DAT_14c8464f0;
  local_80 = CONCAT44(DAT_14c8464e0._4_4_,(uint)DAT_14c8464e0);
  uStack_78 = CONCAT44(DAT_14c8464e8._4_4_,(uint)DAT_14c8464e8);
  local_58 = DAT_14c8464f0;
  local_68 = (uint)DAT_14c8464e0;
  uStack_64 = DAT_14c8464e0._4_4_;
  uStack_60 = (uint)DAT_14c8464e8;
  uStack_5c = DAT_14c8464e8._4_4_;
  local_50 = (local_50._1_1_ & 0xe0) << 8;
  param_1[0] = 0;
  param_1[1] = 0;
  local_2f8 = lVar12;
  local_1d8 = local_1f0;
  uStack_1d0 = uStack_1e8;
  local_1b8 = local_1f0;
  uStack_1b0 = uStack_1e8;
  local_1a0 = local_1f0;
  uStack_198 = uStack_1e8;
  local_178 = local_1f0;
  uStack_170 = uStack_1e8;
  local_160 = local_1f0;
  uStack_158 = uStack_1e8;
  local_148 = uStack_e8;
  uStack_144 = uStack_e4;
  local_130 = uStack_e8;
  uStack_12c = uStack_e4;
  local_118 = uStack_e8;
  uStack_114 = uStack_e4;
  local_d0 = uStack_e8;
  uStack_cc = uStack_e4;
  uStack_140 = uStack_e0;
  uStack_13c = uStack_dc;
  uStack_128 = uStack_e0;
  uStack_124 = uStack_dc;
  uStack_110 = uStack_e0;
  uStack_10c = uStack_dc;
  uStack_c8 = uStack_e0;
  uStack_c4 = uStack_dc;
  if (local_2e8 != param_1) {
    param_1[2] = 0;
    param_1[3] = 0;
    local_2e8[2] = 0;
    local_2e8[3] = 0;
    plVar3 = *(longlong **)(param_1 + 4);
    param_1[4] = 0;
    param_1[5] = 0;
    local_2d8 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    if (local_2c8 == '\x01') {
      *(longlong *)(param_1 + 6) = local_2d0;
      uVar13 = 1;
      if ((local_2d0 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
    }
    else {
      if ((char)param_1[8] != '\x01') goto LAB_141135371;
      uVar13 = 0;
    }
    *(undefined1 *)(param_1 + 8) = uVar13;
  }
LAB_141135371:
  *(undefined8 *)(param_1 + 10) = local_2c0;
  FUN_14112337a(param_1 + 0xc,&local_2b8);
  *(undefined8 *)(param_1 + 0x12) = local_2a0;
  memcpy(param_1 + 0x14,&uStack_298,0x98);
  *(undefined8 *)(param_1 + 0x3a) = uStack_200;
  *(undefined8 *)(param_1 + 0x3c) = local_1f8;
  memcpy(param_1 + 0x3e,&local_1f0,0xf8);
  lVar12 = local_2f8;
  if (local_2e8 == param_1) {
    *(undefined8 *)(param_1 + 0x8a) = local_c0;
    param_1[0x86] = local_d0;
    param_1[0x87] = uStack_cc;
    param_1[0x88] = uStack_c8;
    param_1[0x89] = uStack_c4;
    param_1[0x82] = uStack_e0;
    param_1[0x83] = uStack_dc;
    param_1[0x84] = (uint)uStack_d8;
    param_1[0x85] = uStack_d8._4_4_;
    param_1[0x7e] = (uint)local_f0;
    param_1[0x7f] = local_f0._4_4_;
    param_1[0x80] = uStack_e8;
    param_1[0x81] = uStack_e4;
LAB_14113547a:
    *(undefined8 *)(param_1 + 0x8c) = local_b8;
    puVar10 = &local_b0;
    puVar11 = param_1 + 0x8e;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined8 *)puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 2;
    }
    *(short *)(param_1 + 0xa6) = local_50;
    if ((local_f4 & 1) != 0) {
      local_f4 = 0;
    }
  }
  else {
    if ((local_f4 & 1) != 0) {
      param_1[0x7c] = local_f8;
      uVar13 = 1;
LAB_141135446:
      *(undefined1 *)(param_1 + 0x7d) = uVar13;
      param_1[0x7e] = (uint)local_f0;
      param_1[0x7f] = local_f0._4_4_;
      param_1[0x80] = uStack_e8;
      param_1[0x81] = uStack_e4;
      param_1[0x82] = uStack_e0;
      param_1[0x83] = uStack_dc;
      param_1[0x84] = (uint)uStack_d8;
      param_1[0x85] = uStack_d8._4_4_;
      param_1[0x86] = local_d0;
      param_1[0x87] = uStack_cc;
      param_1[0x88] = uStack_c8;
      param_1[0x89] = uStack_c4;
      *(undefined8 *)(param_1 + 0x8a) = local_c0;
      goto LAB_14113547a;
    }
    if ((char)param_1[0x7d] != '\0') {
      uVar13 = 0;
      goto LAB_141135446;
    }
    *(undefined8 *)(param_1 + 0x8a) = local_c0;
    param_1[0x86] = local_d0;
    param_1[0x87] = uStack_cc;
    param_1[0x88] = uStack_c8;
    param_1[0x89] = uStack_c4;
    param_1[0x82] = uStack_e0;
    param_1[0x83] = uStack_dc;
    param_1[0x84] = (uint)uStack_d8;
    param_1[0x85] = uStack_d8._4_4_;
    param_1[0x7e] = (uint)local_f0;
    param_1[0x7f] = local_f0._4_4_;
    param_1[0x80] = uStack_e8;
    param_1[0x81] = uStack_e4;
    *(undefined8 *)(param_1 + 0x8c) = local_b8;
    puVar10 = &local_b0;
    puVar11 = param_1 + 0x8e;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined8 *)puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 2;
    }
    *(short *)(param_1 + 0xa6) = local_50;
  }
  if (local_2a8 == '\x01') {
    if (local_2b0 == 0) {
LAB_14113555c:
      if (local_2b8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_2b8 != (undefined8 *)0x0) {
      (**(code **)*local_2b8)(local_2b8,0);
      FUN_1446efa72(&local_2b8,0,0,0x10);
      local_2b0 = 0;
      goto LAB_14113555c;
    }
    local_2a8 = '\0';
  }
  if (local_2c8 == '\x01') {
    local_2c8 = '\0';
  }
  if (local_2d8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_2d8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_2d8 + 0x10))();
    }
  }
  if (lVar12 == 0) {
    *param_1 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(lVar12 + 0xc);
    *param_1 = uVar6;
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    uVar6 = *(uint *)(lVar12 + 0x10);
    if (*(uint *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar6 = *(uint *)(lVar12 + 0x10);
      bVar14 = uVar6 == 0;
      if (bVar14) {
        *(uint *)(lVar12 + 0x10) = uVar9;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar6 = uVar9;
      }
    }
  }
  param_1[1] = uVar6;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 4);
  *(undefined8 *)(param_1 + 2) = local_2f0;
  *(longlong **)(param_1 + 4) = plVar8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (bVar2 == 0) {
    if ((char)param_1[8] != '\x01') goto LAB_141135634;
    uVar13 = 0;
  }
  else {
    *(longlong *)(param_1 + 6) = local_300;
    uVar13 = 1;
    if ((local_300 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  *(undefined1 *)(param_1 + 8) = uVar13;
LAB_141135634:
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411356fa FUN_1411356fa body=105 status=ok
// SIG undefined FUN_1411356fa(void)

void FUN_1411356fa(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  local_18 = *(undefined8 *)(param_1 + 0x18);
  local_10 = *(longlong *)(param_1 + 0x20);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_141135764(param_2,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141135764 FUN_141135764 body=107 status=ok
// SIG undefined FUN_141135764(void)

undefined8 * FUN_141135764(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_149e19140;
  param_1[1] = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 1);
  param_1[3] = param_2[2];
  lVar3 = param_2[3];
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    plVar4 = (longlong *)param_2[3];
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
  return param_1;
}



// FUNCTION 1411357d0 FUN_1411357d0 body=118 status=ok
// SIG undefined FUN_1411357d0(void)

void FUN_1411357d0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_1403d8a98();
  uVar1 = FUN_1447210f0(param_1);
  plVar2 = (longlong *)FUN_1406f625c(uVar1);
  if (plVar2 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x308))(plVar2,0);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x2c0))(plVar2);
      if (lVar3 != 0) {
        FUN_141135846(lVar3,param_1 + 0x478,param_1);
        *(undefined1 *)(param_1 + 0x4c0) = 0;
        *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x4c8);
      }
    }
  }
  return;
}



// FUNCTION 141135846 FUN_141135846 body=1232 status=ok
// SIG undefined FUN_141135846(void)

void FUN_141135846(longlong param_1,longlong *param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  void *_Src;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_c8 [43];
  char local_9d;
  int local_9c;
  ulonglong *local_98;
  longlong local_90;
  undefined8 local_88;
  ulonglong *local_80;
  longlong *local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)(int)param_2[1] != 0) {
    puVar16 = (ulonglong *)*param_2;
    puVar17 = puVar16 + (longlong)(int)param_2[1] * 3;
    plVar10 = (longlong *)(param_1 + 0x148);
    local_98 = puVar17;
    local_90 = param_1;
    local_88 = param_3;
    local_78 = plVar10;
    do {
      uVar9 = *puVar16;
      if ((int)uVar9 == 0) {
        iVar6 = (int)(uVar9 >> 0x20);
      }
      else {
        iVar6 = FUN_14002c2bd(uVar9 & 0xffffffff,0);
      }
      if (iVar6 != 0) {
        local_70 = (void *)*puVar16;
        FUN_1400021e4(&local_70);
        _Src = local_58;
        local_9d = true;
        if ((((*plVar10 != 0) && (*(longlong *)(*plVar10 + 0x20) != 0)) &&
            (*(longlong **)(param_1 + 0x158) != (longlong *)0x0)) &&
           ((longlong)*(int *)(param_1 + 0x1f8) != 0)) {
          lVar13 = 0;
          do {
            bVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + lVar13) ==
                     **(longlong **)(param_1 + 0x158);
            local_9d = !bVar18;
            if (bVar18) break;
            bVar18 = (longlong)*(int *)(param_1 + 0x1f8) * 0x10 + -0x10 != lVar13;
            lVar13 = lVar13 + 0x10;
          } while (bVar18);
        }
        local_70 = (void *)0x0;
        lVar13 = (longlong)local_50;
        local_68 = local_50;
        if (lVar13 == 0) {
          local_64 = 0;
        }
        else {
          FUN_1446dd670(&local_70,local_50,0);
          memcpy(local_70,_Src,lVar13 * 2);
        }
        uVar3 = *(uint *)(param_1 + 0x1f8);
        uVar9 = (ulonglong)(int)uVar3;
        local_60 = param_3;
        if (uVar9 != 0) {
          plVar10 = *(longlong **)(param_1 + 0x1f0);
          cVar5 = FUN_14069eaf4(*plVar10 + 0xf0);
          if (cVar5 == '\0') {
            bVar18 = false;
          }
          else {
            iVar6 = *(int *)(*plVar10 + 0x148);
            if (iVar6 == local_68) {
              if (iVar6 < 2) {
                bVar18 = true;
                goto LAB_141135a22;
              }
              lVar13 = 0;
              while( true ) {
                uVar1 = *(ushort *)(*(longlong *)(*plVar10 + 0x140) + lVar13);
                uVar7 = (uint)uVar1;
                uVar2 = *(ushort *)((longlong)local_70 + lVar13);
                uVar12 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1411359af;
                  }
                  iVar6 = uVar7 - uVar12;
                  goto LAB_141135a1e;
                }
                if (uVar1 == 0) break;
LAB_1411359af:
                lVar13 = lVar13 + 2;
              }
              iVar6 = 0;
            }
            else {
              iVar6 = local_68 + iVar6 + -1;
            }
LAB_141135a1e:
            bVar18 = iVar6 == 0;
          }
LAB_141135a22:
          uVar14 = 0;
          iVar6 = 0;
          local_80 = puVar16;
LAB_141135a2d:
          do {
            local_9c = iVar6;
            iVar6 = (int)uVar14;
            uVar14 = (ulonglong)(iVar6 + 1U);
            lVar13 = (longlong)iVar6;
            if ((int)(iVar6 + 1U) < (int)uVar3) {
              uVar14 = lVar13 + 1;
              bVar15 = true;
              do {
                cVar5 = FUN_14069eaf4(plVar10[uVar14 * 2] + 0xf0);
                if (cVar5 == '\0') {
                  if (bVar18) goto LAB_141135b3a;
                }
                else {
                  iVar8 = *(int *)(plVar10[uVar14 * 2] + 0x148);
                  if (iVar8 == local_68) {
                    if (iVar8 < 2) {
                      if (bVar18) goto LAB_141135a70;
                      iVar8 = (int)uVar14 - iVar6;
                      goto LAB_141135b50;
                    }
                    lVar11 = 0;
                    while( true ) {
                      uVar1 = *(ushort *)(*(longlong *)(plVar10[uVar14 * 2] + 0x140) + lVar11);
                      uVar7 = (uint)uVar1;
                      uVar2 = *(ushort *)((longlong)local_70 + lVar11);
                      uVar12 = (uint)uVar2;
                      if (uVar1 != uVar2) {
                        if ((uVar2 | uVar1) < 0x80) {
                          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                          uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                          goto LAB_141135ad3;
                        }
                        iVar8 = uVar7 - uVar12;
                        goto LAB_141135b09;
                      }
                      if (uVar1 == 0) break;
LAB_141135ad3:
                      lVar11 = lVar11 + 2;
                    }
                    iVar8 = 0;
LAB_141135b09:
                    bVar19 = iVar8 == 0;
                  }
                  else {
                    bVar19 = local_68 + iVar8 == 1;
                  }
                  if ((bool)(bVar19 ^ bVar18)) goto LAB_141135b10;
                }
LAB_141135a70:
                uVar14 = uVar14 + 1;
                bVar15 = (longlong)uVar14 < (longlong)uVar9;
              } while (uVar14 != uVar9);
              uVar14 = (ulonglong)uVar3;
            }
            else {
              bVar15 = false;
            }
LAB_141135b10:
            iVar8 = (int)uVar14 - iVar6;
            if (bVar18) {
LAB_141135b3a:
              FUN_141135d17(plVar10 + lVar13 * 2);
              bVar18 = false;
              iVar6 = local_9c;
              if (!bVar15) break;
              goto LAB_141135a2d;
            }
LAB_141135b50:
            iVar4 = local_9c;
            if (local_9c != iVar6) {
              memmove(plVar10 + (longlong)local_9c * 2,plVar10 + lVar13 * 2,(longlong)iVar8 << 4);
            }
            bVar18 = true;
            iVar6 = iVar4 + iVar8;
          } while (bVar15);
          *(int *)(local_90 + 0x1f8) = iVar6;
          param_1 = local_90;
          param_3 = local_88;
          puVar16 = local_80;
          puVar17 = local_98;
        }
        if (local_70 != (void *)0x0) {
          FUN_1400020a8();
        }
        plVar10 = local_78;
        if (((*local_78 != 0) && (*(longlong *)(*local_78 + 0x20) != 0)) &&
           ((*(longlong **)(param_1 + 0x158) != (longlong *)0x0 &&
            ((longlong)*(int *)(param_1 + 0x1f8) != 0)))) {
          lVar13 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + lVar13) ==
                **(longlong **)(param_1 + 0x158)) goto LAB_141135bdc;
            lVar13 = lVar13 + 0x10;
          } while ((longlong)*(int *)(param_1 + 0x1f8) << 4 != lVar13);
        }
        if (local_9d == '\0') {
          FUN_1405d674a(local_78);
        }
LAB_141135bdc:
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      puVar16 = puVar16 + 3;
    } while (puVar16 != puVar17);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141135d17 FUN_141135d17 body=73 status=ok
// SIG undefined FUN_141135d17(void)

void FUN_141135d17(longlong param_1,int param_2)

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



// FUNCTION 141135d60 FUN_141135d60 body=9 status=ok
// SIG undefined FUN_141135d60(void)

void FUN_141135d60(longlong param_1)

{
  FUN_141135d6a(param_1 + 0x10);
  return;
}



// FUNCTION 141135d6a FUN_141135d6a body=446 status=ok
// SIG undefined FUN_141135d6a(void)

void FUN_141135d6a(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  FUN_1447cd778(*(undefined8 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110));
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_14029e95e(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8));
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0xb8);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xd8) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xd0)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd0)) {
    FUN_1400020a8(*plVar1);
  }
  *(undefined2 **)(param_1 + 0x88) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_140115c12(param_1 + 0x98,0);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 0x60) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_140115c12(param_1 + 0x70,0);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 0x40) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_140115c12(param_1 + 0x50,0);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 141135f30 FUN_141135f30 body=144 status=ok
// SIG undefined FUN_141135f30(void)

undefined8 FUN_141135f30(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  longlong local_58;
  undefined8 local_48 [5];
  ulonglong local_20;
  
  lVar1 = DAT_14cb26388;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb26388 == 0) {
    uVar2 = 0;
  }
  else {
    local_48[0] = param_1;
    FUN_1446dcdd4(local_70);
    FUN_1447a97f4(local_48,local_70);
    uVar2 = FUN_14013edca(lVar1,local_48);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141135fd0 FUN_141135fd0 body=132 status=ok
// SIG undefined FUN_141135fd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141135fd0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141136054 FUN_141136054 body=315 status=ok
// SIG undefined FUN_141136054(void)

void FUN_141136054(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd17230;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_141136190(param_1 + 0x17);
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    FUN_14472eb64(param_1 + 0xc,0);
  }
  param_1[0x12] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x8c)) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80;
    FUN_1446efbd8(param_1 + 0xe,0);
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 141136190 FUN_141136190 body=345 status=ok
// SIG undefined FUN_141136190(void)

void FUN_141136190(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
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



// FUNCTION 1411362f6 FUN_1411362f6 body=200 status=ok
// SIG undefined FUN_1411362f6(void)

void FUN_1411362f6(ulonglong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  
  if (((param_1 >> 0x20 != 0) && (uVar5 = (uint)param_1, -1 < (int)uVar5)) &&
     ((int)uVar5 < DAT_14c9647dc)) {
    plVar6 = (longlong *)
             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0xd & 0x3fff8)));
    if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == (int)(param_1 >> 0x20))) &&
       (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar3 = *plVar6, lVar3 != 0)))) {
      FUN_140cc68fa(lVar3);
      lVar4 = *(longlong *)(lVar3 + 0x6a8);
      plVar6 = *(longlong **)(lVar3 + 0x6b0);
      if (plVar6 == (longlong *)0x0) {
        *(undefined8 *)(lVar4 + 0x78) = 0;
        FUN_1411363be(lVar4,lVar3,0);
        return;
      }
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      *(undefined8 *)(lVar4 + 0x78) = 0;
      FUN_1411363be(lVar4,lVar3,0);
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
                    /* WARNING: Could not recover jumptable at 0x0001411363ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1411363be FUN_1411363be body=274 status=ok
// SIG undefined FUN_1411363be(void)

void FUN_1411363be(longlong *param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_3 != '\0') {
    FUN_140cd0ed0(param_1);
  }
  if ((((((*(int *)((longlong)param_1 + 100) == 0) ||
         (uVar1 = *(uint *)(param_1 + 0xc), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
       ((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 == 0 ||
        (*(int *)(lVar3 + 0x10) != *(int *)((longlong)param_1 + 100))))) ||
      (((*(uint *)(lVar3 + 8) & 0x10200000) != 0 ||
       (lVar3 = FUN_14479d2ce(), (*(byte *)(lVar3 + 0x348) & 2) != 0)))) &&
     (((param_1[0xd] == 0 && (param_1[0xf] == 0)) &&
      ((param_2 != (longlong *)0x0 ||
       (param_2 = (longlong *)FUN_14479d2ce(param_1 + 9), param_2 != (longlong *)0x0)))))) {
    plVar2 = (longlong *)FUN_14048bbc8(param_2 + 0xeb);
    while (param_2[0x123] == DAT_14cb241f8) {
      param_2 = (longlong *)(**(code **)(*param_2 + 0x9f8))(param_2);
      if (param_2 == (longlong *)0x0) {
        return;
      }
      if (param_2 == plVar2) {
        return;
      }
    }
    if ((*(char *)((longlong)param_2 + 0x6f1) == '\x01') &&
       (*(char *)((longlong)param_2 + 0x8fc) == '\0')) {
      (**(code **)(*param_1 + 8))(param_1,param_2);
      *(undefined1 *)((longlong)param_1 + 0xbc) = 1;
    }
  }
  return;
}



// FUNCTION 1411364d0 FUN_1411364d0 body=2020 status=ok
// SIG undefined FUN_1411364d0(void)

void FUN_1411364d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined ***pppuVar12;
  code **ppcVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  bool bVar20;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined8 local_190;
  longlong *local_188;
  longlong local_180;
  code *local_178 [2];
  undefined8 local_168 [6];
  code *local_138 [2];
  undefined8 local_128 [6];
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  byte local_b8;
  code *local_88;
  int local_80;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = *(longlong *)(param_1 + 0x80);
  if ((((local_180 == 0) || (0xfffffffd < *(int *)(param_1 + 0x88) - 1U)) &&
      (local_180 = param_2[0xdf], local_180 == 0)) ||
     ((lVar18 = param_2[0x16], lVar18 == 0 && (lVar18 = FUN_1448abda6(param_2), lVar18 == 0))))
  goto LAB_1411367c3;
  uVar3 = DAT_14cb1ae68;
  if (DAT_14c9a7d10 == (undefined8 *)0x0) {
    DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *DAT_14c9a7d10 = 0;
    DAT_14c9a7d10[1] = 0;
    DAT_14c9a7d10[2] = 0;
    DAT_14c9a7d10[3] = 0;
  }
  FUN_14005915a(DAT_14c9a7d10,&local_f8,uVar3,lVar18);
  plVar19 = uStack_f0;
  lVar18 = local_f8;
  if ((local_f8 == 0) || (uStack_f0 == (longlong *)0x0)) {
    plVar19 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)uStack_f0 + 0xc) = *(int *)((longlong)uStack_f0 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar16 = uStack_f0 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*uStack_f0)(uStack_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  plVar16 = uStack_f0;
  if (uStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_f0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*uStack_f0)(uStack_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if (plVar19 == (longlong *)0x0) goto LAB_1411367c3;
  iVar6 = (int)plVar19[1];
  do {
    plVar16 = (longlong *)0x0;
    if (iVar6 == 0) break;
    LOCK();
    iVar4 = (int)plVar19[1];
    bVar20 = iVar6 == iVar4;
    if (bVar20) {
      *(int *)(plVar19 + 1) = iVar6 + 1;
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
    UNLOCK();
    plVar16 = plVar19;
  } while (!bVar20);
  LOCK();
  piVar1 = (int *)((longlong)plVar19 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar19 + 0x10))(plVar19);
  }
  if (plVar16 == (longlong *)0x0) goto LAB_1411367c3;
  if ((lVar18 != 0) && (lVar8 = FUN_141136cb6(lVar18), lVar8 != 0)) {
    local_f8 = param_2[0x4c];
    uStack_f0 = (longlong *)param_2[0x4d];
    local_e8 = param_2[0x4e];
    cVar5 = FUN_140512764(param_2 + 0xe2,&local_f8,lVar18 + 0x1b0);
    if (cVar5 == '\0') {
      lVar18 = param_2[0x16];
      if ((lVar18 != 0) || (lVar18 = FUN_1448abda6(param_2), lVar18 != 0)) {
        if (*(longlong *)(lVar18 + 0x1f0) == 0) {
          puVar11 = (undefined8 *)(lVar18 + 0x458);
        }
        else {
          puVar11 = (undefined8 *)(*(longlong *)(lVar18 + 0x1f0) + 0xf0);
        }
        uVar9 = *puVar11;
        lVar18 = *(longlong *)(param_1 + 0x78);
        puVar11 = (undefined8 *)(param_1 + 0x78);
        if (lVar18 != 0) {
          lVar8 = FUN_144a61814(uVar9,puVar11);
          if (lVar8 != 0) {
            FUN_1405a424c(uVar9,lVar18);
          }
          *puVar11 = 0;
        }
        if (param_2 == (longlong *)0x0) {
          uVar17 = 0;
          uVar14 = 0;
        }
        else {
          uVar17 = *(uint *)((longlong)param_2 + 0xc);
          if ((int)uVar17 < DAT_14c9647dc) {
            lVar18 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
          }
          else {
            lVar18 = 0;
          }
          uVar14 = (ulonglong)*(uint *)(lVar18 + 0x10);
          if (*(uint *)(lVar18 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            uVar15 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar15);
            }
            LOCK();
            uVar7 = *(uint *)(lVar18 + 0x10);
            bVar20 = uVar7 == 0;
            if (bVar20) {
              *(uint *)(lVar18 + 0x10) = uVar15;
              uVar7 = 0;
            }
            UNLOCK();
            if (bVar20) {
              uVar7 = uVar15;
            }
            uVar14 = (ulonglong)uVar7;
          }
        }
        local_88 = (code *)0x0;
        local_80 = 0;
        FUN_1446efa72(&local_88,0,2,0x10);
        local_80 = 2;
        *(undefined ***)local_88 = &PTR_LAB_14b3e9700;
        *(ulonglong *)(local_88 + 8) = (ulonglong)uVar17 | uVar14 << 0x20;
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 1;
        lVar18 = DAT_14c758608 + 1;
        if (lVar8 == 0) {
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 2;
          lVar18 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar18;
        *(longlong *)(local_88 + 0x10) = lVar8;
        *(undefined ***)local_88 = &PTR_FUN_14b3e9690;
        *(code **)(local_88 + 0x18) = FUN_1411362f6;
        local_f8 = 0;
        uStack_f0 = (longlong *)((ulonglong)uStack_f0 & 0xffffffff00000000);
        FUN_14487d8d8(&local_f8,&local_88);
        local_b8 = 1;
        local_198 = &local_190;
        local_190._0_4_ = (uint)local_190 & 0xffff0000;
        local_190 = CONCAT44(0xbf800000,(uint)local_190);
        FUN_1406f4044(uVar9,puVar11,&local_f8,0x3f800000);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_b8])(&local_f8);
        if (local_80 != 0) {
          if (local_88 == (code *)0x0) goto LAB_1411367b9;
          (*(code *)**(undefined8 **)local_88)(local_88,0);
          FUN_1446efa72(&local_88,0,0,0x10);
          local_80 = 0;
        }
        if (local_88 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      lVar18 = (**(code **)(*param_2 + 0xa08))(param_2);
      if (lVar18 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(longlong *)(lVar18 + 0x3b8);
      }
      local_f8 = *(longlong *)(param_1 + 8);
      uStack_f0 = *(longlong **)(param_1 + 0x10);
      if (uStack_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)uStack_f0 + 0xc) = *(int *)((longlong)uStack_f0 + 0xc) + 1;
        UNLOCK();
      }
      local_e8 = 0;
      FUN_14485c47a(&local_e8,param_2);
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_FUN_14b3e9770;
      local_60 = local_f8;
      local_58 = (undefined4)uStack_f0;
      uStack_54 = uStack_f0._4_4_;
      uStack_50 = (undefined4)local_e8;
      uStack_4c = local_e8._4_4_;
      local_88 = FUN_143ca4d32;
      lVar10 = param_2[0x16];
      if (lVar10 == 0) {
        lVar10 = FUN_1448abda6(param_2);
      }
      if (lVar18 == 0) {
        FUN_1411374b4(&local_f8,param_2,&local_180,param_2 + 0x48);
        local_178[0] = local_88;
        local_168[0] = 0;
        if (local_88 != (code *)0x0) {
          pppuVar12 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar12 = &local_68;
          }
          (*(code *)**pppuVar12)(pppuVar12,local_168);
        }
        ppcVar13 = local_178;
      }
      else {
        FUN_147e229ea(&local_f8,param_2,&local_180,lVar18);
        local_138[0] = local_88;
        local_128[0] = 0;
        if (local_88 != (code *)0x0) {
          pppuVar12 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar12 = &local_68;
          }
          (*(code *)**pppuVar12)(pppuVar12,local_128);
        }
        ppcVar13 = local_138;
      }
      uVar9 = FUN_140faf186(&local_f8,ppcVar13);
      uVar9 = FUN_1458100fe(uVar9,lVar8);
      uVar9 = FUN_140faf1c8(uVar9,param_2[0x15]);
      uVar9 = FUN_1458100f6(uVar9,0x28);
      if (lVar10 == 0) {
        lVar18 = 0;
      }
      else {
        lVar18 = *(longlong *)(lVar10 + 0x30);
        if ((DAT_14c950c29 == '\x01') && (lVar18 != 0)) {
          FUN_1456cec3c(lVar18);
        }
      }
      uVar9 = FUN_14581011e(uVar9,lVar18);
      FUN_140faf12e(uVar9,&local_190);
      plVar19 = local_188;
      if ((undefined8 *)(param_1 + 0x68) != &local_190) {
        *(undefined8 *)(param_1 + 0x68) = local_190;
        local_190 = 0;
        plVar2 = *(longlong **)(param_1 + 0x70);
        if (local_188 != plVar2) {
          local_188 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x70) = plVar19;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar19 = plVar2 + 1;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)*plVar19 == 0) {
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
        }
      }
      plVar19 = local_188;
      if (local_188 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_188 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_188)(local_188);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
      FUN_14119d0c2(&local_f8);
      if (local_88 != (code *)0x0) {
        pppuVar12 = &local_68;
        if (local_78 != (undefined ***)0x0) {
          pppuVar12 = local_78;
        }
        (*(code *)(*pppuVar12)[2])(pppuVar12);
      }
    }
  }
LAB_1411367b9:
  LOCK();
  plVar19 = plVar16 + 1;
  *(int *)plVar19 = (int)*plVar19 + -1;
  UNLOCK();
  if ((int)*plVar19 == 0) {
    (**(code **)*plVar16)(plVar16);
    LOCK();
    piVar1 = (int *)((longlong)plVar16 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
LAB_1411367c3:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141136cb6 FUN_141136cb6 body=1343 status=ok
// SIG undefined FUN_141136cb6(void)

undefined8 FUN_141136cb6(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  longlong local_c8;
  longlong *local_c0;
  undefined1 local_b8 [50];
  byte local_86;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar2 = (uint *)(param_1 + 0x638);
  if (((((*(int *)(param_1 + 0x63c) == 0) || (uVar3 = *puVar2, (int)uVar3 < 0)) ||
       (DAT_14c9647dc <= (int)uVar3)) ||
      ((lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar13 == 0 ||
       (*(int *)(lVar13 + 0x10) != *(int *)(param_1 + 0x63c))))) ||
     ((*(uint *)(lVar13 + 8) & 0x10200000) != 0)) {
    plVar4 = *(longlong **)(param_1 + 0x648);
    *(undefined8 *)(param_1 + 0x640) = 0;
    *(undefined8 *)(param_1 + 0x648) = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    lVar8 = FUN_14479d2ce(param_1 + 8);
    lVar12 = *(longlong *)(param_1 + 0x30);
    lVar13 = lVar12 + 0x58;
    lVar9 = FUN_14479d2ce(lVar13);
    if (lVar9 == 0) {
      if (*(longlong *)(lVar12 + 0x60) != 0) {
        lVar9 = FUN_140007850();
        cVar5 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar9 == 0) || (cVar5 == '\0')) {
          FUN_14485c47a(lVar13,lVar9);
          if (lVar9 == 0) goto LAB_141137107;
        }
        else {
          uVar3 = *(uint *)(lVar9 + 0xc);
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar12 = 0;
          }
          if ((*(uint *)(lVar12 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(lVar13,lVar9);
          }
        }
        if ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0) goto LAB_141136e4d;
      }
LAB_141137107:
      lVar9 = FUN_140929c72();
      if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar9);
      }
    }
    else {
LAB_141136e4d:
      lVar13 = FUN_144a797b2();
      if ((((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar13 + 0x38) * 8) != lVar13 + 0x30)) ||
          (lVar13 = FUN_140929c72(), lVar13 == 0)) ||
         (*(int *)(lVar9 + 0x38) < *(int *)(lVar13 + 0x38))) goto LAB_141137107;
      lVar12 = 0;
      if (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
          lVar13 + 0x30) {
        lVar12 = lVar9;
      }
      if ((lVar12 == 0) || (DAT_14c950c29 == '\0')) {
        if (lVar12 == 0) goto LAB_141137107;
      }
      else {
        FUN_1456cec3c();
      }
      lVar13 = FUN_140929c72();
      if (((lVar13 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar13 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
          lVar13 + 0x30)) goto LAB_141137107;
    }
    if (lVar8 != 0) {
      FUN_1411371f6(local_b8);
      local_86 = local_86 | 6;
      if (((lVar9 == 0) || (lVar13 = FUN_140929c72(), lVar13 == 0)) ||
         (*(int *)(lVar9 + 0x38) < *(int *)(lVar13 + 0x38))) {
        lVar12 = 0;
      }
      else {
        lVar12 = 0;
        if (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
            lVar13 + 0x30) {
          lVar12 = lVar9;
        }
      }
      local_d8 = local_b8;
      lVar13 = FUN_141137228(lVar8,lVar12,0,0);
      if (lVar13 != 0) {
        lVar12 = *(longlong *)(lVar13 + 0x410);
        if (lVar12 != 0) {
          *(undefined8 *)(lVar12 + 0x944) = 0x4461000001010000;
          *(undefined1 *)(lVar12 + 0x94c) = 0;
          *(undefined1 *)(lVar12 + 0x830) = 1;
          *(undefined8 *)(lVar12 + 0xbe8) = DAT_14cb1afb0;
          *(undefined1 *)(lVar12 + 0x848) = 1;
          *(undefined1 *)(lVar12 + 0x850) = 2;
          if ((*(byte *)(lVar12 + 0x9f) & 0x20) != 0) {
            *(undefined4 *)(lVar12 + 0x870) = *(undefined4 *)(lVar12 + 0x850);
            *(undefined4 *)(lVar12 + 0x874) = *(undefined4 *)(lVar12 + 0x854);
            *(undefined4 *)(lVar12 + 0x878) = *(undefined4 *)(lVar12 + 0x858);
            *(undefined4 *)(lVar12 + 0x87c) = *(undefined4 *)(lVar12 + 0x85c);
            FUN_14053cb00(lVar12 + 0x880,lVar12 + 0x860);
          }
          *(undefined4 *)(lVar12 + 0x950) = 1;
          *(undefined1 *)(lVar12 + 0x849) = 2;
          *(undefined1 *)(lVar12 + 0x946) = 2;
          FUN_14485c47a(puVar2,lVar12);
          lVar8 = FUN_144a79778(lVar12);
          if (lVar8 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(lVar8 + 0x18);
          }
          if (*(longlong *)(lVar12 + 0xa8) == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = *(undefined8 *)(*(longlong *)(lVar12 + 0xa8) + 0x18);
          }
          *(undefined8 *)(param_1 + 0x650) = uVar6;
          *(undefined8 *)(param_1 + 0x658) = uVar11;
        }
        puVar7 = &DAT_14c846480;
        if (*(longlong *)(lVar13 + 0x1c8) != 0) {
          puVar7 = (undefined8 *)(*(longlong *)(lVar13 + 0x1c8) + 0x240);
        }
        local_d8 = (undefined1 *)((ulonglong)local_d8 & 0xffffffffffffff00);
        FUN_14113775c(lVar13,puVar7,1,0);
        FUN_1448c1bf6(param_1,&local_c8,param_1 + 0x650);
        plVar4 = local_c0;
        if (local_c8 != 0) {
          *(longlong *)(param_1 + 0x640) = local_c8;
          plVar10 = *(longlong **)(param_1 + 0x648);
          if (plVar10 != local_c0) {
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              *(int *)((longlong)local_c0 + 0xc) = *(int *)((longlong)local_c0 + 0xc) + 1;
              UNLOCK();
              plVar10 = *(longlong **)(param_1 + 0x648);
            }
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar10 + 0x10))();
              }
            }
            *(longlong **)(param_1 + 0x648) = plVar4;
          }
          FUN_140512c90(local_c8);
        }
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_c0 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar1 = (int *)((longlong)local_c0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_c0 + 0x10))(local_c0);
            }
          }
        }
      }
      if (local_78 != 0) {
        if (local_68 == (longlong *)0x0) {
          local_68 = local_58;
        }
        (**(code **)(*local_68 + 0x10))();
      }
    }
  }
  if (*(int *)(param_1 + 0x63c) != 0) {
    uVar3 = *puVar2;
    uVar6 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_141136d92;
    puVar7 = (undefined8 *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((puVar7 != (undefined8 *)0x0) &&
       ((*(int *)(puVar7 + 2) == *(int *)(param_1 + 0x63c) &&
        ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
      uVar6 = *puVar7;
      goto LAB_141136d92;
    }
  }
  uVar6 = 0;
LAB_141136d92:
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1411371f6 FUN_1411371f6 body=49 status=ok
// SIG undefined FUN_1411371f6(void)

void FUN_1411371f6(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 6) = 0x100;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) & 0xe0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 8;
  param_1[8] = 0;
  param_1[10] = 0;
  return;
}



// FUNCTION 141137228 FUN_141137228 body=651 status=ok
// SIG undefined FUN_141137228(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141137228(undefined8 param_1,undefined8 param_2,undefined8 *param_3,
                  undefined1 (*param_4) [16],undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_128 [32];
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_108 = 0.0;
  dStack_100 = 0.0;
  local_f8 = ZEXT816(0x3ff0000000000000) << 0x40;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  uStack_c4 = 0x3ff00000;
  uStack_c0 = 0;
  uStack_bc = 0x3ff00000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  if (param_3 != (undefined8 *)0x0) {
    local_e8 = *param_3;
    uStack_e0 = param_3[1];
    local_d8 = param_3[2];
  }
  uStack_d0 = 0;
  if (param_4 != (undefined1 (*) [16])0x0) {
    auVar1 = *param_4;
    auVar9 = divpd(auVar1,_DAT_1499387d0);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(double *)param_4[1];
    auVar10 = divpd(auVar10,_DAT_1499387d0);
    auVar9 = roundpd(auVar9,auVar9,3);
    auVar10 = roundpd(auVar10,auVar10,3);
    dVar7 = (auVar1._0_8_ - auVar9._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar8 = (auVar1._8_8_ - auVar9._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar5 = (*(double *)param_4[1] - auVar10._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar6 = (0.0 - auVar10._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar2 = sin(dVar7);
    dVar3 = sin(dVar8);
    dVar4 = sin(dVar5);
    sin(dVar6);
    dVar7 = cos(dVar7);
    dVar8 = cos(dVar8);
    dVar5 = cos(dVar5);
    cos(dVar6);
    dVar6 = dVar3 * dVar2 * dVar4 + dVar8 * dVar7 * dVar5;
    local_108 = dVar2 * dVar3 * dVar5 - dVar7 * dVar8 * dVar4;
    dStack_100 = -(dVar2 * dVar8 * dVar5) - dVar7 * dVar3 * dVar4;
    local_f8._8_4_ = SUB84(dVar6,0);
    local_f8._0_8_ = -(dVar8 * dVar2 * dVar4) + dVar3 * dVar7 * dVar5;
    local_f8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  }
  FUN_141037e38(param_1,param_2,&local_108,param_5);
  if ((local_a0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411374b4 FUN_1411374b4 body=22 status=ok
// SIG undefined FUN_1411374b4(void)

undefined8 FUN_1411374b4(undefined8 param_1)

{
  FUN_1411374ca();
  return param_1;
}



// FUNCTION 1411374ca FUN_1411374ca body=270 status=ok
// SIG undefined FUN_1411374ca(void)

longlong FUN_1411374ca(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  bool bVar7;
  
  FUN_1411375d8();
  lVar3 = *(longlong *)(param_1 + 8);
  if (param_2 == 0) {
    *(undefined4 *)(lVar3 + 0x80) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(lVar3 + 0x80) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar2 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar2 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(lVar3 + 0x84) = iVar2;
  lVar3 = *param_3;
  lVar6 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar6 + 0x98) != lVar3) {
    *(undefined8 *)(lVar6 + 0xa8) = 0;
  }
  *(longlong *)(lVar6 + 0x98) = lVar3;
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x20);
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *param_4;
    param_4 = param_4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0xc) = 1;
  return param_1;
}



// FUNCTION 1411375d8 FUN_1411375d8 body=388 status=ok
// SIG undefined FUN_1411375d8(void)

undefined2 * FUN_1411375d8(undefined2 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x1d) = 0;
  param_1[0x21] = 1;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x140);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ab67260;
  memset(plVar5 + 2,0,0x130);
  *(undefined4 *)((longlong)plVar5 + 0x24) = 0x44610000;
  *(undefined4 *)(plVar5 + 8) = 0;
  *(undefined4 *)((longlong)plVar5 + 0x44) = 0;
  *(undefined4 *)(plVar5 + 9) = 0;
  *(undefined4 *)((longlong)plVar5 + 0x4c) = 0x3ff00000;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  *(undefined4 *)(plVar5 + 0xe) = 0;
  *(undefined4 *)((longlong)plVar5 + 0x74) = 0x3ff00000;
  *(undefined4 *)(plVar5 + 0xf) = 0;
  *(undefined4 *)((longlong)plVar5 + 0x7c) = 0x3ff00000;
  plVar5[0x10] = 0x3ff0000000000000;
  plVar5[0x11] = 0;
  plVar5[0x12] = 0;
  plVar5[0x13] = 0;
  plVar5[0x14] = 0;
  plVar5[0x15] = 0;
  *(undefined4 *)(plVar5 + 0x16) = 0x4000;
  *(undefined4 *)(plVar5 + 0x27) = 0;
  plVar5[0x17] = 0;
  plVar5[0x18] = 0;
  plVar5[0x19] = 0;
  plVar5[0x1a] = 0;
  plVar5[0x1b] = 0;
  plVar5[0x1c] = 0;
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 4) = 0x10;
    return param_1;
  }
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
  plVar4 = *(longlong **)(param_1 + 8);
  *(longlong **)(param_1 + 4) = plVar5 + 2;
  if (plVar5 == plVar4) {
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1411376e7;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    *(longlong **)(param_1 + 8) = plVar5;
    if (plVar4 == (longlong *)0x0) goto LAB_1411376e7;
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1411376e7;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1411376e7:
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return param_1;
}


