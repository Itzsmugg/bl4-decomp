// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148beec86 FUN_148beec86 body=48 status=ok
// SIG undefined FUN_148beec86(void)

void FUN_148beec86(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x164) == '\x01') {
    *param_2 = &PTR_FUN_14b6d3270;
    FUN_141798144(param_2);
    *(undefined1 *)(param_2 + 0x164) = 0;
  }
  return;
}



// FUNCTION 148beed04 FUN_148beed04 body=3184 status=ok
// SIG undefined FUN_148beed04(void)

longlong FUN_148beed04(longlong param_1,longlong param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte bVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  
  FUN_14043063a();
  uVar1 = *(undefined4 *)(param_2 + 0x134);
  uVar2 = *(undefined4 *)(param_2 + 0x138);
  uVar3 = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = uVar1;
  *(undefined4 *)(param_1 + 0x138) = uVar2;
  *(undefined4 *)(param_1 + 0x13c) = uVar3;
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  lVar20 = *(longlong *)(param_2 + 0x148);
  if (DAT_14c950c29 == 1) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x148);
    }
  }
  bVar19 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x148) = lVar20;
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  lVar20 = *(longlong *)(param_2 + 0x160);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x160);
      bVar19 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x160) = lVar20;
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  lVar20 = *(longlong *)(param_2 + 0x178);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x178);
      bVar19 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x178) = lVar20;
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  lVar20 = *(longlong *)(param_2 + 400);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 400);
      bVar19 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 400) = lVar20;
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  lVar20 = *(longlong *)(param_2 + 0x1a8);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x1a8);
      bVar19 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x1a8) = lVar20;
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  lVar20 = *(longlong *)(param_2 + 0x1c0);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x1c0);
      bVar19 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x1c0) = lVar20;
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  lVar20 = *(longlong *)(param_2 + 0x1d8);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x1d8);
      bVar19 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x1d8) = lVar20;
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_2 + 0x1e8);
  lVar20 = *(longlong *)(param_2 + 0x1f0);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x1f0);
    }
  }
  *(longlong *)(param_1 + 0x1f0) = lVar20;
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  uVar1 = *(undefined4 *)(param_2 + 0x204);
  uVar2 = *(undefined4 *)(param_2 + 0x208);
  uVar3 = *(undefined4 *)(param_2 + 0x20c);
  uVar4 = *(undefined4 *)(param_2 + 0x210);
  uVar5 = *(undefined4 *)(param_2 + 0x214);
  uVar6 = *(undefined4 *)(param_2 + 0x218);
  uVar7 = *(undefined4 *)(param_2 + 0x21c);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x204) = uVar1;
  *(undefined4 *)(param_1 + 0x208) = uVar2;
  *(undefined4 *)(param_1 + 0x20c) = uVar3;
  *(undefined4 *)(param_1 + 0x210) = uVar4;
  *(undefined4 *)(param_1 + 0x214) = uVar5;
  *(undefined4 *)(param_1 + 0x218) = uVar6;
  *(undefined4 *)(param_1 + 0x21c) = uVar7;
  FUN_140e78ece(param_1 + 0x220,param_2 + 0x220);
  FUN_140e78ece(param_1 + 0x240,param_2 + 0x240);
  FUN_140e78ece(param_1 + 0x260,param_2 + 0x260);
  FUN_140e78ece(param_1 + 0x280,param_2 + 0x280);
  FUN_140e78ece(param_1 + 0x2a0,param_2 + 0x2a0);
  FUN_140e78ece(param_1 + 0x2c0,param_2 + 0x2c0);
  FUN_140e78ece(param_1 + 0x2e0,param_2 + 0x2e0);
  FUN_140e78ece(param_1 + 0x300,param_2 + 0x300);
  FUN_140e78ece(param_1 + 800,param_2 + 800);
  FUN_140e78ece(param_1 + 0x340,param_2 + 0x340);
  FUN_140e78ece(param_1 + 0x360,param_2 + 0x360);
  *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(param_2 + 0x380);
  lVar20 = *(longlong *)(param_2 + 0x388);
  if (DAT_14c950c29 == 1) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x388);
    }
  }
  bVar19 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x388) = lVar20;
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_2 + 0x390);
  *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_2 + 0x398);
  lVar20 = *(longlong *)(param_2 + 0x3a0);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x3a0);
      bVar19 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x3a0) = lVar20;
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x3a8);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_2 + 0x3b0);
  lVar20 = *(longlong *)(param_2 + 0x3b8);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x3b8);
      bVar19 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x3b8) = lVar20;
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_2 + 0x3c0);
  *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_2 + 0x3c8);
  lVar20 = *(longlong *)(param_2 + 0x3d0);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x3d0);
      bVar19 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x3d0) = lVar20;
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x3d8);
  *(undefined8 *)(param_1 + 0x3e0) = *(undefined8 *)(param_2 + 0x3e0);
  lVar20 = *(longlong *)(param_2 + 1000);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 1000);
      bVar19 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 1000) = lVar20;
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x3f0);
  *(undefined8 *)(param_1 + 0x3f8) = *(undefined8 *)(param_2 + 0x3f8);
  lVar20 = *(longlong *)(param_2 + 0x400);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x400);
      bVar19 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x400) = lVar20;
  *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_2 + 0x408);
  *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)(param_2 + 0x410);
  lVar20 = *(longlong *)(param_2 + 0x418);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x418);
      bVar19 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x418) = lVar20;
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_2 + 0x420);
  *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_2 + 0x428);
  lVar20 = *(longlong *)(param_2 + 0x430);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x430);
      bVar19 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x430) = lVar20;
  *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_2 + 0x438);
  *(undefined2 *)(param_1 + 0x450) = *(undefined2 *)(param_2 + 0x450);
  *(undefined8 *)(param_1 + 0x448) = *(undefined8 *)(param_2 + 0x448);
  uVar1 = *(undefined4 *)(param_2 + 0x45c);
  uVar2 = *(undefined4 *)(param_2 + 0x460);
  uVar3 = *(undefined4 *)(param_2 + 0x464);
  uVar4 = *(undefined4 *)(param_2 + 0x468);
  uVar5 = *(undefined4 *)(param_2 + 0x46c);
  uVar6 = *(undefined4 *)(param_2 + 0x470);
  uVar7 = *(undefined4 *)(param_2 + 0x474);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_2 + 0x458);
  *(undefined4 *)(param_1 + 0x45c) = uVar1;
  *(undefined4 *)(param_1 + 0x460) = uVar2;
  *(undefined4 *)(param_1 + 0x464) = uVar3;
  *(undefined4 *)(param_1 + 0x468) = uVar4;
  *(undefined4 *)(param_1 + 0x46c) = uVar5;
  *(undefined4 *)(param_1 + 0x470) = uVar6;
  *(undefined4 *)(param_1 + 0x474) = uVar7;
  *(undefined8 *)(param_1 + 0x475) = *(undefined8 *)(param_2 + 0x475);
  *(undefined8 *)(param_1 + 0x480) = *(undefined8 *)(param_2 + 0x480);
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_2 + 0x490);
  *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)(param_2 + 0x488);
  lVar20 = *(longlong *)(param_2 + 0x498);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x498);
      bVar19 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x498) = lVar20;
  uVar12 = *(undefined8 *)(param_2 + 0x4a8);
  uVar13 = *(undefined8 *)(param_2 + 0x4b0);
  uVar14 = *(undefined8 *)(param_2 + 0x4b8);
  uVar1 = *(undefined4 *)(param_2 + 0x4c0);
  uVar2 = *(undefined4 *)(param_2 + 0x4c4);
  uVar3 = *(undefined4 *)(param_2 + 0x4c8);
  uVar4 = *(undefined4 *)(param_2 + 0x4cc);
  uVar5 = *(undefined4 *)(param_2 + 0x4ca);
  uVar6 = *(undefined4 *)(param_2 + 0x4ce);
  uVar7 = *(undefined4 *)(param_2 + 0x4d2);
  uVar8 = *(undefined4 *)(param_2 + 0x4d6);
  *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_2 + 0x4a0);
  *(undefined8 *)(param_1 + 0x4a8) = uVar12;
  *(undefined8 *)(param_1 + 0x4b0) = uVar13;
  *(undefined8 *)(param_1 + 0x4b8) = uVar14;
  *(undefined4 *)(param_1 + 0x4c0) = uVar1;
  *(undefined4 *)(param_1 + 0x4c4) = uVar2;
  *(undefined4 *)(param_1 + 0x4c8) = uVar3;
  *(undefined4 *)(param_1 + 0x4cc) = uVar4;
  *(undefined4 *)(param_1 + 0x4ca) = uVar5;
  *(undefined4 *)(param_1 + 0x4ce) = uVar6;
  *(undefined4 *)(param_1 + 0x4d2) = uVar7;
  *(undefined4 *)(param_1 + 0x4d6) = uVar8;
  puVar21 = (undefined8 *)(param_2 + 0x4e0);
  puVar22 = (undefined8 *)(param_1 + 0x4e0);
  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  *(undefined2 *)(param_1 + 0x550) = *(undefined2 *)(param_2 + 0x550);
  *(undefined8 *)(param_1 + 0x548) = *(undefined8 *)(param_2 + 0x548);
  uVar1 = *(undefined4 *)(param_2 + 0x55c);
  uVar2 = *(undefined4 *)(param_2 + 0x560);
  uVar3 = *(undefined4 *)(param_2 + 0x564);
  uVar4 = *(undefined4 *)(param_2 + 0x568);
  uVar5 = *(undefined4 *)(param_2 + 0x56c);
  uVar6 = *(undefined4 *)(param_2 + 0x570);
  uVar7 = *(undefined4 *)(param_2 + 0x574);
  *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_2 + 0x558);
  *(undefined4 *)(param_1 + 0x55c) = uVar1;
  *(undefined4 *)(param_1 + 0x560) = uVar2;
  *(undefined4 *)(param_1 + 0x564) = uVar3;
  *(undefined4 *)(param_1 + 0x568) = uVar4;
  *(undefined4 *)(param_1 + 0x56c) = uVar5;
  *(undefined4 *)(param_1 + 0x570) = uVar6;
  *(undefined4 *)(param_1 + 0x574) = uVar7;
  *(undefined8 *)(param_1 + 0x575) = *(undefined8 *)(param_2 + 0x575);
  *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(param_2 + 0x580);
  *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(param_2 + 0x590);
  *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_2 + 0x588);
  lVar20 = *(longlong *)(param_2 + 0x598);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x598);
      bVar19 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x598) = lVar20;
  uVar12 = *(undefined8 *)(param_2 + 0x5a8);
  uVar13 = *(undefined8 *)(param_2 + 0x5b0);
  uVar14 = *(undefined8 *)(param_2 + 0x5b8);
  uVar1 = *(undefined4 *)(param_2 + 0x5c0);
  uVar2 = *(undefined4 *)(param_2 + 0x5c4);
  uVar3 = *(undefined4 *)(param_2 + 0x5c8);
  uVar4 = *(undefined4 *)(param_2 + 0x5cc);
  uVar5 = *(undefined4 *)(param_2 + 0x5ca);
  uVar6 = *(undefined4 *)(param_2 + 0x5ce);
  uVar7 = *(undefined4 *)(param_2 + 0x5d2);
  uVar8 = *(undefined4 *)(param_2 + 0x5d6);
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_2 + 0x5a0);
  *(undefined8 *)(param_1 + 0x5a8) = uVar12;
  *(undefined8 *)(param_1 + 0x5b0) = uVar13;
  *(undefined8 *)(param_1 + 0x5b8) = uVar14;
  *(undefined4 *)(param_1 + 0x5c0) = uVar1;
  *(undefined4 *)(param_1 + 0x5c4) = uVar2;
  *(undefined4 *)(param_1 + 0x5c8) = uVar3;
  *(undefined4 *)(param_1 + 0x5cc) = uVar4;
  *(undefined4 *)(param_1 + 0x5ca) = uVar5;
  *(undefined4 *)(param_1 + 0x5ce) = uVar6;
  *(undefined4 *)(param_1 + 0x5d2) = uVar7;
  *(undefined4 *)(param_1 + 0x5d6) = uVar8;
  puVar21 = (undefined8 *)(param_2 + 0x5e0);
  puVar22 = (undefined8 *)(param_1 + 0x5e0);
  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  *(undefined2 *)(param_1 + 0x650) = *(undefined2 *)(param_2 + 0x650);
  *(undefined8 *)(param_1 + 0x648) = *(undefined8 *)(param_2 + 0x648);
  uVar1 = *(undefined4 *)(param_2 + 0x65c);
  uVar2 = *(undefined4 *)(param_2 + 0x660);
  uVar3 = *(undefined4 *)(param_2 + 0x664);
  uVar4 = *(undefined4 *)(param_2 + 0x668);
  uVar5 = *(undefined4 *)(param_2 + 0x66c);
  uVar6 = *(undefined4 *)(param_2 + 0x670);
  uVar7 = *(undefined4 *)(param_2 + 0x674);
  *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(param_2 + 0x658);
  *(undefined4 *)(param_1 + 0x65c) = uVar1;
  *(undefined4 *)(param_1 + 0x660) = uVar2;
  *(undefined4 *)(param_1 + 0x664) = uVar3;
  *(undefined4 *)(param_1 + 0x668) = uVar4;
  *(undefined4 *)(param_1 + 0x66c) = uVar5;
  *(undefined4 *)(param_1 + 0x670) = uVar6;
  *(undefined4 *)(param_1 + 0x674) = uVar7;
  *(undefined8 *)(param_1 + 0x675) = *(undefined8 *)(param_2 + 0x675);
  *(undefined8 *)(param_1 + 0x680) = *(undefined8 *)(param_2 + 0x680);
  *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(param_2 + 0x690);
  *(undefined8 *)(param_1 + 0x688) = *(undefined8 *)(param_2 + 0x688);
  lVar20 = *(longlong *)(param_2 + 0x698);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x698);
      bVar19 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x698) = lVar20;
  uVar12 = *(undefined8 *)(param_2 + 0x6a8);
  uVar13 = *(undefined8 *)(param_2 + 0x6b0);
  uVar14 = *(undefined8 *)(param_2 + 0x6b8);
  uVar1 = *(undefined4 *)(param_2 + 0x6c0);
  uVar2 = *(undefined4 *)(param_2 + 0x6c4);
  uVar3 = *(undefined4 *)(param_2 + 0x6c8);
  uVar4 = *(undefined4 *)(param_2 + 0x6cc);
  uVar5 = *(undefined4 *)(param_2 + 0x6ca);
  uVar6 = *(undefined4 *)(param_2 + 0x6ce);
  uVar7 = *(undefined4 *)(param_2 + 0x6d2);
  uVar8 = *(undefined4 *)(param_2 + 0x6d6);
  *(undefined8 *)(param_1 + 0x6a0) = *(undefined8 *)(param_2 + 0x6a0);
  *(undefined8 *)(param_1 + 0x6a8) = uVar12;
  *(undefined8 *)(param_1 + 0x6b0) = uVar13;
  *(undefined8 *)(param_1 + 0x6b8) = uVar14;
  *(undefined4 *)(param_1 + 0x6c0) = uVar1;
  *(undefined4 *)(param_1 + 0x6c4) = uVar2;
  *(undefined4 *)(param_1 + 0x6c8) = uVar3;
  *(undefined4 *)(param_1 + 0x6cc) = uVar4;
  *(undefined4 *)(param_1 + 0x6ca) = uVar5;
  *(undefined4 *)(param_1 + 0x6ce) = uVar6;
  *(undefined4 *)(param_1 + 0x6d2) = uVar7;
  *(undefined4 *)(param_1 + 0x6d6) = uVar8;
  puVar21 = (undefined8 *)(param_2 + 0x6e0);
  puVar22 = (undefined8 *)(param_1 + 0x6e0);
  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  *(undefined2 *)(param_1 + 0x750) = *(undefined2 *)(param_2 + 0x750);
  *(undefined8 *)(param_1 + 0x748) = *(undefined8 *)(param_2 + 0x748);
  uVar1 = *(undefined4 *)(param_2 + 0x75c);
  uVar2 = *(undefined4 *)(param_2 + 0x760);
  uVar3 = *(undefined4 *)(param_2 + 0x764);
  uVar4 = *(undefined4 *)(param_2 + 0x768);
  uVar5 = *(undefined4 *)(param_2 + 0x76c);
  uVar6 = *(undefined4 *)(param_2 + 0x770);
  uVar7 = *(undefined4 *)(param_2 + 0x774);
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_2 + 0x758);
  *(undefined4 *)(param_1 + 0x75c) = uVar1;
  *(undefined4 *)(param_1 + 0x760) = uVar2;
  *(undefined4 *)(param_1 + 0x764) = uVar3;
  *(undefined4 *)(param_1 + 0x768) = uVar4;
  *(undefined4 *)(param_1 + 0x76c) = uVar5;
  *(undefined4 *)(param_1 + 0x770) = uVar6;
  *(undefined4 *)(param_1 + 0x774) = uVar7;
  *(undefined8 *)(param_1 + 0x775) = *(undefined8 *)(param_2 + 0x775);
  *(undefined8 *)(param_1 + 0x780) = *(undefined8 *)(param_2 + 0x780);
  *(undefined4 *)(param_1 + 0x790) = *(undefined4 *)(param_2 + 0x790);
  *(undefined8 *)(param_1 + 0x788) = *(undefined8 *)(param_2 + 0x788);
  lVar20 = *(longlong *)(param_2 + 0x798);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x798);
      bVar19 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x798) = lVar20;
  uVar12 = *(undefined8 *)(param_2 + 0x7a8);
  uVar13 = *(undefined8 *)(param_2 + 0x7b0);
  uVar14 = *(undefined8 *)(param_2 + 0x7b8);
  uVar1 = *(undefined4 *)(param_2 + 0x7c0);
  uVar2 = *(undefined4 *)(param_2 + 0x7c4);
  uVar3 = *(undefined4 *)(param_2 + 0x7c8);
  uVar4 = *(undefined4 *)(param_2 + 0x7cc);
  uVar5 = *(undefined4 *)(param_2 + 0x7ca);
  uVar6 = *(undefined4 *)(param_2 + 0x7ce);
  uVar7 = *(undefined4 *)(param_2 + 0x7d2);
  uVar8 = *(undefined4 *)(param_2 + 0x7d6);
  *(undefined8 *)(param_1 + 0x7a0) = *(undefined8 *)(param_2 + 0x7a0);
  *(undefined8 *)(param_1 + 0x7a8) = uVar12;
  *(undefined8 *)(param_1 + 0x7b0) = uVar13;
  *(undefined8 *)(param_1 + 0x7b8) = uVar14;
  *(undefined4 *)(param_1 + 0x7c0) = uVar1;
  *(undefined4 *)(param_1 + 0x7c4) = uVar2;
  *(undefined4 *)(param_1 + 0x7c8) = uVar3;
  *(undefined4 *)(param_1 + 0x7cc) = uVar4;
  *(undefined4 *)(param_1 + 0x7ca) = uVar5;
  *(undefined4 *)(param_1 + 0x7ce) = uVar6;
  *(undefined4 *)(param_1 + 0x7d2) = uVar7;
  *(undefined4 *)(param_1 + 0x7d6) = uVar8;
  puVar21 = (undefined8 *)(param_2 + 0x7e0);
  puVar22 = (undefined8 *)(param_1 + 0x7e0);
  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  *(undefined2 *)(param_1 + 0x850) = *(undefined2 *)(param_2 + 0x850);
  *(undefined8 *)(param_1 + 0x848) = *(undefined8 *)(param_2 + 0x848);
  uVar1 = *(undefined4 *)(param_2 + 0x85c);
  uVar2 = *(undefined4 *)(param_2 + 0x860);
  uVar3 = *(undefined4 *)(param_2 + 0x864);
  uVar4 = *(undefined4 *)(param_2 + 0x868);
  uVar5 = *(undefined4 *)(param_2 + 0x86c);
  uVar6 = *(undefined4 *)(param_2 + 0x870);
  uVar7 = *(undefined4 *)(param_2 + 0x874);
  *(undefined4 *)(param_1 + 0x858) = *(undefined4 *)(param_2 + 0x858);
  *(undefined4 *)(param_1 + 0x85c) = uVar1;
  *(undefined4 *)(param_1 + 0x860) = uVar2;
  *(undefined4 *)(param_1 + 0x864) = uVar3;
  *(undefined4 *)(param_1 + 0x868) = uVar4;
  *(undefined4 *)(param_1 + 0x86c) = uVar5;
  *(undefined4 *)(param_1 + 0x870) = uVar6;
  *(undefined4 *)(param_1 + 0x874) = uVar7;
  *(undefined8 *)(param_1 + 0x875) = *(undefined8 *)(param_2 + 0x875);
  *(undefined8 *)(param_1 + 0x880) = *(undefined8 *)(param_2 + 0x880);
  *(undefined4 *)(param_1 + 0x890) = *(undefined4 *)(param_2 + 0x890);
  *(undefined8 *)(param_1 + 0x888) = *(undefined8 *)(param_2 + 0x888);
  lVar20 = *(longlong *)(param_2 + 0x898);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x898);
    }
  }
  *(longlong *)(param_1 + 0x898) = lVar20;
  uVar12 = *(undefined8 *)(param_2 + 0x8a8);
  uVar13 = *(undefined8 *)(param_2 + 0x8b0);
  uVar14 = *(undefined8 *)(param_2 + 0x8b8);
  uVar15 = *(undefined8 *)(param_2 + 0x8c0);
  uVar16 = *(undefined8 *)(param_2 + 0x8c8);
  uVar1 = *(undefined4 *)(param_2 + 0x8ca);
  uVar2 = *(undefined4 *)(param_2 + 0x8ce);
  uVar3 = *(undefined4 *)(param_2 + 0x8d2);
  uVar4 = *(undefined4 *)(param_2 + 0x8d6);
  *(undefined8 *)(param_1 + 0x8a0) = *(undefined8 *)(param_2 + 0x8a0);
  *(undefined8 *)(param_1 + 0x8a8) = uVar12;
  *(undefined8 *)(param_1 + 0x8b0) = uVar13;
  *(undefined8 *)(param_1 + 0x8b8) = uVar14;
  *(undefined8 *)(param_1 + 0x8c0) = uVar15;
  *(undefined8 *)(param_1 + 0x8c8) = uVar16;
  *(undefined4 *)(param_1 + 0x8ca) = uVar1;
  *(undefined4 *)(param_1 + 0x8ce) = uVar2;
  *(undefined4 *)(param_1 + 0x8d2) = uVar3;
  *(undefined4 *)(param_1 + 0x8d6) = uVar4;
  puVar21 = (undefined8 *)(param_2 + 0x8e0);
  puVar22 = (undefined8 *)(param_1 + 0x8e0);
  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  *(undefined2 *)(param_1 + 0x950) = *(undefined2 *)(param_2 + 0x950);
  *(undefined8 *)(param_1 + 0x948) = *(undefined8 *)(param_2 + 0x948);
  uVar1 = *(undefined4 *)(param_2 + 0x95c);
  uVar2 = *(undefined4 *)(param_2 + 0x960);
  uVar3 = *(undefined4 *)(param_2 + 0x964);
  uVar4 = *(undefined4 *)(param_2 + 0x968);
  uVar5 = *(undefined4 *)(param_2 + 0x96c);
  uVar6 = *(undefined4 *)(param_2 + 0x970);
  uVar7 = *(undefined4 *)(param_2 + 0x974);
  uVar8 = *(undefined4 *)(param_2 + 0x978);
  uVar9 = *(undefined4 *)(param_2 + 0x97c);
  uVar10 = *(undefined4 *)(param_2 + 0x980);
  uVar11 = *(undefined4 *)(param_2 + 0x984);
  *(undefined4 *)(param_1 + 0x958) = *(undefined4 *)(param_2 + 0x958);
  *(undefined4 *)(param_1 + 0x95c) = uVar1;
  *(undefined4 *)(param_1 + 0x960) = uVar2;
  *(undefined4 *)(param_1 + 0x964) = uVar3;
  *(undefined4 *)(param_1 + 0x968) = uVar4;
  *(undefined4 *)(param_1 + 0x96c) = uVar5;
  *(undefined4 *)(param_1 + 0x970) = uVar6;
  *(undefined4 *)(param_1 + 0x974) = uVar7;
  *(undefined4 *)(param_1 + 0x978) = uVar8;
  *(undefined4 *)(param_1 + 0x97c) = uVar9;
  *(undefined4 *)(param_1 + 0x980) = uVar10;
  *(undefined4 *)(param_1 + 0x984) = uVar11;
  FUN_14123bd80(param_1 + 0x988,param_2 + 0x988);
  uVar12 = *(undefined8 *)(param_2 + 0x9d0);
  uVar13 = *(undefined8 *)(param_2 + 0x9d8);
  uVar14 = *(undefined8 *)(param_2 + 0x9e0);
  uVar15 = *(undefined8 *)(param_2 + 0x9e8);
  uVar1 = *(undefined4 *)(param_2 + 0x9f0);
  uVar2 = *(undefined4 *)(param_2 + 0x9f4);
  uVar3 = *(undefined4 *)(param_2 + 0x9f8);
  uVar4 = *(undefined4 *)(param_2 + 0x9fc);
  uVar5 = *(undefined4 *)(param_2 + 0xa01);
  uVar6 = *(undefined4 *)(param_2 + 0xa05);
  uVar7 = *(undefined4 *)(param_2 + 0xa09);
  *(undefined4 *)(param_1 + 0x9fd) = *(undefined4 *)(param_2 + 0x9fd);
  *(undefined4 *)(param_1 + 0xa01) = uVar5;
  *(undefined4 *)(param_1 + 0xa05) = uVar6;
  *(undefined4 *)(param_1 + 0xa09) = uVar7;
  *(undefined4 *)(param_1 + 0x9f0) = uVar1;
  *(undefined4 *)(param_1 + 0x9f4) = uVar2;
  *(undefined4 *)(param_1 + 0x9f8) = uVar3;
  *(undefined4 *)(param_1 + 0x9fc) = uVar4;
  *(undefined8 *)(param_1 + 0x9e0) = uVar14;
  *(undefined8 *)(param_1 + 0x9e8) = uVar15;
  *(undefined8 *)(param_1 + 0x9d0) = uVar12;
  *(undefined8 *)(param_1 + 0x9d8) = uVar13;
  *(undefined2 *)(param_1 + 0xa20) = *(undefined2 *)(param_2 + 0xa20);
  *(undefined8 *)(param_1 + 0xa18) = *(undefined8 *)(param_2 + 0xa18);
  uVar1 = *(undefined4 *)(param_2 + 0xa2c);
  uVar2 = *(undefined4 *)(param_2 + 0xa30);
  uVar3 = *(undefined4 *)(param_2 + 0xa34);
  uVar4 = *(undefined4 *)(param_2 + 0xa38);
  uVar5 = *(undefined4 *)(param_2 + 0xa3c);
  uVar6 = *(undefined4 *)(param_2 + 0xa40);
  uVar7 = *(undefined4 *)(param_2 + 0xa44);
  *(undefined4 *)(param_1 + 0xa28) = *(undefined4 *)(param_2 + 0xa28);
  *(undefined4 *)(param_1 + 0xa2c) = uVar1;
  *(undefined4 *)(param_1 + 0xa30) = uVar2;
  *(undefined4 *)(param_1 + 0xa34) = uVar3;
  *(undefined4 *)(param_1 + 0xa38) = uVar4;
  *(undefined4 *)(param_1 + 0xa3c) = uVar5;
  *(undefined4 *)(param_1 + 0xa40) = uVar6;
  *(undefined4 *)(param_1 + 0xa44) = uVar7;
  *(undefined8 *)(param_1 + 0xa45) = *(undefined8 *)(param_2 + 0xa45);
  *(undefined8 *)(param_1 + 0xa50) = *(undefined8 *)(param_2 + 0xa50);
  *(undefined4 *)(param_1 + 0xa60) = *(undefined4 *)(param_2 + 0xa60);
  *(undefined8 *)(param_1 + 0xa58) = *(undefined8 *)(param_2 + 0xa58);
  lVar20 = *(longlong *)(param_2 + 0xa68);
  if (DAT_14c950c29 == 1) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0xa68);
    }
  }
  *(longlong *)(param_1 + 0xa68) = lVar20;
  uVar12 = *(undefined8 *)(param_2 + 0xa78);
  uVar13 = *(undefined8 *)(param_2 + 0xa80);
  uVar14 = *(undefined8 *)(param_2 + 0xa88);
  uVar15 = *(undefined8 *)(param_2 + 0xa90);
  uVar16 = *(undefined8 *)(param_2 + 0xa98);
  uVar17 = *(undefined8 *)(param_2 + 0xa9a);
  uVar18 = *(undefined8 *)(param_2 + 0xaa2);
  *(undefined8 *)(param_1 + 0xa70) = *(undefined8 *)(param_2 + 0xa70);
  *(undefined8 *)(param_1 + 0xa78) = uVar12;
  *(undefined8 *)(param_1 + 0xa80) = uVar13;
  *(undefined8 *)(param_1 + 0xa88) = uVar14;
  *(undefined8 *)(param_1 + 0xa90) = uVar15;
  *(undefined8 *)(param_1 + 0xa98) = uVar16;
  *(undefined8 *)(param_1 + 0xa9a) = uVar17;
  *(undefined8 *)(param_1 + 0xaa2) = uVar18;
  puVar21 = (undefined8 *)(param_2 + 0xab0);
  puVar22 = (undefined8 *)(param_1 + 0xab0);
  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  *(undefined2 *)(param_1 + 0xb18) = *(undefined2 *)(param_2 + 0xb18);
  *(undefined8 *)(param_1 + 0xb10) = *(undefined8 *)(param_2 + 0xb10);
  return param_1;
}



