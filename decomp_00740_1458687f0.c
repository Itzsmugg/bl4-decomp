// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1458687f0 FUN_1458687f0 body=90 status=ok
// SIG undefined FUN_1458687f0(void)

void FUN_1458687f0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145868862 FUN_145868862 body=38 status=ok
// SIG undefined FUN_145868862(void)

undefined8 FUN_145868862(undefined8 param_1,int param_2)

{
  FUN_1415d1680();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14586888e FUN_14586888e body=40 status=ok
// SIG undefined FUN_14586888e(void)

undefined8 FUN_14586888e(undefined8 param_1,int param_2)

{
  FUN_1458688b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458688b6 FUN_1458688b6 body=71 status=ok
// SIG undefined FUN_1458688b6(void)

void FUN_1458688b6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bac69a0;
  param_1[0x4a] = &PTR_LAB_14bac6da0;
  param_1[0x76] = &PTR_LAB_14bac6dc0;
  FUN_1458688fe(param_1 + 0x77);
  FUN_140731102(param_1);
  return;
}



// FUNCTION 1458688fe FUN_1458688fe body=71 status=ok
// SIG undefined FUN_1458688fe(void)

void FUN_1458688fe(longlong *param_1)

{
  FUN_145868945(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_145868945(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145868945 FUN_145868945 body=43 status=ok
// SIG undefined FUN_145868945(void)

void FUN_145868945(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1490e2a0e(param_1);
    param_1 = param_1 + 0x440;
  }
  return;
}



// FUNCTION 14586897a FUN_14586897a body=105 status=ok
// SIG undefined FUN_14586897a(void)

void FUN_14586897a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3b8090;
  FUN_1458689e3(param_1[0x62],*(undefined4 *)(param_1 + 99));
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  FUN_145868a28(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_14060fc84(param_1);
  return;
}



// FUNCTION 1458689e3 FUN_1458689e3 body=69 status=ok
// SIG undefined FUN_1458689e3(void)

void FUN_1458689e3(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    bVar1 = DAT_14cb26569;
    do {
      if ((*plVar2 != 0) && ((bVar1 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(*plVar2 + 0x50));
        bVar1 = DAT_14cb26569;
      }
      plVar2 = plVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145868a28 FUN_145868a28 body=85 status=ok
// SIG undefined FUN_145868a28(void)

void FUN_145868a28(longlong param_1,int param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x18);
    bVar1 = DAT_14cb26569;
    do {
      puVar2[-1] = 0;
      *puVar2 = 0xffffffffffffffff;
      if ((puVar2[-2] != 0) && ((bVar1 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(puVar2[-2] + 0x50));
        bVar1 = DAT_14cb26569;
      }
      puVar2 = puVar2 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145868a7e FUN_145868a7e body=232 status=ok
// SIG undefined FUN_145868a7e(void)

void FUN_145868a7e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140115e24();
  FUN_1404d4e8e(param_1 + 0x15f8,param_1);
  FUN_1407107b6(param_1 + 0xcf8,param_1);
  FUN_14071060c(param_1 + 0x1518,param_1);
  for (lVar1 = param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_145868b36;
  }
  FUN_14071053a(param_1 + 0x1420,param_1);
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 == 0) {
      local_20 = 0;
      goto LAB_145868b16;
    }
  }
  else {
    FUN_1456cec3c(param_1);
  }
  local_20 = param_1 + 0x4a0;
LAB_145868b16:
  local_28 = param_1;
  FUN_140e343d0(param_1 + 0xdc8);
  FUN_141270908(param_1 + 0x22a0,param_1);
LAB_145868b36:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145868b68 FUN_145868b68 body=40 status=ok
// SIG undefined FUN_145868b68(void)

undefined8 FUN_145868b68(undefined8 param_1,int param_2)

{
  FUN_145868b90();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145868b90 FUN_145868b90 body=100 status=ok
// SIG undefined FUN_145868b90(void)

void FUN_145868b90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5b4230;
  param_1[0x72] = &PTR_FUN_14b5b4870;
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 0x72);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145868c00 FUN_145868c00 body=676 status=ok
// SIG undefined FUN_145868c00(void)

undefined8 * FUN_145868c00(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = DAT_14cb717f0;
  FUN_140486538(param_2,DAT_14cb717f0);
  FUN_14048646a(param_2 + 0x20,uVar1,0,0);
  FUN_145868ea4(param_1,param_2);
  *param_1 = &PTR_FUN_14b7380d0;
  param_1[0x72] = &PTR_FUN_14b738730;
  param_1[0x73] = &PTR_FUN_14b738750;
  param_1[0x74] = &PTR_FUN_14b738780;
  param_1[0x75] = &PTR_FUN_14b738790;
  param_1[0x76] = &PTR_FUN_14b738800;
  param_1[0x77] = &PTR_FUN_14b738830;
  param_1[0x78] = &PTR_FUN_14b738860;
  param_1[0x7f] = &PTR_FUN_14b738910;
  param_1[0x80] = &PTR_FUN_14b738980;
  param_1[0x81] = &PTR_FUN_14b7389f0;
  param_1[0x82] = &PTR_FUN_14b738a20;
  param_1[0x83] = &PTR_FUN_14b738a60;
  param_1[0x84] = &PTR_FUN_14b738b00;
  param_1[0x85] = &PTR_FUN_14b738b20;
  param_1[0x89] = &PTR_FUN_14b738b40;
  param_1[0x8a] = &PTR_FUN_14b738c00;
  param_1[0x8b] = &PTR_FUN_14b738c80;
  param_1[0x8c] = &PTR_FUN_14b738cd0;
  param_1[0x8d] = &PTR_FUN_14b738d10;
  param_1[0x8e] = &PTR_FUN_14b738d30;
  param_1[0x8f] = &PTR_FUN_14b738d50;
  param_1[0x90] = &PTR_FUN_14b738d70;
  param_1[0x91] = &PTR_FUN_14b738d90;
  param_1[0x92] = &PTR_FUN_14b738db0;
  param_1[0x93] = &PTR_FUN_14b738dd0;
  param_1[0x94] = &PTR_FUN_14b738df0;
  param_1[0x95] = &PTR_FUN_14b738e10;
  param_1[0x96] = &PTR_FUN_14b738e30;
  param_1[0x34b] = &PTR_FUN_14b738e50;
  param_1[0x34c] = &PTR_FUN_14b738e90;
  param_1[0x34d] = &PTR_FUN_14b738eb0;
  param_1[0x350] = &PTR_FUN_14b738ef0;
  param_1[0x351] = &PTR_FUN_14b738f20;
  param_1[0x38c] = &PTR_FUN_14b738f40;
  param_1[0x38d] = &PTR_FUN_14b738f80;
  param_1[0x38e] = 0;
  *(undefined4 *)(param_1 + 0x38f) = 0xffffffff;
  param_1[0x392] = 0;
  param_1[0x390] = 0;
  param_1[0x391] = 0;
  FUN_1411c3dfa(param_1 + 0x394);
  param_1[0x394] = &PTR_FUN_14b738fe0;
  param_1[0x3d8] = 0;
  param_1[0x3d9] = 0;
  param_1[0x3da] = 0;
  param_1[0x3db] = 0;
  param_1[0x3dc] = 0;
  param_1[0x3dd] = 0;
  param_1[0x3de] = 0;
  param_1[0x3df] = 0;
  return param_1;
}



// FUNCTION 145868ea4 FUN_145868ea4 body=1705 status=ok
// SIG undefined FUN_145868ea4(void)

undefined8 * FUN_145868ea4(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  ulonglong local_30;
  
  uVar2 = DAT_14cb717f0;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140486538(param_2,DAT_14cb717f0);
  FUN_14048646a(param_2 + 0x20,uVar2,0,0);
  FUN_140651a3e(param_1,param_2);
  param_1[0x34e] = 0;
  param_1[0x34f] = 0;
  *param_1 = &PTR_FUN_14b1113c0;
  param_1[0x72] = &PTR_FUN_14b111a20;
  param_1[0x73] = &PTR_FUN_14b111a40;
  param_1[0x74] = &PTR_FUN_14b111a70;
  param_1[0x75] = &PTR_FUN_14b111a80;
  param_1[0x76] = &PTR_FUN_14b111af0;
  param_1[0x77] = &PTR_FUN_14b111b20;
  param_1[0x78] = &PTR_FUN_14b111b50;
  param_1[0x7f] = &PTR_FUN_14b111c00;
  param_1[0x80] = &PTR_FUN_14b111c70;
  param_1[0x81] = &PTR_FUN_14b111ce0;
  param_1[0x82] = &PTR_FUN_14b111d10;
  param_1[0x83] = &PTR_FUN_14b111d50;
  param_1[0x84] = &PTR_FUN_14b111df0;
  param_1[0x85] = &PTR_FUN_14b111e10;
  param_1[0x89] = &PTR_FUN_14b111e30;
  param_1[0x8a] = &PTR_FUN_14b111ef0;
  param_1[0x8b] = &PTR_FUN_14b111f70;
  param_1[0x8c] = &PTR_FUN_14b111fc0;
  param_1[0x8d] = &PTR_FUN_14b112000;
  param_1[0x8e] = &PTR_FUN_14b112020;
  param_1[0x8f] = &PTR_FUN_14b112040;
  param_1[0x90] = &PTR_FUN_14b112060;
  param_1[0x91] = &PTR_FUN_14b112080;
  param_1[0x92] = &PTR_FUN_14b1120a0;
  param_1[0x93] = &PTR_FUN_14b1120c0;
  param_1[0x94] = &PTR_FUN_14b1120e0;
  param_1[0x95] = &PTR_FUN_14b112100;
  param_1[0x96] = &PTR_FUN_14b112120;
  param_1[0x34b] = &PTR_FUN_14b112140;
  param_1[0x34c] = &PTR_FUN_14b112180;
  param_1[0x34d] = &PTR_FUN_14b1121a0;
  param_1[0x350] = &PTR_FUN_14b1121e0;
  param_1[0x351] = &PTR_FUN_14b112210;
  param_1[0x352] = 0;
  *(undefined1 *)(param_1 + 0x353) = 0;
  param_1[0x35e] = 0;
  *(undefined4 *)(param_1 + 0x35f) = 0;
  param_1[0x35a] = 0;
  param_1[0x35b] = 0;
  param_1[0x358] = 0;
  param_1[0x359] = 0;
  param_1[0x356] = 0;
  param_1[0x357] = 0;
  param_1[0x354] = 0;
  param_1[0x355] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1afc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1b04) = 0;
  param_1[0x362] = 0;
  *(undefined4 *)(param_1 + 0x363) = 0;
  param_1[0x364] = 0;
  param_1[0x365] = 0;
  param_1[0x366] = 0;
  param_1[0x367] = 0;
  param_1[0x368] = 0;
  param_1[0x369] = 0;
  *(undefined1 *)(param_1 + 0x36a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x36b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1b5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x36c) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x1b64) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x36e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ba4) = 0;
  param_1[0x375] = DAT_14caa8578;
  param_1[0x37d] = 0;
  *(undefined4 *)(param_1 + 0x37e) = 0;
  param_1[0x376] = 0;
  param_1[0x377] = 0;
  param_1[0x378] = 0;
  param_1[0x379] = 0;
  param_1[0x37a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1bfc) = 0;
  param_1[0x381] = 0;
  *(undefined4 *)(param_1 + 0x382) = 0;
  param_1[0x387] = 0;
  *(undefined4 *)(param_1 + 0x388) = 0;
  param_1[899] = 0;
  *(undefined1 *)(param_1 + 900) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c44) = 2;
  param_1[0x38a] = 0;
  param_1[0x38b] = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  plVar1 = param_1 + 0x354;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf9 | 2;
  FUN_140cbebe8(param_1 + 6,0);
  uVar2 = DAT_14cacfcd0;
  uVar3 = FUN_1400b5618();
  local_70 = 0;
  local_78 = 1;
  lVar4 = FUN_14048696c(param_1,uVar2,uVar3,uVar3);
  if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
    *plVar1 = lVar4;
    if (lVar4 != 0) goto LAB_14586927c;
  }
  else {
    FUN_1456cec3c(lVar4);
    *plVar1 = lVar4;
LAB_14586927c:
    *(undefined8 *)(lVar4 + 0x640) = 0x4208000042b00000;
    (**(code **)(*(longlong *)param_1[0x354] + 0x728))((longlong *)param_1[0x354],DAT_14cad0ec8,1);
    *(undefined1 *)(param_1[0x354] + 0x2eb) = 0;
    lVar4 = param_1[0x354];
    if (DAT_14c950c29 == '\x01') {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *plVar1;
      }
    }
    param_1[0x39] = lVar4;
  }
  uVar2 = DAT_14cb71330;
  uVar3 = FUN_144a78c84();
  local_70 = 0;
  local_78 = 0;
  lVar4 = FUN_14048696c(param_1,uVar2,uVar3,uVar3);
  if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x355] = lVar4;
    if (lVar4 != 0) goto LAB_145869312;
  }
  else {
    FUN_1456cec3c(lVar4);
    param_1[0x355] = lVar4;
LAB_145869312:
    *(byte *)(lVar4 + 0x2de) = *(byte *)(lVar4 + 0x2de) | 4;
    *(byte *)(param_1[0x355] + 0x2de) = *(byte *)(param_1[0x355] + 0x2de) | 8;
    *(byte *)(param_1[0x355] + 0x2d5) = *(byte *)(param_1[0x355] + 0x2d5) & 0xfd;
    *(byte *)(param_1[0x355] + 0x2d4) = *(byte *)(param_1[0x355] + 0x2d4) & 0xbf;
    *(undefined1 *)(param_1[0x355] + 0x89c) = 4;
    *(byte *)(param_1[0x355] + 0x2d6) = *(byte *)(param_1[0x355] + 0x2d6) | 0x40;
    *(byte *)(param_1[0x355] + 0x2d6) = *(byte *)(param_1[0x355] + 0x2d6) | 8;
    *(undefined1 *)(param_1[0x355] + 0x48) = 0;
    FUN_14127091c(param_1[0x355],0);
    FUN_140381810(param_1[0x355],0);
    uVar2 = param_1[0x355];
    uVar3 = FUN_141270945();
    FUN_141270910(uVar2,uVar3);
    *(byte *)(param_1[0x355] + 0xc61) = *(byte *)(param_1[0x355] + 0xc61) & 0xfb;
    (**(code **)(*(longlong *)param_1[0x355] + 0x728))((longlong *)param_1[0x355],DAT_14cad0f30,1);
    *(byte *)(param_1[0x355] + 0xc61) = *(byte *)(param_1[0x355] + 0xc61) & 0xfb;
    FUN_140486fc4(param_1[0x355],param_1[0x39],0);
  }
  uVar2 = DAT_14cb71440;
  uVar3 = FUN_1410dc03a();
  local_70 = 0;
  local_78 = 1;
  lVar4 = FUN_14048696c(param_1,uVar2,uVar3,uVar3);
  if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x38a] = lVar4;
    if (lVar4 == 0) goto LAB_1458694db;
  }
  else {
    FUN_1456cec3c(lVar4);
    param_1[0x38a] = lVar4;
  }
  local_60 = 0x3f800000;
  local_58 = 0x4040000000000000;
  local_50 = 0x4040000000000000;
  local_48 = 0x4040000000000000;
  local_40 = 0x41b00000;
  local_68 = 0xffdf959d00000001;
  local_3c = 0x4208000042b00000;
  FUN_14127095a(lVar4,&local_68,1);
  (**(code **)(*(longlong *)param_1[0x38a] + 0x720))((longlong *)param_1[0x38a],0);
  (**(code **)(*(longlong *)param_1[0x38a] + 0x728))((longlong *)param_1[0x38a],DAT_14cb71438,1);
  *(undefined1 *)(param_1[0x38a] + 0x2eb) = 0;
  FUN_140486fc4(param_1[0x38a],param_1[0x39],0);
LAB_1458694db:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586954e FUN_14586954e body=40 status=ok
// SIG undefined FUN_14586954e(void)

undefined8 FUN_14586954e(undefined8 param_1,int param_2)

