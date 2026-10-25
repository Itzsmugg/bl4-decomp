// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141249ec6 FUN_141249ec6 body=68 status=ok
// SIG undefined FUN_141249ec6(void)

undefined8 * FUN_141249ec6(undefined8 *param_1)

{
  FUN_140fe66fa();
  *param_1 = &PTR_FUN_14aed3470;
  param_1[5] = &PTR_FUN_14aed3800;
  param_1[0x13] = &PTR_FUN_14aed3820;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 141249f0a FUN_141249f0a body=256 status=ok
// SIG undefined FUN_141249f0a(void)

void FUN_141249f0a(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  FUN_140670e42();
  if ((((((*(int *)(param_1 + 0xec) != 0) && (uVar1 = *(uint *)(param_1 + 0xe8), -1 < (int)uVar1))
        && ((int)uVar1 < DAT_14c9647dc)) &&
       ((plVar5 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0xec))))) &&
      (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
       ((*plVar5 != 0 && (lVar2 = FUN_14025708c(*plVar5,DAT_14c9abbf0), lVar2 != 0)))))) &&
     ((param_2 == '\x01' || (*(char *)(*(longlong *)(param_1 + 0xd8) + 0x5f8) != '\0')))) {
    FUN_14124a00a(lVar2 + 0x368,&DAT_14cb8cf30);
  }
  if ((*(char *)(*(longlong *)(param_1 + 0xd8) + 0x5f8) == '\x01') &&
     ((longlong)*(int *)(param_1 + 0x100) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0xf8);
    lVar6 = (longlong)*(int *)(param_1 + 0x100) * 0x18;
    do {
      lVar3 = FUN_14479d2ce(lVar2 + 0x10);
      if (lVar3 != 0) {
        uVar4 = FUN_14479d2ce(lVar2 + 8);
        FUN_1406712fc(lVar3,lVar2,uVar4);
      }
      lVar2 = lVar2 + 0x18;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 14124a00a FUN_14124a00a body=373 status=ok
// SIG undefined FUN_14124a00a(void)

void FUN_14124a00a(undefined1 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar1 = *(int *)(param_1 + 0x40);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    lVar2 = *param_2;
    plVar3 = *(longlong **)(param_1 + 0x38);
    iVar11 = 0;
    bVar6 = *plVar3 == lVar2;
    iVar12 = 0;
    do {
      lVar9 = (longlong)iVar12;
      iVar7 = iVar12 + 1;
      if (iVar12 + 1 < iVar1) {
        iVar7 = iVar1;
      }
      plVar8 = plVar3 + lVar9 * 7 + 7;
      iVar13 = iVar12;
      lVar10 = lVar9;
      do {
        lVar10 = lVar10 + 1;
        iVar14 = iVar7;
        if (lVar5 <= lVar10) break;
        lVar4 = *plVar8;
        iVar13 = iVar13 + 1;
        plVar8 = plVar8 + 7;
        iVar14 = iVar13;
      } while (bVar6 == (lVar4 == lVar2));
      iVar7 = iVar14 - iVar12;
      if (bVar6 == false) {
        if (iVar11 != iVar12) {
          memmove(plVar3 + (longlong)iVar11 * 7,plVar3 + lVar9 * 7,(longlong)iVar7 * 0x38);
        }
        iVar11 = iVar11 + iVar7;
      }
      else {
        FUN_140c7db7c(plVar3 + lVar9 * 7,iVar7);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar12 = iVar14;
    } while (lVar10 < lVar5);
    *(int *)(param_1 + 0x40) = iVar11;
  }
  *param_1 = 0;
  if (param_1[0x78] == '\x01') {
    if (param_1[0x77] == '\x01') {
      param_1[0x77] = 0;
    }
    if (param_1[0x75] == '\x01') {
      param_1[0x75] = 0;
    }
    if (*(int *)(param_1 + 0x6c) != -1) {
      *(undefined8 *)(param_1 + 0x6c) = 0xffffffff;
    }
    if (*(int *)(param_1 + 100) != -1) {
      *(undefined8 *)(param_1 + 100) = 0xffffffff;
    }
    if (param_1[0x61] == '\x01') {
      param_1[0x61] = 0;
    }
    if (param_1[0x5f] == '\x01') {
      param_1[0x5f] = 0;
    }
    if (param_1[0x5d] == '\x01') {
      param_1[0x5d] = 0;
    }
    if (param_1[0x5b] == '\x01') {
      param_1[0x5b] = 0;
    }
    if (param_1[0x59] == '\x01') {
      param_1[0x59] = 0;
    }
    if (param_1[0x54] == '\x01') {
      param_1[0x54] = 0;
    }
    if (param_1[0x4c] == '\x01') {
      param_1[0x4c] = 0;
    }
    param_1[0x78] = 0;
  }
  return;
}



// FUNCTION 14124a180 FUN_14124a180 body=1008 status=ok
// SIG undefined FUN_14124a180(void)

void FUN_14124a180(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined2 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  code **local_1d0;
  code *local_1c8;
  code *local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  longlong local_198;
  char local_190 [16];
  longlong *local_180;
  undefined4 local_168 [2];
  char local_160 [16];
  longlong *local_150;
  undefined4 local_138 [2];
  char local_130;
  longlong *local_120;
  undefined4 local_108 [2];
  char local_100;
  longlong *local_f0;
  undefined4 local_d8 [2];
  code *local_d0 [2];
  longlong *local_c0;
  undefined4 local_a8 [2];
  char local_a0;
  longlong *local_90;
  undefined4 local_78 [2];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_a0 = '\0';
  local_78[0] = 0;
  lVar2 = FUN_14124a572(param_2,&DAT_14cbd2d80);
  if (lVar2 != 0) {
    if (DAT_14caf64b8 == 0) {
      local_1d0 = local_d0;
      local_d0[0] = FUN_141030f22;
      local_1c0 = FUN_14081d0ea;
      local_1c8 = FUN_142b4754c;
      local_1d8 = &LAB_147c45ce0;
      local_1e0 = &LAB_1463f1ff4;
      local_1e8 = &DAT_149e063b2;
      local_1f0 = 0x4000000000;
      local_1f8 = 0x10000004;
      local_200 = 8;
      local_208 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) == DAT_14caf64b8 + 0x30)) goto LAB_14124a21d;
  }
  lVar2 = 0;
LAB_14124a21d:
  local_d0[0] = (code *)((ulonglong)local_d0[0] & 0xffffffffffffff00);
  local_a8[0] = 0;
  uVar3 = FUN_14124a572(param_2,&DAT_14cbd2d78);
  local_100 = '\0';
  local_d8[0] = 0;
  uVar5 = FUN_14124a67e(param_2,&DAT_14cbd2d68);
  local_130 = '\0';
  local_108[0] = 0;
  uVar6 = FUN_14124a67e(param_2,&DAT_14cbd2d70);
  local_160[0] = '\0';
  local_138[0] = 0;
  uVar4 = FUN_14124a572(param_2,&DAT_14cbd2d60,local_160);
  local_190[0] = '\0';
  local_168[0] = 0;
  local_1b8 = FUN_140f0e194(param_2,&DAT_14cbd2d58,local_190);
  local_1b0 = uVar4;
  local_1a8 = uVar6;
  local_1a4 = uVar5;
  local_1a0 = uVar3;
  local_198 = lVar2;
  FUN_1447cd2ec(param_1 + 0x98);
  FUN_1448173f8(local_168);
  if ((local_190[0] == '\x03') && (local_180 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_180 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_180 + 0x10))();
    }
  }
  FUN_1448173f8(local_138);
  if ((local_160[0] == '\x03') && (local_150 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_150 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_150 + 0x10))();
    }
  }
  FUN_1448173f8(local_108);
  if ((local_130 == '\x03') && (local_120 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_120 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_120 + 0x10))();
    }
  }
  FUN_1448173f8(local_d8);
  if ((local_100 == '\x03') && (local_f0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_f0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_f0 + 0x10))();
    }
  }
  FUN_1448173f8(local_a8);
  if (((char)local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  FUN_1448173f8(local_78);
  if ((local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14124a572 FUN_14124a572 body=266 status=ok
// SIG undefined FUN_14124a572(void)

undefined8 FUN_14124a572(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  undefined8 ***local_78 [3];
  ushort local_60;
  byte local_58;
  undefined8 ***local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140f0e29e(param_1,local_80,param_2);
  FUN_1447c3578(local_80,local_48,param_3);
  uVar2 = FUN_14030a32e(local_48);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar3 = local_48;
    if (0x18 < local_30) {
      ppppuVar3 = (undefined8 ****)local_48[0];
    }
    (*pcVar1)(ppppuVar3);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar3 = (undefined8 ****)local_78[0];
    if (local_60 < 0x19) {
      ppppuVar3 = local_78;
    }
    (*pcVar1)(ppppuVar3);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14124a67e FUN_14124a67e body=433 status=ok
// SIG undefined FUN_14124a67e(void)

undefined4 FUN_14124a67e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined8 ****ppppuVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 ***local_b0 [3];
  ushort local_98;
  byte local_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140f0e29e(param_1,local_b8,param_2);
  puVar4 = &local_80;
  FUN_1447c3578(local_b8,puVar4,param_3);
  if (local_60 == 3) {
    uVar2 = 3;
    uVar6 = local_80;
  }
  else {
    puVar5 = &local_58;
    FUN_1400b56fe(puVar5,&local_80,3);
    uVar6 = 0;
    if (local_38 != 0) {
      uVar6 = local_58;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar5 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar1)(puVar5);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar2 = (uint)local_60;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar4 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar1)(puVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar3 = (undefined8 ****)local_b0[0];
    if (local_98 < 0x19) {
      ppppuVar3 = local_b0;
    }
    (*pcVar1)(ppppuVar3);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(local_b0[0]);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14124a830 FUN_14124a830 body=9053 status=ok
// SIG undefined FUN_14124a830(void)

void FUN_14124a830(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined1 auStack_528 [32];
  undefined8 local_508;
  undefined8 *local_500;
  undefined8 *local_4f8;
  code *local_4f0;
  undefined1 local_4e8;
  undefined8 local_4e0;
  undefined4 *local_4d8;
  undefined8 *local_4d0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined8 *local_4b8;
  undefined8 *local_4b0;
  undefined8 *local_4a8;
  undefined8 *local_4a0;
  undefined4 local_498;
  undefined4 *local_490;
  undefined1 local_488;
  undefined1 local_480;
  int local_474;
  int local_470;
  int local_46c;
  undefined4 *local_468;
  undefined8 *local_460;
  undefined8 local_458;
  undefined4 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined4 local_438;
  undefined8 local_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined8 local_3b8;
  undefined4 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined8 local_380;
  undefined4 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined8 local_358;
  int local_350;
  int iStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined *local_340;
  longlong local_338;
  ulonglong uStack_330;
  undefined4 local_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2f8;
  uint local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  uint uStack_2c4;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined4 local_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 local_250;
  int local_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_184;
  undefined4 local_158;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [48];
  undefined8 local_c0;
  undefined8 local_b0 [6];
  undefined8 *local_80;
  ulonglong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_528;
  local_f8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_4f8 = (undefined8 *)FUN_1446ddbd2();
      local_4f0 = FUN_1468d96f0;
      local_500 = (undefined8 *)0x0;
      local_508 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_f8);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_f8);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_f8 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_f8);
    }
  }
  local_100 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_4f8 = (undefined8 *)FUN_1446ddbd2();
      local_4f0 = FUN_1468d96f0;
      local_500 = (undefined8 *)0x0;
      local_508 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_100);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_100);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_100 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_100);
    }
  }
  local_118 = 0;
  local_110 = 0x3005;
  local_108 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_4f8 = (undefined8 *)FUN_1446ddbd2();
      local_4f0 = FUN_14170fd90;
      local_500 = (undefined8 *)0x8000000000000000;
      local_508 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_118);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_118);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_118 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_118);
    }
  }
  uStack_120 = 0;
  uStack_11c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_4f8 = (undefined8 *)FUN_1446ddbd2();
      local_4f0 = FUN_1468d96f0;
      local_500 = (undefined8 *)0x0;
      local_508 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_120);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&uStack_120);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&uStack_120);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      uStack_120 = (undefined4)uVar3;
      uStack_11c = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&uStack_120);
    }
  }
  local_124 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_4f0 = FUN_1408a629c;
      local_4f8 = (undefined8 *)&DAT_14c9520b8;
      local_500 = (undefined8 *)0x0;
      local_508 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_124);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_124);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_124 = (undefined4)uVar3;
      uStack_120 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_124);
    }
  }
  memset(&local_228,0,0x100);
  local_158 = 0xffffffff;
  local_228 = CONCAT44(0x3f800000,(undefined4)local_228);
  local_184 = 0xffffffff;
  plVar1 = (longlong *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_228);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_228);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_228);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_228 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_228);
    }
  }
  puVar11 = &local_228;
  if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)*plVar1;
  }
  uStack_240 = 0;
  uStack_23c = 0;
  local_238 = 0x3002;
  local_230 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_4f8 = (undefined8 *)FUN_1446ddbd2();
      local_4f0 = FUN_14170fd90;
      local_500 = (undefined8 *)0x8000000000000000;
      local_508 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_240);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&uStack_240);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&uStack_240);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      uStack_240 = (undefined4)uVar3;
      uStack_23c = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&uStack_240);
    }
  }
  local_80 = (undefined8 *)0x0;
  local_78 = 0x200000000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_4f8 = (undefined8 *)FUN_1446ddbd2();
      local_4f0 = FUN_1403a682c;
      local_500 = (undefined8 *)0x0;
      local_508 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,local_b0);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,local_b0);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_b0[0] = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,local_b0);
    }
  }
  local_244 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_4f8 = (undefined8 *)FUN_1446ddbd2();
      local_4f0 = FUN_14067a048;
      local_500 = (undefined8 *)0x0;
      local_508 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_244);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_244);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_244);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_244 = (int)uVar3;
      uStack_240 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_244);
    }
  }
  iVar10 = local_244;
  local_250 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_4f8 = (undefined8 *)FUN_1446ddbd2();
      local_4f0 = FUN_1468d96f0;
      local_500 = (undefined8 *)0x0;
      local_508 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_250);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_250);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_250);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_250 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_250);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_4f8 = (undefined8 *)FUN_1446ddbd2();
      local_4f0 = FUN_1403a682c;
      local_500 = (undefined8 *)0x0;
      local_508 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_268);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_268);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_268);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_268 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_268);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_4f8 = (undefined8 *)FUN_1446ddbd2();
      local_4f0 = FUN_1403a682c;
      local_500 = (undefined8 *)0x0;
      local_508 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_280);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_280);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_280);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_280 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_280);
    }
  }
  uStack_288 = 0;
  uStack_284 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_4f8 = (undefined8 *)FUN_1446ddbd2();
      local_4f0 = FUN_1409e12a0;
      local_500 = (undefined8 *)0x0;
      local_508 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_288);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&uStack_288);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&uStack_288);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      uStack_288 = (undefined4)uVar3;
      uStack_284 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&uStack_288);
    }
  }
  local_28c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_4f0 = FUN_1408a629c;
      local_4f8 = (undefined8 *)&DAT_14c9520b8;
      local_500 = (undefined8 *)0x0;
      local_508 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28c);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_28c);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_28c);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_28c = (undefined4)uVar3;
      uStack_288 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_28c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_4f8 = (undefined8 *)FUN_1446ddbd2();
      local_4f0 = FUN_1403a682c;
      local_500 = (undefined8 *)0x0;
      local_508 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2a8);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_2a8);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_2a8);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_2a8 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_2a8);
    }
  }
  local_2f0 = local_2f0 & 0xffffff00;
  uStack_2ec = 0;
  uStack_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0xf00000d0;
  local_2d0 = 0;
  local_2c8 = 0;
  uStack_2c4 = uStack_2c4 & 0xffffff00;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_4f8 = (undefined8 *)FUN_1446ddbd2();
      local_4f0 = FUN_1403a682c;
      local_500 = (undefined8 *)0x0;
      local_508 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2f0);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_2f0);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_2f0);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_2f0 = (uint)uVar3;
      uStack_2ec = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_2f0);
    }
  }
  local_308 = 0;
  local_300 = 0;
  local_2f8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_4f8 = (undefined8 *)FUN_1446ddbd2();
      local_4f0 = FUN_1403a682c;
      local_500 = (undefined8 *)0x0;
      local_508 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_308);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_308);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_308);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_308 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_308);
    }
  }
  uStack_320 = 0;
  uStack_31c = 0;
  local_318 = 0;
  local_310 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_4f8 = (undefined8 *)FUN_1446ddbd2();
      local_4f0 = FUN_1403a682c;
      local_500 = (undefined8 *)0x0;
      local_508 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_320);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&uStack_320);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&uStack_320);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      uStack_320 = (undefined4)uVar3;
      uStack_31c = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&uStack_320);
    }
  }
  local_324 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_4f0 = FUN_1408a629c;
      local_4f8 = (undefined8 *)&DAT_14c9520b8;
      local_500 = (undefined8 *)0x0;
      local_508 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_324);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_324);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_324);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_324 = (undefined4)uVar3;
      uStack_320 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_324);
    }
  }
  FUN_1405c5fa2();
  local_340 = &DAT_14cb769e8;
  local_338 = 0;
  uStack_330 = 0;
  local_348 = 0x4b0394b0;
  uStack_344 = 1;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_348);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_348);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_348);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_348 = (undefined4)uVar3;
      uStack_344 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_348);
    }
  }
  puVar12 = &local_348;
  if ((undefined4 *)*plVar1 != (undefined4 *)0x0) {
    puVar12 = (undefined4 *)*plVar1;
  }
  iStack_34c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_4f8 = (undefined8 *)FUN_1446ddbd2();
      local_4f0 = FUN_14067a048;
      local_500 = (undefined8 *)0x0;
      local_508 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_34c);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&iStack_34c);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&iStack_34c);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      iStack_34c = (int)uVar3;
      local_348 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&iStack_34c);
    }
  }
  iVar6 = iStack_34c;
  local_350 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_4f8 = (undefined8 *)FUN_1446ddbd2();
      local_4f0 = FUN_14067a048;
      local_500 = (undefined8 *)0x0;
      local_508 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  local_46c = iVar10;
  local_470 = iVar6;
  local_468 = puVar12;
  local_460 = puVar11;
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_350);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_350);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_350);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
      local_350 = (int)uVar3;
      iStack_34c = (int)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_350);
    }
  }
  uVar9 = local_250;
  uVar8 = local_28c;
  uVar7 = local_324;
  local_474 = local_350;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_368 = CONCAT44(uStack_31c,uStack_320);
  local_360 = local_318;
  local_358 = 0;
  local_380 = local_308;
  local_378 = local_300;
  local_370 = 0;
  local_3c8 = CONCAT44(uStack_2ec,local_2f0);
  local_3c0 = uStack_2e8;
  local_3b8 = local_2e0;
  local_3b0 = local_2d8;
  local_3a8 = 0;
  local_3a0 = CONCAT44(uStack_2c4,local_2c8);
  uStack_398 = uStack_2c0;
  local_390 = (undefined4)uStack_2b8;
  uStack_38c = uStack_2b8._4_4_;
  uStack_388 = (undefined4)uStack_2b0;
  uStack_384 = uStack_2b0._4_4_;
  local_3e8 = local_2a8;
  uStack_3e0 = uStack_2a0;
  local_3d8 = local_298;
  uVar3 = CONCAT44(uStack_284,uStack_288);
  local_408 = local_280;
  uStack_400 = uStack_278;
  local_3f8 = local_270;
  local_428 = (undefined4)local_268;
  uStack_424 = local_268._4_4_;
  uStack_420 = uStack_260;
  uStack_41c = uStack_25c;
  local_418 = local_258;
  local_c0 = 0;
  puVar11 = local_80;
  if (local_80 == (undefined8 *)0x0) {
    puVar11 = local_b0;
  }
  FUN_1400709d4(local_f0,puVar11,local_78 & 0xffffffff,0);
  local_440 = CONCAT44(uStack_23c,uStack_240);
  local_4f8 = &local_440;
  local_438 = local_238;
  local_430 = 0;
  local_458 = local_118;
  local_450 = local_110;
  local_448 = 0;
  local_480 = local_474 != 0;
  local_488 = local_470 != 0;
  local_4e8 = local_46c != 0;
  local_490 = local_468;
  local_4a0 = &local_368;
  local_4b8 = &local_3e8;
  local_4e0 = uVar9;
  local_500 = local_460;
  local_498 = uVar7;
  local_4c0 = uVar8;
  local_508 = CONCAT44(local_508._4_4_,local_124);
  local_4f0 = (code *)local_f0;
  local_4d8 = &local_428;
  local_4d0 = &local_408;
  local_4c8 = uVar3;
  local_4b0 = &local_3c8;
  local_4a8 = &local_380;
  FUN_14124cb8e(local_f8,local_100,&local_458,CONCAT44(uStack_11c,uStack_120));
  local_348 = 0x4a171d50;
  uStack_344 = 1;
  uVar5 = uStack_330 >> 0x20;
  uStack_330 = uStack_330 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    FUN_140115c12(&local_338,0);
  }
  local_340 = (undefined *)0x0;
  if (local_338 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_528) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14124cb8e FUN_14124cb8e body=2389 status=ok
// SIG undefined FUN_14124cb8e(void)

void FUN_14124cb8e(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  float param_5,void *param_6,undefined8 *param_7,longlong param_8,char param_9,
                  longlong param_10,double *param_11,undefined8 *param_12,undefined8 param_13,
                  float param_14,double *param_15,longlong param_16,longlong *param_17,
                  longlong *param_18,float param_19,longlong param_20,char param_21,char param_22)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  undefined4 uVar15;
  float fVar16;
  double dVar17;
  undefined4 uVar18;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined1 local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  char local_c0;
  undefined7 uStack_bf;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined4 local_98 [2];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((param_1 == 0) || (lVar9 = FUN_1447210f0(), lVar9 == 0)) goto LAB_14124d372;
  local_d8 = *param_3;
  FUN_1446dcdd4(&local_c0);
  if (DAT_14cb77e00 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = FUN_144837462(DAT_14cb77e00,&local_c0);
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((lVar10 == 0) ||
     (local_108 = lVar10, FUN_1405fd34a(&local_c0,lVar9), local_b8 == (longlong *)0x0))
  goto LAB_14124d372;
  iVar8 = (int)local_b8[1];
  do {
    if (iVar8 == 0) {
      plVar12 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar13 = (int)local_b8[1];
    bVar14 = iVar8 == iVar13;
    if (bVar14) {
      *(int *)(local_b8 + 1) = iVar8 + 1;
      iVar13 = iVar8;
    }
    iVar8 = iVar13;
    UNLOCK();
    plVar12 = local_b8;
  } while (!bVar14);
  LOCK();
  piVar1 = (int *)((longlong)local_b8 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_b8 + 0x10))();
  }
  if (plVar12 == (longlong *)0x0) goto LAB_14124d372;
  local_100 = CONCAT71(uStack_bf,local_c0);
  if (local_100 != 0) {
    local_d8 = param_1;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_1);
    }
    local_d0 = param_2;
    if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(param_2);
    }
    FUN_1405fab15(&local_e8);
    if (param_5 <= 0.0) {
      if (*(char *)(local_e8 + 0xc) == '\x01') {
        *(undefined1 *)(local_e8 + 0xc) = 0;
      }
    }
    else {
      *(float *)(local_e8 + 8) = param_5;
      *(undefined1 *)(local_e8 + 0xc) = 1;
    }
    memcpy((void *)(local_e8 + 0xa0),param_6,0x100);
    local_c8 = *param_7;
    FUN_1446dcdd4(&local_c0);
    if (DAT_14cb77da0 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_144837462(DAT_14cb77da0,&local_c0);
    }
    *(undefined8 *)(local_e8 + 0x10) = uVar11;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_e8 + 0x18 != param_8) {
      lVar9 = *(longlong *)(param_8 + 0x30);
      if (*(longlong *)(param_8 + 0x30) == 0) {
        lVar9 = param_8;
      }
      FUN_1400709d4(local_e8 + 0x18,lVar9,*(undefined4 *)(param_8 + 0x38),
                    *(undefined4 *)(local_e8 + 0x54));
    }
    lVar9 = local_e8;
    *(byte *)(local_e8 + 0x278) = *(byte *)(local_e8 + 0x278) & 0xef | param_9 << 4;
    (**(code **)(*(longlong *)(local_e8 + 0x58) + 0x20))(local_e8 + 0x58,0);
    *(undefined8 *)(lVar9 + 0x60) = *(undefined8 *)(param_20 + 8);
    FUN_1406022fe(lVar9 + 0x68,param_20 + 0x10);
    lVar9 = local_e8;
    if (param_10 == 0) {
      *(undefined4 *)(local_e8 + 0x1d8) = 0;
      iVar8 = 0;
    }
    else {
      uVar4 = *(uint *)(param_10 + 0xc);
      *(uint *)(local_e8 + 0x1d8) = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar8 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar8 = *(int *)(lVar10 + 0x10);
        bVar14 = iVar8 == 0;
        if (bVar14) {
          *(int *)(lVar10 + 0x10) = iVar13;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar8 = iVar13;
        }
      }
    }
    lVar10 = local_108;
    *(int *)(lVar9 + 0x1dc) = iVar8;
    if (((((*param_11 != 0.0) || (NAN(*param_11))) || (param_11[1] != 0.0)) ||
        ((NAN(param_11[1]) || (param_11[2] != 0.0)))) || (NAN(param_11[2]))) {
      dVar17 = *param_11;
      dVar3 = param_11[1];
      *(double *)(local_e8 + 0x1f0) = param_11[2];
      *(double *)(local_e8 + 0x1e0) = dVar17;
      *(double *)(local_e8 + 0x1e8) = dVar3;
      *(undefined1 *)(local_e8 + 0x1f8) = 1;
    }
    else if (*(char *)(local_e8 + 0x1f8) == '\x01') {
      *(undefined1 *)(local_e8 + 0x1f8) = 0;
    }
    dVar17 = (double)FUN_144719204((int)*param_12,0x4076800000000000);
    dVar17 = (double)(~-(ulonglong)(dVar17 < 0.0) & (ulonglong)dVar17 |
                     (ulonglong)(dVar17 + 360.0) & -(ulonglong)(dVar17 < 0.0));
    if ((dVar17 != 0.0) || (NAN(dVar17))) {
LAB_14124cfda:
      uVar11 = *param_12;
      uVar7 = param_12[1];
      *(undefined8 *)(local_e8 + 0x210) = param_12[2];
      *(undefined8 *)(local_e8 + 0x200) = uVar11;
      *(undefined8 *)(local_e8 + 0x208) = uVar7;
      *(undefined1 *)(local_e8 + 0x218) = 1;
    }
    else {
      dVar17 = (double)FUN_144719204((int)param_12[1],0x4076800000000000);
      dVar17 = (double)(~-(ulonglong)(dVar17 < 0.0) & (ulonglong)dVar17 |
                       (ulonglong)(dVar17 + 360.0) & -(ulonglong)(dVar17 < 0.0));
      if ((dVar17 != 0.0) || (NAN(dVar17))) goto LAB_14124cfda;
      dVar17 = (double)FUN_144719204((int)param_12[2]);
      dVar17 = (double)(~-(ulonglong)(dVar17 < 0.0) & (ulonglong)dVar17 |
                       (ulonglong)(dVar17 + 360.0) & -(ulonglong)(dVar17 < 0.0));
      if ((dVar17 != 0.0) || (NAN(dVar17))) goto LAB_14124cfda;
      if (*(char *)(local_e8 + 0x218) == '\x01') {
        *(undefined1 *)(local_e8 + 0x218) = 0;
      }
    }
    *(undefined8 *)(local_e8 + 0x240) = param_13;
    if (param_14 <= 0.0) {
      if (*(char *)(local_e8 + 0x7c) == '\x01') {
        *(undefined1 *)(local_e8 + 0x7c) = 0;
      }
    }
    else {
      *(float *)(local_e8 + 0x78) = param_14;
      *(undefined1 *)(local_e8 + 0x7c) = 1;
    }
    dVar17 = *param_15;
    uVar15 = SUB84(dVar17,0);
    uVar18 = (undefined4)((ulonglong)dVar17 >> 0x20);
    dVar3 = param_15[1];
    if (dVar17 <= dVar3) {
      uVar15 = SUB84(dVar3,0);
      uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
    }
    dVar17 = param_15[2];
    if ((double)CONCAT44(uVar18,uVar15) <= dVar17) {
      uVar15 = SUB84(dVar17,0);
      uVar18 = (undefined4)((ulonglong)dVar17 >> 0x20);
    }
    if ((double)CONCAT44(uVar18,uVar15) < 0.0 || (double)CONCAT44(uVar18,uVar15) == 0.0) {
      if (*(char *)(local_e8 + 0x98) == '\x01') {
        *(undefined1 *)(local_e8 + 0x98) = 0;
      }
    }
    else {
      uVar15 = *(undefined4 *)param_15;
      uVar18 = *(undefined4 *)((longlong)param_15 + 4);
      uVar5 = *(undefined4 *)(param_15 + 1);
      uVar6 = *(undefined4 *)((longlong)param_15 + 0xc);
      *(double *)(local_e8 + 0x90) = param_15[2];
      *(undefined4 *)(local_e8 + 0x80) = uVar15;
      *(undefined4 *)(local_e8 + 0x84) = uVar18;
      *(undefined4 *)(local_e8 + 0x88) = uVar5;
      *(undefined4 *)(local_e8 + 0x8c) = uVar6;
      *(undefined1 *)(local_e8 + 0x98) = 1;
    }
    local_c0 = '\0';
    local_98[0] = 0;
    fVar16 = (float)FUN_140a8b8c6(param_16,&local_c0);
    FUN_1448173f8(local_98);
    if ((local_c0 == '\x03') && (local_b0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
    if ((fVar16 != 0.0) || (NAN(fVar16))) {
      *(float *)(local_e8 + 0x1c0) = fVar16;
      *(undefined1 *)(local_e8 + 0x1c4) = 1;
    }
    else if (*(char *)(local_e8 + 0x1c4) == '\x01') {
      *(undefined1 *)(local_e8 + 0x1c4) = 0;
    }
    local_c0 = '\0';
    local_98[0] = 0;
    local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_16 + 0x30));
    uVar11 = FUN_140430f72();
    FUN_140431068(uVar11,*(undefined8 *)(param_16 + 0x34),&local_c8);
    fVar16 = (float)local_c8;
    FUN_1448173f8(local_98);
    if ((local_c0 == '\x03') && (local_b0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
    if ((fVar16 != 0.0) || (NAN(fVar16))) {
      *(float *)(local_e8 + 0x1c8) = fVar16;
      *(undefined1 *)(local_e8 + 0x1cc) = 1;
    }
    else if (*(char *)(local_e8 + 0x1cc) == '\x01') {
      *(undefined1 *)(local_e8 + 0x1cc) = 0;
    }
    local_c0 = '\0';
    local_98[0] = 0;
    local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_16 + 0x3c));
    uVar11 = FUN_140430f72();
    FUN_1405506f4(uVar11,*(undefined8 *)(param_16 + 0x40),&local_c8);
    fVar16 = (float)local_c8;
    FUN_1448173f8(local_98);
    if ((local_c0 == '\x03') && (local_b0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b0 + 0x10))();
      }
    }
    if ((fVar16 != 0.0) || (NAN(fVar16))) {
      *(float *)(local_e8 + 0x1d0) = fVar16;
      *(undefined1 *)(local_e8 + 0x1d4) = 1;
    }
    else if (*(char *)(local_e8 + 0x1d4) == '\x01') {
      *(undefined1 *)(local_e8 + 0x1d4) = 0;
    }
    if ((*(longlong *)(local_e8 + 0x290) != *param_17) ||
       (*(int *)(local_e8 + 0x298) != (int)param_17[1])) {
      *(longlong *)(local_e8 + 0x290) = *param_17;
      *(int *)(local_e8 + 0x298) = (int)param_17[1];
      *(undefined8 *)(local_e8 + 0x2a0) = 0;
    }
    if ((*(longlong *)(local_e8 + 0x2a8) != *param_18) ||
       (*(int *)(local_e8 + 0x2b0) != (int)param_18[1])) {
      *(longlong *)(local_e8 + 0x2a8) = *param_18;
      *(int *)(local_e8 + 0x2b0) = (int)param_18[1];
      *(undefined8 *)(local_e8 + 0x2b8) = 0;
    }
    if (param_19 <= 0.0) {
      if (*(char *)(local_e8 + 0x264) == '\x01') {
        *(undefined1 *)(local_e8 + 0x264) = 0;
      }
    }
    else {
      *(float *)(local_e8 + 0x260) = param_19;
      *(undefined1 *)(local_e8 + 0x264) = 1;
    }
    *(byte *)(local_e8 + 0x278) = *(byte *)(local_e8 + 0x278) & 0xf7 | param_21 << 3;
    if (param_22 != '\0') {
      *(undefined2 *)(local_e8 + 0x279) = 0x100;
    }
    lVar9 = FUN_140d12354();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
         ) == lVar9 + 0x30)) {
      FUN_1403e0f94(local_e8 + 0x280,param_1 + 0xe50);
    }
    local_f8 = local_e8;
    local_f0 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    local_118 = &local_f8;
    local_110 = 0;
    FUN_1405fe3b6(local_100,lVar10,&local_d8,param_4);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_e0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  LOCK();
  plVar2 = plVar12 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
LAB_14124d372:
  if (*(longlong *)(param_8 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14124d4e4 FUN_14124d4e4 body=157 status=ok
// SIG undefined FUN_14124d4e4(void)

void FUN_14124d4e4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 2;
  *param_1 = &PTR_FUN_14b217ce0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return;
}



// FUNCTION 14124d582 FUN_14124d582 body=353 status=ok
// SIG undefined FUN_14124d582(void)

void FUN_14124d582(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14124d607;
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
LAB_14124d607:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14124d6e4 FUN_14124d6e4 body=129 status=ok
// SIG undefined FUN_14124d6e4(void)

undefined8
FUN_14124d6e4(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar1 != 0) && (lVar1 = FUN_1400f6f32(lVar1), lVar1 != 0)) &&
      (*(longlong *)(lVar1 + 0x68) != 0)) &&
     (lVar1 = FUN_140bccd38(*(longlong *)(lVar1 + 0x68),param_2 + 0x18), lVar1 != 0)) {
    lVar2 = FUN_14030d4a0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14124d766(lVar1,param_4,param_5);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14124d766 FUN_14124d766 body=1454 status=ok
// SIG undefined FUN_14124d766(void)

void FUN_14124d766(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  FUN_14009b010(&local_78,3,0);
  if (param_3 != &DAT_14c9a1308) {
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
    }
    plVar3 = (longlong *)param_3[1];
    *param_3 = local_78;
    param_3[1] = (longlong)plStack_70;
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
  plVar3 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  FUN_14009b010(&local_88,1,0);
  if ((local_88 != 0) && ((*(byte *)(local_88 + 1) & 2) == 0)) {
    pcVar4 = "false";
    if (*(char *)(param_1 + 0x430) != '\0') {
      pcVar4 = "true";
    }
    FUN_140126aca(local_88,pcVar4);
  }
  local_98 = DAT_14cbcf3c4;
  local_90 = DAT_14cbcf3cc;
  FUN_1448075d0(&local_78);
  if (*param_3 != 0) {
    local_108 = 0;
    FUN_14014191c(*param_3,&local_78,&local_88,0);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  FUN_14009b010(&local_a8,1,0);
  if ((local_a8 != 0) && ((*(byte *)(local_a8 + 1) & 2) == 0)) {
    pcVar4 = "false";
    if (*(char *)(param_1 + 0x431) != '\0') {
      pcVar4 = "true";
    }
    FUN_140126aca(local_a8,pcVar4);
  }
  local_b8 = DAT_14cbcf3d0;
  local_b0 = DAT_14cbcf3d8;
  FUN_1448075d0(&local_78);
  if (*param_3 != 0) {
    local_108 = 0;
    FUN_14014191c(*param_3,&local_78,&local_a8,0);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  FUN_14009b010(&local_c8,2,0);
  if (0 < *(int *)(param_1 + 0x440)) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      FUN_14009b010(&local_78,1,0);
      if (local_78 != 0) {
        FUN_1401269d0(local_78,*(longlong *)(param_1 + 0x438) + lVar6);
      }
      if (local_c8 != 0) {
        local_108 = 0;
        FUN_140141db6(local_c8,&local_78,0,0);
      }
      plVar3 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_70 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (lVar5 < *(int *)(param_1 + 0x440));
  }
  local_d8 = DAT_14cbcf3dc;
  local_d0 = DAT_14cbcf3e4;
  FUN_1448075d0(&local_78);
  if (*param_3 != 0) {
    local_108 = 0;
    FUN_14014191c(*param_3,&local_78,&local_c8,0);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  local_e8 = 0;
  plStack_e0 = (longlong *)0x0;
  FUN_14009b010(&local_e8,2,0);
  if (0 < *(int *)(param_1 + 0x450)) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      FUN_14009b010(&local_78,1,0);
      if (local_78 != 0) {
        FUN_1402afb64(local_78,*(longlong *)(param_1 + 0x448) + lVar6);
      }
      if (local_e8 != 0) {
        local_108 = 0;
        FUN_140141db6(local_e8,&local_78,0,0);
      }
      plVar3 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_70 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x28;
    } while (lVar5 < *(int *)(param_1 + 0x450));
  }
  local_f8 = DAT_14cbcf3e8;
  local_f0 = DAT_14cbcf3f0;
  FUN_1448075d0(&local_78);
  if (*param_3 != 0) {
    local_108 = 0;
    FUN_14014191c(*param_3,&local_78,&local_e8,0);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14124dd15 FUN_14124dd15 body=160 status=ok
// SIG undefined FUN_14124dd15(void)

void FUN_14124dd15(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
        if ((int)plVar1[0x26] < 1) {
          FUN_1400847bc(plVar1 + 0x17,0);
          if ((int)plVar1[0x21] == 0) {
            FUN_140087e46(plVar1);
            if (*plVar1 != -1) {
              if (DAT_14cb259f8 == 0) goto LAB_14124dd59;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40));
            }
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30));
            }
          }
        }
LAB_14124dd59:
        *(undefined8 *)(param_1 + lVar2 * 8) = 0;
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14124ddb6 FUN_14124ddb6 body=49 status=ok
// SIG undefined FUN_14124ddb6(void)

void FUN_14124ddb6(longlong param_1)

{
  FUN_1449db8d8(param_1 + 0x38);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00014124dde3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x38))(param_1 + 0x30);
  return;
}



// FUNCTION 14124dde8 FUN_14124dde8 body=1 status=ok
// SIG undefined FUN_14124dde8(void)

void FUN_14124dde8(void)

{
  return;
}



// FUNCTION 14124ddea FUN_14124ddea body=544 status=ok
// SIG undefined FUN_14124ddea(void)

void FUN_14124ddea(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 auStack_98 [40];
  undefined4 local_70 [2];
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined4 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((ulonglong)((longlong)*(int *)(param_1 + 8) - (longlong)*(int *)(param_1 + 0x38)) < param_2) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2 & 0xffffffff);
    }
    if (*(int *)(param_1 + 0xc) < (int)param_2) {
      FUN_14124e00c(param_1,param_2 & 0xffffffff);
    }
    uVar1 = *(uint *)(param_1 + 0x70);
    uVar5 = uVar1;
    if ((ulonglong)(uVar1 * 3) <= param_2 * 5) {
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 * 2 + 1;
      } while ((ulonglong)(uVar5 * 3) <= param_2 * 5);
      uVar4 = uVar4 * 2;
      if (uVar1 <= uVar4) {
        puVar8 = (undefined4 *)(param_1 + 0x40);
        puVar2 = *(undefined4 **)(param_1 + 0x48);
        if (puVar2 == (undefined4 *)0x0) {
          local_58[0] = *puVar8;
        }
        *(undefined8 *)(param_1 + 0x48) = 0;
        local_48 = *(undefined4 *)(param_1 + 0x50);
        local_44 = *(undefined4 *)(param_1 + 0x54);
        *(undefined8 *)(param_1 + 0x50) = 0x100000000;
        puVar6 = (undefined4 *)(param_1 + 0x58);
        puVar3 = *(undefined4 **)(param_1 + 0x60);
        if (puVar3 == (undefined4 *)0x0) {
          local_70[0] = *puVar6;
        }
        *(undefined8 *)(param_1 + 0x60) = 0;
        local_60 = *(undefined4 *)(param_1 + 0x68);
        local_5c = *(undefined4 *)(param_1 + 0x6c);
        *(undefined8 *)(param_1 + 0x68) = 0x100000000;
        *(uint *)(param_1 + 0x70) = uVar5;
        *(undefined4 *)(param_1 + 0x74) = 0;
        iVar7 = uVar4 + 2;
        local_68 = puVar3;
        local_50 = puVar2;
        if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar7);
        }
        if (iVar7 == 0) {
          *(undefined4 *)(param_1 + 0x50) = 0;
          uVar5 = 0;
        }
        else {
          FUN_14475fe8c(puVar8);
          iVar7 = *(int *)(param_1 + 0x50);
          uVar5 = *(int *)(param_1 + 0x70) + 1;
          *(int *)(param_1 + 0x50) = iVar7 + *(int *)(param_1 + 0x70) + 1;
          if ((uint)(*(int *)(param_1 + 0x54) - iVar7) < uVar5) {
            FUN_146f3c7b6(puVar8,iVar7);
            uVar5 = *(int *)(param_1 + 0x70) + 1;
          }
          if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar5);
          }
          if (*(int *)(param_1 + 0x6c) < (int)uVar5) {
            FUN_14476002c(puVar6);
            uVar5 = *(int *)(param_1 + 0x70) + 1;
          }
        }
        FUN_144a7a6da(puVar6,uVar5);
        puVar8 = local_70;
        if (puVar3 != (undefined4 *)0x0) {
          puVar8 = puVar3;
        }
        uVar5 = 0;
        do {
          if (!SBORROW4(0,puVar8[(int)uVar5])) {
            puVar6 = local_58;
            if (puVar2 != (undefined4 *)0x0) {
              puVar6 = puVar2;
            }
            FUN_14726cfc6(param_1,puVar6[(int)uVar5]);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 <= uVar1);
        if (puVar3 != (undefined4 *)0x0) {
          FUN_1400020a8(puVar3);
        }
        if (puVar2 != (undefined4 *)0x0) {
          FUN_1400020a8(puVar2);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14124e00c FUN_14124e00c body=110 status=ok
// SIG undefined FUN_14124e00c(void)

void FUN_14124e00c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x60,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,8);
  }
  return;
}



// FUNCTION 14124e07a FUN_14124e07a body=110 status=ok
// SIG undefined FUN_14124e07a(void)

undefined8 * FUN_14124e07a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  FUN_1400b22c2(param_1 + 3,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 5,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 7,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 9,&DAT_149e02088);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 14124e0f4 FUN_14124e0f4 body=31 status=ok
// SIG undefined FUN_14124e0f4(void)

undefined8 FUN_14124e0f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14124e114 FUN_14124e114 body=180 status=ok
// SIG undefined FUN_14124e114(void)

void FUN_14124e114(longlong param_1,int *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *param_2;
  plVar1 = (longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < iVar3) {
    do {
      iVar3 = *(int *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
        FUN_1458553c4(plVar1,iVar3);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = 0;
      iVar2 = iVar2 + 1;
      iVar3 = *param_2;
    } while (iVar2 < iVar3);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  if (*(int *)(param_1 + 0x14) == iVar2) {
    FUN_1458553c4(plVar1,iVar2);
  }
  lVar4 = (longlong)iVar3;
  memmove((void *)(*plVar1 + lVar4 * 8 + 8),(void *)(*plVar1 + lVar4 * 8),
          (ulonglong)(uint)(iVar2 - iVar3) << 3);
  *(undefined8 *)(*plVar1 + lVar4 * 8) = *param_3;
  return;
}



// FUNCTION 14124e1d4 FUN_14124e1d4 body=31 status=ok
// SIG undefined FUN_14124e1d4(void)

undefined8 FUN_14124e1d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14124e200 FUN_14124e200 body=31 status=ok
// SIG undefined FUN_14124e200(void)

undefined8 FUN_14124e200(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14124e22c FUN_14124e22c body=31 status=ok
// SIG undefined FUN_14124e22c(void)

undefined8 FUN_14124e22c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14124e258 FUN_14124e258 body=31 status=ok
// SIG undefined FUN_14124e258(void)

undefined8 FUN_14124e258(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14124e284 FUN_14124e284 body=31 status=ok
// SIG undefined FUN_14124e284(void)

undefined8 FUN_14124e284(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14124e2a4 FUN_14124e2a4 body=309 status=ok
// SIG undefined FUN_14124e2a4(void)

void FUN_14124e2a4(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined7 uStack_20;
  undefined1 uStack_19;
  
  uStack_20 = (undefined7)(DAT_14c707940 ^ (ulonglong)auStack_48);
  uStack_19 = (undefined1)((DAT_14c707940 ^ (ulonglong)auStack_48) >> 0x38);
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_21);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_21);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_21 = (undefined1)uVar2;
      uStack_20 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_21);
    }
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    cVar5 = FUN_14124e3da();
    if (cVar5 != '\0') {
      uVar6 = 0;
      goto LAB_14124e361;
    }
  }
  uVar6 = 1;
LAB_14124e361:
  puVar7 = &local_21;
  if (puVar4 != (undefined1 *)0x0) {
    puVar7 = puVar4;
  }
  *puVar7 = uVar6;
  if ((CONCAT17(uStack_19,uStack_20) ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14124e3da FUN_14124e3da body=547 status=ok
// SIG undefined FUN_14124e3da(void)

undefined8 FUN_14124e3da(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (*(longlong *)(param_1 + 0x168) == 0) {
    if (param_1 == 0) goto LAB_14124e5f1;
  }
  else {
    do {
      param_1 = lVar1;
      lVar1 = *(longlong *)(param_1 + 0x168);
    } while (*(longlong *)(param_1 + 0x168) != 0);
  }
  if (DAT_14caf64b8 == 0) {
    local_40 = &local_28;
    local_28 = FUN_141030f22;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_142b4754c;
    local_48 = &LAB_147c45ce0;
    local_50 = &LAB_1463f1ff4;
    local_58 = L"Game";
    local_60 = 0x4000000000;
    local_68 = 0x10000004;
    local_70 = 8;
    local_78 = 0x428;
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  iVar2 = *(int *)(lVar1 + 0x38);
  if ((iVar2 < *(int *)(DAT_14caf64b8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
      DAT_14caf64b8 + 0x30)) {
    if (DAT_14cad3ae0 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_147a36475;
      local_50 = &LAB_1463c0cc7;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 8;
      local_78 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Controller",&DAT_14cad3ae0,FUN_1463c0ca0);
      lVar1 = *(longlong *)(param_1 + 0x10);
      iVar2 = *(int *)(lVar1 + 0x38);
    }
    if ((iVar2 < *(int *)(DAT_14cad3ae0 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cad3ae0 + 0x38) * 8) !=
        DAT_14cad3ae0 + 0x30)) {
LAB_14124e5f1:
      if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 14124e616 FUN_14124e616 body=842 status=ok
// SIG undefined FUN_14124e616(void)

void FUN_14124e616(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_38 = 0;
  local_30 = 0x10019100;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_14170fd90;
      local_70 = 0x8000000000000000;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
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
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  local_48 = local_30;
  local_40 = 0;
  uVar4 = FUN_14124e962(local_20);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14124e962 FUN_14124e962 body=352 status=ok
// SIG undefined FUN_14124e962(void)

undefined4 FUN_14124e962(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1412cbf9c(&local_48,param_1);
  if (local_48 == 0) {
    uVar3 = 0;
    goto LAB_14124ea70;
  }
  uVar4 = FUN_1412cbf12(param_2);
  local_58 = 0;
  uStack_50 = 0;
  uVar5 = FUN_1406eea5e();
  lVar6 = FUN_14477b664(uVar5);
  lVar7 = FUN_1406eea5e();
  uVar5 = FUN_1406eea5e();
  FUN_1402d1bfa(&local_38,uVar5,uVar4);
  if (local_38 != 0) {
    uStack_50 = 0;
  }
  local_60 = local_38;
  lVar8 = FUN_1406eea5e();
  if (lVar7 == 0) {
LAB_14124ea22:
    lVar8 = lVar7;
  }
  else if (lVar8 == 0) {
    lVar8 = 0;
  }
  else if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
           lVar8 + 0x30)) goto LAB_14124ea22;
  if (lVar6 != lVar8) {
    uStack_50 = 0;
  }
  uVar5 = FUN_14477b664(lVar8);
  local_58 = FUN_14477b664(uVar5);
  if (local_58 != 0 && local_38 != 0) {
    uStack_50 = uVar4;
  }
  uVar3 = FUN_1414ea1d0(local_48,&local_60);
LAB_14124ea70:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14124eac4 FUN_14124eac4 body=537 status=ok
// SIG undefined FUN_14124eac4(void)

void FUN_14124eac4(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 ***pppuVar7;
  undefined1 auStack_108 [32];
  undefined8 **local_e8 [3];
  ushort local_d0;
  byte local_c8;
  longlong local_c0 [7];
  longlong local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14094f5fe();
  local_80 = 0;
  uStack_78 = 0;
  uVar3 = FUN_140c1c194();
  lVar4 = FUN_14477b664(uVar3);
  lVar5 = FUN_14124ecde();
  uVar3 = FUN_14124ecde();
  FUN_1402d1bfa(local_c0,uVar3,param_1);
  if (local_c0[0] != 0) {
    uStack_78 = 0;
  }
  local_88 = local_c0[0];
  lVar6 = FUN_140c1c194();
  if (lVar5 != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
      goto LAB_14124eb77;
    }
    if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) goto LAB_14124eb77;
  }
  lVar6 = lVar5;
LAB_14124eb77:
  if (lVar4 != lVar6) {
    uStack_78 = 0;
  }
  uVar3 = FUN_14477b664(lVar6);
  local_80 = FUN_14477b664(uVar3);
  if ((local_c0[0] != 0) && (local_80 != 0)) {
    uStack_78 = param_1;
  }
  lVar4 = FUN_140950860(param_2,&local_88);
  if ((((lVar4 != 0) && ((*(byte *)(param_2 + 0x90) & 2) != 0)) && (*(int *)(lVar4 + 0x20) == 1)) &&
     (pcVar1 = *(char **)(lVar4 + 0x18), *pcVar1 == '\0')) {
    FUN_145856be8(param_1,local_e8);
    FUN_140cc7bf8(local_c0,local_e8);
    local_88 = CONCAT71(local_88._1_7_,2);
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    FUN_14034cca6(local_68,local_c0);
    *pcVar1 = (char)local_88;
    FUN_145856b94(pcVar1 + 8,&local_80);
    FUN_1403719a4(pcVar1 + 0x20,local_68);
    FUN_144a2da94(local_68);
    FUN_144a2da94(local_c0);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
    if (pcVar2 != (code *)0x0) {
      pppuVar7 = local_e8;
      if (0x18 < local_d0) {
        pppuVar7 = (undefined8 ***)local_e8[0];
      }
      (*pcVar2)(pppuVar7);
    }
    if (0x18 < local_d0) {
      FUN_1400020a8(local_e8[0]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14124ecde FUN_14124ecde body=57 status=ok
// SIG undefined FUN_14124ecde(void)

void FUN_14124ecde(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb588a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb588a0 = FUN_140002ddd(FUN_1464c2acd,uVar1,L"GbxActorPartDef_Param");
  }
  return;
}



// FUNCTION 14124ed18 FUN_14124ed18 body=71 status=ok
// SIG undefined FUN_14124ed18(void)

undefined8 * FUN_14124ed18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14124ed68 FUN_14124ed68 body=641 status=ok
// SIG undefined FUN_14124ed68(void)

undefined8 * FUN_14124ed68(undefined8 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  FUN_140c2310e();
  *param_1 = &PTR_FUN_14b486b50;
  FUN_140440628(param_1 + 0x33,&DAT_14cb94c98,0);
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0xffffffff00000000;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 700) = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0x200000000;
  param_1[0x68] = 0;
  param_1[0x69] = 0x2000000000;
  param_1[0x6a] = 0xffffffff;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0x200000000;
  param_1[0x75] = 0;
  param_1[0x76] = 0x2000000000;
  param_1[0x77] = 0xffffffff;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0x200000000;
  param_1[0x82] = 0;
  param_1[0x83] = 0x2000000000;
  param_1[0x84] = 0xffffffff;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x447) = 0;
  param_1[0x88] = 0;
  *(undefined2 *)(param_1 + 0x8e) = 4;
  *(undefined4 *)(param_1 + 0x8b) = 0x40000000;
  *(undefined1 *)(param_1 + 0x8f) = 3;
  cVar1 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0x90) = cVar1;
  *(undefined2 *)(param_1 + 0x91) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x95] = 0;
  *(undefined2 *)(param_1 + 0x99) = 8;
  param_1[0x96] = 0x40200000418c0000;
  *(undefined1 *)(param_1 + 0x9a) = 0xb;
  uVar2 = 0xb;
  if ((DAT_14c9a9174 & 0x20) != 0) {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0x9b) = uVar2;
  param_1[0x9c] = 0;
  *(undefined2 *)(param_1 + 0xa0) = 4;
  *(undefined4 *)(param_1 + 0x9d) = 1;
  *(undefined1 *)(param_1 + 0xa1) = 2;
  *(byte *)(param_1 + 0xa2) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0xa3] = 0;
  *(undefined2 *)(param_1 + 0xa7) = 4;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xa8) = 3;
  *(char *)(param_1 + 0xa9) = cVar1;
  return param_1;
}



// FUNCTION 14124efea FUN_14124efea body=137 status=ok
// SIG undefined FUN_14124efea(void)

void FUN_14124efea(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4c3b18;
  plVar3 = (longlong *)param_1[0x21];
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
  FUN_14124f074(param_1 + 5);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014124f06f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14124f074 FUN_14124f074 body=128 status=ok
// SIG undefined FUN_14124f074(void)

void FUN_14124f074(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4c3b20;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_14124f0f4(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14124f12c(param_1 + 7);
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14124f0f4 FUN_14124f0f4 body=55 status=ok
// SIG undefined FUN_14124f0f4(void)

void FUN_14124f0f4(longlong *param_1)

{
  FUN_14124f164(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14124f12c FUN_14124f12c body=55 status=ok
// SIG undefined FUN_14124f12c(void)

void FUN_14124f12c(longlong *param_1)

{
  FUN_14124f2dc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14124f164 FUN_14124f164 body=374 status=ok
// SIG undefined FUN_14124f164(void)

void FUN_14124f164(longlong *param_1,int param_2)

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
      FUN_148a3fb5a((longlong)iStack_54 * 0x68 + *local_70);
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
    FUN_14059f004(param_1,param_2);
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



// FUNCTION 14124f2dc FUN_14124f2dc body=506 status=ok
// SIG undefined FUN_14124f2dc(void)

void FUN_14124f2dc(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar12 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar12 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar12;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar12) goto LAB_14124f3c1;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar7[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar12 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      FUN_140c3a2ac((longlong)iVar6 * 0x38 + *param_1 + 8);
      uVar13 = ~(uint)uVar14 & uVar13;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar12;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar13;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_14124f3c1;
        }
        uVar12 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14124f3c1:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar3 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14124f4d6 FUN_14124f4d6 body=277 status=ok
// SIG undefined FUN_14124f4d6(void)

undefined8 FUN_14124f4d6(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14124f5e5;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14124f5e5;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14124f5e5:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14124f592;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_14124f592;
    }
  }
  uVar6 = 0;
LAB_14124f592:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14124f60b FUN_14124f60b body=195 status=ok
// SIG undefined FUN_14124f60b(void)

void FUN_14124f60b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14124f6ce(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7f16b0;
  puVar1[0x72] = &PTR_LAB_14b7f1cf0;
  puVar1[0x73] = &PTR_LAB_14b7f1d10;
  puVar1[0x74] = &PTR_LAB_14b7f1d80;
  puVar1[0x75] = &PTR_LAB_14b7f1db0;
  puVar1[0x76] = &PTR_LAB_14b7f1e00;
  puVar1[0xd6] = &PTR_LAB_14b7f1e30;
  puVar1[0xd7] = 0;
  puVar1[0xd8] = 0;
  puVar1[0xd9] = 0;
  puVar1[0xda] = 0;
  *(undefined4 *)(puVar1 + 0xdb) = 2;
  *(undefined1 *)(puVar1 + 0xe1) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6dc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6e4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6ec) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6f4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6fa) = 0;
  *(undefined1 *)(puVar1 + 0xe2) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x70c) = 0;
  return;
}



// FUNCTION 14124f6ce FUN_14124f6ce body=633 status=ok
// SIG undefined FUN_14124f6ce(void)

undefined8 * FUN_14124f6ce(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14b3cc230;
  param_1[0x72] = &PTR_FUN_14b3cc870;
  param_1[0x73] = &PTR_FUN_14b3cc890;
  param_1[0x74] = &PTR_FUN_14b3cc900;
  param_1[0x75] = &PTR_FUN_14b3cc930;
  param_1[0x76] = &PTR_FUN_14b3cc980;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 2;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c5) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 2;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x507) = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0x78] = &PTR_FUN_14b3ccfc0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 200) = 2;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x654) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x65c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x664) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66c) = 0x3f80000000000000;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) | 1;
  FUN_1403121a6(param_1,0);
  FUN_1446f470e(&local_28,L"MovementComponent",1);
  uVar1 = FUN_14124f948();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_28,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0xd3] = lVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14124f948 FUN_14124f948 body=228 status=ok
// SIG undefined FUN_14124f948(void)

longlong FUN_14124f948(void)

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
  if (DAT_14cb6eeb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b7fb6;
    local_38 = &LAB_1487a0efb;
    local_40 = FUN_1418615eb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 400;
    FUN_14081cfa3(L"/Script/GbxGame",L"RadiateDamageMovementComponent",&DAT_14cb6eeb0,&DAT_1487a0efa
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6eeb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14124fa2e FUN_14124fa2e body=105 status=ok
// SIG undefined FUN_14124fa2e(void)

void FUN_14124fa2e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_14482b126(lVar2,0x40000000);
    FUN_140457ffc(*(longlong *)(param_1 + 0xa0) + 0x48,param_1);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 14124fa98 FUN_14124fa98 body=550 status=ok
// SIG undefined FUN_14124fa98(void)

void FUN_14124fa98(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
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
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar14 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar14 = local_68 >> 0x20;
  }
  plVar6 = local_60;
  iVar15 = (int)local_68;
  uVar13 = (uint)local_58;
  iVar8 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      plVar9 = *(longlong **)(lVar11 + 0x18 + (longlong)iVar8 * 0x28);
      local_74 = iVar12;
      if (plVar9 != (longlong *)0x0) {
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
      }
      plVar9 = *(longlong **)(lVar11 + (longlong)iVar8 * 0x28 + 8);
      if (plVar9 != (longlong *)0x0) {
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
      }
      uVar13 = uVar13 & ~(uint)uVar14;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar11 = (longlong)iVar15;
      uVar7 = *(uint *)((longlong)plVar9 + lVar11 * 4) & uVar13;
      iVar12 = local_74;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar15) {
          iVar5 = iVar15;
        }
        if (iVar8 <= iVar15) break;
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar10 * 4 + lVar11 * 4 + 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar11 == lVar10) goto LAB_14124fc22;
        }
        iVar15 = iVar15 + (int)lVar10 + 1;
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_14124fc22:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14124fcc0 FUN_14124fcc0 body=9 status=ok
// SIG undefined FUN_14124fcc0(void)

void FUN_14124fcc0(longlong param_1)

{
  FUN_14124fd1c(param_1 + 0x10);
  return;
}



// FUNCTION 14124fcca FUN_14124fcca body=25 status=ok
// SIG undefined FUN_14124fcca(void)

void FUN_14124fcca(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014124fcdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14124fce4 FUN_14124fce4 body=56 status=ok
// SIG undefined FUN_14124fce4(void)

longlong FUN_14124fce4(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 14124fd1c FUN_14124fd1c body=108 status=ok
// SIG undefined FUN_14124fd1c(void)

void FUN_14124fd1c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3d1e0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[4];
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
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014124fd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14124fd88 FUN_14124fd88 body=286 status=ok
// SIG undefined FUN_14124fd88(void)

undefined8 FUN_14124fd88(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14124fea0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14124fea0;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14124fea0:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14124fe4d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_14124fe4d;
    }
  }
  uVar6 = 0;
LAB_14124fe4d:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14124fea8 FUN_14124fea8 body=41 status=ok
// SIG undefined FUN_14124fea8(void)

void FUN_14124fea8(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x6c8))();
  if (cVar1 != '\0') {
    FUN_140f6472c(param_1);
    return;
  }
  return;
}



// FUNCTION 14124fed2 FUN_14124fed2 body=88 status=ok
// SIG undefined FUN_14124fed2(void)

longlong * FUN_14124fed2(longlong *param_1,longlong *param_2)

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



// FUNCTION 14124ff2a FUN_14124ff2a body=108 status=ok
// SIG undefined FUN_14124ff2a(void)

void FUN_14124ff2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = (int)param_2[1];
  lVar5 = (longlong)iVar2;
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14124ff96(param_2,iVar2);
  }
  lVar3 = *param_2;
  puVar1 = (undefined8 *)(lVar3 + lVar5 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar5 * 0x18) = 0;
  *(undefined8 *)(lVar3 + lVar5 * 0x18) = *(undefined8 *)(param_1 + 0x38);
  uVar4 = FUN_14477b664(*(undefined8 *)(param_1 + 0x40));
  uVar4 = FUN_14477b664(uVar4);
  *(undefined8 *)(lVar3 + 8 + lVar5 * 0x18) = uVar4;
  *(undefined8 *)(lVar3 + 0x10 + lVar5 * 0x18) = *(undefined8 *)(param_1 + 0x48);
  return;
}



// FUNCTION 14124ff96 FUN_14124ff96 body=370 status=ok
// SIG undefined FUN_14124ff96(void)

void FUN_14124ff96(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14125001f;
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
LAB_14125001f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 141250110 FUN_141250110 body=501 status=ok
// SIG undefined FUN_141250110(void)

undefined8 * FUN_141250110(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140d4f264();
  *param_1 = &PTR_FUN_14b693fb0;
  *(undefined2 *)(param_1 + 0x9a) = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x52c) = 0x3f80000000000002;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xad) = 0xf00000d0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 0xf00000d0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xba) = 1;
  FUN_1405c5fa2();
  param_1[0xbc] = &DAT_14cb769e8;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbb] = &PTR_FUN_14b0394b0;
  *(undefined8 *)((longlong)param_1 + 0x614) = 0;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x601) = 0;
  *(undefined8 *)((longlong)param_1 + 0x609) = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_50 = L"/Script/OakGame.InventoryAugment_HitAndReact";
  local_48 = 0x2c;
  FUN_14475bf92(&local_78);
  _Src = local_68;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_78;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_78._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_70._4_4_;
  ppvVar1 = (void **)(param_1 + 4);
  if (ppvVar1 != &local_68) {
    iVar2 = (int)uStack_60;
    lVar3 = (longlong)(int)uStack_60;
    *(int *)(param_1 + 5) = (int)uStack_60;
    if ((int)uStack_60 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_60 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141250306 FUN_141250306 body=1155 status=ok
// SIG undefined FUN_141250306(void)

void FUN_141250306(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = (undefined *)FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_18 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  uStack_20 = 0;
  uStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = (undefined *)FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_20 = (undefined4)uVar2;
      uStack_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (undefined4)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14125078a(local_18,CONCAT44(uStack_1c,uStack_20),local_24);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125078a FUN_14125078a body=145 status=ok
// SIG undefined FUN_14125078a(void)

void FUN_14125078a(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = &local_38;
  local_20 = 4;
  local_18 = 2;
  local_38 = param_3;
  FUN_14125081c(param_1,param_2,puVar2);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125081c FUN_14125081c body=183 status=ok
// SIG undefined FUN_14125081c(void)

void FUN_14125081c(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x28), param_2 != 0 && lVar1 != 0)) {
    FUN_140c5894c(local_58,param_3);
    FUN_14101bbec(lVar1,param_2,local_58);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar3 = (undefined8 ****)local_50[0];
      if (local_38 < 0x19) {
        ppppuVar3 = local_50;
      }
      (*pcVar2)(ppppuVar3);
    }
    if (0x18 < local_38) {
      FUN_1400020a8(local_50[0]);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412508d4 FUN_1412508d4 body=1701 status=ok
// SIG undefined FUN_1412508d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1412508d4(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  double dVar14;
  double *pdVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  uint uVar22;
  longlong *plVar23;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  double local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar12 = (longlong *)FUN_14001cc68(0x148,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14b432d10;
  plVar1 = plVar12 + 2;
  FUN_140724c88(plVar1,param_1,param_3);
  plVar12[2] = (longlong)&PTR_FUN_14b431730;
  plVar12[0x1d] = param_1;
  plVar12[0x27] = 0;
  plVar12[0x28] = -0x4080000000000000;
  plVar12[0x1e] = 0;
  plVar12[0x1f] = 0;
  plVar12[0x20] = 0;
  plVar12[0x21] = 0;
  plVar12[0x22] = 0;
  if (*(int *)(param_3 + 0x18) != *(int *)(param_3 + 0x44)) {
    uVar18 = (uint)((ulonglong)DAT_14cb8cf20 >> 0x10);
    uVar22 = (uint)DAT_14cb8cf20 & 0xffff;
    lVar20 = param_3 + 0x48;
    if (*(longlong *)(param_3 + 0x50) != 0) {
      lVar20 = *(longlong *)(param_3 + 0x50);
    }
    iVar11 = *(int *)(lVar20 + (ulonglong)
                               (*(int *)(param_3 + 0x58) - 1U &
                               (int)((ulonglong)DAT_14cb8cf20 >> 0x20) +
                               ((uint)DAT_14cb8cf20 << 0x10 | uVar22) +
                               (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar22 >> 4)) * 4);
    if (iVar11 != -1) {
      do {
        lVar20 = *(longlong *)(param_3 + 0x10) + (longlong)iVar11 * 0x38;
        if (*(longlong *)(*(longlong *)(param_3 + 0x10) + (longlong)iVar11 * 0x38) == DAT_14cb8cf20)
        {
          if (lVar20 != 0) {
            puVar19 = (undefined8 *)(lVar20 + 8);
            bVar3 = *(byte *)(lVar20 + 0x28);
            uVar4 = *(ushort *)(lVar20 + 0x20);
            uStack_80 = (double)CONCAT62(uStack_80._2_6_,uVar4);
            if (uVar4 < 0x19) {
              puVar16 = &local_98;
            }
            else {
              puVar16 = (undefined8 *)FUN_14001cc68(uVar4,0);
              puVar19 = (undefined8 *)*puVar19;
              local_98 = puVar16;
            }
            uVar13 = (ulonglong)((uint)bVar3 * 0x120);
            pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar13);
            if (pcVar5 == (code *)0x0) {
              memcpy(puVar16,puVar19,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
            }
            else {
              (*pcVar5)(puVar16,puVar19);
            }
            local_78 = *(byte *)(lVar20 + 0x28);
            goto LAB_141250a7b;
          }
          break;
        }
        iVar11 = *(int *)(lVar20 + 0x30);
      } while (iVar11 != -1);
    }
  }
  uStack_80 = (double)((ulonglong)uStack_80._2_6_ << 0x10);
  local_78 = 0;
LAB_141250a7b:
  puVar19 = &local_98;
  FUN_1405b801a(&local_98,&local_b0,&DAT_14c8464e0);
  uVar17 = SUB84(puVar19,0);
  plVar12[0x26] = (longlong)local_a0;
  *(undefined4 *)(plVar12 + 0x24) = local_b0;
  *(undefined4 *)((longlong)plVar12 + 0x124) = uStack_ac;
  *(undefined4 *)(plVar12 + 0x25) = uStack_a8;
  *(undefined4 *)((longlong)plVar12 + 300) = uStack_a4;
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
  if (pcVar5 != (code *)0x0) {
    puVar19 = &local_98;
    if (0x18 < (ushort)uStack_80) {
      puVar19 = local_98;
    }
    uVar17 = SUB84(puVar19,0);
    (*pcVar5)();
  }
  if (0x18 < (ushort)uStack_80) {
    puVar19 = local_98;
    FUN_1400020a8();
    uVar17 = SUB84(puVar19,0);
  }
  dVar14 = (double)plVar12[9];
  lVar20 = *(longlong *)((longlong)dVar14 + 0x1c8);
  if (lVar20 == 0) {
    local_b8 = DAT_14c846508;
    local_c8 = (undefined4)DAT_14c8464f8;
    uStack_c4 = DAT_14c8464f8._4_4_;
    uStack_c0 = (undefined4)DAT_14c846500;
    uStack_bc = DAT_14c846500._4_4_;
  }
  else {
    puVar19 = *(undefined8 **)(lVar20 + 0x240);
    dVar8 = *(double *)(lVar20 + 0x248);
    dVar9 = *(double *)(lVar20 + 0x250);
    dVar10 = *(double *)(lVar20 + 600);
    pdVar15 = *(double **)(lVar20 + 0x228);
    local_98 = puVar19;
    uStack_90 = dVar8;
    local_88 = dVar9;
    uStack_80 = dVar10;
    if (pdVar15 == (double *)0x0) {
      uVar17 = 0x40;
      pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
      dVar14 = DAT_14c8463d8;
      *pdVar15 = DAT_14c8463d0;
      pdVar15[1] = dVar14;
      dVar14 = DAT_14c8463e8;
      pdVar15[2] = DAT_14c8463e0;
      pdVar15[3] = dVar14;
      dVar14 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar15[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar15[5] = dVar14;
      dVar14 = DAT_14c846508;
      pdVar15[6] = DAT_14c846508;
      *(double **)(lVar20 + 0x228) = pdVar15;
    }
    auVar6._8_4_ = (int)-(ulonglong)(dVar8 != pdVar15[1]);
    auVar6._0_8_ = -(ulonglong)((double)puVar19 != *pdVar15);
    auVar6._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar15[1]) >> 0x20);
    iVar11 = movmskpd(SUB84(dVar14,0),auVar6);
    auVar7._8_4_ = (int)-(ulonglong)(dVar10 != pdVar15[3]);
    auVar7._0_8_ = -(ulonglong)(dVar9 != pdVar15[2]);
    auVar7._12_4_ = (int)(-(ulonglong)(dVar10 != pdVar15[3]) >> 0x20);
    uVar18 = movmskpd(uVar17,auVar7);
    if ((uVar18 & 0x3fffffff) != 0 || iVar11 != 0) {
      *(undefined4 *)(pdVar15 + 2) = (undefined4)local_88;
      *(undefined4 *)((longlong)pdVar15 + 0x14) = local_88._4_4_;
      *(undefined4 *)(pdVar15 + 3) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)pdVar15 + 0x1c) = uStack_80._4_4_;
      *(undefined4 *)pdVar15 = (undefined4)local_98;
      *(undefined4 *)((longlong)pdVar15 + 4) = local_98._4_4_;
      *(undefined4 *)(pdVar15 + 1) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)pdVar15 + 0xc) = uStack_90._4_4_;
      FUN_1448052ee(&local_98,&local_b0);
      pdVar15[6] = local_a0;
      pdVar15[4] = (double)CONCAT44(uStack_ac,local_b0);
      pdVar15[5] = (double)CONCAT44(uStack_a4,uStack_a8);
    }
    local_b8 = pdVar15[6];
    local_c8 = *(undefined4 *)(pdVar15 + 4);
    uStack_c4 = *(undefined4 *)((longlong)pdVar15 + 0x24);
    uStack_c0 = *(undefined4 *)(pdVar15 + 5);
    uStack_bc = *(undefined4 *)((longlong)pdVar15 + 0x2c);
  }
  FUN_140d2943c(&local_c8,&local_b0,plVar12 + 0x24);
  uVar18 = (uint)((double)CONCAT44(uStack_ac,local_b0) <= 0.0);
  if (ABS((double)CONCAT44(uStack_ac,local_b0)) < ABS((double)CONCAT44(uStack_a4,uStack_a8))) {
    uVar18 = 0.0 < (double)CONCAT44(uStack_a4,uStack_a8) | 2;
  }
  *(uint *)(plVar12 + 0x23) = uVar18;
  if (*(int *)(param_3 + 0x18) != *(int *)(param_3 + 0x44)) {
    uVar18 = (uint)((ulonglong)DAT_14cb8cf28 >> 0x10);
    uVar22 = (uint)DAT_14cb8cf28 & 0xffff;
    lVar20 = param_3 + 0x48;
    if (*(longlong *)(param_3 + 0x50) != 0) {
      lVar20 = *(longlong *)(param_3 + 0x50);
    }
    iVar11 = *(int *)(lVar20 + (ulonglong)
                               (*(int *)(param_3 + 0x58) - 1U &
                               (int)((ulonglong)DAT_14cb8cf28 >> 0x20) +
                               ((uint)DAT_14cb8cf28 << 0x10 | uVar22) +
                               (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar22 >> 4)) * 4);
    if (iVar11 != -1) {
      do {
        lVar20 = *(longlong *)(param_3 + 0x10) + (longlong)iVar11 * 0x38;
        if (*(longlong *)(*(longlong *)(param_3 + 0x10) + (longlong)iVar11 * 0x38) == DAT_14cb8cf28)
        {
          if (lVar20 != 0) {
            puVar19 = (undefined8 *)(lVar20 + 8);
            bVar3 = *(byte *)(lVar20 + 0x28);
            uVar4 = *(ushort *)(lVar20 + 0x20);
            uStack_80 = (double)CONCAT62(uStack_80._2_6_,uVar4);
            if (uVar4 < 0x19) {
              puVar16 = &local_98;
            }
            else {
              puVar16 = (undefined8 *)FUN_14001cc68(uVar4,0);
              puVar19 = (undefined8 *)*puVar19;
              local_98 = puVar16;
            }
            uVar13 = (ulonglong)((uint)bVar3 * 0x120);
            pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar13);
            if (pcVar5 == (code *)0x0) {
              memcpy(puVar16,puVar19,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar13));
            }
            else {
              (*pcVar5)(puVar16,puVar19);
            }
            local_78 = *(byte *)(lVar20 + 0x28);
            goto LAB_141250cd4;
          }
          break;
        }
        iVar11 = *(int *)(lVar20 + 0x30);
      } while (iVar11 != -1);
    }
  }
  uStack_80 = (double)((ulonglong)uStack_80._2_6_ << 0x10);
  local_78 = 0;
LAB_141250cd4:
  local_d0 = 0;
  FUN_141250f7a(&local_98,&local_c8);
  plVar12[0x27] = CONCAT44(uStack_c4,local_c8);
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
  if (pcVar5 != (code *)0x0) {
    puVar19 = &local_98;
    if (0x18 < (ushort)uStack_80) {
      puVar19 = local_98;
    }
    (*pcVar5)(puVar19);
  }
  if (0x18 < (ushort)uStack_80) {
    FUN_1400020a8(local_98);
  }
  if ((plVar1 == (longlong *)0x0) ||
     (((plVar12[3] != 0 && (plVar12[4] != 0)) && (0 < *(int *)(plVar12[4] + 8))))) {
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar12;
    if (plVar12 == (longlong *)0x0) goto LAB_141250d87;
  }
  else {
    if (plVar12 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar23 = (longlong *)&DAT_00000020;
      plVar21 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_141250ec9:
        LOCK();
        piVar2 = (int *)((longlong)plVar21 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar21 + 0x10))();
        }
        *plVar23 = (longlong)plVar12;
        if (plVar12 != (longlong *)0x0) goto LAB_141250d68;
      }
      *param_2 = (longlong)plVar1;
      param_2[1] = (longlong)plVar12;
      goto LAB_141250d87;
    }
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    plVar12[3] = (longlong)plVar1;
    if ((longlong *)plVar12[4] != plVar12) {
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar12[4] != (longlong *)0x0) {
        plVar23 = plVar12 + 4;
        plVar21 = (longlong *)plVar12[4];
        goto LAB_141250ec9;
      }
      plVar12[4] = (longlong)plVar12;
    }
LAB_141250d68:
    LOCK();
    plVar23 = plVar12 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar12;
  }
  LOCK();
  *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
  UNLOCK();
  LOCK();
  plVar1 = plVar12 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar2 = (int *)((longlong)plVar12 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
LAB_141250d87:
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141250f7a FUN_141250f7a body=177 status=ok
// SIG undefined FUN_141250f7a(void)

longlong * FUN_141250f7a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[4] == '\x12') {
    *param_2 = *param_1;
  }
  else {
    FUN_1400b56fe(local_48,param_1,0x12);
    pppuVar2 = (undefined8 ***)local_48[0];
    if (local_28 == 0) {
      pppuVar2 = (undefined8 ***)*param_3;
    }
    *param_2 = (longlong)pppuVar2;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_48;
      if (0x18 < local_30) {
        pppuVar2 = (undefined8 ***)local_48[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(local_48[0]);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125102c FUN_14125102c body=228 status=ok
// SIG undefined FUN_14125102c(void)

longlong FUN_14125102c(void)

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
  if (DAT_14cb556f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141737a50;
    local_38 = &LAB_14862487f;
    local_40 = FUN_1464b2cec;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/GbxGame",L"BreadcrumbRuntimeGraph",&DAT_14cb556f0,&DAT_14862487e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb556f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141251112 FUN_141251112 body=45 status=ok
// SIG undefined FUN_141251112(void)

undefined8 FUN_141251112(undefined8 param_1,int param_2)

{
  FUN_141251140();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 141251140 FUN_141251140 body=625 status=ok
// SIG undefined FUN_141251140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141251140(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b5f8c60;
  FUN_14400c515(param_1[0x41],*(undefined4 *)(param_1 + 0x42));
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_140f1eff2(param_1[0x38],*(undefined4 *)(param_1 + 0x39));
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_140f1eff2(param_1[0x36],*(undefined4 *)(param_1 + 0x37));
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_140f1eff2(param_1[0x34],*(undefined4 *)(param_1 + 0x35));
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_140d01cbe(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_14096d17b(param_1[0x30],*(undefined4 *)(param_1 + 0x31));
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_14400c544(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_14400c573(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
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
                    /* WARNING: Could not recover jumptable at 0x000141251399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1412513b2 FUN_1412513b2 body=1514 status=ok
// SIG undefined FUN_1412513b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1412513b2(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  code *pcVar4;
  longlong lVar5;
  double dVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 ****ppppuVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  undefined8 *_Src;
  double dVar19;
  undefined1 auStack_148 [40];
  longlong *local_120;
  float local_118;
  longlong *local_110;
  undefined4 local_108;
  int local_100;
  uint local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined8 ***local_e0;
  longlong *local_d8;
  ushort local_c8;
  byte local_c0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar9 = (longlong *)FUN_14001cc68(0x2a0,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14b432c70;
  plVar1 = plVar9 + 2;
  FUN_140724c88(plVar1,param_1,param_3);
  plVar9[0x1c] = param_1;
  *(undefined1 *)(plVar9 + 0x24) = 0;
  *(undefined4 *)(plVar9 + 0x25) = 0;
  *(undefined1 *)((longlong)plVar9 + 300) = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  plVar9[0x1f] = 0;
  plVar9[0x20] = 0;
  plVar9[2] = (longlong)&PTR_FUN_14b4312c0;
  plVar9[0x26] = param_1;
  FUN_1406d2124(plVar9 + 0x28);
  plVar9[0x52] = 0;
  *(undefined4 *)(plVar9 + 0x53) = 0;
  if (*(int *)(param_3 + 0x18) != *(int *)(param_3 + 0x44)) {
    uVar7 = (uint)((ulonglong)DAT_14cb8d410 >> 0x10);
    uVar16 = (uint)DAT_14cb8d410 & 0xffff;
    lVar12 = param_3 + 0x48;
    if (*(longlong *)(param_3 + 0x50) != 0) {
      lVar12 = *(longlong *)(param_3 + 0x50);
    }
    iVar17 = *(int *)(lVar12 + (ulonglong)
                               (*(int *)(param_3 + 0x58) - 1U &
                               (int)((ulonglong)DAT_14cb8d410 >> 0x20) +
                               ((uint)DAT_14cb8d410 << 0x10 | uVar16) +
                               (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar16 >> 4)) * 4);
    if (iVar17 != -1) {
      do {
        lVar12 = *(longlong *)(param_3 + 0x10) + (longlong)iVar17 * 0x38;
        if (*(longlong *)(*(longlong *)(param_3 + 0x10) + (longlong)iVar17 * 0x38) == DAT_14cb8d410)
        {
          if (lVar12 != 0) {
            _Src = (undefined8 *)(lVar12 + 8);
            bVar3 = *(byte *)(lVar12 + 0x28);
            local_c8 = *(ushort *)(lVar12 + 0x20);
            if (local_c8 < 0x19) {
              ppppuVar14 = &local_e0;
            }
            else {
              ppppuVar14 = (undefined8 ****)FUN_14001cc68(local_c8,0);
              _Src = (undefined8 *)*_Src;
              local_e0 = ppppuVar14;
            }
            uVar10 = (ulonglong)((uint)bVar3 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + uVar10);
            if (pcVar4 == (code *)0x0) {
              memcpy(ppppuVar14,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar10));
            }
            else {
              (*pcVar4)(ppppuVar14,_Src);
            }
            local_c0 = *(byte *)(lVar12 + 0x28);
            goto LAB_141251578;
          }
          break;
        }
        iVar17 = *(int *)(lVar12 + 0x30);
      } while (iVar17 != -1);
    }
  }
  local_c8 = 0;
  local_c0 = 0;
LAB_141251578:
  uVar8 = FUN_14005fbd2(&local_e0,0);
  *(undefined4 *)(plVar9 + 0x27) = uVar8;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar14 = &local_e0;
    if (0x18 < local_c8) {
      ppppuVar14 = (undefined8 ****)local_e0;
    }
    (*pcVar4)(ppppuVar14);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(local_e0);
  }
  if (((*(char *)(plVar9[0x26] + 0x618) == '\x01') && ((*(uint *)(plVar9 + 0x27) & 0xfffffffe) == 2)
      ) && (lVar12 = plVar9[9], lVar12 != 0)) {
    lVar11 = FUN_14070cc62();
    if (((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) &&
       ((*(longlong *)(lVar12 + 0x858) != 0 && (lVar12 = FUN_144a7c224(), lVar12 != 0)))) {
      lVar11 = plVar9[0x26] + (ulonglong)*(byte *)(plVar9 + 0x27) * 0x150 + 0xd8;
      FUN_140bb5078(lVar11,&local_e0,plVar9[0x15],&DAT_14cb8d438);
      if (((local_d8 != (longlong *)0x0) && (lVar13 = FUN_1402576f0(), lVar13 != 0)) &&
         ((lVar5 = local_d8[2], lVar5 != 0 &&
          ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar5 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
            lVar13 + 0x30)))))) {
        local_108 = (**(code **)(*local_d8 + 0x2b0))(local_d8);
        local_110 = local_d8;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(local_d8);
        }
        FUN_14125199e(lVar12,&local_120);
        if (local_120 != (longlong *)0x0) {
          FUN_141251a4c(plVar9 + 0x28,lVar11);
          *(undefined1 *)(plVar9 + 0x38) = 1;
          local_100 = 0x3dcccccd;
          local_fc = local_fc & 0xffffff00;
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          FUN_14585a666(plVar9 + 0x34);
          *(undefined4 *)(plVar9 + 0x34) = 0x3dcccccd;
          *(undefined1 *)((longlong)plVar9 + 0x1a4) = 0;
          (**(code **)(*local_120 + 0x318))(local_120,&local_100);
          lVar12 = (longlong)(int)local_fc;
          dVar6 = (double)(int)local_fc;
          dVar19 = (double)local_100;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(local_120);
          }
          if ((DAT_14c950c29 & 1) != 0) {
            FUN_1456cec3c(local_120);
          }
          plVar9[0x52] = (longlong)local_120;
          *(float *)(plVar9 + 0x53) =
               (float)(((double)(lVar12 * 2) + (double)((ulonglong)dVar6 & 0x8000000000000000)) /
                      dVar19) + local_118;
        }
      }
    }
  }
  if ((plVar1 == (longlong *)0x0) ||
     (((plVar9[3] != 0 && (plVar9[4] != 0)) && (0 < *(int *)(plVar9[4] + 8))))) {
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar9;
    if (plVar9 == (longlong *)0x0) goto LAB_141251821;
  }
  else {
    if (plVar9 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar18 = (longlong *)&DAT_00000020;
      plVar15 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_14125192c:
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
        *plVar18 = (longlong)plVar9;
        if (plVar9 != (longlong *)0x0) goto LAB_141251806;
      }
      *param_2 = (longlong)plVar1;
      param_2[1] = (longlong)plVar9;
      goto LAB_141251821;
    }
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    plVar9[3] = (longlong)plVar1;
    if ((longlong *)plVar9[4] != plVar9) {
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar9[4] != (longlong *)0x0) {
        plVar18 = plVar9 + 4;
        plVar15 = (longlong *)plVar9[4];
        goto LAB_14125192c;
      }
      plVar9[4] = (longlong)plVar9;
    }
LAB_141251806:
    LOCK();
    plVar18 = plVar9 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar9;
  }
  LOCK();
  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  UNLOCK();
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
LAB_141251821:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14125199e FUN_14125199e body=172 status=ok
// SIG undefined FUN_14125199e(void)

undefined8 FUN_14125199e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = param_3[1];
  lVar1 = *param_3;
  local_40 = lVar1;
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 == 0) {
      local_38 = 0;
      goto LAB_1412519eb;
    }
  }
  else {
    FUN_1456cec3c(lVar1);
  }
  local_38 = FUN_14065f688(lVar1,(int)lVar2);
LAB_1412519eb:
  FUN_1404a739e(param_1 + 0x1b8,local_50);
  FUN_1404a1882(local_50,param_2);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141251a4c FUN_141251a4c body=615 status=ok
// SIG undefined FUN_141251a4c(void)

longlong FUN_141251a4c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  
  FUN_141251cb4();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  lVar3 = *(longlong *)(param_2 + 0x18);
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 0x18);
    }
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x18) = lVar3;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x2d) = *(undefined8 *)(param_2 + 0x2d);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  lVar3 = *(longlong *)(param_2 + 0x40);
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 0x40);
      bVar2 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x40) = lVar3;
  lVar3 = *(longlong *)(param_2 + 0x48);
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 0x48);
      bVar2 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x48) = lVar3;
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  lVar3 = *(longlong *)(param_2 + 0x68);
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 0x68);
      bVar2 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x68) = lVar3;
  lVar3 = *(longlong *)(param_2 + 0x70);
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 0x70);
    }
  }
  *(longlong *)(param_1 + 0x70) = lVar3;
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_144983130(param_1 + 0x88,param_2 + 0x88);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  FUN_144983130(param_1 + 200,param_2 + 200);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined1 *)(param_1 + 0x104) = *(undefined1 *)(param_2 + 0x104);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  lVar3 = *(longlong *)(param_2 + 0x110);
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 0x110);
    }
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x110) = lVar3;
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  lVar3 = *(longlong *)(param_2 + 0x128);
  if ((bVar2 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 0x128);
    }
  }
  *(longlong *)(param_1 + 0x128) = lVar3;
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  uVar1 = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x140) = uVar1;
  *(undefined2 *)(param_1 + 0x148) = *(undefined2 *)(param_2 + 0x148);
  return param_1;
}



// FUNCTION 141251cb4 FUN_141251cb4 body=93 status=ok
// SIG undefined FUN_141251cb4(void)

undefined8 * FUN_141251cb4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14079c534(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_141251d4e(param_1,iVar1);
      FUN_141251d11(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 141251d11 FUN_141251d11 body=60 status=ok
// SIG undefined FUN_141251d11(void)

void FUN_141251d11(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_141251e36(param_1,param_2);
    param_1 = param_1 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return;
}



// FUNCTION 141251d4e FUN_141251d4e body=232 status=ok
// SIG undefined FUN_141251d4e(void)

void FUN_141251d4e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0xf0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    iVar2 = (int)(uVar1 / 0xf0);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar4 = iVar2;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xf0,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 141251e36 FUN_141251e36 body=355 status=ok
// SIG undefined FUN_141251e36(void)

undefined8 * FUN_141251e36(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar3 = DAT_14c950c29;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_2 + 0x34);
  lVar1 = param_2[7];
  param_1[7] = lVar1;
  if ((lVar1 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
    bVar3 = DAT_14c950c29;
  }
  lVar1 = param_2[8];
  param_1[8] = lVar1;
  if ((lVar1 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
    bVar3 = DAT_14c950c29;
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined1 *)((longlong)param_1 + 0x54) = *(undefined1 *)((longlong)param_2 + 0x54);
  lVar1 = param_2[0xb];
  param_1[0xb] = lVar1;
  if ((lVar1 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
    bVar3 = DAT_14c950c29;
  }
  lVar1 = param_2[0xc];
  param_1[0xc] = lVar1;
  if ((lVar1 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  FUN_14034cca6(param_1 + 0xe,param_2 + 0xe);
  FUN_14034cca6(param_1 + 0x15,param_2 + 0x15);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0xe6);
  param_1[0x1c] = param_2[0x1c];
  *(undefined8 *)((longlong)param_1 + 0xe6) = uVar2;
  return param_1;
}



// FUNCTION 141251f9a FUN_141251f9a body=147 status=ok
// SIG undefined FUN_141251f9a(void)

void FUN_141251f9a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xe0);
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
  plVar3 = *(longlong **)(param_1 + 0x90);
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
  plVar3 = *(longlong **)(param_1 + 0x48);
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
                    /* WARNING: Could not recover jumptable at 0x000141252029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14125202e FUN_14125202e body=157 status=ok
// SIG undefined FUN_14125202e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14125202e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a3d10) {
    FUN_144b3d300(&DAT_14c9a3d10);
    if (DAT_14c9a3d10 == -1) {
      DAT_14c9a3ce0 = 0;
      DAT_14c9a3ce8 = 0;
      DAT_14c9a3cc0 = 0;
      _DAT_14c9a3cc8 = 0;
      _DAT_14c9a3cec = 0xffffffff00000080;
      DAT_14c9a3cf4 = 0;
      DAT_14c9a3d00 = 0;
      DAT_14c9a3d08 = 0;
      atexit(FUN_142b2fbbd);
      _Init_thread_footer(&DAT_14c9a3d10);
    }
  }
  return &DAT_14c9a3cc0;
}



// FUNCTION 1412520cc FUN_1412520cc body=277 status=ok
// SIG undefined FUN_1412520cc(void)

undefined8 FUN_1412520cc(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1412521db;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1412521db;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1412521db:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141252189;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_141252189;
    }
  }
  uVar6 = 0;
LAB_141252189:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412521e2 FUN_1412521e2 body=46 status=ok
// SIG undefined FUN_1412521e2(void)

void FUN_1412521e2(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140083514(param_1 + 0xb0,0);
  if (cVar1 == '\0') {
    FUN_1412526d2(param_1);
    return;
  }
  return;
}



// FUNCTION 141252210 FUN_141252210 body=503 status=ok
// SIG undefined FUN_141252210(void)

void FUN_141252210(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  longlong *local_38;
  undefined1 local_2d;
  undefined1 local_2b;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = FUN_14011be0c(param_1 + 0x30);
  if (lVar5 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_60 = &local_40;
      local_40 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1459f2e4c;
      local_68 = &LAB_148c39de3;
      local_70 = &LAB_1457a9eb2;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      FUN_1403adc5e(&local_40,lVar5);
      puVar3 = *(undefined8 **)(local_40 + 0x70);
      AcquireSRWLockExclusive((PSRWLOCK)(puVar3 + 4));
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
      if (0 < *(int *)(puVar3 + 1)) {
        *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 1;
        uVar4 = *puVar3;
        local_29 = 0;
        FUN_1403adb6e(uVar4,0,DAT_14cbd6990);
        local_2b = 0;
        FUN_1403adb6e(uVar4,1,DAT_14cbd69a8);
        local_2d = 0;
        FUN_1403adb6e(uVar4,0,DAT_14cbd69c0);
        *(int *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125241e FUN_14125241e body=669 status=ok
// SIG undefined FUN_14125241e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14125241e(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_14011be0c(param_1 + 0x30);
  if (lVar4 == 0) {
LAB_14125268b:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if (DAT_14cbadd90 == 0) {
    local_50 = &local_38;
    local_38 = FUN_141030f22;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1459f2e4c;
    local_58 = &LAB_148c39de3;
    local_60 = &LAB_1457a9eb2;
    local_68 = &DAT_149e063b2;
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = CONCAT44(local_80._4_4_,0x10);
    local_88 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_14125268b;
  FUN_1403adc5e(&local_38,lVar4);
  puVar3 = *(undefined8 **)(local_38 + 0x70);
  AcquireSRWLockExclusive((PSRWLOCK)(puVar3 + 4));
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if (*(int *)(puVar3 + 1) < 1) goto LAB_1412525b3;
  *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 1;
  iVar5 = *(int *)(param_1 + 0xb4);
  iVar6 = _DAT_00000b44;
  if (((iVar5 == 0) || (uVar2 = *(uint *)(param_1 + 0xb0), (int)uVar2 < 0)) ||
     (DAT_14c9647dc <= (int)uVar2)) {
LAB_1412525e1:
    lVar4 = 0;
  }
  else {
    plVar7 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar5)) ||
       ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = *plVar7;
    }
    iVar6 = *(int *)(lVar4 + 0xb44);
    plVar7 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar5)) ||
       ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_1412525e1;
    lVar4 = *plVar7;
  }
  iVar5 = 1;
  if (1 < *(int *)(lVar4 + 0xb3c)) {
    iVar5 = *(int *)(lVar4 + 0xb3c);
  }
  local_80 = DAT_14cbd6a38;
  local_88 = 0x3f800000;
  FUN_1407fb220(*puVar3,(float)iVar6,(float)iVar5,(float)iVar6 / (float)iVar5);
  *(int *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1;
LAB_1412525b3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1412526d2 FUN_1412526d2 body=1322 status=ok
// SIG undefined FUN_1412526d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412526d2(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined7 uVar17;
  ulonglong uVar16;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  code *local_98;
  longlong *local_90;
  undefined1 local_85;
  undefined1 local_83;
  undefined1 local_81;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar12 = FUN_14011be0c(param_1 + 0x30);
  if (lVar12 == 0) {
LAB_141252bab:
    if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if (DAT_14cbadd90 == 0) {
    local_b0 = &local_98;
    local_98 = FUN_141030f22;
    local_a0 = FUN_14081d0ea;
    local_a8 = &LAB_1459f2e4c;
    local_b8 = &LAB_148c39de3;
    local_c0 = &LAB_1457a9eb2;
    local_c8 = &DAT_149e063b2;
    local_d0 = 0;
    local_d8 = 0x10000004;
    local_e0 = CONCAT44(local_e0._4_4_,0x10);
    local_e8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_141252bab;
  FUN_1403adc5e(&local_98,lVar12);
  puVar6 = *(undefined8 **)(local_98 + 0x70);
  AcquireSRWLockExclusive((PSRWLOCK)(puVar6 + 4));
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_90 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_90 + 0x10))(local_90);
      }
    }
  }
  if (*(int *)(puVar6 + 1) < 1) goto LAB_141252a2f;
  *(int *)(puVar6 + 2) = *(int *)(puVar6 + 2) + 1;
  uVar7 = *puVar6;
  puVar2 = (uint *)(param_1 + 0xb0);
  cVar9 = FUN_140083514(puVar2,0);
  if (cVar9 == '\0') {
    iVar10 = *(int *)(param_1 + 0xb4);
    uVar17 = (undefined7)((ulonglong)puVar2 >> 8);
    if (((iVar10 == 0) || (uVar5 = *puVar2, (int)uVar5 < 0)) || (DAT_14c9647dc <= (int)uVar5)) {
      if (_DAT_00000b3c == 1) goto LAB_141252c19;
LAB_141252a8a:
      lVar12 = 0;
    }
    else {
      plVar15 = (longlong *)
                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
      if (((plVar15 == (longlong *)0x0) || ((int)plVar15[2] != iVar10)) ||
         ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) {
        lVar12 = 0;
      }
      else {
        lVar12 = *plVar15;
      }
      if (*(int *)(lVar12 + 0xb3c) == 1) {
LAB_141252c19:
        uVar16 = CONCAT71(uVar17,1);
        goto LAB_14125288a;
      }
      if (((DAT_14c9647dc <= (int)uVar5) ||
          (plVar15 = (longlong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
          plVar15 == (longlong *)0x0)) ||
         (((int)plVar15[2] != iVar10 || ((*(uint *)(plVar15 + 1) & 0x10200000) != 0))))
      goto LAB_141252a8a;
      lVar12 = *plVar15;
    }
    uVar16 = CONCAT71(uVar17,*(int *)(lVar12 + 0xb44) == 0);
  }
  else {
    uVar16 = 0;
    cVar9 = FUN_14008355a(param_1 + 0xb8,0);
    if (cVar9 == '\0') {
      lVar12 = FUN_14479d2ce(param_1 + 0xb8);
      if ((*(int *)(lVar12 + 0xbf0) < 1) ||
         (plVar15 = *(longlong **)(*(longlong *)(lVar12 + 0xbe8) + 0x10), plVar15 == (longlong *)0x0
         )) {
        uVar16 = 0;
      }
      else {
        iVar10 = (**(code **)(*plVar15 + 0x2c0))(plVar15);
        iVar11 = (**(code **)(*plVar15 + 0x2b8))(plVar15);
        uVar16 = CONCAT71((int7)((ulonglong)plVar15 >> 8),iVar10 < iVar11);
      }
    }
  }
LAB_14125288a:
  local_81 = 0;
  uVar14 = uVar16 & 0xffffffff ^ 1;
  FUN_1403adb6e(uVar7,uVar14,DAT_14cbd6990);
  local_83 = 0;
  FUN_1403adb6e(uVar7,0,DAT_14cbd69a8);
  local_85 = 0;
  FUN_1403adb6e(uVar7,uVar16 & 0xffffffff,DAT_14cbd69c0);
  uVar8 = DAT_14cbd6a20;
  if ((char)uVar14 == '\0') {
    puVar2 = (uint *)(param_1 + 0x58);
    lVar12 = FUN_14008e0ae(puVar2);
    uVar3 = *(undefined4 *)(lVar12 + 0x60);
    lVar12 = FUN_14008e0ae(puVar2);
    uVar4 = *(undefined4 *)(lVar12 + 0x30);
    plVar15 = *(longlong **)(param_1 + 0x60);
    auVar19 = ZEXT816(0);
    if (((((plVar15 != (longlong *)0x0) && (*(int *)(param_1 + 0x5c) != 0)) &&
         (uVar5 = *puVar2, -1 < (int)uVar5)) &&
        (((int)uVar5 < DAT_14c9647dc &&
         (lVar12 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar12 != 0)))) &&
       ((*(int *)(lVar12 + 0x10) == *(int *)(param_1 + 0x5c) &&
        ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)))) {
      if (*(code **)(*plVar15 + 0x10) == (code *)&LAB_1447a1f2e) {
        plVar15 = plVar15 + 0xd9;
      }
      else {
        plVar15 = (longlong *)(**(code **)(*plVar15 + 0x10))();
      }
      cVar9 = FUN_14486eb0e(plVar15,puVar2);
      if (cVar9 != '\0') {
        uVar13 = FUN_14008e0ae(puVar2);
        fVar18 = (float)FUN_1407fb3de(uVar13);
        auVar19 = ZEXT816(0);
        if (fVar18 <= 0.0) {
          lVar12 = FUN_14008e0ae(puVar2);
          fVar18 = *(float *)(lVar12 + 0x54);
          if (fVar18 <= 0.0) goto LAB_141252a01;
        }
        lVar12 = FUN_14008e0ae(puVar2);
        if ((*(longlong *)(lVar12 + 0x18) == 0) ||
           (*(char *)(*(longlong *)(lVar12 + 0x18) + 0x18) != '\x01')) {
          auVar19 = ZEXT416(*(uint *)(lVar12 + 0x30));
        }
        else {
          auVar19 = roundps(auVar19,ZEXT416(*(uint *)(lVar12 + 0x30)),3);
        }
        auVar19._0_4_ = auVar19._0_4_ / fVar18;
      }
    }
LAB_141252a01:
    local_e0 = uVar8;
    local_e8 = uVar3;
    FUN_1407fb220(uVar7,auVar19._0_4_,uVar4,0x3f800000);
  }
  *(undefined1 *)(param_1 + 0xc0) = 1;
  *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + 1;
LAB_141252a2f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_108);
}



// FUNCTION 141252c3a FUN_141252c3a body=809 status=ok
// SIG undefined FUN_141252c3a(void)

void FUN_141252c3a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
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
  iVar4 = local_1c;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar5 = (longlong *)FUN_14017698e(local_28);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x38))(plVar5,iVar4 != 0);
  }
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141252f86 FUN_141252f86 body=503 status=ok
// SIG undefined FUN_141252f86(void)

void FUN_141252f86(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  uint *puVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  uint local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0;
  local_40 = 4;
  local_58 = (uint)*(byte *)*param_1;
  local_38 = 2;
  local_30 = (byte)~DAT_14c9a8754 >> 4 & 2;
  FUN_141109e26(param_2,&DAT_14cbd3250,&local_60);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_40 < 0x19) {
      puVar2 = &local_58;
    }
    else {
      puVar2 = (uint *)CONCAT44(uStack_54,local_58);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(CONCAT44(uStack_54,local_58));
  }
  local_58 = *(uint *)param_1[1];
  local_60 = 0;
  local_40 = 4;
  local_38 = 2;
  local_30 = (byte)~DAT_14c9a8754 >> 4 & 2;
  FUN_141109e26(param_2,&DAT_14cbd3260,&local_60);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_40 < 0x19) {
      puVar2 = &local_58;
    }
    else {
      puVar2 = (uint *)CONCAT44(uStack_54,local_58);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(CONCAT44(uStack_54,local_58));
  }
  local_58 = *(uint *)param_1[2];
  local_60 = 0;
  local_40 = 4;
  local_38 = 2;
  local_30 = (byte)~DAT_14c9a8754 >> 4 & 2;
  FUN_141109e26(param_2,&DAT_14cbd3258,&local_60);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_40 < 0x19) {
      puVar2 = &local_58;
    }
    else {
      puVar2 = (uint *)CONCAT44(uStack_54,local_58);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(CONCAT44(uStack_54,local_58));
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125317e FUN_14125317e body=1092 status=ok
// SIG undefined FUN_14125317e(void)

undefined8 * FUN_14125317e(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14125375a();
  puVar4 = (undefined8 *)FUN_14001cc68(0x200,0x10);
  uVar6 = *(undefined8 *)(param_1 + 8);
  plVar7 = *(longlong **)(param_1 + 0x10);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  plVar8 = *(longlong **)(param_1 + 0x20);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_80 = puVar4 + 1;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_14a44e760;
  puVar4[3] = &PTR_FUN_14a44e7a8;
  lVar9 = 0x20;
  do {
    FUN_1412535c8((longlong)puVar4 + lVar9);
    lVar9 = lVar9 + 0x68;
  } while (lVar9 != 0x1c0);
  puVar4[0x38] = uVar3;
  puVar4[0x39] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  puVar4[0x3a] = uVar6;
  puVar4[0x3b] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  *(undefined2 *)((longlong)puVar4 + 0x1f9) = 0x100;
  puVar4[0x3c] = 0;
  puVar4[0x3d] = 0;
  puVar4[0x3e] = 0;
  *(undefined1 *)((longlong)puVar4 + 0x1fb) = param_3;
  lVar9 = FUN_14001cc68(0x30,0x10);
  local_68 = puVar4[0x3a];
  local_60 = puVar4[0x3b];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_78 = puVar4[0x38];
  local_70 = puVar4[0x39];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  FUN_1412536a6(lVar9,&local_78,&local_68);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a452170;
  plVar5[2] = lVar9;
  puVar4[0x3c] = lVar9;
  plVar10 = (longlong *)puVar4[0x3d];
  if (plVar5 == plVar10) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar5 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar10 = plVar5;
        goto joined_r0x000141253488;
      }
      goto LAB_141253331;
    }
  }
  else {
    puVar4[0x3d] = plVar5;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar10 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000141253488:
        if (iVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
LAB_141253331:
    lVar9 = puVar4[0x3c];
    plVar10 = (longlong *)puVar4[0x3d];
  }
  if (plVar10 == (longlong *)0x0) {
    uVar6 = FUN_14001cc68(0x38,0x10);
    local_50 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    uVar6 = FUN_14001cc68(0x38,0x10);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    local_50 = plVar10;
  }
  local_58 = lVar9;
  FUN_14125362e(uVar6,&local_58);
  lVar9 = puVar4[0x3e];
  puVar4[0x3e] = uVar6;
  if (lVar9 != 0) {
    FUN_1400020a8();
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar10 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  *param_2 = puVar4;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a452930;
  plVar7[2] = (longlong)puVar4;
  param_2[1] = plVar7;
  if ((puVar4 == (undefined8 *)0x0) ||
     (((*local_80 != 0 && (puVar4[2] != 0)) && (0 < *(int *)(puVar4[2] + 8))))) goto LAB_141253438;
  if (plVar7 == (longlong *)0x0) {
    puVar4[1] = puVar4;
    plVar8 = (longlong *)puVar4[2];
    if (plVar8 == (longlong *)0x0) goto LAB_141253438;
LAB_14125357e:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    puVar4[2] = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_141253438;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    puVar4[1] = puVar4;
    if ((longlong *)puVar4[2] != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = (longlong *)puVar4[2];
      if (plVar8 != (longlong *)0x0) goto LAB_14125357e;
      puVar4[2] = plVar7;
    }
  }
  LOCK();
  plVar8 = plVar7 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
    }
  }
LAB_141253438:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412535c8 FUN_1412535c8 body=101 status=ok
// SIG undefined FUN_1412535c8(void)

undefined8 * FUN_1412535c8(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_149edadb0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 6),4000);
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  return param_1;
}



// FUNCTION 14125362e FUN_14125362e body=120 status=ok
// SIG undefined FUN_14125362e(void)

undefined8 * FUN_14125362e(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = *param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(*param_2 + 0x18);
  bVar4 = (**(code **)(*(longlong *)*param_2 + 0x10))();
  *(byte *)(param_1 + 6) = bVar4 ^ 1;
  *(undefined4 *)((longlong)param_1 + 0x31) = 0;
  *(undefined1 *)((longlong)param_1 + 0x35) = 0;
  plVar3 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 1412536a6 FUN_1412536a6 body=179 status=ok
// SIG undefined FUN_1412536a6(void)

undefined8 * FUN_1412536a6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_LAB_14a451c70;
  param_1[1] = *param_2;
  lVar3 = param_2[1];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_14a450680;
  param_1[4] = *param_3;
  lVar3 = param_3[1];
  param_1[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_2[1];
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
  plVar4 = (longlong *)param_3[1];
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
  return param_1;
}



// FUNCTION 14125375a FUN_14125375a body=880 status=ok
// SIG undefined FUN_14125375a(void)

void FUN_14125375a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar4 = FUN_14001cc68(0x268,0x10);
    FUN_14585ba4c(lVar4);
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14a4527b0;
    plVar8[2] = lVar4;
    *(longlong *)(param_1 + 8) = lVar4;
    plVar6 = *(longlong **)(param_1 + 0x10);
    if (plVar8 == plVar6) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar8 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar6 = plVar8;
          goto joined_r0x000141253a50;
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x10) = plVar8;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar6 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x000141253a50:
          if (iVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) goto LAB_14125378e;
  lVar4 = FUN_14001cc68(0x270,0x10);
  uVar5 = FUN_14001cc68(0x18,0x10);
  FUN_14585afba(uVar5);
  local_58 = uVar5;
  local_50 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  local_50[1] = &DAT_100000001;
  *local_50 = &PTR_LAB_14a4528b0;
  local_50[2] = uVar5;
  FUN_14585b024(lVar4,&local_58,0);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a4528d0;
  plVar6[2] = lVar4;
  lVar7 = FUN_14001cc68(0x270,0x10);
  uVar5 = FUN_14001cc68(0x18,0x10);
  FUN_14585afba(uVar5);
  local_68 = uVar5;
  local_60 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  local_60[1] = &DAT_100000001;
  *local_60 = &PTR_LAB_14a4528b0;
  local_60[2] = uVar5;
  FUN_14585b024(lVar7,&local_68,1);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4528d0;
  plVar8[2] = lVar7;
  lVar9 = FUN_14001cc68(0x58,0x10);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_88 = lVar4;
  local_80 = plVar6;
  local_78 = lVar7;
  local_70 = plVar8;
  FUN_141253b46(lVar9,&local_88,&local_78);
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14a4528f0;
  plVar10[2] = lVar9;
  *(longlong *)(param_1 + 0x18) = lVar9;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar10 == plVar3) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar10 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar3 = plVar10;
        goto joined_r0x000141253a77;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x20) = plVar10;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar3 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000141253a77:
        if (iVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (plVar6 != (longlong *)0x0) {
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
  }
LAB_14125378e:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141253acc FUN_141253acc body=121 status=ok
// SIG undefined FUN_141253acc(void)

void FUN_141253acc(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (DAT_14c872ce0 != 0) {
    FUN_1414d73b6(DAT_14c872ce0,L"SlateRenderer",param_1,param_2,&DAT_14c872ce8);
    FUN_1414d73b6(DAT_14c872ce0,L"SlateRenderer",L"FontAtlasSize",param_2,&DAT_14c872ce8);
  }
  iVar2 = 0x800;
  if (*param_2 < 0x800) {
    iVar2 = *param_2;
  }
  iVar1 = 0x80;
  if (0x80 < iVar2) {
    iVar1 = iVar2;
  }
  *param_2 = iVar1;
  return;
}



// FUNCTION 141253b46 FUN_141253b46 body=318 status=ok
// SIG undefined FUN_141253b46(void)

longlong * FUN_141253b46(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = *param_2;
  lVar3 = param_2[1];
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = *param_3;
  lVar3 = param_3[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  FUN_146279854(param_1 + 4,param_1);
  if (*param_1 == param_1[2]) {
    lVar3 = param_1[5];
    param_1[6] = param_1[4];
    param_1[7] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    FUN_146279854(param_1 + 6,param_1 + 2);
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 2;
  FUN_14595128c(*param_1 + 0x240,local_28,param_1);
  if (*param_1 != param_1[2]) {
    FUN_14595128c(param_1[2] + 0x240,local_28,param_1);
  }
  plVar4 = (longlong *)param_2[1];
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
  plVar4 = (longlong *)param_3[1];
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
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141253c85 FUN_141253c85 body=76 status=ok
// SIG undefined FUN_141253c85(void)

undefined8 * FUN_141253c85(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  *puVar1 = &PTR_FUN_149e18f80;
  uVar2 = FUN_141253ce0();
  puVar1[1] = uVar2;
  puVar1[2] = &PTR_FUN_149e18960;
  *(undefined2 *)(puVar1 + 3) = 2;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 141253ce0 FUN_141253ce0 body=54 status=ok
// SIG undefined FUN_141253ce0(void)

void * FUN_141253ce0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_1424da030(0x1d0);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x1d0);
    *(undefined2 *)((longlong)_Dst + 0x68) = 0x101;
  }
  return _Dst;
}



// FUNCTION 141253d16 FUN_141253d16 body=132 status=ok
// SIG undefined FUN_141253d16(void)

undefined8 * FUN_141253d16(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149eda608;
  param_1[1] = param_2;
  param_1[2] = 0;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea(0,param_2,param_2);
    param_2 = param_1[1];
  }
  (**(code **)(*DAT_14c8407a8 + 0x58))(DAT_14c8407a8,&local_20,param_2);
  param_1[2] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141253d9c FUN_141253d9c body=216 status=ok
// SIG undefined FUN_141253d9c(void)

undefined8 * FUN_141253d9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0);
  param_1[1] = puVar1;
  puVar1[1] = &LAB_14286430f;
  puVar1[3] = &LAB_142864319;
  puVar1[2] = &LAB_142864327;
  *puVar1 = 0;
  FUN_144b55bd0(puVar1,param_1);
  FUN_144b53ef0(*param_1);
  local_14 = (uint)(DAT_14c968488 == 0) * 5 + 0x23;
  FUN_144b55bb0(*param_1,"truetype","interpreter-version");
  if (DAT_14c96848c == '\0') {
    DAT_14c96848c = '\x01';
    FUN_144b55700(*param_1,&local_14,local_18,local_1c);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141253e76 FUN_141253e76 body=383 status=ok
// SIG undefined FUN_141253e76(void)

void FUN_141253e76(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  
  lVar2 = DAT_14c968358;
  iVar8 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar8 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar8 == 2)) {
    uVar7 = 0;
  }
  else if (iVar8 == 1) {
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar4 != DVar5);
  }
  else {
    uVar7 = 1;
  }
  if (*(char *)(lVar2 + uVar7) == '\x01') {
    iVar3 = *DAT_14c968538;
    if (iVar3 < 1) {
      iVar3 = FUN_1467b7b70();
    }
    iVar8 = *(int *)(param_1 + 0x30);
    if (iVar3 <= iVar8) {
      return;
    }
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 0x30);
    if (-1 < iVar8) {
      return;
    }
    iVar3 = 0;
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x14) < iVar3) {
    FUN_14585b900(plVar1,iVar3);
  }
  if (*(int *)(param_1 + 0x24) < iVar3) {
    FUN_14585b900(param_1 + 0x18,iVar3);
  }
  if (*(int *)(param_1 + 0x34) < iVar3) {
    FUN_14585b960(param_1 + 0x28,iVar3);
  }
  iVar9 = iVar3 - iVar8;
  if (iVar9 != 0 && iVar8 <= iVar3) {
    do {
      uVar6 = FUN_141447c1b(0x140,0x40);
      FUN_14585b9be(uVar6);
      iVar8 = *(int *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0x34) < iVar8 + 1U) {
        FUN_1469521f0(param_1 + 0x28,iVar8);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8 * 8) = uVar6;
      uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar8 * 8);
      iVar8 = *(int *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0x14) < iVar8 + 1U) {
        FUN_146952276(plVar1,iVar8);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar8 * 8) = uVar6;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}



// FUNCTION 141253ff6 FUN_141253ff6 body=106 status=ok
// SIG undefined FUN_141253ff6(void)

void FUN_141253ff6(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x638))();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x490))(plVar1);
  }
  (**(code **)(*param_1 + 0x770))(param_1,local_28);
  (**(code **)(*param_1 + 0x6c8))(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141254062 FUN_141254062 body=117 status=ok
// SIG undefined FUN_141254062(void)

longlong * FUN_141254062(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x638))();
  if (plVar5 == (longlong *)0x0) {
    lVar1 = param_1[0x7d];
    param_1[0x80] = lVar1;
    lVar2 = param_1[0x7b];
    lVar3 = param_1[0x7c];
    param_1[0x7e] = lVar2;
    param_1[0x7f] = lVar3;
    lVar4 = DAT_14c8464e8;
    param_1[0x7b] = DAT_14c8464e0;
    param_1[0x7c] = lVar4;
    param_1[0x7d] = DAT_14c8464f0;
    param_2[2] = lVar1;
    *param_2 = lVar2;
    param_2[1] = lVar3;
  }
  else {
    (**(code **)(*plVar5 + 0x5a0))(plVar5,param_2);
  }
  return param_2;
}



// FUNCTION 1412540d8 FUN_1412540d8 body=687 status=ok
// SIG undefined FUN_1412540d8(void)

void FUN_1412540d8(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  float fVar7;
  
  if ((*(char *)(param_1 + 0x178) == '\x03') && (*(char *)(param_1 + 0x5d30) != '\0')) {
    *(undefined1 *)(param_1 + 0x5d31) = 0;
    uVar1 = *(ulonglong *)(param_1 + 0x28);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x2d);
    }
    else {
      uVar6 = (uint)uVar1;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
        puVar3 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar3 = DAT_14c998080;
        }
        if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
          lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
          lVar4 = *(longlong *)(lVar2 + 0x18);
          if (*(longlong *)(lVar2 + 0x18) == 0) {
            lVar4 = lVar2 + 8;
          }
          *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) | 0x2000;
          *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
        }
      }
    }
    if (((*(byte *)(param_1 + 0x47d5) & 4) != 0) &&
       (FUN_140961230(param_1 + 0x4780,0), *(char *)(param_1 + 0x66f8) == '\x01')) {
      *(undefined1 *)(param_1 + 0x66f8) = 0;
      uVar1 = *(ulonglong *)(param_1 + 0x28);
      if (uVar1 < 0xffffffff00000000) {
        plVar5 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar5 = (longlong *)0x0;
        }
        (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x36);
      }
      else {
        uVar6 = (uint)uVar1;
        if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
          puVar3 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar3 = DAT_14c998080;
          }
          if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
            lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
            lVar4 = *(longlong *)(lVar2 + 0x18);
            if (*(longlong *)(lVar2 + 0x18) == 0) {
              lVar4 = lVar2 + 8;
            }
            *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) | 0x400000;
            *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
          }
        }
      }
    }
    if ((0 < *(int *)(param_1 + 0x47c0)) &&
       (fVar7 = (float)FUN_14055830e(*(undefined8 *)(param_1 + 0x47b8)), fVar7 <= 0.0)) {
      FUN_14654a9cc(param_1 + 0x4780,0x3f800000);
    }
    FUN_145a997d6();
    if (*(char *)(param_1 + 0x5d30) != '\0') {
      *(undefined1 *)(param_1 + 0x5d30) = 0;
      uVar1 = *(ulonglong *)(param_1 + 0x28);
      if (uVar1 < 0xffffffff00000000) {
        plVar5 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar5 = (longlong *)0x0;
        }
        (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x2c);
      }
      else {
        uVar6 = (uint)uVar1;
        if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
          puVar3 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar3 = DAT_14c998080;
          }
          if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
            lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
            lVar4 = *(longlong *)(lVar2 + 0x18);
            if (*(longlong *)(lVar2 + 0x18) == 0) {
              lVar4 = lVar2 + 8;
            }
            *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) | 0x1000;
            *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
          }
        }
      }
      FUN_140fbbe26(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 141254392 FUN_141254392 body=182 status=ok
// SIG undefined FUN_141254392(void)

undefined8 * FUN_141254392(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140ea0e34();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_14a4ffee0;
  param_1[5] = &PTR_FUN_14a500200;
  FUN_140ca8d78(param_1 + 0x30);
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  uVar1 = FUN_140bcc93a();
  FUN_141254448(param_1 + 0x30,uVar1);
  param_1[0x9e] = &DAT_3f8000003f800000;
  param_1[0x9f] = &DAT_3f8000003f800000;
  param_1[0xa0] = &DAT_3f8000003f800000;
  param_1[0xa1] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0xa2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x513) = 1;
  return param_1;
}



// FUNCTION 141254448 FUN_141254448 body=1260 status=ok
// SIG undefined FUN_141254448(void)

longlong FUN_141254448(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
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
  byte bVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  uVar9 = *(undefined4 *)(param_2 + 0x28);
  uVar10 = *(undefined4 *)(param_2 + 0x2c);
  uVar11 = *(undefined4 *)(param_2 + 0x30);
  uVar12 = *(undefined4 *)(param_2 + 0x34);
  uVar13 = *(undefined4 *)(param_2 + 0x3c);
  uVar14 = *(undefined4 *)(param_2 + 0x40);
  uVar15 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar13;
  *(undefined4 *)(param_1 + 0x40) = uVar14;
  *(undefined4 *)(param_1 + 0x44) = uVar15;
  *(undefined4 *)(param_1 + 0x28) = uVar9;
  *(undefined4 *)(param_1 + 0x2c) = uVar10;
  *(undefined4 *)(param_1 + 0x30) = uVar11;
  *(undefined4 *)(param_1 + 0x34) = uVar12;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  lVar17 = *(longlong *)(param_2 + 0x48);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x48);
    }
  }
  *(longlong *)(param_1 + 0x48) = lVar17;
  puVar18 = (undefined8 *)(param_2 + 0x50);
  puVar19 = (undefined8 *)(param_1 + 0x50);
  for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  lVar17 = *(longlong *)(param_2 + 0xb0);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  *(longlong *)(param_1 + 0xb0) = lVar17;
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
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  uVar5 = *(undefined4 *)(param_2 + 200);
  uVar6 = *(undefined4 *)(param_2 + 0xcc);
  uVar7 = *(undefined4 *)(param_2 + 0xd0);
  uVar8 = *(undefined4 *)(param_2 + 0xd4);
  uVar9 = *(undefined4 *)(param_2 + 0xd8);
  uVar10 = *(undefined4 *)(param_2 + 0xdc);
  uVar11 = *(undefined4 *)(param_2 + 0xe0);
  uVar12 = *(undefined4 *)(param_2 + 0xe4);
  uVar13 = *(undefined4 *)(param_2 + 0xec);
  uVar14 = *(undefined4 *)(param_2 + 0xf0);
  uVar15 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar13;
  *(undefined4 *)(param_1 + 0xf0) = uVar14;
  *(undefined4 *)(param_1 + 0xf4) = uVar15;
  *(undefined4 *)(param_1 + 0xd8) = uVar9;
  *(undefined4 *)(param_1 + 0xdc) = uVar10;
  *(undefined4 *)(param_1 + 0xe0) = uVar11;
  *(undefined4 *)(param_1 + 0xe4) = uVar12;
  *(undefined4 *)(param_1 + 200) = uVar5;
  *(undefined4 *)(param_1 + 0xcc) = uVar6;
  *(undefined4 *)(param_1 + 0xd0) = uVar7;
  *(undefined4 *)(param_1 + 0xd4) = uVar8;
  lVar17 = *(longlong *)(param_2 + 0xf8);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0xf8);
    }
  }
  *(longlong *)(param_1 + 0xf8) = lVar17;
  puVar18 = (undefined8 *)(param_2 + 0x100);
  puVar19 = (undefined8 *)(param_1 + 0x100);
  for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined1 *)(param_1 + 0x154) = *(undefined1 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  uVar3 = *(undefined8 *)(param_2 + 0x158);
  lVar17 = *(longlong *)(param_2 + 0x160);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  *(longlong *)(param_1 + 0x160) = lVar17;
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
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x168);
  uVar5 = *(undefined4 *)(param_2 + 0x178);
  uVar6 = *(undefined4 *)(param_2 + 0x17c);
  uVar7 = *(undefined4 *)(param_2 + 0x180);
  uVar8 = *(undefined4 *)(param_2 + 0x184);
  uVar9 = *(undefined4 *)(param_2 + 0x188);
  uVar10 = *(undefined4 *)(param_2 + 0x18c);
  uVar11 = *(undefined4 *)(param_2 + 400);
  uVar12 = *(undefined4 *)(param_2 + 0x194);
  uVar13 = *(undefined4 *)(param_2 + 0x19c);
  uVar14 = *(undefined4 *)(param_2 + 0x1a0);
  uVar15 = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x19c) = uVar13;
  *(undefined4 *)(param_1 + 0x1a0) = uVar14;
  *(undefined4 *)(param_1 + 0x1a4) = uVar15;
  *(undefined4 *)(param_1 + 0x188) = uVar9;
  *(undefined4 *)(param_1 + 0x18c) = uVar10;
  *(undefined4 *)(param_1 + 400) = uVar11;
  *(undefined4 *)(param_1 + 0x194) = uVar12;
  *(undefined4 *)(param_1 + 0x178) = uVar5;
  *(undefined4 *)(param_1 + 0x17c) = uVar6;
  *(undefined4 *)(param_1 + 0x180) = uVar7;
  *(undefined4 *)(param_1 + 0x184) = uVar8;
  lVar17 = *(longlong *)(param_2 + 0x1a8);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x1a8);
    }
  }
  *(longlong *)(param_1 + 0x1a8) = lVar17;
  puVar18 = (undefined8 *)(param_2 + 0x1b0);
  puVar19 = (undefined8 *)(param_1 + 0x1b0);
  for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined1 *)(param_1 + 0x204) = *(undefined1 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  uVar3 = *(undefined8 *)(param_2 + 0x208);
  lVar17 = *(longlong *)(param_2 + 0x210);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x208) = uVar3;
  *(longlong *)(param_1 + 0x210) = lVar17;
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
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  uVar5 = *(undefined4 *)(param_2 + 0x228);
  uVar6 = *(undefined4 *)(param_2 + 0x22c);
  uVar7 = *(undefined4 *)(param_2 + 0x230);
  uVar8 = *(undefined4 *)(param_2 + 0x234);
  uVar9 = *(undefined4 *)(param_2 + 0x238);
  uVar10 = *(undefined4 *)(param_2 + 0x23c);
  uVar11 = *(undefined4 *)(param_2 + 0x240);
  uVar12 = *(undefined4 *)(param_2 + 0x244);
  uVar13 = *(undefined4 *)(param_2 + 0x24c);
  uVar14 = *(undefined4 *)(param_2 + 0x250);
  uVar15 = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x24c) = uVar13;
  *(undefined4 *)(param_1 + 0x250) = uVar14;
  *(undefined4 *)(param_1 + 0x254) = uVar15;
  *(undefined4 *)(param_1 + 0x238) = uVar9;
  *(undefined4 *)(param_1 + 0x23c) = uVar10;
  *(undefined4 *)(param_1 + 0x240) = uVar11;
  *(undefined4 *)(param_1 + 0x244) = uVar12;
  *(undefined4 *)(param_1 + 0x228) = uVar5;
  *(undefined4 *)(param_1 + 0x22c) = uVar6;
  *(undefined4 *)(param_1 + 0x230) = uVar7;
  *(undefined4 *)(param_1 + 0x234) = uVar8;
  lVar17 = *(longlong *)(param_2 + 600);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 600);
    }
  }
  *(longlong *)(param_1 + 600) = lVar17;
  puVar18 = (undefined8 *)(param_2 + 0x260);
  puVar19 = (undefined8 *)(param_1 + 0x260);
  for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined1 *)(param_1 + 0x2b4) = *(undefined1 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  uVar3 = *(undefined8 *)(param_2 + 0x2b8);
  lVar17 = *(longlong *)(param_2 + 0x2c0);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2b8) = uVar3;
  *(longlong *)(param_1 + 0x2c0) = lVar17;
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
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2c8);
  puVar18 = (undefined8 *)(param_2 + 0x2d0);
  puVar19 = (undefined8 *)(param_1 + 0x2d0);
  for (lVar17 = 0xe; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  lVar17 = *(longlong *)(param_2 + 0x340);
  if (DAT_14c950c29 == 1) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x340);
    }
  }
  bVar16 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x340) = lVar17;
  *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_2 + 0x348);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_2 + 0x350);
  lVar17 = *(longlong *)(param_2 + 0x358);
  if ((bVar16 & 1) != 0) {
    if (lVar17 == 0) {
      lVar17 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar17 = *(longlong *)(param_2 + 0x358);
    }
  }
  *(longlong *)(param_1 + 0x358) = lVar17;
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_2 + 0x360);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 0x368);
  return param_1;
}



// FUNCTION 141254934 FUN_141254934 body=3309 status=ok
// SIG undefined FUN_141254934(void)

void FUN_141254934(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  int *_Src;
  undefined8 *puVar7;
  undefined4 *_Src_00;
  undefined1 *_Src_01;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined1 *local_168;
  code *local_160;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_b4;
  undefined4 local_88;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_141254a31;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_141254a31:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_48);
            goto LAB_141254b07;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_48,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_48,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_48,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
LAB_141254b07:
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_50);
            goto LAB_141254bdd;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_50) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_50,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_50,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_50,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_50,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
LAB_141254bdd:
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_160 = FUN_1405ebbb2;
      local_168 = &DAT_14c9520b8;
      local_170 = 0;
      local_178 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_54);
            goto LAB_141254cb2;
          }
        }
        _Src_00 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_54) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_54,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_54,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_54,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_54,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
LAB_141254cb2:
  local_58 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_14067a048;
      local_170 = 0;
      local_178 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_58);
            goto LAB_141254d85;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_58) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_58,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_58,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_58,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_58,lVar2);
      }
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
LAB_141254d85:
  iVar5 = local_58;
  memset(local_158,0,0x100);
  local_88 = 0xffffffff;
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_158);
            goto LAB_141254e5c;
          }
        }
        _Src_01 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_01 != local_158) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_158,_Src_01,(int)plVar1[6]);
          }
          else {
            memcpy(local_158,_Src_01,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_158,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_158,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
LAB_141254e5c:
  local_168 = local_158;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_168 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_170 = CONCAT71(local_170._1_7_,iVar5 != 0);
  local_178 = CONCAT44(local_178._4_4_,local_54);
  FUN_141255622(param_1,local_40,local_48,local_50);
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141255622 FUN_141255622 body=1054 status=ok
// SIG undefined FUN_141255622(void)

void FUN_141255622(longlong param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_168 [32];
  longlong local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  undefined1 local_f8 [32];
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_3 == 0) goto LAB_1412556a5;
  lVar5 = FUN_141255a42();
  if ((((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) != lVar5 + 0x30)) || (*(longlong *)(param_1 + 0x648) == 0)) ||
     (plVar6 = *(longlong **)(param_3 + 0x390), plVar6 == (longlong *)0x0)) goto LAB_1412556a5;
  lVar5 = (**(code **)(*plVar6 + 0x7b8))(plVar6,0,1,0xffffffff);
  if (((lVar5 == 0) || (cVar4 = FUN_144a7c526(lVar5), cVar4 == '\0')) ||
     (*(longlong *)(lVar5 + 0x138) == 0)) goto LAB_1412556a5;
  FUN_1447f067c(param_1 + 0x410,local_f8,1,0);
  FUN_14141a1f8(param_1 + 0x410,&local_118);
  dVar12 = local_108 * local_108 + local_118 * local_118 + dStack_110 * dStack_110;
  if (((dVar12 != 1.0) || (dVar3 = local_108, dVar2 = dStack_110, dVar11 = local_118, NAN(dVar12)))
     && (dVar3 = DAT_14c8464f0, dVar2 = DAT_14c8464e8, dVar11 = DAT_14c8464e0,
        9.99999993922529e-09 <= dVar12)) {
    dVar11 = 1.0 / SQRT(dVar12);
    dVar3 = local_108 * dVar11;
    dVar2 = dStack_110 * dVar11;
    dVar11 = local_118 * dVar11;
  }
  if (0.009999999776482582 <= ABS(1.0 - (dVar3 * dVar3 + dVar11 * dVar11 + dVar2 * dVar2))) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x648) + 0x1c8);
    if (lVar7 == 0) {
      local_108 = DAT_14c8462e8;
      local_118 = DAT_14c8462d8;
      dStack_110 = DAT_14c8462e0;
      dVar11 = DAT_14c8462d8;
      dVar2 = DAT_14c8462e0;
      dVar3 = DAT_14c8462e8;
    }
    else {
      FUN_14141a100(lVar7,&local_118);
      dVar11 = local_118;
      dVar2 = dStack_110;
      dVar3 = local_108;
    }
  }
  local_138 = local_d8;
  dStack_130 = dStack_d0;
  local_128 = local_c8;
  FUN_14585c19a(plVar6,&local_138,&local_118,0);
  dVar12 = *(double *)(param_1 + 0x280);
  uVar8 = SUB84(dVar12,0);
  uVar10 = (undefined4)((ulonglong)dVar12 >> 0x20);
  dVar13 = *(double *)(param_1 + 0x288);
  if (dVar13 <= dVar12) {
    uVar8 = SUB84(dVar13,0);
    uVar10 = (undefined4)((ulonglong)dVar13 >> 0x20);
  }
  fVar9 = *(float *)(param_1 + 0x644);
  dVar12 = local_108 - local_c8;
  dVar14 = dStack_110 - dStack_d0;
  dVar13 = local_118 - local_d8;
  plVar6 = (longlong *)FUN_144800528();
  lVar7 = plVar6[0x22];
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 1000))(plVar6);
    lVar7 = plVar6[0x22];
  }
  fVar1 = *(float *)(lVar7 + 0x168);
  dVar12 = (double)(float)((double)((float)(double)CONCAT44(uVar10,uVar8) * fVar9) -
                          (dVar12 * dVar3 + dVar13 * dVar11 + dVar14 * dVar2));
  fVar9 = (float)FUN_1401edbbc(lVar5);
  dVar13 = (double)fVar9;
  local_138 = 1.0 / (double)fVar1;
  local_128 = dVar3 * dVar12 * dVar13 * local_138;
  dStack_130 = dVar2 * dVar12 * dVar13 * local_138;
  local_138 = local_138 * dVar11 * dVar12 * dVar13;
  local_148 = *(longlong *)(*(longlong *)(param_1 + 0x648) + 0x3c0);
  if (local_148 == 0) {
LAB_141255968:
    local_148 = 0;
  }
  else {
    lVar7 = FUN_144a75eb4();
    if ((*(int *)(*(longlong *)(local_148 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_148 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_141255968;
  }
  FUN_145d816f0(lVar5,&local_138,&local_118,0xffffffffffffffff);
LAB_1412556a5:
  if ((local_90 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141255a42 FUN_141255a42 body=228 status=ok
// SIG undefined FUN_141255a42(void)

longlong FUN_141255a42(void)

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
  if (DAT_14cb5c800 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_14868ae5d;
    local_40 = &LAB_140a2e548;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x398;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDestructibleActor",&DAT_14cb5c800,&DAT_14868ae5c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5c800;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141255b28 FUN_141255b28 body=186 status=ok
// SIG undefined FUN_141255b28(void)

undefined8 * FUN_141255b28(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x80,0);
  FUN_140019cf2();
  puVar1[1] = &DAT_14c951d80;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149e6fdd0;
  puVar1[0xf] = 0;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_141255be4(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141255be4 FUN_141255be4 body=136 status=ok
// SIG undefined FUN_141255be4(void)

undefined8 *
FUN_141255be4(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a60ec(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e6fdd0;
  param_1[0xf] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141255c6e FUN_141255c6e body=8 status=ok
// SIG undefined FUN_141255c6e(void)

void FUN_141255c6e(longlong param_1)

{
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 8;
  return;
}



// FUNCTION 141255c76 FUN_141255c76 body=693 status=ok
// SIG undefined FUN_141255c76(void)

void FUN_141255c76(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78;
  longlong lStack_70;
  int *local_68;
  code *local_60;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = (longlong *)FUN_14585c8ae();
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_144a74fb4();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      lVar5 = (**(code **)(*plVar4 + 0xb98))(plVar4);
      if ((lVar5 != 0) && (local_4c = 0, 0 < *(int *)(param_1 + 0x9d0))) {
        do {
          lVar2 = *(longlong *)(param_1 + 0x9c8);
          lVar6 = (longlong)local_4c;
          lVar7 = *(longlong *)(lVar2 + 8 + lVar6 * 0x28);
          if (lVar7 != 0) {
            if (*(int *)(lVar5 + 0xa0) != *(int *)(lVar5 + 0xcc)) {
              uVar3 = (uint)((ulonglong)lVar7 >> 0x10);
              uVar9 = (uint)lVar7 & 0xffff;
              lVar8 = *(longlong *)(lVar5 + 0xd8);
              if (*(longlong *)(lVar5 + 0xd8) == 0) {
                lVar8 = lVar5 + 0xd0;
              }
              iVar10 = *(int *)(lVar8 + (ulonglong)
                                        (*(int *)(lVar5 + 0xe0) - 1U &
                                        (int)((ulonglong)lVar7 >> 0x20) +
                                        ((uint)lVar7 << 0x10 | uVar9) +
                                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
              if (iVar10 != -1) {
                do {
                  plVar1 = (longlong *)(*(longlong *)(lVar5 + 0x98) + (longlong)iVar10 * 0x14);
                  if (*plVar1 == lVar7) {
                    if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
                      iVar10 = (int)plVar1[1];
                      lVar7 = (longlong)iVar10;
                      if ((-1 < lVar7) && (iVar10 < (int)plVar4[0x1af])) {
                        local_80 = *(undefined8 *)(plVar4[0x1ae] + lVar7 * 8);
                        FUN_1402ba50c(local_80,0);
                        if (*(longlong *)(*(longlong *)(lVar5 + 0x40) + lVar7 * 8) != 0) {
                          FUN_1405a2f88(local_80,0,0,0);
                          local_78 = 0;
                          lStack_70 = 0;
                          FUN_147c7d9fa(lVar5,iVar10);
                          if (0 < (int)lStack_70) {
                            lVar7 = 0;
                            do {
                              FUN_1407a4724(*(undefined8 *)
                                             (plVar4[0x1b0] +
                                             (longlong)*(int *)(local_78 + lVar7 * 4) * 8));
                              lVar7 = lVar7 + 1;
                            } while (lVar7 < (int)lStack_70);
                          }
                          if (local_78 != 0) {
                            FUN_1400020a8();
                          }
                        }
                      }
                    }
                    break;
                  }
                  iVar10 = *(int *)((longlong)plVar1 + 0xc);
                } while (iVar10 != -1);
              }
            }
            if (DAT_14c763b3f == '\0') {
              lVar7 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x7b8))
                                (*(longlong **)(param_1 + 0x118),0,1,0xffffffff);
              if (lVar7 != 0) {
                lStack_70 = lVar2 + lVar6 * 0x28;
                local_68 = &local_4c;
                local_58 = &local_78;
                local_60 = FUN_143f80e60;
                local_78 = param_1;
                FUN_144966906(lVar7 + 0x138);
              }
            }
          }
          local_4c = local_4c + 1;
        } while (local_4c < *(int *)(param_1 + 0x9d0));
      }
      (**(code **)(**(longlong **)(param_1 + 0x990) + 0x10))
                (*(longlong **)(param_1 + 0x990),param_1 + 0xca0);
      *(undefined1 *)((longlong)plVar4 + 0xc5c) = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141255f2c FUN_141255f2c body=286 status=ok
// SIG undefined FUN_141255f2c(void)

undefined8 FUN_141255f2c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_141256044;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141256044;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_141256044:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141255ff1;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_141255ff1;
    }
  }
  uVar6 = 0;
LAB_141255ff1:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412560cc FUN_1412560cc body=34 status=ok
// SIG undefined FUN_1412560cc(void)

void FUN_1412560cc(undefined8 param_1)

{
  FUN_140f05dd8();
  FUN_1412560ee(param_1);
  FUN_1412561f0(param_1);
  return;
}



// FUNCTION 1412560ee FUN_1412560ee body=257 status=ok
// SIG undefined FUN_1412560ee(void)

void FUN_1412560ee(longlong param_1)

{
  uint uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc19f0) {
    FUN_144b3d300(&DAT_14cbc19f0);
    if (DAT_14cbc19f0 == -1) {
      FUN_1446ddc76(&DAT_14cbc19e8,"PlaceableState",1);
      _Init_thread_footer(&DAT_14cbc19f0);
    }
  }
  if (*(int *)(param_1 + 0x4e0) < 1) {
    uVar1 = 0;
  }
  else {
    local_28 = DAT_14c9a6400;
    local_20 = 0xffffffff;
    local_38 = DAT_14cbc19f8;
    local_30 = 0xffffffff;
    uVar1 = FUN_1400b1204(param_1 + 0x4d8);
  }
  FUN_1406966b6(param_1,&DAT_14cbc19e8,uVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1405e47c6(param_1,uVar1 ^ 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412561f0 FUN_1412561f0 body=806 status=ok
// SIG undefined FUN_1412561f0(void)

void FUN_1412561f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x4e0) < 1) {
    if (*(longlong *)(param_1 + 0x25f8) == 0) goto LAB_141256260;
  }
  else {
    local_48 = (longlong *)DAT_14c9a6400;
    local_40 = (longlong *)CONCAT44(local_40._4_4_,0xffffffff);
    local_38 = DAT_14cbc1a00;
    local_30 = 0xffffffff;
    cVar5 = FUN_1400b1204(param_1 + 0x4d8);
    if (*(longlong *)(param_1 + 0x25f8) == 0) goto LAB_141256260;
    if (cVar5 != '\0') {
      if (*(longlong *)(param_1 + 0x2608) != 0) {
        FUN_14101c144();
        *(undefined8 *)(param_1 + 0x2608) = 0;
        puVar4 = *(undefined8 **)(param_1 + 0x2610);
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x2610) = 0;
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
              FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
            }
          }
        }
      }
      goto LAB_141256260;
    }
  }
  if (*(longlong *)(param_1 + 0x2608) != 0) goto LAB_141256260;
  local_40 = (longlong *)FUN_14001cc68(0x68,0x10);
  local_40[1] = (longlong)&DAT_100000001;
  *local_40 = (longlong)&PTR_FUN_14b959dc0;
  local_48 = local_40 + 2;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined1 *)(local_40 + 4) = 0;
  *(undefined8 *)((longlong)local_40 + 0x24) = 0;
  *(undefined1 *)((longlong)local_40 + 0x2c) = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  *(undefined8 *)((longlong)local_40 + 0x3b) = 0;
  *(undefined8 *)((longlong)local_40 + 0x43) = 0;
  local_40[10] = 0;
  local_40[0xb] = 0;
  local_40[0xc] = 0;
  FUN_14125652a(&local_48);
  plVar1 = local_40;
  if (local_40 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0x2608) = local_48;
    plVar9 = *(longlong **)(param_1 + 0x2610);
    if (plVar9 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x2610) = 0;
LAB_14125641e:
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar6 = *piVar2;
        UNLOCK();
joined_r0x000141256455:
        if (iVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x2608) = local_48;
    plVar9 = *(longlong **)(param_1 + 0x2610);
    if (local_40 == plVar9) {
      LOCK();
      plVar9 = local_40 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar6 = *piVar2;
        UNLOCK();
        plVar9 = plVar1;
        goto joined_r0x000141256455;
      }
    }
    else {
      *(longlong **)(param_1 + 0x2610) = local_40;
      if (plVar9 != (longlong *)0x0) goto LAB_14125641e;
    }
  }
  plVar1 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_40 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_48 = (longlong *)((ulonglong)local_48 & 0xffffffffffffff00);
  local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
  lVar7 = FUN_1402d20ea(*(longlong *)(param_1 + 0x25f8) + 0x468);
  if (lVar7 == 0) {
    local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff);
    iVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar7 + 0xc);
    local_48 = (longlong *)CONCAT44(uVar3,(undefined4)local_48);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar6 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar6 = *(int *)(lVar7 + 0x10);
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(lVar7 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar6 = iVar8;
      }
    }
  }
  local_40 = (longlong *)CONCAT44(local_40._4_4_,iVar6);
  local_48 = (longlong *)
             CONCAT71(local_48._1_7_,*(undefined1 *)(*(longlong *)(param_1 + 0x25f8) + 0x460));
  FUN_1412565ca(*(undefined8 *)(param_1 + 0x2608),param_1);
LAB_141256260:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125652a FUN_14125652a body=159 status=ok
// SIG undefined FUN_14125652a(void)

void FUN_14125652a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_141256567;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_141256567;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_141256567:
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
                    /* WARNING: Could not recover jumptable at 0x0001412565c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1412565ca FUN_1412565ca body=1710 status=ok
// SIG undefined FUN_1412565ca(void)

void FUN_1412565ca(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  GUID local_68;
  undefined8 local_58;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 == 0) || (*(char *)(param_1 + 0x10) != '\0')) goto LAB_1412569eb;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)param_3;
  uVar1 = *(uint *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x14) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar12 = 0;
  }
  iVar4 = *(int *)(lVar12 + 0x10);
  if (iVar4 == 0) {
    LOCK();
    iVar4 = DAT_14c964868 + 1;
    UNLOCK();
    iVar5 = DAT_14c964868 + 1;
    bVar14 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar4;
    if (bVar14) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).");
    }
    LOCK();
    iVar4 = *(int *)(lVar12 + 0x10);
    bVar14 = iVar4 == 0;
    if (bVar14) {
      *(int *)(lVar12 + 0x10) = iVar5;
      iVar4 = 0;
    }
    UNLOCK();
    if (bVar14) {
      iVar4 = iVar5;
    }
    *(int *)(param_1 + 0x18) = iVar4;
    if (iVar4 != 0) goto LAB_141256648;
  }
  else {
    *(int *)(param_1 + 0x18) = iVar4;
LAB_141256648:
    uVar1 = *(uint *)(param_1 + 0x14);
    if ((((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
        (plVar7 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar7 != (longlong *)0x0)) &&
       (((int)plVar7[2] == iVar4 && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
        lVar12 = *plVar7;
      }
      else {
        lVar12 = 0;
      }
      FUN_141256e1a(&local_68,param_1);
      if ((local_68.Data4._0_4_ == 0) || ((longlong *)local_68._0_8_ == (longlong *)0x0)) {
LAB_141256bf4:
        if (local_68.Data4._0_4_ == 0) goto LAB_14125678f;
        if ((longlong *)local_68._0_8_ != (longlong *)0x0) {
          (*(code *)**(undefined8 **)local_68._0_8_)(local_68._0_8_,0);
          FUN_1446efa72(&local_68,0,0);
          goto LAB_141256782;
        }
      }
      else {
        cVar3 = (**(code **)(*(longlong *)local_68._0_8_ + 0x30))();
        if (cVar3 == '\0') {
          goto LAB_141256bf4;
        }
        plVar7 = (longlong *)(lVar12 + 0x330);
        if (*(int *)(lVar12 + 0x344) < 1) {
          iVar4 = *(int *)(lVar12 + 0x338);
          iVar5 = *(int *)(lVar12 + 0x340) + -1;
          *(int *)(lVar12 + 0x340) = iVar5;
          if (iVar5 <= iVar4) {
            iVar5 = iVar4;
            if (0 < iVar4) {
              iVar10 = 0;
              do {
                if (((*(int *)(*plVar7 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                    (plVar2 = *(longlong **)(*plVar7 + (longlong)iVar10 * 0x10),
                    plVar2 == (longlong *)0x0)) ||
                   (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
                  FUN_14005b288(plVar7,iVar10);
                  FUN_14005b248(plVar7);
                }
                else {
                  iVar10 = iVar10 + 1;
                }
                iVar5 = *(int *)(lVar12 + 0x338);
              } while (iVar10 < iVar5);
            }
            iVar10 = 2;
            if (2 < iVar5 * 2) {
              iVar10 = iVar5 * 2;
            }
            *(int *)(lVar12 + 0x340) = iVar10;
            if ((iVar10 < iVar4) && (*(int *)(lVar12 + 0x33c) != iVar5)) {
              FUN_14045812c();
            }
          }
        }
        if ((local_68.Data4._0_4_ != 0) && ((longlong *)local_68._0_8_ != (longlong *)0x0)) {
          (**(code **)(*(longlong *)local_68._0_8_ + 0x38))(local_68._0_8_,local_48);
        }
        iVar4 = *(int *)(lVar12 + 0x338);
        *(uint *)(lVar12 + 0x338) = iVar4 + 1U;
        if (*(uint *)(lVar12 + 0x33c) < iVar4 + 1U) {
          FUN_1447a71f6(plVar7,iVar4);
        }
        lVar12 = *plVar7;
        lVar13 = (longlong)iVar4 * 0x10;
        *(undefined8 *)(lVar12 + lVar13) = 0;
        *(undefined4 *)(lVar12 + 8 + lVar13) = 0;
        *(undefined8 *)(lVar12 + lVar13) = local_68._0_8_;
        local_68._0_8_ = (longlong *)0x0;
        *(undefined4 *)(lVar12 + 8 + lVar13) = local_68.Data4._0_4_;
LAB_141256782:
        local_68.Data4 = (uchar  [8])((ulonglong)local_68.Data4 & 0xffffffff00000000);
LAB_14125678f:
        if ((longlong *)local_68._0_8_ != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      if (*(int *)(param_1 + 0x18) == 0) {
LAB_141256b1e:
        lVar12 = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x14);
        lVar12 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar7 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar7 == (longlong *)0x0) ||
             (((int)plVar7[2] != *(int *)(param_1 + 0x18) ||
              ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_141256b1e;
          lVar12 = *plVar7;
        }
      }
      iVar4 = *(int *)(lVar12 + 0x1c0);
      if ((longlong)iVar4 != 0) {
        lVar12 = *(longlong *)(lVar12 + 0x1b8);
        lVar13 = 0;
        do {
          FUN_1488b1052(param_1,*(undefined8 *)(lVar12 + lVar13));
          lVar13 = lVar13 + 8;
        } while ((longlong)iVar4 * 8 != lVar13);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x1c) = *param_3;
  local_68.Data1 = 0;
  local_68.Data2 = 0;
  local_68.Data3 = 0;
  local_68.Data4[0] = '\0';
  local_68.Data4[1] = '\0';
  local_68.Data4[2] = '\0';
  local_68.Data4[3] = '\0';
  local_68.Data4[4] = '\0';
  local_68.Data4[5] = '\0';
  local_68.Data4[6] = '\0';
  local_68.Data4[7] = '\0';
  CoCreateGuid(&local_68);
  *(ulong *)(param_1 + 0x28) = local_68.Data1;
  *(undefined4 *)(param_1 + 0x2c) = local_68._4_4_;
  *(undefined4 *)(param_1 + 0x30) = local_68.Data4._0_4_;
  *(undefined4 *)(param_1 + 0x34) = local_68.Data4._4_4_;
  uVar6 = FUN_14001cc68(0x158,0x10);
  FUN_1407e4f8e(uVar6);
  puVar8 = *(undefined8 **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 == 0) || (uVar1 = *(uint *)(param_1 + 0x14), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) {
    uVar11 = 0;
LAB_141256b3a:
    uVar9 = 0;
  }
  else {
    puVar8 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar8 == (undefined8 *)0x0) || (*(int *)(puVar8 + 2) != iVar4)) ||
       ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = *puVar8;
    }
    uVar9 = 0;
    puVar8 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar8 != (undefined8 *)0x0) {
      if ((*(int *)(puVar8 + 2) != iVar4) || ((*(uint *)(puVar8 + 1) & 0x10200000) != 0))
      goto LAB_141256b3a;
      uVar9 = *puVar8;
    }
  }
  local_68.Data4[0] = 0x9c;
  local_68.Data4[1] = '\t';
  local_68.Data4[2] = 0x93;
  local_68.Data4[3] = 's';
  local_58 = 0;
  local_68._0_8_ = (longlong *)0x0;
  FUN_1407e5f54(uVar6,uVar9,&local_68,uVar11);
  lVar12 = *(longlong *)(param_1 + 0x40);
  FUN_141256c7a(&local_68,param_1,FUN_1488b1174);
  if ((local_68.Data4._0_4_ == 0) || ((longlong *)local_68._0_8_ == (longlong *)0x0)) {
LAB_141256bb9:
    if (local_68.Data4._0_4_ == 0) goto LAB_1412569da;
    if ((longlong *)local_68._0_8_ != (longlong *)0x0) {
      (*(code *)**(undefined8 **)local_68._0_8_)(local_68._0_8_,0);
      FUN_1446efa72(&local_68,0,0,0x10);
      goto LAB_1412569cd;
    }
  }
  else {
    cVar3 = (**(code **)(*(longlong *)local_68._0_8_ + 0x30))();
    if (cVar3 == '\0') {
      goto LAB_141256bb9;
    }
    plVar7 = (longlong *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x24) < 1) {
      iVar4 = *(int *)(lVar12 + 0x18);
      iVar5 = *(int *)(lVar12 + 0x20) + -1;
      *(int *)(lVar12 + 0x20) = iVar5;
      if (iVar5 <= iVar4) {
        iVar5 = iVar4;
        if (0 < iVar4) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar7 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar7 + (longlong)iVar10 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar7,iVar10);
              FUN_14005b248(plVar7);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar5 = *(int *)(lVar12 + 0x18);
          } while (iVar10 < iVar5);
        }
        iVar10 = 2;
        if (2 < iVar5 * 2) {
          iVar10 = iVar5 * 2;
        }
        *(int *)(lVar12 + 0x20) = iVar10;
        if ((iVar10 < iVar4) && (*(int *)(lVar12 + 0x1c) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_68.Data4._0_4_ != 0) && ((longlong *)local_68._0_8_ != (longlong *)0x0)) {
      (**(code **)(*(longlong *)local_68._0_8_ + 0x38))(local_68._0_8_,local_48);
    }
    iVar4 = *(int *)(lVar12 + 0x18);
    *(uint *)(lVar12 + 0x18) = iVar4 + 1U;
    if (*(uint *)(lVar12 + 0x1c) < iVar4 + 1U) {
      FUN_1447a71f6(plVar7,iVar4);
    }
    lVar12 = *plVar7;
    lVar13 = (longlong)iVar4 * 0x10;
    *(undefined8 *)(lVar12 + lVar13) = 0;
    *(undefined4 *)(lVar12 + 8 + lVar13) = 0;
    *(undefined8 *)(lVar12 + lVar13) = local_68._0_8_;
    local_68._0_8_ = (longlong *)0x0;
    *(undefined4 *)(lVar12 + 8 + lVar13) = local_68.Data4._0_4_;
LAB_1412569cd:
    local_68.Data4 = (uchar  [8])((ulonglong)local_68.Data4 & 0xffffffff00000000);
LAB_1412569da:
    if ((longlong *)local_68._0_8_ != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_141256fc0(param_1);
LAB_1412569eb:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141256c7a FUN_141256c7a body=415 status=ok
// SIG undefined FUN_141256c7a(void)

longlong * FUN_141256c7a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_141256d50:
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b40ea60;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_141256d50;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b40ea60;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = param_3;
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
  return param_1;
}



// FUNCTION 141256e1a FUN_141256e1a body=422 status=ok
// SIG undefined FUN_141256e1a(void)

longlong * FUN_141256e1a(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_141256ef0:
    *puVar3 = &PTR_LAB_14b40ec50;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b40e9f0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = &LAB_1488b1044;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_141256ef0;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b40ec50;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b40e9f0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = &LAB_1488b1044;
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
  return param_1;
}



// FUNCTION 141256fc0 FUN_141256fc0 body=609 status=ok
// SIG undefined FUN_141256fc0(void)

void FUN_141256fc0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((*(char *)(param_1 + 0x10) != '\x01') || (*(int *)(param_1 + 0x18) == 0)) ||
       (uVar3 = *(uint *)(param_1 + 0x14), (int)uVar3 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar3 ||
       (lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar5 == 0)))) ||
     ((*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0x18) ||
      (((*(uint *)(lVar5 + 8) & 0x10200000) != 0 || (*(longlong *)(param_1 + 0x40) == 0))))))
  goto LAB_1412571b6;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b40eb40;
  plVar4[2] = (longlong)&PTR_FUN_14b02dcf0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  *(undefined8 *)((longlong)plVar4 + 0x21) = 0;
  *(undefined8 *)((longlong)plVar4 + 0x29) = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  *(byte *)((longlong)plVar4 + 0x31) = *(byte *)((longlong)plVar4 + 0x31) & 0xfc;
  if (*(int *)(param_1 + 0x24) == 0) {
LAB_1412571de:
    lVar5 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x20);
    lVar5 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != *(int *)(param_1 + 0x24) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)
          ))) goto LAB_1412571de;
      lVar5 = *plVar6;
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar5);
      }
    }
  }
  plVar4[3] = lVar5;
  lVar5 = *(longlong *)(param_1 + 0x40);
  if (0 < *(int *)(lVar5 + 0x68)) {
    lVar7 = 8;
    uVar8 = 0;
    do {
      if ((*(char *)(*(longlong *)(lVar5 + 0x60) + lVar7) != '\x01') ||
         (*(char *)(param_1 + 0x39) == '\x01')) {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_68 = 1;
        local_58 = plVar4 + 2;
        local_50 = plVar4;
        FUN_141149ee6(lVar5,uVar8 & 0xffffffff,param_1 + 0x28,&local_58);
        plVar6 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_50 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        lVar5 = *(longlong *)(param_1 + 0x40);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x38;
    } while ((longlong)uVar8 < (longlong)*(int *)(lVar5 + 0x68));
  }
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(lVar5 + 10) = 0;
  if (plVar4 != (longlong *)0x0) {
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
LAB_1412571b6:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141257222 FUN_141257222 body=72 status=ok
// SIG undefined FUN_141257222(void)

void FUN_141257222(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b02dcf0;
  FUN_140c874be(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14125726a FUN_14125726a body=58 status=ok
// SIG undefined FUN_14125726a(void)

void FUN_14125726a(longlong param_1,undefined8 param_2,longlong param_3)

{
  if (DAT_14cb7ecf0 == param_3) {
    FUN_1412572a4(param_2,param_1 + 0x68);
  }
  FUN_14060755e(param_1,param_2,param_3);
  return;
}



// FUNCTION 1412572a4 FUN_1412572a4 body=259 status=ok
// SIG undefined FUN_1412572a4(void)

ulonglong FUN_1412572a4(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined8 ***pppuVar7;
  undefined1 auStack_78 [40];
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  if ((char)param_1[4] == '\x1d') {
    lVar4 = *param_1;
    if (*param_2 != lVar4) {
      param_2[2] = 0;
    }
    *param_2 = lVar4;
    if (param_2[1] != param_1[1]) {
      param_2[2] = 0;
    }
    uVar3 = FUN_14477b664();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
    param_2[2] = param_1[2];
    uVar5 = CONCAT71(uVar6,1);
  }
  else {
    FUN_1400b56fe(local_50,param_1,0x1d);
    uVar5 = CONCAT71(uVar6,local_30 != 0);
    if (local_30 == 0) {
      uVar2 = 0;
    }
    else {
      FUN_141471d82(param_2,local_50);
      uVar2 = (uint)local_30;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar7 = local_50;
      if (0x18 < local_38) {
        pppuVar7 = (undefined8 ***)local_50[0];
      }
      (*pcVar1)(pppuVar7);
    }
    if (0x18 < local_38) {
      FUN_1400020a8(local_50[0]);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412573a8 FUN_1412573a8 body=197 status=ok
// SIG undefined FUN_1412573a8(void)

longlong FUN_1412573a8(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_14125746e();
  lVar3 = *param_1;
  if (DAT_14cb75ac0 != DAT_14cb75aec) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb75af0;
    if (DAT_14cb75af8 != (undefined *)0x0) {
      puVar7 = DAT_14cb75af8;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb75b00 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb75ab8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb75ab0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 14125746e FUN_14125746e body=157 status=ok
// SIG undefined FUN_14125746e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14125746e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb75b08) {
    FUN_144b3d300(&DAT_14cb75b08);
    if (DAT_14cb75b08 == -1) {
      DAT_14cb75ad8 = 0;
      _DAT_14cb75ae0 = 0;
      DAT_14cb75ab8 = 0;
      _DAT_14cb75ac0 = 0;
      _DAT_14cb75ae4 = 0xffffffff00000080;
      DAT_14cb75aec = 0;
      DAT_14cb75af8 = 0;
      DAT_14cb75b00 = 0;
      atexit(FUN_143cd94e9);
      _Init_thread_footer(&DAT_14cb75b08);
    }
  }
  return &DAT_14cb75ab8;
}



// FUNCTION 14125750c FUN_14125750c body=112 status=ok
// SIG undefined FUN_14125750c(void)

undefined8 *
FUN_14125750c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = param_4;
  FUN_14125757e();
  local_18 = param_1;
  FUN_14125761c(&DAT_14caa8500,local_1c,&local_18,0);
  if (DAT_14caa8580 != 0) {
    FUN_14747ba9e(DAT_14caa8580,param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125757e FUN_14125757e body=157 status=ok
// SIG undefined FUN_14125757e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14125757e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa8550) {
    FUN_144b3d300(&DAT_14caa8550);
    if (DAT_14caa8550 == -1) {
      DAT_14caa8520 = 0;
      DAT_14caa8528 = 0;
      DAT_14caa8500 = 0;
      _DAT_14caa8508 = 0;
      _DAT_14caa852c = 0xffffffff00000080;
      _DAT_14caa8534 = 0;
      DAT_14caa8540 = 0;
      _DAT_14caa8548 = 0;
      atexit(FUN_1432747b2);
      _Init_thread_footer(&DAT_14caa8550);
    }
  }
  return &DAT_14caa8500;
}



// FUNCTION 14125761c FUN_14125761c body=865 status=ok
// SIG undefined FUN_14125761c(void)

int * FUN_14125761c(longlong *param_1,int *param_2,ulonglong *param_3,char *param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1446efaca(param_1,iVar15);
    }
    iVar13 = (int)param_1[5];
    if (iVar13 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar5 = iVar13 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar7 = param_1 + 2;
    iVar11 = iVar13 + 1;
    iVar17 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar17 = iVar13;
    }
    if (iVar17 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar13) {
        if (iVar13 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar5 = iVar13;
        }
        else {
          uVar10 = iVar13 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar10) {
              uVar6 = uVar10;
            }
          }
          else {
            uVar6 = (uVar10 * 3 >> 3) + uVar10 + 0x10;
          }
          uVar12 = FUN_144a3809e(uVar6 << 2,0);
          iVar5 = (int)(uVar12 >> 2);
          iVar11 = -0x20;
          if ((int)uVar10 <= iVar5) {
            iVar11 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar7,iVar5);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar5 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar5 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar7;
        }
        bVar9 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar16 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar13 & 0x1f;
    puVar2 = (uint *)((longlong)plVar7 + (longlong)(iVar17 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar16 = (longlong)iVar15;
    iVar13 = *(int *)(*param_1 + 4 + lVar16 * 0x10);
    *(int *)(param_1 + 6) = iVar13;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar13 * 0x10) = 0xffffffff;
    }
  }
  plVar7 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[4];
  }
  iVar13 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar13 = iVar15;
  }
  puVar2 = (uint *)((longlong)plVar7 + (longlong)(iVar13 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar15 & 0x1f);
  lVar3 = *param_1;
  lVar16 = lVar16 * 0x10;
  uVar12 = *param_3;
  *(ulonglong *)(lVar3 + lVar16) = uVar12;
  *(undefined4 *)(lVar3 + 8 + lVar16) = 0xffffffff;
  uVar10 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar10 = uVar10 >> 0x10 ^ uVar10;
  cVar8 = '\0';
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar13 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar10) * 4);
    if (iVar13 == -1) {
      cVar8 = '\0';
    }
    else {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar13 * 0x10);
        if (*(ulonglong *)(*param_1 + (longlong)iVar13 * 0x10) == uVar12) {
          *puVar1 = uVar12;
          FUN_14103d342(param_1,iVar15,1);
          cVar8 = '\x01';
          iVar15 = iVar13;
          break;
        }
        iVar13 = (int)puVar1[1];
        cVar8 = '\0';
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar8;
  }
  if (cVar8 == '\0') {
    uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar6 < 4) {
      iVar13 = 1;
    }
    else {
      uVar12 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar13 <= (int)param_1[9])) {
      uVar10 = (int)param_1[9] - 1U & uVar10;
      *(uint *)(lVar3 + lVar16 + 0xc) = uVar10;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      *(undefined4 *)(lVar3 + lVar16 + 8) =
           *(undefined4 *)
            ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
           iVar15;
    }
    else {
      *(int *)(param_1 + 9) = iVar13;
      FUN_14125797e(param_1);
    }
  }
  *param_2 = iVar15;
  return param_2;
}



// FUNCTION 14125797e FUN_14125797e body=590 status=ok
// SIG undefined FUN_14125797e(void)

void FUN_14125797e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x10;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0xc + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 8 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_141257b87;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_141257b87:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141257bd2 FUN_141257bd2 body=110 status=ok
// SIG undefined FUN_141257bd2(void)

void FUN_141257bd2(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  bool bVar2;
  
  uVar1 = *param_1;
  bVar2 = false;
  if ((uVar1 != 0) && (uVar1 != DAT_14cb7c580)) {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    if (uVar1 == DAT_14c892e68) {
      bVar2 = false;
    }
    else {
      bVar2 = *param_1 != DAT_14cb7c568 && *param_1 != DAT_14cb7c578;
    }
  }
  *(bool *)param_2 = bVar2;
  return;
}



// FUNCTION 141257c40 FUN_141257c40 body=134 status=ok
// SIG undefined FUN_141257c40(void)

void FUN_141257c40(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    if ((longlong)*(int *)(param_1 + 0x520) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x518);
      lVar1 = (longlong)*(int *)(param_1 + 0x520) * 0x90;
      do {
        if (*(short *)(lVar2 + 0xc) == (short)param_2) {
          if (lVar2 != 0) {
            FUN_141221104(lVar2,param_3);
          }
          break;
        }
        lVar2 = lVar2 + 0x90;
        lVar1 = lVar1 + -0x90;
      } while (lVar1 != 0);
    }
    lVar2 = FUN_14655cb9c(param_1,param_2,param_3);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 8) = 1;
      FUN_143e17e58(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 141257cc6 FUN_141257cc6 body=218 status=ok
// SIG undefined FUN_141257cc6(void)

void FUN_141257cc6(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong *_Dst;
  ulonglong uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x152);
  if (((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
     (0 < (int)DAT_14cb24a48)) {
    uVar3 = 0;
    _Dst = DAT_14cb24a40;
    do {
      if (*_Dst == param_1) {
        plVar2 = (longlong *)_Dst[1];
        if (DAT_14cb24a48 - 1 != (int)uVar3) {
          memmove(_Dst,_Dst + 2,(longlong)(int)((DAT_14cb24a48 - 1) - (int)uVar3) << 4);
        }
        DAT_14cb24a48 = DAT_14cb24a48 - 1;
        FUN_14585d164(&DAT_14cb24a40);
        if (*(longlong *)(param_1 + 0x260) == 0) {
          return;
        }
        if (plVar2 == (longlong *)0x0) {
          return;
        }
        if (plVar2[7] != 0) {
          FUN_14480f766(*(longlong *)(param_1 + 0x260) + 0x88);
        }
                    /* WARNING: Could not recover jumptable at 0x000141257d81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))(plVar2,1);
        return;
      }
      uVar3 = uVar3 + 1;
      _Dst = _Dst + 2;
    } while (DAT_14cb24a48 != uVar3);
  }
  return;
}



// FUNCTION 141257da0 FUN_141257da0 body=412 status=ok
// SIG undefined FUN_141257da0(void)

void FUN_141257da0(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  size_t sVar2;
  longlong *plVar3;
  wchar_t *_Str;
  uint uVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = (longlong *)*param_2;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_141257e53;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar2 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar2 & 0xffffffff);
  uVar4 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar4) {
    FUN_1446efa72(&local_58,0,uVar4,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar4,_Str,(int)sVar2 + 1);
LAB_141257e53:
  puVar1 = local_50;
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x210))(plVar3);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,puVar1,1);
    (**(code **)(*plVar3 + 0x28))(plVar3);
    FUN_141257f3d(plVar3,param_1 + 2);
    (**(code **)(*plVar3 + 0x48))(plVar3,param_1 + 2);
    (**(code **)(*plVar3 + 0x58))(plVar3);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141257f3d FUN_141257f3d body=859 status=ok
// SIG undefined FUN_141257f3d(void)

void FUN_141257f3d(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined **local_58 [3];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x10))(param_1,&local_68,"FGbxUILootFeedEntry",param_2);
  plVar1 = local_68;
  if (local_68 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_58,"Type",true);
    local_58[0] = &PTR_FUN_14b9c0d60;
    local_40 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"PreviousAmount",true);
    local_58[0] = &PTR_FUN_14b9c0df0;
    local_40 = 0x10;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"DisplayText",true);
    local_58[0] = &PTR_FUN_14b9c0df0;
    local_40 = 0x20;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"DisplayDuration",true);
    local_58[0] = &PTR_FUN_14b9c0e80;
    local_40 = 0x30;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"ItemRarity",true);
    local_58[0] = &PTR_FUN_14b9c0d60;
    local_40 = 0x38;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"ItemSlot",true);
    local_58[0] = &PTR_FUN_14b9c0d60;
    local_40 = 0x48;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"ItemThumbnail",true);
    local_58[0] = &PTR_FUN_14b9c0d60;
    local_40 = 0x58;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"ShowThumbnail",true);
    local_58[0] = &PTR_FUN_14b9c0f10;
    local_40 = 0x68;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"bIsAmmo",true);
    local_58[0] = &PTR_FUN_14b9c0f10;
    local_40 = 0x69;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"bIsCurrency",true);
    local_58[0] = &PTR_FUN_14b9c0f10;
    local_40 = 0x6a;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    plVar1 = local_68;
    cohtml::Property::Property((Property *)local_58,"CurrentAmount",true);
    local_58[0] = &PTR_FUN_14b9c0fa0;
    local_40 = 0x70;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
    cohtml::Property::Property((Property *)local_58,"DeltaAmount",true);
    local_58[0] = &PTR_FUN_14b9c1030;
    local_40 = 0x78;
    (**(code **)(*local_68 + 0x18))(local_68,local_60,(Property *)local_58);
    cohtml::Property::~Property((Property *)local_58);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_68);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125829a FUN_14125829a body=65 status=ok
// SIG undefined FUN_14125829a(void)

void FUN_14125829a(int param_1)

{
  if ((DAT_14c99ff50 + DAT_14c99ff44) - DAT_14c99ff40 < param_1) {
    param_1 = DAT_14c99ff40 + param_1;
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_1);
    }
    if (DAT_14c99ff44 < param_1) {
      FUN_1412582dc();
      return;
    }
  }
  return;
}



// FUNCTION 1412582dc FUN_1412582dc body=345 status=ok
// SIG undefined FUN_1412582dc(void)

void FUN_1412582dc(uint param_1)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_1 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_1 < 0xaaa) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0xffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141258345;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0xffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_141258345:
    uVar3 = 0x7fffffff;
    if ((int)param_1 <= (int)(uVar4 / 0xc)) {
      uVar3 = uVar4 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar3 != DAT_14c99ff44) {
    DAT_14c99ff44 = (int)uVar3;
    FUN_1446f8d3c(&DAT_14c99ff38,DAT_14c99ff40,uVar3,0xc,4);
  }
  return;
}



// FUNCTION 141258436 FUN_141258436 body=50 status=ok
// SIG undefined FUN_141258436(void)

void FUN_141258436(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xcf8))();
  if (cVar1 == '\0') {
    FUN_141258468(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 141258468 FUN_141258468 body=2896 status=ok
// SIG undefined FUN_141258468(void)

void FUN_141258468(longlong *param_1,longlong param_2,undefined8 *param_3,code *param_4)

{
  int iVar1;
  void *_Src;
  char cVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  DWORD DVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined7 uVar12;
  ulonglong uVar11;
  ulonglong unaff_RBP;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(byte *)(param_1 + 0x18e) & 0x20) == 0) goto LAB_141258cd7;
  uVar11 = param_1[0xcb];
  if (uVar11 == 0) {
    uVar11 = param_1[0xcc];
    if ((DAT_14c950c29 & uVar11 != 0) != 0) goto LAB_141258f3b;
    if (uVar11 == 0) goto LAB_141258cd7;
  }
  else if (DAT_14c950c29 == 1) {
LAB_141258f3b:
    FUN_1456cec3c(uVar11);
  }
  if (DAT_14cb06da8 == 0) {
    local_90 = &local_50;
    local_50 = FUN_1449e2820;
    local_80 = FUN_14081d0ea;
    local_88 = &LAB_1464003b0;
    local_98 = &LAB_147d17bdf;
    local_a0 = &LAB_1417edf22;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10000000;
    local_c0 = 8;
    local_c8 = 0x588;
    param_3 = &DAT_14cb06da8;
    param_4 = FUN_14640038e;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh");
  }
  if (((*(int *)(*(longlong *)(uVar11 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(uVar11 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) ||
     ((int)param_1[(longlong)(int)param_1[0xe3] * 2 + 0xdb] == 0)) goto LAB_141258cd7;
  if ((*(byte *)((longlong)param_1 + 0xc71) & 0x20) == 0) {
    uVar7 = FUN_14072916a(param_1,*(undefined4 *)((longlong)param_1 + 0x854));
  }
  else {
    uVar7 = FUN_14489aeae(param_1);
    if ((char)uVar7 == '\0') {
      uVar7 = FUN_147a0bc9e(param_1);
    }
  }
  lVar10 = DAT_14cad29d8;
  if ((*(byte *)(param_1 + 0x114) & 8) == 0) {
LAB_14125853f:
    bVar17 = false;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 0x40000002) {
      uVar7 = 0;
    }
    else {
      bVar17 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar1 != 2)) {
        if (iVar1 == 1) {
          uVar5 = FUN_140ad26c0();
          uVar11 = (ulonglong)uVar5;
          DVar6 = GetCurrentThreadId();
          bVar17 = uVar5 == DVar6;
        }
        else {
          bVar17 = false;
        }
      }
      uVar7 = (ulonglong)(bVar17 ^ 1);
    }
    if (*(int *)(lVar10 + uVar7 * 4) < 1) goto LAB_14125853f;
    bVar17 = param_1[0x138] != 0;
  }
  local_58 = param_1 + 0xda;
  bVar3 = *(byte *)((longlong)param_1 + 0x8a1);
  uVar12 = (undefined7)((ulonglong)param_4 >> 8);
  if ((bVar3 & 0x20) == 0) {
    if (bVar17) {
LAB_1412585ad:
      if ((*(char *)param_1[0x138] == '\x01') || (1 < *(int *)((char *)param_1[0x138] + 8)))
      goto LAB_141258666;
LAB_1412585c7:
      local_64 = (undefined4)CONCAT71((int7)(uVar11 >> 8),1);
      local_78 = 0;
      local_68 = (undefined4)CONCAT71(uVar12,1);
      uVar14 = 0;
      uVar5 = 0;
      bVar16 = true;
      local_70 = 0;
      goto LAB_1412585df;
    }
    local_64 = (undefined4)CONCAT71((int7)(uVar7 >> 8),1);
    local_78 = 0;
    local_68 = (undefined4)CONCAT71(uVar12,1);
    local_70 = 0;
    local_60 = 0;
    uVar5 = 0;
    bVar16 = true;
    uVar13 = CONCAT71((int7)(unaff_RBP >> 8),1);
LAB_141258745:
    local_74 = 0;
    bVar17 = param_2 != 0;
    bVar15 = false;
  }
  else {
    if ((bool)((*(byte *)((longlong)param_1 + 0x8a2) & 1) == 0 & bVar17)) goto LAB_1412585ad;
    if ((*(byte *)((longlong)param_1 + 0x8a2) & 1) == 0) goto LAB_1412585c7;
LAB_141258666:
    lVar10 = param_1[0x164];
    plVar9 = (longlong *)param_1[0xcb];
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)param_1[0xcc];
      if ((DAT_14c950c29 & plVar9 != (longlong *)0x0) != 0) goto LAB_141258fb8;
      if (plVar9 != (longlong *)0x0) goto LAB_141258689;
LAB_141258d51:
      plVar9 = (longlong *)0x0;
    }
    else {
      if (DAT_14c950c29 == 1) {
LAB_141258fb8:
        FUN_1456cec3c(plVar9);
      }
LAB_141258689:
      if (DAT_14cb06da8 == 0) {
        local_90 = &local_50;
        local_50 = FUN_1449e2820;
        local_80 = FUN_14081d0ea;
        local_88 = &LAB_1464003b0;
        local_98 = &LAB_147d17bdf;
        local_a0 = &LAB_1417edf22;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x10000000;
        local_c0 = 8;
        local_c8 = 0x588;
        param_3 = &DAT_14cb06da8;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8);
      }
      if ((*(int *)(plVar9[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
          DAT_14cb06da8 + 0x30)) goto LAB_141258d51;
    }
    lVar8 = (**(code **)(*plVar9 + 0x310))(plVar9);
    uVar12 = (undefined7)((ulonglong)plVar9 >> 8);
    local_64 = (undefined4)CONCAT71(uVar12,1);
    if (((int)lVar10 == *(int *)(lVar8 + 0x28)) &&
       (local_64 = (undefined4)CONCAT71(uVar12,1), (int)param_1[0x164] == (int)param_1[0x174])) {
      local_64 = (undefined4)
                 CONCAT71(uVar12,(int)param_1[(longlong)(int)param_1[0xe3] * 2 + 0xdb] !=
                                 (int)param_1[0x176]);
    }
    bVar16 = (int)param_1[0x178] != (int)param_1[0x16c];
    uVar5 = CONCAT31((int3)((uint)(int)lVar10 >> 8),bVar16);
    unaff_RBP = (ulonglong)uVar5;
    local_78 = FUN_147a0c418(param_1 + 0x17b,param_1 + 0x183);
    bVar3 = *(byte *)((longlong)param_1 + 0x8a1);
    if ((char)local_64 == '\0' && !bVar16) {
      bVar16 = (~bVar3 & 0xa0) == 0;
      if (bVar17 == true && !bVar16) {
        bVar16 = (*(byte *)(param_1[0x138] + 2) & 0x10) == 0;
      }
      local_64 = 0;
      uVar5 = 0;
    }
    else {
      bVar16 = true;
    }
    local_68 = 0;
    uVar14 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    local_70 = local_64;
LAB_1412585df:
    local_60 = (undefined4)uVar14;
    bVar15 = (~bVar3 & 0x60) == 0;
    if (bVar17 == true && !bVar15) {
      bVar15 = (bool)(*(byte *)(param_1[0x138] + 2) & 1);
    }
    uVar13 = CONCAT71((int7)(unaff_RBP >> 8),1);
    if ((((param_2 != 0 & (byte)uVar14) != 1) || ((char)local_70 == '\x01')) || (bVar15 == false))
    goto LAB_141258745;
    bVar15 = *DAT_14cad2880 == 1;
    bVar17 = true;
    uVar13 = 0;
    local_60 = (undefined4)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
    local_74 = (undefined4)CONCAT71((int7)((ulonglong)DAT_14cad2880 >> 8),1);
  }
  local_5c = (undefined4)uVar13;
  local_6c = uVar5;
  if (*DAT_14cad2be0 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
    cVar2 = FUN_1447e0190();
    if (cVar2 == '\0') {
      uVar5 = FUN_146811c5e();
      uVar11 = (ulonglong)uVar5;
    }
  }
  bVar4 = 1;
  bVar3 = 1;
  if ((longlong *)param_1[0x15d] != (longlong *)0x0) {
    bVar3 = (**(code **)(*(longlong *)param_1[0x15d] + 0x2b8))();
  }
  if ((longlong *)param_1[0x15f] != (longlong *)0x0) {
    bVar4 = (**(code **)(*(longlong *)param_1[0x15f] + 0x2b8))();
  }
  if (param_1[0x15d] == 0) {
    if ((byte)((byte)uVar11 & bVar3 & bVar4 & param_1[0x15f] != 0) != 0) goto LAB_1412587f0;
LAB_141258816:
    uVar11 = 0;
  }
  else {
    bVar3 = (byte)uVar11 & bVar3 & bVar4;
    uVar11 = CONCAT71((int7)(uVar11 >> 8),bVar3);
    if (bVar3 != 1) goto LAB_141258816;
LAB_1412587f0:
    if (!bVar16) {
      if ((bool)(bVar17 & bVar15)) goto LAB_141258800;
      goto LAB_141258816;
    }
    if (!bVar17) goto LAB_141258816;
LAB_141258800:
    if (*(longlong *)(param_2 + 0x20) == 0) goto LAB_141258816;
    uVar11 = CONCAT71((int7)(uVar11 >> 8),(*(byte *)(*(longlong *)(param_2 + 0x20) + 1) & 0xfe) == 2
                     );
  }
  cVar2 = FUN_14036294a(param_1,uVar11 & 0xffffffff ^ 1,1);
  if (cVar2 != '\0') goto LAB_141258cd7;
  lVar10 = param_1[0xcb];
  if (lVar10 == 0) {
    lVar10 = param_1[0xcc];
    if ((DAT_14c950c29 & lVar10 != 0) != 0) goto LAB_141258f74;
    if (lVar10 != 0) goto LAB_14125884d;
LAB_141258d27:
    lVar10 = 0;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_141258f74:
      FUN_1456cec3c(lVar10);
    }
LAB_14125884d:
    if (DAT_14cb06da8 == 0) {
      local_90 = &local_50;
      local_50 = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = &LAB_1464003b0;
      local_98 = &LAB_147d17bdf;
      local_a0 = &LAB_1417edf22;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10000000;
      local_c0 = 8;
      local_c8 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) goto LAB_141258d27;
  }
  param_1[0x1f0] = lVar10;
  param_1[0x1ee] = param_1[0x15d];
  cVar2 = FUN_140284ae6(param_1);
  if (cVar2 == '\0') {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1[0x15f];
  }
  param_1[0x1ef] = lVar10;
  *(bool *)((longlong)param_1 + 0xfe1) = bVar16;
  bVar3 = (byte)local_70;
  if ((char)local_64 == '\0') {
    bVar3 = (byte)local_5c & bVar16;
  }
  bVar4 = (byte)local_74;
  *(byte *)(param_1 + 0x1fc) = bVar4;
  *(byte *)((longlong)param_1 + 0xfe2) = bVar3;
  if ((char)local_68 == '\0' && (char)local_6c == '\0') {
    if (bVar16 == false) {
      *(undefined1 *)((longlong)param_1 + 0xfe3) = 0;
      bVar3 = (byte)local_78;
    }
    else {
      *(byte *)((longlong)param_1 + 0xfe3) = bVar4 ^ 1;
      bVar3 = 1;
      if ((byte)local_78 == 0) {
        bVar3 = bVar4 ^ 1;
      }
    }
  }
  else {
    bVar3 = bVar4 ^ 1;
    if (bVar16 == false) {
      bVar3 = (byte)local_78;
    }
    if ((byte)local_78 != 0) {
      bVar3 = (byte)local_78;
    }
    *(char *)((longlong)param_1 + 0xfe3) = (char)local_6c;
    if ((char)local_68 != '\0') {
      bVar3 = (byte)local_78;
    }
  }
  *(byte *)((longlong)param_1 + 0xfe4) = bVar3;
  *(byte *)((longlong)param_1 + 0xfe5) = *(byte *)((longlong)param_1 + 0xc71) & 1;
  if ((char)local_60 == '\0') {
    if (*(int *)((longlong)param_1 + 0xba4) < 0) {
      *(undefined4 *)(param_1 + 0x174) = 0;
      FUN_1401a2688(param_1 + 0x173,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x174) = 0;
    }
    if (*(int *)((longlong)param_1 + 0xbb4) < 0) {
      *(undefined4 *)(param_1 + 0x176) = 0;
      FUN_1401a2688(param_1 + 0x175,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x176) = 0;
    }
    if (*(int *)((longlong)param_1 + 0xbc4) < 0) {
      *(undefined4 *)(param_1 + 0x178) = 0;
      FUN_140507fc4(param_1 + 0x177,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x178) = 0;
    }
    *(undefined1 *)(param_1 + 0x179) = 0;
    FUN_14072969c(param_1 + 0x17b);
  }
  if (bVar16 != false) {
    FUN_140284a70(param_1);
    if ((((param_1[0x15d] != 0) && ((*(byte *)(param_1[0x15d] + 0x31) & 4) == 0)) &&
        ((plVar9 = (longlong *)FUN_1417b497e(), (short)plVar9[1] == -1 || (*plVar9 == -1)))) ||
       ((cVar2 = FUN_1405080a6(param_1), cVar2 != '\0' &&
        ((plVar9 = (longlong *)FUN_1417b497e(param_1[0x15f]), (short)plVar9[1] == -1 ||
         (*plVar9 == -1)))))) {
      FUN_1407396de(param_1,0,0);
    }
  }
  if ((char)uVar11 == '\0') {
    if ((*(char *)((longlong)param_1 + 0xfe1) == '\0') && ((char)param_1[0x1fc] != '\x01')) {
      if ((int)param_1[0x174] != 0) {
        *(undefined4 *)(param_1 + 0x164) = 0;
        if (*(int *)((longlong)param_1 + 0xb24) < 0) {
          FUN_1401a2688(param_1 + 0x163,0);
        }
        FUN_1406f47cc(param_1 + 0x163,param_1 + 0x173);
      }
      if ((int)param_1[0x176] != 0) {
        lVar10 = (longlong)*(int *)((longlong)param_1 + 0x714);
        plVar9 = local_58 + lVar10 * 2;
        iVar1 = *(int *)((longlong)local_58 + lVar10 * 0x10 + 0xc);
        *(undefined4 *)(local_58 + lVar10 * 2 + 1) = 0;
        if (iVar1 < 0) {
          FUN_1401a2688(plVar9,0);
        }
        FUN_1406f47cc(plVar9,param_1 + 0x175);
      }
      iVar1 = (int)param_1[0x178];
      _Src = (void *)param_1[0x177];
      *(int *)(param_1 + 0x16c) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xb64) == 0) {
        *(undefined4 *)((longlong)param_1 + 0xb64) = 0;
      }
      else {
        FUN_1447563a6(param_1 + 0x16b,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)param_1[0x16b],_Src,(longlong)iVar1 << 4);
        }
      }
      *(char *)(param_1 + 0x16d) = (char)param_1[0x179];
      if ((int)param_1[0x180] != 0) {
        FUN_14571e99c(param_1 + 0x183,param_1 + 0x17b);
      }
      if ((param_1[0x15d] != 0) && ((*(byte *)(param_1[0x15d] + 0x31) & 4) != 0)) {
        FUN_1449d3f9e();
      }
      cVar2 = FUN_1405080a6(param_1);
      if (cVar2 != '\0') {
        FUN_1449d3f9e(param_1[0x15f]);
      }
    }
    else {
      FUN_14348f942(param_1);
      FUN_140506a30(param_1);
      FUN_14348f942(param_1);
    }
    FUN_14348f140(param_1,param_1 + 0x1ee);
    param_1[0x1ee] = 0;
    param_1[0x1ef] = 0;
    param_1[0x1f0] = 0;
  }
  else {
    FUN_14348e9c4(param_1,param_2);
  }
  if ((param_2 == 0) && (cVar2 = (**(code **)(*param_1 + 0xcb8))(param_1), cVar2 != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
  }
LAB_141258cd7:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141258fda FUN_141258fda body=1756 status=ok
// SIG undefined FUN_141258fda(void)

void FUN_141258fda(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined4 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_30;
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_29 = 0;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_29);
            goto LAB_1412590c1;
          }
        }
        puVar7 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_29) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_29,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_29,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_29,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_29,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
LAB_1412590c1:
  local_2a = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1409f1a5c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2a);
            goto LAB_14125918a;
          }
        }
        puVar7 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_2a) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2a,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2a,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_2a,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_2a,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2a);
  }
LAB_14125918a:
  local_30 = 0;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_141259256;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_141259256:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar5 = (**(code **)(*param_1 + 0x9d0))(param_1,local_29,local_2a,local_30);
  if (cVar5 == '\0') {
    FUN_1468998ea(L"ServerSetZoomState_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x9d8))(param_1,local_29,local_2a,local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412596bc FUN_1412596bc body=110 status=ok
// SIG undefined FUN_1412596bc(void)

void FUN_1412596bc(longlong param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    if (((byte)param_2 & 0xfd) == 1) {
      lVar1 = FUN_1447210f0(param_1);
      *(float *)(param_1 + 0x8964) = (float)((double)param_4 + *(double *)(lVar1 + 0x6d0));
    }
    FUN_140efe504(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 14125972a FUN_14125972a body=418 status=ok
// SIG undefined FUN_14125972a(void)

longlong FUN_14125972a(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  ulonglong *local_68;
  int local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined1 *)(param_1 + 0x18) = 0;
  puVar4 = (ushort *)(param_3 + 0x40);
  local_78 = param_2;
  local_70 = param_1;
  if ((*(ushort *)(param_3 + 0x40) & 1) == 0) {
    plVar1 = *(longlong **)puVar4;
    if ((plVar1 != (longlong *)0x0) && (lVar3 = plVar1[1], (longlong)(int)lVar3 != 0)) {
      lVar2 = *plVar1;
      lVar5 = 0;
      do {
        local_58 = *(ulonglong *)(lVar2 + lVar5);
        local_50 = lVar2 + 8 + lVar5;
        FUN_1412598ce(&local_78,&local_58);
        lVar5 = lVar5 + 0x18;
      } while ((longlong)(int)lVar3 * 0x18 != lVar5);
    }
  }
  else if ((*(ushort *)(param_3 + 0x40) & 2) == 0) {
    FUN_146859534(puVar4,&local_68);
    if ((longlong)local_60 != 0) {
      puVar6 = local_68;
      do {
        local_58 = *puVar6;
        local_50 = (ulonglong)CONCAT24(*puVar4 >> 2,(int)puVar6[1]) | 0x8000000000000000;
        FUN_1412598ce(&local_78,&local_58);
        puVar6 = (ulonglong *)((longlong)puVar6 + 0xc);
      } while (puVar6 != (ulonglong *)((longlong)local_68 + (longlong)local_60 * 0xc));
    }
  }
  else {
    FUN_14585d512();
    if ((longlong)local_60 != 0) {
      lVar3 = 0;
      do {
        local_58 = *(ulonglong *)((longlong)local_68 + lVar3) & 0xffffffff;
        local_50 = (ulonglong)(*puVar4 >> 2) << 0x20 |
                   *(ulonglong *)((longlong)local_68 + lVar3) >> 0x20 | 0x8000000000000000;
        FUN_1412598ce(&local_78,&local_58);
        lVar3 = lVar3 + 8;
      } while ((longlong)local_60 * 8 != lVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1412598ce FUN_1412598ce body=506 status=ok
// SIG undefined FUN_1412598ce(void)

void FUN_1412598ce(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar11 = (longlong *)param_1[1];
  if ((char)plVar11[3] == '\x01') {
    uVar3 = *(uint *)(plVar11 + 1);
    lVar7 = *plVar11;
    uVar9 = 0;
    iVar8 = (int)((ulonglong)*param_2 >> 0x20);
    iVar6 = (int)*param_2;
    uVar13 = uVar3;
    if (0 < (int)uVar3) {
      do {
        uVar2 = (uVar13 >> 1) + uVar9;
        iVar10 = *(int *)(lVar7 + (ulonglong)uVar2 * 0x18) - iVar6;
        if (iVar10 == 0) {
          iVar10 = *(int *)(lVar7 + 4 + (ulonglong)uVar2 * 0x18) - iVar8;
        }
        if (iVar10 < 0) {
          uVar9 = uVar2 + (uVar13 & 1);
        }
        bVar5 = 1 < uVar13;
        uVar13 = uVar13 >> 1;
      } while (bVar5);
    }
    if ((int)uVar9 < (int)uVar3) {
      uVar12 = (ulonglong)uVar9;
      iVar6 = iVar6 - *(int *)(lVar7 + uVar12 * 0x18);
      if (iVar6 == 0) {
        iVar6 = iVar8 - *(int *)(lVar7 + 4 + uVar12 * 0x18);
      }
      if ((-1 < iVar6) && (lVar7 + uVar12 * 0x18 != -8)) goto LAB_141259a10;
    }
  }
  else {
    plVar1 = (longlong *)(*param_1 + 0x40);
    if ((*(byte *)(*param_1 + 0x40) & 1) == 0) {
      plVar4 = (longlong *)*plVar1;
      if (plVar4 != (longlong *)0x0) {
        uVar3 = *(uint *)(plVar4 + 1);
        lVar7 = *plVar4;
        uVar9 = 0;
        iVar8 = (int)((ulonglong)*param_2 >> 0x20);
        iVar6 = (int)*param_2;
        uVar13 = uVar3;
        if (0 < (int)uVar3) {
          do {
            uVar2 = (uVar13 >> 1) + uVar9;
            iVar10 = *(int *)(lVar7 + (ulonglong)uVar2 * 0x18) - iVar6;
            if (iVar10 == 0) {
              iVar10 = *(int *)(lVar7 + 4 + (ulonglong)uVar2 * 0x18) - iVar8;
            }
            if (iVar10 < 0) {
              uVar9 = uVar2 + (uVar13 & 1);
            }
            bVar5 = 1 < uVar13;
            uVar13 = uVar13 >> 1;
          } while (bVar5);
        }
        if ((int)uVar9 < (int)uVar3) {
          uVar12 = (ulonglong)uVar9;
          iVar6 = iVar6 - *(int *)(lVar7 + uVar12 * 0x18);
          if (iVar6 == 0) {
            iVar6 = iVar8 - *(int *)(lVar7 + 4 + uVar12 * 0x18);
          }
          if (-1 < iVar6) {
            lVar7 = lVar7 + uVar12 * 0x18 + 8;
            goto LAB_1412599a7;
          }
        }
      }
    }
    else {
      lVar7 = FUN_146859566(plVar1);
LAB_1412599a7:
      if (lVar7 != 0) goto LAB_141259a10;
    }
    FUN_1458f7ff0(plVar1,&local_58);
    FUN_147006faa(plVar11,&local_58);
    FUN_140958ed1(local_58,local_50);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    plVar11 = (longlong *)param_1[1];
  }
  FUN_140af6732(param_2 + 1,&local_58);
  FUN_140af67e0(plVar11,param_2,&local_58);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_141259a10:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141259aca FUN_141259aca body=879 status=ok
// SIG undefined FUN_141259aca(void)

undefined4 * FUN_141259aca(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141259efc(param_1,local_58);
  puVar2 = (undefined8 *)*param_3;
  lVar10 = param_3[1];
  *(undefined4 *)(local_50 + 1) = *(undefined4 *)(puVar2 + 1);
  *local_50 = *puVar2;
  local_50[2] = 0;
  iVar9 = *(int *)(puVar2 + 3);
  _Src = (void *)puVar2[2];
  *(int *)(local_50 + 3) = iVar9;
  if ((longlong)iVar9 == 0) {
    *(undefined4 *)((longlong)local_50 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(local_50 + 2,iVar9,0);
    memcpy((void *)local_50[2],_Src,(longlong)iVar9);
  }
  FUN_14023423e(local_50 + 4,lVar10);
  *(undefined4 *)(local_50 + 6) = 0xffffffff;
  local_5c = local_58[0];
  uVar3 = *local_50;
  uVar6 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar11 = (uint)uVar3 & 0xffff;
  uVar14 = ((uint)uVar3 << 0x10 | uVar11) + (int)((ulonglong)uVar3 >> 0x20) +
           (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar11 >> 4);
  puVar7 = (ulonglong *)FUN_144741050(local_50 + 1);
  uVar1 = (ushort)puVar7[1];
  uVar6 = ((uint)(*puVar7 >> 0x14) & 0xffff ^ (uint)(*puVar7 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = (uint)(uVar1 >> 0xd) ^ (uVar6 >> 0x10 ^ uVar6) - (uint)uVar1;
  uVar11 = uVar6 << 8 ^ (-0x61c88647 - uVar6) - (uint)uVar1;
  uVar12 = uVar11 >> 0xd ^ (uVar1 - uVar6) - uVar11;
  uVar6 = uVar12 >> 0xc ^ (uVar6 - uVar11) - uVar12;
  uVar11 = uVar6 << 0x10 ^ (uVar11 - uVar12) - uVar6;
  uVar12 = uVar11 >> 5 ^ (uVar12 - uVar6) - uVar11;
  uVar13 = uVar12 >> 3 ^ (uVar6 - uVar11) - uVar12;
  uVar6 = uVar13 << 10 ^ (uVar11 - uVar12) - uVar13;
  uVar6 = uVar6 >> 0xf ^ uVar12 - (uVar13 + uVar6);
  iVar9 = uVar6 - *(byte *)((longlong)puVar7 + 10);
  uVar11 = iVar9 * 0x100 ^ 0x9e3779b9 - uVar6;
  uVar12 = uVar11 >> 0xd ^ ((uint)*(byte *)((longlong)puVar7 + 10) - iVar9) - uVar11;
  uVar6 = uVar12 >> 0xc ^ (iVar9 - uVar11) - uVar12;
  uVar11 = uVar6 << 0x10 ^ (uVar11 - uVar12) - uVar6;
  uVar13 = uVar11 >> 5 ^ (uVar12 - uVar6) - uVar11;
  uVar12 = uVar13 >> 3 ^ (uVar6 - uVar11) - uVar13;
  uVar6 = uVar12 << 10 ^ (uVar11 - uVar13) - uVar12;
  uVar12 = uVar14 >> 0xd ^ (uVar6 >> 0xf ^ uVar13 - (uVar12 + uVar6)) - uVar14;
  uVar11 = uVar12 << 8 ^ (-0x61c88647 - uVar14) - uVar12;
  uVar6 = uVar11 >> 0xd ^ (uVar14 - uVar12) - uVar11;
  uVar13 = uVar6 >> 0xc ^ (uVar12 - uVar11) - uVar6;
  uVar12 = uVar13 << 0x10 ^ (uVar11 - uVar6) - uVar13;
  uVar11 = uVar12 >> 5 ^ (uVar6 - uVar13) - uVar12;
  uVar6 = uVar11 >> 3 ^ (uVar13 - uVar12) - uVar11;
  uVar12 = uVar6 << 10 ^ (uVar12 - uVar11) - uVar6;
  uVar6 = uVar12 >> 0xf ^ uVar11 - (uVar6 + uVar12);
  cVar5 = FUN_141259e3a(param_1,uVar6,local_50,&local_5c);
  uVar4 = local_5c;
  if (cVar5 == '\0') {
    uVar11 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar11 < 4) {
      iVar9 = 1;
    }
    else {
      uVar8 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_50 + 0x34) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 6) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_5c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14125a0de(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141259e3a FUN_141259e3a body=194 status=ok
// SIG undefined FUN_141259e3a(void)

undefined8 FUN_141259e3a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      lVar2 = *param_1;
      do {
        lVar13 = (longlong)iVar14 * 0x38;
        puVar1 = (undefined4 *)(lVar2 + lVar13);
        if ((*(longlong *)(lVar2 + lVar13) == *param_3) &&
           (*(int *)(lVar2 + 8 + lVar13) == (int)param_3[1])) {
          if (*(longlong **)(puVar1 + 8) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(puVar1 + 8) + 0x10))();
          }
          if (*(longlong *)(puVar1 + 4) != 0) {
            FUN_1400020a8();
          }
          lVar2 = *param_3;
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar13 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar9 = param_3[2];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar10 = param_3[3];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar11 = param_3[5];
          uVar8 = *(undefined4 *)((longlong)param_3 + 0x2c);
          puVar1[8] = (int)param_3[4];
          puVar1[9] = uVar7;
          puVar1[10] = (int)lVar11;
          puVar1[0xb] = uVar8;
          puVar1[4] = (int)lVar9;
          puVar1[5] = uVar5;
          puVar1[6] = (int)lVar10;
          puVar1[7] = uVar6;
          *puVar1 = (int)lVar2;
          puVar1[1] = uVar3;
          puVar1[2] = (int)lVar13;
          puVar1[3] = uVar4;
          FUN_148123a28(param_1,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = puVar1[0xc];
      } while (iVar14 != -1);
    }
  }
  return 0;
}



// FUNCTION 141259efc FUN_141259efc body=481 status=ok
// SIG undefined FUN_141259efc(void)

int * FUN_141259efc(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x38);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 14125a0de FUN_14125a0de body=1071 status=ok
// SIG undefined FUN_14125a0de(void)

void FUN_14125a0de(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined1 auStack_98 [36];
  int local_74;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar20 = *(uint *)(param_1 + 9);
  if (uVar20 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar20,4);
    if (0 < (int)uVar20) {
      uVar6 = 0;
      do {
        plVar14 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        *(undefined4 *)((longlong)plVar14 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar6) * 4)
             = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar20 != uVar6);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar21 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_70 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      local_70 = local_68 & 0xffffffff;
      uVar21 = local_68 >> 0x20;
    }
    plVar14 = local_60;
    uVar20 = (uint)local_58;
    iVar12 = local_58._4_4_;
    iVar7 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        puVar2 = (undefined8 *)(*param_1 + (longlong)iVar12 * 0x38);
        uVar5 = *puVar2;
        uVar6 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar16 = (uint)uVar5 & 0xffff;
        uVar22 = ((uint)uVar5 << 0x10 | uVar16) + (int)((ulonglong)uVar5 >> 0x20) +
                 (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar16 >> 4);
        local_74 = iVar7;
        puVar8 = (ulonglong *)FUN_144741050(puVar2 + 1);
        uVar3 = (ushort)puVar8[1];
        uVar6 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = (uint)(uVar3 >> 0xd) ^ (uVar6 >> 0x10 ^ uVar6) - (uint)uVar3;
        uVar16 = uVar6 << 8 ^ (-0x61c88647 - uVar6) - (uint)uVar3;
        uVar17 = uVar16 >> 0xd ^ (uVar3 - uVar6) - uVar16;
        uVar6 = uVar17 >> 0xc ^ (uVar6 - uVar16) - uVar17;
        uVar19 = uVar6 << 0x10 ^ (uVar16 - uVar17) - uVar6;
        uVar16 = uVar19 >> 5 ^ (uVar17 - uVar6) - uVar19;
        uVar17 = uVar16 >> 3 ^ (uVar6 - uVar19) - uVar16;
        uVar6 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
        uVar6 = uVar6 >> 0xf ^ uVar16 - (uVar17 + uVar6);
        iVar7 = uVar6 - *(byte *)((longlong)puVar8 + 10);
        uVar6 = iVar7 * 0x100 ^ 0x9e3779b9 - uVar6;
        uVar17 = uVar6 >> 0xd ^ ((uint)*(byte *)((longlong)puVar8 + 10) - iVar7) - uVar6;
        uVar16 = uVar17 >> 0xc ^ (iVar7 - uVar6) - uVar17;
        uVar6 = uVar16 << 0x10 ^ (uVar6 - uVar17) - uVar16;
        uVar17 = uVar6 >> 5 ^ (uVar17 - uVar16) - uVar6;
        uVar16 = uVar17 >> 3 ^ (uVar16 - uVar6) - uVar17;
        uVar6 = uVar16 << 10 ^ (uVar6 - uVar17) - uVar16;
        uVar6 = uVar22 >> 0xd ^ (uVar6 >> 0xf ^ uVar17 - (uVar16 + uVar6)) - uVar22;
        uVar16 = uVar6 << 8 ^ (-0x61c88647 - uVar22) - uVar6;
        uVar17 = uVar16 >> 0xd ^ (uVar22 - uVar6) - uVar16;
        uVar19 = uVar17 >> 0xc ^ (uVar6 - uVar16) - uVar17;
        uVar6 = uVar19 << 0x10 ^ (uVar16 - uVar17) - uVar19;
        uVar16 = uVar6 >> 5 ^ (uVar17 - uVar19) - uVar6;
        uVar17 = uVar16 >> 3 ^ (uVar19 - uVar6) - uVar16;
        uVar6 = uVar17 << 10 ^ (uVar6 - uVar16) - uVar17;
        uVar13 = (longlong)(int)(uVar6 >> 0xf ^ uVar16 - (uVar17 + uVar6)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar13;
        *(int *)((longlong)puVar2 + 0x34) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(puVar2 + 6) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        uVar20 = ~(uint)uVar21 & uVar20;
        plVar9 = (longlong *)plVar14[2];
        if ((longlong *)plVar14[2] == (longlong *)0x0) {
          plVar9 = plVar14;
        }
        iVar4 = (int)plVar14[3];
        iVar12 = (int)local_70;
        lVar18 = (longlong)iVar12;
        uVar6 = *(uint *)((longlong)plVar9 + lVar18 * 4) & uVar20;
        iVar7 = local_74;
        if (uVar6 == 0) {
          iVar10 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar10 = iVar4 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar11 = iVar10;
          if (iVar10 < iVar12) {
            iVar11 = iVar12;
          }
          if (iVar10 <= iVar12) break;
          lVar15 = 0;
          while( true ) {
            iVar7 = iVar7 + 0x20;
            uVar6 = *(uint *)((longlong)plVar9 + lVar15 * 4 + lVar18 * 4 + 4);
            if (uVar6 != 0) break;
            lVar15 = lVar15 + 1;
            if (iVar11 - lVar18 == lVar15) goto LAB_14125a4ca;
          }
          local_70 = (ulonglong)(iVar12 + (int)lVar15 + 1);
          uVar20 = 0xffffffff;
        }
        uVar21 = (ulonglong)(-uVar6 & uVar6);
        uVar13 = uVar21 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar12 = (iVar7 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar4);
    }
  }
LAB_14125a4ca:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125a50e FUN_14125a50e body=447 status=ok
// SIG undefined FUN_14125a50e(void)

undefined4 * FUN_14125a50e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  undefined2 *puVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14125a740(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_48 = *puVar1;
  uVar12 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_48 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_48[2] = *puVar2;
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  iVar8 = *(int *)(local_48 + 1);
  iVar6 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    if (iVar8 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*local_48;
    }
    lVar9 = 0;
    uVar12 = 0;
    do {
      uVar10 = ((uint)(0x19 < (ushort)puVar5[lVar9] - 0x61) * 0x20 + (uint)(ushort)puVar5[lVar9]) -
               0x20;
      uVar11 = (uint)(uVar12 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar12 ^ uVar10) & 0xff) * 4);
      uVar12 = (ulonglong)
               (uVar11 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar11 & 0xff ^ uVar10 >> 8 & 0xff) * 4));
      lVar9 = lVar9 + 1;
    } while (iVar6 != (int)lVar9);
  }
  cVar4 = FUN_14125a6ce(param_1,uVar12,local_48,&local_54);
  uVar3 = local_54;
  if (cVar4 == '\0') {
    uVar10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar10) {
      uVar7 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar10 = *(int *)(param_1 + 0x48) - 1U & (uint)uVar12;
      *(uint *)((longlong)local_48 + 0x1c) = uVar10;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_141703288(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125a6ce FUN_14125a6ce body=114 status=ok
// SIG undefined FUN_14125a6ce(void)

undefined8 FUN_14125a6ce(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_14483203a(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
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
    FUN_14078f6aa(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 14125a740 FUN_14125a740 body=489 status=ok
// SIG undefined FUN_14125a740(void)

int * FUN_14125a740(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14125a92a FUN_14125a92a body=55 status=ok
// SIG undefined FUN_14125a92a(void)

void FUN_14125a92a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b366bf0;
  FUN_14029b636(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14125a962 FUN_14125a962 body=171 status=ok
// SIG undefined FUN_14125a962(void)

void FUN_14125a962(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar8 = *(longlong **)(param_1 + 0xb08);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_14125a9eb:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) goto LAB_14125a9eb;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    if ((*(longlong *)(param_1 + 0xb00) != 0) &&
       (*(int *)(*(longlong *)(param_1 + 0xb00) + 0x78) != 0)) goto LAB_14125a9d5;
    bVar3 = false;
  }
  if ((longlong)*(int *)(param_1 + 0xb90) < 1) {
    puVar6 = (undefined8 *)(param_1 + 0xb40);
  }
  else {
    lVar7 = param_1 + 0xb48;
    if (*(longlong *)(param_1 + 0xb88) != 0) {
      lVar7 = *(longlong *)(param_1 + 0xb88);
    }
    puVar6 = (undefined8 *)((longlong)*(int *)(param_1 + 0xb90) * 0x10 + lVar7 + -0x10);
  }
  FUN_14125aa0e(param_1,*puVar6);
  if (bVar3) {
    return;
  }
LAB_14125a9d5:
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
                    /* WARNING: Could not recover jumptable at 0x00014125aa09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x10))(plVar8);
      return;
    }
  }
  return;
}



// FUNCTION 14125aa0e FUN_14125aa0e body=131 status=ok
// SIG undefined FUN_14125aa0e(void)

void FUN_14125aa0e(longlong *param_1,longlong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar1;
  
  if (param_1[0x162] != param_2) {
    param_1[0x162] = param_2;
    if (param_2 == 0) {
      FUN_1447715ec(param_1 + 0x163,&DAT_14c9485f0);
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1038);
      param_2 = 0;
    }
    else {
      puVar1 = &DAT_14c9485f0;
      if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
        puVar1 = *(undefined4 **)(param_2 + 8);
      }
      FUN_1447715ec(param_1 + 0x163,puVar1);
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1038);
    }
                    /* WARNING: Could not recover jumptable at 0x00014125aa63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14125aa92 FUN_14125aa92 body=464 status=ok
// SIG undefined FUN_14125aa92(void)

undefined8 * FUN_14125aa92(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  ushort uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined2 *_Src;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_3 + 1);
  if (((param_2[1] == 0 && *param_2 == 0) && param_2[2] == 0) && param_2[3] == 0) {
    _Src = (undefined2 *)*param_3;
LAB_14125ab95:
    *param_1 = 0;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      goto LAB_14125ac3f;
    }
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  else {
    _Src = (undefined2 *)*param_3;
    puVar2 = &DAT_149dfb77a;
    if (iVar1 != 0) {
      puVar2 = _Src;
    }
    lVar3 = 0x10;
    lVar5 = 0;
    while( true ) {
      uVar6 = *(ushort *)((longlong)puVar2 + lVar5);
      uVar7 = (ulonglong)uVar6;
      uVar4 = *(ushort *)((longlong)L"PersistentLevel." + lVar5);
      if (uVar6 != uVar4) break;
      if (uVar6 == 0) goto LAB_14125ab37;
LAB_14125ab06:
      lVar3 = lVar3 + -1;
      if (lVar3 == 0) goto LAB_14125ab37;
      lVar5 = lVar5 + 2;
    }
    if ((uVar4 | uVar6) < 0x80) {
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      uVar8 = (ulonglong)uVar4;
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar8]) goto LAB_14125ab06;
    }
    if (uVar6 != uVar4) goto LAB_14125ab95;
LAB_14125ab37:
    local_70 = 0x11;
    local_78 = 0;
    iVar1 = FUN_1447ee042(param_3,&DAT_149e0635c,1,1);
    if (iVar1 != -1) {
      FUN_144a49bb4(param_3,local_48,iVar1);
      FUN_144a63a7c(param_3,local_68,0,iVar1);
      FUN_14125ac64(local_58,param_2,local_68);
      FUN_1401c7f3e(param_1,local_58,local_48);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
LAB_14125ac3f:
      if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
    FUN_14125ac64(param_1,param_2,param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
}



// FUNCTION 14125ac64 FUN_14125ac64 body=412 status=ok
// SIG undefined FUN_14125ac64(void)

undefined8 FUN_14125ac64(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  int local_4c;
  longlong local_48 [2];
  undefined2 *local_38;
  int local_30;
  undefined1 local_28 [4];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_3 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_3;
  }
  FUN_1446f470e(local_28,puVar6,1);
  uVar4 = FUN_1447addd0(param_2,0x10);
  FUN_140002266(local_48,L"%016llx",uVar4);
  FUN_14029eeae(local_28);
  iVar1 = (int)local_60;
  iVar3 = ((int)local_60 == 0) + 1;
  local_58 = local_68;
  local_68 = 0;
  local_50 = (int)local_60;
  iVar2 = local_60._4_4_;
  local_4c = local_60._4_4_;
  local_60 = 0;
  iVar5 = iVar3 + iVar1;
  if (iVar5 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (iVar2 < iVar5) {
    FUN_1446f8c06(&local_58);
  }
  FUN_1400020e8(&local_58,&DAT_149e01f60,1);
  FUN_1401c7f3e(&local_38,&local_58,local_48);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  puVar6 = local_38;
  if (local_30 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_14495448a(local_48,puVar6,local_24);
  FUN_1400021e4(local_48,param_1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14125ae02 FUN_14125ae02 body=200 status=ok
// SIG undefined FUN_14125ae02(void)

void FUN_14125ae02(ulonglong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (DAT_14cacd610 != DAT_14cacd63c) {
    uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    puVar5 = &DAT_14cacd640;
    if (DAT_14cacd648 != (undefined *)0x0) {
      puVar5 = DAT_14cacd648;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)(DAT_14cacd650 - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    while (iVar2 != -1) {
      puVar1 = (ulonglong *)(DAT_14cacd608 + (longlong)iVar2 * 0x18);
      if (*puVar1 == param_1) {
        if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
          return;
        }
        plVar3 = (longlong *)puVar1[1];
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3,1);
        }
        FUN_14585e394(&DAT_14cacd608,param_1);
        return;
      }
      iVar2 = (int)puVar1[2];
    }
  }
  return;
}



// FUNCTION 14125aeca FUN_14125aeca body=297 status=ok
// SIG undefined FUN_14125aeca(void)

undefined8 FUN_14125aeca(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14125afec;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14125afec;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_14125afec:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14125af97;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_14125af97;
    }
  }
  uVar6 = 0;
LAB_14125af97:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125aff4 FUN_14125aff4 body=669 status=ok
// SIG undefined FUN_14125aff4(void)

void FUN_14125aff4(undefined8 param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  longlong **pplVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  longlong *local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined1 local_154;
  longlong *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  longlong *local_140;
  undefined4 local_138;
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined1 local_e4;
  undefined8 local_d4;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (param_2 == 0 || param_3 != '\0') goto LAB_14125b228;
  FUN_14125b2cc();
  puVar9 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(param_2 + 8);
  }
  FUN_1447325ac(puVar9,&local_170,1);
  local_160 = SUB84(local_170,0);
  uStack_15c = (undefined4)((ulonglong)local_170 >> 0x20);
  cVar4 = FUN_14125b594(param_1);
  if (cVar4 != '\0') goto LAB_14125b228;
  lVar5 = FUN_140f5ab1e(param_2);
  if (lVar5 == 0) {
LAB_14125b25e:
    plVar10 = (longlong *)FUN_140e82300();
  }
  else {
    lVar5 = FUN_140f5ab1e(param_2);
    uVar6 = FUN_14125b292();
    cVar4 = FUN_1448093f4(lVar5,uVar6);
    if ((cVar4 == '\0') || (lVar5 == 0)) goto LAB_14125b25e;
    plVar10 = (longlong *)(lVar5 + 0x18);
  }
  plVar1 = (longlong *)*plVar10;
  local_170 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  local_168 = (undefined4)plVar10[1];
  cVar4 = FUN_144a7c5f6(&local_170);
  if (cVar4 == '\0') {
    FUN_1446ddc76(local_178,"location_entered",1);
    FUN_1446dcdd4(&local_160,local_178);
    puVar7 = (undefined1 *)FUN_1412095fe(&local_160);
    if (CONCAT44(uStack_144,local_148) != 0) {
      FUN_1400020a8();
    }
    if (puVar7 != (undefined1 *)0x0) {
      FUN_1412099d2(param_1,&DAT_14cbd5aa8);
      FUN_14125b7f0(&local_160);
      uStack_15c = (undefined4)*(undefined8 *)(puVar7 + 100);
      uStack_158 = (undefined4)((ulonglong)*(undefined8 *)(puVar7 + 100) >> 0x20);
      cVar4 = FUN_144a7c5f6(&local_170);
      plVar10 = local_150;
      pplVar8 = (longlong **)(puVar7 + 0x28);
      if (cVar4 == '\0') {
        pplVar8 = &local_170;
      }
      plVar2 = *pplVar8;
      if (local_150 != plVar2) {
        local_150 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      plVar10 = local_140;
      puVar3 = auStack_198;
      if (cVar4 != '\0') {
        puVar3 = puVar7;
      }
      local_148 = *(undefined4 *)(puVar3 + 0x30);
      plVar2 = *(longlong **)(puVar7 + 0x18);
      if (local_140 != plVar2) {
        local_140 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      local_138 = *(undefined4 *)(puVar7 + 0x20);
      local_d4 = *(undefined8 *)(puVar7 + 0xe4);
      local_e4 = puVar7[0xd8];
      local_e8 = *(undefined4 *)(puVar7 + 0xdc);
      local_154 = puVar7[0x60];
      FUN_144a787a6(local_f8,puVar7 + 200);
      FUN_14120969a(param_1,local_178,&local_160);
      FUN_140989dc4(&local_160);
    }
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_14125b228:
  if ((local_40 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125b292 FUN_14125b292 body=57 status=ok
// SIG undefined FUN_14125b292(void)

void FUN_14125b292(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9be0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9be0 = FUN_140002ddd(FUN_1465d57ee,uVar1,L"OakUIDisplayDataDef_UILocation");
  }
  return;
}



// FUNCTION 14125b2cc FUN_14125b2cc body=573 status=ok
// SIG undefined FUN_14125b2cc(void)

void FUN_14125b2cc(longlong *param_1)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  
  lVar5 = (**(code **)(*param_1 + 0x180))();
  if (lVar5 != 0) {
    lVar6 = FUN_1402735c8();
    dVar2 = *(double *)(lVar6 + 0xab0);
    dVar3 = *(double *)(lVar5 + 0x6d0);
    iVar4 = (int)param_1[0x2c];
    if (iVar4 == 0) {
      uVar16 = 1;
      uVar18 = 0;
      iVar13 = 0;
      iVar14 = 0;
    }
    else {
      puVar12 = (uint *)param_1[0x2b];
      if ((uint *)param_1[0x2b] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 0x29);
      }
      uVar17 = *puVar12;
      if (uVar17 == 0) {
        iVar13 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar13 = iVar4 + -1;
        }
        uVar18 = 0;
        uVar16 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar16 = uVar18;
        }
        iVar14 = 0;
        do {
          if (uVar16 == uVar18) {
            return;
          }
          iVar14 = iVar14 + 0x20;
          uVar17 = puVar12[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar18 = 0;
        iVar14 = 0;
      }
      uVar16 = (ulonglong)(-uVar17 & uVar17);
      uVar1 = uVar16 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar13 = (iVar14 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar13) {
        iVar13 = iVar4;
      }
    }
    if (iVar13 < iVar4) {
      uVar17 = 0xffffffff;
      do {
        lVar5 = param_1[0x27];
        lVar6 = (longlong)iVar13;
        if (*(double *)(lVar5 + 8 + lVar6 * 0x18) + dVar2 < dVar3) {
          plVar7 = (longlong *)param_1[0x2f];
          if ((longlong *)param_1[0x2f] == (longlong *)0x0) {
            plVar7 = param_1 + 0x2e;
          }
          lVar15 = (longlong)*(int *)(lVar5 + 0x14 + lVar6 * 0x18);
          iVar4 = *(int *)((longlong)plVar7 + lVar15 * 4);
          if (iVar4 == iVar13) {
            piVar8 = (int *)((longlong)plVar7 + lVar15 * 4);
          }
          else {
            do {
              piVar8 = (int *)(lVar5 + (longlong)iVar4 * 0x18 + 0x10);
              iVar4 = *piVar8;
            } while (iVar4 != iVar13);
          }
          *piVar8 = *(int *)(lVar5 + lVar6 * 0x18 + 0x10);
          FUN_14125b50a(param_1 + 0x27,iVar13,1);
          iVar4 = (int)param_1[0x2c];
        }
        uVar17 = uVar17 & ~(uint)uVar16;
        puVar12 = (uint *)param_1[0x2b];
        if ((uint *)param_1[0x2b] == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 0x29);
        }
        iVar13 = (int)uVar18;
        lVar5 = (longlong)iVar13;
        uVar9 = puVar12[lVar5] & uVar17;
        if (uVar9 == 0) {
          iVar10 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar10 = iVar4 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar11 = iVar10;
          if (iVar10 < iVar13) {
            iVar11 = iVar13;
          }
          if (iVar10 <= iVar13) {
            return;
          }
          lVar6 = 0;
          while( true ) {
            iVar14 = iVar14 + 0x20;
            uVar9 = puVar12[lVar5 + lVar6 + 1];
            if (uVar9 != 0) break;
            lVar6 = lVar6 + 1;
            if (iVar11 - lVar5 == lVar6) {
              return;
            }
          }
          uVar18 = (ulonglong)(iVar13 + (int)lVar6 + 1);
          uVar17 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar16 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar13 = (iVar14 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
      } while (iVar13 < iVar4);
    }
  }
  return;
}



// FUNCTION 14125b50a FUN_14125b50a body=138 status=ok
// SIG undefined FUN_14125b50a(void)

void FUN_14125b50a(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14125b594 FUN_14125b594 body=603 status=ok
// SIG undefined FUN_14125b594(void)

ulonglong FUN_14125b594(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  undefined8 unaff_RSI;
  ulonglong uVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int local_90 [2];
  longlong *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = (**(code **)(*param_1 + 0x180))();
  uVar12 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (lVar6 != 0) {
    lVar7 = FUN_1402735c8();
    dVar2 = *(double *)(lVar7 + 0xab0);
    dVar3 = *(double *)(lVar6 + 0x6d0);
    plVar1 = param_1 + 0x27;
    lVar6 = *param_2;
    uVar11 = (uint)((ulonglong)lVar6 >> 0x10);
    uVar5 = (uint)lVar6 & 0xffff;
    uVar11 = ((uint)lVar6 << 0x10 | uVar5) + (int)((ulonglong)lVar6 >> 0x20) +
             (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar5 >> 4);
    if ((int)param_1[0x28] != *(int *)((longlong)param_1 + 0x16c)) {
      plVar8 = param_1 + 0x2e;
      if ((longlong *)param_1[0x2f] != (longlong *)0x0) {
        plVar8 = (longlong *)param_1[0x2f];
      }
      iVar10 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[0x30] - 1U & uVar11) * 4);
      if (iVar10 != -1) {
        do {
          plVar8 = (longlong *)(*plVar1 + (longlong)iVar10 * 0x18);
          if (*plVar8 == lVar6) {
            if (plVar8 != (longlong *)0x0) goto LAB_14125b773;
            break;
          }
          iVar10 = (int)plVar8[2];
        } while (iVar10 != -1);
      }
    }
    FUN_1418f55a4(plVar1,local_90);
    *local_88 = *param_2;
    local_88[1] = (longlong)-dVar2;
    *(undefined4 *)(local_88 + 2) = 0xffffffff;
    local_98 = 0;
    cVar4 = FUN_144264492(plVar1,uVar11,local_88,local_90);
    if (cVar4 == '\0') {
      uVar5 = (int)param_1[0x28] - *(int *)((longlong)param_1 + 0x16c);
      iVar10 = 1;
      if (3 < uVar5) {
        uVar9 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
        lVar6 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((int)uVar5 < 1) || (iVar10 <= (int)param_1[0x30])) {
        uVar11 = (int)param_1[0x30] - 1U & uVar11;
        *(uint *)((longlong)local_88 + 0x14) = uVar11;
        plVar8 = (longlong *)param_1[0x2f];
        if ((longlong *)param_1[0x2f] == (longlong *)0x0) {
          plVar8 = param_1 + 0x2e;
        }
        *(undefined4 *)(local_88 + 2) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)param_1[0x30] - 1U & (longlong)(int)uVar11) * 4);
        plVar8 = (longlong *)param_1[0x2f];
        if ((longlong *)param_1[0x2f] == (longlong *)0x0) {
          plVar8 = param_1 + 0x2e;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)param_1[0x30] - 1U & (longlong)(int)uVar11) * 4)
             = local_90[0];
      }
      else {
        *(int *)(param_1 + 0x30) = iVar10;
        FUN_14663cb78(plVar1);
      }
    }
    plVar8 = (longlong *)(*plVar1 + (longlong)local_90[0] * 0x18);
LAB_14125b773:
    if (dVar2 + (double)plVar8[1] <= dVar3) {
      plVar8[1] = (longlong)dVar3;
      uVar12 = 0;
    }
  }
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 14125b7f0 FUN_14125b7f0 body=1271 status=ok
// SIG undefined FUN_14125b7f0(void)

undefined4 * FUN_14125b7f0(undefined4 *param_1)

{
  longlong *plVar1;
  
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 1) = DAT_14cbd5a28;
  *(undefined1 *)(param_1 + 3) = 2;
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
  *(longlong **)(param_1 + 4) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[6] = DAT_14c844848;
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
  *(longlong **)(param_1 + 8) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[10] = DAT_14c844848;
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
  *(longlong **)(param_1 + 0xc) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[0xe] = DAT_14c844848;
  FUN_1446f470e(param_1 + 0x10,&DAT_149dfb77a,1);
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
  *(longlong **)(param_1 + 0x12) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[0x14] = DAT_14c844848;
  FUN_140056680(param_1 + 0x16,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x1a,&DAT_149dfb77a);
  param_1[0x1e] = 0x40c00000;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  FUN_1446f470e(param_1 + 0x20,&DAT_149dfb77a,1);
  *(undefined1 *)(param_1 + 0x22) = 1;
  FUN_1446f470e(param_1 + 0x23,&DAT_149dfb77a,1);
  *(undefined2 *)(param_1 + 0x25) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
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
  *(longlong **)(param_1 + 0x2c) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[0x2e] = DAT_14c844848;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_140056680(param_1 + 0x34,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_140056680(param_1 + 0x3a,&DAT_149dfb77a);
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_140056680(param_1 + 0x42,&DAT_149dfb77a);
  *(undefined2 *)(param_1 + 0x46) = 0;
  return param_1;
}



// FUNCTION 14125bce8 FUN_14125bce8 body=102 status=ok
// SIG undefined FUN_14125bce8(void)

void FUN_14125bce8(undefined8 *param_1,void *param_2,int param_3,int param_4,int param_5)

{
  *(int *)(param_1 + 1) = param_3;
  if ((param_4 == 0 && param_3 == 0) && param_5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    if (param_5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_5 + param_3);
    }
    FUN_1446dd670(param_1,param_5 + param_3,param_4);
    if (param_3 != 0) {
      memcpy((void *)*param_1,param_2,(longlong)param_3 * 2);
      return;
    }
  }
  return;
}



// FUNCTION 14125bd50 FUN_14125bd50 body=204 status=ok
// SIG undefined FUN_14125bd50(void)

longlong * FUN_14125bd50(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_141208f3a(&local_50);
    lVar3 = local_50;
    if ((longlong)local_48 != 0) {
      lVar5 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar3 + lVar5);
        cVar4 = FUN_14125be1e(param_2,uVar2);
        if (cVar4 != '\0') {
          iVar1 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_14585e824(param_1,iVar1);
          }
          *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)local_48 * 8 != lVar5);
    }
    if (local_50 != 0) {
      FUN_1400020a8(local_50);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14125be1e FUN_14125be1e body=131 status=ok
// SIG undefined FUN_14125be1e(void)

undefined8 FUN_14125be1e(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar2 = (longlong *)FUN_14410ad36();
  if (param_2 != 0 && plVar2 != (longlong *)0x0) {
    if ((char)plVar2[0x657] == '\0') {
      FUN_1441ecf52(plVar2);
    }
    lVar3 = (**(code **)(*plVar2 + 0x14d0))(plVar2);
    if (lVar3 != 0) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x14d0))();
                    /* WARNING: Could not recover jumptable at 0x00014125be87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2 + 0x90,*(code **)(*plVar2 + 0x48));
      return uVar4;
    }
    cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14125bea2 FUN_14125bea2 body=260 status=ok
// SIG undefined FUN_14125bea2(void)

void FUN_14125bea2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [36];
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined1 local_68 [40];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_2[1] != 0) {
    lVar2 = FUN_140059518(param_1 + 0x44);
    if (lVar2 != 0) {
      lVar3 = FUN_14030d4a0();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar2 = FUN_140cee904(lVar2);
        if ((lVar2 != 0) && (lVar3 = param_2[1], (longlong)(int)lVar3 != 0)) {
          lVar1 = *param_2;
          lVar4 = 0;
          do {
            if (*(longlong *)(lVar1 + lVar4) != 0) {
              FUN_1446dcdd4(local_68,*(longlong *)(lVar1 + lVar4) + 0x38);
              local_70 = 0;
              FUN_14052b5e0(local_74,&DAT_14b9b09b2,0);
              FUN_14125bfa8(lVar2,local_74,local_68,1);
            }
            lVar4 = lVar4 + 8;
          } while ((longlong)(int)lVar3 * 8 != lVar4);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125bfa8 FUN_14125bfa8 body=581 status=ok
// SIG undefined FUN_14125bfa8(void)

void FUN_14125bfa8(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  PSRWLOCK SRWLock;
  ushort uVar1;
  ushort uVar2;
  void *_Src;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  void *local_68;
  ulonglong uStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140056680(&local_58,&DAT_149dfb77a);
  if (param_4 != '\0') {
    plVar3 = (longlong *)FUN_140defa54(param_1);
    lVar5 = *plVar3;
    SRWLock = (PSRWLOCK)(lVar5 + 0x28);
    AcquireSRWLockShared(SRWLock);
    FUN_1407156ca(lVar5,&local_68,param_2,param_3);
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_58 = local_68;
    uStack_50 = uStack_60;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    ReleaseSRWLockShared(SRWLock);
    plVar3 = *(longlong **)(param_1 + 0x58);
    lVar5 = (longlong)*(int *)(param_1 + 0x60);
    if (lVar5 != 0) {
      plVar6 = plVar3;
LAB_14125c146:
      if ((int)plVar6[1] == (int)uStack_50) {
        if (1 < (int)uStack_50) {
          lVar7 = 0;
          do {
            uVar1 = *(ushort *)(*plVar6 + lVar7);
            uVar2 = *(ushort *)((longlong)local_58 + lVar7);
            if (uVar1 == uVar2) {
              if (uVar1 == 0) break;
            }
            else {
              if (0x7f < (uVar2 | uVar1)) {
                iVar8 = (uint)uVar1 - (uint)uVar2;
                goto LAB_14125c1ac;
              }
              if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
              goto code_r0x00014125c1a9;
            }
            lVar7 = lVar7 + 2;
          } while( true );
        }
      }
      else if ((int)plVar6[1] + (int)uStack_50 != 1) goto LAB_14125c157;
      goto LAB_14125c0f6;
    }
LAB_14125c059:
    uVar4 = *(int *)(param_1 + 0x60) + 1;
    *(uint *)(param_1 + 0x60) = uVar4;
    if (*(uint *)(param_1 + 100) < uVar4) {
      FUN_1447a1bd6((undefined8 *)(param_1 + 0x58));
      plVar3 = *(longlong **)(param_1 + 0x58);
    }
    _Src = local_58;
    plVar6 = plVar3 + lVar5 * 2;
    plVar3[lVar5 * 2] = 0;
    lVar7 = (longlong)(int)uStack_50;
    *(int *)(plVar3 + lVar5 * 2 + 1) = (int)uStack_50;
    if (lVar7 == 0) {
      *(undefined4 *)((longlong)plVar6 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(plVar6,uStack_50 & 0xffffffff,0);
      memcpy((void *)*plVar6,_Src,lVar7 * 2);
    }
  }
  plVar3 = (longlong *)FUN_140defa54(param_1);
  lVar5 = *plVar3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x28));
  *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
  FUN_140ceeb1e(lVar5,param_2,param_3);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x28));
  FUN_140ceeb80(param_1);
LAB_14125c0f6:
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_3 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014125c1a9:
  iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_14125c1ac:
  if (iVar8 == 0) goto LAB_14125c0f6;
LAB_14125c157:
  plVar6 = plVar6 + 2;
  if (plVar6 == plVar3 + lVar5 * 2) goto LAB_14125c059;
  goto LAB_14125c146;
}



// FUNCTION 14125c1ee FUN_14125c1ee body=241 status=ok
// SIG undefined FUN_14125c1ee(void)

longlong * FUN_14125c1ee(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_20[1] = (longlong)&DAT_100000001;
  *local_20 = (longlong)&PTR_FUN_14b418f30;
  local_28 = local_20 + 2;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  local_20[8] = 0;
  local_20[9] = 0;
  local_20[10] = 0;
  local_20[0xb] = 0;
  local_20[0xc] = 0;
  local_20[0xd] = 0;
  local_20[2] = (longlong)&PTR_FUN_14b418200;
  local_20[0xe] = 0;
  local_20[0xf] = 0;
  local_20[0x10] = 0;
  local_20[0x11] = 0;
  local_20[0x12] = 0;
  FUN_14125c2e0(&local_28);
  plVar3 = local_20;
  *param_2 = (longlong)local_28;
  param_2[1] = (longlong)local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125c2e0 FUN_14125c2e0 body=162 status=ok
// SIG undefined FUN_14125c2e0(void)

void FUN_14125c2e0(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14125c31f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14125c31f;
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
LAB_14125c31f:
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
                    /* WARNING: Could not recover jumptable at 0x00014125c37e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14125c382 FUN_14125c382 body=462 status=ok
// SIG undefined FUN_14125c382(void)

undefined8 * FUN_14125c382(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ae799c0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  if (param_1[0x93] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  if (*(int *)((longlong)param_1 + 0x464) != 0) {
    FUN_1405357e8(param_1 + 0x8b,0);
  }
  param_1[0x91] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x484)) {
    *(undefined4 *)((longlong)param_1 + 0x484) = 0x80;
    FUN_1446efbd8(param_1 + 0x8d,0);
  }
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x86] != 0) {
    (**(code **)(*(longlong *)param_1[0x87] + 0x10))();
  }
  FUN_1447af2f2(param_1[0x84],*(undefined4 *)(param_1 + 0x85));
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_14125c550(param_1 + 0x72);
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14125c550 FUN_14125c550 body=55 status=ok
// SIG undefined FUN_14125c550(void)

void FUN_14125c550(longlong *param_1)

{
  FUN_14125c588(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14125c588 FUN_14125c588 body=123 status=ok
// SIG undefined FUN_14125c588(void)

void FUN_14125c588(longlong param_1,int param_2)

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



// FUNCTION 14125c604 FUN_14125c604 body=486 status=ok
// SIG undefined FUN_14125c604(void)

undefined8 * FUN_14125c604(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x200000000;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbf) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb7) = 0;
  param_1[0x18] = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 2;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x23] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf1) = 0;
  *param_1 = &PTR_FUN_14b603e90;
  *(undefined1 *)((longlong)param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_14125c7ea(param_1 + 0x31);
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a9) = 0x1010001;
  *(undefined1 *)((longlong)param_1 + 0x2ad) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x56] = DAT_14c8464e0;
  param_1[0x57] = uVar1;
  param_1[0x58] = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0x59) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2ca) = 0;
  param_1[0x5a] = 0;
  *(undefined2 *)(param_1 + 0x5e) = 0x18;
  uVar1 = DAT_14c846500;
  param_1[0x5b] = DAT_14c8464f8;
  param_1[0x5c] = uVar1;
  param_1[0x5d] = DAT_14c846508;
  *(undefined1 *)(param_1 + 0x5f) = 5;
  *(char *)(param_1 + 0x60) = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  *(undefined2 *)(param_1 + 0x61) = 0x100;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x365) = 0;
  *(undefined2 *)((longlong)param_1 + 0x36d) = 1;
  *(undefined1 *)((longlong)param_1 + 0x36f) = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined1 *)((longlong)param_1 + 0x394) = 0;
  return param_1;
}



// FUNCTION 14125c7ea FUN_14125c7ea body=243 status=ok
// SIG undefined FUN_14125c7ea(void)

undefined8 * FUN_14125c7ea(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  param_1[2] = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  param_1[3] = uVar1;
  param_1[4] = DAT_14cb1c870;
  uVar1 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  param_1[5] = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  param_1[6] = uVar1;
  param_1[7] = DAT_14cb1c870;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  uVar1 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  param_1[0xb] = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  param_1[0xc] = uVar1;
  param_1[0xd] = DAT_14cb1c870;
  uVar1 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  param_1[0xe] = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  param_1[0xf] = uVar1;
  param_1[0x10] = DAT_14cb1c870;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  param_1[0x14] = 0;
  param_1[0x17] = DAT_14cb1c870;
  uVar1 = CONCAT44(DAT_14cb1c868._4_4_,(undefined4)DAT_14cb1c868);
  param_1[0x15] = CONCAT44(DAT_14cb1c860._4_4_,(undefined4)DAT_14cb1c860);
  param_1[0x16] = uVar1;
  uVar4 = DAT_14cb1c868._4_4_;
  uVar3 = (undefined4)DAT_14cb1c868;
  uVar2 = DAT_14cb1c860._4_4_;
  *(undefined4 *)(param_1 + 0x18) = (undefined4)DAT_14cb1c860;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar2;
  *(undefined4 *)(param_1 + 0x19) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar4;
  param_1[0x1a] = DAT_14cb1c870;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  param_1[0x1e] = 0;
  FUN_140383416(param_1);
  return param_1;
}



// FUNCTION 14125c8e6 FUN_14125c8e6 body=346 status=ok
// SIG undefined FUN_14125c8e6(void)

undefined8 * FUN_14125c8e6(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14125ca42();
  *param_1 = &PTR_FUN_14b747cf0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd12) = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd39) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd41) = 0;
  FUN_1400b22c2(&local_88,"/Script/OakGame.OakDrone");
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_50 = local_88;
  local_48 = local_80 + -1;
  if (local_80 == 0) {
    local_48 = 0;
  }
  FUN_14475bf92(&local_78);
  _Src = local_68;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = (undefined4)local_78;
  *(undefined4 *)((longlong)param_1 + 0x9c) = local_78._4_4_;
  *(undefined4 *)(param_1 + 0x14) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_70._4_4_;
  ppvVar1 = (void **)(param_1 + 0x15);
  if (ppvVar1 != &local_68) {
    iVar2 = (int)uStack_60;
    lVar3 = (longlong)(int)uStack_60;
    *(int *)(param_1 + 0x16) = (int)uStack_60;
    if ((int)uStack_60 == 0 && *(int *)((longlong)param_1 + 0xb4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_60 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  *(byte *)(param_1 + 0x19f) = *(byte *)(param_1 + 0x19f) & 0xfe;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125ca42 FUN_14125ca42 body=1471 status=ok
// SIG undefined FUN_14125ca42(void)

undefined8 * FUN_14125ca42(undefined8 *param_1)

{
  void **ppvVar1;
  char cVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  ulonglong uStack_60;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140c511d6();
  *param_1 = &PTR_FUN_14b141360;
  *(undefined2 *)(param_1 + 0xde) = 0x200;
  *(undefined1 *)((longlong)param_1 + 0x6f2) = 0;
  param_1[0xdf] = 0;
  *(undefined2 *)(param_1 + 0xe3) = 4;
  *(undefined4 *)(param_1 + 0xe0) = 0x41000000;
  *(undefined1 *)(param_1 + 0xe4) = 3;
  cVar2 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0xe5) = cVar2;
  param_1[0xe6] = 0;
  *(undefined2 *)(param_1 + 0xea) = 4;
  *(undefined4 *)(param_1 + 0xe7) = 0x442f0000;
  *(undefined1 *)(param_1 + 0xeb) = 3;
  *(char *)(param_1 + 0xec) = cVar2;
  param_1[0xed] = 0;
  *(undefined2 *)(param_1 + 0xf1) = 4;
  *(undefined4 *)(param_1 + 0xee) = 0x42480000;
  *(undefined1 *)(param_1 + 0xf2) = 3;
  *(char *)(param_1 + 0xf3) = cVar2;
  param_1[0xf4] = 0;
  *(undefined2 *)(param_1 + 0xf8) = 4;
  *(undefined4 *)(param_1 + 0xf5) = 0x3f000000;
  *(undefined1 *)(param_1 + 0xf9) = 3;
  *(char *)(param_1 + 0xfa) = cVar2;
  param_1[0xfb] = 0;
  *(undefined2 *)(param_1 + 0xff) = 8;
  param_1[0xfc] = 0x4248000043480000;
  *(undefined1 *)(param_1 + 0x100) = 0xb;
  uVar5 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar5 = 0xb;
  }
  *(undefined1 *)(param_1 + 0x101) = uVar5;
  param_1[0x102] = 0;
  *(undefined2 *)(param_1 + 0x106) = 8;
  param_1[0x103] = 0x4248000043480000;
  *(undefined1 *)(param_1 + 0x107) = 0xb;
  uVar5 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar5 = 0xb;
  }
  *(undefined1 *)(param_1 + 0x108) = uVar5;
  param_1[0x109] = 0;
  *(undefined2 *)(param_1 + 0x10d) = 8;
  param_1[0x10a] = 0x42b40000c2b40000;
  *(undefined1 *)(param_1 + 0x10e) = 0xb;
  uVar5 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar5 = 0xb;
  }
  *(undefined1 *)(param_1 + 0x10f) = uVar5;
  *(undefined1 *)(param_1 + 0x110) = 0;
  param_1[0x11c] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  *(undefined1 *)(param_1 + 0x11b) = 0;
  *(undefined2 *)(param_1 + 0x120) = 4;
  *(undefined4 *)(param_1 + 0x11d) = 0x40400000;
  *(undefined1 *)(param_1 + 0x121) = 3;
  *(char *)(param_1 + 0x122) = cVar2;
  param_1[0x123] = 0;
  *(undefined2 *)(param_1 + 0x127) = 4;
  *(undefined4 *)(param_1 + 0x124) = 0x42480000;
  *(undefined1 *)(param_1 + 0x128) = 3;
  *(char *)(param_1 + 0x129) = cVar2;
  param_1[0x12a] = 0;
  *(undefined2 *)(param_1 + 0x12e) = 4;
  *(undefined4 *)(param_1 + 299) = 0x43160000;
  *(undefined1 *)(param_1 + 0x12f) = 3;
  *(char *)(param_1 + 0x130) = cVar2;
  *(undefined2 *)(param_1 + 0x131) = 0x200;
  *(undefined1 *)((longlong)param_1 + 0x98a) = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  *(undefined2 *)(param_1 + 0x139) = 4;
  *(undefined4 *)(param_1 + 0x136) = 0x42480000;
  *(undefined1 *)(param_1 + 0x13a) = 3;
  *(char *)(param_1 + 0x13b) = cVar2;
  *(undefined1 *)(param_1 + 0x13c) = 1;
  param_1[0x13d] = 0;
  *(undefined2 *)(param_1 + 0x141) = 4;
  *(undefined4 *)(param_1 + 0x13e) = 0x40200000;
  *(undefined1 *)(param_1 + 0x142) = 3;
  *(char *)(param_1 + 0x143) = cVar2;
  param_1[0x144] = 0;
  *(undefined2 *)(param_1 + 0x148) = 8;
  param_1[0x145] = 0x4248000043480000;
  *(undefined1 *)(param_1 + 0x149) = 0xb;
  uVar5 = 0;
  if ((DAT_14c9a9174 & 0x20) == 0) {
    uVar5 = 0xb;
  }
  *(undefined1 *)(param_1 + 0x14a) = uVar5;
  param_1[0x14b] = 0;
  *(undefined2 *)(param_1 + 0x14f) = 8;
  param_1[0x14c] = 0x4248000043480000;
  *(undefined1 *)(param_1 + 0x150) = 0xb;
  uVar5 = 0xb;
  if ((DAT_14c9a9174 & 0x20) != 0) {
    uVar5 = 0;
  }
  *(undefined1 *)(param_1 + 0x151) = uVar5;
  param_1[0x152] = 0;
  *(undefined2 *)(param_1 + 0x156) = 4;
  *(undefined4 *)(param_1 + 0x153) = 0x42480000;
  *(undefined1 *)(param_1 + 0x157) = 3;
  *(char *)(param_1 + 0x158) = cVar2;
  param_1[0x159] = 0;
  *(undefined2 *)(param_1 + 0x15d) = 4;
  *(undefined4 *)(param_1 + 0x15a) = 0x42480000;
  *(undefined1 *)(param_1 + 0x15e) = 3;
  *(char *)(param_1 + 0x15f) = cVar2;
  *(undefined2 *)(param_1 + 0x160) = 0;
  param_1[0x161] = 0;
  *(undefined2 *)(param_1 + 0x165) = 4;
  *(undefined4 *)(param_1 + 0x162) = 0x42480000;
  *(undefined1 *)(param_1 + 0x166) = 3;
  *(char *)(param_1 + 0x167) = cVar2;
  *(undefined1 *)(param_1 + 0x168) = 0;
  param_1[0x169] = 0;
  *(undefined2 *)(param_1 + 0x16d) = 4;
  *(undefined4 *)(param_1 + 0x16a) = 0x40a00000;
  *(undefined1 *)(param_1 + 0x16e) = 3;
  *(char *)(param_1 + 0x16f) = cVar2;
  *(undefined1 *)(param_1 + 0x170) = 0;
  param_1[0x171] = 0;
  *(undefined2 *)(param_1 + 0x175) = 4;
  *(undefined4 *)(param_1 + 0x172) = 0x42480000;
  *(undefined1 *)(param_1 + 0x176) = 3;
  *(char *)(param_1 + 0x177) = cVar2;
  *(undefined1 *)(param_1 + 0x178) = 0;
  param_1[0x179] = 0;
  *(undefined2 *)(param_1 + 0x17d) = 4;
  *(undefined4 *)(param_1 + 0x17a) = 0x40a00000;
  *(undefined1 *)(param_1 + 0x17e) = 3;
  *(char *)(param_1 + 0x17f) = cVar2;
  *(undefined4 *)(param_1 + 0x180) = 0x10100;
  *(undefined1 *)((longlong)param_1 + 0xc04) = 1;
  *(undefined4 *)(param_1 + 0x181) = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  *(undefined4 *)(param_1 + 0x188) = 0xf00000d0;
  param_1[0x189] = 0;
  *(undefined4 *)(param_1 + 0x18a) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x18b) = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  *(undefined4 *)(param_1 + 0x192) = 0x1001f;
  param_1[0x197] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  param_1[0x198] = &PTR_FUN_14affcd20;
  *(undefined1 *)(param_1 + 0x199) = 0;
  param_1[0x19e] = 0;
  param_1[0x19c] = 0;
  param_1[0x19d] = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0;
  FUN_1400b22c2(&local_88,"/Script/GbxGame.GbxDrone");
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_50 = local_88;
  local_48 = local_80 + -1;
  if (local_80 == 0) {
    local_48 = 0;
  }
  FUN_14475bf92(&local_78);
  _Src = local_68;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = (undefined4)local_78;
  *(undefined4 *)((longlong)param_1 + 0x9c) = local_78._4_4_;
  *(undefined4 *)(param_1 + 0x14) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_70._4_4_;
  ppvVar1 = (void **)(param_1 + 0x15);
  if (ppvVar1 != &local_68) {
    iVar3 = (int)uStack_60;
    lVar4 = (longlong)(int)uStack_60;
    *(int *)(param_1 + 0x16) = (int)uStack_60;
    if ((int)uStack_60 == 0 && *(int *)((longlong)param_1 + 0xb4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_60 & 0xffffffff);
      if (iVar3 != 0) {
        memcpy(*ppvVar1,_Src,lVar4 * 2);
      }
    }
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) | 5;
  *(undefined2 *)((longlong)param_1 + 0xba) = 0;
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 1;
  *(undefined2 *)((longlong)param_1 + 0x3e9) = 0x101;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125d002 FUN_14125d002 body=140 status=ok
// SIG undefined FUN_14125d002(void)

void FUN_14125d002(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a8bd110;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1525(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 1;
  if (*(int *)(param_1 + 2) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14125d08e FUN_14125d08e body=792 status=ok
// SIG undefined FUN_14125d08e(void)

void FUN_14125d08e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_14125d3a8(local_20,local_28);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125d3a8 FUN_14125d3a8 body=362 status=ok
// SIG undefined FUN_14125d3a8(void)

undefined4 FUN_14125d3a8(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 ****ppppuVar4;
  undefined1 auStack_d8 [32];
  char local_b8 [16];
  longlong *local_a8;
  undefined4 local_90 [2];
  undefined1 local_88 [8];
  undefined8 ***local_80 [3];
  ushort local_68;
  byte local_60;
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_141001a28(local_88,param_1,param_2);
  local_b8[0] = '\0';
  local_90[0] = 0;
  FUN_1456bb102(local_b8,param_1);
  FUN_1447c3578(local_88,local_50,local_b8);
  uVar3 = FUN_1405d5f74(local_50);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar4 = local_50;
    if (0x18 < local_38) {
      ppppuVar4 = (undefined8 ****)local_50[0];
    }
    (*pcVar2)(ppppuVar4);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_1448173f8(local_90);
  if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_60 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar4 = (undefined8 ****)local_80[0];
    if (local_68 < 0x19) {
      ppppuVar4 = local_80;
    }
    (*pcVar2)(ppppuVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(local_80[0]);
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14125d51e FUN_14125d51e body=373 status=ok
// SIG undefined FUN_14125d51e(void)

undefined8 * FUN_14125d51e(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  uint local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  undefined8 local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140312256();
  *param_1 = &PTR_FUN_14aac9a60;
  FUN_1446f470e(&local_28,L"SceneComp",1);
  if (DAT_14cac7648 == 0) {
    local_40 = &local_20;
    local_20 = FUN_144a7958c;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_143242436;
    local_48 = &LAB_14789ef1f;
    local_50 = &LAB_1417b008f;
    local_58 = L"Engine";
    local_60 = 0x8000000000;
    local_68 = 0x10000004;
    local_70 = 0x10;
    local_78 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  local_70 = local_70 & 0xffffff00;
  local_78 = CONCAT31(local_78._1_3_,1);
  lVar1 = FUN_14048696c(param_1,local_28,DAT_14cac7648,DAT_14cac7648);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x39] = lVar1;
  FUN_1405bab3a(param_1,1);
  FUN_1403121a6(param_1,0);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125d694 FUN_14125d694 body=157 status=ok
// SIG undefined FUN_14125d694(void)

undefined8 * FUN_14125d694(longlong param_1,undefined8 *param_2,longlong param_3)

{
  float *pfVar1;
  uint uVar2;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  float local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14125d732(param_1,local_60);
  param_2[2] = local_38;
  *param_2 = local_48;
  param_2[1] = uStack_40;
  pfVar1 = (float *)(param_3 + 0x48);
  if (*(char *)(param_1 + 0x14) != '\0') {
    pfVar1 = (float *)(param_1 + 0x10);
  }
  uVar2 = -(uint)(*pfVar1 != 0.0);
  *(uint *)(param_2 + 3) = ~uVar2 & 0x3f800000 | (uint)(local_30 / *pfVar1) & uVar2;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125d732 FUN_14125d732 body=3077 status=ok
// SIG undefined FUN_14125d732(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14125d732(float *param_1,longlong param_2,double *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_1a8 [32];
  float local_188;
  float local_180;
  double local_170;
  float local_164;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_108 = param_3[5];
  local_118 = param_3[3];
  dStack_110 = param_3[4];
  if (((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0xc))) ||
      (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0xe)))) ||
     (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x10)))) {
    dVar35 = param_3[4] - param_3[1];
    dVar21 = param_3[3] - *param_3;
    dVar10 = dVar21 * dVar21 + dVar35 * dVar35;
    if ((dVar10 != 1.0) || (NAN(dVar10))) {
      dVar11 = DAT_14c8464e0;
      dVar13 = DAT_14c8464f0;
      dVar14 = DAT_14c8464e8;
      if (9.99999993922529e-09 <= dVar10) {
        dVar11 = dVar21 * (1.0 / SQRT(dVar10));
        dVar13 = 0.0;
        dVar14 = dVar35 * (1.0 / SQRT(dVar10));
      }
    }
    else {
      dVar10 = param_3[5] - param_3[2];
      dVar11 = dVar21;
      dVar13 = 0.0;
      dVar14 = dVar35;
      if ((dVar10 == 0.0) && (dVar13 = 0.0, !NAN(dVar10))) {
        dVar13 = dVar10;
      }
    }
    dStack_f0 = 0.0;
    if ((((dVar14 != 0.0) || (NAN(dVar14))) || (dVar11 != 0.0)) || (NAN(dVar11))) {
      dStack_f0 = atan2(dVar14,dVar11);
      dStack_f0 = dStack_f0 * 57.29577951308232;
    }
    dVar21 = SQRT(dVar11 * dVar11 + dVar14 * dVar14);
    local_f8 = 0.0;
    if (((dVar13 != 0.0) || (NAN(dVar13))) || ((dVar21 != 0.0 || (NAN(dVar21))))) {
      local_f8 = atan2(dVar13,dVar21);
      local_f8 = local_f8 * 57.29577951308232;
    }
    local_e8 = 0.0;
    FUN_1401c9a0e(&local_f8,&local_140,param_1 + 0xc);
    local_118 = local_140 + local_118;
    dStack_110 = local_138 + dStack_110;
    local_108 = dStack_130 + local_108;
  }
  local_140 = 5.71749903516613e-315;
  local_120 = 0xbf80000043800000;
  local_138 = DAT_14c8464e0;
  dStack_130 = DAT_14c8464e8;
  local_128 = DAT_14c8464f0;
  local_188 = param_1[2];
  local_180 = param_1[3];
  FUN_14080f864(&local_140,param_3,&local_118);
  if (*(char *)(param_1 + 1) == '\0') {
    fVar8 = *param_1;
  }
  else {
    fVar8 = 3.4028235e+38;
  }
  local_120 = CONCAT44(local_120._4_4_,fVar8);
  uVar3 = rand();
  fVar9 = local_140._4_4_;
  uVar4 = rand();
  dVar21 = (double)((float)(uVar4 & 0x7fff) / 32767.0);
  uVar4 = rand();
  dVar10 = (double)((float)(uVar4 & 0x7fff) / 32767.0);
  uVar4 = rand();
  dVar35 = (double)((float)(uVar4 & 0x7fff) / 32767.0);
  dVar11 = dVar21 * dVar21 + dVar35 * dVar35 + dVar10 * dVar10;
  if (((dVar11 != 1.0) || (dVar13 = dVar21, dVar14 = dVar10, dVar23 = dVar35, NAN(dVar11))) &&
     (dVar13 = DAT_14c8464f0, dVar14 = DAT_14c8464e8, dVar23 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar11)) {
    dVar11 = 1.0 / SQRT(dVar11);
    dVar13 = dVar21 * dVar11;
    dVar14 = dVar10 * dVar11;
    dVar23 = dVar35 * dVar11;
  }
  dVar21 = dStack_110 - param_3[1];
  local_150 = local_118;
  dVar35 = local_118 - *param_3;
  dVar10 = dVar35 * dVar35 + dVar21 * dVar21;
  local_148 = dStack_110;
  if ((dVar10 != 1.0) || (NAN(dVar10))) {
    dVar11 = DAT_14c8464e8;
    dVar2 = DAT_14c8464f0;
    dVar36 = DAT_14c8464e0;
    if (9.99999993922529e-09 <= dVar10) {
      dVar11 = dVar21 * (1.0 / SQRT(dVar10));
      dVar2 = 0.0;
      dVar36 = dVar35 * (1.0 / SQRT(dVar10));
    }
  }
  else {
    dVar10 = local_108 - param_3[2];
    dVar11 = dVar21;
    dVar2 = 0.0;
    dVar36 = dVar35;
    if ((dVar10 == 0.0) && (dVar2 = 0.0, !NAN(dVar10))) {
      dVar2 = dVar10;
    }
  }
  dVar21 = 0.0;
  local_164 = fVar8;
  if ((((dVar11 != 0.0) || (NAN(dVar11))) || (dVar36 != 0.0)) || (NAN(dVar36))) {
    dVar21 = atan2(dVar11,dVar36);
    dVar21 = (double)(int)(dVar21 * 57.29577951308232) * 0.017453292519943295;
  }
  dVar10 = SQRT(dVar36 * dVar36 + dVar11 * dVar11);
  if (((dVar2 != 0.0) || (NAN(dVar2))) || ((dVar10 != 0.0 || (NAN(dVar10))))) {
    atan2(dVar2,dVar10);
  }
  fVar8 = (float)(uVar3 & 0x7fff) / 32767.0 + -0.5;
  dVar12 = (double)(fVar9 * (fVar8 + fVar8));
  local_158 = dVar13 * dVar12;
  local_160 = dVar14 * dVar12;
  dVar13 = sin(dVar21);
  dVar14 = cos(dVar21);
  dVar36 = local_148;
  dVar2 = local_150;
  dVar31 = 1.0 - dVar14;
  dVar10 = DAT_14c8462c0 * DAT_14c8462d0 * dVar31;
  dVar21 = DAT_14c8462c8 * DAT_14c8462d0 * dVar31;
  dVar22 = DAT_14c8462c0 * DAT_14c8462c8 * dVar31;
  local_170 = local_108;
  dVar11 = (DAT_14c8462d0 * DAT_14c8462d0 * dVar31 + dVar14) * local_128 +
           (dVar10 - dVar13 * DAT_14c8462c8) * local_138 +
           (dVar21 + dVar13 * DAT_14c8462c0) * dStack_130 + local_108 + local_158;
  dVar35 = (dVar21 - dVar13 * DAT_14c8462c0) * local_128 +
           (dVar22 + dVar13 * DAT_14c8462d0) * local_138 +
           (DAT_14c8462c8 * DAT_14c8462c8 * dVar31 + dVar14) * dStack_130 + local_148 + local_160;
  dVar13 = (dVar10 + dVar13 * DAT_14c8462c8) * local_128 +
           (dVar31 * DAT_14c8462c0 * DAT_14c8462c0 + dVar14) * local_138 +
           (dVar22 - dVar13 * DAT_14c8462d0) * dStack_130 + local_150 + dVar23 * dVar12;
  fVar8 = (float)local_140;
  local_f8 = dVar13;
  dStack_f0 = dVar35;
  local_e8 = dVar11;
  fVar9 = cosf(local_120._4_4_ * 0.017453292);
  dVar14 = local_170;
  dVar23 = dVar36 - param_3[1];
  dVar12 = dVar2 - *param_3;
  dVar31 = dVar12 * dVar12 + dVar23 * dVar23;
  dVar21 = param_3[6];
  dVar10 = param_3[7];
  dVar22 = dVar21 * dVar21 + dVar10 * dVar10;
  if ((dVar31 != 1.0) || (NAN(dVar31))) {
    dVar33 = DAT_14c8464f0;
    dVar27 = DAT_14c8464e0;
    dVar32 = DAT_14c8464e8;
    if (9.99999993922529e-09 <= dVar31) {
      dVar32 = 1.0 / SQRT(dVar31);
      dVar33 = 0.0;
      dVar27 = dVar12 * dVar32;
      dVar32 = dVar23 * dVar32;
    }
  }
  else {
    dVar33 = (double)(-(ulonglong)(local_170 - param_3[2] == 0.0) &
                     (ulonglong)(local_170 - param_3[2]));
    dVar27 = dVar12;
    dVar32 = dVar23;
  }
  fVar38 = (float)SQRT(dVar31);
  fVar34 = (float)SQRT(dVar22);
  if ((dVar22 != 1.0) || (NAN(dVar22))) {
    dVar12 = DAT_14c8464e8;
    dVar23 = DAT_14c8464e0;
    dVar31 = DAT_14c8464f0;
    if (9.99999993922529e-09 <= dVar22) {
      dVar23 = 1.0 / SQRT(dVar22);
      dVar12 = dVar10 * dVar23;
      dVar23 = dVar21 * dVar23;
      dVar31 = 0.0;
    }
  }
  else {
    dVar12 = dVar10;
    dVar23 = dVar21;
    dVar31 = (double)(-(ulonglong)(param_3[8] == 0.0) & (ulonglong)param_3[8]);
  }
  fVar37 = fVar34 * fVar34 - fVar8 * fVar9 * fVar8 * fVar9;
  fVar9 = (fVar38 + fVar38) * fVar34 * (float)(dVar32 * dVar12 + dVar27 * dVar23 + dVar33 * dVar31);
  fVar8 = fVar9 * fVar9 + fVar37 * -4.0 * fVar38 * fVar38;
  if ((0.0 <= fVar8) && ((fVar37 != 0.0 || (NAN(fVar37))))) {
    if (fVar8 < 0.0) {
      fVar8 = sqrtf(fVar8);
    }
    else {
      fVar8 = SQRT(fVar8);
    }
    fVar34 = (fVar8 - fVar9) / (fVar37 + fVar37);
    uVar3 = -(uint)(0.0 < fVar34);
    dVar21 = (double)(float)(~uVar3 & (uint)((-fVar9 - fVar8) / (fVar37 + fVar37)) |
                            (uint)fVar34 & uVar3);
    dVar11 = dVar21 * 0.0 + dVar14;
    dVar35 = param_3[7] * dVar21 + dVar36;
    dVar13 = dVar21 * param_3[6] + dVar2;
    local_f8 = dVar13;
    dStack_f0 = dVar35;
    local_e8 = dVar11;
  }
  dVar35 = dVar35 - dVar36;
  dVar13 = dVar13 - dVar2;
  dVar21 = dVar13 * dVar13 + dVar35 * dVar35;
  if (local_164 < (float)SQRT(dVar21)) {
    if ((dVar21 != 1.0) || (NAN(dVar21))) {
      dVar23 = DAT_14c8464f0;
      dVar10 = DAT_14c8464e8;
      dVar11 = DAT_14c8464e0;
      if (9.99999993922529e-09 <= dVar21) {
        dVar21 = 1.0 / SQRT(dVar21);
        dVar23 = 0.0;
        dVar10 = dVar35 * dVar21;
        dVar11 = dVar13 * dVar21;
      }
    }
    else {
      dVar23 = (double)(-(ulonglong)(dVar11 - dVar14 == 0.0) & (ulonglong)(dVar11 - dVar14));
      dVar10 = dVar35;
      dVar11 = dVar13;
    }
    dVar21 = (double)local_164;
    local_e8 = dVar14 + dVar23 * dVar21;
    dStack_f0 = dVar36 + dVar10 * dVar21;
    local_f8 = dVar2 + dVar11 * dVar21;
  }
  puVar7 = &local_140;
  uVar5 = FUN_1409cd2ec(puVar7,param_2,param_3,&local_f8);
  auVar29 = *(undefined1 (*) [16])(param_1 + 6);
  dVar21 = (double)DAT_1499387d0;
  dVar10 = DAT_1499387d0._8_8_;
  auVar15 = divpd(auVar29,_DAT_1499387d0);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = *(double *)(param_1 + 10);
  auVar25 = divpd(auVar24,_DAT_1499387d0);
  auVar15 = roundpd(auVar15,auVar15,3);
  auVar25 = roundpd(auVar25,auVar25,3);
  dVar35 = auVar29._0_8_ - auVar15._0_8_ * dVar21;
  dVar11 = auVar29._8_8_ - auVar15._8_8_ * dVar10;
  dVar13 = *(double *)(param_1 + 10) - auVar25._0_8_ * dVar21;
  dVar14 = 0.0 - auVar25._8_8_ * dVar10;
  auVar30._0_8_ = dVar35 + dVar21;
  auVar30._8_8_ = dVar11 + dVar10;
  auVar28._0_8_ = dVar21 + dVar13;
  auVar28._8_8_ = dVar10 + dVar14;
  auVar16._8_8_ = -(ulonglong)(0.0 <= dVar11);
  auVar16._0_8_ = -(ulonglong)(0.0 <= dVar35);
  auVar29._8_8_ = dVar11;
  auVar29._0_8_ = dVar35;
  auVar15 = blendvpd(auVar30,auVar29,auVar16);
  auVar17._8_8_ = -(ulonglong)(0.0 <= dVar14);
  auVar17._0_8_ = -(ulonglong)(0.0 <= dVar13);
  auVar25._8_8_ = dVar14;
  auVar25._0_8_ = dVar13;
  auVar29 = blendvpd(auVar28,auVar25,auVar17);
  auVar18._8_8_ = -(ulonglong)(180.0 < auVar15._8_8_);
  auVar18._0_8_ = -(ulonglong)(180.0 < auVar15._0_8_);
  auVar1._8_8_ = auVar15._8_8_ + -360.0;
  auVar1._0_8_ = auVar15._0_8_ + -360.0;
  auVar25 = blendvpd(auVar15,auVar1,auVar18);
  auVar19._8_8_ = -(ulonglong)(180.0 < auVar29._8_8_);
  auVar19._0_8_ = -(ulonglong)(180.0 < auVar29._0_8_);
  auVar15._8_8_ = auVar29._8_8_ + -360.0;
  auVar15._0_8_ = auVar29._0_8_ + -360.0;
  auVar29 = blendvpd(auVar29,auVar15,auVar19);
  auVar26._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar25._8_8_));
  auVar26._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar25._0_8_));
  iVar6 = movmskpd(uVar5,auVar26);
  auVar20._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar29._8_8_));
  auVar20._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar29._0_8_));
  uVar3 = movmskpd((int)puVar7,auVar20);
  if ((uVar3 & 0x3fffffff) != 0 || iVar6 != 0) {
    FUN_1401c9a0e(param_1 + 6,&local_f8,param_2 + 0x18);
    *(double *)(param_2 + 0x28) = local_e8;
    *(double *)(param_2 + 0x18) = local_f8;
    *(double *)(param_2 + 0x20) = dStack_f0;
  }
  if ((local_e0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125e338 FUN_14125e338 body=1154 status=ok
// SIG undefined FUN_14125e338(void)

void FUN_14125e338(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_14125e423;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_14125e423:
  local_38 = 0;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_14125e4f0;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_14125e4f0:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14125e7bc(param_1,local_30,local_38);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125e7bc FUN_14125e7bc body=302 status=ok
// SIG undefined FUN_14125e7bc(void)

void FUN_14125e7bc(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 == param_1) && (param_3 != 0)) {
    if (DAT_14cb46ec8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_1483e40eb;
      local_50 = &LAB_146486986;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125e900 FUN_14125e900 body=40 status=ok
// SIG undefined FUN_14125e900(void)

undefined8 FUN_14125e900(undefined8 param_1,int param_2)

{
  FUN_14125e928();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14125e928 FUN_14125e928 body=501 status=ok
// SIG undefined FUN_14125e928(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14125e928(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b92dab0;
  plVar1 = param_1 + 0x1d;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x21) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x20)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x20)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x15;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x19) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x18)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x18)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xe;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x12) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x11)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x11)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 7;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xb) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar4 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 10)) {
      plVar4 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 10)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar3 = (undefined8 *)param_1[1], puVar3 != (undefined8 *)0x0)) {
    if (puVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar3 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00014125eab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14125eb1d FUN_14125eb1d body=49 status=ok
// SIG undefined FUN_14125eb1d(void)

longlong FUN_14125eb1d(void)

{
  if (DAT_14c99d280 == 0) {
    FUN_140f50038(&DAT_14c99d280,&PTR_s__Script_ClothingSystemRuntimeInt_149fbd297_1_149fbd278);
  }
  return DAT_14c99d280;
}



// FUNCTION 14125eb4e FUN_14125eb4e body=49 status=ok
// SIG undefined FUN_14125eb4e(void)

longlong FUN_14125eb4e(void)

{
  if (DAT_14caa8a08 == 0) {
    FUN_140f50038(&DAT_14caa8a08,&PTR_s__Script_ChaosSolverEngine_14a3ea6d8);
  }
  return DAT_14caa8a08;
}



// FUNCTION 14125eb7f FUN_14125eb7f body=49 status=ok
// SIG undefined FUN_14125eb7f(void)

longlong FUN_14125eb7f(void)

{
  if (DAT_14cabacf0 == 0) {
    FUN_140f50038(&DAT_14cabacf0,&PTR_s__Script_AudioMixer_14a56711f_1_14a567100);
  }
  return DAT_14cabacf0;
}



// FUNCTION 14125ebb0 FUN_14125ebb0 body=49 status=ok
// SIG undefined FUN_14125ebb0(void)

longlong FUN_14125ebb0(void)

{
  if (DAT_14cb12820 == 0) {
    FUN_140f50038(&DAT_14cb12820,&PTR_s__Script_ClothingSystemRuntimeCom_14ab353b8);
  }
  return DAT_14cb12820;
}



// FUNCTION 14125ebe1 FUN_14125ebe1 body=49 status=ok
// SIG undefined FUN_14125ebe1(void)

longlong FUN_14125ebe1(void)

{
  if (DAT_14cbfe508 == 0) {
    FUN_140f50038(&DAT_14cbfe508,&PTR_s__Script_USDClasses_14babb3b8);
  }
  return DAT_14cbfe508;
}



// FUNCTION 14125ec12 FUN_14125ec12 body=1367 status=ok
// SIG undefined FUN_14125ec12(void)

void FUN_14125ec12(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    lVar9 = FUN_1407f4df8();
    iVar8 = *(int *)(lVar9 + 0x38);
    if ((iVar8 <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)iVar8 * 8) ==
        lVar9 + 0x30)) {
      plVar3 = (longlong *)(param_1 + 0x138);
      local_50 = FUN_14585facc;
      local_48 = 0;
      uVar7 = FUN_14125f1d0(param_2,CONCAT71((int7)(int3)((uint)iVar8 >> 8),2),param_1);
      iVar8 = *(int *)(param_1 + 0x140);
      *(uint *)(param_1 + 0x140) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0x144) < iVar8 + 1U) {
        FUN_1447808da(plVar3,iVar8);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar8 * 4) = uVar7;
      local_50 = FUN_14585facc;
      local_48 = 0;
      uVar7 = FUN_14125f1d0(param_2,8,param_1);
      iVar8 = *(int *)(param_1 + 0x140);
      *(uint *)(param_1 + 0x140) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0x144) < iVar8 + 1U) {
        FUN_1447808da(plVar3,iVar8);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar8 * 4) = uVar7;
      local_50 = FUN_14585facc;
      local_48 = 0;
      uVar7 = FUN_14125f1d0(param_2,0x10,param_1);
      iVar8 = *(int *)(param_1 + 0x140);
      *(uint *)(param_1 + 0x140) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0x144) < iVar8 + 1U) {
        FUN_1447808da(plVar3,iVar8);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar8 * 4) = uVar7;
      FUN_14125f16a(param_1,param_2,&DAT_14cbc9be8);
      local_50 = DAT_14cb92d08;
      lVar9 = FUN_14063edce(&DAT_14cb91658);
      if (lVar9 == 0) {
        uVar7 = 0;
      }
      else {
        puVar10 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        iVar8 = DAT_14c762760 + 1;
        *(int *)(puVar10 + 1) = DAT_14c762760;
        DAT_14c762760 = iVar8;
        *puVar10 = &PTR_LAB_14acd0ae0;
        *(undefined4 *)((longlong)puVar10 + 0x14) = 0;
        uVar4 = *(uint *)(lVar9 + 0xc);
        *(uint *)(puVar10 + 2) = uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar8 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          LOCK();
          iVar8 = *(int *)(lVar9 + 0x10);
          bVar14 = iVar8 == 0;
          if (bVar14) {
            *(int *)(lVar9 + 0x10) = iVar12;
            iVar8 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar8 = iVar12;
          }
        }
        *(int *)((longlong)puVar10 + 0x14) = iVar8;
        *(undefined1 *)(puVar10 + 3) = 1;
        *puVar10 = &PTR_FUN_14b47b0e0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        *(undefined1 *)(puVar10 + 6) = 0;
        plVar11 = (longlong *)FUN_14063ee94(puVar10 + 4);
        if ((int)plVar11[1] != 4) {
          FUN_1446efa72(plVar11,0,4,0x10);
          *(undefined4 *)(plVar11 + 1) = 4;
        }
        puVar5 = (undefined8 *)*plVar11;
        plVar11 = *(longlong **)(param_1 + 0x10);
        if (plVar11 == (longlong *)0x0) {
LAB_14125f035:
          *puVar5 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 1;
          lVar9 = DAT_14c758608 + 1;
          if (lVar13 == 0) {
            LOCK();
            UNLOCK();
            lVar13 = DAT_14c758608 + 2;
            lVar9 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar9;
          puVar5[2] = lVar13;
          *puVar5 = &PTR_FUN_14b9c1190;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = FUN_148e749d6;
          *(undefined4 *)(puVar5 + 6) = 0;
        }
        else {
          iVar8 = (int)plVar11[1];
          do {
            if (iVar8 == 0) goto LAB_14125f035;
            LOCK();
            iVar12 = (int)plVar11[1];
            bVar14 = iVar8 == iVar12;
            if (bVar14) {
              *(int *)(plVar11 + 1) = iVar8 + 1;
              iVar12 = iVar8;
            }
            iVar8 = iVar12;
            UNLOCK();
          } while (!bVar14);
          uVar6 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          *puVar5 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar13 = DAT_14c758608 + 1;
          lVar9 = DAT_14c758608 + 1;
          if (lVar13 == 0) {
            LOCK();
            UNLOCK();
            lVar13 = DAT_14c758608 + 2;
            lVar9 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar9;
          puVar5[2] = lVar13;
          *puVar5 = &PTR_FUN_14b9c1190;
          puVar5[3] = uVar6;
          puVar5[4] = plVar11;
          LOCK();
          *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
          UNLOCK();
          puVar5[5] = FUN_148e749d6;
          *(undefined4 *)(puVar5 + 6) = 0;
          LOCK();
          plVar1 = plVar11 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          LOCK();
          plVar1 = plVar11 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          LOCK();
          plVar1 = plVar11 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        iVar8 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar8 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar8 + 1U) {
          FUN_141053524((longlong *)(param_2 + 0x198),iVar8);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar8 * 8) = puVar10;
        uVar7 = *(undefined4 *)(puVar10 + 1);
      }
      iVar8 = *(int *)(param_1 + 0x140);
      *(uint *)(param_1 + 0x140) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0x144) < iVar8 + 1U) {
        FUN_1447808da(plVar3,iVar8);
      }
      *(undefined4 *)(*plVar3 + (longlong)iVar8 * 4) = uVar7;
      local_50 = DAT_14cb92d08;
      lVar9 = FUN_14063edce(&DAT_14cb91658,&local_50);
      if (lVar9 != 0) {
        local_50 = FUN_140ed4b7e;
        local_48 = 0;
        local_58 = &local_50;
        lVar9 = FUN_14063efbe(param_2,lVar9,1,param_1);
        uVar7 = *(undefined4 *)(lVar9 + 8);
        iVar8 = *(int *)(param_1 + 0x140);
        *(uint *)(param_1 + 0x140) = iVar8 + 1U;
        if (*(uint *)(param_1 + 0x144) < iVar8 + 1U) {
          FUN_1447808da(plVar3,iVar8);
        }
        *(undefined4 *)(*plVar3 + (longlong)iVar8 * 4) = uVar7;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14125f16a FUN_14125f16a body=101 status=ok
// SIG undefined FUN_14125f16a(void)

void FUN_14125f16a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x280) == '\x01') {
    local_18 = *param_3;
    lVar1 = FUN_14063edce(&DAT_14cb91658);
    if (lVar1 != 0) {
      FUN_14585f9c4(param_1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14125f1d0 FUN_14125f1d0 body=832 status=ok
// SIG undefined FUN_14125f1d0(void)

undefined4 FUN_14125f1d0(longlong param_1,undefined1 param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = param_4[1];
  lVar4 = *param_4;
  local_50 = DAT_14cbc9be8;
  lVar9 = FUN_14063edce(&DAT_14cb91658);
  if (lVar9 == 0) {
    uVar14 = 0;
  }
  else {
    lVar12 = 0;
    uVar14 = (int)lVar7;
    if (lVar4 == 0) {
      uVar14 = 0;
    }
    puVar10 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    iVar8 = DAT_14c762760 + 1;
    *(int *)(puVar10 + 1) = DAT_14c762760;
    DAT_14c762760 = iVar8;
    *puVar10 = &PTR_LAB_14acd0ae0;
    *(undefined4 *)((longlong)puVar10 + 0x14) = 0;
    uVar3 = *(uint *)(lVar9 + 0xc);
    *(uint *)(puVar10 + 2) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    iVar8 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar8 = *(int *)(lVar12 + 0x10);
      bVar15 = iVar8 == 0;
      if (bVar15) {
        *(int *)(lVar12 + 0x10) = iVar13;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar8 = iVar13;
      }
    }
    *(int *)((longlong)puVar10 + 0x14) = iVar8;
    *(undefined1 *)(puVar10 + 3) = param_2;
    *puVar10 = &PTR_FUN_14b47b110;
    puVar10[4] = 0;
    puVar10[5] = 0;
    *(undefined1 *)(puVar10 + 6) = 0;
    plVar11 = (longlong *)FUN_14063f168(puVar10 + 4);
    if ((int)plVar11[1] != 4) {
      FUN_1446efa72(plVar11,0,4,0x10);
      *(undefined4 *)(plVar11 + 1) = 4;
    }
    puVar5 = (undefined8 *)*plVar11;
    plVar11 = *(longlong **)(param_3 + 0x10);
    if (plVar11 == (longlong *)0x0) {
LAB_14125f40e:
      *puVar5 = &PTR_LAB_14b47b160;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      puVar5[2] = lVar9;
      *puVar5 = &PTR_FUN_14b9c1120;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = lVar4;
      *(undefined4 *)(puVar5 + 6) = uVar14;
    }
    else {
      iVar8 = (int)plVar11[1];
      do {
        if (iVar8 == 0) goto LAB_14125f40e;
        LOCK();
        iVar13 = (int)plVar11[1];
        bVar15 = iVar8 == iVar13;
        if (bVar15) {
          *(int *)(plVar11 + 1) = iVar8 + 1;
          iVar13 = iVar8;
        }
        iVar8 = iVar13;
        UNLOCK();
      } while (!bVar15);
      uVar6 = *(undefined8 *)(param_3 + 8);
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      *puVar5 = &PTR_LAB_14b47b160;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      puVar5[2] = lVar9;
      *puVar5 = &PTR_FUN_14b9c1120;
      puVar5[3] = uVar6;
      puVar5[4] = plVar11;
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      *(undefined4 *)(puVar5 + 6) = uVar14;
      puVar5[5] = lVar4;
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    iVar8 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar8 + 1U) {
      FUN_141053524((longlong *)(param_1 + 0x198),iVar8);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar8 * 8) = puVar10;
    uVar14 = *(undefined4 *)(puVar10 + 1);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 14125f512 FUN_14125f512 body=1529 status=ok
// SIG undefined FUN_14125f512(void)

void FUN_14125f512(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  void *pvVar1;
  void *_Dst;
  undefined4 *puVar2;
  uint *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  longlong *plVar19;
  int iVar20;
  uint uVar21;
  undefined1 auStack_128 [32];
  longlong local_108;
  ulonglong local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined1 local_dc [4];
  longlong *local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar19 = param_1 + 0x2f;
  uVar21 = (uint)((ulonglong)param_2 >> 0x10);
  uVar15 = (uint)param_2 & 0xffff;
  uVar21 = ((uint)param_2 << 0x10 | uVar15) + (int)((ulonglong)param_2 >> 0x20) +
           (uVar21 << 0x13 | uVar21 & 0xffff) + (uVar15 >> 4);
  iVar20 = *(int *)(param_1 + 0x30);
  iVar9 = *(int *)((longlong)param_1 + 0x1ac);
  local_108 = param_2;
  if (iVar20 != iVar9) {
    puVar10 = param_1 + 0x36;
    if ((undefined8 *)param_1[0x37] != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)param_1[0x37];
    }
    iVar8 = *(int *)((longlong)puVar10 + (ulonglong)(*(int *)(param_1 + 0x38) - 1U & uVar21) * 4);
    if (iVar8 != -1) {
      do {
        lVar16 = *plVar19 + (longlong)iVar8 * 0x98;
        if (*(longlong *)(*plVar19 + (longlong)iVar8 * 0x98) == param_2) {
          if (lVar16 != 0) goto LAB_14125f82c;
          break;
        }
        iVar8 = *(int *)(lVar16 + 0x90);
      } while (iVar8 != -1);
    }
  }
  if (iVar9 == 0) {
    *(int *)(param_1 + 0x30) = iVar20 + 1;
    if (*(int *)((longlong)param_1 + 0x184) == iVar20) {
      FUN_14125fb0c(plVar19,iVar20);
    }
    iVar9 = *(int *)(param_1 + 0x34);
    if (iVar9 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar8 = iVar9 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    puVar10 = param_1 + 0x31;
    iVar13 = iVar9 + 1;
    iVar18 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar18 = iVar9;
    }
    if (iVar18 >> 5 == iVar8) {
      *(int *)(param_1 + 0x34) = iVar13;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x1a4) <= iVar9) {
        local_f8 = plVar19;
        if (iVar9 + 0x20U < 0xa0) {
          iVar13 = 0x80;
          iVar8 = iVar9;
        }
        else {
          uVar15 = iVar9 + 0x20U >> 5;
          local_100 = (ulonglong)uVar15;
          if (*(int *)((longlong)param_1 + 0x1a4) + 0x1fU < 0xa0) {
            uVar14 = 4;
            if (4 < uVar15) {
              uVar14 = uVar15;
            }
          }
          else {
            uVar14 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar14 << 2,0);
          iVar8 = (int)(uVar11 >> 2);
          iVar13 = -0x20;
          if ((int)local_100 <= iVar8) {
            iVar13 = iVar8 << 5;
          }
          iVar8 = *(int *)(param_1 + 0x34);
        }
        *(int *)((longlong)param_1 + 0x1a4) = iVar13;
        FUN_1446efbd8(puVar10,iVar8);
        iVar13 = *(int *)(param_1 + 0x34) + 1;
        plVar19 = local_f8;
      }
      iVar8 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar8 = iVar13;
      }
      *(int *)(param_1 + 0x34) = iVar13;
      if (iVar13 % 0x20 != 0) {
        puVar17 = (undefined8 *)param_1[0x33];
        if ((undefined8 *)param_1[0x33] == (undefined8 *)0x0) {
          puVar17 = puVar10;
        }
        bVar12 = -(char)(iVar13 % 0x20);
        *(uint *)((longlong)puVar17 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)puVar17 + (longlong)(iVar8 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar16 = (longlong)iVar20;
    if ((undefined8 *)param_1[0x33] != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)param_1[0x33];
    }
    bVar12 = (byte)iVar9 & 0x1f;
    puVar3 = (uint *)((longlong)puVar10 + (longlong)(iVar18 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    iVar20 = *(int *)(param_1 + 0x35);
    lVar16 = (longlong)iVar20;
    iVar8 = *(int *)(param_1[0x2f] + 4 + lVar16 * 0x98);
    *(int *)(param_1 + 0x35) = iVar8;
    *(int *)((longlong)param_1 + 0x1ac) = iVar9 + -1;
    if (iVar9 + -1 != 0) {
      *(undefined4 *)(param_1[0x2f] + (longlong)iVar8 * 0x98) = 0xffffffff;
    }
  }
  puVar10 = param_1 + 0x31;
  if ((undefined8 *)param_1[0x33] != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)param_1[0x33];
  }
  iVar9 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar9 = iVar20;
  }
  puVar3 = (uint *)((longlong)puVar10 + (longlong)(iVar9 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar20 & 0x1f);
  iVar9 = 1;
  lVar4 = param_1[0x2f];
  lVar16 = lVar16 * 0x98;
  pvVar1 = (void *)(lVar4 + lVar16);
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = (longlong *)0x0;
  puStack_d0 = (undefined8 *)0x0;
  *(longlong *)(lVar4 + lVar16) = local_108;
  *(undefined8 *)(lVar4 + 8 + lVar16) = 0;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar16);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar10 = (undefined8 *)(lVar4 + 0x20 + lVar16);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)(lVar4 + 0x30 + lVar16);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)(lVar4 + 0x40 + lVar16);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)(lVar4 + 0x50 + lVar16);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)(lVar4 + 0x60 + lVar16);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)(lVar4 + 0x70 + lVar16);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10 = (undefined8 *)(lVar4 + 0x80 + lVar16);
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined4 *)(lVar4 + 0x90 + lVar16) = 0xffffffff;
  uVar15 = *(int *)(param_1 + 0x30) - *(int *)((longlong)param_1 + 0x1ac);
  if ((uVar15 != 0) && (uVar15 != 1)) {
    puVar10 = param_1 + 0x36;
    if ((undefined8 *)param_1[0x37] != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)param_1[0x37];
    }
    iVar8 = *(int *)((longlong)puVar10 + (ulonglong)(*(int *)(param_1 + 0x38) - 1U & uVar21) * 4);
    if (iVar8 != -1) {
      do {
        _Dst = (void *)(*plVar19 + (longlong)iVar8 * 0x98);
        if (*(longlong *)(*plVar19 + (longlong)iVar8 * 0x98) == local_108) {
          FUN_140c9e334((longlong)_Dst + 8);
          memmove(_Dst,pvVar1,0x90);
          FUN_147965dae(plVar19,iVar20);
          goto LAB_14125f808;
        }
        iVar8 = *(int *)((longlong)_Dst + 0x90);
      } while (iVar8 != -1);
    }
  }
  if (3 < uVar15) {
    uVar11 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
    lVar16 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar9 = 1 << ((byte)lVar16 & 0x1f);
  }
  if (((int)uVar15 < 1) || (iVar9 <= *(int *)(param_1 + 0x38))) {
    uVar21 = *(int *)(param_1 + 0x38) - 1U & uVar21;
    *(uint *)((longlong)pvVar1 + 0x94) = uVar21;
    puVar10 = (undefined8 *)param_1[0x37];
    if ((undefined8 *)param_1[0x37] == (undefined8 *)0x0) {
      puVar10 = param_1 + 0x36;
    }
    *(undefined4 *)((longlong)pvVar1 + 0x90) =
         *(undefined4 *)
          ((longlong)puVar10 + ((longlong)*(int *)(param_1 + 0x38) - 1U & (longlong)(int)uVar21) * 4
          );
    puVar10 = (undefined8 *)param_1[0x37];
    if ((undefined8 *)param_1[0x37] == (undefined8 *)0x0) {
      puVar10 = param_1 + 0x36;
    }
    *(int *)((longlong)puVar10 +
            ((longlong)*(int *)(param_1 + 0x38) - 1U & (longlong)(int)uVar21) * 4) = iVar20;
  }
  else {
    *(int *)(param_1 + 0x38) = iVar9;
    FUN_14125fc82(plVar19);
  }
LAB_14125f808:
  lVar16 = *plVar19 + (longlong)iVar20 * 0x98;
LAB_14125f82c:
  plVar19 = (longlong *)(lVar16 + 0x10);
  if (*(longlong *)(lVar16 + 0x10) != 0) {
    FUN_147965e28(param_5,plVar19);
  }
  *(undefined8 *)(lVar16 + 8) = *param_3;
  uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar6 = *(undefined4 *)(param_3 + 2);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x14);
  *(undefined4 *)plVar19 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(lVar16 + 0x14) = uVar5;
  *(undefined4 *)(lVar16 + 0x18) = uVar6;
  *(undefined4 *)(lVar16 + 0x1c) = uVar7;
  if ((undefined8 *)(lVar16 + 8) != param_3) {
    iVar20 = *(int *)(param_3 + 4);
    pvVar1 = (void *)param_3[3];
    *(int *)(lVar16 + 0x28) = iVar20;
    if (iVar20 == 0 && *(int *)(lVar16 + 0x2c) == 0) {
      *(undefined4 *)(lVar16 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670((undefined8 *)(lVar16 + 0x20),iVar20);
      if (iVar20 != 0) {
        memcpy(*(void **)(lVar16 + 0x20),pvVar1,(longlong)iVar20 * 2);
      }
    }
  }
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  *(undefined4 *)(lVar16 + 0x30) = *param_4;
  *(undefined4 *)(lVar16 + 0x34) = uVar5;
  *(undefined4 *)(lVar16 + 0x38) = uVar6;
  *(undefined4 *)(lVar16 + 0x3c) = uVar7;
  puVar10 = (undefined8 *)(lVar16 + 0x40);
  if (puVar10 != (undefined8 *)(param_4 + 4)) {
    iVar20 = param_4[6];
    pvVar1 = *(void **)(param_4 + 4);
    *(int *)(lVar16 + 0x48) = iVar20;
    if (iVar20 == 0 && *(int *)(lVar16 + 0x4c) == 0) {
      *(undefined4 *)(lVar16 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(puVar10,iVar20);
      if (iVar20 != 0) {
        memcpy((void *)*puVar10,pvVar1,(longlong)iVar20 * 2);
      }
    }
  }
  if (*plVar19 != 0) {
    local_f0 = *param_1;
    puStack_d0 = &local_f0;
    local_e8 = local_108;
    local_d8 = plVar19;
    FUN_14796608c(param_5,local_dc);
  }
  *(int *)((longlong)param_1 + 0x84) =
       *(int *)(param_1 + 0x30) - *(int *)((longlong)param_1 + 0x1ac);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14125fb0c FUN_14125fb0c body=372 status=ok
// SIG undefined FUN_14125fb0c(void)

void FUN_14125fb0c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
  uVar5 = lVar4 * 0x98;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14125fb96;
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
LAB_14125fb96:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x98)) {
    uVar7 = uVar5 / 0x98 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x98,8);
  return;
}



// FUNCTION 14125fc82 FUN_14125fc82 body=688 status=ok
// SIG undefined FUN_14125fc82(void)

void FUN_14125fc82(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_14125fcf7;
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
  } while (uVar10 != uVar3);
LAB_14125fcf7:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar15 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar16 = (longlong)iVar15 * 0x98;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x94 + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x90 + lVar16) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar15 = (int)uVar4;
      lVar9 = (longlong)iVar15;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar11 <= iVar15) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar9 == lVar16) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar7);
  }
  return;
}



// FUNCTION 14125ff32 FUN_14125ff32 body=102 status=ok
// SIG undefined FUN_14125ff32(void)

undefined8 * FUN_14125ff32(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14aa6b050;
  puVar1 = param_1 + 0x14;
  if ((undefined8 *)param_1[0x23] != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[0x23];
  }
  FUN_14125ff98(puVar1,*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1401c04d8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14125ff98 FUN_14125ff98 body=148 status=ok
// SIG undefined FUN_14125ff98(void)

void FUN_14125ff98(longlong param_1,int param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    lVar6 = 0;
    do {
      plVar5 = *(longlong **)(param_1 + lVar6 * 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 3;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (((uint)lVar3 & 0x3fffffff) == 1) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          plVar5[1] = 0;
          plVar5[2] = 0;
          LOCK();
          puVar2 = (ulonglong *)(plVar5 + 3);
          uVar4 = *puVar2;
          *puVar2 = *puVar2 - 0x40000000;
          UNLOCK();
          if ((uVar4 & 0xfffffffc0000000) == 0x40000000) {
            (**(code **)*plVar5)(plVar5,1);
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while (param_2 != (int)lVar6);
  }
  return;
}



// FUNCTION 14126002c FUN_14126002c body=76 status=ok
// SIG undefined FUN_14126002c(void)

void FUN_14126002c(longlong param_1,char param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_2 == '\0') {
    bVar2 = 0;
  }
  else {
    bVar2 = 4;
    lVar3 = param_1;
    if (DAT_14c76142c == 1) {
      do {
        if ((*(byte *)(lVar3 + 0x1f8) & 2) == 0) break;
        *(byte *)(lVar3 + 0x1f8) = *(byte *)(lVar3 + 0x1f8) & 0xfd;
        plVar1 = (longlong *)(lVar3 + 0x120);
        lVar3 = *plVar1;
      } while (*plVar1 != 0);
    }
  }
  *(byte *)(param_1 + 0x1f9) = *(byte *)(param_1 + 0x1f9) & 0xfb | bVar2;
  return;
}



// FUNCTION 141260078 FUN_141260078 body=228 status=ok
// SIG undefined FUN_141260078(void)

longlong FUN_141260078(void)

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
  if (DAT_14cad05c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_1479bee46;
    local_40 = FUN_1417bb9bc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x650;
    FUN_14081cfa3(L"/Script/Engine",L"BillboardComponent",&DAT_14cad05c8,FUN_1463b5628);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad05c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126015e FUN_14126015e body=52 status=ok
// SIG undefined FUN_14126015e(void)

undefined4 FUN_14126015e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x28);
    lVar2 = (longlong)*(int *)(param_1 + 0x30) * 0x30;
    do {
      if (*plVar1 == param_2) {
        if (plVar1 == (longlong *)0x0) {
          return 0xffffffff;
        }
        return (int)plVar1[2];
      }
      plVar1 = plVar1 + 6;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  return 0xffffffff;
}



// FUNCTION 141260192 FUN_141260192 body=178 status=ok
// SIG undefined FUN_141260192(void)

longlong * FUN_141260192(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406eeb88(param_1,&local_28);
  if (local_28 != 0) {
    uVar4 = FUN_141260248();
    cVar3 = FUN_1448093f4(local_28,uVar4);
    if (cVar3 != '\0') {
      *param_2 = local_28;
      param_2[1] = (longlong)local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      goto LAB_1412601e8;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1412601e8:
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141260248 FUN_141260248 body=57 status=ok
// SIG undefined FUN_141260248(void)

void FUN_141260248(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65ce8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65ce8 = FUN_140002ddd(FUN_14650cb82,uVar1,L"GbxSkillTargetListRegistry");
  }
  return;
}



// FUNCTION 141260281 FUN_141260281 body=150 status=ok
// SIG undefined FUN_141260281(void)

void FUN_141260281(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b249610;
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
    *param_1 = &PTR_FUN_14b23dd30;
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0xb;
  }
  return;
}



// FUNCTION 141260318 FUN_141260318 body=980 status=ok
// SIG undefined FUN_141260318(void)

longlong * FUN_141260318(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  longlong *local_58;
  longlong *local_50;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0xd8);
  if (lVar8 != 0) {
    plVar7 = *(longlong **)(*(longlong *)(param_1 + 8) + 0xd0);
    lVar8 = lVar8 << 4;
    do {
      lVar4 = *plVar7;
      if ((((*(int *)(lVar4 + 0x18) == (int)param_3[1]) &&
           (*(int *)(lVar4 + 0x1c) == *(int *)((longlong)param_3 + 0xc))) &&
          (*(int *)(lVar4 + 0x20) == (int)param_3[2])) &&
         (*(int *)(lVar4 + 0x24) == *(int *)((longlong)param_3 + 0x14))) {
        if (plVar7 != (longlong *)0x0) {
          *param_2 = lVar4;
          lVar8 = plVar7[1];
          param_2[1] = lVar8;
          if (lVar8 != 0) {
            LOCK();
            *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
            UNLOCK();
          }
          goto LAB_141260592;
        }
        break;
      }
      plVar7 = plVar7 + 2;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  (**(code **)(*param_3 + 8))(param_3,&local_58);
  plVar1 = local_50;
  plVar7 = local_58;
  if (local_50 == (longlong *)0x0) {
    local_58[1] = (longlong)local_58;
    plVar9 = (longlong *)local_58[2];
    if (plVar9 != (longlong *)0x0) {
LAB_14126061b:
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      goto LAB_14126039b;
    }
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    local_58[1] = (longlong)local_58;
    if ((longlong *)local_58[2] != local_50) {
      LOCK();
      *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
      UNLOCK();
      plVar9 = (longlong *)local_58[2];
      if (plVar9 != (longlong *)0x0) goto LAB_14126061b;
LAB_14126039b:
      plVar7[2] = (longlong)plVar1;
    }
  }
  uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
  lVar8 = param_3[2];
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
  *(int *)(plVar7 + 3) = (int)param_3[1];
  *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar5;
  *(int *)(plVar7 + 4) = (int)lVar8;
  *(undefined4 *)((longlong)plVar7 + 0x24) = uVar6;
  (**(code **)(*plVar7 + 0x10))(plVar7,param_1);
  *(byte *)(plVar7 + 5) = *(byte *)(plVar7 + 5) | 1;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar1 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  lVar8 = *(longlong *)(param_1 + 8);
  iVar3 = *(int *)(lVar8 + 0xd8);
  *(uint *)(lVar8 + 0xd8) = iVar3 + 1U;
  if (*(uint *)(lVar8 + 0xdc) < iVar3 + 1U) {
    FUN_141260866((longlong *)(lVar8 + 0xd0),iVar3);
  }
  lVar8 = *(longlong *)(lVar8 + 0xd0);
  *(longlong **)(lVar8 + (longlong)iVar3 * 0x10) = local_58;
  *(longlong **)(lVar8 + 8 + (longlong)iVar3 * 0x10) = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  lVar8 = *(longlong *)(param_1 + 8);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  plVar7 = local_50;
  local_40 = 3;
  if (local_50 == (longlong *)0x0) {
    *local_48 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_48[2] = lVar10;
    *local_48 = &PTR_FUN_14b42bac0;
    local_48[3] = local_58;
    local_48[4] = 0;
    local_48[5] = &LAB_140f1f74a;
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    *local_48 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_48[2] = lVar10;
    *local_48 = &PTR_FUN_14b42bac0;
    local_48[3] = local_58;
    local_48[4] = local_50;
    LOCK();
    *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
    UNLOCK();
    local_48[5] = &LAB_140f1f74a;
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_140c6314c(lVar8 + 0x28,local_60,&local_48);
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_1412604ed;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1412604ed:
  *param_2 = (longlong)local_58;
  param_2[1] = (longlong)local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
LAB_141260592:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1412606ee FUN_1412606ee body=170 status=ok
// SIG undefined FUN_1412606ee(void)

longlong * FUN_1412606ee(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x98,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b42b050;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b273730;
  plVar3[8] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
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



// FUNCTION 141260798 FUN_141260798 body=200 status=ok
// SIG undefined FUN_141260798(void)

void FUN_141260798(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  if (*(longlong *)(lVar3 + 0x88) == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x88) + 0xc);
    *(uint *)(param_1 + 0x30) = uVar1;
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
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar2 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar2 = iVar5;
      }
    }
  }
  *(int *)(param_1 + 0x34) = iVar2;
  uVar4 = 0;
  if (*(longlong *)(lVar3 + 0x88) != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x90);
  }
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  return;
}



// FUNCTION 141260866 FUN_141260866 body=269 status=ok
// SIG undefined FUN_141260866(void)

void FUN_141260866(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141260973 FUN_141260973 body=1675 status=ok
// SIG undefined FUN_141260973(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_141260973(undefined8 *param_1,undefined8 param_2,double *param_3,longlong param_4,
             double *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double in_stack_00000050;
  undefined1 auStack_258 [32];
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 local_208 [12];
  undefined1 local_1a8 [16];
  double *local_198;
  undefined1 *puStack_190;
  undefined1 *local_188;
  undefined1 *puStack_180;
  undefined8 *local_178;
  double dStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined8 local_148 [9];
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  ulonglong local_f0;
  
  auVar25 = _DAT_149934d80;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_100 = 0x7fefffffffffffff;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_1a8 = ZEXT816(0);
  local_198 = (double *)0x0;
  puStack_190 = &DAT_3ff0000000000000;
  local_188 = (undefined1 *)0x0;
  puStack_180 = (undefined1 *)0x0;
  local_178 = (undefined8 *)0x0;
  dStack_170 = 0.0;
  local_168 = _DAT_149934d80;
  local_158 = ZEXT816(0x3ff0000000000000);
  local_238 = *param_5;
  dStack_230 = param_5[1];
  dVar8 = param_5[2];
  dVar10 = param_5[3];
  dVar20 = dVar8 * dVar8 + local_238 * local_238;
  dVar22 = dVar10 * dVar10 + dStack_230 * dStack_230;
  auVar9._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(DAT_149934d80._8_8_ - (dVar20 + dVar22)));
  auVar9._0_8_ = -(ulonglong)(0.009999999776482582 < ABS((double)DAT_149934d80 - (dVar20 + dVar22)))
  ;
  iVar3 = movmskpd((int)(DAT_14c707940 ^ (ulonglong)auStack_258),auVar9);
  if (iVar3 == 0) {
    auVar9 = minpd(*(undefined1 (*) [16])(param_3 + 8),*(undefined1 (*) [16])(param_5 + 8));
    auVar12 = minpd(*(undefined1 (*) [16])(param_3 + 10),*(undefined1 (*) [16])(param_5 + 10));
    auVar27._8_8_ = -(ulonglong)(auVar9._8_8_ < 0.0);
    auVar27._0_8_ = -(ulonglong)(auVar9._0_8_ < 0.0);
    iVar3 = movmskpd(0,auVar27);
    auVar13._8_8_ = -(ulonglong)(auVar12._8_8_ < 0.0);
    auVar13._0_8_ = -(ulonglong)(auVar12._0_8_ < 0.0);
    uVar4 = movmskpd((int)param_1,auVar13);
    if ((uVar4 & 0x3fffffff) == 0 && iVar3 == 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c8460b0) {
        FUN_144b3d300(&DAT_14c8460b0);
        if (DAT_14c8460b0 == -1) {
          DAT_14c8460a0 = 0x322bcc77322bcc77;
          DAT_14c8460a8 = 0x322bcc77322bcc77;
          _Init_thread_footer(&DAT_14c8460b0);
        }
      }
      local_238 = *param_5;
      dStack_230 = param_5[1];
      dVar8 = param_5[2];
      dVar10 = param_5[3];
      auVar9 = *(undefined1 (*) [16])(param_5 + 8);
      auVar27 = divpd(auVar25,auVar9);
      auVar25 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_5 + 10));
      dVar21 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(auVar9._0_8_)) &
                       auVar27._0_8_);
      dVar23 = (double)(-(ulonglong)
                         ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) < ABS(auVar9._8_8_)) &
                       auVar27._8_8_);
      dVar15 = (double)(-(ulonglong)
                         ((double)(float)DAT_14c8460a8 <
                         ABS(SUB168(*(undefined1 (*) [16])(param_5 + 10),0))) & auVar25._0_8_);
      dVar26 = param_3[4] - param_5[4];
      dVar28 = param_3[5] - param_5[5];
      dVar31 = param_3[6] - param_5[6];
      dVar29 = -local_238;
      dVar30 = -dStack_230;
      dVar11 = dVar8 * -1.0;
      dVar14 = dVar10 * 1.0;
      dVar16 = dVar28 * dVar29 - dVar26 * dVar30;
      dVar18 = dVar31 * dVar30 - dVar28 * dVar11;
      dVar32 = dVar26 * dVar11 - dVar31 * dVar29;
      dVar33 = dVar14 * 0.0 - dVar14 * 0.0;
      dVar18 = dVar18 + dVar18;
      dVar32 = dVar32 + dVar32;
      dVar16 = dVar16 + dVar16;
      dVar33 = dVar33 + dVar33;
      dVar19 = *param_3;
      dVar24 = param_3[1];
      dVar1 = param_3[2];
      dVar2 = param_3[3];
      dVar22 = param_5[1];
      dVar20 = param_5[1];
      dVar17 = dVar19 * dVar11 * 1.0 +
               ((dVar24 * dVar14 - *param_5 * dVar1 * -1.0) - dVar2 * dVar20);
      local_168._8_8_ = param_3[9] * dVar23;
      local_168._0_8_ = param_3[8] * dVar21;
      local_158._8_8_ = param_3[0xb] * 0.0;
      local_158._0_8_ = param_3[10] * dVar15;
      local_188 = (undefined1 *)
                  (((dVar16 * dVar30 - dVar11 * dVar32) + dVar14 * dVar18 + dVar26) * dVar21);
      puStack_180 = (undefined1 *)
                    (((dVar18 * dVar11 - dVar16 * dVar29) + dVar14 * dVar32 + dVar28) * dVar23);
      local_178 = (undefined8 *)
                  (((dVar32 * dVar29 - dVar30 * dVar18) + dVar14 * dVar16 + dVar31) * dVar15);
      dStack_170 = ((dVar33 * dVar14 - dVar33 * dVar14) + dVar14 * dVar33 + 0.0) * 0.0;
      local_1a8._8_4_ = SUB84(dVar17,0);
      local_1a8._0_8_ =
           dVar24 * dVar11 * -1.0 + ((dVar19 * dVar14 - *param_5 * dVar2 * 1.0) - dVar1 * dVar22);
      local_1a8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      local_198 = (double *)
                  (dVar2 * dVar11 * 1.0 +
                  dVar22 * dVar19 + (dVar14 * dVar1 - *param_5 * dVar24 * 1.0));
      puStack_190 = (undefined1 *)
                    (dVar1 * dVar11 * -1.0 +
                    dVar20 * dVar24 + (dVar14 * dVar2 - *param_5 * dVar19 * -1.0));
    }
    else {
      FUN_1402db8fa(local_1a8,param_3,param_5);
      local_238 = *param_5;
      dStack_230 = param_5[1];
      dVar8 = param_5[2];
      dVar10 = param_5[3];
    }
    puVar6 = (undefined8 *)local_1a8;
  }
  else {
    puVar6 = &DAT_14c846480;
  }
  puVar7 = local_208;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  dVar20 = *param_6;
  dVar22 = param_6[1];
  dVar8 = dVar8 * -1.0;
  dVar10 = dVar10 * 1.0;
  dVar17 = -local_238;
  dVar16 = -dStack_230;
  dVar33 = dVar22 * dVar17 - dVar20 * dVar16;
  dVar19 = param_6[2] * dVar16 - dVar22 * dVar8;
  dVar24 = dVar20 * dVar8 - dVar17 * param_6[2];
  dVar19 = dVar19 + dVar19;
  dVar24 = dVar24 + dVar24;
  dVar33 = dVar33 + dVar33;
  local_218 = dVar10 * dVar33 + param_6[2] + (dVar24 * dVar17 - dVar19 * dVar16);
  local_228 = (dVar33 * dVar16 - dVar24 * dVar8) + dVar10 * dVar19 + dVar20;
  dStack_220 = local_238 * dVar33 + dVar8 * dVar19 + dVar10 * dVar24 + dVar22;
  if (((*(byte *)(param_4 + 0x1c) & 0xb) == 0) || ((*(byte *)(param_4 + 0x1c) & 0x40) != 0)) {
    param_1[9] = 0x7fefffffffffffff;
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    local_1a8._8_8_ = local_208;
    local_1a8._0_8_ = param_4;
    local_198 = &local_228;
    puStack_190 = &stack0x00000038;
    local_188 = &stack0x00000040;
    puStack_180 = &stack0x00000048;
    dStack_170 = in_stack_00000050;
    local_178 = local_148;
    FUN_141260fff(param_2,param_3);
    puVar6 = local_148;
    puVar7 = param_1;
    for (lVar5 = 0xb; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141260fff FUN_141260fff body=913 status=ok
// SIG undefined FUN_141260fff(void)

void FUN_141260fff(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  double *local_130;
  undefined8 *local_128;
  undefined4 *local_120;
  undefined1 *local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined1 local_a8 [28];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  cVar6 = *(char *)(param_1 + 0x1c);
  if (cVar6 == '\x01') {
    local_120 = &local_8c;
    local_8c = 0xffffffff;
    local_148 = *(undefined8 *)param_3[5];
    local_150 = *(undefined8 *)param_3[4];
    local_158 = *(undefined8 *)param_3[3];
    local_118 = local_a8;
    local_128 = &local_88;
    local_130 = &local_108;
    local_138 = &local_70;
    local_140 = &local_68;
    cVar6 = FUN_14126154a(*param_3,param_1,param_3[1],param_3[2]);
    if (cVar6 != '\0') {
      pdVar1 = (double *)param_3[1];
      pdVar2 = (double *)param_3[6];
      dVar9 = local_108 - pdVar1[4];
      dVar10 = dStack_100 - pdVar1[5];
      dVar4 = local_f8 - pdVar1[6];
      dVar5 = *pdVar1;
      dVar7 = pdVar1[2] * -1.0;
      dVar8 = pdVar1[3] * 1.0;
      dVar11 = -dVar5;
      dVar12 = -pdVar1[1];
      dVar15 = dVar9 * dVar7 - dVar11 * dVar4;
      dVar13 = dVar10 * dVar11 - dVar9 * dVar12;
      dVar14 = dVar4 * dVar12 - dVar10 * dVar7;
      dVar14 = dVar14 + dVar14;
      dVar15 = dVar15 + dVar15;
      dVar13 = dVar13 + dVar13;
      *pdVar2 = (dVar13 * dVar12 - dVar15 * dVar7) + dVar8 * dVar14 + dVar9;
      pdVar2[1] = dVar5 * dVar13 + dVar7 * dVar14 + dVar8 * dVar15 + dVar10;
      pdVar2[2] = dVar8 * dVar13 + dVar4 + (dVar15 * dVar11 - dVar14 * dVar12);
      lVar3 = param_3[6];
      *(double *)(lVar3 + 0x28) = local_f8;
      *(double *)(lVar3 + 0x18) = local_108;
      *(double *)(lVar3 + 0x20) = dStack_100;
      lVar3 = param_3[6];
      *(undefined8 *)(lVar3 + 0x40) = local_78;
      *(undefined8 *)(lVar3 + 0x30) = local_88;
      *(undefined8 *)(lVar3 + 0x38) = uStack_80;
      *(undefined8 *)(param_3[6] + 0x48) = local_70;
      *(undefined4 *)(param_3[6] + 0x50) = local_8c;
      *(undefined8 *)param_3[7] = local_68;
    }
  }
  else {
    switch(cVar6) {
    case '\x03':
switchD_14126130c_caseD_3:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_178);
    case '\x04':
      FUN_1447dc19e(param_1 + 0x30,&local_108,param_2);
      FUN_141260fff(*(undefined8 *)(param_1 + 0x20),&local_108,param_3);
      break;
    case '\b':
switchD_14126130c_caseD_8:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_178);
    default:
      switch(cVar6) {
      case '@':
        break;
      case 'A':
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_178);
      case 'B':
      case 'D':
      case 'E':
      case 'F':
      case 'G':
        break;
      case 'C':
        goto switchD_14126130c_caseD_3;
      case 'H':
        goto switchD_14126130c_caseD_8;
      default:
        switch(cVar6) {
        case -0x80:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_178);
        case -0x7f:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_178);
        case -0x7d:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_178);
        case -0x78:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_178);
        }
      }
    case '\0':
    case '\x01':
    case '\x02':
    case '\x05':
    case '\x06':
    case '\a':
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_178);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126154a FUN_14126154a body=842 status=ok
// SIG undefined FUN_14126154a(void)

undefined8
FUN_14126154a(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,double param_5
             ,undefined8 param_6,undefined8 param_7,double *param_8,undefined8 *param_9,
             double *param_10,double *param_11,undefined8 param_12,undefined8 param_13)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_188 [32];
  double local_168;
  undefined8 local_160;
  undefined8 local_158;
  double *local_150;
  undefined8 *local_148;
  double *local_140;
  double *local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  dVar6 = param_4[2] * *(double *)(param_1 + 0x48);
  dVar4 = param_4[1] * *(double *)(param_1 + 0x40);
  dVar5 = *param_4 * *(double *)(param_1 + 0x38);
  dVar3 = SQRT(dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4);
  if (2.2250738585072014e-308 < dVar3) {
    local_78 = 1.0 / dVar3;
    local_168 = dVar3 * param_5;
    local_68 = dVar6 * local_78;
    local_70 = dVar4 * local_78;
    local_78 = dVar5 * local_78;
    local_118 = *param_3;
    uStack_110 = param_3[1];
    local_e8 = *(double *)(param_1 + 0x48) * (double)param_3[6];
    dStack_f0 = *(double *)(param_1 + 0x40) * (double)param_3[5];
    local_108 = param_3[2];
    uStack_100 = param_3[3];
    local_f8 = *(double *)(param_1 + 0x38) * (double)param_3[4];
    uStack_e0 = 0;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0x3ff0000000000000;
    local_c8 = 0x3ff0000000000000;
    uStack_c0 = 0;
    local_120 = param_1 + 0x20;
    local_128 = param_13;
    local_130 = param_12;
    local_138 = &local_a8;
    local_140 = &local_90;
    local_148 = &local_b8;
    local_150 = &local_b0;
    local_158 = param_7;
    local_160 = param_6;
    cVar1 = FUN_141261896(*(undefined8 *)(param_1 + 0x88));
    if ((cVar1 != '\0') && (local_b0 < 1.0)) {
      *param_8 = local_b0;
      *param_9 = local_b8;
      dVar6 = *(double *)(param_1 + 0x30);
      dVar4 = *(double *)(param_1 + 0x28);
      *param_10 = *(double *)(param_1 + 0x20) * local_90;
      param_10[1] = dVar4 * local_88;
      param_10[2] = dVar6 * local_80;
      local_98 = *(double *)(param_1 + 0x48) * local_98;
      local_a0 = *(double *)(param_1 + 0x40) * local_a0;
      local_a8 = *(double *)(param_1 + 0x38) * local_a8;
      dVar6 = local_98 * local_98 + local_a8 * local_a8 + local_a0 * local_a0;
      if (((dVar6 != 1.0) || (dVar4 = local_98, dVar5 = local_a0, dVar3 = local_a8, NAN(dVar6))) &&
         (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar3 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar4 = local_98 * dVar6;
        dVar5 = local_a0 * dVar6;
        dVar3 = local_a8 * dVar6;
      }
      *param_11 = dVar3;
      param_11[1] = dVar5;
      param_11[2] = dVar4;
      uVar2 = 1;
      goto LAB_141261829;
    }
  }
  uVar2 = 0;
LAB_141261829:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 141261896 FUN_141261896 body=4399 status=ok
// SIG undefined FUN_141261896(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_141261896(longlong param_1,longlong *param_2,undefined1 (*param_3) [16],double *param_4,
             double param_5,double param_6,longlong **param_7,undefined8 *param_8,longlong *param_9,
             undefined8 *param_10,double *param_11,int *param_12,undefined8 *param_13,
             double *param_14)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  undefined8 *puVar9;
  double *pdVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  double *pdVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  int *piVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  float fVar40;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar61;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar62;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar77;
  float fVar80;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar78;
  float fVar82;
  undefined1 auVar75 [16];
  float fVar79;
  float fVar81;
  float fVar83;
  undefined1 auVar76 [16];
  undefined1 auVar84 [16];
  float fVar85;
  float fVar86;
  float fVar88;
  float fVar89;
  undefined1 auVar87 [16];
  float fVar90;
  undefined1 *puVar91;
  undefined1 auStack_4e8 [32];
  longlong **local_4c8;
  undefined1 **local_4c0;
  undefined1 **local_4b8;
  undefined1 *local_4b0;
  undefined1 *local_4a8;
  undefined1 local_4a0;
  undefined *local_498;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  double dStack_470;
  undefined8 *local_460;
  undefined8 *local_458;
  longlong local_450;
  double *local_448;
  longlong *local_440;
  double *local_438;
  double *local_430;
  undefined8 *local_428;
  double *local_420;
  undefined1 (*local_418) [16];
  double *local_410;
  undefined8 *local_408;
  longlong *local_400;
  undefined8 *local_3f8;
  double *local_3f0;
  int *local_3e8;
  undefined8 *local_3e0;
  undefined1 *local_3d8;
  undefined1 local_3c9;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340 [3];
  undefined1 local_328 [16];
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined1 *local_270;
  double dStack_268;
  double local_260;
  int local_258;
  longlong local_250;
  longlong *local_248;
  longlong *local_240;
  double local_238;
  longlong **pplStack_230;
  double local_228;
  float local_220;
  float local_21c;
  double local_218;
  double dStack_210;
  double local_208;
  undefined1 local_1f8 [8];
  float fStack_1f0;
  float fStack_1ec;
  undefined1 local_1e8 [8];
  float fStack_1e0;
  undefined1 local_1d8 [8];
  float fStack_1d0;
  undefined1 local_1c8 [8];
  float fStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong *local_198;
  double dStack_190;
  code *local_188;
  double local_168;
  double dStack_160;
  double local_158;
  undefined1 local_14c [4];
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [8];
  float local_120;
  float local_10c;
  undefined1 *local_108;
  double dStack_100;
  code *local_f8;
  ulonglong local_f0;
  
  pdVar10 = param_14;
  piVar25 = param_12;
  pdVar21 = param_11;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  dVar3 = *param_14;
  dVar4 = param_14[1];
  dVar5 = param_14[2];
  local_348 = param_4[2] * dVar5;
  local_350 = param_4[1] * dVar4;
  dVar8 = *param_4 * dVar3;
  local_360 = SQRT(local_348 * local_348 + dVar8 * dVar8 + local_350 * local_350);
  dVar7 = 1.0 / local_360;
  local_358 = (double)(~-(ulonglong)(2.2250738585072014e-308 < local_360) & 0x3ff0000000000000 |
                      (ulonglong)(dVar8 * dVar7) & -(ulonglong)(2.2250738585072014e-308 < local_360)
                      );
  if (2.2250738585072014e-308 < local_360) {
    local_348 = local_348 * dVar7;
    local_350 = local_350 * dVar7;
  }
  else {
    local_350 = 0.0;
    local_348 = 0.0;
  }
  local_438 = &local_358;
  local_430 = &local_360;
  local_3c8 = *(double *)*param_3;
  dStack_3c0 = *(double *)(*param_3 + 8);
  local_3b8 = *(double *)param_3[1];
  dStack_3b0 = *(double *)(param_3[1] + 8);
  local_460 = &param_6;
  local_458 = &param_7;
  local_448 = param_14;
  local_398 = *(double *)param_3[3] * dVar5;
  dStack_3a0 = *(double *)(param_3[2] + 8) * dVar4;
  local_3a8 = *(double *)param_3[2] * dVar3;
  local_428 = &param_5;
  local_420 = &local_3c8;
  uStack_390 = 0;
  local_388 = 0x3ff0000000000000;
  uStack_380 = 0x3ff0000000000000;
  local_378 = 0x3ff0000000000000;
  uStack_370 = 0;
  local_3d8 = &local_3c9;
  local_3c9 = 0;
  local_408 = param_8;
  local_400 = param_9;
  local_3f8 = param_10;
  local_3f0 = param_11;
  local_3e8 = param_12;
  local_3e0 = param_13;
  local_450 = param_1;
  local_440 = param_2;
  local_418 = param_3;
  local_410 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e6da0e(&local_460,param_1 + 0x60);
  }
  else {
    local_228 = 0.0;
    local_238 = param_6;
    pplStack_230 = param_7;
    if (DAT_14c75eff8 == '\0') {
      local_238 = 0.0;
      pplStack_230 = (longlong **)0x0;
    }
    local_248 = (longlong *)(param_1 + 0x70);
    if (*(char *)(param_1 + 0xd8) == '\x01') {
      dVar4 = (double)(&DAT_149931160)[0.0 <= dVar4];
      dStack_470 = 0.0;
      uVar26 = -(ulonglong)(0.0 <= dVar3);
      local_488._0_4_ = (uint)uVar26;
      local_488._4_4_ = (uint)(uVar26 >> 0x20);
      local_478._0_4_ = SUB84(dVar4,0);
      local_478._4_4_ = (uint)((ulonglong)dVar4 >> 0x20);
      local_488 = (double)CONCAT44(local_488._4_4_ & local_478._4_4_,
                                   (uint)local_488 & (uint)local_478);
      uStack_480 = 0;
      uVar26 = ~uVar26 & (ulonglong)-dVar4 | (ulonglong)local_488;
      local_228 = (double)(~-(ulonglong)(0.0 <= dVar5) & (uVar26 ^ 0x8000000000000000) |
                          uVar26 & -(ulonglong)(0.0 <= dVar5));
      local_478 = dVar4;
    }
    local_208 = param_14[2];
    local_218 = *param_14;
    dStack_210 = param_14[1];
    local_298 = 3.4028234663852886e+38;
    local_290 = (undefined1 *)0x47efffffe0000000;
    local_258 = -1;
    local_220 = (float)local_360;
    local_21c = (float)param_5;
    local_1d8._0_4_ = (undefined4)local_358;
    local_1d8._4_4_ = (undefined4)local_350;
    fStack_1d0 = (float)local_348;
    register0x0000124c = 0;
    local_1b8 = CONCAT44((float)local_228,(float)local_228);
    fVar47 = (float)local_3b8;
    fVar61 = (float)dStack_3b0;
    fVar63 = (float)local_3c8;
    fVar77 = (float)dStack_3c0;
    local_1e8._0_4_ = (undefined4)local_3a8;
    local_1e8._4_4_ = (undefined4)dStack_3a0;
    fStack_1e0 = (float)local_398;
    register0x0000128c = 0;
    fVar30 = fVar63 * fVar63 + fVar77 * fVar77;
    fVar40 = fVar47 * fVar47 + fVar61 * fVar61;
    auVar50._0_4_ = fVar40 + fVar30;
    auVar50._4_4_ = fVar40 + fVar30;
    auVar50._8_4_ = fVar30 + fVar40;
    auVar50._12_4_ = fVar30 + fVar40;
    auVar87._4_4_ = -(uint)(1e-08 <= auVar50._4_4_);
    auVar87._0_4_ = -(uint)(1e-08 <= auVar50._0_4_);
    auVar87._8_4_ = -(uint)(1e-08 <= auVar50._8_4_);
    auVar87._12_4_ = -(uint)(1e-08 <= auVar50._12_4_);
    auVar50 = sqrtps(auVar50,auVar50);
    auVar50 = divps(_DAT_1499314a0,auVar50);
    auVar52._0_4_ = auVar50._0_4_ * fVar63;
    auVar52._4_4_ = auVar50._4_4_ * fVar77;
    auVar52._8_4_ = auVar50._8_4_ * fVar47;
    auVar52._12_4_ = auVar50._12_4_ * fVar61;
    _local_1f8 = blendvps(_DAT_149932320,auVar52,auVar87);
    local_308 = DAT_14c8464e0;
    uStack_300 = DAT_14c8464e8;
    local_2f8 = DAT_14c8464f0;
    uStack_2f0 = 0;
    local_2e8 = 0x3ff0000000000000;
    uStack_2e0 = 0x3ff0000000000000;
    local_2d8 = 0x3ff0000000000000;
    uStack_2d0 = 0;
    local_328 = *param_3;
    local_318 = local_3b8;
    uStack_310 = dStack_3b0;
    local_250 = param_1;
    local_240 = param_2;
    _local_1c8 = _local_1d8;
    uStack_1b0 = local_1b8;
    (**(code **)(*param_2 + 0x80))(param_2,&local_198);
    FUN_1400c6592(&local_198,&local_2c8,local_328);
    lVar16 = 0;
    do {
      uVar26 = -(ulonglong)(ABS(pdVar10[lVar16]) < 9.999999974752427e-07);
      local_340[lVar16] =
           (double)(uVar26 & 0x412e8480014aeccc | ~uVar26 & (ulonglong)(1.0 / pdVar10[lVar16]));
      lVar16 = lVar16 + 1;
    } while (lVar16 != 3);
    local_488 = param_5;
    if (*(int *)(param_1 + 0xe8) != 0) {
      dVar3 = *(double *)param_3[3];
      dVar4 = *(double *)(param_3[2] + 8);
      dVar5 = *(double *)param_3[2];
      dVar8 = *param_4;
      dVar7 = param_4[1];
      local_478 = param_4[2];
      dStack_470 = 0.0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      FUN_14481578e(&local_1a8,0x10);
      uVar26 = uStack_1a0;
      lVar16 = (longlong)(int)uStack_1a0;
      uVar13 = (int)uStack_1a0 + 1;
      uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar13);
      if (uStack_1a0._4_4_ < uVar13) {
        FUN_1446f48e2(&local_1a8,uVar26 & 0xffffffff);
      }
      *(undefined4 *)(local_1a8 + lVar16 * 4) = 0;
      if ((int)uStack_1a0 != 0) {
        fVar40 = (float)(((local_2a0 - local_2b8) * 0.5 + local_2b8) * local_340[2] + dVar3);
        fVar61 = (float)(((local_2b0 - local_2c8) * 0.5 + local_2c8) * local_340[0] + dVar5);
        fVar63 = (float)(((local_2a8 - local_2c0) * 0.5 + local_2c0) * local_340[1] + dVar4);
        fVar47 = (float)((local_2a0 - local_2b8) * ABS(local_340[2]) * 0.5);
        fVar77 = (float)((local_2b0 - local_2c8) * ABS(local_340[0]) * 0.5);
        fVar85 = (float)((local_2a8 - local_2c0) * ABS(local_340[1]) * 0.5);
        fVar30 = (float)local_488;
        auVar84._4_4_ = (float)dVar7;
        auVar84._0_4_ = (float)dVar8;
        auVar84._8_4_ = (float)local_478;
        auVar84._12_4_ = (float)dStack_470;
        auVar87 = divps(_DAT_1499314a0,auVar84);
        uVar13 = -(uint)(ABS((float)dVar8) < 1e-08);
        uVar27 = -(uint)(ABS((float)dVar7) < 1e-08);
        uVar28 = -(uint)(ABS((float)local_478) < 1e-08);
        uVar29 = -(uint)(ABS((float)dStack_470) < 1e-08);
        do {
          iVar6 = (int)uStack_1a0;
          uStack_1a0 = CONCAT44(uStack_1a0._4_4_,iVar6 + -1);
          lVar24 = (longlong)*(int *)(local_1a8 + -4 + (longlong)iVar6 * 4) * 0x50 +
                   *(longlong *)(param_1 + 0xe0);
          lVar16 = 0;
          bVar11 = true;
          do {
            bVar20 = bVar11;
            uVar26 = uStack_1a0;
            iVar6 = *(int *)(lVar24 + 0x40 + lVar16 * 4);
            lVar23 = (longlong)iVar6;
            if (lVar23 != -1) {
              lVar18 = lVar16 * 0x20;
              pfVar2 = (float *)(lVar24 + 0x10 + lVar18);
              pfVar1 = (float *)(lVar24 + lVar18);
              auVar42._4_4_ = -(uint)(fVar63 < pfVar1[1] - fVar85);
              auVar42._0_4_ = -(uint)(fVar61 < *pfVar1 - fVar77);
              auVar42._8_4_ = -(uint)(fVar40 < pfVar1[2] - fVar47);
              auVar42._12_4_ = -(uint)(0.0 < pfVar1[3] - 0.0);
              auVar66._4_4_ = -(uint)(pfVar2[1] + fVar85 < fVar63);
              auVar66._0_4_ = -(uint)(*pfVar2 + fVar77 < fVar61);
              auVar66._8_4_ = -(uint)(pfVar2[2] + fVar47 < fVar40);
              auVar66._12_4_ = -(uint)(pfVar2[3] + 0.0 < 0.0);
              auVar66 = auVar66 | auVar42;
              auVar67._0_4_ = auVar66._0_4_ & uVar13;
              auVar67._4_4_ = auVar66._4_4_ & uVar27;
              auVar67._8_4_ = auVar66._8_4_ & uVar28;
              auVar67._12_4_ = auVar66._12_4_ & uVar29;
              iVar17 = movmskps((int)lVar18,auVar67);
              if (iVar17 == 0) {
                auVar43._4_4_ = fVar30;
                auVar43._0_4_ = fVar30;
                auVar43._8_4_ = fVar30;
                auVar43._12_4_ = fVar30;
                fVar86 = auVar87._0_4_;
                fVar88 = auVar87._4_4_;
                fVar89 = auVar87._8_4_;
                fVar90 = auVar87._12_4_;
                auVar51._0_4_ = ((*pfVar2 + fVar77) - fVar61) * fVar86;
                auVar51._4_4_ = ((pfVar2[1] + fVar85) - fVar63) * fVar88;
                auVar51._8_4_ = ((pfVar2[2] + fVar47) - fVar40) * fVar89;
                auVar51._12_4_ = ((pfVar2[3] + 0.0) - 0.0) * fVar90;
                auVar68._0_8_ =
                     CONCAT44(~uVar27 & (uint)(((pfVar1[1] - fVar85) - fVar63) * fVar88),
                              ~uVar13 & (uint)(((*pfVar1 - fVar77) - fVar61) * fVar86));
                auVar68._8_4_ = ~uVar28 & (uint)(((pfVar1[2] - fVar47) - fVar40) * fVar89);
                auVar68._12_4_ = ~uVar29 & (uint)(((pfVar1[3] - 0.0) - 0.0) * fVar90);
                auVar31._4_4_ = uVar27;
                auVar31._0_4_ = uVar13;
                auVar31._8_4_ = uVar28;
                auVar31._12_4_ = uVar29;
                auVar52 = blendvps(auVar51,auVar43,auVar31);
                auVar32._8_4_ = auVar68._8_4_;
                auVar32._0_8_ = auVar68._0_8_;
                auVar32._12_4_ = auVar68._12_4_;
                auVar50 = minps(auVar32,auVar52);
                auVar52 = maxps(auVar68,auVar52);
                auVar33._12_4_ = auVar50._12_4_;
                auVar53._0_8_ = auVar50._4_8_;
                auVar53._8_4_ = auVar50._0_4_;
                auVar53._12_4_ = auVar33._12_4_;
                auVar84 = maxps(auVar50,auVar53);
                auVar33._4_4_ = auVar50._0_4_;
                auVar33._0_4_ = auVar50._8_4_;
                auVar33._8_4_ = auVar50._4_4_;
                auVar50 = maxps(auVar84,auVar33);
                auVar84 = maxps(auVar50,ZEXT816(0));
                auVar69._12_4_ = auVar52._12_4_;
                auVar34._0_8_ = auVar52._4_8_;
                auVar34._8_4_ = auVar52._0_4_;
                auVar34._12_4_ = auVar69._12_4_;
                auVar50 = minps(auVar52,auVar34);
                auVar69._4_4_ = auVar52._0_4_;
                auVar69._0_4_ = auVar52._8_4_;
                auVar69._8_4_ = auVar52._4_4_;
                auVar50 = minps(auVar50,auVar69);
                auVar50 = minps(auVar50,auVar43);
                auVar54._4_4_ = -(uint)(auVar50._4_4_ < auVar84._4_4_);
                auVar54._0_4_ = -(uint)(auVar50._0_4_ < auVar84._0_4_);
                auVar54._8_4_ = -(uint)(auVar50._8_4_ < auVar84._8_4_);
                auVar54._12_4_ = -(uint)(auVar50._12_4_ < auVar84._12_4_);
                iVar17 = movmskps(0,auVar54);
                if (iVar17 == 0) {
                  iVar17 = *(int *)(lVar24 + 0x48 + lVar16 * 4);
                  if (iVar17 == 0) {
                    lVar16 = (longlong)(int)uStack_1a0;
                    uVar15 = (int)uStack_1a0 + 1;
                    uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar15);
                    if (uStack_1a0._4_4_ < uVar15) {
                      FUN_1446f48e2(&local_1a8,uVar26 & 0xffffffff);
                    }
                    *(int *)(local_1a8 + lVar16 * 4) = iVar6;
                  }
                  else if (0 < iVar17) {
                    do {
                      lVar16 = *(longlong *)(param_1 + 0xf0);
                      pfVar2 = (float *)(lVar16 + 0x10 + lVar23 * 0x20);
                      pfVar1 = (float *)(lVar16 + lVar23 * 0x20);
                      auVar44._4_4_ = -(uint)(fVar63 < pfVar1[1] - fVar85);
                      auVar44._0_4_ = -(uint)(fVar61 < *pfVar1 - fVar77);
                      auVar44._8_4_ = -(uint)(fVar40 < pfVar1[2] - fVar47);
                      auVar44._12_4_ = -(uint)(0.0 < pfVar1[3] - 0.0);
                      auVar70._4_4_ = -(uint)(pfVar2[1] + fVar85 < fVar63);
                      auVar70._0_4_ = -(uint)(*pfVar2 + fVar77 < fVar61);
                      auVar70._8_4_ = -(uint)(pfVar2[2] + fVar47 < fVar40);
                      auVar70._12_4_ = -(uint)(pfVar2[3] + 0.0 < 0.0);
                      auVar70 = auVar70 | auVar44;
                      auVar71._0_4_ = auVar70._0_4_ & uVar13;
                      auVar71._4_4_ = auVar70._4_4_ & uVar27;
                      auVar71._8_4_ = auVar70._8_4_ & uVar28;
                      auVar71._12_4_ = auVar70._12_4_ & uVar29;
                      iVar14 = movmskps((int)lVar16,auVar71);
                      if (iVar14 == 0) {
                        auVar45._4_4_ = fVar30;
                        auVar45._0_4_ = fVar30;
                        auVar45._8_4_ = fVar30;
                        auVar45._12_4_ = fVar30;
                        auVar55._0_4_ = ((*pfVar2 + fVar77) - fVar61) * fVar86;
                        auVar55._4_4_ = ((pfVar2[1] + fVar85) - fVar63) * fVar88;
                        auVar55._8_4_ = ((pfVar2[2] + fVar47) - fVar40) * fVar89;
                        auVar55._12_4_ = ((pfVar2[3] + 0.0) - 0.0) * fVar90;
                        auVar72._0_8_ =
                             CONCAT44(~uVar27 & (uint)(((pfVar1[1] - fVar85) - fVar63) * fVar88),
                                      ~uVar13 & (uint)(((*pfVar1 - fVar77) - fVar61) * fVar86));
                        auVar72._8_4_ = ~uVar28 & (uint)(((pfVar1[2] - fVar47) - fVar40) * fVar89);
                        auVar72._12_4_ = ~uVar29 & (uint)(((pfVar1[3] - 0.0) - 0.0) * fVar90);
                        auVar35._4_4_ = uVar27;
                        auVar35._0_4_ = uVar13;
                        auVar35._8_4_ = uVar28;
                        auVar35._12_4_ = uVar29;
                        auVar52 = blendvps(auVar55,auVar45,auVar35);
                        auVar36._8_4_ = auVar72._8_4_;
                        auVar36._0_8_ = auVar72._0_8_;
                        auVar36._12_4_ = auVar72._12_4_;
                        auVar50 = minps(auVar36,auVar52);
                        auVar52 = maxps(auVar72,auVar52);
                        auVar37._12_4_ = auVar50._12_4_;
                        auVar56._0_8_ = auVar50._4_8_;
                        auVar56._8_4_ = auVar50._0_4_;
                        auVar56._12_4_ = auVar37._12_4_;
                        auVar84 = maxps(auVar50,auVar56);
                        auVar37._4_4_ = auVar50._0_4_;
                        auVar37._0_4_ = auVar50._8_4_;
                        auVar37._8_4_ = auVar50._4_4_;
                        auVar50 = maxps(auVar84,auVar37);
                        auVar84 = maxps(auVar50,ZEXT816(0));
                        auVar73._12_4_ = auVar52._12_4_;
                        auVar38._0_8_ = auVar52._4_8_;
                        auVar38._8_4_ = auVar52._0_4_;
                        auVar38._12_4_ = auVar73._12_4_;
                        auVar50 = minps(auVar52,auVar38);
                        auVar73._4_4_ = auVar52._0_4_;
                        auVar73._0_4_ = auVar52._8_4_;
                        auVar73._8_4_ = auVar52._4_4_;
                        auVar50 = minps(auVar50,auVar73);
                        auVar50 = minps(auVar50,auVar45);
                        auVar57._4_4_ = -(uint)(auVar50._4_4_ < auVar84._4_4_);
                        auVar57._0_4_ = -(uint)(auVar50._0_4_ < auVar84._0_4_);
                        auVar57._8_4_ = -(uint)(auVar50._8_4_ < auVar84._8_4_);
                        auVar57._12_4_ = -(uint)(auVar50._12_4_ < auVar84._12_4_);
                        iVar14 = movmskps(0,auVar57);
                        if (iVar14 == 0) {
                          fVar48 = (float)local_208;
                          fVar41 = (float)local_218;
                          fVar46 = (float)dStack_210;
                          lVar16 = *local_248;
                          lVar19 = (longlong)(int)lVar23;
                          uVar26 = (ulonglong)*(ushort *)(lVar16 + lVar19 * 6);
                          lVar18 = *(longlong *)(local_250 + 0x48);
                          uVar22 = (ulonglong)*(ushort *)(lVar16 + 2 + lVar19 * 6);
                          auVar39._8_8_ = 0;
                          auVar39._0_8_ = *(ulonglong *)(lVar18 + uVar26 * 0xc);
                          auVar50 = insertps(auVar39,*(undefined4 *)(lVar18 + 8 + uVar26 * 0xc),0x28
                                            );
                          uVar26 = (ulonglong)*(ushort *)(lVar16 + 4 + lVar19 * 6);
                          auVar74._8_8_ = 0;
                          auVar74._0_8_ = *(ulonglong *)(lVar18 + uVar22 * 0xc);
                          auVar84 = insertps(auVar74,*(undefined4 *)(lVar18 + 8 + uVar22 * 0xc),0x28
                                            );
                          auVar58._8_8_ = 0;
                          auVar58._0_8_ = *(ulonglong *)(lVar18 + uVar26 * 0xc);
                          auVar52 = insertps(auVar58,*(undefined4 *)(lVar18 + 8 + uVar26 * 0xc),0x28
                                            );
                          local_328._0_4_ = auVar50._0_4_ * fVar41;
                          local_328._4_4_ = auVar50._4_4_ * fVar46;
                          local_328._8_4_ = auVar50._8_4_ * fVar48;
                          local_328._12_4_ = auVar50._12_4_ * 0.0;
                          fVar64 = auVar84._0_4_ * fVar41;
                          fVar78 = auVar84._4_4_ * fVar46;
                          fVar80 = auVar84._8_4_ * fVar48;
                          fVar82 = auVar84._12_4_ * 0.0;
                          fVar41 = auVar52._0_4_ * fVar41;
                          fVar46 = auVar52._4_4_ * fVar46;
                          fVar48 = auVar52._8_4_ * fVar48;
                          fVar62 = auVar52._12_4_ * 0.0;
                          local_318 = (double)CONCAT44(fVar78,fVar64);
                          uStack_310 = (double)CONCAT44(fVar82,fVar80);
                          local_308 = CONCAT44(fVar46,fVar41);
                          uStack_300 = CONCAT44(fVar62,fVar48);
                          fVar41 = fVar41 - local_328._0_4_;
                          fVar46 = fVar46 - local_328._4_4_;
                          fVar48 = fVar48 - local_328._8_4_;
                          fVar62 = fVar62 - local_328._12_4_;
                          fVar64 = fVar64 - local_328._0_4_;
                          fVar78 = fVar78 - local_328._4_4_;
                          fVar80 = fVar80 - local_328._8_4_;
                          fVar82 = fVar82 - local_328._12_4_;
                          fVar49 = fVar46 * fVar64 - fVar78 * fVar41;
                          fVar46 = fVar48 * fVar78 - fVar80 * fVar46;
                          fVar41 = fVar41 * fVar80 - fVar64 * fVar48;
                          fVar48 = fVar62 * fVar82 - fVar82 * fVar62;
                          if ((local_228 != 0.0) || (NAN(local_228))) {
                            fVar62 = fStack_1c0 * fVar49 +
                                     (float)local_1c8._0_4_ * fVar46 +
                                     (float)local_1c8._4_4_ * fVar41;
                            auVar76._4_4_ = -(uint)(0.0 < fVar62 * local_1b8._4_4_);
                            auVar76._0_4_ = -(uint)(0.0 < fVar62 * (float)local_1b8);
                            auVar76._8_4_ = -(uint)(0.0 < fVar62 * (float)uStack_1b0);
                            auVar76._12_4_ = -(uint)(0.0 < fVar62 * uStack_1b0._4_4_);
                            iVar14 = movmskps((int)lVar18,auVar76);
                            if (iVar14 != 0) goto LAB_14126208a;
                          }
                          fVar82 = local_21c * local_220;
                          fVar48 = fVar48 * fVar48;
                          auVar59._0_4_ = fVar41 * fVar41 + fVar46 * fVar46;
                          auVar59._4_4_ = fVar46 * fVar46 + fVar41 * fVar41;
                          auVar59._8_4_ = fVar48 + fVar49 * fVar49;
                          auVar59._12_4_ = fVar49 * fVar49 + fVar48;
                          auVar75._0_4_ = auVar59._8_4_ + auVar59._0_4_;
                          auVar75._4_4_ = auVar59._12_4_ + auVar59._4_4_;
                          auVar75._8_4_ = auVar59._0_4_ + auVar59._8_4_;
                          auVar75._12_4_ = auVar59._4_4_ + auVar59._12_4_;
                          auVar50 = sqrtps(auVar59,auVar75);
                          auVar50 = divps(_DAT_1499314a0,auVar50);
                          fVar46 = fVar46 * auVar50._0_4_;
                          fVar41 = fVar41 * auVar50._4_4_;
                          fVar49 = fVar49 * auVar50._8_4_;
                          fVar65 = (float)local_1f8._0_4_ * -1.0;
                          fVar79 = (float)local_1f8._4_4_ * -1.0;
                          fVar81 = fStack_1f0 * -1.0;
                          fVar83 = fStack_1ec * 1.0;
                          fVar48 = fVar41 * fVar65 - fVar46 * fVar79;
                          fVar64 = fVar49 * fVar79 - fVar41 * fVar81;
                          fVar80 = fVar46 * fVar81 - fVar49 * fVar65;
                          fVar48 = fVar48 + fVar48;
                          fVar64 = fVar64 + fVar64;
                          fVar80 = fVar80 + fVar80;
                          fVar62 = (fVar48 * fVar79 - fVar80 * fVar81) + fVar83 * fVar64 + fVar46;
                          fVar78 = (fVar64 * fVar81 - fVar48 * fVar65) + fVar83 * fVar80 + fVar41;
                          fVar49 = (fVar80 * fVar65 - fVar64 * fVar79) + fVar83 * fVar48 + fVar49;
                          fVar41 = local_328._0_4_ -
                                   (fVar82 * (float)local_1d8._0_4_ + (float)local_1e8._0_4_);
                          fVar46 = local_328._4_4_ -
                                   (fVar82 * (float)local_1d8._4_4_ + (float)local_1e8._4_4_);
                          fVar48 = local_328._8_4_ - (fVar82 * fStack_1d0 + fStack_1e0);
                          fVar64 = fVar46 * fVar65 - fVar41 * fVar79;
                          fVar80 = fVar48 * fVar79 - fVar46 * fVar81;
                          fVar82 = fVar41 * fVar81 - fVar48 * fVar65;
                          fVar64 = fVar64 + fVar64;
                          fVar80 = fVar80 + fVar80;
                          fVar82 = fVar82 + fVar82;
                          local_198 = (longlong *)(double)(0.0 - fVar62);
                          dStack_190 = (double)(0.0 - fVar78);
                          local_188 = (code *)(double)(0.0 - fVar49);
                          lVar16 = 0;
                          do {
                            if (0.0 < (double)(&local_198)[lVar16] ||
                                (double)(&local_198)[lVar16] == 0.0) {
                              puVar91 = (undefined1 *)local_240[lVar16 + 7];
                            }
                            else {
                              puVar91 = (undefined1 *)((double)local_240[lVar16 + 4] + 0.0);
                            }
                            (&local_108)[lVar16] = puVar91;
                            lVar16 = lVar16 + 1;
                          } while (lVar16 != 3);
                          fVar41 = fVar49 * ((fVar48 + fVar83 * fVar64 +
                                             (fVar65 * fVar82 - fVar79 * fVar80)) -
                                            (float)(double)local_f8) +
                                   fVar62 * ((fVar41 + fVar83 * fVar80 +
                                             (fVar79 * fVar64 - fVar81 * fVar82)) -
                                            (float)(double)local_108) +
                                   fVar78 * ((fVar46 + fVar83 * fVar82 +
                                             (fVar81 * fVar80 - fVar65 * fVar64)) -
                                            (float)dStack_100);
                          auVar60._4_4_ = -(uint)(fVar41 < (float)local_238 - 0.0);
                          auVar60._0_4_ = -(uint)(fVar41 < (float)local_238 - 0.0);
                          auVar60._8_4_ = -(uint)(fVar41 < (float)local_238 - 0.0);
                          auVar60._12_4_ = -(uint)(fVar41 < (float)local_238 - 0.0);
                          iVar14 = movmskps(3,auVar60);
                          if (iVar14 == 0) {
                            local_198 = local_240;
                            dStack_190 = (double)(ulonglong)(uint)(float)(double)local_240[2];
                            local_188 = FUN_144857b9e;
                            local_108 = local_328;
                            dStack_100 = 0.0;
                            local_f8 = FUN_14014b546;
                            local_498 = &DAT_149f52c20;
                            local_4a8 = local_138;
                            local_4b0 = local_128;
                            local_4b8 = (undefined1 **)&local_10c;
                            local_4c0 = (undefined1 **)CONCAT44(local_4c0._4_4_,local_220 * fVar30);
                            local_4c8 = (longlong **)local_1d8;
                            local_4a0 = 1;
                            cVar12 = FUN_1448541f8(&local_108,&local_198,local_1f8,local_1e8);
                            if (cVar12 != '\0') {
                              fVar41 = local_138._0_4_;
                              fVar46 = local_138._8_4_;
                              fVar48 = local_138._4_4_;
                              local_4b8 = &local_148;
                              local_4c0 = &local_140;
                              local_4c8 = pplStack_230;
                              FUN_1408d1e72((double)(fStack_1d0 * fVar46 +
                                                    (float)local_1d8._0_4_ * fVar41 +
                                                    (float)local_1d8._4_4_ * fVar48),
                                            (double)(fVar30 * local_220),(double)local_10c,local_238
                                           );
                              fVar49 = (float)(double)local_140 * fVar30;
                              if (fVar49 < fVar30) {
                                local_198 = (longlong *)(double)local_128._0_4_;
                                dStack_190 = (double)local_128._4_4_;
                                local_188 = (code *)(double)local_120;
                                local_108 = (undefined1 *)(double)fVar41;
                                dStack_100 = (double)fVar48;
                                local_f8 = (code *)(double)fVar46;
                                local_168 = local_218;
                                dStack_160 = dStack_210;
                                local_158 = local_208;
                                local_4b0 = local_14c;
                                local_4b8 = &local_288;
                                local_4c0 = &local_270;
                                local_4c8 = (longlong **)CONCAT44(local_4c8._4_4_,fVar49);
                                FUN_1409130d6(&local_168,&local_108,&local_198);
                                local_298 = (double)fVar49;
                                local_290 = local_148;
                                local_258 = (int)lVar23;
                                fVar30 = fVar49;
                              }
                            }
                            if (fVar30 <= 0.0) goto LAB_14126267e;
                          }
                        }
                      }
LAB_14126208a:
                      lVar23 = lVar23 + 1;
                    } while (lVar23 < iVar17 + iVar6);
                  }
                }
              }
            }
            lVar16 = 1;
            bVar11 = false;
          } while (bVar20);
        } while ((int)uStack_1a0 != 0);
      }
LAB_14126267e:
      pdVar21 = param_11;
      piVar25 = param_12;
      if (local_1a8 != 0) {
        FUN_1400020a8();
        pdVar21 = param_11;
        piVar25 = param_12;
      }
    }
    puVar9 = param_10;
    local_198 = (longlong *)(-(ulonglong)(0.0 < param_5) & (ulonglong)(local_298 / param_5));
    local_108 = local_290;
    if (DAT_14c75eff8 == '\0') {
      local_4c0 = &local_108;
      local_4c8 = &local_198;
      FUN_146d4aafb(param_4[2] * local_260 + *param_4 * (double)local_270 + param_4[1] * dStack_268,
                    param_5 * local_360,param_6,param_7);
    }
    if ((double)local_198 <= 1.0) {
      *param_8 = local_198;
      *param_9 = (longlong)local_108;
      puVar9[2] = local_278;
      *puVar9 = local_288;
      puVar9[1] = uStack_280;
      pdVar21[2] = local_260;
      *pdVar21 = (double)local_270;
      pdVar21[1] = dStack_268;
      *piVar25 = local_258;
      FUN_140490318(param_1,local_328);
      param_13[2] = local_318;
      *param_13 = local_328._0_8_;
      param_13[1] = local_328._8_8_;
      local_3c9 = 1;
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_4e8) == DAT_14c707940) {
    return local_3c9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412629c6 FUN_1412629c6 body=242 status=ok
// SIG undefined FUN_1412629c6(void)

undefined8 FUN_1412629c6(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  longlong local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_2;
  FUN_1400021e4(&local_28,&local_38);
  FUN_1400b22c2(&local_48,"fragment_");
  uVar2 = local_40 - 1;
  if (local_40 == 0) {
    uVar2 = 0;
  }
  uVar4 = local_30 - 1;
  puVar1 = local_38;
  if (local_30 == 0) {
    uVar4 = 0;
    puVar1 = &DAT_149dfb77a;
  }
  if ((int)uVar4 <= (int)uVar2) {
    uVar2 = uVar4;
  }
  uVar3 = (ulonglong)uVar2;
  if ((int)uVar2 < 1) {
    uVar3 = 0;
  }
  FUN_14006620a(&local_58,puVar1 + uVar3,uVar4 - (int)uVar3);
  uVar3 = (ulonglong)(local_50 - 1);
  if (local_50 == 0) {
    uVar3 = 0;
  }
  FUN_1446f82e2(param_1,uVar3,local_58,1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141262aba FUN_141262aba body=154 status=ok
// SIG undefined FUN_141262aba(void)

longlong FUN_141262aba(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_141262b0f;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_141262b0f:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_141262b54(param_1,param_2);
  return param_1;
}



// FUNCTION 141262b54 FUN_141262b54 body=243 status=ok
// SIG undefined FUN_141262b54(void)

undefined8 * FUN_141262b54(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *_Src;
  undefined8 *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140105186(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403951a8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar4 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      _Src = param_2 + 2;
      if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
        _Src = (undefined8 *)param_2[4];
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,_Src,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 141262c48 FUN_141262c48 body=123 status=ok
// SIG undefined FUN_141262c48(void)

void FUN_141262c48(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 141262cc4 FUN_141262cc4 body=277 status=ok
// SIG undefined FUN_141262cc4(void)

undefined8
FUN_141262cc4(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,undefined8 param_5
             ,byte param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_98 = 0;
  uStack_c0 = (ulonglong)param_4;
  local_b0 = param_5;
  local_b8 = (ushort)param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d8 = param_2;
  local_d0 = param_1;
  local_c8 = param_3;
  uVar1 = FUN_1402710dd(&local_d8);
  if (local_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141262dda FUN_141262dda body=228 status=ok
// SIG undefined FUN_141262dda(void)

longlong FUN_141262dda(void)

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
  if (DAT_14cad14a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_1479e08e7;
    local_40 = FUN_1463b7c43;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x198;
    FUN_14081cfa3(L"/Script/Engine",L"InputComponent",&DAT_14cad14a0,FUN_1463b7c1c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad14a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141262ec0 thunk_FUN_144760e82 body=5 status=ok
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



// FUNCTION 141262ec6 FUN_141262ec6 body=8 status=ok
// SIG undefined FUN_141262ec6(void)

longlong FUN_141262ec6(longlong param_1)

{
  return param_1 + 0x390;
}



// FUNCTION 141262ece FUN_141262ece body=32 status=ok
// SIG undefined FUN_141262ece(void)

void FUN_141262ece(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    *param_1 = 0;
    uVar1 = 0xffffffff;
  }
  else {
    *param_1 = *param_2;
    uVar1 = *(undefined4 *)(param_2 + 1);
  }
  *(undefined4 *)(param_1 + 1) = uVar1;
  return;
}



// FUNCTION 141262eee FUN_141262eee body=44 status=ok
// SIG undefined FUN_141262eee(void)

void FUN_141262eee(longlong param_1)

{
  if (-1 < *(int *)(param_1 + 300)) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  FUN_14791bb40(param_1 + 0x100,0);
  return;
}



// FUNCTION 141262f1a FUN_141262f1a body=228 status=ok
// SIG undefined FUN_141262f1a(void)

longlong FUN_141262f1a(void)

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
  if (DAT_14cb94538 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148a18249;
    local_40 = FUN_14657713c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb94538;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141263000 FUN_141263000 body=1921 status=ok
// SIG undefined FUN_141263000(void)

void FUN_141263000(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined *local_78;
  code *local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_78 = (undefined *)FUN_1446ddbd2();
      local_70 = FUN_1468d96f0;
      local_80 = 0;
      local_88 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_78 = (undefined *)FUN_1446ddbd2();
      local_70 = FUN_1409e12a0;
      local_80 = 0;
      local_88 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_50);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_50);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_50 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_50);
    }
  }
  local_58 = 0;
  uStack_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_78 = (undefined *)FUN_1446ddbd2();
      local_70 = FUN_1409e12a0;
      local_80 = 0;
      local_88 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_58 = (undefined4)uVar2;
      uStack_54 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
  uStack_5c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_70 = FUN_1408a629c;
      local_78 = &DAT_14c9520b8;
      local_80 = 0;
      local_88 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_5c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_5c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_5c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_5c = (undefined4)uVar2;
      local_58 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_5c);
    }
  }
  local_60 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_78 = (undefined *)FUN_1446ddbd2();
      local_70 = FUN_14067a048;
      local_80 = 0;
      local_88 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
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
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_60 = (undefined4)uVar2;
      uStack_5c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_60);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = CONCAT44(uStack_54,local_58);
  local_20 = 0;
  uStack_18 = 0;
  local_40 = local_50;
  local_38 = 0;
  uStack_30 = 0;
  local_88 = local_88 & 0xffffffffffffff00;
  FUN_141263782(local_48,&local_40,&local_28,uStack_5c);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141263782 FUN_141263782 body=755 status=ok
// SIG undefined FUN_141263782(void)

void FUN_141263782(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_1 == (longlong *)0x0) ||
     (((lVar3 = (**(code **)(*param_1 + 0x5d8))(), lVar3 == 0 &&
       (lVar3 = FUN_140ed3994(param_1), lVar3 == 0)) || (*(longlong *)(lVar3 + 0x448) == 0))))
  goto LAB_14126394b;
  lVar4 = FUN_140183ac4();
  lVar3 = *(longlong *)(lVar3 + 0x448);
  if ((((lVar3 == 0) || (lVar4 == 0)) || (lVar6 = *(longlong *)(lVar3 + 0x10), lVar6 == 0)) ||
     ((*(int *)(lVar6 + 0x38) < *(int *)(lVar4 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30)))) goto LAB_14126394b;
  lVar4 = param_3[1];
  if (lVar4 == 0) {
    uVar5 = FUN_141263ab0();
    lVar4 = FUN_14477b664(uVar5);
    param_3[1] = lVar4;
  }
  lVar6 = param_3[2];
  if (lVar6 == 0) {
    if ((*param_3 != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        param_3[2] = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar5,param_3);
        param_3[2] = lVar6;
        if (lVar6 != 0) goto LAB_1412639ea;
      }
    }
    local_58 = 0;
  }
  else {
LAB_1412639ea:
    puVar7 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(lVar6 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar4 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar4);
      DAT_14c947fe0 = lVar4;
    }
    FUN_140045924(DAT_14c947fe0,&local_58,puVar7,1);
  }
  local_50 = 0x7202;
  local_48 = 0;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar5 = FUN_141263a76();
    lVar4 = FUN_14477b664(uVar5);
    param_2[1] = lVar4;
  }
  lVar6 = param_2[2];
  if (lVar6 == 0) {
    if ((lVar4 != 0) && (*param_2 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        param_2[2] = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar5,param_2);
        param_2[2] = lVar6;
        if (lVar6 != 0) goto LAB_1412638ed;
      }
    }
    local_70 = 0;
  }
  else {
LAB_1412638ed:
    puVar7 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(lVar6 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar4 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar4);
      DAT_14c947fe0 = lVar4;
    }
    FUN_140045924(DAT_14c947fe0,&local_70,puVar7,1);
  }
  local_68 = 0x7201;
  local_60 = 0;
  local_78 = 0;
  FUN_141263aea(lVar3,&local_70,&local_58,param_4);
LAB_14126394b:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141263a76 FUN_141263a76 body=57 status=ok
// SIG undefined FUN_141263a76(void)

void FUN_141263a76(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b188 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b188 = FUN_140002ddd(FUN_1464ce615,uVar1,L"CameraModeDef");
  }
  return;
}



// FUNCTION 141263ab0 FUN_141263ab0 body=57 status=ok
// SIG undefined FUN_141263ab0(void)

void FUN_141263ab0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b1b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b1b8 = FUN_140002ddd(FUN_1464ce6d8,uVar1,L"CameraTransitionDef");
  }
  return;
}



// FUNCTION 141263aea FUN_141263aea body=253 status=ok
// SIG undefined FUN_141263aea(void)

void FUN_141263aea(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x8d0))();
  uVar2 = (longlong)(int)param_1[0x739] * 0x28;
  lVar1 = param_1[0x738] + uVar2;
  do {
    lVar3 = lVar1;
    if (uVar2 == 0) goto LAB_141263b7e;
    uVar2 = uVar2 - 0x28;
    lVar1 = lVar3 + -0x28;
  } while ((*(longlong *)(lVar3 + -0x28) != *param_2) ||
          (*(int *)(lVar3 + -0x20) != (int)param_2[1]));
  if ((int)(uVar2 >> 3) * -0x33333333 != -1) {
    FUN_14187437a(param_1 + 0x738);
    FUN_1418743f4(param_1 + 0x738);
  }
LAB_141263b7e:
  local_58 = *param_3;
  local_50 = *(undefined4 *)(param_3 + 1);
  local_48 = 0;
  FUN_141440d78(param_1,&local_58,param_4,0);
  param_1[0x74] = param_1[0x746];
  FUN_141440cd6(param_1 + 0x5d3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141263be8 FUN_141263be8 body=444 status=ok
// SIG undefined FUN_141263be8(void)

undefined4 *
FUN_141263be8(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141263f92();
  uVar8 = 0;
  FUN_141263e2c(local_48,0,*param_3,param_3[1]);
  *(undefined4 *)(local_48 + 10) = 0xffffffff;
  local_54 = local_50;
  iVar7 = *(int *)(local_48 + 1);
  iVar4 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    if (iVar7 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*local_48;
    }
    lVar5 = 0;
    uVar8 = 0;
    do {
      uVar6 = ((uint)(0x19 < (ushort)puVar2[lVar5] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar5]) -
              0x20;
      uVar8 = uVar8 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar8 ^ uVar6) & 0xff) * 4);
      uVar8 = uVar8 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
      lVar5 = lVar5 + 1;
    } while (iVar4 != (int)lVar5);
  }
  local_68 = param_4;
  cVar1 = FUN_141263da6(param_1,uVar8,local_48,&local_54);
  if (cVar1 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar6 < 4) {
      iVar7 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_48 + 0x54) = uVar8;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 10) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_141264174(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141263da6 FUN_141263da6 body=133 status=ok
// SIG undefined FUN_141263da6(void)

void FUN_141263da6(longlong *param_1,undefined8 param_2,void *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  void *_Dst;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar2 = FUN_141263ed8();
    if (iVar2 != -1) {
      _Dst = (void *)((longlong)iVar2 * 0x58 + *param_1);
      FUN_148fb86dc(_Dst);
      memmove(_Dst,param_3,0x50);
      FUN_148fb8652(param_1,*param_4,1);
      *param_4 = iVar2;
      uVar1 = 1;
      goto LAB_141263dda;
    }
  }
  uVar1 = 0;
LAB_141263dda:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 141263e2c FUN_141263e2c body=171 status=ok
// SIG undefined FUN_141263e2c(void)

undefined8 *
FUN_141263e2c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  plVar2 = (longlong *)*param_4;
  param_1[2] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 3) = (int)param_4[1];
  plVar2 = (longlong *)param_4[2];
  param_1[4] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 5) = (int)param_4[3];
  plVar2 = (longlong *)param_4[4];
  param_1[6] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 7) = (int)param_4[5];
  lVar3 = param_4[7];
  param_1[8] = param_4[6];
  param_1[9] = lVar3;
  return param_1;
}



// FUNCTION 141263ed8 FUN_141263ed8 body=186 status=ok
// SIG undefined FUN_141263ed8(void)

int FUN_141263ed8(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_141263f1b:
      lVar11 = (longlong)iVar1 * 0x58;
      iVar3 = *(int *)(lVar4 + 8 + lVar11);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar10 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar11) + lVar10);
          uVar9 = (ulonglong)uVar8;
          uVar6 = *(ushort *)(*param_3 + lVar10);
          if (uVar8 == uVar6) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar6 | uVar8)) goto LAB_141263f6d;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar7 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar7]) goto LAB_141263f6d;
          }
          lVar10 = lVar10 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_141263f73;
    }
  }
  return -1;
LAB_141263f6d:
  if (uVar8 == uVar6) {
    return iVar1;
  }
LAB_141263f73:
  iVar1 = *(int *)(lVar4 + 0x50 + lVar11);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_141263f1b;
}



// FUNCTION 141263f92 FUN_141263f92 body=481 status=ok
// SIG undefined FUN_141263f92(void)

int * FUN_141263f92(longlong *param_1,int *param_2)

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
      FUN_1403e7a24(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x58);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x58) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x58 + *param_1;
  return param_2;
}



// FUNCTION 141264174 FUN_141264174 body=714 status=ok
// SIG undefined FUN_141264174(void)

void FUN_141264174(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar5 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar14 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar10 = local_68 & 0xffffffff;
      uVar16 = local_68 >> 0x20;
    }
    uVar14 = (uint)local_58;
    iVar17 = local_58._4_4_;
    iVar11 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_7c = iVar11;
        local_70 = uVar10;
        puVar2 = (undefined8 *)(*param_1 + (longlong)iVar17 * 0x58);
        iVar11 = *(int *)(*param_1 + 8 + (longlong)iVar17 * 0x58);
        iVar4 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar4 = 0;
        }
        uVar5 = 0;
        if (0 < iVar4) {
          puVar15 = &DAT_149dfb77a;
          if (iVar11 != 0) {
            puVar15 = (undefined2 *)*puVar2;
          }
          lVar12 = 0;
          uVar5 = 0;
          do {
            uVar6 = ((uint)(ushort)puVar15[lVar12] +
                    (uint)(0x19 < (ushort)puVar15[lVar12] - 0x61) * 0x20) - 0x20;
            uVar5 = uVar5 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar5 ^ uVar6) & 0xff) * 4)
            ;
            uVar5 = uVar5 >> 8 ^
                    *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar5 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
            lVar12 = lVar12 + 1;
          } while (iVar4 != (int)lVar12);
        }
        uVar10 = (longlong)(int)uVar5 & (longlong)(int)param_1[9] - 1U;
        iVar11 = (int)uVar10;
        *(int *)((longlong)puVar2 + 0x54) = iVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar2 + 10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar11 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar17;
        uVar14 = uVar14 & ~(uint)uVar16;
        plVar7 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar7 = local_60;
        }
        iVar4 = (int)local_60[3];
        iVar17 = (int)local_70;
        lVar12 = (longlong)iVar17;
        uVar5 = *(uint *)((longlong)plVar7 + lVar12 * 4) & uVar14;
        uVar10 = local_70;
        iVar11 = local_7c;
        local_78 = local_60;
        if (uVar5 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar17) {
            iVar9 = iVar17;
          }
          if (iVar8 <= iVar17) break;
          lVar13 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar7 + lVar13 * 4 + lVar12 * 4 + 4);
            if (uVar5 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar9 - lVar12 == lVar13) goto LAB_141264400;
          }
          uVar14 = 0xffffffff;
          uVar10 = (ulonglong)(iVar17 + (int)lVar13 + 1);
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar3 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar17 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar17 < iVar4);
    }
  }
LAB_141264400:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141264440 FUN_141264440 body=1073 status=ok
// SIG undefined FUN_141264440(void)

longlong * FUN_141264440(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_2;
  local_50 = (longlong *)FUN_14001cc68(0x50,0x10);
  local_50[1] = (longlong)&DAT_100000001;
  *local_50 = (longlong)&PTR_FUN_14b429090;
  local_58 = local_50 + 2;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[7] = 0;
  local_50[2] = (longlong)&PTR_FUN_14b4290b0;
  local_50[8] = 0;
  local_50[9] = 0;
  FUN_141264872();
  iVar4 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar4 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x10);
    lVar11 = 0;
    do {
      lVar7 = *(longlong *)(lVar6 + lVar11);
      if (lVar7 != 0) {
        plVar8 = *(longlong **)(lVar6 + 8 + lVar11);
        if (plVar8 == (longlong *)0x0) {
          local_80 = *param_3;
          local_70 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
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
          local_80 = *param_3;
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          local_70 = plVar8;
        }
        local_78 = lVar7;
        FUN_140f360c6(lVar7,&local_68,&local_80);
        plVar1 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_70 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
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
        lVar7 = local_68;
        if (local_68 != 0) {
          plVar8 = (longlong *)(local_68 + 0x18);
          if (*(int *)(local_68 + 0x20) != 4) {
            FUN_1446efa72(plVar8,0,4,0x10);
            *(undefined4 *)(lVar7 + 0x20) = 4;
          }
          plVar1 = local_50;
          puVar9 = (undefined8 *)*plVar8;
          if (local_50 == (longlong *)0x0) {
            *puVar9 = &PTR_LAB_149e020b0;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar7 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar7 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar7;
            puVar9[2] = lVar10;
            *puVar9 = &PTR_FUN_14b4290d0;
            puVar9[3] = local_58;
            puVar9[4] = 0;
            puVar9[5] = &LAB_1407a56e6;
            *(undefined4 *)(puVar9 + 6) = 0;
          }
          else {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
            *puVar9 = &PTR_LAB_149e020b0;
            LOCK();
            UNLOCK();
            lVar10 = DAT_14c758608 + 1;
            lVar7 = DAT_14c758608 + 1;
            if (lVar10 == 0) {
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 2;
              lVar7 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar7;
            puVar9[2] = lVar10;
            *puVar9 = &PTR_FUN_14b4290d0;
            puVar9[3] = local_58;
            puVar9[4] = local_50;
            LOCK();
            *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
            UNLOCK();
            puVar9[5] = &LAB_1407a56e6;
            *(undefined4 *)(puVar9 + 6) = 0;
            LOCK();
            plVar8 = local_50 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
          plVar8 = local_60;
          lVar7 = local_68;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          plVar1 = local_58 + 6;
          iVar5 = (int)local_58[7];
          *(uint *)(local_58 + 7) = iVar5 + 1U;
          if (*(uint *)((longlong)local_58 + 0x3c) < iVar5 + 1U) {
            FUN_140f36142(plVar1,iVar5);
          }
          lVar10 = *plVar1;
          *(longlong *)(lVar10 + (longlong)iVar5 * 0x10) = lVar7;
          *(longlong **)(lVar10 + 8 + (longlong)iVar5 * 0x10) = plVar8;
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
        }
        plVar8 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      lVar11 = lVar11 + 0x18;
    } while ((longlong)iVar4 * 0x18 != lVar11);
  }
  plVar1 = local_50;
  plVar8 = local_88;
  *local_88 = (longlong)local_58;
  local_88[1] = (longlong)local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
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
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return plVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141264872 FUN_141264872 body=162 status=ok
// SIG undefined FUN_141264872(void)

void FUN_141264872(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1412648b1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1412648b1;
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
LAB_1412648b1:
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
                    /* WARNING: Could not recover jumptable at 0x000141264910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 141264914 FUN_141264914 body=286 status=ok
// SIG undefined FUN_141264914(void)

undefined8 FUN_141264914(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_141264a2c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141264a2c;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_141264a2c:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1412649d9;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1412649d9;
    }
  }
  uVar6 = 0;
LAB_1412649d9:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141264a34 FUN_141264a34 body=565 status=ok
// SIG undefined FUN_141264a34(void)

void FUN_141264a34(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = FUN_1447210f0();
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar4;
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    puVar4 = local_98;
    local_90 = 3;
    *local_98 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_98[2] = lVar5;
    *local_98 = &PTR_FUN_14b95c3a0;
    local_98[3] = 0;
    iVar6 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_98 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar6 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar6 = *(int *)(lVar3 + 0x10);
        bVar8 = iVar6 == 0;
        if (bVar8) {
          *(int *)(lVar3 + 0x10) = iVar7;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar6 = iVar7;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar6;
    puVar4[4] = param_1;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_98);
    local_48 = 1;
    FUN_14016fdb0(uVar2,local_a0,&local_88);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    if (local_90 != 0) {
      if (local_98 == (undefined8 *)0x0) goto LAB_141264b94;
      (**(code **)*local_98)(local_98,0);
      FUN_1446efa72(&local_98,0,0,0x10);
      local_90 = 0;
    }
    if (local_98 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_141264b94:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141264c6a FUN_141264c6a body=95 status=ok
// SIG undefined FUN_141264c6a(void)

void FUN_141264c6a(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_141264cba;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      uVar2 = *puVar3;
      goto LAB_141264cba;
    }
  }
  uVar2 = 0;
LAB_141264cba:
                    /* WARNING: Could not recover jumptable at 0x000141264cc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar2);
  return;
}



// FUNCTION 141264cca FUN_141264cca body=84 status=ok
// SIG undefined FUN_141264cca(void)

undefined8 FUN_141264cca(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 == param_2) && (plVar1 = (longlong *)param_1[0xb3], plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141264d0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x28))(plVar1,param_3,param_4);
    return uVar3;
  }
  return 0;
}



// FUNCTION 141264d1e FUN_141264d1e body=151 status=ok
// SIG undefined FUN_141264d1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_141264d1e(longlong param_1)

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
LAB_141264d94:
    uVar7 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        if (_DAT_00000778 != 0) {
          uVar7 = FUN_141264db6();
          return uVar7;
        }
        goto LAB_141264d94;
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
    if (*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x778) == 0) {
      uVar7 = 0;
    }
    else {
      uVar6 = FUN_141264db6();
      uVar7 = (ulonglong)uVar6;
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
  return uVar7;
}



// FUNCTION 141264db6 FUN_141264db6 body=1883 status=ok
// SIG undefined FUN_141264db6(void)

ulonglong FUN_141264db6(uint *param_1,longlong param_2,uint *param_3)

{
  void *pvVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined4 uStack_9c;
  int local_98;
  uint local_90;
  undefined4 uStack_8c;
  int iStack_88;
  uint local_84;
  longlong local_78;
  char *local_68;
  ulonglong uStack_60;
  int local_58;
  int local_54;
  longlong local_50;
  undefined8 uStack_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 4) + 0x38);
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0x40) < 1)) {
LAB_1412650c7:
    uVar9 = 0;
    goto LAB_1412650c9;
  }
  lVar10 = **(longlong **)(lVar3 + 0x38);
  if ((DAT_14c950c29 == '\x01') && (lVar10 != 0)) {
    FUN_1456cec3c(lVar10);
  }
  else if (lVar10 == 0) goto LAB_1412650c7;
  if (DAT_14cbce8b8 == param_2) {
    uVar2 = FUN_1441d8634(param_1,*(undefined4 *)(lVar10 + 0xe0));
    goto LAB_141264e35;
  }
  if (DAT_14cbce8c0 == param_2) {
    local_68 = (char *)0x0;
    uStack_60 = 0;
    uVar2 = FUN_1441d875e(param_1);
    *param_3 = uVar2;
    FUN_1447a1747(0,0);
  }
  else if (DAT_14cbce8c8 == param_2) {
    if (*(longlong *)(lVar3 + 0x30) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
    }
    uVar9 = 0;
    lVar3 = FUN_140149a73(uVar6,0);
    if (lVar3 == 0) goto LAB_1412650c9;
    plVar4 = (longlong *)FUN_1403a12cc(lVar3);
    if (plVar4 == (longlong *)0x0) goto LAB_1412650c7;
    local_68 = "Global.MainMissionComplete";
    uStack_60 = CONCAT35(uStack_60._5_3_,0x1a);
    local_a0 = FUN_14001a6c0(&local_68,1);
    uStack_9c = 0;
    FUN_1446dcdd4(&local_90);
    FUN_1409c5062(&local_68,&local_90);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if ((((local_58 == 0) || (local_54 == 0)) || (local_58 == DAT_14c948000)) ||
       ((local_54 == 1 || (local_54 < 2)))) {
      local_b0 = DAT_14c948620;
      local_b8 = DAT_14c948618;
    }
    else {
      local_b0 = *(undefined4 *)(local_40 + 0x14);
      local_b8 = *(undefined8 *)(local_40 + 0xc);
    }
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_a8,&local_b8);
    param_1 = &local_90;
    local_90 = local_90 & 0xffffff00;
    uStack_8c = 0;
    iStack_88 = 0;
    local_84 = 0;
    FUN_144976b9c(param_1,local_a8);
    if ((char)local_90 == '\x01') {
      bVar11 = local_84 != 0;
    }
    else {
      bVar11 = FUN_140321d1a(&local_90);
    }
    *param_3 = (uint)bVar11;
LAB_141264fab:
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (DAT_14cbce8f0 == param_2) {
      FUN_1459b8ed8(&local_68);
      plVar4 = (longlong *)FUN_1458b3986(param_1);
      if (plVar4 == (longlong *)0x0) goto LAB_141265358;
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 200))(plVar4);
      local_90 = 0;
      uStack_8c = 0;
      iStack_88 = *(int *)(puVar5 + 1);
      lVar3 = (longlong)iStack_88;
      pvVar1 = (void *)*puVar5;
      if (lVar3 == 0) {
        local_84 = 0;
      }
      else {
        FUN_1446dd7be(&local_90,iStack_88,0);
        memcpy((void *)CONCAT44(uStack_8c,local_90),pvVar1,lVar3 * 0xc);
      }
      uStack_9c = 0;
      local_98 = 0;
      pcVar7 = local_68;
      if ((int)uStack_60 == 0) {
        pcVar7 = "";
      }
      param_1 = (uint *)0x0;
      FUN_1405f0d29(&local_a0,pcVar7,0);
      lVar3 = CONCAT44(uStack_8c,local_90);
      if ((longlong)iStack_88 != 0) {
        lVar10 = 0;
        do {
          if (*(int *)(lVar3 + lVar10) == local_a0) {
            bVar12 = *(int *)(lVar3 + 8 + lVar10) == local_98;
          }
          else {
            bVar12 = false;
          }
        } while ((bVar12 == false) &&
                (bVar13 = (longlong)iStack_88 * 0xc + -0xc != lVar10, lVar10 = lVar10 + 0xc, bVar13)
                );
        goto LAB_141265478;
      }
LAB_14126547c:
      if (lVar3 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (DAT_14cbce8f8 != param_2) {
        if (DAT_14cbce8d0 == param_2) {
          local_90 = local_90 & 0xffffff00;
          uStack_8c = 0;
          iStack_88 = 0;
          local_84 = 0;
          if ((*(longlong *)(*(longlong *)(param_1 + 4) + 0x38) == 0) ||
             (lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x38) + 0x30),
             lVar3 == 0)) {
            param_1 = (uint *)0x0;
          }
          else {
            param_1 = *(uint **)(lVar3 + 0x360);
          }
          FUN_144928b90(&local_68,2);
          local_a0 = (int)DAT_14cbca638;
          uStack_9c = (undefined4)((ulonglong)DAT_14cbca638 >> 0x20);
          local_98 = DAT_14cbca640;
          FUN_144928d62(&local_58,1);
          lVar3 = FUN_140149a73(param_1,0);
          if (lVar3 != 0) {
            FUN_14039fc7b(&local_68,&local_90,lVar3,0);
          }
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          if ((local_90 & 0xff) == 3) {
            bVar12 = CONCAT44(iStack_88,uStack_8c) == 0;
LAB_141265109:
            uVar2 = (uint)!bVar12;
          }
          else {
            uVar2 = local_84;
            if ((local_90 & 0xff) != 2) {
              if ((char)local_90 == '\x01') {
                bVar12 = local_84 == 0;
                goto LAB_141265109;
              }
              uVar2 = 0;
            }
          }
LAB_141264e35:
          *param_3 = uVar2;
          goto LAB_141264e60;
        }
        if (DAT_14cbce8e8 == param_2) {
          bVar11 = FUN_145dcf70c(param_1);
          uVar2 = (uint)bVar11;
          goto LAB_141264e35;
        }
        if (DAT_14cbce8d8 == param_2) {
          plVar4 = (longlong *)FUN_1459b8f2e();
          if (plVar4 != (longlong *)0x0) {
            lVar3 = plVar4[0x22];
            if (lVar3 == 0) {
              (**(code **)(*plVar4 + 1000))(plVar4);
              lVar3 = plVar4[0x22];
              if (lVar3 == 0) goto LAB_1412652c6;
            }
            if (*(int *)(lVar3 + 0x30) == 0) {
LAB_14126549c:
              puVar8 = &DAT_149dfb77a;
            }
            else {
              puVar8 = *(undefined2 **)(lVar3 + 0x28);
            }
            goto LAB_1412654a3;
          }
LAB_1412652c6:
          local_68 = (char *)0x0;
          uStack_60 = 0;
          local_58 = 0;
          local_50 = 0;
          uStack_48 = 0;
        }
        else {
          if (DAT_14cbce8e0 != param_2) goto LAB_1412650c7;
          plVar4 = (longlong *)FUN_1459b8f2e();
          if (plVar4 == (longlong *)0x0) goto LAB_1412652c6;
          lVar3 = plVar4[0x22];
          if (lVar3 == 0) {
            (**(code **)(*plVar4 + 1000))(plVar4);
            lVar3 = plVar4[0x22];
            if (lVar3 == 0) goto LAB_1412652c6;
          }
          if (*(int *)(lVar3 + 0x70) == 0) goto LAB_14126549c;
          puVar8 = *(undefined2 **)(lVar3 + 0x68);
LAB_1412654a3:
          FUN_1446f470e(&local_90,puVar8,1);
          FUN_1446dcdd4(&local_68,&local_90);
        }
        bVar11 = FUN_1441d8f68(param_1,&local_68);
        *param_3 = (uint)bVar11;
        local_40 = local_50;
        goto LAB_141264fab;
      }
      local_68 = (char *)0x0;
      uStack_60 = 0;
      plVar4 = (longlong *)FUN_1459b8f2e();
      lVar3 = plVar4[0x22];
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 1000))(plVar4);
        lVar3 = plVar4[0x22];
        if (lVar3 != 0) goto LAB_1412651c0;
      }
      else {
LAB_1412651c0:
        if ((char **)(lVar3 + 200) != &local_68) {
          uVar2 = *(uint *)(lVar3 + 0xd0);
          pvVar1 = *(void **)(lVar3 + 200);
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar2);
          if ((longlong)(int)uVar2 == 0) {
            uStack_60 = (ulonglong)uVar2;
          }
          else {
            FUN_1446dd670(&local_68,uVar2,0);
            memcpy(local_68,pvVar1,(longlong)(int)uVar2 * 2);
          }
        }
      }
      plVar4 = (longlong *)FUN_1458b3986(param_1);
      if (plVar4 != (longlong *)0x0) {
        puVar5 = (undefined8 *)(**(code **)(*plVar4 + 200))(plVar4);
        local_90 = 0;
        uStack_8c = 0;
        iStack_88 = *(int *)(puVar5 + 1);
        lVar3 = (longlong)iStack_88;
        pvVar1 = (void *)*puVar5;
        if (lVar3 == 0) {
          local_84 = 0;
        }
        else {
          FUN_1446dd7be(&local_90,iStack_88,0);
          memcpy((void *)CONCAT44(uStack_8c,local_90),pvVar1,lVar3 * 0xc);
        }
        uStack_9c = 0;
        local_98 = 0;
        pcVar7 = local_68;
        if ((int)uStack_60 == 0) {
          pcVar7 = "";
        }
        param_1 = (uint *)0x0;
        FUN_1405f0d29(&local_a0,pcVar7,0);
        lVar3 = CONCAT44(uStack_8c,local_90);
        if ((longlong)iStack_88 != 0) {
          lVar10 = 0;
          do {
            if (*(int *)(lVar3 + lVar10) == local_a0) {
              bVar12 = *(int *)(lVar3 + 8 + lVar10) == local_98;
            }
            else {
              bVar12 = false;
            }
          } while ((bVar12 == false) &&
                  (bVar13 = (longlong)iStack_88 * 0xc + -0xc != lVar10, lVar10 = lVar10 + 0xc,
                  bVar13));
LAB_141265478:
          param_1 = (uint *)(ulonglong)bVar12;
        }
        goto LAB_14126547c;
      }
LAB_141265358:
      param_1 = (uint *)0x0;
    }
    if (local_68 != (char *)0x0) {
      FUN_1400020a8();
    }
    *param_3 = (uint)param_1;
  }
LAB_141264e60:
  uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_1412650c9:
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 141265512 FUN_141265512 body=3311 status=ok
// SIG undefined FUN_141265512(void)

void FUN_141265512(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  int *_Src;
  undefined8 *puVar7;
  undefined4 *_Src_00;
  undefined1 *_Src_01;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined1 *local_168;
  code *local_160;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_b4;
  undefined4 local_88;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_14126560f;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_14126560f:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_48);
            goto LAB_1412656e5;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_48,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_48,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_48,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
LAB_1412656e5:
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_50);
            goto LAB_1412657bb;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_50) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_50,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_50,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_50,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_50,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
LAB_1412657bb:
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_160 = FUN_1405ebbb2;
      local_168 = &DAT_14c9520b8;
      local_170 = 0;
      local_178 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_54);
            goto LAB_141265890;
          }
        }
        _Src_00 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_54) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_54,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_54,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_54,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_54,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
LAB_141265890:
  local_58 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_14067a048;
      local_170 = 0;
      local_178 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_58);
            goto LAB_141265963;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_58) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_58,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_58,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_58,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_58,lVar2);
      }
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
LAB_141265963:
  iVar5 = local_58;
  memset(local_158,0,0x100);
  local_88 = 0xffffffff;
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_158);
            goto LAB_141265a3a;
          }
        }
        _Src_01 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_01 != local_158) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_158,_Src_01,(int)plVar1[6]);
          }
          else {
            memcpy(local_158,_Src_01,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_158,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_158,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
LAB_141265a3a:
  local_168 = local_158;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_168 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_170 = CONCAT71(local_170._1_7_,iVar5 != 0);
  local_178 = CONCAT44(local_178._4_4_,local_54);
  (**(code **)(*param_1 + 0x28))(param_1,local_40,local_48,local_50);
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141266202 FUN_141266202 body=37 status=ok
// SIG undefined FUN_141266202(void)

void FUN_141266202(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  FUN_141266228(uVar1,param_2,param_3);
  return;
}



// FUNCTION 141266228 FUN_141266228 body=1816 status=ok
// SIG undefined FUN_141266228(void)

void FUN_141266228(longlong param_1,undefined8 param_2,code *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  int *piVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  int iVar24;
  code *pcVar25;
  bool bVar26;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_3 == (code *)0x0) || (*(code **)(param_1 + 0x5a8) == param_3)) goto LAB_1412665ad;
  if (DAT_14cb56270 == 0) {
    local_70 = &local_50;
    local_50 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_1427b09ee;
    local_78 = &LAB_148630fef;
    local_80 = FUN_1464b6a91;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10004001;
    local_a0 = 8;
    local_a8 = CONCAT44(local_a8._4_4_,0x28);
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
  }
  lVar14 = FUN_144718840(param_3,DAT_14cb56270);
  if (lVar14 == 0) goto LAB_1412665ad;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_3);
  }
  local_50 = param_3;
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(param_3);
  }
  plVar2 = (longlong *)(param_1 + 0xf8);
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(param_3);
  }
  uVar8 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  iVar9 = FUN_143d9870a(plVar2,uVar8 >> 0x10 ^ uVar8,&local_50);
  if ((iVar9 != -1) &&
     (lVar14 = *plVar2 + (longlong)iVar9 * 0x18, piVar15 = (int *)(lVar14 + 8),
     piVar15 != (int *)0x0 && lVar14 != 0)) {
    *piVar15 = *piVar15 + 1;
    goto LAB_1412665ad;
  }
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_3);
  }
  if (*(int *)(param_1 + 300) == 0) {
    iVar9 = *(int *)(param_1 + 0x100);
    *(int *)(param_1 + 0x100) = iVar9 + 1;
    if (*(int *)(param_1 + 0x104) == iVar9) {
      FUN_14482b872(plVar2,iVar9);
    }
    iVar24 = *(int *)(param_1 + 0x120);
    if (iVar24 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar24 + 0x1e;
      if (-1 < iVar24 + -1) {
        iVar10 = iVar24 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    lVar20 = param_1 + 0x108;
    iVar17 = iVar24 + 1;
    iVar22 = iVar24 + 0x1f;
    if (-1 < iVar24) {
      iVar22 = iVar24;
    }
    if (iVar22 >> 5 == iVar10) {
      *(int *)(param_1 + 0x120) = iVar17;
    }
    else {
      if (*(int *)(param_1 + 0x124) <= iVar24) {
        iVar10 = iVar24;
        if (iVar24 + 0x20U < 0xa0) {
          iVar17 = 0x80;
        }
        else {
          uVar8 = iVar24 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x124) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar8) {
              uVar11 = uVar8;
            }
          }
          else {
            uVar11 = uVar8 + (uVar8 * 3 >> 3) + 0x10;
          }
          uVar18 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar12 = (uint)(uVar18 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar18 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar18 + 0xf >> 4]];
              }
              else {
                uVar19 = (ulonglong)(uVar12 & 0xfffffff0);
                if (uVar19 < 0x7ff1) {
                  bVar16 = (&DAT_14c841e00)[uVar12 >> 4];
                  uVar21 = 0x32;
                  if (0x32 < bVar16) {
                    uVar21 = (ulonglong)bVar16;
                  }
                  uVar23 = 0x32 - (ulonglong)bVar16;
                  do {
                    uVar18 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0) goto LAB_141266767;
                    lVar14 = uVar21 + 1 + uVar23;
                    uVar23 = uVar23 - 1;
                  } while (lVar14 != 0x33);
                }
                uVar18 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar18 = (ulonglong)DAT_14c841df8;
                }
                uVar18 = -uVar18 & (uVar19 + uVar18) - 1;
              }
            }
            else {
              uVar18 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar18,0);
              iVar10 = *(int *)(param_1 + 0x120);
            }
          }
LAB_141266767:
          iVar13 = (int)(uVar18 >> 2);
          iVar17 = -0x20;
          if ((int)uVar8 <= iVar13) {
            iVar17 = iVar13 << 5;
          }
        }
        *(int *)(param_1 + 0x124) = iVar17;
        FUN_1446efbd8(lVar20,iVar10);
        iVar17 = *(int *)(param_1 + 0x120) + 1;
      }
      iVar10 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar10 = iVar17;
      }
      *(int *)(param_1 + 0x120) = iVar17;
      if (iVar17 % 0x20 != 0) {
        lVar14 = *(longlong *)(param_1 + 0x118);
        if (*(longlong *)(param_1 + 0x118) == 0) {
          lVar14 = lVar20;
        }
        bVar16 = -(char)(iVar17 % 0x20);
        *(uint *)(lVar14 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)(lVar14 + (longlong)(iVar10 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar14 = (longlong)iVar9;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar20 = *(longlong *)(param_1 + 0x118);
    }
    bVar16 = (byte)iVar24 & 0x1f;
    puVar3 = (uint *)(lVar20 + (longlong)(iVar22 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar9 = *(int *)(param_1 + 0x128);
    lVar14 = (longlong)iVar9;
    iVar24 = *(int *)(*(longlong *)(param_1 + 0xf8) + 4 + lVar14 * 0x18);
    *(int *)(param_1 + 0x128) = iVar24;
    iVar10 = *(int *)(param_1 + 300) + -1;
    *(int *)(param_1 + 300) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar24 * 0x18) = 0xffffffff;
    }
  }
  lVar20 = param_1 + 0x108;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar20 = *(longlong *)(param_1 + 0x118);
  }
  iVar24 = iVar9 + 0x1f;
  if (-1 < iVar9) {
    iVar24 = iVar9;
  }
  puVar3 = (uint *)(lVar20 + (longlong)(iVar24 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar9 & 0x1f);
  puVar4 = (ulonglong *)(*(longlong *)(param_1 + 0xf8) + lVar14 * 0x18);
  *puVar4 = (ulonglong)param_3;
  pcVar25 = param_3;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_3);
    pcVar25 = (code *)*puVar4;
  }
  bVar16 = DAT_14c950c29;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 2) = 0xffffffff;
  if (((bVar16 & 1) != 0) && (pcVar25 != (code *)0x0)) {
    FUN_1456cec3c(pcVar25);
  }
  uVar8 = ((uint)((ulonglong)pcVar25 >> 0x14) & 0xffff ^ (uint)((ulonglong)pcVar25 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  iVar24 = 1;
  if (*(int *)(param_1 + 0x100) - *(int *)(param_1 + 300) == 1) {
    uVar11 = 1;
LAB_1412664b3:
    iVar10 = iVar9;
    if (((int)uVar11 < 1) || (iVar24 <= *(int *)(param_1 + 0x140))) {
      uVar8 = *(int *)(param_1 + 0x140) - 1U & uVar8;
      *(uint *)((longlong)puVar4 + 0x14) = uVar8;
      lVar14 = *(longlong *)(param_1 + 0x138);
      if (*(longlong *)(param_1 + 0x138) == 0) {
        lVar14 = param_1 + 0x130;
      }
      *(undefined4 *)(puVar4 + 2) =
           *(undefined4 *)
            (lVar14 + ((longlong)*(int *)(param_1 + 0x140) - 1U & (longlong)(int)uVar8) * 4);
      lVar14 = *(longlong *)(param_1 + 0x138);
      if (*(longlong *)(param_1 + 0x138) == 0) {
        lVar14 = param_1 + 0x130;
      }
      *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x140) - 1U & (longlong)(int)uVar8) * 4) =
           iVar9;
    }
    else {
      *(int *)(param_1 + 0x140) = iVar24;
      FUN_140ec35ba(plVar2);
    }
  }
  else {
    local_50 = (code *)*puVar4;
    if ((DAT_14c950c29 == 1) && (local_50 != (code *)0x0)) {
      FUN_1456cec3c();
    }
    iVar10 = FUN_143d9870a(plVar2,uVar8,&local_50);
    if (iVar10 == -1) {
      uVar11 = *(int *)(param_1 + 0x100) - *(int *)(param_1 + 300);
      if (3 < uVar11) {
        uVar18 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
        lVar14 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar24 = 1 << ((byte)lVar14 & 0x1f);
      }
      goto LAB_1412664b3;
    }
    uVar6 = *(undefined4 *)((longlong)puVar4 + 4);
    uVar18 = puVar4[1];
    uVar7 = *(undefined4 *)((longlong)puVar4 + 0xc);
    puVar5 = (undefined4 *)(*plVar2 + (longlong)iVar10 * 0x18);
    *puVar5 = (int)*puVar4;
    puVar5[1] = uVar6;
    puVar5[2] = (int)uVar18;
    puVar5[3] = uVar7;
    FUN_143d987d4(plVar2,iVar9);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + 8 + (longlong)iVar10 * 0x18) = 1;
  if ((*(longlong *)(param_1 + 0x80) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x5e0), plVar2 != (longlong *)0x0)) {
    iVar9 = (int)plVar2[1];
    do {
      if (iVar9 == 0) goto LAB_1412665ad;
      LOCK();
      iVar24 = (int)plVar2[1];
      bVar26 = iVar9 == iVar24;
      if (bVar26) {
        *(int *)(plVar2 + 1) = iVar9 + 1;
        iVar24 = iVar9;
      }
      iVar9 = iVar24;
      UNLOCK();
    } while (!bVar26);
    if (*(longlong *)(param_1 + 0x5d8) != 0) {
      local_a8 = *(undefined8 *)(param_1 + 0x80);
      FUN_140ec12ee(*(longlong *)(param_1 + 0x5d8),param_3,param_1,0);
    }
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar15 = (int *)((longlong)plVar2 + 0xc);
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (*piVar15 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_1412665ad:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14126694c FUN_14126694c body=592 status=ok
// SIG undefined FUN_14126694c(void)

undefined8 * FUN_14126694c(undefined8 *param_1)

{
  FUN_14064ffa8();
  *param_1 = &PTR_FUN_14b91be40;
  param_1[0x72] = &PTR_FUN_14b91c4b0;
  param_1[0x73] = &PTR_FUN_14b91c4d0;
  param_1[0x74] = &PTR_FUN_14b91c500;
  param_1[0x75] = &PTR_FUN_14b91c510;
  param_1[0x76] = &PTR_FUN_14b91c580;
  param_1[0x77] = &PTR_FUN_14b91c5b0;
  param_1[0x78] = &PTR_FUN_14b91c5e0;
  param_1[0x7f] = &PTR_FUN_14b91c690;
  param_1[0x80] = &PTR_FUN_14b91c700;
  param_1[0x81] = &PTR_FUN_14b91c770;
  param_1[0x82] = &PTR_FUN_14b91c7a0;
  param_1[0x83] = &PTR_FUN_14b91c7e0;
  param_1[0x84] = &PTR_FUN_14b91c880;
  param_1[0x85] = &PTR_FUN_14b91c8a0;
  param_1[0x89] = &PTR_FUN_14b91c8c0;
  param_1[0x8a] = &PTR_FUN_14b91c980;
  param_1[0x8b] = &PTR_FUN_14b91ca00;
  param_1[0x8c] = &PTR_FUN_14b91ca50;
  param_1[0x8d] = &PTR_FUN_14b91ca90;
  param_1[0x8e] = &PTR_FUN_14b91cab0;
  param_1[0x8f] = &PTR_FUN_14b91cad0;
  param_1[0x90] = &PTR_FUN_14b91caf0;
  param_1[0x91] = &PTR_FUN_14b91cb10;
  param_1[0x92] = &PTR_FUN_14b91cb30;
  param_1[0x93] = &PTR_FUN_14b91cb50;
  param_1[0x94] = &PTR_FUN_14b91cb70;
  param_1[0x95] = &PTR_FUN_14b91cb90;
  param_1[0x96] = &PTR_FUN_14b91cbb0;
  param_1[0x34b] = &PTR_FUN_14b91cbd0;
  param_1[0x352] = &PTR_FUN_14b91cbe0;
  param_1[0x353] = &PTR_FUN_14b91cc20;
  param_1[0x354] = &PTR_FUN_14b91cc60;
  param_1[0x355] = &PTR_FUN_14b91ccb0;
  param_1[0x356] = &PTR_FUN_14b91cce0;
  param_1[0x359] = &PTR_FUN_14b91cd20;
  param_1[0x35a] = &PTR_FUN_14b91cd30;
  param_1[0x35b] = &PTR_FUN_14b91cd60;
  param_1[0x35c] = &PTR_FUN_14b91ce00;
  param_1[0x4c2] = 0;
  param_1[0x4c3] = 0;
  param_1[0x4c0] = 0;
  param_1[0x4c1] = 0;
  param_1[0x4c4] = 0;
  return param_1;
}



// FUNCTION 141266b9c FUN_141266b9c body=190 status=ok
// SIG undefined FUN_141266b9c(void)

void FUN_141266b9c(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (((*(int *)(param_1 + 0x3c) != 0) && (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x3c))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar2 = *puVar3;
      }
      else {
        uVar2 = 0;
      }
      FUN_140545fa2(uVar2);
    }
  }
  if (((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x34))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar2 = *puVar3;
      }
      else {
        uVar2 = 0;
      }
      FUN_141266c5a(uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 141266c5a FUN_141266c5a body=131 status=ok
// SIG undefined FUN_141266c5a(void)

void FUN_141266c5a(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  cVar1 = FUN_1403adf14(param_1,0,1);
  if (cVar1 != '\0') {
    uVar2 = FUN_1403ae46b();
    if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0x78f0))) &&
        (lVar3 = (ulonglong)uVar2 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar3 != 0)) &&
       ((*(longlong *)(lVar3 + 0x20) != 0 && (*(longlong **)(lVar3 + 0x28) != (longlong *)0x0)))) {
      lVar3 = (**(code **)(**(longlong **)(lVar3 + 0x28) + 8))();
      if (lVar3 != 0) {
        uVar4 = FUN_1403ae386();
        plVar5 = (longlong *)FUN_144718840(lVar3,uVar4);
        if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141266cd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x28))(plVar5);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 141266cde FUN_141266cde body=329 status=ok
// SIG undefined FUN_141266cde(void)

undefined8 * FUN_141266cde(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined **local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  undefined8 local_98 [10];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = &PTR_FUN_149eeb4b0;
  local_e0 = DAT_14c84635c;
  FUN_1412ce202(&local_d8);
  param_1[2] = &PTR_FUN_149ed05f0;
  *(undefined4 *)(param_1 + 3) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_cc;
  *(undefined4 *)(param_1 + 4) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_c4;
  *(undefined4 *)(param_1 + 5) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_bc;
  *(undefined4 *)(param_1 + 6) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_b4;
  *(undefined4 *)(param_1 + 7) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_ac;
  *(undefined4 *)(param_1 + 8) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_a4;
  param_1[9] = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar4 = local_98;
  puVar5 = param_1 + 10;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0xa4) = local_44;
  *(undefined4 *)(param_1 + 0x14) = local_48;
  param_1[0x15] = local_40;
  param_1[0x16] = local_38;
  if (local_38 == (longlong *)0x0) {
    param_1[0x17] = local_30;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    param_1[0x17] = local_30;
    local_d8 = &PTR_FUN_149ed05f0;
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
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141266e28 FUN_141266e28 body=159 status=ok
// SIG undefined FUN_141266e28(void)

void FUN_141266e28(longlong param_1,char param_2)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(char *)(param_1 + 0xdb) = param_2;
  FUN_140760c2c(param_1,&local_30);
  if ((local_30 != (longlong *)0x0) && (*(char *)((longlong)local_30 + 0x35) != param_2)) {
    *(char *)((longlong)local_30 + 0x35) = param_2;
    (**(code **)(*local_30 + 0x228))(local_30);
    FUN_140163244(local_30,1);
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141266eda FUN_141266eda body=231 status=ok
// SIG undefined FUN_141266eda(void)

undefined8 * FUN_141266eda(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  iVar2 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 4) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x24) = iVar2;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 141266fc2 FUN_141266fc2 body=378 status=ok
// SIG undefined FUN_141266fc2(void)

bool FUN_141266fc2(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  void **local_88;
  void *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar3 = *(int *)(param_1 + 0x628);
  iVar5 = 1;
  if (1 < iVar3) {
    iVar5 = iVar3;
  }
  iVar5 = iVar5 + -1;
  if (*(char *)(param_1 + 0x695) != '\0') {
    iVar5 = iVar3;
  }
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    FUN_1447a8aa0(param_4,0);
  }
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5 * 2);
  }
  if (*(int *)((longlong)param_4 + 0xc) < iVar5 * 2) {
    FUN_1447a8aa0(param_4);
  }
  local_78 = (void *)0x0;
  uStack_70 = 0;
  if (iVar5 == 0) {
    iVar3 = (int)param_4[1];
  }
  else {
    iVar3 = 0;
    do {
      local_88 = &local_78;
      cVar2 = FUN_14126713e(param_1,iVar3,param_2,param_3);
      if (cVar2 != '\0') {
        if (0 < (int)param_4[1]) {
          *(int *)(param_4 + 1) = (int)param_4[1] + -1;
          FUN_140704026(param_4);
        }
        lVar4 = (longlong)(int)(uint)uStack_70;
        if (lVar4 != 0) {
          iVar1 = (int)param_4[1];
          *(uint *)(param_4 + 1) = iVar1 + (uint)uStack_70;
          if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar1) < (uint)uStack_70) {
            FUN_1403e3958(param_4,iVar1);
          }
          memcpy((void *)((longlong)iVar1 * 0x18 + *param_4),local_78,lVar4 * 0x18);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar5 != iVar3);
    iVar3 = (int)param_4[1];
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 0 < iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14126713e FUN_14126713e body=741 status=ok
// SIG undefined FUN_14126713e(void)

bool FUN_14126713e(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  float fVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  void **local_d0;
  undefined8 *local_c8;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) != 0) {
    FUN_1447a8aa0(param_5,0);
  }
  if (param_2 < 0) {
    if (param_2 != -1) {
      fVar10 = 0.0;
      fVar2 = 0.0;
      goto LAB_141267228;
    }
    iVar5 = *(int *)(param_1 + 0x628) - (*(byte *)(param_1 + 0x695) ^ 1);
    fVar2 = 0.0;
    iVar6 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x628) - (*(byte *)(param_1 + 0x695) ^ 1);
    fVar2 = 0.0;
    if ((param_2 <= iVar5) &&
       (lVar7 = (longlong)param_2 * (longlong)*(int *)(param_1 + 0x688), fVar2 = 0.0,
       (int)lVar7 < *(int *)(param_1 + 0x670))) {
      fVar2 = *(float *)(*(longlong *)(param_1 + 0x668) + lVar7 * 0x14);
    }
    iVar6 = param_2 + 1;
  }
  fVar10 = 0.0;
  if ((param_2 < iVar5) &&
     (lVar7 = (longlong)iVar6 * (longlong)*(int *)(param_1 + 0x688),
     (int)lVar7 < *(int *)(param_1 + 0x670))) {
    fVar10 = *(float *)(*(longlong *)(param_1 + 0x668) + lVar7 * 0x14);
  }
LAB_141267228:
  fVar10 = (fVar10 - fVar2) * 0.5;
  if ((fVar10 != 0.0) || (NAN(fVar10))) {
    bVar4 = true;
    do {
      bVar8 = bVar4;
      local_b8 = (void *)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      lStack_a0 = 0;
      local_d8 = param_4;
      local_d0 = &local_b8;
      local_c8 = &local_a8;
      cVar3 = FUN_1407036d0(param_1,fVar2,fVar10 + fVar2,param_3);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (cVar3 != '\0') {
        if (0 < (int)param_5[1]) {
          *(int *)(param_5 + 1) = (int)param_5[1] + -1;
          FUN_140704026(param_5);
        }
        lVar7 = (longlong)(int)(uint)uStack_b0;
        if (lVar7 != 0) {
          iVar5 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar5 + (uint)uStack_b0;
          if ((uint)(*(int *)((longlong)param_5 + 0xc) - iVar5) < (uint)uStack_b0) {
            FUN_1403e3958(param_5,iVar5);
          }
          memcpy((void *)((longlong)iVar5 * 0x18 + *param_5),local_b8,lVar7 * 0x18);
        }
      }
      if (local_b8 != (void *)0x0) {
        FUN_1400020a8();
      }
      bVar4 = false;
      fVar2 = fVar10 + fVar2;
    } while (bVar8);
    bVar4 = 0 < (int)param_5[1];
  }
  else {
    local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
    uVar9 = FUN_140753fde(param_1 + 0x668);
    FUN_140703b8c(param_1,&local_a8,uVar9,param_3);
    iVar5 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar5 + 1U) {
      FUN_1403e3958(param_5,iVar5);
    }
    lVar7 = *param_5;
    *(undefined8 *)(lVar7 + 0x10 + (longlong)iVar5 * 0x18) = local_98;
    plVar1 = (longlong *)(lVar7 + (longlong)iVar5 * 0x18);
    *plVar1 = local_a8;
    plVar1[1] = lStack_a0;
    bVar4 = true;
  }
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141267424 FUN_141267424 body=107 status=ok
// SIG undefined FUN_141267424(void)

void FUN_141267424(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_141267490(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 141267490 FUN_141267490 body=353 status=ok
// SIG undefined FUN_141267490(void)

void FUN_141267490(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141267515;
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
LAB_141267515:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1412675f2 FUN_1412675f2 body=106 status=ok
// SIG undefined FUN_1412675f2(void)

void FUN_1412675f2(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  FUN_140320438(param_1 + 0x18);
  if (*(int *)(param_1 + 0x50) == 0) {
    *(undefined4 *)(param_1 + 0x50) = 1;
    if (*(int *)(param_1 + 0x54) == 0) {
      FUN_1400c28ea((undefined8 *)(param_1 + 0x48),0);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  FUN_14126765c(param_1,*param_2);
  return;
}



// FUNCTION 14126765c FUN_14126765c body=2686 status=ok
// SIG undefined FUN_14126765c(void)

void FUN_14126765c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char cVar18;
  byte bVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  code *pcVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong *plVar28;
  code *pcVar29;
  code *pcVar30;
  code **ppcVar31;
  code *pcVar32;
  code *pcVar33;
  code *pcVar34;
  code **ppcVar35;
  code *pcVar36;
  code *pcVar37;
  code *pcVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  longlong lVar42;
  longlong lVar43;
  longlong *plVar44;
  code *pcVar45;
  code *pcVar46;
  bool bVar47;
  float fVar48;
  undefined1 auStack_4d8 [32];
  undefined4 local_4b8;
  undefined4 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  wchar_t *local_498;
  undefined1 *local_490;
  undefined1 *local_488;
  code **local_480;
  undefined1 *local_478;
  code *local_470;
  longlong local_468;
  longlong *local_460;
  longlong local_458;
  code *local_450;
  longlong local_448;
  undefined1 local_440 [8];
  code *local_438;
  undefined8 local_430;
  undefined4 local_428 [188];
  code *local_138;
  int local_130;
  undefined4 local_12c;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  plVar1 = (longlong *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_14644a42e(plVar1);
  }
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfe;
    goto LAB_141267f81;
  }
  lVar27 = *(longlong *)(param_2 + 0x148);
  if (lVar27 == 0) goto LAB_141267f81;
  bVar8 = *(byte *)(param_1 + 0x58);
  if (*(longlong *)(lVar27 + 0xa8) == 0) {
LAB_14126774f:
    bVar19 = bVar8 & 0xfe;
  }
  else {
    *(byte *)(param_1 + 0x58) = bVar8 | 1;
    lVar43 = *(longlong *)(param_1 + 0x60);
    if (lVar43 == 0) goto LAB_14126774f;
    if ((longlong)*(int *)(lVar43 + 0x148) != 0) {
      plVar28 = *(longlong **)(lVar43 + 0x140);
      lVar42 = (longlong)*(int *)(lVar43 + 0x148) * 0x48;
      do {
        if (*plVar28 == lVar27) {
          if ((plVar28 != (longlong *)0x0) && (lVar42 = plVar28[7], lVar42 != 0)) {
            *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(lVar42 + 0x189);
            plVar28 = *(longlong **)(lVar27 + 0x658);
            if (plVar28 == (longlong *)0x0) {
              plVar28 = *(longlong **)(lVar27 + 0x660);
              if ((DAT_14c950c29 & plVar28 != (longlong *)0x0) != 0) goto LAB_1412680ce;
              if (plVar28 != (longlong *)0x0) goto LAB_14126779d;
LAB_141268025:
              plVar28 = (longlong *)0x0;
            }
            else {
              if (DAT_14c950c29 == 1) {
LAB_1412680ce:
                FUN_1456cec3c(plVar28);
              }
LAB_14126779d:
              if (DAT_14cb06da8 == 0) {
                local_480 = &local_438;
                local_438 = FUN_1449e2820;
                local_470 = FUN_14081d0ea;
                local_478 = &LAB_1464003b0;
                local_488 = &LAB_147d17bdf;
                local_490 = &LAB_1417edf22;
                local_498 = L"Engine";
                local_4a0 = 0;
                local_4a8 = 0x10000000;
                local_4b0 = 8;
                local_4b8 = 0x588;
                FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
              }
              if ((*(int *)(plVar28[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar28[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8)
                  != DAT_14cb06da8 + 0x30)) goto LAB_141268025;
            }
            local_448 = (**(code **)(*plVar28 + 0x310))(plVar28);
            if ((longlong)*(int *)(lVar42 + 0x108) == 0) goto LAB_141267ada;
            plVar44 = *(longlong **)(lVar42 + 0x100);
            plVar28 = plVar44 + *(int *)(lVar42 + 0x108);
            local_460 = plVar28;
            goto LAB_141267813;
          }
          break;
        }
        plVar28 = plVar28 + 9;
        lVar42 = lVar42 + -0x48;
      } while (lVar42 != 0);
    }
    if ((*(char *)(lVar43 + 0x150) == '\0') && ((*(byte *)(lVar43 + 0x9c) & 1) != 0)) {
      bVar19 = *(byte *)(lVar43 + 0x151) ^ 1;
    }
    else {
      bVar19 = 0;
    }
    bVar19 = bVar8 & 0xfe | bVar19;
  }
  *(byte *)(param_1 + 0x58) = bVar19;
LAB_141267f81:
  if ((local_d0 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_141267813:
  do {
    iVar20 = FUN_1438b514a(lVar42);
    if (iVar20 != -1) {
      if ((longlong)*(int *)(param_1 + 0x78) != 0) {
        lVar43 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x70) + lVar43) == *plVar44) goto LAB_141267acd;
          lVar43 = lVar43 + 8;
        } while ((longlong)*(int *)(param_1 + 0x78) * 8 != lVar43);
      }
      iVar21 = FUN_144909502(lVar27);
      if (iVar21 == -1) {
        if (*(char *)(param_1 + 0x2c) == '\0') {
          FUN_1400021e4(plVar44,&local_438);
          uVar26 = (longlong)(int)local_430 * 2;
          do {
            iVar21 = -1;
            if (uVar26 == 0) {
              uVar24 = 0;
              goto LAB_141267aa6;
            }
            uVar2 = uVar26 - 2;
            lVar43 = uVar26 - 2;
            uVar26 = uVar2;
          } while (*(short *)(local_438 + lVar43) != 0x3a);
          iVar41 = (int)(uVar2 >> 1);
          uVar24 = 0;
          uVar39 = (int)local_430 - 1;
          if ((int)local_430 == 0) {
            uVar39 = uVar24;
          }
          if (iVar41 < (int)uVar39 && iVar41 != -1) {
            pcVar23 = local_438;
            if ((int)local_430 == 0) {
              pcVar23 = (code *)&DAT_149dfb77a;
            }
            uVar24 = iVar41 + 1U;
            if ((int)uVar39 <= (int)(iVar41 + 1U)) {
              uVar24 = uVar39;
            }
            uVar26 = (ulonglong)uVar24;
            if ((int)uVar24 < 1) {
              uVar26 = 0;
            }
            local_468 = lVar42;
            FUN_14006620a(&local_138,pcVar23 + uVar26 * 2);
            if (local_438 != (code *)0x0) {
              FUN_1400020a8();
            }
            local_438 = local_138;
            local_430 = (code *)CONCAT44(local_12c,local_130);
            local_450 = local_138;
            if (local_130 == 0) {
              local_450 = (code *)&DAT_149dfb77a;
            }
            iVar21 = *(int *)(param_1 + 0x78);
            iVar41 = local_130;
            if ((longlong)iVar21 != 0) {
              local_458 = *(longlong *)(param_1 + 0x70);
              lVar43 = 0;
              do {
                cVar18 = FUN_1402ca022(*(undefined8 *)(local_458 + lVar43));
                if (cVar18 != '\0') {
                  uVar24 = 1;
                  lVar42 = local_468;
                  iVar21 = -1;
                  goto LAB_141267aa6;
                }
                lVar43 = lVar43 + 8;
              } while ((longlong)iVar21 * 8 != lVar43);
              iVar41 = (int)local_430;
            }
            pcVar23 = local_438;
            if (iVar41 == 0) {
              pcVar23 = (code *)&DAT_149dfb77a;
            }
            FUN_1446f470e(local_440,pcVar23);
            iVar21 = FUN_144909502(lVar27);
            uVar24 = 0;
            lVar42 = local_468;
          }
LAB_141267aa6:
          if (local_438 != (code *)0x0) {
            FUN_1400020a8();
          }
          plVar28 = local_460;
          if ((char)uVar24 == '\0' && iVar21 != -1) goto LAB_141267868;
        }
      }
      else {
LAB_141267868:
        lVar43 = *(longlong *)(local_448 + 0x30);
        lVar25 = (longlong)iVar21 * 0x60;
        puVar4 = (undefined8 *)(lVar43 + 0x40 + lVar25);
        uVar14 = *puVar4;
        uVar15 = puVar4[1];
        uVar6 = *(undefined8 *)(lVar43 + 0x50 + lVar25);
        puVar4 = (undefined8 *)(lVar43 + 0x20 + lVar25);
        uVar16 = *puVar4;
        uVar17 = puVar4[1];
        uVar7 = *(undefined8 *)(lVar43 + 0x30 + lVar25);
        puVar3 = (undefined4 *)(lVar43 + lVar25);
        uVar11 = *puVar3;
        uVar24 = puVar3[1];
        uVar12 = puVar3[2];
        uVar39 = puVar3[3];
        pdVar5 = (double *)(lVar43 + 0x10 + lVar25);
        dVar13 = *pdVar5;
        dVar10 = pdVar5[1] * 1.0;
        iVar41 = *(int *)(param_1 + 0x40);
        uVar22 = iVar41 + 1;
        *(uint *)(param_1 + 0x40) = uVar22;
        if (*(uint *)(param_1 + 0x44) < uVar22) {
          FUN_14181b63e(plVar1);
        }
        lVar43 = *plVar1;
        lVar25 = (longlong)iVar41 * 0x60;
        *(int *)(lVar43 + lVar25) = iVar21;
        *(int *)(lVar43 + 4 + lVar25) = iVar20;
        puVar4 = (undefined8 *)(lVar43 + 8 + lVar25);
        *puVar4 = uVar14;
        puVar4[1] = uVar15;
        *(undefined8 *)(lVar43 + 0x18 + lVar25) = uVar6;
        puVar4 = (undefined8 *)(lVar43 + 0x20 + lVar25);
        *puVar4 = uVar16;
        puVar4[1] = uVar17;
        *(undefined8 *)(lVar43 + 0x30 + lVar25) = uVar7;
        puVar3 = (undefined4 *)(lVar43 + 0x40 + lVar25);
        *puVar3 = uVar11;
        puVar3[1] = uVar24 ^ 0x80000000;
        puVar3[2] = uVar12;
        puVar3[3] = uVar39 ^ 0x80000000;
        auVar9._8_4_ = SUB84(dVar10,0);
        auVar9._0_8_ = dVar13 * -1.0;
        auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])(lVar43 + 0x50 + lVar25) = auVar9;
        plVar28 = local_460;
      }
    }
LAB_141267acd:
    plVar44 = plVar44 + 1;
  } while (plVar44 != plVar28);
LAB_141267ada:
  iVar20 = *(int *)(param_1 + 0x40);
  if (1 < (longlong)iVar20) {
    pcVar23 = (code *)*plVar1;
    memset(local_428,0,0x2f0);
    local_430 = pcVar23 + (longlong)iVar20 * 0x60 + -0x60;
    local_438 = pcVar23;
    fVar48 = logf((float)iVar20);
    local_428[0] = (int)(longlong)(fVar48 + fVar48);
    ppcVar31 = &local_438;
    do {
      pcVar23 = *ppcVar31;
      pcVar34 = ppcVar31[1];
      iVar20 = *(int *)(ppcVar31 + 2);
      iVar21 = (int)((ulonglong)((longlong)pcVar34 - (longlong)pcVar23) >> 5) * -0x55555555;
      uVar24 = iVar21 + 1;
      pcVar30 = pcVar34;
      pcVar36 = pcVar23;
      if (iVar20 != 0) {
LAB_141267b6e:
        if (8 < (int)uVar24) {
          pcVar37 = pcVar23 + (ulonglong)(uVar24 >> 1) * 0x60;
          ppcVar35 = &local_138;
          for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
            *ppcVar35 = *(code **)pcVar37;
            pcVar37 = pcVar37 + 8;
            ppcVar35 = ppcVar35 + 1;
          }
          pcVar37 = pcVar23;
          pcVar29 = pcVar23 + (ulonglong)(uVar24 >> 1) * 0x60;
          for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
            *(undefined8 *)pcVar29 = *(undefined8 *)pcVar37;
            pcVar37 = pcVar37 + 8;
            pcVar29 = pcVar29 + 8;
          }
          ppcVar35 = &local_138;
          pcVar37 = pcVar23;
          for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
            *(code **)pcVar37 = *ppcVar35;
            ppcVar35 = ppcVar35 + 1;
            pcVar37 = pcVar37 + 8;
          }
          pcVar37 = pcVar34 + 0x60;
          pcVar29 = pcVar23;
          do {
            pcVar33 = pcVar29 + 0x60;
            pcVar38 = pcVar29 + 0x60;
            do {
              pcVar29 = pcVar38;
              pcVar45 = pcVar33;
              if (pcVar34 < pcVar29) break;
              pcVar33 = pcVar45 + 0x60;
              pcVar38 = pcVar29 + 0x60;
            } while (*(int *)pcVar29 <= *(int *)pcVar23);
            pcVar33 = pcVar37 + -0xc0;
            do {
              pcVar38 = pcVar37;
              pcVar46 = pcVar33;
              pcVar37 = pcVar38 + -0x60;
              if (pcVar37 <= pcVar23) break;
              pcVar33 = pcVar46 + -0x60;
            } while (*(int *)pcVar23 <= *(int *)pcVar37);
            lVar27 = 0xc;
            pcVar33 = pcVar23;
            pcVar32 = pcVar29;
            ppcVar35 = &local_138;
            if (pcVar37 < pcVar29) goto code_r0x000141267c39;
            for (; lVar27 != 0; lVar27 = lVar27 + -1) {
              *ppcVar35 = *(code **)pcVar32;
              pcVar32 = pcVar32 + 8;
              ppcVar35 = ppcVar35 + 1;
            }
            pcVar33 = pcVar37;
            pcVar38 = pcVar29;
            for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
              *(undefined8 *)pcVar38 = *(undefined8 *)pcVar33;
              pcVar33 = pcVar33 + 8;
              pcVar38 = pcVar38 + 8;
            }
            ppcVar35 = &local_138;
            pcVar33 = pcVar37;
            for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
              *(code **)pcVar33 = *ppcVar35;
              ppcVar35 = ppcVar35 + 1;
              pcVar33 = pcVar33 + 8;
            }
          } while( true );
        }
        if (pcVar23 < pcVar34) {
          do {
            pcVar30 = pcVar23;
            if (pcVar23 + 0x60 <= pcVar34) {
              pcVar36 = pcVar23 + 0x60;
              iVar20 = *(int *)pcVar23;
              do {
                iVar21 = *(int *)pcVar36;
                iVar41 = iVar20;
                if (iVar20 <= iVar21) {
                  iVar41 = iVar21;
                }
                if (iVar20 < iVar21) {
                  pcVar30 = pcVar36;
                }
                pcVar36 = pcVar36 + 0x60;
                iVar20 = iVar41;
              } while (pcVar36 <= pcVar34);
            }
            pcVar36 = pcVar34 + -0x60;
            pcVar37 = pcVar30;
            ppcVar35 = &local_138;
            for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
              *ppcVar35 = *(code **)pcVar37;
              pcVar37 = pcVar37 + 8;
              ppcVar35 = ppcVar35 + 1;
            }
            pcVar37 = pcVar34;
            for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
              *(undefined8 *)pcVar30 = *(undefined8 *)pcVar37;
              pcVar37 = pcVar37 + 8;
              pcVar30 = pcVar30 + 8;
            }
            ppcVar35 = &local_138;
            for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
              *(code **)pcVar34 = *ppcVar35;
              ppcVar35 = ppcVar35 + 1;
              pcVar34 = pcVar34 + 8;
            }
            pcVar34 = pcVar36;
          } while (pcVar23 < pcVar36);
        }
        goto LAB_141267f57;
      }
LAB_141267ce4:
      if (uVar24 != 0) {
        iVar21 = (iVar21 - (iVar21 + -1 >> 0x1f)) + -1 >> 1;
        iVar20 = iVar21;
joined_r0x000141267d0c:
        do {
          iVar41 = iVar20 * 2 + 1;
          if (iVar41 < (int)uVar24) {
            iVar40 = iVar20 * 2 + 2;
            if ((iVar40 < (int)uVar24) &&
               (*(int *)(pcVar23 + (longlong)iVar41 * 0x60) <=
                *(int *)(pcVar23 + (longlong)iVar40 * 0x60))) {
              iVar41 = iVar40;
            }
            if (*(int *)(pcVar23 + (longlong)iVar20 * 0x60) <
                *(int *)(pcVar23 + (longlong)iVar41 * 0x60)) {
              pcVar34 = pcVar23 + (longlong)iVar20 * 0x60;
              ppcVar35 = &local_138;
              for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
                *ppcVar35 = *(code **)pcVar34;
                pcVar34 = pcVar34 + 8;
                ppcVar35 = ppcVar35 + 1;
              }
              pcVar34 = pcVar23 + (longlong)iVar41 * 0x60;
              pcVar30 = pcVar23 + (longlong)iVar20 * 0x60;
              for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
                *(undefined8 *)pcVar30 = *(undefined8 *)pcVar34;
                pcVar34 = pcVar34 + 8;
                pcVar30 = pcVar30 + 8;
              }
              ppcVar35 = &local_138;
              pcVar34 = pcVar23 + (longlong)iVar41 * 0x60;
              for (lVar27 = 0xc; iVar20 = iVar41, lVar27 != 0; lVar27 = lVar27 + -1) {
                *(code **)pcVar34 = *ppcVar35;
                ppcVar35 = ppcVar35 + 1;
                pcVar34 = pcVar34 + 8;
              }
              goto joined_r0x000141267d0c;
            }
          }
          bVar47 = iVar21 != 0;
          iVar21 = iVar21 + -1;
          iVar20 = iVar21;
        } while (bVar47);
        if (1 < (int)uVar24) {
          pcVar34 = pcVar23;
          ppcVar35 = &local_138;
          for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
            *ppcVar35 = *(code **)pcVar34;
            pcVar34 = pcVar34 + 8;
            ppcVar35 = ppcVar35 + 1;
          }
          pcVar34 = pcVar23 + ((ulonglong)uVar24 - 1) * 0x60;
          pcVar30 = pcVar23;
          for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
            *(undefined8 *)pcVar30 = *(undefined8 *)pcVar34;
            pcVar34 = pcVar34 + 8;
            pcVar30 = pcVar30 + 8;
          }
          ppcVar35 = &local_138;
          pcVar34 = pcVar23 + ((ulonglong)uVar24 - 1) * 0x60;
          for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
            *(code **)pcVar34 = *ppcVar35;
            ppcVar35 = ppcVar35 + 1;
            pcVar34 = pcVar34 + 8;
          }
          uVar26 = (ulonglong)uVar24 - 1;
          if (uVar24 != 2) {
            do {
              iVar20 = 0;
              iVar41 = 1;
              iVar21 = 0;
              do {
                iVar20 = iVar20 + 2;
                iVar40 = iVar41;
                if (((longlong)iVar20 < (longlong)uVar26) &&
                   (*(int *)(pcVar23 + (longlong)iVar41 * 0x60) <=
                    *(int *)(pcVar23 + (longlong)iVar20 * 0x60))) {
                  iVar40 = iVar20;
                }
                if (*(int *)(pcVar23 + (longlong)iVar40 * 0x60) <=
                    *(int *)(pcVar23 + (longlong)iVar21 * 0x60)) break;
                pcVar34 = pcVar23 + (longlong)iVar21 * 0x60;
                ppcVar35 = &local_138;
                for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
                  *ppcVar35 = *(code **)pcVar34;
                  pcVar34 = pcVar34 + 8;
                  ppcVar35 = ppcVar35 + 1;
                }
                pcVar34 = pcVar23 + (longlong)iVar40 * 0x60;
                pcVar30 = pcVar23 + (longlong)iVar21 * 0x60;
                for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
                  *(undefined8 *)pcVar30 = *(undefined8 *)pcVar34;
                  pcVar34 = pcVar34 + 8;
                  pcVar30 = pcVar30 + 8;
                }
                ppcVar35 = &local_138;
                pcVar34 = pcVar23 + (longlong)iVar40 * 0x60;
                for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
                  *(code **)pcVar34 = *ppcVar35;
                  ppcVar35 = ppcVar35 + 1;
                  pcVar34 = pcVar34 + 8;
                }
                iVar20 = iVar40 * 2;
                iVar41 = iVar40 * 2 + 1;
                iVar21 = iVar40;
              } while ((longlong)iVar41 < (longlong)uVar26);
              pcVar34 = pcVar23;
              ppcVar35 = &local_138;
              for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
                *ppcVar35 = *(code **)pcVar34;
                pcVar34 = pcVar34 + 8;
                ppcVar35 = ppcVar35 + 1;
              }
              pcVar34 = pcVar23 + (uVar26 - 1) * 0x60;
              pcVar30 = pcVar23;
              for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
                *(undefined8 *)pcVar30 = *(undefined8 *)pcVar34;
                pcVar34 = pcVar34 + 8;
                pcVar30 = pcVar30 + 8;
              }
              ppcVar35 = &local_138;
              pcVar34 = pcVar23 + (uVar26 - 1) * 0x60;
              for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
                *(code **)pcVar34 = *ppcVar35;
                ppcVar35 = ppcVar35 + 1;
                pcVar34 = pcVar34 + 8;
              }
              bVar47 = 2 < uVar26;
              uVar26 = uVar26 - 1;
            } while (bVar47);
          }
        }
      }
LAB_141267f57:
      ppcVar31 = ppcVar31 + -3;
    } while (&local_438 <= ppcVar31);
  }
  goto LAB_141267f81;
code_r0x000141267c39:
  for (; lVar27 != 0; lVar27 = lVar27 + -1) {
    *ppcVar35 = *(code **)pcVar33;
    pcVar33 = pcVar33 + 8;
    ppcVar35 = ppcVar35 + 1;
  }
  pcVar33 = pcVar37;
  pcVar32 = pcVar23;
  for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
    *(undefined8 *)pcVar32 = *(undefined8 *)pcVar33;
    pcVar33 = pcVar33 + 8;
    pcVar32 = pcVar32 + 8;
  }
  ppcVar35 = &local_138;
  pcVar33 = pcVar37;
  for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
    *(code **)pcVar33 = *ppcVar35;
    ppcVar35 = ppcVar35 + 1;
    pcVar33 = pcVar33 + 8;
  }
  iVar20 = iVar20 + -1;
  pcVar38 = pcVar38 + -0xc0;
  if ((longlong)pcVar46 - (longlong)pcVar36 < (longlong)pcVar30 - (longlong)pcVar45) {
    if (pcVar29 < pcVar34) {
      *ppcVar31 = pcVar29;
      ppcVar31[1] = pcVar34;
      *(int *)(ppcVar31 + 2) = iVar20;
      ppcVar31 = ppcVar31 + 3;
    }
    pcVar45 = pcVar23;
    if (pcVar37 <= pcVar23 + 0x60) goto LAB_141267f57;
  }
  else {
    if (pcVar23 + 0x60 < pcVar37) {
      *ppcVar31 = pcVar23;
      ppcVar31[1] = pcVar38;
      *(int *)(ppcVar31 + 2) = iVar20;
      ppcVar31 = ppcVar31 + 3;
    }
    pcVar23 = pcVar29;
    pcVar38 = pcVar34;
    pcVar46 = pcVar34;
    if (pcVar34 <= pcVar29) goto LAB_141267f57;
  }
  iVar21 = (int)((ulonglong)((longlong)pcVar46 - (longlong)pcVar45) >> 5) * -0x55555555;
  uVar24 = iVar21 + 1;
  pcVar34 = pcVar38;
  pcVar30 = pcVar46;
  pcVar36 = pcVar45;
  if (iVar20 == 0) goto LAB_141267ce4;
  goto LAB_141267b6e;
}