// FUNCTION 148bef976 FUN_148bef976 body=48 status=ok
// SIG undefined FUN_148bef976(void)

undefined8 * FUN_148bef976(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6d3270;
  FUN_141798144();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bef9a6 FUN_148bef9a6 body=55 status=ok
// SIG undefined FUN_148bef9a6(void)

void FUN_148bef9a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6d90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6d90 = FUN_140002ddd(FUN_1465c9baf,uVar1,L"OakAnimNode_PlayerPuppet");
  }
  return;
}



// FUNCTION 148befa1a FUN_148befa1a body=93 status=ok
// SIG undefined FUN_148befa1a(void)

undefined1 FUN_148befa1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 8;
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
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148befaa0 FUN_148befaa0 body=59 status=ok
// SIG undefined FUN_148befaa0(void)

undefined8 FUN_148befaa0(longlong *param_1)

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



// FUNCTION 148befb8c FUN_148befb8c body=115 status=ok
// SIG undefined FUN_148befb8c(void)

undefined1 FUN_148befb8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_140bee9ec();
      FUN_146863806(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      FUN_1406fa324(param_2 + lVar1 + 0x28,param_3 + lVar1 + 0x28);
      lVar1 = lVar1 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148befc28 FUN_148befc28 body=59 status=ok
// SIG undefined FUN_148befc28(void)

undefined8 FUN_148befc28(longlong *param_1)

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



// FUNCTION 148befc6e FUN_148befc6e body=34 status=ok
// SIG undefined FUN_148befc6e(void)

void FUN_148befc6e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_148bf006a(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148befd32 FUN_148befd32 body=137 status=ok
// SIG undefined FUN_148befd32(void)

undefined8 FUN_148befd32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_140bee9ec();
      FUN_146863806(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      FUN_1406fa324(param_2 + lVar1 + 0x28,param_3 + lVar1 + 0x28);
      *(undefined4 *)(param_2 + lVar1 + 0x38) = *(undefined4 *)(param_3 + lVar1 + 0x38);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148befde4 FUN_148befde4 body=59 status=ok
// SIG undefined FUN_148befde4(void)

undefined8 FUN_148befde4(longlong *param_1)

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



// FUNCTION 148befe2a FUN_148befe2a body=34 status=ok
// SIG undefined FUN_148befe2a(void)

void FUN_148befe2a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148bf006a(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148befefa FUN_148befefa body=145 status=ok
// SIG undefined FUN_148befefa(void)

undefined8 FUN_148befefa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      *(undefined1 *)(param_2 + lVar3) = *(undefined1 *)(param_3 + lVar3);
      FUN_140bee9ec();
      FUN_146863806(param_2 + lVar3 + 0x18,param_3 + lVar3 + 0x18);
      lVar1 = param_3 + lVar3;
      lVar2 = param_2 + lVar3;
      FUN_1406fa324(lVar2 + 0x28,lVar1 + 0x28);
      *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(lVar1 + 0x40);
      lVar3 = lVar3 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148beffb4 FUN_148beffb4 body=59 status=ok
// SIG undefined FUN_148beffb4(void)

undefined8 FUN_148beffb4(longlong *param_1)

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



// FUNCTION 148befffa FUN_148befffa body=34 status=ok
// SIG undefined FUN_148befffa(void)

void FUN_148befffa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_148bf006a(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148bf006a FUN_148bf006a body=74 status=ok
// SIG undefined FUN_148bf006a(void)

void FUN_148bf006a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148bf015e FUN_148bf015e body=81 status=ok
// SIG undefined FUN_148bf015e(void)

undefined8 FUN_148bf015e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined4 *)(lVar2 + -8) = puVar1[4];
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      FUN_146863b7e();
      lVar6 = lVar6 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bf01d8 FUN_148bf01d8 body=59 status=ok
// SIG undefined FUN_148bf01d8(void)

undefined8 FUN_148bf01d8(longlong *param_1)

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



// FUNCTION 148bf0224 FUN_148bf0224 body=39 status=ok
// SIG undefined FUN_148bf0224(void)

void FUN_148bf0224(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_14128b0c2(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148bf02b4 FUN_148bf02b4 body=47 status=ok
// SIG undefined FUN_148bf02b4(void)

void FUN_148bf02b4(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148bf02fa FUN_148bf02fa body=67 status=ok
// SIG undefined FUN_148bf02fa(void)

undefined1 FUN_148bf02fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148bf0366 FUN_148bf0366 body=59 status=ok
// SIG undefined FUN_148bf0366(void)

undefined8 FUN_148bf0366(longlong *param_1)

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



// FUNCTION 148bf0404 FUN_148bf0404 body=51 status=ok
// SIG undefined FUN_148bf0404(void)

void FUN_148bf0404(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 148bf04d2 FUN_148bf04d2 body=59 status=ok
// SIG undefined FUN_148bf04d2(void)

undefined8 FUN_148bf04d2(longlong *param_1)

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



// FUNCTION 148bf05b6 FUN_148bf05b6 body=73 status=ok
// SIG undefined FUN_148bf05b6(void)

undefined8 FUN_148bf05b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_144a787a6();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bf0628 FUN_148bf0628 body=59 status=ok
// SIG undefined FUN_148bf0628(void)

undefined8 FUN_148bf0628(longlong *param_1)

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



// FUNCTION 148bf066e FUN_148bf066e body=38 status=ok
// SIG undefined FUN_148bf066e(void)

void FUN_148bf066e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148bf06e4 FUN_148bf06e4 body=99 status=ok
// SIG undefined FUN_148bf06e4(void)

void FUN_148bf06e4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xa0);
  *param_2 = &PTR_FUN_14b6d4230;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xf00000d0;
  *(undefined4 *)(param_2 + 10) = 0x3f800000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x14) = 0x3f800000;
  return;
}



// FUNCTION 148bf07c8 FUN_148bf07c8 body=83 status=ok
// SIG undefined FUN_148bf07c8(void)

undefined1 FUN_148bf07c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
    do {
      FUN_140d02432(param_2 + -0x50,param_3 + -0x50);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0xa8;
      param_2 = param_2 + 0xa8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bf0844 FUN_148bf0844 body=59 status=ok
// SIG undefined FUN_148bf0844(void)

undefined8 FUN_148bf0844(longlong *param_1)

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



// FUNCTION 148bf08f0 FUN_148bf08f0 body=29 status=ok
// SIG undefined FUN_148bf08f0(void)

undefined8 FUN_148bf08f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf092c FUN_148bf092c body=63 status=ok
// SIG undefined FUN_148bf092c(void)

undefined1 FUN_148bf092c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bf0af8(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 148bf0994 FUN_148bf0994 body=59 status=ok
// SIG undefined FUN_148bf0994(void)

undefined8 FUN_148bf0994(longlong *param_1)

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



// FUNCTION 148bf0af8 FUN_148bf0af8 body=85 status=ok
// SIG undefined FUN_148bf0af8(void)

longlong FUN_148bf0af8(longlong param_1,longlong param_2)

{
  FUN_140d02432(param_1 + 8,param_2 + 8);
  FUN_140d02432(param_1 + 0x58,param_2 + 0x58);
  FUN_140d02432(param_1 + 0xa8,param_2 + 0xa8);
  FUN_140d02432(param_1 + 0xf8,param_2 + 0xf8);
  return param_1;
}



// FUNCTION 148bf0b4e FUN_148bf0b4e body=37 status=ok
// SIG undefined FUN_148bf0b4e(void)

void FUN_148bf0b4e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x288);
  FUN_148bf0cb4(param_2);
  return;
}



// FUNCTION 148bf0ba0 FUN_148bf0ba0 body=63 status=ok
// SIG undefined FUN_148bf0ba0(void)

undefined1 FUN_148bf0ba0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bf0e4a(param_2,param_3);
    param_3 = param_3 + 0x288;
    param_2 = param_2 + 0x288;
  }
  return 1;
}



// FUNCTION 148bf0c08 FUN_148bf0c08 body=59 status=ok
// SIG undefined FUN_148bf0c08(void)

undefined8 FUN_148bf0c08(longlong *param_1)

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



// FUNCTION 148bf0cb4 FUN_148bf0cb4 body=376 status=ok
// SIG undefined FUN_148bf0cb4(void)

void FUN_148bf0cb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6d4530;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xf00000d0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xf00000d0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xf00000d0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xf00000d0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf00000d0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0xf00000d0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xf00000d0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0xf00000d0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  return;
}



// FUNCTION 148bf0e2c FUN_148bf0e2c body=29 status=ok
// SIG undefined FUN_148bf0e2c(void)

undefined8 FUN_148bf0e2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf0e4a FUN_148bf0e4a body=153 status=ok
// SIG undefined FUN_148bf0e4a(void)

longlong FUN_148bf0e4a(longlong param_1,longlong param_2)

{
  FUN_140d02432(param_1 + 8,param_2 + 8);
  FUN_140d02432(param_1 + 0x58,param_2 + 0x58);
  FUN_140d02432(param_1 + 0xa8,param_2 + 0xa8);
  FUN_140d02432(param_1 + 0xf8,param_2 + 0xf8);
  FUN_140d02432(param_1 + 0x148,param_2 + 0x148);
  FUN_140d02432(param_1 + 0x198,param_2 + 0x198);
  FUN_140d02432(param_1 + 0x1e8,param_2 + 0x1e8);
  FUN_140d02432(param_1 + 0x238,param_2 + 0x238);
  return param_1;
}



// FUNCTION 148bf0ee4 FUN_148bf0ee4 body=37 status=ok
// SIG undefined FUN_148bf0ee4(void)

void FUN_148bf0ee4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf8);
  FUN_148bf1078(param_2);
  return;
}



