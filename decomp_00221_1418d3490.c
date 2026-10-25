// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1418d3490 FUN_1418d3490 body=315 status=ok
// SIG undefined FUN_1418d3490(void)

void FUN_1418d3490(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x538);
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
  *param_2 = &PTR_FUN_14b39b950;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  *(undefined8 *)((longlong)param_2 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0;
  *(undefined8 *)((longlong)param_2 + 0x99) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  *(undefined1 *)((longlong)param_2 + 0xa9) = 1;
  *(undefined8 *)((longlong)param_2 + 0xac) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 1;
  *(undefined1 *)(param_2 + 0x1a) = 1;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *(undefined4 *)(param_2 + 0x20) = 0xf00000d0;
  *(undefined4 *)(param_2 + 0x27) = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  *(undefined1 *)(param_2 + 0x25) = 0;
  *(undefined4 *)(param_2 + 0x2a) = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  FUN_140901aaa(param_2 + 0x2c);
  *(undefined1 *)(param_2 + 0x33) = 0;
  FUN_140803772(param_2 + 0x34);
  *(undefined1 *)(param_2 + 0xa3) = 0;
  *(undefined1 *)(param_2 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x524) = 0x45fa0000;
  *(undefined1 *)(param_2 + 0xa5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x52c) = 0x457a0000;
  param_2[0xa6] = 0;
  param_2[0xa7] = 0;
  *param_2 = &PTR_FUN_14b90fcb0;
  return;
}



// FUNCTION 1418d361c FUN_1418d361c body=838 status=ok
// SIG undefined FUN_1418d361c(void)

void FUN_1418d361c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b71be(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b9261b0;
  puVar1[0x72] = &PTR_FUN_14b926840;
  puVar1[0x73] = &PTR_FUN_14b926860;
  puVar1[0x74] = &PTR_FUN_14b926890;
  puVar1[0x75] = &PTR_FUN_14b9268a0;
  puVar1[0x76] = &PTR_FUN_14b926910;
  puVar1[0x77] = &PTR_FUN_14b926940;
  puVar1[0x78] = &PTR_FUN_14b926970;
  puVar1[0x7f] = &PTR_FUN_14b926a20;
  puVar1[0x80] = &PTR_FUN_14b926a90;
  puVar1[0x81] = &PTR_FUN_14b926b00;
  puVar1[0x82] = &PTR_FUN_14b926b30;
  puVar1[0x83] = &PTR_FUN_14b926b70;
  puVar1[0x84] = &PTR_FUN_14b926c10;
  puVar1[0x85] = &PTR_FUN_14b926c30;
  puVar1[0x89] = &PTR_FUN_14b926c50;
  puVar1[0x8a] = &PTR_FUN_14b926d10;
  puVar1[0x8b] = &PTR_FUN_14b926d90;
  puVar1[0x8c] = &PTR_FUN_14b926de0;
  puVar1[0x8d] = &PTR_FUN_14b926e20;
  puVar1[0x8e] = &PTR_FUN_14b926e40;
  puVar1[0x8f] = &PTR_FUN_14b926e60;
  puVar1[0x90] = &PTR_FUN_14b926e80;
  puVar1[0x91] = &PTR_FUN_14b926ea0;
  puVar1[0x92] = &PTR_FUN_14b926ec0;
  puVar1[0x93] = &PTR_FUN_14b926ee0;
  puVar1[0x94] = &PTR_FUN_14b926f00;
  puVar1[0x95] = &PTR_FUN_14b926f20;
  puVar1[0x96] = &PTR_FUN_14b926f40;
  puVar1[0x34b] = &PTR_FUN_14b926f60;
  puVar1[0x352] = &PTR_FUN_14b926f70;
  puVar1[0x353] = &PTR_FUN_14b926fb0;
  puVar1[0x354] = &PTR_FUN_14b926ff0;
  puVar1[0x355] = &PTR_FUN_14b927040;
  puVar1[0x356] = &PTR_FUN_14b927070;
  puVar1[0x359] = &PTR_FUN_14b9270b0;
  puVar1[0x35a] = &PTR_FUN_14b9270c0;
  puVar1[0x35b] = &PTR_FUN_14b9270f0;
  puVar1[0x35c] = &PTR_FUN_14b927190;
  puVar1[0x4bf] = &PTR_FUN_14b9271b0;
  puVar1[0x4e5] = 0;
  puVar1[0x4e6] = 0;
  puVar1[0x4e3] = 0;
  puVar1[0x4e4] = 0;
  puVar1[0x4e1] = 0;
  puVar1[0x4e2] = 0;
  *(undefined4 *)(puVar1 + 0x4e7) = 2;
  puVar1[0x4f8] = 0;
  *(undefined4 *)(puVar1 + 0x4f9) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x273c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2744) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x274c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2754) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x275c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2764) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x276c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2774) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x277c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2784) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x278c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2794) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x279c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x27a4) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x27ac) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x27cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x27d4) = 0;
  puVar1[0x4fc] = 0;
  *(undefined4 *)(puVar1 + 0x4fd) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x27fd) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2805) = 0;
  puVar1[0x4fe] = 0;
  puVar1[0x4ff] = 0;
  puVar1[0x506] = 0;
  puVar1[0x507] = 0;
  puVar1[0x504] = 0;
  puVar1[0x505] = 0;
  puVar1[0x502] = 0;
  puVar1[0x503] = 0;
  *(undefined4 *)(puVar1 + 0x508) = 2;
  *(undefined1 *)(puVar1 + 0x51e) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x2847) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x2844) = 0;
  puVar1[0x510] = 0;
  puVar1[0x50e] = 0;
  puVar1[0x50f] = 0;
  puVar1[0x50c] = 0;
  puVar1[0x50d] = 0;
  puVar1[0x50a] = 0;
  puVar1[0x50b] = 0;
  puVar1[0x522] = 0;
  puVar1[0x523] = 0;
  puVar1[0x520] = 0;
  puVar1[0x521] = 0;
  puVar1[0x4e0] = &PTR_FUN_14b92b3f0;
  return;
}



// FUNCTION 1418d3962 FUN_1418d3962 body=79 status=ok
// SIG undefined FUN_1418d3962(void)

void FUN_1418d3962(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x490);
  FUN_1409e6ae2(param_2);
  *(undefined1 *)(param_2 + 0x8b) = 0;
  param_2[0x8c] = 0;
  param_2[0x8d] = 0;
  param_2[0x8e] = 0;
  param_2[0x8f] = 0;
  param_2[0x90] = 0;
  param_2[0x91] = 0;
  *param_2 = &PTR_FUN_14b92b8e0;
  return;
}



// FUNCTION 1418d39b2 FUN_1418d39b2 body=365 status=ok
// SIG undefined FUN_1418d39b2(void)

void FUN_1418d39b2(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  memset(param_2 + 2,0,0x1f0);
  *param_2 = &PTR_FUN_14b92bd10;
  param_2[1] = 0;
  *(undefined2 *)((longlong)param_2 + 0x14) = 0x101;
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  FUN_1446f470e(param_2 + 5,L"StructuredInteraction",1);
  FUN_1446f470e(param_2 + 6,L"CameraSocket",1);
  FUN_1446f470e(param_2 + 7,L"LookAtSocket",1);
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x14;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x20] = 0x3fd0000000000000;
  param_2[0x21] = 0x3fc99999a0000000;
  *(undefined4 *)(param_2 + 0x22) = 0x3f4ccccd;
  param_2[0x2d] = 0;
  *(undefined4 *)(param_2 + 0x2e) = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x17c) = 0;
  param_2[0x31] = 0;
  *(undefined4 *)(param_2 + 0x32) = 0;
  param_2[0x3a] = 0;
  *(undefined4 *)(param_2 + 0x3b) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x1e4) = 0;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  return;
}



// FUNCTION 1418d3b20 FUN_1418d3b20 body=91 status=ok
// SIG undefined FUN_1418d3b20(void)

void FUN_1418d3b20(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbc02b8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d3b7c FUN_1418d3b7c body=133 status=ok
// SIG undefined FUN_1418d3b7c(void)

void FUN_1418d3b7c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14076ac9c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 0xc5) = 0xffdf959d;
  puVar1[200] = 0x41b0000042300000;
  *(byte *)((longlong)puVar1 + 0x2de) = *(byte *)((longlong)puVar1 + 0x2de) | 0x10;
  *puVar1 = &PTR_FUN_14b932530;
  puVar1[5] = &PTR_FUN_14b932f30;
  puVar1[6] = &PTR_LAB_14b932f70;
  puVar1[0x55] = &PTR_FUN_14b932fc0;
  puVar1[0x56] = &PTR_FUN_14b933040;
  puVar1[0x57] = &PTR_FUN_14b933050;
  return;
}



// FUNCTION 1418d3c02 FUN_1418d3c02 body=57 status=ok
// SIG undefined FUN_1418d3c02(void)

void FUN_1418d3c02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0558 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0558 = FUN_140002ddd(FUN_1466171a8,uVar1,L"TravelStationObjectDef");
  }
  return;
}



// FUNCTION 1418d3c3c FUN_1418d3c3c body=40 status=ok
// SIG undefined FUN_1418d3c3c(void)

undefined8 FUN_1418d3c3c(undefined8 param_1,int param_2)

{
  FUN_14006e5d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d3c64 FUN_1418d3c64 body=117 status=ok
// SIG undefined FUN_1418d3c64(void)

undefined8 * FUN_1418d3c64(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 1418d3cda FUN_1418d3cda body=64 status=ok
// SIG undefined FUN_1418d3cda(void)

void FUN_1418d3cda(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418d3d1a FUN_1418d3d1a body=497 status=ok
// SIG undefined FUN_1418d3d1a(void)

void FUN_1418d3d1a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  memset(param_2,0,0x480);
  FUN_140d75f9e(param_2);
  *(undefined4 *)(param_2 + 0x5b) = 0;
  *(undefined2 *)((longlong)param_2 + 0x2dc) = 1;
  *param_2 = &PTR_FUN_14b9444d0;
  param_2[0x5c] = 0;
  *(undefined4 *)(param_2 + 0x5d) = 0x34001;
  param_2[0x5e] = 0;
  param_2[0x5f] = 0;
  *(undefined4 *)(param_2 + 0x60) = 0x4000;
  param_2[0x61] = 0;
  *(undefined4 *)(param_2 + 0x62) = 0x3f800000;
  param_2[99] = 0;
  param_2[100] = 0;
  param_2[0x65] = 0;
  param_2[0x66] = 0;
  param_2[0x67] = 0;
  param_2[0x68] = 0;
  param_2[0x69] = 0;
  param_2[0x6a] = 0;
  *(undefined1 *)(param_2 + 0x6b) = 0;
  *(undefined2 *)((longlong)param_2 + 0x359) = 1;
  *(undefined2 *)((longlong)param_2 + 0x35c) = 1;
  *(undefined1 *)(param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x364) = 0;
  *(undefined2 *)(param_2 + 0x6e) = 0;
  param_2[0x71] = DAT_14c846508;
  uVar1 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  param_2[0x6f] = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  param_2[0x70] = uVar1;
  *(undefined4 *)(param_2 + 0x72) = 0;
  *(undefined8 *)((longlong)param_2 + 0x394) = 0;
  *(undefined4 *)(param_2 + 0x74) = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x75] = DAT_14c8464e0;
  param_2[0x76] = uVar1;
  param_2[0x77] = DAT_14c8464f0;
  *(undefined2 *)(param_2 + 0x78) = 0;
  param_2[0x7b] = DAT_14c846508;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_2 + 0x79) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_2 + 0x3cc) = uVar2;
  *(undefined4 *)(param_2 + 0x7a) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x3d4) = uVar4;
  *(undefined4 *)(param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3e4) = 0;
  *param_2 = &PTR_FUN_14b945360;
  *(undefined2 *)(param_2 + 0x7e) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x3f2) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3f4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3fa) = 0;
  *(undefined4 *)((longlong)param_2 + 0x402) = 1;
  *(undefined2 *)((longlong)param_2 + 0x406) = 0;
  param_2[0x81] = 0;
  *(undefined4 *)(param_2 + 0x82) = 0x34001;
  param_2[0x83] = 0;
  param_2[0x84] = 0;
  *(undefined4 *)(param_2 + 0x85) = 0x4000;
  param_2[0x86] = 0;
  *(undefined4 *)(param_2 + 0x87) = 0x3f800000;
  FUN_1405c5fa2();
  param_2[0x89] = &DAT_14cb769e8;
  param_2[0x8a] = 0;
  param_2[0x8b] = 0;
  param_2[0x88] = &PTR_FUN_14b0394b0;
  FUN_1405c5fa2();
  param_2[0x8d] = &DAT_14cb769e8;
  param_2[0x8e] = 0;
  param_2[0x8f] = 0;
  param_2[0x8c] = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 1418d3f0b FUN_1418d3f0b body=113 status=ok
// SIG undefined FUN_1418d3f0b(void)

void FUN_1418d3f0b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140ac18b8(puVar1);
  puVar1[0x66] = 0;
  puVar1[0x67] = 0;
  puVar1[0x68] = 0;
  puVar1[0x69] = 0;
  *(undefined4 *)(puVar1 + 0x6a) = 0;
  *puVar1 = &PTR_FUN_14b94f280;
  puVar1[0x6b] = 0;
  puVar1[0x6c] = 0;
  puVar1[0x6f] = 0;
  puVar1[0x70] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x381) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x389) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x394) = 0xbf800000;
  *(undefined4 *)(puVar1 + 0x70) = 1;
  FUN_140841e14(puVar1 + 0x6f,1);
  return;
}



// FUNCTION 1418d3f7c FUN_1418d3f7c body=164 status=ok
// SIG undefined FUN_1418d3f7c(void)

void FUN_1418d3f7c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140bb6a72(puVar1);
  *puVar1 = &PTR_FUN_14b94fef0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 0x19) = 0x3f000000;
  *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xe4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xec) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xfc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x104) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x10c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x114) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x11c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x124) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x129) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x131) = 0;
  puVar1[0x28] = 0xbff0000000000000;
  *(undefined4 *)(puVar1 + 0x29) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x14c) = 0xff;
  *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) | 2;
  *(byte *)(puVar1 + 0x1b) = *(byte *)(puVar1 + 0x1b) & 0xfc;
  return;
}



// FUNCTION 1418d4020 FUN_1418d4020 body=262 status=ok
// SIG undefined FUN_1418d4020(void)

uint FUN_1418d4020(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  float fVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  undefined1 auVar8 [16];
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = FUN_1400e8a68(param_3);
  if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x47c0))) {
    lVar5 = *(longlong *)(lVar5 + 0x47b8);
    local_58 = *(undefined8 *)(lVar5 + 0x30);
    uStack_50 = *(undefined8 *)(lVar5 + 0x38);
    local_48 = *(undefined4 *)(lVar5 + 0x40);
    uStack_44 = *(undefined4 *)(lVar5 + 0x44);
    uStack_40 = *(undefined4 *)(lVar5 + 0x48);
    uStack_3c = *(undefined4 *)(lVar5 + 0x4c);
    cVar3 = FUN_1403ae288();
    if (cVar3 != '\0') {
      lVar5 = FUN_14008e0ae(&local_58);
      fVar1 = *(float *)(lVar5 + 200);
      lVar5 = FUN_14008e0ae(&local_58);
      if ((*(longlong *)(lVar5 + 0x18) == 0) ||
         (*(char *)(*(longlong *)(lVar5 + 0x18) + 0x18) != '\x01')) {
        fVar7 = *(float *)(lVar5 + 0x30);
      }
      else {
        auVar8 = roundps(ZEXT416(*(uint *)(lVar5 + 0x30)),ZEXT416(*(uint *)(lVar5 + 0x30)),3);
        fVar7 = auVar8._0_4_;
      }
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 == 0) {
        bVar6 = fVar7 * *(float *)(param_1 + 0x14) < fVar1;
      }
      else {
        if (iVar2 == 1) {
          uVar4 = (uint)(fVar1 - fVar7 * *(float *)(param_1 + 0x14) < 0.0001);
          goto LAB_1418d40c6;
        }
        if (iVar2 != 2) goto LAB_1418d4123;
        bVar6 = fVar1 < fVar7 * *(float *)(param_1 + 0x14);
      }
      uVar4 = CONCAT31((int3)((uint)iVar2 >> 8),!bVar6);
      goto LAB_1418d40c6;
    }
  }
LAB_1418d4123:
  uVar4 = 0;
LAB_1418d40c6:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d4128 FUN_1418d4128 body=77 status=ok
// SIG undefined FUN_1418d4128(void)

bool FUN_1418d4128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400e8a68(param_3);
  if ((lVar1 != 0) &&
     (lVar2 = (**(code **)(*(longlong *)(lVar1 + 0x3c20) + 0x10))(lVar1 + 0x3c20),
     *(char *)(lVar1 + 0x8398) == '\x01')) {
    if (lVar2 != 0) {
      return *(longlong *)(lVar2 + 0x20) == 0;
    }
    return true;
  }
  return false;
}



// FUNCTION 1418d4176 FUN_1418d4176 body=242 status=ok
// SIG undefined FUN_1418d4176(void)

void FUN_1418d4176(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406c9b58();
  local_40 = FUN_14079f750();
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_40);
  }
  FUN_1406ca43a(param_1,&local_38,&local_40);
  lVar2 = local_38;
  if ((longlong)local_30 != 0) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + lVar5);
      if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
        if (lVar1 != 0) goto LAB_1418d4217;
        plVar4 = (longlong *)0x0;
      }
      else {
        FUN_1456cec3c(lVar1);
LAB_1418d4217:
        uVar3 = FUN_14079f750();
        plVar4 = (longlong *)FUN_144718840(lVar1,uVar3);
      }
      (**(code **)(*plVar4 + 0x58))(plVar4,0);
      lVar5 = lVar5 + 8;
    } while ((longlong)local_30 * 8 != lVar5);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418d4270 FUN_1418d4270 body=114 status=ok
// SIG undefined FUN_1418d4270(void)

undefined1 FUN_1418d4270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 auStack_48 [45];
  char local_1b;
  undefined1 local_1a;
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_140cc5ae6(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    local_1b = '\0';
    local_19 = 0;
    FUN_140cc5c0c(lVar1,&local_1b);
    if ((local_1b == '\0') && ((local_19 & 1) != 0)) {
      uVar2 = local_1a;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d42ea FUN_1418d42ea body=395 status=ok
// SIG undefined FUN_1418d42ea(void)

void FUN_1418d42ea(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong *local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined4 local_30;
  undefined5 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140907f04();
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbc18c8,0);
  local_a8 = (undefined8 *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (longlong *)0x0;
  uStack_38 = 0;
  uStack_37 = 0;
  local_30 = 0;
  uStack_2c = 0;
  local_b0 = DAT_14cbc18c0;
  local_98 = 0;
  local_90 = 2;
  uStack_a0 = 1;
  uStack_9c = 0;
  FUN_1446f84a2(&local_a8,0);
  uVar2 = uStack_a0;
  *local_a8 = DAT_14cbc18d8;
  lVar3 = (longlong)(int)uStack_a0;
  uStack_a0 = uStack_a0 + 1;
  if (uStack_9c < uStack_a0) {
    FUN_1446f84a2(&local_a8,uVar2);
  }
  uVar2 = uStack_a0;
  local_a8[lVar3] = DAT_14cbc18e0;
  lVar3 = (longlong)(int)uStack_a0;
  uStack_a0 = uStack_a0 + 1;
  if (uStack_9c < uStack_a0) {
    FUN_1446f84a2(&local_a8,uVar2);
  }
  local_a8[lVar3] = DAT_14cbc18d0;
  FUN_140ab6af6(param_2,&local_b0);
  FUN_14072ffb2(CONCAT71(uStack_37,uStack_38),local_30);
  if (CONCAT71(uStack_37,uStack_38) != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d4476 FUN_1418d4476 body=738 status=ok
// SIG undefined FUN_1418d4476(void)

/* WARNING: Removing unreachable block (ram,0x0001418d472e) */

void FUN_1418d4476(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong ****pppplVar4;
  longlong ***ppplVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  longlong **local_d8;
  undefined1 local_d0 [8];
  longlong local_c8;
  undefined4 local_c0;
  longlong **local_b8;
  undefined4 local_b0;
  longlong **local_a8;
  ulonglong local_a0;
  undefined4 local_98;
  undefined4 local_78;
  longlong ***local_70;
  undefined4 local_68;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140bfc8e6();
  if (((*(longlong *)(param_2 + 0x68) == DAT_14cbc1928) && (0 < *(int *)(param_2 + 0x80))) &&
     ((longlong)*(int *)(param_1 + 0x2270) != 0)) {
    lVar7 = (longlong)*(int *)(param_1 + 0x2270) * 0x50;
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x2268) + 0x44);
    do {
      if (((*(longlong *)((longlong)plVar6 + -0xc) != 0) || (*(int *)((longlong)plVar6 + -4) != -1))
         && (*plVar6 != 0)) {
        local_a0 = local_a0 & 0xffffffffffffff00;
        local_78 = 0;
        FUN_1456bb102(&local_a0,param_1 + -0x398);
        FUN_1447c3578((longlong)plVar6 + -0x44,&local_70,&local_a0);
        lVar3 = FUN_14030a32e(&local_70);
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar1 != (code *)0x0) {
          pppplVar4 = &local_70;
          if (0x18 < local_58) {
            pppplVar4 = (longlong ****)local_70;
          }
          (*pcVar1)(pppplVar4);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(local_70);
        }
        FUN_144a5ac3a(&local_a0);
        if (lVar3 != 0) {
          if ((*(byte *)(param_1 + -0x50) & 0x10) == 0) {
            local_b0 = *(undefined4 *)((longlong)plVar6 + -4);
            local_b8 = *(longlong ***)((longlong)plVar6 + -0xc);
            local_c0 = (undefined4)plVar6[1];
            local_c8 = *plVar6;
            local_a8 = (longlong **)0x0;
            FUN_14485c47a(&local_a8,lVar3);
            local_d8 = local_a8;
            local_70 = (longlong ***)0x0;
            local_68 = 0;
            FUN_1446efa72(&local_70,0,4,0x10);
            local_68 = 4;
            *local_70 = (longlong **)&PTR_LAB_149e020b0;
            LOCK();
            UNLOCK();
            ppplVar5 = (longlong ***)(DAT_14c758608 + 1);
            lVar2 = DAT_14c758608 + 1;
            if (ppplVar5 == (longlong ***)0x0) {
              LOCK();
              UNLOCK();
              ppplVar5 = (longlong ***)(DAT_14c758608 + 2);
              lVar2 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar2;
            local_70[2] = (longlong **)ppplVar5;
            *local_70 = (longlong **)&PTR_FUN_14b958410;
            local_70[3] = local_d8;
            local_70[4] = local_b8;
            *(undefined4 *)(local_70 + 5) = local_b0;
            *(longlong *)((longlong)local_70 + 0x2c) = local_c8;
            *(undefined4 *)((longlong)local_70 + 0x34) = local_c0;
            if ((*(byte *)(lVar3 + 0x348) & 0x10) == 0) {
              local_a0 = 0;
              local_98 = 0;
              FUN_14009d848(&local_a0,&local_70);
              FUN_1448b6402(lVar3 + 0x350,local_d0,&local_a0);
              FUN_1449db362(&local_a0);
            }
            else {
              (*(code *)(*local_70)[0xb])();
            }
            FUN_1449db362(&local_70);
          }
          else {
            FUN_1409c2518(lVar3,(longlong *)((longlong)plVar6 + -0xc),plVar6);
          }
        }
      }
      plVar6 = plVar6 + 10;
      lVar7 = lVar7 + -0x50;
    } while (lVar7 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d475a FUN_1418d475a body=395 status=ok
// SIG undefined FUN_1418d475a(void)

void FUN_1418d475a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong *local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined4 local_30;
  undefined5 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140907f04();
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbc1928,0);
  local_a8 = (undefined8 *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (longlong *)0x0;
  uStack_38 = 0;
  uStack_37 = 0;
  local_30 = 0;
  uStack_2c = 0;
  local_b0 = DAT_14cbc1948;
  local_98 = 0;
  local_90 = 2;
  uStack_a0 = 1;
  uStack_9c = 0;
  FUN_1446f84a2(&local_a8,0);
  uVar2 = uStack_a0;
  *local_a8 = DAT_14cbc1938;
  lVar3 = (longlong)(int)uStack_a0;
  uStack_a0 = uStack_a0 + 1;
  if (uStack_9c < uStack_a0) {
    FUN_1446f84a2(&local_a8,uVar2);
  }
  uVar2 = uStack_a0;
  local_a8[lVar3] = DAT_14cbc1940;
  lVar3 = (longlong)(int)uStack_a0;
  uStack_a0 = uStack_a0 + 1;
  if (uStack_9c < uStack_a0) {
    FUN_1446f84a2(&local_a8,uVar2);
  }
  local_a8[lVar3] = DAT_14cbc1930;
  FUN_140ab6af6(param_2,&local_b0);
  FUN_14072ffb2(CONCAT71(uStack_37,uStack_38),local_30);
  if (CONCAT71(uStack_37,uStack_38) != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d48e6 FUN_1418d48e6 body=373 status=ok
// SIG undefined FUN_1418d48e6(void)

void FUN_1418d48e6(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong *local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined4 local_30;
  undefined5 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140907f04();
  local_a8 = (undefined8 *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (longlong *)0x0;
  uStack_38 = 0;
  uStack_37 = 0;
  local_30 = 0;
  uStack_2c = 0;
  local_b0 = DAT_14cbc1968;
  local_98 = 0;
  local_90 = 0;
  uStack_a0 = 1;
  uStack_9c = 0;
  FUN_1446f84a2(&local_a8,0);
  uVar2 = uStack_a0;
  *local_a8 = DAT_14cbc1960;
  lVar3 = (longlong)(int)uStack_a0;
  uStack_a0 = uStack_a0 + 1;
  if (uStack_9c < uStack_a0) {
    FUN_1446f84a2(&local_a8,uVar2);
  }
  uVar2 = uStack_a0;
  local_a8[lVar3] = DAT_14cbc1958;
  lVar3 = (longlong)(int)uStack_a0;
  uStack_a0 = uStack_a0 + 1;
  if (uStack_9c < uStack_a0) {
    FUN_1446f84a2(&local_a8,uVar2);
  }
  local_a8[lVar3] = DAT_14cbc1950;
  FUN_140ab6af6(param_2,&local_b0);
  FUN_14072ffb2(CONCAT71(uStack_37,uStack_38),local_30);
  if (CONCAT71(uStack_37,uStack_38) != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d4a5c FUN_1418d4a5c body=40 status=ok
// SIG undefined FUN_1418d4a5c(void)

undefined8 FUN_1418d4a5c(undefined8 param_1,int param_2)

{
  FUN_1402d9b92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d4a84 FUN_1418d4a84 body=118 status=ok
// SIG undefined FUN_1418d4a84(void)

undefined8 * FUN_1418d4a84(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5dfa60;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_14075386c(param_1 + 0x81);
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407538a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d4afa FUN_1418d4afa body=118 status=ok
// SIG undefined FUN_1418d4afa(void)

undefined8 * FUN_1418d4afa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5dfa60;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_14075386c(param_1 + 0x81);
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407538a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d4b70 FUN_1418d4b70 body=118 status=ok
// SIG undefined FUN_1418d4b70(void)

undefined8 FUN_1418d4b70(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb8df08 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb8df08,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d4be8 FUN_1418d4be8 body=29 status=ok
// SIG undefined FUN_1418d4be8(void)

undefined8 FUN_1418d4be8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d4c06 FUN_1418d4c06 body=76 status=ok
// SIG undefined FUN_1418d4c06(void)

undefined8 FUN_1418d4c06(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140ef3c44(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001418d4c47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1418d4c52 FUN_1418d4c52 body=625 status=ok
// SIG undefined FUN_1418d4c52(void)

void FUN_1418d4c52(longlong param_1,undefined4 *param_2)

{
  uint *puVar1;
  byte bVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 auStack_88 [32];
  undefined4 local_68 [6];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(char *)(param_1 + 0x799c) == '\x01') && (*(char *)(param_1 + -0xfa8) == '\x03')) &&
     (lVar5 = FUN_1403ca227(), *(int *)(lVar5 + 0x480) != *(int *)(lVar5 + 0x4ac))) {
    lVar6 = *(longlong *)(param_2 + 10);
    uVar12 = (uint)((ulonglong)lVar6 >> 0x10);
    uVar11 = (uint)lVar6 & 0xffff;
    lVar10 = lVar5 + 0x4b0;
    if (*(longlong *)(lVar5 + 0x4b8) != 0) {
      lVar10 = *(longlong *)(lVar5 + 0x4b8);
    }
    uVar12 = *(int *)(lVar5 + 0x4c0) - 1U &
             (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar11) +
             (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar11 >> 4);
    iVar9 = *(int *)(lVar10 + (ulonglong)uVar12 * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*(longlong *)(lVar5 + 0x478) + (longlong)iVar9 * 0x14);
        if (*plVar8 == lVar6) {
          if ((plVar8 != (longlong *)0x0) && ((byte *)(plVar8 + 1) != (byte *)0x0)) {
            bVar2 = *(byte *)(plVar8 + 1);
            if ((ulonglong)bVar2 < 0x14) {
              if (*(char *)(param_2 + 8) == '\x03') {
                uVar13 = *param_2;
              }
              else {
                FUN_1400b56fe(local_68,param_2,CONCAT71((uint7)(uint3)(uVar12 >> 8),3));
                uVar13 = 0;
                if (local_48 != 0) {
                  uVar13 = local_68[0];
                }
                pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
                if (pcVar4 != (code *)0x0) {
                  (*pcVar4)();
                }
                if (0x18 < local_50) {
                  FUN_1400020a8();
                }
              }
              *(undefined4 *)(param_1 + 0x78fc + (ulonglong)bVar2 * 4) = uVar13;
              uVar3 = *(ulonglong *)(param_1 + -0x10f8);
              if (uVar3 < 0xffffffff00000000) {
                plVar8 = DAT_14c9980d0;
                if (DAT_14c9980d8 == 0) {
                  plVar8 = (longlong *)0x0;
                }
                (**(code **)(*plVar8 + 0x58))(plVar8,param_1 + -0x1120);
              }
              else {
                uVar12 = (uint)uVar3;
                if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c998088)) {
                  puVar7 = &DAT_14c998070;
                  if (DAT_14c998080 != (undefined *)0x0) {
                    puVar7 = DAT_14c998080;
                  }
                  if ((*(uint *)(puVar7 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar12 & 0x1f) & 1)
                      != 0) {
                    lVar6 = DAT_14c998060 + (ulonglong)(uVar12 & 0x7fffffff) * 0x68;
                    lVar5 = *(longlong *)(lVar6 + 0x18);
                    if (*(longlong *)(lVar6 + 0x18) == 0) {
                      lVar5 = lVar6 + 8;
                    }
                    puVar1 = (uint *)(lVar5 + (ulonglong)((byte)(bVar2 + 0x53) >> 5) * 4);
                    *puVar1 = *puVar1 | 1 << (bVar2 + 0x53 & 0x1f);
                    *(byte *)(lVar6 + 0x60) = *(byte *)(lVar6 + 0x60) | 1;
                  }
                }
              }
            }
          }
          break;
        }
        iVar9 = *(int *)((longlong)plVar8 + 0xc);
      } while (iVar9 != -1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d4ec4 FUN_1418d4ec4 body=305 status=ok
// SIG undefined FUN_1418d4ec4(void)

void FUN_1418d4ec4(longlong *param_1,float param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  float local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x6c8))();
  if (param_1[0x85] != 0) {
    lVar5 = FUN_1411b6c24();
    *(double *)(lVar5 + 0x10) = *(double *)(lVar5 + 0x10) + (double)param_2;
  }
  param_1[0xa2] = (longlong)((double)param_2 + (double)param_1[0xa2]);
  if ((char)param_1[0x2f] == '\x03') {
    FUN_1447f69b6(param_1 + 0xacb);
  }
  local_48 = param_2;
  local_44 = param_3;
  uVar6 = FUN_14477b072(param_1,DAT_14cacf6f0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_48);
  puVar3 = (undefined8 *)param_1[0xebc];
  if (puVar3 != (undefined8 *)0x0) {
    iVar4 = *(int *)(puVar3 + 1);
    do {
      if (iVar4 == 0) goto LAB_1418d4f7d;
      LOCK();
      iVar2 = *(int *)(puVar3 + 1);
      bVar7 = iVar4 == iVar2;
      if (bVar7) {
        *(int *)(puVar3 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
    } while (!bVar7);
    if (param_1[0xebb] != 0) {
      thunk_FUN_1411b6e1a(param_1[0xebb],1);
    }
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
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
      }
    }
  }
LAB_1418d4f7d:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418d5010 FUN_1418d5010 body=83 status=ok
// SIG undefined FUN_1418d5010(void)

void FUN_1418d5010(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x430);
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x1e8) + 0x48))(lVar1 + 0x1e8);
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x430) + 0x1e8) + 0x50))
              (*(longlong *)(param_1 + 0x430) + 0x1e8);
  }
  FUN_140ebeee8(param_1 + 0x4de8);
  return;
}



// FUNCTION 1418d5064 FUN_1418d5064 body=106 status=ok
// SIG undefined FUN_1418d5064(void)

void FUN_1418d5064(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar3 = FUN_14045cd5e(param_1 + 0x2ba8);
    if ((lVar3 == param_2) && (iVar1 = *(int *)(&DAT_000050c8 + param_1), (longlong)iVar1 != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x50c0);
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(lVar3 + 0x20 + lVar4);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x850))(plVar2,1);
        }
        lVar4 = lVar4 + 0x170;
      } while ((longlong)iVar1 * 0x170 - lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 1418d50ce FUN_1418d50ce body=81 status=ok
// SIG undefined FUN_1418d50ce(void)

void FUN_1418d50ce(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + -0xf48) == '\x03') {
    cVar1 = FUN_1449ce79a(param_1 + -0x10c0);
    plVar2 = (longlong *)(param_1 + 0x5778);
    if (cVar1 == '\0') {
      plVar2 = (longlong *)(param_1 + 0x5760);
    }
                    /* WARNING: Could not recover jumptable at 0x0001418d5114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 1418d5120 FUN_1418d5120 body=81 status=ok
// SIG undefined FUN_1418d5120(void)

void FUN_1418d5120(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + -0xf48) == '\x03') {
    cVar1 = FUN_1449ce79a(param_1 + -0x10c0);
    plVar2 = (longlong *)(param_1 + 0x5778);
    if (cVar1 == '\0') {
      plVar2 = (longlong *)(param_1 + 0x5760);
    }
                    /* WARNING: Could not recover jumptable at 0x0001418d5166. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 1418d5172 FUN_1418d5172 body=332 status=ok
// SIG undefined FUN_1418d5172(void)

void FUN_1418d5172(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  
  pcVar2 = *(code **)(*param_1 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    lVar3 = param_1[0x76];
    if (lVar3 == 0) {
      pcVar2 = *(code **)(*param_1 + 0x5f8);
      if (pcVar2 == FUN_144784df4) {
        if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (((((*(int *)((longlong)param_1 + 0x75b4) == 0) ||
                (uVar1 = *(uint *)(param_1 + 0xeb6), (int)uVar1 < 0)) ||
               (DAT_14c9647dc <= (int)uVar1)) ||
              ((plVar4 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar4 == (longlong *)0x0 || ((int)plVar4[2] != *(int *)((longlong)param_1 + 0x75b4))
               ))) || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) goto LAB_1418d521b;
          if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
            lVar3 = *plVar4;
          }
          else {
            lVar3 = 0;
          }
          lVar3 = lVar3 + 0x110;
        }
        else {
          lVar3 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
        }
        if (lVar3 == 0) goto LAB_1418d521b;
        lVar3 = *(longlong *)(lVar3 + 0x20);
      }
      else {
        lVar3 = (*pcVar2)(param_1);
      }
      if (lVar3 == 0) goto LAB_1418d521b;
      lVar3 = *(longlong *)(lVar3 + 0x3b0);
      goto LAB_1418d5264;
    }
  }
  else {
    lVar3 = (*pcVar2)(param_1);
LAB_1418d5264:
    if (lVar3 == 0) goto LAB_1418d521b;
  }
  if (((*(byte *)(lVar3 + 0x39a) & 8) == 0) && (param_1[0x7ee] == 0)) {
    FUN_1405e47c6(param_1,0);
    if (param_1[0xd0a] != 0) {
      *(undefined4 *)(param_1[0xd0a] + 0x1f8) = 0;
    }
  }
LAB_1418d521b:
  if (*(char *)((longlong)param_1 + 0x62f9) == (char)param_1[0xc54]) {
    return;
  }
  FUN_1414f600e(param_1);
  return;
}



// FUNCTION 1418d5312 FUN_1418d5312 body=500 status=ok
// SIG undefined FUN_1418d5312(void)

undefined8 FUN_1418d5312(longlong param_1,undefined8 param_2)

{
  float fVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
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
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = (longlong *)FUN_1408a1fe2(param_1 + -0x3090);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x5d8))(plVar3);
    if (lVar4 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_70 = &local_58;
        local_58 = FUN_141030f22;
        local_60 = FUN_14081d0ea;
        local_68 = &LAB_1459f2e4c;
        local_78 = &LAB_148c39de3;
        local_80 = &LAB_1457a9eb2;
        local_88 = &DAT_149e063b2;
        local_90 = 0;
        local_98 = 0x10000004;
        local_a0 = 0x10;
        local_a8 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
        lVar5 = FUN_1405c673d();
        if (0 < *(int *)(lVar5 + 0x30)) {
          local_58 = (code *)0x0;
          uStack_50 = 0;
          local_48 = 0x3f800000;
          local_40 = 1;
          bVar6 = (char)*(int *)(lVar5 + 0x30) - 1;
          local_44 = (int)param_2;
          local_3c = (int)param_2;
          bVar2 = FUN_1409fe09c(lVar4);
          if (bVar2 < bVar6) {
            bVar6 = bVar2;
          }
          fVar1 = *(float *)(*(longlong *)(lVar5 + 0x28) + 0x160 + (ulonglong)bVar6 * 0x170);
          if ((fVar1 != 0.0) || (NAN(fVar1))) {
            local_38 = 1;
            if (0.0 < fVar1) {
              local_58 = (code *)CONCAT44(local_58._4_4_,fVar1);
            }
            else {
              local_58 = (code *)CONCAT44(fVar1,(undefined4)local_58);
            }
            param_2 = FUN_142b2fc60(&local_58);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d5508 FUN_1418d5508 body=468 status=ok
// SIG undefined FUN_1418d5508(void)

void FUN_1418d5508(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) goto LAB_1418d5615;
  lVar4 = FUN_140d78846();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
      != lVar4 + 0x30)) goto LAB_1418d5615;
  FUN_1400bbfc4(&local_48,param_2);
  *(undefined4 *)(param_1 + 0x2548) = local_48;
  *(undefined4 *)(param_1 + 0x254c) = uStack_44;
  *(undefined4 *)(param_1 + 0x2550) = uStack_40;
  *(undefined4 *)(param_1 + 0x2554) = uStack_3c;
  if ((undefined4 *)(param_1 + 0x2548) == &local_48) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x2558) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x2558) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0x2560) = local_30;
    *(undefined4 *)(param_1 + 0x2564) = local_2c;
  }
  cVar2 = (*(code *)PTR_FUN_14c758760)();
  iVar3 = DAT_14c9647dc;
  uVar1 = *(uint *)(param_2 + 0xc);
  if (cVar2 == '\0') {
LAB_1418d55d6:
    *(uint *)(param_1 + 0x2540) = uVar1;
    if ((int)uVar1 < iVar3) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar3 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar3 = *(int *)(lVar4 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar4 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar5;
      }
    }
  }
  else {
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) goto LAB_1418d55d6;
    *(undefined4 *)(param_1 + 0x2540) = 0;
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x2544) = iVar3;
  *(undefined8 *)(param_1 + 0x2568) = *param_3;
LAB_1418d5615:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418d56de FUN_1418d56de body=27 status=ok
// SIG undefined FUN_1418d56de(void)

void FUN_1418d56de(longlong param_1,char param_2,undefined8 param_3)

{
  if (param_2 != '\0') {
    FUN_1400bc96c(param_1 + 0x65e0,param_3);
    return;
  }
  FUN_1400bc8c2(param_1 + 0x65e0,param_3);
  return;
}



// FUNCTION 1418d5722 FUN_1418d5722 body=376 status=ok
// SIG undefined FUN_1418d5722(void)

undefined8 * FUN_1418d5722(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(&DAT_00006850 + param_1);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x43d8) != 0)) {
    lVar4 = *(longlong *)(lVar3 + 0x43d8) + 0x20;
    lVar1 = FUN_14485c28e(lVar4);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_14485c28e(lVar4);
    }
    if (*(longlong *)(lVar3 + 0x3170) == 0) {
      if (*(char *)(lVar3 + 0x34b0) != '\x01') goto LAB_1418d5748;
      lVar4 = lVar3 + 0x3210;
    }
    else {
      lVar4 = *(longlong *)(lVar3 + 0x3170) + 0xd8;
    }
    lVar2 = FUN_140153468(lVar4);
    if (((lVar2 != 0) && ((*(byte *)(lVar4 + 0x298) & 2) == 0)) &&
       (*(longlong *)(lVar3 + 0x110) != 0)) {
      if (*(longlong *)(lVar3 + 0x3170) == 0) {
        if (*(char *)(lVar3 + 0x34b0) != '\x01') goto LAB_1418d5748;
        lVar4 = lVar3 + 0x3210;
      }
      else {
        lVar4 = *(longlong *)(lVar3 + 0x3170) + 0xd8;
      }
      lVar4 = FUN_140153468(lVar4);
      if ((lVar1 != 0) && (lVar4 != 0)) {
        if (*(longlong *)(lVar3 + 0x3170) == 0) {
          if (*(char *)(lVar3 + 0x34b0) == '\x01') {
            lVar3 = lVar3 + 0x3210;
            goto LAB_1418d587f;
          }
          lVar3 = 0;
        }
        else {
          lVar3 = *(longlong *)(lVar3 + 0x3170) + 0xd8;
LAB_1418d587f:
          lVar3 = FUN_140153468(lVar3);
        }
        if (((lVar3 == lVar1) && (*(longlong *)(&DAT_00006850 + param_1) != 0)) &&
           (lVar3 = *(longlong *)(*(longlong *)(&DAT_00006850 + param_1) + 0x43d8), lVar3 != 0)) {
          *param_2 = *(undefined8 *)(lVar3 + 0xd0);
          *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar3 + 0xd8);
          goto LAB_1418d5756;
        }
      }
    }
  }
LAB_1418d5748:
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0x4fc71eb5;
LAB_1418d5756:
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1418d589a FUN_1418d589a body=307 status=ok
// SIG undefined FUN_1418d589a(void)

undefined8 * FUN_1418d589a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [24];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = *(longlong **)(param_1 + -0x37a0);
  lVar4 = DAT_14cbc1da8;
  if ((*(longlong *)(param_1 + 0x3a8) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x3a8) + 0xa60), lVar3 != 0)) {
    lVar4 = lVar3;
  }
  if (plVar1 != (longlong *)0x0) {
    cVar2 = (**(code **)(*plVar1 + 0x4c8))(plVar1,lVar4);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*plVar1 + 0x4c8))(plVar1,DAT_14cbc1db0);
      if (cVar2 == '\0') goto LAB_1418d59a8;
      lVar3 = *plVar1;
      lVar4 = DAT_14cbc1db0;
    }
    else {
      lVar3 = *plVar1;
    }
    (**(code **)(lVar3 + 0x4a8))(plVar1,&local_a8,lVar4,0);
    *param_2 = local_88;
    param_2[1] = uStack_80;
    param_2[2] = local_78;
    local_48 = local_a8;
    uStack_44 = uStack_a4;
    uStack_40 = uStack_a0;
    uStack_3c = uStack_9c;
    local_38 = local_98;
    uStack_34 = uStack_94;
    uStack_30 = uStack_90;
    uStack_2c = uStack_8c;
    FUN_1448052ee(&local_48,local_c0);
    if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_1418d59a8:
  (**(code **)(*(longlong *)(param_1 + -0x3bc8) + 0x718))((longlong *)(param_1 + -0x3bc8),param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
}



// FUNCTION 1418d59d0 FUN_1418d59d0 body=84 status=ok
// SIG undefined FUN_1418d59d0(void)

void FUN_1418d59d0(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  
  if (-1 < (int)param_2) {
    if ((int)param_2 < *(int *)(param_1 + 0x3d08)) {
      lVar1 = *(longlong *)(param_1 + 0x3d00) + (ulonglong)param_2 * 0x48;
      FUN_140705884(param_1 + 0x3bf0,lVar1);
      *(undefined1 *)(lVar1 + 0x1c) = 0;
    }
    else {
      bVar2 = (byte)param_2 & 0x1f;
      *(uint *)(param_1 + 0x3d10) =
           *(uint *)(param_1 + 0x3d10) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
    }
  }
  return;
}



// FUNCTION 1418d5a24 FUN_1418d5a24 body=1445 status=ok
// SIG undefined FUN_1418d5a24(void)

longlong FUN_1418d5a24(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *param_2;
  if (lVar5 == DAT_14cb8d440) {
    plVar8 = *(longlong **)(param_1 + 0x6500);
    if (plVar8 == (longlong *)0x0) goto LAB_1418d5af7;
    iVar3 = (int)plVar8[1];
    do {
      if (iVar3 == 0) goto LAB_1418d5af7;
      LOCK();
      iVar2 = (int)plVar8[1];
      bVar10 = iVar3 == iVar2;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar10);
    lVar5 = *(longlong *)(param_1 + 0x64f8);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x1fc) == 0) {
LAB_1418d5d2f:
        param_1 = 0;
      }
      else {
        uVar4 = *(uint *)(lVar5 + 0x1f8);
        param_1 = 0;
        if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if ((plVar9 == (longlong *)0x0) ||
             (((int)plVar9[2] != *(int *)(lVar5 + 0x1fc) ||
              ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_1418d5d2f;
          param_1 = *plVar9;
        }
      }
    }
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    if (lVar5 != 0) goto LAB_1418d5ac2;
  }
  else if (lVar5 == DAT_14cbc1eb8) {
    if (0 < *(int *)(&DAT_000050b0 + param_1)) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x50a8) + 0x20);
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar5);
      }
      else if (lVar5 == 0) goto LAB_1418d5af7;
      if (0 < *(int *)(lVar5 + 0xd10)) {
        plVar8 = *(longlong **)(lVar5 + 0xd08);
LAB_1418d5b38:
        if ((*plVar8 != 0) && (lVar5 = *(longlong *)(*plVar8 + 0x48), lVar5 != 0)) {
          if (DAT_14cb63950 == 0) {
            local_40 = &local_28;
            local_28 = FUN_144a7958c;
            local_30 = FUN_14081d0ea;
            local_38 = &LAB_1464ec72a;
            local_48 = &LAB_1486f5f75;
            local_50 = &LAB_140945686;
            local_58 = L"Engine";
            local_60 = 0;
            local_68 = 0x10000004;
            local_70 = 0x10;
            local_78 = 0x19d0;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,
                          FUN_1464fe8ee);
          }
          if (*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) {
            param_1 = 0;
            if (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) == DAT_14cb63950 + 0x30) {
              param_1 = lVar5;
            }
            goto LAB_1418d5ac2;
          }
        }
      }
    }
  }
  else if (lVar5 == DAT_14cbc1ec0) {
    if (0 < *(int *)(&DAT_000050b0 + param_1)) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x50a8) + 0x20);
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar5);
      }
      else if (lVar5 == 0) goto LAB_1418d5af7;
      if (0 < *(int *)(lVar5 + 0xd20)) {
        plVar8 = *(longlong **)(lVar5 + 0xd18);
        goto LAB_1418d5b38;
      }
    }
  }
  else if (lVar5 == DAT_14cbc1ec8) {
    lVar5 = (**(code **)(*(longlong *)(param_1 + 0x2b40) + 0x10))(param_1 + 0x2b40);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x20) != 0)) {
      param_1 = *(longlong *)(*(longlong *)(lVar5 + 0x20) + 0x428);
joined_r0x0001418d5d24:
      if (param_1 != 0) {
        lVar5 = DAT_14cb63950;
        if (DAT_14cb63950 == 0) {
          local_40 = &local_28;
          local_28 = FUN_144a7958c;
          local_30 = FUN_14081d0ea;
          local_38 = &LAB_1464ec72a;
          local_48 = &LAB_1486f5f75;
          local_50 = &LAB_140945686;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10000004;
          local_70 = 0x10;
          local_78 = 0x19d0;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee)
          ;
          lVar5 = DAT_14cb63950;
        }
LAB_1418d5ca5:
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) goto LAB_1418d5ac2;
      }
    }
  }
  else if (lVar5 == DAT_14cbc1ed0) {
    uVar4 = FUN_1403ae46b();
    if ((((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x6810))) &&
        (lVar5 = (ulonglong)uVar4 * 0x48 + *(longlong *)(param_1 + 0x6808), lVar5 != 0)) &&
       ((*(longlong **)(lVar5 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar5 + 0x20) != 0 &&
        (lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x28) + 8))(), lVar5 != 0)))) {
      uVar7 = FUN_1408e1156();
      plVar8 = (longlong *)FUN_144718840(lVar5,uVar7);
      if (plVar8 != (longlong *)0x0) {
        lVar5 = *plVar8;
        uVar7 = 0;
LAB_1418d5f6e:
        param_1 = (**(code **)(lVar5 + 0xa8))(plVar8,uVar7);
        if (param_1 != 0) {
          lVar5 = FUN_144a78c84();
          goto LAB_1418d5ca5;
        }
      }
    }
  }
  else if (lVar5 == DAT_14cbc1ed8) {
    uVar4 = FUN_1403ae46b();
    if (((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x6810))) &&
       ((lVar5 = (ulonglong)uVar4 * 0x48 + *(longlong *)(param_1 + 0x6808), lVar5 != 0 &&
        ((*(longlong **)(lVar5 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar5 + 0x20) != 0 &&
         (lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x28) + 8))(), lVar5 != 0)))))) {
      uVar7 = FUN_1408e1156();
      plVar8 = (longlong *)FUN_144718840(lVar5,uVar7);
      if (plVar8 != (longlong *)0x0) {
        lVar5 = *plVar8;
        uVar7 = 1;
        goto LAB_1418d5f6e;
      }
    }
  }
  else if (lVar5 == DAT_14cbc1ee0) {
    lVar5 = FUN_1407afa82(param_1 + -0x10e0);
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(lVar5 + 0x8c8);
      uVar7 = 0;
LAB_1418d5c83:
      param_1 = (**(code **)(lVar6 + 0xa8))(lVar5 + 0x8c8,uVar7);
      goto joined_r0x0001418d5d24;
    }
  }
  else if (lVar5 == DAT_14cbc1ee8) {
    lVar5 = FUN_1407afa82(param_1 + -0x10e0);
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(lVar5 + 0x8c8);
      uVar7 = 1;
      goto LAB_1418d5c83;
    }
  }
  else if (lVar5 == DAT_14cb8d438) {
    param_1 = *(longlong *)(param_1 + 0x21d8);
    goto LAB_1418d5ac2;
  }
LAB_1418d5af7:
  param_1 = 0;
LAB_1418d5ac2:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d5ff2 FUN_1418d5ff2 body=469 status=ok
// SIG undefined FUN_1418d5ff2(void)

void FUN_1418d5ff2(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*param_2 == 0) goto LAB_1418d609b;
  lVar4 = FUN_14030dc32();
  if (lVar4 != 0) {
    lVar6 = *param_2;
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x6e7c);
    lVar8 = *(longlong *)(lVar4 + 0xf8);
    if (lVar8 == 0) {
      uVar5 = FUN_1407f787c();
      lVar8 = FUN_14477b664(uVar5);
      *(longlong *)(lVar4 + 0xf8) = lVar8;
    }
    lVar7 = *(longlong *)(lVar4 + 0x100);
    if (((lVar7 == 0) && (lVar7 = 0, lVar8 != 0)) && (*(longlong *)(lVar4 + 0xf0) != 0)) {
      plVar2 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0xf0));
      }
      *(longlong *)(lVar4 + 0x100) = lVar7;
    }
    FUN_1447997cc(lVar6,lVar7,uVar1,0,0);
  }
  lVar4 = param_1[0xfda];
  if (lVar4 == 0) {
    uVar5 = FUN_1405b1a32();
    lVar4 = FUN_14477b664(uVar5);
    param_1[0xfda] = lVar4;
  }
  lVar6 = param_1[0xfdb];
  if (lVar6 == 0) {
    if ((param_1[0xfd9] == 0) || (lVar4 == 0)) goto LAB_1418d609b;
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      param_1[0xfdb] = 0;
      goto LAB_1418d609b;
    }
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar5,param_1 + 0xfd9);
    param_1[0xfdb] = lVar6;
    if (lVar6 == 0) goto LAB_1418d609b;
  }
  if ((*(__uint64 *)*param_2 != 0xffffffffffffffff) && (DAT_14cb25ab0 == '\x01')) {
    AK::SoundEngine::SetSwitch
              (*(uint *)(lVar6 + 0x48),*(uint *)(lVar6 + 0x38),*(__uint64 *)*param_2);
  }
LAB_1418d609b:
                    /* WARNING: Could not recover jumptable at 0x0001418d60ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  return;
}



// FUNCTION 1418d61c8 FUN_1418d61c8 body=74 status=ok
// SIG undefined FUN_1418d61c8(void)

undefined8 FUN_1418d61c8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + -0x1158);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d6214 FUN_1418d6214 body=568 status=ok
// SIG undefined FUN_1418d6214(void)

void FUN_1418d6214(longlong param_1,longlong *param_2,char param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x5de0) == '\0') {
    local_60 = (longlong *)(param_1 + 0x5de8);
    *(undefined4 *)(param_1 + 0x5df0) = 0;
    if (*(int *)(param_1 + 0x5df4) < 0) {
      FUN_14480809c(local_60,0);
    }
    local_58 = 0;
    uStack_50 = 0;
    FUN_140c5bf3a(param_1 + -0x3c48,&local_58,1);
    if ((int)uStack_50 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_50 & 0xffffffff);
    }
    if (*(int *)(param_1 + 0x5df4) < (int)uStack_50) {
      FUN_14480809c(local_60);
    }
    lVar4 = local_58;
    if ((int)uStack_50 != 0) {
      lVar6 = (longlong)(int)uStack_50;
      lVar5 = 0;
      do {
        uVar2 = *(undefined4 *)(*(longlong *)(lVar4 + lVar5) + 0xc);
        iVar3 = *(int *)(param_1 + 0x5df0);
        *(uint *)(param_1 + 0x5df0) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x5df4) < iVar3 + 1U) {
          FUN_1447808da(local_60,iVar3);
        }
        *(undefined4 *)(*local_60 + (longlong)iVar3 * 4) = uVar2;
        lVar5 = lVar5 + 8;
      } while (lVar6 * 8 != lVar5);
    }
    *(undefined1 *)(param_1 + 0x5de0) = 1;
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if (param_3 != '\0') {
    uVar2 = *(undefined4 *)(param_1 + -0x3c3c);
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_1447808da(param_2,iVar3);
    }
    *(undefined4 *)(*param_2 + (longlong)iVar3 * 4) = uVar2;
  }
  uVar1 = *(uint *)(param_1 + 0x5df0);
  if ((longlong)(int)uVar1 != 0) {
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar3) < uVar1) {
      FUN_1447808da(param_2,iVar3);
    }
    memcpy((void *)((longlong)iVar3 * 4 + *param_2),*(void **)(param_1 + 0x5de8),
           (longlong)(int)uVar1 << 2);
  }
  if (((*(longlong *)(param_1 + -0x3a80) != 0) &&
      (lVar4 = *(longlong *)(*(longlong *)(param_1 + -0x3a80) + 0x120), lVar4 != 0)) &&
     (lVar4 = *(longlong *)(lVar4 + 0xa8), lVar4 != 0)) {
    uVar2 = *(undefined4 *)(lVar4 + 0xc);
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_1447808da(param_2,iVar3);
    }
    *(undefined4 *)(*param_2 + (longlong)iVar3 * 4) = uVar2;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418d644e FUN_1418d644e body=86 status=ok
// SIG undefined FUN_1418d644e(void)

void FUN_1418d644e(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x9a28) == '\x01') {
    if (*(longlong *)(param_2 + 0xa8) != param_1 && *(longlong *)(param_2 + 0xa8) != 0) {
      cVar1 = FUN_140940f38();
      if (cVar1 != '\0') {
        *(undefined1 *)(param_1 + 0x9a28) = 0;
      }
    }
  }
  FUN_14009c94e(param_1 + 0x300,param_2);
  return;
}



// FUNCTION 1418d64d4 FUN_1418d64d4 body=56 status=ok
// SIG undefined FUN_1418d64d4(void)

void FUN_1418d64d4(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  FUN_140907f3e();
  uVar1 = *(undefined1 *)(param_1 + 0xea0);
  uVar2 = FUN_1409f759a();
  FUN_1409f75d4(param_2,&DAT_14cbc8e58,uVar2,uVar1);
  return;
}



// FUNCTION 1418d650c FUN_1418d650c body=297 status=ok
// SIG undefined FUN_1418d650c(void)

void FUN_1418d650c(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0xf50) != 0) {
    FUN_140608954(param_2,param_1 + 0xf50);
  }
  if (*(longlong *)(param_1 + 0xf58) != 0) {
    FUN_140608954(param_2,param_1 + 0xf58);
  }
  if (*(longlong *)(param_1 + 0xf60) != 0) {
    FUN_140608954(param_2,param_1 + 0xf60);
  }
  if (*(longlong *)(param_1 + 0xfa8) != 0) {
    FUN_140608954(param_2,param_1 + 0xfa8);
  }
  if (*(longlong *)(param_1 + 0xfb0) != 0) {
    FUN_140608954(param_2,param_1 + 0xfb0);
  }
  if (*(longlong *)(param_1 + 0xfb8) != 0) {
    FUN_140608954(param_2,param_1 + 0xfb8);
  }
  if (*(longlong *)(param_1 + 0xfc0) != 0) {
    FUN_140608954(param_2,param_1 + 0xfc0);
  }
  if (*(longlong *)(param_1 + 0xfc8) != 0) {
    FUN_140608954(param_2,param_1 + 0xfc8);
  }
  FUN_14094f414(param_2,param_1 + 0xf68);
  FUN_14094f414(param_2,param_1 + 0xf88);
  FUN_14094f414(param_2,param_1 + 0xfd0);
  FUN_140608954(param_2,param_1 + 0x3a0);
  FUN_14094f414(param_2,param_1 + 0x70);
  return;
}



// FUNCTION 1418d6636 FUN_1418d6636 body=156 status=ok
// SIG undefined FUN_1418d6636(void)

undefined8 * FUN_1418d6636(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b023a30;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d70(param_1 + 0x3b);
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d66d2 FUN_1418d66d2 body=320 status=ok
// SIG undefined FUN_1418d66d2(void)

void FUN_1418d66d2(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1418d673b;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1418d673b:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 1418d6812 FUN_1418d6812 body=101 status=ok
// SIG undefined FUN_1418d6812(void)

void FUN_1418d6812(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95bba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418d6878 FUN_1418d6878 body=101 status=ok
// SIG undefined FUN_1418d6878(void)

void FUN_1418d6878(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41bb90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c0e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418d68de FUN_1418d68de body=29 status=ok
// SIG undefined FUN_1418d68de(void)

undefined8 FUN_1418d68de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d68fc FUN_1418d68fc body=101 status=ok
// SIG undefined FUN_1418d68fc(void)

void FUN_1418d68fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95cc50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418d6962 FUN_1418d6962 body=130 status=ok
// SIG undefined FUN_1418d6962(void)

byte FUN_1418d6962(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = FUN_1447b4afa();
  bVar3 = FUN_14009cabe(param_1 + 0x638,param_2,param_3,param_4,1000);
  bVar3 = bVar3 | bVar2;
  lVar1 = *(longlong *)(param_1 + 0x1ec0);
  if (lVar1 != 0) {
    if (((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0) && (DAT_14cad4be8 == '\0')) {
      bVar2 = FUN_14009cd08(param_2,lVar1,param_3,*param_4);
    }
    else {
      bVar2 = 0;
    }
    bVar3 = bVar3 | bVar2;
  }
  return bVar3;
}



// FUNCTION 1418d69e4 FUN_1418d69e4 body=151 status=ok
// SIG undefined FUN_1418d69e4(void)

longlong FUN_1418d69e4(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x498);
  if (lVar4 == 0) {
    uVar3 = FUN_145723f28();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x498) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x4a0) == 0) {
    if ((*(longlong *)(param_1 + 0x490) != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x490));
      }
      *(longlong *)(param_1 + 0x4a0) = lVar4;
      return lVar4;
    }
    return 0;
  }
  return *(longlong *)(param_1 + 0x4a0);
}



// FUNCTION 1418d6a7c FUN_1418d6a7c body=153 status=ok
// SIG undefined FUN_1418d6a7c(void)

void FUN_1418d6a7c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14107d4d8();
  if ((*(longlong *)(param_1 + 0x2c70) != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x3e0) + 0x20))(param_1 + 0x3e0);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
      lVar3 = FUN_14069c71e();
      if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)) &&
         (*(byte *)(plVar1 + 0xbd) = *(byte *)(*(longlong *)(param_1 + 0x2c70) + 0xcf8) & 1,
         (*(byte *)(*(longlong *)(param_1 + 0x2c70) + 0xcf8) & 1) != 0)) {
        *(byte *)((longlong)plVar1 + 0x7d) = *(byte *)((longlong)plVar1 + 0x7d) | 1;
      }
    }
  }
  return;
}



// FUNCTION 1418d6b16 FUN_1418d6b16 body=551 status=ok
// SIG undefined FUN_1418d6b16(void)

ulonglong FUN_1418d6b16(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  void *_Src;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 == 0) {
    local_30 = *(undefined8 *)(param_1 + -0x2c28);
    FUN_1400021e4(&local_30,&local_40);
    if (&local_40 == param_2) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_40;
      *(undefined4 *)(param_2 + 1) = local_38;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_34;
    }
    uVar10 = CONCAT71((int7)((ulonglong)&local_40 >> 8),1);
    goto LAB_1418d6bed;
  }
  lVar7 = *(longlong *)(lVar2 + 0xd08);
  if (lVar7 == 0) {
    uVar5 = FUN_140da11f2();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar2 + 0xd08) = lVar7;
  }
  lVar6 = *(longlong *)(lVar2 + 0xd10);
  if (lVar6 == 0) {
    if ((lVar7 != 0) && (*(longlong *)(lVar2 + 0xd00) != 0)) {
      plVar8 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
        *(undefined8 *)(lVar2 + 0xd10) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
        lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar2 + 0xd00));
        *(longlong *)(lVar2 + 0xd10) = lVar6;
        if (lVar6 != 0) goto LAB_1418d6b5e;
      }
    }
    FUN_14020fad6(param_2,L"Missing UX Name");
    uVar10 = 0;
  }
  else {
LAB_1418d6b5e:
    plVar8 = *(longlong **)(lVar6 + 0x18);
    if (*(code **)(*plVar8 + 0x50) != FUN_144828418) {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))();
    }
    FUN_1447a1fc0(plVar8);
    plVar8 = *(longlong **)(lVar6 + 0x18);
    pcVar3 = *(code **)(*plVar8 + 0x28);
    if (pcVar3 == FUN_14482841c) {
      plVar9 = plVar8 + 3;
      if (plVar8[5] != 0) {
        plVar9 = (longlong *)(plVar8[5] + 8);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      plVar9 = plVar8 + 2;
    }
    else {
      plVar9 = (longlong *)(*pcVar3)(plVar8);
    }
    uVar10 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
    if (plVar9 != param_2) {
      iVar1 = (int)plVar9[1];
      _Src = (void *)*plVar9;
      *(int *)(param_2 + 1) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)param_2 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_2,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
        }
      }
    }
  }
LAB_1418d6bed:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 1418d6d3e FUN_1418d6d3e body=339 status=ok
// SIG undefined FUN_1418d6d3e(void)

longlong FUN_1418d6d3e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  lVar2 = *(longlong *)(param_1 + -0x2aa0);
  if (lVar2 != 0) {
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
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
       (lVar2 = *(longlong *)(lVar2 + 0x3c0), lVar2 != 0)) {
      lVar1 = FUN_144a5dd5e();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) == lVar1 + 0x30)) {
        lVar1 = FUN_1402a1246(lVar2);
        lVar2 = lVar1 + 0xd28;
        if (lVar1 == 0) {
          lVar2 = 0;
        }
        goto LAB_1418d6d9a;
      }
    }
  }
  lVar2 = 0;
LAB_1418d6d9a:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1418d6e92 FUN_1418d6e92 body=881 status=ok
// SIG undefined FUN_1418d6e92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418d6e92(longlong param_1)

{
  double dVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double *pdVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_b8 [32];
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c9a62a8 == 0) {
    FUN_1449292ca(param_1);
  }
  plVar2 = *(longlong **)(param_1 + 0x5a8);
  if (plVar2 == (longlong *)0x0) goto LAB_1418d713c;
  pdVar7 = (double *)&DAT_14c846480;
  if (plVar2[0x39] != 0) {
    pdVar7 = (double *)(plVar2[0x39] + 0x240);
  }
  dVar5 = *pdVar7;
  dVar13 = pdVar7[1];
  auVar16._8_8_ = pdVar7[2];
  dVar4 = pdVar7[3];
  auVar17 = *(undefined1 (*) [16])(pdVar7 + 8);
  dVar1 = pdVar7[10];
  (**(code **)(*plVar2 + 0x328))(plVar2,&local_98);
  dVar12 = -dVar5;
  dVar13 = -dVar13;
  auVar16._8_8_ = auVar16._8_8_ * -1.0;
  dVar4 = dVar4 * 1.0;
  dVar14 = dStack_90 * dVar12 - dVar13 * local_98;
  dVar15 = local_88 * dVar13 - auVar16._8_8_ * dStack_90;
  dVar11 = local_98 * auVar16._8_8_ - dVar12 * local_88;
  dVar15 = dVar15 + dVar15;
  dVar11 = dVar11 + dVar11;
  dVar14 = dVar14 + dVar14;
  auVar10 = divpd(_DAT_149934d80,auVar17);
  auVar16._0_8_ =
       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar17._0_8_)) & auVar10._0_8_) *
       ((dVar14 * dVar13 - dVar11 * auVar16._8_8_) + dVar4 * dVar15 + local_98);
  auVar16._8_8_ =
       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar17._8_8_)) & auVar10._8_8_) *
       (dVar5 * dVar14 + auVar16._8_8_ * dVar15 + dVar4 * dVar11 + dStack_90);
  dVar1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar1)) & (ulonglong)(1.0 / dVar1)) *
          (dVar4 * dVar14 + local_88 + (dVar11 * dVar12 - dVar15 * dVar13));
  *(undefined1 (*) [16])(param_1 + 0x570) = auVar16;
  *(double *)(param_1 + 0x580) = dVar1;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    auVar17 = divpd(auVar16,*(undefined1 (*) [16])(lVar3 + 0x280));
    auVar16._0_8_ = auVar17._0_8_;
    dVar4 = *(double *)(lVar3 + 0x290);
    *(undefined1 (*) [16])(param_1 + 0x570) = auVar17;
    auVar16._8_8_ = auVar17._8_8_;
    *(double *)(param_1 + 0x580) = dVar1 / dVar4;
  }
  lVar3 = *(longlong *)(param_1 + 0x5a8);
  uVar8 = *(undefined8 *)(lVar3 + 0x18e0);
  uVar6 = *(undefined8 *)(lVar3 + 0x18d8);
  *(undefined8 *)(param_1 + 0x558) = *(undefined8 *)(lVar3 + 0x18d0);
  *(undefined8 *)(param_1 + 0x560) = uVar6;
  *(undefined8 *)(param_1 + 0x568) = uVar8;
  *(byte *)(param_1 + 0x588) =
       -(1.0 < ABS(*(double *)(param_1 + 0x560)) ||
        10.0 <= SQRT(auVar16._0_8_ * auVar16._0_8_ + auVar16._8_8_ * auVar16._8_8_)) & 1;
  if (((*(longlong *)(lVar3 + 0x1c8) == 0) ||
      (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x1c8) + 0x120), lVar3 == 0)) ||
     (lVar3 = *(longlong *)(lVar3 + 0xa8), lVar3 == 0)) {
LAB_1418d7119:
    *(undefined1 *)(param_1 + 0x589) = 0;
    uVar8 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x590) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x598) = uVar8;
    uVar8 = DAT_14c8464f0;
  }
  else {
    lVar9 = FUN_1402095ca();
    if (((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
         != lVar9 + 0x30)) || (lVar3 = *(longlong *)(lVar3 + 0x1700), lVar3 == 0))
    goto LAB_1418d7119;
    *(undefined1 *)(param_1 + 0x589) = 1;
    uVar8 = *(undefined8 *)(lVar3 + 0x880);
    *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(lVar3 + 0x878);
    *(undefined8 *)(param_1 + 0x598) = uVar8;
    uVar8 = *(undefined8 *)(lVar3 + 0x888);
  }
  *(undefined8 *)(param_1 + 0x5a0) = uVar8;
LAB_1418d713c:
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418d7204 FUN_1418d7204 body=70 status=ok
// SIG undefined FUN_1418d7204(void)

void FUN_1418d7204(longlong *param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xc);
  FUN_1409e8ae2();
  if ((bVar1 & 0x10) >> 4 == param_2) {
    return;
  }
  FUN_140cc0454(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001418d7243. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x578))(param_1);
  return;
}



// FUNCTION 1418d724a FUN_1418d724a body=176 status=ok
// SIG undefined FUN_1418d724a(void)

longlong FUN_1418d724a(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  (**(code **)(*param_1 + 0x10))();
  lVar1 = param_1[0x60];
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar1 + 0x3b8);
  if (lVar5 == 0) {
    uVar4 = FUN_14050c9fe();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x3b8) = lVar5;
  }
  if (*(longlong *)(lVar1 + 0x3c0) != 0) {
    return *(longlong *)(lVar1 + 0x3c0);
  }
  if (lVar5 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar1 + 0x3b0) != 0) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x3b0));
    }
    *(longlong *)(lVar1 + 0x3c0) = lVar5;
    return lVar5;
  }
  return 0;
}



// FUNCTION 1418d7300 FUN_1418d7300 body=860 status=ok
// SIG undefined FUN_1418d7300(void)

void FUN_1418d7300(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14cb253f8 == 0) {
    local_70 = &local_58;
    local_58 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_14081d0ea;
    local_78 = &LAB_147f6f09d;
    local_80 = &LAB_146201c25;
    local_88 = &DAT_149e063b2;
    local_90 = 0;
    local_98 = 0x10000006;
    local_a0 = 8;
    local_a8 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
  }
  lVar5 = DAT_14cb253f8;
  if (((*(longlong *)(DAT_14cb253f8 + 0x110) != 0) ||
      (FUN_140aa6c08(DAT_14cb253f8), *(longlong *)(lVar5 + 0x110) != 0)) &&
     (plVar1 = DAT_14cb25be0, DAT_14cb25be0 != (longlong *)0x0)) {
    uVar4 = FUN_1447210f0(param_1 + -0x3d8);
    uVar8 = (**(code **)(*plVar1 + 0x2b0))(plVar1,*(undefined8 *)(param_1 + -0x228),uVar4);
    lVar5 = *param_2;
    lVar6 = plVar1[0x19];
    if (lVar6 == 0) {
      uVar4 = FUN_1407f787c();
      lVar6 = FUN_14477b664(uVar4);
      plVar1[0x19] = lVar6;
    }
    lVar7 = plVar1[0x1a];
    if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (plVar1[0x18] != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar4,plVar1 + 0x18);
      }
      plVar1[0x1a] = lVar7;
    }
    local_a8 = local_a8 & 0xffffff00;
    FUN_1447997cc(lVar5,lVar7,uVar8,0);
  }
  lVar5 = *(longlong *)(param_1 + 0x1370);
  if (lVar5 == 0) {
    uVar4 = FUN_1405b1a32();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x1370) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x1368);
  if (*(longlong *)(param_1 + 0x1378) == 0) {
    if ((*plVar1 == 0) || (lVar5 == 0)) goto LAB_1418d73f4;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x1378) = 0;
      goto LAB_1418d73f4;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar5 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x1378) = lVar5;
    if (lVar5 == 0) goto LAB_1418d73f4;
  }
  if (*param_2 != 0) {
    if (*(longlong *)(param_1 + 0x1370) == 0) {
      uVar4 = FUN_1405b1a32();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x1370) = lVar5;
      if (((*(longlong *)(param_1 + 0x1378) == 0) && (lVar5 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          uVar4 = FUN_144aff482(uVar4,plVar1);
        }
        *(undefined8 *)(param_1 + 0x1378) = uVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
  }
LAB_1418d73f4:
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418d7680 FUN_1418d7680 body=56 status=ok
// SIG undefined FUN_1418d7680(void)

void FUN_1418d7680(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  FUN_140907f3e();
  uVar1 = *(undefined1 *)(param_1 + 0x713);
  uVar2 = FUN_1409f759a();
  FUN_1409f75d4(param_2,&DAT_14cbc8e58,uVar2,uVar1);
  return;
}



// FUNCTION 1418d76c2 FUN_1418d76c2 body=41 status=ok
// SIG undefined FUN_1418d76c2(void)

void FUN_1418d76c2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1446e7478(param_2,param_1,uVar1,0);
  return;
}



// FUNCTION 1418d76ec FUN_1418d76ec body=40 status=ok
// SIG undefined FUN_1418d76ec(void)

void FUN_1418d76ec(longlong param_1)

{
  FUN_140115e24();
  FUN_1402d7906(param_1 + 0x3b0,param_1 + 0x390);
  return;
}



// FUNCTION 1418d771a FUN_1418d771a body=55 status=ok
// SIG undefined FUN_1418d771a(void)

void FUN_1418d771a(longlong param_1)

{
  FUN_1405f1eac();
  if (*(int *)(param_1 + 0x3d4) == 0) {
    return;
  }
  FUN_1407c0b34(param_1 + 0x3b0,param_1 + 0x390,param_1);
  return;
}



// FUNCTION 1418d7752 FUN_1418d7752 body=102 status=ok
// SIG undefined FUN_1418d7752(void)

undefined8 FUN_1418d7752(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x1d01) != '\0') {
    return 1;
  }
  plVar1 = *(longlong **)(param_1 + 0x1710);
  if ((plVar1 != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*plVar1 + 0x468))(plVar1,param_2,param_3,param_4), cVar2 != '\0')) {
    return 1;
  }
  uVar3 = FUN_14022439a(param_1,param_2,param_3,param_4);
  return uVar3;
}



// FUNCTION 1418d77b8 FUN_1418d77b8 body=74 status=ok
// SIG undefined FUN_1418d77b8(void)

undefined8 FUN_1418d77b8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + -0x4c0);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d7804 FUN_1418d7804 body=287 status=ok
// SIG undefined FUN_1418d7804(void)

undefined8 FUN_1418d7804(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar2 = *(code **)(*(longlong *)(param_1 + -0x4f0) + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    if (*(longlong *)(param_1 + -0x140) != 0) {
      return 1;
    }
    pcVar2 = *(code **)(*(longlong *)(param_1 + -0x4f0) + 0x5f8);
    if (pcVar2 == FUN_144784df4) {
      pcVar2 = *(code **)(*(longlong *)(param_1 + 0x3730) + 0x18);
      if (pcVar2 == (code *)&LAB_144904684) {
        if ((((*(int *)(param_1 + 0x70c4) == 0) ||
             (uVar1 = *(uint *)(param_1 + 0x70c0), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)
            ) || (((plVar5 = (longlong *)
                             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                   plVar5 == (longlong *)0x0 || ((int)plVar5[2] != *(int *)(param_1 + 0x70c4))) ||
                  ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)))) goto LAB_1418d78b6;
        if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
          lVar3 = *plVar5;
        }
        else {
          lVar3 = 0;
        }
        lVar3 = lVar3 + 0x110;
      }
      else {
        lVar3 = (*pcVar2)(param_1 + 0x3730);
      }
      if (lVar3 == 0) goto LAB_1418d78b6;
      lVar3 = *(longlong *)(lVar3 + 0x20);
    }
    else {
      lVar3 = (*pcVar2)();
    }
    if (lVar3 == 0) goto LAB_1418d78b6;
    lVar3 = *(longlong *)(lVar3 + 0x3b0);
  }
  else {
    lVar3 = (*pcVar2)(param_1 + -0x4f0);
  }
  if (lVar3 != 0) {
    return 1;
  }
LAB_1418d78b6:
  if (*(longlong *)(param_1 + 0x1220) == 0) {
    return 0;
  }
  uVar4 = FUN_1449ce97a();
  return uVar4;
}



// FUNCTION 1418d7924 FUN_1418d7924 body=3037 status=ok
// SIG undefined FUN_1418d7924(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1418d7924(longlong param_1,double *param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  char cVar7;
  int iVar8;
  double dVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  double *pdVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  float _X;
  undefined1 auStack_318 [32];
  float local_2f8;
  double *local_2f0;
  undefined1 *local_2e8;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  undefined4 local_204;
  undefined4 local_1d8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  double local_188;
  double dStack_180;
  double local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  undefined1 local_118;
  undefined4 local_114;
  undefined1 local_110;
  undefined4 local_10c;
  undefined2 local_108;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0 [4];
  longlong local_c0;
  undefined8 local_b8;
  double local_b0;
  
  dVar9 = (double)(DAT_14c707940 ^ (ulonglong)auStack_318);
  plVar1 = (longlong *)(param_1 + -0x510);
  lVar11 = *(longlong *)(param_1 + -0x348);
  local_b0 = dVar9;
  if (lVar11 == 0) {
    local_138 = DAT_14c846508;
    local_148 = (undefined4)DAT_14c8464f8;
    uStack_144 = DAT_14c8464f8._4_4_;
    uStack_140 = (undefined4)DAT_14c846500;
    uStack_13c = DAT_14c846500._4_4_;
  }
  else {
    dVar4 = *(double *)(lVar11 + 0x240);
    dVar17 = *(double *)(lVar11 + 0x248);
    dVar5 = *(double *)(lVar11 + 0x250);
    dVar3 = *(double *)(lVar11 + 600);
    pdVar13 = *(double **)(lVar11 + 0x228);
    lVar15 = param_1;
    local_2a8 = dVar4;
    uStack_2a0 = dVar17;
    local_298 = dVar5;
    dStack_290 = dVar3;
    if (pdVar13 == (double *)0x0) {
      lVar15 = 0x40;
      pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
      dVar9 = DAT_14c8463d8;
      *pdVar13 = DAT_14c8463d0;
      pdVar13[1] = dVar9;
      dVar9 = DAT_14c8463e8;
      pdVar13[2] = DAT_14c8463e0;
      pdVar13[3] = dVar9;
      dVar9 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar13[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar13[5] = dVar9;
      dVar9 = DAT_14c846508;
      pdVar13[6] = DAT_14c846508;
      *(double **)(lVar11 + 0x228) = pdVar13;
    }
    auVar19._8_4_ = (int)-(ulonglong)(dVar17 != pdVar13[1]);
    auVar19._0_8_ = -(ulonglong)(dVar4 != *pdVar13);
    auVar19._12_4_ = (int)(-(ulonglong)(dVar17 != pdVar13[1]) >> 0x20);
    iVar8 = movmskpd(SUB84(dVar9,0),auVar19);
    auVar21._8_4_ = (int)-(ulonglong)(dVar3 != pdVar13[3]);
    auVar21._0_8_ = -(ulonglong)(dVar5 != pdVar13[2]);
    auVar21._12_4_ = (int)(-(ulonglong)(dVar3 != pdVar13[3]) >> 0x20);
    uVar14 = movmskpd((int)lVar15,auVar21);
    if ((uVar14 & 0x3fffffff) != 0 || iVar8 != 0) {
      pdVar13[2] = local_298;
      pdVar13[3] = dStack_290;
      *(undefined4 *)pdVar13 = (undefined4)local_2a8;
      *(undefined4 *)((longlong)pdVar13 + 4) = local_2a8._4_4_;
      *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_2a0;
      *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_2a0._4_4_;
      FUN_1448052ee(&local_2a8,&local_130);
      pdVar13[6] = local_120;
      pdVar13[4] = local_130;
      pdVar13[5] = dStack_128;
    }
    local_138 = pdVar13[6];
    local_148 = *(undefined4 *)(pdVar13 + 4);
    uStack_144 = *(undefined4 *)((longlong)pdVar13 + 0x24);
    uStack_140 = *(undefined4 *)(pdVar13 + 5);
    uStack_13c = *(undefined4 *)((longlong)pdVar13 + 0x2c);
  }
  param_2[2] = local_138;
  *(undefined4 *)param_2 = local_148;
  *(undefined4 *)((longlong)param_2 + 4) = uStack_144;
  *(undefined4 *)(param_2 + 1) = uStack_140;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_13c;
  plVar10 = (longlong *)(**(code **)(*plVar1 + 0x5d0))(plVar1);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x7a0))(plVar10,&local_168,param_3,param_4);
    auVar6._4_4_ = uStack_164;
    auVar6._0_4_ = local_168;
    auVar6._8_4_ = uStack_160;
    auVar6._12_4_ = uStack_15c;
    auVar19 = divpd(auVar6,_DAT_1499387d0);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = local_158;
    auVar21 = divpd(auVar20,_DAT_1499387d0);
    auVar19 = roundpd(auVar19,auVar19,3);
    auVar21 = roundpd(auVar21,auVar21,3);
    dVar17 = ((double)CONCAT44(uStack_164,local_168) - auVar19._0_8_ * (double)DAT_1499387d0) *
             0.008726646259971648;
    dVar5 = ((double)CONCAT44(uStack_15c,uStack_160) - auVar19._8_8_ * DAT_1499387d0._8_8_) *
            0.008726646259971648;
    dVar9 = (local_158 - auVar21._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar4 = (0.0 - auVar21._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    sin(dVar17);
    sin(dVar5);
    sin(dVar9);
    sin(dVar4);
    cos(dVar17);
    cos(dVar5);
    cos(dVar9);
    cos(dVar4);
    local_178 = DAT_14c8464f0;
    local_188 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    dStack_180 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_198 = DAT_14c846508;
    local_1a8 = (undefined4)DAT_14c8464f8;
    uStack_1a4 = DAT_14c8464f8._4_4_;
    uStack_1a0 = (undefined4)DAT_14c846500;
    uStack_19c = DAT_14c846500._4_4_;
    (**(code **)(*plVar10 + 0x718))(plVar10);
    lVar11 = FUN_1447210f0(plVar1);
    if (lVar11 != 0) {
      memset(&local_2a8,0,0x100);
      local_1d8 = 0xffffffff;
      local_204 = 0xffffffff;
      local_2a8 = (double)CONCAT44(0x3f800000,(undefined4)local_2a8);
      local_10c = 0;
      local_108 = 0x101;
      local_e0 = 0;
      local_d8 = 0x800000000;
      local_c0 = 0;
      local_b8 = 0x400000000;
      local_114 = 0;
      local_130 = 0.0;
      dStack_128 = 0.0;
      local_110 = 0;
      local_120 = 7.291122019556812e-304;
      local_118 = 1;
      lVar15 = *(longlong *)(param_1 + 0x1200);
      if (lVar15 != 0) {
        local_d0[0] = *(undefined4 *)(lVar15 + 0xc);
        local_b8 = 0x400000001;
      }
      uVar14 = (uint)(lVar15 != 0);
      if (plVar1 != (longlong *)0x0) {
        local_b8 = CONCAT44(local_b8._4_4_,uVar14 + 1);
        local_d0[uVar14] = *(undefined4 *)(param_1 + -0x504);
        lVar15 = *(longlong *)(param_1 + 0x1200);
      }
      if ((((lVar15 != 0) && (*(int *)(lVar15 + 0x4ef4) != 0)) &&
          (uVar14 = *(uint *)(lVar15 + 0x4ef0), -1 < (int)uVar14)) && ((int)uVar14 < DAT_14c9647dc))
      {
        plVar10 = (longlong *)
                  ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
        if (((plVar10 != (longlong *)0x0) && ((int)plVar10[2] == *(int *)(lVar15 + 0x4ef4))) &&
           (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (*plVar10 != 0)))) {
          FUN_144a85a22(&local_130);
        }
      }
      dVar4 = (double)FUN_144719204(local_1a8);
      dVar5 = (double)FUN_144719204(uStack_1a0);
      dVar9 = sin(dVar4 * 0.017453292519943295);
      dVar4 = cos(dVar4 * 0.017453292519943295);
      dVar17 = sin(dVar5 * 0.017453292519943295);
      dVar5 = cos(dVar5 * 0.017453292519943295);
      local_2b0 = dVar9 * 10000.0 + local_178;
      local_2b8 = dVar17 * dVar4 * 10000.0 + dStack_180;
      local_2c0 = dVar5 * dVar4 * 10000.0 + local_188;
      local_2e8 = &DAT_14cad0f10;
      local_2f0 = &local_130;
      local_2f8 = 2.24208e-44;
      cVar7 = FUN_1400b50cc(lVar11,&local_2a8);
      if (cVar7 == '\0') {
        param_2[2] = local_198;
        *(undefined4 *)param_2 = local_1a8;
        *(undefined4 *)((longlong)param_2 + 4) = uStack_1a4;
        *(undefined4 *)(param_2 + 1) = uStack_1a0;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_19c;
      }
      else if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(param_1 + 0x1e38))) {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1e30) + 0x20 + (ulonglong)param_4 * 0x170);
        if ((lVar11 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar11);
        }
        else if (lVar11 == 0) goto LAB_1418d7f10;
        local_2c8 = DAT_14c8464f0;
        local_2d8 = (undefined4)DAT_14c8464e0;
        uStack_2d4 = DAT_14c8464e0._4_4_;
        uStack_2d0 = (undefined4)DAT_14c8464e8;
        uStack_2cc = DAT_14c8464e8._4_4_;
        if ((0 < *(int *)(lVar11 + 0xbf0)) &&
           (plVar10 = *(longlong **)(*(longlong *)(lVar11 + 0xbe8) + 8), plVar10 != (longlong *)0x0)
           ) {
          (**(code **)(*plVar10 + 0x2c0))(plVar10,&local_2d8);
        }
        dVar4 = local_288 - local_2c8;
        dVar5 = dStack_290 - (double)CONCAT44(uStack_2cc,uStack_2d0);
        dVar17 = local_298 - (double)CONCAT44(uStack_2d4,local_2d8);
        dVar9 = 0.0;
        if ((((dVar5 != 0.0) || (NAN(dVar5))) || (dVar17 != 0.0)) || (NAN(dVar17))) {
          dVar9 = atan2(dVar5,dVar17);
          dVar9 = dVar9 * 57.29577951308232;
        }
        param_2[1] = dVar9;
        dVar17 = SQRT(dVar17 * dVar17 + dVar5 * dVar5);
        dVar9 = 0.0;
        if (((dVar4 != 0.0) || (NAN(dVar4))) || ((dVar17 != 0.0 || (NAN(dVar17))))) {
          dVar9 = atan2(dVar4,dVar17);
          dVar9 = dVar9 * 57.29577951308232;
        }
        *param_2 = dVar9;
        param_2[2] = 0.0;
      }
LAB_1418d7f10:
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  lVar11 = *(longlong *)(param_1 + 0x14f0);
  if ((lVar11 != 0) && (*(char *)(lVar11 + 0xf50) == '\x01')) {
    _X = *(float *)(lVar11 + 0xf54) * 0.017453292;
    FUN_144a76660(&local_148,&local_2a8);
    FUN_144a76660(param_2,&local_130);
    dVar9 = uStack_2a0 * dStack_128;
    dVar17 = local_2a8 * local_130;
    dVar4 = local_298 * local_120;
    fVar16 = cosf(_X);
    if (dVar4 + dVar17 + dVar9 < (double)fVar16) {
      dVar5 = local_2a8 * dStack_128 - local_130 * uStack_2a0;
      dVar17 = local_130 * local_298 - local_2a8 * local_120;
      dVar4 = uStack_2a0 * local_120 - dStack_128 * local_298;
      dVar9 = dVar5 * dVar5 + dVar4 * dVar4 + dVar17 * dVar17;
      if ((dVar9 != 1.0) || (NAN(dVar9))) {
        if (9.99999993922529e-09 <= dVar9) {
          dVar9 = 1.0 / SQRT(dVar9);
          dVar5 = dVar5 * dVar9;
          dVar17 = dVar17 * dVar9;
          dVar4 = dVar4 * dVar9;
        }
        else {
          dVar4 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dVar17 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          dVar5 = DAT_14c8464f0;
        }
      }
      dVar3 = (double)_X * 0.5;
      dVar9 = sin(dVar3);
      dVar3 = cos(dVar3);
      dVar4 = dVar4 * dVar9;
      dVar17 = dVar17 * dVar9;
      dVar5 = dVar5 * dVar9;
      dVar22 = dVar17 * local_298 - uStack_2a0 * dVar5;
      dVar22 = dVar22 + dVar22;
      dVar9 = dVar4 * uStack_2a0 - local_2a8 * dVar17;
      dVar9 = dVar9 + dVar9;
      dVar18 = dVar5 * local_2a8 - local_298 * dVar4;
      dVar18 = dVar18 + dVar18;
      local_120 = (dVar4 * dVar18 - dVar22 * dVar17) + dVar3 * dVar9 + local_298;
      dStack_128 = (dVar5 * dVar22 - dVar9 * dVar4) + dVar3 * dVar18 + uStack_2a0;
      local_130 = (dVar17 * dVar9 - dVar18 * dVar5) + dVar3 * dVar22 + local_2a8;
      FUN_144a79a9c(&local_130,&local_168);
      param_2[2] = local_158;
      *(undefined4 *)param_2 = local_168;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_164;
      *(undefined4 *)(param_2 + 1) = uStack_160;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_15c;
    }
  }
  fVar16 = (float)FUN_140ad6f88(param_1 + 0x1d90,param_4);
  if (fVar16 <= 0.0) goto LAB_1418d8096;
  pcVar2 = *(code **)(*plVar1 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    lVar11 = *(longlong *)(param_1 + -0x160);
    if (lVar11 == 0) {
      pcVar2 = *(code **)(*plVar1 + 0x5f8);
      if (pcVar2 == FUN_144784df4) {
        pcVar2 = *(code **)(*(longlong *)(param_1 + 0x3710) + 0x18);
        if (pcVar2 == (code *)&LAB_144904684) {
          if (*(int *)(param_1 + 0x70a4) != 0) {
            uVar14 = *(uint *)(param_1 + 0x70a0);
            lVar11 = 0;
            if (((int)uVar14 < 0) || (DAT_14c9647dc <= (int)uVar14)) goto LAB_1418d8015;
            plVar10 = (longlong *)
                      ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
            if ((plVar10 != (longlong *)0x0) &&
               (((int)plVar10[2] == *(int *)(param_1 + 0x70a4) &&
                ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
                lVar11 = *plVar10;
              }
              else {
                lVar11 = 0;
              }
              lVar11 = lVar11 + 0x110;
              goto LAB_1418d8151;
            }
          }
        }
        else {
          lVar11 = (*pcVar2)(param_1 + 0x3710);
LAB_1418d8151:
          if (lVar11 != 0) {
            lVar11 = *(longlong *)(lVar11 + 0x20);
            goto LAB_1418d815e;
          }
        }
      }
      else {
        lVar11 = (*pcVar2)(plVar1);
LAB_1418d815e:
        if (lVar11 != 0) {
          lVar11 = *(longlong *)(lVar11 + 0x3b0);
          goto LAB_1418d8015;
        }
      }
      lVar11 = 0;
    }
  }
  else {
    lVar11 = (*pcVar2)(plVar1);
  }
LAB_1418d8015:
  if (((int)param_4 < 0) || (*(int *)(param_1 + 0x1e38) <= (int)param_4)) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1e30) + 0x20 + (ulonglong)param_4 * 0x170);
    if ((lVar15 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar15);
    }
  }
  uVar12 = FUN_1447210f0(plVar1);
  local_2f0 = (double *)CONCAT71(local_2f0._1_7_,lVar11 != 0);
  local_2e8 = (undefined1 *)CONCAT71(local_2e8._1_7_,lVar11 == 0);
  local_2f8 = fVar16;
  FUN_140ad7566(&local_2a8,uVar12,lVar15,param_2);
  param_2[2] = local_298;
  *(undefined4 *)param_2 = (undefined4)local_2a8;
  *(undefined4 *)((longlong)param_2 + 4) = local_2a8._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_2a0;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_2a0._4_4_;
LAB_1418d8096:
  if (((ulonglong)local_b0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d8502 FUN_1418d8502 body=57 status=ok
// SIG undefined FUN_1418d8502(void)

void FUN_1418d8502(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    uVar2 = FUN_1412c0c36();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418d8530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1418d853c FUN_1418d853c body=166 status=ok
// SIG undefined FUN_1418d853c(void)

undefined8 * FUN_1418d853c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b112240;
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_140d1f760(param_1[0x6c],*(undefined4 *)(param_1 + 0x6d));
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  FUN_1407538a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d85e2 FUN_1418d85e2 body=156 status=ok
// SIG undefined FUN_1418d85e2(void)

undefined8 * FUN_1418d85e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b023a30;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d70(param_1 + 0x3b);
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418d867e FUN_1418d867e body=101 status=ok
// SIG undefined FUN_1418d867e(void)

void FUN_1418d867e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95e910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418d86e4 FUN_1418d86e4 body=101 status=ok
// SIG undefined FUN_1418d86e4(void)

void FUN_1418d86e4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95f230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418d874a FUN_1418d874a body=101 status=ok
// SIG undefined FUN_1418d874a(void)

void FUN_1418d874a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95f5f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418d87b0 FUN_1418d87b0 body=3965 status=ok
// SIG undefined FUN_1418d87b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418d87b0(undefined8 *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  int iVar11;
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  longlong lVar15;
  double *pdVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  longlong *plVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  bool bVar27;
  double dVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  longlong *plVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auStack_378 [32];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [12];
  undefined4 uStack_2dc;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  longlong local_2b8;
  longlong *local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  double local_278;
  char local_270;
  undefined8 *local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  longlong *plStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  longlong *plStack_160;
  longlong *local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  undefined8 *local_120;
  double local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (((((param_1[0x1f] != 0) || (*(int *)(param_1 + 0x23) < 0)) ||
       (*(int *)(param_1 + 0x22) <= *(int *)(param_1 + 0x23))) ||
      ((*(int *)(param_1 + 0x25) == 0 ||
       (uVar22 = *(uint *)((longlong)param_1 + 0x124), (int)uVar22 < 0)))) ||
     ((((DAT_14c9647dc <= (int)uVar22 ||
        ((plVar23 = (longlong *)
                    ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
         plVar23 == (longlong *)0x0 || ((int)plVar23[2] != *(int *)(param_1 + 0x25))))) ||
       ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)) ||
      ((lVar21 = *plVar23, lVar21 == 0 ||
       ((lVar19 = *(longlong *)(lVar21 + 0xb0), lVar19 == 0 &&
        (lVar19 = FUN_1448abda6(lVar21), lVar19 == 0)))))))) goto LAB_1418d8f83;
  uVar13 = DAT_14cb1ae68;
  if (DAT_14c9a7d10 == (undefined8 *)0x0) {
    DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *DAT_14c9a7d10 = 0;
    DAT_14c9a7d10[1] = 0;
    DAT_14c9a7d10[2] = 0;
    DAT_14c9a7d10[3] = 0;
  }
  FUN_14005915a(DAT_14c9a7d10,&local_168,uVar13,lVar19);
  plVar23 = plStack_160;
  dVar45 = local_168;
  if ((local_168 == 0.0) || (plStack_160 == (longlong *)0x0)) {
    plVar23 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plStack_160 + 1) = (int)plStack_160[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plStack_160 + 0xc) = *(int *)((longlong)plStack_160 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar24 = plStack_160 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*plStack_160)(plStack_160);
      LOCK();
      piVar1 = (int *)((longlong)plVar23 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
    }
  }
  plVar24 = plStack_160;
  if (plStack_160 != (longlong *)0x0) {
    LOCK();
    plVar35 = plStack_160 + 1;
    *(int *)plVar35 = (int)*plVar35 + -1;
    UNLOCK();
    if ((int)*plVar35 == 0) {
      (**(code **)*plStack_160)(plStack_160);
      LOCK();
      piVar1 = (int *)((longlong)plVar24 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
      }
    }
  }
  if (plVar23 == (longlong *)0x0) goto LAB_1418d8f83;
  iVar14 = (int)plVar23[1];
  do {
    plVar24 = (longlong *)0x0;
    if (iVar14 == 0) break;
    LOCK();
    iVar11 = (int)plVar23[1];
    bVar27 = iVar14 == iVar11;
    if (bVar27) {
      *(int *)(plVar23 + 1) = iVar14 + 1;
      iVar11 = iVar14;
    }
    iVar14 = iVar11;
    UNLOCK();
    plVar24 = plVar23;
  } while (!bVar27);
  LOCK();
  piVar1 = (int *)((longlong)plVar23 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar23 + 0x10))(plVar23);
  }
  if (plVar24 == (longlong *)0x0) goto LAB_1418d8f83;
  if (dVar45 != 0.0) {
    if ((((*(int *)((longlong)param_1 + 0xd4) == 0) ||
         (uVar22 = *(uint *)(param_1 + 0x1a), (int)uVar22 < 0)) || (DAT_14c9647dc <= (int)uVar22))
       || (((plVar23 = (longlong *)
                       ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
            plVar23 == (longlong *)0x0 || ((int)plVar23[2] != *(int *)((longlong)param_1 + 0xd4)))
           || (((*(uint *)(plVar23 + 1) & 0x10200000) != 0 || (lVar19 = *plVar23, lVar19 == 0))))))
    {
      lVar15 = FUN_141136cb6(dVar45);
      lVar19 = 0;
    }
    else {
      lVar15 = *(longlong *)(lVar19 + 0x410);
    }
    if (lVar15 != 0) {
      lVar18 = param_1[0x13];
      if (lVar18 == 0) {
        uVar17 = FUN_141518b52();
        lVar18 = FUN_14477b664(uVar17);
        param_1[0x13] = lVar18;
      }
      lVar20 = param_1[0x14];
      if (lVar20 == 0) {
        if ((lVar18 != 0) && (param_1[0x12] != 0)) {
          plVar23 = *(longlong **)(lVar18 + 0xb8);
          if ((plVar23 == (longlong *)0x0) ||
             (cVar12 = (**(code **)(*plVar23 + 0x108))(plVar23), cVar12 == '\0')) {
            param_1[0x14] = 0;
          }
          else {
            uVar17 = (**(code **)(*plVar23 + 0x110))(plVar23);
            lVar20 = FUN_144aff482(uVar17,param_1 + 0x12);
            param_1[0x14] = lVar20;
            if (lVar20 != 0) goto LAB_1418d8a2b;
          }
        }
      }
      else {
LAB_1418d8a2b:
        FUN_1448c1924(lVar15,&local_2b8);
        if (local_2b8 != 0) {
          if ((*(uint *)(local_2b8 + 500) & 0xfffffffd) == 0) {
            FUN_140512c90();
          }
          FUN_14051243c(local_2b8,&local_168,0);
          auVar51 = _DAT_149934d80;
          if (local_168 == 0.0) {
            local_318 = ZEXT816(0);
            local_308 = ZEXT816(0x3ff0000000000000) << 0x40;
            local_2f8 = ZEXT816(0);
            _local_2e8 = ZEXT816(0);
            dVar45 = (double)DAT_149934d80;
            dVar38 = DAT_149934d80._8_8_;
            local_2d8 = _DAT_149934d80;
            local_2c8 = ZEXT816(0x3ff0000000000000);
            if ((*(int *)(param_1 + 0x1e) < 1) ||
               (lVar15 = FUN_14479d2ce(param_1[0x1d]), lVar15 == 0)) {
              puVar25 = (undefined8 *)(lVar21 + 0x240);
              puVar26 = (undefined8 *)local_318;
              for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
                *puVar26 = *puVar25;
                puVar25 = puVar25 + 1;
                puVar26 = puVar26 + 1;
              }
            }
            else {
              lVar21 = *(longlong *)(lVar20 + 0x30);
              if (lVar21 == 0) {
                uVar17 = FUN_145cd2868();
                lVar21 = FUN_14477b664(uVar17);
                *(longlong *)(lVar20 + 0x30) = lVar21;
              }
              lVar18 = *(longlong *)(lVar20 + 0x38);
              if (lVar18 == 0) {
                if (lVar21 == 0) {
LAB_1418d966f:
                  uVar17 = 0x3ff0000000000000;
                  plVar23 = (longlong *)0x0;
                  uVar49 = 0;
                  uVar48 = 0;
                  uVar47 = 0;
                  uVar13 = 0;
                  dVar50 = 0.0;
                  dVar31 = 0.0;
                  dVar33 = 0.0;
                  plVar35 = (longlong *)0x0;
                }
                else {
                  uVar13 = 0;
                  uVar47 = 0;
                  uVar48 = 0;
                  uVar49 = 0;
                  plVar23 = (longlong *)0x0;
                  uVar17 = 0x3ff0000000000000;
                  dVar33 = 0.0;
                  plVar35 = (longlong *)0x0;
                  dVar50 = 0.0;
                  dVar31 = 0.0;
                  if (*(longlong *)(lVar20 + 0x28) != 0) {
                    plVar23 = *(longlong **)(lVar21 + 0xb8);
                    if ((plVar23 == (longlong *)0x0) ||
                       (cVar12 = (**(code **)(*plVar23 + 0x108))(plVar23), cVar12 == '\0')) {
                      *(undefined8 *)(lVar20 + 0x38) = 0;
                      goto LAB_1418d966f;
                    }
                    uVar17 = (**(code **)(*plVar23 + 0x110))(plVar23);
                    lVar18 = FUN_144aff482(uVar17,(longlong *)(lVar20 + 0x28));
                    *(longlong *)(lVar20 + 0x38) = lVar18;
                    if (lVar18 != 0) goto LAB_1418d8b0d;
                    uVar13 = local_2e8._0_4_;
                    uVar47 = local_2e8._4_4_;
                    uVar48 = local_2e8._8_4_;
                    uVar49 = uStack_2dc;
                    plVar23 = (longlong *)local_308._0_8_;
                    uVar17 = local_308._8_8_;
                    dVar33 = (double)local_318._0_8_;
                    plVar35 = (longlong *)local_318._8_8_;
                    dVar50 = (double)local_2f8._0_8_;
                    dVar31 = (double)local_2f8._8_8_;
                  }
                }
                local_1e8 = 1.0;
                plStack_1e0 = (longlong *)0x0;
                local_1d8 = 0.0;
                local_168 = dVar33;
                plStack_160 = plVar35;
                local_158 = plVar23;
                uStack_150 = uVar17;
                FUN_14276fa40(&local_168,&local_268);
                dVar45 = (double)*(int *)(param_1 + 0x23);
                local_2f8._8_8_ = dStack_260 * -100.0 * dVar45 + dVar31;
                local_2f8._0_8_ = (double)local_268 * -100.0 * dVar45 + dVar50;
                stack0xfffffffffffffd20 = (double)CONCAT44(uVar49,uVar48) + 0.0;
                local_2e8._0_8_ = local_258 * -100.0 * dVar45 + (double)CONCAT44(uVar47,uVar13);
              }
              else {
LAB_1418d8b0d:
                pdVar16 = (double *)&DAT_14c846480;
                if (*(longlong *)(lVar15 + 0x1c8) != 0) {
                  pdVar16 = (double *)(*(longlong *)(lVar15 + 0x1c8) + 0x240);
                }
                dVar9 = *pdVar16;
                dVar6 = pdVar16[1];
                auVar36 = *(undefined1 (*) [16])(pdVar16 + 2);
                dVar33 = auVar36._0_8_;
                dVar50 = auVar36._8_8_;
                dVar2 = pdVar16[4];
                dVar7 = pdVar16[5];
                dVar8 = pdVar16[6];
                dVar32 = pdVar16[7];
                auVar28 = *(undefined1 (*) [16])(pdVar16 + 8);
                auVar29 = *(undefined1 (*) [16])(pdVar16 + 10);
                dVar31 = auVar29._0_8_;
                dVar34 = auVar29._8_8_;
                uVar13 = FUN_140b067aa(lVar18,&local_288,*(int *)(param_1 + 0x1e) + -1);
                dVar42 = dVar9;
                local_358 = auVar28;
                if (local_270 == '\x01') {
                  auVar36 = minpd(auVar51,auVar28);
                  auVar39 = minpd(ZEXT816(0x3ff0000000000000),auVar29);
                  auVar37._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
                  auVar37._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
                  iVar14 = movmskpd(uVar13,auVar37);
                  auVar40._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
                  auVar40._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
                  uVar22 = movmskpd((int)lVar18,auVar40);
                  local_358._0_8_ = auVar28._0_8_;
                  uVar17 = local_358._0_8_;
                  local_358._8_8_ = auVar28._8_8_;
                  uVar10 = local_358._8_8_;
                  local_348 = auVar29;
                  local_338 = dVar8;
                  dStack_330 = dVar32;
                  local_328 = dVar2;
                  dStack_320 = dVar7;
                  if ((uVar22 & 0x3fffffff) == 0 && iVar14 == 0) {
                    local_288 = local_288 * (double)local_358._0_8_;
                    dVar3 = (double)CONCAT44(uStack_27c,uStack_280) * (double)local_358._8_8_;
                    local_278 = local_278 * dVar31;
                    dVar30 = dVar34 * 0.0;
                    dVar43 = dVar3 * dVar9 - dVar6 * local_288;
                    dVar44 = local_278 * dVar6 - dVar33 * dVar3;
                    dVar45 = local_288 * dVar33 - dVar9 * local_278;
                    dVar38 = dVar30 * dVar50 - dVar50 * dVar30;
                    dVar44 = dVar44 + dVar44;
                    dVar45 = dVar45 + dVar45;
                    dVar43 = dVar43 + dVar43;
                    dVar38 = dVar38 + dVar38;
                    dVar41 = dVar6 * dVar44;
                    dVar46 = dVar43 * dVar6;
                    dVar4 = dVar6 * 0.0;
                    dVar5 = dVar6 * 0.0;
                    dVar42 = dVar33 * 0.0 * -1.0 + dVar6 * 0.0 + dVar9 * 1.0 * 1.0 + dVar50 * 0.0;
                    dVar6 = dVar33 * 0.0 * 1.0 + dVar6 * 1.0 + dVar9 * 0.0 * -1.0 + dVar50 * 0.0;
                    auVar36._0_8_ =
                         dVar33 * 1.0 * 1.0 + ((dVar9 * 0.0 * 1.0 + dVar50 * 0.0) - dVar4);
                    auVar36._8_8_ =
                         dVar33 * 0.0 * -1.0 + ((dVar9 * 0.0 * -1.0 + dVar50 * 1.0) - dVar5);
                    dVar2 = dVar2 + (dVar46 - dVar33 * dVar45) + dVar50 * dVar44 + local_288;
                    dVar32 = dVar32 + (dVar38 * dVar50 - dVar38 * dVar50) + dVar50 * dVar38 + dVar30
                    ;
                    dVar31 = dVar31 * 1.0;
                    dVar34 = dVar34 * 0.0;
                    dVar7 = dVar7 + (dVar44 * dVar33 - dVar43 * dVar9) + dVar50 * dVar45 + dVar3;
                    dVar8 = dVar8 + (dVar45 * dVar9 - dVar41) + dVar50 * dVar43 + local_278;
                  }
                  else {
                    dVar42 = dVar6 + dVar6;
                    dVar32 = dVar33 + dVar33;
                    dVar43 = dVar9 * (dVar9 + dVar9);
                    local_1e8 = (dVar45 - (dVar33 * dVar32 + dVar6 * dVar42)) *
                                (double)local_358._0_8_;
                    dStack_1c0 = (dVar38 - (dVar33 * dVar32 + dVar43)) * (double)local_358._8_8_;
                    dVar45 = (dVar9 + dVar9) * dVar50;
                    local_1c8 = (dVar42 * dVar9 - dVar32 * dVar50) * (double)local_358._8_8_;
                    dStack_1a0 = (dVar32 * dVar6 - dVar45) * dVar31;
                    local_1a8 = (dVar42 * dVar50 + dVar9 * dVar32) * dVar31;
                    plStack_1e0 = (longlong *)
                                  ((dVar42 * dVar9 + dVar32 * dVar50) * (double)local_358._0_8_);
                    local_1b8 = (dVar32 * dVar6 + dVar45) * (double)local_358._8_8_;
                    local_1d8 = (dVar9 * dVar32 - dVar42 * dVar50) * (double)local_358._0_8_;
                    uStack_1d0 = 0;
                    uStack_1b0 = 0;
                    local_198 = (1.0 - (dVar43 + dVar6 * dVar42)) * dVar31;
                    uStack_190 = 0;
                    uStack_170 = 0x3ff0000000000000;
                    local_268 = (undefined8 *)&DAT_3ff0000000000000;
                    dStack_260 = 0.0;
                    local_258 = 0.0;
                    uStack_250 = 0;
                    local_238 = 0;
                    uStack_230 = 0;
                    local_228 = 0;
                    uStack_220 = 0;
                    local_218 = 0x3ff0000000000000;
                    uStack_210 = 0;
                    local_1f8 = local_278;
                    uStack_1f0 = 0x3ff0000000000000;
                    dVar31 = dVar31 * 1.0;
                    dVar34 = dVar34 * 0.0;
                    local_248 = ZEXT816(0x3ff0000000000000) << 0x40;
                    local_188 = dVar2;
                    dStack_180 = dVar7;
                    local_178 = dVar8;
                    FUN_1447fea8d(&local_168);
                    FUN_144a1c686(&local_168,0x3e45798ee0000000);
                    auVar28._8_8_ = -(ulonglong)(0.0 <= (double)uVar10);
                    auVar28._0_8_ = -(ulonglong)(0.0 <= (double)uVar17);
                    auVar36 = blendvpd(_DAT_149936790,auVar51,auVar28);
                    dVar45 = (double)(~-(ulonglong)(0.0 <= dVar31) & 0xbff0000000000000 |
                                     (ulonglong)
                                     ((uint)(-(ulonglong)(0.0 <= dVar31) >> 0x20) & 0x3ff00000) <<
                                     0x20);
                    dVar38 = auVar36._0_8_;
                    local_158 = (longlong *)((double)local_158 * dVar38);
                    plStack_160 = (longlong *)((double)plStack_160 * dVar38);
                    local_168 = local_168 * dVar38;
                    dVar38 = auVar36._8_8_;
                    local_138 = local_138 * dVar38;
                    local_140 = local_140 * dVar38;
                    local_148 = dVar38 * local_148;
                    local_118 = local_118 * dVar45;
                    local_120 = (undefined8 *)((double)local_120 * dVar45);
                    local_128 = dVar45 * local_128;
                    FUN_14481fd10(&local_2a8,&local_168);
                    dVar45 = local_298 * local_298 + local_2a8 * local_2a8;
                    dVar38 = dStack_290 * dStack_290 + dStack_2a0 * dStack_2a0;
                    auVar39._0_8_ = dVar45 + dVar38;
                    auVar39._8_8_ = dVar45 + dVar38;
                    auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
                    auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
                    auVar36 = sqrtpd(auVar39,auVar39);
                    auVar51 = divpd(auVar51,auVar36);
                    auVar52._0_8_ = auVar51._0_8_ * local_298;
                    auVar52._8_8_ = auVar51._8_8_ * dStack_290;
                    dVar42 = (double)((ulonglong)(local_2a8 * auVar51._0_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
                    dVar6 = (double)((ulonglong)(dStack_2a0 * auVar51._8_8_) &
                                    -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
                    auVar36 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar52,auVar29);
                    dVar2 = (double)CONCAT44(uStack_104,local_108);
                    dVar32 = 0.0;
                    dVar7 = dStack_100;
                    dVar8 = local_f8;
                  }
                }
                local_318._8_4_ = SUB84(dVar6,0);
                local_318._0_8_ = dVar42;
                local_318._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
                local_2f8._8_4_ = SUB84(dVar7,0);
                local_2f8._0_8_ = dVar2;
                local_2f8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
                local_2e8._8_4_ = SUB84(dVar32,0);
                local_2e8._0_8_ = dVar8;
                uStack_2dc = (int)((ulonglong)dVar32 >> 0x20);
                local_2d8 = local_358;
                local_2c8._8_4_ = SUB84(dVar34,0);
                local_2c8._0_8_ = dVar31;
                local_2c8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
                local_308 = auVar36;
              }
            }
            local_2a8 = *(double *)(param_1[0x21] + (longlong)*(int *)(param_1 + 0x23) * 0x18);
            FUN_1411374ca(&local_168,lVar19,&local_2a8,local_318);
            uVar17 = *param_1;
            lVar21 = param_1[1];
            if (lVar21 != 0) {
              LOCK();
              *(int *)(lVar21 + 0xc) = *(int *)(lVar21 + 0xc) + 1;
              UNLOCK();
            }
            local_268 = (undefined8 *)0x0;
            dStack_260 = (double)((ulonglong)dStack_260 & 0xffffffff00000000);
            FUN_1446efa72(&local_268,0,3,0x10);
            dStack_260 = (double)CONCAT44(dStack_260._4_4_,3);
            *local_268 = &PTR_LAB_14a3a3510;
            LOCK();
            UNLOCK();
            lVar15 = DAT_14c758608 + 1;
            lVar19 = DAT_14c758608 + 1;
            if (lVar15 == 0) {
              LOCK();
              UNLOCK();
              lVar15 = DAT_14c758608 + 2;
              lVar19 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar19;
            local_268[2] = lVar15;
            *local_268 = &PTR_FUN_14b961460;
            local_268[3] = param_1;
            local_268[4] = uVar17;
            local_268[5] = lVar21;
            FUN_140244c74(plStack_160 + 0x24,&local_268);
            FUN_140faf12e(&local_168,&local_1e8);
            plVar35 = plStack_1e0;
            param_1[0x1f] = local_1e8;
            local_1e8 = 0.0;
            plVar23 = (longlong *)param_1[0x20];
            if (plStack_1e0 == plVar23) {
LAB_1418d92b0:
              plVar23 = plStack_1e0;
              if (plStack_1e0 != (longlong *)0x0) {
                LOCK();
                plVar35 = plStack_1e0 + 1;
                *(int *)plVar35 = (int)*plVar35 + -1;
                UNLOCK();
                if ((int)*plVar35 == 0) {
                  (**(code **)*plStack_1e0)(plStack_1e0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar23 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar23 + 0x10))(plVar23);
                  }
                }
              }
            }
            else {
              plStack_1e0 = (longlong *)0x0;
              param_1[0x20] = plVar35;
              if (plVar23 != (longlong *)0x0) {
                LOCK();
                plVar35 = plVar23 + 1;
                *(int *)plVar35 = (int)*plVar35 + -1;
                UNLOCK();
                if ((int)*plVar35 == 0) {
                  (**(code **)*plVar23)(plVar23);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar23 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar23 + 0x10))(plVar23);
                  }
                }
                goto LAB_1418d92b0;
              }
            }
            if (dStack_260._0_4_ == 0) {
LAB_1418d8ef6:
              if (local_268 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_268 != (undefined8 *)0x0) {
              (**(code **)*local_268)(local_268,0);
              FUN_1446efa72(&local_268,0,0,0x10);
              dStack_260 = (double)((ulonglong)dStack_260 & 0xffffffff00000000);
              goto LAB_1418d8ef6;
            }
            FUN_140861e20(local_110,local_108);
            if (local_110 != 0) {
              FUN_1400020a8();
            }
            if (local_118._0_4_ == 0) {
LAB_1418d8f3a:
              if (local_120 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_120 != (undefined8 *)0x0) {
              (**(code **)*local_120)(local_120,0);
              FUN_1446efa72(&local_120,0,0,0x10);
              local_118 = (double)((ulonglong)local_118 & 0xffffffff00000000);
              goto LAB_1418d8f3a;
            }
            plVar23 = local_158;
            if (local_158 != (longlong *)0x0) {
              LOCK();
              plVar35 = local_158 + 1;
              *(int *)plVar35 = (int)*plVar35 + -1;
              UNLOCK();
              if ((int)*plVar35 == 0) {
                (**(code **)*local_158)(local_158);
                LOCK();
                piVar1 = (int *)((longlong)plVar23 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar23 + 0x10))(plVar23);
                }
              }
            }
          }
        }
        if (local_2b0 != (longlong *)0x0) {
          LOCK();
          plVar23 = local_2b0 + 1;
          *(int *)plVar23 = (int)*plVar23 + -1;
          UNLOCK();
          if ((int)*plVar23 == 0) {
            (**(code **)*local_2b0)(local_2b0);
            LOCK();
            piVar1 = (int *)((longlong)local_2b0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_2b0 + 0x10))(local_2b0);
            }
          }
        }
      }
    }
  }
  LOCK();
  plVar23 = plVar24 + 1;
  *(int *)plVar23 = (int)*plVar23 + -1;
  UNLOCK();
  if ((int)*plVar23 == 0) {
    (**(code **)*plVar24)(plVar24);
    LOCK();
    piVar1 = (int *)((longlong)plVar24 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
  }
LAB_1418d8f83:
  if ((local_e0 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418d972e FUN_1418d972e body=84 status=ok
// SIG undefined FUN_1418d972e(void)

void FUN_1418d972e(longlong param_1)

{
  longlong lVar1;
  
  FUN_140115e24();
  FUN_1402d7906(param_1 + 0x3b0,param_1 + 0x398);
  lVar1 = param_1;
  while( true ) {
    if (lVar1 == 0) {
      FUN_14071049e(param_1 + 0x488,param_1);
      return;
    }
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) break;
    lVar1 = *(longlong *)(lVar1 + 0x20);
  }
  return;
}



// FUNCTION 1418d9782 FUN_1418d9782 body=68 status=ok
// SIG undefined FUN_1418d9782(void)

void FUN_1418d9782(longlong param_1)

{
  int iVar1;
  
  FUN_1405f1eac();
  if (*(int *)(param_1 + 0x3d4) != 0) {
    iVar1 = FUN_14487fd02(param_1);
    if (iVar1 != 3) {
      FUN_1407bebdc(param_1 + 0x3b0,param_1 + 0x398,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1418d97c6 FUN_1418d97c6 body=106 status=ok
// SIG undefined FUN_1418d97c6(void)

undefined8 FUN_1418d97c6(float *param_1,float param_2)

{
  undefined8 uVar1;
  
  if (0.0 < *param_1) {
    param_2 = param_2 / *param_1;
    uVar1 = FUN_1447e736e(param_1 + 2);
    if (1.0 <= param_2) {
      param_2 = 1.0;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    uVar1 = FUN_14002c5a6(param_2,*(undefined1 *)(param_1 + 1),uVar1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1418d9830 FUN_1418d9830 body=126 status=ok
// SIG undefined FUN_1418d9830(void)

void FUN_1418d9830(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  
  puVar5 = (uint *)param_1[1];
  if ((puVar5 != (uint *)0x0) && (*param_1 = 0, puVar5[4] != 0)) {
    uVar7 = 0;
    do {
      lVar3 = *(longlong *)(puVar5 + 2);
      lVar6 = (longlong)(int)(*puVar5 & uVar7) * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      plVar4 = *(longlong **)(lVar3 + 8 + lVar6);
      if (plVar4 != (longlong *)0x0) {
        *(undefined8 *)(lVar3 + lVar6 + 8) = 0;
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
      uVar7 = uVar7 + 1;
      puVar5 = (uint *)param_1[1];
    } while (uVar7 < puVar5[4]);
  }
  return;
}



// FUNCTION 1418d98ae FUN_1418d98ae body=147 status=ok
// SIG undefined FUN_1418d98ae(void)

void FUN_1418d98ae(uint *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  puVar3 = *(uint **)(param_1 + 2);
  if (puVar3 != (uint *)0x0) {
    uVar8 = *param_1 + 1;
    if (puVar3[4] <= *param_1 + 1) {
      uVar8 = puVar3[4];
    }
    *param_1 = uVar8;
    if (uVar8 == 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = param_1[1] + 1 & *puVar3;
    }
    param_1[1] = uVar8;
    puVar7 = (undefined8 *)((longlong)(int)(uVar8 & *puVar3) * 0x10 + *(longlong *)(puVar3 + 2));
    uVar4 = *param_2;
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar6 = (longlong *)puVar7[1];
    *puVar7 = uVar4;
    puVar7[1] = lVar5;
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
                    /* WARNING: Could not recover jumptable at 0x0001418d9931. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1418d9942 FUN_1418d9942 body=111 status=ok
// SIG undefined FUN_1418d9942(void)

void FUN_1418d9942(int *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  puVar3 = *(uint **)(param_1 + 2);
  if ((puVar3 != (uint *)0x0) && (*param_1 != 0)) {
    puVar7 = (undefined8 *)
             ((longlong)(int)(*puVar3 & param_1[1]) * 0x10 + *(longlong *)(puVar3 + 2));
    uVar4 = *param_2;
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar6 = (longlong *)puVar7[1];
    *puVar7 = uVar4;
    puVar7[1] = lVar5;
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
                    /* WARNING: Could not recover jumptable at 0x0001418d99a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1418d99b2 FUN_1418d99b2 body=554 status=ok
// SIG undefined FUN_1418d99b2(void)

byte FUN_1418d99b2(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong *plVar6;
  undefined1 auStack_3b8 [32];
  undefined1 local_398 [192];
  longlong local_2d8;
  char local_2c8;
  longlong *local_288;
  longlong *local_118;
  char local_e8;
  char local_78;
  int local_68;
  char local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x38);
    bVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1418d9b34;
    plVar6 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar6 != (longlong *)0x0) &&
       (((((int)plVar6[2] == *(int *)(param_1 + 0x3c) && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)
          ) && (*plVar6 != 0)) && (-1 < *(char *)(*plVar6 + 0x60))))) {
      if (*(int *)(param_1 + 0x60) != 0) {
        uVar2 = *(uint *)(param_1 + 0x5c);
        bVar5 = 0;
        if (((int)uVar2 < 0) || (bVar5 = 0, DAT_14c9647dc <= (int)uVar2)) goto LAB_1418d9b34;
        plVar6 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((((plVar6 != (longlong *)0x0) &&
             (((int)plVar6[2] == *(int *)(param_1 + 0x60) &&
              ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) && (lVar3 = *plVar6, lVar3 != 0)) &&
           (lVar4 = *(longlong *)(lVar3 + 0x1518), lVar4 != 0)) {
          FUN_144a238e8(local_398,lVar3 + 0x1730);
          if (local_40 == '\x01') {
            local_40 = '\0';
          }
          if (local_78 == '\x01') {
            local_78 = '\0';
          }
          if (local_e8 == '\x01') {
            local_e8 = '\0';
          }
          bVar5 = local_68 == -1 & *(byte *)(lVar4 + 0x459);
          if (local_118 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_118 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_118)(local_118);
              LOCK();
              piVar1 = (int *)((longlong)local_118 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_118 + 0x10))(local_118);
              }
            }
          }
          if (local_288 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_288 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_288)(local_288);
              LOCK();
              piVar1 = (int *)((longlong)local_288 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_288 + 0x10))(local_288);
              }
            }
          }
          if ((local_2c8 == '\x01') && (local_2d8 != 0)) {
            FUN_1400020a8();
          }
          goto LAB_1418d9b34;
        }
      }
    }
  }
  bVar5 = 0;
LAB_1418d9b34:
  if ((local_20 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d9bde FUN_1418d9bde body=62 status=ok
// SIG undefined FUN_1418d9bde(void)

void FUN_1418d9bde(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd8);
    lVar1 = (longlong)*(int *)(param_1 + 0xe0) << 4;
    do {
      FUN_14019c9f2(lVar2,param_2);
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1418d9c1c FUN_1418d9c1c body=500 status=ok
// SIG undefined FUN_1418d9c1c(void)

void FUN_1418d9c1c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 == (longlong *)0x0) || (DAT_14cb71bf8 != '\x01')) goto LAB_1418d9d21;
  lVar5 = (**(code **)(*param_3 + 0x180))(param_3);
  uVar2 = DAT_14cb71f80;
  if (lVar5 == 0) {
LAB_1418d9d6a:
    plVar6 = (longlong *)0x0;
    local_38 = 0;
  }
  else {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar2,lVar5);
    plVar7 = local_30;
    if ((local_38 == 0) || (local_30 == (longlong *)0x0)) {
      plVar7 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar6 = local_30 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_30 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    if (plVar7 == (longlong *)0x0) goto LAB_1418d9d6a;
    iVar4 = (int)plVar7[1];
    do {
      plVar6 = (longlong *)0x0;
      if (iVar4 == 0) break;
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = plVar7;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    if (plVar6 == (longlong *)0x0) {
      local_38 = 0;
    }
  }
  *(longlong *)(param_1 + 0xa38) = local_38;
  plVar7 = *(longlong **)(param_1 + 0xa40);
  if (plVar6 == plVar7) {
    if (plVar6 == (longlong *)0x0) goto LAB_1418d9d21;
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1418d9d21;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar4 = *piVar1;
    UNLOCK();
    plVar7 = plVar6;
  }
  else {
    *(longlong **)(param_1 + 0xa40) = plVar6;
    if (plVar7 == (longlong *)0x0) goto LAB_1418d9d21;
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1418d9d21;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar4 = *piVar1;
    UNLOCK();
  }
  if (iVar4 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
LAB_1418d9d21:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418d9e12 FUN_1418d9e12 body=5525 status=ok
// SIG undefined FUN_1418d9e12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1418d9e12(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  int iVar8;
  int extraout_EAX;
  int extraout_EAX_00;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  double *pdVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar30 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar40;
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar60;
  undefined1 auVar59 [16];
  double dVar61;
  double dVar62;
  undefined1 auStack_398 [32];
  undefined1 local_378 [16];
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  char local_2d8;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  char local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (*(char *)(param_1 + 0x2cc) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_398);
  }
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 0xdc4) != 0) {
    uVar11 = *(uint *)(lVar1 + 0xdc0);
    uVar10 = 0;
    if (((int)uVar11 < 0) || (DAT_14c9647dc <= (int)uVar11)) goto LAB_1418da739;
    lVar9 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    if ((lVar9 != 0) &&
       (((*(int *)(lVar9 + 0x10) == *(int *)(lVar1 + 0xdc4) &&
         ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) && (*(longlong *)(lVar1 + 0xdc8) != 0)))) {
      local_158 = *(double *)(lVar1 + 0xdc0);
      FUN_140a13ae4(*(longlong *)(lVar1 + 0xdc8),&local_2c8,&local_158,
                    *(undefined4 *)(param_1 + 0x2c8));
      uVar10 = *(undefined8 *)(lVar1 + 0xdc8);
      local_158 = *(double *)(lVar1 + 0xdc0);
      uVar7 = FUN_140a13ae4(uVar10,&local_338,&local_158,*(undefined4 *)(lVar1 + 0xcf8));
      auVar37 = _DAT_149934d80;
      if ((local_268 == '\x01') && (local_2d8 == '\x01')) {
        auVar17 = *(undefined1 (*) [16])(lVar1 + 0xd40);
        dVar51 = auVar17._0_8_;
        dVar32 = auVar17._8_8_;
        auVar56 = *(undefined1 (*) [16])(lVar1 + 0xd50);
        dVar33 = auVar56._0_8_;
        auVar18 = *(undefined1 (*) [16])(lVar1 + 0xda0);
        dVar55 = auVar18._0_8_;
        dVar60 = auVar18._8_8_;
        auVar22 = *(undefined1 (*) [16])(lVar1 + 0xdb0);
        dVar16 = auVar22._0_8_;
        auVar17 = minpd(auVar18,auVar17);
        auVar29 = minpd(auVar22,auVar56);
        auVar18._8_8_ = -(ulonglong)(auVar17._8_8_ < 0.0);
        auVar18._0_8_ = -(ulonglong)(auVar17._0_8_ < 0.0);
        iVar8 = movmskpd(uVar7,auVar18);
        auVar17._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
        auVar17._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
        uVar11 = movmskpd((int)uVar10,auVar17);
        if ((uVar11 & 0x3fffffff) == 0 && iVar8 == 0) {
          dVar43 = *(double *)(lVar1 + 0xd00);
          dVar47 = *(double *)(lVar1 + 0xd08);
          dVar48 = *(double *)(lVar1 + 0xd10);
          dVar3 = *(double *)(lVar1 + 0xd60);
          dVar4 = *(double *)(lVar1 + 0xd68);
          dVar5 = *(double *)(lVar1 + 0xd70);
          dVar6 = *(double *)(lVar1 + 0xd78);
          dVar40 = *(double *)(lVar1 + 0xd18);
          dVar27 = *(double *)(lVar1 + 0xd18);
          dVar34 = *(double *)(lVar1 + 0xd00);
          dVar26 = *(double *)(lVar1 + 0xd00);
          dVar15 = *(double *)(lVar1 + 0xd08);
          dVar25 = *(double *)(lVar1 + 0xd08);
          dVar61 = *(double *)(lVar1 + 0xd10);
          dVar62 = *(double *)(lVar1 + 0xd10);
          dVar28 = dVar4 * dVar61 * -1.0 + dVar5 * dVar15 + dVar6 * dVar34 * 1.0 + dVar3 * dVar40;
          dVar31 = dVar3 * dVar62 * 1.0 + dVar6 * dVar25 + dVar5 * dVar26 * -1.0 + dVar4 * dVar27;
          auVar37._0_8_ =
               dVar6 * dVar61 * 1.0 + ((dVar34 * dVar4 * 1.0 + dVar5 * dVar40) - dVar3 * dVar15);
          auVar37._8_8_ =
               dVar5 * dVar62 * -1.0 + ((dVar26 * dVar3 * -1.0 + dVar6 * dVar27) - dVar4 * dVar25);
          dVar61 = *(double *)(lVar1 + 0xd80) * dVar51;
          dVar62 = *(double *)(lVar1 + 0xd88) * dVar32;
          dVar34 = *(double *)(lVar1 + 0xd90) * dVar33;
          dVar15 = dVar62 * dVar43 - dVar47 * dVar61;
          dVar25 = dVar34 * dVar47 - dVar48 * dVar62;
          dVar26 = dVar61 * dVar48 - dVar43 * dVar34;
          dVar25 = dVar25 + dVar25;
          dVar26 = dVar26 + dVar26;
          dVar15 = dVar15 + dVar15;
          auVar52._8_8_ = auVar22._8_8_ * auVar56._8_8_;
          auVar52._0_8_ = dVar16 * dVar33;
          uVar7 = 0;
          dVar33 = (dVar26 * dVar43 - dVar47 * dVar25) + dVar40 * dVar15 + dVar34 +
                   *(double *)(lVar1 + 0xd30);
          dVar16 = (dVar15 * dVar47 - dVar48 * dVar26) + dVar40 * dVar25 + dVar61 +
                   *(double *)(lVar1 + 0xd20);
          dVar27 = (dVar25 * dVar48 - dVar15 * dVar43) + dVar27 * dVar26 + dVar62 +
                   *(double *)(lVar1 + 0xd28);
        }
        else {
          dVar31 = *(double *)(lVar1 + 0xd00);
          dVar40 = *(double *)(lVar1 + 0xd08);
          dVar34 = *(double *)(lVar1 + 0xd10);
          dVar26 = dVar40 + dVar40;
          dVar15 = dVar34 + dVar34;
          dVar62 = dVar31 * (dVar31 + dVar31);
          local_188 = (1.0 - (dVar62 + dVar40 * dVar26)) * dVar33;
          dVar28 = *(double *)(lVar1 + 0xd00) * dVar15;
          dVar27 = *(double *)(lVar1 + 0xd18);
          dVar25 = dVar15 * dVar27;
          dVar61 = (dVar31 + dVar31) * *(double *)(lVar1 + 0xd18);
          dVar27 = dVar26 * dVar27;
          auVar52._0_8_ = dVar33 * dVar16;
          auVar52._8_8_ = auVar56._8_8_ * auVar22._8_8_;
          dVar43 = (dVar26 * dVar31 + dVar25) * dVar51;
          local_1a8 = (dVar15 * dVar40 + dVar61) * dVar32;
          local_1c8 = (dVar28 - dVar27) * dVar51;
          local_1d8._8_4_ = SUB84(dVar43,0);
          local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar34 * dVar15 + dVar40 * dVar26)) * dVar51;
          local_1d8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
          uStack_1c0 = 0;
          local_1b8._8_8_ = (DAT_149934d80._8_8_ - (dVar34 * dVar15 + dVar62)) * dVar32;
          local_1b8._0_8_ = (dVar26 * dVar31 - dVar25) * dVar32;
          uStack_1a0 = 0;
          local_198._8_8_ = (dVar15 * dVar40 - dVar61) * dVar33;
          local_198._0_8_ = (dVar27 + dVar28) * dVar33;
          uStack_180 = 0;
          local_178 = *(double *)(lVar1 + 0xd20);
          dStack_170 = *(double *)(lVar1 + 0xd28);
          local_168 = *(double *)(lVar1 + 0xd30);
          uStack_160 = 0x3ff0000000000000;
          dVar28 = *(double *)(lVar1 + 0xd60);
          dVar31 = *(double *)(lVar1 + 0xd68);
          dVar27 = *(double *)(lVar1 + 0xd70);
          dVar40 = dVar31 + dVar31;
          dVar34 = dVar27 + dVar27;
          dVar25 = dVar28 * (dVar28 + dVar28);
          local_208 = (1.0 - (dVar25 + dVar31 * dVar40)) * dVar16;
          dVar61 = *(double *)(lVar1 + 0xd60) * dVar34;
          dVar33 = *(double *)(lVar1 + 0xd78);
          dVar26 = dVar34 * dVar33;
          dVar15 = (dVar28 + dVar28) * *(double *)(lVar1 + 0xd78);
          dVar33 = dVar40 * dVar33;
          local_258 = ((double)DAT_149934d80 - (dVar27 * dVar34 + dVar31 * dVar40)) * dVar55;
          dVar27 = (DAT_149934d80._8_8_ - (dVar27 * dVar34 + dVar25)) * dVar60;
          dStack_250 = (dVar40 * dVar28 + dVar26) * dVar55;
          local_228 = (dVar34 * dVar31 + dVar15) * dVar60;
          local_248 = (dVar61 - dVar33) * dVar55;
          uStack_240 = 0;
          local_238._8_4_ = SUB84(dVar27,0);
          local_238._0_8_ = (dVar40 * dVar28 - dVar26) * dVar60;
          local_238._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
          uStack_220 = 0;
          local_218._8_8_ = (dVar34 * dVar31 - dVar15) * dVar16;
          local_218._0_8_ = (dVar33 + dVar61) * dVar16;
          uStack_200 = 0;
          local_1f8 = *(double *)(lVar1 + 0xd80);
          dStack_1f0 = *(double *)(lVar1 + 0xd88);
          local_1e8 = *(double *)(lVar1 + 0xd90);
          uStack_1e0 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_158);
          FUN_144a1c686(&local_158,0x3e45798ee0000000);
          auVar56._8_8_ = -(ulonglong)(0.0 <= dVar32 * dVar60);
          auVar56._0_8_ = -(ulonglong)(0.0 <= dVar51 * dVar55);
          auVar17 = blendvpd(_DAT_149936790,auVar37,auVar56);
          dVar33 = (double)(~-(ulonglong)(0.0 <= auVar52._0_8_) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= auVar52._0_8_) & 0x3ff0000000000000);
          dVar16 = auVar17._0_8_;
          local_148 = local_148 * dVar16;
          local_150 = local_150 * dVar16;
          local_158 = local_158 * dVar16;
          dVar16 = auVar17._8_8_;
          local_128 = local_128 * dVar16;
          local_130 = local_130 * dVar16;
          local_138 = dVar16 * local_138;
          local_108 = local_108 * dVar33;
          local_110 = local_110 * dVar33;
          local_118 = dVar33 * local_118;
          pdVar13 = &local_358;
          FUN_14481fd10(pdVar13,&local_158);
          uVar7 = SUB84(pdVar13,0);
          dVar33 = local_348 * local_348 + local_358 * local_358;
          dVar16 = dStack_340 * dStack_340 + dStack_350 * dStack_350;
          auVar29._0_8_ = dVar33 + dVar16;
          auVar29._8_8_ = dVar33 + dVar16;
          auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
          auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
          auVar17 = sqrtpd(auVar29,auVar29);
          auVar37 = divpd(auVar37,auVar17);
          auVar50._0_8_ = auVar37._0_8_ * local_348;
          auVar50._8_8_ = auVar37._8_8_ * dStack_340;
          dVar28 = (double)((ulonglong)(local_358 * auVar37._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
          dVar31 = (double)((ulonglong)(dStack_350 * auVar37._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
          auVar37 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar50,auVar22);
          iVar8 = extraout_EAX_00;
          dVar33 = local_e8;
          dVar16 = local_f8;
          dVar27 = dStack_f0;
        }
        dVar60 = dVar60 * dVar32;
        dVar55 = dVar55 * dVar51;
        dVar51 = local_2f8._0_8_;
        dVar40 = local_2f8._8_8_;
        dVar32 = local_2e8._0_8_;
        dVar34 = local_2e8._8_8_;
        auVar41._8_8_ = dVar60;
        auVar41._0_8_ = dVar55;
        auVar17 = minpd(auVar41,local_2f8);
        dVar25 = auVar52._0_8_;
        auVar56 = minpd(auVar52,local_2e8);
        auVar42._8_8_ = -(ulonglong)(auVar17._8_8_ < 0.0);
        auVar42._0_8_ = -(ulonglong)(auVar17._0_8_ < 0.0);
        iVar8 = movmskpd(iVar8,auVar42);
        auVar57._8_8_ = -(ulonglong)(auVar56._8_8_ < 0.0);
        auVar57._0_8_ = -(ulonglong)(auVar56._0_8_ < 0.0);
        uVar11 = movmskpd(uVar7,auVar57);
        dVar26 = auVar37._0_8_;
        dVar15 = auVar37._8_8_;
        if ((uVar11 & 0x3fffffff) == 0 && iVar8 == 0) {
          dVar61 = dVar31 * local_328 * -1.0 +
                   dVar26 * dStack_330 + dVar15 * local_338 * 1.0 + dVar28 * dStack_320;
          dVar62 = dVar28 * local_328 * 1.0 +
                   dVar15 * dStack_330 + dVar26 * local_338 * -1.0 + dVar31 * dStack_320;
          auVar49._0_8_ =
               dVar15 * local_328 * 1.0 +
               ((local_338 * dVar31 * 1.0 + dVar26 * dStack_320) - dVar28 * dStack_330);
          auVar49._8_8_ =
               dVar26 * local_328 * -1.0 +
               ((local_338 * dVar28 * -1.0 + dVar15 * dStack_320) - dVar31 * dStack_330);
          dVar16 = dVar16 * dVar51;
          dVar27 = dVar27 * dVar40;
          dVar33 = dVar33 * dVar32;
          dVar28 = dVar27 * local_338 - dVar16 * dStack_330;
          dVar31 = dVar33 * dStack_330 - dVar27 * local_328;
          dVar26 = dVar16 * local_328 - dVar33 * local_338;
          dVar31 = dVar31 + dVar31;
          dVar26 = dVar26 + dVar26;
          dVar28 = dVar28 + dVar28;
          auVar58._0_8_ = dVar25 * dVar32;
          auVar58._8_8_ = auVar52._8_8_ * dVar34;
          uVar7 = 0;
          dVar33 = (dVar26 * local_338 - dStack_330 * dVar31) + dStack_320 * dVar28 + dVar33 +
                   local_308;
          dVar16 = (dVar28 * dStack_330 - local_328 * dVar26) + dStack_320 * dVar31 + dVar16 +
                   local_318;
          dVar32 = (dVar31 * local_328 - dVar28 * local_338) + dStack_320 * dVar26 + dVar27 +
                   dStack_310;
          local_378 = auVar52;
        }
        else {
          dVar43 = dStack_330 + dStack_330;
          dVar61 = local_328 + local_328;
          dVar47 = local_338 * (local_338 + local_338);
          dVar48 = dStack_330 * dVar43;
          local_368 = 1.0 - (local_328 * dVar61 + dVar48);
          dStack_360 = 1.0 - (local_328 * dVar61 + dVar47);
          dVar62 = (local_338 + local_338) * dStack_320;
          auVar58._0_8_ = dVar25 * dVar32;
          auVar58._8_8_ = auVar52._8_8_ * dVar34;
          local_188 = (1.0 - (dVar47 + dVar48)) * dVar32;
          local_378._8_8_ = (0.0 - (dVar47 + dVar48)) * dVar34;
          local_378._0_8_ = local_188;
          local_1a8 = (dVar61 * dStack_330 + dVar62) * dVar40;
          local_1c8 = (local_338 * dVar61 - dVar43 * dStack_320) * dVar51;
          local_1d8._8_8_ = (dVar43 * local_338 + dVar61 * dStack_320) * dVar51;
          local_1d8._0_8_ = local_368 * dVar51;
          uStack_1c0 = 0;
          local_1b8._8_4_ = SUB84(dStack_360 * dVar40,0);
          local_1b8._0_8_ = (dVar43 * local_338 - dVar61 * dStack_320) * dVar40;
          local_1b8._12_4_ = (int)((ulonglong)(dStack_360 * dVar40) >> 0x20);
          uStack_1a0 = 0;
          local_198._8_8_ = (dVar61 * dStack_330 - dVar62) * dVar32;
          local_198._0_8_ = (dVar43 * dStack_320 + local_338 * dVar61) * dVar32;
          uStack_180 = 0;
          local_178 = local_318;
          dStack_170 = dStack_310;
          local_168 = local_308;
          uStack_160 = 0x3ff0000000000000;
          dVar62 = dVar31 + dVar31;
          dVar34 = dVar26 + dVar26;
          dVar43 = dVar28 * (dVar28 + dVar28);
          local_208 = (1.0 - (dVar43 + dVar31 * dVar62)) * dVar25;
          dVar61 = (dVar28 + dVar28) * dVar15;
          dVar32 = (dVar34 * dVar31 - dVar61) * dVar25;
          local_258 = (1.0 - (dVar26 * dVar34 + dVar31 * dVar62)) * dVar55;
          dStack_250 = (dVar62 * dVar28 + dVar34 * dVar15) * dVar55;
          local_228 = (dVar34 * dVar31 + dVar61) * dVar60;
          local_248 = (dVar28 * dVar34 - dVar62 * dVar15) * dVar55;
          uStack_240 = 0;
          local_238._8_8_ = (1.0 - (dVar26 * dVar34 + dVar43)) * dVar60;
          local_238._0_8_ = (dVar62 * dVar28 - dVar34 * dVar15) * dVar60;
          uStack_220 = 0;
          local_218._8_4_ = SUB84(dVar32,0);
          local_218._0_8_ = (dVar28 * dVar34 + dVar62 * dVar15) * dVar25;
          local_218._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
          uStack_200 = 0;
          uStack_1e0 = 0x3ff0000000000000;
          local_1f8 = dVar16;
          dStack_1f0 = dVar27;
          local_1e8 = dVar33;
          FUN_1447fea8d(&local_158);
          FUN_144a1c686(&local_158,0x3e45798ee0000000);
          auVar37 = _DAT_149934d80;
          auVar20._8_8_ = -(ulonglong)(0.0 <= dVar60 * dVar40);
          auVar20._0_8_ = -(ulonglong)(0.0 <= dVar55 * dVar51);
          auVar17 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar20);
          dVar33 = (double)(~-(ulonglong)(0.0 <= auVar58._0_8_) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= auVar58._0_8_) & 0x3ff0000000000000);
          dVar16 = auVar17._0_8_;
          local_148 = local_148 * dVar16;
          local_150 = local_150 * dVar16;
          local_158 = local_158 * dVar16;
          dVar16 = auVar17._8_8_;
          local_128 = local_128 * dVar16;
          local_130 = local_130 * dVar16;
          local_138 = dVar16 * local_138;
          local_108 = local_108 * dVar33;
          local_110 = local_110 * dVar33;
          local_118 = dVar33 * local_118;
          pdVar13 = &local_358;
          FUN_14481fd10(pdVar13,&local_158);
          uVar7 = SUB84(pdVar13,0);
          dVar33 = local_348 * local_348 + local_358 * local_358;
          dVar16 = dStack_340 * dStack_340 + dStack_350 * dStack_350;
          auVar35._0_8_ = dVar33 + dVar16;
          auVar35._8_8_ = dVar33 + dVar16;
          auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
          auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
          auVar17 = sqrtpd(auVar35,auVar35);
          auVar37 = divpd(auVar37,auVar17);
          auVar39._0_8_ = auVar37._0_8_ * local_348;
          auVar39._8_8_ = auVar37._8_8_ * dStack_340;
          dVar61 = (double)((ulonglong)(local_358 * auVar37._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
          dVar62 = (double)((ulonglong)(dStack_350 * auVar37._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
          auVar49 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar21);
          iVar8 = extraout_EAX;
          dVar33 = local_e8;
          dVar16 = local_f8;
          dVar32 = dStack_f0;
        }
        auVar37 = _DAT_149934d80;
        dVar60 = dVar60 * dVar40;
        dVar25 = ABS(dVar55 * dVar51);
        auVar44._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar60));
        auVar44._0_8_ = -(ulonglong)(9.99999993922529e-09 < dVar25);
        uVar11 = movmskpd(iVar8,auVar44);
        auVar45._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar58._8_8_));
        auVar45._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar58._0_8_));
        iVar8 = movmskpd(uVar7,auVar45);
        uVar12 = iVar8 << 2 | uVar11;
        auVar19 = _DAT_14c8464c0;
        auVar54 = _DAT_14c8464d0;
        dVar27 = DAT_14c846490;
        dVar28 = DAT_14c846498;
        dVar31 = DAT_14c846480;
        dVar40 = DAT_14c846488;
        dVar34 = DAT_14c8464b0;
        dVar26 = DAT_14c8464a0;
        dVar15 = DAT_14c8464a8;
        if (uVar12 != 0) {
          auVar2._8_4_ = SUB84(dVar60,0);
          auVar2._0_8_ = dVar55 * dVar51;
          auVar2._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
          auVar56 = divpd(_DAT_149934d80,auVar2);
          auVar17 = divpd(ZEXT816(0x3ff0000000000000),auVar58);
          auVar19._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < dVar25) & auVar56._0_8_);
          auVar19._8_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar60)) & auVar56._8_8_)
          ;
          dVar51 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar58._0_8_)) & auVar17._0_8_)
          ;
          auVar54._8_8_ = 0;
          auVar54._0_8_ = dVar51;
          dVar31 = -dVar61;
          dVar40 = -dVar62;
          dVar27 = auVar49._0_8_ * -1.0;
          dVar28 = auVar49._8_8_ * 1.0;
          dVar16 = dVar16 * auVar19._0_8_;
          dVar32 = dVar32 * auVar19._8_8_;
          dVar33 = dVar33 * dVar51;
          dVar55 = dVar32 * dVar31 - dVar40 * dVar16;
          dVar60 = dVar33 * dVar40 - dVar27 * dVar32;
          dVar51 = dVar16 * dVar27 - dVar31 * dVar33;
          dVar60 = dVar60 + dVar60;
          dVar51 = dVar51 + dVar51;
          dVar55 = dVar55 + dVar55;
          dVar34 = 0.0 - (dVar28 * dVar55 + dVar33 + (dVar51 * dVar31 - dVar60 * dVar40));
          dVar26 = 0.0 - ((dVar55 * dVar40 - dVar51 * dVar27) + dVar28 * dVar60 + dVar16);
          dVar15 = 0.0 - (dVar55 * dVar61 + dVar27 * dVar60 + dVar28 * dVar51 + dVar32);
        }
        dVar51 = local_288._0_8_;
        dVar55 = local_288._8_8_;
        dVar33 = local_278._0_8_;
        auVar17 = minpd(local_288,auVar19);
        auVar56 = minpd(local_278,auVar54);
        auVar46._8_8_ = -(ulonglong)(auVar17._8_8_ < 0.0);
        auVar46._0_8_ = -(ulonglong)(auVar17._0_8_ < 0.0);
        iVar8 = movmskpd(uVar11,auVar46);
        auVar59._8_8_ = -(ulonglong)(auVar56._8_8_ < 0.0);
        auVar59._0_8_ = -(ulonglong)(auVar56._0_8_ < 0.0);
        uVar11 = movmskpd(uVar12,auVar59);
        dVar16 = auVar19._0_8_;
        dVar32 = auVar19._8_8_;
        dVar60 = auVar54._0_8_;
        if ((uVar11 & 0x3fffffff) == 0 && iVar8 == 0) {
          dVar51 = dStack_2c0 * dVar27 * -1.0 +
                   local_2b8 * dVar40 + dVar31 * dStack_2b0 * 1.0 + dVar28 * local_2c8;
          dVar33 = local_2c8 * dVar27 * 1.0 +
                   dStack_2b0 * dVar40 + dVar31 * local_2b8 * -1.0 + dVar28 * dStack_2c0;
          auVar53._0_8_ =
               dStack_2b0 * dVar27 * 1.0 +
               ((dVar31 * dStack_2c0 * 1.0 + dVar28 * local_2b8) - dVar40 * local_2c8);
          auVar53._8_8_ =
               local_2b8 * dVar27 * -1.0 +
               ((dVar31 * local_2c8 * -1.0 + dVar28 * dStack_2b0) - dVar40 * dStack_2c0);
          dVar16 = dVar16 * local_2a8;
          dVar32 = dVar32 * dStack_2a0;
          dVar60 = dVar60 * local_298;
          dVar55 = dVar32 * dVar31 - dVar40 * dVar16;
          dVar25 = dVar60 * dVar40 - dVar27 * dVar32;
          dVar61 = dVar16 * dVar27 - dVar31 * dVar60;
          dVar25 = dVar25 + dVar25;
          dVar61 = dVar61 + dVar61;
          dVar55 = dVar55 + dVar55;
          local_f8 = dVar26 + (dVar55 * dVar40 - dVar27 * dVar61) + dVar28 * dVar25 + dVar16;
          dStack_f0 = dVar15 + (dVar25 * dVar27 - dVar55 * dVar31) + dVar28 * dVar61 + dVar32;
          local_e8 = dVar34 + (dVar61 * dVar31 - dVar40 * dVar25) + dVar28 * dVar55 + dVar60;
        }
        else {
          dVar25 = dVar40 + dVar40;
          dVar43 = dVar27 + dVar27;
          dVar61 = dVar31 * (dVar31 + dVar31);
          dVar47 = (dVar31 + dVar31) * dVar28;
          dVar62 = (dVar43 * dVar40 - dVar47) * dVar60;
          dVar48 = (dVar25 * dVar31 + dVar43 * dVar28) * dVar16;
          local_1a8 = (dVar43 * dVar40 + dVar47) * dVar32;
          local_1d8._8_4_ = SUB84(dVar48,0);
          local_1d8._0_8_ = (1.0 - (dVar27 * dVar43 + dVar40 * dVar25)) * dVar16;
          local_1d8._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
          local_188 = (1.0 - (dVar61 + dVar40 * dVar25)) * dVar60;
          local_1c8 = (dVar31 * dVar43 - dVar25 * dVar28) * dVar16;
          uStack_1c0 = 0;
          local_1b8._8_8_ = (1.0 - (dVar27 * dVar43 + dVar61)) * dVar32;
          local_1b8._0_8_ = (dVar25 * dVar31 - dVar43 * dVar28) * dVar32;
          uStack_1a0 = 0;
          local_198._8_4_ = SUB84(dVar62,0);
          local_198._0_8_ = (dVar31 * dVar43 + dVar25 * dVar28) * dVar60;
          local_198._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
          uStack_180 = 0;
          uStack_160 = 0x3ff0000000000000;
          dVar27 = dStack_2c0 + dStack_2c0;
          dVar28 = local_2b8 + local_2b8;
          dVar40 = local_2c8 * (local_2c8 + local_2c8);
          dVar31 = (local_2c8 + local_2c8) * dStack_2b0;
          local_258 = ((double)DAT_149934d80 - (local_2b8 * dVar28 + dStack_2c0 * dVar27)) * dVar51;
          dStack_250 = (dVar27 * local_2c8 + dVar28 * dStack_2b0) * dVar51;
          local_228 = (dVar28 * dStack_2c0 + dVar31) * dVar55;
          local_248 = (local_2c8 * dVar28 - dVar27 * dStack_2b0) * dVar51;
          uStack_240 = 0;
          local_238._8_8_ = (DAT_149934d80._8_8_ - (local_2b8 * dVar28 + dVar40)) * dVar55;
          local_238._0_8_ = (dVar27 * local_2c8 - dVar28 * dStack_2b0) * dVar55;
          uStack_220 = 0;
          local_218._8_8_ = (dVar28 * dStack_2c0 - dVar31) * dVar33;
          local_218._0_8_ = (dVar27 * dStack_2b0 + local_2c8 * dVar28) * dVar33;
          local_208 = (1.0 - (dVar40 + dStack_2c0 * dVar27)) * dVar33;
          uStack_200 = 0;
          local_1f8 = local_2a8;
          dStack_1f0 = dStack_2a0;
          local_1e8 = local_298;
          uStack_1e0 = 0x3ff0000000000000;
          local_178 = dVar26;
          dStack_170 = dVar15;
          local_168 = dVar34;
          FUN_1447fea8d(&local_158);
          FUN_144a1c686(&local_158,0x3e45798ee0000000);
          auVar23._8_8_ = -(ulonglong)(0.0 <= dVar32 * dVar55);
          auVar23._0_8_ = -(ulonglong)(0.0 <= dVar16 * dVar51);
          auVar17 = blendvpd(_DAT_149936790,auVar37,auVar23);
          uVar14 = -(ulonglong)(0.0 <= dVar60 * dVar33);
          dVar51 = (double)(~uVar14 & 0xbff0000000000000 | uVar14 & 0x3ff0000000000000);
          dVar33 = auVar17._0_8_;
          local_148 = local_148 * dVar33;
          local_150 = local_150 * dVar33;
          local_158 = local_158 * dVar33;
          dVar33 = auVar17._8_8_;
          local_128 = local_128 * dVar33;
          local_130 = local_130 * dVar33;
          local_138 = dVar33 * local_138;
          local_108 = local_108 * dVar51;
          local_110 = local_110 * dVar51;
          local_118 = dVar51 * local_118;
          FUN_14481fd10(&local_358,&local_158);
          auVar30._0_8_ = local_358 * local_358;
          auVar30._8_8_ = dStack_350 * dStack_350;
          dVar51 = local_348 * local_348 + auVar30._0_8_;
          dVar33 = dStack_340 * dStack_340 + auVar30._8_8_;
          auVar36._0_8_ = dVar51 + dVar33;
          auVar36._8_8_ = dVar51 + dVar33;
          auVar17 = sqrtpd(auVar30,auVar36);
          auVar37 = divpd(auVar37,auVar17);
          auVar38._0_8_ = auVar37._0_8_ * local_348;
          auVar38._8_8_ = auVar37._8_8_ * dStack_340;
          dVar51 = (double)((ulonglong)(local_358 * auVar37._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
          dVar33 = (double)((ulonglong)(dStack_350 * auVar37._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
          auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
          auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
          auVar53 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar38,auVar24);
        }
        *(double *)(param_1 + 0x280) = local_f8;
        *(double *)(param_1 + 0x288) = dStack_f0;
        *(double *)(param_1 + 0x290) = local_e8;
        *(double *)(param_1 + 0x2a0) = dVar51;
        *(double *)(param_1 + 0x2a8) = dVar33;
        *(undefined1 (*) [16])(param_1 + 0x2b0) = auVar53;
        uVar10 = 1;
        goto LAB_1418da739;
      }
    }
  }
  uVar10 = 0;
LAB_1418da739:
  if ((local_d0 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1418db418 FUN_1418db418 body=1107 status=ok
// SIG undefined FUN_1418db418(void)

void FUN_1418db418(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  code *local_58;
  code *local_50;
  uint local_40;
  int local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) goto LAB_1418db4c1;
  lVar5 = FUN_14016d2a8();
  if (((((((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) ||
         (lVar5 = *(longlong *)(param_1 + 0x6a0), lVar5 == 0)) ||
        ((*(int *)(param_2 + 0x1724) == 0 || (uVar1 = *(uint *)(param_2 + 0x1720), (int)uVar1 < 0)))
        ) || ((DAT_14c9647dc <= (int)uVar1 ||
              ((plVar6 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_2 + 0x1724))))))) ||
      ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) || (lVar2 = *plVar6, lVar2 == 0))
  goto LAB_1418db4c1;
  lVar9 = *(longlong *)(param_2 + 0x20);
  if (lVar9 == 0) {
LAB_1418db809:
    local_38._0_4_ = 0;
    iVar3 = 0;
    uVar1 = (uint)local_38;
  }
  else {
    if (DAT_14cb63950 == 0) {
      local_60 = &local_38;
      local_38 = FUN_144a7958c;
      local_50 = FUN_14081d0ea;
      local_58 = (code *)&LAB_1464ec72a;
      local_68 = &LAB_1486f5f75;
      local_70 = (code *)&LAB_140945686;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if (*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cb63950 + 0x38)) {
      lVar5 = *(longlong *)(param_1 + 0x6a0);
      goto LAB_1418db809;
    }
    lVar5 = *(longlong *)(param_1 + 0x6a0);
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) != DAT_14cb63950 + 0x30) goto LAB_1418db809;
    uVar1 = *(uint *)(lVar9 + 0xc);
    local_38 = (code *)(ulonglong)uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar3 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar3 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar3 = 0;
      }
      UNLOCK();
      uVar1 = (uint)local_38;
      if (bVar10) {
        iVar3 = iVar8;
      }
    }
  }
  local_38._0_4_ = uVar1;
  local_38 = (code *)CONCAT44(iVar3,(uint)local_38);
  local_3c = 0;
  local_40 = *(uint *)(lVar2 + 0xc);
  if ((int)local_40 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((local_40 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  iVar3 = *(int *)(lVar9 + 0x10);
  if (*(int *)(lVar9 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar8 = DAT_14c964868 + 1;
    bVar10 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar10) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar8);
    }
    LOCK();
    iVar3 = *(int *)(lVar9 + 0x10);
    bVar10 = iVar3 == 0;
    if (bVar10) {
      *(int *)(lVar9 + 0x10) = iVar8;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar10) {
      iVar3 = iVar8;
    }
  }
  local_3c = iVar3;
  FUN_144877af8(lVar5,&local_40,&local_38,0);
  lVar5 = FUN_1402095ca();
  if (DAT_14c951858 == 0) {
    local_38 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_1468c5283;
    local_70 = FUN_142809da0;
    local_78 = L"Engine";
    local_80 = 0x400000000;
    local_88 = 0x10000000;
    local_90 = 8;
    local_98 = 0x50;
    local_60 = &local_38;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar9 = *(longlong *)(lVar2 + 0x20);
  if (lVar9 != 0) {
    do {
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (lVar7 = lVar9,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         != lVar5 + 0x30)) {
        lVar7 = 0;
      }
    } while ((lVar7 == 0) && (lVar9 = *(longlong *)(lVar9 + 0x20), lVar9 != 0));
    if ((lVar7 != 0) && (lVar5 = *(longlong *)(lVar7 + 0x1a08), lVar5 != 0)) {
      uVar4 = FUN_144909502(lVar2,*(undefined8 *)(lVar5 + 400));
      *(undefined4 *)(param_1 + 0x3c8) = uVar4;
      uVar4 = FUN_144909502(lVar2,*(undefined8 *)(lVar5 + 0x198));
      *(undefined4 *)(param_1 + 0x698) = uVar4;
    }
  }
LAB_1418db4c1:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418db86c FUN_1418db86c body=585 status=ok
// SIG undefined FUN_1418db86c(void)

void FUN_1418db86c(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  
  uVar2 = DAT_14cadde78;
  cVar4 = *(char *)(param_2 + 0x78);
  if (cVar4 == '\0') {
    FUN_144716af1(*(undefined8 *)(param_2 + 0x68),*(undefined4 *)(param_2 + 0x70));
    *(undefined1 *)(param_2 + 0x78) = 1;
    cVar4 = '\x01';
  }
  uVar3 = DAT_14cadde80;
  uVar10 = *(uint *)(param_2 + 0x70);
  uVar6 = (ulonglong)uVar10;
  lVar5 = *(longlong *)(param_2 + 0x68);
  iVar13 = (int)uVar2;
  iVar8 = (int)((ulonglong)uVar2 >> 0x20);
  if ((int)uVar10 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar11 = uVar6;
    do {
      uVar14 = (int)(uVar11 >> 1) + (int)uVar7;
      uVar2 = *(undefined8 *)(lVar5 + (ulonglong)uVar14 * 0x10);
      iVar12 = (int)uVar2 - iVar13;
      if (iVar12 == 0) {
        iVar12 = (int)((ulonglong)uVar2 >> 0x20) - iVar8;
      }
      uVar9 = (uint)uVar11;
      if (iVar12 < 0) {
        uVar7 = (ulonglong)(uVar14 + (uVar9 & 1));
      }
      uVar11 = uVar11 >> 1;
    } while (1 < uVar9);
  }
  fVar16 = 0.0;
  if ((int)uVar7 < (int)uVar10) {
    lVar1 = lVar5 + uVar7 * 0x10;
    uVar2 = *(undefined8 *)(lVar5 + uVar7 * 0x10);
    iVar13 = iVar13 - (int)uVar2;
    if (iVar13 == 0) {
      iVar13 = iVar8 - (int)((ulonglong)uVar2 >> 0x20);
    }
    if ((lVar1 != 0) && (-1 < iVar13)) {
      fVar16 = *(float *)(lVar1 + 8);
    }
  }
  if (cVar4 == '\0') {
    FUN_144716af1();
    *(undefined1 *)(param_2 + 0x78) = 1;
    uVar6 = (ulonglong)*(uint *)(param_2 + 0x70);
    lVar5 = *(longlong *)(param_2 + 0x68);
  }
  iVar13 = (int)uVar3;
  iVar8 = (int)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar6 < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    uVar7 = uVar6;
    do {
      uVar14 = (int)(uVar7 >> 1) + uVar10;
      uVar2 = *(undefined8 *)(lVar5 + (ulonglong)uVar14 * 0x10);
      iVar12 = (int)uVar2 - iVar13;
      if (iVar12 == 0) {
        iVar12 = (int)((ulonglong)uVar2 >> 0x20) - iVar8;
      }
      uVar9 = (uint)uVar7;
      if (iVar12 < 0) {
        uVar10 = uVar14 + (uVar9 & 1);
      }
      uVar7 = uVar7 >> 1;
    } while (1 < uVar9);
  }
  fVar15 = 0.0;
  if ((int)uVar10 < (int)uVar6) {
    lVar1 = lVar5 + (ulonglong)uVar10 * 0x10;
    uVar2 = *(undefined8 *)(lVar5 + (ulonglong)uVar10 * 0x10);
    iVar13 = iVar13 - (int)uVar2;
    if (iVar13 == 0) {
      iVar13 = iVar8 - (int)((ulonglong)uVar2 >> 0x20);
    }
    if ((lVar1 != 0) && (-1 < iVar13)) {
      fVar15 = *(float *)(lVar1 + 8);
    }
  }
  if ((*(byte *)(param_1 + 0x2dc) & 8) == 0) {
    fVar16 = 1.0 - fVar16;
    if (1.0 <= fVar16) {
      fVar16 = 1.0;
    }
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
  }
  else {
    fVar16 = *(float *)(param_1 + 0x2e0);
  }
  *(float *)(param_1 + 0x2e4) = fVar16;
  if ((*(byte *)(param_1 + 0x5ac) & 8) == 0) {
    fVar15 = 1.0 - fVar15;
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
  }
  else {
    fVar15 = *(float *)(param_1 + 0x5b0);
  }
  *(float *)(param_1 + 0x5b4) = fVar15;
  FUN_1402e1238(param_1,param_2,param_3);
  return;
}



// FUNCTION 1418dbab6 FUN_1418dbab6 body=139 status=ok
// SIG undefined FUN_1418dbab6(void)

void FUN_1418dbab6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    uVar2 = *(undefined8 *)(*param_2 + 0x6a0);
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar5 = (longlong)*(int *)(param_1 + 0x30) * 0x40 + lVar4;
    do {
      FUN_14019c9f2(lVar4,uVar2);
      if ((longlong)*(int *)(lVar4 + 0x38) != 0) {
        lVar3 = *(longlong *)(lVar4 + 0x30);
        lVar6 = (longlong)*(int *)(lVar4 + 0x38) * 0x14;
        do {
          FUN_14019c9f2(lVar3,uVar2);
          lVar3 = lVar3 + 0x14;
          lVar6 = lVar6 + -0x14;
        } while (lVar6 != 0);
      }
      lVar4 = lVar4 + 0x40;
    } while (lVar4 != lVar5);
  }
  return;
}



// FUNCTION 1418dbb42 FUN_1418dbb42 body=300 status=ok
// SIG undefined FUN_1418dbb42(void)

void FUN_1418dbb42(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 300) < 0) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    FUN_14791bb40(param_1 + 0x100,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  if (param_3 == 0) goto LAB_1418dbbe1;
  plVar1 = *(longlong **)(*(longlong *)(param_3 + 0x20) + 0xa8);
  if (plVar1 == (longlong *)0x0) {
LAB_1418dbc4b:
    lVar5 = 0;
  }
  else {
    uVar3 = FUN_140a32494();
    lVar4 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar3);
    if (lVar4 == 0) goto LAB_1418dbc4b;
    uVar3 = FUN_140a32494();
    lVar5 = FUN_144718840(lVar4,uVar3);
    if (lVar4 == lVar5) goto LAB_1418dbc4b;
  }
  FUN_1403514e0(&local_28,lVar5);
  *(undefined4 *)(param_1 + 0x1a0) = local_28;
  *(undefined4 *)(param_1 + 0x1a4) = uStack_24;
  *(undefined4 *)(param_1 + 0x1a8) = uStack_20;
  *(undefined4 *)(param_1 + 0x1ac) = uStack_1c;
LAB_1418dbbe1:
  FUN_140aeed2c((longlong *)(param_1 + 0x20),4,1);
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  *puVar2 = *(undefined8 *)(param_1 + 0x130);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 0x138);
  lVar5 = param_1 + 0x1c8;
  lVar4 = 0x10;
  do {
    *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar4) = lVar5;
    lVar5 = lVar5 + 0x50;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x40);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418dbc70 FUN_1418dbc70 body=149 status=ok
// SIG undefined FUN_1418dbc70(void)

undefined8 FUN_1418dbc70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  char *local_28;
  char *local_20;
  char local_15;
  char local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = 0;
  local_14[3] = '\0';
  local_14[2] = '\0';
  local_14[1] = 0;
  local_28 = local_14;
  local_14[0] = '\0';
  local_20 = &local_15;
  local_15 = '\0';
  cVar1 = FUN_140ae55cd(param_3);
  if (((cVar1 != '\0') && (uVar2 = 1, local_14[2] == '\x01')) &&
     ((local_14[3] != '\x01' || ((local_15 != '\x01' || (local_14[0] == '\0')))))) {
    uVar2 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418dbd06 FUN_1418dbd06 body=139 status=ok
// SIG undefined FUN_1418dbd06(void)

undefined8 FUN_1418dbd06(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined1 *local_20;
  undefined1 local_15;
  char local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = 0;
  local_14[3] = '\0';
  local_14[2] = '\0';
  local_14[1] = 0;
  local_28 = local_14;
  local_14[0] = '\0';
  local_20 = &local_15;
  cVar1 = FUN_140ae55cd(param_3);
  if (cVar1 != '\0') {
    if (((local_14[3] == '\x01') && (local_14[0] == '\0')) && (local_14[2] != '\0')) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418dbd98 FUN_1418dbd98 body=224 status=ok
// SIG undefined FUN_1418dbd98(void)

ulonglong FUN_1418dbd98(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  lVar3 = *(longlong *)(param_2 + 0x58);
  plVar4 = *(longlong **)(param_2 + 0x60);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x34) != 0)) {
    uVar2 = *(uint *)(lVar3 + 0x30);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1418dbe47;
    plVar6 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(lVar3 + 0x34))) &&
        ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) &&
       ((*plVar6 != 0 && (lVar3 = *(longlong *)(*plVar6 + 0x1f0), lVar3 != 0)))) {
      lVar5 = FUN_1403ca142();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        lVar5 = FUN_140d27a2a(lVar3);
        uVar7 = CONCAT71((int7)((ulonglong)lVar3 >> 8),(byte)(*(char *)(lVar5 + 0xb0) - 5U) < 2);
        goto LAB_1418dbe47;
      }
    }
  }
  uVar7 = 0;
LAB_1418dbe47:
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1418dbe78 FUN_1418dbe78 body=586 status=ok
// SIG undefined FUN_1418dbe78(void)

void FUN_1418dbe78(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  int *piVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  code *local_b0;
  undefined4 local_a0 [8];
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar11 = FUN_1409231c6(param_2);
  if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x178) != 0)) {
    lVar12 = FUN_14041aabe();
    lVar11 = *(longlong *)(lVar11 + 0x178);
    if ((lVar11 != 0) &&
       ((((lVar12 != 0 && (lVar2 = *(longlong *)(lVar11 + 0x10), lVar2 != 0)) &&
         (*(int *)(lVar12 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
        ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
          lVar12 + 0x30 && (lVar11 = *(longlong *)(lVar11 + 0x488), lVar11 != 0)))))) {
      if (DAT_14cbae3d8 == 0) {
        local_c0 = &local_48;
        local_48 = FUN_141030f22;
        local_b0 = FUN_14081d0ea;
        local_b8 = &LAB_1464f5fc4;
        local_c8 = &LAB_148c3dd26;
        local_d0 = &LAB_1459673ba;
        local_d8 = L"Engine";
        local_e0 = 0;
        local_e8 = 0x10000004;
        local_f0 = 0x10;
        local_f8 = 0x1360;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      }
      if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
        uVar13 = FUN_1401e6c61();
        piVar14 = (int *)FUN_1409e484c(lVar11,uVar13);
        iVar1 = *piVar14;
        (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x28)])(param_1 + 8);
        *(longlong *)(param_1 + 8) = (longlong)iVar1;
        *(undefined1 *)(param_1 + 0x28) = 2;
        goto LAB_1418dbf67;
      }
    }
  }
  local_80 = 0;
  puVar16 = (undefined4 *)(param_1 + 8);
  if (local_a0 == puVar16) {
    uVar15 = 0;
  }
  else {
    local_58 = local_58 & 0xffffffffffffff00;
    local_28 = local_58;
    local_38 = local_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    local_48 = (code *)CONCAT44(uStack_74,local_78);
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    uVar15 = *(ulonglong *)(param_1 + 0x28);
    uVar3 = *puVar16;
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar6 = *(undefined4 *)(param_1 + 0x14);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    uVar8 = *(undefined4 *)(param_1 + 0x1c);
    uVar9 = *(undefined4 *)(param_1 + 0x20);
    uVar10 = *(undefined4 *)(param_1 + 0x24);
    *(ulonglong *)(param_1 + 0x28) = local_58;
    *(undefined4 *)(param_1 + 0x18) = local_68;
    *(undefined4 *)(param_1 + 0x1c) = uStack_64;
    *(undefined4 *)(param_1 + 0x20) = uStack_60;
    *(undefined4 *)(param_1 + 0x24) = uStack_5c;
    *puVar16 = local_78;
    *(undefined4 *)(param_1 + 0xc) = uStack_74;
    *(undefined4 *)(param_1 + 0x10) = uStack_70;
    *(undefined4 *)(param_1 + 0x14) = uStack_6c;
    local_78 = uVar3;
    uStack_74 = uVar4;
    uStack_70 = uVar5;
    uStack_6c = uVar6;
    local_68 = uVar7;
    uStack_64 = uVar8;
    uStack_60 = uVar9;
    uStack_5c = uVar10;
    local_58 = uVar15;
    (*(code *)(&PTR_FUN_14a1842f0)[uVar15 & 0xff])();
    uVar15 = (ulonglong)local_80;
  }
  (*(code *)(&PTR_FUN_14a1842f0)[uVar15])(local_a0);
LAB_1418dbf67:
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418dc0c4 FUN_1418dc0c4 body=569 status=ok
// SIG undefined FUN_1418dc0c4(void)

void FUN_1418dc0c4(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  code *local_b0;
  undefined4 local_a0 [8];
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar11 = FUN_1409231c6(param_2);
  if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x178) != 0)) {
    lVar12 = FUN_14041aabe();
    lVar11 = *(longlong *)(lVar11 + 0x178);
    if ((lVar11 != 0) &&
       ((((lVar12 != 0 && (lVar2 = *(longlong *)(lVar11 + 0x10), lVar2 != 0)) &&
         (*(int *)(lVar12 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
        ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
          lVar12 + 0x30 && (lVar11 = *(longlong *)(lVar11 + 0x488), lVar11 != 0)))))) {
      if (DAT_14cbae3d8 == 0) {
        local_c0 = &local_48;
        local_48 = FUN_141030f22;
        local_b0 = FUN_14081d0ea;
        local_b8 = &LAB_1464f5fc4;
        local_c8 = &LAB_148c3dd26;
        local_d0 = &LAB_1459673ba;
        local_d8 = L"Engine";
        local_e0 = 0;
        local_e8 = 0x10000004;
        local_f0 = 0x10;
        local_f8 = 0x1360;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      }
      if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
        uVar1 = *(uint *)(lVar11 + 0xda8);
        (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x28)])(param_1 + 8);
        *(ulonglong *)(param_1 + 8) = (ulonglong)uVar1;
        *(undefined1 *)(param_1 + 0x28) = 2;
        goto LAB_1418dc1a2;
      }
    }
  }
  local_80 = 0;
  puVar14 = (undefined4 *)(param_1 + 8);
  if (local_a0 == puVar14) {
    uVar13 = 0;
  }
  else {
    local_58 = local_58 & 0xffffffffffffff00;
    local_28 = local_58;
    local_38 = local_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    local_48 = (code *)CONCAT44(uStack_74,local_78);
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    uVar13 = *(ulonglong *)(param_1 + 0x28);
    uVar3 = *puVar14;
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar6 = *(undefined4 *)(param_1 + 0x14);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    uVar8 = *(undefined4 *)(param_1 + 0x1c);
    uVar9 = *(undefined4 *)(param_1 + 0x20);
    uVar10 = *(undefined4 *)(param_1 + 0x24);
    *(ulonglong *)(param_1 + 0x28) = local_58;
    *(undefined4 *)(param_1 + 0x18) = local_68;
    *(undefined4 *)(param_1 + 0x1c) = uStack_64;
    *(undefined4 *)(param_1 + 0x20) = uStack_60;
    *(undefined4 *)(param_1 + 0x24) = uStack_5c;
    *puVar14 = local_78;
    *(undefined4 *)(param_1 + 0xc) = uStack_74;
    *(undefined4 *)(param_1 + 0x10) = uStack_70;
    *(undefined4 *)(param_1 + 0x14) = uStack_6c;
    local_78 = uVar3;
    uStack_74 = uVar4;
    uStack_70 = uVar5;
    uStack_6c = uVar6;
    local_68 = uVar7;
    uStack_64 = uVar8;
    uStack_60 = uVar9;
    uStack_5c = uVar10;
    local_58 = uVar13;
    (*(code *)(&PTR_FUN_14a1842f0)[uVar13 & 0xff])();
    uVar13 = (ulonglong)local_80;
  }
  (*(code *)(&PTR_FUN_14a1842f0)[uVar13])(local_a0);
LAB_1418dc1a2:
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418dc2fe FUN_1418dc2fe body=353 status=ok
// SIG undefined FUN_1418dc2fe(void)

void FUN_1418dc2fe(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418dc383;
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
LAB_1418dc383:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418dc460 FUN_1418dc460 body=512 status=ok
// SIG undefined FUN_1418dc460(void)

void FUN_1418dc460(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
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
  uVar7 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar7 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
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
      iVar11 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar5 = (longlong)iVar11;
        uVar9 = *(ulonglong *)(lVar3 + lVar5 * 0x28);
        plVar6 = *(longlong **)(lVar3 + 8 + lVar5 * 0x28);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
          UNLOCK();
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))();
          }
        }
        lVar3 = lVar3 + lVar5 * 0x28;
        uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar3 + 0x24) = iVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar11 = local_70._4_4_;
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



// FUNCTION 1418dc662 FUN_1418dc662 body=29 status=ok
// SIG undefined FUN_1418dc662(void)

undefined8 FUN_1418dc662(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418dc680 FUN_1418dc680 body=29 status=ok
// SIG undefined FUN_1418dc680(void)

undefined8 FUN_1418dc680(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418dc69e FUN_1418dc69e body=29 status=ok
// SIG undefined FUN_1418dc69e(void)

undefined8 FUN_1418dc69e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418dc6ce FUN_1418dc6ce body=506 status=ok
// SIG undefined FUN_1418dc6ce(void)

void FUN_1418dc6ce(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1407d545c();
  if (DAT_14cb253f8 == 0) {
    local_60 = &local_48;
    local_48 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_147f6f09d;
    local_70 = &LAB_146201c25;
    local_78 = &DAT_149e063b2;
    local_80 = 0;
    local_88 = 0x10000006;
    local_90 = 8;
    local_98 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
  }
  lVar4 = DAT_14cb253f8;
  if (*(longlong *)(DAT_14cb253f8 + 0x110) == 0) {
    FUN_140aa6c08(DAT_14cb253f8);
    if (*(longlong *)(lVar4 + 0x110) == 0) goto LAB_1418dc833;
  }
  lVar4 = DAT_14cb25be0;
  if (DAT_14cb25be0 == 0) {
LAB_1418dc833:
    if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  uVar2 = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x300);
  lVar6 = *(longlong *)(DAT_14cb25be0 + 200);
  if (lVar6 == 0) {
    uVar7 = FUN_1407f787c();
    lVar6 = FUN_14477b664(uVar7);
    *(longlong *)(lVar4 + 200) = lVar6;
  }
  lVar8 = *(longlong *)(lVar4 + 0xd0);
  if (((lVar8 != 0) || (lVar8 = 0, lVar6 == 0)) || (*(longlong *)(lVar4 + 0xc0) == 0))
  goto LAB_1418dc751;
  plVar3 = *(longlong **)(lVar6 + 0xb8);
  if (plVar3 == (longlong *)0x0) {
LAB_1418dc8c5:
    lVar8 = 0;
  }
  else {
    cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3);
    if (cVar5 == '\0') goto LAB_1418dc8c5;
    uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar8 = FUN_144aff482(uVar7,(longlong *)(lVar4 + 0xc0));
  }
  *(longlong *)(lVar4 + 0xd0) = lVar8;
LAB_1418dc751:
  local_98 = local_98 & 0xffffff00;
  FUN_1447997cc(uVar2,lVar8,uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1418dc8d5 FUN_1418dc8d5 body=97 status=ok
// SIG undefined FUN_1418dc8d5(void)

int * FUN_1418dc8d5(int *param_1,longlong *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = (**(code **)(*param_2 + 8))(param_2);
  lVar4 = FUN_1405c6693(uVar3);
  if (((lVar4 != 0) && (*(char *)(lVar4 + 0x5e4) == '\0')) && (*(char *)(lVar4 + 0x5e5) == '\x01'))
  {
    iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    if (iVar2 != *(int *)(lVar4 + 0x5e8)) {
      *param_1 = *(int *)(lVar4 + 0x5e8);
      uVar1 = 1;
      goto LAB_1418dc924;
    }
  }
  uVar1 = 0;
LAB_1418dc924:
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



// FUNCTION 1418dc936 FUN_1418dc936 body=1199 status=ok
// SIG undefined FUN_1418dc936(void)

uint * FUN_1418dc936(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int *piVar11;
  code *pcVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  code ****ppppcVar16;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code ***local_c0;
  undefined1 *local_b8;
  code *local_b0;
  uint local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  code ***local_78 [3];
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar6 = FUN_14049cbd6(param_4);
  uVar14 = 0;
  uVar15 = 0;
  if ((lVar6 != 0) && (uVar15 = uVar14, *(longlong *)(lVar6 + 0x178) != 0)) {
    lVar7 = FUN_14030d660();
    lVar6 = *(longlong *)(lVar6 + 0x178);
    if ((lVar6 != 0) &&
       ((((lVar7 != 0 && (lVar2 = *(longlong *)(lVar6 + 0x10), lVar2 != 0)) &&
         (*(int *)(lVar7 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
        ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30 && (lVar6 = *(longlong *)(lVar6 + 0x488), lVar6 != 0)))))) {
      if (DAT_14cbae3d8 == 0) {
        local_c0 = (code ***)local_78;
        local_78[0] = (code ***)FUN_141030f22;
        local_b0 = FUN_14081d0ea;
        local_b8 = &LAB_1464f5fc4;
        local_c8 = &LAB_148c3dd26;
        local_d0 = &LAB_1459673ba;
        local_d8 = L"Engine";
        local_e0 = 0;
        local_e8 = 0x10000004;
        local_f0 = 0x10;
        local_f8 = 0x1360;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      }
      if (((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) &&
         (plVar8 = (longlong *)FUN_1447262c2(param_4), plVar8 != (longlong *)0x0)) {
        uVar9 = FUN_14018b740();
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar9);
        if (plVar8 != (longlong *)0x0) {
          uVar9 = FUN_14018b740();
          plVar10 = (longlong *)FUN_144718840(plVar8,uVar9);
          if ((plVar8 != plVar10) && (plVar10 != (longlong *)0x0)) {
            uVar9 = FUN_1401e6c61();
            piVar11 = (int *)FUN_1409e484c(lVar6,uVar9);
            iVar1 = *piVar11;
            iVar4 = (**(code **)(*plVar10 + 0x28))(plVar10);
            uVar15 = iVar4 - iVar1;
          }
        }
      }
    }
  }
  if (*(char *)(param_1 + 8) == '\0') {
    *(undefined2 *)(param_2 + 6) = 4;
    uVar3 = 2;
    goto LAB_1418dcb1e;
  }
  if (uVar15 == 0) {
    puVar13 = &local_a0;
    FUN_1448729ea(param_1 + 0x10,puVar13,param_4);
    if (local_80 == 3) {
      uVar14 = 3;
      uVar15 = local_a0;
    }
    else {
      FUN_1400b56fe(local_78,&local_a0,3);
      uVar15 = 0;
      if (local_58 != 0) {
        uVar15 = (uint)local_78[0];
      }
      pcVar12 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar12 != (code *)0x0) {
        ppppcVar16 = local_78;
        if (0x18 < local_60) {
          ppppcVar16 = (code ****)local_78[0];
        }
        (*pcVar12)(ppppcVar16);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(local_78[0]);
      }
      uVar14 = (uint)local_80;
    }
    pcVar12 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar14 * 0x120));
    if (pcVar12 != (code *)0x0) {
      if (0x18 < local_88) {
        puVar13 = (uint *)CONCAT44(uStack_9c,local_a0);
      }
LAB_1418dcd81:
      (*pcVar12)(puVar13);
    }
LAB_1418dcb03:
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
  }
  else {
    uVar14 = *(uint *)(param_1 + 0x68);
    if (0 < (int)uVar14) {
      uVar5 = -uVar15;
      if ((int)-uVar15 < 0) {
        uVar5 = uVar15;
      }
      if (uVar14 <= uVar5) {
        uVar5 = uVar14;
      }
      if ((int)uVar15 < 1) {
        lVar6 = *(longlong *)(param_1 + 0x60) + (ulonglong)(uVar5 - 1) * 0xa0 + 0x50;
      }
      else {
        lVar6 = (ulonglong)(uVar5 - 1) * 0xa0 + *(longlong *)(param_1 + 0x60);
      }
      puVar13 = &local_a0;
      FUN_1448729ea(lVar6,puVar13,param_4);
      if (local_80 == 3) {
        uVar14 = 3;
        uVar15 = local_a0;
      }
      else {
        FUN_1400b56fe(local_78,&local_a0,3);
        uVar15 = 0;
        if (local_58 != 0) {
          uVar15 = (uint)local_78[0];
        }
        pcVar12 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
        if (pcVar12 != (code *)0x0) {
          ppppcVar16 = local_78;
          if (0x18 < local_60) {
            ppppcVar16 = (code ****)local_78[0];
          }
          (*pcVar12)(ppppcVar16);
        }
        if (0x18 < local_60) {
          FUN_1400020a8(local_78[0]);
        }
        uVar14 = (uint)local_80;
      }
      pcVar12 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar14 * 0x120));
      if (pcVar12 != (code *)0x0) {
        if (0x18 < local_88) {
          puVar13 = (uint *)CONCAT44(uStack_9c,local_a0);
        }
        goto LAB_1418dcd81;
      }
      goto LAB_1418dcb03;
    }
    uVar15 = 0;
  }
  *(undefined2 *)(param_2 + 6) = 4;
  uVar3 = 3;
LAB_1418dcb1e:
  *param_2 = uVar15;
  *(undefined1 *)(param_2 + 8) = uVar3;
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418dcde6 FUN_1418dcde6 body=1013 status=ok
// SIG undefined FUN_1418dcde6(void)

longlong FUN_1418dcde6(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined4 *local_60;
  code *local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar1 = *(char *)(param_1 + 8);
  plVar2 = (longlong *)FUN_1447262c2(param_4);
  if (cVar1 == '\x01') {
    if (plVar2 != (longlong *)0x0) {
      lVar4 = FUN_1405c6693(plVar2);
      if (lVar4 == 0) {
        bVar6 = 0;
      }
      else {
        pbVar7 = (byte *)(lVar4 + 0x5f4);
LAB_1418dcee8:
        bVar6 = *pbVar7;
        if (bVar6 == 0xff) goto LAB_1418dce5c;
      }
      lVar4 = FUN_1405c673d();
      local_48 = 0xffffffff;
      uStack_44 = (undefined4)*(undefined8 *)(param_1 + 0xc);
      uStack_40 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
      if ((int)(uint)bVar6 < *(int *)(lVar4 + 0x30)) {
        FUN_140c386b6((ulonglong)bVar6 * 0x170 + *(longlong *)(lVar4 + 0x28) + 8,param_2,&local_48,
                      param_4);
        goto LAB_1418dcf3a;
      }
    }
  }
  else if (plVar2 != (longlong *)0x0) {
    if (DAT_14cac9ca8 == 0) {
      local_60 = &local_48;
      local_48 = 0x41030f22;
      uStack_44 = 1;
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
    lVar4 = plVar2[2];
    iVar5 = *(int *)(lVar4 + 0x38);
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar5) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
        DAT_14cac9ca8 + 0x30)) {
      if (DAT_14cbae3d8 == 0) {
        local_60 = &local_48;
        local_48 = 0x41030f22;
        uStack_44 = 1;
        local_50 = FUN_14081d0ea;
        local_58 = (code *)&LAB_1464f5fc4;
        local_68 = &LAB_148c3dd26;
        local_70 = &LAB_1459673ba;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10000004;
        local_90 = 0x10;
        local_98 = 0x1360;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
        lVar4 = plVar2[2];
        iVar5 = *(int *)(lVar4 + 0x38);
      }
      if ((*(int *)(DAT_14cbae3d8 + 0x38) <= iVar5) &&
         (plVar3 = plVar2,
         *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
         == DAT_14cbae3d8 + 0x30)) {
LAB_1418dcee1:
        pbVar7 = (byte *)((longlong)plVar3 + 0x711);
        goto LAB_1418dcee8;
      }
      plVar3 = (longlong *)(**(code **)(*plVar2 + 0x5e8))(plVar2);
      if (plVar3 != (longlong *)0x0) {
        if (DAT_14cbae3d8 == 0) {
          local_60 = &local_48;
          local_48 = 0x41030f22;
          uStack_44 = 1;
          local_50 = FUN_14081d0ea;
          local_58 = (code *)&LAB_1464f5fc4;
          local_68 = &LAB_148c3dd26;
          local_70 = &LAB_1459673ba;
          local_78 = L"Engine";
          local_80 = 0;
          local_88 = 0x10000004;
          local_90 = 0x10;
          local_98 = 0x1360;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
        }
        if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
            DAT_14cbae3d8 + 0x30)) goto LAB_1418dcee1;
      }
      plVar3 = (longlong *)plVar2[0x36];
      if ((plVar3 != plVar2 && plVar3 != (longlong *)0x0) &&
         (plVar3 = (longlong *)(**(code **)(*plVar3 + 0x5e8))(), plVar3 != (longlong *)0x0)) {
        lVar4 = FUN_144a7b4ca();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) goto LAB_1418dcee1;
      }
    }
  }
LAB_1418dce5c:
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
LAB_1418dcf3a:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418dd1dc FUN_1418dd1dc body=954 status=ok
// SIG undefined FUN_1418dd1dc(void)

void FUN_1418dd1dc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  code *local_d8 [4];
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_3 == 0) goto LAB_1418dd449;
  if (*(longlong *)(param_3 + 0x28) != 0) {
    lVar9 = FUN_140344898();
    lVar12 = *(longlong *)(param_3 + 0x28);
    if (lVar12 != 0) {
      if (((((lVar9 == 0) || (lVar10 = *(longlong *)(lVar12 + 0x10), lVar10 == 0)) ||
           (*(int *)(lVar10 + 0x38) < *(int *)(lVar9 + 0x38))) ||
          ((*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
            lVar9 + 0x30 || (*(longlong *)(lVar12 + 0xa58) == 0)))) ||
         (plVar2 = *(longlong **)(*(longlong *)(lVar12 + 0xa58) + 0x428), plVar2 == (longlong *)0x0)
         ) goto LAB_1418dd498;
      lVar9 = (**(code **)(*plVar2 + 0x7a0))(plVar2);
      if ((lVar9 == 0) || (*(int *)(lVar9 + 0x60) < 1)) {
        lVar12 = *(longlong *)(param_3 + 0x28);
        goto LAB_1418dd498;
      }
      lVar10 = FUN_140ce64d6(*(undefined8 *)(lVar12 + 0xa58));
      lVar9 = plVar2[0xcb];
      if (lVar9 == 0) {
        lVar9 = plVar2[0xcc];
        if ((DAT_14c950c29 == '\x01') && (lVar9 != 0)) goto LAB_1418dd58c;
        if (lVar9 != 0) goto LAB_1418dd2eb;
LAB_1418dd4df:
        lVar9 = 0;
      }
      else {
        if (DAT_14c950c29 == '\x01') {
LAB_1418dd58c:
          FUN_1456cec3c(lVar9);
        }
LAB_1418dd2eb:
        if (DAT_14cb06da8 == 0) {
          local_f0 = local_d8;
          local_d8[0] = FUN_1449e2820;
          local_e0 = FUN_14081d0ea;
          local_e8 = &LAB_1464003b0;
          local_f8 = &LAB_147d17bdf;
          local_100 = &LAB_1417edf22;
          local_108 = L"Engine";
          local_110 = 0;
          local_118 = 0x10000000;
          local_120 = 8;
          local_128 = 0x588;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
        goto LAB_1418dd4df;
      }
      FUN_140ce6516(local_d8,lVar9);
      lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0xa58) + 0x1c8);
      pdVar11 = (double *)&DAT_14c846480;
      if (lVar12 != 0) {
        pdVar11 = (double *)(lVar12 + 0x240);
      }
      dVar5 = *pdVar11;
      dVar6 = pdVar11[1];
      dVar7 = pdVar11[2];
      dVar13 = (local_b8 + *(double *)(lVar10 + 0x30)) * pdVar11[8];
      dVar14 = (local_b0 + *(double *)(lVar10 + 0x38)) * pdVar11[9];
      dVar15 = (local_a8 + *(double *)(lVar10 + 0x40)) * pdVar11[10];
      dVar1 = pdVar11[3];
      dVar16 = dVar14 * dVar5 - dVar6 * dVar13;
      dVar17 = dVar15 * dVar6 - dVar7 * dVar14;
      dVar18 = dVar13 * dVar7 - dVar5 * dVar15;
      dVar17 = dVar17 + dVar17;
      dVar18 = dVar18 + dVar18;
      dVar16 = dVar16 + dVar16;
      dVar4 = (dVar7 * dVar17 - dVar5 * dVar16) + pdVar11[3] * dVar18 + dVar14 + pdVar11[5];
      dVar14 = pdVar11[6];
      auVar3._8_4_ = SUB84(dVar4,0);
      auVar3._0_8_ = (dVar16 * dVar6 - dVar18 * dVar7) + dVar1 * dVar17 + dVar13 + pdVar11[4];
      auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *(undefined1 (*) [16])(param_3 + 0x30) = auVar3;
      *(double *)(param_3 + 0x40) =
           dVar16 * dVar1 + dVar15 + (dVar18 * dVar5 - dVar17 * dVar6) + dVar14;
LAB_1418dd449:
      if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  lVar12 = 0;
LAB_1418dd498:
  *(undefined8 *)(param_3 + 0x40) = *(undefined8 *)(lVar12 + 0x60);
  uVar8 = *(undefined8 *)(lVar12 + 0x58);
  *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(lVar12 + 0x50);
  *(undefined8 *)(param_3 + 0x38) = uVar8;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_148);
}



// FUNCTION 1418dd59a FUN_1418dd59a body=706 status=ok
// SIG undefined FUN_1418dd59a(void)

void FUN_1418dd59a(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
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
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)(param_3 + 0x28);
  if ((*(longlong *)(lVar3 + 0xe0) != 0) && (DAT_14cba8288 == 0)) {
    local_60 = &local_48;
    local_48 = FUN_141864c34;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_1464cee30;
    local_68 = &LAB_148bfac22;
    local_70 = &LAB_140f21842;
    local_78 = &DAT_149e063b2;
    local_80 = 0;
    local_88 = 0x10000004;
    local_90 = 0x10;
    local_98 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    lVar3 = *(longlong *)(param_3 + 0x28);
  }
  lVar2 = *(longlong *)(lVar3 + 0xe8);
  if (lVar2 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141030f22;
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
      lVar2 = *(longlong *)(lVar3 + 0xe8);
      if (lVar2 == 0) goto LAB_1418dd65f;
    }
    if ((((DAT_14cbadd90 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) &&
        (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
      puVar1 = *(undefined8 **)(lVar2 + 0x2228);
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        *puVar1 = &LAB_146631bcd;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1 = puVar1 + 2;
        *(undefined8 **)(lVar2 + 0x2228) = puVar1;
        if (puVar1 == (undefined8 *)0x0) goto LAB_1418dd65f;
      }
      if ((*(char *)(param_1 + 0x931) == '\0') && (0 < *(int *)((longlong)puVar1 + 4))) {
        *(undefined1 *)(param_1 + 0x931) = 1;
        FUN_148cf21a6(param_1,lVar2);
      }
      else if ((*(char *)(param_1 + 0x931) != '\0') && (*(int *)((longlong)puVar1 + 4) < 1)) {
        *(undefined1 *)(param_1 + 0x931) = 0;
        FUN_148cf224a(param_1,lVar2);
      }
      if ((param_3 != 0) && (*(char *)(param_1 + 0x931) == '\x01')) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
      }
    }
  }
LAB_1418dd65f:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418dd882 FUN_1418dd882 body=719 status=ok
// SIG undefined FUN_1418dd882(void)

void FUN_1418dd882(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  double dVar12;
  double *pdVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 != 0) {
    *(undefined2 *)(param_1 + 0x1e0) = 1;
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    *(double *)(param_1 + 0x750) = DAT_14c846508;
    uVar10 = DAT_14c846500._4_4_;
    uVar9 = (undefined4)DAT_14c846500;
    uVar8 = DAT_14c8464f8._4_4_;
    *(undefined4 *)(param_1 + 0x740) = (undefined4)DAT_14c8464f8;
    *(undefined4 *)(param_1 + 0x744) = uVar8;
    *(undefined4 *)(param_1 + 0x748) = uVar9;
    *(undefined4 *)(param_1 + 0x74c) = uVar10;
    lVar1 = *(longlong *)(param_2 + 0x28);
    dVar12 = *(double *)(lVar1 + 0xe0);
    if (dVar12 != 0.0) {
      if (DAT_14cba8288 == 0) {
        local_90 = &local_78;
        local_78 = FUN_141864c34;
        local_80 = FUN_14081d0ea;
        local_88 = &LAB_1464cee30;
        local_98 = &LAB_148bfac22;
        local_a0 = &LAB_140f21842;
        local_a8 = &DAT_149e063b2;
        local_b0 = 0;
        local_b8 = 0x10000004;
        local_c0 = 0x10;
        local_c8 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        dVar12 = *(double *)(lVar1 + 0xe0);
        if (dVar12 == 0.0) goto LAB_1418dd9d4;
      }
      if ((((DAT_14cba8288 != 0) && (lVar1 = *(longlong *)((longlong)dVar12 + 0x10), lVar1 != 0)) &&
          (*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
         (lVar15 = DAT_14cba8288 + 0x30,
         *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8)
         == lVar15)) {
        lVar1 = *(longlong *)((longlong)dVar12 + 0x1c8);
        if (lVar1 == 0) {
          local_48 = DAT_14c846508;
          local_58 = (undefined4)DAT_14c8464f8;
          uStack_54 = DAT_14c8464f8._4_4_;
          uStack_50 = (undefined4)DAT_14c846500;
          uStack_4c = DAT_14c846500._4_4_;
        }
        else {
          pcVar4 = *(code **)(lVar1 + 0x240);
          dVar5 = *(double *)(lVar1 + 0x248);
          dVar6 = *(double *)(lVar1 + 0x250);
          dVar7 = *(double *)(lVar1 + 600);
          pdVar13 = *(double **)(lVar1 + 0x228);
          local_78 = pcVar4;
          uStack_70 = dVar5;
          local_68 = dVar6;
          uStack_60 = dVar7;
          if (pdVar13 == (double *)0x0) {
            lVar15 = 0x40;
            pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
            dVar12 = DAT_14c8463d8;
            *pdVar13 = DAT_14c8463d0;
            pdVar13[1] = dVar12;
            dVar12 = DAT_14c8463e8;
            pdVar13[2] = DAT_14c8463e0;
            pdVar13[3] = dVar12;
            dVar12 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
            pdVar13[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
            pdVar13[5] = dVar12;
            dVar12 = DAT_14c846508;
            pdVar13[6] = DAT_14c846508;
            *(double **)(lVar1 + 0x228) = pdVar13;
          }
          auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar13[1]);
          auVar2._0_8_ = -(ulonglong)((double)pcVar4 != *pdVar13);
          auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar13[1]) >> 0x20);
          iVar11 = movmskpd(SUB84(dVar12,0),auVar2);
          auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar13[3]);
          auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar13[2]);
          auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar13[3]) >> 0x20);
          uVar14 = movmskpd((int)lVar15,auVar3);
          if ((uVar14 & 0x3fffffff) != 0 || iVar11 != 0) {
            *(undefined4 *)(pdVar13 + 2) = (undefined4)local_68;
            *(undefined4 *)((longlong)pdVar13 + 0x14) = local_68._4_4_;
            *(undefined4 *)(pdVar13 + 3) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)pdVar13 + 0x1c) = uStack_60._4_4_;
            *(undefined4 *)pdVar13 = (undefined4)local_78;
            *(undefined4 *)((longlong)pdVar13 + 4) = local_78._4_4_;
            *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_70._4_4_;
            FUN_1448052ee(&local_78,&local_58);
            pdVar13[6] = local_48;
            pdVar13[4] = (double)CONCAT44(uStack_54,local_58);
            pdVar13[5] = (double)CONCAT44(uStack_4c,uStack_50);
          }
          local_48 = pdVar13[6];
          local_58 = *(undefined4 *)(pdVar13 + 4);
          uStack_54 = *(undefined4 *)((longlong)pdVar13 + 0x24);
          uStack_50 = *(undefined4 *)(pdVar13 + 5);
          uStack_4c = *(undefined4 *)((longlong)pdVar13 + 0x2c);
        }
        *(double *)(param_1 + 0x750) = local_48;
        *(undefined4 *)(param_1 + 0x740) = local_58;
        *(undefined4 *)(param_1 + 0x744) = uStack_54;
        *(undefined4 *)(param_1 + 0x748) = uStack_50;
        *(undefined4 *)(param_1 + 0x74c) = uStack_4c;
      }
    }
  }
LAB_1418dd9d4:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418ddb52 FUN_1418ddb52 body=1348 status=ok
// SIG undefined FUN_1418ddb52(void)

void FUN_1418ddb52(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined4 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined2 *local_258;
  undefined1 *local_250;
  undefined1 *local_248;
  code **local_240;
  undefined1 *local_238;
  code *local_230;
  code *local_228;
  uint local_220;
  undefined8 uStack_21c;
  uint uStack_214;
  undefined4 local_210;
  undefined **local_208;
  undefined *local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined2 local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  int local_160;
  undefined1 uStack_15c;
  undefined3 uStack_15b;
  undefined5 local_158;
  undefined3 uStack_153;
  undefined8 uStack_150;
  undefined4 local_148;
  uint local_140;
  undefined8 uStack_13c;
  uint uStack_134;
  undefined4 local_130;
  undefined **local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int iStack_80;
  undefined1 uStack_7c;
  undefined3 uStack_7b;
  undefined4 uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if ((param_3 == 0) || (*(char *)(param_1 + 0x1e1) != '\0')) goto LAB_1418ddb90;
  lVar5 = *(longlong *)(param_3 + 0x28);
  lVar4 = *(longlong *)(lVar5 + 0xe0);
  if (lVar4 == 0) goto LAB_1418ddb90;
  if (DAT_14cba8288 == 0) {
    local_240 = &local_228;
    local_228 = FUN_141864c34;
    local_230 = FUN_14081d0ea;
    local_238 = &LAB_1464cee30;
    local_248 = &LAB_148bfac22;
    local_250 = &LAB_140f21842;
    local_258 = &DAT_149e063b2;
    local_260 = 0;
    local_268 = 0x10000004;
    local_270 = 0x10;
    local_278 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    lVar4 = *(longlong *)(lVar5 + 0xe0);
    if (lVar4 == 0) goto LAB_1418ddb90;
  }
  if ((((DAT_14cba8288 == 0) || (lVar5 = *(longlong *)(lVar4 + 0x10), lVar5 == 0)) ||
      (*(int *)(lVar5 + 0x38) < *(int *)(DAT_14cba8288 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) !=
       DAT_14cba8288 + 0x30 || (lVar5 = *(longlong *)(&DAT_00006850 + lVar4), lVar5 == 0))))
  goto LAB_1418ddb90;
  if (*(char *)(param_1 + 0x1e0) == '\x01') {
    local_228 = (code *)((ulonglong)local_228 & 0xffffffff00000000);
    local_220 = local_220 & 0xffffff00;
    uStack_21c = 0;
    uStack_214 = uStack_214 & 0xffff0000;
    local_210 = 0x41200000;
    local_208 = &PTR_FUN_14b00bdf8;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1cc = 0xffffffff00000080;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0x7f7fffff;
    local_194 = 0x404;
    local_200 = &DAT_14a176f00;
    uStack_150 = 0;
    local_148 = 0;
    local_140 = local_140 & 0xffffff00;
    uStack_134 = uStack_134 & 0xffff0000;
    uStack_13c = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    uStack_168._0_5_ = 0;
    uStack_168._5_3_ = 0;
    local_160 = 0;
    uStack_15c = 0;
    uStack_15b = 0;
    local_158 = 0;
    local_130 = 0x41200000;
    local_128 = &PTR_FUN_14b00bdf8;
    local_f8 = 0;
    local_f0 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_ec = 0xffffffff00000080;
    local_e4 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0x7f7fffff;
    local_b4 = 0x404;
    local_120 = &DAT_14a176f00;
    uStack_70 = 0;
    local_68 = 0;
    iStack_80 = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_78 = 0;
    uStack_74 = uStack_74 & 0xffffff00;
    uStack_90 = 0;
    local_88._0_5_ = 0;
    local_88._5_3_ = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    if (*(char *)(lVar5 + 0x1dc0) == '\x02') {
      lVar5 = param_1 + 0x3b0;
LAB_1418de06c:
      FUN_14118f596(&local_228,lVar5);
    }
    else {
      if (*(char *)(lVar5 + 0x1dc0) == '\x04') {
        lVar5 = param_1 + 0x1e8;
        goto LAB_1418de06c;
      }
      if ((0.0 < *(float *)(lVar5 + 0x1d30) && *(longlong *)(lVar5 + 0x1d38) != 0) &&
         (*(float *)(*(longlong *)(param_3 + 0x28) + 0x28) <=
          *(float *)(lVar5 + 0x1d30) + *(float *)(*(longlong *)(lVar5 + 0x1d38) + 0x28))) {
        lVar5 = param_1 + 0x578;
        goto LAB_1418de06c;
      }
      *(undefined1 *)(param_1 + 0x1e1) = 1;
    }
    *(byte *)(param_1 + 0x100) = (byte)local_228 >> 1 & 1;
    *(uint *)(param_1 + 0x18) = (uint)local_228 >> 2 & 3 | *(uint *)(param_1 + 0x18) & 0xfffffffc;
    *(uint *)(param_1 + 0x20) = local_220;
    *(undefined4 *)(param_1 + 0x24) = (undefined4)uStack_21c;
    *(undefined4 *)(param_1 + 0x28) = uStack_21c._4_4_;
    *(uint *)(param_1 + 0x2c) = uStack_214;
    *(undefined4 *)(param_1 + 0x30) = local_210;
    *(undefined4 *)(param_1 + 0xa8) = local_198;
    *(undefined2 *)(param_1 + 0xac) = local_194;
    FUN_14093c00e(param_1 + 0xb0,&local_190);
    iVar3 = local_160;
    *(undefined8 *)(param_1 + 0xc0) = local_180;
    *(undefined4 *)(param_1 + 200) = (undefined4)uStack_178;
    *(undefined4 *)(param_1 + 0xcc) = uStack_178._4_4_;
    *(undefined4 *)(param_1 + 0xd0) = (undefined4)local_170;
    *(undefined4 *)(param_1 + 0xd4) = local_170._4_4_;
    puVar1 = (undefined8 *)(param_1 + 0xd8);
    if (puVar1 != &uStack_168) {
      lVar5 = (longlong)local_160;
      pvVar2 = (void *)CONCAT35(uStack_168._5_3_,(undefined5)uStack_168);
      *(int *)(param_1 + 0xe0) = local_160;
      if (local_160 == 0 && *(int *)(param_1 + 0xe4) == 0) {
        *(undefined4 *)(param_1 + 0xe4) = 0;
      }
      else {
        FUN_1446dd670(puVar1,local_160);
        if (iVar3 != 0) {
          memcpy((void *)*puVar1,pvVar2,lVar5 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0xf8) = local_148;
    *(ulonglong *)(param_1 + 0xe8) = CONCAT35(uStack_153,local_158);
    *(undefined8 *)(param_1 + 0xf0) = uStack_150;
    *(undefined4 *)(param_1 + 0x110) = local_130;
    *(uint *)(param_1 + 0x100) = local_140;
    *(undefined4 *)(param_1 + 0x104) = (undefined4)uStack_13c;
    *(undefined4 *)(param_1 + 0x108) = uStack_13c._4_4_;
    *(uint *)(param_1 + 0x10c) = uStack_134;
    *(undefined2 *)(param_1 + 0x18c) = local_b4;
    *(undefined4 *)(param_1 + 0x188) = local_b8;
    FUN_14093c00e(param_1 + 400,&local_b0);
    iVar3 = iStack_80;
    *(undefined8 *)(param_1 + 0x1a0) = local_a0;
    *(undefined4 *)(param_1 + 0x1a8) = (undefined4)uStack_98;
    *(undefined4 *)(param_1 + 0x1ac) = uStack_98._4_4_;
    *(undefined4 *)(param_1 + 0x1b0) = (undefined4)uStack_90;
    *(undefined4 *)(param_1 + 0x1b4) = uStack_90._4_4_;
    puVar1 = (undefined8 *)(param_1 + 0x1b8);
    if (puVar1 != &local_88) {
      lVar5 = (longlong)iStack_80;
      pvVar2 = (void *)CONCAT35(local_88._5_3_,(undefined5)local_88);
      *(int *)(param_1 + 0x1c0) = iStack_80;
      if (iStack_80 == 0 && *(int *)(param_1 + 0x1c4) == 0) {
        *(undefined4 *)(param_1 + 0x1c4) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iStack_80);
        if (iVar3 != 0) {
          memcpy((void *)*puVar1,pvVar2,lVar5 * 2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1d8) = local_68;
    *(undefined4 *)(param_1 + 0x1c8) = uStack_78;
    *(uint *)(param_1 + 0x1cc) = uStack_74;
    *(undefined4 *)(param_1 + 0x1d0) = (undefined4)uStack_70;
    *(undefined4 *)(param_1 + 0x1d4) = uStack_70._4_4_;
    FUN_14051f4c4(&local_128);
    FUN_14051f4c4(&local_208);
  }
  FUN_1412e29a6(param_1,param_2,param_3);
LAB_1418ddb90:
  if ((local_60 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418de098 FUN_1418de098 body=343 status=ok
// SIG undefined FUN_1418de098(void)

void FUN_1418de098(longlong param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  
  uVar3 = FUN_1447c7e44(*(float *)(param_1 + 0xe4) + param_2,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  fVar4 = *(float *)(param_1 + 0x1c);
  if ((fVar4 != 90.0) || (NAN(fVar4))) {
    fVar8 = fVar4;
    if (fVar4 <= 90.0) {
      fVar8 = 90.0;
    }
    fVar7 = 90.0;
    if (fVar4 <= 90.0) {
      fVar7 = fVar4;
    }
    dVar5 = (*(double *)(param_3 + 0x48) - (double)fVar7) / ((double)fVar8 - (double)fVar7);
  }
  else {
    dVar5 = (double)(~-(ulonglong)(*(double *)(param_3 + 0x48) < 90.0) & 0x3ff0000000000000);
  }
  dVar6 = 0.0;
  if (0.0 <= dVar5) {
    dVar6 = dVar5;
  }
  dVar5 = (double)FUN_140bcb07c((double)(float)dVar6,*(undefined1 *)(param_1 + 0xd8),
                                (double)*(float *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xe0));
  lVar1 = FUN_1447e736e(param_1 + 0xb0);
  lVar2 = param_1;
  if (lVar1 != 0) {
    lVar2 = FUN_1447e736e(param_1 + 0xb0);
  }
  fVar4 = (float)FUN_1448c9f94(lVar2 + 0x30,*(float *)(param_1 + 0xe4) / *(float *)(param_1 + 0x20),
                               0);
  *(double *)(param_3 + 0x48) =
       *(double *)(param_3 + 0x48) -
       (double)((float)(dVar5 + 0.0) * *(float *)(param_1 + 0x18) * fVar4 * param_2);
  return;
}



// FUNCTION 1418de1f0 FUN_1418de1f0 body=564 status=ok
// SIG undefined FUN_1418de1f0(void)

void FUN_1418de1f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_2 + 0x28) != 0) {
    lVar3 = FUN_140344898();
    lVar4 = *(longlong *)(param_2 + 0x28);
    if (((((lVar4 != 0) && (lVar3 != 0)) && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) &&
        ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)))) &&
       ((*(longlong *)(lVar4 + 0xa50) != 0 &&
        (plVar2 = *(longlong **)(lVar4 + 0xe0), plVar2 != (longlong *)0x0)))) {
      if (DAT_14cb6fd70 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_1487a9cc9;
        local_50 = FUN_1465433f8;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
      }
      lVar4 = (**(code **)(*plVar2 + 0x288))(plVar2,DAT_14cb6fd70);
      if (lVar4 != 0) {
        if (DAT_14cb6fd70 == 0) {
          local_40 = &local_20;
          local_20 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_1427b09ee;
          local_48 = &LAB_1487a9cc9;
          local_50 = FUN_1465433f8;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10004001;
          local_70 = 8;
          local_78 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
        }
        lVar3 = FUN_144718840(lVar4,DAT_14cb6fd70);
        if ((lVar4 != lVar3) && (lVar3 != 0)) {
          uVar5 = FUN_14023bf44(lVar3);
          *(undefined4 *)(param_1 + 0x18) = uVar5;
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418de426 FUN_1418de426 body=3244 status=ok
// SIG undefined FUN_1418de426(void)

void FUN_1418de426(longlong param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined2 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  undefined1 *local_108;
  code *local_100;
  code *local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(longlong *)(param_3 + 0x28) == 0) goto LAB_1418dedfd;
  lVar6 = FUN_140344898();
  lVar7 = *(longlong *)(param_3 + 0x28);
  if ((((lVar7 == 0) || (lVar6 == 0)) || (lVar8 = *(longlong *)(lVar7 + 0x10), lVar8 == 0)) ||
     ((*(int *)(lVar8 + 0x38) < *(int *)(lVar6 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
       lVar6 + 0x30)))) goto LAB_1418dedfd;
  lVar6 = *(longlong *)(lVar7 + 0xa58);
  if (lVar6 == 0) {
    bVar11 = false;
  }
  else {
    bVar11 = *(longlong *)(lVar6 + 0x428) != 0;
  }
  lVar8 = *(longlong *)(lVar7 + 0xe8);
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_110 = &local_f8;
      local_f8 = FUN_141030f22;
      local_100 = FUN_14081d0ea;
      local_108 = &LAB_1459f2e4c;
      local_118 = &LAB_148c39de3;
      local_120 = &LAB_1457a9eb2;
      local_128 = &DAT_149e063b2;
      local_130 = 0;
      local_138 = 0x10000004;
      local_140 = 0x10;
      local_148 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      lVar8 = *(longlong *)(lVar7 + 0xe8);
      if (lVar8 != 0) goto LAB_1418de539;
LAB_1418def93:
      lVar9 = 0;
    }
    else {
LAB_1418de539:
      lVar9 = 0;
      if ((DAT_14cbadd90 != 0) && (lVar6 = *(longlong *)(lVar8 + 0x10), lVar6 != 0)) {
        if (*(int *)(lVar6 + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) goto LAB_1418def93;
        lVar9 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
            DAT_14cbadd90 + 0x30) {
          lVar9 = lVar8;
        }
      }
    }
    lVar6 = *(longlong *)(lVar7 + 0xa58);
  }
  if ((((lVar6 != 0) && (bVar11 && lVar9 != 0)) &&
      (lVar8 = *(longlong *)(lVar6 + 0x1700), lVar8 != 0)) &&
     (((*(longlong **)(lVar6 + 0x428) != (longlong *)0x0 &&
       (lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x428) + 0x7a0))(), lVar6 != 0)) &&
      (0 < *(int *)(lVar6 + 0x60))))) {
    lVar6 = *(longlong *)(lVar7 + 0xa58);
    if ((lVar6 != 0) && (lVar1 = *(longlong *)(lVar6 + 0x1700), lVar1 != 0)) {
      uVar19 = 0;
      uVar29 = 0;
      dVar21 = *(double *)(lVar1 + 0x1cb8);
      if (0.0 <= dVar21) {
        uVar19 = SUB84(dVar21,0);
        uVar29 = (undefined4)((ulonglong)dVar21 >> 0x20);
      }
      cVar4 = FUN_1402096b0(lVar1);
      if (*(char *)(lVar1 + 0x1d08) == '\x01') {
        cVar10 = *(char *)(lVar1 + 0x1d0a);
      }
      else {
        cVar10 = '\0';
      }
      fVar26 = *(float *)(param_1 + 0xe0);
      if ((fVar26 < 1e-08) ||
         (*(float *)(param_1 + 0xe4) <= 1e-08 && *(float *)(param_1 + 0xe4) != 1e-08)) {
        FUN_145cfb40c(param_1,lVar6);
        fVar26 = *(float *)(param_1 + 0xe0);
      }
      fVar18 = *(float *)(param_1 + 0x9c);
      fVar12 = 0.0;
      if ((fVar18 < fVar26) && (fVar18 < *(float *)(param_1 + 0xe4))) {
        fVar12 = *(float *)(param_1 + 0xe4);
        if (cVar4 == '\0') {
          fVar12 = fVar26;
        }
        fVar12 = (((float)(double)CONCAT44(uVar29,uVar19) * 2236.942) / 100000.0 - fVar18) /
                 (fVar12 - fVar18);
        if (1.0 <= fVar12) {
          fVar12 = 1.0;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
      }
      fVar26 = *(float *)(param_1 + 0xec);
      if (fVar26 < fVar12) {
        *(float *)(param_1 + 0xec) = fVar12;
        *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xa0);
        fVar26 = fVar12;
      }
      else if (cVar4 == '\0' && cVar10 == '\0') {
        fVar23 = *(float *)(param_1 + 0xf0) - param_2;
        fVar18 = 0.0;
        if (0.0 <= fVar23) {
          fVar18 = fVar23;
        }
        *(float *)(param_1 + 0xf0) = fVar18;
        if (fVar18 < 1e-08) {
          if (*(float *)(param_1 + 0xa4) <= 1e-08) {
            *(float *)(param_1 + 0xec) = fVar12;
            fVar26 = fVar12;
          }
          else {
            fVar18 = fVar26 - param_2 / *(float *)(param_1 + 0xa4);
            fVar26 = fVar12;
            if (fVar12 <= fVar18) {
              fVar26 = fVar18;
            }
            *(float *)(param_1 + 0xec) = fVar26;
          }
        }
      }
      if (fVar12 <= fVar26) {
        fVar12 = fVar26;
      }
      if (0.0 < *(float *)(param_1 + 0xac)) {
        fVar26 = fVar12 - *(float *)(param_1 + 0xe8);
        if (1e-08 <= fVar26 * fVar26) {
          fVar18 = *(float *)(param_1 + 0xac) * param_2;
          if (1.0 <= fVar18) {
            fVar18 = 1.0;
          }
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          fVar12 = *(float *)(param_1 + 0xe8) + fVar26 * fVar18;
        }
      }
      *(float *)(param_1 + 0xe8) = fVar12;
      fVar26 = *(float *)(param_1 + 0x98);
      if (cVar4 == '\0') {
        fVar18 = 0.0;
      }
      else {
        fVar18 = 1.0;
      }
      if (fVar26 <= 0.0) {
        *(float *)(param_1 + 0xf4) = fVar18;
        if (cVar10 == '\0') {
          uVar19 = 0;
        }
        else {
          uVar19 = 0x3f800000;
        }
        *(undefined4 *)(param_1 + 0xf8) = uVar19;
      }
      else {
        fVar12 = fVar18 - *(float *)(param_1 + 0xf4);
        if (1e-08 <= fVar12 * fVar12) {
          fVar18 = (1.0 / fVar26) * param_2;
          if (fVar18 <= fVar12) {
            fVar12 = fVar18;
          }
          if (fVar12 <= -fVar18) {
            fVar12 = -fVar18;
          }
          fVar18 = *(float *)(param_1 + 0xf4) + fVar12;
        }
        *(float *)(param_1 + 0xf4) = fVar18;
        if (cVar10 == '\0') {
          fVar12 = 0.0;
        }
        else {
          fVar12 = 1.0;
        }
        fVar23 = fVar12 - *(float *)(param_1 + 0xf8);
        if (1e-08 <= fVar23 * fVar23) {
          fVar26 = (1.0 / fVar26) * param_2;
          if (fVar26 <= fVar23) {
            fVar23 = fVar26;
          }
          if (fVar23 <= -fVar26) {
            fVar23 = -fVar26;
          }
          fVar12 = *(float *)(param_1 + 0xf8) + fVar23;
        }
        *(float *)(param_1 + 0xf8) = fVar12;
      }
      if (0.5 <= fVar18) {
        fVar26 = powf(1.0 - (fVar18 + fVar18 + -1.0),*(float *)(param_1 + 0xa8));
        fVar26 = (1.0 - fVar26) * 0.5 + 0.5;
      }
      else {
        fVar26 = powf(fVar18 + fVar18,*(float *)(param_1 + 0xa8));
        fVar26 = (fVar26 + 0.0) * 0.5;
      }
      *(float *)(param_1 + 0xfc) = fVar26 + 0.0;
      fVar26 = *(float *)(param_1 + 0xf8);
      if (0.5 <= fVar26) {
        fVar26 = powf(1.0 - (fVar26 + fVar26 + -1.0),*(float *)(param_1 + 0xa8));
        fVar26 = (1.0 - fVar26) * 0.5 + 0.5;
      }
      else {
        fVar26 = powf(fVar26 + fVar26,*(float *)(param_1 + 0xa8));
        fVar26 = (fVar26 + 0.0) * 0.5;
      }
      *(float *)(param_1 + 0x100) = fVar26 + 0.0;
    }
    fVar18 = 0.0;
    fVar26 = 0.0;
    if ((*(char *)(lVar8 + 0x1d08) == '\x01') && (fVar26 = 0.0, *(char *)(lVar8 + 0x1d0a) == '\x01')
       ) {
      fVar26 = *(float *)(lVar8 + 0x1d0c);
      if (1.0 <= fVar26) {
        fVar26 = 1.0;
      }
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
    }
    fVar12 = *(float *)(param_1 + 0x70);
    fVar23 = *(float *)(param_1 + 0x90);
    dVar21 = *(double *)(param_1 + 0x88);
    dVar14 = *(double *)(param_1 + 0x68);
    dVar15 = *(double *)(param_1 + 0x80);
    dVar16 = *(double *)(param_1 + 0x58);
    dVar17 = *(double *)(param_1 + 0x60);
    dVar22 = *(double *)(param_1 + 0x78);
    dVar20 = (double)fVar26;
    if ((*(char *)(lVar8 + 0x1d08) != '\0') && (*(char *)(lVar8 + 0x1d0a) == '\x01')) {
      fVar18 = (float)FUN_148f00cd2(lVar8 + 0x1d08);
    }
    fVar12 = (fVar23 - fVar12) * fVar26 + fVar12;
    dVar14 = dVar14 + (dVar21 - dVar14) * dVar20;
    dVar16 = dVar16 + (dVar22 - dVar16) * dVar20;
    if (0.0 < *(float *)(param_1 + 0xd4)) {
      fVar26 = fVar18 - *(float *)(param_1 + 0x104);
      if (1e-08 <= fVar26 * fVar26) {
        param_2 = *(float *)(param_1 + 0xd4) * param_2;
        if (1.0 <= param_2) {
          param_2 = 1.0;
        }
        if (param_2 <= 0.0) {
          param_2 = 0.0;
        }
        fVar18 = *(float *)(param_1 + 0x104) + fVar26 * param_2;
      }
    }
    *(float *)(param_1 + 0x104) = fVar18;
    dVar20 = (dVar17 + (dVar15 - dVar17) * dVar20) * (double)fVar18;
    fVar26 = *(float *)(param_1 + 0xfc);
    fVar18 = (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x30)) * fVar26 +
             *(float *)(param_1 + 0x30);
    fVar18 = (((((fVar12 + *(float *)(param_1 + 0x50)) - fVar12) * fVar26 + fVar12) - fVar18) *
              *(float *)(param_1 + 0x100) + fVar18) * *(float *)(param_1 + 0xe8) + 1.0;
    dVar21 = *(double *)(param_1 + 0x48);
    dVar15 = *(double *)(param_1 + 0x40);
    dVar17 = *(double *)(param_1 + 0x38);
    dVar3 = (double)fVar26;
    dVar28 = (dVar21 - *(double *)(param_1 + 0x28)) * dVar3 + *(double *)(param_1 + 0x28);
    dVar22 = (dVar15 - *(double *)(param_1 + 0x20)) * dVar3 + *(double *)(param_1 + 0x20);
    dVar2 = (dVar17 - *(double *)(param_1 + 0x18)) * dVar3 + *(double *)(param_1 + 0x18);
    dVar27 = (double)*(float *)(param_1 + 0x100);
    dVar25 = (double)*(float *)(param_1 + 0xe8);
    *(float *)(param_3 + 0x60) = *(float *)(param_3 + 0x60) * fVar18;
    *(double *)(param_3 + 0xc0) =
         (((((dVar16 + dVar17) - dVar16) * dVar3 + dVar16) - dVar2) * dVar27 + dVar2) * dVar25 +
         *(double *)(param_3 + 0xc0);
    *(double *)(param_3 + 200) =
         (((((dVar20 + dVar15) - dVar20) * dVar3 + dVar20) - dVar22) * dVar27 + dVar22) * dVar25 +
         *(double *)(param_3 + 200);
    *(double *)(param_3 + 0xd0) =
         (((((dVar14 + dVar21) - dVar14) * dVar3 + dVar14) - dVar28) * dVar27 + dVar28) * dVar25 +
         *(double *)(param_3 + 0xd0);
    iVar5 = FUN_140540672(lVar9);
    fVar26 = *(float *)(param_3 + 0x68);
    if (1 < iVar5 - 1U) {
      fVar26 = tanf((fVar26 * 3.1415927) / 360.0);
      fVar26 = atanf(fVar26 * 9.0 * 0.0625);
      fVar26 = fVar26 * 114.59155;
    }
    lVar7 = FUN_140ce64d6(*(undefined8 *)(lVar7 + 0xa58));
    fVar23 = *(float *)(lVar7 + 100) * 0.5 + *(float *)(param_1 + 0xb8);
    fVar12 = 0.0;
    if (0.0 <= fVar23) {
      fVar12 = fVar23;
    }
    if (*(char *)(param_1 + 0xbc) != '\0') {
      fVar12 = fVar12 + *(float *)(lVar7 + 0x60);
    }
    fVar13 = tanf(fVar26 * 0.5 * 0.017453292);
    fVar26 = *(float *)(lVar7 + 0x60);
    fVar24 = fVar26 + fVar26 + *(float *)(param_1 + 0xb0) + *(float *)(param_1 + 0xb4);
    fVar26 = fVar26 + *(float *)(param_1 + 0xb0);
    fVar23 = 0.0;
    if (0.0 <= fVar26) {
      fVar23 = fVar26;
    }
    *(double *)(param_3 + 0xd0) = (double)fVar23 + *(double *)(param_3 + 0xd0);
    fVar26 = 0.0;
    if (0.0 <= fVar24) {
      fVar26 = fVar24;
    }
    dVar21 = (*(double *)(param_3 + 0xc0) - (double)fVar12) -
             (double)(float)(-(uint)(0.0 < fVar13) & (uint)(fVar26 / fVar13));
    *(double *)(param_3 + 0xc0) = dVar21;
    fVar26 = *(float *)(param_3 + 0x60);
    fVar23 = *(float *)(param_3 + 0x68);
    if (*(char *)(param_1 + 0xbd) == '\x01') {
      fVar13 = *(float *)(param_1 + 0xc4);
      dVar14 = (double)FUN_144719204(*(undefined8 *)(param_3 + 0x48),0x4076800000000000);
      dVar15 = (double)FUN_144719204(*(undefined8 *)(param_3 + 0x50),0x4076800000000000);
      dVar16 = sin(dVar14 * 0.017453292519943295);
      dVar14 = cos(dVar14 * 0.017453292519943295);
      dVar17 = sin(dVar15 * 0.017453292519943295);
      dVar15 = cos(dVar15 * 0.017453292519943295);
      dVar21 = (double)((fVar18 + -1.0) * (fVar13 * fVar12 - (float)dVar21));
      dVar22 = (double)*(float *)(param_1 + 0xc0);
      *(double *)(param_3 + 0x70) = dVar15 * dVar14 * dVar21 * dVar22 + *(double *)(param_3 + 0x70);
      *(double *)(param_3 + 0x78) = dVar17 * dVar14 * dVar21 * dVar22 + *(double *)(param_3 + 0x78);
      *(double *)(param_3 + 0x80) = dVar16 * dVar21 * dVar22 + *(double *)(param_3 + 0x80);
    }
    if (*(char *)(param_1 + 200) == '\x01') {
      dVar21 = *(double *)(param_3 + 0xc0);
      fVar13 = *(float *)(param_1 + 0xd0);
      dVar14 = (double)FUN_144719204(*(undefined8 *)(param_3 + 0x48),0x4076800000000000);
      dVar15 = (double)FUN_144719204(*(undefined8 *)(param_3 + 0x50),0x4076800000000000);
      dVar16 = sin(dVar14 * 0.017453292519943295);
      dVar14 = cos(dVar14 * 0.017453292519943295);
      dVar17 = sin(dVar15 * 0.017453292519943295);
      dVar15 = cos(dVar15 * 0.017453292519943295);
      dVar21 = (double)((fVar26 / (fVar23 * fVar18) + -1.0) * (fVar12 * fVar13 - (float)dVar21));
      dVar22 = (double)*(float *)(param_1 + 0xcc);
      *(double *)(param_3 + 0x70) = dVar15 * dVar14 * dVar21 * dVar22 + *(double *)(param_3 + 0x70);
      *(double *)(param_3 + 0x78) = dVar17 * dVar14 * dVar21 * dVar22 + *(double *)(param_3 + 0x78);
      *(double *)(param_3 + 0x80) = dVar16 * dVar21 * dVar22 + *(double *)(param_3 + 0x80);
    }
  }
LAB_1418dedfd:
  if ((local_f0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418df0d4 FUN_1418df0d4 body=1896 status=ok
// SIG undefined FUN_1418df0d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418df0d4(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  double *pdVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  float fVar25;
  float _X;
  double dVar26;
  float fVar27;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  wchar_t *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  code **local_170;
  undefined1 *local_168;
  code *local_160;
  code *local_158;
  double local_150;
  double local_148;
  code *local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (*(longlong *)(param_3 + 0x28) == 0) goto LAB_1418df5bf;
  lVar11 = FUN_140344898();
  lVar2 = *(longlong *)(param_3 + 0x28);
  if (((((lVar2 == 0) || (lVar11 == 0)) || (lVar14 = *(longlong *)(lVar2 + 0x10), lVar14 == 0)) ||
      ((*(int *)(lVar14 + 0x38) < *(int *)(lVar11 + 0x38) ||
       (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
        lVar11 + 0x30)))) ||
     ((*(longlong *)(lVar2 + 0xa58) == 0 ||
      (lVar11 = *(longlong *)(*(longlong *)(lVar2 + 0xa58) + 0x428), lVar11 == 0))))
  goto LAB_1418df5bf;
  lVar14 = *(longlong *)(lVar11 + 0x658);
  if (lVar14 == 0) {
    lVar14 = *(longlong *)(lVar11 + 0x660);
    if ((DAT_14c950c29 == '\x01') && (lVar14 != 0)) goto LAB_1418df777;
    if (lVar14 != 0) goto LAB_1418df1e1;
LAB_1418df660:
    local_118 = 0.0;
    dStack_110 = 0.0;
    local_128 = 0.0;
    uStack_120 = 0;
    local_138 = (code *)0x0;
    dStack_130 = 0.0;
    local_108 = 0;
    uVar16 = 0;
    uVar18 = 0;
  }
  else {
    if (DAT_14c950c29 == '\x01') {
LAB_1418df777:
      FUN_1456cec3c(lVar14);
    }
LAB_1418df1e1:
    if (DAT_14cb06da8 == 0) {
      local_170 = &local_138;
      local_138 = FUN_1449e2820;
      local_160 = FUN_14081d0ea;
      local_168 = &LAB_1464003b0;
      local_178 = &LAB_147d17bdf;
      local_180 = &LAB_1417edf22;
      local_188 = L"Engine";
      local_190 = 0;
      local_198 = 0x10000000;
      local_1a0 = 8;
      local_1a8 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) goto LAB_1418df660;
    plVar13 = *(longlong **)(lVar11 + 0x658);
    if (plVar13 == (longlong *)0x0) {
      plVar13 = *(longlong **)(lVar11 + 0x660);
      if ((DAT_14c950c29 == '\x01') && (plVar13 != (longlong *)0x0)) goto LAB_1418df784;
      if (plVar13 != (longlong *)0x0) goto LAB_1418df231;
LAB_1418df6cf:
      plVar13 = (longlong *)0x0;
    }
    else {
      if (DAT_14c950c29 != '\0') {
LAB_1418df784:
        FUN_1456cec3c(plVar13);
        if (DAT_14cb06da8 == 0) {
          local_170 = &local_138;
          local_138 = FUN_1449e2820;
          local_160 = FUN_14081d0ea;
          local_168 = &LAB_1464003b0;
          local_178 = &LAB_147d17bdf;
          local_180 = &LAB_1417edf22;
          local_188 = L"Engine";
          local_190 = 0;
          local_198 = 0x10000000;
          local_1a0 = 8;
          local_1a8 = 0x588;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
      }
LAB_1418df231:
      if ((*(int *)(plVar13[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
          DAT_14cb06da8 + 0x30)) goto LAB_1418df6cf;
    }
    (**(code **)(*plVar13 + 0x3d0))(plVar13,&local_138);
    uVar16 = (undefined4)uStack_120;
    uVar18 = (undefined4)((ulonglong)uStack_120 >> 0x20);
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xa58) + 0x1c8);
  pdVar12 = (double *)&DAT_14c846480;
  if (lVar2 != 0) {
    pdVar12 = (double *)(lVar2 + 0x240);
  }
  dVar7 = *pdVar12;
  dVar8 = pdVar12[1];
  dVar9 = pdVar12[2];
  dVar10 = pdVar12[3];
  dVar24 = *(double *)(param_3 + 0x30) - pdVar12[4];
  dVar23 = *(double *)(param_3 + 0x38) - pdVar12[5];
  dVar3 = *(double *)(param_3 + 0x40) - pdVar12[6];
  dVar21 = -dVar7;
  dVar4 = -dVar8;
  dVar19 = dVar9 * -1.0;
  dVar20 = dVar10 * 1.0;
  dVar26 = dVar24 * dVar19 - dVar21 * dVar3;
  dVar5 = dVar23 * dVar21 - dVar4 * dVar24;
  dVar6 = dVar3 * dVar4 - dVar19 * dVar23;
  dVar6 = dVar6 + dVar6;
  dVar26 = dVar26 + dVar26;
  dVar5 = dVar5 + dVar5;
  auVar1 = *(undefined1 (*) [16])(pdVar12 + 8);
  auVar22 = divpd(_DAT_149934d80,auVar1);
  dVar21 = dStack_110 -
           ((double)(-(ulonglong)(9.99999993922529e-09 < ABS(pdVar12[10])) &
                    (ulonglong)(1.0 / pdVar12[10])) *
            (dVar20 * dVar5 + dVar3 + (dVar26 * dVar21 - dVar6 * dVar4)) - local_128);
  dVar23 = local_118 -
           ((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar22._8_8_) *
            (dVar7 * dVar5 + dVar19 * dVar6 + dVar20 * dVar26 + dVar23) - dStack_130);
  dVar24 = (double)CONCAT44(uVar18,uVar16) -
           ((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar22._0_8_) *
            ((dVar5 * dVar4 - dVar26 * dVar19) + dVar20 * dVar6 + dVar24) - (double)local_138);
  dVar3 = dVar21 - (dStack_110 + dStack_110);
  dVar20 = dVar23 - (local_118 + local_118);
  dVar19 = dVar24 - ((double)CONCAT44(uVar18,uVar16) + (double)CONCAT44(uVar18,uVar16));
  fVar27 = (float)SQRT(dVar3 * dVar3 + dVar19 * dVar19 + dVar20 * dVar20);
  dVar3 = *(double *)(param_3 + 0x48);
  local_158 = local_138;
  local_f8 = dVar7;
  dStack_f0 = dVar8;
  local_e8 = dVar9;
  dStack_e0 = dVar10;
  FUN_1448052ee(&local_f8,&local_150);
  fVar25 = (float)(dVar3 - local_150);
  dVar3 = *(double *)(param_3 + 0x50);
  local_f8 = dVar7;
  dStack_f0 = dVar8;
  local_e8 = dVar9;
  dStack_e0 = dVar10;
  FUN_1448052ee(&local_f8,&local_150);
  fVar17 = cosf((float)(dVar3 - local_148) * 0.017453292);
  fVar17 = (fVar17 + 1.0) * 0.5;
  uVar15 = -(uint)(0.0 < fVar25);
  _X = (fVar25 + 90.0) * 0.017453292;
  fVar25 = cosf(_X);
  fVar25 = fVar25 * (((float)SQRT(dVar21 * dVar21 + dVar24 * dVar24 + dVar23 * dVar23) - fVar27) *
                     (float)(uVar15 & (uint)(1.0 - fVar17) | ~uVar15 & (uint)fVar17) + fVar27);
  fVar17 = sinf(_X);
  fVar17 = (float)((double)fVar17 * *(double *)(param_3 + 0xd0));
  *(double *)(param_3 + 0xd0) = (double)SQRT(fVar25 * fVar25 + fVar17 * fVar17);
LAB_1418df5bf:
  if ((local_d0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418df83e FUN_1418df83e body=595 status=ok
// SIG undefined FUN_1418df83e(void)

void FUN_1418df83e(longlong *param_1,undefined8 param_2,longlong param_3,double *param_4,
                  undefined8 param_5,longlong param_6,float param_7)

{
  double dVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_c8 [32];
  double *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  double dStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  fVar3 = powf(1.0 - param_7,*(float *)((longlong)param_1 + 0xc));
  fVar3 = 1.0 - (1.0 - fVar3);
  local_58 = DAT_14c846508;
  local_68 = DAT_14c8464f8;
  dStack_60 = param_4[4];
  FUN_1401c9a0e(&local_68,&local_80,param_1 + 4);
  dVar1 = (double)fVar3;
  dVar5 = local_78 * dVar1 + DAT_14c8464e8;
  dVar4 = local_70 * dVar1 + DAT_14c8464f0;
  *param_4 = local_80 * dVar1 + DAT_14c8464e0 + *param_4;
  param_4[1] = dVar5 + param_4[1];
  param_4[2] = dVar4 + param_4[2];
  if ((char)param_1[7] == '\x01') {
    dVar5 = ((double)*(float *)((longlong)param_1 + 0x3c) - param_4[3]) * dVar1 + param_4[3];
  }
  else {
    dVar4 = *(double *)(param_6 + 0x28);
    dVar5 = *(double *)(param_6 + 0x18) * dVar1 + param_4[3];
    param_4[4] = *(double *)(param_6 + 0x20) * dVar1 + param_4[4];
    param_4[5] = dVar4 * dVar1 + param_4[5];
  }
  param_4[3] = dVar5;
  *(float *)(param_4 + 6) = fVar3 * *(float *)(param_6 + 0x30) + *(float *)(param_4 + 6);
  dVar4 = *(double *)(param_6 + 0x978);
  param_4[0x12e] = *(double *)(param_6 + 0x970) * dVar1 + param_4[0x12e];
  param_4[0x12f] = dVar4 * dVar1 + param_4[0x12f];
  dVar4 = *(double *)(param_6 + 0x988);
  param_4[0x130] = dVar1 * *(double *)(param_6 + 0x980) + param_4[0x130];
  param_4[0x131] = dVar4 * dVar1 + param_4[0x131];
  pdVar2 = param_4;
  if ((param_3 != 0) &&
     (pdVar2 = (double *)(*(longlong *)(param_3 + 0x28) + 200), *(longlong *)(param_3 + 0x28) == 0))
  {
    pdVar2 = param_4;
  }
  local_88 = pdVar2[2];
  local_98 = *(undefined4 *)pdVar2;
  uStack_94 = *(undefined4 *)((longlong)pdVar2 + 4);
  uStack_90 = *(undefined4 *)(pdVar2 + 1);
  uStack_8c = *(undefined4 *)((longlong)pdVar2 + 0xc);
  local_a8 = param_4;
  (**(code **)(*param_1 + 0x58))(param_1,param_2,param_3);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418dfa92 FUN_1418dfa92 body=60 status=ok
// SIG undefined FUN_1418dfa92(void)

void FUN_1418dfa92(longlong param_1)

{
  FUN_140db05e8(param_1 + 0x2838,0);
  *(undefined8 *)(param_1 + 0x2500) = 0;
  FUN_140283eaa(param_1 + 0x2568,0);
  FUN_140521022(param_1);
  return;
}



// FUNCTION 1418dface FUN_1418dface body=390 status=ok
// SIG undefined FUN_1418dface(void)

ulonglong FUN_1418dface(longlong param_1,float param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  double dVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_2 = param_2 + *(float *)(param_1 + 0x2808);
  *(float *)(param_1 + 0x2808) = param_2;
  param_2 = param_2 * *(float *)(param_1 + 0x280c);
  if (1.0 <= param_2) {
    *(undefined1 *)(param_1 + 0x2810) = 1;
    param_2 = 1.0;
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    dVar4 = (double)param_2;
    local_48 = (*(double *)(param_1 + 0x2818) - *(double *)(param_1 + 0x27f0)) * dVar4 +
               *(double *)(param_1 + 0x27f0);
    local_40 = (*(double *)(param_1 + 0x2820) - *(double *)(param_1 + 0x27f8)) * dVar4 +
               *(double *)(param_1 + 0x27f8);
    local_38 = (*(double *)(param_1 + 0x2828) - *(double *)(param_1 + 0x2800)) * dVar4 +
               *(double *)(param_1 + 0x2800);
    FUN_141226a1c();
  }
  cVar1 = *(char *)(param_1 + 0x2810);
  if (cVar1 == '\x01') {
    plVar2 = *(longlong **)(param_1 + 0x1c8);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = FUN_140c7aaec();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        *(undefined1 *)(plVar2 + 0xec) = 0;
        (**(code **)(*plVar2 + 0x938))(plVar2,2,2);
      }
    }
    FUN_1401cb356();
    local_58 = *(undefined8 *)(param_1 + 0x27e0);
    local_50 = *(longlong *)(param_1 + 0x27e8);
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_58);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return (CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) ^ 1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418dfc56 FUN_1418dfc56 body=179 status=ok
// SIG undefined FUN_1418dfc56(void)

undefined8 FUN_1418dfc56(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((DAT_14cbc55d0 != 0) && ((longlong)*(int *)(param_1 + 0x4e0) != 0)) {
    uVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x4d8) + 0x68 + uVar2) == DAT_14cbc55d0) {
        if ((int)(uVar2 >> 3) * -0xf0f0f0f != -1) {
          local_18 = DAT_14c9a6400;
          local_10 = 0xffffffff;
          local_28 = DAT_14cbc55d0;
          local_20 = 0xffffffff;
          uVar1 = FUN_1400b1204(param_1 + 0x4d8);
          goto LAB_1418dfcee;
        }
        break;
      }
      uVar2 = uVar2 + 0x88;
    } while ((longlong)*(int *)(param_1 + 0x4e0) * 0x88 != uVar2);
  }
  uVar1 = 0;
LAB_1418dfcee:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418dfd0a FUN_1418dfd0a body=87 status=ok
// SIG undefined FUN_1418dfd0a(void)

void FUN_1418dfd0a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_140907f04();
  lVar1 = param_2 + 0x18;
  FUN_140bf2acc(param_2,lVar1,&DAT_14cbc55d0,1);
  FUN_140bf2acc(param_2,lVar1,&DAT_14cbc55e0,0);
  FUN_140bf2acc(param_2,lVar1,&DAT_14cbc55e8,0);
  return;
}



// FUNCTION 1418dfd62 FUN_1418dfd62 body=40 status=ok
// SIG undefined FUN_1418dfd62(void)

void FUN_1418dfd62(undefined8 param_1,longlong param_2)

{
  FUN_140907f04();
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbc54b0,0);
  return;
}



// FUNCTION 1418dfd8a FUN_1418dfd8a body=148 status=ok
// SIG undefined FUN_1418dfd8a(void)

void FUN_1418dfd8a(longlong param_1,longlong param_2)

{
  FUN_140aebdb2();
  if (*(char *)(param_2 + 0x10) == '\0') {
    if (1e-08 < ABS(*(float *)(param_1 + 0x464))) {
      *(bool *)(param_1 + 0x46a) = 0.0 < *(float *)(param_1 + 0x464);
    }
    if (1e-08 < ABS(*(float *)(param_1 + 0x460))) {
      *(bool *)(param_1 + 0x469) = 0.0 < *(float *)(param_1 + 0x460);
    }
    if (1e-08 < ABS(*(float *)(param_1 + 0x45c))) {
      *(bool *)(param_1 + 0x468) = 0.0 < *(float *)(param_1 + 0x45c);
    }
  }
  return;
}



// FUNCTION 1418dfe1e FUN_1418dfe1e body=66 status=ok
// SIG undefined FUN_1418dfe1e(void)

void FUN_1418dfe1e(undefined8 param_1,longlong param_2)

{
  FUN_140907f04();
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbc5600,1);
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbc5608,1);
  return;
}



// FUNCTION 1418dfe60 FUN_1418dfe60 body=157 status=ok
// SIG undefined FUN_1418dfe60(void)

void FUN_1418dfe60(longlong param_1,char param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = (char *)(param_1 + 0x58);
  cVar2 = *(char *)(param_1 + 0x58);
  local_28 = param_3;
  if (param_2 == '\0') {
    FUN_1400bc8c2(pcVar1,&local_28);
  }
  else {
    FUN_1400bc96c(pcVar1,&local_28);
    if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0))
    {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))();
    }
  }
  if (((cVar2 != *pcVar1) && (*(longlong *)(param_1 + 0x18) != 0)) &&
     (*(longlong *)(param_1 + 0x20) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418dff10 FUN_1418dff10 body=150 status=ok
// SIG undefined FUN_1418dff10(void)

void FUN_1418dff10(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong *plVar3;
  
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x28) = param_2;
  if ((param_2 == 0) || ((bVar2 & 1) == 0)) {
    *(longlong *)(param_1 + 0x18) = param_2;
    if (param_2 == 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      return;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x18) = param_2;
  }
  uVar1 = FUN_140338614();
  plVar3 = (longlong *)FUN_144718840(param_2,uVar1);
  *(longlong **)(param_1 + 0x20) = plVar3;
  if ((plVar3 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001418dff75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x78))(plVar3);
    return;
  }
  return;
}



// FUNCTION 1418dffa6 FUN_1418dffa6 body=118 status=ok
// SIG undefined FUN_1418dffa6(void)

undefined8 * FUN_1418dffa6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5dfa60;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_14075386c(param_1 + 0x81);
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407538a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418e001c FUN_1418e001c body=370 status=ok
// SIG undefined FUN_1418e001c(void)

undefined8 * FUN_1418e001c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1418e0190 FUN_1418e0190 body=101 status=ok
// SIG undefined FUN_1418e0190(void)

void FUN_1418e0190(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9631e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418e01f6 FUN_1418e01f6 body=264 status=ok
// SIG undefined FUN_1418e01f6(void)

void FUN_1418e01f6(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_1406337e2();
  if (*(int *)(param_1 + 0xfc) == 0) {
    return;
  }
  puVar1 = (uint *)(param_1 + 0xf8);
  uVar2 = *puVar1;
  if ((int)uVar2 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar2) {
    return;
  }
  lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  if (lVar4 == 0) {
    return;
  }
  if (*(int *)(lVar4 + 0x10) != *(int *)(param_1 + 0xfc)) {
    return;
  }
  if ((*(uint *)(lVar4 + 8) & 0x10200000) != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    lVar4 = FUN_14479d2ce(puVar1);
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_14480f766(lVar4 + 0x30);
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    uVar2 = *puVar1;
    lVar4 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1418e02b4;
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_1 + 0xfc) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
       ) {
      lVar4 = *plVar3;
      goto LAB_1418e02b4;
    }
  }
  lVar4 = 0;
LAB_1418e02b4:
  FUN_14480f766(lVar4 + 0x60);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  return;
}



// FUNCTION 1418e02fe FUN_1418e02fe body=164 status=ok
// SIG undefined FUN_1418e02fe(void)

longlong FUN_1418e02fe(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar1 + 0x128);
  if (lVar5 == 0) {
    uVar4 = FUN_1406ef318();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x128) = lVar5;
  }
  if (*(longlong *)(lVar1 + 0x130) != 0) {
    return *(longlong *)(lVar1 + 0x130);
  }
  if (lVar5 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar1 + 0x120) != 0) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x120));
    }
    *(longlong *)(lVar1 + 0x130) = lVar5;
    return lVar5;
  }
  return 0;
}



// FUNCTION 1418e03a2 FUN_1418e03a2 body=576 status=ok
// SIG undefined FUN_1418e03a2(void)

float FUN_1418e03a2(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_1407e8892();
  lVar11 = *(longlong *)(lVar3 + 0xa0);
  if (lVar11 == 0) {
    uVar6 = FUN_1465f39ea();
    lVar11 = FUN_14477b664(uVar6);
    *(longlong *)(lVar3 + 0xa0) = lVar11;
  }
  lVar4 = *(longlong *)(lVar3 + 0xa8);
  if (lVar4 == 0) {
    fVar13 = 0.0;
    if ((lVar11 == 0) || (*(longlong *)(lVar3 + 0x98) == 0)) goto LAB_1418e0527;
    plVar5 = *(longlong **)(lVar11 + 0xb8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar2 == '\0')) {
      *(undefined8 *)(lVar3 + 0xa8) = 0;
      goto LAB_1418e0527;
    }
    uVar6 = (**(code **)(*plVar5 + 0x110))(plVar5);
    lVar4 = FUN_144aff482(uVar6,(longlong *)(lVar3 + 0x98));
    *(longlong *)(lVar3 + 0xa8) = lVar4;
    if (lVar4 == 0) goto LAB_1418e0527;
  }
  fVar13 = 0.0;
  if ((longlong)*(int *)(lVar4 + 0x20) != 0) {
    lVar11 = (longlong)*(int *)(lVar4 + 0x20) * 0x68;
    plVar12 = (longlong *)(*(longlong *)(lVar4 + 0x18) + 0x40);
    plVar5 = (longlong *)0x0;
    do {
      iVar9 = (int)plVar12[-3] + -1;
      if ((int)plVar12[-3] == 0) {
        iVar9 = 0;
      }
      FUN_1446f82e2(&local_68,iVar9,plVar12[-4],1);
      if (local_68 == *param_3) {
        plVar5 = plVar12;
      }
      plVar12 = plVar12 + 0xd;
      lVar11 = lVar11 + -0x68;
    } while (lVar11 != 0);
    if ((plVar5 != (longlong *)0x0) && ((longlong)(int)plVar5[1] != 0)) {
      lVar11 = *plVar5;
      lVar3 = (longlong)(int)plVar5[1] * 0x18;
      iVar9 = 0;
      iVar10 = 0;
      do {
        lVar4 = FUN_1408d7900(lVar11);
        if (lVar4 != 0) {
          puVar8 = *(undefined4 **)(lVar4 + 8);
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = &DAT_14c9485f0;
          }
          FUN_1447325ac(puVar8,&local_68,1);
          plVar5 = (longlong *)FUN_1403363fe(param_1,&local_68);
          if ((plVar5 != (longlong *)0x0) && (*plVar5 != 0)) {
            bVar1 = *(byte *)(*plVar5 + 0x4a0);
            if ((bVar1 != 0) && (lVar4 = FUN_1403362f0(param_1,param_2,plVar5), lVar4 != 0)) {
              uVar7 = (uint)bVar1;
              if ((*(char *)(lVar4 + 0x11) == '\0') &&
                 (uVar7 = (uint)bVar1, *(char *)(lVar4 + 0x12) == '\0')) {
                uVar7 = (*(int *)(lVar4 + 0x10) + (uint)((char)*(int *)(lVar4 + 0x10) == '\0') &
                        0xff) - 1;
              }
              iVar9 = iVar9 + (uint)bVar1;
              iVar10 = iVar10 + uVar7;
            }
          }
        }
        lVar11 = lVar11 + 0x18;
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != 0);
      if (iVar9 != 0) {
        fVar13 = (float)iVar10 / (float)iVar9;
      }
    }
  }
LAB_1418e0527:
  if ((local_60 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar13;
}



// FUNCTION 1418e05e4 FUN_1418e05e4 body=40 status=ok
// SIG undefined FUN_1418e05e4(void)

void FUN_1418e05e4(longlong param_1)

{
  FUN_140f2fc20();
  FUN_140e3d9d4(param_1 + 0x3ae0,*(undefined8 *)(&DAT_00001ce8 + param_1));
  return;
}



// FUNCTION 1418e060c FUN_1418e060c body=234 status=ok
// SIG undefined FUN_1418e060c(void)

ulonglong FUN_1418e060c(longlong *param_1,int param_2,char *param_3)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  if (param_2 < 2) {
    bVar2 = (**(code **)(*param_1 + 0xe78))(param_1,0x10000);
    uVar7 = FUN_14075fe08(param_1,0x10000);
    bVar3 = FUN_14075fa88(param_1 + 0x857,uVar7);
    bVar5 = 1;
    uVar6 = CONCAT71((int7)((ulonglong)(param_1 + 0x857) >> 8),1);
    if ((char)param_1[0x845] == '\x01') {
      if ((longlong *)param_1[0x3d7] == (longlong *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar4 = (**(code **)(*(longlong *)param_1[0x3d7] + 0xa8))();
        uVar6 = (ulonglong)uVar4;
      }
    }
    if (((param_1[0x8b1] != 0) && (*(char *)(param_1[0x8b1] + 0x1a) == '\x01')) &&
       (lVar1 = param_1[0x841], lVar1 != 0)) {
      bVar5 = (**(code **)(*(longlong *)(lVar1 + 0x3b48) + 0x60))(lVar1 + 0x3b48);
      bVar5 = bVar5 ^ 1;
    }
    if ((bVar3 & bVar2) == 1) {
      bVar5 = (byte)uVar6 & bVar5;
      uVar6 = CONCAT71((int7)(uVar6 >> 8),bVar5);
      if ((param_3 == (char *)0x0) || (bVar5 != 0)) goto LAB_1418e0690;
    }
    else if (param_3 != (char *)0x0) {
      *param_3 = bVar2 * '\x02' + '\x01';
    }
  }
  uVar6 = 0;
LAB_1418e0690:
  return uVar6 & 0xffffffff;
}



// FUNCTION 1418e06f6 FUN_1418e06f6 body=76 status=ok
// SIG undefined FUN_1418e06f6(void)

void FUN_1418e06f6(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = param_1[0x8d7];
  if (param_3 == '\0') {
    FUN_1400bc8c2(param_1 + 0x8d7);
  }
  else {
    FUN_1400bc96c();
  }
  if ((char)lVar1 != (char)param_1[0x8d7]) {
                    /* WARNING: Could not recover jumptable at 0x0001418e0732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xef8))(param_1);
    return;
  }
  return;
}



// FUNCTION 1418e0742 FUN_1418e0742 body=46 status=ok
// SIG undefined FUN_1418e0742(void)

undefined8 FUN_1418e0742(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(&DAT_00001ce8 + param_1);
  lVar2 = FUN_14010113e(lVar1);
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x21f0) != lVar1)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1418e0770 FUN_1418e0770 body=266 status=ok
// SIG undefined FUN_1418e0770(void)

void FUN_1418e0770(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x43d8) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x43d8) + 0x20;
    lVar2 = FUN_14485c28e(lVar4);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_14485c28e(lVar4);
    }
    if (lVar2 == param_2) {
      *(undefined1 *)(param_1 + 0x4398) = *param_3;
      *(undefined1 *)(param_1 + 0x4388) = 0;
      *(undefined8 *)(param_1 + 0x4390) = 0;
      uVar5 = 0;
      if ((*(longlong *)(param_1 + 0xa8) != 0) &&
         (1 < *(byte *)(*(longlong *)(param_1 + 0xa8) + 0x178))) {
        uVar5 = *(undefined4 *)(param_1 + 0x43f4);
      }
      *(undefined4 *)(param_1 + 0x439c) = uVar5;
      uVar1 = *(undefined8 *)(param_3 + 0x38);
      *(undefined8 *)(param_1 + 0x43a0) = *(undefined8 *)(param_3 + 0x30);
      *(undefined8 *)(param_1 + 0x43a8) = uVar1;
      *(undefined8 *)(param_1 + 0x43b0) = *(undefined8 *)(param_3 + 0x40);
      if ((*(longlong *)(&DAT_00001ce8 + param_1) == 0) ||
         (lVar2 = *(longlong *)(*(longlong *)(&DAT_00001ce8 + param_1) + 0x1c8), lVar2 == 0)) {
        puVar3 = &DAT_14c8464e0;
        uVar5 = (undefined4)DAT_14c8464f0;
        uVar6 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar5 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
        uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
        puVar3 = (undefined8 *)(lVar2 + 0x260);
      }
      uVar1 = puVar3[1];
      *(undefined8 *)(param_1 + 0x43b8) = *puVar3;
      *(undefined8 *)(param_1 + 0x43c0) = uVar1;
      *(ulonglong *)(param_1 + 0x43c8) = CONCAT44(uVar6,uVar5);
      *(bool *)(param_1 + 0x4399) = (&DAT_00001100)[param_1] == '\v';
    }
  }
  return;
}



// FUNCTION 1418e087a FUN_1418e087a body=836 status=ok
// SIG undefined FUN_1418e087a(void)

void FUN_1418e087a(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  int local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong **)(param_1 + 0x4208) != (longlong *)0x0) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x4208) + 0x700))(), cVar6 != '\0')) {
    *(byte *)(param_1 + 0x4458) = *(byte *)(param_1 + 0x4458) & 0xfe;
  }
  if ((longlong)*(int *)(param_1 + 0x4658) != 0) {
    lVar7 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 18000) + 8 + lVar7) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 18000) + lVar7) != 0)) {
        FUN_1404f401e(param_1 + 18000,param_1);
        break;
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x4658) * 0x10 != lVar7);
  }
  if (*(longlong **)(param_1 + 0x4208) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x4208) + 0xbb0))();
  }
  if (((*(longlong *)(param_1 + 0x4420) != 0) && (*(longlong *)(param_1 + 0x4428) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x4428) + 8))) {
    FUN_1401cb356();
    local_60 = *(undefined8 *)(param_1 + 0x4420);
    local_58 = *(longlong *)(param_1 + 0x4428);
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 0xc) = *(int *)(local_58 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_60);
  }
  *(undefined1 *)(param_1 + 0x4418) = 1;
  lVar7 = FUN_1407e8892();
  uVar8 = FUN_1401cb356();
  uVar2 = *(undefined4 *)(lVar7 + 0x120);
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  FUN_1446efa72(&local_80,0,3,0x10);
  puVar5 = local_80;
  local_78 = 3;
  *local_80 = &PTR_LAB_149e02020;
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
  local_80[2] = lVar9;
  *local_80 = &PTR_FUN_14b964750;
  local_80[3] = 0;
  iVar10 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_80 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar10 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar10 = *(int *)(lVar7 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar7 + 0x10) = iVar11;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar11;
      }
    }
  }
  *(int *)((longlong)puVar5 + 0x1c) = iVar10;
  puVar5[4] = FUN_140f8f4fa;
  *(undefined4 *)(puVar5 + 5) = 0;
  local_88 = uVar2;
  FUN_1405f67fc(uVar8,&local_70,&local_80,L"UOakCharacterMovementComponent.EndDashWindow");
  *(undefined8 *)(param_1 + 0x4420) = local_70;
  local_70 = 0;
  plVar4 = *(longlong **)(param_1 + 0x4428);
  *(longlong **)(param_1 + 0x4428) = local_68;
  local_68 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
  }
  if (local_78 != 0) {
    if (local_80 == (undefined8 *)0x0) goto LAB_1418e0a90;
    (**(code **)*local_80)(local_80,0);
    FUN_1446efa72(&local_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_80 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1418e0a90:
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418e0bc0 FUN_1418e0bc0 body=62 status=ok
// SIG undefined FUN_1418e0bc0(void)

void FUN_1418e0bc0(longlong param_1,byte param_2)

{
  FUN_14020198e();
  *(uint *)(param_1 + 0x36a8) = *(uint *)(param_1 + 0x36a8) & 0xfffffffe | (uint)(param_2 >> 4 & 1);
  *(byte *)(param_1 + 0x4234) = param_2 >> 5 & 1;
  return;
}



// FUNCTION 1418e0bfe FUN_1418e0bfe body=318 status=ok
// SIG undefined FUN_1418e0bfe(void)

float FUN_1418e0bfe(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  if (*(longlong *)(param_1 + 0x1cf0) == 0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = *(float *)(*(longlong *)(param_1 + 0x1cf0) + 0x1c);
  }
  if (*(longlong *)(param_1 + 0x43d8) == 0) {
    return fVar5;
  }
  lVar3 = *(longlong *)(param_1 + 0x43d8) + 0x20;
  lVar1 = FUN_14485c28e(lVar3);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_14485c28e(lVar3);
  }
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) != '\x01') {
      return fVar5;
    }
    lVar3 = param_1 + 0x3210;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  }
  lVar2 = FUN_140153468(lVar3);
  if (lVar2 == 0) {
    return fVar5;
  }
  if ((*(byte *)(lVar3 + 0x298) & 2) != 0) {
    return fVar5;
  }
  if (*(longlong *)(param_1 + 0x110) == 0) {
    return fVar5;
  }
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) != '\x01') {
      return fVar5;
    }
    lVar3 = param_1 + 0x3210;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  }
  lVar3 = FUN_140153468(lVar3);
  if (lVar1 == 0) {
    return fVar5;
  }
  if (lVar3 == 0) {
    return fVar5;
  }
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) != '\x01') {
      lVar3 = 0;
      goto LAB_1418e0ce9;
    }
    lVar3 = param_1 + 0x3210;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  }
  lVar3 = FUN_140153468(lVar3);
LAB_1418e0ce9:
  fVar4 = fVar5;
  if ((lVar3 == lVar1) &&
     (fVar4 = *(float *)(*(longlong *)(param_1 + 0x43d8) + 0x70), fVar4 <= fVar5)) {
    fVar4 = fVar5;
  }
  return fVar4;
}



// FUNCTION 1418e0d3c FUN_1418e0d3c body=255 status=ok
// SIG undefined FUN_1418e0d3c(void)

void FUN_1418e0d3c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_1403e62ce();
  *(byte *)(param_1 + 0x449) =
       *(byte *)(param_1 + 0x449) & 0xfd |
       *(char *)(*(longlong *)(param_2 + 0x11e8) + 0x36a8) * '\x02' & 2U;
  lVar1 = *(longlong *)(&DAT_00006850 + param_2);
  uVar2 = *(uint *)(lVar1 + 0x44b8) & 1;
  uVar3 = *(uint *)(param_1 + 0x550);
  *(uint *)(param_1 + 0x550) = uVar3 & 0xfffffffe | uVar2;
  uVar3 = (uVar3 & 0xfffffffc | uVar2) + (uint)*(byte *)(lVar1 + 0x4234) * 2;
  *(uint *)(param_1 + 0x550) = uVar3;
  uVar3 = (uVar3 & 0xfffffffb) + (*(uint *)(lVar1 + 0x4458) & 1) * 4;
  *(uint *)(param_1 + 0x550) = uVar3;
  uVar3 = (uVar3 & 0xffffffc7) + (*(uint *)(lVar1 + 0x4448) & 7) * 8;
  *(uint *)(param_1 + 0x550) = uVar3;
  uVar3 = uVar3 & 0xffffffbf | (uint)*(byte *)(lVar1 + 0x4500) << 6;
  *(uint *)(param_1 + 0x550) = uVar3;
  *(uint *)(param_1 + 0x550) = uVar3 & 0xffffff7f | (uint)*(byte *)(lVar1 + 0x4501) << 7;
  *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(lVar1 + 0x4504);
  *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(lVar1 + 0x4508);
  *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(lVar1 + 0x450c);
  return;
}



// FUNCTION 1418e0e3c FUN_1418e0e3c body=341 status=ok
// SIG undefined FUN_1418e0e3c(void)

undefined8 * FUN_1418e0e3c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *_Dst;
  undefined8 *puVar5;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x560);
  memset(_Dst,0,0x560);
  FUN_1410f82e2(_Dst);
  *(undefined1 *)(_Dst + 0x8d) = 0;
  _Dst[0x8a] = 0;
  _Dst[0x8b] = 0;
  _Dst[0x90] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _Dst[0x8e] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _Dst[0x8f] = uVar1;
  _Dst[0x93] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _Dst[0x91] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _Dst[0x92] = uVar1;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(_Dst + 0x94) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)_Dst + 0x4a4) = uVar2;
  *(undefined4 *)(_Dst + 0x95) = uVar3;
  *(undefined4 *)((longlong)_Dst + 0x4ac) = uVar4;
  _Dst[0x96] = DAT_14c8464f0;
  _Dst[0x97] = 0;
  *(undefined1 *)(_Dst + 0x9a) = 0;
  *(undefined1 *)(_Dst + 0x9b) = 0;
  *(undefined8 *)((longlong)_Dst + 0x4dc) = 0;
  _Dst[0xa3] = 0;
  *(undefined4 *)(_Dst + 0xa4) = 0;
  _Dst[0x9f] = 0;
  _Dst[0xa0] = 0;
  *(undefined8 *)((longlong)_Dst + 0x524) = 0xffffffff00000080;
  *(undefined4 *)((longlong)_Dst + 0x52c) = 0;
  _Dst[0xa7] = 0;
  *(undefined4 *)(_Dst + 0xa8) = 0;
  _Dst[0xa9] = 0;
  *_Dst = &PTR_FUN_14b964140;
  *(undefined8 *)((longlong)_Dst + 0x554) = 0xbf800000bf800000;
  *(undefined4 *)((longlong)_Dst + 0x55c) = 0xbf800000;
  *param_2 = _Dst;
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[1] = &DAT_100000001;
  *puVar5 = &PTR_LAB_14b964830;
  puVar5[2] = _Dst;
  param_2[1] = puVar5;
  return param_2;
}



// FUNCTION 1418e0f92 FUN_1418e0f92 body=311 status=ok
// SIG undefined FUN_1418e0f92(void)

undefined8 FUN_1418e0f92(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1418e10c2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1418e10c2;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_1418e10c2:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1418e106b;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_1418e106b;
    }
  }
  uVar6 = 0;
LAB_1418e106b:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e10ca FUN_1418e10ca body=594 status=ok
// SIG undefined FUN_1418e10ca(void)

void FUN_1418e10ca(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
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
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x18);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x14 + lVar13 * 0x18) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x10 + lVar13 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_1418e12d3;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_1418e12d3:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e131e FUN_1418e131e body=353 status=ok
// SIG undefined FUN_1418e131e(void)

void FUN_1418e131e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418e13a5;
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
LAB_1418e13a5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418e1480 FUN_1418e1480 body=101 status=ok
// SIG undefined FUN_1418e1480(void)

void FUN_1418e1480(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9646e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418e14e6 FUN_1418e14e6 body=101 status=ok
// SIG undefined FUN_1418e14e6(void)

void FUN_1418e14e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b964750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418e154c FUN_1418e154c body=29 status=ok
// SIG undefined FUN_1418e154c(void)

undefined8 FUN_1418e154c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418e156a FUN_1418e156a body=623 status=ok
// SIG undefined FUN_1418e156a(void)

void FUN_1418e156a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  code **local_120;
  code *local_118;
  code *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined1 local_f0 [4];
  undefined1 local_ec;
  code *local_e8 [2];
  longlong local_d8;
  longlong lStack_d0;
  double local_c8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar1 = *(longlong *)(param_1[0x1c] + 0x110);
  if (lVar1 == 0) {
    local_108 = 0x47efffffe0000000;
    uStack_100 = 0x47efffffe0000000;
    local_f8 = 3.4028234663852886e+38;
  }
  else {
    local_108 = *(undefined8 *)(lVar1 + 0x260);
    uStack_100 = *(undefined8 *)(lVar1 + 0x268);
    local_f8 = *(double *)(lVar1 + 0x270);
  }
  lVar1 = *(longlong *)(param_2 + 0xa8);
  if (lVar1 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_120 = local_e8;
      local_e8[0] = FUN_141030f22;
      local_110 = FUN_14081d0ea;
      local_118 = FUN_142b4754c;
      local_128 = &LAB_1483e40eb;
      local_130 = &LAB_146486986;
      local_138 = L"Engine";
      local_140 = 0;
      local_148 = 0x10000005;
      local_150 = (undefined1 *)CONCAT44(local_150._4_4_,8);
      local_158 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) {
      if (*(longlong *)(lVar1 + 0x3a8) != 0) {
        local_150 = local_f0;
        local_ec = 0;
        local_158 = 0x13;
        FUN_140b9461a(param_1,local_e8,*(longlong *)(lVar1 + 0x3a8),&local_108);
        if (local_28 == '\0') {
          if ((double)((float)*(double *)
                               (*(longlong *)(*(longlong *)(&DAT_00001ce8 + param_1[0x1c]) + 0x438)
                               + 0x290) *
                      *(float *)(*(longlong *)(*(longlong *)(&DAT_00001ce8 + param_1[0x1c]) + 0x438)
                                + 0x640)) + local_f8 < local_c8) {
            (**(code **)(*param_1 + 0x60))(param_1,1);
            param_1[0x12] = (longlong)local_c8;
            param_1[0x10] = local_d8;
            param_1[0x11] = lStack_d0;
            *(undefined4 *)(param_1 + 0x13) = local_a8;
            *(undefined4 *)((longlong)param_1 + 0x9c) = uStack_a4;
            *(undefined4 *)(param_1 + 0x14) = uStack_a0;
            *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_9c;
            param_1[0x15] = local_98;
          }
        }
      }
      if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_178);
}



// FUNCTION 1418e17f0 FUN_1418e17f0 body=423 status=ok
// SIG undefined FUN_1418e17f0(void)

void FUN_1418e17f0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  code **local_120;
  code *local_118;
  code *local_110;
  undefined1 local_100 [4];
  undefined1 local_fc;
  code *local_f8 [20];
  float local_58;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar1 = *(longlong *)(param_2 + 0xa8);
  if (lVar1 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_120 = local_f8;
      local_f8[0] = FUN_141030f22;
      local_110 = FUN_14081d0ea;
      local_118 = FUN_142b4754c;
      local_128 = &LAB_1483e40eb;
      local_130 = &LAB_146486986;
      local_138 = L"Engine";
      local_140 = 0;
      local_148 = 0x10000005;
      local_150 = (undefined1 *)CONCAT44(local_150._4_4_,8);
      local_158 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if ((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) {
      if (*(longlong *)(lVar1 + 0x3a8) != 0) {
        local_150 = local_100;
        local_fc = 0;
        local_158 = 0x11;
        FUN_140b9461a(param_1,local_f8,*(longlong *)(lVar1 + 0x3a8),param_3);
        if ((local_38 == '\0') && (0.0 < local_58)) {
          *param_4 = 1;
        }
      }
      if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_178);
}



// FUNCTION 1418e19b8 FUN_1418e19b8 body=370 status=ok
// SIG undefined FUN_1418e19b8(void)

undefined8 FUN_1418e19b8(longlong param_1,double *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double *pdVar14;
  uint uVar15;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  
  dVar12 = (double)(DAT_14c707940 ^ (ulonglong)auStack_a8);
  lVar1 = *(longlong *)(param_1 + -0x968);
  local_50 = dVar12;
  if (lVar1 != 0) {
    dVar13 = *(double *)(param_1 + -0xce8);
    *param_2 = dVar13;
    uVar4 = *(undefined4 *)(lVar1 + 0x264);
    uVar5 = *(undefined4 *)(lVar1 + 0x268);
    uVar6 = *(undefined4 *)(lVar1 + 0x26c);
    dVar12 = *(double *)(lVar1 + 0x270);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x260);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    *(undefined4 *)(param_2 + 2) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar6;
    param_2[3] = dVar12;
    dVar12 = *(double *)(lVar1 + 0x240);
    dVar7 = *(double *)(lVar1 + 0x248);
    dVar8 = *(double *)(lVar1 + 0x250);
    dVar9 = *(double *)(lVar1 + 600);
    pdVar14 = *(double **)(lVar1 + 0x228);
    local_88 = dVar12;
    uStack_80 = dVar7;
    local_78 = dVar8;
    uStack_70 = dVar9;
    if (pdVar14 == (double *)0x0) {
      param_1 = 0x40;
      pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
      dVar13 = DAT_14c8463d8;
      *pdVar14 = DAT_14c8463d0;
      pdVar14[1] = dVar13;
      dVar13 = DAT_14c8463e8;
      pdVar14[2] = DAT_14c8463e0;
      pdVar14[3] = dVar13;
      dVar13 = DAT_14c846500;
      pdVar14[4] = DAT_14c8464f8;
      pdVar14[5] = dVar13;
      dVar13 = DAT_14c846508;
      pdVar14[6] = DAT_14c846508;
      *(double **)(lVar1 + 0x228) = pdVar14;
    }
    auVar2._8_4_ = (int)-(ulonglong)(dVar7 != pdVar14[1]);
    auVar2._0_8_ = -(ulonglong)(dVar12 != *pdVar14);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar14[1]) >> 0x20);
    iVar11 = movmskpd(SUB84(dVar13,0),auVar2);
    auVar3._8_4_ = (int)-(ulonglong)(dVar9 != pdVar14[3]);
    auVar3._0_8_ = -(ulonglong)(dVar8 != pdVar14[2]);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar14[3]) >> 0x20);
    uVar15 = movmskpd((int)param_1,auVar3);
    if ((uVar15 & 0x3fffffff) != 0 || iVar11 != 0) {
      *(undefined4 *)(pdVar14 + 2) = (undefined4)local_78;
      *(undefined4 *)((longlong)pdVar14 + 0x14) = local_78._4_4_;
      *(undefined4 *)(pdVar14 + 3) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)pdVar14 + 0x1c) = uStack_70._4_4_;
      *(undefined4 *)pdVar14 = (undefined4)local_88;
      *(undefined4 *)((longlong)pdVar14 + 4) = local_88._4_4_;
      *(undefined4 *)(pdVar14 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_80._4_4_;
      FUN_1448052ee(&local_88,&local_68);
      pdVar14[6] = local_58;
      pdVar14[4] = local_68;
      pdVar14[5] = dStack_60;
    }
    uVar4 = *(undefined4 *)(pdVar14 + 4);
    uVar5 = *(undefined4 *)((longlong)pdVar14 + 0x24);
    uVar6 = *(undefined4 *)(pdVar14 + 5);
    uVar10 = *(undefined4 *)((longlong)pdVar14 + 0x2c);
    dVar12 = pdVar14[6];
    param_2[6] = dVar12;
    *(undefined4 *)(param_2 + 4) = uVar4;
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar5;
    *(undefined4 *)(param_2 + 5) = uVar6;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar10;
    *(undefined2 *)(param_2 + 7) = 1;
    *(undefined1 *)((longlong)param_2 + 0x3a) = 0x40;
    *(undefined4 *)((longlong)param_2 + 0x5c) = 0xff00ffc8;
  }
  if (((ulonglong)local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)dVar12 >> 8),lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e1b2c FUN_1418e1b2c body=463 status=ok
// SIG undefined FUN_1418e1b2c(void)

undefined8 * FUN_1418e1b2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar4 = FUN_14050fd64();
  local_48 = 0;
  FUN_14088df30(uVar4,&local_38,param_3,0);
  plVar3 = local_30;
  if (param_1 + 7 != &local_38) {
    param_1[7] = local_38;
    local_38 = 0;
    plVar2 = (longlong *)param_1[8];
    if (local_30 != plVar2) {
      local_30 = (longlong *)0x0;
      param_1[8] = plVar3;
      if (plVar2 != (longlong *)0x0) {
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
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (param_1[7] != 0) {
    lVar5 = FUN_1408710a5();
    plVar3 = (longlong *)param_1[7];
    plVar2 = (longlong *)param_1[8];
    if (plVar2 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3,lVar5 + 0x70,0);
      (**(code **)(*plVar3 + 8))(plVar3,lVar5 + 0x48,0);
    }
    else {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      (**(code **)(*plVar3 + 8))(plVar3,lVar5 + 0x70,0);
      (**(code **)(*plVar3 + 8))(plVar3,lVar5 + 0x48,0);
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
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e1cfc FUN_1418e1cfc body=105 status=ok
// SIG undefined FUN_1418e1cfc(void)

void FUN_1418e1cfc(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     ((*(char *)(param_1 + 0x92) == '\x02' || (*(char *)(param_1 + 0x92) == '\x04')))) {
    *(undefined1 *)(param_1 + 0x92) = 5;
    *(undefined1 *)(param_1 + 0x2d8) = 0;
    fVar1 = *(float *)(param_1 + 0x94);
    fVar2 = (float)FUN_14085b07e(*(longlong *)(param_1 + 0x18) + 0x2c8);
    *(float *)(param_1 + 0x98) = fVar2 + fVar1;
    *(undefined1 *)(param_1 + 0x9c) = 1;
  }
  return;
}



// FUNCTION 1418e1d66 FUN_1418e1d66 body=476 status=ok
// SIG undefined FUN_1418e1d66(void)

undefined4 FUN_1418e1d66(undefined4 param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_e8 [40];
  char local_c0 [16];
  longlong *local_b0;
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar3 = (**(code **)(*param_3 + 0x28))(param_3);
  (**(code **)(*param_3 + 0x38))(param_3,param_1);
  uVar5 = (**(code **)(*param_3 + 0x10))(param_3);
  local_c0[0] = '\0';
  local_98[0] = 0;
  FUN_1456bb102(local_c0,uVar5);
  puVar6 = &local_90;
  FUN_1448729ea(param_2,puVar6,local_c0);
  if (local_70 == 3) {
    uVar4 = 3;
    uVar8 = local_90;
  }
  else {
    puVar7 = &local_68;
    FUN_1400b56fe(puVar7,&local_90,3);
    uVar8 = local_68;
    if (local_48 == 0) {
      uVar8 = 0x3f800000;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_50) {
        puVar7 = (undefined4 *)CONCAT44(uStack_64,local_68);
      }
      (*pcVar2)(puVar7);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
    uVar4 = (uint)local_70;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_78) {
      puVar6 = (undefined4 *)CONCAT44(uStack_8c,local_90);
    }
    (*pcVar2)(puVar6);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(CONCAT44(uStack_8c,local_90));
  }
  FUN_1448173f8(local_98);
  if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  (**(code **)(*param_3 + 0x40))(param_3,uVar3);
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1418e1f44 FUN_1418e1f44 body=504 status=ok
// SIG undefined FUN_1418e1f44(void)

void FUN_1418e1f44(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x478) != 0) {
    lVar3 = FUN_1405831b2();
    if (((*(int *)(lVar3 + 0x1218) != 0) && (*(int *)(lVar3 + 0x121c) != 0)) &&
       (*(int *)(lVar3 + 0x1218) != DAT_14c948000)) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x478) + 0x1c8);
      if (lVar4 == 0) {
        local_58 = DAT_14c8464f0;
        local_68 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_60 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        local_68 = *(undefined8 *)(lVar4 + 0x260);
        uStack_60 = *(undefined8 *)(lVar4 + 0x268);
        local_58 = *(undefined8 *)(lVar4 + 0x270);
      }
      FUN_1408b783e(local_80,*(longlong *)(param_1 + 0x478),&local_68);
      lVar4 = FUN_140944864(local_80);
      if (lVar4 != 0) {
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        local_40 = 0;
        uStack_38 = 0;
        local_68 = *(undefined8 *)(lVar4 + 0x60);
        uStack_60 = CONCAT44(uStack_60._4_4_,*(undefined4 *)(lVar4 + 0x68));
        FUN_1447715ec(&local_58,lVar4 + 0x70);
        FUN_140feeec0(&local_68,lVar3 + 0x1218);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_140f12bd2(param_2,iVar1);
        }
        FUN_14014e938((longlong)iVar1 * 0x38 + *param_2,&local_68);
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
    }
    cVar2 = FUN_140114204((undefined8 *)(lVar3 + 0x11a8));
    if (cVar2 != '\0') {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_140f12bd2(param_2,iVar1);
      }
      puVar5 = (undefined8 *)((longlong)iVar1 * 0x38 + *param_2);
      *(undefined2 *)puVar5 = 0;
      *(undefined8 *)((longlong)puVar5 + 4) = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined4 *)(puVar5 + 4) = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(lVar3 + 0x11b0);
      *puVar5 = *(undefined8 *)(lVar3 + 0x11a8);
      FUN_1447715ec(puVar5 + 2,lVar3 + 0x11b8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e213e FUN_1418e213e body=132 status=ok
// SIG undefined FUN_1418e213e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1418e213e(undefined8 *param_1,int param_2)

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



// FUNCTION 1418e21c2 FUN_1418e21c2 body=29 status=ok
// SIG undefined FUN_1418e21c2(void)

undefined8 FUN_1418e21c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418e21e0 FUN_1418e21e0 body=143 status=ok
// SIG undefined FUN_1418e21e0(void)

void FUN_1418e21e0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
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



// FUNCTION 1418e2270 FUN_1418e2270 body=137 status=ok
// SIG undefined FUN_1418e2270(void)

void FUN_1418e2270(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 1418e22fa FUN_1418e22fa body=345 status=ok
// SIG undefined FUN_1418e22fa(void)

void FUN_1418e22fa(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar5;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = (ulonglong)(int)uVar4;
  }
  else {
    uVar5 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418e237b;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_1418e237b:
  uVar7 = 0x7fffffff;
  if ((int)uVar3 <= (int)uVar5) {
    uVar7 = uVar5 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,1,1);
  return;
}



// FUNCTION 1418e2454 FUN_1418e2454 body=203 status=ok
// SIG undefined FUN_1418e2454(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418e2454(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined1 in_XMM0 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 in_XMM3 [16];
  undefined1 auVar4 [16];
  undefined1 auStack_38 [35];
  undefined1 local_15;
  undefined1 local_14;
  undefined2 local_13;
  char acStack_11 [9];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_3 != (undefined1 *)0x0) {
    auVar2 = pmovsxbq(in_XMM0,0x100);
    lVar1 = 0;
    auVar4 = pmovsxbq(in_XMM3,0x202);
    do {
      if (SUB168(auVar2 ^ _DAT_149931e80,0) < -0x7ffffffffffffffa) {
        acStack_11[lVar1] = (char)lVar1;
      }
      if (SUB168(auVar2 ^ _DAT_149931e80,8) < -0x7ffffffffffffffa) {
        acStack_11[lVar1 + 1] = (char)lVar1 + '\x01';
      }
      lVar1 = lVar1 + 2;
      lVar3 = auVar2._8_8_;
      auVar2._0_8_ = auVar2._0_8_ + auVar4._0_8_;
      auVar2._8_8_ = lVar3 + auVar4._8_8_;
    } while (lVar1 != 6);
    local_15 = *param_3;
    local_14 = param_3[1];
    local_13 = 0;
    acStack_11[6] = '\0';
    acStack_11[7] = '\0';
    acStack_11[8] = 0;
    FUN_140da3c3c(auVar2._0_8_,DAT_149931e80,&local_15);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e2520 FUN_1418e2520 body=219 status=ok
// SIG undefined FUN_1418e2520(void)

void FUN_1418e2520(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  undefined1 local_3c [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *param_1;
  if (lVar4 != 0) {
    FUN_1401533ba(local_3c,&DAT_14cbc8318,1);
    lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x9b0) + 0x18))(lVar4 + 0x9b0,local_3c);
    if (lVar4 != 0) {
      plVar3 = param_1 + 1;
      if ((int)param_1[2] == (int)param_1[3]) {
        FUN_148d13b8e(plVar3,(int)param_1[2] + -1);
        FUN_14825af5a(plVar3);
      }
      FUN_148d0f280(plVar3,param_2,0);
      FUN_148d0f310(param_1);
    }
  }
  plVar3 = *(longlong **)(param_2 + 0x10);
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e25fc FUN_1418e25fc body=223 status=ok
// SIG undefined FUN_1418e25fc(void)

void FUN_1418e25fc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  
  FUN_140c89a08(param_1 + 0x4b0);
  FUN_140c89b02(param_1 + 0x510,param_2);
  if (*(int *)(param_1 + 0x578) != *(int *)(param_1 + 0x5a4)) {
    lVar1 = *param_2;
    lVar5 = param_1 + 0x5a8;
    if (*(longlong *)(param_1 + 0x5b0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x5b0);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x5b8) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x570);
      iVar6 = iVar3;
      do {
        if (*(longlong *)(lVar5 + (longlong)iVar6 * 0x18) == lVar1) goto LAB_1418e26a7;
        iVar6 = *(int *)(lVar5 + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  return;
  while (iVar3 = (int)plVar4[2], iVar3 != -1) {
LAB_1418e26a7:
    plVar4 = (longlong *)(lVar5 + (longlong)iVar3 * 0x18);
    if (*plVar4 == lVar1) goto LAB_1418e26bb;
  }
  plVar4 = (longlong *)0x0;
LAB_1418e26bb:
  uVar2 = FUN_14479d2ce(plVar4 + 1);
  FUN_148d107c2(param_1,param_2,uVar2,0);
  return;
}



// FUNCTION 1418e26dc FUN_1418e26dc body=272 status=ok
// SIG undefined FUN_1418e26dc(void)

undefined8 FUN_1418e26dc(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14054e628(&local_30,param_1,param_2);
  if ((longlong)local_28 == 0) {
LAB_1418e27d7:
    uVar4 = 0;
  }
  else {
    lVar5 = (longlong)local_28 * 0x48;
    lVar6 = local_30;
    do {
      iVar3 = FUN_14054e860(lVar6);
      if (iVar3 == 1) {
        lVar5 = *(longlong *)(lVar6 + 8);
        local_48 = lVar5;
        uVar4 = FUN_14054e994();
        local_40 = FUN_14477b664(uVar4);
        local_38 = 0;
        uVar4 = 0;
        if ((local_40 != 0) && (lVar5 != 0)) {
          plVar1 = *(longlong **)(local_40 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) goto LAB_1418e27d7;
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          uVar4 = FUN_144aff482(uVar4,&local_48);
        }
        break;
      }
      lVar6 = lVar6 + 0x48;
      uVar4 = 0;
      lVar5 = lVar5 + -0x48;
    } while (lVar5 != 0);
  }
  FUN_14054e5f7(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1418e27ee FUN_1418e27ee body=542 status=ok
// SIG undefined FUN_1418e27ee(void)

undefined8 FUN_1418e27ee(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14cba14f0 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_145885dac;
      local_48 = &LAB_148b9e16b;
      local_50 = FUN_140f505de;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x110;
      FUN_14081cfa3(L"/Script/OakGame",L"GbxDiscoveryProviderObject_OakMissionWaypoint",
                    &DAT_14cba14f0,&DAT_148b9e16a);
    }
    lVar1 = param_1[2];
    iVar2 = *(int *)(lVar1 + 0x38);
    if (*(int *)(DAT_14cba14f0 + 0x38) <= iVar2) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cba14f0 + 0x38) * 8)
          == DAT_14cba14f0 + 0x30) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
    if (DAT_14cb5d278 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_145885dac;
      local_48 = &LAB_1486962c5;
      local_50 = FUN_1464da8ae;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x118;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryProviderObject_DiscoveryLocation",
                    &DAT_14cb5d278,&DAT_1486962c4);
      lVar1 = param_1[2];
      iVar2 = *(int *)(lVar1 + 0x38);
    }
    if ((*(int *)(DAT_14cb5d278 + 0x38) <= iVar2) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb5d278 + 0x38) * 8) ==
        DAT_14cb5d278 + 0x30)) {
      (**(code **)(*param_1 + 0x2d0))(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e2a32 FUN_1418e2a32 body=403 status=ok
// SIG undefined FUN_1418e2a32(void)

void FUN_1418e2a32(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = (**(code **)(*param_1 + 0x2d8))();
  if (((lVar2 == 0) || (lVar3 = FUN_1407c8d60(lVar2), lVar3 == 0)) ||
     (*(char *)(lVar3 + 0x2e) != '\x01')) {
    if (*(char *)((longlong)param_1 + 0x119) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x119) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
  }
  else {
    lVar3 = *param_2;
    puVar4 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar2 + 8) != (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)(lVar2 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar2 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar2);
      DAT_14c947fe0 = lVar2;
    }
    FUN_140045924(DAT_14c947fe0,&local_38,puVar4,1);
    if ((bool)*(char *)((longlong)param_1 + 0x119) != (lVar3 == local_38)) {
      *(bool *)((longlong)param_1 + 0x119) = lVar3 == local_38;
      if (((lVar3 == local_38) &&
          ((*(char *)((longlong)param_1 + 0xe4) != '\x01' || ((int)param_1[0x1c] < 2)))) &&
         (FUN_14073f16e(param_1),
         *(char *)((longlong)param_1 + 0xe4) == '\0' || (int)param_1[0x1c] != 2)) {
        lVar2 = FUN_14073f764(param_1);
        iVar1 = FUN_140ddd928(param_1);
        if (lVar2 == 0 || 1 < iVar1 - 1U) {
          if (iVar1 == 3) {
            *(undefined4 *)(param_1 + 0x1c) = 2;
            *(undefined1 *)((longlong)param_1 + 0xe4) = 1;
          }
        }
        else {
          FUN_1402799c0(lVar2);
        }
      }
      FUN_1402798cc(param_1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e2bda FUN_1418e2bda body=285 status=ok
// SIG undefined FUN_1418e2bda(void)

undefined8 FUN_1418e2bda(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x178), lVar2 != 0)) {
    lVar3 = FUN_14030d660();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (((*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30 && (*(int *)(lVar2 + 0x5f0) != 0)) && (param_2 != 0)))) {
      lVar2 = *(longlong *)(param_2 + 0x38);
      if (lVar2 == 0) {
        uVar4 = FUN_14050c9fe();
        lVar2 = FUN_14477b664(uVar4);
        *(longlong *)(param_2 + 0x38) = lVar2;
      }
      plVar5 = *(longlong **)(param_2 + 0x40);
      if (plVar5 == (longlong *)0x0) {
        if (lVar2 == 0) {
          return 1;
        }
        if (*(longlong *)(param_2 + 0x30) == 0) {
          return 1;
        }
        plVar5 = *(longlong **)(lVar2 + 0xb8);
        if ((plVar5 == (longlong *)0x0) ||
           (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 == '\0')) {
          *(undefined8 *)(param_2 + 0x40) = 0;
          return 1;
        }
        uVar4 = (**(code **)(*plVar5 + 0x110))(plVar5);
        plVar5 = (longlong *)FUN_144aff482(uVar4,(longlong *)(param_2 + 0x30));
        *(longlong **)(param_2 + 0x40) = plVar5;
        if (plVar5 == (longlong *)0x0) {
          return 1;
        }
      }
      lVar2 = (**(code **)(*plVar5 + 8))(plVar5);
      lVar3 = FUN_1406d3bdc();
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30 && ((char)plVar5[0x4d] != '\0')))) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 1418e2cf8 FUN_1418e2cf8 body=63 status=ok
// SIG undefined FUN_1418e2cf8(void)

undefined8 FUN_1418e2cf8(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar2 != 0) {
    uVar3 = FUN_1406d3bdc();
    cVar1 = FUN_1448093f4(lVar2,uVar3);
    if ((cVar1 != '\0') && (*(char *)(lVar2 + 0x24a) != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1418e2d38 FUN_1418e2d38 body=210 status=ok
// SIG undefined FUN_1418e2d38(void)

void FUN_1418e2d38(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_1411c2f8c(param_1,0);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    lVar3 = FUN_1410ef012(param_1);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x3f0) != 0)) {
      FUN_1404eaf96(*(longlong *)(lVar3 + 0x3f0),(undefined8 *)(param_1 + 0x100));
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar3 = FUN_1410ef012(param_1);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x3f0) != 0)) {
      FUN_1404eaf96(*(longlong *)(lVar3 + 0x3f0),(undefined8 *)(param_1 + 0x108));
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined2 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xda) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}



// FUNCTION 1418e2e0a FUN_1418e2e0a body=683 status=ok
// SIG undefined FUN_1418e2e0a(void)

uint FUN_1418e2e0a(longlong param_1,double *param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  float fVar14;
  
  uVar11 = 0;
  if ((*(char *)(param_2 + 1) == '\x01') &&
     ((*(char *)(param_1 + 0xda) != '\0' || (uVar11 = 0, *(char *)(param_1 + 0xd9) == '\x01')))) {
    plVar3 = *(longlong **)(param_1 + 0xd0);
    if (plVar3 == (longlong *)0x0) {
LAB_1418e3009:
      uVar11 = (uint)*(byte *)(param_1 + 0xd9) << 4;
    }
    else {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_1418e3009;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar13 = iVar5 == iVar4;
        if (bVar13) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar13);
      plVar8 = *(longlong **)(param_1 + 200);
      uVar12 = 0;
      if (((plVar8 != (longlong *)0x0 & *(byte *)(param_1 + 0xda)) == 1) &&
         (uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8), (uVar6 & 2) == 0)) {
        fVar14 = (float)(**(code **)(*plVar8 + 0x18))(plVar8);
        lVar7 = FUN_14050c909();
        if (*(float *)(lVar7 + 0x4d4) <= fVar14) {
          uVar12 = 1;
        }
      }
      uVar11 = uVar12 + 0x10;
      if (*(char *)(param_1 + 0xd9) == '\0') {
        uVar11 = uVar12;
      }
      LOCK();
      plVar8 = plVar3 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  }
  if ((*(char *)(param_2 + 1) != '\x01') ||
     (plVar3 = *(longlong **)(param_1 + 0xd0), plVar3 == (longlong *)0x0)) {
LAB_1418e2f5f:
    bVar13 = false;
    goto LAB_1418e2f2a;
  }
  iVar5 = (int)plVar3[1];
  do {
    if (iVar5 == 0) goto LAB_1418e2f5f;
    LOCK();
    iVar4 = (int)plVar3[1];
    bVar13 = iVar5 == iVar4;
    if (bVar13) {
      *(int *)(plVar3 + 1) = iVar5 + 1;
      iVar4 = iVar5;
    }
    iVar5 = iVar4;
    UNLOCK();
  } while (!bVar13);
  plVar8 = *(longlong **)(param_1 + 200);
  if (plVar8 == (longlong *)0x0) {
LAB_1418e2f1d:
    bVar13 = false;
  }
  else {
    if ((((*(int *)((longlong)plVar8 + 0x3c) == 0) ||
         (uVar12 = *(uint *)(plVar8 + 7), (int)uVar12 < 0)) || (DAT_14c9647dc <= (int)uVar12)) ||
       (((plVar10 = (longlong *)
                    ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
         plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)((longlong)plVar8 + 0x3c))) ||
        (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (*plVar10 == 0)))))) {
      if (*(int *)((longlong)plVar8 + 0x44) != 0) {
        uVar12 = *(uint *)(plVar8 + 8);
        bVar13 = false;
        if (((int)uVar12 < 0) || (bVar13 = false, DAT_14c9647dc <= (int)uVar12)) goto LAB_1418e2f20;
        plVar10 = (longlong *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
        if ((plVar10 != (longlong *)0x0) &&
           (((((int)plVar10[2] == *(int *)((longlong)plVar8 + 0x44) &&
              ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) && (*plVar10 != 0)) &&
            (*(longlong *)(*plVar10 + 0xa8) != 0)))) goto LAB_1418e3046;
      }
      goto LAB_1418e2f1d;
    }
LAB_1418e3046:
    lVar7 = FUN_14050c909();
    fVar14 = *(float *)(lVar7 + 0x4d0);
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x30))(plVar8);
    if (plVar8 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar8 + 8))(plVar8);
      lVar9 = FUN_14060edb4();
      if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30 && (*(char *)((longlong)plVar8 + 0x14) == '\x01')))) {
        fVar14 = *(float *)(plVar8 + 2);
      }
    }
    bVar13 = *param_2 <= (double)fVar14;
  }
LAB_1418e2f20:
  LOCK();
  plVar8 = plVar3 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_1418e2f2a:
  cVar2 = *(char *)(param_1 + 0xd8);
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  uVar12 = uVar11 | 8;
  if (!bVar13) {
    uVar12 = uVar11;
  }
  uVar11 = uVar12 + 0x20;
  if (cVar2 == '\0') {
    uVar11 = uVar12;
  }
  return uVar11;
}



// FUNCTION 1418e30bc FUN_1418e30bc body=93 status=ok
// SIG undefined FUN_1418e30bc(void)

void FUN_1418e30bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f8df0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9679f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1418e311a FUN_1418e311a body=270 status=ok
// SIG undefined FUN_1418e311a(void)

undefined8 FUN_1418e311a(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1418e3222;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1418e3222;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1418e3222:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1418e31d0;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_1418e31d0;
    }
  }
  uVar6 = 0;
LAB_1418e31d0:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e322a FUN_1418e322a body=394 status=ok
// SIG undefined FUN_1418e322a(void)

void FUN_1418e322a(longlong param_1,double *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  iVar2 = *(int *)(param_1 + 0x34);
  if (((((iVar2 == 0) || (uVar1 = *(uint *)(param_1 + 0x30), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 == (longlong *)0x0 || ((int)plVar4[2] != iVar2)))) ||
     ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) {
    return;
  }
  if (param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1] < 9.99999905104687e-09
     ) {
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar4;
    }
    else {
      lVar3 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001418e32f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar3 + 0x3b60) + 0x70))(lVar3 + 0x3b60,0,0);
    return;
  }
  if (((*(int *)(param_1 + 0x3c) == 0) || (uVar1 = *(uint *)(param_1 + 0x38), (int)uVar1 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar1 ||
      (((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 == 0 ||
        (*(int *)(lVar3 + 0x10) != *(int *)(param_1 + 0x3c))) ||
       ((*(uint *)(lVar3 + 8) & 0x10200000) != 0)))))) {
LAB_1418e334a:
    uVar1 = *(uint *)(param_1 + 0x30);
    lVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1418e3387;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == iVar2 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
      lVar3 = *plVar4;
      goto LAB_1418e3387;
    }
  }
  else {
    FUN_140545fa2();
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 != 0) goto LAB_1418e334a;
  }
  lVar3 = 0;
LAB_1418e3387:
                    /* WARNING: Could not recover jumptable at 0x0001418e339a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar3 + 0x3b60) + 0x68))(lVar3 + 0x3b60);
  return;
}



// FUNCTION 1418e33b4 FUN_1418e33b4 body=199 status=ok
// SIG undefined FUN_1418e33b4(void)

void FUN_1418e33b4(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  if (((*(int *)(param_1 + 0x3c) != 0) && (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x3c))) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        uVar2 = *puVar4;
      }
      else {
        uVar2 = 0;
      }
      FUN_140545fa2(uVar2);
    }
  }
  if (((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x34))) &&
       ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar5;
      }
      else {
        lVar3 = 0;
      }
      FUN_140bd92d4(lVar3 + 0x60e8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1418e347c FUN_1418e347c body=217 status=ok
// SIG undefined FUN_1418e347c(void)

void FUN_1418e347c(longlong param_1,double *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x38);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar2 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar2 != (longlong *)0x0) &&
         (((int)plVar2[2] == *(int *)(param_1 + 0x3c) && ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)
          ))) {
        if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
          lVar3 = *plVar2;
        }
        else {
          lVar3 = 0;
        }
        if (param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1] <
            9.99999905104687e-09) {
          lVar4 = 0x80;
        }
        else {
          FUN_140545fa2();
          lVar3 = FUN_14479d2ce((uint *)(param_1 + 0x38));
          lVar4 = 0x78;
        }
                    /* WARNING: Could not recover jumptable at 0x0001418e3540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)(lVar3 + 0xda8) + lVar4))(lVar3 + 0xda8,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1418e3556 FUN_1418e3556 body=191 status=ok
// SIG undefined FUN_1418e3556(void)

double * FUN_1418e3556(longlong param_1,double *param_2,longlong param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  uint uVar8;
  
  dVar4 = DAT_14c846520;
  dVar3 = DAT_14c846510;
  uVar7 = (undefined4)DAT_14c846518;
  uVar8 = (uint)((ulonglong)DAT_14c846518 >> 0x20);
  if ((param_3 != 0) && (*(byte *)(param_1 + 0x28) < 2)) {
    lVar5 = FUN_1404d56e0(param_3);
    if (lVar5 != 0) {
      lVar6 = FUN_14030d4a0();
      if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
         (*(char *)(lVar5 + 0x45a) != '\0')) {
        uVar8 = uVar8 ^ 0x80000000;
      }
    }
  }
  dVar1 = param_4[2];
  dVar2 = param_4[1];
  *param_2 = dVar3 * *param_4;
  param_2[1] = (double)CONCAT44(uVar8,uVar7) * dVar2;
  param_2[2] = dVar4 * dVar1;
  *(undefined1 *)(param_2 + 3) = 3;
  return param_2;
}



// FUNCTION 1418e3616 FUN_1418e3616 body=3603 status=ok
// SIG undefined FUN_1418e3616(void)

void FUN_1418e3616(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  longlong *plVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  size_t sVar11;
  undefined8 uVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint *puVar17;
  ulonglong uVar18;
  wchar_t *pwVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  int iVar28;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  int local_1e8;
  uint local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  ulonglong local_1d0;
  int local_1c4;
  uint *local_1c0;
  longlong *local_1b8;
  ulonglong local_1b0;
  uint local_1a8;
  uint local_1a4;
  ulonglong local_1a0;
  ulonglong local_198;
  longlong *local_190;
  ulonglong local_188;
  uint *local_180;
  uint *local_178;
  uint *local_170;
  ulonglong local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined8 uStack_150;
  longlong local_148;
  longlong *plStack_140;
  byte *local_138;
  longlong *plStack_130;
  longlong local_128;
  longlong *plStack_120;
  undefined4 local_10c;
  undefined *local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  uint *local_f0;
  int local_e8;
  uint local_e4;
  uint local_e0;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_128 = 0;
  plStack_120 = (longlong *)0x0;
  FUN_14009b010(&local_128,2,0);
  uVar26 = *(uint *)(param_1 + 0xa0);
  if (uVar26 == 0) {
    local_1b0 = 1;
    uVar7 = 0;
    iVar23 = 0;
    uVar24 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 0x88);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar23 = uVar26 + 0x1e;
      if (-1 < (int)(uVar26 - 1)) {
        iVar23 = uVar26 - 1;
      }
      uVar24 = 0;
      uVar27 = (ulonglong)(uint)(iVar23 >> 5);
      if (iVar23 >> 5 < 1) {
        uVar27 = uVar24;
      }
      iVar23 = 0;
      do {
        if (uVar27 == uVar24) goto LAB_1418e3f7c;
        iVar23 = iVar23 + 0x20;
        uVar7 = puVar10[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar24 = 0;
      iVar23 = 0;
    }
    local_1b0 = (ulonglong)(-uVar7 & uVar7);
    uVar27 = local_1b0 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    uVar7 = (iVar23 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    if ((int)uVar26 <= (int)uVar7) {
      uVar7 = uVar26;
    }
  }
  if (uVar7 != uVar26) {
    local_1e4 = 0xffffffff;
    local_1e0 = param_1;
    local_1c0 = (uint *)(param_1 + 0x88);
    local_1b8 = param_3;
    local_1a0 = (ulonglong)uVar26;
    local_1e8 = iVar23;
    do {
      puVar4 = *(undefined **)(*(longlong *)(local_1e0 + 0x78) + (longlong)(int)uVar7 * 0x18);
      local_1d8 = *(longlong *)(*(longlong *)(local_1e0 + 0x78) + 8 + (longlong)(int)uVar7 * 0x18);
      local_138 = (byte *)0x0;
      plStack_130 = (longlong *)0x0;
      local_1d0 = uVar24;
      FUN_14009b010(&local_138,3,0);
      local_148 = 0;
      plStack_140 = (longlong *)0x0;
      FUN_14009b010(&local_148,2,0);
      local_108 = puVar4;
      if ((local_138 != (byte *)0x0) && ((~*local_138 & 3) == 0)) {
        lVar21 = *(longlong *)(local_138 + 8);
        local_160 = CONCAT44(local_160._4_4_,1);
        local_f8 = &DAT_14cbc9248;
        local_f0 = (uint *)&local_160;
        FUN_14049fede(lVar21 + 0x18,&local_158,&local_f8,0);
        lVar21 = *(longlong *)
                  (*(longlong *)(lVar21 + 0x18) + 0x28 + (longlong)(int)local_158 * 0x40);
        if (lVar21 != 0) {
          FUN_1401269d0(lVar21,&local_108);
        }
      }
      local_158 = (wchar_t *)0x0;
      uStack_150 = 0;
      FUN_1401031ac(*(undefined8 *)(local_1d8 + 0x10),0,&local_158);
      pwVar19 = L"";
      if ((int)uStack_150 != 0) {
        pwVar19 = local_158;
      }
      local_78 = 0;
      if (pwVar19 == (wchar_t *)0x0) {
        local_70 = 0;
        local_68 = 0;
      }
      else {
        sVar11 = wcslen(pwVar19);
        FUN_1449b853c(&local_f8,pwVar19,sVar11 & 0xffffffff,1);
      }
      uVar12 = local_70;
      if ((local_138 != (byte *)0x0) && ((~*local_138 & 3) == 0)) {
        lVar21 = *(longlong *)(local_138 + 8);
        local_10c = 1;
        local_108 = &DAT_14cbc91f8;
        plStack_100 = (longlong *)&local_10c;
        FUN_14049fede(lVar21 + 0x18,&local_160,&local_108,0);
        lVar21 = *(longlong *)
                  (*(longlong *)(lVar21 + 0x18) + 0x28 + (longlong)(int)(uint)local_160 * 0x40);
        if ((lVar21 != 0) && ((*(byte *)(lVar21 + 1) & 2) == 0)) {
          FUN_140126aca(lVar21,uVar12);
        }
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_158 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_158 = (wchar_t *)0x0;
      uStack_150 = 0;
      FUN_1401031ac(local_1d8,local_1e0,&local_158);
      pwVar19 = L"";
      if ((int)uStack_150 != 0) {
        pwVar19 = local_158;
      }
      local_78 = 0;
      if (pwVar19 == (wchar_t *)0x0) {
        local_70 = 0;
        local_68 = 0;
      }
      else {
        sVar11 = wcslen(pwVar19);
        FUN_1449b853c(&local_f8,pwVar19,sVar11 & 0xffffffff,1);
      }
      uVar12 = local_70;
      if ((local_138 != (byte *)0x0) && ((~*local_138 & 3) == 0)) {
        lVar21 = *(longlong *)(local_138 + 8);
        local_10c = 1;
        local_108 = &DAT_14cbc9220;
        plStack_100 = (longlong *)&local_10c;
        FUN_14049fede(lVar21 + 0x18,&local_160,&local_108,0);
        lVar21 = *(longlong *)
                  (*(longlong *)(lVar21 + 0x18) + 0x28 + (longlong)(int)(uint)local_160 * 0x40);
        if ((lVar21 != 0) && ((*(byte *)(lVar21 + 1) & 2) == 0)) {
          FUN_140126aca(lVar21,uVar12);
        }
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_158 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      puVar10 = (uint *)(local_1d8 + 0x58);
      uVar26 = *(uint *)(local_1d8 + 0x70);
      if (uVar26 == 0) {
        uVar24 = 1;
        uVar27 = 0;
        uVar7 = 0;
        iVar23 = 0;
      }
      else {
        puVar17 = *(uint **)(local_1d8 + 0x68);
        if (*(uint **)(local_1d8 + 0x68) == (uint *)0x0) {
          puVar17 = puVar10;
        }
        uVar7 = *puVar17;
        if (uVar7 == 0) {
          iVar23 = uVar26 + 0x1e;
          if (-1 < (int)(uVar26 - 1)) {
            iVar23 = uVar26 - 1;
          }
          uVar27 = 0;
          uVar24 = (ulonglong)(uint)(iVar23 >> 5);
          if (iVar23 >> 5 < 1) {
            uVar24 = uVar27;
          }
          iVar23 = 0;
          do {
            if (uVar24 == uVar27) goto LAB_1418e3e16;
            iVar23 = iVar23 + 0x20;
            uVar7 = puVar17[uVar27 + 1];
            uVar27 = uVar27 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar27 = 0;
          iVar23 = 0;
        }
        uVar24 = (ulonglong)(-uVar7 & uVar7);
        uVar25 = uVar24 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        uVar7 = (iVar23 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if ((int)uVar26 <= (int)uVar7) {
          uVar7 = uVar26;
        }
      }
      if (uVar7 != uVar26) {
        uVar14 = 0xffffffff;
        lVar21 = local_1d8;
        local_198 = (ulonglong)uVar26;
        local_178 = puVar10;
        do {
          lVar16 = *(longlong *)(lVar21 + 0x48) + (longlong)(int)uVar7 * 0x60;
          lVar22 = *(longlong *)(lVar21 + 0x48) + (longlong)(int)uVar7 * 0x60;
          puVar17 = (uint *)(lVar22 + 0x18);
          local_e4 = *(uint *)(lVar22 + 0x30);
          uVar25 = 1;
          if (local_e4 == 0) {
            uVar18 = 0;
            iVar28 = 0;
            uVar26 = 0;
          }
          else {
            puVar13 = *(uint **)(lVar16 + 0x28);
            if (*(uint **)(lVar16 + 0x28) == (uint *)0x0) {
              puVar13 = puVar17;
            }
            uVar26 = *puVar13;
            if (uVar26 == 0) {
              iVar28 = local_e4 + 0x1e;
              if (-1 < (int)(local_e4 - 1)) {
                iVar28 = local_e4 - 1;
              }
              uVar20 = 0;
              uVar15 = (ulonglong)(uint)(iVar28 >> 5);
              if (iVar28 >> 5 < 1) {
                uVar15 = uVar20;
              }
              uVar18 = (ulonglong)((int)uVar15 + 1);
              iVar28 = (int)uVar15 * 0x20 + 0x20;
              iVar8 = 0;
              do {
                uVar26 = local_e4;
                if (uVar15 == uVar20) goto LAB_1418e3bbb;
                iVar8 = iVar8 + 0x20;
                uVar26 = puVar13[uVar20 + 1];
                uVar20 = uVar20 + 1;
              } while (uVar26 == 0);
              uVar18 = uVar20 & 0xffffffff;
              iVar28 = iVar8;
            }
            else {
              uVar18 = 0;
              iVar28 = 0;
            }
            uVar25 = (ulonglong)(-uVar26 & uVar26);
            uVar15 = uVar25 * 2 + 1;
            lVar22 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            uVar26 = (iVar28 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
            if ((int)local_e4 <= (int)uVar26) {
              uVar26 = local_e4;
            }
          }
LAB_1418e3bbb:
          local_f8 = (undefined *)CONCAT44(1 << ((byte)local_e4 & 0x1f),(int)local_e4 >> 5);
          local_e8 = -1 << ((byte)local_e4 & 0x1f);
          local_e0 = local_e4 & 0xffffffe0;
          local_1c4 = iVar23;
          local_1a4 = uVar14;
          local_188 = uVar24;
          local_168 = uVar27;
          local_f0 = puVar17;
          if (*(uint *)(lVar16 + 0x30) != local_e4) {
            FUN_1449c0562(&local_f8);
            lVar21 = local_1d8;
          }
          uVar7 = local_e4;
          if ((uVar26 != local_e4) || (puVar17 != local_f0)) {
            uVar14 = 0xffffffff;
            puVar13 = local_f0;
            local_190 = (longlong *)(lVar16 + 8);
            local_170 = puVar17;
            do {
              puVar10 = local_170;
              iVar23 = (int)uVar18;
              lVar16 = *local_190 + (longlong)(int)uVar26 * 0x90;
              if (((*(byte *)(*local_190 + 0x29 + (longlong)(int)uVar26 * 0x90) & 1) != 0) ||
                 (*(longlong *)(lVar16 + 0x48) != *(longlong *)(lVar16 + 0x30))) {
                local_108 = (undefined *)0x0;
                plStack_100 = (longlong *)0x0;
                local_1a8 = uVar14;
                local_180 = puVar13;
                FUN_14009b010(&local_108,3,0);
                FUN_1438c05ee(lVar16,&local_f8);
                FUN_148d1a8a0(&local_108,&local_f8);
                uVar12 = FUN_1410e88d8(lVar16);
                FUN_14171cb22(uVar12,&local_158);
                pwVar19 = local_158;
                if ((int)uStack_150 == 0) {
                  pwVar19 = L"";
                }
                local_78 = 0;
                if (pwVar19 == (wchar_t *)0x0) {
                  local_70 = 0;
                  local_68 = 0;
                }
                else {
                  sVar11 = wcslen(pwVar19);
                  FUN_1446fe5a4(&local_f8,pwVar19,sVar11 & 0xffffffff,1);
                }
                local_160 = local_70;
                FUN_141863b92(&local_108,&DAT_14cbc92c0);
                if (local_78 != 0) {
                  FUN_1400020a8();
                }
                if (local_158 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
                FUN_14187f5dc(&local_108,&DAT_14cbc92e8,lVar16 + 0x60);
                FUN_14187f5dc(&local_108,&DAT_14cbc9310,lVar16 + 0x68);
                local_f8._0_4_ = (uint)*(byte *)(lVar16 + 0x70);
                FUN_148d1a93c(&local_108,&DAT_14cbc9338,&local_f8);
                local_f8._0_4_ = *(undefined4 *)(lVar16 + 0x74);
                FUN_1418e442a(&local_108,&local_f8);
                bVar6 = FUN_1438c05f8(lVar16);
                local_f8 = (undefined *)CONCAT44(local_f8._4_4_,(uint)bVar6);
                FUN_148d1a93c(&local_108,&DAT_14cbc9388,&local_f8);
                local_f8 = (undefined *)
                           (CONCAT71(local_f8._1_7_,*(byte *)(lVar16 + 0x29) >> 1) &
                           0xffffffffffffff01);
                FUN_1418b3246(&local_108,&DAT_14cbc93b0,&local_f8);
                *(byte *)(lVar16 + 0x29) = *(byte *)(lVar16 + 0x29) & 0xfe;
                if (local_148 != 0) {
                  local_1f8 = 0;
                  FUN_140141db6(local_148,&local_108,0,0);
                }
                plVar5 = plStack_100;
                puVar13 = local_180;
                lVar21 = local_1d8;
                uVar14 = local_1a8;
                if (plStack_100 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plStack_100 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plStack_100)(plStack_100);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar5 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    puVar13 = local_180;
                    lVar21 = local_1d8;
                    uVar14 = local_1a8;
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar5 + 0x10))(plVar5);
                      puVar13 = local_180;
                      lVar21 = local_1d8;
                      uVar14 = local_1a8;
                    }
                  }
                }
              }
              uVar14 = uVar14 & ~(uint)uVar25;
              puVar17 = (uint *)local_190[4];
              if ((uint *)local_190[4] == (uint *)0x0) {
                puVar17 = puVar10;
              }
              uVar3 = *(uint *)(local_190 + 5);
              lVar16 = (longlong)iVar23;
              uVar26 = puVar17[lVar16] & uVar14;
              if (uVar26 == 0) {
                iVar8 = uVar3 + 0x1e;
                if (-1 < (int)(uVar3 - 1)) {
                  iVar8 = uVar3 - 1;
                }
                iVar8 = iVar8 >> 5;
                iVar28 = iVar28 + 0x20;
                iVar9 = iVar8;
                if (iVar8 < iVar23) {
                  iVar9 = iVar23;
                }
                if (iVar23 < iVar8) {
                  lVar22 = 0;
                  do {
                    uVar26 = puVar17[lVar16 + lVar22 + 1];
                    if (uVar26 != 0) {
                      uVar18 = (ulonglong)(iVar23 + (int)lVar22 + 1);
                      uVar14 = 0xffffffff;
                      goto LAB_1418e3cdf;
                    }
                    iVar28 = iVar28 + 0x20;
                    lVar22 = lVar22 + 1;
                  } while (iVar9 - lVar16 != lVar22);
                  uVar14 = 0xffffffff;
                  iVar23 = iVar9;
                }
                uVar18 = (ulonglong)(iVar23 + 1);
                lVar21 = local_1d8;
                uVar26 = uVar3;
              }
              else {
LAB_1418e3cdf:
                uVar25 = (ulonglong)(-uVar26 & uVar26);
                uVar24 = uVar25 * 2 + 1;
                lVar16 = 0x3f;
                if (uVar24 != 0) {
                  for (; uVar24 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                  }
                }
                uVar26 = (iVar28 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                if ((int)uVar3 <= (int)uVar26) {
                  uVar26 = uVar3;
                }
              }
            } while ((uVar26 != uVar7) || (puVar10 = local_178, local_170 != puVar13));
          }
          uVar14 = local_1a4 & ~(uint)local_188;
          puVar17 = *(uint **)(lVar21 + 0x68);
          if (*(uint **)(lVar21 + 0x68) == (uint *)0x0) {
            puVar17 = puVar10;
          }
          uVar26 = *(uint *)(lVar21 + 0x70);
          iVar28 = (int)local_168;
          lVar16 = (longlong)iVar28;
          uVar7 = puVar17[lVar16] & uVar14;
          uVar27 = local_168;
          iVar23 = local_1c4;
          if (uVar7 == 0) {
            iVar8 = uVar26 + 0x1e;
            if (-1 < (int)(uVar26 - 1)) {
              iVar8 = uVar26 - 1;
            }
            iVar8 = iVar8 >> 5;
            iVar23 = local_1c4 + 0x20;
            iVar9 = iVar8;
            if (iVar8 < iVar28) {
              iVar9 = iVar28;
            }
            if (iVar28 < iVar8) {
              lVar22 = 0;
              do {
                uVar7 = puVar17[lVar16 + lVar22 + 1];
                if (uVar7 != 0) {
                  uVar14 = 0xffffffff;
                  uVar27 = (ulonglong)(iVar28 + (int)lVar22 + 1);
                  goto LAB_1418e3dc5;
                }
                iVar23 = iVar23 + 0x20;
                lVar22 = lVar22 + 1;
              } while (iVar9 - lVar16 != lVar22);
              uVar14 = 0xffffffff;
              iVar28 = iVar9;
            }
            uVar27 = (ulonglong)(iVar28 + 1);
            uVar24 = local_188;
            lVar21 = local_1d8;
            uVar7 = uVar26;
          }
          else {
LAB_1418e3dc5:
            uVar24 = (ulonglong)(-uVar7 & uVar7);
            uVar25 = uVar24 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            uVar7 = (iVar23 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if ((int)uVar26 <= (int)uVar7) {
              uVar7 = uVar26;
            }
          }
        } while (uVar7 != (uint)local_198);
      }
LAB_1418e3e16:
      if (local_138 != (byte *)0x0) {
        local_1f8 = 0;
        FUN_14014191c(local_138,&DAT_14cbc9270,&local_148,0);
      }
      if (local_128 != 0) {
        local_1f8 = 0;
        FUN_140141db6(local_128,&local_138,0,0);
      }
      plVar5 = plStack_140;
      if (plStack_140 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_140 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_140)(plStack_140);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      plVar5 = plStack_130;
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_130 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_130)(plStack_130);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      local_1e4 = local_1e4 & ~(uint)local_1b0;
      puVar10 = *(uint **)(local_1e0 + 0x98);
      if (*(uint **)(local_1e0 + 0x98) == (uint *)0x0) {
        puVar10 = local_1c0;
      }
      uVar26 = *(uint *)(local_1e0 + 0xa0);
      iVar23 = (int)local_1d0;
      lVar21 = (longlong)iVar23;
      uVar7 = puVar10[lVar21] & local_1e4;
      uVar24 = local_1d0;
      if (uVar7 == 0) {
        iVar28 = uVar26 + 0x1e;
        if (-1 < (int)(uVar26 - 1)) {
          iVar28 = uVar26 - 1;
        }
        iVar28 = iVar28 >> 5;
        local_1e8 = local_1e8 + 0x20;
        iVar8 = iVar28;
        if (iVar28 < iVar23) {
          iVar8 = iVar23;
        }
        if (iVar23 < iVar28) {
          lVar16 = 0;
          do {
            uVar7 = puVar10[lVar21 + lVar16 + 1];
            if (uVar7 != 0) {
              local_1e4 = 0xffffffff;
              uVar24 = (ulonglong)(iVar23 + (int)lVar16 + 1);
              goto LAB_1418e3f2e;
            }
            local_1e8 = local_1e8 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar8 - lVar21 != lVar16);
          local_1e4 = 0xffffffff;
          iVar23 = iVar8;
        }
        uVar24 = (ulonglong)(iVar23 + 1);
        uVar7 = uVar26;
      }
      else {
LAB_1418e3f2e:
        local_1b0 = (ulonglong)(-uVar7 & uVar7);
        uVar27 = local_1b0 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        uVar7 = (local_1e8 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if ((int)uVar26 <= (int)uVar7) {
          uVar7 = uVar26;
        }
      }
      param_3 = local_1b8;
    } while (uVar7 != (uint)local_1a0);
  }
LAB_1418e3f7c:
  if (*param_3 != 0) {
    local_1f8 = 0;
    FUN_14014191c(*param_3,&DAT_14cbc91d0,&local_128,0);
  }
  plVar5 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_120 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418e442a FUN_1418e442a body=154 status=ok
// SIG undefined FUN_1418e442a(void)

void FUN_1418e442a(undefined8 *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined *local_38;
  undefined4 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 != (byte *)0x0) && ((~*pbVar1 & 3) == 0)) {
    lVar2 = *(longlong *)(pbVar1 + 8);
    local_30 = &local_3c;
    local_3c = 1;
    local_38 = &DAT_14cbc9360;
    FUN_14049fede(lVar2 + 0x18,&local_24,&local_38,0);
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x28 + (longlong)local_24 * 0x40);
    if (lVar2 != 0) {
      FUN_1404a8912(lVar2,*param_2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e44c5 FUN_1418e44c5 body=647 status=ok
// SIG undefined FUN_1418e44c5(void)

longlong FUN_1418e44c5(longlong *param_1)

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
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      lVar1 = *param_1;
      if (lVar1 == 0) goto LAB_1418e45bf;
    }
    if ((((DAT_14cba8288 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
        (*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
        DAT_14cba8288 + 0x30)) goto LAB_1418e4565;
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      lVar1 = *param_1;
      if (lVar1 == 0) goto LAB_1418e45bf;
    }
    if (((DAT_14cbadd90 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) ||
       ((*(int *)(lVar2 + 0x38) < *(int *)(DAT_14cbadd90 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
         != DAT_14cbadd90 + 0x30)))) {
      lVar1 = FUN_14102013a();
      param_1 = (longlong *)*param_1;
      if (((param_1 != (longlong *)0x0) && (lVar1 != 0)) &&
         ((lVar2 = param_1[2], lVar2 != 0 &&
          (((*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
             lVar1 + 0x30)) && (lVar1 = (**(code **)(*param_1 + 0x5e0))(), lVar1 != 0)))))) {
        lVar2 = FUN_144a2f878();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) goto LAB_1418e4565;
      }
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0xf48);
      if (lVar1 != 0) goto LAB_1418e4565;
    }
  }
LAB_1418e45bf:
  lVar1 = 0;
LAB_1418e4565:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1418e474e FUN_1418e474e body=507 status=ok
// SIG undefined FUN_1418e474e(void)

void FUN_1418e474e(longlong param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = param_2 ^ *(byte *)(param_1 + 0x179);
  iVar1 = *(int *)(param_1 + 0x198);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 400);
    lVar8 = 0;
    do {
      uVar4 = *(ulonglong *)(lVar3 + lVar8);
      if (((uVar4 >> 0x20 != 0) && (uVar5 = (uint)uVar4, -1 < (int)uVar5)) &&
         ((int)uVar5 < DAT_14c9647dc)) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0xd & 0x3fff8)));
        if (((puVar7 != (undefined8 *)0x0) && (*(int *)(puVar7 + 2) == (int)(uVar4 >> 0x20))) &&
           ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
            uVar6 = *puVar7;
          }
          else {
            uVar6 = 0;
          }
          FUN_14045627c(uVar6,param_2,1);
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  if (param_2 == 0) {
    uVar9 = 0;
    uVar10 = 0x3f800000;
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined4 *)(param_1 + 0x1b0);
    uVar11 = *(undefined4 *)(param_1 + 0x1b4);
    uVar9 = *(undefined4 *)(param_1 + 0x1b8);
    uVar10 = *(undefined4 *)(param_1 + 0x1bc);
  }
  iVar1 = *(int *)(param_1 + 0x1a8);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1a0);
    lVar8 = 0;
    do {
      iVar2 = *(int *)(lVar3 + 4 + lVar8);
      if (((iVar2 != 0) && (uVar5 = *(uint *)(lVar3 + lVar8), -1 < (int)uVar5)) &&
         (((int)uVar5 < DAT_14c9647dc &&
          (((puVar7 = (undefined8 *)
                      ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
            puVar7 != (undefined8 *)0x0 && (*(int *)(puVar7 + 2) == iVar2)) &&
           ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))))) {
        if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
          uVar6 = *puVar7;
        }
        else {
          uVar6 = 0;
        }
        local_80 = uVar12;
        local_7c = uVar11;
        local_78 = uVar9;
        local_74 = uVar10;
        FUN_140654ea0(uVar6,DAT_14cbc95f8,&local_80);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e494a FUN_1418e494a body=300 status=ok
// SIG undefined FUN_1418e494a(void)

longlong * FUN_1418e494a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  plVar4 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b96da80;
  *(undefined4 *)(plVar4 + 3) = *(undefined4 *)(param_1 + 8);
  *(undefined2 *)((longlong)plVar4 + 0x1c) = *(undefined2 *)(param_1 + 0xc);
  plVar4[2] = (longlong)&PTR_FUN_14b8f1450;
  cVar3 = *(char *)(param_1 + 0x14);
  *(char *)((longlong)plVar4 + 0x24) = cVar3;
  if (cVar3 == '\x01') {
    *(undefined4 *)(plVar4 + 4) = *(undefined4 *)(param_1 + 0x10);
  }
  plVar4[5] = *(longlong *)(param_1 + 0x18);
  uVar5 = FUN_14477b664(*(undefined8 *)(param_1 + 0x20));
  lVar6 = FUN_14477b664(uVar5);
  plVar4[6] = lVar6;
  plVar4[7] = *(longlong *)(param_1 + 0x28);
  *(undefined4 *)(plVar4 + 9) = *(undefined4 *)(param_1 + 0x38);
  plVar4[8] = *(longlong *)(param_1 + 0x30);
  plVar4[10] = *(longlong *)(param_1 + 0x40);
  uVar5 = FUN_14477b664(*(undefined8 *)(param_1 + 0x48));
  lVar6 = FUN_14477b664(uVar5);
  plVar4[0xb] = lVar6;
  plVar4[0xc] = *(longlong *)(param_1 + 0x50);
  plVar4[0xd] = *(longlong *)(param_1 + 0x58);
  uVar5 = FUN_14477b664(*(undefined8 *)(param_1 + 0x60));
  lVar6 = FUN_14477b664(uVar5);
  plVar4[0xe] = lVar6;
  plVar4[0xf] = *(longlong *)(param_1 + 0x68);
  *param_2 = (longlong)(plVar4 + 2);
  param_2[1] = (longlong)plVar4;
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
  return param_2;
}



// FUNCTION 1418e4a76 FUN_1418e4a76 body=86 status=ok
// SIG undefined FUN_1418e4a76(void)

bool FUN_1418e4a76(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  
  cVar1 = FUN_140d577ec();
  bVar2 = true;
  if (cVar1 == '\0') {
    plVar5 = (longlong *)FUN_140d57cf8();
    if ((plVar5 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar5 + 8))(plVar5), cVar1 != '\0'))
    {
      uVar3 = FUN_147f8323b(param_1);
      iVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,uVar3);
      return iVar4 != 0;
    }
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 1418e4acc FUN_1418e4acc body=48 status=ok
// SIG undefined FUN_1418e4acc(void)

void FUN_1418e4acc(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b96b688);
  FUN_1402d084a(param_1,param_2);
  return;
}



// FUNCTION 1418e4afc FUN_1418e4afc body=182 status=ok
// SIG undefined FUN_1418e4afc(void)

void FUN_1418e4afc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  FUN_140115e24();
  FUN_1402d7906(param_1 + 0x480,param_1 + 0x398);
  for (lVar2 = param_1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x20)) {
    if ((*(uint *)(lVar2 + 8) & 0x30) != 0) goto LAB_1418e4b44;
  }
  FUN_14071049e(param_1 + 0x428,param_1);
LAB_1418e4b44:
  if (((*(uint *)(param_1 + 8) & 0x30) == 0) && (*(longlong *)(param_1 + 0x750) == 0)) {
    plVar1 = (longlong *)(param_1 + 0x740);
    *(longlong **)(param_1 + 0x758) = &DAT_14cbc99a8;
    *(longlong *)(param_1 + 0x750) = param_1;
    lVar2 = DAT_14cbc99a8;
    while( true ) {
      *(longlong *)(param_1 + 0x740) = lVar2;
      LOCK();
      lVar3 = **(longlong **)(param_1 + 0x758);
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        **(longlong **)(param_1 + 0x758) = (longlong)plVar1;
        lVar3 = lVar2;
      }
      UNLOCK();
      if (bVar4) break;
      *(longlong *)(param_1 + 0x740) = lVar3;
      lVar2 = **(longlong **)(param_1 + 0x758);
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return;
}



// FUNCTION 1418e4bb2 FUN_1418e4bb2 body=408 status=ok
// SIG undefined FUN_1418e4bb2(void)

longlong * FUN_1418e4bb2(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [24];
  longlong local_68;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cbc98d8 != 0) goto LAB_1418e4bdd;
  uVar4 = FUN_141118888();
  FUN_14042b5a6(local_80,uVar4);
  FUN_1413e5462(&local_30,local_80);
  plVar1 = local_28;
  plVar5 = DAT_14cbc98e0;
  DAT_14cbc98d8 = local_30;
  if (local_28 == (longlong *)0x0) {
    if (DAT_14cbc98e0 != (longlong *)0x0) {
      DAT_14cbc98e0 = (longlong *)0x0;
LAB_1418e4ccd:
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x0001418e4cf8:
        if (iVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    plVar5 = DAT_14cbc98e0;
    UNLOCK();
    if (local_28 == DAT_14cbc98e0) {
      LOCK();
      plVar5 = local_28 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar5 = plVar1;
        goto joined_r0x0001418e4cf8;
      }
    }
    else {
      DAT_14cbc98e0 = local_28;
      if (plVar5 != (longlong *)0x0) goto LAB_1418e4ccd;
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_28 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_38 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_1418e4bdd:
  *param_2 = DAT_14cbc98d8;
  plVar5 = DAT_14cbc98e0;
  param_2[1] = (longlong)DAT_14cbc98e0;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar5 + 1;
    *(int *)plVar5 = (int)*plVar5 + 1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e4d4c FUN_1418e4d4c body=79 status=ok
// SIG undefined FUN_1418e4d4c(void)

void FUN_1418e4d4c(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401b2056();
  local_28 = 0x24a91d49;
  uStack_24 = 0xb27e4f08;
  uStack_20 = 0x8cfed3fa;
  uStack_1c = 0x1ba04833;
  FUN_1448a256a(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e4d9c FUN_1418e4d9c body=53 status=ok
// SIG undefined FUN_1418e4d9c(void)

void FUN_1418e4d9c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = switchD_143c3d4dc::caseD_57();
  if (lVar1 != 0) {
    return;
  }
  FUN_144862176(param_1 + 0x5b0,param_2);
  return;
}



// FUNCTION 1418e4dd2 FUN_1418e4dd2 body=185 status=ok
// SIG undefined FUN_1418e4dd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418e4dd2(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 1) {
    FUN_1406ba688(param_2,1);
  }
  puVar1 = (undefined8 *)FUN_1403f9e22(param_2);
  *(undefined4 *)(puVar1 + 1) = DAT_14cb7bde8;
  *puVar1 = DAT_14cb7bde0;
  bVar3 = (byte)(*(char *)(param_1 + 0x4b0) - 1U) < 2;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 1;
  *(uint *)(puVar1 + 3) = (uint)bVar3;
  puVar2 = &DAT_14cb7c580;
  if (bVar3) {
    puVar2 = &DAT_14cb7c588;
  }
  puVar1[2] = *puVar2;
  puVar1 = (undefined8 *)FUN_1403f9e22(param_2);
  *puVar1 = _DAT_14cb7bdc8;
  *(undefined4 *)(puVar1 + 1) = DAT_14cb7bdd0;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = DAT_14cb7c580;
  FUN_1403f9d66(param_1 + 0x20,param_2);
  return;
}



// FUNCTION 1418e4e8c FUN_1418e4e8c body=228 status=ok
// SIG undefined FUN_1418e4e8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418e4e8c(longlong param_1,ulonglong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_5;
  FUN_14063fe71(param_1 + 0x20);
  uVar2 = _DAT_14cb7bdcc;
  if ((_DAT_14cb7bdcc == DAT_14c948034) && (uVar2 = DAT_14c948034, DAT_14cb7bdc8 != DAT_14c948030))
  {
    FUN_14011791e(&local_30,DAT_14cb7bdc8,_DAT_14cb7bdcc >> 0x20);
    _DAT_14cb7bdcc = local_30;
    uVar2 = local_30;
  }
  if ((*param_2 == uVar2) && (cVar1 = FUN_1407eda54(*param_3), cVar1 != '\0')) {
    FUN_148d216d8(param_1 + -0x398);
    local_30 = DAT_14cb7c580;
    FUN_140bfca4e(param_1 + 0xe8,&DAT_14cb7bdc8,&local_30,0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418e4f72 FUN_1418e4f72 body=389 status=ok
// SIG undefined FUN_1418e4f72(void)

void FUN_1418e4f72(byte *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar3 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar8 + 0x10);
      bVar9 = uVar3 == 0;
      if (bVar9) {
        *(uint *)(lVar8 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar3 = uVar6;
      }
    }
    uVar5 = (ulonglong)uVar3;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else if (uVar3 == 0) {
      uVar5 = 0;
    }
    else if ((((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) &&
             (plVar4 = (longlong *)
                       ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
             plVar4 != (longlong *)0x0)) &&
            (((*(uint *)(plVar4 + 2) == uVar3 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
             (*plVar4 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),param_3,1);
    }
  }
  FUN_140649f3e(param_1,&local_50);
  local_48 = (ulonglong)uVar7 | uVar5 << 0x20;
  local_40 = param_3;
  bVar2 = FUN_140a28ca8(param_1 + -0x203,local_50);
  *param_1 = *param_1 | bVar2;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418e50f8 FUN_1418e50f8 body=197 status=ok
// SIG undefined FUN_1418e50f8(void)

undefined8 * FUN_1418e50f8(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc9948) {
    FUN_144b3d300(&DAT_14cbc9948);
    if (DAT_14cbc9948 == -1) {
      builtin_wcsncpy(local_48,L"OnActorEnteredResetVolume",0x1a);
      FUN_1446f470e(&DAT_14cbc9940,local_48,1);
      _Init_thread_footer(&DAT_14cbc9948);
    }
  }
  *param_1 = DAT_14cbc9940;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e51be FUN_1418e51be body=389 status=ok
// SIG undefined FUN_1418e51be(void)

void FUN_1418e51be(byte *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar7 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar3 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar8 + 0x10);
      bVar9 = uVar3 == 0;
      if (bVar9) {
        *(uint *)(lVar8 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar3 = uVar6;
      }
    }
    uVar5 = (ulonglong)uVar3;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else if (uVar3 == 0) {
      uVar5 = 0;
    }
    else if ((((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) &&
             (plVar4 = (longlong *)
                       ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
             plVar4 != (longlong *)0x0)) &&
            (((*(uint *)(plVar4 + 2) == uVar3 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
             (*plVar4 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),param_3,1);
    }
  }
  FUN_140e36bbc(param_1,&local_50);
  local_48 = (ulonglong)uVar7 | uVar5 << 0x20;
  local_40 = param_3;
  bVar2 = FUN_140a28ca8(param_1 + -0x204,local_50);
  *param_1 = *param_1 | bVar2;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418e5344 FUN_1418e5344 body=193 status=ok
// SIG undefined FUN_1418e5344(void)

undefined8 * FUN_1418e5344(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc9958) {
    FUN_144b3d300(&DAT_14cbc9958);
    if (DAT_14cbc9958 == -1) {
      builtin_wcsncpy(local_38,L"OnActorExitedVolume",0x14);
      FUN_1446f470e(&DAT_14cbc9950,local_38,1);
      _Init_thread_footer(&DAT_14cbc9958);
    }
  }
  *param_1 = DAT_14cbc9950;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e5406 FUN_1418e5406 body=184 status=ok
// SIG undefined FUN_1418e5406(void)

undefined8 * FUN_1418e5406(undefined8 *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68 [8];
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc9968) {
    FUN_144b3d300(&DAT_14cbc9968);
    if (DAT_14cbc9968 == -1) {
      pwVar2 = L"OnActorEnteredBarVisibilityVolume";
      puVar3 = local_68;
      for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *(undefined8 *)pwVar2;
        pwVar2 = pwVar2 + 4;
        puVar3 = puVar3 + 1;
      }
      local_28 = 0x65;
      FUN_1446f470e(&DAT_14cbc9960,local_68,1);
      _Init_thread_footer(&DAT_14cbc9968);
    }
  }
  *param_1 = DAT_14cbc9960;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e54c0 FUN_1418e54c0 body=1053 status=ok
// SIG undefined FUN_1418e54c0(void)

void FUN_1418e54c0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar5 = DAT_14c762760 + 1;
  *(int *)(puVar6 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar5;
  *puVar6 = &PTR_LAB_14acd0ae0;
  *(undefined4 *)((longlong)puVar6 + 0x14) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(puVar6 + 2) = 0;
    iVar5 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0xc);
    *(uint *)(puVar6 + 2) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar5 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar5 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x14) = iVar5;
  *(undefined1 *)(puVar6 + 3) = 1;
  *puVar6 = &PTR_FUN_14b5afc70;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined1 *)(puVar6 + 6) = 0;
  FUN_1410534e0(puVar6 + 4);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar4 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14b5afcc0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_50[2] = lVar8;
  *local_50 = &PTR_FUN_14b96c090;
  local_50[3] = 0;
  iVar5 = 0;
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_50 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar5 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar5 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar5;
  puVar4[4] = param_4;
  plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b5afca0;
  plVar7[2] = (longlong)local_50;
  local_50 = (undefined8 *)0x0;
  *(int *)(plVar7 + 3) = local_48;
  local_48 = 0;
  if (plVar7 == (longlong *)0x0) {
    puVar6[4] = 0x10;
    plVar10 = (longlong *)puVar6[5];
    if (plVar10 != (longlong *)0x0) {
      puVar6[5] = 0;
LAB_1418e57fd:
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      if (plVar7 != (longlong *)0x0) goto LAB_1418e56bb;
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    puVar6[4] = plVar7 + 2;
    plVar10 = (longlong *)puVar6[5];
    if (plVar7 == plVar10) {
      LOCK();
      plVar10 = plVar7 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    else {
      puVar6[5] = plVar7;
      if (plVar10 != (longlong *)0x0) goto LAB_1418e57fd;
    }
LAB_1418e56bb:
    LOCK();
    plVar10 = plVar7 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_1418e56da;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1418e56da:
  *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x1c8);
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar6;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418e58de FUN_1418e58de body=1053 status=ok
// SIG undefined FUN_1418e58de(void)

void FUN_1418e58de(longlong param_1,longlong param_2,undefined1 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar5 = DAT_14c762760 + 1;
  *(int *)(puVar6 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar5;
  *puVar6 = &PTR_LAB_14acd0ae0;
  *(undefined4 *)((longlong)puVar6 + 0x14) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(puVar6 + 2) = 0;
    iVar5 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0xc);
    *(uint *)(puVar6 + 2) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar5 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar5 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x14) = iVar5;
  *(undefined1 *)(puVar6 + 3) = param_3;
  *puVar6 = &PTR_FUN_14b5afc70;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined1 *)(puVar6 + 6) = 0;
  FUN_1410534e0(puVar6 + 4);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar4 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14b5afcc0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_50[2] = lVar8;
  *local_50 = &PTR_FUN_14b96c330;
  local_50[3] = 0;
  iVar5 = 0;
  if (param_4 != 0) {
    uVar3 = *(uint *)(param_4 + 0xc);
    *(uint *)(local_50 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar5 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar5 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar5;
  puVar4[4] = param_5;
  plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b5afca0;
  plVar7[2] = (longlong)local_50;
  local_50 = (undefined8 *)0x0;
  *(int *)(plVar7 + 3) = local_48;
  local_48 = 0;
  if (plVar7 == (longlong *)0x0) {
    puVar6[4] = 0x10;
    plVar10 = (longlong *)puVar6[5];
    if (plVar10 != (longlong *)0x0) {
      puVar6[5] = 0;
LAB_1418e5c2b:
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      if (plVar7 != (longlong *)0x0) goto LAB_1418e5ae0;
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    puVar6[4] = plVar7 + 2;
    plVar10 = (longlong *)puVar6[5];
    if (plVar7 == plVar10) {
      LOCK();
      plVar10 = plVar7 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    else {
      puVar6[5] = plVar7;
      if (plVar10 != (longlong *)0x0) goto LAB_1418e5c2b;
    }
LAB_1418e5ae0:
    LOCK();
    plVar10 = plVar7 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_1418e5aff;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1418e5aff:
  *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x1c8);
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar6;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418e5cfc FUN_1418e5cfc body=186 status=ok
// SIG undefined FUN_1418e5cfc(void)

int FUN_1418e5cfc(longlong *param_1,uint param_2,undefined8 *param_3)

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
        cVar1 = FUN_140b865d4(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1418e5d7c;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1418e5d7c:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e5db8 FUN_1418e5db8 body=353 status=ok
// SIG undefined FUN_1418e5db8(void)

void FUN_1418e5db8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418e5e3d;
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
LAB_1418e5e3d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418e5f1a FUN_1418e5f1a body=353 status=ok
// SIG undefined FUN_1418e5f1a(void)

void FUN_1418e5f1a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418e5f9f;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1418e5f9f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1418e607c FUN_1418e607c body=29 status=ok
// SIG undefined FUN_1418e607c(void)

undefined8 FUN_1418e607c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418e609a FUN_1418e609a body=106 status=ok
// SIG undefined FUN_1418e609a(void)

void FUN_1418e609a(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == '\x01') {
    FUN_140649f3e(param_1,&local_30);
    cVar1 = FUN_14048e8dc(param_1 + -0x203,local_30,param_2,param_3);
    *param_1 = cVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e6106 FUN_1418e6106 body=106 status=ok
// SIG undefined FUN_1418e6106(void)

void FUN_1418e6106(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == '\x01') {
    FUN_140e36bbc(param_1,&local_30);
    cVar1 = FUN_14048e8dc(param_1 + -0x204,local_30,param_2,param_3);
    *param_1 = cVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e6172 FUN_1418e6172 body=76 status=ok
// SIG undefined FUN_1418e6172(void)

void FUN_1418e6172(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_3 = 0x3ff0000000000000;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = 0;
  }
  lVar1 = FUN_14062842a(uVar2);
  param_3[1] = *(undefined8 *)(&DAT_14b96eff0 + (ulonglong)(*(int *)(lVar1 + 8) == 1) * 8);
  return;
}



// FUNCTION 1418e61be FUN_1418e61be body=97 status=ok
// SIG undefined FUN_1418e61be(void)

undefined8 FUN_1418e61be(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b970b40);
  iVar1 = FUN_1448332aa(param_2,&DAT_14b970b40);
  if (-1 < iVar1) {
    (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b4047d8);
    uVar2 = FUN_1406f8a8a(param_1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1418e6220 FUN_1418e6220 body=600 status=ok
// SIG undefined FUN_1418e6220(void)

void FUN_1418e6220(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140a40ccc();
  lVar2 = FUN_140343d7a(param_1);
  if (lVar2 == 0) {
LAB_1418e6424:
    lVar4 = 0;
    uVar7 = 0;
    iVar1 = 0;
  }
  else {
    uVar3 = FUN_1401b0f18();
    lVar4 = FUN_144718840(lVar2,uVar3);
    if (lVar4 == 0) goto LAB_1418e6424;
    uVar7 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    iVar1 = *(int *)(lVar2 + 0x10);
    if (*(int *)(lVar2 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 0x10);
      bVar8 = iVar1 == 0;
      if (bVar8) {
        *(int *)(lVar2 + 0x10) = iVar6;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar1 = iVar6;
      }
    }
  }
  *(uint *)(param_1 + 0x340) = uVar7;
  *(int *)(param_1 + 0x344) = iVar1;
  *(longlong *)(param_1 + 0x348) = lVar4;
  local_48 = FUN_140343d7a(param_1);
  FUN_1410419f4(&local_40);
  *(undefined4 *)(param_1 + 0x350) = local_40;
  *(undefined4 *)(param_1 + 0x354) = uStack_3c;
  *(undefined4 *)(param_1 + 0x358) = uStack_38;
  *(undefined4 *)(param_1 + 0x35c) = uStack_34;
  if (((((*(int *)(param_1 + 0x100) != 0) && (uVar7 = *(uint *)(param_1 + 0xfc), -1 < (int)uVar7))
       && ((int)uVar7 < DAT_14c9647dc)) &&
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0x100))))) &&
     (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar2 = *plVar5, lVar2 != 0)))) {
    lVar4 = FUN_14016cc74();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      uVar7 = *(uint *)(lVar2 + 0xc);
      *(uint *)(param_1 + 0x360) = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar2 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar2 = 0;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
      if (*(int *)(lVar2 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar1 = *(int *)(lVar2 + 0x10);
        bVar8 = iVar1 == 0;
        if (bVar8) {
          *(int *)(lVar2 + 0x10) = iVar6;
          iVar1 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar1 = iVar6;
        }
      }
      goto LAB_1418e63a0;
    }
  }
  *(undefined4 *)(param_1 + 0x360) = 0;
  iVar1 = 0;
LAB_1418e63a0:
  *(int *)(param_1 + 0x364) = iVar1;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418e647a FUN_1418e647a body=780 status=ok
// SIG undefined FUN_1418e647a(void)

float * FUN_1418e647a(longlong *param_1,float *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double *pdVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = FUN_140343d7a();
  if ((lVar5 == 0) || (param_1[0x1b] == 0)) {
    *param_2 = 0.0;
  }
  else {
    lVar1 = *(longlong *)(lVar5 + 0x1c8);
    if (lVar1 == 0) {
      pdVar6 = &DAT_14c8464e0;
      uVar13 = SUB84(DAT_14c8464f0,0);
      uVar14 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar13 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
      uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
      pdVar6 = (double *)(lVar1 + 0x260);
    }
    dVar11 = *pdVar6;
    dVar10 = pdVar6[1];
    (**(code **)(*param_1 + 0x150))(param_1,&local_b8);
    local_b8 = local_b8 - dVar11;
    local_b0 = local_b0 - dVar10;
    dVar11 = local_b8 * local_b8 + local_b0 * local_b0;
    if ((dVar11 != 1.0) || (NAN(dVar11))) {
      dVar10 = DAT_14c8464e8;
      dVar12 = DAT_14c8464f0;
      dVar8 = DAT_14c8464e0;
      if (9.99999993922529e-09 <= dVar11) {
        dVar10 = local_b0 * (1.0 / SQRT(dVar11));
        dVar12 = 0.0;
        dVar8 = local_b8 * (1.0 / SQRT(dVar11));
      }
    }
    else {
      local_a8 = local_a8 - (double)CONCAT44(uVar14,uVar13);
      dVar10 = local_b0;
      dVar12 = (double)(-(ulonglong)(local_a8 == 0.0) & (ulonglong)local_a8);
      dVar8 = local_b8;
    }
    lVar5 = *(longlong *)(lVar5 + 0x1c8);
    if (lVar5 == 0) {
      dVar11 = 0.0;
      dVar17 = 0.0;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0x3ff00000;
    }
    else {
      dVar11 = *(double *)(lVar5 + 0x240);
      dVar17 = *(double *)(lVar5 + 0x248);
      uVar13 = *(undefined4 *)(lVar5 + 0x250);
      uVar14 = *(undefined4 *)(lVar5 + 0x254);
      uVar15 = *(undefined4 *)(lVar5 + 600);
      uVar16 = *(undefined4 *)(lVar5 + 0x25c);
    }
    dVar2 = (double)CONCAT44(uVar14,uVar13) - dVar11 * 0.0;
    dVar3 = dVar11 * 0.0 - dVar17;
    dVar4 = dVar17 * 0.0 + (double)CONCAT44(uVar14,uVar13) * -0.0;
    dVar3 = dVar3 + dVar3;
    dVar2 = dVar2 + dVar2;
    dVar4 = dVar4 + dVar4;
    fVar7 = (float)(dVar8 * ((dVar17 * dVar3 - dVar2 * (double)CONCAT44(uVar14,uVar13)) +
                            (double)CONCAT44(uVar16,uVar15) * dVar4 + 1.0) +
                    dVar10 * (((double)CONCAT44(uVar14,uVar13) * dVar4 - dVar3 * dVar11) +
                             (double)CONCAT44(uVar16,uVar15) * dVar2 + 0.0) +
                   dVar12 * ((dVar11 * dVar2 - dVar4 * dVar17) +
                            (double)CONCAT44(uVar16,uVar15) * dVar3 + 0.0));
    fVar9 = fVar7;
    if (1.0 <= fVar7) {
      fVar9 = 1.0;
    }
    fVar9 = acosf((float)(-(uint)(fVar7 < -1.0) & 0xbf800000 | ~-(uint)(fVar7 < -1.0) & (uint)fVar9)
                 );
    *param_2 = fVar9 * 57.295776;
  }
  *(undefined1 *)(param_2 + 1) = 1;
  if ((local_a0 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418e6788 FUN_1418e6788 body=2086 status=ok
// SIG undefined FUN_1418e6788(void)

ulonglong FUN_1418e6788(longlong param_1,double *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  undefined7 uVar15;
  ulonglong uVar14;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined8 local_120;
  int local_114;
  undefined8 local_110;
  undefined4 local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 local_d0;
  longlong *plStack_c8;
  undefined4 local_c0;
  double local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  longlong *local_a0;
  double local_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  double local_78;
  double dStack_70;
  longlong *local_68;
  double local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar16 = *(longlong **)(param_1 + 0xf0);
  if (plVar16 == (longlong *)0x0) {
LAB_1418e6e1f:
    FUN_14020fad6(param_3,L"No NavAgent");
    uVar14 = 0;
    goto LAB_1418e6c7f;
  }
  iVar10 = (int)plVar16[1];
  do {
    if (iVar10 == 0) goto LAB_1418e6e1f;
    LOCK();
    iVar9 = (int)plVar16[1];
    bVar19 = iVar10 == iVar9;
    if (bVar19) {
      *(int *)(plVar16 + 1) = iVar10 + 1;
      iVar9 = iVar10;
    }
    iVar10 = iVar9;
    UNLOCK();
  } while (!bVar19);
  lVar6 = *(longlong *)(param_1 + 0xe8);
  if (lVar6 == 0) {
    pwVar13 = L"No NavAgent";
LAB_1418e6e0b:
    FUN_14020fad6(param_3,pwVar13);
    uVar14 = 0;
  }
  else {
    uVar4 = *(uint *)(lVar6 + 0x250);
    plVar18 = *(longlong **)(lVar6 + 0x488);
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
      UNLOCK();
    }
    iVar10 = 1;
    if ((0x14 < uVar4) && (iVar10 = 2, 9 < uVar4 - 0x15)) {
      iVar10 = (uint)(uVar4 == 0x200) * 3;
    }
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))();
      }
    }
    if (1 < *(int *)(lVar6 + 0x260) - 1U) {
      if (*(int *)(lVar6 + 0x260) == 3) goto LAB_1418e6853;
LAB_1418e6e60:
      pwVar13 = L"NavAgent not on NavMesh";
      goto LAB_1418e6e0b;
    }
    if ((*(int *)(lVar6 + 600) == -1) || (*(int *)(lVar6 + 0x25c) == -1)) goto LAB_1418e6e60;
LAB_1418e6853:
    dVar3 = *(double *)(lVar6 + 0x268);
    if ((((dVar3 <= -DAT_14cbc9e58) ||
         ((((DAT_14cbc9e58 <= dVar3 || (*(double *)(lVar6 + 0x270) <= -DAT_14cbc9e60)) ||
           (DAT_14cbc9e60 <= *(double *)(lVar6 + 0x270))) ||
          ((*(double *)(lVar6 + 0x278) <= -DAT_14cbc9e68 ||
           (DAT_14cbc9e68 <= *(double *)(lVar6 + 0x278))))))) ||
        (iVar9 = _finite(dVar3), iVar9 == 0)) ||
       ((iVar9 = _finite(*(double *)(lVar6 + 0x270)), iVar9 == 0 ||
        (iVar9 = _finite(*(double *)(lVar6 + 0x278)), iVar9 == 0)))) goto LAB_1418e6e60;
    lVar7 = *(longlong *)(param_1 + 0xd8);
    if (lVar7 == 0) {
      pwVar13 = L"No NavGoal";
      goto LAB_1418e6e0b;
    }
    if (1 < *(int *)(lVar7 + 0x240) - 1U) {
      if (*(int *)(lVar7 + 0x240) == 3) goto LAB_1418e6963;
LAB_1418e6e01:
      pwVar13 = L"NavGoal not on NavMesh";
      goto LAB_1418e6e0b;
    }
    if ((*(int *)(lVar7 + 0x238) == -1) || (*(int *)(lVar7 + 0x23c) == -1)) goto LAB_1418e6e01;
LAB_1418e6963:
    dVar3 = *(double *)(lVar7 + 0x248);
    if ((((dVar3 <= -DAT_14cbc9e58) ||
         (((DAT_14cbc9e58 <= dVar3 || (*(double *)(lVar7 + 0x250) <= -DAT_14cbc9e60)) ||
          (DAT_14cbc9e60 <= *(double *)(lVar7 + 0x250))))) ||
        (((*(double *)(lVar7 + 600) <= -DAT_14cbc9e68 || (DAT_14cbc9e68 <= *(double *)(lVar7 + 600))
          ) || (iVar9 = _finite(dVar3), iVar9 == 0)))) ||
       ((iVar9 = _finite(*(double *)(lVar7 + 0x250)), iVar9 == 0 ||
        (iVar9 = _finite(*(double *)(lVar7 + 600)), iVar9 == 0)))) goto LAB_1418e6e01;
    local_120 = param_3;
    local_114 = iVar10;
    lVar11 = FUN_1405f939e(param_1);
    uVar5 = DAT_14cb1c840;
    if (lVar11 == 0) {
LAB_1418e6e35:
      pwVar13 = L"No NavManager";
      param_3 = local_120;
      goto LAB_1418e6e0b;
    }
    if (DAT_14c9a7d10 == (undefined1 (*) [16])0x0) {
      DAT_14c9a7d10 = (undefined1 (*) [16])FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = (undefined1  [16])0x0;
      DAT_14c9a7d10[1] = (undefined1  [16])0x0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_b8,uVar5,lVar11);
    plVar18 = plStack_b0;
    dVar3 = local_b8;
    if ((local_b8 == 0.0) || (plStack_b0 == (longlong *)0x0)) {
      plVar18 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plStack_b0 + 0xc) = *(int *)((longlong)plStack_b0 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar17 = plStack_b0 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
    plVar17 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_b0 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    if (plVar18 == (longlong *)0x0) goto LAB_1418e6e35;
    iVar10 = (int)plVar18[1];
    do {
      plVar17 = (longlong *)0x0;
      if (iVar10 == 0) break;
      LOCK();
      iVar9 = (int)plVar18[1];
      bVar19 = iVar10 == iVar9;
      if (bVar19) {
        *(int *)(plVar18 + 1) = iVar10 + 1;
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      UNLOCK();
      plVar17 = plVar18;
    } while (!bVar19);
    LOCK();
    piVar1 = (int *)((longlong)plVar18 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    local_128 = plVar16;
    if (*piVar1 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
    if (plVar17 == (longlong *)0x0) {
      FUN_14020fad6(local_120,L"No NavManager");
      uVar14 = 0;
      plVar16 = local_128;
    }
    else {
      if (dVar3 == 0.0) {
        FUN_14020fad6(local_120,L"No NavManager");
LAB_1418e6efc:
        uVar14 = 0;
        plVar16 = local_128;
      }
      else {
        uVar15 = (undefined7)((ulonglong)dVar3 >> 8);
        if (local_114 == 1) {
          local_60 = -NAN;
          uStack_58 = 0xffffffffffffffff;
          local_98 = dVar3;
          uVar5 = *(undefined4 *)(lVar6 + 0x250);
          local_b8 = *(double *)(lVar6 + 0x5d0);
          local_a8 = *(undefined8 *)(lVar6 + 0x480);
          local_a0 = *(longlong **)(lVar6 + 0x488);
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_a0 + 0xc) = *(int *)((longlong)local_a0 + 0xc) + 1;
            UNLOCK();
          }
          plStack_b0 = (longlong *)CONCAT44(plStack_b0._4_4_,uVar5);
          local_80 = *(undefined8 *)(lVar6 + 0x278);
          dStack_90 = *(double *)(lVar6 + 0x268);
          uStack_88 = *(undefined8 *)(lVar6 + 0x270);
          if (*(int *)(lVar6 + 0x260) == 1) {
            local_60 = *(double *)(lVar6 + 600);
          }
          local_68 = *(longlong **)(lVar7 + 600);
          local_78 = *(double *)(lVar7 + 0x248);
          dStack_70 = *(double *)(lVar7 + 0x250);
          if (*(int *)(lVar7 + 0x240) == 1) {
            uStack_58 = *(undefined8 *)(lVar7 + 0x238);
          }
          cVar8 = FUN_14038d3af(&local_b8,param_2,0);
          plVar16 = local_128;
          uVar14 = CONCAT71(uVar15,1);
          plVar12 = local_a0;
          if ((cVar8 == '\0') &&
             (local_b8._0_4_ * local_b8._0_4_ <
              (float)((param_2[1] - dStack_70) * (param_2[1] - dStack_70) +
                     (*param_2 - local_78) * (*param_2 - local_78)))) {
            FUN_14020fad6(local_120,L"No Nav LineOfSight");
            uVar14 = 0;
            plVar12 = local_a0;
          }
        }
        else {
          if (local_114 != 2) goto LAB_1418e6efc;
          local_a0._0_5_ = (uint5)(uint)local_a0;
          local_60 = dVar3;
          uVar5 = *(undefined4 *)(lVar6 + 0x250);
          local_80 = *(undefined8 *)(lVar6 + 0x5d0);
          dStack_70 = *(double *)(lVar6 + 0x480);
          local_68 = *(longlong **)(lVar6 + 0x488);
          if (local_68 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_68 + 0xc) = *(int *)((longlong)local_68 + 0xc) + 1;
            UNLOCK();
          }
          local_78 = (double)CONCAT44(local_78._4_4_,uVar5);
          local_a8 = *(undefined8 *)(lVar6 + 0x278);
          local_b8 = *(double *)(lVar6 + 0x268);
          plStack_b0 = *(longlong **)(lVar6 + 0x270);
          uStack_88 = *(undefined8 *)(lVar7 + 600);
          local_98 = *(double *)(lVar7 + 0x248);
          dStack_90 = *(double *)(lVar7 + 0x250);
          local_110 = 0xffffffffffffffff;
          local_108 = 0;
          local_100 = DAT_14cbc9e58;
          dStack_f8 = DAT_14cbc9e60;
          local_f0 = DAT_14cbc9e68;
          local_e8 = DAT_14cbc9e58;
          dStack_e0 = DAT_14cbc9e60;
          local_d8 = DAT_14cbc9e68;
          local_d0 = 0;
          plStack_c8 = (longlong *)0x0;
          local_c0 = 0xffffffff;
          iVar10 = FUN_140855e2d(&local_b8,&local_110,0);
          *param_2 = local_100;
          param_2[1] = dStack_f8;
          param_2[2] = local_f0;
          uVar14 = CONCAT71(uVar15,iVar10 == 0);
          if (iVar10 != 0) {
            FUN_14020fad6(local_120,L"No FlightNav LineOfSight");
          }
          plVar18 = plStack_c8;
          plVar16 = local_128;
          plVar12 = local_68;
          if (plStack_c8 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_c8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_c8)(plStack_c8);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar12 = local_68;
              if (*piVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
                plVar12 = local_68;
              }
            }
          }
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))();
          }
        }
      }
      LOCK();
      plVar18 = plVar17 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar16 = local_128;
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
          plVar16 = local_128;
        }
      }
    }
  }
  LOCK();
  plVar18 = plVar16 + 1;
  *(int *)plVar18 = (int)*plVar18 + -1;
  UNLOCK();
  if ((int)*plVar18 == 0) {
    (**(code **)*plVar16)(plVar16);
    LOCK();
    piVar1 = (int *)((longlong)plVar16 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
LAB_1418e6c7f:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 1418e6fb0 FUN_1418e6fb0 body=93 status=ok
// SIG undefined FUN_1418e6fb0(void)

undefined8 * FUN_1418e6fb0(undefined8 *param_1,int param_2)

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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418e700e FUN_1418e700e body=101 status=ok
// SIG undefined FUN_1418e700e(void)

void FUN_1418e700e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9722f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418e7074 FUN_1418e7074 body=109 status=ok
// SIG undefined FUN_1418e7074(void)

ulonglong FUN_1418e7074(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined7 uVar6;
  
  plVar1 = (longlong *)FUN_140343d7a();
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_140a32494();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_140a32494();
      plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
      if ((plVar1 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar4 != 0) {
          uVar5 = CONCAT71(uVar6,(*(byte *)(lVar4 + 0x58) & 0xfe) != 2);
        }
      }
    }
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1418e70e2 FUN_1418e70e2 body=489 status=ok
// SIG undefined FUN_1418e70e2(void)

void FUN_1418e70e2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c15624();
  plVar1 = (longlong *)FUN_140343d7a(param_1);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14c9a4e08 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_1470c76a3;
      local_50 = FUN_1462ab034;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
    }
    lVar2 = (**(code **)(*plVar1 + 0x288))(plVar1,DAT_14c9a4e08);
    if (lVar2 != 0) {
      if (DAT_14c9a4e08 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_1470c76a3;
        local_50 = FUN_1462ab034;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
      }
      lVar3 = FUN_144718840(lVar2,DAT_14c9a4e08);
      if (lVar2 != lVar3) goto LAB_1418e715e;
    }
  }
  lVar3 = 0;
LAB_1418e715e:
  *(longlong *)(param_1 + 0x268) = lVar3;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e72cc FUN_1418e72cc body=1392 status=ok
// SIG undefined FUN_1418e72cc(void)

uint * FUN_1418e72cc(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *_Src;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_f8 [32];
  char local_d8 [8];
  longlong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  int local_b0;
  undefined8 ***local_a8 [3];
  ushort local_90;
  byte local_88;
  undefined8 local_80;
  undefined8 ***local_78 [3];
  ushort local_60;
  byte local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar15 = *(longlong *)(param_1 + 0x48);
  _Src = (undefined8 *)(lVar15 + 0x1a0);
  local_80 = 0;
  bVar3 = *(byte *)(lVar15 + 0x1c0);
  local_60 = *(ushort *)(lVar15 + 0x1b8);
  ppppuVar9 = local_78;
  if (0x18 < local_60) {
    local_78[0] = (undefined8 ***)FUN_14001cc68(local_60,0);
    _Src = (undefined8 *)*_Src;
    ppppuVar9 = (undefined8 ****)local_78[0];
  }
  uVar8 = (ulonglong)((uint)bVar3 * 0x120);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + uVar8);
  if (pcVar4 == (code *)0x0) {
    memcpy(ppppuVar9,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
  }
  else {
    (*pcVar4)(ppppuVar9,_Src);
  }
  local_58 = *(byte *)(lVar15 + 0x1c0);
  local_50 = 7;
  lVar15 = *(longlong *)(param_1 + 0x40);
  if (lVar15 == 0) {
    lVar14 = 0;
    param_1 = 0;
  }
  else {
    if (*(int *)(lVar15 + 0x4c) == 0) {
LAB_1418e75e6:
      lVar14 = 0;
    }
    else {
      uVar7 = *(uint *)(lVar15 + 0x48);
      lVar14 = 0;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != *(int *)(lVar15 + 0x4c) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1418e75e6;
        lVar14 = *plVar13;
      }
    }
    plVar13 = *(longlong **)(lVar15 + 0x118);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar13 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      LOCK();
      *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
      UNLOCK();
      bVar18 = false;
      local_d0 = param_1;
      local_c8 = plVar13;
      goto LAB_1418e741c;
    }
  }
  local_c8 = (longlong *)0x0;
  bVar18 = true;
  local_d0 = param_1;
LAB_1418e741c:
  plVar13 = local_c8;
  local_b0 = 0;
  local_d8[0] = '\x03';
  local_c0._0_4_ = 0;
  if (lVar14 == 0) {
    iVar6 = 0;
    uVar7 = (uint)local_c0;
  }
  else {
    uVar7 = *(uint *)(lVar14 + 0xc);
    local_c0 = (ulonglong)uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar6 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar6 = *(int *)(lVar15 + 0x10);
      bVar19 = iVar6 == 0;
      if (bVar19) {
        *(int *)(lVar15 + 0x10) = iVar12;
        iVar6 = 0;
      }
      UNLOCK();
      uVar7 = (uint)local_c0;
      if (bVar19) {
        iVar6 = iVar12;
      }
    }
  }
  local_c0._0_4_ = uVar7;
  local_c0 = CONCAT44(iVar6,(uint)local_c0);
  local_b8 = 2;
  if (local_b0 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_b0 + -1,1);
    local_b0 = 0;
  }
  if (!bVar18) {
    LOCK();
    piVar2 = (int *)((longlong)plVar13 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  FUN_1447c3578(&local_80,local_a8,local_d8);
  lVar15 = FUN_14030a32e(local_a8);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar9 = local_a8;
    if (0x18 < local_90) {
      ppppuVar9 = (undefined8 ****)local_a8[0];
    }
    (*pcVar4)(ppppuVar9);
  }
  if (0x18 < local_90) {
    FUN_1400020a8(local_a8[0]);
  }
  lVar14 = DAT_14c9a3da0;
  if ((longlong)local_b0 != 0) {
    lVar17 = (longlong)local_b0 + -1;
    lVar16 = lVar17 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
    if (*(longlong *)(lVar14 + lVar16) != 0) {
      FUN_1400020a8();
    }
    lVar14 = DAT_14c9a3da0;
    iVar6 = (int)lVar17;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
    }
    *(undefined4 *)(lVar14 + lVar16) = 0xffffffff;
    iVar12 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar12 = DAT_14c9a3dd0;
    }
    *(int *)(lVar14 + 4 + lVar16) = iVar12;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar10 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar10 = DAT_14c9a3dc0;
    }
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    bVar3 = (byte)lVar17 & 0x1f;
    DAT_14c9a3dd0 = iVar6;
    *(uint *)(puVar10 + (longlong)(iVar12 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar12 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_b0 = 0;
  }
  if ((local_d8[0] == '\x03') && (local_c8 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_c8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_c8 + 0x10))();
    }
  }
  if (lVar15 == 0) {
    *(undefined2 *)(param_2 + 6) = 0;
    uVar5 = 0;
  }
  else {
    *(undefined2 *)(param_2 + 6) = 8;
    param_2[1] = 0;
    uVar7 = *(uint *)(lVar15 + 0xc);
    *param_2 = uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    uVar7 = *(uint *)(lVar15 + 0x10);
    if (*(uint *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar11 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar11);
      }
      LOCK();
      uVar7 = *(uint *)(lVar15 + 0x10);
      bVar18 = uVar7 == 0;
      if (bVar18) {
        *(uint *)(lVar15 + 0x10) = uVar11;
        uVar7 = 0;
      }
      UNLOCK();
      if (bVar18) {
        uVar7 = uVar11;
      }
    }
    param_2[1] = uVar7;
    uVar5 = 7;
  }
  *(undefined1 *)(param_2 + 8) = uVar5;
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar9 = local_78;
    if (0x18 < local_60) {
      ppppuVar9 = (undefined8 ****)local_78[0];
    }
    (*pcVar4)(ppppuVar9);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1418e783e FUN_1418e783e body=721 status=ok
// SIG undefined FUN_1418e783e(void)

ulonglong FUN_1418e783e(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  undefined1 auStack_98 [36];
  int local_74;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  uint *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(uint *)(param_1 + 0x228);
  if (uVar1 == 0) {
    uVar12 = 1;
    uVar14 = 0;
    uVar2 = 0;
    iVar4 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x220);
    if (*(uint **)(param_1 + 0x220) == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 0x210);
    }
    uVar2 = *puVar9;
    if (uVar2 == 0) {
      iVar4 = uVar1 + 0x1e;
      if (-1 < (int)(uVar1 - 1)) {
        iVar4 = uVar1 - 1;
      }
      uVar3 = 0;
      uVar12 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar12 = uVar3;
      }
      uVar14 = 0;
      iVar4 = 0;
      do {
        if (uVar12 == uVar14) goto LAB_1418e7a6c;
        iVar4 = iVar4 + 0x20;
        uVar2 = puVar9[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar2 == 0);
    }
    else {
      uVar14 = 0;
      iVar4 = 0;
    }
    uVar12 = (ulonglong)(-uVar2 & uVar2);
    uVar3 = uVar12 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar2 = (iVar4 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if ((int)uVar1 <= (int)uVar2) {
      uVar2 = uVar1;
    }
  }
  if (uVar2 != uVar1) {
    uVar5 = 0xffffffff;
    local_70 = (ulonglong)uVar1;
    local_68 = param_1;
    local_60 = param_2;
    local_58 = (uint *)(param_1 + 0x210);
    do {
      lVar7 = *(longlong *)(local_68 + 0x200);
      lVar8 = *(longlong *)(lVar7 + (longlong)(int)uVar2 * 0x28);
      puVar15 = *(undefined4 **)(local_60 + 8);
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = &DAT_14c9485f0;
      }
      local_74 = iVar4;
      if (DAT_14c947fe0 == 0) {
        lVar6 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar6);
        DAT_14c947fe0 = lVar6;
      }
      FUN_140045924(DAT_14c947fe0,&local_50,puVar15,1);
      if (lVar8 == local_50) {
LAB_1418e7a9e:
        uVar3 = lVar7 + (longlong)(int)uVar2 * 0x28 + 0x18;
        goto LAB_1418e7a6c;
      }
      if ((longlong)*(int *)(local_60 + 0xe0) != 0) {
        lVar6 = 0;
        do {
          if (*(longlong *)(*(longlong *)(local_60 + 0xd8) + lVar6) == lVar8) goto LAB_1418e7a9e;
          lVar6 = lVar6 + 8;
        } while ((longlong)*(int *)(local_60 + 0xe0) * 8 != lVar6);
      }
      uVar5 = uVar5 & ~(uint)uVar12;
      puVar9 = *(uint **)(local_68 + 0x220);
      if (*(uint **)(local_68 + 0x220) == (uint *)0x0) {
        puVar9 = local_58;
      }
      uVar1 = *(uint *)(local_68 + 0x228);
      iVar13 = (int)uVar14;
      lVar7 = (longlong)iVar13;
      uVar2 = puVar9[lVar7] & uVar5;
      iVar4 = local_74;
      if (uVar2 == 0) {
        iVar10 = uVar1 + 0x1e;
        if (-1 < (int)(uVar1 - 1)) {
          iVar10 = uVar1 - 1;
        }
        iVar10 = iVar10 >> 5;
        iVar4 = local_74 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar13) {
          iVar11 = iVar13;
        }
        if (iVar13 < iVar10) {
          lVar8 = 0;
          do {
            uVar2 = puVar9[lVar7 + lVar8 + 1];
            if (uVar2 != 0) {
              uVar14 = (ulonglong)(iVar13 + (int)lVar8 + 1);
              uVar5 = 0xffffffff;
              goto LAB_1418e7a27;
            }
            iVar4 = iVar4 + 0x20;
            lVar8 = lVar8 + 1;
          } while (iVar11 - lVar7 != lVar8);
          uVar5 = 0xffffffff;
          iVar13 = iVar11;
        }
        uVar14 = (ulonglong)(iVar13 + 1);
        uVar2 = uVar1;
      }
      else {
LAB_1418e7a27:
        uVar12 = (ulonglong)(-uVar2 & uVar2);
        uVar3 = uVar12 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar2 = (iVar4 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if ((int)uVar1 <= (int)uVar2) {
          uVar2 = uVar1;
        }
      }
    } while (uVar2 != (uint)local_70);
  }
  uVar3 = 0;
LAB_1418e7a6c:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1418e7b10 FUN_1418e7b10 body=306 status=ok
// SIG undefined FUN_1418e7b10(void)

undefined8 FUN_1418e7b10(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x83c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x838);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar3 != 0) &&
         ((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x83c) &&
          ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
        lVar3 = FUN_14479d2ce();
        local_50 = *(undefined2 **)(lVar3 + 0x18);
        FUN_1400021e4(&local_50,&local_40);
        goto LAB_1418e7b8f;
      }
    }
  }
  FUN_140056680(&local_40,&DAT_149e30aac);
LAB_1418e7b8f:
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  local_30 = *(undefined8 *)(param_1 + -0x3c0);
  FUN_1400021e4(&local_30,&local_50);
  puVar4 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar4 = local_50;
  }
  FUN_140002266(param_2,L"%s_%s",puVar4,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e7c4a FUN_1418e7c4a body=564 status=ok
// SIG undefined FUN_1418e7c4a(void)

void FUN_1418e7c4a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  longlong local_68;
  longlong lStack_60;
  uint local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 0x48);
  local_47 = *(undefined1 *)(lVar1 + 0x78);
  local_4c = *(undefined4 *)(param_1 + 0x58);
  lVar2 = *param_2;
  lStack_60 = param_2[1];
  local_54 = 0x3f80000000000000;
  local_48 = 0;
  uVar3 = (uint)lStack_60;
  uVar5 = 0;
  local_68 = lVar2;
  if ((uint)lStack_60 == 0) {
LAB_1418e7cf7:
    local_58 = uVar5;
    if (uVar5 < (uint)lStack_60) {
      do {
        uVar5 = local_58;
        lVar4 = FUN_14030a32e((longlong)(int)local_58 * 0x38 + lVar2);
        if (lVar4 == 0) {
LAB_1418e7e78:
          bVar6 = false;
        }
        else {
          if (DAT_14cba8288 == 0) {
            local_80 = &local_40;
            local_40 = FUN_141864c34;
            local_70 = FUN_14081d0ea;
            local_78 = &LAB_1464cee30;
            local_88 = &LAB_148bfac22;
            local_90 = &LAB_140f21842;
            local_98 = &DAT_149e063b2;
            local_a0 = 0;
            local_a8 = 0x10000004;
            local_b0 = 0x10;
            local_b8 = 0x9cd0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
          }
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30))
          goto LAB_1418e7e78;
          bVar6 = *(char *)(lVar4 + 0x73eb) == '\x01';
        }
        FUN_1402d7d58(&local_68,(bool)*(char *)(lVar1 + 0x80) != bVar6);
        local_58 = uVar5 + 1;
        if ((local_58 < uVar3) &&
           ((*(byte *)(lVar2 + 0x34 + (longlong)(int)local_58 * 0x38) & 1) != 0)) {
          uVar5 = uVar5 + 2;
          do {
            local_58 = uVar3;
            if (uVar3 == uVar5) break;
            lVar4 = (longlong)(int)uVar5;
            local_58 = uVar5;
            uVar5 = uVar5 + 1;
          } while ((*(byte *)(lVar2 + 0x34 + lVar4 * 0x38) & 1) != 0);
        }
      } while (local_58 < uVar3);
    }
  }
  else {
    do {
      if ((*(byte *)(lVar2 + 0x34 + (longlong)(int)uVar5 * 0x38) & 1) == 0) goto LAB_1418e7cf7;
      uVar5 = uVar5 + 1;
    } while ((uint)lStack_60 != uVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418e7e86 FUN_1418e7e86 body=46 status=ok
// SIG undefined FUN_1418e7e86(void)

void FUN_1418e7e86(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x2500) = 0;
  FUN_140283eaa(param_1 + 0x2568,0);
  FUN_140521022(param_1);
  return;
}



// FUNCTION 1418e7eb4 FUN_1418e7eb4 body=66 status=ok
// SIG undefined FUN_1418e7eb4(void)

void FUN_1418e7eb4(undefined8 param_1,longlong param_2)

{
  FUN_140907f04();
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbcb0b8,0);
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbcb0e0,0);
  return;
}



// FUNCTION 1418e7ef6 FUN_1418e7ef6 body=116 status=ok
// SIG undefined FUN_1418e7ef6(void)

void FUN_1418e7ef6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar3 = (longlong *)(param_1 + 0x78);
    if (*(int *)(param_1 + 0x30) <= *(int *)(param_1 + 0x5c)) {
      FUN_140283eaa(plVar3,0);
      return;
    }
    if (*(longlong *)(param_1 + 0x88) == 0) {
      *(longlong **)(param_1 + 0x90) = &DAT_14cbcb330;
      *(longlong *)(param_1 + 0x88) = param_1;
      lVar1 = DAT_14cbcb330;
      while( true ) {
        *(longlong *)(param_1 + 0x78) = lVar1;
        LOCK();
        lVar2 = **(longlong **)(param_1 + 0x90);
        bVar4 = lVar1 == lVar2;
        if (bVar4) {
          **(longlong **)(param_1 + 0x90) = (longlong)plVar3;
          lVar2 = lVar1;
        }
        UNLOCK();
        if (bVar4) break;
        *(longlong *)(param_1 + 0x78) = lVar2;
        lVar1 = **(longlong **)(param_1 + 0x90);
      }
      if (*plVar3 != 0) {
        *(longlong **)(*plVar3 + 8) = plVar3;
      }
    }
  }
  return;
}



// FUNCTION 1418e7f6a FUN_1418e7f6a body=406 status=ok
// SIG undefined FUN_1418e7f6a(void)

void FUN_1418e7f6a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != (longlong *)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar2 = DAT_14c950c29;
  *param_1 = (longlong)param_2;
  if ((param_2 == (longlong *)0x0) || ((bVar2 & 1) == 0)) {
    param_1[1] = (longlong)param_2;
  }
  else {
    FUN_1456cec3c(param_2);
    param_1[1] = (longlong)param_2;
    param_2 = (longlong *)*param_1;
  }
  if (param_2 != (longlong *)0x0) {
    uVar4 = FUN_140437cd0();
    lVar5 = (**(code **)(*param_2 + 0x288))(param_2,uVar4);
    if (lVar5 != 0) {
      uVar4 = FUN_140437cd0();
      lVar6 = FUN_144718840(lVar5,uVar4);
      if (lVar5 != lVar6) goto LAB_1418e7ff6;
    }
  }
  lVar6 = 0;
LAB_1418e7ff6:
  param_1[2] = lVar6;
  FUN_1446f470e(&local_28,L"OnGrappleBeamFinished",1);
  if (*param_1 == 0) {
    *(undefined4 *)(param_1 + 0x52) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(*param_1 + 0xc);
    *(uint *)(param_1 + 0x52) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar8 = iVar3 == 0;
      if (bVar8) {
        *(int *)(lVar5 + 0x10) = iVar7;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar3 = iVar7;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x294) = iVar3;
  param_1[0x53] = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418e8102 FUN_1418e8102 body=46 status=ok
// SIG undefined FUN_1418e8102(void)

void FUN_1418e8102(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x2500) = 0;
  FUN_140283eaa(param_1 + 0x2568,0);
  FUN_140521022(param_1);
  return;
}



// FUNCTION 1418e8130 FUN_1418e8130 body=40 status=ok
// SIG undefined FUN_1418e8130(void)

undefined8 FUN_1418e8130(undefined8 param_1,int param_2)

{
  FUN_140893974();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418e8158 FUN_1418e8158 body=656 status=ok
// SIG undefined FUN_1418e8158(void)

double * FUN_1418e8158(double *param_1,longlong param_2,float param_3,float param_4,float param_5,
                      char param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  int iVar7;
  double dVar8;
  longlong lVar9;
  double *pdVar10;
  uint uVar11;
  double *pdVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  double local_70;
  
  dVar8 = (double)(DAT_14c707940 ^ (ulonglong)auStack_c8);
  lVar9 = *(longlong *)(param_2 + 0x1c8);
  uVar13 = (undefined4)DAT_14c846500;
  uVar14 = DAT_14c846500._4_4_;
  local_70 = dVar8;
  if (lVar9 != 0) {
    dVar5 = *(double *)(lVar9 + 0x240);
    dVar1 = *(double *)(lVar9 + 0x248);
    dVar3 = *(double *)(lVar9 + 0x250);
    dVar2 = *(double *)(lVar9 + 600);
    pdVar10 = *(double **)(lVar9 + 0x228);
    pdVar12 = param_1;
    local_a8 = dVar5;
    uStack_a0 = dVar1;
    local_98 = dVar3;
    uStack_90 = dVar2;
    if (pdVar10 == (double *)0x0) {
      pdVar12 = (double *)&DAT_00000040;
      pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
      dVar8 = DAT_14c8463d8;
      *pdVar10 = DAT_14c8463d0;
      pdVar10[1] = dVar8;
      dVar8 = DAT_14c8463e8;
      pdVar10[2] = DAT_14c8463e0;
      pdVar10[3] = dVar8;
      uVar15 = DAT_14c846500._4_4_;
      uVar14 = (undefined4)DAT_14c846500;
      uVar13 = DAT_14c8464f8._4_4_;
      *(undefined4 *)(pdVar10 + 4) = (undefined4)DAT_14c8464f8;
      *(undefined4 *)((longlong)pdVar10 + 0x24) = uVar13;
      *(undefined4 *)(pdVar10 + 5) = uVar14;
      *(undefined4 *)((longlong)pdVar10 + 0x2c) = uVar15;
      dVar8 = DAT_14c846508;
      pdVar10[6] = DAT_14c846508;
      *(double **)(lVar9 + 0x228) = pdVar10;
    }
    auVar4._8_4_ = (int)-(ulonglong)(dVar1 != pdVar10[1]);
    auVar4._0_8_ = -(ulonglong)(dVar5 != *pdVar10);
    auVar4._12_4_ = (int)(-(ulonglong)(dVar1 != pdVar10[1]) >> 0x20);
    iVar7 = movmskpd(SUB84(dVar8,0),auVar4);
    auVar6._8_4_ = (int)-(ulonglong)(dVar2 != pdVar10[3]);
    auVar6._0_8_ = -(ulonglong)(dVar3 != pdVar10[2]);
    auVar6._12_4_ = (int)(-(ulonglong)(dVar2 != pdVar10[3]) >> 0x20);
    uVar11 = movmskpd((int)pdVar12,auVar6);
    if ((uVar11 & 0x3fffffff) != 0 || iVar7 != 0) {
      *(undefined4 *)(pdVar10 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)pdVar10 + 0x14) = local_98._4_4_;
      *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_90._4_4_;
      *(undefined4 *)pdVar10 = (undefined4)local_a8;
      *(undefined4 *)((longlong)pdVar10 + 4) = local_a8._4_4_;
      *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_a0._4_4_;
      FUN_1448052ee(&local_a8,&local_88);
      pdVar10[6] = local_78;
      *(undefined4 *)(pdVar10 + 4) = local_88;
      *(undefined4 *)((longlong)pdVar10 + 0x24) = uStack_84;
      *(undefined4 *)(pdVar10 + 5) = uStack_80;
      *(undefined4 *)((longlong)pdVar10 + 0x2c) = uStack_7c;
    }
    uVar13 = SUB84(pdVar10[5],0);
    uVar14 = (int)((ulonglong)pdVar10[5] >> 0x20);
  }
  uVar15 = SUB84((double)param_5,0);
  lVar9 = FUN_140c4e3ec();
  if ((((0.0001 < param_4) && (*(char *)(lVar9 + 0xd0) == '\x01')) && (param_6 == '\0')) &&
     (param_5 <= *(float *)(lVar9 + 0xd4))) {
    uVar15 = SUB84((double)*(float *)(lVar9 + 0xd4),0);
  }
  dVar5 = (double)FUN_144719204(uVar15,0);
  dVar3 = (double)FUN_144719204(SUB84((double)CONCAT44(uVar14,uVar13) + (double)param_3,0),0);
  dVar8 = sin(dVar5 * 0.017453292519943295);
  dVar5 = cos(dVar5 * 0.017453292519943295);
  dVar1 = sin(dVar3 * 0.017453292519943295);
  dVar3 = cos(dVar3 * 0.017453292519943295);
  dVar2 = (double)param_4;
  *param_1 = dVar3 * dVar5 * dVar2;
  param_1[1] = dVar1 * dVar5 * dVar2;
  param_1[2] = dVar8 * dVar2;
  if (((ulonglong)local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1418e83ea FUN_1418e83ea body=98 status=ok
// SIG undefined FUN_1418e83ea(void)

undefined8 * FUN_1418e83ea(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
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
    }
  }
  return param_1;
}



// FUNCTION 1418e844c FUN_1418e844c body=1443 status=ok
// SIG undefined FUN_1418e844c(void)

undefined1 *
FUN_1418e844c(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\0') {
    lVar3 = FUN_1447262c2(param_4);
    if (lVar3 != 0) {
      if (DAT_14cb939a8 == 0) {
        local_40 = &local_28;
        local_28 = FUN_140940982;
        local_30 = FUN_14081d0ea;
        local_38 = (code *)&LAB_146522c26;
        local_48 = &LAB_148a0db91;
        local_50 = (code *)&LAB_146572ba7;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 8;
        local_78 = 0xdd8;
        FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
      }
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cb939a8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) != DAT_14cb939a8 + 0x30))
      goto LAB_1418e84b6;
LAB_1418e86a8:
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined4 *)(param_2 + 0x3c) = 1;
LAB_1418e86b7:
      *(undefined4 *)(param_2 + 0x38) = 1;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      FUN_1456bb102(param_2,lVar3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
LAB_1418e84b6:
    plVar4 = (longlong *)FUN_1447262c2(param_4);
    if (plVar4 != (longlong *)0x0) {
      if (DAT_14cb94538 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148a18249;
        local_50 = FUN_14657713c;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,DAT_14cb94538);
      if (plVar4 != (longlong *)0x0) {
        if (DAT_14cb94538 == 0) {
          local_40 = &local_28;
          local_28 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_1427b09ee;
          local_48 = &LAB_148a18249;
          local_50 = FUN_14657713c;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10004001;
          local_70 = 8;
          local_78 = 0x28;
          FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
        }
        plVar5 = (longlong *)FUN_144718840(plVar4,DAT_14cb94538);
        if ((((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) &&
            (lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5), 0 < *(int *)(lVar3 + 0xa8))) &&
           (lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5), 0 < *(int *)(lVar3 + 0xa8))) {
          lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xa0) + 0x20);
          if ((DAT_14c950c29 != '\x01') || (lVar3 == 0)) goto LAB_1418e8568;
          FUN_1456cec3c(lVar3);
          goto LAB_1418e86a8;
        }
      }
    }
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x01') goto LAB_1418e8994;
      lVar3 = FUN_141020ddc(param_4);
      if (lVar3 != 0) goto LAB_1418e86a8;
      lVar3 = FUN_1400e8a68(param_4);
      if (lVar3 == 0) goto LAB_1418e8994;
      lVar3 = FUN_14018ffce(lVar3);
LAB_1418e8568:
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0x100000000;
      if (lVar3 != 0) goto LAB_1418e86b7;
      goto LAB_1418e8587;
    }
    plVar4 = (longlong *)FUN_1447262c2(param_4);
    if (plVar4 == (longlong *)0x0) {
LAB_1418e85d9:
      lVar3 = FUN_1400e8a68(param_4);
      if ((((lVar3 != 0) && (uVar2 = FUN_1403ae46b(), -1 < (int)uVar2)) &&
          ((int)uVar2 < *(int *)(lVar3 + 0x78f0))) &&
         (((lVar3 = (ulonglong)uVar2 * 0x48 + *(longlong *)(lVar3 + 0x78e8), lVar3 != 0 &&
           (*(longlong *)(lVar3 + 0x20) != 0)) &&
          ((*(longlong **)(lVar3 + 0x28) != (longlong *)0x0 &&
           (lVar3 = (**(code **)(**(longlong **)(lVar3 + 0x28) + 8))(), lVar3 != 0)))))) {
        uVar6 = FUN_1403ae386();
        plVar5 = (longlong *)FUN_144718840(lVar3,uVar6);
        if (plVar5 != (longlong *)0x0) goto LAB_1418e8660;
      }
    }
    else {
      uVar6 = FUN_1403ae386();
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar6);
      if (plVar4 == (longlong *)0x0) goto LAB_1418e85d9;
      uVar6 = FUN_1403ae386();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar6);
      if (plVar4 == plVar5 || plVar5 == (longlong *)0x0) goto LAB_1418e85d9;
LAB_1418e8660:
      lVar3 = (**(code **)(*plVar5 + 8))(plVar5);
      if (lVar3 != 0) {
        if (DAT_14cac9ca8 == 0) {
          local_40 = &local_28;
          local_28 = FUN_141030f22;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_14081d0ea;
          local_48 = &LAB_1478c0a72;
          local_50 = (code *)&LAB_1417b2375;
          local_58 = L"Engine";
          local_60 = 0x1000000000;
          local_68 = 0x10000004;
          local_70 = 8;
          local_78 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30))
        goto LAB_1418e86a8;
      }
    }
  }
LAB_1418e8994:
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
LAB_1418e8587:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e89f0 FUN_1418e89f0 body=157 status=ok
// SIG undefined FUN_1418e89f0(void)

void FUN_1418e89f0(longlong param_1,longlong param_2,byte param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0 && (param_3 & 1) != 0) {
    uVar1 = FUN_1403ae386();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      local_38 = *(undefined8 *)(param_1 + 0x30);
      uVar1 = FUN_14477b664(*(undefined8 *)(param_1 + 0x38));
      local_30 = FUN_14477b664(uVar1);
      local_28 = *(undefined8 *)(param_1 + 0x40);
      (**(code **)(*plVar2 + 0xb8))(plVar2,&local_38);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e8a8e FUN_1418e8a8e body=40 status=ok
// SIG undefined FUN_1418e8a8e(void)

undefined8 FUN_1418e8a8e(undefined8 param_1,int param_2)

{
  FUN_14097122c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418e8ab6 FUN_1418e8ab6 body=149 status=ok
// SIG undefined FUN_1418e8ab6(void)

void FUN_1418e8ab6(longlong param_1)

{
  *(undefined2 **)(param_1 + 0xb0) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_140115c12(param_1 + 0xc0,0);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_1403e0ff1(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1418e8b4c FUN_1418e8b4c body=373 status=ok
// SIG undefined FUN_1418e8b4c(void)

void FUN_1418e8b4c(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x88;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418e8bd8;
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
LAB_1418e8bd8:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x88)) {
    uVar7 = uVar5 / 0x88 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x88,8);
  return;
}



// FUNCTION 1418e8cc2 FUN_1418e8cc2 body=93 status=ok
// SIG undefined FUN_1418e8cc2(void)

void FUN_1418e8cc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b975cc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b975c50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1418e8d20 FUN_1418e8d20 body=21 status=ok
// SIG undefined FUN_1418e8d20(void)

undefined8 FUN_1418e8d20(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1418e8d36 FUN_1418e8d36 body=567 status=ok
// SIG undefined FUN_1418e8d36(void)

void FUN_1418e8d36(void)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  undefined4 *local_48;
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbcb660 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cbcb660,0,0,4);
  }
  uVar6 = DAT_14cbcb668;
  if (DAT_14cbcb668 != 0) {
    FUN_144a1cbf0(&DAT_14cbcb658,0,DAT_14cbcb668,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        puVar8 = DAT_14cbcb660;
        if (DAT_14cbcb660 == (undefined *)0x0) {
          puVar8 = &DAT_14cbcb658;
        }
        *(undefined4 *)(puVar8 + (ulonglong)(DAT_14cbcb668 + 0x7fffffff & uVar4) * 4) = 0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14cbcb630;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14cbcb648 == 0) {
      uVar9 = 1;
      local_40._0_4_ = 0xffffffff;
      local_40._4_4_ = 0;
      local_50._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      uVar9 = local_50 >> 0x20;
    }
    iVar5 = (int)local_50;
    uVar6 = (uint)local_40;
    iVar7 = local_40._4_4_;
    iVar10 = local_38;
    if (local_40._4_4_ < (int)local_48[6]) {
      do {
        lVar13 = DAT_14cbcb620;
        lVar12 = (longlong)iVar7;
        uVar4 = DAT_14cbcb668 - 1 & (uint)*(byte *)(DAT_14cbcb620 + lVar12 * 0x14);
        *(uint *)(DAT_14cbcb620 + 0x10 + lVar12 * 0x14) = uVar4;
        puVar8 = DAT_14cbcb660;
        if (DAT_14cbcb660 == (undefined *)0x0) {
          puVar8 = &DAT_14cbcb658;
        }
        *(undefined4 *)(lVar13 + 0xc + lVar12 * 0x14) =
             *(undefined4 *)(puVar8 + (ulonglong)(DAT_14cbcb668 - 1 & uVar4) * 4);
        puVar8 = DAT_14cbcb660;
        if (DAT_14cbcb660 == (undefined *)0x0) {
          puVar8 = &DAT_14cbcb658;
        }
        *(int *)(puVar8 + (ulonglong)(DAT_14cbcb668 - 1 & uVar4) * 4) = iVar7;
        uVar6 = ~(uint)uVar9 & uVar6;
        puVar11 = *(undefined4 **)(local_48 + 4);
        if (*(undefined4 **)(local_48 + 4) == (undefined4 *)0x0) {
          puVar11 = local_48;
        }
        iVar2 = local_48[6];
        lVar13 = (longlong)iVar5;
        uVar4 = puVar11[lVar13] & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar12 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar4 = puVar11[lVar13 + lVar12 + 1];
            if (uVar4 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar3 - lVar13 == lVar12) goto LAB_1418e8f2a;
          }
          iVar5 = iVar5 + (int)lVar12 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar9 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar7 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar2);
    }
  }
LAB_1418e8f2a:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e8f6e FUN_1418e8f6e body=353 status=ok
// SIG undefined FUN_1418e8f6e(void)

void FUN_1418e8f6e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418e8ff5;
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
LAB_1418e8ff5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418e90d0 FUN_1418e90d0 body=121 status=ok
// SIG undefined FUN_1418e90d0(void)

void FUN_1418e90d0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
  }
  FUN_140154c96(local_40,param_2);
  FUN_1448618b0(param_1 + 0x20,local_40,uVar1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e914a FUN_1418e914a body=653 status=ok
// SIG undefined FUN_1418e914a(void)

void FUN_1418e914a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  FUN_140a3299c(param_1 + 0x120);
  *(undefined ***)(param_1 + 0xe0) = &PTR_FUN_14b695510;
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x114) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x114) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x108) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x108) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xfc) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0xfc) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0xf0) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0xf0) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  FUN_140368b56(param_1 + 8);
  return;
}



// FUNCTION 1418e93d8 FUN_1418e93d8 body=154 status=ok
// SIG undefined FUN_1418e93d8(void)

longlong * FUN_1418e93d8(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x220,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b977ae0;
  FUN_140ae760a(plVar3 + 2,param_1);
  plVar3[2] = (longlong)&PTR_FUN_14b603ff0;
  plVar3[0x43] = 0;
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



// FUNCTION 1418e9472 FUN_1418e9472 body=176 status=ok
// SIG undefined FUN_1418e9472(void)

undefined8 * FUN_1418e9472(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbcca88) {
    FUN_144b3d300(&DAT_14cbcca88);
    if (DAT_14cbcca88 == -1) {
      builtin_wcsncpy(local_38 + 8,L"allback",8);
      builtin_wcsncpy(local_38,L"ExplodeC",8);
      FUN_1446f470e(&DAT_14cbcca80,local_38,1);
      _Init_thread_footer(&DAT_14cbcca88);
    }
  }
  *param_1 = DAT_14cbcca80;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418e9524 FUN_1418e9524 body=249 status=ok
// SIG undefined FUN_1418e9524(void)

ulonglong FUN_1418e9524(uint *param_1,longlong param_2)

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



// FUNCTION 1418e961e FUN_1418e961e body=56 status=ok
// SIG undefined FUN_1418e961e(void)

void FUN_1418e961e(longlong param_1,undefined8 param_2)

{
  FUN_14096c1f4(param_1 + 0x928);
  FUN_14096c1f4(param_1 + 0x9a8,param_2);
  FUN_140940a0a(param_1,param_2);
  return;
}



// FUNCTION 1418e9656 FUN_1418e9656 body=44 status=ok
// SIG undefined FUN_1418e9656(void)

void FUN_1418e9656(longlong param_1)

{
  FUN_140d5e8e6();
  FUN_140e5d35e(*(undefined8 *)(param_1 + 0x1b0),param_1,1,*(undefined4 *)(param_1 + 0xe44));
  return;
}



// FUNCTION 1418e9682 FUN_1418e9682 body=2359 status=ok
// SIG undefined FUN_1418e9682(void)

float * FUN_1418e9682(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  code ****ppppcVar9;
  undefined8 ****ppppuVar10;
  longlong *plVar11;
  bool bVar12;
  code *pcVar13;
  bool bVar14;
  float *pfVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined2 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code ***local_160;
  undefined1 *local_158;
  code *local_150;
  float *local_140;
  float local_138;
  undefined4 uStack_134;
  ushort local_120;
  byte local_118;
  undefined8 ***local_110 [3];
  ushort local_f8;
  byte local_f0;
  code ***local_e8 [3];
  ushort local_d0;
  byte local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_f8 = 0;
  local_f0 = 0;
  pfVar15 = &local_138;
  local_140 = param_2;
  FUN_1448729ea(param_1 + 0x10,pfVar15,param_4);
  if (local_118 == 3) {
    fVar20 = local_138;
    bVar3 = 3;
  }
  else {
    FUN_1400b56fe(local_e8,&local_138,3);
    fVar20 = 0.0;
    if (local_c8 != 0) {
      fVar20 = local_e8[0]._0_4_;
    }
    pcVar13 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
    if (pcVar13 != (code *)0x0) {
      ppppcVar9 = local_e8;
      if (0x18 < local_d0) {
        ppppcVar9 = (code ****)local_e8[0];
      }
      (*pcVar13)(ppppcVar9);
    }
    bVar3 = local_118;
    if (0x18 < local_d0) {
      FUN_1400020a8(local_e8[0]);
      bVar3 = local_118;
    }
  }
  pcVar13 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
  if (pcVar13 != (code *)0x0) {
    if (0x18 < local_120) {
      pfVar15 = (float *)CONCAT44(uStack_134,local_138);
    }
    (*pcVar13)(pfVar15);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(CONCAT44(uStack_134,local_138));
  }
  pfVar15 = &local_138;
  FUN_1448729ea(param_1 + 0x100,pfVar15,param_4);
  if (local_118 == 3) {
    fVar21 = local_138;
    bVar3 = 3;
  }
  else {
    FUN_1400b56fe(local_e8,&local_138,3);
    fVar21 = 0.0;
    if (local_c8 != 0) {
      fVar21 = local_e8[0]._0_4_;
    }
    pcVar13 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
    if (pcVar13 != (code *)0x0) {
      ppppcVar9 = local_e8;
      if (0x18 < local_d0) {
        ppppcVar9 = (code ****)local_e8[0];
      }
      (*pcVar13)(ppppcVar9);
    }
    bVar3 = local_118;
    if (0x18 < local_d0) {
      FUN_1400020a8(local_e8[0]);
      bVar3 = local_118;
    }
  }
  pcVar13 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
  if (pcVar13 != (code *)0x0) {
    if (0x18 < local_120) {
      pfVar15 = (float *)CONCAT44(uStack_134,local_138);
    }
    (*pcVar13)(pfVar15);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(CONCAT44(uStack_134,local_138));
  }
  pfVar15 = &local_138;
  FUN_1448729ea(param_1 + 0x150,pfVar15,param_4);
  if (local_118 == 3) {
    fVar22 = local_138;
    bVar3 = 3;
  }
  else {
    FUN_1400b56fe(local_e8,&local_138,3);
    fVar22 = 0.0;
    if (local_c8 != 0) {
      fVar22 = local_e8[0]._0_4_;
    }
    pcVar13 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
    if (pcVar13 != (code *)0x0) {
      ppppcVar9 = local_e8;
      if (0x18 < local_d0) {
        ppppcVar9 = (code ****)local_e8[0];
      }
      (*pcVar13)(ppppcVar9);
    }
    bVar3 = local_118;
    if (0x18 < local_d0) {
      FUN_1400020a8(local_e8[0]);
      bVar3 = local_118;
    }
  }
  pcVar13 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
  if (pcVar13 != (code *)0x0) {
    if (0x18 < local_120) {
      pfVar15 = (float *)CONCAT44(uStack_134,local_138);
    }
    (*pcVar13)(pfVar15);
  }
  if (0x18 < local_120) {
    FUN_1400020a8(CONCAT44(uStack_134,local_138));
  }
  lVar5 = FUN_14049cbd6(param_4);
  if (lVar5 == 0) {
    *(ushort *)(local_140 + 6) = local_f8;
    if (local_f8 < 0x19) {
      uVar7 = (ulonglong)((uint)local_f0 * 0x120);
      pcVar13 = *(code **)((longlong)&DAT_14c9a85b8 + uVar7);
      if ((pcVar13 == (code *)0x0) &&
         (pcVar13 = *(code **)((longlong)&DAT_14c9a85b0 + uVar7), pcVar13 == (code *)0x0)) {
        memcpy(local_140,local_110,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
      }
      else {
        (*pcVar13)(local_140,local_110);
      }
    }
    else {
      *(undefined8 ****)local_140 = local_110[0];
      local_110[0] = (undefined8 ****)0x0;
      local_f8 = 0;
    }
    *(byte *)(local_140 + 8) = local_f0;
    local_f0 = 0;
    uVar4 = 0;
    goto LAB_1418e99c2;
  }
  if (*(int *)(lVar5 + 0x238) < 1) {
LAB_1418e9c2e:
    FUN_1448729ea(param_1 + 0xb0,local_e8,param_4);
    fVar19 = (float)FUN_144a7ecd0(local_e8);
    pcVar13 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
    if (pcVar13 != (code *)0x0) {
      ppppcVar9 = local_e8;
      if (0x18 < local_d0) {
        ppppcVar9 = (code ****)local_e8[0];
      }
      (*pcVar13)(ppppcVar9);
    }
    ppppcVar9 = (code ****)local_e8[0];
    if (0x18 < local_d0) {
LAB_1418e9c9e:
      FUN_1400020a8(ppppcVar9);
    }
  }
  else {
    lVar16 = 0;
    bVar12 = false;
    bVar14 = false;
    fVar19 = 0.0;
    do {
      iVar8 = *(int *)(*(longlong *)(lVar5 + 0x230) + 4 + lVar16 * 8);
      if (((((iVar8 != 0) &&
            (uVar4 = *(uint *)(*(longlong *)(lVar5 + 0x230) + lVar16 * 8), -1 < (int)uVar4)) &&
           ((int)uVar4 < DAT_14c9647dc)) &&
          ((plVar11 = (longlong *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
           plVar11 != (longlong *)0x0 && ((int)plVar11[2] == iVar8)))) &&
         (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (lVar2 = *plVar11, lVar2 != 0)))) {
        if (DAT_14cbadd90 == 0) {
          local_160 = (code ***)local_e8;
          local_e8[0] = (code ***)FUN_141030f22;
          local_150 = FUN_14081d0ea;
          local_158 = &LAB_1459f2e4c;
          local_168 = &LAB_148c39de3;
          local_170 = &LAB_1457a9eb2;
          local_178 = &DAT_149e063b2;
          local_180 = 0;
          local_188 = 0x10000004;
          local_190 = 0x10;
          local_198 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          lVar6 = (ulonglong)*(byte *)(param_1 + 8) * 0x40;
          fVar17 = (float)*(int *)(lVar2 + 0x2608 + lVar6) * fVar20;
          iVar8 = (int)ROUND(fVar17 + fVar17 + -0.5) >> 1;
          bVar12 = true;
          if ((0 < iVar8) && (piVar1 = (int *)(lVar2 + 0x2600 + lVar6), *piVar1 <= iVar8)) {
            fVar18 = (float)(iVar8 - *piVar1) / (float)iVar8;
            fVar17 = 1.0;
            if (fVar18 <= 1.0) {
              fVar17 = fVar18;
            }
            if (0.0 <= fVar17) {
              fVar19 = fVar19 + fVar17 * (fVar22 - fVar21) + fVar21;
            }
            bVar14 = (bool)(bVar14 | 0.0 <= fVar17);
          }
        }
      }
      lVar16 = lVar16 + 1;
    } while ((int)lVar16 < *(int *)(lVar5 + 0x238));
    if (!bVar12) goto LAB_1418e9c2e;
    if (!bVar14) {
      pfVar15 = &local_138;
      FUN_1448729ea(param_1 + 0x60,pfVar15,param_4);
      if (local_118 == 3) {
        uVar4 = 3;
        fVar19 = local_138;
      }
      else {
        FUN_1400b56fe(local_e8,&local_138,3);
        fVar19 = 0.0;
        if (local_c8 != 0) {
          fVar19 = local_e8[0]._0_4_;
        }
        pcVar13 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
        if (pcVar13 != (code *)0x0) {
          ppppcVar9 = local_e8;
          if (0x18 < local_d0) {
            ppppcVar9 = (code ****)local_e8[0];
          }
          (*pcVar13)(ppppcVar9);
        }
        if (0x18 < local_d0) {
          FUN_1400020a8(local_e8[0]);
        }
        uVar4 = (uint)local_118;
      }
      pcVar13 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
      if (pcVar13 != (code *)0x0) {
        if (0x18 < local_120) {
          pfVar15 = (float *)CONCAT44(uStack_134,local_138);
        }
        (*pcVar13)(pfVar15);
      }
      if (local_120 < 0x19) goto LAB_1418e99a7;
      ppppcVar9 = (code ****)CONCAT44(uStack_134,local_138);
      goto LAB_1418e9c9e;
    }
  }
LAB_1418e99a7:
  *(undefined2 *)(local_140 + 6) = 4;
  *local_140 = fVar19;
  *(undefined1 *)(local_140 + 8) = 3;
  uVar4 = (uint)local_f0;
LAB_1418e99c2:
  pcVar13 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar4 * 0x120));
  if (pcVar13 != (code *)0x0) {
    ppppuVar10 = (undefined8 ****)local_110[0];
    if (local_f8 < 0x19) {
      ppppuVar10 = local_110;
    }
    (*pcVar13)(ppppuVar10);
  }
  pfVar15 = local_140;
  if (0x18 < local_f8) {
    FUN_1400020a8(local_110[0]);
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pfVar15;
}



// FUNCTION 1418e9fba FUN_1418e9fba body=41 status=ok
// SIG undefined FUN_1418e9fba(void)

void FUN_1418e9fba(longlong param_1,undefined8 param_2)

{
  FUN_14096c1f4(param_1 + 0x9b0);
  FUN_140940a0a(param_1,param_2);
  return;
}



// FUNCTION 1418e9fe4 FUN_1418e9fe4 body=132 status=ok
// SIG undefined FUN_1418e9fe4(void)

undefined8 FUN_1418e9fe4(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (param_2 == '\0') {
    lVar2 = *(longlong *)(param_1 + 0xf8);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x100);
    if (lVar2 != 0) goto LAB_1418ea02a;
    if (((*(longlong **)(param_1 + 600) != (longlong *)0x0) &&
        (cVar1 = (**(code **)(**(longlong **)(param_1 + 600) + 0x700))(), cVar1 != '\0')) &&
       (lVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 600) + 0x3a30) + 0x20))
                          (*(longlong *)(param_1 + 600) + 0x3a30,1), lVar2 != 0)) {
      FUN_1458981dc(param_1 + 0xe8,param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x100);
  }
  if (lVar2 == 0) {
    return 0;
  }
LAB_1418ea02a:
  return *(undefined8 *)(lVar2 + 0x48);
}



// FUNCTION 1418ea068 FUN_1418ea068 body=62 status=ok
// SIG undefined FUN_1418ea068(void)

undefined4 FUN_1418ea068(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1403ae288(param_1 + 0x9a8);
  if (cVar1 == '\0') {
    param_1 = param_1 + 0xa4c;
  }
  else {
    param_1 = FUN_140280ec4(param_1 + 0x9a8);
    param_1 = param_1 + 0x44;
  }
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 1418ea0a6 FUN_1418ea0a6 body=324 status=ok
// SIG undefined FUN_1418ea0a6(void)

void FUN_1418ea0a6(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 *local_b0;
  undefined1 local_a1;
  char local_a0 [16];
  longlong *local_90;
  undefined4 local_78 [2];
  char local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar3 = *(int *)(param_3 + 8);
  if (0 < iVar3) {
    FUN_14053d8da(param_3,1);
    iVar3 = *(int *)(param_3 + 8);
  }
  if (((0 < *(int *)(param_2 + 8)) && (iVar3 == 0)) &&
     (lVar2 = *(longlong *)(param_1 + 0xac8), lVar2 != 0)) {
    local_a0[0] = '\0';
    local_78[0] = 0;
    FUN_1456bb102(local_a0,lVar2);
    local_70 = '\0';
    local_48[0] = 0;
    local_b0 = &local_a1;
    local_b8 = 1;
    FUN_140c3fc86(param_2,param_3,lVar2,local_a0);
    FUN_1448173f8(local_48);
    if (local_70 != '\0') {
      if (local_70 == '\x01') {
        local_68 = 0;
      }
      else if ((local_70 == '\x03') && (local_60 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
      local_70 = '\0';
    }
    FUN_1448173f8(local_78);
    if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ea1ec FUN_1418ea1ec body=271 status=ok
// SIG undefined FUN_1418ea1ec(void)

undefined1 *
FUN_1418ea1ec(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_141020ddc(param_4);
  if (lVar3 != 0) {
LAB_1418ea215:
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined1 **)(param_2 + 0x38) = &DAT_100000001;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    FUN_1456bb102(param_2,lVar3);
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar3 = FUN_1400e8a68(param_4);
  if (lVar3 != 0) {
    lVar3 = FUN_14018ffce(lVar3);
    if (lVar3 != 0) goto LAB_1418ea215;
  }
  FUN_148d651b6(param_4,&local_30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
  if (local_30 != 0) {
    *(undefined4 *)(param_2 + 0x38) = 1;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    FUN_148d6a38e(param_2,&local_30);
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
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1418ea302 FUN_1418ea302 body=164 status=ok
// SIG undefined FUN_1418ea302(void)

longlong * FUN_1418ea302(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b978a30;
  FUN_140ae760a(plVar3 + 2,param_1);
  plVar3[2] = (longlong)&PTR_FUN_14b92d8a0;
  plVar3[0x43] = 0;
  plVar3[0x44] = 0;
  plVar3[0x45] = 0;
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



// FUNCTION 1418ea3a6 FUN_1418ea3a6 body=40 status=ok
// SIG undefined FUN_1418ea3a6(void)

undefined8 FUN_1418ea3a6(undefined8 param_1,int param_2)

{
  FUN_14097122c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ea3ce FUN_1418ea3ce body=40 status=ok
// SIG undefined FUN_1418ea3ce(void)

undefined8 FUN_1418ea3ce(undefined8 param_1,int param_2)

{
  FUN_14097122c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ea3f6 FUN_1418ea3f6 body=40 status=ok
// SIG undefined FUN_1418ea3f6(void)

undefined8 FUN_1418ea3f6(undefined8 param_1,int param_2)

{
  FUN_140adedd4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ea41e FUN_1418ea41e body=29 status=ok
// SIG undefined FUN_1418ea41e(void)

undefined8 FUN_1418ea41e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418ea43c FUN_1418ea43c body=95 status=ok
// SIG undefined FUN_1418ea43c(void)

ulonglong * FUN_1418ea43c(undefined8 param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "FGbxUIEvent_StatusMenu_ShieldBreak";
  local_18 = 0x22;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_2 = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418ea49c FUN_1418ea49c body=9 status=ok
// SIG undefined FUN_1418ea49c(void)

void FUN_1418ea49c(longlong param_1)

{
  FUN_140944000(param_1 + 0x10);
  return;
}



// FUNCTION 1418ea4a6 FUN_1418ea4a6 body=29 status=ok
// SIG undefined FUN_1418ea4a6(void)

undefined8 FUN_1418ea4a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


