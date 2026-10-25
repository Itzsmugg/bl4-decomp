// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148b483a4 FUN_148b483a4 body=100 status=ok
// SIG undefined FUN_148b483a4(void)

ulonglong FUN_148b483a4(longlong param_1)

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
LAB_148b483fd:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b483fd;
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



// FUNCTION 148b4840a FUN_148b4840a body=6240 status=ok
// SIG undefined FUN_148b4840a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_148b4840a(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_1438 [32];
  undefined1 *local_1418;
  longlong local_1408;
  undefined8 *local_1400;
  longlong local_13f8;
  longlong local_13f0;
  undefined4 *local_13e8;
  longlong local_13e0;
  longlong local_13d8;
  undefined1 local_13c9;
  undefined1 local_13c8 [8];
  longlong *local_13c0;
  undefined1 local_13a9;
  undefined1 local_13a8 [8];
  longlong *local_13a0;
  undefined8 local_1390;
  undefined1 *puStack_1388;
  undefined4 local_1380;
  undefined1 local_137c;
  undefined8 local_1378;
  undefined8 uStack_1370;
  longlong local_1368;
  undefined1 local_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  longlong *local_1340;
  undefined8 local_1338;
  longlong *local_1330;
  undefined1 local_1321;
  undefined8 local_1320;
  longlong *local_1318;
  undefined2 local_1308;
  undefined8 local_1300;
  undefined8 uStack_12f8;
  undefined4 local_12f0;
  undefined1 local_12ec;
  undefined8 local_12e8;
  undefined4 local_12e0;
  undefined4 local_12d8;
  undefined1 local_12d4;
  undefined8 local_12d0;
  undefined4 local_12c8;
  undefined2 local_12c0;
  undefined8 local_12b8;
  undefined4 local_12b0;
  undefined2 local_12a8;
  undefined8 local_12a0;
  undefined4 local_1298;
  undefined2 local_1290;
  undefined8 local_1288;
  undefined8 uStack_1280;
  undefined1 local_1278 [96];
  undefined1 local_1218;
  undefined8 local_1210;
  undefined4 local_1208;
  undefined2 local_1200;
  undefined8 local_11f8;
  undefined8 uStack_11f0;
  undefined8 local_11e8;
  longlong *local_11e0;
  undefined8 local_11d8;
  longlong *local_11d0;
  undefined4 local_11c8;
  undefined4 uStack_11c4;
  undefined4 uStack_11c0;
  undefined4 uStack_11bc;
  undefined1 local_11b8;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined4 local_11a0;
  undefined1 local_119c;
  undefined8 local_1198;
  undefined8 uStack_1190;
  undefined1 local_1181;
  undefined8 local_1180;
  longlong *local_1178;
  undefined4 local_1168;
  undefined1 local_1164;
  undefined8 local_1160;
  undefined4 local_1158;
  undefined1 local_1150 [96];
  undefined1 local_10f0;
  undefined8 local_10e8;
  undefined4 local_10e0;
  undefined8 local_10d8;
  longlong *local_10d0;
  undefined8 local_10c8;
  longlong *local_10c0;
  undefined4 local_10b8;
  undefined4 uStack_10b4;
  undefined4 uStack_10b0;
  undefined4 uStack_10ac;
  undefined1 local_10a8;
  undefined8 local_10a0;
  undefined8 uStack_1098;
  undefined4 local_1090;
  undefined1 local_108c;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  longlong *local_1070;
  undefined8 local_1068;
  longlong *local_1060;
  undefined4 local_1058;
  undefined4 uStack_1054;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
  undefined1 local_1048;
  undefined8 local_1040;
  undefined4 local_1038;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined4 local_1018;
  undefined1 local_1014;
  undefined8 local_1010;
  undefined8 uStack_1008;
  code *local_ff8;
  undefined4 local_ff0;
  longlong local_e50;
  undefined1 local_e48;
  undefined1 local_e40 [16];
  undefined4 local_e30;
  undefined4 uStack_e2c;
  undefined4 uStack_e28;
  undefined4 uStack_e24;
  undefined4 local_e20;
  undefined1 local_e1c;
  undefined1 local_e18 [88];
  code *local_dc0;
  undefined4 local_db8;
  undefined8 local_d00;
  undefined4 local_cf8;
  undefined4 local_cf4;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined2 local_c90;
  undefined1 local_c88 [432];
  undefined1 local_ad8 [96];
  undefined1 local_a78;
  undefined1 local_a70 [224];
  undefined2 local_990;
  undefined1 local_988 [64];
  undefined2 local_948;
  undefined1 local_940 [16];
  undefined4 local_930;
  undefined1 local_92c;
  undefined1 local_928 [56];
  undefined1 local_8f0 [16];
  undefined1 local_8e0 [16];
  undefined1 local_8d0 [40];
  undefined2 local_8a8;
  undefined1 local_8a0 [48];
  undefined1 local_870 [16];
  undefined4 local_860;
  undefined1 local_85c;
  undefined1 local_858 [24];
  undefined2 local_840;
  undefined1 local_838 [48];
  undefined1 local_808 [192];
  code *local_748;
  undefined4 local_740;
  undefined1 local_570 [96];
  undefined1 local_510;
  undefined1 local_508 [464];
  undefined4 local_338;
  undefined1 local_334;
  undefined1 auStack_330 [88];
  undefined1 local_2d8 [192];
  undefined1 local_218 [440];
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x148b48420;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1438;
  lVar9 = *(longlong *)(param_2 + 0x1a8);
  *(longlong *)(param_1 + 0x300) = lVar9;
  local_1018 = *(undefined4 *)(lVar9 + 0x4f0);
  local_1028 = *(undefined8 *)(lVar9 + 0x4e0);
  uStack_1020 = *(undefined8 *)(lVar9 + 0x4e8);
  local_1014 = 1;
  local_1010 = 0;
  uStack_1008 = 0;
  FUN_140a5c8a2(param_1 + 0x250,param_1,&local_1028);
  FUN_1449db362(&local_1010);
  puVar7 = *(undefined8 **)(param_2 + 0x570);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar7 = &PTR_FUN_14b55fce0;
    puVar7[1] = 0x600000001;
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14b55fd30;
    plVar8[2] = (longlong)puVar7;
    if (plVar8 == (longlong *)0x0) goto LAB_148b4851c;
LAB_148b4852e:
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    bVar4 = false;
  }
  else {
    plVar8 = *(longlong **)(param_2 + 0x578);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      goto LAB_148b4852e;
    }
LAB_148b4851c:
    bVar4 = true;
    plVar8 = (longlong *)0x0;
  }
  plVar13 = *(longlong **)(param_1 + 0x2f0);
  *(undefined8 **)(param_1 + 0x2e8) = puVar7;
  *(longlong **)(param_1 + 0x2f0) = plVar8;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if (!bVar4) {
    LOCK();
    plVar13 = plVar8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if ((*(longlong *)(param_2 + 0x570) != 0) &&
     (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x40))(), lVar9 != 0)) {
    uVar10 = (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x40))();
    local_748 = FUN_148b49c6c;
    local_740 = 0;
    FUN_148b4abea(&local_d00,param_1);
    FUN_1448b6402(uVar10,&local_748,&local_d00);
    FUN_1449db362(&local_d00);
  }
  *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x1b0);
  plVar8 = (longlong *)(param_1 + 0x278);
  FUN_148b476ba(plVar8,param_2 + 0x1c0);
  FUN_146b03e12(param_1 + 0x288,param_2 + 0x4b8);
  FUN_148b4b086(param_1 + 0x298,param_2 + 0x4c8);
  FUN_14009d848(param_1 + 0x2a8,param_2 + 0x4d8);
  FUN_146b03e12(param_1 + 0x2b8,param_2 + 0x4e8);
  *(undefined1 *)(param_1 + 0x56c) = *(undefined1 *)(param_2 + 0x52c);
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_2 + 0x528);
  FUN_140a52b3c(param_1 + 0x570,param_2 + 0x530);
  puVar7 = (undefined8 *)(param_1 + 0x3e0);
  if ((undefined8 *)(param_2 + 0x1d0) != puVar7) {
    if (*(char *)(param_2 + 0x1d8) == '\x01') {
      *puVar7 = *(undefined8 *)(param_2 + 0x1d0);
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 1000) != '\x01') goto LAB_148b486be;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 1000) = uVar6;
  }
LAB_148b486be:
  *(undefined1 *)(param_1 + 0x3f0) = *(undefined1 *)(param_2 + 0x1e0);
  FUN_148b47384(param_1 + 0x3f8,param_2 + 0x1e8);
  puVar15 = (undefined8 *)(param_1 + 0x408);
  if ((undefined8 *)(param_2 + 0x1f8) != puVar15) {
    if (*(char *)(param_2 + 0x200) == '\x01') {
      *puVar15 = *(undefined8 *)(param_2 + 0x1f8);
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x410) != '\x01') goto LAB_148b486f4;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x410) = uVar6;
  }
LAB_148b486f4:
  *(undefined1 *)(param_1 + 0x418) = *(undefined1 *)(param_2 + 0x208);
  FUN_148b47384(param_1 + 0x420,param_2 + 0x210);
  FUN_148b47204((undefined8 *)(param_2 + 0x220));
  if (*(char *)(param_2 + 0x228) != '\0') {
    puVar7 = (undefined8 *)(param_2 + 0x220);
  }
  puVar2 = (undefined8 *)(param_1 + 0x430);
  if (puVar7 != puVar2) {
    if (*(char *)(puVar7 + 1) == '\x01') {
      *puVar2 = *puVar7;
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x438) != '\x01') goto LAB_148b4873d;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x438) = uVar6;
  }
LAB_148b4873d:
  *(undefined1 *)(param_1 + 0x440) = *(undefined1 *)(puVar7 + 2);
  FUN_148b47384(param_1 + 0x448,puVar7 + 3);
  FUN_148b47204((undefined8 *)(param_2 + 0x248));
  if (*(char *)(param_2 + 0x250) != '\0') {
    puVar15 = (undefined8 *)(param_2 + 0x248);
  }
  puVar7 = (undefined8 *)(param_1 + 0x458);
  if (puVar15 != puVar7) {
    if (*(char *)(puVar15 + 1) == '\x01') {
      *puVar7 = *puVar15;
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x460) != '\x01') goto LAB_148b48784;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x460) = uVar6;
  }
LAB_148b48784:
  *(undefined1 *)(param_1 + 0x468) = *(undefined1 *)(puVar15 + 2);
  FUN_148b47384(param_1 + 0x470,puVar15 + 3);
  lVar9 = FUN_146b06eb6((undefined4 *)(param_2 + 0x270));
  local_1400 = puVar2;
  if (*(char *)(lVar9 + 4) == '\x01') {
    local_d00._0_5_ = CONCAT14(*(char *)(param_2 + 0x274),(undefined4)local_d00);
    if (*(char *)(param_2 + 0x274) == '\x01') {
      local_d00 = (code *)CONCAT44(local_d00._4_4_,*(undefined4 *)(param_2 + 0x270));
    }
    local_cf8._0_1_ = *(undefined1 *)(param_2 + 0x278);
    local_cf0 = 0;
    uStack_ce8 = (ulonglong)uStack_ce8._4_4_ << 0x20;
    FUN_146aa7480(&local_cf0,param_2 + 0x280);
  }
  else {
    local_d00 = (code *)CONCAT35(local_d00._5_3_,0x100000001);
    local_cf8._0_1_ = 1;
    local_cf0 = 0;
    uStack_ce8 = 0;
  }
  puVar15 = (undefined8 *)(param_1 + 0x480);
  if (&local_d00 != puVar15) {
    if (local_d00._4_1_ == '\x01') {
      *(undefined4 *)puVar15 = (undefined4)local_d00;
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x484) != '\x01') goto LAB_148b488d6;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x484) = uVar6;
  }
LAB_148b488d6:
  *(undefined1 *)(param_1 + 0x488) = (undefined1)local_cf8;
  FUN_146aa7480(param_1 + 0x490,&local_cf0);
  FUN_1449db362(&local_cf0);
  lVar9 = FUN_146b06eb6((undefined4 *)(param_2 + 0x290));
  if (*(char *)(lVar9 + 4) == '\x01') {
    local_d00._0_5_ = CONCAT14(*(char *)(param_2 + 0x294),(undefined4)local_d00);
    if (*(char *)(param_2 + 0x294) == '\x01') {
      local_d00 = (code *)CONCAT44(local_d00._4_4_,*(undefined4 *)(param_2 + 0x290));
    }
    local_cf8 = CONCAT31(local_cf8._1_3_,*(undefined1 *)(param_2 + 0x298));
    local_cf0 = 0;
    uStack_ce8 = uStack_ce8 & 0xffffffff00000000;
    FUN_146aa7480(&local_cf0,param_2 + 0x2a0);
  }
  else {
    local_d00 = (code *)CONCAT35(local_d00._5_3_,0x100000006);
    local_cf8 = CONCAT31(local_cf8._1_3_,1);
    local_cf0 = 0;
    uStack_ce8 = 0;
  }
  puVar2 = (undefined8 *)(param_1 + 0x4a0);
  if (&local_d00 != puVar2) {
    if (local_d00._4_1_ == '\x01') {
      *(undefined4 *)puVar2 = (undefined4)local_d00;
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x4a4) != '\x01') goto LAB_148b489b7;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x4a4) = uVar6;
  }
