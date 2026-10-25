// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149510650 FUN_149510650 body=49 status=ok
// SIG undefined FUN_149510650(void)

longlong * FUN_149510650(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1459f61fe();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149510682 FUN_149510682 body=356 status=ok
// SIG undefined FUN_149510682(void)

undefined1 FUN_149510682(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    lVar4 = FUN_149510126(param_2);
    dVar9 = *(double *)(param_1 + 0x48);
    dVar8 = *(double *)(param_1 + 0x50);
    dVar11 = *(double *)(param_1 + 0x40) - *(double *)(lVar4 + 0xc0);
    dVar12 = dVar9 - *(double *)(lVar4 + 200);
    dVar10 = dVar8 - *(double *)(lVar4 + 0xd0);
    if (SQRT(dVar10 * dVar10 + dVar11 * dVar11 + dVar12 * dVar12) < *(double *)(param_1 + 0x10)) {
      *(double *)(lVar4 + 0xc0) = *(double *)(param_1 + 0x40);
      *(double *)(lVar4 + 200) = dVar9;
      *(double *)(lVar4 + 0xd0) = dVar8;
      *(undefined8 *)(lVar4 + 0xd8) = 0;
    }
    dVar9 = *(double *)(param_1 + 0x38) * *(double *)(lVar4 + 0xb8) +
            *(double *)(param_1 + 0x30) * *(double *)(lVar4 + 0xb0) +
            *(double *)(param_1 + 0x20) * *(double *)(lVar4 + 0xa0) +
            *(double *)(param_1 + 0x28) * *(double *)(lVar4 + 0xa8);
    dVar8 = (dVar9 + dVar9) * dVar9 + -1.0;
    dVar9 = dVar8;
    if (1.0 <= dVar8) {
      dVar9 = 1.0;
    }
    dVar9 = acos((double)(-(ulonglong)(dVar8 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar8 < -1.0) & (ulonglong)dVar9));
    if (dVar9 * 57.29577951308232 < *(double *)(param_1 + 0x18)) {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(lVar4 + 0xa8) = uVar1;
      *(undefined8 *)(lVar4 + 0xb0) = uVar2;
      *(undefined8 *)(lVar4 + 0xb8) = uVar3;
    }
    puVar6 = (undefined8 *)(lVar4 + 0xa0);
    puVar7 = (undefined8 *)(param_1 + 0x20);
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 1;
}



// FUNCTION 1495107e6 FUN_1495107e6 body=49 status=ok
// SIG undefined FUN_1495107e6(void)

longlong * FUN_1495107e6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1459f61fe();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149510818 FUN_149510818 body=398 status=ok
// SIG undefined FUN_149510818(void)

longlong * FUN_149510818(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) goto LAB_149510830;
  plVar4 = (longlong *)FUN_14001cc68(0x90,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14bd36120;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14bd36138;
  *(undefined1 *)(plVar4 + 3) = 1;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  *(undefined4 *)(plVar4 + 8) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x44) = 0;
  *(undefined4 *)(plVar4 + 9) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x4c) = 0x3ff00000;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  plVar4[0xd] = 0;
  *(undefined4 *)(plVar4 + 0xe) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x74) = 0x3ff00000;
  *(undefined4 *)(plVar4 + 0xf) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x7c) = 0x3ff00000;
  plVar4[0x10] = 0x3ff0000000000000;
  plVar4[0x11] = 0;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x40);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
LAB_1495108f4:
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
      if (plVar4 != (longlong *)0x0) goto LAB_149510918;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x38) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x40);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
      *(longlong **)(param_1 + 0x40) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1495108f4;
    }
LAB_149510918:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  *(double *)(*(longlong *)(param_1 + 0x38) + 0x10) = (double)*(float *)(param_1 + 0x2c);
  *(double *)(*(longlong *)(param_1 + 0x38) + 0x18) = (double)*(float *)(param_1 + 0x30);
  *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 8) = *(undefined1 *)(param_1 + 0x28);
  lVar3 = *(longlong *)(param_1 + 0x38);
LAB_149510830:
  *param_2 = lVar3;
  lVar3 = *(longlong *)(param_1 + 0x40);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1495109a6 FUN_1495109a6 body=309 status=ok
// SIG undefined FUN_1495109a6(void)

void FUN_1495109a6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bd335c0;
  FUN_1446ddc76(&local_20,"LiveLink",1);
  plVar3 = (longlong *)FUN_1447c1074(local_20);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3);
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
    UNLOCK();
  }
  FUN_1449db362(param_1 + 0x55);
  plVar3 = (longlong *)param_1[0x54];
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
  FUN_14951ff11(param_1[0x51],*(undefined4 *)(param_1 + 0x52));
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  FUN_145d195a5(param_1[0x4f],*(undefined4 *)(param_1 + 0x50));
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x4e];
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
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149510adc FUN_149510adc body=2396 status=ok
// SIG undefined FUN_149510adc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_149510adc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_1418 [32];
  undefined1 *local_13f8;
  undefined8 local_13f0;
  longlong local_13e8;
  undefined1 local_13d9;
  undefined1 local_13d8 [8];
  longlong *local_13d0;
  undefined1 local_13b9;
  undefined1 local_13b8 [8];
  longlong *local_13b0;
  undefined1 local_1399;
  undefined8 local_1398;
  longlong *local_1390;
  undefined1 local_1379;
  wchar_t *local_1378;
  undefined4 local_1370;
  undefined4 uStack_136c;
  undefined1 local_1360 [4];
  undefined1 local_135c [4];
  longlong *local_1358 [2];
  undefined1 local_1348 [16];
  undefined1 local_1338;
  undefined8 local_1330;
  undefined8 uStack_1328;
  undefined4 local_1320;
  undefined1 local_131c;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined1 local_1308 [4];
  undefined1 local_1304 [4];
  longlong *local_1300 [2];
  undefined1 local_12f0 [16];
  undefined1 local_12e0;
  undefined8 local_12d8;
  undefined8 uStack_12d0;
  undefined4 local_12c8;
  undefined1 local_12c4;
  undefined8 local_12c0;
  undefined8 uStack_12b8;
  undefined8 local_12b0;
  longlong *local_12a8;
  undefined8 local_12a0;
  longlong *local_1298;
  undefined4 local_1290;
  undefined1 local_128c;
  undefined8 local_1288;
  undefined8 uStack_1280;
  undefined8 local_1278;
  longlong *local_1270;
  undefined4 local_1268;
  undefined1 local_1264;
  undefined8 local_1260;
  undefined8 uStack_1258;
  undefined4 local_1250;
  undefined1 local_124c;
  undefined8 local_1248;
  undefined8 uStack_1240;
  undefined8 local_1238;
  longlong *local_1230;
  undefined8 local_1228;
  longlong *local_1220;
  undefined4 local_1218;
  undefined1 local_1214;
  undefined8 local_1210;
  undefined8 uStack_1208;
  undefined8 local_1200;
  longlong *local_11f8;
  undefined8 local_11f0;
  longlong *local_11e8;
  code *local_11e0;
  undefined4 local_11d8;
  undefined8 local_1038;
  undefined4 local_fb8;
  undefined1 local_fb4;
  undefined1 auStack_fb0 [280];
  undefined1 local_e98 [424];
  undefined8 local_cf0;
  undefined4 local_c70;
  undefined1 local_c6c;
  undefined1 local_c68 [280];
  undefined1 local_b50 [528];
  undefined8 local_940 [54];
  undefined1 local_790 [112];
  longlong local_720;
  undefined8 uStack_718;
  undefined8 local_710;
  longlong *local_708;
  undefined1 local_690 [32];
  undefined4 local_670;
  undefined1 local_66c;
  undefined1 local_668 [232];
  undefined1 local_580 [472];
  undefined8 local_3a8;
  longlong *local_3a0;
  undefined4 local_398;
  undefined1 local_394;
  undefined1 local_390 [16];
  undefined4 local_380;
  undefined1 local_37c;
  undefined1 local_378 [160];
  undefined1 local_2d8 [192];
  undefined1 local_218 [440];
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x149510af2;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1418;
  FUN_14951d552(param_1 + 0x2a8,param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x1b8);
  FUN_1446ddc76(local_940,"LiveLink",1);
  uVar5 = FUN_144a52528();
  plVar6 = (longlong *)FUN_14493e38c(uVar5,local_940[0]);
  uVar5 = (**(code **)(*plVar6 + 0x50))(plVar6);
  FUN_149506230(uVar5);
  FUN_1407679b0(local_218);
  FUN_145aafb3e(local_2d8);
  local_1218 = 0x3f800000;
  local_1214 = 1;
  local_1210 = 0;
  uStack_1208 = 0;
  local_13f0 = FUN_140767d84(local_2d8);
  FUN_140a53a96(local_580);
  local_1250 = 0x43480000;
  local_124c = 1;
  local_1248 = 0;
  uStack_1240 = 0;
  local_380 = 0x43480000;
  local_37c = 1;
  FUN_144a450dc(local_378,&local_1248);
  FUN_1449db362(&local_1248);
  local_1268 = 0x43480000;
  local_1264 = 1;
  local_1260 = 0;
  uStack_1258 = 0;
  local_398 = 0x43480000;
  local_394 = 1;
  FUN_144a450dc(local_390,&local_1260);
  FUN_1449db362(&local_1260);
  FUN_14951143a(local_940);
  plVar6 = local_708;
  local_720 = 0;
  uStack_718 = 0;
  local_710 = 0;
  if (local_708 != (longlong *)0x0) {
    local_708 = (longlong *)0x0;
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
  local_1290 = 2;
  local_128c = 1;
  local_1288 = 0;
  uStack_1280 = 0;
  local_670 = 2;
  local_66c = 1;
  local_720 = param_1 + 0x288;
  FUN_144a450dc(local_668,&local_1288);
  FUN_1449db362(&local_1288);
  local_11e0 = FUN_14951169e;
  local_11d8 = 0;
  FUN_14952f056(local_e98,param_1,&local_11e0);
  FUN_144a450dc(local_790,local_e98);
  FUN_1449db362(local_e98);
  local_11e0 = FUN_1495117ea;
  local_11d8 = 0;
  local_13e8 = param_1;
  FUN_14952f690(local_e98,param_1,&local_11e0);
  FUN_144a450dc(local_690,local_e98);
  FUN_1449db362(local_e98);
  FUN_147da315a(local_b50);
  FUN_147da3edc(local_e98);
  local_cf0 = DAT_14cc1e598;
  local_12c8 = 0x422c0000;
  local_12c4 = 1;
  local_12c0 = 0;
  uStack_12b8 = 0;
  local_c70 = 0x422c0000;
  local_c6c = 1;
  FUN_144a450dc(local_c68,&local_12c0);
  FUN_1449db362(&local_12c0);
  local_11e0 = (code *)0x14bd33822;
  local_11d8 = 0x14;
  FUN_1446e940c(local_1304,&local_11e0);
  local_11e0 = (code *)0x14bd3384c;
  local_11d8 = 0x1e;
  FUN_1446e940c(local_1308,&local_11e0);
  FUN_140208bae(local_1300,local_1308,local_1304,L"Source Type");
  FUN_14023423e(local_12f0,local_1300);
  local_12e0 = 1;
  local_12d8 = 0;
  uStack_12d0 = 0;
  uVar5 = FUN_147da329c(local_e98,local_12f0);
  uVar5 = FUN_147da3234(local_b50,uVar5);
  FUN_147da3edc(&local_11e0);
  local_1038 = DAT_14cc1e5a0;
  local_1320 = 0x422c0000;
  local_131c = 1;
  local_1318 = 0;
  uStack_1310 = 0;
  local_fb8 = 0x422c0000;
  local_fb4 = 1;
  FUN_144a450dc(auStack_fb0,&local_1318);
  FUN_1449db362(&local_1318);
  local_1378 = L"MachineColumnHeaderName";
  local_1370 = 0x17;
  FUN_1446e940c(local_135c,&local_1378);
  local_1378 = L"LiveLinkMessageBusSourceEditor";
  local_1370 = 0x1e;
  FUN_1446e940c(local_1360,&local_1378);
  FUN_140208bae(local_1358,local_1360,local_135c,L"Source Machine");
  FUN_14023423e(local_1348,local_1358);
  local_1338 = 1;
  local_1330 = 0;
  uStack_1328 = 0;
  uVar7 = FUN_147da329c(&local_11e0,local_1348);
  uVar5 = FUN_147da3234(uVar5,uVar7);
  local_13f8 = &local_1379;
  FUN_147da4074(&local_1378,"SHeaderRow",
                ".\\../Plugins/Animation/LiveLink/Source/LiveLink/Private/SLiveLinkMessageBusSourceFactory.cpp"
                ,0x72);
  FUN_147da32f2(&local_1378,&local_12b0,uVar5);
  local_12a0 = local_12b0;
  local_1298 = local_12a8;
  if (local_12a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_12a8 + 1) = (int)local_12a8[1] + 1;
    UNLOCK();
  }
  FUN_1495118ec(local_940,&local_12a0);
  FUN_14951ff5a(&local_1398,&local_1399);
  lVar4 = local_13e8;
  if (local_1390 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1390 + 1) = (int)local_1390[1] + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(local_13e8 + 0x270);
  *(undefined8 *)(local_13e8 + 0x268) = local_1398;
  *(longlong **)(local_13e8 + 0x270) = local_1390;
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
  FUN_149511972(&local_1398,&local_1278,local_940);
  plVar1 = local_3a0;
  plVar6 = local_1270;
  if (local_1270 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1270 + 1) = (int)local_1270[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1270 + 1) = (int)local_1270[1] + 1;
    UNLOCK();
  }
  local_3a8 = local_1278;
  local_3a0 = local_1270;
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
  local_13f8 = &local_13b9;
  FUN_140a53d66(local_13b8,&DAT_149efe19f,
                ".\\../Plugins/Animation/LiveLink/Source/LiveLink/Private/SLiveLinkMessageBusSourceFactory.cpp"
                ,0x67);
  FUN_140a50bf4(local_13b8,&local_1238,local_580);
  local_1228 = local_1238;
  local_1220 = local_1230;
  if (local_1230 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1230 + 1) = (int)local_1230[1] + 1;
    UNLOCK();
  }
  uVar5 = FUN_145aaf878(local_13f0,&local_1228);
  uVar5 = FUN_145aaf822(local_218,uVar5);
  local_13f8 = &local_13d9;
  FUN_14076837c(local_13d8,"SVerticalBox",
                ".\\../Plugins/Animation/LiveLink/Source/LiveLink/Private/SLiveLinkMessageBusSourceFactory.cpp"
                ,99);
  FUN_14076784c(local_13d8,&local_1200,uVar5);
  local_11f0 = local_1200;
  local_11e8 = local_11f8;
  if (local_11f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_11f8 + 1) = (int)local_11f8[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(lVar4 + 0x1e0,&local_11f0);
  plVar1 = local_11e8;
  if (local_11e8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_11e8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_11e8)(local_11e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_11f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_11f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_11f8)(local_11f8);
      LOCK();
      piVar2 = (int *)((longlong)local_11f8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_11f8 + 0x10))(local_11f8);
      }
    }
  }
  if (local_13d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_13d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_13d0)(local_13d0);
      LOCK();
      piVar2 = (int *)((longlong)local_13d0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_13d0 + 0x10))(local_13d0);
      }
    }
  }
  plVar1 = local_1220;
  if (local_1220 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1220 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1220)(local_1220);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_1230 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1230 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1230)(local_1230);
      LOCK();
      piVar2 = (int *)((longlong)local_1230 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1230 + 0x10))(local_1230);
      }
    }
  }
  if (local_13b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_13b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_13b0)(local_13b0);
      LOCK();
      piVar2 = (int *)((longlong)local_13b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_13b0 + 0x10))(local_13b0);
      }
    }
  }
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
  if (local_1270 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1270 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_1270)(local_1270);
      LOCK();
      piVar2 = (int *)((longlong)local_1270 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1270 + 0x10))(local_1270);
      }
    }
  }
  if (local_1390 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1390 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_1390)(local_1390);
      LOCK();
      piVar2 = (int *)((longlong)local_1390 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1390 + 0x10))(local_1390);
      }
    }
  }
  if (local_12a8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_12a8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_12a8)(local_12a8);
      LOCK();
      piVar2 = (int *)((longlong)local_12a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_12a8 + 0x10))(local_12a8);
      }
    }
  }
  plVar6 = (longlong *)CONCAT44(uStack_136c,local_1370);
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
  if (local_1358[0] != (longlong *)0x0) {
    (**(code **)(*local_1358[0] + 0x10))();
  }
  FUN_147da3366(&local_11e0);
  if (local_1300[0] != (longlong *)0x0) {
    (**(code **)(*local_1300[0] + 0x10))();
  }
  FUN_147da3366(local_e98);
  FUN_147da34b4(local_b50);
  FUN_1495119e6(local_940);
  FUN_140a5660c(local_580);
  FUN_140767f30(local_2d8);
  FUN_14149255e(local_218);
  if ((local_60 ^ (ulonglong)auStack_1418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951143a FUN_14951143a body=611 status=ok
// SIG undefined FUN_14951143a(void)

longlong FUN_14951143a(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  lVar3 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar3 == 0) {
    lVar3 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_30,"ListView",1);
  uVar5 = 0;
  uVar4 = FUN_1458178ee(lVar3,local_30,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1ec) = 0;
  *(undefined8 *)(param_1 + 500) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x23d) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 600) = 6;
  *(undefined1 *)(param_1 + 0x25c) = 1;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 3;
  *(undefined1 *)(param_1 + 0x2d4) = 1;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined1 *)(param_1 + 0x2f8) = 1;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x310) = 1;
  *(undefined1 *)(param_1 + 0x315) = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  *(undefined2 *)(param_1 + 0x328) = 0x19;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined2 *)(param_1 + 0x340) = 0;
  lVar3 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar3 == 0) {
    lVar3 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_38,"ScrollBar",1);
  uVar4 = FUN_145817968(lVar3,local_38,0,0);
  *(undefined8 *)(param_1 + 0x348) = uVar4;
  *(undefined2 *)(param_1 + 0x350) = 0;
  lVar3 = DAT_14c96b2f0;
  cVar1 = FUN_144a8728e();
  if (cVar1 == '\0') {
    bVar2 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar2 ^ 1);
  }
  *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(lVar3 + uVar5 * 4);
  *(undefined4 *)(param_1 + 0x358) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x35c) = 0;
  *(undefined8 *)(param_1 + 0x364) = 0;
  *(undefined2 *)(param_1 + 0x36c) = 0x101;
  *(undefined1 *)(param_1 + 0x36e) = 0;
  *(undefined2 *)(param_1 + 0x370) = 0x101;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined1 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3ac) = 0;
  *(undefined8 *)(param_1 + 0x3b4) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951169e FUN_14951169e body=330 status=ok