{
  FUN_145869576();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145869576 FUN_145869576 body=249 status=ok
// SIG undefined FUN_145869576(void)

void FUN_145869576(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8b5e20;
  FUN_141477791(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x16);
  FUN_14586966f(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_145869698(param_1);
  return;
}



// FUNCTION 14586966f FUN_14586966f body=40 status=ok
// SIG undefined FUN_14586966f(void)

void FUN_14586966f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147a6409e(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 145869698 FUN_145869698 body=45 status=ok
// SIG undefined FUN_145869698(void)

void FUN_145869698(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aad6cb0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1458696e8 FUN_1458696e8 body=154 status=ok
// SIG undefined FUN_1458696e8(void)

void FUN_1458696e8(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_140797ba8();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc265b0;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x1a0;
  return;
}



// FUNCTION 145869788 FUN_145869788 body=228 status=ok
// SIG undefined FUN_145869788(void)

longlong FUN_145869788(void)

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
  if (DAT_14cabc180 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14580b774;
    local_38 = &LAB_14780c164;
    local_40 = &LAB_145c52f3d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x220;
    FUN_14081cfa3(L"/Script/MediaAssets",L"MediaTexture",&DAT_14cabc180,FUN_146364c66);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabc180;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145869874 FUN_145869874 body=228 status=ok
// SIG undefined FUN_145869874(void)

longlong FUN_145869874(void)

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
  if (DAT_14cae9240 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147b9a227;
    local_40 = &LAB_1463e8ade;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x3a0;
    FUN_14081cfa3(L"/Script/Engine",L"Light",&DAT_14cae9240,FUN_1463e8abc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae9240;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586995e FUN_14586995e body=228 status=ok
// SIG undefined FUN_14586995e(void)

longlong FUN_14586995e(void)

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
  if (DAT_14cac9350 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14580b774;
    local_38 = &LAB_1478b104f;
    local_40 = FUN_1417b0ea1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x148;
    FUN_14081cfa3(L"/Script/Engine",L"Texture2DArray",&DAT_14cac9350,&DAT_1478b104e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac9350;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145869a48 FUN_145869a48 body=228 status=ok
// SIG undefined FUN_145869a48(void)

longlong FUN_145869a48(void)

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
  if (DAT_14cb1b6e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147e2d6b7;
    local_40 = FUN_14641bfac;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxFlightNavLayer",&DAT_14cb1b6e0,&DAT_147e2d6b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1b6e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145869b34 FUN_145869b34 body=228 status=ok
// SIG undefined FUN_145869b34(void)

longlong FUN_145869b34(void)

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
  if (DAT_14cb1fd38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459d626a;
    local_38 = &LAB_147ed8f9d;
    local_40 = &LAB_14642d5fc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x1f8;
    FUN_14081cfa3(L"/Script/AIModule",L"EnvQueryTest",&DAT_14cb1fd38,&DAT_147ed8f9c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1fd38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145869c20 FUN_145869c20 body=228 status=ok
// SIG undefined FUN_145869c20(void)

longlong FUN_145869c20(void)

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
  if (DAT_14cb20028 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14642da64;
    local_38 = &LAB_147ee7f51;
    local_40 = FUN_14642dc23;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/AIModule",L"EnvQueryItemType_VectorBase",&DAT_14cb20028,&DAT_147ee7f50);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb20028;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145869d10 FUN_145869d10 body=228 status=ok
// SIG undefined FUN_145869d10(void)

longlong FUN_145869d10(void)

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
  if (DAT_14cb29260 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141116d1e;
    local_38 = &LAB_147fcf4c3;
    local_40 = FUN_1464574ae;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"BlendStackCameraNode",&DAT_14cb29260,&DAT_147fcf4c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb29260;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145869dfc FUN_145869dfc body=228 status=ok
// SIG undefined FUN_145869dfc(void)

longlong FUN_145869dfc(void)

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
  if (DAT_14cb3d1e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1438fdbac;
    local_38 = &LAB_14818fe1d;
    local_40 = FUN_146471ce3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraDataInterfaceRWBase",&DAT_14cb3d1e8,&DAT_14818fe1c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb3d1e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145869ee8 FUN_145869ee8 body=228 status=ok
// SIG undefined FUN_145869ee8(void)

longlong FUN_145869ee8(void)

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
  if (DAT_14cb42ae8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14594b4ce;
    local_38 = &LAB_1481d4ea5;
    local_40 = &LAB_146477fec;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xb8;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraRendererProperties",&DAT_14cb42ae8,&DAT_1481d4ea4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb42ae8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145869fd2 FUN_145869fd2 body=228 status=ok
// SIG undefined FUN_145869fd2(void)

longlong FUN_145869fd2(void)

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
  if (DAT_14cb4aa98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458d557a;
    local_38 = &LAB_14840f1c7;
    local_40 = &LAB_14648b23d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x130;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"SingleClickInputBehavior",&DAT_14cb4aa98,
                  &DAT_14840f1c6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4aa98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586a0bc FUN_14586a0bc body=228 status=ok
// SIG undefined FUN_14586a0bc(void)

longlong FUN_14586a0bc(void)

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
  if (DAT_14cb4ca68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14648a438;
    local_38 = &LAB_1484e0691;
    local_40 = FUN_1464938b2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x398;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"PreviewGeometryActor",&DAT_14cb4ca68,
                  &DAT_1484e0690);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4ca68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586a1a6 FUN_14586a1a6 body=228 status=ok
// SIG undefined FUN_14586a1a6(void)

longlong FUN_14586a1a6(void)

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
  if (DAT_14cb514a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1485f0b99;
    local_40 = FUN_1464a67da;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxSpline",L"GbxSplineSegment",&DAT_14cb514a8,FUN_1464a67b8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb514a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586a292 FUN_14586a292 body=228 status=ok
// SIG undefined FUN_14586a292(void)

longlong FUN_14586a292(void)

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
  if (DAT_14cb5e970 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459969f6;
    local_38 = &LAB_1486a85fb;
    local_40 = &LAB_145853c8e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xd0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameModeModuleHost",&DAT_14cb5e970,FUN_1464e2996);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5e970;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586a37c FUN_14586a37c body=33 status=ok
// SIG undefined FUN_14586a37c(void)

void FUN_14586a37c(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00014586a399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 14586a39e FUN_14586a39e body=45 status=ok
// SIG undefined FUN_14586a39e(void)

void FUN_14586a39e(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_144729dda(param_1 + 0x60);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x50) = 1;
    FUN_1411935ec(param_1);
    return;
  }
  return;
}



// FUNCTION 14586a3cc FUN_14586a3cc body=96 status=ok
// SIG undefined FUN_14586a3cc(void)

ulonglong FUN_14586a3cc(longlong param_1)

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
LAB_14586a40f:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14586a40f;
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



// FUNCTION 14586a42c FUN_14586a42c body=54 status=ok
// SIG undefined FUN_14586a42c(void)

void FUN_14586a42c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140e8a950(param_1 + 0x28);
  if (cVar1 != '\0') {
    FUN_141272f14(param_1 + 0x10,param_2);
    return;
  }
  return;
}



// FUNCTION 14586a468 FUN_14586a468 body=228 status=ok
// SIG undefined FUN_14586a468(void)

longlong FUN_14586a468(void)

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
  if (DAT_14cbf80d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417963e0;
    local_38 = &LAB_14907efb5;
    local_40 = &LAB_1460b233c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x880;
    FUN_14081cfa3(L"/Script/HairStrandsCore",L"GroomComponent",&DAT_14cbf80d0,FUN_14667a860);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf80d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586a54e FUN_14586a54e body=40 status=ok
// SIG undefined FUN_14586a54e(void)

undefined8 FUN_14586a54e(undefined8 param_1,int param_2)

{
  FUN_14586a576();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14586a576 FUN_14586a576 body=129 status=ok
// SIG undefined FUN_14586a576(void)

void FUN_14586a576(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a16bc30;
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x6d) = 0;
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  FUN_14586a5f8(param_1 + 100);
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_140bd4e94(param_1);
  return;
}



// FUNCTION 14586a5f8 FUN_14586a5f8 body=55 status=ok
// SIG undefined FUN_14586a5f8(void)

void FUN_14586a5f8(longlong *param_1)

{
  FUN_14586a630(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14586a630 FUN_14586a630 body=367 status=ok
// SIG undefined FUN_14586a630(void)

void FUN_14586a630(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x10 + (longlong)iStack_54 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140549ad6(param_1,param_2);
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
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14586a7b8 FUN_14586a7b8 body=140 status=ok
// SIG undefined FUN_14586a7b8(void)

void FUN_14586a7b8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(int *)(param_1 + 0x910) = *(int *)(param_1 + 0x910) + 1;
  FUN_1449ad616(param_1 + 0x720);
  local_28 = *(undefined8 *)(param_1 + 0x700);
  local_20 = *(undefined4 *)(param_1 + 0x708);
  FUN_140ce09a0(param_1 + 0x720);
  *(int *)(param_1 + 0x860) = *(int *)(param_1 + 0x860) + 1;
  lVar1 = FUN_14122859a(param_1);
  if (lVar1 != 0) {
    FUN_14586a846(lVar1 + 0x38,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586a846 FUN_14586a846 body=162 status=ok
// SIG undefined FUN_14586a846(void)

void FUN_14586a846(longlong *param_1,undefined8 param_2)

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
        goto LAB_14586a8d3;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14586a8d3:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14586a8e8 FUN_14586a8e8 body=69 status=ok
// SIG undefined FUN_14586a8e8(void)

void FUN_14586a8e8(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_141175dcd(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14586a92e(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14586a92e FUN_14586a92e body=95 status=ok
// SIG undefined FUN_14586a92e(void)

void FUN_14586a92e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 14586a994 FUN_14586a994 body=77 status=ok
// SIG undefined FUN_14586a994(void)

void FUN_14586a994(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1407f4df8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_140b4b272(param_1,param_2);
    }
  }
  FUN_140b4b21c(param_1,param_2);
  return;
}



// FUNCTION 14586a9f0 FUN_14586a9f0 body=40 status=ok
// SIG undefined FUN_14586a9f0(void)

undefined8 FUN_14586a9f0(undefined8 param_1,int param_2)

{
  FUN_14586aa18();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14586aa18 FUN_14586aa18 body=71 status=ok
// SIG undefined FUN_14586aa18(void)

void FUN_14586aa18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8888e0;
  FUN_1458b964b(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14586aa66 FUN_14586aa66 body=62 status=ok
// SIG undefined FUN_14586aa66(void)

undefined8 FUN_14586aa66(undefined2 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(param_1 + 2) & 0x80000001) == 1) {
    cVar1 = FUN_140653b22();
    if (cVar1 != '\0') {
      cVar1 = FUN_144a7c9c3();
      if (cVar1 == '\0') goto LAB_14586aa95;
    }
    return 0;
  }
LAB_14586aa95:
  uVar2 = FUN_144880847(*param_1,0);
  return uVar2;
}



// FUNCTION 14586aaa4 FUN_14586aaa4 body=54 status=ok
// SIG undefined FUN_14586aaa4(void)

void FUN_14586aaa4(longlong param_1)

{
  FUN_14586aada();
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03')) {
    FUN_140a8ede4(param_1);
    return;
  }
  return;
}



// FUNCTION 14586aada FUN_14586aada body=15 status=ok
// SIG undefined FUN_14586aada(void)

void FUN_14586aada(longlong param_1)

{
  FUN_14586aaea(param_1 + 0x990,param_1);
  return;
}



// FUNCTION 14586aaea FUN_14586aaea body=162 status=ok
// SIG undefined FUN_14586aaea(void)

void FUN_14586aaea(longlong *param_1,undefined8 param_2)

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
        goto LAB_14586ab77;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14586ab77:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14586ab8c FUN_14586ab8c body=269 status=ok
// SIG undefined FUN_14586ab8c(void)

void FUN_14586ab8c(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_258 [32];
  undefined1 local_238 [408];
  undefined8 *local_a0;
  undefined8 local_98 [15];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_144a7ca2c(local_238);
  memcpy((undefined1 *)(param_1 + 0x20),local_238,0x198);
  if ((undefined1 *)(param_1 + 0x20) != local_238) {
    puVar5 = *(undefined8 **)(param_1 + 0x1b8);
    *(undefined8 **)(param_1 + 0x1b8) = local_a0;
    local_a0 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar5 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  puVar5 = local_98;
  puVar6 = (undefined8 *)(param_1 + 0x1c0);
  for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (local_a0 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_a0 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_a0)(local_a0,1);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x230);
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586ac9a FUN_14586ac9a body=38 status=ok
// SIG undefined FUN_14586ac9a(void)

void FUN_14586ac9a(longlong param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_148070982(param_1 + 0x58);
  }
  FUN_14586acc0(param_1);
  return;
}



// FUNCTION 14586acc0 FUN_14586acc0 body=10 status=ok
// SIG undefined FUN_14586acc0(void)

void FUN_14586acc0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014586acc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b8))();
  return;
}



// FUNCTION 14586acca FUN_14586acca body=62 status=ok
// SIG undefined FUN_14586acca(void)

void FUN_14586acca(longlong param_1)

{
  longlong *plVar1;
  
  FUN_14472eae2(param_1,0x1000000);
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014586ad05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x408))(plVar1,param_1,*(code **)(*plVar1 + 0x408));
  return;
}



// FUNCTION 14586ad08 FUN_14586ad08 body=209 status=ok
// SIG undefined FUN_14586ad08(void)

void FUN_14586ad08(longlong param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x120) < 1) {
    plVar3 = &DAT_14c867e00;
    pcVar4 = DAT_14c867de0;
    if (DAT_14c867df0 != (longlong *)0x0) {
      plVar3 = DAT_14c867df0;
    }
  }
  else {
    lVar2 = param_1 + 0x10;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x110);
    }
    lVar2 = (longlong)*(int *)(param_1 + 0x120) * 0x40 + lVar2;
    pcVar4 = *(code **)(lVar2 + -0x40);
    plVar3 = *(longlong **)(lVar2 + -0x30);
    if (*(longlong **)(lVar2 + -0x30) == (longlong *)0x0) {
      plVar3 = (longlong *)(lVar2 + -0x20);
    }
  }
  local_39 = param_2;
  local_38 = param_3;
  local_30 = param_4;
  uVar1 = (**(code **)(*plVar3 + 8))();
  (*pcVar4)(uVar1,&local_39,&local_38,&local_30);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14586adf4 FUN_14586adf4 body=80 status=ok
// SIG undefined FUN_14586adf4(void)

void FUN_14586adf4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  FUN_14586ae46(local_38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586ae46 FUN_14586ae46 body=53 status=ok
// SIG undefined FUN_14586ae46(void)

undefined8 FUN_14586ae46(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144837462(DAT_14cbc30c8,param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 14586ae84 FUN_14586ae84 body=50 status=ok
// SIG undefined FUN_14586ae84(void)

undefined8 * FUN_14586ae84(undefined8 *param_1)

{
  FUN_14586aeb6();
  *param_1 = &PTR_FUN_14b79add0;
  param_1[5] = &PTR_FUN_14b79b1f0;
  *(undefined1 *)(param_1 + 0x130) = 0;
  return param_1;
}



// FUNCTION 14586aeb6 FUN_14586aeb6 body=459 status=ok
// SIG undefined FUN_14586aeb6(void)

undefined8 * FUN_14586aeb6(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b3229d0;
  param_1[5] = &PTR_FUN_14b322df0;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_1412739fa(param_1 + 0x15);
  param_1[0x50] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0x200000000;
  FUN_1405c5fa2();
  param_1[0x5a] = &DAT_14cb769e8;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x59] = &PTR_FUN_14b0394b0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x4fc71eb4;
  param_1[0x61] = 0;
  *(undefined2 *)((longlong)param_1 + 0x344) = 6;
  *(undefined1 *)((longlong)param_1 + 0x346) = 0;
  param_1[0x69] = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0xffff;
  *(undefined8 *)((longlong)param_1 + 0x37c) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  param_1[0x87] = 0;
  param_1[0xa2] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x9a] = 0;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  memset(param_1 + 0xb2,0,0x100);
  *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x634) = 0xffffffff;
  memset(param_1 + 0xd7,0,0x180);
  *(undefined4 *)(param_1 + 0x101) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x73c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7dc) = 0xffffffff;
  param_1[0x129] = 0;
  param_1[0x12a] = 0x2000000000;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  *(undefined1 *)(param_1 + 0x12f) = 0;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  *(undefined4 *)(param_1 + 0x12d) = 0;
  *(byte *)((longlong)param_1 + 0x311) = *(byte *)((longlong)param_1 + 0x311) & 0xde | 0x20;
  return param_1;
}



// FUNCTION 14586b082 FUN_14586b082 body=12 status=ok
// SIG undefined FUN_14586b082(void)

void FUN_14586b082(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014586b08b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14586b08e FUN_14586b08e body=59 status=ok
// SIG undefined FUN_14586b08e(void)

undefined8 * FUN_14586b08e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b47adf0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14586b0d4 FUN_14586b0d4 body=68 status=ok
// SIG undefined FUN_14586b0d4(void)

undefined8 * FUN_14586b0d4(undefined8 *param_1)

{
  FUN_14077009c();
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *param_1 = &PTR_FUN_14b2d5970;
  param_1[6] = &PTR_LAB_14b2d5c28;
  param_1[7] = &PTR_LAB_14b2d5c40;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 14586b196 FUN_14586b196 body=183 status=ok
// SIG undefined FUN_14586b196(void)

undefined8 * FUN_14586b196(undefined8 *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68 [8];
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb950f8) {
    FUN_144b3d300(&DAT_14cb950f8);
    if (DAT_14cb950f8 == -1) {
      pwVar2 = L"OnNotifyBodyControlsOfTargetLock";
      puVar3 = local_68;
      for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *(undefined8 *)pwVar2;
        pwVar2 = pwVar2 + 4;
        puVar3 = puVar3 + 1;
      }
      local_28 = 0;
      FUN_1446f470e(&DAT_14cb950f0,local_68,1);
      _Init_thread_footer(&DAT_14cb950f8);
    }
  }
  *param_1 = DAT_14cb950f0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586b24e FUN_14586b24e body=104 status=ok
// SIG undefined FUN_14586b24e(void)

void FUN_14586b24e(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_1459c472c();
  FUN_14586b2be(uVar1,*(undefined8 *)(param_1 + 4));
  plVar2 = (longlong *)FUN_14586b2b6();
  if (*plVar2 == param_1) {
    puVar3 = (undefined8 *)FUN_14586b2b6();
    *puVar3 = 0;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar2 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14586b2b6 FUN_14586b2b6 body=8 status=ok
// SIG undefined FUN_14586b2b6(void)

undefined8 * FUN_14586b2b6(void)

{
  return &DAT_14cb755a0;
}



// FUNCTION 14586b2be FUN_14586b2be body=132 status=ok
// SIG undefined FUN_14586b2be(void)

void FUN_14586b2be(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_14586b342(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14586b342 FUN_14586b342 body=85 status=ok
// SIG undefined FUN_14586b342(void)

void FUN_14586b342(longlong *param_1,int param_2)

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
  FUN_14586b398();
  return;
}



// FUNCTION 14586b398 FUN_14586b398 body=114 status=ok
// SIG undefined FUN_14586b398(void)

void FUN_14586b398(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 14586b414 FUN_14586b414 body=40 status=ok
// SIG undefined FUN_14586b414(void)

void FUN_14586b414(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014586b439. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,*(undefined2 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14586b43c FUN_14586b43c body=164 status=ok
// SIG undefined FUN_14586b43c(void)

void FUN_14586b43c(longlong *param_1,ushort param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if ((char)param_1[0x2f] == '\x03') {
    iVar1 = (int)param_1[0xbac];
    if ((longlong)iVar1 != 0) {
      uVar2 = 0;
      do {
        if (*(byte *)(param_1[0xbab] + uVar2) == param_2) {
          iVar3 = (int)(uVar2 >> 3) * -0x11111111;
          if (iVar3 < 0) {
            return;
          }
          if (iVar1 <= iVar3) {
            return;
          }
          (**(code **)(*param_1 + 0x578))(param_1);
          FUN_144a62f0c(param_1,param_1[5],0x2e);
          FUN_14586b520(param_1 + 0xbab,iVar3);
          FUN_14586b4e0(param_1 + 0xbab);
          FUN_14036ba18(param_1);
          return;
        }
        uVar2 = uVar2 + 0x78;
      } while ((longlong)iVar1 * 0x78 - uVar2 != 0);
    }
  }
  return;
}



// FUNCTION 14586b4e0 FUN_14586b4e0 body=63 status=ok
// SIG undefined FUN_14586b4e0(void)

void FUN_14586b4e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14586b578(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x78,8);
  }
  return;
}



// FUNCTION 14586b520 FUN_14586b520 body=87 status=ok
// SIG undefined FUN_14586b520(void)

void FUN_14586b520(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x10 + (ulonglong)param_2 * 0x78) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (ulonglong)param_2 * 0x78);
    memmove(_Dst,(void *)((longlong)_Dst + 0x78),(longlong)(int)(~param_2 + iVar2) * 0x78);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14586b578 FUN_14586b578 body=105 status=ok
// SIG undefined FUN_14586b578(void)

ulonglong FUN_14586b578(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x78) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x78,8);
      uVar1 = uVar1 / 0x78;
    }
  }
  return uVar1;
}



// FUNCTION 14586b5e2 FUN_14586b5e2 body=141 status=ok
// SIG undefined FUN_14586b5e2(void)

undefined4 FUN_14586b5e2(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14586b682();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    FUN_141277db8(param_1,&local_20,DAT_14cb7fa60);
    cVar1 = FUN_1402ca022(local_20,L"DLSS");
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    else {
      local_24 = 0;
      local_28 = 0;
      FUN_14586b670(&local_24,&local_28);
      uVar2 = local_28;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586b670 FUN_14586b670 body=18 status=ok
// SIG undefined FUN_14586b670(void)

void FUN_14586b670(uint *param_1,undefined4 *param_2)

{
  *param_1 = (uint)DAT_14cb529f0;
  *param_2 = DAT_14cb529ec;
  return;
}



// FUNCTION 14586b682 FUN_14586b682 body=278 status=ok
// SIG undefined FUN_14586b682(void)

byte FUN_14586b682(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141277db8(param_1,&local_28,DAT_14cb7fa60);
  cVar2 = FUN_1402ca022(local_28,L"DLSS");
  if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  cVar2 = FUN_1402ca022(local_28,L"XeSS");
  if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  cVar2 = FUN_1402ca022(local_28,&DAT_14b40a1d2);
  bVar3 = 0;
  bVar4 = 0;
  if (cVar2 != '\0') {
    bVar3 = FUN_1414c39f7();
    cVar2 = FUN_144848644();
    if (cVar2 != '\0') {
      bVar4 = FUN_14586b7b3();
      bVar4 = bVar4 ^ 1;
    }
    bVar5 = 0;
    cVar2 = FUN_1431eab15();
    if (cVar2 != '\0') {
      bVar5 = FUN_143c23dfa();
      bVar5 = bVar5 ^ 1;
    }
    lVar1 = DAT_14cb7fab8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar7 = 0;
    }
    else {
      bVar6 = FUN_144a61b4f();
      uVar7 = (ulonglong)(bVar6 ^ 1);
    }
    bVar3 = bVar4 | bVar3 | bVar5 | 0 < *(int *)(lVar1 + uVar7 * 4);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586b7b3 FUN_14586b7b3 body=19 status=ok
// SIG undefined FUN_14586b7b3(void)

bool FUN_14586b7b3(void)

{
  int iVar1;
  
  iVar1 = FUN_1401433c5();
  return iVar1 == 0;
}



// FUNCTION 14586b7c6 FUN_14586b7c6 body=32 status=ok
// SIG undefined FUN_14586b7c6(void)

void FUN_14586b7c6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x6d0))(param_1,1);
  FUN_1407fb560(param_1);
  return;
}



// FUNCTION 14586b7e6 FUN_14586b7e6 body=71 status=ok
// SIG undefined FUN_14586b7e6(void)

void FUN_14586b7e6(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x2e48);
  if (plVar1 != (longlong *)0x0) {
    if (param_2 != '\0') {
      FUN_140aeefbc(plVar1,0,1);
      plVar1 = *(longlong **)(param_1 + 0x2e48);
    }
    (**(code **)(*plVar1 + 0x440))(plVar1,0);
    *(undefined8 *)(param_1 + 0x2e48) = 0;
  }
  return;
}



// FUNCTION 14586b82e FUN_14586b82e body=40 status=ok
// SIG undefined FUN_14586b82e(void)

undefined8 FUN_14586b82e(undefined8 param_1,int param_2)

{
  FUN_14586b856();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14586b856 FUN_14586b856 body=67 status=ok
// SIG undefined FUN_14586b856(void)

void FUN_14586b856(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1bb640;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b1b5150;
  FUN_144a2da94(param_1 + 9);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 14586b8a2 FUN_14586b8a2 body=102 status=ok
// SIG undefined FUN_14586b8a2(void)

void FUN_14586b8a2(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x14) != 0)) &&
     (*(int *)(param_1 + 0x10) != DAT_14c948000)) {
    FUN_1447a97f4(local_40,param_1 + 0x10);
    FUN_14071d490(local_40,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586b90e FUN_14586b90e body=228 status=ok
// SIG undefined FUN_14586b90e(void)

longlong FUN_14586b90e(void)

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
  if (DAT_14cad3888 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147a340bd;
    local_40 = &LAB_145ac854e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 800;
    FUN_14081cfa3(L"/Script/Engine",L"VolumetricCloudComponent",&DAT_14cad3888,FUN_1463c03d2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad3888;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586ba02 FUN_14586ba02 body=40 status=ok
// SIG undefined FUN_14586ba02(void)

undefined8 FUN_14586ba02(undefined8 param_1,int param_2)

{
  FUN_14586ba2a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14586ba2a FUN_14586ba2a body=73 status=ok
// SIG undefined FUN_14586ba2a(void)

void FUN_14586ba2a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b470be0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 14586ba74 FUN_14586ba74 body=104 status=ok
// SIG undefined FUN_14586ba74(void)

undefined8 FUN_14586ba74(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_14586bade(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586bade FUN_14586bade body=22 status=ok
// SIG undefined FUN_14586bade(void)

ulonglong FUN_14586bade(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  plVar3 = DAT_14cbe6b98;
  if (DAT_14cbe6b98 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14cbe6b98 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbe6b98 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14cbe6b98 + 0x1fc) < (int)DAT_14cbe6b98[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar6 = (int)plVar3[0x59];
    uVar14 = *param_1;
    if ((longlong)iVar6 == -1) {
      if (((uVar14 != 0) && (param_1[1] != 0)) && (uVar14 != DAT_14c948000)) {
        puVar7 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar14 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar14 == 0) || (uVar5 = param_1[1], uVar5 == 0)) || (uVar14 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < (int)uVar5) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (uVar5 == 1 && 0 < iVar6) {
        puVar8 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)plVar3 + 0x2cc) == 1) {
          puVar8 = puVar10;
        }
        uVar14 = *puVar8;
        puVar7 = (ulonglong *)(puVar8 + 1);
      }
      else {
        if ((int)uVar5 <= iVar6) goto LAB_1448160f1;
        puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
        uVar14 = puVar10[(longlong)iVar6 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar7;
    uVar15 = uVar2 >> 0x20;
    uVar5 = uVar14;
    if (uVar15 != 0) {
      uVar5 = FUN_144a78877(uVar14,uVar15);
    }
    if ((int)plVar3[0x50] != *(int *)((longlong)plVar3 + 0x2ac)) {
      plVar11 = plVar3 + 0x56;
      if ((longlong *)plVar3[0x57] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x57];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x58] - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        plVar11 = plVar3 + 0x4f;
        lVar9 = *plVar11;
        uVar15 = 0;
LAB_144815ffc:
        lVar18 = (longlong)iVar6 * 0x20;
        if ((*(uint *)(lVar9 + lVar18) != uVar14) ||
           (lVar1 = lVar9 + lVar18, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar15 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar9 = *(longlong *)(lVar1 + 0x10);
          if (lVar9 != 0) {
            lVar18 = *(longlong *)(lVar9 + 0x60);
            if (lVar18 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar18 + 0x18,(int)plVar3[0x59],
                              *(undefined4 *)((longlong)plVar3 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar6 = FUN_144b0847a(plVar11);
                if (iVar6 == -1) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
                }
                plVar12 = (longlong *)(lVar9 + 0x10);
                if (lVar9 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                lVar9 = *plVar12;
                lVar18 = *(longlong *)(lVar9 + 0x60);
              } while (lVar18 != 0);
            }
            uVar15 = *(ulonglong *)(lVar9 + 0x30);
            uStack_40 = uVar15;
            if (uVar15 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(plVar3,&uStack_40,lVar9);
            uVar15 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar9 + 0x30) = uStack_40;
              if (lVar9 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar9);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*DAT_14cbe6b98 + 0x300))(DAT_14cbe6b98);
    if (cVar4 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar10 = (uint *)&DAT_14c948618;
    if (((*param_1 != 0) && (0 < (int)param_1[1])) && (*param_1 != DAT_14c948000)) {
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < param_1[1]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
    }
    uVar14 = *puVar10;
    uVar5 = puVar10[2];
    uVar13 = uVar14;
    if (uVar5 != 0) {
      uVar13 = uVar5 >> 0xd ^ uVar14 - uVar5;
      uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar5) - uVar13;
      uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar13) - uVar16;
      uVar13 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
      uVar19 = uVar13 << 0x10 ^ (uVar16 - uVar17) - uVar13;
      uVar16 = uVar19 >> 5 ^ (uVar17 - uVar13) - uVar19;
      uVar17 = uVar16 >> 3 ^ (uVar13 - uVar19) - uVar16;
      uVar13 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
      uVar13 = uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13);
    }
    if ((int)plVar3[0x3a] != *(int *)((longlong)plVar3 + 0x1fc)) {
      plVar11 = plVar3 + 0x40;
      if ((longlong *)plVar3[0x41] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x41];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x42] - 1U & uVar13) * 4);
      if (iVar6 != -1) {
        lVar9 = plVar3[0x39];
        uVar15 = 0;
        do {
          lVar18 = (longlong)iVar6 * 0x20;
          if ((*(uint *)(lVar9 + lVar18) == uVar14) &&
             (lVar1 = lVar9 + lVar18, *(uint *)(lVar1 + 8) == uVar5)) {
            uVar15 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar15 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
        } while (iVar6 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar15 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
  if (iVar6 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 14586baf4 FUN_14586baf4 body=226 status=ok
// SIG undefined FUN_14586baf4(void)

longlong * FUN_14586baf4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
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
  pcVar13 = FUN_1462bbfe2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586bbd8 FUN_14586bbd8 body=136 status=ok
// SIG undefined FUN_14586bbd8(void)

code * FUN_14586bbd8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferCTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147146f56;
}



// FUNCTION 14586bc60 FUN_14586bc60 body=138 status=ok
// SIG undefined FUN_14586bc60(void)

code * FUN_14586bc60(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GbxForegroundDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14714717e;
}



// FUNCTION 14586bcea FUN_14586bcea body=138 status=ok
// SIG undefined FUN_14586bcea(void)

code * FUN_14586bcea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneStencilTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000000e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471470f4;
}



// FUNCTION 14586bd74 FUN_14586bd74 body=52 status=ok
// SIG undefined FUN_14586bd74(void)

void FUN_14586bd74(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x340);
  memset(_Dst,0,0x340);
  FUN_14586bda8(_Dst);
  return;
}



// FUNCTION 14586bda8 FUN_14586bda8 body=123 status=ok
// SIG undefined FUN_14586bda8(void)

undefined8 * FUN_14586bda8(undefined8 *param_1)

{
  FUN_140e8cfb8();
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *param_1 = &PTR_FUN_14b9cd6a0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0xffffffff;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0x3dcccccd;
  param_1[100] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  return param_1;
}



// FUNCTION 14586be48 FUN_14586be48 body=102 status=ok
// SIG undefined FUN_14586be48(void)

void FUN_14586be48(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 != 0) {
    uVar3 = *(byte *)(param_2 + 0x20) - 1 | 1;
    iVar1 = *(int *)(param_1 + 0x2e0);
    iVar4 = uVar3 + *(int *)(param_1 + 0x2e0);
    *(int *)(param_1 + 0x2e0) = iVar4;
    bVar2 = iVar4 != 0 && SCARRY4(uVar3,iVar1) == iVar4 < 0;
    if ((bool)*(char *)(param_1 + 0x2e4) != bVar2) {
      if (iVar4 < 1) {
        FUN_14586bf82(param_1);
        FUN_14586ceb6(param_1);
      }
      else {
        FUN_14586db94();
        FUN_14586d7a6(param_1);
        FUN_14127c124(param_1);
      }
      *(bool *)(param_1 + 0x2e4) = bVar2;
    }
  }
  return;
}



// FUNCTION 14586beae FUN_14586beae body=211 status=ok
// SIG undefined FUN_14586beae(void)

void FUN_14586beae(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140cb2ecc(&local_28,param_2 + 0x20);
  plVar2 = local_20;
  if (local_28 != 0) {
    local_38 = local_28;
    local_30 = local_20;
    if (local_20 == (longlong *)0x0) {
      FUN_14586c094(param_1,&local_38);
    }
    else {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
      FUN_14586c094(param_1);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar2)(plVar2);
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
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar3 = (int *)((longlong)local_20 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586bf82 FUN_14586bf82 body=273 status=ok
// SIG undefined FUN_14586bf82(void)

void FUN_14586bf82(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_140059518(param_1 + 0x44);
  lVar2 = FUN_1404960a8(uVar1);
  if (lVar2 != 0) {
    FUN_1446ddc76(&local_30,"FOakUIEvent_SelectPlayer",1);
    FUN_1401cd85c(lVar2,local_30,param_1 + 0x78);
    FUN_1446ddc76(&local_38,"FOakUIEvent_PlayerHovered",1);
    FUN_1401cd85c(lVar2,local_38,param_1 + 0x2f0);
    FUN_1446ddc76(&local_40,"FOakUIEvent_UpdatePageForCategory",1);
    FUN_1401cd85c(lVar2,local_40,param_1 + 0x358);
    FUN_1446ddc76(&local_48,"FOakUIEvent_ContextItemSelected",1);
    FUN_1401cd85c(lVar2,local_48,param_1 + 0x360);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586c094 FUN_14586c094 body=660 status=ok
// SIG undefined FUN_14586c094(void)

void FUN_14586c094(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_140059518(param_1 + 0x44);
  if (lVar5 == 0) {
LAB_14586c2cc:
    if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar6 = FUN_14030d4a0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) goto LAB_14586c2cc;
  FUN_1402815f4(param_1,&local_48);
  lVar6 = *(longlong *)(local_48 + 0x110);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x100));
  *(int *)(lVar6 + 0xf8) = *(int *)(lVar6 + 0xf8) + 1;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  plVar2 = (longlong *)(lVar6 + 0xa0);
  *(undefined4 *)(lVar6 + 0xa8) = 0;
  if (*(int *)(lVar6 + 0xac) < 0) {
    FUN_1402191ca(plVar2,0);
  }
  *(int *)(lVar6 + 0xb0) = *(int *)(lVar6 + 0xb0) + 1;
  cVar4 = FUN_14586c340(lVar5,*param_2);
  if (cVar4 == '\0') {
    cVar4 = FUN_14586c374(lVar5,*param_2);
    if (cVar4 != '\0') {
      cVar4 = FUN_14586cb2e(param_1,*param_2);
      if (cVar4 == '\0') {
        *(int *)(lVar6 + 0xb0) = *(int *)(lVar6 + 0xb0) + 1;
        iVar3 = *(int *)(lVar6 + 0xa8);
        *(uint *)(lVar6 + 0xa8) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0xac) < iVar3 + 1U) {
          FUN_1446f84a2(plVar2,iVar3);
        }
        lVar5 = *plVar2;
        uVar7 = DAT_14cbd7010;
        goto LAB_14586c1d2;
      }
    }
    *(int *)(lVar6 + 0xb0) = *(int *)(lVar6 + 0xb0) + 1;
    iVar3 = *(int *)(lVar6 + 0xa8);
    *(uint *)(lVar6 + 0xa8) = iVar3 + 1U;
    if (*(uint *)(lVar6 + 0xac) < iVar3 + 1U) {
      FUN_1446f84a2(plVar2,iVar3);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = 0;
  }
  else {
    *(int *)(lVar6 + 0xb0) = *(int *)(lVar6 + 0xb0) + 1;
    iVar3 = *(int *)(lVar6 + 0xa8);
    *(uint *)(lVar6 + 0xa8) = iVar3 + 1U;
    if (*(uint *)(lVar6 + 0xac) < iVar3 + 1U) {
      FUN_1446f84a2(plVar2,iVar3);
    }
    lVar5 = *plVar2;
    uVar7 = DAT_14cbd7028;
LAB_14586c1d2:
    *(undefined8 *)(lVar5 + (longlong)iVar3 * 8) = uVar7;
  }
  cVar4 = FUN_14586c794(param_1,*param_2);
  if (cVar4 != '\0') {
    *(int *)(lVar6 + 0xb0) = *(int *)(lVar6 + 0xb0) + 1;
    iVar3 = *(int *)(lVar6 + 0xa8);
    *(uint *)(lVar6 + 0xa8) = iVar3 + 1U;
    if (*(uint *)(lVar6 + 0xac) < iVar3 + 1U) {
      FUN_1446f84a2(plVar2,iVar3);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd7058;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 14586c340 FUN_14586c340 body=52 status=ok
// SIG undefined FUN_14586c340(void)

ulonglong FUN_14586c340(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f0c81a();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_14586c3a8(lVar2,param_2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 14586c374 FUN_14586c374 body=52 status=ok
// SIG undefined FUN_14586c374(void)

ulonglong FUN_14586c374(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f0c81a();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_14127ab10(lVar2,param_2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 14586c3a8 FUN_14586c3a8 body=264 status=ok
// SIG undefined FUN_14586c3a8(void)

ulonglong FUN_14586c3a8(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_14127ac30();
  if (cVar3 == '\0') {
    cVar3 = FUN_14586c512(param_1,param_2);
    if (cVar3 != '\0') {
      FUN_14586ccee(param_1,&local_30,param_2);
      uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      if (local_30 != 0) {
        cVar3 = FUN_14586c4c2(param_1);
        if (cVar3 == '\0') {
          lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
          if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
            lVar4 = FUN_141030f66();
            if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) {
              cVar3 = FUN_14586c4b2(*(longlong *)(lVar4 + 0x30),*(undefined4 *)(param_1[4] + 0xe0),
                                    local_30);
              if (cVar3 == '\0') goto LAB_14586c4ad;
            }
          }
        }
        else {
LAB_14586c4ad:
          uVar5 = 0;
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
      goto LAB_14586c3de;
    }
  }
  uVar5 = 0;
LAB_14586c3de:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586c4b2 FUN_14586c4b2 body=16 status=ok
// SIG undefined FUN_14586c4b2(void)

byte FUN_14586c4b2(void)

{
  byte bVar1;
  
  bVar1 = FUN_140b64956();
  return bVar1 ^ 1;
}



// FUNCTION 14586c4c2 FUN_14586c4c2 body=79 status=ok
// SIG undefined FUN_14586c4c2(void)

ulonglong FUN_14586c4c2(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  lVar3 = FUN_140b70372(lVar2);
  if (lVar3 == 0) {
    bVar1 = 0;
  }
  else {
    lVar2 = lVar3;
    bVar1 = FUN_145cf80ce(lVar3,*(undefined4 *)(param_1[4] + 0xe0),param_2);
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar3 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 14586c512 FUN_14586c512 body=263 status=ok
// SIG undefined FUN_14586c512(void)

ulonglong FUN_14586c512(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = FUN_14127aa1c();
  if (lVar4 == 0) {
    bVar6 = false;
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2,&local_50);
    FUN_1446f470e(&local_40,L"SHIFT",1);
    if (local_50 == local_40) {
      uVar3 = FUN_14586c61a(lVar4,param_2);
      param_1 = (longlong *)(ulonglong)uVar3;
      bVar6 = true;
    }
    else {
      uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      param_1 = &local_50;
      FUN_140b6ec10(param_1,uVar5,param_2);
      bVar6 = local_50 != 0;
      if (bVar6) {
        uVar3 = FUN_14586c61a(lVar4);
        param_1 = (longlong *)(ulonglong)uVar3;
      }
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
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 & bVar6) & 0xffffffff;
}



// FUNCTION 14586c61a FUN_14586c61a body=135 status=ok
// SIG undefined FUN_14586c61a(void)

undefined4 FUN_14586c61a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x3a8))(param_1,&local_28);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_14586c6a2(local_28,param_2);
  }
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
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586c6a2 FUN_14586c6a2 body=240 status=ok
// SIG undefined FUN_14586c6a2(void)

ulonglong FUN_14586c6a2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x50);
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    local_30 = *(longlong **)(param_2 + 0x10);
    if (local_30 == (longlong *)0x0) {
LAB_14586c76e:
      local_30 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)local_30[1];
      do {
        if (iVar6 == 0) goto LAB_14586c76e;
        LOCK();
        iVar5 = (int)local_30[1];
        bVar8 = iVar6 == iVar5;
        if (bVar8) {
          *(int *)(local_30 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar8);
    }
    local_38 = 0;
    if (local_30 != (longlong *)0x0) {
      local_38 = *(undefined8 *)(param_2 + 8);
    }
    FUN_140b7090e(lVar4,&local_28);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),local_28 != 0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar3 = (int *)((longlong)local_20 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
    plVar2 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
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
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14586c794 FUN_14586c794 body=309 status=ok
// SIG undefined FUN_14586c794(void)

ulonglong FUN_14586c794(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_140b670f4();
  if (cVar3 == '\0') {
    lVar4 = FUN_140059518((longlong)param_1 + 0x44);
    if (lVar4 != 0) {
      lVar5 = FUN_14030d4a0();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        cVar3 = FUN_14586c8ca(lVar4,param_2);
        uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
        if (cVar3 != '\0') goto LAB_14586c80e;
        uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
        FUN_140b6deae(&local_38,uVar6,param_2);
        if (local_38 != 0) {
          cVar3 = FUN_14586c8ca(lVar4);
          if (cVar3 != '\0') {
            if (local_30 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_30 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_30)(local_30);
                LOCK();
                piVar2 = (int *)((longlong)local_30 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_30 + 0x10))(local_30);
                }
              }
            }
            goto LAB_14586c80e;
          }
        }
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)local_30 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_30 + 0x10))(local_30);
            }
          }
        }
      }
    }
  }
  uVar7 = 0;
LAB_14586c80e:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586c8ca FUN_14586c8ca body=52 status=ok
// SIG undefined FUN_14586c8ca(void)

ulonglong FUN_14586c8ca(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f0c81a();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_14586c8fe(lVar2,param_2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 14586c8fe FUN_14586c8fe body=118 status=ok
// SIG undefined FUN_14586c8fe(void)

ulonglong FUN_14586c8fe(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) &&
      (lVar3 = FUN_140d6e14c(), lVar3 != 0)) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
    uVar2 = FUN_14586c974(param_1);
    cVar1 = FUN_140b70752(lVar3,uVar2,param_2);
    if (cVar1 != '\0') {
      uVar2 = FUN_14586c974(param_1);
      uVar4 = FUN_14586c980(lVar3,uVar2,param_2);
      return uVar4 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 14586c974 FUN_14586c974 body=11 status=ok
// SIG undefined FUN_14586c974(void)

undefined4 FUN_14586c974(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0xe0);
}



// FUNCTION 14586c980 FUN_14586c980 body=211 status=ok
// SIG undefined FUN_14586c980(void)

bool FUN_14586c980(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar5 = FUN_14127aaaa();
  if (cVar5 == '\0') {
    bVar9 = false;
  }
  else {
    uVar8 = FUN_14586ca54(param_1,param_2);
    local_28 = *(longlong **)(param_3 + 0x10);
    if (local_28 == (longlong *)0x0) {
LAB_14586ca33:
      local_28 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)local_28[1];
      do {
        if (iVar7 == 0) goto LAB_14586ca33;
        LOCK();
        iVar4 = (int)local_28[1];
        bVar9 = iVar7 == iVar4;
        if (bVar9) {
          *(int *)(local_28 + 1) = iVar7 + 1;
          iVar4 = iVar7;
        }
        iVar7 = iVar4;
        UNLOCK();
      } while (!bVar9);
    }
    local_30 = (longlong *)0x0;
    if (local_28 != (longlong *)0x0) {
      local_30 = *(longlong **)(param_3 + 8);
    }
    uVar6 = (**(code **)(*local_30 + 0x40))();
    iVar7 = FUN_140b6c20e(uVar8,uVar6,&local_30);
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
    bVar9 = iVar7 != -1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar9;
}



// FUNCTION 14586ca54 FUN_14586ca54 body=217 status=ok
// SIG undefined FUN_14586ca54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14586ca54(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_14127aaaa();
  if (cVar1 != '\0') {
    uVar2 = FUN_140b708a0(param_1);
    lVar3 = FUN_14127aa70(uVar2,param_2);
    if (lVar3 != 0) {
      return (undefined *)(lVar3 + 0x28);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbce1e8) {
    FUN_144b3d300(&DAT_14cbce1e8);
    if (DAT_14cbce1e8 == -1) {
      _DAT_14cbce1b8 = 0;
      _DAT_14cbce1c0 = 0;
      _DAT_14cbce198 = 0;
      uRam000000014cbce1a0 = 0;
      _DAT_14cbce1c4 = 0xffffffff00000080;
      _DAT_14cbce1cc = 0;
      DAT_14cbce1d8 = 0;
      _DAT_14cbce1e0 = 0;
      atexit(FUN_1441bbea2);
      _Init_thread_footer(&DAT_14cbce1e8);
    }
  }
  return &DAT_14cbce198;
}



// FUNCTION 14586cb2e FUN_14586cb2e body=258 status=ok
// SIG undefined FUN_14586cb2e(void)

ulonglong FUN_14586cb2e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar7 = (longlong *)(param_1 + 0x2f8);
  plStack_30 = *(longlong **)(param_2 + 0x10);
  if (plStack_30 == (longlong *)0x0) {
LAB_14586cbdf:
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar6 = (int)plStack_30[1];
    do {
      if (iVar6 == 0) goto LAB_14586cbdf;
      LOCK();
      iVar4 = (int)plStack_30[1];
      bVar9 = iVar6 == iVar4;
      if (bVar9) {
        *(int *)(plStack_30 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar9);
    local_38 = *(longlong **)(param_2 + 8);
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  plVar2 = plStack_30;
  uVar5 = (**(code **)(*local_38 + 0x40))();
  iVar6 = FUN_14586cc32(plVar7,uVar5,&local_38);
  plVar3 = plStack_30;
  if (iVar6 == -1) {
    uVar8 = 0;
  }
  else {
    uVar8 = CONCAT71((int7)((ulonglong)plVar7 >> 8),(longlong)iVar6 * 0x20 + *plVar7 != 0);
  }
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_30 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar9) {
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14586cc32 FUN_14586cc32 body=188 status=ok
// SIG undefined FUN_14586cc32(void)

int FUN_14586cc32(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar7 = *param_1;
      do {
        lVar8 = (longlong)iVar3 * 0x20;
        puVar4 = *(undefined8 **)(lVar7 + lVar8);
        plVar6 = *(longlong **)(lVar7 + 8 + lVar8);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_3) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
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
        if (cVar5 != '\0') {
          return iVar3;
        }
        lVar7 = *param_1;
        iVar3 = *(int *)(lVar7 + 0x18 + lVar8);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 14586ccee FUN_14586ccee body=455 status=ok
// SIG undefined FUN_14586ccee(void)

longlong * FUN_14586ccee(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_3 + 0x10))(param_3,&local_48);
  FUN_1446f470e(&local_38,L"SHIFT",1);
  if (local_48 != local_38) {
    uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_140b6ec10(param_2,uVar5,param_3);
    goto LAB_14586cd5e;
  }
  if (((param_3[1] != 0) && (plVar6 = (longlong *)param_3[2], plVar6 != (longlong *)0x0)) &&
     (0 < (int)plVar6[1])) {
    iVar4 = (int)plVar6[1];
    do {
      if (iVar4 == 0) goto LAB_14586ceab;
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar7);
    *param_2 = param_3[1];
    param_2[1] = (longlong)plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
    goto LAB_14586cd5e;
  }
  FUN_1446f470e(&local_50,L"SHIFT",1);
  (**(code **)(*param_1 + 0x180))(param_1);
  local_60[0] = local_50;
  plVar6 = (longlong *)FUN_1401e3228();
  if (plVar6 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
LAB_14586ce7a:
    bVar7 = true;
  }
  else {
    (**(code **)(*plVar6 + 0x80))(plVar6,&local_48);
    plVar6 = local_48;
    if (local_48 == (longlong *)0x0) goto LAB_14586ce7a;
    (**(code **)(*param_3 + 0x30))(param_3,local_60);
    (**(code **)(*plVar6 + 0x120))(plVar6,param_2,local_60);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    bVar7 = false;
  }
  plVar6 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (bVar7) {
LAB_14586ceab:
    *param_2 = 0;
    param_2[1] = 0;
  }
LAB_14586cd5e:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14586ceb6 FUN_14586ceb6 body=932 status=ok
// SIG undefined FUN_14586ceb6(void)

void FUN_14586ceb6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_1408bb964(param_1 + 0x44);
  if (lVar3 != 0) {
    lVar4 = FUN_1403ca142();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      lVar4 = *(longlong *)(lVar3 + 0x48);
      if (lVar4 != 0) {
        lVar5 = FUN_140b6d0be();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          if (*(longlong *)(param_1 + 0x98) != 0) {
            FUN_14480f766(lVar4 + 0x4b8);
          }
          if (*(longlong *)(param_1 + 0xa0) != 0) {
            FUN_14480f766(lVar4 + 0x1e0);
          }
          if (*(longlong *)(param_1 + 0xa8) != 0) {
            FUN_14480f766(lVar4 + 0x1f8);
          }
          if (*(longlong *)(param_1 + 0xb0) != 0) {
            FUN_14480f766(lVar4 + 0x270);
          }
          if (*(longlong *)(param_1 + 0xb8) != 0) {
            FUN_14480f766(lVar4 + 0x2a0);
          }
          if (*(longlong *)(param_1 + 0xc0) != 0) {
            FUN_14480f766(lVar4 + 0x548);
          }
          if (*(longlong *)(param_1 + 200) != 0) {
            FUN_14480f766(lVar4 + 0x560);
          }
          if (*(longlong *)(param_1 + 0xd0) != 0) {
            FUN_14480f766(lVar4 + 0x228);
          }
          if (*(longlong *)(param_1 + 0xd8) != 0) {
            FUN_14480f766(lVar4 + 0x240);
          }
          if (*(longlong *)(param_1 + 0xe0) != 0) {
            FUN_14480f766(lVar4 + 600);
          }
          if (*(longlong *)(param_1 + 0xe8) != 0) {
            FUN_14480f766(lVar4 + 0x4e8);
          }
          if (*(longlong *)(param_1 + 0xf0) != 0) {
            FUN_14480f766(lVar4 + 0x500);
          }
        }
      }
      if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_14480f766(lVar3 + 0xc0);
      }
      if (*(longlong *)(param_1 + 0x88) != 0) {
        FUN_14480f766(lVar3 + 0xd8);
      }
      if (*(longlong *)(param_1 + 0x90) != 0) {
        FUN_14480f766(lVar3 + 0x1c8);
      }
      FUN_140457ffc(&DAT_14cbd0b78,param_1);
      FUN_140457ffc(&DAT_14cb717f8,param_1);
      lVar3 = FUN_140b64196(lVar3);
      if (lVar3 != 0) {
        uVar6 = FUN_14586d25c(lVar3);
        if (*(longlong *)(param_1 + 0xf8) != 0) {
          FUN_14480f766(uVar6);
        }
      }
    }
  }
  FUN_14586d264(param_1);
  lVar3 = *(longlong *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar3 != 0) {
    FUN_14127b218(lVar3);
    FUN_1400020a8(lVar3);
  }
  lVar3 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (lVar3 != 0) {
    FUN_14127b218(lVar3);
    FUN_1400020a8(lVar3);
  }
  if (((*(longlong *)(param_1 + 0x68) != 0) && (*(longlong *)(param_1 + 0x70) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x70) + 8))) {
    FUN_1401cb356();
    local_30 = *(undefined8 *)(param_1 + 0x68);
    local_28 = *(longlong *)(param_1 + 0x70);
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_30);
    plVar2 = *(longlong **)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
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
  if (((*(longlong *)(param_1 + 0x348) != 0) && (*(longlong *)(param_1 + 0x350) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x350) + 8))) {
    FUN_1401cb356();
    local_40 = *(undefined8 *)(param_1 + 0x348);
    local_38 = *(longlong *)(param_1 + 0x350);
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_40);
    plVar2 = *(longlong **)(param_1 + 0x350);
    *(undefined8 *)(param_1 + 0x348) = 0;
    *(undefined8 *)(param_1 + 0x350) = 0;
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586d25c FUN_14586d25c body=8 status=ok
// SIG undefined FUN_14586d25c(void)

longlong FUN_14586d25c(longlong param_1)

{
  return param_1 + 0x1d8;
}



// FUNCTION 14586d264 FUN_14586d264 body=209 status=ok
// SIG undefined FUN_14586d264(void)

void FUN_14586d264(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_140d6e14c();
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0)) {
      if (param_1[0x3a] != 0) {
        FUN_14586d336(lVar1);
        param_1[0x3a] = 0;
      }
      if (param_1[0x3b] != 0) {
        FUN_14586d336(lVar1);
        param_1[0x3b] = 0;
      }
      if (param_1[0x20] != 0) {
        FUN_14480f766(lVar1 + 0x668);
      }
      param_1[0x20] = 0;
      if (param_1[0x21] != 0) {
        FUN_14480f766(lVar1 + 0x30);
      }
      param_1[0x21] = 0;
    }
  }
  return;
}



// FUNCTION 14586d336 FUN_14586d336 body=138 status=ok
// SIG undefined FUN_14586d336(void)

void FUN_14586d336(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  if (param_2 != 0) {
    local_20 = &local_28;
    FUN_14586d3c2(param_1 + 0x538);
    lVar1 = local_28;
    if (local_28 != 0) {
      FUN_14586d55c(local_28);
      FUN_1400020a8(lVar1);
    }
    local_28 = 0;
    if (*(int *)(param_1 + 0x540) == 0) {
      FUN_14586d49e(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586d3c2 FUN_14586d3c2 body=220 status=ok
// SIG undefined FUN_14586d3c2(void)

void FUN_14586d3c2(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 14586d49e FUN_14586d49e body=173 status=ok
// SIG undefined FUN_14586d49e(void)

void FUN_14586d49e(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x520) != 0) && (*(longlong *)(param_1 + 0x528) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x528) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x520);
    local_20 = *(longlong *)(param_1 + 0x528);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar2 = *(longlong *)(param_1 + 0x528);
    *(undefined8 *)(param_1 + 0x520) = 0;
    *(undefined8 *)(param_1 + 0x528) = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586d55c FUN_14586d55c body=585 status=ok
// SIG undefined FUN_14586d55c(void)

void FUN_14586d55c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    if (((*(longlong *)(param_1 + 0xc0) != 0) && (*(longlong *)(param_1 + 200) != 0)) &&
       (0 < *(int *)(*(longlong *)(param_1 + 200) + 8))) {
      FUN_1401cb356();
      local_28 = *(undefined8 *)(param_1 + 0xc0);
      local_20 = *(longlong *)(param_1 + 200);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
        UNLOCK();
      }
      FUN_140d61352(&local_28);
    }
    plVar2 = *(longlong **)(param_1 + 200);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar3 != 0) {
      FUN_14127b218(lVar3);
      FUN_1400020a8(lVar3);
    }
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_14480f766(*(longlong *)(param_1 + 0x50) + 0x60);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_14480f766(*(longlong *)(param_1 + 0x50) + 0x78);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_14480f766(*(longlong *)(param_1 + 0x50) + 0x90);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_14127b1cd(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8));
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 200);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c1c2(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_14127b1cd(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  lVar3 = *(longlong *)(param_1 + 0x78);
  if (lVar3 != 0) {
    FUN_14127b218(lVar3);
    FUN_1400020a8(lVar3);
  }
  FUN_1449db362(param_1 + 0x40);
  FUN_1449db362(param_1 + 0x30);
  FUN_1449db362(param_1 + 0x20);
  FUN_1449db362(param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1449db362(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586d7a6 FUN_14586d7a6 body=1004 status=ok
// SIG undefined FUN_14586d7a6(void)

void FUN_14586d7a6(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = FUN_140059518(param_1 + 0x44);
  lVar4 = FUN_1404960a8(uVar3);
  if (lVar4 != 0) {
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,2,0x10);
    local_40 = 2;
    *local_48 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_48[2] = lVar5;
    *local_48 = &PTR_FUN_14b9b4490;
    local_48[3] = param_1;
    FUN_1446ddc76(&local_50,"FOakUIEvent_SelectPlayer",1);
    FUN_140391af6(lVar4,&local_38,local_50,&local_48);
    *(undefined8 *)(param_1 + 0x78) = local_38;
    FUN_1449db362(&local_48);
    if (*(longlong *)(param_1 + 0x2f0) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar1 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_48[2] = lVar5;
      *local_48 = &PTR_FUN_14b9b3af0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,param_1);
      puVar1[4] = FUN_14586beae;
      *(undefined4 *)(puVar1 + 5) = 0;
      FUN_1446ddc76(&local_58,"FOakUIEvent_PlayerHovered",1);
      FUN_140391af6(lVar4,&local_38,local_58,&local_48);
      *(undefined8 *)(param_1 + 0x2f0) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x358) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar1 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_48[2] = lVar5;
      *local_48 = &PTR_FUN_14b9b3af0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,param_1);
      puVar1[4] = &LAB_148e46d52;
      *(undefined4 *)(puVar1 + 5) = 0;
      FUN_1446ddc76(&local_60,"FOakUIEvent_UpdatePageForCategory",1);
      FUN_140391af6(lVar4,&local_38,local_60,&local_48);
      *(undefined8 *)(param_1 + 0x358) = local_38;
      FUN_1449db362(&local_48);
    }
    if (*(longlong *)(param_1 + 0x360) == 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar1 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4665f0;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_48[2] = lVar5;
      *local_48 = &PTR_FUN_14b9b3af0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,param_1);
      puVar1[4] = FUN_1462276dc;
      *(undefined4 *)(puVar1 + 5) = 0;
      FUN_1446ddc76(&local_68,"FOakUIEvent_ContextItemSelected",1);
      FUN_140391af6(lVar4,&local_38,local_68,&local_48);
      *(undefined8 *)(param_1 + 0x360) = local_38;
      FUN_1449db362(&local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586db94 FUN_14586db94 body=3826 status=ok
// SIG undefined FUN_14586db94(void)

void FUN_14586db94(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = FUN_1408bb964(param_1 + 0x44);
  if (lVar6 != 0) {
    lVar7 = FUN_1403ca142();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      if (*(longlong *)(param_1 + 0x58) == 0) {
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar4 = local_68;
        local_60 = 3;
        *local_68 = &PTR_LAB_14b4f5500;
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
        local_68[2] = lVar10;
        *local_68 = &PTR_FUN_14b9b3b60;
        local_68[3] = 0;
        FUN_14485c47a(local_68 + 3,param_1);
        puVar4[4] = &LAB_145be60c6;
        *(undefined4 *)(puVar4 + 5) = 0;
        if (*(longlong *)(lVar6 + 0x30) == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(*(longlong *)(lVar6 + 0x30) + 0x360);
        }
        uVar8 = FUN_14001cc68(0xd8,0x10);
        local_58 = local_68;
        local_68 = (undefined8 *)0x0;
        local_50 = local_60;
        local_60 = 0;
        FUN_14127c25a(uVar8,uVar9);
        lVar7 = *(longlong *)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x58) = uVar8;
        if (lVar7 != 0) {
          FUN_14127b218(lVar7);
          FUN_1400020a8(lVar7);
        }
        FUN_1449db362(&local_68);
      }
      if (*(longlong *)(param_1 + 0x60) == 0) {
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar4 = local_68;
        local_60 = 3;
        *local_68 = &PTR_LAB_14b4f5500;
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
        local_68[2] = lVar10;
        *local_68 = &PTR_FUN_14b9b3b60;
        local_68[3] = 0;
        FUN_14485c47a(local_68 + 3,param_1);
        puVar4[4] = &LAB_145be60c6;
        *(undefined4 *)(puVar4 + 5) = 0;
        if (*(longlong *)(lVar6 + 0x30) == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(*(longlong *)(lVar6 + 0x30) + 0x360);
        }
        uVar8 = FUN_14001cc68(0xd8,0x10);
        local_58 = local_68;
        local_68 = (undefined8 *)0x0;
        local_50 = local_60;
        local_60 = 0;
        FUN_14127c25a(uVar8,uVar9);
        lVar7 = *(longlong *)(param_1 + 0x60);
        *(undefined8 *)(param_1 + 0x60) = uVar8;
        if (lVar7 != 0) {
          FUN_14127b218(lVar7);
          FUN_1400020a8(lVar7);
        }
        FUN_1449db362(&local_68);
      }
      plVar3 = *(longlong **)(lVar6 + 0x48);
      local_70 = lVar6;
      if (plVar3 != (longlong *)0x0) {
        lVar7 = FUN_140b6d0be();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30)) {
          (**(code **)(*plVar3 + 0x308))(plVar3,&local_58);
          *(undefined8 **)(param_1 + 0x110) = local_58;
          FUN_14586ee3a(param_1,plVar3);
          plVar1 = (longlong *)(param_1 + 0x130);
          *(undefined4 *)(param_1 + 0x138) = 0;
          if (*(int *)(param_1 + 0x13c) != 0) {
            FUN_14586ead8(plVar1);
          }
          FUN_14127bdbc(plVar3,&local_58);
          puVar4 = local_58;
          lVar7 = (longlong)local_50;
          local_78 = lVar6;
          if (lVar7 != 0) {
            lVar6 = 0;
            do {
              local_68 = (undefined8 *)0x0;
              FUN_14485c47a(&local_68,*(undefined8 *)((longlong)puVar4 + lVar6));
              iVar2 = *(int *)(param_1 + 0x138);
              *(uint *)(param_1 + 0x138) = iVar2 + 1U;
              if (*(uint *)(param_1 + 0x13c) < iVar2 + 1U) {
                FUN_14586ef1e(plVar1,iVar2);
              }
              *(undefined8 **)(*plVar1 + (longlong)iVar2 * 8) = local_68;
              lVar6 = lVar6 + 8;
            } while (lVar7 * 8 != lVar6);
          }
          if (local_58 != (undefined8 *)0x0) {
            FUN_1400020a8(local_58);
          }
          uVar9 = FUN_14586ea88(plVar3);
          FUN_14485c47a(param_1 + 0x140,uVar9);
          FUN_14586f4f6(param_1,plVar3);
          uVar5 = FUN_140b6d060(plVar3);
          *(undefined1 *)(param_1 + 0x1c8) = uVar5;
          if (*(int *)(param_1 + 0x110) == 2) {
            FUN_14586f80e(param_1);
            FUN_14586f32c(param_1);
          }
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          FUN_1446efa72(&local_58,0,3,0x10);
          local_50 = 3;
          *local_58 = &PTR_LAB_14b991aa0;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_58[2] = lVar7;
          *local_58 = &PTR_FUN_14b9b3bd0;
          local_58[3] = param_1;
          local_58[4] = plVar3;
          FUN_14586ed62(plVar3 + 0x97,&local_68,&local_58);
          FUN_1449db362(&local_58);
          *(undefined8 **)(param_1 + 0x98) = local_68;
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          FUN_1446efa72(&local_58,0,3,0x10);
          local_50 = 3;
          *local_58 = &PTR_LAB_14b9b5d60;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_58[2] = lVar7;
          *local_58 = &PTR_FUN_14b9b3d90;
          local_58[3] = param_1;
          local_58[4] = plVar3;
          FUN_14586efa2(plVar3 + 0x4e,&local_68,&local_58);
          FUN_1449db362(&local_58);
          *(undefined8 **)(param_1 + 0xb0) = local_68;
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          FUN_1446efa72(&local_58,0,3,0x10);
          local_50 = 3;
          *local_58 = &PTR_LAB_149e06450;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_58[2] = lVar7;
          *local_58 = &PTR_FUN_14b9b3e00;
          local_58[3] = param_1;
          local_58[4] = plVar3;
          FUN_140c6314c(plVar3 + 0x54,&local_68,&local_58);
          FUN_1449db362(&local_58);
          *(undefined8 **)(param_1 + 0xb8) = local_68;
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          FUN_1446efa72(&local_58,0,3,0x10);
          local_50 = 3;
          *local_58 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_58[2] = lVar7;
          *local_58 = &PTR_FUN_14b9b3e70;
          local_58[3] = param_1;
          local_58[4] = plVar3;
          FUN_1448b6402(plVar3 + 0x3c,&local_68,&local_58);
          FUN_1449db362(&local_58);
          *(undefined8 **)(param_1 + 0xa0) = local_68;
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          FUN_1446efa72(&local_58,0,3,0x10);
          local_50 = 3;
          *local_58 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_58[2] = lVar7;
          *local_58 = &PTR_FUN_14b9b3ee0;
          local_58[3] = param_1;
          local_58[4] = plVar3;
          FUN_1448b6402(plVar3 + 0x3f,&local_68,&local_58);
          FUN_1449db362(&local_58);
          *(undefined8 **)(param_1 + 0xa8) = local_68;
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          FUN_1446efa72(&local_58,0,3,0x10);
          local_50 = 3;
          *local_58 = &PTR_LAB_14b971db0;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_58[2] = lVar7;
          *local_58 = &PTR_FUN_14b9b3f50;
          local_58[3] = param_1;
          local_58[4] = plVar3;
          FUN_14586f07a(plVar3 + 0xa9,&local_68,&local_58);
          FUN_1449db362(&local_58);
          *(undefined8 **)(param_1 + 0xc0) = local_68;
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          FUN_1446efa72(&local_58,0,3,0x10);
          local_50 = 3;
          *local_58 = &PTR_LAB_14b9b4030;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_58[2] = lVar7;
          *local_58 = &PTR_FUN_14b9b3fc0;
          local_58[3] = param_1;
          local_58[4] = plVar3;
          FUN_14586f160(plVar3 + 0xac,&local_68,&local_58);
          FUN_1449db362(&local_58);
          *(undefined8 **)(param_1 + 200) = local_68;
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          FUN_1446efa72(&local_58,0,3,0x10);
          local_50 = 3;
          *local_58 = &PTR_LAB_14b9b4110;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_58[2] = lVar7;
          *local_58 = &PTR_FUN_14b9b40a0;
          local_58[3] = param_1;
          local_58[4] = plVar3;
          FUN_14586f246(plVar3 + 0x9d,&local_68,&local_58);
          FUN_1449db362(&local_58);
          *(undefined8 **)(param_1 + 0xe8) = local_68;
          local_58 = (undefined8 *)0x0;
          local_50 = 0;
          FUN_1446efa72(&local_58,0,3,0x10);
          local_50 = 3;
          *local_58 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar6 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar6 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar6;
          local_58[2] = lVar7;
          *local_58 = &PTR_FUN_14b9b4180;
          local_58[3] = param_1;
          local_58[4] = plVar3;
          FUN_1448b6402(plVar3 + 0xa0,&local_68,&local_58);
          FUN_1449db362(&local_58);
          *(undefined8 **)(param_1 + 0xf0) = local_68;
          lVar6 = local_78;
        }
      }
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,2,0x10);
      local_50 = 2;
      *local_58 = &PTR_LAB_14b412d70;
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
      local_58[2] = lVar10;
      *local_58 = &PTR_FUN_14b9b41f0;
      local_58[3] = param_1;
      FUN_14127bc3c(lVar6 + 0xc0,&local_68,&local_58);
      FUN_1449db362(&local_58);
      *(undefined8 **)(param_1 + 0x80) = local_68;
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,2,0x10);
      local_50 = 2;
      *local_58 = &PTR_LAB_14b412d70;
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
      local_58[2] = lVar10;
      *local_58 = &PTR_FUN_14b9b4260;
      local_58[3] = param_1;
      FUN_14127bc3c(lVar6 + 0xd8,&local_68,&local_58);
      FUN_1449db362(&local_58);
      *(undefined8 **)(param_1 + 0x88) = local_68;
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,2,0x10);
      local_50 = 2;
      *local_58 = &PTR_LAB_14b412d70;
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
      local_58[2] = lVar10;
      *local_58 = &PTR_FUN_14b9b42d0;
      local_58[3] = param_1;
      FUN_14127bc3c(lVar6 + 0x1c8,&local_68,&local_58);
      FUN_1449db362(&local_58);
      *(undefined8 **)(param_1 + 0x90) = local_68;
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar4 = local_58;
      lVar6 = local_70;
      local_50 = 3;
      *local_58 = &PTR_LAB_14b961ce0;
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
      local_58[2] = lVar10;
      *local_58 = &PTR_FUN_14b9b4340;
      local_58[3] = 0;
      FUN_14485c47a(local_58 + 3,param_1);
      puVar4[4] = param_1;
      FUN_14127be6a(&DAT_14cbd0b78,&local_68,&local_58);
      FUN_1449db362(&local_58);
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      puVar4 = local_58;
      local_50 = 3;
      *local_58 = &PTR_LAB_14b968eb0;
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
      local_58[2] = lVar10;
      *local_58 = &PTR_FUN_14b9b43b0;
      local_58[3] = 0;
      FUN_14485c47a(local_58 + 3,param_1);
      puVar4[4] = param_1;
      FUN_14586eb8c(&DAT_14cb717f8,&local_68,&local_58);
      FUN_1449db362(&local_58);
      lVar6 = FUN_140b64196(lVar6);
      if (lVar6 != 0) {
        uVar9 = FUN_14586d25c(lVar6);
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,2,0x10);
        local_50 = 2;
        *local_58 = &PTR_LAB_14b978e50;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_58[2] = lVar7;
        *local_58 = &PTR_FUN_14b9b4420;
        local_58[3] = param_1;
        FUN_14586ec72(uVar9,&local_68,&local_58);
        FUN_1449db362(&local_58);
        *(undefined8 **)(param_1 + 0xf8) = local_68;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14586ea88 FUN_14586ea88 body=80 status=ok
// SIG undefined FUN_14586ea88(void)

undefined8 FUN_14586ea88(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (*(longlong *)(lVar2 + 0x178) != 0) {
    uVar3 = FUN_14041aabe();
    cVar1 = FUN_144a7ca96((longlong *)(lVar2 + 0x178),uVar3);
    if ((cVar1 != '\0') && (*(longlong *)(lVar2 + 0x178) != 0)) {
      uVar3 = FUN_14127bc34();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14586ead8 FUN_14586ead8 body=48 status=ok
// SIG undefined FUN_14586ead8(void)

void FUN_14586ead8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 14586eb08 FUN_14586eb08 body=132 status=ok
// SIG undefined FUN_14586eb08(void)

void FUN_14586eb08(longlong param_1,int param_2)

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



// FUNCTION 14586eb8c FUN_14586eb8c body=216 status=ok
// SIG undefined FUN_14586eb8c(void)

undefined8 * FUN_14586eb8c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14586ec72 FUN_14586ec72 body=214 status=ok
// SIG undefined FUN_14586ec72(void)

undefined8 * FUN_14586ec72(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14586ed4a FUN_14586ed4a body=24 status=ok
// SIG undefined FUN_14586ed4a(void)

bool FUN_14586ed4a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14586ed62 FUN_14586ed62 body=214 status=ok
// SIG undefined FUN_14586ed62(void)

undefined8 * FUN_14586ed62(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14586ee3a FUN_14586ee3a body=148 status=ok
// SIG undefined FUN_14586ee3a(void)

void FUN_14586ee3a(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    FUN_14101c9ce(param_2,&local_30);
    FUN_14586eed0(param_1 + 0x118,&local_30);
    FUN_14101c9fb(local_30,local_28);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    uVar1 = FUN_14127c006(param_2);
    *(undefined1 *)(param_1 + 0x128) = uVar1;
    uVar2 = FUN_14127c090(param_2);
    *(undefined4 *)(param_1 + 300) = uVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586eed0 FUN_14586eed0 body=78 status=ok
// SIG undefined FUN_14586eed0(void)

longlong * FUN_14586eed0(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14101c9fb(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14586ef1e FUN_14586ef1e body=132 status=ok
// SIG undefined FUN_14586ef1e(void)

void FUN_14586ef1e(longlong param_1,int param_2)

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



// FUNCTION 14586efa2 FUN_14586efa2 body=214 status=ok
// SIG undefined FUN_14586efa2(void)

undefined8 * FUN_14586efa2(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14586f07a FUN_14586f07a body=216 status=ok
// SIG undefined FUN_14586f07a(void)

undefined8 * FUN_14586f07a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14586f160 FUN_14586f160 body=216 status=ok
// SIG undefined FUN_14586f160(void)

undefined8 * FUN_14586f160(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14586f246 FUN_14586f246 body=216 status=ok
// SIG undefined FUN_14586f246(void)

undefined8 * FUN_14586f246(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14586f32c FUN_14586f32c body=457 status=ok
// SIG undefined FUN_14586f32c(void)

void FUN_14586f32c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 0x400) = 3;
  FUN_1402815f4(param_1,&local_38);
  lVar2 = *(longlong *)(local_38 + 0x110);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x100));
  *(int *)(lVar2 + 0xf8) = *(int *)(lVar2 + 0xf8) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  FUN_1449a0272(lVar2 + 0xe0,&DAT_14cbd73f8);
  if (((*(longlong *)(param_1 + 0x3f0) != 0) && (*(longlong *)(param_1 + 0x3f8) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x3f8) + 8))) {
    FUN_1401cb356();
    local_48 = *(undefined8 *)(param_1 + 0x3f0);
    local_40 = *(longlong *)(param_1 + 0x3f8);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_48);
    plVar3 = *(longlong **)(param_1 + 0x3f8);
    *(undefined8 *)(param_1 + 0x3f0) = 0;
    *(undefined8 *)(param_1 + 0x3f8) = 0;
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
  if (*(longlong *)(param_1 + 1000) != 0) {
    lVar4 = FUN_1408bb964(param_1 + 0x44);
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x48), lVar4 != 0)) {
      lVar5 = FUN_140b6d0be();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        if (*(longlong *)(param_1 + 1000) != 0) {
          FUN_14480f766(lVar4 + 0x4d0);
        }
        *(undefined8 *)(param_1 + 1000) = 0;
      }
    }
  }
  FUN_14127c124(param_1);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x100));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586f4f6 FUN_14586f4f6 body=697 status=ok
// SIG undefined FUN_14586f4f6(void)

void FUN_14586f4f6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_d8 [46];
  byte local_aa;
  byte local_a9;
  int local_a8;
  int local_a4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined **local_78 [3];
  byte local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    local_88 = 0;
    uStack_80 = 0;
  }
  else {
    FUN_145870aa2(param_2,&local_88,0);
  }
  plVar6 = (longlong *)FUN_140059518(param_1 + 0x44);
  (**(code **)(*plVar6 + 0x350))(plVar6,local_78);
  lVar7 = local_88;
  iVar2 = (int)uStack_80;
  lVar9 = (longlong)(int)uStack_80;
  if (lVar9 != 0) {
    local_aa = FUN_140ba41f1(local_78,local_88);
    local_a0 = lVar7;
    local_90 = lVar7 + 0x1a0;
    local_a8 = 0;
    iVar8 = 0;
    do {
      local_a9 = local_aa;
      lVar7 = (longlong)iVar8;
      iVar11 = iVar8 + 1;
      if (iVar8 + 1 < iVar2) {
        iVar11 = iVar2;
      }
      local_98 = lVar7 * 0x1a0;
      lVar12 = local_90 + local_98;
      bVar10 = local_aa & 1;
      local_aa = local_aa ^ 1;
      local_a4 = iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar3 = iVar11;
        if (lVar9 <= lVar7) break;
        bVar4 = FUN_140ba41f1(local_78,lVar12);
        iVar8 = iVar8 + 1;
        lVar12 = lVar12 + 0x1a0;
        iVar3 = iVar8;
      } while (bVar10 == bVar4);
      iVar8 = iVar3;
      iVar11 = iVar8 - local_a4;
      if ((local_a9 & 1) == 0) {
        FUN_140b6c454(local_98 + local_a0,iVar11);
      }
      else {
        if (local_a8 != local_a4) {
          memmove((void *)((longlong)local_a8 * 0x1a0 + local_a0),(void *)(local_98 + local_a0),
                  (longlong)iVar11 * 0x1a0);
        }
        local_a8 = local_a8 + iVar11;
      }
    } while (lVar7 < lVar9);
    uStack_80 = CONCAT44(uStack_80._4_4_,local_a8);
    if (0 < local_a8 && local_a8 == *(int *)(param_1 + 0x150)) {
      lVar7 = 0;
      lVar9 = 0;
      do {
        lVar1 = local_88;
        lVar12 = *(longlong *)(param_1 + 0x148);
        cVar5 = FUN_140ba41f1(lVar12 + lVar7,local_88 + lVar7);
        if (((cVar5 != '\0') &&
            (cVar5 = FUN_140ba41f1(lVar12 + lVar7 + 0x30,lVar1 + lVar7 + 0x30), cVar5 != '\0')) &&
           (*(longlong *)(lVar12 + 400 + lVar7) == *(longlong *)(lVar1 + 400 + lVar7))) break;
        lVar9 = lVar9 + 1;
        lVar7 = lVar7 + 0x1a0;
      } while (lVar9 < *(int *)(param_1 + 0x150));
    }
  }
  FUN_14586f7b0(param_1 + 0x148,&local_88);
  local_78[0] = &PTR_FUN_14a5af930;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_78[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])();
  FUN_140b6c454(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14586f7b0 FUN_14586f7b0 body=93 status=ok
// SIG undefined FUN_14586f7b0(void)

undefined8 * FUN_14586f7b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140b6c454(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148e52678(param_1,iVar1);
      FUN_148e526ea(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14586f80e FUN_14586f80e body=1172 status=ok
// SIG undefined FUN_14586f80e(void)

void FUN_14586f80e(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_50;
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_140d6e14c();
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
      lVar4 = FUN_140059518((longlong)param_1 + 0x44);
      if (lVar4 != 0) {
        uVar1 = *(undefined4 *)(lVar4 + 0xe0);
        if (param_1[0x3a] == 0) {
          local_58 = 2;
          plVar5 = (longlong *)FUN_14586fe00(lVar3,uVar1,0,2);
          param_1[0x3a] = (longlong)plVar5;
          if ((int)plVar5[1] != 2) {
            FUN_1446efa72(plVar5,0,2,0x10);
            *(undefined4 *)(plVar5 + 1) = 2;
          }
          puVar2 = (undefined8 *)*plVar5;
          *puVar2 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar4 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar4 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar4;
          puVar2[2] = lVar7;
          *puVar2 = &PTR_FUN_14b9b4510;
          puVar2[3] = param_1;
          lVar4 = param_1[0x3a];
          if (*(int *)(lVar4 + 0x38) != 2) {
            FUN_1446efa72((longlong *)(lVar4 + 0x30),0,2,0x10);
            *(undefined4 *)(lVar4 + 0x38) = 2;
          }
          puVar2 = *(undefined8 **)(lVar4 + 0x30);
          *puVar2 = &PTR_LAB_14b438a40;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar4 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar4 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar4;
          puVar2[2] = lVar7;
          *puVar2 = &PTR_FUN_14b9b4580;
          puVar2[3] = param_1;
        }
        if (param_1[0x3b] == 0) {
          local_58 = 2;
          plVar5 = (longlong *)FUN_14586fe00(lVar3,uVar1,0,1);
          param_1[0x3b] = (longlong)plVar5;
          if ((int)plVar5[1] != 2) {
            FUN_1446efa72(plVar5,0,2,0x10);
            *(undefined4 *)(plVar5 + 1) = 2;
          }
          puVar2 = (undefined8 *)*plVar5;
          *puVar2 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar4 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar4 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar4;
          puVar2[2] = lVar7;
          *puVar2 = &PTR_FUN_14b9b45f0;
          puVar2[3] = param_1;
          lVar4 = param_1[0x3b];
          if (*(int *)(lVar4 + 0x38) != 2) {
            FUN_1446efa72((longlong *)(lVar4 + 0x30),0,2,0x10);
            *(undefined4 *)(lVar4 + 0x38) = 2;
          }
          puVar2 = *(undefined8 **)(lVar4 + 0x30);
          *puVar2 = &PTR_LAB_14b438a40;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar4 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar4 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar4;
          puVar2[2] = lVar7;
          *puVar2 = &PTR_FUN_14b9b4660;
          puVar2[3] = param_1;
        }
        uVar6 = FUN_14586ca54(lVar3,uVar1);
        FUN_14586fca4(param_1 + 0x3c,uVar6);
        if (param_1[0x20] == 0) {
          local_48 = (undefined8 *)0x0;
          local_40 = 0;
          FUN_1446efa72(&local_48,0,3,0x10);
          local_40 = 3;
          *local_48 = &PTR_LAB_149e35290;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar4 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar4 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar4;
          local_48[2] = lVar7;
          *local_48 = &PTR_FUN_14b9b46d0;
          local_48[3] = param_1;
          local_48[4] = lVar3;
          *(undefined4 *)(local_48 + 5) = uVar1;
          FUN_140feff30(lVar3 + 0x668,&local_50,&local_48);
          FUN_1449db362(&local_48);
          param_1[0x20] = local_50;
        }
        FUN_14127cf7e(param_1,lVar3,uVar1);
        if (param_1[0x21] == 0) {
          local_48 = (undefined8 *)0x0;
          local_40 = 0;
          FUN_1446efa72(&local_48,0,3,0x10);
          local_40 = 3;
          *local_48 = &PTR_LAB_149e35290;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar4 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar4 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar4;
          local_48[2] = lVar7;
          *local_48 = &PTR_FUN_14b9b4740;
          local_48[3] = param_1;
          local_48[4] = lVar3;
          *(undefined4 *)(local_48 + 5) = uVar1;
          FUN_140feff30(lVar3 + 0x30,&local_50,&local_48);
          FUN_1449db362(&local_48);
          param_1[0x21] = local_50;
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14586fca4 FUN_14586fca4 body=122 status=ok
// SIG undefined FUN_14586fca4(void)

longlong FUN_14586fca4(longlong param_1,longlong param_2)

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
    FUN_14586fd1e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14586fd1e FUN_14586fd1e body=226 status=ok
// SIG undefined FUN_14586fd1e(void)

longlong * FUN_14586fd1e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140b6f6e8(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 8 + lVar5);
          *(longlong *)(lVar4 + 8 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x10 + lVar5) = *(undefined8 *)(lVar2 + 0x10 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x18;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 14586fe00 FUN_14586fe00 body=508 status=ok
// SIG undefined FUN_14586fe00(void)

undefined8
FUN_14586fe00(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
             )

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar2 = FUN_14001cc68(0xe0,0x10);
  FUN_145870170(uVar2,param_1,param_2,param_3,param_5,param_4);
  iVar1 = *(int *)(param_1 + 0x540);
  *(uint *)(param_1 + 0x540) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x544) < iVar1 + 1U) {
    FUN_145870822(param_1 + 0x538,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x538) + (longlong)iVar1 * 8) = uVar2;
  FUN_14586fffc(param_1);
  if (*(int *)(param_1 + 0x5d0) != *(int *)(param_1 + 0x5fc)) {
    lVar3 = param_1 + 0x600;
    if (*(longlong *)(param_1 + 0x608) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x608);
    }
    uVar4 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x610) - 1U & param_2) * 4);
    if (uVar4 != 0xffffffff) {
      lVar3 = *(longlong *)(param_1 + 0x5c8);
      uVar6 = uVar4;
      do {
        if (*(uint *)(lVar3 + (longlong)(int)uVar6 * 0x28) == param_2) goto LAB_14586fec8;
        uVar6 = *(uint *)(lVar3 + (longlong)(int)uVar6 * 0x28 + 0x20);
      } while (uVar6 != 0xffffffff);
    }
  }
  goto LAB_14586fee5;
  while (uVar4 = puVar5[8], uVar4 != 0xffffffff) {
LAB_14586ff33:
    puVar5 = (uint *)(lVar3 + (longlong)(int)uVar4 * 0x28);
    if (*puVar5 == param_2) goto LAB_14586ff46;
  }
  puVar5 = (uint *)0x0;
LAB_14586ff46:
  if ((char)puVar5[7] == '\0') {
    FUN_14591dd0c(param_1,param_2,1);
  }
  goto LAB_14586ff50;
  while (uVar4 = puVar5[8], uVar4 != 0xffffffff) {
LAB_14586fec8:
    puVar5 = (uint *)(lVar3 + (longlong)(int)uVar4 * 0x28);
    if (*puVar5 == param_2) goto LAB_14586fedb;
  }
  puVar5 = (uint *)0x0;
LAB_14586fedb:
  if ((char)puVar5[7] == '\0') {
    FUN_14591dd0c(param_1,param_2,0);
  }
LAB_14586fee5:
  if (*(int *)(param_1 + 0x620) != *(int *)(param_1 + 0x64c)) {
    lVar3 = param_1 + 0x650;
    if (*(longlong *)(param_1 + 0x658) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x658);
    }
    uVar4 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x660) - 1U & param_2) * 4);
    if (uVar4 != 0xffffffff) {
      lVar3 = *(longlong *)(param_1 + 0x618);
      uVar6 = uVar4;
      do {
        if (*(uint *)(lVar3 + (longlong)(int)uVar6 * 0x28) == param_2) goto LAB_14586ff33;
        uVar6 = *(uint *)(lVar3 + (longlong)(int)uVar6 * 0x28 + 0x20);
      } while (uVar6 != 0xffffffff);
    }
  }
LAB_14586ff50:
  FUN_141242f30(param_1,param_2);
  return *(undefined8 *)(*(longlong *)(param_1 + 0x538) + (longlong)iVar1 * 8);
}



// FUNCTION 14586fffc FUN_14586fffc body=370 status=ok
// SIG undefined FUN_14586fffc(void)

void FUN_14586fffc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(char *)(param_1 + 0x518) == '\x01') &&
     (((*(longlong *)(param_1 + 0x520) == 0 || (*(longlong *)(param_1 + 0x528) == 0)) ||
      (*(int *)(*(longlong *)(param_1 + 0x528) + 8) < 1)))) {
    *(undefined4 *)(param_1 + 0x534) = *(undefined4 *)(param_1 + 0x530);
    uVar4 = FUN_1401cb356();
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,2,0x10);
    local_38 = 2;
    *local_40 = &PTR_LAB_149e02020;
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
    local_40[2] = lVar5;
    *local_40 = &PTR_FUN_14b4e2df0;
    local_40[3] = param_1;
    local_48 = 0;
    FUN_1405f67fc(uVar4,&local_30,&local_40,L"FGbxFriends_PlatformTick");
    *(undefined8 *)(param_1 + 0x520) = local_30;
    local_30 = 0;
    plVar2 = *(longlong **)(param_1 + 0x528);
    *(longlong **)(param_1 + 0x528) = local_28;
    local_28 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
    }
    FUN_1449db362(&local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145870170 FUN_145870170 body=1058 status=ok
// SIG undefined FUN_145870170(void)

undefined8 *
FUN_145870170(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x74) = param_4;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_6;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if (DAT_14cb978a8 == (undefined8 *)0x0) {
    plVar4 = (longlong *)FUN_140a68038(0);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_40);
      DAT_14cb978a8 = local_40;
    }
  }
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_14b4f5500;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar6;
  *local_50 = &PTR_FUN_14b4f5490;
  local_50[3] = param_1;
  uVar2 = FUN_140b708a0(param_1[10]);
  uVar3 = FUN_14001cc68(0xd8,0x10);
  local_40 = local_50;
  local_50 = (undefined8 *)0x0;
  local_38 = local_48;
  local_48 = 0;
  FUN_14127c25a(uVar3,uVar2);
  lVar1 = param_1[0xf];
  param_1[0xf] = uVar3;
  if (lVar1 != 0) {
    FUN_14127b218(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_1449db362(&local_50);
  FUN_14127ca9a(param_1);
  FUN_14127d8d6(param_1);
  lVar1 = param_1[10];
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  local_38 = 2;
  *local_40 = &PTR_LAB_14b4f5690;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b4f5620;
  local_40[3] = param_1;
  FUN_145870594(lVar1 + 0x60,&local_50,&local_40);
  FUN_1449db362(&local_40);
  param_1[0xb] = local_50;
  lVar1 = param_1[10];
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  local_38 = 2;
  *local_40 = &PTR_LAB_14b4f5770;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b4f5700;
  local_40[3] = param_1;
  FUN_14587066e(lVar1 + 0x78,&local_50,&local_40);
  FUN_1449db362(&local_40);
  param_1[0xc] = local_50;
  lVar1 = param_1[10];
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  local_38 = 2;
  *local_40 = &PTR_LAB_14b4f5850;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14b4f57e0;
  local_40[3] = param_1;
  FUN_145870748(lVar1 + 0x90,&local_50,&local_40);
  FUN_1449db362(&local_40);
  param_1[0xd] = local_50;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145870594 FUN_145870594 body=216 status=ok
// SIG undefined FUN_145870594(void)

undefined8 * FUN_145870594(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14587066e FUN_14587066e body=216 status=ok
// SIG undefined FUN_14587066e(void)

undefined8 * FUN_14587066e(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145870748 FUN_145870748 body=216 status=ok
// SIG undefined FUN_145870748(void)

undefined8 * FUN_145870748(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145870822 FUN_145870822 body=132 status=ok
// SIG undefined FUN_145870822(void)

void FUN_145870822(longlong param_1,int param_2)

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



// FUNCTION 1458708a6 FUN_1458708a6 body=507 status=ok
// SIG undefined FUN_1458708a6(void)

undefined8 FUN_1458708a6(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar1 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xf0);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xf8) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      uVar3 = 0;
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0xc) == param_2) {
          FUN_140b6c1c2(*param_3,*(undefined4 *)(param_3 + 1));
          *(undefined4 *)(param_3 + 1) = 0;
          if (*(int *)((longlong)param_3 + 0xc) != 0) {
            FUN_14127d7f4(param_3,0);
          }
          if (*(int *)(param_1 + 0x388) == *(int *)(param_1 + 0x3b4)) goto LAB_14587099e;
          lVar1 = param_1 + 0x3b8;
          if (*(longlong *)(param_1 + 0x3c0) != 0) {
            lVar1 = *(longlong *)(param_1 + 0x3c0);
          }
          iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x3c8) - 1U & param_2) * 4);
          if (iVar2 == -1) goto LAB_14587099e;
          goto LAB_145870973;
        }
        iVar2 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar2 * 0xc + 4);
      } while (iVar2 != -1);
      goto LAB_145870a35;
    }
  }
  uVar3 = 0;
  goto LAB_145870a35;
  while (iVar2 = *(int *)(lVar1 + 0x58), iVar2 != -1) {
LAB_145870973:
    lVar1 = *(longlong *)(param_1 + 0x380) + (longlong)iVar2 * 0x60;
    if (*(uint *)(*(longlong *)(param_1 + 0x380) + (longlong)iVar2 * 0x60) == param_2) {
      if ((lVar1 != 0) && (lVar1 + 8 != 0)) {
        FUN_14127d5bc(lVar1 + 8,param_3);
      }
      break;
    }
  }