LAB_148b489b7:
  *(undefined1 *)(param_1 + 0x4a8) = (undefined1)local_cf8;
  FUN_146aa7480(param_1 + 0x4b0,&local_cf0);
  FUN_1449db362(&local_cf0);
  FUN_148b49d64(param_1,puVar2);
  FUN_148b49e3c(param_1,puVar15);
  *(undefined2 *)(param_1 + 0x4c0) = *(undefined2 *)(param_2 + 0x2b0);
  FUN_14096c7c0(param_1 + 0x4c8,param_2 + 0x2b8);
  *(undefined2 *)(param_1 + 0x4d8) = *(undefined2 *)(param_2 + 0x2c8);
  FUN_14096c7c0(param_1 + 0x4e0,param_2 + 0x2d0);
  *(undefined2 *)(param_1 + 0x4f0) = *(undefined2 *)(param_2 + 0x360);
  plVar13 = (longlong *)(param_1 + 0x4f8);
  FUN_14096c7c0(plVar13,param_2 + 0x368);
  *(undefined2 *)(param_1 + 0x508) = *(undefined2 *)(param_2 + 0x378);
  plVar14 = (longlong *)(param_1 + 0x510);
  FUN_14096c7c0(plVar14,param_2 + 0x380);
  FUN_148b4b10a(param_1 + 0x548,param_2 + 0x390);
  FUN_148b4b10a(param_1 + 0x558,param_2 + 0x3a0);
  *(undefined1 *)(param_1 + 0x5bc) = *(undefined1 *)(param_2 + 1000);
  *(undefined1 *)(param_1 + 0x5bd) = *(undefined1 *)(param_2 + 0x3e9);
  if ((undefined8 *)(param_2 + 0x3f0) != (undefined8 *)(param_1 + 0x520)) {
    if (*(char *)(param_2 + 0x3f8) == '\x01') {
      *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(param_2 + 0x3f0);
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x528) != '\x01') goto LAB_148b48ad4;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x528) = uVar6;
  }
LAB_148b48ad4:
  *(undefined1 *)(param_1 + 0x530) = *(undefined1 *)(param_2 + 0x400);
  FUN_148b47384(param_1 + 0x538,param_2 + 0x408);
  *(undefined1 *)(param_1 + 0x5bb) = *(undefined1 *)(param_2 + 0x580);
  if (((*(int *)(param_1 + 0x280) != 0) && ((longlong *)*plVar8 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*(longlong *)*plVar8 + 0x30))(), cVar5 != '\0')) {
    if (*(int *)(param_1 + 0x280) == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)*plVar8;
    }
    uVar10 = (**(code **)(*plVar8 + 0x58))();
    *(undefined8 *)(param_1 + 0x268) = uVar10;
  }
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x268);
  (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x28))
            (*(longlong **)(param_1 + 0x2e8),&local_d00,param_1 + 0x5a0);
  if ((undefined8 *)(param_1 + 0x5a8) == &local_d00) {
    if (local_d00 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x5a8) != 0) {
      FUN_1400020a8();
    }
    *(code **)(param_1 + 0x5a8) = local_d00;
    local_d00 = (code *)0x0;
    *(undefined4 *)(param_1 + 0x5b0) = local_cf8;
    *(undefined4 *)(param_1 + 0x5b4) = local_cf4;
  }
  *(undefined1 *)(param_1 + 0x5b8) = 0;
  *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x5a0);
  if (((*(int *)(param_1 + 0x500) != 0) && ((longlong *)*plVar13 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*(longlong *)*plVar13 + 0x30))(), cVar5 != '\0')) {
    if (*(int *)(param_1 + 0x500) == 0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = (longlong *)*plVar13;
    }
    uVar6 = (**(code **)(*plVar13 + 0x58))();
    *(undefined1 *)(param_1 + 0x4f0) = uVar6;
  }
  if (*(char *)(param_1 + 0x4f0) == '\x01') {
    dVar3 = *(double *)(param_1 + 0x5a0);
    FUN_148b47204(puVar7);
    if (*(char *)(param_1 + 0x460) == '\0') {
      uVar17 = 0xffffffff;
      uVar18 = 0x7fefffff;
    }
    else {
      uVar17 = (undefined4)*(undefined8 *)(param_1 + 0x458);
      uVar18 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x458) >> 0x20);
    }
    if ((double)CONCAT44(uVar18,uVar17) <= dVar3 && dVar3 != (double)CONCAT44(uVar18,uVar17)) {
      dVar3 = *(double *)(param_1 + 0x5a0);
      FUN_148b47204(puVar7);
      if (*(char *)(param_1 + 0x460) == '\0') {
        uVar17 = 0xffffffff;
        uVar18 = 0x7fefffff;
      }
      else {
        uVar17 = (undefined4)*(undefined8 *)(param_1 + 0x458);
        uVar18 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x458) >> 0x20);
      }
      FUN_148b46e10(param_1,(float)(dVar3 - (double)CONCAT44(uVar18,uVar17)),1);
      goto LAB_148b48e31;
    }
  }
  if (((*(int *)(param_1 + 0x518) != 0) && ((longlong *)*plVar14 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*(longlong *)*plVar14 + 0x30))(), cVar5 != '\0')) {
    if (*(int *)(param_1 + 0x518) == 0) {
      plVar14 = (longlong *)0x0;
    }
    else {
      plVar14 = (longlong *)*plVar14;
    }
    uVar6 = (**(code **)(*plVar14 + 0x58))();
    *(undefined1 *)(param_1 + 0x508) = uVar6;
  }
  puVar7 = local_1400;
  if (*(char *)(param_1 + 0x508) == '\x01') {
    dVar3 = *(double *)(param_1 + 0x5a0);
    FUN_148b47204(local_1400);
    if (*(char *)(param_1 + 0x438) == '\0') {
      uVar17 = 0xffffffff;
      uVar18 = 0xffefffff;
    }
    else {
      uVar17 = (undefined4)*(undefined8 *)(param_1 + 0x430);
      uVar18 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x430) >> 0x20);
    }
    if (dVar3 <= (double)CONCAT44(uVar18,uVar17) && (double)CONCAT44(uVar18,uVar17) != dVar3) {
      dVar3 = *(double *)(param_1 + 0x5a0);
      FUN_148b47204(puVar7);
      if (*(char *)(param_1 + 0x438) == '\0') {
        uVar17 = 0xffffffff;
        uVar18 = 0xffefffff;
      }
      else {
        uVar17 = (undefined4)*(undefined8 *)(param_1 + 0x430);
        uVar18 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x430) >> 0x20);
      }
      FUN_148b4700a(param_1,(float)(dVar3 - (double)CONCAT44(uVar18,uVar17)),1);
    }
  }