// FUNCTION 148bf0f36 FUN_148bf0f36 body=110 status=ok
// SIG undefined FUN_148bf0f36(void)

undefined8 FUN_148bf0f36(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
    do {
      FUN_140d02432(param_2 + -0xa0,param_3 + -0xa0);
      FUN_140d02432(param_2 + -0x50,param_3 + -0x50);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0xf8;
      param_2 = param_2 + 0xf8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bf0fcc FUN_148bf0fcc body=59 status=ok
// SIG undefined FUN_148bf0fcc(void)

undefined8 FUN_148bf0fcc(longlong *param_1)

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



// FUNCTION 148bf1078 FUN_148bf1078 body=141 status=ok
// SIG undefined FUN_148bf1078(void)

void FUN_148bf1078(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6d46b0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xf00000d0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xf00000d0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xf00000d0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  return;
}



// FUNCTION 148bf1106 FUN_148bf1106 body=29 status=ok
// SIG undefined FUN_148bf1106(void)

undefined8 FUN_148bf1106(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf1124 FUN_148bf1124 body=37 status=ok
// SIG undefined FUN_148bf1124(void)

void FUN_148bf1124(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf8);
  FUN_148bf12b8(param_2);
  return;
}



// FUNCTION 148bf1176 FUN_148bf1176 body=110 status=ok
// SIG undefined FUN_148bf1176(void)

undefined8 FUN_148bf1176(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
    do {
      FUN_140d02432(param_2 + -0xa0,param_3 + -0xa0);
      FUN_140d02432(param_2 + -0x50,param_3 + -0x50);
      FUN_140d02432(param_2,param_3);
      param_3 = param_3 + 0xf8;
      param_2 = param_2 + 0xf8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bf120c FUN_148bf120c body=59 status=ok
// SIG undefined FUN_148bf120c(void)

undefined8 FUN_148bf120c(longlong *param_1)

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



// FUNCTION 148bf12b8 FUN_148bf12b8 body=141 status=ok
// SIG undefined FUN_148bf12b8(void)

void FUN_148bf12b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6d4830;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xf00000d0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xf00000d0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xf00000d0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  return;
}



// FUNCTION 148bf1346 FUN_148bf1346 body=29 status=ok
// SIG undefined FUN_148bf1346(void)

undefined8 FUN_148bf1346(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf13ca FUN_148bf13ca body=75 status=ok
// SIG undefined FUN_148bf13ca(void)

undefined1 FUN_148bf13ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140d02432(param_2,param_3);
    FUN_140d02432(param_2 + 0x50,param_3 + 0x50);
    param_2 = param_2 + 0xa0;
    param_3 = param_3 + 0xa0;
  }
  return 1;
}



// FUNCTION 148bf143e FUN_148bf143e body=59 status=ok
// SIG undefined FUN_148bf143e(void)

undefined8 FUN_148bf143e(longlong *param_1)

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



// FUNCTION 148bf14e0 FUN_148bf14e0 body=109 status=ok
// SIG undefined FUN_148bf14e0(void)

void FUN_148bf14e0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xa0);
  *param_2 = &PTR_FUN_14b6d4c90;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xf00000d0;
  *(undefined4 *)(param_2 + 10) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xb) = 0x3f800000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_2 + 0x12) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x14) = 0x3f800000;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  return;
}