// SIG undefined FUN_14951169e(void)

undefined8 *
FUN_14951169e(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined1 local_1e8 [440];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_149512548(local_1e8);
  local_208 = *(undefined8 *)*param_3;
  local_200 = ((undefined8 *)*param_3)[1];
  if (local_200 != 0) {
    LOCK();
    *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
    UNLOCK();
  }
  FUN_149512568(local_1e8,&local_208);
  local_228 = param_4;
  FUN_149531f4c(local_220);
  FUN_1495125ee(local_220,&local_1f8,local_1e8);
  *param_2 = local_1f8;
  param_2[1] = local_1f0;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
    UNLOCK();
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1f0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar1 = (int *)((longlong)local_1f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1f0 + 0x10))(local_1f0);
        }
      }
    }
  }
  if (local_218 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_218 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_218)(local_218);
      LOCK();
      piVar1 = (int *)((longlong)local_218 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_218 + 0x10))(local_218);
      }
    }
  }
  FUN_14951266e(local_1e8);
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495117ea FUN_1495117ea body=240 status=ok
// SIG undefined FUN_1495117ea(void)

void FUN_1495117ea(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 != (undefined8 *)0x0) {
    local_30 = *puVar3;
    local_28 = puVar3[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(param_1 + 0x2a0);
    *(undefined8 *)(param_1 + 0x298) = local_30;
    *(longlong *)(param_1 + 0x2a0) = local_28;
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
      local_30 = *(undefined8 *)(param_1 + 0x298);
      local_28 = *(longlong *)(param_1 + 0x2a0);
    }
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_1495126ae(param_1 + 0x2a8,&local_30);
  }
  puVar3 = (undefined8 *)param_2[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
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



// FUNCTION 1495118ec FUN_1495118ec body=133 status=ok
// SIG undefined FUN_1495118ec(void)

longlong FUN_1495118ec(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2e8) = uVar3;
  *(longlong *)(param_1 + 0x2f0) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 149511972 FUN_149511972 body=115 status=ok
// SIG undefined FUN_149511972(void)

longlong * FUN_149511972(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_14952fc88(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1495119e6 FUN_1495119e6 body=414 status=ok
// SIG undefined FUN_1495119e6(void)

void FUN_1495119e6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x3b0);
  FUN_1449db362(param_1 + 0x3a0);
  FUN_1449db362(param_1 + 0x390);
  FUN_1449db362(param_1 + 0x378);
  FUN_1449db362(param_1 + 0x330);
  if (*(char *)(param_1 + 800) == '\x01') {
    *(undefined1 *)(param_1 + 800) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x308);
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
  plVar3 = *(longlong **)(param_1 + 0x2f0);
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
  FUN_1449db362(param_1 + 0x2d8);
  FUN_1449db362(param_1 + 0x2c0);
  FUN_1449db362(param_1 + 0x2b0);
  FUN_1449db362(param_1 + 0x2a0);
  FUN_1449db362(param_1 + 0x290);
  FUN_1449db362(param_1 + 0x280);
  FUN_1449db362(param_1 + 0x270);
  FUN_1449db362(param_1 + 0x260);
  FUN_1449db362(param_1 + 0x248);
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
  FUN_1449db362(param_1 + 0x210);
  FUN_1449db362(param_1 + 0x200);
  FUN_1449db362(param_1 + 0x1f0);
  FUN_1449db362(param_1 + 0x1e0);
  FUN_1449db362(param_1 + 0x1d0);
  FUN_1449db362(param_1 + 0x1c0);
  FUN_1449db362(param_1 + 0x1b0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 149511b84 FUN_149511b84 body=2498 status=ok
// SIG undefined FUN_149511b84(void)

void FUN_149511b84(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  double dVar4;
  void **ppvVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  ushort uVar14;
  longlong lVar15;
  ushort uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  bool bVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_198 [40];
  longlong local_170;
  longlong *local_168;
  uint local_160;
  uint local_15c;
  longlong *local_158;
  ulonglong local_150;
  longlong local_148;
  longlong local_140;
  ulonglong local_138;
  longlong local_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  void *local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (0.5 < DAT_14c866ff8 - *(double *)(param_1 + 0x2b8)) {
    plVar9 = (longlong *)(param_1 + 0x278);
    iVar19 = *(int *)(param_1 + 0x284);
    FUN_145d195a5(*(undefined8 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x280));
    *(undefined4 *)(param_1 + 0x280) = 0;
    if ((iVar19 < 0) && (*(int *)(param_1 + 0x284) != 0)) {
      FUN_14951c6ee(plVar9);
    }
    FUN_1446ddc76(&local_d8,"LiveLink",1);
    pvVar3 = local_d8;
    uVar7 = FUN_144a52528();
    plVar8 = (longlong *)FUN_14493e38c(uVar7,pvVar3);
    uVar7 = (**(code **)(*plVar8 + 0x50))(plVar8);
    FUN_149506294(uVar7,&local_d8);
    lVar12 = (longlong)(int)(uint)uStack_d0;
    if (lVar12 != 0) {
      iVar19 = *(int *)(param_1 + 0x280);
      *(uint *)(param_1 + 0x280) = iVar19 + (uint)uStack_d0;
      if ((uint)(*(int *)(param_1 + 0x284) - iVar19) < (uint)uStack_d0) {
        FUN_14951c9ce(plVar9,iVar19);
      }
      memmove((void *)((longlong)iVar19 * 0x10 + *plVar9),local_d8,lVar12 << 4);
      uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
    }
    FUN_145d195a5(local_d8,0);
    if (local_d8 != (void *)0x0) {
      FUN_1400020a8();
    }
    plVar9 = (longlong *)(param_1 + 0x288);
    if (0 < *(int *)(param_1 + 0x290)) {
      uVar22 = 0;
      bVar24 = false;
      do {
        while( true ) {
          lVar12 = *(longlong *)(*plVar9 + uVar22 * 0x10);
          plVar8 = *(longlong **)(*plVar9 + 8 + uVar22 * 0x10);
          if (plVar8 == (longlong *)0x0) {
            uVar25 = SUB84(DAT_14c866ff8,0);
            uVar26 = (undefined4)((ulonglong)DAT_14c866ff8 >> 0x20);
            uVar7 = *(undefined8 *)(lVar12 + 0x10);
            uVar27 = (undefined4)uVar7;
            uVar28 = (undefined4)((ulonglong)uVar7 >> 0x20);
            uVar29 = (undefined4)*(undefined8 *)(param_1 + 0x2c0);
            uVar30 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2c0) >> 0x20);
          }
          else {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            uVar25 = SUB84(DAT_14c866ff8,0);
            uVar26 = (undefined4)((ulonglong)DAT_14c866ff8 >> 0x20);
            uVar7 = *(undefined8 *)(lVar12 + 0x10);
            uVar27 = (undefined4)uVar7;
            uVar28 = (undefined4)((ulonglong)uVar7 >> 0x20);
            uVar29 = (undefined4)*(undefined8 *)(param_1 + 0x2c0);
            uVar30 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x2c0) >> 0x20);
            LOCK();
            plVar11 = plVar8 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
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
          dVar4 = (double)CONCAT44(uVar26,uVar25) - (double)CONCAT44(uVar28,uVar27);
          if (dVar4 < (double)CONCAT44(uVar30,uVar29) || dVar4 == (double)CONCAT44(uVar30,uVar29))
          break;
          FUN_149531e10(plVar9,uVar22 & 0xffffffff);
          bVar24 = true;
          if ((longlong)*(int *)(param_1 + 0x290) <= (longlong)uVar22) goto LAB_149511dfa;
        }
        uVar22 = uVar22 + 1;
      } while ((longlong)uVar22 < (longlong)*(int *)(param_1 + 0x290));
      if (bVar24) {
LAB_149511dfa:
        FUN_149531dd2(plVar9);
      }
    }
    local_168 = plVar9;
    FUN_1446ddc76(&local_d8,"LiveLink",1);
    uVar7 = FUN_144a52528();
    plVar9 = (longlong *)FUN_14493e38c(uVar7,local_d8);
    (**(code **)(*plVar9 + 0x68))();
    local_b8 = 0;
    local_b0 = 0;
    local_d8 = (void *)0x0;
    uStack_d0 = 0;
    local_ac = 0xffffffff00000080;
    local_a4 = 0;
    local_98 = 0;
    local_90 = 0;
    FUN_149515c8e(&local_d8);
    local_170 = param_1;
    if ((longlong)*(int *)(param_1 + 0x280) != 0) {
      plVar9 = *(longlong **)(param_1 + 0x278);
      local_158 = plVar9 + (longlong)*(int *)(param_1 + 0x280) * 2;
      do {
        if ((longlong)*(int *)(param_1 + 0x290) != 0) {
          plVar8 = *(longlong **)(local_170 + 0x288);
          plVar11 = plVar8 + (longlong)*(int *)(param_1 + 0x290) * 2;
          do {
            plVar10 = (longlong *)*plVar8;
            plVar2 = (longlong *)plVar8[1];
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              UNLOCK();
            }
            if ((plVar10 == (longlong *)0x0) || (lVar12 = *plVar9, lVar12 == 0)) {
LAB_14951228b:
              bVar24 = false;
            }
            else {
              lVar20 = *plVar10;
              iVar19 = *(int *)(lVar20 + 0x18);
              if (iVar19 == *(int *)(lVar12 + 0x18)) {
                if (1 < iVar19) {
                  lVar15 = 0;
                  while( true ) {
                    uVar14 = *(ushort *)(*(longlong *)(lVar20 + 0x10) + lVar15);
                    uVar22 = (ulonglong)uVar14;
                    uVar16 = *(ushort *)(*(longlong *)(lVar12 + 0x10) + lVar15);
                    if (uVar14 != uVar16) break;
                    if (uVar14 == 0) goto LAB_14951221c;
LAB_1495121df:
                    lVar15 = lVar15 + 2;
                  }
                  if ((uVar16 | uVar14) < 0x80) {
                    uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
                    uVar13 = (ulonglong)uVar16;
                    uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                    if ((&DAT_149e05da0)[uVar22] == (&DAT_149e05da0)[uVar13]) goto LAB_1495121df;
                  }
                  if (uVar14 != uVar16) goto LAB_14951228b;
                }
              }
              else if (*(int *)(lVar12 + 0x18) + iVar19 != 1) goto LAB_14951228b;
LAB_14951221c:
              iVar19 = *(int *)(lVar20 + 0x28);
              if (iVar19 == *(int *)(lVar12 + 0x28)) {
                bVar24 = true;
                if (1 < iVar19) {
                  lVar15 = 0;
                  while( true ) {
                    uVar14 = *(ushort *)(*(longlong *)(lVar20 + 0x20) + lVar15);
                    uVar23 = (uint)uVar14;
                    uVar16 = *(ushort *)(*(longlong *)(lVar12 + 0x20) + lVar15);
                    uVar18 = (uint)uVar16;
                    if (uVar14 != uVar16) {
                      if ((uVar16 | uVar14) < 0x80) {
                        uVar23 = (uint)(byte)(&DAT_149e05da0)[uVar14];
                        uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar16];
                        if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar16])
                        goto LAB_149512257;
                      }
                      iVar19 = uVar23 - uVar18;
                      goto LAB_1495122d9;
                    }
                    if (uVar14 == 0) break;
LAB_149512257:
                    lVar15 = lVar15 + 2;
                  }
                  iVar19 = 0;
LAB_1495122d9:
                  bVar24 = iVar19 == 0;
                }
              }
              else {
                bVar24 = *(int *)(lVar12 + 0x28) + iVar19 == 1;
              }
            }
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              plVar10 = plVar2 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
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
            if (bVar24) {
              if ((plVar8 != (longlong *)0x0) && (*plVar8 != 0)) {
                *(double *)(*plVar8 + 0x10) = DAT_14c866ff8;
                param_1 = local_170;
                goto LAB_149512458;
              }
              break;
            }
            plVar8 = plVar8 + 2;
          } while (plVar8 != plVar11);
        }
        local_128 = 0x100000000;
        local_118 = 0xffffffff;
        uStack_110 = 0;
        uStack_120 = local_c8;
        if (local_b0 == 0) {
          iVar19 = 0;
        }
        else {
          FUN_1449c0562(&local_128);
          iVar19 = local_b0;
        }
        param_1 = local_170;
        uStack_e8 = CONCAT44(uStack_10c,uStack_110);
        local_f0 = local_118;
        uVar7 = local_f0;
        uStack_100 = local_128;
        local_f8 = (undefined4)uStack_120;
        uStack_f4 = uStack_120._4_4_;
        local_f0._4_4_ = (int)((ulonglong)local_118 >> 0x20);
        iVar17 = local_f0._4_4_;
        local_108 = &local_d8;
        if ((local_f0._4_4_ != iVar19) || (local_f0 = uVar7, uStack_120 != local_c8)) {
          do {
            local_f0 = uVar7;
            pvVar3 = *local_108;
            local_128 = *plVar9;
            uStack_120 = (undefined1 *)plVar9[1];
            if (uStack_120 != (undefined1 *)0x0) {
              LOCK();
              *(int *)(uStack_120 + 8) = *(int *)(uStack_120 + 8) + 1;
              UNLOCK();
            }
            if (*(int *)((longlong)pvVar3 + (longlong)iVar17 * 0x20 + 0x10) == 0) {
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = *(longlong **)((longlong)pvVar3 + (longlong)iVar17 * 0x20 + 8);
            }
            cVar6 = (**(code **)(*plVar8 + 0x58))
                              (plVar8,*(undefined8 *)(param_1 + 0x2c8),&local_128);
            if (cVar6 == '\0') goto LAB_149512458;
            local_f0 = CONCAT44(local_f0._4_4_,(uint)local_f0 & ~uStack_100._4_4_);
            FUN_1449c0562(&uStack_100);
            iVar17 = local_f0._4_4_;
            uVar7 = local_f0;
          } while (((undefined1 *)CONCAT44(uStack_f4,local_f8) != local_c8 ||
                   local_f0._4_4_ != iVar19) || local_108 != &local_d8);
        }
        plVar8 = (longlong *)FUN_14001cc68(0x28);
        plVar8[1] = (longlong)&DAT_100000001;
        *plVar8 = (longlong)&PTR_FUN_14bd37010;
        lVar12 = *plVar9;
        lVar20 = plVar9[1];
        if (lVar20 != 0) {
          LOCK();
          *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
          UNLOCK();
        }
        plVar8[2] = lVar12;
        plVar8[3] = lVar20;
        plVar8[4] = (longlong)DAT_14c866ff8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        iVar19 = *(int *)(param_1 + 0x290);
        uVar23 = iVar19 + 1;
        *(uint *)(param_1 + 0x290) = uVar23;
        if (*(uint *)(param_1 + 0x294) < uVar23) {
          FUN_149527a72(local_168);
        }
        param_1 = local_170;
        lVar20 = (longlong)iVar19 * 0x10;
        lVar12 = *local_168;
        *(longlong **)(lVar12 + lVar20) = plVar8 + 2;
        *(longlong **)(lVar12 + 8 + lVar20) = plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar8 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
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
LAB_149512458:
        plVar9 = plVar9 + 2;
      } while (plVar9 != local_158);
    }
    iVar19 = *(int *)(param_1 + 0x290);
    uVar22 = (ulonglong)iVar19;
    if (0 < (longlong)uVar22) {
      local_140 = *(longlong *)(local_170 + 0x288);
      plVar9 = (longlong *)(local_140 + 0x10);
      uVar13 = 0;
      do {
        if (uVar13 + 1 < uVar22) {
          cVar6 = FUN_14453f3ea(plVar9);
          if (cVar6 != '\0') {
            ppvVar5 = (void **)plVar9[-2];
            lVar12 = plVar9[-1];
            plVar9[-2] = *plVar9;
            plVar9[-1] = plVar9[1];
            local_108._0_4_ = SUB84(ppvVar5,0);
            local_108._4_4_ = (undefined4)((ulonglong)ppvVar5 >> 0x20);
            uStack_100._0_4_ = (undefined4)lVar12;
            uStack_100._4_4_ = (uint)((ulonglong)lVar12 >> 0x20);
            *(undefined4 *)plVar9 = (undefined4)local_108;
            *(undefined4 *)((longlong)plVar9 + 4) = local_108._4_4_;
            *(undefined4 *)(plVar9 + 1) = (undefined4)uStack_100;
            *(uint *)((longlong)plVar9 + 0xc) = uStack_100._4_4_;
            local_108 = ppvVar5;
            uStack_100 = lVar12;
          }
        }
        uVar13 = uVar13 + 2;
        plVar9 = plVar9 + 4;
      } while (uVar13 < uVar22);
      if (2 < iVar19) {
        uVar13 = 2;
        local_138 = uVar22;
        do {
          local_160 = (int)uVar13 * 2;
          local_130 = (longlong)(int)local_160;
          lVar12 = 0;
          local_150 = uVar13;
          do {
            local_15c = (int)local_138 - (int)lVar12;
            if ((int)local_160 <= (int)local_15c) {
              local_15c = local_160;
            }
            local_148 = lVar12;
            if ((int)local_150 < (int)local_15c && 0 < (int)local_150) {
              local_168 = (longlong *)(lVar12 * 0x10 + local_140);
              iVar19 = 0;
              uVar22 = local_150 & 0xffffffff;
              while( true ) {
                plVar9 = local_168;
                iVar21 = (int)uVar22;
                local_158 = (longlong *)CONCAT44(local_158._4_4_,iVar21);
                plVar8 = local_168 + (longlong)iVar21 * 2;
                iVar17 = 0;
                if (iVar21 - iVar19 != 0 && iVar19 <= iVar21) {
                  iVar17 = 0;
                  uVar23 = iVar21 - iVar19;
                  do {
                    iVar21 = (uVar23 >> 1) + iVar17;
                    cVar6 = FUN_14453f3ea(plVar8,plVar9 + (longlong)iVar19 * 2 +
                                                          (longlong)iVar21 * 2);
                    if (cVar6 == '\0') {
                      iVar17 = iVar21 + (uVar23 & 1);
                    }
                    bVar24 = 1 < uVar23;
                    uVar23 = uVar23 >> 1;
                  } while (bVar24);
                }
                iVar17 = iVar17 + iVar19;
                uVar22 = (ulonglong)local_158 & 0xffffffff;
                iVar21 = (int)local_158 - iVar17;
                if (iVar21 == 0 || (int)local_158 < iVar17) break;
                uVar23 = local_15c - (int)local_158;
                if (uVar23 == 0 || (int)local_15c < (int)local_158) {
                  iVar19 = 0;
                }
                else {
                  plVar9 = local_168 + (longlong)iVar17 * 2;
                  iVar19 = 0;
                  uVar22 = (ulonglong)uVar23;
                  do {
                    uVar22 = uVar22 >> 1;
                    uVar18 = (uint)uVar22 + iVar19;
                    cVar6 = FUN_14453f3ea(plVar8 + (ulonglong)uVar18 * 2,plVar9);
                    if (cVar6 != '\0') {
                      iVar19 = uVar18 + (uVar23 & 1);
                    }
                    bVar24 = 1 < uVar23;
                    uVar23 = (uint)uVar22;
                  } while (bVar24);
                  uVar22 = (ulonglong)(uint)((int)local_158 + iVar19);
                  if (0 < iVar19) {
                    plVar10 = plVar9 + (longlong)(((int)local_158 + iVar19) - iVar17) * 2;
                    plVar8 = plVar9 + (longlong)iVar21 * 2;
                    plVar11 = plVar9 + (longlong)iVar21 * 2;
                    do {
                      while( true ) {
                        plVar2 = plVar8 + 2;
                        ppvVar5 = (void **)*plVar9;
                        lVar12 = plVar9[1];
                        lVar20 = plVar8[1];
                        *plVar9 = *plVar8;
                        plVar9[1] = lVar20;
                        plVar9 = plVar9 + 2;
                        local_108._0_4_ = SUB84(ppvVar5,0);
                        local_108._4_4_ = (undefined4)((ulonglong)ppvVar5 >> 0x20);
                        uStack_100._0_4_ = (undefined4)lVar12;
                        uStack_100._4_4_ = (uint)((ulonglong)lVar12 >> 0x20);
                        *(undefined4 *)plVar8 = (undefined4)local_108;
                        *(undefined4 *)((longlong)plVar8 + 4) = local_108._4_4_;
                        *(undefined4 *)(plVar8 + 1) = (undefined4)uStack_100;
                        *(uint *)((longlong)plVar8 + 0xc) = uStack_100._4_4_;
                        if (plVar2 == plVar10) break;
                        plVar8 = plVar2;
                        if (plVar9 == plVar11) {
                          plVar11 = plVar2;
                        }
                      }
                      plVar8 = plVar11;
                      local_108 = ppvVar5;
                      uStack_100 = lVar12;
                    } while (plVar9 != plVar11);
                  }
                }
                if (((int)local_15c <= (int)uVar22) ||
                   (iVar19 = iVar17 + 1 + iVar19, (int)uVar22 <= iVar19)) break;
              }
            }
            lVar12 = local_148 + local_130;
          } while (lVar12 < (longlong)local_138);
          uVar13 = (ulonglong)local_160;
        } while ((int)local_160 < (int)local_138);
      }
    }
    lVar12 = local_170;
    (**(code **)(**(longlong **)(local_170 + 0x268) + 0x240))();
    *(double *)(lVar12 + 0x2b8) = DAT_14c866ff8;
    local_90 = 0;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_145d1934a(&local_d8);
  }
  if ((local_80 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149512548 FUN_149512548 body=32 status=ok
// SIG undefined FUN_149512548(void)

longlong FUN_149512548(longlong param_1)

{
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  return param_1;
}



// FUNCTION 149512568 FUN_149512568 body=133 status=ok
// SIG undefined FUN_149512568(void)

longlong FUN_149512568(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(longlong *)(param_1 + 0x1b0) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 1495125ee FUN_1495125ee body=128 status=ok
// SIG undefined FUN_1495125ee(void)

longlong * FUN_1495125ee(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  FUN_149536b8c(*param_1,param_3,*(undefined8 *)param_1[2]);
  lVar1 = *param_1;
  bVar4 = *(byte *)(lVar1 + 0x38);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x220))(lVar1 + 8);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(lVar1 + 0x38);
  }
  *(byte *)(lVar1 + 0x38) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14951266e FUN_14951266e body=64 status=ok
// SIG undefined FUN_14951266e(void)

void FUN_14951266e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1495126ae FUN_1495126ae body=134 status=ok
// SIG undefined FUN_1495126ae(void)

void FUN_1495126ae(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_20 = *param_2;
    local_18 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (**(code **)(*param_1 + 0x60))();
  }
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951273a FUN_14951273a body=49 status=ok
// SIG undefined FUN_14951273a(void)

longlong * FUN_14951273a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145a92b78();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 14951276c FUN_14951276c body=49 status=ok
// SIG undefined FUN_14951276c(void)

longlong * FUN_14951276c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1459f61fe();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 14951279e FUN_14951279e body=507 status=ok
// SIG undefined FUN_14951279e(void)

ulonglong FUN_14951279e(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  size_t _Size;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar16 = 0;
  if ((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_3 + 0x10) != 0)) {
    puVar7 = (undefined8 *)FUN_1494451c8(param_2);
    puVar8 = (undefined4 *)FUN_149445212(param_3);
    if (puVar8 == (undefined4 *)0x0 || puVar7 == (undefined8 *)0x0) {
LAB_149512828:
      uVar16 = 0;
    }
    else {
      uVar9 = FUN_14671a17a();
      uVar16 = 0;
      local_50 = 0;
      FUN_14485c47a(&local_50,uVar9);
      lVar12 = local_50;
      (**(code **)(*param_4 + 0x40))(param_4);
      param_4[1] = lVar12;
      (**(code **)*param_4)(param_4);
      plVar1 = param_4 + 5;
      uVar9 = FUN_14671a1de();
      local_50 = 0;
      FUN_14485c47a(&local_50,uVar9);
      lVar12 = local_50;
      (**(code **)(param_4[5] + 0x40))(plVar1);
      param_4[6] = lVar12;
      (**(code **)param_4[5])(plVar1);
      plVar10 = (longlong *)FUN_14951299a(param_4);
      puVar11 = (undefined4 *)FUN_149510126(plVar1);
      if ((longlong)*(int *)(puVar7 + 3) != 0) {
        lVar12 = (longlong)*(int *)(puVar7 + 3) << 3;
        lVar14 = 0;
        do {
          if (*(longlong *)(puVar7[2] + lVar14 * 8) == *(longlong *)(param_1 + 8)) {
            uVar13 = (uint)lVar14;
            if ((-1 < (int)uVar13) && ((int)uVar13 < (int)puVar8[0x2a])) {
              uVar2 = *(uint *)(puVar7 + 1);
              _Size = 0;
              if ((longlong)(int)uVar2 != 0) {
                iVar3 = (int)plVar10[1];
                *(uint *)(plVar10 + 1) = iVar3 + uVar2;
                if ((uint)(*(int *)((longlong)plVar10 + 0xc) - iVar3) < uVar2) {
                  FUN_1446f84a2(plVar10,iVar3);
                }
                _Size = (longlong)(int)uVar2 << 3;
                memcpy((void *)((longlong)iVar3 * 8 + *plVar10),(void *)*puVar7,_Size);
              }
              FUN_140bb2e20(puVar11 + 4,puVar8 + 4);
              uVar4 = puVar8[0x19];
              uVar5 = puVar8[0x1a];
              uVar6 = puVar8[0x1b];
              puVar11[0x18] = puVar8[0x18];
              puVar11[0x19] = uVar4;
              puVar11[0x1a] = uVar5;
              puVar11[0x1b] = uVar6;
              FUN_144a67f5c(puVar11 + 0x1c,puVar8 + 0x1c);
              uVar4 = puVar8[1];
              uVar5 = puVar8[2];
              uVar6 = puVar8[3];
              *puVar11 = *puVar8;
              puVar11[1] = uVar4;
              puVar11[2] = uVar5;
              puVar11[3] = uVar6;
              puVar7 = (undefined8 *)
                       ((ulonglong)(uVar13 & 0x7fffffff) * 0x60 + *(longlong *)(puVar8 + 0x28));
              puVar15 = (undefined8 *)(puVar11 + 0x28);
              for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar15 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar15 = puVar15 + 1;
              }
              uVar16 = CONCAT71((int7)(_Size >> 8),1);
              break;
            }
            goto LAB_149512828;
          }
          lVar14 = lVar14 + 1;
          uVar16 = 0;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 14951299a FUN_14951299a body=74 status=ok
// SIG undefined FUN_14951299a(void)

undefined8 FUN_14951299a(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = FUN_1492dc406();
  if (((lVar2 == 0) || (lVar3 = FUN_14671a17a(), lVar3 == 0)) ||
     (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30) {
      uVar4 = uVar1;
    }
  }
  return uVar4;
}



// FUNCTION 1495129e4 FUN_1495129e4 body=49 status=ok
// SIG undefined FUN_1495129e4(void)

longlong * FUN_1495129e4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145a92b78();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149512a16 FUN_149512a16 body=49 status=ok
// SIG undefined FUN_149512a16(void)

longlong * FUN_149512a16(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1459f61fe();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149512a48 FUN_149512a48 body=354 status=ok
// SIG undefined FUN_149512a48(void)

undefined8 * FUN_149512a48(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    goto LAB_149512a65;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) goto LAB_149512a65;
  plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14bd37d60;
  plVar4[2] = (longlong)&PTR_FUN_14bd37d80;
  plVar4[3] = 0;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
LAB_149512b22:
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
      if (plVar4 != (longlong *)0x0) goto LAB_149512b46;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x30) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
      *(longlong **)(param_1 + 0x38) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_149512b22;
    }
LAB_149512b46:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8) = *(undefined8 *)(param_1 + 0x28);
LAB_149512a65:
  *param_2 = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x38);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 149512bae FUN_149512bae body=49 status=ok
// SIG undefined FUN_149512bae(void)

longlong * FUN_149512bae(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1459f61fe();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149512be0 FUN_149512be0 body=49 status=ok
// SIG undefined FUN_149512be0(void)

longlong * FUN_149512be0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145a92b78();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149512c12 FUN_149512c12 body=495 status=ok
// SIG undefined FUN_149512c12(void)

undefined8 FUN_149512c12(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar7 = 0;
  if ((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_3 + 0x10) != 0)) {
    lVar5 = FUN_1492e683a(param_2);
    puVar6 = (undefined4 *)FUN_1492e6884(param_3);
    if (puVar6 == (undefined4 *)0x0 || lVar5 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_1467194c4();
      local_40 = 0;
      FUN_14485c47a(&local_40,uVar7);
      lVar5 = local_40;
      (**(code **)(*param_4 + 0x40))(param_4);
      param_4[1] = lVar5;
      (**(code **)*param_4)(param_4);
      plVar12 = param_4 + 5;
      uVar7 = FUN_146719588();
      local_40 = 0;
      FUN_14485c47a(&local_40,uVar7);
      lVar5 = local_40;
      (**(code **)(param_4[5] + 0x40))(plVar12);
      param_4[6] = lVar5;
      (**(code **)param_4[5])(plVar12);
      lVar5 = FUN_1494f81e6(param_4);
      puVar8 = (undefined4 *)FUN_1494f494e(plVar12);
      iVar11 = *(int *)(lVar5 + 0x18);
      *(uint *)(lVar5 + 0x18) = iVar11 + 1U;
      if (*(uint *)(lVar5 + 0x1c) < iVar11 + 1U) {
        FUN_1446f84a2(lVar5 + 0x10,iVar11);
      }
      *(undefined8 *)(*(longlong *)(lVar5 + 0x10) + (longlong)iVar11 * 8) =
           *(undefined8 *)(param_1 + 8);
      iVar11 = *(int *)(lVar5 + 0x28);
      *(uint *)(lVar5 + 0x28) = iVar11 + 1U;
      if (*(uint *)(lVar5 + 0x2c) < iVar11 + 1U) {
        FUN_1446f48e2((longlong *)(lVar5 + 0x20),iVar11);
      }
      *(undefined4 *)(*(longlong *)(lVar5 + 0x20) + (longlong)iVar11 * 4) = 0xffffffff;
      FUN_140bb2e20(puVar8 + 4,puVar6 + 4);
      uVar7 = *(undefined8 *)(puVar6 + 0x1a);
      *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)(puVar6 + 0x18);
      *(undefined8 *)(puVar8 + 0x1a) = uVar7;
      uVar1 = puVar6[1];
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      *puVar8 = *puVar6;
      puVar8[1] = uVar1;
      puVar8[2] = uVar2;
      puVar8[3] = uVar3;
      plVar12 = (longlong *)(puVar8 + 0x28);
      uVar4 = puVar8[0x2b];
      iVar11 = 0;
      if ((int)uVar4 < 1) {
        puVar8[0x2a] = 0;
        FUN_1401a2688(plVar12,1);
        iVar11 = puVar8[0x2a];
        uVar4 = puVar8[0x2b];
      }
      puVar8[0x2a] = iVar11 + 1U;
      if (uVar4 < iVar11 + 1U) {
        FUN_144a2c682(plVar12,iVar11);
      }
      puVar9 = (undefined8 *)(puVar6 + 0x28);
      puVar10 = (undefined8 *)((longlong)iVar11 * 0x60 + *plVar12);
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      uVar7 = CONCAT71((int7)(int3)((uint)iVar11 >> 8),1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149512e02 FUN_149512e02 body=49 status=ok
// SIG undefined FUN_149512e02(void)

longlong * FUN_149512e02(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1459f61fe();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149512e34 FUN_149512e34 body=49 status=ok
// SIG undefined FUN_149512e34(void)

longlong * FUN_149512e34(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145a92b78();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149512e66 FUN_149512e66 body=354 status=ok
// SIG undefined FUN_149512e66(void)

undefined8 * FUN_149512e66(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    goto LAB_149512e83;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) goto LAB_149512e83;
  plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14bd37da0;
  plVar4[2] = (longlong)&PTR_FUN_14bd37dc0;
  plVar4[3] = 0;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
LAB_149512f40:
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
      if (plVar4 != (longlong *)0x0) goto LAB_149512f64;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x30) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x38);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
      *(longlong **)(param_1 + 0x38) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_149512f40;
    }
LAB_149512f64:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8) = *(undefined8 *)(param_1 + 0x28);
LAB_149512e83:
  *param_2 = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x38);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 149512fde FUN_149512fde body=422 status=ok
// SIG undefined FUN_149512fde(void)

void FUN_149512fde(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
    }
    else {
      bVar5 = (*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0;
    }
    lVar4 = 0;
    if (bVar5) {
      lVar4 = lVar1;
    }
  }
  local_39 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((((lVar4 != 0) && (lVar1 = *(longlong *)(lVar4 + 0x70), lVar1 != 0)) &&
      (lVar4 = FUN_14671ab78(), lVar4 != 0)) &&
     ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
       lVar4 + 0x30)))) {
    FUN_1495136e2(param_1,uVar2,local_39);
  }
  *param_3 = 1;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149513186 FUN_149513186 body=294 status=ok