LAB_148b48e31:
  FUN_148b47314(param_1);
  *(undefined1 *)(param_1 + 0x3ac) = *(undefined1 *)(param_2 + 0x3b4);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x3b0);
  FUN_140a52b3c(param_1 + 0x3b0,param_2 + 0x3b8);
  *(undefined1 *)(param_1 + 0x3c8) = *(undefined1 *)(param_2 + 0x3d0);
  *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_2 + 0x3c8);
  FUN_148b476ba(param_1 + 0x3d0,param_2 + 0x3d8);
  *(undefined4 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_2 + 0x2e0);
  *(undefined1 *)(param_1 + 0x348) = *(undefined1 *)(param_2 + 0x2e8);
  FUN_148b476ba(param_1 + 0x350,param_2 + 0x2f0);
  *(undefined1 *)(param_1 + 0x364) = *(undefined1 *)(param_2 + 0x31c);
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_2 + 0x318);
  FUN_140a52b3c(param_1 + 0x368,param_2 + 800);
  *(undefined1 *)(param_1 + 0x37c) = *(undefined1 *)(param_2 + 0x334);
  *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0x330);
  FUN_140a52b3c(param_1 + 0x380,param_2 + 0x338);
  *(undefined1 *)(param_1 + 0x394) = *(undefined1 *)(param_2 + 0x34c);
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_2 + 0x348);
  FUN_146a24854(param_1 + 0x398,param_2 + 0x350);
  lVar11 = *(longlong *)(param_2 + 0x1a8) + 0x170;
  *(longlong *)(param_1 + 0x308) = lVar11;
  *(longlong *)(param_1 + 0x318) = *(longlong *)(param_2 + 0x1a8) + 0x10;
  lVar9 = *(longlong *)(param_2 + 0x1a8) + 0xc0;
  if ((*(byte *)(*(longlong *)(param_2 + 0x1a8) + 0x154) & 4) == 0) {
    lVar9 = lVar11;
  }
  *(longlong *)(param_1 + 0x310) = lVar9;
  lVar11 = *(longlong *)(param_2 + 0x1a8) + 0x220;
  *(longlong *)(param_1 + 800) = lVar11;
  lVar9 = *(longlong *)(param_2 + 0x1a8) + 0x2d0;
  if ((*(byte *)(*(longlong *)(param_2 + 0x1a8) + 0x364) & 4) == 0) {
    lVar9 = lVar11;
  }
  *(longlong *)(param_1 + 0x328) = lVar9;
  *(longlong *)(param_1 + 0x330) = *(longlong *)(param_2 + 0x1a8) + 0x380;
  lVar9 = *(longlong *)(param_2 + 0x1a8);
  *(undefined2 *)(param_1 + 0x5b9) = 0;
  *(undefined4 *)(param_1 + 0x580) = 0xffffffff;
  local_1048 = *(undefined1 *)(param_2 + 0x4a0);
  local_1058 = *(undefined4 *)(param_2 + 0x490);
  uStack_1054 = *(undefined4 *)(param_2 + 0x494);
  uStack_1050 = *(undefined4 *)(param_2 + 0x498);
  uStack_104c = *(undefined4 *)(param_2 + 0x49c);
  local_1040 = 0;
  local_1038 = 0;
  FUN_140a58be0(&local_1040,param_2 + 0x4a8);
  local_1400 = (undefined8 *)FUN_140a58d14(param_1 + 0x218,&local_1058);
  FUN_140a5296a(local_218);
  FUN_140a50426(local_2d8);
  local_1090 = 0x3f800000;
  local_108c = 1;
  local_1088 = 0;
  uStack_1080 = 0;
  lVar11 = FUN_140a5475a(local_2d8);
  local_10b8 = *(undefined4 *)(lVar9 + 0x4f4);
  uStack_10b4 = *(undefined4 *)(lVar9 + 0x4f8);
  uStack_10b0 = *(undefined4 *)(lVar9 + 0x4fc);
  uStack_10ac = *(undefined4 *)(lVar9 + 0x500);
  local_10a8 = 1;
  local_10a0 = 0;
  uStack_1098 = 0;
  *(undefined1 *)(lVar11 + 0x28) = 1;
  *(undefined4 *)(lVar11 + 0x18) = local_10b8;
  *(undefined4 *)(lVar11 + 0x1c) = uStack_10b4;
  *(undefined4 *)(lVar11 + 0x20) = uStack_10b0;
  *(undefined4 *)(lVar11 + 0x24) = uStack_10ac;
  local_1408 = lVar9;
  FUN_144a450dc(lVar11 + 0x30,&local_10a0);
  FUN_1449db362(&local_10a0);
  *(undefined4 *)(lVar11 + 0x40) = 0;
  *(undefined1 *)(lVar11 + 0x44) = 1;
  *(undefined4 *)(lVar11 + 0x48) = 2;
  *(undefined1 *)(lVar11 + 0x4c) = 1;
  FUN_140a570d8(&local_748);
  local_13f8 = param_2 + 0x418;
  FUN_144a87366(local_1150);
  local_10f0 = *(undefined1 *)(param_2 + 0x478);
  local_13f0 = param_2 + 0x480;
  local_10e8 = 0;
  local_10e0 = 0;
  FUN_140a5d470(&local_10e8);
  FUN_1412cc59c(local_570,local_1150);
  local_510 = local_10f0;
  FUN_144a450dc(local_508,&local_10e8);
  FUN_141515cba(local_1150);
  local_d00 = FUN_148b49fec;
  local_cf8 = 0;
  FUN_148b49f14(&local_748,param_1,&local_d00);
  local_d00 = FUN_148b4a0fa;
  local_cf8 = 0;
  FUN_148b4a04a(&local_748,param_1,&local_d00);
  local_1168 = *(undefined4 *)(param_2 + 0x540);
  local_1164 = *(undefined1 *)(param_2 + 0x544);
  local_13d8 = param_2 + 0x548;
  local_1160 = 0;
  local_1158 = 0;
  FUN_140a5d648(&local_1160);
  local_334 = local_1164;
  local_338 = local_1168;
  FUN_144a450dc(auStack_330,&local_1160);
  FUN_1449db362(&local_1160);
  local_1418 = &local_1181;
  FUN_140a54526(&local_1180,"STextBlock","Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",300);
  if (local_1178 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1178 + 1) = (int)local_1178[1] + 1;
    UNLOCK();
  }
  plVar8 = *(longlong **)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2c8) = local_1180;
  *(longlong **)(param_1 + 0x2d0) = local_1178;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  lVar9 = local_1408;
  puVar16 = (undefined4 *)(local_1408 + 0x4f4);
  local_13e8 = (undefined4 *)(param_2 + 0x540);
  FUN_140a52852(&local_1180,&local_10d8,&local_748);
  local_10c8 = local_10d8;
  local_10c0 = local_10d0;
  if (local_10d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10d0 + 1) = (int)local_10d0[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fe8e(lVar11,&local_10c8);
  local_1408 = FUN_140a52392(local_218,uVar10);
  FUN_140a50426(local_808);
  local_11a0 = 0x3f800000;
  local_119c = 1;
  local_1198 = 0;
  uStack_1190 = 0;
  lVar11 = FUN_140a5475a(local_808);
  local_11c8 = *puVar16;
  uStack_11c4 = *(undefined4 *)(lVar9 + 0x4f8);
  uStack_11c0 = *(undefined4 *)(lVar9 + 0x4fc);
  uStack_11bc = *(undefined4 *)(lVar9 + 0x500);
  local_11b8 = 1;
  local_11b0 = 0;
  uStack_11a8 = 0;
  *(undefined1 *)(lVar11 + 0x28) = 1;
  *(undefined4 *)(lVar11 + 0x18) = local_11c8;
  *(undefined4 *)(lVar11 + 0x1c) = uStack_11c4;
  *(undefined4 *)(lVar11 + 0x20) = uStack_11c0;
  *(undefined4 *)(lVar11 + 0x24) = uStack_11bc;
  FUN_144a450dc(lVar11 + 0x30,&local_11b0);
  FUN_1449db362(&local_11b0);
  *(undefined4 *)(lVar11 + 0x40) = 0;
  *(undefined1 *)(lVar11 + 0x44) = 1;
  *(undefined4 *)(lVar11 + 0x48) = 2;
  *(undefined1 *)(lVar11 + 0x4c) = 1;
  local_13e0 = lVar11;
  FUN_146a63634(&local_d00);
  local_1200 = CONCAT11(1,DAT_14c96b1e1);
  local_11f8 = 0;
  uStack_11f0 = 0;
  local_c90 = local_1200;
  FUN_144a450dc(local_c88,&local_11f8);
  FUN_1449db362(&local_11f8);
  FUN_144a87366(local_1278,local_13f8);
  local_1218 = *(undefined1 *)(param_2 + 0x478);
  local_1210 = 0;
  local_1208 = 0;
  FUN_140a5d470(&local_1210,local_13f0);
  FUN_1412cc59c(local_ad8,local_1278);
  local_a78 = local_1218;
  FUN_144a450dc(local_a70,&local_1210);
  FUN_141515cba(local_1278);
  local_1290 = 0x101;
  local_1288 = 0;
  uStack_1280 = 0;
  local_990 = 0x101;
  FUN_144a450dc(local_988,&local_1288);
  FUN_1449db362(&local_1288);
  local_ff8 = FUN_148b49fec;
  local_ff0 = 0;
  FUN_148b4a168(&local_d00,param_1);
  local_dc0 = (code *)&LAB_148b4a240;
  local_db8 = 0;
  FUN_148b4bc36(&local_ff8,param_1,&local_dc0);
  FUN_144a450dc(local_8f0,&local_ff8);
  FUN_1449db362(&local_ff8);
  local_dc0 = FUN_148b4a252;
  local_db8 = 0;
  FUN_148b4c0d8(&local_ff8,param_1,&local_dc0);
  FUN_144a450dc(local_8e0,&local_ff8);
  FUN_1449db362(&local_ff8);
  local_dc0 = FUN_148b4a52c;
  local_db8 = 0;
  FUN_148b4c57a(&local_ff8,param_1,&local_dc0);
  FUN_144a450dc(local_8d0,&local_ff8);
  FUN_1449db362(&local_ff8);
  local_12a8 = *(undefined2 *)(param_2 + 0x4f8);
  local_12a0 = 0;
  local_1298 = 0;
  FUN_14096c7c0(&local_12a0,param_2 + 0x500);
  local_948 = local_12a8;
  FUN_144a450dc(local_940,&local_12a0);
  FUN_1449db362(&local_12a0);
  local_12c0 = *(undefined2 *)(param_2 + 0x510);
  local_12b8 = 0;
  local_12b0 = 0;
  FUN_14096c7c0(&local_12b8,param_2 + 0x518);
  local_8a8 = local_12c0;
  FUN_144a450dc(local_8a0,&local_12b8);
  FUN_1449db362(&local_12b8);
  local_ff8 = FUN_148b4a0fa;
  local_ff0 = 0;
  FUN_148b4a662(&local_d00,param_1,&local_ff8);
  local_12d8 = *(undefined4 *)(param_2 + 0x558);
  local_12d4 = *(undefined1 *)(param_2 + 0x55c);
  local_12d0 = 0;
  local_12c8 = 0;
  FUN_146a74c58(&local_12d0,param_2 + 0x560);
  local_85c = local_12d4;
  local_860 = local_12d8;
  FUN_144a450dc(local_858,&local_12d0);
  FUN_1449db362(&local_12d0);
  local_12ec = *(undefined1 *)(local_13e8 + 1);
  local_12f0 = *local_13e8;
  local_12e8 = 0;
  local_12e0 = 0;
  FUN_140a5d648(&local_12e8,local_13d8);
  local_92c = local_12ec;
  local_930 = local_12f0;
  FUN_144a450dc(local_928,&local_12e8);
  FUN_1449db362(&local_12e8);
  local_1308 = 0x101;
  local_1300 = 0;
  uStack_12f8 = 0;
  local_840 = 0x101;
  FUN_144a450dc(local_838,&local_1300);
  FUN_1449db362(&local_1300);
  FUN_146a26a60(local_870,param_2 + 0x588);
  local_1418 = &local_1321;
  FUN_146a7c5de(&local_1320,"SEditableText","Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",0x138
               );
  if (local_1318 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1318 + 1) = (int)local_1318[1] + 1;
    UNLOCK();
  }
  plVar8 = *(longlong **)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2d8) = local_1320;
  *(longlong **)(param_1 + 0x2e0) = local_1318;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar8 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  FUN_146a639a0(&local_1320,&local_11e8,&local_d00);
  local_11d8 = local_11e8;
  local_11d0 = local_11e0;
  if (local_11e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_11e0 + 1) = (int)local_11e0[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fe8e(local_13e0,&local_11d8);
  uVar10 = FUN_140a52392(local_1408,uVar10);
  FUN_140a50426(&local_dc0);
  lVar9 = FUN_140a52578(&local_dc0);
  *(undefined4 *)(lVar9 + 0x40) = 0;
  *(undefined1 *)(lVar9 + 0x44) = 1;
  *(undefined4 *)(lVar9 + 0x48) = 2;
  *(undefined1 *)(lVar9 + 0x4c) = 1;
  FUN_140a53334(&local_ff8);
  local_1368 = *(longlong *)(param_2 + 0x1a8) + 0x430;
  local_1360 = 1;
  local_1358 = 0;
  uStack_1350 = 0;
  local_e48 = 1;
  local_e50 = local_1368;
  FUN_144a450dc(local_e40,&local_1358);
  FUN_1449db362(&local_1358);
  local_1390 = 0x3f800000;
  puStack_1388 = &DAT_3f8000003f800000;
  local_1380 = CONCAT22(local_1380._2_2_,2);
  local_137c = 1;
  local_1378 = 0;
  uStack_1370 = 0;
  local_e30 = 0x3f800000;
  uStack_e2c = 0;
  uStack_e28 = 0x3f800000;
  uStack_e24 = 0x3f800000;
  local_e20 = local_1380;
  local_e1c = 1;
  FUN_144a450dc(local_e18,&local_1378);
  FUN_1449db362(&local_1378);
  local_1418 = &local_13a9;
  FUN_140a554b8(local_13a8,"SImage","Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",0x14d);
  FUN_140a52c70(local_13a8,&local_1348,&local_ff8);
  local_1338 = local_1348;
  local_1330 = local_1340;
  if (local_1340 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1340 + 1) = (int)local_1340[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_140a4fe8e(lVar9,&local_1338);
  uVar10 = FUN_140a52392(uVar10,uVar12);
  local_1418 = &local_13c9;
  FUN_140a541dc(local_13c8,"SHorizontalBox","Runtime\\Slate\\Public\\Widgets/Input/SSpinBox.h",0x124
               );
  FUN_140a50ec6(local_13c8,&local_1078,uVar10);
  local_1068 = local_1078;
  local_1060 = local_1070;
  if (local_1070 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1070 + 1) = (int)local_1070[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(local_1400,&local_1068);
  plVar8 = local_1060;
  if (local_1060 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1060 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_1060)(local_1060);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_1070 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1070 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_1070)(local_1070);
      LOCK();
      piVar1 = (int *)((longlong)local_1070 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1070 + 0x10))(local_1070);
      }
    }
  }
  if (local_13c0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_13c0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_13c0)(local_13c0);
      LOCK();
      piVar1 = (int *)((longlong)local_13c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_13c0 + 0x10))(local_13c0);
      }
    }
  }
  plVar8 = local_1330;
  if (local_1330 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1330 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_1330)(local_1330);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_1340 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1340 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_1340)(local_1340);
      LOCK();
      piVar1 = (int *)((longlong)local_1340 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1340 + 0x10))(local_1340);
      }
    }
  }
  if (local_13a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_13a0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_13a0)(local_13a0);
      LOCK();
      piVar1 = (int *)((longlong)local_13a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_13a0 + 0x10))(local_13a0);
      }
    }
  }
  FUN_140a55a86(&local_ff8);
  FUN_140a509a6(&local_dc0);
  plVar8 = local_11d0;
  if (local_11d0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_11d0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_11d0)(local_11d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_11e0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_11e0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_11e0)(local_11e0);
      LOCK();
      piVar1 = (int *)((longlong)local_11e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_11e0 + 0x10))(local_11e0);
      }
    }
  }
  if (local_1318 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1318 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_1318)(local_1318);
      LOCK();
      piVar1 = (int *)((longlong)local_1318 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1318 + 0x10))(local_1318);
      }
    }
  }
  FUN_146a63a14(&local_d00);
  FUN_140a509a6(local_808);
  plVar8 = local_10c0;
  if (local_10c0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_10c0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_10c0)(local_10c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_10d0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_10d0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_10d0)(local_10d0);
      LOCK();
      piVar1 = (int *)((longlong)local_10d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_10d0 + 0x10))(local_10d0);
      }
    }
  }
  if (local_1178 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1178 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_1178)(local_1178);
      LOCK();
      piVar1 = (int *)((longlong)local_1178 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1178 + 0x10))(local_1178);
      }
    }
  }
  FUN_140a59ae6(&local_748);
  FUN_140a509a6(local_2d8);
  FUN_145ab33da(local_218);
  if ((local_60 ^ (ulonglong)auStack_1438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b49c6c FUN_148b49c6c body=247 status=ok
// SIG undefined FUN_148b49c6c(void)

void FUN_148b49c6c(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x278);
      }
      uVar3 = (**(code **)(*plVar2 + 0x58))();
      *(undefined8 *)(param_1 + 0x268) = uVar3;
    }
  }
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x268);
  (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x28))
            (*(longlong **)(param_1 + 0x2e8),&local_28,param_1 + 0x5a0);
  if ((longlong *)(param_1 + 0x5a8) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x5a8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x5a8) = local_28;
    *(undefined4 *)(param_1 + 0x5b0) = local_20;
    *(undefined4 *)(param_1 + 0x5b4) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b49d64 FUN_148b49d64 body=215 status=ok
// SIG undefined FUN_148b49d64(void)

void FUN_148b49d64(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  char local_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x2e8);
  lVar2 = FUN_146b06eb6(param_2);
  if (*(char *)(lVar2 + 4) == '\x01') {
    puVar3 = (undefined4 *)FUN_146b06eb6(param_2);
    local_3c = *(char *)(puVar3 + 1);
    if (local_3c == '\x01') {
      local_40 = *puVar3;
    }
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
  }
  else {
    local_3c = *(char *)(param_1 + 0x4a4);
    if (local_3c == '\x01') {
      local_40 = *(undefined4 *)(param_1 + 0x4a0);
    }
    local_38 = *(undefined1 *)(param_1 + 0x4a8);
    local_30 = 0;
    uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
    FUN_146aa7480(&local_30,param_1 + 0x4b0);
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,&local_40);
  FUN_1449db362(&local_30);
  *(undefined1 *)(param_1 + 0x5b8) = 1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b49e3c FUN_148b49e3c body=215 status=ok
// SIG undefined FUN_148b49e3c(void)

void FUN_148b49e3c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  char local_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x2e8);
  lVar2 = FUN_146b06eb6(param_2);
  if (*(char *)(lVar2 + 4) == '\x01') {
    puVar3 = (undefined4 *)FUN_146b06eb6(param_2);
    local_3c = *(char *)(puVar3 + 1);
    if (local_3c == '\x01') {
      local_40 = *puVar3;
    }
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
  }
  else {
    local_3c = *(char *)(param_1 + 0x484);
    if (local_3c == '\x01') {
      local_40 = *(undefined4 *)(param_1 + 0x480);
    }
    local_38 = *(undefined1 *)(param_1 + 0x488);
    local_30 = 0;
    uStack_28 = (ulonglong)uStack_28._4_4_ << 0x20;
    FUN_146aa7480(&local_30,param_1 + 0x490);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_40);
  FUN_1449db362(&local_30);
  *(undefined1 *)(param_1 + 0x5b8) = 1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b49f14 FUN_148b49f14 body=215 status=ok
// SIG undefined FUN_148b49f14(void)