// FUNCTION 148bf15da FUN_148bf15da body=110 status=ok
// SIG undefined FUN_148bf15da(void)

undefined8 FUN_148bf15da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
    do {
      FUN_140d02432(param_2 + -0xa0,param_3 + -0xa0);
      FUN_140d02432(param_2 + -0x50,param_3 + -0x50);
      FUN_14110fdc4(param_2,param_3);
      param_3 = param_3 + 0xb8;
      param_2 = param_2 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bf1670 FUN_148bf1670 body=59 status=ok
// SIG undefined FUN_148bf1670(void)

undefined8 FUN_148bf1670(longlong *param_1)

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



// FUNCTION 148bf16bc FUN_148bf16bc body=57 status=ok
// SIG undefined FUN_148bf16bc(void)

void FUN_148bf16bc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x17) == '\x01') {
    *param_2 = &PTR_FUN_14b6d4c90;
    if (param_2[0x15] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x17) = 0;
  }
  return;
}



// FUNCTION 148bf1756 FUN_148bf1756 body=115 status=ok
// SIG undefined FUN_148bf1756(void)

void FUN_148bf1756(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,8);
    iVar2 = (int)(uVar1 / 0xa0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xa0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148bf17c9 FUN_148bf17c9 body=60 status=ok
// SIG undefined FUN_148bf17c9(void)

void FUN_148bf17c9(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148bf1806(param_1,param_2);
    param_1 = param_1 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return;
}



// FUNCTION 148bf1806 FUN_148bf1806 body=163 status=ok
// SIG undefined FUN_148bf1806(void)

undefined4 * FUN_148bf1806(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  FUN_144a7f96e(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  FUN_144a7f96e(param_1 + 0x16,param_2 + 0x16);
  uVar1 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x22] = param_2[0x22];
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = param_2[0x26];
  return param_1;
}



// FUNCTION 148bf1950 FUN_148bf1950 body=59 status=ok
// SIG undefined FUN_148bf1950(void)

undefined8 FUN_148bf1950(longlong *param_1)

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



// FUNCTION 148bf199c FUN_148bf199c body=57 status=ok
// SIG undefined FUN_148bf199c(void)

void FUN_148bf199c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x17) == '\x01') {
    *param_2 = &PTR_FUN_14b6d4c90;
    if (param_2[0x15] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x17) = 0;
  }
  return;
}



// FUNCTION 148bf1a18 FUN_148bf1a18 body=60 status=ok
// SIG undefined FUN_148bf1a18(void)