// SIG undefined FUN_149513186(void)

void FUN_149513186(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (lVar1 == 0) {
LAB_14951328b:
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar3 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_14951328b;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_14951328b;
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    lVar1 = *(longlong *)(lVar1 + 0x70);
    if (lVar1 != 0) {
      lVar4 = FUN_14671abdc();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        FUN_149513642(param_1,uVar2);
      }
    }
  }
  *param_3 = 1;
  return;
}



// FUNCTION 1495132b0 FUN_1495132b0 body=475 status=ok
// SIG undefined FUN_1495132b0(void)

void FUN_1495132b0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  undefined **local_c8;
  undefined8 local_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined **local_a0;
  undefined8 local_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined8 uStack_87;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_60 = *(longlong *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  if ((local_60 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = param_1 + -0x28;
  local_68 = *(undefined8 *)(param_2 + 4);
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  FUN_1492dc62e(param_1,&local_78,&local_60,uVar3);
  uVar3 = FUN_14951348c(lVar1);
  local_a0 = (undefined **)0x0;
  FUN_14485c47a(&local_a0,uVar3);
  ppuVar2 = local_a0;
  (**(code **)(*(longlong *)(param_1 + 0x148) + 0x40))(param_1 + 0x148);
  *(undefined ***)(param_1 + 0x150) = ppuVar2;
  (*(code *)**(undefined8 **)(param_1 + 0x148))(param_1 + 0x148);
  local_a0 = &PTR_FUN_149eacb10;
  local_98 = 0;
  uStack_90 = 0;
  uStack_8f = 0;
  uStack_88 = 0;
  uStack_87 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x158);
  uVar4 = FUN_14951348c(lVar1);
  FUN_1495081a4(&local_a0,uVar4,uVar3);
  FUN_1492dcaca(lVar1,&local_a0);
  local_c8 = &PTR_FUN_149eacb10;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b7 = 0;
  uStack_b0 = 0;
  uStack_af = 0;
  uVar3 = FUN_1495134f6(lVar1);
  local_58 = 0;
  FUN_14485c47a(&local_58,uVar3);
  uVar3 = local_58;
  FUN_144aa17a4(&local_c8);
  local_c0 = uVar3;
  (*(code *)*local_c8)(&local_c8);
  FUN_1492dcb38(lVar1,&local_c8);
  FUN_1428255e4(&local_58);
  uVar3 = FUN_14477b072(lVar1,DAT_14cc1e5d8);
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x248))(lVar1,uVar3,0);
  FUN_1428255f8(&local_58);
  FUN_1448eac94(&local_c8);
  FUN_1448eac94(&local_a0);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951348c FUN_14951348c body=106 status=ok