longlong FUN_148b49f14(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_148b4b18e(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1a8,&local_50);
  *(undefined1 *)(param_1 + 0x1b8) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b49fec FUN_148b49fec body=93 status=ok
// SIG undefined FUN_148b49fec(void)

undefined8 FUN_148b49fec(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148b4b670(param_1,local_28);
  FUN_140233b1a(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4a04a FUN_148b4a04a body=175 status=ok
// SIG undefined FUN_148b4a04a(void)

longlong FUN_148b4a04a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_148b4b78c(local_48,param_2,&local_38);
  local_38 = CONCAT35((int3)((ulonglong)local_38 >> 0x28),0x100000000);
  local_30 = 0;
  local_28 = 0;
  FUN_140a52b3c(&local_30,local_48);
  *(undefined1 *)(param_1 + 0x42c) = local_38._4_1_;
  *(undefined4 *)(param_1 + 0x428) = (undefined4)local_38;
  FUN_144a450dc(param_1 + 0x430,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4a0fa FUN_148b4a0fa body=109 status=ok
// SIG undefined FUN_148b4a0fa(void)

float FUN_148b4a0fa(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  if ((*(int *)(param_1 + 0x578) != 0) && (*(longlong **)(param_1 + 0x570) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x570) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x578) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x570);
      }
      uVar3 = (**(code **)(*plVar2 + 0x58))();
      *(undefined4 *)(param_1 + 0x568) = uVar3;
    }
  }
  fVar5 = *(float *)(param_1 + 0x568) - *(float *)(*(longlong *)(param_1 + 0x300) + 0x450);
  fVar4 = 0.0;
  if (0.0 <= fVar5) {
    fVar4 = fVar5;
  }
  return fVar4;
}



// FUNCTION 148b4a168 FUN_148b4a168 body=215 status=ok
// SIG undefined FUN_148b4a168(void)