LAB_14587099e:
  uVar3 = 1;
  if (*(int *)(param_1 + 0x3d8) != *(int *)(param_1 + 0x404)) {
    lVar1 = param_1 + 0x408;
    if (*(longlong *)(param_1 + 0x410) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x410);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x418) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x3d0) + (longlong)iVar2 * 0x60;
        if (*(uint *)(*(longlong *)(param_1 + 0x3d0) + (longlong)iVar2 * 0x60) == param_2) {
          if ((lVar1 != 0) && (lVar1 + 8 != 0)) {
            local_38 = 0;
            uStack_30 = 0;
            FUN_14127d5bc(lVar1 + 8,&local_38);
            FUN_14127d55e(param_3,&local_38);
            FUN_140b6c1c2(local_38,uStack_30 & 0xffffffff);
            if (local_38 != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x58);
      } while (iVar2 != -1);
    }
  }
LAB_145870a35:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 145870aa2 FUN_145870aa2 body=1811 status=ok
// SIG undefined FUN_145870aa2(void)

longlong * FUN_145870aa2(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  void *pvVar8;
  void *pvVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  void *pvVar14;
  longlong lVar15;
  void *pvVar16;
  void *pvVar17;
  uint uVar18;
  longlong lVar19;
  void *pvVar20;
  void *pvVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_528 [32];
  ulonglong local_508;
  longlong *local_500;
  void *local_4f8;
  void *local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  undefined4 local_4d8 [188];
  longlong local_1e8 [52];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_528;
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0x700) != 0) {
    lVar19 = *(longlong *)(param_1 + 0x6f8);
    lVar15 = (longlong)*(int *)(param_1 + 0x700) * 0x1a0;
    do {
      if ((&DAT_149fc1b6e)[*(byte *)(lVar19 + 0x48)] == '\x01') {
        if ((*(longlong **)(lVar19 + 0x38) == (longlong *)0x0) ||
           (cVar3 = (**(code **)(**(longlong **)(lVar19 + 0x38) + 0x28))(), cVar3 == '\0'))
        goto LAB_145870b55;
LAB_145870b82:
        plVar7 = (longlong *)FUN_1408e4caa(lVar19 + 0x30);
        (**(code **)(*plVar7 + 0x10))(plVar7,&local_4e8);
        FUN_1446f470e(local_1e8,L"SHIFT",1);
        bVar22 = local_4e8 != local_1e8[0];
      }
      else {
        if ((*(uint *)(lVar19 + 0x38) & 0xffffff) != 0) goto LAB_145870b82;
LAB_145870b55:
        bVar22 = false;
      }
      if ((1 < *(int *)(lVar19 + 0x68)) && (bVar22 || param_3 != '\x01')) {
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_148da0806(param_2,iVar4);
        }
        FUN_148da0712((longlong)iVar4 * 0x1a0 + *param_2);
      }
      lVar19 = lVar19 + 0x1a0;
      lVar15 = lVar15 + -0x1a0;
    } while (lVar15 != 0);
    iVar4 = (int)param_2[1];
    if (1 < (longlong)iVar4) {
      lVar19 = *param_2;
      memset(local_4d8,0,0x2f0);
      local_4e0 = (longlong)iVar4 * 0x1a0 + lVar19 + -0x1a0;
      local_4e8 = lVar19;
      fVar23 = logf((float)iVar4);
      local_4d8[0] = (undefined4)(longlong)(fVar23 + fVar23);
      local_500 = &local_4e8;
      do {
        pvVar20 = (void *)*local_500;
        pvVar17 = (void *)local_500[1];
        iVar4 = (int)((ulonglong)((longlong)pvVar17 - (longlong)pvVar20) >> 5) * -0x3b13b13b;
        uVar18 = iVar4 + 1;
        local_508 = CONCAT44(local_508._4_4_,(int)local_500[2]);
        pvVar21 = pvVar20;
        pvVar16 = pvVar17;
        if ((int)local_500[2] != 0) {
LAB_145870c5d:
          local_4f0 = pvVar16;
          local_4f8 = pvVar21;
          pvVar21 = pvVar20;
          if (8 < (int)uVar18) {
            pvVar20 = (void *)((ulonglong)(uVar18 >> 1) * 0x1a0 + (longlong)pvVar21);
            memcpy(local_1e8,pvVar20,0x1a0);
            memcpy(pvVar20,pvVar21,0x1a0);
            memcpy(pvVar21,local_1e8,0x1a0);
            pvVar9 = (void *)((longlong)pvVar17 + 0x1a0);
            pvVar20 = pvVar21;
            do {
              pvVar16 = (void *)((longlong)pvVar20 + 0x1a0);
              pvVar2 = (void *)((longlong)pvVar20 + 0x1a0);
              do {
                pvVar20 = pvVar2;
                pvVar8 = pvVar16;
                if (pvVar17 < pvVar20) break;
                pvVar16 = (void *)((longlong)pvVar8 + 0x1a0);
                pvVar2 = (void *)((longlong)pvVar20 + 0x1a0);
              } while (*(longlong *)((longlong)pvVar21 + 400) <=
                       *(longlong *)((longlong)pvVar20 + 400));
              pvVar2 = (void *)((longlong)pvVar9 + -0x340);
              do {
                pvVar14 = pvVar9;
                pvVar16 = pvVar2;
                pvVar9 = (void *)((longlong)pvVar14 + -0x1a0);
                if (pvVar9 <= pvVar21) break;
                pvVar2 = (void *)((longlong)pvVar16 + -0x1a0);
              } while (*(longlong *)((longlong)pvVar14 + -0x10) <=
                       *(longlong *)((longlong)pvVar21 + 400));
              if (pvVar9 < pvVar20) goto LAB_145870d66;
              memcpy(local_1e8,pvVar20,0x1a0);
              memcpy(pvVar20,pvVar9,0x1a0);
              memcpy(pvVar9,local_1e8,0x1a0);
            } while( true );
          }
          for (; pvVar20 = pvVar21, pvVar16 = pvVar21, pvVar21 < pvVar17;
              pvVar17 = (void *)((longlong)pvVar17 + -0x1a0)) {
            while (pvVar9 = pvVar20, pvVar20 = (void *)((longlong)pvVar16 + 0x1a0),
                  pvVar20 <= pvVar17) {
              plVar7 = (longlong *)((longlong)pvVar16 + 0x330);
              pvVar16 = pvVar20;
              if (*(longlong *)((longlong)pvVar9 + 400) <= *plVar7) {
                pvVar20 = pvVar9;
              }
            }
            memcpy(local_1e8,pvVar9,0x1a0);
            memcpy(pvVar9,pvVar17,0x1a0);
            memcpy(pvVar17,local_1e8,0x1a0);
          }
          goto LAB_145871163;
        }
LAB_145870e5e:
        if (uVar18 != 0) {
          local_508 = (ulonglong)(uint)((iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1);
          do {
            uVar5 = (uint)local_508;
            uVar13 = local_508;
            while (uVar1 = uVar5 * 2 + 1, (int)uVar1 < (int)uVar18) {
              uVar10 = uVar5 * 2 + 2;
              uVar5 = uVar1;
              if (((int)uVar10 < (int)uVar18) &&
                 (*(longlong *)((longlong)pvVar20 + (longlong)(int)uVar10 * 0x1a0 + 400) <=
                  *(longlong *)((longlong)pvVar20 + (longlong)(int)uVar1 * 0x1a0 + 400))) {
                uVar5 = uVar10;
              }
              lVar19 = (longlong)(int)uVar13 * 0x1a0;
              if (*(longlong *)((longlong)pvVar20 + lVar19 + 400) <=
                  *(longlong *)((longlong)pvVar20 + (longlong)(int)uVar5 * 0x1a0 + 400)) break;
              pvVar17 = (void *)(lVar19 + (longlong)pvVar20);
              pvVar21 = (void *)((longlong)(int)uVar5 * 0x1a0 + (longlong)pvVar20);
              memcpy(local_1e8,pvVar17,0x1a0);
              memcpy(pvVar17,pvVar21,0x1a0);
              memcpy(pvVar21,local_1e8,0x1a0);
              uVar13 = (ulonglong)uVar5;
            }
            iVar4 = (int)local_508;
            local_508 = (ulonglong)(iVar4 - 1);
          } while (iVar4 != 0);
          if (1 < (int)uVar18) {
            pvVar17 = (void *)(((ulonglong)uVar18 - 1) * 0x1a0 + (longlong)pvVar20);
            memcpy(local_1e8,pvVar20,0x1a0);
            memcpy(pvVar20,pvVar17,0x1a0);
            memcpy(pvVar17,local_1e8,0x1a0);
            uVar13 = (ulonglong)uVar18 - 1;
            if (uVar18 != 2) {
              do {
                iVar6 = 0;
                iVar12 = 1;
                iVar4 = 0;
                do {
                  iVar6 = iVar6 + 2;
                  iVar11 = iVar12;
                  if (((longlong)iVar6 < (longlong)uVar13) &&
                     (*(longlong *)((longlong)pvVar20 + (longlong)iVar6 * 0x1a0 + 400) <=
                      *(longlong *)((longlong)pvVar20 + (longlong)iVar12 * 0x1a0 + 400))) {
                    iVar11 = iVar6;
                  }
                  if (*(longlong *)((longlong)pvVar20 + (longlong)iVar4 * 0x1a0 + 400) <=
                      *(longlong *)((longlong)pvVar20 + (longlong)iVar11 * 0x1a0 + 400)) break;
                  pvVar17 = (void *)((longlong)iVar4 * 0x1a0 + (longlong)pvVar20);
                  pvVar21 = (void *)((longlong)iVar11 * 0x1a0 + (longlong)pvVar20);
                  memcpy(local_1e8,pvVar17,0x1a0);
                  memcpy(pvVar17,pvVar21,0x1a0);
                  memcpy(pvVar21,local_1e8,0x1a0);
                  iVar6 = iVar11 * 2;
                  iVar12 = iVar11 * 2 + 1;
                  iVar4 = iVar11;
                } while ((longlong)iVar12 < (longlong)uVar13);
                pvVar17 = (void *)((uVar13 - 1) * 0x1a0 + (longlong)pvVar20);
                memcpy(local_1e8,pvVar20,0x1a0);
                memcpy(pvVar20,pvVar17,0x1a0);
                memcpy(pvVar17,local_1e8,0x1a0);
                bVar22 = 2 < uVar13;
                uVar13 = uVar13 - 1;
              } while (bVar22);
            }
          }
        }
LAB_145871163:
        local_500 = local_500 + -3;
      } while (&local_4e8 <= local_500);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_528) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_145870d66:
  memcpy(local_1e8,pvVar21,0x1a0);
  memcpy(pvVar21,pvVar9,0x1a0);
  memcpy(pvVar9,local_1e8,0x1a0);
  iVar6 = (int)local_508 + -1;
  local_508 = CONCAT44(local_508._4_4_,iVar6);
  pvVar14 = (void *)((longlong)pvVar14 + -0x340);
  if ((longlong)pvVar16 - (longlong)local_4f8 < (longlong)local_4f0 - (longlong)pvVar8) {
    if (pvVar20 < pvVar17) {
      *local_500 = (longlong)pvVar20;
      local_500[1] = (longlong)pvVar17;
      *(int *)(local_500 + 2) = iVar6;
      local_500 = local_500 + 3;
    }
    pvVar20 = pvVar21;
    if (pvVar9 <= (void *)((longlong)pvVar21 + 0x1a0U)) goto LAB_145871163;
  }
  else {
    if ((void *)((longlong)pvVar21 + 0x1a0U) < pvVar9) {
      *local_500 = (longlong)pvVar21;
      local_500[1] = (longlong)pvVar14;
      *(int *)(local_500 + 2) = iVar6;
      local_500 = local_500 + 3;
    }
    pvVar21 = pvVar8;
    pvVar14 = pvVar17;
    pvVar16 = pvVar17;
    if (pvVar17 <= pvVar20) goto LAB_145871163;
  }
  iVar4 = (int)((ulonglong)((longlong)pvVar16 - (longlong)pvVar21) >> 5) * -0x3b13b13b;
  uVar18 = iVar4 + 1;
  pvVar17 = pvVar14;
  local_4f8 = pvVar21;
  local_4f0 = pvVar16;
  if (iVar6 == 0) goto LAB_145870e5e;
  goto LAB_145870c5d;
}