// SIG undefined FUN_14951348c(void)

void FUN_14951348c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_1411f0380();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      plVar4 = *(longlong **)(param_1 + 0x30);
      goto LAB_1495134c1;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1495134c1:
  plVar3 = (longlong *)plVar4[0x22];
  if (plVar3 == (longlong *)0x0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    plVar3 = (longlong *)plVar4[0x22];
  }
                    /* WARNING: Could not recover jumptable at 0x0001495134e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x2a0))();
  return;
}



// FUNCTION 1495134f6 FUN_1495134f6 body=106 status=ok
// SIG undefined FUN_1495134f6(void)

void FUN_1495134f6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    lVar2 = FUN_1411f0380();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      plVar4 = *(longlong **)(param_1 + 0x30);
      goto LAB_14951352b;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_14951352b:
  plVar3 = (longlong *)plVar4[0x22];
  if (plVar3 == (longlong *)0x0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    plVar3 = (longlong *)plVar4[0x22];
  }
                    /* WARNING: Could not recover jumptable at 0x000149513553. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x2a8))();
  return;
}



// FUNCTION 149513560 FUN_149513560 body=225 status=ok
// SIG undefined FUN_149513560(void)

void FUN_149513560(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined **local_48;
  undefined8 local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + -0x28;
  FUN_1492dc648();
  FUN_1428255e4(&local_48);
  uVar4 = FUN_14477b072(lVar1,DAT_14cc1e5e8);
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x248))(lVar1,uVar4,0);
  FUN_1428255f8(&local_48);
  cVar3 = FUN_1492dca8c(lVar1);
  if (cVar3 != '\0') {
    cVar3 = FUN_1492dca80(lVar1);
    if ((cVar3 == '\0') && (lVar2 = *(longlong *)(param_1 + 0x158), lVar2 != 0)) {
      local_48 = &PTR_FUN_149eacb10;
      local_40 = 0;
      uStack_38 = 0;
      uStack_37 = 0;
      uStack_30 = 0;
      uStack_2f = 0;
      uVar4 = FUN_14951348c(lVar1);
      FUN_1495081a4(&local_48,uVar4,lVar2);
      FUN_1492dcaca(lVar1,&local_48);
      FUN_1448eac94(&local_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149513642 FUN_149513642 body=159 status=ok
// SIG undefined FUN_149513642(void)

void FUN_149513642(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined **local_48;
  undefined8 local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14951348c();
  FUN_1495081a4(param_1 + 0x170,uVar1,param_2);
  local_48 = &PTR_FUN_149eacb10;
  local_40 = 0;
  uStack_38 = 0;
  uStack_37 = 0;
  uStack_30 = 0;
  uStack_2f = 0;
  uVar1 = FUN_14951348c(param_1);
  FUN_1495081a4(&local_48,uVar1,param_2);
  FUN_1492dcaca(param_1,&local_48);
  FUN_1492dc704(param_1);
  FUN_1448eac94(&local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495136e2 FUN_1495136e2 body=245 status=ok
// SIG undefined FUN_1495136e2(void)

void FUN_1495136e2(undefined8 param_1,undefined8 param_2,char param_3)

{
  double dVar1;
  double *pdVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [40];
  undefined **local_70;
  undefined8 local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined8 uStack_57;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = &PTR_FUN_149eacb10;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5f = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  uVar7 = FUN_1495134f6();
  FUN_1494f6cb8(&local_70,uVar7,param_2);
  dVar6 = DAT_14c866ff8;
  if ((param_3 != '\0') &&
     (pdVar2 = (double *)CONCAT71(uStack_5f,uStack_60), pdVar2 != (double *)0x0)) {
    QueryPerformanceCounter(&local_48);
    dVar1 = (double)local_48.QuadPart * DAT_14c83f420;
    *pdVar2 = dVar6;
    pdVar2[1] = (dVar1 + 16777216.0) - dVar6;
    uVar5 = DAT_14c846560._4_4_;
    uVar4 = (undefined4)DAT_14c846560;
    uVar3 = uRam000000014c84655c;
    if (DAT_14c846568 == '\x01') {
      *(undefined4 *)(pdVar2 + 0xc) = DAT_14c846558;
      *(undefined4 *)((longlong)pdVar2 + 100) = uVar3;
      *(undefined4 *)(pdVar2 + 0xd) = uVar4;
      *(undefined4 *)((longlong)pdVar2 + 0x6c) = uVar5;
    }
  }
  FUN_1492dcb38(param_1,&local_70);
  FUN_1448eac94(&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495137d8 FUN_1495137d8 body=389 status=ok
// SIG undefined FUN_1495137d8(void)

void FUN_1495137d8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_1448c2e86();
  lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,DAT_14cc0b540,0);
  lVar5 = (**(code **)(*(longlong *)(lVar4 + -8) + 0x228))(lVar4 + -8,param_2,1);
  (**(code **)(*(longlong *)(lVar4 + -8) + 0x180))(lVar4 + -8,&local_60,param_2);
  lVar4 = local_60;
  if ((((lVar5 != 0) && (local_60 != 0)) && (lVar6 = FUN_1411f0380(), lVar2 = local_60, lVar6 != 0))
     && ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38) &&
         (local_60 != 0 &&
          *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)))) {
    lVar4 = FUN_1411f0380();
    if ((lVar4 == 0) ||
       ((*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38) ||
        (lVar6 = local_60,
        *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)))) {
      lVar6 = 0;
    }
    lVar4 = FUN_145a92b78();
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      lVar4 = FUN_1494451c8(lVar5);
      iVar1 = *(int *)(lVar4 + 0x18);
      if ((longlong)iVar1 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x10);
        lVar5 = 0;
        do {
          local_68 = *(undefined8 *)(lVar4 + lVar5);
          local_58 = &local_68;
          local_50 = &local_68;
          FUN_140906722(param_1 + 0x28,local_44,&local_58,0);
          lVar5 = lVar5 + 8;
        } while ((longlong)iVar1 * 8 != lVar5);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14951395e FUN_14951395e body=49 status=ok
// SIG undefined FUN_14951395e(void)

longlong * FUN_14951395e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145a92b78();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149513990 FUN_149513990 body=24 status=ok
// SIG undefined FUN_149513990(void)

bool FUN_149513990(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140655cde(param_1 + 0x80);
  return lVar1 != 0;
}



// FUNCTION 1495139aa FUN_1495139aa body=45 status=ok
// SIG undefined FUN_1495139aa(void)

longlong FUN_1495139aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c149be(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149513a12 FUN_149513a12 body=38 status=ok
// SIG undefined FUN_149513a12(void)

undefined8 FUN_149513a12(undefined8 param_1,int param_2)

{
  FUN_145d19770();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149513a42 FUN_149513a42 body=45 status=ok
// SIG undefined FUN_149513a42(void)

longlong FUN_149513a42(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149513a70 FUN_149513a70 body=38 status=ok
// SIG undefined FUN_149513a70(void)

undefined8 FUN_149513a70(undefined8 param_1,int param_2)

{
  FUN_14951cea8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149513a9a FUN_149513a9a body=46 status=ok
// SIG undefined FUN_149513a9a(void)

longlong * FUN_149513a9a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x58);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x60);
  return param_2;
}



// FUNCTION 149513ac8 FUN_149513ac8 body=46 status=ok
// SIG undefined FUN_149513ac8(void)

longlong * FUN_149513ac8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x68);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x70);
  return param_2;
}



// FUNCTION 149513af6 FUN_149513af6 body=112 status=ok
// SIG undefined FUN_149513af6(void)

longlong FUN_149513af6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 0x50))(param_1,&local_18);
  lVar1 = local_18;
  if ((((local_18 == 0) || (lVar2 = FUN_14590a714(), lVar2 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    local_18 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_18;
}



// FUNCTION 149513bac FUN_149513bac body=38 status=ok
// SIG undefined FUN_149513bac(void)

undefined8 FUN_149513bac(undefined8 param_1,int param_2)

{
  FUN_14950ad50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149513bec FUN_149513bec body=47 status=ok
// SIG undefined FUN_149513bec(void)

longlong * FUN_149513bec(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  *param_2 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_2;
}



// FUNCTION 149513c1c FUN_149513c1c body=111 status=ok
// SIG undefined FUN_149513c1c(void)

undefined8 * FUN_149513c1c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x218));
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1492e578a(param_2,iVar1,0);
    FUN_1492e57ec(*param_2,uVar2,iVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x218));
  return param_2;
}



// FUNCTION 149513c8c FUN_149513c8c body=73 status=ok
// SIG undefined FUN_149513c8c(void)

undefined8 * FUN_149513c8c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x218));
  *param_2 = *(undefined8 *)(param_1 + 0x48);
  lVar1 = *(longlong *)(param_1 + 0x50);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x218));
  return param_2;
}



// FUNCTION 149513d00 FUN_149513d00 body=38 status=ok
// SIG undefined FUN_149513d00(void)

undefined8 FUN_149513d00(undefined8 param_1,int param_2)

{
  FUN_14950eca4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149513d2a FUN_149513d2a body=56 status=ok
// SIG undefined FUN_149513d2a(void)

void FUN_149513d2a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14951590a((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 149513d62 FUN_149513d62 body=66 status=ok
// SIG undefined FUN_149513d62(void)

void FUN_149513d62(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_149515990(param_1 + 0x10,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149513daa FUN_149513daa body=38 status=ok
// SIG undefined FUN_149513daa(void)

undefined8 FUN_149513daa(undefined8 param_1,int param_2)

{
  FUN_1495109a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149513e22 FUN_149513e22 body=59 status=ok
// SIG undefined FUN_149513e22(void)

undefined8 FUN_149513e22(longlong *param_1)

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



// FUNCTION 149513f7c FUN_149513f7c body=141 status=ok
// SIG undefined FUN_149513f7c(void)

undefined8 FUN_149513f7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      lVar1 = param_2 + 0x58 + lVar7;
      puVar5 = (undefined8 *)(param_3 + lVar7);
      puVar6 = (undefined8 *)(lVar1 + -0x58);
      for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      plVar2 = *(longlong **)(param_3 + 0x50 + lVar7);
      plVar3 = *(longlong **)(lVar1 + -8);
      if (plVar3 != plVar2) {
        *(longlong **)(param_2 + 0x50 + lVar7) = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      *(undefined4 *)(param_2 + 0x58 + lVar7) =
           *(undefined4 *)((undefined8 *)(param_3 + lVar7) + 0xb);
      lVar7 = lVar7 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149514032 FUN_149514032 body=59 status=ok
// SIG undefined FUN_149514032(void)

undefined8 FUN_149514032(longlong *param_1)

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



// FUNCTION 149514078 FUN_149514078 body=39 status=ok
// SIG undefined FUN_149514078(void)

void FUN_149514078(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(longlong **)(param_2 + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x50) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1495140f0 FUN_1495140f0 body=52 status=ok
// SIG undefined FUN_1495140f0(void)

void FUN_1495140f0(longlong *param_1)

{
  FUN_149514124();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149514124 FUN_149514124 body=313 status=ok
// SIG undefined FUN_149514124(void)

void FUN_149514124(longlong *param_1)

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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951425e FUN_14951425e body=55 status=ok
// SIG undefined FUN_14951425e(void)

void FUN_14951425e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  *(undefined1 *)((longlong)param_2 + 0x38) = 1;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0xffffffff00000080;
  return;
}



// FUNCTION 1495142f6 FUN_1495142f6 body=150 status=ok
// SIG undefined FUN_1495142f6(void)

undefined8 FUN_1495142f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar8);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar8);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      FUN_144a787a6();
      lVar3 = param_2 + lVar8;
      lVar4 = param_3 + lVar8;
      FUN_144a787a6(lVar3 + 0x20,lVar4 + 0x20);
      *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
      *(undefined1 *)(lVar3 + 0x38) = *(undefined1 *)(lVar4 + 0x38);
      FUN_140bb2e20(param_2 + lVar8 + 0x40,param_3 + lVar8 + 0x40);
      lVar8 = lVar8 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1495143b4 FUN_1495143b4 body=59 status=ok
// SIG undefined FUN_1495143b4(void)

undefined8 FUN_1495143b4(longlong *param_1)

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



// FUNCTION 149514400 FUN_149514400 body=40 status=ok
// SIG undefined FUN_149514400(void)

void FUN_149514400(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_14950680e(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 149514478 FUN_149514478 body=29 status=ok
// SIG undefined FUN_149514478(void)

undefined8 FUN_149514478(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149514496 FUN_149514496 body=148 status=ok
// SIG undefined FUN_149514496(void)

void FUN_149514496(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  
  fVar7 = *(float *)(param_1 + 0x30) - *(float *)(param_2 + 100);
  *(float *)(param_1 + 0x30) = fVar7;
  if (fVar7 <= 0.0) {
    lVar5 = FUN_14479d2ce(param_1 + 0x1c);
    if (lVar5 != 0) {
      FUN_149506c2c(lVar5,*(undefined8 *)(param_1 + 0x28));
    }
    uVar3 = *(undefined8 *)(param_1 + 0x14);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(param_2 + 0x60) = 1;
    iVar2 = *(int *)(param_2 + 0x58);
    lVar5 = (longlong)iVar2;
    *(uint *)(param_2 + 0x58) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
      FUN_14579eadc(param_2,iVar2);
    }
    lVar6 = *(longlong *)(param_2 + 0x50);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      lVar6 = param_2;
    }
    *(undefined8 *)(lVar6 + lVar5 * 0x14) = uVar4;
    *(undefined4 *)(lVar6 + 8 + lVar5 * 0x14) = uVar1;
    *(undefined8 *)(lVar6 + 0xc + lVar5 * 0x14) = uVar3;
  }
  return;
}



// FUNCTION 14951452a FUN_14951452a body=49 status=ok
// SIG undefined FUN_14951452a(void)

longlong * FUN_14951452a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14590a714();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149514562 FUN_149514562 body=38 status=ok
// SIG undefined FUN_149514562(void)

undefined8 FUN_149514562(undefined8 param_1,int param_2)

{
  FUN_145d193d2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149514588 FUN_149514588 body=120 status=ok
// SIG undefined FUN_149514588(void)

undefined8 * FUN_149514588(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1e628) {
    FUN_144b3d300(&DAT_14cc1e628);
    if (DAT_14cc1e628 == -1) {
      FUN_1446f470e(&DAT_14cc1e620,L"LiveLinkMotionController",1);
      _Init_thread_footer(&DAT_14cc1e628);
    }
  }
  *param_2 = DAT_14cc1e620;
  return param_2;
}



// FUNCTION 149514600 FUN_149514600 body=78 status=ok
// SIG undefined FUN_149514600(void)

void FUN_149514600(longlong *param_1)

{
  undefined1 *in_stack_00000030;
  undefined1 *in_stack_00000040;
  undefined1 *in_stack_00000050;
  
  *in_stack_00000030 = 0;
  *in_stack_00000040 = 0;
  *in_stack_00000050 = 0;
  (**(code **)(*param_1 + 0x18))();
  return;
}



// FUNCTION 14951464e FUN_14951464e body=380 status=ok
// SIG undefined FUN_14951464e(void)

ulonglong FUN_14951464e(longlong param_1,undefined8 param_2,longlong param_3,undefined4 *param_4,
                       undefined8 *param_5)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined **local_50;
  undefined8 local_48;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined8 uStack_37;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar5 = *(longlong *)(param_1 + 8);
    lVar6 = (longlong)*(int *)(param_1 + 0x10) << 5;
    do {
      if (*(longlong *)(lVar5 + 0x18) == param_3) {
        if (lVar5 != 0) {
          param_3 = *(longlong *)(lVar5 + 0x10);
        }
        break;
      }
      lVar5 = lVar5 + 0x20;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  local_78 = &PTR_FUN_149eacb10;
  local_70 = 0;
  uStack_68 = 0;
  uStack_67 = 0;
  uStack_60 = 0;
  uStack_5f = 0;
  local_50 = &PTR_FUN_149eacb10;
  local_48 = 0;
  uStack_40 = 0;
  uStack_3f = 0;
  uStack_38 = 0;
  uStack_37 = 0;
  plVar2 = *(longlong **)(param_1 + 0x18);
  local_80 = FUN_1459f61fe();
  if ((local_80 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_80);
  }
  cVar4 = (**(code **)(*plVar2 + 0x238))(plVar2,param_3,&local_80,&local_78);
  if (cVar4 != '\0') {
    lVar5 = FUN_149510126(&local_50);
    if (lVar5 != 0) {
      uVar3 = *(undefined8 *)(lVar5 + 200);
      uVar1 = *(undefined8 *)(lVar5 + 0xd0);
      *param_5 = *(undefined8 *)(lVar5 + 0xc0);
      param_5[1] = uVar3;
      param_5[2] = uVar1;
      local_b8 = *(undefined8 *)(lVar5 + 0xa0);
      uStack_b0 = *(undefined8 *)(lVar5 + 0xa8);
      local_a8 = *(undefined4 *)(lVar5 + 0xb0);
      uStack_a4 = *(undefined4 *)(lVar5 + 0xb4);
      uStack_a0 = *(undefined4 *)(lVar5 + 0xb8);
      uStack_9c = *(undefined4 *)(lVar5 + 0xbc);
      FUN_1448052ee(&local_b8,&local_98);
      *(undefined8 *)(param_4 + 4) = local_88;
      *param_4 = local_98;
      param_4[1] = uStack_94;
      param_4[2] = uStack_90;
      param_4[3] = uStack_8c;
      uVar7 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
      goto LAB_14951470b;
    }
  }
  uVar7 = 0;
LAB_14951470b:
  FUN_1448eac94(&local_50);
  FUN_1448eac94(&local_78);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495147cc FUN_1495147cc body=97 status=ok
// SIG undefined FUN_1495147cc(void)

void FUN_1495147cc(longlong *param_1)

{
  undefined1 *in_stack_00000028;
  undefined1 *in_stack_00000040;
  undefined1 *in_stack_00000050;
  undefined1 *in_stack_00000060;
  
  *in_stack_00000028 = 0;
  *in_stack_00000040 = 0;
  *in_stack_00000050 = 0;
  *in_stack_00000060 = 0;
  (**(code **)(*param_1 + 0x18))();
  return;
}



// FUNCTION 14951482e FUN_14951482e body=252 status=ok
// SIG undefined FUN_14951482e(void)

char FUN_14951482e(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined **local_50;
  undefined8 local_48;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined8 uStack_37;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar4 = (longlong)*(int *)(param_1 + 0x10) << 5;
    do {
      if (*(longlong *)(lVar3 + 0x18) == param_3) {
        if (lVar3 != 0) {
          param_3 = *(longlong *)(lVar3 + 0x10);
        }
        break;
      }
      lVar3 = lVar3 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  local_78 = &PTR_FUN_149eacb10;
  local_70 = 0;
  uStack_68 = 0;
  uStack_67 = 0;
  uStack_60 = 0;
  uStack_5f = 0;
  local_50 = &PTR_FUN_149eacb10;
  local_48 = 0;
  uStack_40 = 0;
  uStack_3f = 0;
  uStack_38 = 0;
  uStack_37 = 0;
  plVar1 = *(longlong **)(param_1 + 0x18);
  local_80 = FUN_14599ae76();
  if ((local_80 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_80);
  }
  cVar2 = (**(code **)(*plVar1 + 0x238))(plVar1,param_3,&local_80,&local_78);
  FUN_1448eac94(&local_50);
  FUN_1448eac94(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return cVar2 * '\x02';
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951492c FUN_14951492c body=100 status=ok
// SIG undefined FUN_14951492c(void)

void FUN_14951492c(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(lVar3 + 0x18 + lVar5);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_14951531c(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar4;
      lVar5 = lVar5 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar5);
  }
  return;
}



// FUNCTION 149514990 FUN_149514990 body=393 status=ok
// SIG undefined FUN_149514990(void)

undefined4 FUN_149514990(longlong param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  undefined **local_68;
  undefined8 local_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar5 = *(longlong *)(param_1 + 8);
    lVar6 = (longlong)*(int *)(param_1 + 0x10) << 5;
    do {
      if (*(longlong *)(lVar5 + 0x18) == param_2) {
        if (lVar5 != 0) {
          param_2 = *(longlong *)(lVar5 + 0x10);
        }
        break;
      }
      lVar5 = lVar5 + 0x20;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  local_90 = &PTR_FUN_149eacb10;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7f = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  local_68 = &PTR_FUN_149eacb10;
  local_60 = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  uStack_50 = 0;
  uStack_4f = 0;
  plVar2 = *(longlong **)(param_1 + 0x18);
  local_98 = FUN_14599ae76();
  if ((local_98 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_98);
  }
  cVar3 = (**(code **)(*plVar2 + 0x238))(plVar2,param_2,&local_98,&local_90);
  uVar8 = 0;
  if ((cVar3 != '\0') && (lVar5 = CONCAT71(uStack_57,uStack_58), lVar5 != 0)) {
    iVar1 = (int)((longlong *)CONCAT71(uStack_7f,uStack_80))[1];
    if ((iVar1 == *(int *)(lVar5 + 0x78)) && (iVar1 != 0)) {
      uVar7 = 0;
      lVar6 = 0;
      do {
        if (*(longlong *)(*(longlong *)CONCAT71(uStack_7f,uStack_80) + uVar7) == param_3) {
          if ((int)(~uVar7 >> 3) != 0) {
            uVar8 = *(undefined4 *)(*(longlong *)(lVar5 + 0x70) + (lVar6 >> 0x20) * 4);
            uVar4 = 1;
            goto LAB_149514a96;
          }
          break;
        }
        lVar6 = lVar6 + 0x100000000;
        uVar7 = uVar7 + 8;
      } while ((longlong)iVar1 * 8 != uVar7);
    }
  }
  uVar4 = 0;
LAB_149514a96:
  *param_4 = uVar4;
  FUN_1448eac94(&local_68);
  FUN_1448eac94(&local_90);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149514b2a FUN_149514b2a body=114 status=ok
// SIG undefined FUN_149514b2a(void)

void FUN_149514b2a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 149514b9c FUN_149514b9c body=135 status=ok
// SIG undefined FUN_149514b9c(void)

longlong FUN_149514b9c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14606c630();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_149514bd6;
  }
  local_30 = param_3;
  FUN_149514c24(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_149514bd6:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149514c24 FUN_149514c24 body=277 status=ok
// SIG undefined FUN_149514c24(void)

undefined4 * FUN_149514c24(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14606c906(param_1,local_48);
  uVar1 = ((undefined8 *)*param_4)[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = uVar1;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar2 = FUN_14606c892(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14606cc76(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149514d3a FUN_149514d3a body=132 status=ok
// SIG undefined FUN_149514d3a(void)

void FUN_149514d3a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149514dbf FUN_149514dbf body=635 status=ok
// SIG undefined FUN_149514dbf(void)

void FUN_149514dbf(undefined8 *param_1,uint param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    iVar11 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar13 = iVar11;
joined_r0x000149514e09:
    do {
      iVar10 = iVar11 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar12 = iVar11 * 2 + 2;
        if ((iVar12 < (int)param_2) &&
           (cVar9 = FUN_14951503c(param_3,param_1 + (longlong)iVar12 * 4,
                                  param_1 + (longlong)iVar10 * 4), cVar9 == '\0')) {
          iVar10 = iVar12;
        }
        puVar14 = param_1 + (longlong)iVar11 * 4;
        puVar15 = param_1 + (longlong)iVar10 * 4;
        cVar9 = FUN_14951503c(param_3,puVar14,puVar15);
        if (cVar9 != '\0') {
          uVar2 = *puVar14;
          uVar3 = puVar14[1];
          local_58 = puVar14[2];
          uStack_50 = puVar14[3];
          uVar4 = *puVar15;
          uVar5 = puVar15[1];
          uVar6 = puVar15[3];
          puVar14[2] = puVar15[2];
          puVar14[3] = uVar6;
          *puVar14 = uVar4;
          puVar14[1] = uVar5;
          local_68._0_4_ = (undefined4)uVar2;
          local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar3;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar15[2] = local_58;
          puVar15[3] = uStack_50;
          *(undefined4 *)puVar15 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar15 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_60._4_4_;
          iVar11 = iVar10;
          local_68 = uVar2;
          uStack_60 = uVar3;
          goto joined_r0x000149514e09;
        }
      }
      bVar17 = iVar13 != 0;
      iVar11 = iVar13 + -1;
      iVar13 = iVar11;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar16 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = param_1[uVar16 * 4];
      uVar7 = (param_1 + uVar16 * 4)[1];
      uVar8 = (param_1 + uVar16 * 4 + 2)[1];
      param_1[2] = param_1[uVar16 * 4 + 2];
      param_1[3] = uVar8;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      local_68._0_4_ = (undefined4)uVar2;
      local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar3;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_58._0_4_ = (undefined4)uVar4;
      local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar5;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar14 = param_1 + uVar16 * 4 + 2;
      *(undefined4 *)puVar14 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
      puVar14 = param_1 + uVar16 * 4;
      *(undefined4 *)puVar14 = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar14 + 4) = local_68._4_4_;
      *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_60._4_4_;
      local_68 = uVar2;
      uStack_60 = uVar3;
      local_58 = uVar4;
      uStack_50 = uVar5;
      if (param_2 != 2) {
        do {
          iVar11 = 0;
          iVar10 = 1;
          iVar13 = 0;
          do {
            iVar11 = iVar11 + 2;
            iVar12 = iVar10;
            if (((longlong)iVar11 < (longlong)uVar16) &&
               (cVar9 = FUN_14951503c(param_3,param_1 + (longlong)iVar11 * 4,
                                      param_1 + (longlong)iVar10 * 4), cVar9 == '\0')) {
              iVar12 = iVar11;
            }
            puVar14 = param_1 + (longlong)iVar13 * 4;
            puVar15 = param_1 + (longlong)iVar12 * 4;
            cVar9 = FUN_14951503c(param_3,puVar14,puVar15);
            if (cVar9 == '\0') break;
            uVar2 = *puVar14;
            uVar3 = puVar14[1];
            uVar4 = puVar14[2];
            uVar5 = puVar14[3];
            uVar6 = *puVar15;
            uVar7 = puVar15[1];
            uVar8 = puVar15[3];
            puVar14[2] = puVar15[2];
            puVar14[3] = uVar8;
            *puVar14 = uVar6;
            puVar14[1] = uVar7;
            local_68._0_4_ = (undefined4)uVar2;
            local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar3;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            local_58._0_4_ = (undefined4)uVar4;
            local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar5;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            *(undefined4 *)(puVar15 + 2) = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar15 + 0x14) = local_58._4_4_;
            *(undefined4 *)(puVar15 + 3) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_50._4_4_;
            *(undefined4 *)puVar15 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar15 + 4) = local_68._4_4_;
            *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_60._4_4_;
            iVar11 = iVar12 * 2;
            iVar10 = iVar12 * 2 + 1;
            local_68 = uVar2;
            uStack_60 = uVar3;
            local_58 = uVar4;
            uStack_50 = uVar5;
            iVar13 = iVar12;
          } while ((longlong)iVar10 < (longlong)uVar16);
          uVar1 = uVar16 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar5 = param_1[3];
          uVar6 = param_1[uVar1 * 4];
          uVar7 = (param_1 + uVar1 * 4)[1];
          uVar8 = (param_1 + uVar1 * 4 + 2)[1];
          param_1[2] = param_1[uVar1 * 4 + 2];
          param_1[3] = uVar8;
          *param_1 = uVar6;
          param_1[1] = uVar7;
          local_68._0_4_ = (undefined4)uVar2;
          local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar3;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_58._0_4_ = (undefined4)uVar4;
          local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar5;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar14 = param_1 + uVar1 * 4 + 2;
          *(undefined4 *)puVar14 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
          puVar14 = param_1 + uVar1 * 4;
          *(undefined4 *)puVar14 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar14 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_60._4_4_;
          bVar17 = 2 < uVar16;
          uVar16 = uVar1;
          local_68 = uVar2;
          uStack_60 = uVar3;
          local_58 = uVar4;
          uStack_50 = uVar5;
        } while (bVar17);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14951503c FUN_14951503c body=65 status=ok
// SIG undefined FUN_14951503c(void)

bool FUN_14951503c(int *param_1,int *param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  
  if ((((*param_2 != *param_1) || (param_2[1] != param_1[1])) || (param_2[2] != param_1[2])) ||
     (bVar1 = true, param_2[3] != param_1[3])) {
    iVar2 = FUN_1467d1620(param_2 + 4,param_3 + 0x10);
    bVar1 = iVar2 < 1;
  }
  return bVar1;
}



// FUNCTION 14951507e FUN_14951507e body=95 status=ok
// SIG undefined FUN_14951507e(void)

void FUN_14951507e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,4);
  }
  return;
}



// FUNCTION 1495150de FUN_1495150de body=132 status=ok
// SIG undefined FUN_1495150de(void)

void FUN_1495150de(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149515164 FUN_149515164 body=31 status=ok
// SIG undefined FUN_149515164(void)

undefined8 FUN_149515164(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495151a0 FUN_1495151a0 body=101 status=ok
// SIG undefined FUN_1495151a0(void)

void FUN_1495151a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd34f40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149515206 FUN_149515206 body=101 status=ok
// SIG undefined FUN_149515206(void)

void FUN_149515206(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd34f40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14951526c FUN_14951526c body=134 status=ok
// SIG undefined FUN_14951526c(void)

void FUN_14951526c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd34f40;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001495152e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149515302 FUN_149515302 body=25 status=ok
// SIG undefined FUN_149515302(void)

undefined8 FUN_149515302(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14951531c FUN_14951531c body=132 status=ok
// SIG undefined FUN_14951531c(void)

void FUN_14951531c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1495153a2 FUN_1495153a2 body=29 status=ok
// SIG undefined FUN_1495153a2(void)

undefined8 FUN_1495153a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495153c0 FUN_1495153c0 body=110 status=ok
// SIG undefined FUN_1495153c0(void)

void FUN_1495153c0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  
  cVar5 = FUN_14951542e(param_1 + 0x20);
  if (cVar5 != '\x02') {
    uVar3 = *(undefined8 *)(param_1 + 0x14);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(param_2 + 0x60) = 1;
    iVar2 = *(int *)(param_2 + 0x58);
    lVar7 = (longlong)iVar2;
    *(uint *)(param_2 + 0x58) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
      FUN_14579eadc(param_2,iVar2);
    }
    lVar6 = *(longlong *)(param_2 + 0x50);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      lVar6 = param_2;
    }
    *(undefined8 *)(lVar6 + lVar7 * 0x14) = uVar4;
    *(undefined4 *)(lVar6 + 8 + lVar7 * 0x14) = uVar1;
    *(undefined8 *)(lVar6 + 0xc + lVar7 * 0x14) = uVar3;
  }
  return;
}



// FUNCTION 14951542e FUN_14951542e body=481 status=ok
// SIG undefined FUN_14951542e(void)

ulonglong FUN_14951542e(longlong param_1)

{
  double dVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  byte bVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  undefined7 uVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_14479d2ce();
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_1448c2e86();
    iVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,DAT_14cc0b540);
    if (0 < iVar3) {
      plVar5 = (longlong *)FUN_1448c2e86();
      lVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,DAT_14cc0b540,0);
      plVar5 = (longlong *)(lVar6 + -8);
      if ((*(double *)(param_1 + 0x10) == 0.0) && (!NAN(*(double *)(param_1 + 0x10)))) {
        FUN_1494fe8c6(plVar5);
        *(double *)(param_1 + 0x10) = DAT_14c866ff8;
      }
      FUN_140323344(plVar5);
      FUN_1419081bc(plVar5);
      FUN_140149e7a(plVar5);
      FUN_1447f69b6(lVar6 + 0x178);
      (**(code **)(*(longlong *)(lVar6 + -8) + 0xf8))(plVar5,&local_48,1);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      dVar1 = DAT_14c866ff8;
      uVar9 = (undefined7)((ulonglong)&local_48 >> 8);
      if (local_40 == 0) {
        if ((longlong)*(int *)(lVar4 + 0x30) == 0) {
          bVar7 = 1;
        }
        else {
          lVar6 = *(longlong *)(lVar4 + 0x28);
          lVar10 = (longlong)*(int *)(lVar4 + 0x30) * 0x28;
          bVar7 = 1;
          do {
            bVar2 = (**(code **)(*plVar5 + 0xd8))(plVar5,lVar6);
            bVar7 = bVar7 & bVar2;
            lVar6 = lVar6 + 0x28;
            lVar10 = lVar10 + -0x28;
          } while (lVar10 != 0);
        }
        if ((longlong)*(int *)(lVar4 + 0x40) != 0) {
          lVar6 = *(longlong *)(lVar4 + 0x38);
          lVar10 = (longlong)*(int *)(lVar4 + 0x40) * 0x38;
          do {
            bVar2 = (**(code **)(*plVar5 + 0x140))(plVar5,lVar6);
            bVar7 = bVar7 & bVar2;
            lVar6 = lVar6 + 0x38;
            lVar10 = lVar10 + -0x38;
          } while (lVar10 != 0);
        }
        FUN_144750a86(lVar4,&local_48,0,0);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        uVar8 = CONCAT71(uVar9,bVar7) ^ 1;
      }
      else {
        dVar11 = *(double *)(param_1 + 8) - (DAT_14c866ff8 - *(double *)(param_1 + 0x10));
        *(double *)(param_1 + 8) = dVar11;
        uVar8 = CONCAT71(uVar9,1);
        if (0.0 < dVar11) {
          *(double *)(param_1 + 0x10) = dVar1;
          uVar8 = CONCAT71(uVar9,2);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14951565c FUN_14951565c body=54 status=ok
// SIG undefined FUN_14951565c(void)

undefined1 FUN_14951565c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149515774(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 1495156ba FUN_1495156ba body=59 status=ok
// SIG undefined FUN_1495156ba(void)

undefined8 FUN_1495156ba(longlong *param_1)

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



// FUNCTION 149515700 FUN_149515700 body=38 status=ok
// SIG undefined FUN_149515700(void)

void FUN_149515700(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 149515774 FUN_149515774 body=143 status=ok
// SIG undefined FUN_149515774(void)

longlong * FUN_149515774(longlong *param_1,longlong *param_2)

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
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar2;
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  FUN_149515804(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 149515804 FUN_149515804 body=79 status=ok
// SIG undefined FUN_149515804(void)

undefined8 * FUN_149515804(undefined8 *param_1,undefined8 *param_2)

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
      FUN_149515854(param_1,iVar1);
      FUN_1495158b6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149515854 FUN_149515854 body=98 status=ok
// SIG undefined FUN_149515854(void)

void FUN_149515854(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1495158b6 FUN_1495158b6 body=82 status=ok
// SIG undefined FUN_1495158b6(void)

void FUN_1495158b6(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 14951590a FUN_14951590a body=132 status=ok
// SIG undefined FUN_14951590a(void)

void FUN_14951590a(longlong param_1,int param_2)

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



// FUNCTION 149515990 FUN_149515990 body=159 status=ok
// SIG undefined FUN_149515990(void)

undefined8 FUN_149515990(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        FUN_149515a30(param_1);
        return 1;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return 0;
}



// FUNCTION 149515a30 FUN_149515a30 body=62 status=ok
// SIG undefined FUN_149515a30(void)

void FUN_149515a30(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149515a6e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 149515a6e FUN_149515a6e body=93 status=ok
// SIG undefined FUN_149515a6e(void)

ulonglong FUN_149515a6e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 149515acc FUN_149515acc body=132 status=ok
// SIG undefined FUN_149515acc(void)

void FUN_149515acc(longlong param_1,int param_2)

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



// FUNCTION 149515b52 FUN_149515b52 body=159 status=ok
// SIG undefined FUN_149515b52(void)

undefined8 FUN_149515b52(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        FUN_149515bf2(param_1);
        return 1;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return 0;
}



// FUNCTION 149515bf2 FUN_149515bf2 body=62 status=ok
// SIG undefined FUN_149515bf2(void)

void FUN_149515bf2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149515c30(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 149515c30 FUN_149515c30 body=93 status=ok
// SIG undefined FUN_149515c30(void)

ulonglong FUN_149515c30(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 149515c8e FUN_149515c8e body=122 status=ok
// SIG undefined FUN_149515c8e(void)

longlong FUN_149515c8e(longlong param_1,longlong param_2)

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
    FUN_149515d08(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 149515d08 FUN_149515d08 body=268 status=ok
// SIG undefined FUN_149515d08(void)

longlong * FUN_149515d08(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145d195f2(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_1447711aa(param_1);
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
          *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
          *(undefined4 *)(lVar3 + 0x10 + lVar6) = 0;
          FUN_149515e14(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x18 + lVar6) = *(undefined8 *)(lVar2 + 0x18 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 149515e14 FUN_149515e14 body=130 status=ok
// SIG undefined FUN_149515e14(void)

void FUN_149515e14(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149515e98 FUN_149515e98 body=1 status=ok
// SIG undefined FUN_149515e98(void)

void FUN_149515e98(void)

{
  return;
}



// FUNCTION 149515e9a FUN_149515e9a body=29 status=ok
// SIG undefined FUN_149515e9a(void)

undefined8 FUN_149515e9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149515eb8 FUN_149515eb8 body=1 status=ok
// SIG undefined FUN_149515eb8(void)

void FUN_149515eb8(void)

{
  return;
}



// FUNCTION 149515eba FUN_149515eba body=29 status=ok
// SIG undefined FUN_149515eba(void)

undefined8 FUN_149515eba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149515ed8 FUN_149515ed8 body=295 status=ok
// SIG undefined FUN_149515ed8(void)

undefined4 * FUN_149515ed8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c1954a(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  *(undefined8 *)(local_40 + 1) = *puVar1;
  local_40[3] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_146b74f22(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[4] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[3] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140c19730(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149516000 FUN_149516000 body=47 status=ok
// SIG undefined FUN_149516000(void)

void FUN_149516000(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1448eac94(param_1 + 0x28);
    FUN_1448eac94(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 149516030 FUN_149516030 body=57 status=ok
// SIG undefined FUN_149516030(void)

void FUN_149516030(undefined8 *param_1,int param_2)

{
  FUN_149516000(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14951606a(param_1,param_2);
  return;
}



// FUNCTION 14951606a FUN_14951606a body=112 status=ok
// SIG undefined FUN_14951606a(void)

void FUN_14951606a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 1495160da FUN_1495160da body=34 status=ok
// SIG undefined FUN_1495160da(void)

void FUN_1495160da(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eacb10;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  param_1[5] = &PTR_FUN_149eacb10;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  return;
}



// FUNCTION 1495160fc FUN_1495160fc body=147 status=ok
// SIG undefined FUN_1495160fc(void)

void FUN_1495160fc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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



// FUNCTION 149516190 FUN_149516190 body=68 status=ok
// SIG undefined FUN_149516190(void)

void FUN_149516190(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1495161d4();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14074f60a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1495161d4 FUN_1495161d4 body=329 status=ok
// SIG undefined FUN_1495161d4(void)

void FUN_1495161d4(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x84 + (longlong)iVar4 * 0x90) * 4) =
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



// FUNCTION 14951631e FUN_14951631e body=68 status=ok
// SIG undefined FUN_14951631e(void)

void FUN_14951631e(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_149516362();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140411364(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 149516362 FUN_149516362 body=329 status=ok
// SIG undefined FUN_149516362(void)

void FUN_149516362(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x18 + (longlong)iVar4 * 0x1c) * 4) =
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



// FUNCTION 1495164ac FUN_1495164ac body=128 status=ok
// SIG undefined FUN_1495164ac(void)

longlong FUN_1495164ac(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14951652e();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_14951658e(param_1,&local_24,param_2);
    lVar1 = *param_1 + (longlong)local_24 * 0x1c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 0x10;
}



// FUNCTION 14951652e FUN_14951652e body=96 status=ok
// SIG undefined FUN_14951652e(void)

longlong FUN_14951652e(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar2 = (longlong)iVar3 * 0x1c;
        if ((*(longlong *)(lVar1 + lVar2) == *param_3) &&
           (*(longlong *)(lVar1 + 8 + lVar2) == param_3[1])) {
          return lVar1 + lVar2;
        }
        iVar3 = *(int *)(lVar1 + lVar2 + 0x14);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 14951658e FUN_14951658e body=277 status=ok
// SIG undefined FUN_14951658e(void)

undefined4 * FUN_14951658e(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1495166a4(param_1,local_48);
  puVar1 = (undefined4 *)*param_4;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar2;
  local_40[2] = uVar3;
  local_40[3] = uVar4;
  *(undefined8 *)(local_40 + 4) = 0xffffffff00000000;
  cVar5 = FUN_1495167a0(param_1,param_3,local_40,local_48);
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[6] = param_3;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[5] = *(undefined4 *)
                     (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1495168b8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495166a4 FUN_1495166a4 body=251 status=ok
// SIG undefined FUN_1495166a4(void)

int * FUN_1495166a4(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 1495167a0 FUN_1495167a0 body=152 status=ok
// SIG undefined FUN_1495167a0(void)

undefined8 FUN_1495167a0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar2 = *param_1;
      do {
        lVar3 = (longlong)iVar7 * 0x1c;
        puVar1 = (undefined4 *)(lVar2 + lVar3);
        if ((*(longlong *)(lVar2 + lVar3) == *param_3) &&
           (*(longlong *)(lVar2 + 8 + lVar3) == param_3[1])) {
          lVar2 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar3 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          puVar1[4] = (int)param_3[2];
          *puVar1 = (int)lVar2;
          puVar1[1] = uVar4;
          puVar1[2] = (int)lVar3;
          puVar1[3] = uVar5;
          FUN_149516838((int)lVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[5];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 149516838 FUN_149516838 body=128 status=ok
// SIG undefined FUN_149516838(void)

void FUN_149516838(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 1495168b8 FUN_1495168b8 body=585 status=ok
// SIG undefined FUN_1495168b8(void)

void FUN_1495168b8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
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
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar7 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar6 = (longlong)iVar7 * 0x1c;
        uVar4 = *(undefined8 *)(lVar3 + lVar6);
        uVar5 = *(undefined8 *)(lVar3 + 8 + lVar6);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar9 = (uint)uVar4 & 0xffff;
        uVar9 = ((uint)uVar4 << 0x10 | uVar9) + (int)((ulonglong)uVar4 >> 0x20) +
                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4);
        uVar2 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar12 = (uint)uVar5 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar5 << 0x10 | uVar12) + (int)((ulonglong)uVar5 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar12 >> 4) + uVar9 * 0x40 +
                       (uVar9 >> 2) + 0x9e3779b9 ^ uVar9) & (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar3 + 0x18 + lVar6) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar6) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar7 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149516b02 FUN_149516b02 body=337 status=ok
// SIG undefined FUN_149516b02(void)

undefined4 * FUN_149516b02(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406e28c6(param_1,local_40);
  FUN_149516c54(param_3,local_38);
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar1 = *local_38;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = 0;
  cVar2 = FUN_1406e2804(param_1,uVar7,local_38);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_38 + 0x1c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1406e2aa2(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149516c54 FUN_149516c54 body=107 status=ok
// SIG undefined FUN_149516c54(void)

undefined8 * FUN_149516c54(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 1,iVar1,0);
    memcpy((void *)param_2[1],_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 149516cc0 FUN_149516cc0 body=181 status=ok
// SIG undefined FUN_149516cc0(void)

longlong FUN_149516cc0(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_149516d58;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_149516d76(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_149516d58:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 149516d76 FUN_149516d76 body=277 status=ok
// SIG undefined FUN_149516d76(void)

undefined4 * FUN_149516d76(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_149516e8c(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_149516f72(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_149517082(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149516e8c FUN_149516e8c body=229 status=ok
// SIG undefined FUN_149516e8c(void)

int * FUN_149516e8c(longlong *param_1,int *param_2)

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



// FUNCTION 149516f72 FUN_149516f72 body=158 status=ok
// SIG undefined FUN_149516f72(void)

undefined8 FUN_149516f72(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_149517010(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 149517010 FUN_149517010 body=114 status=ok
// SIG undefined FUN_149517010(void)

void FUN_149517010(longlong *param_1,int param_2)

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



// FUNCTION 149517082 FUN_149517082 body=476 status=ok
// SIG undefined FUN_149517082(void)

void FUN_149517082(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 149517260 FUN_149517260 body=132 status=ok
// SIG undefined FUN_149517260(void)

void FUN_149517260(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1495172e6 FUN_1495172e6 body=403 status=ok
// SIG undefined FUN_1495172e6(void)

void FUN_1495172e6(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1401ad22e(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_140171ad2(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x14 + -0x10);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -5;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
      uVar12 = uVar8 + 0x1f >> 5;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
        FUN_14499171c(plVar7,0,uVar12,4);
        *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
      }
      _Dst = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        _Dst = plVar7;
      }
      if (uVar8 < 0x101) {
        uVar12 = uVar12 + (uVar12 == 0);
      }
      memset(_Dst,0,(ulonglong)(uVar12 << 2));
      iVar1 = (int)param_1[5];
      iVar10 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[4];
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 14951747a FUN_14951747a body=473 status=ok
// SIG undefined FUN_14951747a(void)

void FUN_14951747a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 149517654 FUN_149517654 body=187 status=ok
// SIG undefined FUN_149517654(void)

longlong * FUN_149517654(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x14);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1495176f2;
          break;
        }
        iVar1 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_149517710(param_1,&local_1c,param_2,&local_30);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x14);
LAB_1495176f2:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 149517710 FUN_149517710 body=279 status=ok
// SIG undefined FUN_149517710(void)

undefined4 * FUN_149517710(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_149517828(param_1,local_48);
  puVar1 = (undefined4 *)param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  cVar2 = FUN_14951790e(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 2) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14951747a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149517828 FUN_149517828 body=230 status=ok
// SIG undefined FUN_149517828(void)

int * FUN_149517828(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 14951790e FUN_14951790e body=131 status=ok
// SIG undefined FUN_14951790e(void)

undefined8 FUN_14951790e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x14);
        if (*plVar2 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar2 + 1) = (int)param_3[1];
          *plVar2 = lVar1;
          FUN_149517992(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 149517992 FUN_149517992 body=114 status=ok
// SIG undefined FUN_149517992(void)

void FUN_149517992(longlong *param_1,int param_2)

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



// FUNCTION 149517a04 FUN_149517a04 body=89 status=ok
// SIG undefined FUN_149517a04(void)

void FUN_149517a04(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 149517a5e FUN_149517a5e body=52 status=ok
// SIG undefined FUN_149517a5e(void)

void FUN_149517a5e(longlong *param_1)

{
  FUN_149517a92();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149517a92 FUN_149517a92 body=89 status=ok
// SIG undefined FUN_149517a92(void)

void FUN_149517a92(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 149517aec FUN_149517aec body=95 status=ok
// SIG undefined FUN_149517aec(void)

void FUN_149517aec(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 149517b4c FUN_149517b4c body=52 status=ok
// SIG undefined FUN_149517b4c(void)

void FUN_149517b4c(longlong *param_1)

{
  FUN_149517b80();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149517b80 FUN_149517b80 body=89 status=ok
// SIG undefined FUN_149517b80(void)

void FUN_149517b80(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 149517bda FUN_149517bda body=321 status=ok
// SIG undefined FUN_149517bda(void)

undefined4 * FUN_149517bda(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149517d1c(param_1,local_48);
  uVar1 = *param_3;
  *local_40 = uVar1;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_149517e02(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0xc) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_149517eea(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149517d1c FUN_149517d1c body=229 status=ok
// SIG undefined FUN_149517d1c(void)

int * FUN_149517d1c(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 149517e02 FUN_149517e02 body=117 status=ok
// SIG undefined FUN_149517e02(void)

undefined8 FUN_149517e02(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          FUN_149517e78(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 149517e78 FUN_149517e78 body=114 status=ok
// SIG undefined FUN_149517e78(void)

void FUN_149517e78(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 149517eea FUN_149517eea body=476 status=ok
// SIG undefined FUN_149517eea(void)

void FUN_149517eea(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
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



// FUNCTION 1495180c8 FUN_1495180c8 body=311 status=ok
// SIG undefined FUN_1495180c8(void)

undefined4 * FUN_1495180c8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149518200(param_1,local_50);
  puVar8 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  puVar9 = local_48 + 4;
  for (lVar5 = 0xe; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 2;
  }
  local_48[0x20] = 0xffffffff;
  local_54 = local_50[0];
  cVar2 = FUN_1495182f0(param_1,uVar4,local_48,&local_54);
  uVar1 = local_54;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar3) {
      uVar6 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[0x21] = uVar4;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_48[0x20] =
           *(uint *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_149518402(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149518200 FUN_149518200 body=240 status=ok
// SIG undefined FUN_149518200(void)

int * FUN_149518200(longlong *param_1,int *param_2)

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
      FUN_146ceb2ee(param_1,iVar6);
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



// FUNCTION 1495182f0 FUN_1495182f0 body=151 status=ok
// SIG undefined FUN_1495182f0(void)

undefined8 FUN_1495182f0(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x90);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x90) == *param_3) {
          memmove(_Dst,param_3,0x80);
          FUN_149518388(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x80);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 149518388 FUN_149518388 body=122 status=ok
// SIG undefined FUN_149518388(void)

void FUN_149518388(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90 + 4) = uVar4;
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



// FUNCTION 149518402 FUN_149518402 body=433 status=ok
// SIG undefined FUN_149518402(void)

void FUN_149518402(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x90;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x84 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x80 + lVar7) =
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



// FUNCTION 1495185b4 FUN_1495185b4 body=31 status=ok
// SIG undefined FUN_1495185b4(void)

undefined8 FUN_1495185b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495185f0 FUN_1495185f0 body=101 status=ok
// SIG undefined FUN_1495185f0(void)

void FUN_1495185f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149518656 FUN_149518656 body=101 status=ok
// SIG undefined FUN_149518656(void)

void FUN_149518656(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1495186bc FUN_1495186bc body=134 status=ok
// SIG undefined FUN_1495186bc(void)

void FUN_1495186bc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35330;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149518733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149518752 FUN_149518752 body=31 status=ok
// SIG undefined FUN_149518752(void)

undefined8 FUN_149518752(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951878a FUN_14951878a body=101 status=ok
// SIG undefined FUN_14951878a(void)

void FUN_14951878a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd35410;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd353a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1495187f0 FUN_1495187f0 body=101 status=ok
// SIG undefined FUN_1495187f0(void)

void FUN_1495187f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd35410;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd353a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149518856 FUN_149518856 body=134 status=ok
// SIG undefined FUN_149518856(void)

void FUN_149518856(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bd35410;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd353a0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001495188cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1495188dc FUN_1495188dc body=87 status=ok
// SIG undefined FUN_1495188dc(void)

void FUN_1495188dc(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_2 + 4);
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  (**(code **)(param_1 + 0x20))
            ((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18),&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149518934 FUN_149518934 body=89 status=ok
// SIG undefined FUN_149518934(void)

undefined8 FUN_149518934(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_2 + 4);
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  (**(code **)(param_1 + 0x20))
            ((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18),&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149518990 FUN_149518990 body=48 status=ok
// SIG undefined FUN_149518990(void)

void FUN_149518990(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x98,8);
  }
  return;
}



// FUNCTION 1495189c0 FUN_1495189c0 body=48 status=ok
// SIG undefined FUN_1495189c0(void)

void FUN_1495189c0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 1495189f0 FUN_1495189f0 body=322 status=ok
// SIG undefined FUN_1495189f0(void)

void FUN_1495189f0(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 149518b34 FUN_149518b34 body=343 status=ok
// SIG undefined FUN_149518b34(void)

undefined4 * FUN_149518b34(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149518c8c(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  local_40[3] = *(undefined8 *)(puVar1 + 4);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar11 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  uVar11 = ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar7 >> 4);
  cVar6 = FUN_149518d72(param_1,uVar11,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_40 + 0x24) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_149518e6c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149518c8c FUN_149518c8c body=230 status=ok
// SIG undefined FUN_149518c8c(void)

int * FUN_149518c8c(longlong *param_1,int *param_2)

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
      FUN_14055df60(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 149518d72 FUN_149518d72 body=135 status=ok
// SIG undefined FUN_149518d72(void)

undefined8 FUN_149518d72(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_149518dfa((int)lVar5,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 149518dfa FUN_149518dfa body=114 status=ok
// SIG undefined FUN_149518dfa(void)

void FUN_149518dfa(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 149518e6c FUN_149518e6c body=473 status=ok
// SIG undefined FUN_149518e6c(void)

void FUN_149518e6c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 149519046 FUN_149519046 body=355 status=ok
// SIG undefined FUN_149519046(void)

undefined4 * FUN_149519046(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1495191aa(param_1,local_48);
  *(undefined8 *)(local_40 + 4) = *(undefined8 *)(param_3 + 4);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *local_40 = *param_3;
  local_40[1] = uVar2;
  local_40[2] = uVar3;
  local_40[3] = uVar4;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  iVar6 = FUN_1447addd0(local_40,0x10);
  uVar1 = *(undefined8 *)(local_40 + 4);
  uVar10 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  uVar10 = (((uint)uVar1 << 0x10 | uVar7) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar7 >> 4)) * 0xd + iVar6;
  cVar5 = FUN_149519290(param_1,uVar10,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar10 = *(int *)(param_1 + 0x48) - 1U & uVar10;
      local_40[7] = uVar10;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4)
      ;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1495193de(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495191aa FUN_1495191aa body=229 status=ok
// SIG undefined FUN_1495191aa(void)

int * FUN_1495191aa(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 149519290 FUN_149519290 body=93 status=ok
// SIG undefined FUN_149519290(void)

undefined8 FUN_149519290(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_1495192ee(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14951936c(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1495192ee FUN_1495192ee body=126 status=ok
// SIG undefined FUN_1495192ee(void)

int FUN_1495192ee(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x20;
        if ((((*(longlong *)(lVar3 + 0x10 + lVar5) == *(longlong *)(param_3 + 4)) &&
             (piVar1 = (int *)(lVar3 + lVar5), *piVar1 == *param_3)) && (piVar1[1] == param_3[1]))
           && ((piVar1[2] == param_3[2] && (piVar1[3] == param_3[3])))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x18 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 14951936c FUN_14951936c body=114 status=ok
// SIG undefined FUN_14951936c(void)

void FUN_14951936c(longlong *param_1,int param_2)

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



// FUNCTION 1495193de FUN_1495193de body=510 status=ok
// SIG undefined FUN_1495193de(void)

void FUN_1495193de(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar4 = *(undefined8 *)(lVar3 + 0x10 + lVar10);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar9 = (uint)uVar4 & 0xffff;
        uVar8 = (longlong)
                (int)((((uint)uVar4 << 0x10 | uVar9) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 0xd + iVar6) &
                (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495195de FUN_1495195de body=90 status=ok
// SIG undefined FUN_1495195de(void)

void FUN_1495195de(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14951936c();
  return;
}



// FUNCTION 149519638 FUN_149519638 body=9 status=ok
// SIG undefined FUN_149519638(void)

void FUN_149519638(longlong param_1)

{
  FUN_14950eca4(param_1 + 0x10);
  return;
}



// FUNCTION 149519642 FUN_149519642 body=29 status=ok
// SIG undefined FUN_149519642(void)

undefined8 FUN_149519642(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149519660 FUN_149519660 body=1 status=ok
// SIG undefined FUN_149519660(void)

void FUN_149519660(void)

{
  return;
}



// FUNCTION 149519662 FUN_149519662 body=29 status=ok
// SIG undefined FUN_149519662(void)

undefined8 FUN_149519662(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149519680 FUN_149519680 body=29 status=ok
// SIG undefined FUN_149519680(void)

undefined8 FUN_149519680(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951969e FUN_14951969e body=132 status=ok
// SIG undefined FUN_14951969e(void)

void FUN_14951969e(longlong param_1,int param_2)

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



// FUNCTION 149519724 FUN_149519724 body=308 status=ok
// SIG undefined FUN_149519724(void)

void FUN_149519724(LPCRITICAL_SECTION param_1,undefined4 *param_2,longlong *param_3,
                  undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [44];
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar5 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    plVar7 = (longlong *)0x0;
    do {
      local_6c = (uint)plVar7;
      lVar8 = uVar5 * 0x10 + -8;
      uVar9 = uVar5;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar6 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar6 != (longlong *)0x0))) {
        local_50 = *param_3;
        if ((local_50 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        local_58 = *(undefined8 *)(param_2 + 4);
        local_68 = *param_2;
        uStack_64 = param_2[1];
        uStack_60 = param_2[2];
        uStack_5c = param_2[3];
        cVar4 = (**(code **)(*plVar6 + 0x60))(plVar6,&local_68,&local_50,param_4);
        plVar7 = plVar6;
        if (cVar4 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar3) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if ((local_6c & 1) != 0) goto LAB_149519814;
          goto LAB_149519823;
        }
      }
      uVar5 = uVar9 - 1;
      plVar7 = (longlong *)CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_149519814:
    FUN_14109be94(param_1,0);
  }
LAB_149519823:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951985a FUN_14951985a body=133 status=ok
// SIG undefined FUN_14951985a(void)

int FUN_14951985a(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0xa0;
        if ((((*(longlong *)(lVar3 + 0x10 + lVar5) == *(longlong *)(param_3 + 4)) &&
             (piVar1 = (int *)(lVar3 + lVar5), *piVar1 == *param_3)) && (piVar1[1] == param_3[1]))
           && ((piVar1[2] == param_3[2] && (piVar1[3] == param_3[3])))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x98 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 1495198e0 FUN_1495198e0 body=189 status=ok
// SIG undefined FUN_1495198e0(void)

void FUN_1495198e0(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar3 != (longlong *)0x0))) {
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_149519967;
          goto LAB_149519976;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_149519967:
    FUN_14109be94(param_1,0);
  }
LAB_149519976:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149519989. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 14951999e FUN_14951999e body=132 status=ok
// SIG undefined FUN_14951999e(void)

void FUN_14951999e(longlong param_1,int param_2)

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



// FUNCTION 149519a24 FUN_149519a24 body=308 status=ok
// SIG undefined FUN_149519a24(void)

void FUN_149519a24(LPCRITICAL_SECTION param_1,undefined4 *param_2,longlong *param_3,
                  undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [44];
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar5 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    plVar7 = (longlong *)0x0;
    do {
      local_6c = (uint)plVar7;
      lVar8 = uVar5 * 0x10 + -8;
      uVar9 = uVar5;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar6 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar6 != (longlong *)0x0))) {
        local_50 = *param_3;
        if ((local_50 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        local_58 = *(undefined8 *)(param_2 + 4);
        local_68 = *param_2;
        uStack_64 = param_2[1];
        uStack_60 = param_2[2];
        uStack_5c = param_2[3];
        cVar4 = (**(code **)(*plVar6 + 0x60))(plVar6,&local_68,&local_50,param_4);
        plVar7 = plVar6;
        if (cVar4 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar3) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if ((local_6c & 1) != 0) goto LAB_149519b14;
          goto LAB_149519b23;
        }
      }
      uVar5 = uVar9 - 1;
      plVar7 = (longlong *)CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_149519b14:
    FUN_14109be94(param_1,0);
  }
LAB_149519b23:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149519b5a FUN_149519b5a body=103 status=ok
// SIG undefined FUN_149519b5a(void)

undefined8 FUN_149519b5a(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x18,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x18)) {
    uVar4 = uVar2 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x18,4);
  }
  return uVar3;
}



// FUNCTION 149519bc2 FUN_149519bc2 body=147 status=ok
// SIG undefined FUN_149519bc2(void)

void FUN_149519bc2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149519c56 FUN_149519c56 body=171 status=ok
// SIG undefined FUN_149519c56(void)

void FUN_149519c56(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar3 != (longlong *)0x0))) {
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_149519cdd;
          goto LAB_149519cec;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_149519cdd:
    FUN_14109be94(param_1,0);
  }
LAB_149519cec:
                    /* WARNING: Could not recover jumptable at 0x000149519cfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 149519d02 FUN_149519d02 body=96 status=ok
// SIG undefined FUN_149519d02(void)

undefined4 * FUN_149519d02(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  lVar1 = *(longlong *)(param_2 + 6);
  *(longlong *)(param_1 + 6) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1468fdb70(param_1 + 8,param_2 + 8);
  FUN_140d69258(param_1 + 0x12,param_2 + 0x12);
  return param_1;
}



// FUNCTION 149519d62 FUN_149519d62 body=146 status=ok
// SIG undefined FUN_149519d62(void)

void FUN_149519d62(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x98,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149519df6 FUN_149519df6 body=141 status=ok
// SIG undefined FUN_149519df6(void)

longlong FUN_149519df6(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14951985a();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0xa0;
    if (lVar3 + lVar2 != 0) goto LAB_149519e33;
  }
  local_30 = param_3;
  FUN_149519e84(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0xa0;
LAB_149519e33:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149519e84 FUN_149519e84 body=281 status=ok
// SIG undefined FUN_149519e84(void)

undefined4 * FUN_149519e84(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_149519f9e(param_1,local_48);
  FUN_14951a116(param_4,local_40);
  *(undefined4 *)(local_40 + 0x98) = 0xffffffff;
  cVar1 = FUN_14951a08c(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x9c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x98) =
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
      FUN_14951a344(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149519f9e FUN_149519f9e body=238 status=ok
// SIG undefined FUN_149519f9e(void)

int * FUN_149519f9e(longlong *param_1,int *param_2)

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
      FUN_1413d87fe(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0xa0);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0xa0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xa0 + *param_1;
  return param_2;
}



// FUNCTION 14951a08c FUN_14951a08c body=138 status=ok
// SIG undefined FUN_14951a08c(void)

undefined8 FUN_14951a08c(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_14951985a(), iVar2 != -1)) {
    lVar1 = *param_1;
    lVar3 = (longlong)iVar2 * 0xa0;
    FUN_14141661e(lVar3 + lVar1 + 0x58);
    FUN_14141661e(lVar1 + lVar3 + 0x18);
    memmove((void *)(lVar1 + lVar3),param_3,0x98);
    FUN_14951a2ca(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 14951a116 FUN_14951a116 body=177 status=ok
// SIG undefined FUN_14951a116(void)

undefined4 * FUN_14951a116(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_14951a1c8(&local_a8);
  puVar1 = (undefined4 *)*param_1;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar1 + 4);
  FUN_14951a238(param_2 + 6,&local_a8);
  FUN_14141661e(&local_68);
  FUN_14141661e(&local_a8);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951a1c8 FUN_14951a1c8 body=111 status=ok
// SIG undefined FUN_14951a1c8(void)

LPCRITICAL_SECTION FUN_14951a1c8(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x2;
  InitializeCriticalSection((LPCRITICAL_SECTION)&param_1[1].LockSemaphore);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&param_1[1].LockSemaphore,4000);
  param_1[2].LockSemaphore = (HANDLE)0x0;
  param_1[2].SpinCount = 0;
  param_1[3].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x2;
  return param_1;
}



// FUNCTION 14951a238 FUN_14951a238 body=146 status=ok
// SIG undefined FUN_14951a238(void)

LPCRITICAL_SECTION FUN_14951a238(LPCRITICAL_SECTION param_1,longlong param_2)

{
  HANDLE *lpCriticalSection;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x2;
  FUN_14574d6a0(param_1,param_2);
  lpCriticalSection = &param_1[1].LockSemaphore;
  InitializeCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
  param_1[2].LockSemaphore = (HANDLE)0x0;
  param_1[2].SpinCount = 0;
  param_1[3].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x2;
  FUN_14574d6a0(lpCriticalSection,param_2 + 0x40);
  return param_1;
}



// FUNCTION 14951a2ca FUN_14951a2ca body=122 status=ok
// SIG undefined FUN_14951a2ca(void)

void FUN_14951a2ca(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xa0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0 + 4) = uVar4;
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



// FUNCTION 14951a344 FUN_14951a344 body=517 status=ok
// SIG undefined FUN_14951a344(void)

void FUN_14951a344(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0xa0;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar4 = *(undefined8 *)(lVar3 + 0x10 + lVar10);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar9 = (uint)uVar4 & 0xffff;
        uVar8 = (longlong)
                (int)((((uint)uVar4 << 0x10 | uVar9) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 0xd + iVar6) &
                (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x9c + lVar10) = iVar6;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x98 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14951a54a FUN_14951a54a body=318 status=ok
// SIG undefined FUN_14951a54a(void)

undefined8 *
FUN_14951a54a(LPCRITICAL_SECTION param_1,undefined8 *param_2,LPCRITICAL_SECTION param_3)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  *param_2 = 0;
  EnterCriticalSection(param_3);
  if (param_3[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0 || param_3[1].LockCount == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)(*(longlong *)param_3[1].DebugInfo + 0x30))();
  }
  if (param_3 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_3);
  }
  if (cVar3 != '\0') {
    FUN_14109be94(param_1,1);
    EnterCriticalSection(param_3);
    p_Var2 = param_3[1].DebugInfo;
    if (p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0 || param_3[1].LockCount == 0) {
      local_40 = 0;
    }
    else {
      (**(code **)(*(longlong *)p_Var2 + 0x38))(p_Var2,&local_40);
    }
    if (param_3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_3);
    }
    *param_2 = local_40;
    iVar1 = param_1[1].LockCount;
    lVar4 = (longlong)iVar1;
    param_1[1].LockCount = iVar1 + 1U;
    if ((uint)param_1[1].RecursionCount < iVar1 + 1U) {
      FUN_1447a71f6(param_1 + 1,iVar1);
    }
    p_Var2 = param_1[1].DebugInfo;
    *(undefined8 *)(&p_Var2->Type + lVar4 * 8) = 0;
    *(undefined4 *)(&p_Var2->CriticalSection + lVar4 * 2) = 0;
    FUN_14109be38(&p_Var2->Type + lVar4 * 8,param_3);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951a68a FUN_14951a68a body=190 status=ok
// SIG undefined FUN_14951a68a(void)

void FUN_14951a68a(LPCRITICAL_SECTION param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined1 auStack_78 [32];
  _RTL_CRITICAL_SECTION local_58;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != param_1) {
    InitializeCriticalSection(&local_58);
    SetCriticalSectionSpinCount(&local_58,4000);
    local_30 = 0;
    local_28 = 0;
    EnterCriticalSection(param_2);
    p_Var1 = param_2[1].DebugInfo;
    if (p_Var1 != (PRTL_CRITICAL_SECTION_DEBUG)0x0 && param_2[1].LockCount != 0) {
      (**(code **)(*(longlong *)p_Var1 + 0x50))(p_Var1,&local_58);
    }
    if (param_2 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_2);
    }
    FUN_145ee8172(param_1,&local_58);
    FUN_1401cb1ee(&local_58);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951a74a FUN_14951a74a body=318 status=ok
// SIG undefined FUN_14951a74a(void)

undefined8 *
FUN_14951a74a(LPCRITICAL_SECTION param_1,undefined8 *param_2,LPCRITICAL_SECTION param_3)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  *param_2 = 0;
  EnterCriticalSection(param_3);
  if (param_3[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0 || param_3[1].LockCount == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)(*(longlong *)param_3[1].DebugInfo + 0x30))();
  }
  if (param_3 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_3);
  }
  if (cVar3 != '\0') {
    FUN_14109be94(param_1,1);
    EnterCriticalSection(param_3);
    p_Var2 = param_3[1].DebugInfo;
    if (p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0 || param_3[1].LockCount == 0) {
      local_40 = 0;
    }
    else {
      (**(code **)(*(longlong *)p_Var2 + 0x38))(p_Var2,&local_40);
    }
    if (param_3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_3);
    }
    *param_2 = local_40;
    iVar1 = param_1[1].LockCount;
    lVar4 = (longlong)iVar1;
    param_1[1].LockCount = iVar1 + 1U;
    if ((uint)param_1[1].RecursionCount < iVar1 + 1U) {
      FUN_1447a71f6(param_1 + 1,iVar1);
    }
    p_Var2 = param_1[1].DebugInfo;
    *(undefined8 *)(&p_Var2->Type + lVar4 * 8) = 0;
    *(undefined4 *)(&p_Var2->CriticalSection + lVar4 * 2) = 0;
    FUN_14109be38(&p_Var2->Type + lVar4 * 8,param_3);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951a88a FUN_14951a88a body=190 status=ok
// SIG undefined FUN_14951a88a(void)

void FUN_14951a88a(LPCRITICAL_SECTION param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined1 auStack_78 [32];
  _RTL_CRITICAL_SECTION local_58;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != param_1) {
    InitializeCriticalSection(&local_58);
    SetCriticalSectionSpinCount(&local_58,4000);
    local_30 = 0;
    local_28 = 0;
    EnterCriticalSection(param_2);
    p_Var1 = param_2[1].DebugInfo;
    if (p_Var1 != (PRTL_CRITICAL_SECTION_DEBUG)0x0 && param_2[1].LockCount != 0) {
      (**(code **)(*(longlong *)p_Var1 + 0x50))(p_Var1,&local_58);
    }
    if (param_2 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_2);
    }
    FUN_145ee8172(param_1,&local_58);
    FUN_1401cb1ee(&local_58);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951a94a FUN_14951a94a body=189 status=ok
// SIG undefined FUN_14951a94a(void)

longlong FUN_14951a94a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x110;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x110) == *param_3) {
          if (lVar3 != 0) goto LAB_14951a9ea;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x108);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14951aa08(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x110 + *param_1;
LAB_14951a9ea:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14951aa08 FUN_14951aa08 body=281 status=ok
// SIG undefined FUN_14951aa08(void)

undefined4 * FUN_14951aa08(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_14951ab22(param_1,local_48);
  FUN_14951acd8(param_4,local_40);
  *(undefined4 *)(local_40 + 0x108) = 0xffffffff;
  cVar1 = FUN_14951ac0e(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x10c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x108) =
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
      FUN_14951afba(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951ab22 FUN_14951ab22 body=235 status=ok
// SIG undefined FUN_14951ab22(void)

int * FUN_14951ab22(longlong *param_1,int *param_2)

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
      FUN_140e30e3a(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x110);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x110) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x110 + *param_1;
  return param_2;
}



// FUNCTION 14951ac0e FUN_14951ac0e body=201 status=ok
// SIG undefined FUN_14951ac0e(void)

undefined8 FUN_14951ac0e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x110);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x110) == *param_3) {
          FUN_14141661e((longlong)_Dst + 200);
          FUN_14141661e((longlong)_Dst + 0x88);
          FUN_14141661e((longlong)_Dst + 0x48);
          FUN_14141661e((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x108);
          FUN_14951af40(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x108);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14951acd8 FUN_14951acd8 body=170 status=ok
// SIG undefined FUN_14951acd8(void)

undefined8 * FUN_14951acd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_148 [40];
  undefined1 local_120 [64];
  undefined1 local_e0 [64];
  undefined1 local_a0 [64];
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  memset(local_120,0,0x100);
  FUN_14951ad84(local_120);
  *param_2 = *(undefined8 *)*param_1;
  FUN_14951ae3e(param_2 + 1,local_120);
  FUN_14141661e(local_60);
  FUN_14141661e(local_a0);
  FUN_14141661e(local_e0);
  FUN_14141661e(local_120);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951ad84 FUN_14951ad84 body=185 status=ok
// SIG undefined FUN_14951ad84(void)

LPCRITICAL_SECTION FUN_14951ad84(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x2;
  InitializeCriticalSection((LPCRITICAL_SECTION)&param_1[1].LockSemaphore);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&param_1[1].LockSemaphore,4000);
  param_1[2].LockSemaphore = (HANDLE)0x0;
  param_1[2].SpinCount = 0;
  param_1[3].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x2;
  InitializeCriticalSection((LPCRITICAL_SECTION)&param_1[3].LockCount);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&param_1[3].LockCount,4000);
  param_1[4].LockCount = 0;
  param_1[4].RecursionCount = 0;
  param_1[4].OwningThread = (HANDLE)0x0;
  param_1[4].LockSemaphore = (HANDLE)0x2;
  InitializeCriticalSection((LPCRITICAL_SECTION)&param_1[4].SpinCount);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&param_1[4].SpinCount,4000);
  param_1[5].SpinCount = 0;
  param_1[6].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[6].LockCount = 2;
  param_1[6].RecursionCount = 0;
  return param_1;
}



// FUNCTION 14951ae3e FUN_14951ae3e body=258 status=ok
// SIG undefined FUN_14951ae3e(void)

LPCRITICAL_SECTION FUN_14951ae3e(LPCRITICAL_SECTION param_1,longlong param_2)

{
  HANDLE *lpCriticalSection;
  LONG *lpCriticalSection_00;
  ULONG_PTR *lpCriticalSection_01;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x2;
  FUN_14574d6a0(param_1,param_2);
  lpCriticalSection = &param_1[1].LockSemaphore;
  InitializeCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
  param_1[2].LockSemaphore = (HANDLE)0x0;
  param_1[2].SpinCount = 0;
  param_1[3].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x2;
  FUN_14574d6a0(lpCriticalSection,param_2 + 0x40);
  lpCriticalSection_00 = &param_1[3].LockCount;
  InitializeCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)lpCriticalSection_00,4000);
  param_1[4].LockCount = 0;
  param_1[4].RecursionCount = 0;
  param_1[4].OwningThread = (HANDLE)0x0;
  param_1[4].LockSemaphore = (HANDLE)0x2;
  FUN_14574d6a0(lpCriticalSection_00,param_2 + 0x80);
  lpCriticalSection_01 = &param_1[4].SpinCount;
  InitializeCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_01);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)lpCriticalSection_01,4000);
  param_1[5].SpinCount = 0;
  param_1[6].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[6].LockCount = 2;
  param_1[6].RecursionCount = 0;
  FUN_14574d6a0(lpCriticalSection_01,param_2 + 0xc0);
  return param_1;
}



// FUNCTION 14951af40 FUN_14951af40 body=122 status=ok
// SIG undefined FUN_14951af40(void)

void FUN_14951af40(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x110) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x110) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x110 + 4) = uVar5;
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



// FUNCTION 14951afba FUN_14951afba body=482 status=ok
// SIG undefined FUN_14951afba(void)

void FUN_14951afba(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x110;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x108 + lVar7) =
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



// FUNCTION 14951b19e FUN_14951b19e body=318 status=ok
// SIG undefined FUN_14951b19e(void)

undefined8 *
FUN_14951b19e(LPCRITICAL_SECTION param_1,undefined8 *param_2,LPCRITICAL_SECTION param_3)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  *param_2 = 0;
  EnterCriticalSection(param_3);
  if (param_3[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0 || param_3[1].LockCount == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)(*(longlong *)param_3[1].DebugInfo + 0x30))();
  }
  if (param_3 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_3);
  }
  if (cVar3 != '\0') {
    FUN_14109be94(param_1,1);
    EnterCriticalSection(param_3);
    p_Var2 = param_3[1].DebugInfo;
    if (p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0 || param_3[1].LockCount == 0) {
      local_40 = 0;
    }
    else {
      (**(code **)(*(longlong *)p_Var2 + 0x38))(p_Var2,&local_40);
    }
    if (param_3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_3);
    }
    *param_2 = local_40;
    iVar1 = param_1[1].LockCount;
    lVar4 = (longlong)iVar1;
    param_1[1].LockCount = iVar1 + 1U;
    if ((uint)param_1[1].RecursionCount < iVar1 + 1U) {
      FUN_1447a71f6(param_1 + 1,iVar1);
    }
    p_Var2 = param_1[1].DebugInfo;
    *(undefined8 *)(&p_Var2->Type + lVar4 * 8) = 0;
    *(undefined4 *)(&p_Var2->CriticalSection + lVar4 * 2) = 0;
    FUN_14109be38(&p_Var2->Type + lVar4 * 8,param_3);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951b2de FUN_14951b2de body=190 status=ok
// SIG undefined FUN_14951b2de(void)

void FUN_14951b2de(LPCRITICAL_SECTION param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined1 auStack_78 [32];
  _RTL_CRITICAL_SECTION local_58;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != param_1) {
    InitializeCriticalSection(&local_58);
    SetCriticalSectionSpinCount(&local_58,4000);
    local_30 = 0;
    local_28 = 0;
    EnterCriticalSection(param_2);
    p_Var1 = param_2[1].DebugInfo;
    if (p_Var1 != (PRTL_CRITICAL_SECTION_DEBUG)0x0 && param_2[1].LockCount != 0) {
      (**(code **)(*(longlong *)p_Var1 + 0x50))(p_Var1,&local_58);
    }
    if (param_2 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_2);
    }
    FUN_145ee8172(param_1,&local_58);
    FUN_1401cb1ee(&local_58);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951b39e FUN_14951b39e body=318 status=ok
// SIG undefined FUN_14951b39e(void)

undefined8 *
FUN_14951b39e(LPCRITICAL_SECTION param_1,undefined8 *param_2,LPCRITICAL_SECTION param_3)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection(param_1);
  *param_2 = 0;
  EnterCriticalSection(param_3);
  if (param_3[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0 || param_3[1].LockCount == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)(*(longlong *)param_3[1].DebugInfo + 0x30))();
  }
  if (param_3 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_3);
  }
  if (cVar3 != '\0') {
    FUN_14109be94(param_1,1);
    EnterCriticalSection(param_3);
    p_Var2 = param_3[1].DebugInfo;
    if (p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0 || param_3[1].LockCount == 0) {
      local_40 = 0;
    }
    else {
      (**(code **)(*(longlong *)p_Var2 + 0x38))(p_Var2,&local_40);
    }
    if (param_3 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_3);
    }
    *param_2 = local_40;
    iVar1 = param_1[1].LockCount;
    lVar4 = (longlong)iVar1;
    param_1[1].LockCount = iVar1 + 1U;
    if ((uint)param_1[1].RecursionCount < iVar1 + 1U) {
      FUN_1447a71f6(param_1 + 1,iVar1);
    }
    p_Var2 = param_1[1].DebugInfo;
    *(undefined8 *)(&p_Var2->Type + lVar4 * 8) = 0;
    *(undefined4 *)(&p_Var2->CriticalSection + lVar4 * 2) = 0;
    FUN_14109be38(&p_Var2->Type + lVar4 * 8,param_3);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951b4de FUN_14951b4de body=190 status=ok
// SIG undefined FUN_14951b4de(void)

void FUN_14951b4de(LPCRITICAL_SECTION param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined1 auStack_78 [32];
  _RTL_CRITICAL_SECTION local_58;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != param_1) {
    InitializeCriticalSection(&local_58);
    SetCriticalSectionSpinCount(&local_58,4000);
    local_30 = 0;
    local_28 = 0;
    EnterCriticalSection(param_2);
    p_Var1 = param_2[1].DebugInfo;
    if (p_Var1 != (PRTL_CRITICAL_SECTION_DEBUG)0x0 && param_2[1].LockCount != 0) {
      (**(code **)(*(longlong *)p_Var1 + 0x50))(p_Var1,&local_58);
    }
    if (param_2 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_2);
    }
    FUN_145ee8172(param_1,&local_58);
    FUN_1401cb1ee(&local_58);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951b59e FUN_14951b59e body=204 status=ok
// SIG undefined FUN_14951b59e(void)

void FUN_14951b59e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14951b5f1;
    }
  }
  lVar2 = 0;
LAB_14951b5f1:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14951b7ea(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951b680 FUN_14951b680 body=48 status=ok
// SIG undefined FUN_14951b680(void)

void FUN_14951b680(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14951b7ea FUN_14951b7ea body=442 status=ok
// SIG undefined FUN_14951b7ea(void)

void FUN_14951b7ea(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_14951b902:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_14951b91a;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_14951b902;
LAB_14951b91a:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_14793612a(param_3,iVar3);
          }
          *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14951b9a6 FUN_14951b9a6 body=230 status=ok
// SIG undefined FUN_14951b9a6(void)

undefined8 * FUN_14951b9a6(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
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



// FUNCTION 14951ba8e FUN_14951ba8e body=29 status=ok
// SIG undefined FUN_14951ba8e(void)

undefined8 FUN_14951ba8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951bac6 FUN_14951bac6 body=29 status=ok
// SIG undefined FUN_14951bac6(void)

bool FUN_14951bac6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14951bae4 FUN_14951bae4 body=26 status=ok
// SIG undefined FUN_14951bae4(void)

bool FUN_14951bae4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14951bafe FUN_14951bafe body=24 status=ok
// SIG undefined FUN_14951bafe(void)

bool FUN_14951bafe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14951bb22 FUN_14951bb22 body=93 status=ok
// SIG undefined FUN_14951bb22(void)

void FUN_14951bb22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd355a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14951bb80 FUN_14951bb80 body=93 status=ok
// SIG undefined FUN_14951bb80(void)

void FUN_14951bb80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bd355a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd35530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14951bbde FUN_14951bbde body=126 status=ok
// SIG undefined FUN_14951bbde(void)

void FUN_14951bbde(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bd355a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35530;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014951bc4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14951bc5c FUN_14951bc5c body=48 status=ok
// SIG undefined FUN_14951bc5c(void)

void FUN_14951bc5c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014951bc89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14951bc8c FUN_14951bc8c body=163 status=ok
// SIG undefined FUN_14951bc8c(void)

bool FUN_14951bc8c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14951bd32 FUN_14951bd32 body=220 status=ok
// SIG undefined FUN_14951bd32(void)

LPCRITICAL_SECTION FUN_14951bd32(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bd35410;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35610;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  FUN_14485c47a(&(p_Var1->ProcessLocksList).Blink,param_2);
  p_Var1->EntryCount = (int)param_3;
  p_Var1->ContentionCount = (int)((ulonglong)param_3 >> 0x20);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 14951be0e FUN_14951be0e body=29 status=ok
// SIG undefined FUN_14951be0e(void)

undefined8 FUN_14951be0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14951be46 FUN_14951be46 body=29 status=ok
// SIG undefined FUN_14951be46(void)

bool FUN_14951be46(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14951be64 FUN_14951be64 body=26 status=ok
// SIG undefined FUN_14951be64(void)

bool FUN_14951be64(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}