longlong FUN_148b4a168(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_148b4b18e(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1a8,&local_50);
  *(undefined1 *)(param_1 + 0x1b8) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4a252 FUN_148b4a252 body=729 status=ok
// SIG undefined FUN_148b4a252(void)

void FUN_148b4a252(longlong param_1,undefined8 param_2)

{
  wint_t _C;
  void *_Src;
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  wint_t *pwVar9;
  bool bVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  longlong *local_90 [2];
  longlong local_80 [2];
  wint_t *local_70;
  int local_68;
  undefined4 local_64;
  longlong *local_60;
  char local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x5ba) == '\0') {
    *(undefined1 *)(param_1 + 0x5ba) = 1;
    puVar6 = (undefined8 *)FUN_1447a1f4a(param_2);
    local_70 = (wint_t *)0x0;
    local_68 = *(int *)(puVar6 + 1);
    lVar11 = (longlong)local_68;
    _Src = (void *)*puVar6;
    if (lVar11 == 0) {
      local_64 = 0;
    }
    else {
      FUN_1446dd670(&local_70,local_68,0);
      memcpy(local_70,_Src,lVar11 * 2);
      iVar5 = local_68 + -1;
      if (local_68 == 0) {
        iVar5 = 0;
      }
      if (local_68 - 2U < 0x7fffffff) {
        lVar11 = 0;
        do {
          cVar4 = (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x38))
                            (*(longlong **)(param_1 + 0x2e8),local_70[lVar11]);
          iVar8 = local_68 + -1;
          if (local_68 == 0) {
            iVar8 = 0;
          }
          if (cVar4 == '\0') {
            iVar5 = (int)lVar11;
            break;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar8);
        if (iVar5 < iVar8) {
          if (iVar5 < 1) {
            FUN_148b4b670(param_1,local_80);
          }
          else {
            pwVar9 = local_70;
            if (local_68 == 0) {
              pwVar9 = &DAT_149dfb77a;
            }
            FUN_14006620a(local_80,pwVar9,iVar5);
          }
          uVar2 = *(undefined8 *)(param_1 + 0x2d8);
          FUN_140009b9a(local_90,local_80);
          FUN_14023423e(&local_60,local_90);
          local_50 = 1;
          local_48 = 0;
          uStack_40 = 0;
          FUN_146a5407e(uVar2,&local_60);
          FUN_1449db362(&local_48);
          if (local_60 != (longlong *)0x0) {
            (**(code **)(*local_60 + 0x10))();
          }
          if (local_90[0] != (longlong *)0x0) {
            (**(code **)(*local_90[0] + 0x10))();
          }
          if (local_80[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x5bd) == '\x01') {
      pwVar9 = local_70;
      if (local_68 == 0) {
        pwVar9 = &DAT_149dfb77a;
      }
      if ((*pwVar9 == 0x2d) || (*pwVar9 == 0x2b)) {
        pwVar9 = pwVar9 + 1;
      }
      bVar10 = false;
      do {
        _C = *pwVar9;
        if (_C == 0x2e) {
          bVar3 = true;
          if (bVar10) break;
        }
        else {
          if (_C == 0) {
            plVar1 = *(longlong **)(param_1 + 0x2e8);
            if (((*(int *)(param_1 + 0x280) != 0) &&
                (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) &&
               (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))(), cVar4 != '\0')) {
              if (*(int *)(param_1 + 0x280) == 0) {
                plVar7 = (longlong *)0x0;
              }
              else {
                plVar7 = *(longlong **)(param_1 + 0x278);
              }
              uVar2 = (**(code **)(*plVar7 + 0x58))();
              *(undefined8 *)(param_1 + 0x268) = uVar2;
            }
            (**(code **)(*plVar1 + 0x30))
                      (plVar1,&local_60,&local_70,(undefined8 *)(param_1 + 0x268));
            if (local_58 == '\x01') {
              local_98 = 0;
              FUN_143fabdd0(param_1,local_60,(int)local_60,3);
            }
            break;
          }
          iVar5 = iswdigit(_C);
          bVar3 = bVar10;
          if (iVar5 == 0) break;
        }
        bVar10 = bVar3;
        pwVar9 = pwVar9 + 1;
      } while( true );
    }
    if (local_70 != (wint_t *)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x5ba) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b4a52c FUN_148b4a52c body=308 status=ok
// SIG undefined FUN_148b4a52c(void)

void FUN_148b4a52c(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 uStack_67;
  undefined6 uStack_66;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 != 1) {
    local_68 = DAT_14c96b238;
    uStack_67 = 1;
    local_60 = 0;
    uStack_58 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))();
    local_80 = DAT_14c96b1e1;
    local_7f = 1;
    local_78 = 0;
    uStack_70 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
  }
  plVar1 = *(longlong **)(param_1 + 0x2e8);
  if ((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x278);
      }
      uVar4 = (**(code **)(*plVar3 + 0x58))();
      *(undefined8 *)(param_1 + 0x268) = uVar4;
    }
  }
  uVar4 = FUN_1447a1f4a(param_2);
  (**(code **)(*plVar1 + 0x30))(plVar1,&local_68,uVar4,(undefined8 *)(param_1 + 0x268));
  if ((char)local_60 == '\x01') {
    uVar4 = CONCAT62(uStack_66,CONCAT11(uStack_67,local_68));
    local_88 = param_3;
    FUN_143fabdd0(param_1,uVar4,(int)uVar4,1);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4a662 FUN_148b4a662 body=175 status=ok
// SIG undefined FUN_148b4a662(void)

longlong FUN_148b4a662(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_148b4b78c(local_48,param_2,&local_38);
  local_38 = CONCAT35((int3)((ulonglong)local_38 >> 0x28),0x100000000);
  local_30 = 0;
  local_28 = 0;
  FUN_140a52b3c(&local_30,local_48);
  *(undefined1 *)(param_1 + 0x444) = local_38._4_1_;
  *(undefined4 *)(param_1 + 0x440) = (undefined4)local_38;
  FUN_144a450dc(param_1 + 0x448,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4a712 FUN_148b4a712 body=29 status=ok
// SIG undefined FUN_148b4a712(void)

undefined8 FUN_148b4a712(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4a738 FUN_148b4a738 body=60 status=ok
// SIG undefined FUN_148b4a738(void)

void FUN_148b4a738(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  lVar1 = FUN_146b06eb6(param_2);
  iVar3 = 1;
  if (*(char *)(lVar1 + 4) == '\x01') {
    piVar2 = (int *)FUN_146b06eb6();
    iVar3 = 0;
    if (0 < *piVar2) {
      iVar3 = *piVar2;
    }
  }
  *(int *)(param_1 + 8) = iVar3;
  return;
}



// FUNCTION 148b4a774 FUN_148b4a774 body=60 status=ok
// SIG undefined FUN_148b4a774(void)

void FUN_148b4a774(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  lVar1 = FUN_146b06eb6(param_2);
  iVar3 = 6;
  if (*(char *)(lVar1 + 4) == '\x01') {
    piVar2 = (int *)FUN_146b06eb6();
    iVar3 = 0;
    if (0 < *piVar2) {
      iVar3 = *piVar2;
    }
  }
  *(int *)(param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 148b4a7b0 FUN_148b4a7b0 body=199 status=ok
// SIG undefined FUN_148b4a7b0(void)

undefined8 * FUN_148b4a7b0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 uStack_67;
  undefined4 uStack_64;
  undefined2 uStack_5a;
  undefined8 local_58;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined4 uStack_44;
  undefined2 uStack_3a;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141366fce(&local_48);
  uStack_47 = 0;
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) < iVar2) {
    iVar3 = iVar2;
  }
  local_38 = CONCAT44(iVar3,iVar2);
  local_68 = local_48;
  uStack_67 = 0;
  uStack_64 = uStack_44;
  uStack_5a = uStack_3a;
  local_58 = local_38;
  uVar4 = FUN_140b6087d();
  uVar1 = *param_3;
  *param_2 = 0;
  param_2[1] = 0;
  local_38 = local_58;
  local_48 = local_68;
  uStack_47 = uStack_67;
  uStack_44 = uStack_64;
  uStack_3a = uStack_5a;
  FUN_140235a22(uVar1,uVar4,&local_48,param_2);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4a878 FUN_148b4a878 body=606 status=ok
// SIG undefined FUN_148b4a878(void)

double * FUN_148b4a878(undefined8 param_1,double *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined2 *puVar5;
  double dVar6;
  undefined1 auStack_a8 [32];
  double *local_88;
  double *local_80;
  int *local_78;
  int local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  double local_68;
  double local_60 [2];
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1467cf2b8(local_60);
  local_60[0] = (double)((ulonglong)local_60[0] & 0xffffffffffffff00);
  local_6c = local_60[0]._0_2_;
  local_6a = 1;
  local_70 = 0;
  uVar2 = FUN_140b6087d();
  iVar4 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar4 = 0;
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  local_68 = 0.0;
  local_60[0] = -1.79769313486232e+308;
  local_60[1] = 1.79769313486232e+308;
  local_88 = local_60;
  local_80 = &local_68;
  local_78 = &local_70;
  cVar1 = FUN_140b60baa(puVar5,iVar4,uVar2,&local_6c);
  if (cVar1 == '\0') {
LAB_148b4a95c:
    local_70 = 0;
    uVar2 = FUN_140b60818();
    iVar4 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar4 = 0;
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    local_68 = 0.0;
    local_60[0] = -1.79769313486232e+308;
    local_60[1] = 1.79769313486232e+308;
    local_88 = local_60;
    local_80 = &local_68;
    local_78 = &local_70;
    cVar1 = FUN_140b60baa(puVar5,iVar4,uVar2,&local_6c);
    if (cVar1 != '\0') {
      iVar4 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar4 = 0;
      }
      if (local_70 == iVar4) goto LAB_148b4a945;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb9bf10) && (FUN_144b3d300(&DAT_14cb9bf10), DAT_14cb9bf10 == -1)) {
      FUN_1467ebd14(&DAT_14cb9bc78);
      atexit((_func_5014 *)&LAB_143fac4db);
      _Init_thread_footer(&DAT_14cb9bf10);
    }
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    FUN_1467ecfa6(&DAT_14cb9bc78,local_60,puVar5,*param_4);
    if ((&DAT_149f209a8)[local_50] == '\x01') {
      dVar6 = local_60[0];
      if (1.79769313486232e+308 <= local_60[0]) {
        dVar6 = 1.79769313486232e+308;
      }
      if (dVar6 <= -1.79769313486232e+308) {
        dVar6 = -1.79769313486232e+308;
      }
      *param_2 = dVar6;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *(undefined1 *)(param_2 + 1) = uVar3;
    (*(code *)(&PTR_FUN_149f209b0)[local_50])(local_60);
  }
  else {
    iVar4 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar4 = 0;
    }
    if (local_70 != iVar4) goto LAB_148b4a95c;
LAB_148b4a945:
    *param_2 = local_68;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148b4aad8 FUN_148b4aad8 body=216 status=ok
// SIG undefined FUN_148b4aad8(void)

ulonglong FUN_148b4aad8(undefined8 param_1,short param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  puVar3 = *(undefined4 **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((int)puVar3[0x44] < DAT_14cb9bf28) {
    puVar3 = &DAT_14cb9bf28;
    FUN_144b3d300(&DAT_14cb9bf28);
    if (DAT_14cb9bf28 == -1) {
      FUN_140056680(&DAT_14cb9bf18);
      atexit((_func_5014 *)&LAB_143fac4e7);
      puVar3 = &DAT_14cb9bf28;
      _Init_thread_footer(&DAT_14cb9bf28);
    }
  }
  if (param_2 != 0) {
    if ((longlong)DAT_14cb9bf20 != 0) {
      lVar4 = 0;
      do {
        if (*(short *)((longlong)DAT_14cb9bf18 + lVar4) == param_2) {
          uVar1 = CONCAT71((int7)((ulonglong)DAT_14cb9bf18 >> 8),1);
          goto LAB_148b4ab57;
        }
        lVar4 = lVar4 + 2;
        puVar3 = DAT_14cb9bf18;
      } while ((longlong)DAT_14cb9bf20 * 2 != lVar4);
    }
    lVar4 = FUN_140b6087d();
    uVar1 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
    if ((*(short *)(lVar4 + 0x70) == param_2) || (*(short *)(lVar4 + 0x72) == param_2))
    goto LAB_148b4ab57;
    lVar2 = 0;
    do {
      if (*(short *)(lVar4 + 0x78 + lVar2) == param_2) {
        uVar1 = CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar4 + 0x78 + lVar2 != 0);
        goto LAB_148b4ab57;
      }
      lVar2 = lVar2 + 2;
    } while (lVar2 != 0x14);
  }
  uVar1 = 0;
LAB_148b4ab57:
  return uVar1 & 0xffffffff;
}



// FUNCTION 148b4abb0 FUN_148b4abb0 body=3 status=ok
// SIG undefined FUN_148b4abb0(void)

undefined8 FUN_148b4abb0(void)

{
  return 0;
}



// FUNCTION 148b4abb4 FUN_148b4abb4 body=24 status=ok
// SIG undefined FUN_148b4abb4(void)

void FUN_148b4abb4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b4abc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148b4abcc FUN_148b4abcc body=29 status=ok
// SIG undefined FUN_148b4abcc(void)

undefined8 FUN_148b4abcc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4abea FUN_148b4abea body=313 status=ok
// SIG undefined FUN_148b4abea(void)

longlong * FUN_148b4abea(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b4ace6:
    *puVar5 = &PTR_LAB_149e020b0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55fd50;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b4ace6;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55fd50;
    puVar5[3] = uVar10;
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



// FUNCTION 148b4ad24 FUN_148b4ad24 body=64 status=ok
// SIG undefined FUN_148b4ad24(void)

undefined8 * FUN_148b4ad24(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55fd50;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 148b4ad68 FUN_148b4ad68 body=81 status=ok
// SIG undefined FUN_148b4ad68(void)

undefined8 FUN_148b4ad68(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148b4adc0 FUN_148b4adc0 body=89 status=ok
// SIG undefined FUN_148b4adc0(void)

bool FUN_148b4adc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148b4ae0b;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148b4ae0b:
  return lVar6 == param_2;
}



// FUNCTION 148b4ae36 FUN_148b4ae36 body=118 status=ok
// SIG undefined FUN_148b4ae36(void)

void FUN_148b4ae36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55fd50;
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



// FUNCTION 148b4aeac FUN_148b4aeac body=118 status=ok
// SIG undefined FUN_148b4aeac(void)

void FUN_148b4aeac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55fd50;
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



// FUNCTION 148b4af22 FUN_148b4af22 body=156 status=ok
// SIG undefined FUN_148b4af22(void)

void FUN_148b4af22(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55fd50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b4afae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b4afbe FUN_148b4afbe body=100 status=ok
// SIG undefined FUN_148b4afbe(void)

void FUN_148b4afbe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148b4b00a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b4b017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148b4b022 FUN_148b4b022 body=100 status=ok
// SIG undefined FUN_148b4b022(void)

ulonglong FUN_148b4b022(longlong param_1)

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
LAB_148b4b07b:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b4b07b;
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



// FUNCTION 148b4b086 FUN_148b4b086 body=130 status=ok
// SIG undefined FUN_148b4b086(void)

void FUN_148b4b086(longlong *param_1,longlong *param_2)

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



// FUNCTION 148b4b10a FUN_148b4b10a body=130 status=ok
// SIG undefined FUN_148b4b10a(void)

void FUN_148b4b10a(longlong *param_1,longlong *param_2)

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



// FUNCTION 148b4b18e FUN_148b4b18e body=313 status=ok
// SIG undefined FUN_148b4b18e(void)

longlong * FUN_148b4b18e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b4b28a:
    *puVar5 = &PTR_LAB_149f05a70;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55fdc0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b4b28a;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05a70;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55fdc0;
    puVar5[3] = uVar10;
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



// FUNCTION 148b4b2c8 FUN_148b4b2c8 body=64 status=ok
// SIG undefined FUN_148b4b2c8(void)

undefined8 * FUN_148b4b2c8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55fdc0;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 148b4b30c FUN_148b4b30c body=81 status=ok
// SIG undefined FUN_148b4b30c(void)

undefined8 FUN_148b4b30c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148b4b364 FUN_148b4b364 body=89 status=ok
// SIG undefined FUN_148b4b364(void)

bool FUN_148b4b364(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148b4b3af;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148b4b3af:
  return lVar6 == param_2;
}



// FUNCTION 148b4b3da FUN_148b4b3da body=118 status=ok
// SIG undefined FUN_148b4b3da(void)

void FUN_148b4b3da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55fdc0;
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



// FUNCTION 148b4b450 FUN_148b4b450 body=118 status=ok
// SIG undefined FUN_148b4b450(void)

void FUN_148b4b450(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55fdc0;
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



// FUNCTION 148b4b4c6 FUN_148b4b4c6 body=156 status=ok
// SIG undefined FUN_148b4b4c6(void)

void FUN_148b4b4c6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55fdc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b4b552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b4b562 FUN_148b4b562 body=105 status=ok
// SIG undefined FUN_148b4b562(void)

undefined8 FUN_148b4b562(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148b4b5b6:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148b4b5b6;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 148b4b5cc FUN_148b4b5cc body=162 status=ok
// SIG undefined FUN_148b4b5cc(void)

ulonglong FUN_148b4b5cc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148b4b64c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b4b64c;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if ((lVar4 != 0) &&
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_30),
       local_30[0] != (longlong *)0x0)) {
      (**(code **)(*local_30[0] + 0x10))();
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148b4b670 FUN_148b4b670 body=280 status=ok
// SIG undefined FUN_148b4b670(void)

undefined8 * FUN_148b4b670(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x280) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x278);
      }
      uVar4 = (**(code **)(*plVar3 + 0x58))();
      *(undefined8 *)(param_1 + 0x268) = uVar4;
    }
  }
  local_28 = *(double *)(param_1 + 0x268);
  if (((*(char *)(param_1 + 0x5b8) != '\0') || (local_28 != *(double *)(param_1 + 0x5a0))) ||
     (NAN(local_28) || NAN(*(double *)(param_1 + 0x5a0)))) {
    *(undefined1 *)(param_1 + 0x5b8) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x28))
              (*(longlong **)(param_1 + 0x2e8),param_2,&local_28);
  }
  else {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x5b0);
    _Src = *(void **)(param_1 + 0x5a8);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4b78c FUN_148b4b78c body=313 status=ok
// SIG undefined FUN_148b4b78c(void)

longlong * FUN_148b4b78c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b4b888:
    *puVar5 = &PTR_LAB_149f05210;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55fe30;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b4b888;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05210;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55fe30;
    puVar5[3] = uVar10;
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



// FUNCTION 148b4b8c6 FUN_148b4b8c6 body=64 status=ok
// SIG undefined FUN_148b4b8c6(void)

undefined8 * FUN_148b4b8c6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55fe30;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 148b4b90a FUN_148b4b90a body=81 status=ok
// SIG undefined FUN_148b4b90a(void)

undefined8 FUN_148b4b90a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148b4b962 FUN_148b4b962 body=89 status=ok
// SIG undefined FUN_148b4b962(void)

bool FUN_148b4b962(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148b4b9ad;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148b4b9ad:
  return lVar6 == param_2;
}



// FUNCTION 148b4b9d8 FUN_148b4b9d8 body=118 status=ok
// SIG undefined FUN_148b4b9d8(void)

void FUN_148b4b9d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55fe30;
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



// FUNCTION 148b4ba4e FUN_148b4ba4e body=118 status=ok
// SIG undefined FUN_148b4ba4e(void)

void FUN_148b4ba4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55fe30;
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



// FUNCTION 148b4bac4 FUN_148b4bac4 body=156 status=ok
// SIG undefined FUN_148b4bac4(void)

void FUN_148b4bac4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05210;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55fe30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b4bb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b4bb60 FUN_148b4bb60 body=114 status=ok
// SIG undefined FUN_148b4bb60(void)

undefined4 FUN_148b4bb60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        uVar7 = (**(code **)(param_1 + 0x28))
                          ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
        return uVar7;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b4bbce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 148b4bbd2 FUN_148b4bbd2 body=100 status=ok
// SIG undefined FUN_148b4bbd2(void)

ulonglong FUN_148b4bbd2(longlong param_1)

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
LAB_148b4bc2b:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b4bc2b;
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



// FUNCTION 148b4bc36 FUN_148b4bc36 body=313 status=ok
// SIG undefined FUN_148b4bc36(void)

longlong * FUN_148b4bc36(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b4bd32:
    *puVar5 = &PTR_LAB_149f21180;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55fea0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b4bd32;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f21180;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55fea0;
    puVar5[3] = uVar10;
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



// FUNCTION 148b4bd70 FUN_148b4bd70 body=64 status=ok
// SIG undefined FUN_148b4bd70(void)

undefined8 * FUN_148b4bd70(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55fea0;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 148b4bdb4 FUN_148b4bdb4 body=81 status=ok
// SIG undefined FUN_148b4bdb4(void)

undefined8 FUN_148b4bdb4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148b4be0c FUN_148b4be0c body=89 status=ok
// SIG undefined FUN_148b4be0c(void)

bool FUN_148b4be0c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148b4be57;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148b4be57:
  return lVar6 == param_2;
}



// FUNCTION 148b4be82 FUN_148b4be82 body=118 status=ok
// SIG undefined FUN_148b4be82(void)

void FUN_148b4be82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f21180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55fea0;
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



// FUNCTION 148b4bef8 FUN_148b4bef8 body=118 status=ok
// SIG undefined FUN_148b4bef8(void)

void FUN_148b4bef8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f21180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55fea0;
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



// FUNCTION 148b4bf6e FUN_148b4bf6e body=156 status=ok
// SIG undefined FUN_148b4bf6e(void)

void FUN_148b4bf6e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f21180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55fea0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b4bffa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b4c00a FUN_148b4c00a body=104 status=ok
// SIG undefined FUN_148b4c00a(void)

ulonglong FUN_148b4c00a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(param_1 + 0x28))
                          ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b4c06f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 148b4c072 FUN_148b4c072 body=101 status=ok
// SIG undefined FUN_148b4c072(void)

ulonglong FUN_148b4c072(longlong param_1)

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
LAB_148b4c0cc:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b4c0cc;
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



// FUNCTION 148b4c0d8 FUN_148b4c0d8 body=313 status=ok
// SIG undefined FUN_148b4c0d8(void)

longlong * FUN_148b4c0d8(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b4c1d4:
    *puVar5 = &PTR_LAB_149f0eae0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55ff10;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b4c1d4;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f0eae0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55ff10;
    puVar5[3] = uVar10;
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



// FUNCTION 148b4c212 FUN_148b4c212 body=64 status=ok
// SIG undefined FUN_148b4c212(void)

undefined8 * FUN_148b4c212(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55ff10;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 148b4c256 FUN_148b4c256 body=81 status=ok
// SIG undefined FUN_148b4c256(void)

undefined8 FUN_148b4c256(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148b4c2ae FUN_148b4c2ae body=89 status=ok
// SIG undefined FUN_148b4c2ae(void)

bool FUN_148b4c2ae(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148b4c2f9;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148b4c2f9:
  return lVar6 == param_2;
}



// FUNCTION 148b4c324 FUN_148b4c324 body=118 status=ok
// SIG undefined FUN_148b4c324(void)

void FUN_148b4c324(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55ff10;
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



// FUNCTION 148b4c39a FUN_148b4c39a body=118 status=ok
// SIG undefined FUN_148b4c39a(void)

void FUN_148b4c39a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55ff10;
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



// FUNCTION 148b4c410 FUN_148b4c410 body=156 status=ok
// SIG undefined FUN_148b4c410(void)

void FUN_148b4c410(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eae0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55ff10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b4c49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b4c4ac FUN_148b4c4ac body=104 status=ok
// SIG undefined FUN_148b4c4ac(void)

void FUN_148b4c4ac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148b4c4f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b4c50a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148b4c514 FUN_148b4c514 body=101 status=ok
// SIG undefined FUN_148b4c514(void)

ulonglong FUN_148b4c514(longlong param_1)

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
LAB_148b4c56e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b4c56e;
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



// FUNCTION 148b4c57a FUN_148b4c57a body=313 status=ok
// SIG undefined FUN_148b4c57a(void)

longlong * FUN_148b4c57a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b4c676:
    *puVar5 = &PTR_LAB_149f0eb50;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b55ff80;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b4c676;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f0eb50;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b55ff80;
    puVar5[3] = uVar10;
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



// FUNCTION 148b4c6b4 FUN_148b4c6b4 body=64 status=ok
// SIG undefined FUN_148b4c6b4(void)

undefined8 * FUN_148b4c6b4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b55ff80;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 148b4c6f8 FUN_148b4c6f8 body=81 status=ok
// SIG undefined FUN_148b4c6f8(void)

undefined8 FUN_148b4c6f8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148b4c750 FUN_148b4c750 body=89 status=ok
// SIG undefined FUN_148b4c750(void)

bool FUN_148b4c750(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148b4c79b;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148b4c79b:
  return lVar6 == param_2;
}



// FUNCTION 148b4c7c6 FUN_148b4c7c6 body=118 status=ok
// SIG undefined FUN_148b4c7c6(void)

void FUN_148b4c7c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55ff80;
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



// FUNCTION 148b4c83c FUN_148b4c83c body=118 status=ok
// SIG undefined FUN_148b4c83c(void)

void FUN_148b4c83c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b55ff80;
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



// FUNCTION 148b4c8b2 FUN_148b4c8b2 body=156 status=ok
// SIG undefined FUN_148b4c8b2(void)

void FUN_148b4c8b2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eb50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b55ff80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b4c93e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b4c94e FUN_148b4c94e body=104 status=ok
// SIG undefined FUN_148b4c94e(void)

void FUN_148b4c94e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148b4c99b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b4c9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148b4c9b6 FUN_148b4c9b6 body=101 status=ok
// SIG undefined FUN_148b4c9b6(void)

ulonglong FUN_148b4c9b6(longlong param_1)

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
LAB_148b4ca10:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b4ca10;
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



// FUNCTION 148b4ca1c FUN_148b4ca1c body=340 status=ok
// SIG undefined FUN_148b4ca1c(void)

undefined8 * FUN_148b4ca1c(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x2b0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b55fff0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x2a0);
  FUN_148b4cb72(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_148b4ccb0(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_148b4cb03;
    param_1[1] = 0;
LAB_148b4cacd:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_148b4cb03;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_148b4cb03;
      goto LAB_148b4cacd;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_148b4cb03;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_148b4cb03:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  local_38 = 0x2a0;
  FUN_140a52e78(*param_1,"SStringPropertyValue",
                ".\\Runtime/AdvancedWidgets/Private/Widgets/PropertyViewer/SStringPropertyValue.cpp"
                ,0x12);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4cb72 FUN_148b4cb72 body=116 status=ok
// SIG undefined FUN_148b4cb72(void)

undefined8 * FUN_148b4cb72(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14b560010;
  param_1[0x4d] = 0;
  FUN_14485c47a(param_1 + 0x4d,0);
  param_1[0x4e] = 0;
  FUN_14485c47a(param_1 + 0x4e,0);
  param_1[0x4f] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0x100000000;
  param_1[0x53] = 0;
  return param_1;
}



// FUNCTION 148b4cbe6 FUN_148b4cbe6 body=81 status=ok
// SIG undefined FUN_148b4cbe6(void)

void FUN_148b4cbe6(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b560010;
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x208);
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 148b4cc38 FUN_148b4cc38 body=29 status=ok
// SIG undefined FUN_148b4cc38(void)

undefined8 FUN_148b4cc38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4cc56 FUN_148b4cc56 body=90 status=ok
// SIG undefined FUN_148b4cc56(void)

undefined8 * FUN_148b4cc56(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b560010;
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4ccb0 FUN_148b4ccb0 body=167 status=ok
// SIG undefined FUN_148b4ccb0(void)

void FUN_148b4ccb0(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148b4cd2b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148b4cd2b;
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
LAB_148b4cd2b:
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
                    /* WARNING: Could not recover jumptable at 0x000148b4cd4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148b4cd58 FUN_148b4cd58 body=313 status=ok
// SIG undefined FUN_148b4cd58(void)

longlong * FUN_148b4cd58(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b4ce54:
    *puVar5 = &PTR_LAB_149f05a70;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b560250;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b4ce54;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05a70;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b560250;
    puVar5[3] = uVar10;
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



// FUNCTION 148b4ce92 FUN_148b4ce92 body=64 status=ok
// SIG undefined FUN_148b4ce92(void)

undefined8 * FUN_148b4ce92(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b560250;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 148b4ced6 FUN_148b4ced6 body=81 status=ok
// SIG undefined FUN_148b4ced6(void)

undefined8 FUN_148b4ced6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148b4cf2e FUN_148b4cf2e body=89 status=ok
// SIG undefined FUN_148b4cf2e(void)

bool FUN_148b4cf2e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148b4cf79;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148b4cf79:
  return lVar6 == param_2;
}



// FUNCTION 148b4cfa4 FUN_148b4cfa4 body=118 status=ok
// SIG undefined FUN_148b4cfa4(void)

void FUN_148b4cfa4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b560250;
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



// FUNCTION 148b4d01a FUN_148b4d01a body=118 status=ok
// SIG undefined FUN_148b4d01a(void)

void FUN_148b4d01a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b560250;
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



// FUNCTION 148b4d090 FUN_148b4d090 body=156 status=ok
// SIG undefined FUN_148b4d090(void)

void FUN_148b4d090(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b560250;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b4d11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b4d12c FUN_148b4d12c body=105 status=ok
// SIG undefined FUN_148b4d12c(void)

undefined8 FUN_148b4d12c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148b4d180:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_148b4d180;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 148b4d196 FUN_148b4d196 body=162 status=ok
// SIG undefined FUN_148b4d196(void)

ulonglong FUN_148b4d196(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_148b4d216:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b4d216;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if ((lVar4 != 0) &&
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_30),
       local_30[0] != (longlong *)0x0)) {
      (**(code **)(*local_30[0] + 0x10))();
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 148b4d23a FUN_148b4d23a body=313 status=ok
// SIG undefined FUN_148b4d23a(void)

longlong * FUN_148b4d23a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_148b4d336:
    *puVar5 = &PTR_LAB_149f0eb50;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14b5602c0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_148b4d336;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f0eb50;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14b5602c0;
    puVar5[3] = uVar10;
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



// FUNCTION 148b4d374 FUN_148b4d374 body=64 status=ok
// SIG undefined FUN_148b4d374(void)

undefined8 * FUN_148b4d374(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b5602c0;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 148b4d3b8 FUN_148b4d3b8 body=81 status=ok
// SIG undefined FUN_148b4d3b8(void)

undefined8 FUN_148b4d3b8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 148b4d410 FUN_148b4d410 body=89 status=ok
// SIG undefined FUN_148b4d410(void)

bool FUN_148b4d410(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_148b4d45b;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_148b4d45b:
  return lVar6 == param_2;
}



// FUNCTION 148b4d486 FUN_148b4d486 body=118 status=ok
// SIG undefined FUN_148b4d486(void)

void FUN_148b4d486(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5602c0;
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



// FUNCTION 148b4d4fc FUN_148b4d4fc body=118 status=ok
// SIG undefined FUN_148b4d4fc(void)

void FUN_148b4d4fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5602c0;
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



// FUNCTION 148b4d572 FUN_148b4d572 body=156 status=ok
// SIG undefined FUN_148b4d572(void)

void FUN_148b4d572(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eb50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5602c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b4d5fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b4d60e FUN_148b4d60e body=104 status=ok
// SIG undefined FUN_148b4d60e(void)

void FUN_148b4d60e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000148b4d65b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148b4d66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148b4d676 FUN_148b4d676 body=101 status=ok
// SIG undefined FUN_148b4d676(void)

ulonglong FUN_148b4d676(longlong param_1)

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
LAB_148b4d6d0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_148b4d6d0;
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



// FUNCTION 148b4d6db FUN_148b4d6db body=62 status=ok
// SIG undefined FUN_148b4d6db(void)

void FUN_148b4d6db(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4d720 FUN_148b4d720 body=595 status=ok
// SIG undefined FUN_148b4d720(void)

void FUN_148b4d720(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *pvStack_50;
  ulonglong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58 = 0;
  pvStack_50 = (void *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  FUN_140f4d408();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  _Src = pvStack_50;
  uVar2 = local_70;
  iVar1 = local_74;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a0 = local_68;
  local_98 = (undefined4)uStack_60;
  uStack_94 = uStack_60._4_4_;
  uStack_90 = (undefined4)local_58;
  uStack_8c = local_58._4_4_;
  local_88 = (void *)0x0;
  lVar3 = (longlong)(int)local_48;
  local_80 = (int)local_48;
  if (lVar3 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_48 & 0xffffffff,0);
    memcpy(local_88,_Src,lVar3 * 2);
  }
  uVar2 = FUN_148b54a90(local_40,&local_a0,uVar2,iVar1 != 0);
  *param_3 = uVar2;
  if (pvStack_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4d97e FUN_148b4d97e body=595 status=ok
// SIG undefined FUN_148b4d97e(void)

void FUN_148b4d97e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *pvStack_50;
  ulonglong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58 = 0;
  pvStack_50 = (void *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  FUN_140f4d408();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  _Src = pvStack_50;
  uVar2 = local_70;
  iVar1 = local_74;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a0 = local_68;
  local_98 = (undefined4)uStack_60;
  uStack_94 = uStack_60._4_4_;
  uStack_90 = (undefined4)local_58;
  uStack_8c = local_58._4_4_;
  local_88 = (void *)0x0;
  lVar3 = (longlong)(int)local_48;
  local_80 = (int)local_48;
  if (lVar3 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_48 & 0xffffffff,0);
    memcpy(local_88,_Src,lVar3 * 2);
  }
  uVar2 = FUN_148b5517e(local_40,&local_a0,uVar2,iVar1 != 0);
  *param_3 = uVar2;
  if (pvStack_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4dbe0 FUN_148b4dbe0 body=156 status=ok
// SIG undefined FUN_148b4dbe0(void)

void FUN_148b4dbe0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b55db0(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4dc7e FUN_148b4dc7e body=155 status=ok
// SIG undefined FUN_148b4dc7e(void)

void FUN_148b4dc7e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b559c2(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4dd20 FUN_148b4dd20 body=155 status=ok
// SIG undefined FUN_148b4dd20(void)

void FUN_148b4dd20(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b55a34(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4ddc2 FUN_148b4ddc2 body=155 status=ok
// SIG undefined FUN_148b4ddc2(void)

void FUN_148b4ddc2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b559fa(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4de5e FUN_148b4de5e body=148 status=ok
// SIG undefined FUN_148b4de5e(void)

void FUN_148b4de5e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b55d08(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4def4 FUN_148b4def4 body=367 status=ok
// SIG undefined FUN_148b4def4(void)

void FUN_148b4def4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_30;
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_143fb7ab8(local_20,local_28,&local_38);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4e064 FUN_148b4e064 body=477 status=ok
// SIG undefined FUN_148b4e064(void)

void FUN_148b4e064(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  void *pvStack_40;
  ulonglong local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  FUN_140f4d408();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  _Src = pvStack_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_58;
  local_78 = (undefined4)uStack_50;
  uStack_74 = uStack_50._4_4_;
  uStack_70 = (undefined4)local_48;
  uStack_6c = local_48._4_4_;
  local_68 = (void *)0x0;
  lVar1 = (longlong)(int)local_38;
  local_60 = (int)local_38;
  if (lVar1 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_38 & 0xffffffff,0);
    memcpy(local_68,_Src,lVar1 * 2);
  }
  FUN_148b55a6e(local_28,local_30,&local_80);
  if (pvStack_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4e242 FUN_148b4e242 body=230 status=ok
// SIG undefined FUN_148b4e242(void)

void FUN_148b4e242(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b55158(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4e32a FUN_148b4e32a body=257 status=ok
// SIG undefined FUN_148b4e32a(void)

void FUN_148b4e32a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b54ebe(&local_30,local_20,local_28);
  *param_3 = local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4e43e FUN_148b4e43e body=47 status=ok
// SIG undefined FUN_148b4e43e(void)

void FUN_148b4e43e(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb9c1c8);
                    /* WARNING: Could not recover jumptable at 0x000148b4e46a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148b4e4ce FUN_148b4e4ce body=189 status=ok
// SIG undefined FUN_148b4e4ce(void)

void FUN_148b4e4ce(undefined8 param_1,longlong param_2)

{
  longlong **pplVar1;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pplVar1 = local_30;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b5626c(param_1,pplVar1);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4e58c FUN_148b4e58c body=47 status=ok
// SIG undefined FUN_148b4e58c(void)

void FUN_148b4e58c(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb9c2e8);
                    /* WARNING: Could not recover jumptable at 0x000148b4e5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148b4e5bc FUN_148b4e5bc body=171 status=ok
// SIG undefined FUN_148b4e5bc(void)

void FUN_148b4e5bc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(&local_30);
  plVar2 = local_30;
  plVar1 = (longlong *)*param_2;
  if (local_30 != plVar1) {
    local_30 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  local_28 = (undefined4)param_2[1];
  uVar3 = FUN_14477b072(param_1,DAT_14cb9c2f8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4e678 FUN_148b4e678 body=217 status=ok
// SIG undefined FUN_148b4e678(void)

void FUN_148b4e678(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b5654e(param_1,puVar4);
  plVar3 = local_28;
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
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4e752 FUN_148b4e752 body=193 status=ok
// SIG undefined FUN_148b4e752(void)

void FUN_148b4e752(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [32];
  undefined **local_e8 [20];
  longlong *local_48;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140ca8f8e(local_e8);
  FUN_140f13d9e(local_e8,param_2);
  local_38 = param_3;
  uVar3 = FUN_14477b072(param_1,DAT_14cb9c340);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,local_e8);
  local_e8[0] = &PTR_FUN_149ed05f0;
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
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4e84a FUN_148b4e84a body=45 status=ok
// SIG undefined FUN_148b4e84a(void)

longlong FUN_148b4e84a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14150a64a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4e886 FUN_148b4e886 body=45 status=ok
// SIG undefined FUN_148b4e886(void)

longlong FUN_148b4e886(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141471a12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4e8c4 FUN_148b4e8c4 body=45 status=ok
// SIG undefined FUN_148b4e8c4(void)

longlong FUN_148b4e8c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14595f87a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4e8f2 FUN_148b4e8f2 body=45 status=ok
// SIG undefined FUN_148b4e8f2(void)

longlong FUN_148b4e8f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14595f87a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4e920 FUN_148b4e920 body=45 status=ok
// SIG undefined FUN_148b4e920(void)

longlong FUN_148b4e920(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bf2660(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4e94e FUN_148b4e94e body=45 status=ok
// SIG undefined FUN_148b4e94e(void)

longlong FUN_148b4e94e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a27452(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4e97c FUN_148b4e97c body=45 status=ok
// SIG undefined FUN_148b4e97c(void)

longlong FUN_148b4e97c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bf268e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4e9aa FUN_148b4e9aa body=45 status=ok
// SIG undefined FUN_148b4e9aa(void)

longlong FUN_148b4e9aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c1985c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4e9d8 FUN_148b4e9d8 body=45 status=ok
// SIG undefined FUN_148b4e9d8(void)

longlong FUN_148b4e9d8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14110b6d4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4ea06 FUN_148b4ea06 body=45 status=ok
// SIG undefined FUN_148b4ea06(void)

longlong FUN_148b4ea06(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1414c321a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4ea48 FUN_148b4ea48 body=45 status=ok
// SIG undefined FUN_148b4ea48(void)

longlong FUN_148b4ea48(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e35a76(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4ea76 FUN_148b4ea76 body=45 status=ok
// SIG undefined FUN_148b4ea76(void)

longlong FUN_148b4ea76(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1458dcdc4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4eaa4 FUN_148b4eaa4 body=45 status=ok
// SIG undefined FUN_148b4eaa4(void)

longlong FUN_148b4eaa4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14584c146(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4ead2 FUN_148b4ead2 body=45 status=ok
// SIG undefined FUN_148b4ead2(void)

longlong FUN_148b4ead2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c19914(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4eb00 FUN_148b4eb00 body=45 status=ok
// SIG undefined FUN_148b4eb00(void)

longlong FUN_148b4eb00(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14588d2b6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4eb2e FUN_148b4eb2e body=45 status=ok
// SIG undefined FUN_148b4eb2e(void)

longlong FUN_148b4eb2e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cf6f80(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4ec02 FUN_148b4ec02 body=59 status=ok
// SIG undefined FUN_148b4ec02(void)

undefined8 FUN_148b4ec02(longlong *param_1)

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



// FUNCTION 148b4ed3a FUN_148b4ed3a body=59 status=ok
// SIG undefined FUN_148b4ed3a(void)

undefined8 FUN_148b4ed3a(longlong *param_1)

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



// FUNCTION 148b4eddc FUN_148b4eddc body=52 status=ok
// SIG undefined FUN_148b4eddc(void)

undefined8 * FUN_148b4eddc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b56e120;
  FUN_144760f98(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4ee16 FUN_148b4ee16 body=38 status=ok
// SIG undefined FUN_148b4ee16(void)

undefined8 FUN_148b4ee16(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4eea8 FUN_148b4eea8 body=59 status=ok
// SIG undefined FUN_148b4eea8(void)

undefined8 FUN_148b4eea8(longlong *param_1)

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



// FUNCTION 148b4ef4a FUN_148b4ef4a body=60 status=ok
// SIG undefined FUN_148b4ef4a(void)

void FUN_148b4ef4a(longlong param_1)

{
  FUN_148b4ef86(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148b4ef86 FUN_148b4ef86 body=52 status=ok
// SIG undefined FUN_148b4ef86(void)

void FUN_148b4ef86(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_1400020a8();
    }
    FUN_1412dafa6(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 148b4efba FUN_148b4efba body=49 status=ok
// SIG undefined FUN_148b4efba(void)

void FUN_148b4efba(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
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



// FUNCTION 148b4efeb FUN_148b4efeb body=40 status=ok
// SIG undefined FUN_148b4efeb(void)

void FUN_148b4efeb(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148b4f014(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 148b4f014 FUN_148b4f014 body=62 status=ok
// SIG undefined FUN_148b4f014(void)

void FUN_148b4f014(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148b4f072 FUN_148b4f072 body=61 status=ok
// SIG undefined FUN_148b4f072(void)

void FUN_148b4f072(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4f0b0 FUN_148b4f0b0 body=87 status=ok
// SIG undefined FUN_148b4f0b0(void)

void FUN_148b4f0b0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar3 = (longlong *)FUN_148b584b6();
  plVar1 = (longlong *)*plVar3;
  plVar2 = (longlong *)*param_3;
  if (plVar2 != plVar1) {
    *param_3 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_3 + 1) = (int)plVar3[1];
  return;
}



// FUNCTION 148b4f108 FUN_148b4f108 body=156 status=ok
// SIG undefined FUN_148b4f108(void)

void FUN_148b4f108(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_e8 [32];
  undefined **local_c8 [20];
  longlong *local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143fbb82c(param_1,local_c8);
  FUN_140f13d9e(param_3,local_c8);
  local_c8[0] = &PTR_FUN_149ed05f0;
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
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4f1c0 FUN_148b4f1c0 body=158 status=ok
// SIG undefined FUN_148b4f1c0(void)

void FUN_148b4f1c0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b58e50(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4f260 FUN_148b4f260 body=414 status=ok
// SIG undefined FUN_148b4f260(void)

void FUN_148b4f260(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1a8 [32];
  undefined **local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong local_150;
  undefined8 local_148 [10];
  undefined4 local_f8;
  undefined1 local_f4;
  undefined8 local_f0;
  longlong *local_e8;
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
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_140ca8f8e(&local_d8);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_188 = &PTR_FUN_149ed05f0;
  local_180 = local_d0;
  uStack_17c = uStack_cc;
  uStack_178 = uStack_c8;
  uStack_174 = uStack_c4;
  local_170 = local_c0;
  uStack_16c = uStack_bc;
  uStack_168 = uStack_b8;
  uStack_164 = uStack_b4;
  local_160 = local_b0;
  uStack_15c = uStack_ac;
  uStack_158 = uStack_a8;
  uStack_154 = uStack_a4;
  local_150 = local_a0;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar4 = local_98;
  puVar5 = local_148;
  for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_f4 = local_44;
  local_f8 = local_48;
  local_f0 = local_40;
  local_e8 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  local_e0 = local_30;
  FUN_148b586d2(param_1);
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
  if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4f400 FUN_148b4f400 body=155 status=ok
// SIG undefined FUN_148b4f400(void)

void FUN_148b4f400(undefined8 param_1,longlong param_2)

{
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_148b58726(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4f49c FUN_148b4f49c body=165 status=ok
// SIG undefined FUN_148b4f49c(void)

void FUN_148b4f49c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b58610(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4f542 FUN_148b4f542 body=180 status=ok
// SIG undefined FUN_148b4f542(void)

void FUN_148b4f542(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b586b0(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4f5f8 FUN_148b4f5f8 body=350 status=ok
// SIG undefined FUN_148b4f5f8(void)

void FUN_148b4f5f8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined **local_d8 [20];
  longlong *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140ca8f8e(local_d8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  pppuVar3 = local_d8;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar3 = *(undefined ****)(param_2 + 0x38);
  }
  local_e0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  puVar4 = &local_e0;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b58d2a(param_1,pppuVar3,puVar4);
  local_d8[0] = &PTR_FUN_149ed05f0;
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
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4f758 FUN_148b4f758 body=156 status=ok
// SIG undefined FUN_148b4f758(void)

void FUN_148b4f758(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b58e2c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4f808 FUN_148b4f808 body=47 status=ok
// SIG undefined FUN_148b4f808(void)

void FUN_148b4f808(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb9c5a0);
                    /* WARNING: Could not recover jumptable at 0x000148b4f834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148b4f838 FUN_148b4f838 body=47 status=ok
// SIG undefined FUN_148b4f838(void)

void FUN_148b4f838(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb9c5b0);
                    /* WARNING: Could not recover jumptable at 0x000148b4f864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148b4f868 FUN_148b4f868 body=93 status=ok
// SIG undefined FUN_148b4f868(void)

void FUN_148b4f868(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb9c5c0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4f8c6 FUN_148b4f8c6 body=47 status=ok
// SIG undefined FUN_148b4f8c6(void)

void FUN_148b4f8c6(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb9c5d0);
                    /* WARNING: Could not recover jumptable at 0x000148b4f8f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148b4f940 FUN_148b4f940 body=160 status=ok
// SIG undefined FUN_148b4f940(void)

void FUN_148b4f940(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x4a8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4f9f8 FUN_148b4f9f8 body=165 status=ok
// SIG undefined FUN_148b4f9f8(void)

void FUN_148b4f9f8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b59460(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4fa9e FUN_148b4fa9e body=180 status=ok
// SIG undefined FUN_148b4fa9e(void)

void FUN_148b4fa9e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b59510(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4fb58 FUN_148b4fb58 body=158 status=ok
// SIG undefined FUN_148b4fb58(void)

void FUN_148b4fb58(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b5942e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4fc06 FUN_148b4fc06 body=153 status=ok
// SIG undefined FUN_148b4fc06(void)

longlong * FUN_148b4fc06(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_38 = param_3;
  plVar1 = (longlong *)FUN_14479d2ce(param_2);
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_2 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_38);
  *param_1 = local_30;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4fca0 FUN_148b4fca0 body=106 status=ok
// SIG undefined FUN_148b4fca0(void)

void FUN_148b4fca0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_28 = param_3;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4fd2e FUN_148b4fd2e body=156 status=ok
// SIG undefined FUN_148b4fd2e(void)

void FUN_148b4fd2e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b62e56(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4fdcc FUN_148b4fdcc body=156 status=ok
// SIG undefined FUN_148b4fdcc(void)

void FUN_148b4fdcc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b62ef6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b4fe84 FUN_148b4fe84 body=47 status=ok
// SIG undefined FUN_148b4fe84(void)

void FUN_148b4fe84(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb9c8e8);
                    /* WARNING: Could not recover jumptable at 0x000148b4feb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148b4feb4 FUN_148b4feb4 body=47 status=ok
// SIG undefined FUN_148b4feb4(void)

void FUN_148b4feb4(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb9c8f8);
                    /* WARNING: Could not recover jumptable at 0x000148b4fee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148b4fee4 FUN_148b4fee4 body=47 status=ok
// SIG undefined FUN_148b4fee4(void)

void FUN_148b4fee4(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb9c908);
                    /* WARNING: Could not recover jumptable at 0x000148b4ff10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148b4ff6e FUN_148b4ff6e body=45 status=ok
// SIG undefined FUN_148b4ff6e(void)

longlong FUN_148b4ff6e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14110b6d4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4ff9c FUN_148b4ff9c body=45 status=ok
// SIG undefined FUN_148b4ff9c(void)

longlong FUN_148b4ff9c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14596e150(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4ffca FUN_148b4ffca body=45 status=ok
// SIG undefined FUN_148b4ffca(void)

longlong FUN_148b4ffca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_145977296(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b4fff8 FUN_148b4fff8 body=45 status=ok
// SIG undefined FUN_148b4fff8(void)

longlong FUN_148b4fff8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c691b2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b50026 FUN_148b50026 body=45 status=ok
// SIG undefined FUN_148b50026(void)

longlong FUN_148b50026(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c69288(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b50054 FUN_148b50054 body=45 status=ok
// SIG undefined FUN_148b50054(void)

longlong FUN_148b50054(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1461cac3a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5008c FUN_148b5008c body=45 status=ok
// SIG undefined FUN_148b5008c(void)

longlong FUN_148b5008c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c90c50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b500ba FUN_148b500ba body=45 status=ok
// SIG undefined FUN_148b500ba(void)

longlong FUN_148b500ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cc0322(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b500e8 FUN_148b500e8 body=45 status=ok
// SIG undefined FUN_148b500e8(void)

longlong FUN_148b500e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c52d9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b50116 FUN_148b50116 body=45 status=ok
// SIG undefined FUN_148b50116(void)

longlong FUN_148b50116(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c25470(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b50144 FUN_148b50144 body=45 status=ok
// SIG undefined FUN_148b50144(void)

longlong FUN_148b50144(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141027e22(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b50172 FUN_148b50172 body=45 status=ok
// SIG undefined FUN_148b50172(void)

longlong FUN_148b50172(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1458dfdc4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b501a0 FUN_148b501a0 body=45 status=ok
// SIG undefined FUN_148b501a0(void)

longlong FUN_148b501a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145c4fa82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b501ce FUN_148b501ce body=45 status=ok
// SIG undefined FUN_148b501ce(void)

longlong FUN_148b501ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145db4a28(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b501fc FUN_148b501fc body=45 status=ok
// SIG undefined FUN_148b501fc(void)

longlong FUN_148b501fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bf116c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b5022a FUN_148b5022a body=45 status=ok
// SIG undefined FUN_148b5022a(void)

longlong FUN_148b5022a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cad470(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b50258 FUN_148b50258 body=45 status=ok
// SIG undefined FUN_148b50258(void)

longlong FUN_148b50258(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145dcf5da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b50286 FUN_148b50286 body=45 status=ok
// SIG undefined FUN_148b50286(void)

longlong FUN_148b50286(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1459bf112(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b502b4 FUN_148b502b4 body=68 status=ok
// SIG undefined FUN_148b502b4(void)

longlong FUN_148b502b4(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x28;
  *(undefined ***)(param_1 + 0x2d0) = &PTR_FUN_14b56e120;
  FUN_144760f98(param_1 + 0x2d8);
  FUN_14117c118(lVar1);
  if (param_2 != 0) {
    FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 148b502fe FUN_148b502fe body=78 status=ok
// SIG undefined FUN_148b502fe(void)

void FUN_148b502fe(undefined8 param_1,undefined8 *param_2)

{
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140fbcb60(param_2);
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}



// FUNCTION 148b5034c FUN_148b5034c body=41 status=ok
// SIG undefined FUN_148b5034c(void)

void FUN_148b5034c(undefined8 param_1,longlong param_2)

{
  FUN_140fbcb60(param_2);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  return;
}



// FUNCTION 148b50376 FUN_148b50376 body=35 status=ok
// SIG undefined FUN_148b50376(void)

void FUN_148b50376(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1412dafa6(param_2);
  return;
}



// FUNCTION 148b503b0 FUN_148b503b0 body=83 status=ok
// SIG undefined FUN_148b503b0(void)

undefined8 FUN_148b503b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140c19bee(param_2,param_3);
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined4 *)(param_3 + 0x54);
    uVar2 = *(undefined4 *)(param_3 + 0x58);
    uVar3 = *(undefined4 *)(param_3 + 0x5c);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x54) = uVar1;
    *(undefined4 *)(param_2 + 0x58) = uVar2;
    *(undefined4 *)(param_2 + 0x5c) = uVar3;
    FUN_144a787a6(param_2 + 0x60,param_3 + 0x60);
    param_2 = param_2 + 0x70;
    param_3 = param_3 + 0x70;
  }
  return 1;
}



// FUNCTION 148b5042c FUN_148b5042c body=59 status=ok
// SIG undefined FUN_148b5042c(void)

undefined8 FUN_148b5042c(longlong *param_1)

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



// FUNCTION 148b50472 FUN_148b50472 body=46 status=ok
// SIG undefined FUN_148b50472(void)

void FUN_148b50472(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    if (*(longlong *)(param_2 + 0x60) != 0) {
      FUN_1400020a8();
    }
    FUN_1412dafa6(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148b50546 FUN_148b50546 body=97 status=ok
// SIG undefined FUN_148b50546(void)

undefined8 FUN_148b50546(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      *(undefined1 *)(param_2 + -0x30) = *(undefined1 *)(param_3 + -0x30);
      *(undefined8 *)(param_2 + -0x28) = *(undefined8 *)(param_3 + -0x28);
      uVar1 = *(undefined4 *)(param_3 + -0x1c);
      uVar2 = *(undefined4 *)(param_3 + -0x18);
      uVar3 = *(undefined4 *)(param_3 + -0x14);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar1;
      *(undefined4 *)(param_2 + -0x18) = uVar2;
      *(undefined4 *)(param_2 + -0x14) = uVar3;
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_148b50686(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b505d0 FUN_148b505d0 body=59 status=ok
// SIG undefined FUN_148b505d0(void)

undefined8 FUN_148b505d0(longlong *param_1)

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



// FUNCTION 148b50616 FUN_148b50616 body=34 status=ok
// SIG undefined FUN_148b50616(void)

void FUN_148b50616(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148b4ef4a(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148b50686 FUN_148b50686 body=95 status=ok
// SIG undefined FUN_148b50686(void)

undefined8 * FUN_148b50686(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148b4ef86(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b506e6(param_1,iVar1);
      FUN_148b50755(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b506e6 FUN_148b506e6 body=111 status=ok
// SIG undefined FUN_148b506e6(void)

void FUN_148b506e6(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148b50755 FUN_148b50755 body=52 status=ok
// SIG undefined FUN_148b50755(void)

void FUN_148b50755(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148b5078a(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 148b5078a FUN_148b5078a body=116 status=ok
// SIG undefined FUN_148b5078a(void)

longlong FUN_148b5078a(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_140c19bd6();
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined4 *)(param_2 + 0x54);
  uVar3 = *(undefined4 *)(param_2 + 0x58);
  uVar4 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = 0;
  iVar1 = *(int *)(param_2 + 0x68);
  _Src = *(void **)(param_2 + 0x60);
  *(int *)(param_1 + 0x68) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x60),iVar1,0);
    memcpy(*(void **)(param_1 + 0x60),_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148b50880 FUN_148b50880 body=136 status=ok
// SIG undefined FUN_148b50880(void)

undefined8 FUN_148b50880(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_3 + lVar6;
      lVar2 = param_2 + 0x28 + lVar6;
      *(undefined1 *)(lVar2 + -0x1e) = *(undefined1 *)(lVar1 + 10);
      *(undefined2 *)(lVar2 + -0x20) = *(undefined2 *)(lVar1 + 8);
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar1 + 0x10);
      uVar3 = *(undefined4 *)(lVar1 + 0x1c);
      uVar4 = *(undefined4 *)(lVar1 + 0x20);
      uVar5 = *(undefined4 *)(lVar1 + 0x24);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      FUN_148b50a90(param_2 + lVar6 + 0x38,param_3 + lVar6 + 0x38);
      FUN_1406fa324(param_2 + lVar6 + 0x48,param_3 + lVar6 + 0x48);
      lVar6 = lVar6 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b50930 FUN_148b50930 body=59 status=ok
// SIG undefined FUN_148b50930(void)

undefined8 FUN_148b50930(longlong *param_1)

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



// FUNCTION 148b50976 FUN_148b50976 body=34 status=ok
// SIG undefined FUN_148b50976(void)

void FUN_148b50976(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_148b50a0c(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148b509e6 FUN_148b509e6 body=38 status=ok
// SIG undefined FUN_148b509e6(void)

undefined8 FUN_148b509e6(undefined8 param_1,int param_2)

{
  FUN_148b50a0c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b50a0c FUN_148b50a0c body=84 status=ok
// SIG undefined FUN_148b50a0c(void)

void FUN_148b50a0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b579400;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_148b50a60(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148b50a60 FUN_148b50a60 body=47 status=ok
// SIG undefined FUN_148b50a60(void)

void FUN_148b50a60(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
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



// FUNCTION 148b50a90 FUN_148b50a90 body=95 status=ok
// SIG undefined FUN_148b50a90(void)

undefined8 * FUN_148b50a90(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148b50a60(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b50af0(param_1,iVar1);
      FUN_148b50b63(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b50af0 FUN_148b50af0 body=115 status=ok
// SIG undefined FUN_148b50af0(void)

void FUN_148b50af0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148b50b63 FUN_148b50b63 body=134 status=ok
// SIG undefined FUN_148b50b63(void)

void FUN_148b50b63(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148b50c1a FUN_148b50c1a body=54 status=ok
// SIG undefined FUN_148b50c1a(void)

undefined1 FUN_148b50c1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b50d18(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 148b50c78 FUN_148b50c78 body=59 status=ok
// SIG undefined FUN_148b50c78(void)

undefined8 FUN_148b50c78(longlong *param_1)

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



// FUNCTION 148b50d18 FUN_148b50d18 body=97 status=ok
// SIG undefined FUN_148b50d18(void)

longlong * FUN_148b50d18(longlong *param_1,longlong *param_2)

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
  *(char *)(param_1 + 2) = (char)param_2[2];
  return param_1;
}



// FUNCTION 148b50dd4 FUN_148b50dd4 body=118 status=ok
// SIG undefined FUN_148b50dd4(void)

undefined8 FUN_148b50dd4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      if (*(int *)(param_2 + 0x10 + lVar2) != *(int *)(param_3 + 0x10 + lVar2)) {
        lVar1 = *(longlong *)(param_3 + 8 + lVar2);
        if (DAT_14c950c29 == '\x01') {
          if (lVar1 == 0) {
            lVar1 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar1 = *(longlong *)(param_3 + 8 + lVar2);
          }
        }
        *(longlong *)(param_2 + 8 + lVar2) = lVar1;
        *(undefined4 *)(param_2 + 0x10 + lVar2) = *(undefined4 *)(param_3 + 0x10 + lVar2);
      }
      *(undefined4 *)(param_2 + 0x18 + lVar2) = *(undefined4 *)(param_3 + 0x18 + lVar2);
      lVar2 = lVar2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b50e72 FUN_148b50e72 body=59 status=ok
// SIG undefined FUN_148b50e72(void)

undefined8 FUN_148b50e72(longlong *param_1)

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



// FUNCTION 148b50f12 FUN_148b50f12 body=29 status=ok
// SIG undefined FUN_148b50f12(void)

undefined8 FUN_148b50f12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b50f30 FUN_148b50f30 body=55 status=ok
// SIG undefined FUN_148b50f30(void)

void FUN_148b50f30(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9c960 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9c960 = FUN_140002ddd(FUN_14659b1c9,uVar1,L"GbxUIUMGListView_ItemData");
  }
  return;
}



// FUNCTION 148b50fe2 FUN_148b50fe2 body=321 status=ok
// SIG undefined FUN_148b50fe2(void)

void FUN_148b50fe2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143fd26e4(local_18,local_20,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b51124 FUN_148b51124 body=321 status=ok
// SIG undefined FUN_148b51124(void)

void FUN_148b51124(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b65030(local_18,local_20,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b51284 FUN_148b51284 body=176 status=ok
// SIG undefined FUN_148b51284(void)

void FUN_148b51284(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148b65154(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b51336 FUN_148b51336 body=321 status=ok
// SIG undefined FUN_148b51336(void)

void FUN_148b51336(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143fd270c(local_18,local_20,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b51478 FUN_148b51478 body=321 status=ok
// SIG undefined FUN_148b51478(void)

void FUN_148b51478(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b650a8(local_18,local_20,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b515ba FUN_148b515ba body=156 status=ok
// SIG undefined FUN_148b515ba(void)

void FUN_148b515ba(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143fd25fe(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b51658 FUN_148b51658 body=156 status=ok
// SIG undefined FUN_148b51658(void)

void FUN_148b51658(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143fd2654(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b516f6 FUN_148b516f6 body=156 status=ok
// SIG undefined FUN_148b516f6(void)

void FUN_148b516f6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148b650e6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b517ae FUN_148b517ae body=47 status=ok
// SIG undefined FUN_148b517ae(void)

void FUN_148b517ae(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb9ccf8);
                    /* WARNING: Could not recover jumptable at 0x000148b517da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148b517de FUN_148b517de body=103 status=ok
// SIG undefined FUN_148b517de(void)

void FUN_148b517de(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  local_20 = param_3;
  local_1c = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cb9cd08);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b51882 FUN_148b51882 body=45 status=ok
// SIG undefined FUN_148b51882(void)

longlong FUN_148b51882(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d00954(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b518b0 FUN_148b518b0 body=45 status=ok
// SIG undefined FUN_148b518b0(void)

longlong FUN_148b518b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c1e4ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b518f6 FUN_148b518f6 body=45 status=ok
// SIG undefined FUN_148b518f6(void)

longlong FUN_148b518f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c6935e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51924 FUN_148b51924 body=45 status=ok
// SIG undefined FUN_148b51924(void)

longlong FUN_148b51924(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c69434(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51952 FUN_148b51952 body=45 status=ok
// SIG undefined FUN_148b51952(void)

longlong FUN_148b51952(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bf1214(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51980 FUN_148b51980 body=45 status=ok
// SIG undefined FUN_148b51980(void)

longlong FUN_148b51980(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ac6d9a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b519ae FUN_148b519ae body=45 status=ok
// SIG undefined FUN_148b519ae(void)

longlong FUN_148b519ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bccd84(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b519dc FUN_148b519dc body=45 status=ok
// SIG undefined FUN_148b519dc(void)

longlong FUN_148b519dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140f981ea(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51a0a FUN_148b51a0a body=45 status=ok
// SIG undefined FUN_148b51a0a(void)

longlong FUN_148b51a0a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145bd00e6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51a3e FUN_148b51a3e body=45 status=ok
// SIG undefined FUN_148b51a3e(void)

longlong FUN_148b51a3e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d22592(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51a6c FUN_148b51a6c body=45 status=ok
// SIG undefined FUN_148b51a6c(void)

longlong FUN_148b51a6c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14594e4c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51a9a FUN_148b51a9a body=45 status=ok
// SIG undefined FUN_148b51a9a(void)

longlong FUN_148b51a9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141471a12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51ac8 FUN_148b51ac8 body=45 status=ok
// SIG undefined FUN_148b51ac8(void)

longlong FUN_148b51ac8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e03cd4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51af6 FUN_148b51af6 body=45 status=ok
// SIG undefined FUN_148b51af6(void)

longlong FUN_148b51af6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bf12bc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51b24 FUN_148b51b24 body=45 status=ok
// SIG undefined FUN_148b51b24(void)

longlong FUN_148b51b24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145af11b0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51b54 FUN_148b51b54 body=45 status=ok
// SIG undefined FUN_148b51b54(void)

longlong FUN_148b51b54(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140cdcea6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51b82 FUN_148b51b82 body=47 status=ok
// SIG undefined FUN_148b51b82(void)

longlong * FUN_148b51b82(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1459990cc();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  return param_2;
}



// FUNCTION 148b51bb6 FUN_148b51bb6 body=45 status=ok
// SIG undefined FUN_148b51bb6(void)

longlong FUN_148b51bb6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140cdcea6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b51be4 FUN_148b51be4 body=47 status=ok
// SIG undefined FUN_148b51be4(void)

longlong * FUN_148b51be4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145b88674();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  return param_2;
}



// FUNCTION 148b51c1a FUN_148b51c1a body=45 status=ok
// SIG undefined FUN_148b51c1a(void)

longlong FUN_148b51c1a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140cdcea6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