// FUNCTION 1458711b6 FUN_1458711b6 body=38 status=ok
// SIG undefined FUN_1458711b6(void)

undefined8 FUN_1458711b6(undefined8 param_1,int param_2)

{
  FUN_1458711dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1458711dc FUN_1458711dc body=153 status=ok
// SIG undefined FUN_1458711dc(void)

void FUN_1458711dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9c6f40;
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x59],*(undefined4 *)(param_1 + 0x5a));
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 145871276 FUN_145871276 body=231 status=ok
// SIG undefined FUN_145871276(void)

void FUN_145871276(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x408;
  FUN_14587135e();
  (**(code **)(*(longlong *)(param_1 + -0x408) + 0x578))(lVar1);
  *(undefined1 *)(param_1 + 0xf63) = 1;
  if (((*(longlong *)(param_1 + 0xa08) == 0) ||
      (*(char *)(*(longlong *)(param_1 + 0xa08) + 0x695) == '\x01')) &&
     ((*(char *)(param_1 + -0x290) == '\x03' || ((*(byte *)(param_1 + -0x3a8) & 1) != 0)))) {
    *(undefined4 *)(param_1 + 0xd4c) = 0x3f800000;
    *(byte *)(param_1 + 0xd49) = *(byte *)(param_1 + 0xd49) | 2;
    if (*(longlong *)(param_1 + 0xa30) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xa30) + 0x1a8) = 0x3f800000;
    }
  }
  if ((*(char *)(param_1 + 0xf64) == '\0') &&
     ((*(char *)(param_1 + -0x290) == '\x03' || ((*(byte *)(param_1 + -0x3a8) & 1) != 0)))) {
    *(undefined1 *)(param_1 + 0xf64) = 1;
    (**(code **)(*(longlong *)(param_1 + -0x408) + 0x688))(lVar1);
    (**(code **)(*(longlong *)(param_1 + -0x408) + 0x690))(lVar1);
  }
  FUN_141180862(lVar1);
  FUN_1447cd2ec(param_1 + 0xf40,0);
  return;
}