undefined8 * FUN_148bf1a18(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6d4c90;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf1a64 FUN_148bf1a64 body=155 status=ok
// SIG undefined FUN_148bf1a64(void)

void FUN_148bf1a64(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_148ceee5a(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf1b00 FUN_148bf1b00 body=37 status=ok
// SIG undefined FUN_148bf1b00(void)

void FUN_148bf1b00(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ceee4a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148bf1b26 FUN_148bf1b26 body=37 status=ok
// SIG undefined FUN_148bf1b26(void)

void FUN_148bf1b26(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ceee54();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148bf1b4c FUN_148bf1b4c body=37 status=ok
// SIG undefined FUN_148bf1b4c(void)

void FUN_148bf1b4c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ceee4e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148bf1b72 FUN_148bf1b72 body=155 status=ok
// SIG undefined FUN_148bf1b72(void)

void FUN_148bf1b72(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_148ceee22(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf1c12 FUN_148bf1c12 body=160 status=ok
// SIG undefined FUN_148bf1c12(void)

void FUN_148bf1c12(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x10e0))(param_1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf1cc2 FUN_148bf1cc2 body=47 status=ok
// SIG undefined FUN_148bf1cc2(void)

void FUN_148bf1cc2(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cba72c8);
                    /* WARNING: Could not recover jumptable at 0x000148bf1cee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148bf1d52 FUN_148bf1d52 body=158 status=ok
// SIG undefined FUN_148bf1d52(void)

void FUN_148bf1d52(undefined8 param_1,longlong param_2)

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
  FUN_148f05f14(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf1e38 FUN_148bf1e38 body=62 status=ok
// SIG undefined FUN_148bf1e38(void)

void FUN_148bf1e38(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 148bf1e78 FUN_148bf1e78 body=62 status=ok
// SIG undefined FUN_148bf1e78(void)

void FUN_148bf1e78(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 148bf1eb8 FUN_148bf1eb8 body=156 status=ok
// SIG undefined FUN_148bf1eb8(void)

void FUN_148bf1eb8(undefined8 param_1,longlong param_2)

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
  FUN_1441245a6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf1fd2 FUN_148bf1fd2 body=292 status=ok
// SIG undefined FUN_148bf1fd2(void)

void FUN_148bf1fd2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  uVar2 = FUN_14477b664(uStack_40);
  local_68 = FUN_14477b664(uVar2);
  local_60 = local_38;
  FUN_148d22998(param_1,&local_58,&local_70);
  plVar1 = (longlong *)*param_3;
  if (plVar1 != local_58) {
    *param_3 = (longlong)local_58;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_3 + 1) = local_50;
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148bf2134 FUN_148bf2134 body=238 status=ok
// SIG undefined FUN_148bf2134(void)

void FUN_148bf2134(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_148d217da(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf2228 FUN_148bf2228 body=158 status=ok
// SIG undefined FUN_148bf2228(void)

void FUN_148bf2228(undefined8 param_1,longlong param_2)

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
  FUN_148d22e94(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf22cc FUN_148bf22cc body=158 status=ok
// SIG undefined FUN_148bf22cc(void)

void FUN_148bf22cc(undefined8 param_1,longlong param_2)

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
  FUN_148d22d5e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf2372 FUN_148bf2372 body=241 status=ok
// SIG undefined FUN_148bf2372(void)

void FUN_148bf2372(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1441235f0(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf2468 FUN_148bf2468 body=158 status=ok
// SIG undefined FUN_148bf2468(void)

void FUN_148bf2468(undefined8 param_1,longlong param_2)

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
  thunk_FUN_141362b60(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf2508 FUN_148bf2508 body=155 status=ok
// SIG undefined FUN_148bf2508(void)

void FUN_148bf2508(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(undefined8 *)(param_1 + 0x840) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf25a8 FUN_148bf25a8 body=158 status=ok
// SIG undefined FUN_148bf25a8(void)

void FUN_148bf25a8(undefined8 param_1,longlong param_2)

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
  thunk_FUN_141362b60(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf2648 FUN_148bf2648 body=151 status=ok
// SIG undefined FUN_148bf2648(void)

void FUN_148bf2648(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141362b60(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf26e4 FUN_148bf26e4 body=158 status=ok
// SIG undefined FUN_148bf26e4(void)

void FUN_148bf26e4(undefined8 param_1,longlong param_2)

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
  FUN_148d22a9e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf27a2 FUN_148bf27a2 body=48 status=ok
// SIG undefined FUN_148bf27a2(void)

longlong FUN_148bf27a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x9a0;
  FUN_145967eaa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf27d2 FUN_148bf27d2 body=48 status=ok
// SIG undefined FUN_148bf27d2(void)

longlong FUN_148bf27d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x9a8;
  FUN_145967eaa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf2802 FUN_148bf2802 body=48 status=ok
// SIG undefined FUN_148bf2802(void)

longlong FUN_148bf2802(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x9b0;
  FUN_145967eaa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf2832 FUN_148bf2832 body=45 status=ok
// SIG undefined FUN_148bf2832(void)

longlong FUN_148bf2832(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf2866 FUN_148bf2866 body=48 status=ok
// SIG undefined FUN_148bf2866(void)

longlong FUN_148bf2866(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf289e FUN_148bf289e body=48 status=ok
// SIG undefined FUN_148bf289e(void)

longlong FUN_148bf289e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf28d6 FUN_148bf28d6 body=48 status=ok
// SIG undefined FUN_148bf28d6(void)

longlong FUN_148bf28d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf290e FUN_148bf290e body=48 status=ok
// SIG undefined FUN_148bf290e(void)

longlong FUN_148bf290e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc40;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf293e FUN_148bf293e body=48 status=ok
// SIG undefined FUN_148bf293e(void)

longlong FUN_148bf293e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc48;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf2976 FUN_148bf2976 body=48 status=ok
// SIG undefined FUN_148bf2976(void)

longlong FUN_148bf2976(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xed0;
  FUN_14080fede(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf29ae FUN_148bf29ae body=45 status=ok
// SIG undefined FUN_148bf29ae(void)

longlong FUN_148bf29ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1407600ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf29dc FUN_148bf29dc body=48 status=ok
// SIG undefined FUN_148bf29dc(void)

longlong FUN_148bf29dc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_1407600ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf2a0c FUN_148bf2a0c body=48 status=ok
// SIG undefined FUN_148bf2a0c(void)

longlong FUN_148bf2a0c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_1407600ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf2a3c FUN_148bf2a3c body=48 status=ok
// SIG undefined FUN_148bf2a3c(void)

longlong FUN_148bf2a3c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_1407600ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf2a6c FUN_148bf2a6c body=48 status=ok
// SIG undefined FUN_148bf2a6c(void)

longlong FUN_148bf2a6c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_140894b60(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf2af2 FUN_148bf2af2 body=48 status=ok
// SIG undefined FUN_148bf2af2(void)

longlong FUN_148bf2af2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_14144d176(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf2b32 FUN_148bf2b32 body=48 status=ok
// SIG undefined FUN_148bf2b32(void)

longlong FUN_148bf2b32(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_14144d176(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf2b62 FUN_148bf2b62 body=48 status=ok
// SIG undefined FUN_148bf2b62(void)

longlong FUN_148bf2b62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_14144d176(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148bf2c0c FUN_148bf2c0c body=59 status=ok
// SIG undefined FUN_148bf2c0c(void)

undefined8 FUN_148bf2c0c(longlong *param_1)

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



// FUNCTION 148bf2cac FUN_148bf2cac body=36 status=ok
// SIG undefined FUN_148bf2cac(void)

undefined8 FUN_148bf2cac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148bf2d90 FUN_148bf2d90 body=88 status=ok
// SIG undefined FUN_148bf2d90(void)

undefined1 FUN_148bf2d90(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bf2e10 FUN_148bf2e10 body=59 status=ok
// SIG undefined FUN_148bf2e10(void)

undefined8 FUN_148bf2e10(longlong *param_1)

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



// FUNCTION 148bf2e56 FUN_148bf2e56 body=32 status=ok
// SIG undefined FUN_148bf2e56(void)

void FUN_148bf2e56(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148bf2ec4 FUN_148bf2ec4 body=43 status=ok
// SIG undefined FUN_148bf2ec4(void)

undefined8 FUN_148bf2ec4(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 148bf2ef0 FUN_148bf2ef0 body=55 status=ok
// SIG undefined FUN_148bf2ef0(void)

void FUN_148bf2ef0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7030 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7030 = FUN_140002ddd(FUN_1465cae87,uVar1,L"GbxAudioGraphSettings_MusicSync");
  }
  return;
}



// FUNCTION 148bf2f38 FUN_148bf2f38 body=122 status=ok
// SIG undefined FUN_148bf2f38(void)

void FUN_148bf2f38(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x2a8);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[6] = 2;
  param_2[0x2c] = 0x800000000;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *param_2 = &PTR_FUN_14b6e21f0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  *(undefined4 *)((longlong)param_2 + 0x29c) = 8;
  param_2[0x54] = 0;
  param_2[0x55] = 0;
  return;
}



// FUNCTION 148bf304e FUN_148bf304e body=155 status=ok
// SIG undefined FUN_148bf304e(void)

undefined8 FUN_148bf304e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f6f99c(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x17c);
    uVar2 = *(undefined4 *)(param_3 + 0x180);
    uVar3 = *(undefined4 *)(param_3 + 0x184);
    *(undefined4 *)(param_2 + 0x178) = *(undefined4 *)(param_3 + 0x178);
    *(undefined4 *)(param_2 + 0x17c) = uVar1;
    *(undefined4 *)(param_2 + 0x180) = uVar2;
    *(undefined4 *)(param_2 + 0x184) = uVar3;
    *(undefined8 *)(param_2 + 0x188) = *(undefined8 *)(param_3 + 0x188);
    FUN_147f6f9f8(param_2 + 400,param_3 + 400);
    uVar1 = *(undefined4 *)(param_3 + 0x2b4);
    uVar2 = *(undefined4 *)(param_3 + 0x2b8);
    uVar3 = *(undefined4 *)(param_3 + 700);
    uVar4 = *(undefined4 *)(param_3 + 0x2c0);
    uVar5 = *(undefined4 *)(param_3 + 0x2c4);
    uVar6 = *(undefined4 *)(param_3 + 0x2c8);
    uVar7 = *(undefined4 *)(param_3 + 0x2cc);
    uVar8 = *(undefined4 *)(param_3 + 0x2d0);
    uVar9 = *(undefined4 *)(param_3 + 0x2d4);
    uVar10 = *(undefined4 *)(param_3 + 0x2d8);
    uVar11 = *(undefined4 *)(param_3 + 0x2dc);
    *(undefined4 *)(param_2 + 0x2b0) = *(undefined4 *)(param_3 + 0x2b0);
    *(undefined4 *)(param_2 + 0x2b4) = uVar1;
    *(undefined4 *)(param_2 + 0x2b8) = uVar2;
    *(undefined4 *)(param_2 + 700) = uVar3;
    *(undefined4 *)(param_2 + 0x2c0) = uVar4;
    *(undefined4 *)(param_2 + 0x2c4) = uVar5;
    *(undefined4 *)(param_2 + 0x2c8) = uVar6;
    *(undefined4 *)(param_2 + 0x2cc) = uVar7;
    *(undefined4 *)(param_2 + 0x2d0) = uVar8;
    *(undefined4 *)(param_2 + 0x2d4) = uVar9;
    *(undefined4 *)(param_2 + 0x2d8) = uVar10;
    *(undefined4 *)(param_2 + 0x2dc) = uVar11;
    param_2 = param_2 + 0x2e0;
    param_3 = param_3 + 0x2e0;
  }
  return 1;
}



// FUNCTION 148bf3112 FUN_148bf3112 body=59 status=ok
// SIG undefined FUN_148bf3112(void)

undefined8 FUN_148bf3112(longlong *param_1)

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



// FUNCTION 148bf31b4 FUN_148bf31b4 body=87 status=ok
// SIG undefined FUN_148bf31b4(void)

undefined8 * FUN_148bf31b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6e21f0;
  FUN_147f6f94a(param_1 + 0x32);
  *param_1 = &PTR_FUN_14acabc20;
  FUN_147f6f94a(param_1 + 0xb);
  FUN_140f9d4d6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x2e0);
  }
  return param_1;
}



// FUNCTION 148bf320c FUN_148bf320c body=55 status=ok
// SIG undefined FUN_148bf320c(void)

void FUN_148bf320c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7048 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7048 = FUN_140002ddd(FUN_1465caf1d,uVar1,L"GbxAudioGraphState_MusicSync");
  }
  return;
}



// FUNCTION 148bf3244 FUN_148bf3244 body=81 status=ok
// SIG undefined FUN_148bf3244(void)

void FUN_148bf3244(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x5c) == '\x01') {
    *param_1 = &PTR_FUN_14b6e21f0;
    FUN_147f6f94a(param_1 + 0x32);
    *param_1 = &PTR_FUN_14acabc20;
    FUN_147f6f94a(param_1 + 0xb);
    FUN_140f9d4d6(param_1);
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  return;
}



// FUNCTION 148bf32e0 FUN_148bf32e0 body=85 status=ok
// SIG undefined FUN_148bf32e0(void)

undefined8 FUN_148bf32e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_148bf3444(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bf335e FUN_148bf335e body=59 status=ok
// SIG undefined FUN_148bf335e(void)

undefined8 FUN_148bf335e(longlong *param_1)

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



// FUNCTION 148bf33fa FUN_148bf33fa body=74 status=ok
// SIG undefined FUN_148bf33fa(void)

undefined8 * FUN_148bf33fa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6e2428;
  FUN_1458ce261(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 148bf3444 FUN_148bf3444 body=95 status=ok
// SIG undefined FUN_148bf3444(void)

undefined8 * FUN_148bf3444(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458ce261(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148bf34a4(param_1,iVar1);
      FUN_148bf3517(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148bf34a4 FUN_148bf34a4 body=115 status=ok
// SIG undefined FUN_148bf34a4(void)

void FUN_148bf34a4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148bf3517 FUN_148bf3517 body=52 status=ok
// SIG undefined FUN_148bf3517(void)

void FUN_148bf3517(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148bf354c FUN_148bf354c body=62 status=ok
// SIG undefined FUN_148bf354c(void)

void FUN_148bf354c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 4) == '\x01') {
    *param_1 = &PTR_FUN_14b6e2428;
    FUN_1458ce261(param_1[1],*(undefined4 *)(param_1 + 2));
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 148bf35c8 FUN_148bf35c8 body=176 status=ok
// SIG undefined FUN_148bf35c8(void)

undefined8 FUN_148bf35c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
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
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + 0x28 + lVar10;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0xc) = uVar7;
      *(undefined4 *)(lVar2 + -8) = uVar8;
      *(undefined4 *)(lVar2 + -4) = uVar9;
      *(undefined4 *)(lVar2 + -0x20) = uVar3;
      *(undefined4 *)(lVar2 + -0x1c) = uVar4;
      *(undefined4 *)(lVar2 + -0x18) = uVar5;
      *(undefined4 *)(lVar2 + -0x14) = uVar6;
      FUN_1470d00c2(lVar2,lVar1 + 0x28);
      uVar3 = *(undefined4 *)(lVar1 + 0x3c);
      uVar4 = *(undefined4 *)(lVar1 + 0x40);
      uVar5 = *(undefined4 *)(lVar1 + 0x44);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x14) = uVar3;
      *(undefined4 *)(lVar2 + 0x18) = uVar4;
      *(undefined4 *)(lVar2 + 0x1c) = uVar5;
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x48);
      FUN_1406fa324(param_2 + lVar10 + 0x50,param_3 + lVar10 + 0x50);
      FUN_1486689b0(param_2 + lVar10 + 0x60,param_3 + lVar10 + 0x60);
      *(undefined1 *)(param_2 + lVar10 + 0x70) = *(undefined1 *)(param_3 + lVar10 + 0x70);
      lVar10 = lVar10 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bf36a0 FUN_148bf36a0 body=59 status=ok
// SIG undefined FUN_148bf36a0(void)

undefined8 FUN_148bf36a0(longlong *param_1)

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



// FUNCTION 148bf36e6 FUN_148bf36e6 body=32 status=ok
// SIG undefined FUN_148bf36e6(void)

void FUN_148bf36e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1411203da(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148bf3786 FUN_148bf3786 body=176 status=ok
// SIG undefined FUN_148bf3786(void)

undefined8 FUN_148bf3786(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
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
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + 0x28 + lVar10;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0xc) = uVar7;
      *(undefined4 *)(lVar2 + -8) = uVar8;
      *(undefined4 *)(lVar2 + -4) = uVar9;
      *(undefined4 *)(lVar2 + -0x20) = uVar3;
      *(undefined4 *)(lVar2 + -0x1c) = uVar4;
      *(undefined4 *)(lVar2 + -0x18) = uVar5;
      *(undefined4 *)(lVar2 + -0x14) = uVar6;
      FUN_1470d00c2(lVar2,lVar1 + 0x28);
      uVar3 = *(undefined4 *)(lVar1 + 0x3c);
      uVar4 = *(undefined4 *)(lVar1 + 0x40);
      uVar5 = *(undefined4 *)(lVar1 + 0x44);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x14) = uVar3;
      *(undefined4 *)(lVar2 + 0x18) = uVar4;
      *(undefined4 *)(lVar2 + 0x1c) = uVar5;
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x48);
      FUN_1406fa324(param_2 + lVar10 + 0x50,param_3 + lVar10 + 0x50);
      FUN_1486689b0(param_2 + lVar10 + 0x60,param_3 + lVar10 + 0x60);
      *(undefined1 *)(param_2 + lVar10 + 0x70) = *(undefined1 *)(param_3 + lVar10 + 0x70);
      lVar10 = lVar10 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bf385e FUN_148bf385e body=59 status=ok
// SIG undefined FUN_148bf385e(void)

undefined8 FUN_148bf385e(longlong *param_1)

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



// FUNCTION 148bf38a4 FUN_148bf38a4 body=32 status=ok
// SIG undefined FUN_148bf38a4(void)

void FUN_148bf38a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_1411203da(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148bf39b6 FUN_148bf39b6 body=78 status=ok
// SIG undefined FUN_148bf39b6(void)

undefined1 FUN_148bf39b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bf3a2c FUN_148bf3a2c body=59 status=ok
// SIG undefined FUN_148bf3a2c(void)

undefined8 FUN_148bf3a2c(longlong *param_1)

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



// FUNCTION 148bf3a72 FUN_148bf3a72 body=32 status=ok
// SIG undefined FUN_148bf3a72(void)

void FUN_148bf3a72(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148bf3ae0 FUN_148bf3ae0 body=43 status=ok
// SIG undefined FUN_148bf3ae0(void)

undefined8 FUN_148bf3ae0(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 148bf3b0c FUN_148bf3b0c body=55 status=ok
// SIG undefined FUN_148bf3b0c(void)

void FUN_148bf3b0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7368 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7368 = FUN_140002ddd(FUN_1465cb761,uVar1,L"OakBodyNodeSettings_EchoLog");
  }
  return;
}



// FUNCTION 148bf3b78 FUN_148bf3b78 body=97 status=ok
// SIG undefined FUN_148bf3b78(void)

undefined1 FUN_148bf3b78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    FUN_148bf3cde(param_2 + 0x68,param_3 + 0x68);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148bf3c02 FUN_148bf3c02 body=59 status=ok
// SIG undefined FUN_148bf3c02(void)

undefined8 FUN_148bf3c02(longlong *param_1)

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



// FUNCTION 148bf3c4e FUN_148bf3c4e body=65 status=ok
// SIG undefined FUN_148bf3c4e(void)

void FUN_148bf3c4e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    *param_2 = &PTR_FUN_14b6e4650;
    if (param_2[0x1d] != 0) {
      FUN_1400020a8();
    }
    FUN_1412218b2(param_2);
    *(undefined1 *)(param_2 + 0x1f) = 0;
  }
  return;
}



// FUNCTION 148bf3cde FUN_148bf3cde body=122 status=ok
// SIG undefined FUN_148bf3cde(void)

void * FUN_148bf3cde(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x88);
    *(int *)((longlong)param_1 + 0x88) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
    }
    else {
      FUN_148bf3d58(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x80);
        if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148bf3d58 FUN_148bf3d58 body=104 status=ok
// SIG undefined FUN_148bf3d58(void)

void FUN_148bf3d58(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_148bf3dc0(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 148bf3dc0 FUN_148bf3dc0 body=142 status=ok
// SIG undefined FUN_148bf3dc0(void)

void FUN_148bf3dc0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 148bf3e50 FUN_148bf3e50 body=73 status=ok
// SIG undefined FUN_148bf3e50(void)

undefined8 * FUN_148bf3e50(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6e4650;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1412218b2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 148bf3e9a FUN_148bf3e9a body=55 status=ok
// SIG undefined FUN_148bf3e9a(void)

void FUN_148bf3e9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7380 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7380 = FUN_140002ddd(FUN_1465cb7f7,uVar1,L"OakBodyNodeState_EchoLog");
  }
  return;
}



// FUNCTION 148bf3f26 FUN_148bf3f26 body=63 status=ok
// SIG undefined FUN_148bf3f26(void)

undefined1 FUN_148bf3f26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bf404e(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 148bf3f8e FUN_148bf3f8e body=59 status=ok
// SIG undefined FUN_148bf3f8e(void)

undefined8 FUN_148bf3f8e(longlong *param_1)

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



// FUNCTION 148bf3fda FUN_148bf3fda body=38 status=ok
// SIG undefined FUN_148bf3fda(void)

void FUN_148bf3fda(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_1411203da(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 148bf404e FUN_148bf404e body=170 status=ok
// SIG undefined FUN_148bf404e(void)

longlong FUN_148bf404e(longlong param_1,longlong param_2)

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
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  FUN_1406fa324(param_1 + 0x50,param_2 + 0x50);
  FUN_1486689b0(param_1 + 0x60,param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  lVar9 = *(longlong *)(param_2 + 0x78);
  if (DAT_14c950c29 == '\x01') {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x78);
    }
  }
  *(longlong *)(param_1 + 0x78) = lVar9;
  uVar8 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = uVar8;
  puVar10 = (undefined8 *)(param_2 + 0x90);
  puVar11 = (undefined8 *)(param_1 + 0x90);
  for (lVar9 = 0xd; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  return param_1;
}



// FUNCTION 148bf412e FUN_148bf412e body=63 status=ok
// SIG undefined FUN_148bf412e(void)

undefined1 FUN_148bf412e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bf4272(param_2,param_3);
    param_3 = param_3 + 0x1b0;
    param_2 = param_2 + 0x1b0;
  }
  return 1;
}



// FUNCTION 148bf4196 FUN_148bf4196 body=59 status=ok
// SIG undefined FUN_148bf4196(void)

undefined8 FUN_148bf4196(longlong *param_1)

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



// FUNCTION 148bf41e2 FUN_148bf41e2 body=65 status=ok
// SIG undefined FUN_148bf41e2(void)

void FUN_148bf41e2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x36) == '\x01') {
    *param_2 = &PTR_FUN_14b6e4ee0;
    if (param_2[0x33] != 0) {
      FUN_1400020a8();
    }
    FUN_1410a3b96(param_2);
    *(undefined1 *)(param_2 + 0x36) = 0;
  }
  return;
}



// FUNCTION 148bf4272 FUN_148bf4272 body=108 status=ok
// SIG undefined FUN_148bf4272(void)

longlong FUN_148bf4272(longlong param_1,longlong param_2)

{
  FUN_1486666e8();
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  FUN_148668cae(param_1 + 0x70,param_2 + 0x70);
  FUN_148668d0c(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  FUN_148bf42de(param_1 + 0x118,param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  return param_1;
}



// FUNCTION 148bf42de FUN_148bf42de body=122 status=ok
// SIG undefined FUN_148bf42de(void)

void * FUN_148bf42de(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x88);
    *(int *)((longlong)param_1 + 0x88) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
    }
    else {
      FUN_148bf4358(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x80);
        if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148bf4358 FUN_148bf4358 body=104 status=ok
// SIG undefined FUN_148bf4358(void)

void FUN_148bf4358(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_148bf43c0(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 148bf43c0 FUN_148bf43c0 body=142 status=ok
// SIG undefined FUN_148bf43c0(void)

void FUN_148bf43c0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 148bf4450 FUN_148bf4450 body=73 status=ok
// SIG undefined FUN_148bf4450(void)

undefined8 * FUN_148bf4450(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6e4ee0;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_1410a3b96(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 148bf449a FUN_148bf449a body=55 status=ok
// SIG undefined FUN_148bf449a(void)

void FUN_148bf449a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba73b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba73b0 = FUN_140002ddd(FUN_1465cb923,uVar1,L"OakBodyNodeState_EridiumEncasing");
  }
  return;
}



// FUNCTION 148bf4502 FUN_148bf4502 body=63 status=ok
// SIG undefined FUN_148bf4502(void)

undefined1 FUN_148bf4502(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bf4624(param_2,param_3);
    param_3 = param_3 + 0x5f8;
    param_2 = param_2 + 0x5f8;
  }
  return 1;
}



// FUNCTION 148bf4562 FUN_148bf4562 body=59 status=ok
// SIG undefined FUN_148bf4562(void)

undefined8 FUN_148bf4562(longlong *param_1)

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



// FUNCTION 148bf45ae FUN_148bf45ae body=40 status=ok
// SIG undefined FUN_148bf45ae(void)

void FUN_148bf45ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x5f8) == '\x01') {
    FUN_145880cc2(param_2);
    *(undefined1 *)(param_2 + 0x5f8) = 0;
  }
  return;
}



// FUNCTION 148bf4624 FUN_148bf4624 body=630 status=ok
// SIG undefined FUN_148bf4624(void)

longlong FUN_148bf4624(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  FUN_14866da7a(param_1 + 0x40,param_2 + 0x40);
  if ((*(longlong *)(param_1 + 0x70) != *(longlong *)(param_2 + 0x70)) ||
     (*(int *)(param_1 + 0x78) != *(int *)(param_2 + 0x78))) {
    *(longlong *)(param_1 + 0x70) = *(longlong *)(param_2 + 0x70);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  *(undefined2 *)(param_1 + 0x88) = *(undefined2 *)(param_2 + 0x88);
  lVar12 = *(longlong *)(param_2 + 0x90);
  if (DAT_14c950c29 == 1) {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0x90);
    }
  }
  bVar11 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x90) = lVar12;
  lVar12 = *(longlong *)(param_2 + 0x98);
  if ((bVar11 & 1) != 0) {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0x98);
      bVar11 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x98) = lVar12;
  lVar12 = *(longlong *)(param_2 + 0xa0);
  if ((bVar11 & 1) != 0) {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0xa0);
    }
  }
  *(longlong *)(param_1 + 0xa0) = lVar12;
  FUN_140efa230(param_1 + 0xa8,param_2 + 0xa8);
  memcpy((void *)(param_1 + 0x250),(void *)(param_2 + 0x250),0xd8);
  FUN_148bf489a(param_1 + 0x328,param_2 + 0x328);
  puVar13 = (undefined8 *)(param_2 + 0x378);
  puVar14 = (undefined8 *)(param_1 + 0x378);
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  lVar12 = *(longlong *)(param_2 + 0x3f8);
  if (DAT_14c950c29 == 1) {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0x3f8);
    }
  }
  bVar11 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x3f8) = lVar12;
  lVar12 = *(longlong *)(param_2 + 0x400);
  if ((bVar11 & 1) != 0) {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0x400);
      bVar11 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x400) = lVar12;
  lVar12 = *(longlong *)(param_2 + 0x408);
  if ((bVar11 & 1) != 0) {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0x408);
    }
  }
  *(longlong *)(param_1 + 0x408) = lVar12;
  FUN_140efa230(param_1 + 0x410,param_2 + 0x410);
  uVar1 = *(undefined4 *)(param_2 + 0x5bc);
  uVar2 = *(undefined4 *)(param_2 + 0x5c0);
  uVar3 = *(undefined4 *)(param_2 + 0x5c4);
  *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(param_2 + 0x5b8);
  *(undefined4 *)(param_1 + 0x5bc) = uVar1;
  *(undefined4 *)(param_1 + 0x5c0) = uVar2;
  *(undefined4 *)(param_1 + 0x5c4) = uVar3;
  lVar12 = *(longlong *)(param_2 + 0x5c8);
  if (DAT_14c950c29 == 1) {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0x5c8);
    }
  }
  *(longlong *)(param_1 + 0x5c8) = lVar12;
  uVar8 = *(undefined8 *)(param_2 + 0x5d8);
  uVar9 = *(undefined8 *)(param_2 + 0x5e0);
  uVar10 = *(undefined8 *)(param_2 + 0x5e8);
  *(undefined8 *)(param_1 + 0x5d0) = *(undefined8 *)(param_2 + 0x5d0);
  *(undefined8 *)(param_1 + 0x5d8) = uVar8;
  *(undefined8 *)(param_1 + 0x5e0) = uVar9;
  *(undefined8 *)(param_1 + 0x5e8) = uVar10;
  *(undefined8 *)(param_1 + 0x5ed) = *(undefined8 *)(param_2 + 0x5ed);
  return param_1;
}



// FUNCTION 148bf489a FUN_148bf489a body=122 status=ok
// SIG undefined FUN_148bf489a(void)

longlong FUN_148bf489a(longlong param_1,longlong param_2)

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
    FUN_148bf4914(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148bf4914 FUN_148bf4914 body=122 status=ok
// SIG undefined FUN_148bf4914(void)

undefined8 * FUN_148bf4914(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145880d8e(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14607dd42(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0xd8);
    }
  }
  return param_1;
}



// FUNCTION 148bf498e FUN_148bf498e body=50 status=ok
// SIG undefined FUN_148bf498e(void)

longlong FUN_148bf498e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x68;
  FUN_145880cc2(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x5f8);
  }
  return param_1;
}



// FUNCTION 148bf49f0 FUN_148bf49f0 body=63 status=ok
// SIG undefined FUN_148bf49f0(void)

undefined1 FUN_148bf49f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148bf4b34(param_2,param_3);
    param_3 = param_3 + 0x5e0;
    param_2 = param_2 + 0x5e0;
  }
  return 1;
}



// FUNCTION 148bf4a58 FUN_148bf4a58 body=59 status=ok
// SIG undefined FUN_148bf4a58(void)

undefined8 FUN_148bf4a58(longlong *param_1)

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



// FUNCTION 148bf4aa4 FUN_148bf4aa4 body=40 status=ok
// SIG undefined FUN_148bf4aa4(void)

void FUN_148bf4aa4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x5e0) == '\x01') {
    FUN_145a5b122(param_2);
    *(undefined1 *)(param_2 + 0x5e0) = 0;
  }
  return;
}



// FUNCTION 148bf4b34 FUN_148bf4b34 body=532 status=ok
// SIG undefined FUN_148bf4b34(void)

longlong FUN_148bf4b34(longlong param_1,longlong param_2)

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
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  FUN_1486692c2();
  uVar5 = *(undefined4 *)(param_2 + 0x1bc);
  uVar6 = *(undefined4 *)(param_2 + 0x1c0);
  uVar7 = *(undefined4 *)(param_2 + 0x1c4);
  uVar8 = *(undefined4 *)(param_2 + 0x1c8);
  uVar9 = *(undefined4 *)(param_2 + 0x1cc);
  uVar10 = *(undefined4 *)(param_2 + 0x1d0);
  uVar11 = *(undefined4 *)(param_2 + 0x1d4);
  uVar12 = *(undefined4 *)(param_2 + 0x1d8);
  uVar13 = *(undefined4 *)(param_2 + 0x1dc);
  uVar14 = *(undefined4 *)(param_2 + 0x1e0);
  uVar15 = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1bc) = uVar5;
  *(undefined4 *)(param_1 + 0x1c0) = uVar6;
  *(undefined4 *)(param_1 + 0x1c4) = uVar7;
  *(undefined4 *)(param_1 + 0x1c8) = uVar8;
  *(undefined4 *)(param_1 + 0x1cc) = uVar9;
  *(undefined4 *)(param_1 + 0x1d0) = uVar10;
  *(undefined4 *)(param_1 + 0x1d4) = uVar11;
  *(undefined4 *)(param_1 + 0x1d8) = uVar12;
  *(undefined4 *)(param_1 + 0x1dc) = uVar13;
  *(undefined4 *)(param_1 + 0x1e0) = uVar14;
  *(undefined4 *)(param_1 + 0x1e4) = uVar15;
  FUN_148669332(param_1 + 0x1e8,param_2 + 0x1e8);
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x208);
  uVar5 = *(undefined4 *)(param_2 + 0x1fc);
  uVar6 = *(undefined4 *)(param_2 + 0x200);
  uVar7 = *(undefined4 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x1fc) = uVar5;
  *(undefined4 *)(param_1 + 0x200) = uVar6;
  *(undefined4 *)(param_1 + 0x204) = uVar7;
  uVar3 = *(undefined8 *)(param_2 + 0x210);
  lVar16 = *(longlong *)(param_2 + 0x218);
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x210) = uVar3;
  *(longlong *)(param_1 + 0x218) = lVar16;
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
  memcpy((void *)(param_1 + 0x220),(void *)(param_2 + 0x220),0x191);
  FUN_140305dfe(param_1 + 0x3b8,param_2 + 0x3b8);
  uVar5 = *(undefined4 *)(param_2 + 0x3cc);
  uVar6 = *(undefined4 *)(param_2 + 0x3d0);
  uVar7 = *(undefined4 *)(param_2 + 0x3d4);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_2 + 0x3c8);
  *(undefined4 *)(param_1 + 0x3cc) = uVar5;
  *(undefined4 *)(param_1 + 0x3d0) = uVar6;
  *(undefined4 *)(param_1 + 0x3d4) = uVar7;
  *(undefined1 *)(param_1 + 0x3d8) = *(undefined1 *)(param_2 + 0x3d8);
  *(undefined1 *)(param_1 + 0x3e0) = *(undefined1 *)(param_2 + 0x3e0);
  FUN_140b177d4(param_1 + 1000,param_2 + 1000);
  *(undefined1 *)(param_1 + 0x408) = *(undefined1 *)(param_2 + 0x408);
  FUN_140b177d4(param_1 + 0x410,param_2 + 0x410);
  *(undefined1 *)(param_1 + 0x430) = *(undefined1 *)(param_2 + 0x430);
  FUN_140b177d4(param_1 + 0x438,param_2 + 0x438);
  *(undefined1 *)(param_1 + 0x458) = *(undefined1 *)(param_2 + 0x458);
  FUN_140b177d4(param_1 + 0x460,param_2 + 0x460);
  puVar17 = (undefined8 *)(param_2 + 0x480);
  puVar18 = (undefined8 *)(param_1 + 0x480);
  for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  FUN_14023fa1a(param_1 + 0x4e0,param_2 + 0x4e0);
  puVar17 = (undefined8 *)(param_2 + 0x530);
  puVar18 = (undefined8 *)(param_1 + 0x530);
  for (lVar16 = 0xd; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  *(undefined1 *)(param_1 + 0x598) = *(undefined1 *)(param_2 + 0x598);
  *(undefined8 *)(param_1 + 0x5b0) = *(undefined8 *)(param_2 + 0x5b0);
  uVar3 = *(undefined8 *)(param_2 + 0x5a8);
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_2 + 0x5a0);
  *(undefined8 *)(param_1 + 0x5a8) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x5c0);
  *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_2 + 0x5b8);
  *(undefined8 *)(param_1 + 0x5c0) = uVar3;
  *(undefined8 *)(param_1 + 0x5c8) = *(undefined8 *)(param_2 + 0x5c8);
  *(undefined8 *)(param_1 + 0x5d0) = *(undefined8 *)(param_2 + 0x5d0);
  return param_1;
}



// FUNCTION 148bf4d4a FUN_148bf4d4a body=83 status=ok
// SIG undefined FUN_148bf4d4a(void)

void FUN_148bf4d4a(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_2 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *param_2 = &PTR_FUN_14b6e32f0;
  FUN_1457126de(param_2 + 7);
  param_2[0x35] = 0x3f41ebc83e371c54;
  param_2[0x36] = &DAT_3f8000003f800000;
  return;
}



// FUNCTION 148bf4dc6 FUN_148bf4dc6 body=282 status=ok
// SIG undefined FUN_148bf4dc6(void)

undefined8 FUN_148bf4dc6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  
  if (param_4 != 0) {
    lVar17 = 0;
    do {
      lVar1 = param_3 + lVar17;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + 0x28 + lVar17;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0xc) = uVar7;
      *(undefined4 *)(lVar2 + -8) = uVar8;
      *(undefined4 *)(lVar2 + -4) = uVar9;
      *(undefined4 *)(lVar2 + -0x20) = uVar3;
      *(undefined4 *)(lVar2 + -0x1c) = uVar4;
      *(undefined4 *)(lVar2 + -0x18) = uVar5;
      *(undefined4 *)(lVar2 + -0x14) = uVar6;
      FUN_1470d00c2(lVar2,lVar1 + 0x28);
      uVar3 = *(undefined4 *)(lVar1 + 0x3c);
      uVar4 = *(undefined4 *)(lVar1 + 0x40);
      uVar5 = *(undefined4 *)(lVar1 + 0x44);
      uVar6 = *(undefined4 *)(lVar1 + 0x48);
      uVar7 = *(undefined4 *)(lVar1 + 0x4c);
      uVar8 = *(undefined4 *)(lVar1 + 0x50);
      uVar9 = *(undefined4 *)(lVar1 + 0x54);
      uVar10 = *(undefined4 *)(lVar1 + 0x58);
      uVar11 = *(undefined4 *)(lVar1 + 0x5c);
      uVar12 = *(undefined4 *)(lVar1 + 0x60);
      uVar13 = *(undefined4 *)(lVar1 + 100);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x14) = uVar3;
      *(undefined4 *)(lVar2 + 0x18) = uVar4;
      *(undefined4 *)(lVar2 + 0x1c) = uVar5;
      *(undefined4 *)(lVar2 + 0x20) = uVar6;
      *(undefined4 *)(lVar2 + 0x24) = uVar7;
      *(undefined4 *)(lVar2 + 0x28) = uVar8;
      *(undefined4 *)(lVar2 + 0x2c) = uVar9;
      *(undefined4 *)(lVar2 + 0x30) = uVar10;
      *(undefined4 *)(lVar2 + 0x34) = uVar11;
      *(undefined4 *)(lVar2 + 0x38) = uVar12;
      *(undefined4 *)(lVar2 + 0x3c) = uVar13;
      *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(lVar1 + 0x68);
      lVar2 = param_2 + 0x70 + lVar17;
      lVar1 = param_3 + lVar17;
      FUN_14115e0ba(lVar2,lVar1 + 0x70);
      *(undefined4 *)(lVar2 + 0x88) = *(undefined4 *)(lVar1 + 0xf8);
      FUN_14115e0ba(param_2 + lVar17 + 0x100,param_3 + lVar17 + 0x100);
      uVar14 = *(undefined8 *)(lVar1 + 400);
      uVar15 = *(undefined8 *)(lVar1 + 0x198);
      uVar16 = *(undefined8 *)(lVar1 + 0x1a0);
      *(undefined8 *)(lVar2 + 0x118) = *(undefined8 *)(lVar1 + 0x188);
      *(undefined8 *)(lVar2 + 0x120) = uVar14;
      *(undefined8 *)(lVar2 + 0x128) = uVar15;
      *(undefined8 *)(lVar2 + 0x130) = uVar16;
      uVar14 = *(undefined8 *)(lVar1 + 0x1b0);
      *(undefined8 *)(lVar2 + 0x138) = *(undefined8 *)(lVar1 + 0x1a8);
      *(undefined8 *)(lVar2 + 0x140) = uVar14;
      lVar17 = lVar17 + 0x1b8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bf4f08 FUN_148bf4f08 body=59 status=ok
// SIG undefined FUN_148bf4f08(void)

undefined8 FUN_148bf4f08(longlong *param_1)

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



// FUNCTION 148bf4f54 FUN_148bf4f54 body=59 status=ok
// SIG undefined FUN_148bf4f54(void)

void FUN_148bf4f54(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x37) == '\x01') {
    *param_2 = &PTR_FUN_14b6e32f0;
    FUN_14585a28e(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x37) = 0;
  }
  return;
}



// FUNCTION 148bf500c FUN_148bf500c body=89 status=ok
// SIG undefined FUN_148bf500c(void)

undefined8 FUN_148bf500c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    FUN_148bf516a(param_2 + 0x68,param_3 + 0x68);
    *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(param_3 + 0xf8);
    param_2 = param_2 + 0x100;
    param_3 = param_3 + 0x100;
  }
  return 1;
}



// FUNCTION 148bf508e FUN_148bf508e body=59 status=ok
// SIG undefined FUN_148bf508e(void)

undefined8 FUN_148bf508e(longlong *param_1)

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



// FUNCTION 148bf50da FUN_148bf50da body=65 status=ok
// SIG undefined FUN_148bf50da(void)

void FUN_148bf50da(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *param_2 = &PTR_FUN_14b6e5070;
    if (param_2[0x1d] != 0) {
      FUN_1400020a8();
    }
    FUN_1412218b2(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148bf516a FUN_148bf516a body=122 status=ok
// SIG undefined FUN_148bf516a(void)

void * FUN_148bf516a(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x88);
    *(int *)((longlong)param_1 + 0x88) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
    }
    else {
      FUN_148bf51e4(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x80);
        if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148bf51e4 FUN_148bf51e4 body=104 status=ok
// SIG undefined FUN_148bf51e4(void)

void FUN_148bf51e4(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_148bf524c(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 148bf524c FUN_148bf524c body=142 status=ok
// SIG undefined FUN_148bf524c(void)

void FUN_148bf524c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 148bf52dc FUN_148bf52dc body=57 status=ok
// SIG undefined FUN_148bf52dc(void)

void FUN_148bf52dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba7410 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba7410 = FUN_140002ddd(FUN_1465cbb0e,uVar1,L"OakBodyNodeState_GlideModifier");
  }
  return;
}



// FUNCTION 148bf5346 FUN_148bf5346 body=105 status=ok
// SIG undefined FUN_148bf5346(void)

undefined8 FUN_148bf5346(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      memcpy((void *)(param_2 + 0x18),(void *)(param_3 + 0x18),0x94);
      param_3 = param_3 + 0xe0;
      param_2 = param_2 + 0xe0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bf53d8 FUN_148bf53d8 body=59 status=ok
// SIG undefined FUN_148bf53d8(void)

undefined8 FUN_148bf53d8(longlong *param_1)

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



// FUNCTION 148bf5424 FUN_148bf5424 body=38 status=ok
// SIG undefined FUN_148bf5424(void)

void FUN_148bf5424(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 148bf55c8 FUN_148bf55c8 body=89 status=ok
// SIG undefined FUN_148bf55c8(void)

undefined8 FUN_148bf55c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    FUN_148bf5726(param_2 + 0x68,param_3 + 0x68);
    *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(param_3 + 0xf8);
    param_2 = param_2 + 0x100;
    param_3 = param_3 + 0x100;
  }
  return 1;
}



// FUNCTION 148bf564a FUN_148bf564a body=59 status=ok
// SIG undefined FUN_148bf564a(void)

undefined8 FUN_148bf564a(longlong *param_1)

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



// FUNCTION 148bf5696 FUN_148bf5696 body=65 status=ok
// SIG undefined FUN_148bf5696(void)

void FUN_148bf5696(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *param_2 = &PTR_FUN_14b6e5120;
    if (param_2[0x1d] != 0) {
      FUN_1400020a8();
    }
    FUN_1412218b2(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148bf5726 FUN_148bf5726 body=122 status=ok
// SIG undefined FUN_148bf5726(void)

void * FUN_148bf5726(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x88);
    *(int *)((longlong)param_1 + 0x88) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
    }
    else {
      FUN_148bf57a0(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x80);
        if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148bf57a0 FUN_148bf57a0 body=104 status=ok
// SIG undefined FUN_148bf57a0(void)

void FUN_148bf57a0(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_148bf5808(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 148bf5808 FUN_148bf5808 body=142 status=ok
// SIG undefined FUN_148bf5808(void)

void FUN_148bf5808(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 148bf591e FUN_148bf591e body=78 status=ok
// SIG undefined FUN_148bf591e(void)

undefined1 FUN_148bf591e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148bf5994 FUN_148bf5994 body=59 status=ok
// SIG undefined FUN_148bf5994(void)

undefined8 FUN_148bf5994(longlong *param_1)

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



// FUNCTION 148bf59da FUN_148bf59da body=32 status=ok
// SIG undefined FUN_148bf59da(void)

void FUN_148bf59da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148bf5ac4 FUN_148bf5ac4 body=97 status=ok
// SIG undefined FUN_148bf5ac4(void)

undefined1 FUN_148bf5ac4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486666e8(param_2,param_3);
    FUN_148bf5c2a(param_2 + 0x68,param_3 + 0x68);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148bf5b4e FUN_148bf5b4e body=59 status=ok
// SIG undefined FUN_148bf5b4e(void)

undefined8 FUN_148bf5b4e(longlong *param_1)

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



// FUNCTION 148bf5b9a FUN_148bf5b9a body=65 status=ok
// SIG undefined FUN_148bf5b9a(void)

void FUN_148bf5b9a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    *param_2 = &PTR_FUN_14b6e45a0;
    if (param_2[0x1d] != 0) {
      FUN_1400020a8();
    }
    FUN_1412218b2(param_2);
    *(undefined1 *)(param_2 + 0x1f) = 0;
  }
  return;
}



// FUNCTION 148bf5c2a FUN_148bf5c2a body=122 status=ok
// SIG undefined FUN_148bf5c2a(void)

void * FUN_148bf5c2a(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x88);
    *(int *)((longlong)param_1 + 0x88) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
    }
    else {
      FUN_148bf5ca4(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x80);
        if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148bf5ca4 FUN_148bf5ca4 body=104 status=ok
// SIG undefined FUN_148bf5ca4(void)

void FUN_148bf5ca4(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_148bf5d0c(param_1,0,iVar3,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x8c) = param_3;
  return;
}



// FUNCTION 148bf5d0c FUN_148bf5d0c body=142 status=ok
// SIG undefined FUN_148bf5d0c(void)

void FUN_148bf5d0c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 148bf5e16 FUN_148bf5e16 body=59 status=ok
// SIG undefined FUN_148bf5e16(void)

undefined8 FUN_148bf5e16(longlong *param_1)

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



// FUNCTION 148bf5eb8 FUN_148bf5eb8 body=229 status=ok
// SIG undefined FUN_148bf5eb8(void)

void FUN_148bf5eb8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_148d2f078(param_1,&local_38,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf5fa4 FUN_148bf5fa4 body=155 status=ok
// SIG undefined FUN_148bf5fa4(void)

void FUN_148bf5fa4(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_14413c988(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf6046 FUN_148bf6046 body=232 status=ok
// SIG undefined FUN_148bf6046(void)

void FUN_148bf6046(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
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
  FUN_14413c228(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf6136 FUN_148bf6136 body=232 status=ok
// SIG undefined FUN_148bf6136(void)

void FUN_148bf6136(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
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
  FUN_14413c10e(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf6226 FUN_148bf6226 body=324 status=ok
// SIG undefined FUN_148bf6226(void)

void FUN_148bf6226(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14413c0da(local_18,local_20,local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf6372 FUN_148bf6372 body=232 status=ok
// SIG undefined FUN_148bf6372(void)

void FUN_148bf6372(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
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
  FUN_14413c44c(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf6462 FUN_148bf6462 body=232 status=ok
// SIG undefined FUN_148bf6462(void)

void FUN_148bf6462(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
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
  FUN_14413c342(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf654c FUN_148bf654c body=148 status=ok
// SIG undefined FUN_148bf654c(void)

void FUN_148bf654c(undefined8 param_1,longlong param_2)

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
  FUN_14413c556(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf65e2 FUN_148bf65e2 body=148 status=ok
// SIG undefined FUN_148bf65e2(void)

void FUN_148bf65e2(undefined8 param_1,longlong param_2)

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
  FUN_14413c75c(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf6678 FUN_148bf6678 body=148 status=ok
// SIG undefined FUN_148bf6678(void)

void FUN_148bf6678(undefined8 param_1,longlong param_2)

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
  FUN_14413c872(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf673c FUN_148bf673c body=165 status=ok
// SIG undefined FUN_148bf673c(void)

void FUN_148bf673c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_148cf13a6(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf67e2 FUN_148bf67e2 body=151 status=ok
// SIG undefined FUN_148bf67e2(void)

void FUN_148bf67e2(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x668))(param_1,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf687a FUN_148bf687a body=103 status=ok
// SIG undefined FUN_148bf687a(void)

void FUN_148bf687a(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(param_2 + 4);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  uVar1 = FUN_14477b072(local_38,DAT_14cba76a8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf691c FUN_148bf691c body=280 status=ok
// SIG undefined FUN_148bf691c(void)

void FUN_148bf691c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40 = 0;
  local_38 = 0x401d;
  local_30 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_50 = local_38;
  local_48 = 0;
  uVar1 = FUN_148cfbe58(local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf6a36 FUN_148bf6a36 body=355 status=ok
// SIG undefined FUN_148bf6a36(void)

void FUN_148bf6a36(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  local_30 = 0x401d;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_50 = local_30;
  local_48 = 0;
  FUN_148cfbb3a(local_20,&local_58,local_3c);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf6ba6 FUN_148bf6ba6 body=156 status=ok
// SIG undefined FUN_148bf6ba6(void)

void FUN_148bf6ba6(undefined8 param_1,longlong param_2)

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
  FUN_148cfc3e6(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf6c9e FUN_148bf6c9e body=209 status=ok
// SIG undefined FUN_148bf6c9e(void)

void FUN_148bf6c9e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar1);
  local_40 = local_28;
  FUN_148cfcbcc(param_1,&local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf6d70 FUN_148bf6d70 body=296 status=ok
// SIG undefined FUN_148bf6d70(void)

void FUN_148bf6d70(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar1);
  local_40 = local_28;
  FUN_1440e0406(param_1,local_20,&local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf6e9a FUN_148bf6e9a body=250 status=ok
// SIG undefined FUN_148bf6e9a(void)

void FUN_148bf6e9a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0x401d;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar3 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar3 = &local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xb8) == *plVar3) {
    plVar2 = plVar1;
    if (plVar1 == (longlong *)0x0) {
      plVar2 = &local_30;
    }
    if (*(int *)(param_1 + 0xc0) == (int)plVar2[1]) goto LAB_148bf6f53;
  }
  plVar2 = &local_30;
  if (plVar1 != (longlong *)0x0) {
    plVar2 = plVar1;
  }
  *(longlong *)(param_1 + 0xb8) = *plVar3;
  *(int *)(param_1 + 0xc0) = (int)plVar2[1];
  *(undefined8 *)(param_1 + 200) = 0;
LAB_148bf6f53:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf6fac FUN_148bf6fac body=62 status=ok
// SIG undefined FUN_148bf6fac(void)

void FUN_148bf6fac(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 148bf6ff0 FUN_148bf6ff0 body=61 status=ok
// SIG undefined FUN_148bf6ff0(void)

void FUN_148bf6ff0(undefined8 param_1,undefined1 param_2)

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



// FUNCTION 148bf702e FUN_148bf702e body=66 status=ok
// SIG undefined FUN_148bf702e(void)

void FUN_148bf702e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



// FUNCTION 148bf7076 FUN_148bf7076 body=7 status=ok
// SIG undefined FUN_148bf7076(void)

void FUN_148bf7076(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 148bf7082 FUN_148bf7082 body=62 status=ok
// SIG undefined FUN_148bf7082(void)

void FUN_148bf7082(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 148bf70c2 FUN_148bf70c2 body=7 status=ok
// SIG undefined FUN_148bf70c2(void)

void FUN_148bf70c2(undefined8 param_1)

{
  FUN_1447cd2ec(param_1,0);
  return;
}



// FUNCTION 148bf70ca FUN_148bf70ca body=204 status=ok
// SIG undefined FUN_148bf70ca(void)

void FUN_148bf70ca(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148ccc6f6(param_1,plVar1);
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf7198 FUN_148bf7198 body=204 status=ok
// SIG undefined FUN_148bf7198(void)

void FUN_148bf7198(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148ccc7cc(param_1,plVar1);
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf7266 FUN_148bf7266 body=217 status=ok
// SIG undefined FUN_148bf7266(void)

void FUN_148bf7266(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined4 local_11c;
  undefined4 local_7c;
  undefined4 local_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  memset(local_120,0,0x100);
  local_50 = 0xffffffff;
  local_11c = 0x3f800000;
  local_7c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_120);
  }
  puVar1 = local_120;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cd0436(param_1,puVar1);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf7344 FUN_148bf7344 body=37 status=ok
// SIG undefined FUN_148bf7344(void)

void FUN_148bf7344(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1459e1ac0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148bf736e FUN_148bf736e body=37 status=ok
// SIG undefined FUN_148bf736e(void)

void FUN_148bf736e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ccecae();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148bf7398 FUN_148bf7398 body=37 status=ok
// SIG undefined FUN_148bf7398(void)

void FUN_148bf7398(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148cccb92();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148bf73c2 FUN_148bf73c2 body=37 status=ok
// SIG undefined FUN_148bf73c2(void)

void FUN_148bf73c2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148cce7c6();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148bf7438 FUN_148bf7438 body=126 status=ok
// SIG undefined FUN_148bf7438(void)

void FUN_148bf7438(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_23 = param_5;
  local_30 = param_2;
  local_28 = param_3;
  local_24 = param_4;
  uVar1 = FUN_14477b072(param_1 + -0x3a30,DAT_14cba7c50);
  (**(code **)(*(longlong *)(param_1 + -0x3a30) + 0x248))(param_1 + -0x3a30,uVar1,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf74c4 FUN_148bf74c4 body=427 status=ok
// SIG undefined FUN_148bf74c4(void)

void FUN_148bf74c4(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_34 != 0;
  (**(code **)(*param_1 + 0xb08))(param_1,local_28,local_2c,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf7670 FUN_148bf7670 body=92 status=ok
// SIG undefined FUN_148bf7670(void)

void FUN_148bf7670(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cba7c60);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf76ce FUN_148bf76ce body=160 status=ok
// SIG undefined FUN_148bf76ce(void)

void FUN_148bf76ce(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xa18))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf7770 FUN_148bf7770 body=201 status=ok
// SIG undefined FUN_148bf7770(void)

void FUN_148bf7770(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  local_50 = *param_2;
  local_48 = *(undefined4 *)(param_2 + 1);
  local_40 = param_2[2];
  uVar1 = FUN_14477b664(param_2[3]);
  local_38 = FUN_14477b664(uVar1);
  local_30 = param_2[4];
  FUN_144a82394(&local_28,param_2 + 5);
  uVar1 = FUN_14477b072(param_1,DAT_14cba7c70);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_50);
  if ((local_28 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(local_28 + 0x50));
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf783a FUN_148bf783a body=208 status=ok
// SIG undefined FUN_148bf783a(void)

void FUN_148bf783a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined8 local_44;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong lStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_44 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  lStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x9c8))(param_1,local_48);
  if ((lStack_20 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lStack_20 + 0x50));
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf7912 FUN_148bf7912 body=112 status=ok
// SIG undefined FUN_148bf7912(void)

void FUN_148bf7912(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_28 = param_3;
  uVar1 = FUN_14477b072(param_1 + -0x3a30,DAT_14cba7cb0);
  (**(code **)(*(longlong *)(param_1 + -0x3a30) + 0x248))(param_1 + -0x3a30,uVar1,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf7984 FUN_148bf7984 body=241 status=ok
// SIG undefined FUN_148bf7984(void)

void FUN_148bf7984(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xb00))(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf7a76 FUN_148bf7a76 body=199 status=ok
// SIG undefined FUN_148bf7a76(void)

void FUN_148bf7a76(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0xad0))(param_1,local_1c);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"DEBUG_Server_AddOvershield_Validate");
  }
  else {
    (**(code **)(*param_1 + 0xad8))(param_1,local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf7b5a FUN_148bf7b5a body=155 status=ok
// SIG undefined FUN_148bf7b5a(void)

void FUN_148bf7b5a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x928))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf7c14 FUN_148bf7c14 body=404 status=ok
// SIG undefined FUN_148bf7c14(void)

void FUN_148bf7c14(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_138 [44];
  int local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_a8 = 0;
  local_a0 = 0x8000000000;
  uStack_98 = 0xffffffff;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0xf;
  local_48 = 1;
  local_44 = 0;
  uStack_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_10c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_10c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_10c);
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = &local_108;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cce140(param_1,puVar1,local_10c != 0);
  FUN_140368b56(&local_108);
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf7dae FUN_148bf7dae body=158 status=ok
// SIG undefined FUN_148bf7dae(void)

void FUN_148bf7dae(undefined8 param_1,longlong param_2)

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
  FUN_148cd040e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf7e54 FUN_148bf7e54 body=189 status=ok
// SIG undefined FUN_148bf7e54(void)

void FUN_148bf7e54(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ccf5e4(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf7f66 FUN_148bf7f66 body=139 status=ok
// SIG undefined FUN_148bf7f66(void)

void FUN_148bf7f66(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_1403de7ba(local_38,param_1 + 0x3ed8);
  FUN_140cc1bde(param_3,local_38);
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf800e FUN_148bf800e body=139 status=ok
// SIG undefined FUN_148bf800e(void)

void FUN_148bf800e(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_1403de7ba(local_38,param_1 + 0x3ef8);
  FUN_140cc1bde(param_3,local_38);
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf810a FUN_148bf810a body=96 status=ok
// SIG undefined FUN_148bf810a(void)

void FUN_148bf810a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cccbf0(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf8172 FUN_148bf8172 body=303 status=ok
// SIG undefined FUN_148bf8172(void)

void FUN_148bf8172(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [4];
  
  local_48[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  plVar3 = local_48 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ccf5a4(param_1,plVar3,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf82a6 FUN_148bf82a6 body=37 status=ok
// SIG undefined FUN_148bf82a6(void)

void FUN_148bf82a6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1440abf52();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148bf82cc FUN_148bf82cc body=371 status=ok
// SIG undefined FUN_148bf82cc(void)

void FUN_148bf82cc(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_4c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar3 = &local_4c;
  if (puVar4 != (undefined4 *)0x0) {
    puVar3 = puVar4;
  }
  puVar2 = local_48;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = &local_50;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148ccd40c(param_1,puVar2,puVar3,puVar4);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf8440 FUN_148bf8440 body=37 status=ok
// SIG undefined FUN_148bf8440(void)

void FUN_148bf8440(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148cce7de();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148bf846c FUN_148bf846c body=189 status=ok
// SIG undefined FUN_148bf846c(void)

void FUN_148bf846c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148ccf62e(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf854a FUN_148bf854a body=154 status=ok
// SIG undefined FUN_148bf854a(void)

void FUN_148bf854a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1407ae6f0(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148bf862a FUN_148bf862a body=37 status=ok
// SIG undefined FUN_148bf862a(void)

void FUN_148bf862a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148cce8a8();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148bf8654 FUN_148bf8654 body=37 status=ok
// SIG undefined FUN_148bf8654(void)

void FUN_148bf8654(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148cce7f2();
  *param_3 = uVar1;
  return;
}