// FUNCTION 14587135e FUN_14587135e body=12 status=ok
// SIG undefined FUN_14587135e(void)

void FUN_14587135e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145871367. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,0);
  return;
}



// FUNCTION 14587136a FUN_14587136a body=2673 status=ok
// SIG undefined FUN_14587136a(void)

void FUN_14587136a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_145871de4();
  local_68 = 0;
  local_78 = 0;
  local_70 = 1;
  local_80 = 0;
  local_90 = 8;
  local_88 = 1;
  local_98 = 0;
  local_a8 = 3;
  local_a0 = 1;
  local_b0 = 0;
  local_c0 = 2;
  local_b8 = 1;
  FUN_1446f470e(&local_d8,L"ResourcePoolManager",1);
  uVar1 = FUN_144a2f878();
  FUN_144a2f878();
  uVar1 = FUN_140f1fabf(uVar1,local_d8);
  local_c8 = 0;
  local_d8 = (wchar_t *)0x0;
  puStack_d0 = (undefined1 *)0x0;
  FUN_140f1fa23(uVar1,param_2,&local_d8);
  local_d8 = L"HealthState";
  puStack_d0 = (undefined1 *)0x10000002b;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"HealthCondition";
  puStack_d0 = &DAT_10000002c;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"DeathType";
  puStack_d0 = (undefined1 *)0x10000002d;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"ReplicatedDownState";
  puStack_d0 = (undefined1 *)0x100000040;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"bActorSucessfullyRevived";
  puStack_d0 = (undefined1 *)0x100000041;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"ActorBeingRevived";
  puStack_d0 = (undefined1 *)0x100000042;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"AICharacterState";
  puStack_d0 = (undefined1 *)0x10000003b;
  FUN_140c2c993(&local_d8,param_2,&local_90);
  FUN_1446f470e(&local_d8,L"EquippedInventorySlots",1);
  uVar1 = FUN_144a2f878();
  FUN_144a2f878();
  uVar1 = FUN_140f1fabf(uVar1,local_d8);
  local_d8 = (wchar_t *)0x0;
  puStack_d0 = (undefined1 *)0x0;
  local_c8 = FUN_145871ddc();
  FUN_140f1fa23(uVar1,param_2,&local_d8);
  local_d8 = L"bWeaponsRestricted";
  puStack_d0 = (undefined1 *)0x100000032;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"WeaponLoweredFlags";
  puStack_d0 = (undefined1 *)0x100000033;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"InventoryAugmentEffects";
  puStack_d0 = (undefined1 *)0x100000034;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"CarrierState";
  puStack_d0 = (undefined1 *)0x10000004f;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"GrapplerState";
  puStack_d0 = (undefined1 *)0x10000004d;
  FUN_140c2c993(&local_d8,param_2,&local_a8);
  local_d8 = L"GrappleableState";
  puStack_d0 = (undefined1 *)0x10000004e;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"bCanUseWeaponWhileSprinting";
  puStack_d0 = (undefined1 *)0x100000037;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"bCanZoomWhileSprinting";
  puStack_d0 = &DAT_100000038;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"bCanZoomWhileInjured";
  puStack_d0 = (undefined1 *)0x100000043;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"ReplicatedZoomState";
  puStack_d0 = (undefined1 *)0x100000050;
  FUN_140c2c993(&local_d8,param_2,&local_a8);
  local_d8 = L"NPCInteractionRepState";
  puStack_d0 = (undefined1 *)0x100000049;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"UsableActorState";
  puStack_d0 = (undefined1 *)0x100000029;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"WeaponTargetLocks";
  puStack_d0 = (undefined1 *)0x100000031;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"ReplicatedEquipmentLockMask";
  puStack_d0 = (undefined1 *)0x100000035;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"CinematicViewConsumerState";
  puStack_d0 = &DAT_100000068;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  FUN_1446f470e(&local_d8,L"GbxProgressionManager",1);
  uVar1 = FUN_144a2f878();
  FUN_144a2f878();
  uVar1 = FUN_140f1fabf(uVar1,local_d8);
  local_c8 = 0;
  local_d8 = (wchar_t *)0x0;
  puStack_d0 = (undefined1 *)0x0;
  FUN_140f1fa23(uVar1,param_2,&local_d8);
  local_d8 = L"MeleeState";
  puStack_d0 = (undefined1 *)0x10000004a;
  FUN_140c2c993(&local_d8,param_2,&local_a8);
  local_d8 = L"bCanBeExecuted";
  puStack_d0 = (undefined1 *)0x10000004b;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"MeleeExecutionState";
  puStack_d0 = (undefined1 *)0x10000004c;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"AICloakState";
  puStack_d0 = (undefined1 *)0x100000069;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"OakTraitContainer";
  puStack_d0 = (undefined1 *)0x10000006d;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"bUseOverheadNameplateOverride";
  puStack_d0 = (undefined1 *)0x100000048;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"UXNameRepData";
  puStack_d0 = (undefined1 *)0x100000047;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"WeaponSwapTimeScale";
  puStack_d0 = (undefined1 *)0x10000002f;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"GoreState";
  puStack_d0 = &DAT_10000006c;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  FUN_1446f470e(&local_d8,L"GbxStatusEffectPresentationList",1);
  uVar1 = FUN_144a2f878();
  FUN_144a2f878();
  uVar1 = FUN_140f1fabf(uVar1,local_d8);
  local_d8 = (wchar_t *)0x0;
  puStack_d0 = (undefined1 *)0x0;
  local_c8 = FUN_145871de0();
  FUN_140f1fa23(uVar1,param_2,&local_d8);
  local_d8 = L"CoverUserState";
  puStack_d0 = (undefined1 *)0x100000067;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"AITargetLockState";
  puStack_d0 = (undefined1 *)0x10000006b;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"OverkillThresholdScalar";
  puStack_d0 = (undefined1 *)0x10000006e;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"IdleTrickPlayCount";
  puStack_d0 = (undefined1 *)0x10000003a;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"HauntedMutex";
  puStack_d0 = (undefined1 *)0x100000051;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"ReplicatedFreezeState";
  puStack_d0 = (undefined1 *)0x100000071;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"OrderRewindState";
  puStack_d0 = (undefined1 *)0x10000006f;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"OakStatusEffectContainer";
  puStack_d0 = &DAT_10000003c;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"bIsEntangled";
  puStack_d0 = (undefined1 *)0x100000052;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"ReplicatedDeathHitReactionState";
  puStack_d0 = (undefined1 *)0x100000046;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"AllowForcedGadgetUse";
  puStack_d0 = (undefined1 *)0x100000070;
  FUN_140c2c993(&local_d8,param_2,&local_c0);
  local_d8 = L"MovementLockReplicator";
  puStack_d0 = (undefined1 *)0x100000039;
  FUN_140c2c993(&local_d8,param_2,&local_c0);
  local_d8 = L"FirmwareManager";
  puStack_d0 = &DAT_100000030;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"VehicleDriverComponent";
  puStack_d0 = (undefined1 *)0x100000044;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"bWaitingForSpawnTrick";
  puStack_d0 = (undefined1 *)0x10000006a;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"ReplicatedAttachedParticles";
  puStack_d0 = (undefined1 *)0x10000002e;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"ReplicatedPlayerStats";
  puStack_d0 = (undefined1 *)0x1400000053;
  FUN_140c2c993(&local_d8,param_2,&local_c0);
  local_d8 = L"ActionSkillLock";
  puStack_d0 = (undefined1 *)0x10000003e;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  local_d8 = L"IsDeadFromLavaWaterBody";
  puStack_d0 = (undefined1 *)0x100000036;
  FUN_140c2c993(&local_d8,param_2,&local_78);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145871ddc FUN_145871ddc body=3 status=ok
// SIG undefined FUN_145871ddc(void)

undefined8 FUN_145871ddc(void)

{
  return 0;
}



// FUNCTION 145871de0 FUN_145871de0 body=3 status=ok
// SIG undefined FUN_145871de0(void)

undefined8 FUN_145871de0(void)

{
  return 0;
}



// FUNCTION 145871de4 FUN_145871de4 body=778 status=ok
// SIG undefined FUN_145871de4(void)

void FUN_145871de4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1458720f4();
  local_38 = 0;
  local_48 = 0;
  local_40 = 1;
  local_50 = 0;
  local_60 = 4;
  local_58 = 1;
  local_68 = 0;
  local_78 = 2;
  local_70 = 1;
  local_98 = L"GameStage";
  puStack_90 = &DAT_10000001c;
  FUN_140c2c993(&local_98,param_2,&local_48);
  local_98 = L"GbxActorData";
  puStack_90 = (undefined1 *)0x10000001b;
  FUN_140c2c993(&local_98,param_2,&local_48);
  local_98 = L"RotationState";
  puStack_90 = (undefined1 *)0x10000001d;
  FUN_140c2c993(&local_98,param_2,&local_48);
  local_98 = L"RemoteControlPitch";
  puStack_90 = &DAT_10000001f;
  FUN_140c2c993(&local_98,param_2,&local_60);
  local_98 = L"RemoteControlYaw";
  puStack_90 = (undefined1 *)0x10000001e;
  FUN_140c2c993(&local_98,param_2,&local_60);
  local_98 = L"ForwardDynamicsState";
  puStack_90 = (undefined1 *)0x100000022;
  FUN_140c2c993(&local_98,param_2,&local_48);
  local_98 = L"ReplicatedGestaltPartsList";
  puStack_90 = (undefined1 *)0x100000023;
  FUN_140c2c993(&local_98,param_2,&local_48);
  local_98 = L"VisibilityPhaseState";
  puStack_90 = &DAT_100000024;
  FUN_140c2c993(&local_98,param_2,&local_48);
  local_98 = L"GbxActorPartOwnerState";
  puStack_90 = &DAT_100000028;
  FUN_140c2c993(&local_98,param_2,&local_48);
  local_98 = L"OxygenConsumerState";
  puStack_90 = (undefined1 *)0x100000025;
  FUN_140c2c993(&local_98,param_2,&local_78);
  local_98 = L"GbxDialogSpeaker";
  puStack_90 = &DAT_100000027;
  FUN_140c2c993(&local_98,param_2,&local_48);
  FUN_1446f470e(&local_98,L"AppearanceNetChannels",1);
  uVar1 = FUN_144a78b9e();
  FUN_144a78b9e();
  uVar1 = FUN_140f1fabf(uVar1,local_98);
  local_98 = (wchar_t *)0x0;
  puStack_90 = (undefined1 *)0x0;
  local_88 = FUN_1458720f0();
  FUN_140f1fa23(uVar1,param_2,&local_98);
  local_98 = L"FactsConduit";
  puStack_90 = (undefined1 *)0x100000021;
  FUN_140c2c993(&local_98,param_2,&local_48);
  local_98 = L"NetAttachableBodies";
  puStack_90 = (undefined1 *)0x10000001a;
  FUN_140c2c993(&local_98,param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458720f0 FUN_1458720f0 body=3 status=ok
// SIG undefined FUN_1458720f0(void)

undefined8 FUN_1458720f0(void)

{
  return 0;
}



// FUNCTION 1458720f4 FUN_1458720f4 body=118 status=ok
// SIG undefined FUN_1458720f4(void)

void FUN_1458720f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14587216c();
  local_18 = 0;
  local_28 = 3;
  local_20 = 1;
  local_38 = L"ReplicatedStance";
  local_30 = 0x100000019;
  FUN_140c2c993(&local_38,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587216c FUN_14587216c body=933 status=ok
// SIG undefined FUN_14587216c(void)

void FUN_14587216c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1458725b2();
  FUN_1446f470e(&local_40,L"JumpMaxHoldTime",1);
  uVar1 = FUN_144a7cacc();
  uVar2 = FUN_144a7cacc();
  FUN_145872512(uVar2,uVar1,local_40,param_2);
  FUN_1446f470e(&local_48,L"JumpMaxCount",1);
  uVar1 = FUN_144a7cacc();
  uVar2 = FUN_144a7cacc();
  FUN_145872512(uVar2,uVar1,local_48,param_2);
  local_50 = 0;
  local_58 = 0;
  local_60 = 4;
  FUN_1446f470e(&local_68,L"RepRootMotion",1);
  uVar1 = FUN_144a7cacc();
  FUN_144a7cacc();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  FUN_140f1fa23(uVar1,param_2,&local_60);
  local_50 = 0;
  local_58 = 0;
  local_60 = 4;
  FUN_1446f470e(&local_68,L"ReplicatedBasedMovement",1);
  uVar1 = FUN_144a7cacc();
  FUN_144a7cacc();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  FUN_140f1fa23(uVar1,param_2,&local_60);
  local_50 = 0;
  local_58 = 0;
  local_60 = 0xb;
  FUN_1446f470e(&local_68,L"ReplicatedServerLastTransformUpdateTimeStamp",1);
  uVar1 = FUN_144a7cacc();
  FUN_144a7cacc();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  FUN_140f1fa23(uVar1,param_2,&local_60);
  local_50 = 0;
  local_58 = 0;
  local_60 = 4;
  FUN_1446f470e(&local_68,L"ReplicatedMovementMode",1);
  uVar1 = FUN_144a7cacc();
  FUN_144a7cacc();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  FUN_140f1fa23(uVar1,param_2,&local_60);
  local_50 = 0;
  local_58 = 0;
  local_60 = 4;
  FUN_1446f470e(&local_68,L"bIsCrouched",1);
  uVar1 = FUN_144a7cacc();
  FUN_144a7cacc();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  FUN_140f1fa23(uVar1,param_2,&local_60);
  local_50 = 0;
  local_58 = 0;
  local_60 = 4;
  FUN_1446f470e(&local_68,L"bProxyIsJumpForceApplied",1);
  uVar1 = FUN_144a7cacc();
  FUN_144a7cacc();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  FUN_140f1fa23(uVar1,param_2,&local_60);
  local_50 = 0;
  local_58 = 0;
  local_60 = 4;
  FUN_1446f470e(&local_68,L"AnimRootMotionTranslationScale",1);
  uVar1 = FUN_144a7cacc();
  FUN_144a7cacc();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  FUN_140f1fa23(uVar1,param_2,&local_60);
  local_50 = 0;
  local_58 = 0;
  local_60 = 4;
  FUN_1446f470e(&local_68,L"ReplicatedGravityDirection",1);
  uVar1 = FUN_144a7cacc();
  FUN_144a7cacc();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  FUN_140f1fa23(uVar1,param_2,&local_60);
  local_50 = 0;
  local_58 = 0;
  local_60 = 10;
  FUN_1446f470e(&local_68,L"ReplayLastTransformUpdateTimeStamp",1);
  uVar1 = FUN_144a7cacc();
  FUN_144a7cacc();
  uVar1 = FUN_140f1fabf(uVar1,local_68);
  FUN_140f1fa23(uVar1,param_2,&local_60);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145872512 FUN_145872512 body=158 status=ok
// SIG undefined FUN_145872512(void)

void FUN_145872512(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  uint local_38;
  undefined4 local_34;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_140f1fabf(param_2,param_3);
  if (lVar1 != 0) {
    FUN_1400021e4(lVar1 + 0x20,&local_30);
    local_34 = *(undefined4 *)(lVar1 + 0x30);
    local_40 = local_30;
    if (local_28 == 0) {
      local_40 = &DAT_149dfb77a;
    }
    local_38 = (uint)*(ushort *)(lVar1 + 0x40);
    FUN_14127e9f8(&local_40,param_4);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458725b2 FUN_1458725b2 body=312 status=ok
// SIG undefined FUN_1458725b2(void)

void FUN_1458725b2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_58,L"PlayerState",1);
  uVar1 = FUN_144a7cbb2();
  FUN_144a7cbb2();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"Controller",1);
  uVar1 = FUN_144a7cbb2();
  FUN_144a7cbb2();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  local_48 = 0;
  uStack_50 = uStack_50 & 0xffffffffffffff00;
  local_58 = 3;
  FUN_1446f470e(&local_60,L"RemoteViewPitch",1);
  uVar1 = FUN_144a7cbb2();
  FUN_144a7cbb2();
  uVar1 = FUN_140f1fabf(uVar1,local_60);
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458726ec FUN_1458726ec body=230 status=ok
// SIG undefined FUN_1458726ec(void)

void FUN_1458726ec(undefined8 param_1,longlong param_2)

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
  FUN_1458727d4(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458727d4 FUN_1458727d4 body=87 status=ok
// SIG undefined FUN_1458727d4(void)

void FUN_1458727d4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      iVar1 = FUN_14490d72a(lVar2);
      if (iVar1 != 3) {
        lVar2 = FUN_1412af310(lVar2);
        if (lVar2 != 0) {
          FUN_14127ea9c(lVar2,param_1,param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14587282c FUN_14587282c body=241 status=ok
// SIG undefined FUN_14587282c(void)

void FUN_14587282c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1 + -0x30;
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(lVar2);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_1400d6ce6();
    if (lVar1 != 0) {
      local_40 = FUN_1458f401a;
      local_38 = 0;
      FUN_145872a1e(lVar1 + 400,local_30,lVar2,&local_40);
      local_40 = FUN_145983660;
      local_38 = 0;
      FUN_14587291e(lVar1 + 0x160,local_30,lVar2,&local_40);
      local_40 = (code *)&DAT_14598365e;
      local_38 = 0;
      FUN_14587291e(lVar1 + 0x178,local_30,lVar2,&local_40);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587291e FUN_14587291e body=254 status=ok
// SIG undefined FUN_14587291e(void)

undefined8
FUN_14587291e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_FUN_14b9af7c0;
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



// FUNCTION 145872a1e FUN_145872a1e body=254 status=ok
// SIG undefined FUN_145872a1e(void)

undefined8
FUN_145872a1e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b9a7080;
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
  *local_48 = &PTR_FUN_14b9af750;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14127eb6a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145872b1d FUN_145872b1d body=504 status=ok
// SIG undefined FUN_145872b1d(void)

longlong FUN_145872b1d(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  longlong local_f8;
  undefined1 local_f0 [8];
  undefined1 local_e8 [112];
  longlong local_78;
  longlong *local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1403679b6(&local_78);
  if (((local_78 != 0) && (local_70 != (longlong *)0x0)) && (0 < (int)local_70[1])) {
    iVar4 = (int)local_70[1];
    do {
      if (iVar4 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_70[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(local_70 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar8 = local_70;
    } while (!bVar9);
    lVar5 = 0;
    if (plVar8 != (longlong *)0x0) {
      lVar5 = local_78;
    }
    lVar5 = FUN_141136cb6(lVar5);
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
    if (lVar5 != 0) {
      puVar7 = &DAT_14c9485f0;
      if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
        puVar7 = *(undefined4 **)(param_1 + 8);
      }
      FUN_1447325ac(puVar7,local_f0,1);
      FUN_1411374b4(local_e8,*(undefined8 *)(lVar5 + 0xa8),local_f0,&DAT_14c846480);
      local_100 = *param_3;
      local_f8 = param_3[1];
      if (local_f8 != 0) {
        LOCK();
        *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
        UNLOCK();
      }
      uVar6 = FUN_145872d16(local_e8,&local_100);
      local_58 = 0;
      local_48 = &PTR_LAB_14b422cd0;
      local_40 = FUN_145e4e4f2;
      local_68 = &LAB_145e4e4e8;
      uVar6 = FUN_140faf186(uVar6);
      lVar5 = FUN_14127ef9a(uVar6);
      FUN_14119d0c2(local_e8);
      if (lVar5 != 0) {
        FUN_140c7ce82(lVar5,0);
        goto LAB_145872c7e;
      }
    }
  }
  lVar5 = 0;
LAB_145872c7e:
  if (local_70 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_70 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  plVar8 = (longlong *)param_3[1];
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
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 145872d16 FUN_145872d16 body=141 status=ok
// SIG undefined FUN_145872d16(void)

longlong FUN_145872d16(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(lVar5 + 0xb8);
  *(undefined8 *)(lVar5 + 0xb0) = uVar3;
  *(longlong *)(lVar5 + 0xb8) = lVar4;
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
  plVar6 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 145872da4 FUN_145872da4 body=88 status=ok
// SIG undefined FUN_145872da4(void)

void FUN_145872da4(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0xf0 + *param_1);
  FUN_140368b56(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0xf0),(longlong)(int)(~param_2 + iVar1) * 0xf0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_145872dfc(param_1);
  return;
}



// FUNCTION 145872dfc FUN_145872dfc body=63 status=ok
// SIG undefined FUN_145872dfc(void)

void FUN_145872dfc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145872e92(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xf0,8);
  }
  return;
}



// FUNCTION 145872e3c FUN_145872e3c body=85 status=ok
// SIG undefined FUN_145872e3c(void)

void FUN_145872e3c(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0xc;
  lVar5 = (longlong)*(int *)(lVar1 + 8);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0xc + 4);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 4);
  FUN_145872efa();
  return;
}



// FUNCTION 145872e92 FUN_145872e92 body=103 status=ok
// SIG undefined FUN_145872e92(void)

ulonglong FUN_145872e92(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0xf0) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0xf0,8);
      uVar1 = uVar1 / 0xf0;
    }
  }
  return uVar1;
}



// FUNCTION 145872efa FUN_145872efa body=116 status=ok
// SIG undefined FUN_145872efa(void)

void FUN_145872efa(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 145872f6e FUN_145872f6e body=169 status=ok
// SIG undefined FUN_145872f6e(void)

bool FUN_145872f6e(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
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



// FUNCTION 145873018 FUN_145873018 body=187 status=ok
// SIG undefined FUN_145873018(void)

void FUN_145873018(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_1447210f0();
    if ((lVar1 != 0) && (lVar1 == param_3)) {
      lVar1 = FUN_1401b2ade(param_2);
      if (lVar1 != 0) {
        lVar2 = FUN_144a5dd5e();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          lVar2 = FUN_1458730d4(lVar1);
          if (lVar2 != 0) {
            lVar1 = FUN_14089002a(lVar1);
            if (lVar1 == param_1 + 0x1a98) {
              FUN_145d24bc2(lVar2 + 0x30);
            }
          }
        }
      }
      FUN_14587318a(param_1);
      FUN_1458732be(param_1,param_2);
      FUN_1412806ea(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1458730d4 FUN_1458730d4 body=105 status=ok
// SIG undefined FUN_1458730d4(void)

void FUN_1458730d4(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_141280604();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14587313e(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587313e FUN_14587313e body=76 status=ok
// SIG undefined FUN_14587313e(void)

void FUN_14587313e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_141280604();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14587317b;
    }
  }
  lVar2 = 0;
LAB_14587317b:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 14587318a FUN_14587318a body=224 status=ok
// SIG undefined FUN_14587318a(void)

void FUN_14587318a(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (0 < *(int *)(param_1 + 0x26c0)) {
    plVar1 = (longlong *)(param_1 + 0x26b8);
    iVar6 = -1;
    lVar8 = 0;
    lVar9 = 0;
    do {
      cVar2 = FUN_144729dda(*plVar1 + lVar8);
      if (cVar2 == '\0') {
        plVar4 = (longlong *)FUN_14479d2ce(*plVar1 + lVar8 + 8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0xa68))(plVar4);
          *(undefined8 *)(*plVar1 + 8 + lVar8) = 0;
        }
        iVar3 = *(int *)(param_1 + 0x26c0);
        iVar5 = iVar6 + iVar3;
        if (iVar5 != 0) {
          iVar7 = 1;
          if (iVar5 < 1) {
            iVar7 = iVar5;
          }
          memmove((void *)(*(longlong *)(param_1 + 0x26b8) + lVar8),
                  (void *)(*(longlong *)(param_1 + 0x26b8) + (longlong)(iVar3 - iVar7) * 0x14),
                  (longlong)iVar7 * 0x14);
          iVar3 = *(int *)(param_1 + 0x26c0);
        }
        *(int *)(param_1 + 0x26c0) = iVar3 + -1;
        FUN_148f128fc(plVar1);
      }
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x14;
      iVar6 = iVar6 + -1;
    } while (lVar9 < *(int *)(param_1 + 0x26c0));
  }
  return;
}



// FUNCTION 14587326a FUN_14587326a body=83 status=ok
// SIG undefined FUN_14587326a(void)

void FUN_14587326a(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  do {
    FUN_1406fd608(param_1,param_2);
    uVar1 = *(undefined4 *)(param_2 + 0xdc);
    uVar2 = *(undefined4 *)(param_2 + 0xe0);
    uVar3 = *(undefined4 *)(param_2 + 0xe4);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xdc) = uVar1;
    *(undefined4 *)(param_1 + 0xe0) = uVar2;
    *(undefined4 *)(param_1 + 0xe4) = uVar3;
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
    param_1 = param_1 + 0xf0;
    param_2 = param_2 + 0xf0;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1458732be FUN_1458732be body=355 status=ok
// SIG undefined FUN_1458732be(void)

void FUN_1458732be(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_2[0x1ef];
  if (lVar1 != 0) {
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x5d8))(param_2);
    if (plVar4 != (longlong *)0x0) {
      lVar5 = FUN_144a5dd5e();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
        cVar2 = (**(code **)(*plVar4 + 0x6c8))(plVar4);
        if (cVar2 != '\0') {
          cVar2 = FUN_1458736ee(param_1,plVar4);
          if (cVar2 != '\0') {
            local_50 = 0;
            FUN_14485c47a(&local_50,plVar4);
            local_48 = local_50;
            iVar3 = FUN_14587393c((longlong *)(param_1 + 0x2668),
                                  (uint)((ulonglong)local_50 >> 0x20) ^ (uint)local_50);
            if (iVar3 != -1) {
              lVar5 = *(longlong *)(param_1 + 0x2668);
              lVar6 = lVar5 + (longlong)iVar3 * 0x20;
              if ((lVar6 != 0) && ((longlong)iVar3 * 0x20 + lVar5 != -8)) {
                lVar5 = FUN_14479d2ce(lVar6 + 0x10);
                if (lVar5 != 0) {
                  iVar3 = *(int *)(lVar1 + 0x34);
                  if (0 < iVar3) {
                    FUN_14472da24(lVar5,DAT_14cbe74d8,(float)iVar3);
                  }
                  if (*(int *)(lVar1 + 0xe8) <= iVar3) {
                    /* WARNING: Subroutine does not return */
                    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587343e FUN_14587343e body=101 status=ok
// SIG undefined FUN_14587343e(void)

undefined8 FUN_14587343e(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0xf0,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x8888888888888889),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0xf0)) {
    uVar5 = uVar2 / 0xf0 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0xf0,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 1458734a4 FUN_1458734a4 body=584 status=ok
// SIG undefined FUN_1458734a4(void)

void FUN_1458734a4(longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x26b8);
  iVar4 = *(int *)(param_1 + 0x26c0);
  if ((longlong)iVar4 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x26b8);
    lVar5 = 0;
    do {
      cVar3 = FUN_141280818(lVar8 + lVar5,param_2);
      if (cVar3 != '\0') {
        iVar4 = (int)(lVar5 >> 2) * -0x33333333;
        if (iVar4 != -1) {
          lVar8 = (longlong)iVar4;
          goto LAB_14587352b;
        }
        break;
      }
      lVar5 = lVar5 + 0x14;
    } while ((longlong)iVar4 * 0x14 != lVar5);
  }
  iVar4 = *(int *)(param_1 + 0x26c0);
  lVar8 = (longlong)iVar4;
  *(uint *)(param_1 + 0x26c0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x26c4) < iVar4 + 1U) {
    FUN_14665f330(plVar1,iVar4);
  }
  lVar5 = *plVar1;
  puVar2 = (undefined8 *)(lVar5 + lVar8 * 0x14);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(lVar5 + 0x10 + lVar8 * 0x14) = 0;
LAB_14587352b:
  if ((*(char *)(*plVar1 + 0x10 + lVar8 * 0x14) == '\0') && (*(longlong *)(param_1 + 0x25f8) != 0))
  {
    lVar5 = *plVar1 + lVar8 * 0x14;
    if (param_3 == '\0') {
      plVar7 = (longlong *)FUN_14479d2ce(lVar5 + 8);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0xa68))(plVar7);
        *(undefined8 *)(*plVar1 + 8 + lVar8 * 0x14) = 0;
      }
    }
    else {
      FUN_14485c47a(lVar5,param_2);
      lVar5 = FUN_14479d2ce(*plVar1 + lVar8 * 0x14 + 8);
      if (lVar5 == 0) {
        lVar5 = FUN_1402d1dc0(*(longlong *)(param_1 + 0x25f8) + 0x460);
        if (lVar5 != 0) {
          uVar6 = FUN_144a545f2(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x25f8) + 0x488),0);
          local_a8 = &local_58;
          local_58 = DAT_14c8464f8;
          uStack_50 = DAT_14c846500;
          local_48 = DAT_14c846508;
          local_78 = (undefined4)DAT_14c8464e0;
          uStack_74 = DAT_14c8464e0._4_4_;
          uStack_70 = (undefined4)DAT_14c8464e8;
          uStack_6c = DAT_14c8464e8._4_4_;
          local_68 = DAT_14c8464f0;
          local_90 = 0;
          local_98 = 0;
          local_88 = 1;
          local_a0 = 2;
          uVar6 = FUN_140a44468(lVar5,uVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x25f8) + 0x488)
                               );
          FUN_140357fa8(uVar6,8,0);
          FUN_140e996a4(uVar6,param_2);
          FUN_14485c47a(*(longlong *)(param_1 + 0x26b8) + lVar8 * 0x14 + 8,uVar6);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458736ee FUN_1458736ee body=589 status=ok
// SIG undefined FUN_1458736ee(void)

ulonglong FUN_1458736ee(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar7 = (longlong *)(param_1 + 0x2668);
  local_50 = 0;
  FUN_14485c47a(&local_50);
  local_68 = local_50;
  iVar2 = FUN_14587393c(plVar7,(uint)((ulonglong)local_50 >> 0x20) ^ (uint)local_50);
  if (iVar2 != -1) {
    local_58 = 0;
    FUN_14485c47a(&local_58,param_2);
    local_68 = local_58;
    iVar2 = FUN_14587393c(plVar7,(uint)((ulonglong)local_58 >> 0x20) ^ (uint)local_58);
    if (iVar2 == -1) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)iVar2 * 0x20 + *plVar7;
    }
    cVar1 = FUN_144729dda(lVar10 + 8);
    if (cVar1 != '\0') {
      cVar1 = FUN_144729dda(lVar10 + 0x10);
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
      if (cVar1 != '\0') goto LAB_145873906;
    }
  }
  local_78 = param_2;
  FUN_145873f2e(param_1);
  local_68 = 0;
  uStack_60 = 0;
  uVar8 = 0;
  FUN_145873a7e(param_1,&local_68,0);
  lVar10 = local_68;
  lVar11 = (longlong)(int)uStack_60;
  if (lVar11 != 0) {
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(lVar10 + lVar9);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x18) == DAT_14cbe74b0)) {
        FUN_14045627c(lVar3,0,1);
        FUN_140e996a4(lVar3,0);
        lVar3 = FUN_145873bc4(param_1);
        if (lVar3 != 0) {
          local_70 = 0;
          FUN_14485c47a(&local_70,local_78);
          lVar4 = FUN_1458739f8(plVar7,(uint)((ulonglong)local_70 >> 0x20) ^ (uint)local_70,
                                &local_70);
          FUN_14485c47a(lVar4,lVar3);
          uVar5 = FUN_14479d2ce(lVar4);
          uVar5 = FUN_1448c9576(uVar5,0);
          lVar6 = FUN_14090ceee(uVar5,param_1,0);
          if (lVar6 != 0) {
            FUN_14485c47a(lVar4 + 8,lVar6);
            FUN_140e996a4(lVar3,local_78);
            plVar7 = (longlong *)FUN_14479d2ce(lVar4);
            (**(code **)(*plVar7 + 0x638))(plVar7,0,lVar6);
            uVar8 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
            goto LAB_14587388d;
          }
        }
      }
      lVar9 = lVar9 + 8;
    } while (lVar11 * 8 != lVar9);
    uVar8 = 0;
  }
LAB_14587388d:
  if (local_68 != 0) {
    FUN_1400020a8(local_68);
  }
LAB_145873906:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14587393c FUN_14587393c body=186 status=ok
// SIG undefined FUN_14587393c(void)

int FUN_14587393c(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_1407052fc(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1458739bc;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1458739bc:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458739f8 FUN_1458739f8 body=133 status=ok
// SIG undefined FUN_1458739f8(void)

longlong FUN_1458739f8(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_145873b0a();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_145873a45;
  }
  local_30 = param_3;
  FUN_145873ca6(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_145873a45:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 8;
}



// FUNCTION 145873a7e FUN_145873a7e body=139 status=ok
// SIG undefined FUN_145873a7e(void)

void FUN_145873a7e(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1483f088e(param_2,0);
  }
  local_28 = FUN_144a7a726();
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_28);
  }
  FUN_145874078(param_1,&local_28,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145873b0a FUN_145873b0a body=185 status=ok
// SIG undefined FUN_145873b0a(void)

int FUN_145873b0a(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_14088c7fa(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_145873b33;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_145873b33:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 145873bc4 FUN_145873bc4 body=224 status=ok
// SIG undefined FUN_145873bc4(void)

longlong FUN_145873bc4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = FUN_144a7a726();
  lVar4 = FUN_14092e757(uVar3,param_2,uVar1,0);
  if (((lVar4 != 0) && (FUN_140b506a4(lVar4), *(longlong *)(param_1 + 0x4f0) != 0)) &&
     (cVar2 = FUN_144729dda(param_1 + 0x4e8), cVar2 != '\0')) {
    local_30 = DAT_14cbe74b8;
    local_28 = -1;
    cVar2 = FUN_144a7a548((longlong *)(param_1 + 0x4d8));
    if ((cVar2 != '\0') &&
       (lVar5 = (longlong)local_28 * 0x88 + *(longlong *)(param_1 + 0x4d8), lVar5 != 0)) {
      FUN_14045627c(lVar4,*(longlong *)(lVar5 + 0x78) == DAT_14cbe74c0,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145873ca6 FUN_145873ca6 body=274 status=ok
// SIG undefined FUN_145873ca6(void)

undefined4 * FUN_145873ca6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_145873e48(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_145873dba(param_1,param_3,local_40,local_48);
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
      FUN_1458741ce(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145873dba FUN_145873dba body=141 status=ok
// SIG undefined FUN_145873dba(void)

undefined8 FUN_145873dba(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar7 = FUN_14587393c();
    if (iVar7 != -1) {
      lVar2 = *param_1;
      uVar3 = *(undefined4 *)param_3;
      uVar4 = *(undefined4 *)((longlong)param_3 + 4);
      uVar5 = *(undefined4 *)(param_3 + 1);
      uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = param_3[2];
      puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_148f1288a(param_1,*param_4);
      *param_4 = iVar7;
      uVar8 = 1;
      goto LAB_145873dde;
    }
  }
  uVar8 = 0;
LAB_145873dde:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145873e48 FUN_145873e48 body=230 status=ok
// SIG undefined FUN_145873e48(void)

int * FUN_145873e48(longlong *param_1,int *param_2)

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



// FUNCTION 145873f2e FUN_145873f2e body=328 status=ok
// SIG undefined FUN_145873f2e(void)

void FUN_145873f2e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x2668);
  lVar2 = param_1 + 0x2678;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar5 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0x2690) != 0) {
    FUN_1449c0562(&local_50);
    iVar5 = *(int *)(param_1 + 0x2690);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c != iVar5) || (local_48 != lVar2)) {
    do {
      lVar6 = (longlong)iStack_5c * 0x20 + *local_78;
      cVar3 = FUN_144729dda(lVar6);
      if (cVar3 == '\0') {
        lVar6 = lVar6 + 8;
        cVar3 = FUN_144729dda(lVar6);
        if (cVar3 != '\0') {
          plVar4 = (longlong *)FUN_14479d2ce(lVar6);
          (**(code **)(*plVar4 + 0x420))(plVar4,0);
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (((iStack_5c != iVar5) || (local_68 != lVar2)) || (local_78 != plVar1));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145874078 FUN_145874078 body=340 status=ok
// SIG undefined FUN_145874078(void)

void FUN_145874078(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar3 = *param_2;
      goto LAB_1458740cf;
    }
  }
  lVar3 = 0;
LAB_1458740cf:
  lVar2 = FUN_144a78d6a();
  lVar1 = *param_2;
  if (lVar3 == lVar2) {
    if (param_3 == '\0') {
      local_40 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_1483f0b5e(param_1,&local_40,param_4);
    }
    else {
      local_38 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_1483f08ee(param_1,&local_38,param_4);
    }
  }
  else if (param_3 == '\0') {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_145874390(param_1,&local_50,param_4);
  }
  else {
    local_48 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1483f0c98(param_1,&local_48,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458741ce FUN_1458741ce body=448 status=ok
// SIG undefined FUN_1458741ce(void)

void FUN_1458741ce(longlong *param_1)

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
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 145874390 FUN_145874390 body=458 status=ok
// SIG undefined FUN_145874390(void)

void FUN_145874390(longlong param_1,longlong *param_2,longlong *param_3)

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
LAB_14587446e:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_145874540;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_14587446e;
LAB_145874540:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_14587455c(param_3,iVar3);
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



// FUNCTION 14587455c FUN_14587455c body=132 status=ok
// SIG undefined FUN_14587455c(void)

void FUN_14587455c(longlong param_1,int param_2)

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



// FUNCTION 1458745e2 FUN_1458745e2 body=104 status=ok
// SIG undefined FUN_1458745e2(void)

undefined8 FUN_1458745e2(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_14587464c(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587464c FUN_14587464c body=130 status=ok
// SIG undefined FUN_14587464c(void)

undefined8 FUN_14587464c(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [12];
  undefined1 local_34 [12];
  ulonglong local_28;
  
  lVar1 = DAT_14cb84f20;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb84f20 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_1400f0e12(param_1,local_34,1);
    FUN_144a7660c(param_1,local_40,1);
    uVar2 = FUN_140cdfe8a(lVar1,local_40,local_34);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458746d0 FUN_1458746d0 body=62 status=ok
// SIG undefined FUN_1458746d0(void)

void FUN_1458746d0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14587470e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 14587470e FUN_14587470e body=111 status=ok
// SIG undefined FUN_14587470e(void)

ulonglong FUN_14587470e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x18) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 14587477e FUN_14587477e body=141 status=ok
// SIG undefined FUN_14587477e(void)

void FUN_14587477e(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x10 + (longlong)(int)param_2 * 0x18);
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
  iVar5 = (int)param_1[1];
  iVar6 = ~param_2 + iVar5;
  if (iVar6 != 0) {
    iVar7 = 1;
    if (iVar6 < 1) {
      iVar7 = iVar6;
    }
    memmove((void *)(lVar3 + (longlong)(int)param_2 * 0x18),
            (void *)(lVar3 + (longlong)(iVar5 - iVar7) * 0x18),(longlong)iVar7 * 0x18);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14587480b FUN_14587480b body=54 status=ok
// SIG undefined FUN_14587480b(void)

void FUN_14587480b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145874842(puVar1);
  *puVar1 = &PTR_FUN_14b631040;
  puVar1[5] = &PTR_FUN_14b6314e0;
  puVar1[6] = &PTR_LAB_14b631520;
  return;
}



// FUNCTION 145874842 FUN_145874842 body=64 status=ok
// SIG undefined FUN_145874842(void)

undefined8 * FUN_145874842(undefined8 *param_1)

{
  FUN_145874882();
  *param_1 = &PTR_FUN_14b7eae50;
  param_1[5] = &PTR_LAB_14b7eb2f0;
  param_1[6] = &PTR_LAB_14b7eb330;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return param_1;
}



// FUNCTION 145874882 FUN_145874882 body=82 status=ok
// SIG undefined FUN_145874882(void)

undefined8 * FUN_145874882(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_144805d84(param_1,uVar1);
  *param_1 = &PTR_FUN_14b257d40;
  param_1[5] = &PTR_FUN_14b2581c0;
  param_1[6] = &PTR_LAB_14b258200;
  FUN_140b967fa(param_1,1);
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  return param_1;
}



// FUNCTION 1458748de FUN_1458748de body=151 status=ok
// SIG undefined FUN_1458748de(void)

void FUN_1458748de(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14b99b580;
  FUN_1449e6b18((longlong)param_1 + 0x74);
  FUN_1449e6b18(param_1 + 0xd);
  plVar2 = (longlong *)param_1[0xc];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b99b7d0;
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145874971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145874976 FUN_145874976 body=100 status=ok
// SIG undefined FUN_145874976(void)

void FUN_145874976(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1458749da FUN_1458749da body=93 status=ok
// SIG undefined FUN_1458749da(void)

undefined8 * FUN_1458749da(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1412823f0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145874a38(param_1,iVar1);
      FUN_14128266c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145874a38 FUN_145874a38 body=120 status=ok
// SIG undefined FUN_145874a38(void)

void FUN_145874a38(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x88,8);
    iVar2 = (int)(uVar1 / 0x88);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x88,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145874ab0 FUN_145874ab0 body=143 status=ok
// SIG undefined FUN_145874ab0(void)

void FUN_145874ab0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145874b40 FUN_145874b40 body=2498 status=ok
// SIG undefined FUN_145874b40(void)

void FUN_145874b40(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 **ppuVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong *local_140;
  longlong *local_138 [2];
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  longlong *plStack_110;
  longlong *local_108 [2];
  longlong *local_f8 [2];
  longlong *local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  longlong local_c4;
  undefined4 local_bc;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined2 **local_98;
  undefined8 *local_90;
  longlong local_88;
  undefined4 local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x50) == '\x01')) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0x10100;
    local_bc = 0;
    puVar4 = *(undefined4 **)(*(longlong *)(param_1 + 0x1a8) + 8);
    puVar11 = &DAT_14c9485f0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar11 = puVar4;
    }
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    FUN_1400b2348(puVar11,&local_78,1);
    puVar12 = local_78;
    if ((int)uStack_70 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_88,puVar12,1);
    local_c4 = local_88;
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar5 = FUN_14479d2ce(param_1 + 0x30);
    if ((lVar5 != 0) && (lVar5 = FUN_14479d2ce(lVar5 + 900), lVar5 != 0)) {
      lVar6 = FUN_140ade7fe();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        if ((*(char *)(lVar3 + 700) == '\x01') && (*(char *)(lVar3 + 0x2cc) == '\0')) {
          if (*(char *)(lVar3 + 0x2b4) == '\x01') {
            ppuVar7 = (undefined2 **)FUN_148eacc20(&local_b8);
            FUN_1400b22c2(&local_78,"action_ui_matchmaking_clear_queue");
            if (ppuVar7 == &local_78) {
              if (local_78 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*ppuVar7 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              *ppuVar7 = local_78;
              local_78 = (undefined2 *)0x0;
              *(int *)(ppuVar7 + 1) = (int)uStack_70;
              *(undefined4 *)((longlong)ppuVar7 + 0xc) = uStack_70._4_4_;
            }
            FUN_1400b22c2(&local_78,"Matchmaking_StopMatchmaking");
            if (ppuVar7 + 2 == &local_78) {
              if (local_78 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (ppuVar7[2] != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              ppuVar7[2] = local_78;
              local_78 = (undefined2 *)0x0;
              *(int *)(ppuVar7 + 3) = (int)uStack_70;
              *(undefined4 *)((longlong)ppuVar7 + 0x1c) = uStack_70._4_4_;
            }
          }
          else if (0 < *(int *)(lVar3 + 0x2f0)) {
            ppuVar7 = (undefined2 **)FUN_148eacc20(&local_b8);
            FUN_1400b22c2(&local_78,"action_ui_matchmaking_start_matchmaking");
            if (ppuVar7 == &local_78) {
              if (local_78 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*ppuVar7 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              *ppuVar7 = local_78;
              local_78 = (undefined2 *)0x0;
              *(int *)(ppuVar7 + 1) = (int)uStack_70;
              *(undefined4 *)((longlong)ppuVar7 + 0xc) = uStack_70._4_4_;
            }
            plVar8 = (longlong *)FUN_140e82300();
            local_d8 = (longlong *)*plVar8;
            if (local_d8 != (longlong *)0x0) {
              (**(code **)(*local_d8 + 8))();
            }
            local_d0 = (undefined4)plVar8[1];
            plVar8 = (longlong *)FUN_140e82300();
            local_e8 = (longlong *)*plVar8;
            if (local_e8 != (longlong *)0x0) {
              (**(code **)(*local_e8 + 8))();
            }
            local_e0 = (undefined4)plVar8[1];
            if (*(int *)(lVar3 + 0x2f0) < 2) {
              FUN_1400b22c2(&local_78,"Matchmaking_BeginMatchmaking");
              if (ppuVar7 + 2 == &local_78) {
                if (local_78 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (ppuVar7[2] != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                ppuVar7[2] = local_78;
                local_78 = (undefined2 *)0x0;
                *(int *)(ppuVar7 + 3) = (int)uStack_70;
                *(undefined4 *)((longlong)ppuVar7 + 0x1c) = uStack_70._4_4_;
              }
            }
            else {
              local_78 = (undefined2 *)0x0;
              uStack_70 = 0;
              local_68 = 0;
              local_60 = 0;
              uStack_58 = 0;
              FUN_1446ddda2(&local_78,"Matchmaking_BeginMatchmakingParameterized",0);
              FUN_140ac6c96(&local_78,&local_d8);
              if (local_60 != 0) {
                FUN_1400020a8();
              }
              local_118 = 0;
              plStack_110 = (longlong *)0x0;
              FUN_1413a454c(local_108,*(undefined4 *)(lVar3 + 0x2f0),0);
              FUN_14023409e(&local_128,&local_d8,1);
              local_78 = (undefined2 *)CONCAT44(local_78._4_4_,4);
              FUN_14023423e(&local_68,local_108);
              local_90 = &uStack_58;
              local_98 = &local_78;
              FUN_14010d304(&local_88);
              local_a8 = local_128;
              local_a0 = local_120;
              if (local_120 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_120 + 1) = (int)local_120[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_f8,&local_a8,&local_88);
              FUN_14007f2db(local_88,local_80);
              if (local_88 != 0) {
                FUN_1400020a8();
              }
              if ((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) {
                (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
              }
              if (local_120 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_120 + 1;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)*plVar8 == 0) {
                  (**(code **)*local_120)(local_120);
                  LOCK();
                  piVar1 = (int *)((longlong)local_120 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_120 + 0x10))(local_120);
                  }
                }
              }
              if (local_108[0] != (longlong *)0x0) {
                (**(code **)(*local_108[0] + 0x10))();
              }
              FUN_140008f88(&local_e8,local_f8);
              if (local_f8[0] != (longlong *)0x0) {
                (**(code **)(*local_f8[0] + 0x10))();
              }
              plVar8 = plStack_110;
              if (plStack_110 != (longlong *)0x0) {
                LOCK();
                plVar2 = plStack_110 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plStack_110)(plStack_110);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
              uVar9 = FUN_1447a1f4a(&local_e8);
              FUN_144a787a6(ppuVar7 + 2,uVar9);
              *(undefined1 *)((longlong)ppuVar7 + 0x21) = 0;
            }
            if (local_e8 != (longlong *)0x0) {
              (**(code **)(*local_e8 + 0x10))();
            }
            if (local_d8 != (longlong *)0x0) {
              (**(code **)(*local_d8 + 0x10))();
            }
            if (1 < *(int *)(lVar3 + 0x2f0)) {
              puVar10 = (undefined8 *)FUN_140e82300();
              local_d8 = (longlong *)*puVar10;
              if (local_d8 != (longlong *)0x0) {
                (**(code **)(*local_d8 + 8))();
              }
              local_d0 = *(undefined4 *)(puVar10 + 1);
              puVar10 = (undefined8 *)FUN_140e82300();
              local_e8 = (longlong *)*puVar10;
              if (local_e8 != (longlong *)0x0) {
                (**(code **)(*local_e8 + 8))();
              }
              local_e0 = *(undefined4 *)(puVar10 + 1);
              local_78 = (undefined2 *)0x0;
              uStack_70 = 0;
              local_68 = 0;
              local_60 = 0;
              uStack_58 = 0;
              FUN_1446ddda2(&local_78,"Matchmaking_ClearQueueText",0);
              FUN_140ac6c96(&local_78,&local_d8);
              if (local_60 != 0) {
                FUN_1400020a8();
              }
              local_118 = 0;
              plStack_110 = (longlong *)0x0;
              FUN_1413a454c(local_138,*(undefined4 *)(lVar3 + 0x2f0),0);
              FUN_14023409e(&local_148,&local_d8,1);
              local_78 = (undefined2 *)CONCAT44(local_78._4_4_,4);
              FUN_14023423e(&local_68,local_138);
              local_90 = &uStack_58;
              local_98 = &local_78;
              FUN_14010d304(&local_88);
              local_a8 = local_148;
              local_a0 = local_140;
              if (local_140 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_140 + 1) = (int)local_140[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_f8,&local_a8,&local_88);
              FUN_14007f2db(local_88,local_80);
              if (local_88 != 0) {
                FUN_1400020a8();
              }
              if ((longlong *)CONCAT44(uStack_64,local_68) != (longlong *)0x0) {
                (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x10))();
              }
              if (local_140 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_140 + 1;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)*plVar8 == 0) {
                  (**(code **)*local_140)(local_140);
                  LOCK();
                  piVar1 = (int *)((longlong)local_140 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_140 + 0x10))(local_140);
                  }
                }
              }
              if (local_138[0] != (longlong *)0x0) {
                (**(code **)(*local_138[0] + 0x10))();
              }
              FUN_140008f88(&local_e8,local_f8);
              if (local_f8[0] != (longlong *)0x0) {
                (**(code **)(*local_f8[0] + 0x10))();
              }
              plVar8 = plStack_110;
              if (plStack_110 != (longlong *)0x0) {
                LOCK();
                plVar2 = plStack_110 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plStack_110)(plStack_110);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
              ppuVar7 = (undefined2 **)FUN_148eacc20(&local_b8);
              FUN_1400b22c2(&local_78,"action_ui_matchmaking_clear_queue");
              if (ppuVar7 == &local_78) {
                if (local_78 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (*ppuVar7 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                *ppuVar7 = local_78;
                local_78 = (undefined2 *)0x0;
                *(int *)(ppuVar7 + 1) = (int)uStack_70;
                *(undefined4 *)((longlong)ppuVar7 + 0xc) = uStack_70._4_4_;
              }
              uVar9 = FUN_1447a1f4a(&local_e8);
              FUN_144a787a6(ppuVar7 + 2,uVar9);
              *(undefined1 *)((longlong)ppuVar7 + 0x21) = 0;
              if (local_e8 != (longlong *)0x0) {
                (**(code **)(*local_e8 + 0x10))();
              }
              if (local_d8 != (longlong *)0x0) {
                (**(code **)(*local_d8 + 0x10))();
              }
            }
          }
        }
        ppuVar7 = (undefined2 **)FUN_148eacc20(&local_b8);
        FUN_1400b22c2(&local_78,"action_ui_menu_escape");
        if (ppuVar7 == &local_78) {
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*ppuVar7 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          *ppuVar7 = local_78;
          local_78 = (undefined2 *)0x0;
          *(int *)(ppuVar7 + 1) = (int)uStack_70;
          *(undefined4 *)((longlong)ppuVar7 + 0xc) = uStack_70._4_4_;
        }
        FUN_1400b22c2(&local_78,"BackText");
        if (ppuVar7 + 2 == &local_78) {
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (ppuVar7[2] != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          ppuVar7[2] = local_78;
          local_78 = (undefined2 *)0x0;
          *(int *)(ppuVar7 + 3) = (int)uStack_70;
          *(undefined4 *)((longlong)ppuVar7 + 0x1c) = uStack_70._4_4_;
        }
        FUN_140e638ec(lVar5,&local_b8,&local_c8);
      }
    }
    FUN_140e027f0(local_b8,uStack_b0 & 0xffffffff);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145875504 FUN_145875504 body=103 status=ok
// SIG undefined FUN_145875504(void)

ulonglong FUN_145875504(longlong param_1)

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
LAB_14587554e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14587554e;
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



// FUNCTION 14587556c FUN_14587556c body=109 status=ok
// SIG undefined FUN_14587556c(void)

void FUN_14587556c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined8 local_38;
  undefined **local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = &local_50;
  local_20 = &local_58;
  local_38 = 0;
  local_28 = &PTR_LAB_14b99e4d0;
  local_48 = &LAB_14589f4b4;
  local_58 = param_2;
  local_50 = param_3;
  FUN_140f73374();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1458755da FUN_1458755da body=96 status=ok
// SIG undefined FUN_1458755da(void)

undefined8 * FUN_1458755da(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14587563a();
  memset(puVar1 + 1,0,0xb8);
  *puVar1 = &PTR_FUN_14a1704d0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0xffffffff00000080;
  puVar1[0x12] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x9c) = 0xffffffff00000080;
  return puVar1;
}



// FUNCTION 14587563a FUN_14587563a body=113 status=ok
// SIG undefined FUN_14587563a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14587563a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14c9a1038;
  if (DAT_14c9a1038 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x6000,0);
    lVar4 = 0x7f;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x18;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14c9a1038;
    _DAT_14c9a1040 = _DAT_14c9a1040 + 0x80;
  }
  DAT_14c9a1038 = (undefined8 *)*puVar2;
  _DAT_14c9a1044 = _DAT_14c9a1044 + 1;
  return;
}



// FUNCTION 1458756ac FUN_1458756ac body=246 status=ok
// SIG undefined FUN_1458756ac(void)

void FUN_1458756ac(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141289672(local_38);
  iVar2 = *(int *)(param_1 + 0x300);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x2f8);
    iVar3 = 1;
    lVar5 = 0;
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar1 + 8 + lVar5) == local_30) {
        if (iVar3 != 0) {
          if (iVar2 - iVar3 != 0) {
            lVar4 = (lVar4 >> 0x20) * 0x10;
            memmove((void *)(lVar1 + lVar4),(void *)(lVar1 + lVar4 + 0x10),
                    (longlong)(iVar2 - iVar3) << 4);
            iVar2 = *(int *)(param_1 + 0x300);
          }
          *(int *)(param_1 + 0x300) = iVar2 + -1;
          FUN_1458757a4(param_1 + 0x2f8);
          local_24 = *(undefined4 *)(param_1 + 0x300);
          FUN_1447cd2ec(param_1 + 0xe0);
        }
        break;
      }
      lVar4 = lVar4 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar2 << 4 != lVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1458757a4 FUN_1458757a4 body=62 status=ok
// SIG undefined FUN_1458757a4(void)

void FUN_1458757a4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1458757e2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1458757e2 FUN_1458757e2 body=89 status=ok
// SIG undefined FUN_1458757e2(void)

ulonglong FUN_1458757e2(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14587583c FUN_14587583c body=124 status=ok
// SIG undefined FUN_14587583c(void)

void FUN_14587583c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar1 = FUN_141282a4c();
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) {
        return;
      }
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) {
      return;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(lVar1 + 0x44)) = *param_3;
  }
  return;
}



// FUNCTION 1458758b8 FUN_1458758b8 body=196 status=ok
// SIG undefined FUN_1458758b8(void)

void FUN_1458758b8(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  
  if (DAT_14cb7bf98 != DAT_14cb7bfc4) {
    puVar2 = &DAT_14cb7bfc8;
    if (DAT_14cb7bfd0 != (undefined *)0x0) {
      puVar2 = DAT_14cb7bfd0;
    }
    for (iVar1 = *(int *)(puVar2 + ((longlong)param_1 & (longlong)DAT_14cb7bfd8 - 1U) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x20 + DAT_14cb7bf90 + 0x18)) {
      if (*(int *)(DAT_14cb7bf90 + (longlong)iVar1 * 0x20) == param_1) {
        puVar2 = &DAT_14cb7bfc8;
        if (DAT_14cb7bfd0 != (undefined *)0x0) {
          puVar2 = DAT_14cb7bfd0;
        }
        lVar5 = (longlong)*(int *)(DAT_14cb7bf90 + 0x1c + (longlong)iVar1 * 0x20);
        iVar3 = *(int *)(puVar2 + lVar5 * 4);
        if (iVar3 == iVar1) {
          piVar4 = (int *)(puVar2 + lVar5 * 4);
        }
        else {
          do {
            piVar4 = (int *)(DAT_14cb7bf90 + (longlong)iVar3 * 0x20 + 0x18);
            iVar3 = *piVar4;
          } while (iVar3 != iVar1);
        }
        *piVar4 = *(int *)(DAT_14cb7bf90 + (longlong)iVar1 * 0x20 + 0x18);
        FUN_14587597c();
        return;
      }
    }
  }
  return;
}



// FUNCTION 14587597c FUN_14587597c body=50 status=ok
// SIG undefined FUN_14587597c(void)

void FUN_14587597c(int param_1)

{
  if (*(longlong *)(DAT_14cb7bf90 + 8 + (longlong)param_1 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1458759ae(param_1);
  return;
}



// FUNCTION 1458759ae FUN_1458759ae body=128 status=ok
// SIG undefined FUN_1458759ae(void)

void FUN_1458759ae(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb7bf90;
  if (DAT_14cb7bfc4 != 0) {
    *(int *)(DAT_14cb7bf90 + (longlong)DAT_14cb7bfc0 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7bfc4) {
    iVar4 = DAT_14cb7bfc0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cb7bfc4 = DAT_14cb7bfc4 + 1;
  puVar3 = &DAT_14cb7bfa0;
  if (DAT_14cb7bfb0 != (undefined4 *)0x0) {
    puVar3 = DAT_14cb7bfb0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb7bfc0 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 145875a3c FUN_145875a3c body=151 status=ok
// SIG undefined FUN_145875a3c(void)

void FUN_145875a3c(longlong *param_1)

{
  int iVar1;
  void *_Src;
  
  iVar1 = (int)param_1[0x24];
  _Src = (void *)param_1[0x23];
  *(int *)(param_1 + 0x12) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x94) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_140a3dae8(param_1 + 0x11,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x11],_Src,(longlong)iVar1 << 3);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x9c) = *(undefined1 *)((longlong)param_1 + 300);
  *(int *)(param_1 + 0x13) = (int)param_1[0x25];
                    /* WARNING: Could not recover jumptable at 0x000145875ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,1);
  return;
}



// FUNCTION 145875ad4 FUN_145875ad4 body=197 status=ok
// SIG undefined FUN_145875ad4(void)

void FUN_145875ad4(longlong param_1)

{
  FUN_14093d487(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_14093d50a(param_1 + 0x30);
  }
  FUN_145875b9a(param_1 + 0x30,param_1 + 0x40);
  FUN_14093d487(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_14093d50a(param_1 + 0x40);
  }
  FUN_14093d487(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_14093d50a(param_1 + 0x50);
  }
  FUN_145875b9a(param_1 + 0x50,param_1 + 0x60);
  FUN_14093d487(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) == 0) {
    return;
  }
  FUN_14093d50a(param_1 + 0x60);
  return;
}



// FUNCTION 145875b9a FUN_145875b9a body=93 status=ok
// SIG undefined FUN_145875b9a(void)

undefined8 * FUN_145875b9a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14093d487(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145875c24(param_1,iVar1);
      FUN_145875bf7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145875bf7 FUN_145875bf7 body=45 status=ok
// SIG undefined FUN_145875bf7(void)

void FUN_145875bf7(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145875c24 FUN_145875c24 body=98 status=ok
// SIG undefined FUN_145875c24(void)

void FUN_145875c24(longlong param_1,int param_2,int param_3)

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



// FUNCTION 145875c8e FUN_145875c8e body=76 status=ok
// SIG undefined FUN_145875c8e(void)

undefined8 FUN_145875c8e(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_145875cda(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000145875ccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 145875cda FUN_145875cda body=191 status=ok
// SIG undefined FUN_145875cda(void)

longlong FUN_145875cda(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_145875d9a();
  lVar3 = *param_1;
  if (DAT_14cbc54e8 != DAT_14cbc5514) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cbc5518;
    if (DAT_14cbc5520 != (undefined *)0x0) {
      puVar7 = DAT_14cbc5520;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cbc5528 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cbc54e0 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cbc54d8;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 145875d9a FUN_145875d9a body=152 status=ok
// SIG undefined FUN_145875d9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145875d9a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc5530) {
    FUN_144b3d300(&DAT_14cbc5530);
    if (DAT_14cbc5530 == -1) {
      DAT_14cbc5500 = 0;
      DAT_14cbc5508 = 0;
      DAT_14cbc54e0 = 0;
      _DAT_14cbc54e8 = 0;
      _DAT_14cbc550c = 0xffffffff00000080;
      DAT_14cbc5514 = 0;
      DAT_14cbc5520 = 0;
      DAT_14cbc5528 = 0;
      atexit(FUN_1440d5ded);
      _Init_thread_footer(&DAT_14cbc5530);
      return;
    }
  }
  return;
}



// FUNCTION 145875e32 FUN_145875e32 body=24 status=ok
// SIG undefined FUN_145875e32(void)

void FUN_145875e32(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145875e46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145875e4a FUN_145875e4a body=38 status=ok
// SIG undefined FUN_145875e4a(void)

undefined8 FUN_145875e4a(undefined8 param_1,int param_2)

{
  FUN_145875e70();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145875e70 FUN_145875e70 body=147 status=ok
// SIG undefined FUN_145875e70(void)

void FUN_145875e70(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b988d30;
  param_1[4] = &PTR_FUN_14b988d50;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145852fa4(param_1 + 8);
  FUN_145875f03(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 4);
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145875eff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145875f03 FUN_145875f03 body=73 status=ok
// SIG undefined FUN_145875f03(void)

void FUN_145875f03(longlong param_1,int param_2)

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



// FUNCTION 145875f4c FUN_145875f4c body=9 status=ok
// SIG undefined FUN_145875f4c(void)

void FUN_145875f4c(longlong param_1)

{
  FUN_145875f60(param_1 + 0x10);
  return;
}



// FUNCTION 145875f56 FUN_145875f56 body=9 status=ok
// SIG undefined FUN_145875f56(void)

void FUN_145875f56(longlong param_1)

{
  FUN_145875f60(param_1 + 0x10);
  return;
}



// FUNCTION 145875f60 FUN_145875f60 body=116 status=ok
// SIG undefined FUN_145875f60(void)

void FUN_145875f60(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b982370;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x1a];
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
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145875fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145875fd4 FUN_145875fd4 body=40 status=ok
// SIG undefined FUN_145875fd4(void)

undefined8 FUN_145875fd4(undefined8 param_1,int param_2)

{
  FUN_145875ffc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145875ffc FUN_145875ffc body=61 status=ok
// SIG undefined FUN_145875ffc(void)

void FUN_145875ffc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acda3b0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14587603a FUN_14587603a body=89 status=ok
// SIG undefined FUN_14587603a(void)

void FUN_14587603a(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FUN_1410b58ca(param_2 + 0x208);
  if (((cVar3 == '\0') && (*(char *)(param_2 + 0x18) == '\x01')) &&
     (*(longlong *)(param_2 + 0x1c) != 0)) {
    uVar1 = *(undefined4 *)(param_2 + 0x140);
    uVar2 = FUN_141283ac6();
    FUN_140a93dbb(uVar2,param_2 + 0x1c,param_2 + 0x208,uVar1);
    return;
  }
  return;
}



// FUNCTION 145876094 FUN_145876094 body=37 status=ok
// SIG undefined FUN_145876094(void)

void FUN_145876094(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd0);
  FUN_1458760ba(param_2);
  return;
}



// FUNCTION 1458760ba FUN_1458760ba body=157 status=ok
// SIG undefined FUN_1458760ba(void)

undefined8 * FUN_1458760ba(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b6bca50;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_144a5dc74(param_1 + 9);
  FUN_144a5dc74(param_1 + 0xb);
  FUN_144a5dc74(param_1 + 0xd);
  FUN_144a5dc74(param_1 + 0xf);
  FUN_144a5dc74(param_1 + 0x11);
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x646c63;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  return param_1;
}



// FUNCTION 145876158 FUN_145876158 body=257 status=ok
// SIG undefined FUN_145876158(void)

void FUN_145876158(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((char)param_1[0x760] == '\x01') {
    lVar5 = FUN_145876332();
    if (lVar5 != 0) {
      FUN_14587637e(lVar5 + 0x170,&local_20,param_1);
      param_1[0x5d2] = local_20;
    }
  }
  iVar4 = FUN_14487fd02(param_1);
  *(byte *)((longlong)param_1 + 0x2ef4) = *(byte *)((longlong)param_1 + 0x2ef4) & 0xfe | iVar4 == 3;
  plVar1 = (longlong *)param_1[0x2d];
  if (plVar1 != (longlong *)0x0) {
    lVar5 = FUN_144a75eb4();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      cVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
      bVar3 = cVar2 * '\x02';
      goto LAB_145876203;
    }
  }
  bVar3 = 0;
LAB_145876203:
  *(byte *)((longlong)param_1 + 0x2ef4) = *(byte *)((longlong)param_1 + 0x2ef4) & 0xfd | bVar3;
  uVar6 = (**(code **)(*param_1 + 0x8b8))(param_1);
  *(undefined4 *)(param_1 + 0x75) = uVar6;
  FUN_14587625a(param_1);
  FUN_1405f1eac(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14587625a FUN_14587625a body=106 status=ok
// SIG undefined FUN_14587625a(void)

void FUN_14587625a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x390) != 0) {
    lVar3 = FUN_1449f3324();
    plVar1 = *(longlong **)(param_1 + 0x390);
    if ((((plVar1 != (longlong *)0x0) && (lVar3 != 0)) && (lVar2 = plVar1[2], lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
                    /* WARNING: Could not recover jumptable at 0x0001458762ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xfd8))(plVar1,*(undefined4 *)(param_1 + 0x3a8));
      return;
    }
  }
  return;
}



// FUNCTION 1458762c4 FUN_1458762c4 body=100 status=ok
// SIG undefined FUN_1458762c4(void)

ulonglong FUN_1458762c4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (*(char *)(param_1 + 0x3b00) == '\x01') {
    lVar1 = FUN_145876332();
    if (lVar1 != 0) {
      uVar4 = FUN_145876328(lVar1);
      return uVar4;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      uVar3 = 0x42b40000;
      goto LAB_145876304;
    }
  }
  uVar3 = *(uint *)(lVar2 + 0x3a8);
LAB_145876304:
  return (ulonglong)uVar3;
}


