// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14659ca68 FUN_14659ca68 body=40 status=ok
// SIG undefined FUN_14659ca68(void)

undefined8 FUN_14659ca68(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659ca90 FUN_14659ca90 body=40 status=ok
// SIG undefined FUN_14659ca90(void)

undefined8 FUN_14659ca90(undefined8 param_1,int param_2)

{
  FUN_140cdcea6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659cab8 FUN_14659cab8 body=40 status=ok
// SIG undefined FUN_14659cab8(void)

undefined8 FUN_14659cab8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659cae0 FUN_14659cae0 body=40 status=ok
// SIG undefined FUN_14659cae0(void)

undefined8 FUN_14659cae0(undefined8 param_1,int param_2)

{
  FUN_145b21608();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659cb08 FUN_14659cb08 body=40 status=ok
// SIG undefined FUN_14659cb08(void)

undefined8 FUN_14659cb08(undefined8 param_1,int param_2)

{
  FUN_145bf1364();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659cb30 FUN_14659cb30 body=40 status=ok
// SIG undefined FUN_14659cb30(void)

undefined8 FUN_14659cb30(undefined8 param_1,int param_2)

{
  FUN_145bf140c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659cb58 FUN_14659cb58 body=40 status=ok
// SIG undefined FUN_14659cb58(void)

undefined8 FUN_14659cb58(undefined8 param_1,int param_2)

{
  FUN_1458e4ec6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659cb80 FUN_14659cb80 body=40 status=ok
// SIG undefined FUN_14659cb80(void)

undefined8 FUN_14659cb80(undefined8 param_1,int param_2)

{
  FUN_145851c42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659cba8 FUN_14659cba8 body=40 status=ok
// SIG undefined FUN_14659cba8(void)

undefined8 FUN_14659cba8(undefined8 param_1,int param_2)

{
  FUN_140f3c930();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659cbd0 FUN_14659cbd0 body=40 status=ok
// SIG undefined FUN_14659cbd0(void)

undefined8 FUN_14659cbd0(undefined8 param_1,int param_2)

{
  FUN_141147776();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659cbf8 FUN_14659cbf8 body=46 status=ok
// SIG undefined FUN_14659cbf8(void)

void FUN_14659cbf8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b58a3a0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 14659cc2b FUN_14659cc2b body=47 status=ok
// SIG undefined FUN_14659cc2b(void)

longlong FUN_14659cc2b(void)

{
  if (DAT_14cb9cf40 == 0) {
    FUN_14073dd9a(&DAT_14cb9cf40,&PTR_LAB_14b58a358);
  }
  return DAT_14cb9cf40;
}



// FUNCTION 14659cc5a FUN_14659cc5a body=47 status=ok
// SIG undefined FUN_14659cc5a(void)

longlong FUN_14659cc5a(void)

{
  if (DAT_14cb9d098 == 0) {
    FUN_14073dd9a(&DAT_14cb9d098,&PTR_LAB_14b58dc90);
  }
  return DAT_14cb9d098;
}



// FUNCTION 14659cc8a FUN_14659cc8a body=55 status=ok
// SIG undefined FUN_14659cc8a(void)

void FUN_14659cc8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9cf78 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9cf78 = FUN_140002ddd(FUN_14659ccc1,uVar1,L"GbxUIUMGSubsystemAnyTickFunction");
  }
  return;
}



// FUNCTION 14659ccc1 FUN_14659ccc1 body=47 status=ok
// SIG undefined FUN_14659ccc1(void)

longlong FUN_14659ccc1(void)

{
  if (DAT_14cb9cf70 == 0) {
    FUN_14086a14e(&DAT_14cb9cf70,&PTR_FUN_14b58abb0);
  }
  return DAT_14cb9cf70;
}



// FUNCTION 14659ccf0 FUN_14659ccf0 body=48 status=ok
// SIG undefined FUN_14659ccf0(void)

void FUN_14659ccf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b595b10;
  return;
}



// FUNCTION 14659cd20 FUN_14659cd20 body=99 status=ok
// SIG undefined FUN_14659cd20(void)

void FUN_14659cd20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140bf9282(puVar1);
  *puVar1 = &PTR_FUN_14b58adc0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  FUN_141067f4a(puVar1 + 0xd);
  puVar1[0xd] = &PTR_FUN_14b595c70;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  return;
}



// FUNCTION 14659cd83 FUN_14659cd83 body=47 status=ok
// SIG undefined FUN_14659cd83(void)

longlong FUN_14659cd83(void)

{
  if (DAT_14cb9cf90 == 0) {
    FUN_14073dd9a(&DAT_14cb9cf90,&PTR_LAB_14b58ad78);
  }
  return DAT_14cb9cf90;
}



// FUNCTION 14659cdb2 FUN_14659cdb2 body=49 status=ok
// SIG undefined FUN_14659cdb2(void)

longlong FUN_14659cdb2(void)

{
  if (DAT_14cb9cfc0 == 0) {
    FUN_14086a14e(&DAT_14cb9cfc0,&PTR_FUN_14b58bbc0);
  }
  return DAT_14cb9cfc0;
}



// FUNCTION 14659cde3 FUN_14659cde3 body=47 status=ok
// SIG undefined FUN_14659cde3(void)

longlong FUN_14659cde3(void)

{
  if (DAT_14cb9cfb0 == 0) {
    FUN_14073dd9a(&DAT_14cb9cfb0,&PTR_LAB_14b58b290);
  }
  return DAT_14cb9cfb0;
}



// FUNCTION 14659ce12 FUN_14659ce12 body=47 status=ok
// SIG undefined FUN_14659ce12(void)

longlong FUN_14659ce12(void)

{
  if (DAT_14cb9cfa0 == 0) {
    FUN_14000fc22(&DAT_14cb9cfa0,&PTR_FUN_14b58b170);
  }
  return DAT_14cb9cfa0;
}



// FUNCTION 14659ce42 FUN_14659ce42 body=34 status=ok
// SIG undefined FUN_14659ce42(void)

void FUN_14659ce42(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8832e();
  FUN_14069c8d6(uVar1,&PTR_s_SetTabLabelInfo_Implementation_14b58b1b0,1);
  return;
}



// FUNCTION 14659ce6a FUN_14659ce6a body=55 status=ok
// SIG undefined FUN_14659ce6a(void)

void FUN_14659ce6a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9cfc8 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9cfc8 = FUN_140002ddd(FUN_14659cdb2,uVar1,L"GbxUIUMGTabDescriptor");
  }
  return;
}



// FUNCTION 14659cea2 FUN_14659cea2 body=48 status=ok
// SIG undefined FUN_14659cea2(void)

void FUN_14659cea2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000f0;
  *puVar1 = &PTR_FUN_14b595ca0;
  return;
}



// FUNCTION 14659ced2 FUN_14659ced2 body=47 status=ok
// SIG undefined FUN_14659ced2(void)

longlong FUN_14659ced2(void)

{
  if (DAT_14cb9cff0 == 0) {
    FUN_14073dd9a(&DAT_14cb9cff0,&PTR_LAB_14b58bd40);
  }
  return DAT_14cb9cff0;
}



// FUNCTION 14659cf01 FUN_14659cf01 body=47 status=ok
// SIG undefined FUN_14659cf01(void)

longlong FUN_14659cf01(void)

{
  if (DAT_14cb9cfe0 == 0) {
    FUN_14000fc22(&DAT_14cb9cfe0,&PTR_FUN_14b58bc80);
  }
  return DAT_14cb9cfe0;
}



// FUNCTION 14659cf30 FUN_14659cf30 body=34 status=ok
// SIG undefined FUN_14659cf30(void)

void FUN_14659cf30(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459f26ec();
  FUN_14069c8d6(uVar1,&PTR_s_SetTabLabelInfo_14b58bcc0,1);
  return;
}



// FUNCTION 14659cf52 FUN_14659cf52 body=35 status=ok
// SIG undefined FUN_14659cf52(void)

void FUN_14659cf52(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b58bd80;
  return;
}



// FUNCTION 14659cf75 FUN_14659cf75 body=49 status=ok
// SIG undefined FUN_14659cf75(void)

longlong FUN_14659cf75(void)

{
  if (DAT_14cb9d048 == 0) {
    FUN_14073dd9a(&DAT_14cb9d048,&PTR_LAB_14b58ca40);
  }
  return DAT_14cb9d048;
}



// FUNCTION 14659cfa6 FUN_14659cfa6 body=47 status=ok
// SIG undefined FUN_14659cfa6(void)

longlong FUN_14659cfa6(void)

{
  if (DAT_14cb9d000 == 0) {
    FUN_14000fc22(&DAT_14cb9d000,&PTR_FUN_14b58c0e8);
  }
  return DAT_14cb9d000;
}



// FUNCTION 14659cfd5 FUN_14659cfd5 body=47 status=ok
// SIG undefined FUN_14659cfd5(void)

longlong FUN_14659cfd5(void)

{
  if (DAT_14cb9d008 == 0) {
    FUN_14000fc22(&DAT_14cb9d008,&PTR_FUN_14b58c230);
  }
  return DAT_14cb9d008;
}



// FUNCTION 14659d004 FUN_14659d004 body=47 status=ok
// SIG undefined FUN_14659d004(void)

longlong FUN_14659d004(void)

{
  if (DAT_14cb9d010 == 0) {
    FUN_14000fc22(&DAT_14cb9d010,&PTR_FUN_14b58c2c8);
  }
  return DAT_14cb9d010;
}



// FUNCTION 14659d033 FUN_14659d033 body=47 status=ok
// SIG undefined FUN_14659d033(void)

longlong FUN_14659d033(void)

{
  if (DAT_14cb9d018 == 0) {
    FUN_14000fc22(&DAT_14cb9d018,&PTR_FUN_14b58c368);
  }
  return DAT_14cb9d018;
}



// FUNCTION 14659d062 FUN_14659d062 body=47 status=ok
// SIG undefined FUN_14659d062(void)

longlong FUN_14659d062(void)

{
  if (DAT_14cb9d020 == 0) {
    FUN_14000fc22(&DAT_14cb9d020,&PTR_FUN_14b58c400);
  }
  return DAT_14cb9d020;
}



// FUNCTION 14659d091 FUN_14659d091 body=47 status=ok
// SIG undefined FUN_14659d091(void)

longlong FUN_14659d091(void)

{
  if (DAT_14cb9d028 == 0) {
    FUN_14000fc22(&DAT_14cb9d028,&PTR_FUN_14b58c4e0);
  }
  return DAT_14cb9d028;
}



// FUNCTION 14659d0c0 FUN_14659d0c0 body=47 status=ok
// SIG undefined FUN_14659d0c0(void)

longlong FUN_14659d0c0(void)

{
  if (DAT_14cb9d030 == 0) {
    FUN_14000fc22(&DAT_14cb9d030,&PTR_FUN_14b58c5c8);
  }
  return DAT_14cb9d030;
}



// FUNCTION 14659d0ef FUN_14659d0ef body=47 status=ok
// SIG undefined FUN_14659d0ef(void)

longlong FUN_14659d0ef(void)

{
  if (DAT_14cb9d038 == 0) {
    FUN_14000fc22(&DAT_14cb9d038,&PTR_FUN_14b58c6a8);
  }
  return DAT_14cb9d038;
}



// FUNCTION 14659d11e FUN_14659d11e body=34 status=ok
// SIG undefined FUN_14659d11e(void)

void FUN_14659d11e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8841a();
  FUN_14069c8d6(uVar1,&PTR_s_GetPreregisteredTabInfo_14b58c6f0,7);
  return;
}



// FUNCTION 14659d140 FUN_14659d140 body=34 status=ok
// SIG undefined FUN_14659d140(void)

void FUN_14659d140(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a6082c();
  FUN_14069c8d6(uVar1,&PTR_s_GetTextColor_14b58d4c0,7);
  return;
}



// FUNCTION 14659d162 FUN_14659d162 body=46 status=ok
// SIG undefined FUN_14659d162(void)

void FUN_14659d162(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145ac6cfe(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b58e160;
  puVar1[5] = &PTR_FUN_14b58e460;
  return;
}



// FUNCTION 14659d190 FUN_14659d190 body=47 status=ok
// SIG undefined FUN_14659d190(void)

longlong FUN_14659d190(void)

{
  if (DAT_14cb9d0b0 == 0) {
    FUN_14073dd9a(&DAT_14cb9d0b0,&PTR_LAB_14b58e118);
  }
  return DAT_14cb9d0b0;
}



// FUNCTION 14659d1c0 FUN_14659d1c0 body=55 status=ok
// SIG undefined FUN_14659d1c0(void)

void FUN_14659d1c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9d0c8 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9d0c8 = FUN_140002ddd(FUN_14659d1f7,uVar1,L"UMGWidgetTickFunction");
  }
  return;
}



// FUNCTION 14659d1f7 FUN_14659d1f7 body=47 status=ok
// SIG undefined FUN_14659d1f7(void)

longlong FUN_14659d1f7(void)

{
  if (DAT_14cb9d0c0 == 0) {
    FUN_14086a14e(&DAT_14cb9d0c0,&PTR_FUN_14b58e510);
  }
  return DAT_14cb9d0c0;
}



// FUNCTION 14659d226 FUN_14659d226 body=48 status=ok
// SIG undefined FUN_14659d226(void)

void FUN_14659d226(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b595e00;
  return;
}



// FUNCTION 14659d256 FUN_14659d256 body=55 status=ok
// SIG undefined FUN_14659d256(void)

void FUN_14659d256(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9d0e0 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9d0e0 = FUN_140002ddd(FUN_14659d28d,uVar1,L"GbxUIUMGTickWidgetSettings");
  }
  return;
}



// FUNCTION 14659d28d FUN_14659d28d body=49 status=ok
// SIG undefined FUN_14659d28d(void)

longlong FUN_14659d28d(void)

{
  if (DAT_14cb9d0d8 == 0) {
    FUN_14086a14e(&DAT_14cb9d0d8,&PTR_FUN_14b58e6a8);
  }
  return DAT_14cb9d0d8;
}



// FUNCTION 14659d2be FUN_14659d2be body=48 status=ok
// SIG undefined FUN_14659d2be(void)

void FUN_14659d2be(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000003;
  *puVar1 = &PTR_FUN_14b595f70;
  return;
}



// FUNCTION 14659d2ee FUN_14659d2ee body=47 status=ok
// SIG undefined FUN_14659d2ee(void)

longlong FUN_14659d2ee(void)

{
  if (DAT_14cb9d108 == 0) {
    FUN_14073dd9a(&DAT_14cb9d108,&PTR_LAB_14b58e7f0);
  }
  return DAT_14cb9d108;
}



// FUNCTION 14659d31d FUN_14659d31d body=47 status=ok
// SIG undefined FUN_14659d31d(void)

longlong FUN_14659d31d(void)

{
  if (DAT_14cb9d0f8 == 0) {
    FUN_14000fc22(&DAT_14cb9d0f8,&PTR_FUN_14b58e750);
  }
  return DAT_14cb9d0f8;
}



// FUNCTION 14659d34c FUN_14659d34c body=35 status=ok
// SIG undefined FUN_14659d34c(void)

void FUN_14659d34c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b58e830;
  return;
}



// FUNCTION 14659d375 FUN_14659d375 body=47 status=ok
// SIG undefined FUN_14659d375(void)

longlong FUN_14659d375(void)

{
  if (DAT_14cb9d120 == 0) {
    FUN_14073dd9a(&DAT_14cb9d120,&PTR_LAB_14b58ec68);
  }
  return DAT_14cb9d120;
}



// FUNCTION 14659d3a4 FUN_14659d3a4 body=47 status=ok
// SIG undefined FUN_14659d3a4(void)

longlong FUN_14659d3a4(void)

{
  if (DAT_14cb9d138 == 0) {
    FUN_14073dd9a(&DAT_14cb9d138,&PTR_LAB_14b58edf8);
  }
  return DAT_14cb9d138;
}



// FUNCTION 14659d3d3 FUN_14659d3d3 body=46 status=ok
// SIG undefined FUN_14659d3d3(void)

void FUN_14659d3d3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a1f268(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b58ef00;
  puVar1[5] = &PTR_FUN_14b58f220;
  return;
}



// FUNCTION 14659d401 FUN_14659d401 body=47 status=ok
// SIG undefined FUN_14659d401(void)

longlong FUN_14659d401(void)

{
  if (DAT_14cb9d150 == 0) {
    FUN_14073dd9a(&DAT_14cb9d150,&PTR_LAB_14b58eeb8);
  }
  return DAT_14cb9d150;
}



// FUNCTION 14659d430 FUN_14659d430 body=47 status=ok
// SIG undefined FUN_14659d430(void)

longlong FUN_14659d430(void)

{
  if (DAT_14cb9d168 == 0) {
    FUN_14073dd9a(&DAT_14cb9d168,&PTR_LAB_14b58f338);
  }
  return DAT_14cb9d168;
}



// FUNCTION 14659d45f FUN_14659d45f body=47 status=ok
// SIG undefined FUN_14659d45f(void)

longlong FUN_14659d45f(void)

{
  if (DAT_14cb9d180 == 0) {
    FUN_14073dd9a(&DAT_14cb9d180,&PTR_LAB_14b58f988);
  }
  return DAT_14cb9d180;
}



// FUNCTION 14659d48e FUN_14659d48e body=46 status=ok
// SIG undefined FUN_14659d48e(void)

void FUN_14659d48e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145e18118(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b58fdf0;
  puVar1[5] = &PTR_FUN_14b590100;
  return;
}



// FUNCTION 14659d4bc FUN_14659d4bc body=47 status=ok
// SIG undefined FUN_14659d4bc(void)

longlong FUN_14659d4bc(void)

{
  if (DAT_14cb9d198 == 0) {
    FUN_14073dd9a(&DAT_14cb9d198,&PTR_LAB_14b58fda8);
  }
  return DAT_14cb9d198;
}



// FUNCTION 14659d4eb FUN_14659d4eb body=47 status=ok
// SIG undefined FUN_14659d4eb(void)

longlong FUN_14659d4eb(void)

{
  if (DAT_14cb9d1a8 == 0) {
    FUN_14000fc22(&DAT_14cb9d1a8,&PTR_FUN_14b590190);
  }
  return DAT_14cb9d1a8;
}



// FUNCTION 14659d51f FUN_14659d51f body=47 status=ok
// SIG undefined FUN_14659d51f(void)

longlong FUN_14659d51f(void)

{
  if (DAT_14cb9d1b8 == 0) {
    FUN_14073dd9a(&DAT_14cb9d1b8,&PTR_LAB_14b590258);
  }
  return DAT_14cb9d1b8;
}



// FUNCTION 14659d54e FUN_14659d54e body=49 status=ok
// SIG undefined FUN_14659d54e(void)

longlong FUN_14659d54e(void)

{
  if (DAT_14cb9d1e8 == 0) {
    FUN_14073dd9a(&DAT_14cb9d1e8,&PTR_LAB_14b5908a0);
  }
  return DAT_14cb9d1e8;
}



// FUNCTION 14659d57f FUN_14659d57f body=47 status=ok
// SIG undefined FUN_14659d57f(void)

longlong FUN_14659d57f(void)

{
  if (DAT_14cb9d1c8 == 0) {
    FUN_14000fc22(&DAT_14cb9d1c8,&PTR_FUN_14b5906a0);
  }
  return DAT_14cb9d1c8;
}



// FUNCTION 14659d5ae FUN_14659d5ae body=47 status=ok
// SIG undefined FUN_14659d5ae(void)

longlong FUN_14659d5ae(void)

{
  if (DAT_14cb9d1d0 == 0) {
    FUN_14000fc22(&DAT_14cb9d1d0,&PTR_FUN_14b5906f8);
  }
  return DAT_14cb9d1d0;
}



// FUNCTION 14659d5dd FUN_14659d5dd body=47 status=ok
// SIG undefined FUN_14659d5dd(void)

longlong FUN_14659d5dd(void)

{
  if (DAT_14cb9d1d8 == 0) {
    FUN_14000fc22(&DAT_14cb9d1d8,&PTR_FUN_14b590798);
  }
  return DAT_14cb9d1d8;
}



// FUNCTION 14659d60c FUN_14659d60c body=34 status=ok
// SIG undefined FUN_14659d60c(void)

void FUN_14659d60c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14595da76();
  FUN_14069c8d6(uVar1,&PTR_s_CreateAndRegisterViewModel_14b5907e0,3);
  return;
}



// FUNCTION 14659d633 FUN_14659d633 body=35 status=ok
// SIG undefined FUN_14659d633(void)

void FUN_14659d633(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5908e0;
  return;
}



// FUNCTION 14659d656 FUN_14659d656 body=55 status=ok
// SIG undefined FUN_14659d656(void)

void FUN_14659d656(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9d200 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9d200 = FUN_140002ddd(FUN_14659d68d,uVar1,L"GbxUIUMGCheatsAndDebugPlatformTrait");
  }
  return;
}



// FUNCTION 14659d68d FUN_14659d68d body=47 status=ok
// SIG undefined FUN_14659d68d(void)

longlong FUN_14659d68d(void)

{
  if (DAT_14cb9d1f8 == 0) {
    FUN_14086a14e(&DAT_14cb9d1f8,&PTR_FUN_14b590e08);
  }
  return DAT_14cb9d1f8;
}



// FUNCTION 14659d6bc FUN_14659d6bc body=48 status=ok
// SIG undefined FUN_14659d6bc(void)

void FUN_14659d6bc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14b5960e0;
  return;
}



// FUNCTION 14659d6ec FUN_14659d6ec body=47 status=ok
// SIG undefined FUN_14659d6ec(void)

longlong FUN_14659d6ec(void)

{
  if (DAT_14cb9d218 == 0) {
    FUN_14073dd9a(&DAT_14cb9d218,&PTR_LAB_14b590e98);
  }
  return DAT_14cb9d218;
}



// FUNCTION 14659d71b FUN_14659d71b body=47 status=ok
// SIG undefined FUN_14659d71b(void)

longlong FUN_14659d71b(void)

{
  if (DAT_14cb9d230 == 0) {
    FUN_14073dd9a(&DAT_14cb9d230,&PTR_LAB_14b591248);
  }
  return DAT_14cb9d230;
}



// FUNCTION 14659d74a FUN_14659d74a body=47 status=ok
// SIG undefined FUN_14659d74a(void)

longlong FUN_14659d74a(void)

{
  if (DAT_14cb9d248 == 0) {
    FUN_14073dd9a(&DAT_14cb9d248,&PTR_LAB_14b591678);
  }
  return DAT_14cb9d248;
}



// FUNCTION 14659d779 FUN_14659d779 body=46 status=ok
// SIG undefined FUN_14659d779(void)

void FUN_14659d779(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145a45142(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b591ae0;
  puVar1[5] = &PTR_FUN_14b591e10;
  return;
}



// FUNCTION 14659d7a7 FUN_14659d7a7 body=47 status=ok
// SIG undefined FUN_14659d7a7(void)

longlong FUN_14659d7a7(void)

{
  if (DAT_14cb9d260 == 0) {
    FUN_14073dd9a(&DAT_14cb9d260,&PTR_LAB_14b591a98);
  }
  return DAT_14cb9d260;
}



// FUNCTION 14659d7d6 FUN_14659d7d6 body=47 status=ok
// SIG undefined FUN_14659d7d6(void)

longlong FUN_14659d7d6(void)

{
  if (DAT_14cb9d278 == 0) {
    FUN_14073dd9a(&DAT_14cb9d278,&PTR_LAB_14b591ed8);
  }
  return DAT_14cb9d278;
}



// FUNCTION 14659d805 FUN_14659d805 body=47 status=ok
// SIG undefined FUN_14659d805(void)

longlong FUN_14659d805(void)

{
  if (DAT_14cb9d2b0 == 0) {
    FUN_14073dd9a(&DAT_14cb9d2b0,&PTR_LAB_14b592570);
  }
  return DAT_14cb9d2b0;
}



// FUNCTION 14659d834 FUN_14659d834 body=47 status=ok
// SIG undefined FUN_14659d834(void)

longlong FUN_14659d834(void)

{
  if (DAT_14cb9d290 == 0) {
    FUN_14000fc22(&DAT_14cb9d290,&PTR_FUN_14b592368);
  }
  return DAT_14cb9d290;
}



// FUNCTION 14659d864 FUN_14659d864 body=34 status=ok
// SIG undefined FUN_14659d864(void)

void FUN_14659d864(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458b5df4();
  FUN_14069c8d6(uVar1,&PTR_s_FindWidgetClassForData_14b5924e0,2);
  return;
}



// FUNCTION 14659d88b FUN_14659d88b body=32 status=ok
// SIG undefined FUN_14659d88b(void)

void FUN_14659d88b(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_1400841f8(param_1);
  *param_1 = &PTR_FUN_14b5925b0;
  return;
}



// FUNCTION 14659d8ab FUN_14659d8ab body=72 status=ok
// SIG undefined FUN_14659d8ab(void)

void FUN_14659d8ab(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14b592a10;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xe) = 0;
  return;
}



// FUNCTION 14659d8f3 FUN_14659d8f3 body=47 status=ok
// SIG undefined FUN_14659d8f3(void)

longlong FUN_14659d8f3(void)

{
  if (DAT_14cb9d2c8 == 0) {
    FUN_14073dd9a(&DAT_14cb9d2c8,&PTR_LAB_14b5929c8);
  }
  return DAT_14cb9d2c8;
}



// FUNCTION 14659d922 FUN_14659d922 body=50 status=ok
// SIG undefined FUN_14659d922(void)

void FUN_14659d922(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b592dc0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 14659d954 FUN_14659d954 body=47 status=ok
// SIG undefined FUN_14659d954(void)

longlong FUN_14659d954(void)

{
  if (DAT_14cb9d2e0 == 0) {
    FUN_14073dd9a(&DAT_14cb9d2e0,&PTR_LAB_14b592d78);
  }
  return DAT_14cb9d2e0;
}



// FUNCTION 14659d983 FUN_14659d983 body=46 status=ok
// SIG undefined FUN_14659d983(void)

void FUN_14659d983(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145844150(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b593130;
  puVar1[5] = &PTR_FUN_14b593460;
  return;
}



// FUNCTION 14659d9b1 FUN_14659d9b1 body=47 status=ok
// SIG undefined FUN_14659d9b1(void)

longlong FUN_14659d9b1(void)

{
  if (DAT_14cb9d2f8 == 0) {
    FUN_14073dd9a(&DAT_14cb9d2f8,&PTR_LAB_14b5930e8);
  }
  return DAT_14cb9d2f8;
}



// FUNCTION 14659d9e0 FUN_14659d9e0 body=47 status=ok
// SIG undefined FUN_14659d9e0(void)

longlong FUN_14659d9e0(void)

{
  if (DAT_14cb9d320 == 0) {
    FUN_14073dd9a(&DAT_14cb9d320,&PTR_LAB_14b593730);
  }
  return DAT_14cb9d320;
}



// FUNCTION 14659da0f FUN_14659da0f body=47 status=ok
// SIG undefined FUN_14659da0f(void)

longlong FUN_14659da0f(void)

{
  if (DAT_14cb9d310 == 0) {
    FUN_14000fc22(&DAT_14cb9d310,&PTR_FUN_14b5934e8);
  }
  return DAT_14cb9d310;
}



// FUNCTION 14659da3e FUN_14659da3e body=34 status=ok
// SIG undefined FUN_14659da3e(void)

void FUN_14659da3e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a88506();
  FUN_14069c8d6(uVar1,&PTR_s_RefreshResetButtonEnabled_14b593530,1);
  return;
}



// FUNCTION 14659da60 FUN_14659da60 body=47 status=ok
// SIG undefined FUN_14659da60(void)

longlong FUN_14659da60(void)

{
  if (DAT_14cb9d330 == 0) {
    FUN_14000fc22(&DAT_14cb9d330,&PTR_FUN_14b593dd8);
  }
  return DAT_14cb9d330;
}



// FUNCTION 14659da8f FUN_14659da8f body=49 status=ok
// SIG undefined FUN_14659da8f(void)

longlong FUN_14659da8f(void)

{
  if (DAT_14cb9d388 == 0) {
    FUN_14073dd9a(&DAT_14cb9d388,&PTR_LAB_14b594710);
  }
  return DAT_14cb9d388;
}



// FUNCTION 14659dac0 FUN_14659dac0 body=47 status=ok
// SIG undefined FUN_14659dac0(void)

longlong FUN_14659dac0(void)

{
  if (DAT_14cb9d338 == 0) {
    FUN_14000fc22(&DAT_14cb9d338,&PTR_FUN_14b593e18);
  }
  return DAT_14cb9d338;
}



// FUNCTION 14659daef FUN_14659daef body=47 status=ok
// SIG undefined FUN_14659daef(void)

longlong FUN_14659daef(void)

{
  if (DAT_14cb9d340 == 0) {
    FUN_14000fc22(&DAT_14cb9d340,&PTR_FUN_14b593ea0);
  }
  return DAT_14cb9d340;
}



// FUNCTION 14659db1e FUN_14659db1e body=47 status=ok
// SIG undefined FUN_14659db1e(void)

longlong FUN_14659db1e(void)

{
  if (DAT_14cb9d348 == 0) {
    FUN_14000fc22(&DAT_14cb9d348,&PTR_FUN_14b593ee0);
  }
  return DAT_14cb9d348;
}



// FUNCTION 14659db4d FUN_14659db4d body=47 status=ok
// SIG undefined FUN_14659db4d(void)

longlong FUN_14659db4d(void)

{
  if (DAT_14cb9d350 == 0) {
    FUN_14000fc22(&DAT_14cb9d350,&PTR_FUN_14b593ff8);
  }
  return DAT_14cb9d350;
}



// FUNCTION 14659db7c FUN_14659db7c body=47 status=ok
// SIG undefined FUN_14659db7c(void)

longlong FUN_14659db7c(void)

{
  if (DAT_14cb9d358 == 0) {
    FUN_14000fc22(&DAT_14cb9d358,&PTR_FUN_14b594080);
  }
  return DAT_14cb9d358;
}



// FUNCTION 14659dbab FUN_14659dbab body=47 status=ok
// SIG undefined FUN_14659dbab(void)

longlong FUN_14659dbab(void)

{
  if (DAT_14cb9d360 == 0) {
    FUN_14000fc22(&DAT_14cb9d360,&PTR_FUN_14b594100);
  }
  return DAT_14cb9d360;
}



// FUNCTION 14659dbda FUN_14659dbda body=47 status=ok
// SIG undefined FUN_14659dbda(void)

longlong FUN_14659dbda(void)

{
  if (DAT_14cb9d368 == 0) {
    FUN_14000fc22(&DAT_14cb9d368,&PTR_FUN_14b5941c0);
  }
  return DAT_14cb9d368;
}



// FUNCTION 14659dc09 FUN_14659dc09 body=47 status=ok
// SIG undefined FUN_14659dc09(void)

longlong FUN_14659dc09(void)

{
  if (DAT_14cb9d378 == 0) {
    FUN_14000fc22(&DAT_14cb9d378,&PTR_FUN_14b594248);
  }
  return DAT_14cb9d378;
}



// FUNCTION 14659dc38 FUN_14659dc38 body=34 status=ok
// SIG undefined FUN_14659dc38(void)

void FUN_14659dc38(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a885f2();
  FUN_14069c8d6(uVar1,&PTR_s_ApplyChanges_14b594290,8);
  return;
}



// FUNCTION 14659dc5a FUN_14659dc5a body=47 status=ok
// SIG undefined FUN_14659dc5a(void)

longlong FUN_14659dc5a(void)

{
  if (DAT_14cb9d3a0 == 0) {
    FUN_14073dd9a(&DAT_14cb9d3a0,&PTR_LAB_14b594dc8);
  }
  return DAT_14cb9d3a0;
}



// FUNCTION 14659dc89 FUN_14659dc89 body=47 status=ok
// SIG undefined FUN_14659dc89(void)

longlong FUN_14659dc89(void)

{
  if (DAT_14cb9d3b8 == 0) {
    FUN_14073dd9a(&DAT_14cb9d3b8,&PTR_LAB_14b5951d8);
  }
  return DAT_14cb9d3b8;
}



// FUNCTION 14659dcb8 FUN_14659dcb8 body=40 status=ok
// SIG undefined FUN_14659dcb8(void)

undefined8 FUN_14659dcb8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659dce0 FUN_14659dce0 body=40 status=ok
// SIG undefined FUN_14659dce0(void)

undefined8 FUN_14659dce0(undefined8 param_1,int param_2)

{
  FUN_145c199cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659dd08 FUN_14659dd08 body=40 status=ok
// SIG undefined FUN_14659dd08(void)

undefined8 FUN_14659dd08(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659dd30 FUN_14659dd30 body=40 status=ok
// SIG undefined FUN_14659dd30(void)

undefined8 FUN_14659dd30(undefined8 param_1,int param_2)

{
  FUN_145bf14b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659dd58 FUN_14659dd58 body=69 status=ok
// SIG undefined FUN_14659dd58(void)

longlong FUN_14659dd58(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0x2d0) = &PTR_FUN_14b56e120;
  FUN_144760f98(param_1 + 0x2d8);
  FUN_140cdcea6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659dd9e FUN_14659dd9e body=40 status=ok
// SIG undefined FUN_14659dd9e(void)

undefined8 FUN_14659dd9e(undefined8 param_1,int param_2)

{
  FUN_141119892();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659ddc6 FUN_14659ddc6 body=40 status=ok
// SIG undefined FUN_14659ddc6(void)

undefined8 FUN_14659ddc6(undefined8 param_1,int param_2)

{
  FUN_145d71676();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659ddee FUN_14659ddee body=40 status=ok
// SIG undefined FUN_14659ddee(void)

undefined8 FUN_14659ddee(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659de16 FUN_14659de16 body=40 status=ok
// SIG undefined FUN_14659de16(void)

undefined8 FUN_14659de16(undefined8 param_1,int param_2)

{
  FUN_145aa0a8a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659de3e FUN_14659de3e body=40 status=ok
// SIG undefined FUN_14659de3e(void)

undefined8 FUN_14659de3e(undefined8 param_1,int param_2)

{
  FUN_145ac6f9a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659de66 FUN_14659de66 body=40 status=ok
// SIG undefined FUN_14659de66(void)

undefined8 FUN_14659de66(undefined8 param_1,int param_2)

{
  FUN_145c5da40();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659de8e FUN_14659de8e body=40 status=ok
// SIG undefined FUN_14659de8e(void)

undefined8 FUN_14659de8e(undefined8 param_1,int param_2)

{
  FUN_145aff2f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659deb6 FUN_14659deb6 body=40 status=ok
// SIG undefined FUN_14659deb6(void)

undefined8 FUN_14659deb6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659dede FUN_14659dede body=40 status=ok
// SIG undefined FUN_14659dede(void)

undefined8 FUN_14659dede(undefined8 param_1,int param_2)

{
  FUN_145807312();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659df06 FUN_14659df06 body=40 status=ok
// SIG undefined FUN_14659df06(void)

undefined8 FUN_14659df06(undefined8 param_1,int param_2)

{
  FUN_141471a12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659df2e FUN_14659df2e body=40 status=ok
// SIG undefined FUN_14659df2e(void)

undefined8 FUN_14659df2e(undefined8 param_1,int param_2)

{
  FUN_145ac6e1a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659df56 FUN_14659df56 body=40 status=ok
// SIG undefined FUN_14659df56(void)

undefined8 FUN_14659df56(undefined8 param_1,int param_2)

{
  FUN_145ac6e9a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659df7e FUN_14659df7e body=29 status=ok
// SIG undefined FUN_14659df7e(void)

undefined8 FUN_14659df7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659df9c FUN_14659df9c body=29 status=ok
// SIG undefined FUN_14659df9c(void)

undefined8 FUN_14659df9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659dfba FUN_14659dfba body=29 status=ok
// SIG undefined FUN_14659dfba(void)

undefined8 FUN_14659dfba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659dfd8 FUN_14659dfd8 body=29 status=ok
// SIG undefined FUN_14659dfd8(void)

undefined8 FUN_14659dfd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659dff6 FUN_14659dff6 body=29 status=ok
// SIG undefined FUN_14659dff6(void)

undefined8 FUN_14659dff6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659e013 FUN_14659e013 body=49 status=ok
// SIG undefined FUN_14659e013(void)

longlong FUN_14659e013(void)

{
  if (DAT_14cb9d530 == 0) {
    FUN_14086a14e(&DAT_14cb9d530,&PTR_FUN_14b598638);
  }
  return DAT_14cb9d530;
}



// FUNCTION 14659e044 FUN_14659e044 body=55 status=ok
// SIG undefined FUN_14659e044(void)

void FUN_14659e044(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9d538 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9d538 = FUN_140002ddd(FUN_14659e013,uVar1,L"GbxUIUMGWidgetType");
  }
  return;
}



// FUNCTION 14659e07c FUN_14659e07c body=48 status=ok
// SIG undefined FUN_14659e07c(void)

void FUN_14659e07c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b59bf70;
  return;
}



// FUNCTION 14659e0ac FUN_14659e0ac body=47 status=ok
// SIG undefined FUN_14659e0ac(void)

longlong FUN_14659e0ac(void)

{
  if (DAT_14cb9d5b8 == 0) {
    FUN_14073dd9a(&DAT_14cb9d5b8,&PTR_LAB_14b598df0);
  }
  return DAT_14cb9d5b8;
}



// FUNCTION 14659e0db FUN_14659e0db body=47 status=ok
// SIG undefined FUN_14659e0db(void)

longlong FUN_14659e0db(void)

{
  if (DAT_14cb9d5a8 == 0) {
    FUN_14000fc22(&DAT_14cb9d5a8,&PTR_FUN_14b598c60);
  }
  return DAT_14cb9d5a8;
}



// FUNCTION 14659e10a FUN_14659e10a body=34 status=ok
// SIG undefined FUN_14659e10a(void)

void FUN_14659e10a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14595db62();
  FUN_14069c8d6(uVar1,&PTR_s_RegisterLayer_14b598ca0,1);
  return;
}



// FUNCTION 14659e131 FUN_14659e131 body=47 status=ok
// SIG undefined FUN_14659e131(void)

longlong FUN_14659e131(void)

{
  if (DAT_14cb9d5c8 == 0) {
    FUN_1409ce572(&DAT_14cb9d5c8,&PTR_FUN_14b598e90);
  }
  return DAT_14cb9d5c8;
}



// FUNCTION 14659e160 FUN_14659e160 body=47 status=ok
// SIG undefined FUN_14659e160(void)

longlong FUN_14659e160(void)

{
  if (DAT_14cb9d5e0 == 0) {
    FUN_1409ce572(&DAT_14cb9d5e0,&PTR_FUN_14b598f00);
  }
  return DAT_14cb9d5e0;
}



// FUNCTION 14659e190 FUN_14659e190 body=55 status=ok
// SIG undefined FUN_14659e190(void)

void FUN_14659e190(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9d600 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9d600 = FUN_140002ddd(FUN_14659e1c7,uVar1,L"UIExtensionPointHandle");
  }
  return;
}



// FUNCTION 14659e1c7 FUN_14659e1c7 body=49 status=ok
// SIG undefined FUN_14659e1c7(void)

longlong FUN_14659e1c7(void)

{
  if (DAT_14cb9d5f8 == 0) {
    FUN_14086a14e(&DAT_14cb9d5f8,&PTR_FUN_14b598f78);
  }
  return DAT_14cb9d5f8;
}



// FUNCTION 14659e1f8 FUN_14659e1f8 body=48 status=ok
// SIG undefined FUN_14659e1f8(void)

void FUN_14659e1f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b59c600;
  return;
}



// FUNCTION 14659e228 FUN_14659e228 body=55 status=ok
// SIG undefined FUN_14659e228(void)

void FUN_14659e228(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9d618 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9d618 = FUN_140002ddd(FUN_1418c2751,uVar1,L"UIExtensionHandle");
  }
  return;
}



// FUNCTION 14659e260 FUN_14659e260 body=48 status=ok
// SIG undefined FUN_14659e260(void)

void FUN_14659e260(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b59c760;
  return;
}



// FUNCTION 14659e290 FUN_14659e290 body=55 status=ok
// SIG undefined FUN_14659e290(void)

void FUN_14659e290(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9d630 == 0) {
    uVar1 = FUN_140f9f06f();
    DAT_14cb9d630 = FUN_140002ddd(FUN_14659e2c7,uVar1,L"UIExtensionRequest");
  }
  return;
}



// FUNCTION 14659e2c7 FUN_14659e2c7 body=47 status=ok
// SIG undefined FUN_14659e2c7(void)

longlong FUN_14659e2c7(void)

{
  if (DAT_14cb9d628 == 0) {
    FUN_14086a14e(&DAT_14cb9d628,&PTR_FUN_14b5991d0);
  }
  return DAT_14cb9d628;
}



// FUNCTION 14659e2f6 FUN_14659e2f6 body=48 status=ok
// SIG undefined FUN_14659e2f6(void)

void FUN_14659e2f6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14b59c8d0;
  return;
}



// FUNCTION 14659e326 FUN_14659e326 body=47 status=ok
// SIG undefined FUN_14659e326(void)

longlong FUN_14659e326(void)

{
  if (DAT_14cb9d640 == 0) {
    FUN_14000fc22(&DAT_14cb9d640,&PTR_FUN_14b599330);
  }
  return DAT_14cb9d640;
}



// FUNCTION 14659e355 FUN_14659e355 body=49 status=ok
// SIG undefined FUN_14659e355(void)

longlong FUN_14659e355(void)

{
  if (DAT_14cb9d688 == 0) {
    FUN_14073dd9a(&DAT_14cb9d688,&PTR_LAB_14b599f50);
  }
  return DAT_14cb9d688;
}



// FUNCTION 14659e386 FUN_14659e386 body=47 status=ok
// SIG undefined FUN_14659e386(void)

longlong FUN_14659e386(void)

{
  if (DAT_14cb9d648 == 0) {
    FUN_14000fc22(&DAT_14cb9d648,&PTR_FUN_14b5994b0);
  }
  return DAT_14cb9d648;
}



// FUNCTION 14659e3b5 FUN_14659e3b5 body=47 status=ok
// SIG undefined FUN_14659e3b5(void)

longlong FUN_14659e3b5(void)

{
  if (DAT_14cb9d650 == 0) {
    FUN_14000fc22(&DAT_14cb9d650,&PTR_FUN_14b599680);
  }
  return DAT_14cb9d650;
}



// FUNCTION 14659e3e4 FUN_14659e3e4 body=47 status=ok
// SIG undefined FUN_14659e3e4(void)

longlong FUN_14659e3e4(void)

{
  if (DAT_14cb9d658 == 0) {
    FUN_14000fc22(&DAT_14cb9d658,&PTR_FUN_14b599800);
  }
  return DAT_14cb9d658;
}



// FUNCTION 14659e413 FUN_14659e413 body=47 status=ok
// SIG undefined FUN_14659e413(void)

longlong FUN_14659e413(void)

{
  if (DAT_14cb9d660 == 0) {
    FUN_14000fc22(&DAT_14cb9d660,&PTR_FUN_14b5999d0);
  }
  return DAT_14cb9d660;
}



// FUNCTION 14659e442 FUN_14659e442 body=47 status=ok
// SIG undefined FUN_14659e442(void)

longlong FUN_14659e442(void)

{
  if (DAT_14cb9d668 == 0) {
    FUN_14000fc22(&DAT_14cb9d668,&PTR_FUN_14b599c78);
  }
  return DAT_14cb9d668;
}



// FUNCTION 14659e471 FUN_14659e471 body=47 status=ok
// SIG undefined FUN_14659e471(void)

longlong FUN_14659e471(void)

{
  if (DAT_14cb9d670 == 0) {
    FUN_14000fc22(&DAT_14cb9d670,&PTR_FUN_14b599d18);
  }
  return DAT_14cb9d670;
}



// FUNCTION 14659e4a0 FUN_14659e4a0 body=47 status=ok
// SIG undefined FUN_14659e4a0(void)

longlong FUN_14659e4a0(void)

{
  if (DAT_14cb9d678 == 0) {
    FUN_14000fc22(&DAT_14cb9d678,&PTR_FUN_14b599dd8);
  }
  return DAT_14cb9d678;
}



// FUNCTION 14659e4d0 FUN_14659e4d0 body=34 status=ok
// SIG undefined FUN_14659e4d0(void)

void FUN_14659e4d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1412b3ef6();
  FUN_14069c8d6(uVar1,&PTR_s_K2_RegisterExtensionAsData_14b599e20,7);
  return;
}



// FUNCTION 14659e4f7 FUN_14659e4f7 body=118 status=ok
// SIG undefined FUN_14659e4f7(void)

void FUN_14659e4f7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140c444d0(puVar1);
  *puVar1 = &PTR_FUN_14b599f90;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  puVar1[0x14] = 0;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xb4) = 0;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 0x19) = 0;
  return;
}



// FUNCTION 14659e56d FUN_14659e56d body=47 status=ok
// SIG undefined FUN_14659e56d(void)

longlong FUN_14659e56d(void)

{
  if (DAT_14cb9d6b0 == 0) {
    FUN_14073dd9a(&DAT_14cb9d6b0,&PTR_LAB_14b59a470);
  }
  return DAT_14cb9d6b0;
}



// FUNCTION 14659e59c FUN_14659e59c body=47 status=ok
// SIG undefined FUN_14659e59c(void)

longlong FUN_14659e59c(void)

{
  if (DAT_14cb9d698 == 0) {
    FUN_14000fc22(&DAT_14cb9d698,&PTR_FUN_14b59a300);
  }
  return DAT_14cb9d698;
}



// FUNCTION 14659e5cb FUN_14659e5cb body=47 status=ok
// SIG undefined FUN_14659e5cb(void)

longlong FUN_14659e5cb(void)

{
  if (DAT_14cb9d6a0 == 0) {
    FUN_14000fc22(&DAT_14cb9d6a0,&PTR_FUN_14b59a388);
  }
  return DAT_14cb9d6a0;
}



// FUNCTION 14659e5fa FUN_14659e5fa body=34 status=ok
// SIG undefined FUN_14659e5fa(void)

void FUN_14659e5fa(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a886de();
  FUN_14069c8d6(uVar1,&PTR_s_IsValid_14b59a3d0,2);
  return;
}



// FUNCTION 14659e61c FUN_14659e61c body=40 status=ok
// SIG undefined FUN_14659e61c(void)

void FUN_14659e61c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = FUN_14007ca06();
  FUN_140b4b170(param_1,uVar1);
  *param_1 = &PTR_FUN_14b59a4b0;
  return;
}



// FUNCTION 14659e644 FUN_14659e644 body=47 status=ok
// SIG undefined FUN_14659e644(void)

longlong FUN_14659e644(void)

{
  if (DAT_14cb9d6d8 == 0) {
    FUN_14073dd9a(&DAT_14cb9d6d8,&PTR_LAB_14b59a960);
  }
  return DAT_14cb9d6d8;
}



// FUNCTION 14659e673 FUN_14659e673 body=47 status=ok
// SIG undefined FUN_14659e673(void)

longlong FUN_14659e673(void)

{
  if (DAT_14cb9d6c0 == 0) {
    FUN_14000fc22(&DAT_14cb9d6c0,&PTR_FUN_14b59a7e0);
  }
  return DAT_14cb9d6c0;
}



// FUNCTION 14659e6a2 FUN_14659e6a2 body=47 status=ok
// SIG undefined FUN_14659e6a2(void)

longlong FUN_14659e6a2(void)

{
  if (DAT_14cb9d6c8 == 0) {
    FUN_14000fc22(&DAT_14cb9d6c8,&PTR_FUN_14b59a868);
  }
  return DAT_14cb9d6c8;
}



// FUNCTION 14659e6d2 FUN_14659e6d2 body=34 status=ok
// SIG undefined FUN_14659e6d2(void)

void FUN_14659e6d2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a887ca();
  FUN_14069c8d6(uVar1,&PTR_s_IsValid_14b59a8b0,2);
  return;
}



// FUNCTION 14659e6f4 FUN_14659e6f4 body=40 status=ok
// SIG undefined FUN_14659e6f4(void)

void FUN_14659e6f4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = FUN_14007ca06();
  FUN_140b4b170(param_1,uVar1);
  *param_1 = &PTR_FUN_14b59a9a0;
  return;
}



// FUNCTION 14659e71c FUN_14659e71c body=108 status=ok
// SIG undefined FUN_14659e71c(void)

void FUN_14659e71c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14586acc0();
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_140886972();
    *(undefined8 *)(param_1 + 0x90) = 0;
    plVar3 = *(longlong **)(param_1 + 0x98);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x98) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014659e784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14659e788 FUN_14659e788 body=108 status=ok
// SIG undefined FUN_14659e788(void)

void FUN_14659e788(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14586acc0();
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_140886972();
    *(undefined8 *)(param_1 + 0x90) = 0;
    plVar3 = *(longlong **)(param_1 + 0x98);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x98) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014659e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14659e7f4 FUN_14659e7f4 body=110 status=ok
// SIG undefined FUN_14659e7f4(void)

void FUN_14659e7f4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_141125c4a();
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_143339a7a();
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  plVar3 = *(longlong **)(param_1 + 0x180);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x180) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014659e85e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14659e862 FUN_14659e862 body=231 status=ok
// SIG undefined FUN_14659e862(void)

void FUN_14659e862(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14b59d6b0;
  local_28[3] = &DAT_14cb9d924;
  local_28[4] = FUN_1459d0352;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14659e94a FUN_14659e94a body=40 status=ok
// SIG undefined FUN_14659e94a(void)

undefined8 FUN_14659e94a(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659e972 FUN_14659e972 body=40 status=ok
// SIG undefined FUN_14659e972(void)

undefined8 FUN_14659e972(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659e99a FUN_14659e99a body=29 status=ok
// SIG undefined FUN_14659e99a(void)

undefined8 FUN_14659e99a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659e9b8 FUN_14659e9b8 body=29 status=ok
// SIG undefined FUN_14659e9b8(void)

undefined8 FUN_14659e9b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659e9d6 FUN_14659e9d6 body=29 status=ok
// SIG undefined FUN_14659e9d6(void)

undefined8 FUN_14659e9d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659e9f4 FUN_14659e9f4 body=29 status=ok
// SIG undefined FUN_14659e9f4(void)

undefined8 FUN_14659e9f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659ea12 FUN_14659ea12 body=93 status=ok
// SIG undefined FUN_14659ea12(void)

void FUN_14659ea12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b59d6b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14659ea70 FUN_14659ea70 body=29 status=ok
// SIG undefined FUN_14659ea70(void)

undefined8 FUN_14659ea70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14659ea8d FUN_14659ea8d body=49 status=ok
// SIG undefined FUN_14659ea8d(void)

longlong FUN_14659ea8d(void)

{
  if (DAT_14cb9da28 == 0) {
    FUN_1409ce572(&DAT_14cb9da28,&PTR_FUN_14b59fa30);
  }
  return DAT_14cb9da28;
}



// FUNCTION 14659eabe FUN_14659eabe body=47 status=ok
// SIG undefined FUN_14659eabe(void)

longlong FUN_14659eabe(void)

{
  if (DAT_14cb9da40 == 0) {
    FUN_14000fc22(&DAT_14cb9da40,&PTR_FUN_14b59fad8);
  }
  return DAT_14cb9da40;
}



// FUNCTION 14659eaed FUN_14659eaed body=47 status=ok
// SIG undefined FUN_14659eaed(void)

longlong FUN_14659eaed(void)

{
  if (DAT_14cb9da48 == 0) {
    FUN_14000fc22(&DAT_14cb9da48,&PTR_FUN_14b59fb78);
  }
  return DAT_14cb9da48;
}



// FUNCTION 14659eb1c FUN_14659eb1c body=47 status=ok
// SIG undefined FUN_14659eb1c(void)

longlong FUN_14659eb1c(void)

{
  if (DAT_14cb9da50 == 0) {
    FUN_14000fc22(&DAT_14cb9da50,&PTR_FUN_14b59fc18);
  }
  return DAT_14cb9da50;
}



// FUNCTION 14659eb4b FUN_14659eb4b body=47 status=ok
// SIG undefined FUN_14659eb4b(void)

longlong FUN_14659eb4b(void)

{
  if (DAT_14cb9da58 == 0) {
    FUN_14000fc22(&DAT_14cb9da58,&PTR_FUN_14b59fcb0);
  }
  return DAT_14cb9da58;
}



// FUNCTION 14659eb7a FUN_14659eb7a body=47 status=ok
// SIG undefined FUN_14659eb7a(void)

longlong FUN_14659eb7a(void)

{
  if (DAT_14cb9da60 == 0) {
    FUN_14000fc22(&DAT_14cb9da60,&PTR_FUN_14b59fd48);
  }
  return DAT_14cb9da60;
}



// FUNCTION 14659eba9 FUN_14659eba9 body=47 status=ok
// SIG undefined FUN_14659eba9(void)

longlong FUN_14659eba9(void)

{
  if (DAT_14cb9da68 == 0) {
    FUN_14000fc22(&DAT_14cb9da68,&PTR_FUN_14b59fde8);
  }
  return DAT_14cb9da68;
}



// FUNCTION 14659ebd8 FUN_14659ebd8 body=47 status=ok
// SIG undefined FUN_14659ebd8(void)

longlong FUN_14659ebd8(void)

{
  if (DAT_14cb9da70 == 0) {
    FUN_14000fc22(&DAT_14cb9da70,&PTR_FUN_14b59fe80);
  }
  return DAT_14cb9da70;
}



// FUNCTION 14659ec07 FUN_14659ec07 body=47 status=ok
// SIG undefined FUN_14659ec07(void)

longlong FUN_14659ec07(void)

{
  if (DAT_14cb9da78 == 0) {
    FUN_14000fc22(&DAT_14cb9da78,&PTR_FUN_14b59ff18);
  }
  return DAT_14cb9da78;
}



// FUNCTION 14659ec36 FUN_14659ec36 body=47 status=ok
// SIG undefined FUN_14659ec36(void)

longlong FUN_14659ec36(void)

{
  if (DAT_14cb9da80 == 0) {
    FUN_14000fc22(&DAT_14cb9da80,&PTR_FUN_14b59ffb8);
  }
  return DAT_14cb9da80;
}



// FUNCTION 14659ec65 FUN_14659ec65 body=47 status=ok
// SIG undefined FUN_14659ec65(void)

longlong FUN_14659ec65(void)

{
  if (DAT_14cb9da88 == 0) {
    FUN_14000fc22(&DAT_14cb9da88,&PTR_FUN_14b5a0058);
  }
  return DAT_14cb9da88;
}



// FUNCTION 14659ec94 FUN_14659ec94 body=47 status=ok
// SIG undefined FUN_14659ec94(void)

longlong FUN_14659ec94(void)

{
  if (DAT_14cb9da90 == 0) {
    FUN_14000fc22(&DAT_14cb9da90,&PTR_FUN_14b5a00e0);
  }
  return DAT_14cb9da90;
}



// FUNCTION 14659ecc3 FUN_14659ecc3 body=47 status=ok
// SIG undefined FUN_14659ecc3(void)

longlong FUN_14659ecc3(void)

{
  if (DAT_14cb9da98 == 0) {
    FUN_14000fc22(&DAT_14cb9da98,&PTR_FUN_14b5a0178);
  }
  return DAT_14cb9da98;
}



// FUNCTION 14659ecf2 FUN_14659ecf2 body=47 status=ok
// SIG undefined FUN_14659ecf2(void)

longlong FUN_14659ecf2(void)

{
  if (DAT_14cb9daa0 == 0) {
    FUN_14000fc22(&DAT_14cb9daa0,&PTR_FUN_14b5a0210);
  }
  return DAT_14cb9daa0;
}



// FUNCTION 14659ed21 FUN_14659ed21 body=47 status=ok
// SIG undefined FUN_14659ed21(void)

longlong FUN_14659ed21(void)

{
  if (DAT_14cb9daa8 == 0) {
    FUN_14000fc22(&DAT_14cb9daa8,&PTR_FUN_14b5a02a8);
  }
  return DAT_14cb9daa8;
}



// FUNCTION 14659ed50 FUN_14659ed50 body=47 status=ok
// SIG undefined FUN_14659ed50(void)

longlong FUN_14659ed50(void)

{
  if (DAT_14cb9dab0 == 0) {
    FUN_14000fc22(&DAT_14cb9dab0,&PTR_FUN_14b5a0330);
  }
  return DAT_14cb9dab0;
}



// FUNCTION 14659ed7f FUN_14659ed7f body=47 status=ok
// SIG undefined FUN_14659ed7f(void)

longlong FUN_14659ed7f(void)

{
  if (DAT_14cb9dab8 == 0) {
    FUN_14000fc22(&DAT_14cb9dab8,&PTR_FUN_14b5a03b0);
  }
  return DAT_14cb9dab8;
}



// FUNCTION 14659edae FUN_14659edae body=47 status=ok
// SIG undefined FUN_14659edae(void)

longlong FUN_14659edae(void)

{
  if (DAT_14cb9dac0 == 0) {
    FUN_14000fc22(&DAT_14cb9dac0,&PTR_FUN_14b5a0498);
  }
  return DAT_14cb9dac0;
}



// FUNCTION 14659eddd FUN_14659eddd body=47 status=ok
// SIG undefined FUN_14659eddd(void)

longlong FUN_14659eddd(void)

{
  if (DAT_14cb9dac8 == 0) {
    FUN_14000fc22(&DAT_14cb9dac8,&PTR_FUN_14b5a0538);
  }
  return DAT_14cb9dac8;
}



// FUNCTION 14659ee0c FUN_14659ee0c body=47 status=ok
// SIG undefined FUN_14659ee0c(void)

longlong FUN_14659ee0c(void)

{
  if (DAT_14cb9dad0 == 0) {
    FUN_14000fc22(&DAT_14cb9dad0,&PTR_FUN_14b5a05d8);
  }
  return DAT_14cb9dad0;
}



// FUNCTION 14659ee3b FUN_14659ee3b body=47 status=ok
// SIG undefined FUN_14659ee3b(void)

longlong FUN_14659ee3b(void)

{
  if (DAT_14cb9dad8 == 0) {
    FUN_14000fc22(&DAT_14cb9dad8,&PTR_FUN_14b5a0680);
  }
  return DAT_14cb9dad8;
}



// FUNCTION 14659ee6a FUN_14659ee6a body=47 status=ok
// SIG undefined FUN_14659ee6a(void)

longlong FUN_14659ee6a(void)

{
  if (DAT_14cb9dae0 == 0) {
    FUN_14000fc22(&DAT_14cb9dae0,&PTR_FUN_14b5a0718);
  }
  return DAT_14cb9dae0;
}



// FUNCTION 14659ee99 FUN_14659ee99 body=47 status=ok
// SIG undefined FUN_14659ee99(void)

longlong FUN_14659ee99(void)

{
  if (DAT_14cb9dae8 == 0) {
    FUN_14000fc22(&DAT_14cb9dae8,&PTR_FUN_14b5a07b8);
  }
  return DAT_14cb9dae8;
}



// FUNCTION 14659eec8 FUN_14659eec8 body=47 status=ok
// SIG undefined FUN_14659eec8(void)

longlong FUN_14659eec8(void)

{
  if (DAT_14cb9daf0 == 0) {
    FUN_14000fc22(&DAT_14cb9daf0,&PTR_FUN_14b5a0888);
  }
  return DAT_14cb9daf0;
}



// FUNCTION 14659eef7 FUN_14659eef7 body=47 status=ok
// SIG undefined FUN_14659eef7(void)

longlong FUN_14659eef7(void)

{
  if (DAT_14cb9daf8 == 0) {
    FUN_14000fc22(&DAT_14cb9daf8,&PTR_FUN_14b5a0940);
  }
  return DAT_14cb9daf8;
}



// FUNCTION 14659ef26 FUN_14659ef26 body=47 status=ok
// SIG undefined FUN_14659ef26(void)

longlong FUN_14659ef26(void)

{
  if (DAT_14cb9db00 == 0) {
    FUN_14000fc22(&DAT_14cb9db00,&PTR_FUN_14b5a09e0);
  }
  return DAT_14cb9db00;
}



// FUNCTION 14659ef55 FUN_14659ef55 body=47 status=ok
// SIG undefined FUN_14659ef55(void)

longlong FUN_14659ef55(void)

{
  if (DAT_14cb9db08 == 0) {
    FUN_14000fc22(&DAT_14cb9db08,&PTR_FUN_14b5a0a78);
  }
  return DAT_14cb9db08;
}



// FUNCTION 14659ef84 FUN_14659ef84 body=47 status=ok
// SIG undefined FUN_14659ef84(void)

longlong FUN_14659ef84(void)

{
  if (DAT_14cb9db10 == 0) {
    FUN_14000fc22(&DAT_14cb9db10,&PTR_FUN_14b5a0b20);
  }
  return DAT_14cb9db10;
}



// FUNCTION 14659efb3 FUN_14659efb3 body=47 status=ok
// SIG undefined FUN_14659efb3(void)

longlong FUN_14659efb3(void)

{
  if (DAT_14cb9db18 == 0) {
    FUN_14000fc22(&DAT_14cb9db18,&PTR_FUN_14b5a0bd0);
  }
  return DAT_14cb9db18;
}



// FUNCTION 14659efe2 FUN_14659efe2 body=47 status=ok
// SIG undefined FUN_14659efe2(void)

longlong FUN_14659efe2(void)

{
  if (DAT_14cb9db20 == 0) {
    FUN_14000fc22(&DAT_14cb9db20,&PTR_FUN_14b5a0c90);
  }
  return DAT_14cb9db20;
}



// FUNCTION 14659f011 FUN_14659f011 body=47 status=ok
// SIG undefined FUN_14659f011(void)

longlong FUN_14659f011(void)

{
  if (DAT_14cb9db28 == 0) {
    FUN_14000fc22(&DAT_14cb9db28,&PTR_FUN_14b5a0d38);
  }
  return DAT_14cb9db28;
}



// FUNCTION 14659f040 FUN_14659f040 body=47 status=ok
// SIG undefined FUN_14659f040(void)

longlong FUN_14659f040(void)

{
  if (DAT_14cb9db30 == 0) {
    FUN_14000fc22(&DAT_14cb9db30,&PTR_FUN_14b5a0de0);
  }
  return DAT_14cb9db30;
}



// FUNCTION 14659f06f FUN_14659f06f body=47 status=ok
// SIG undefined FUN_14659f06f(void)

longlong FUN_14659f06f(void)

{
  if (DAT_14cb9db38 == 0) {
    FUN_14000fc22(&DAT_14cb9db38,&PTR_FUN_14b5a0e98);
  }
  return DAT_14cb9db38;
}



// FUNCTION 14659f09e FUN_14659f09e body=47 status=ok
// SIG undefined FUN_14659f09e(void)

longlong FUN_14659f09e(void)

{
  if (DAT_14cb9db40 == 0) {
    FUN_14000fc22(&DAT_14cb9db40,&PTR_FUN_14b5a0f48);
  }
  return DAT_14cb9db40;
}



// FUNCTION 14659f0cd FUN_14659f0cd body=47 status=ok
// SIG undefined FUN_14659f0cd(void)

longlong FUN_14659f0cd(void)

{
  if (DAT_14cb9db48 == 0) {
    FUN_14000fc22(&DAT_14cb9db48,&PTR_FUN_14b5a0ff0);
  }
  return DAT_14cb9db48;
}



// FUNCTION 14659f0fc FUN_14659f0fc body=47 status=ok
// SIG undefined FUN_14659f0fc(void)

longlong FUN_14659f0fc(void)

{
  if (DAT_14cb9db50 == 0) {
    FUN_14000fc22(&DAT_14cb9db50,&PTR_FUN_14b5a10a0);
  }
  return DAT_14cb9db50;
}



// FUNCTION 14659f12b FUN_14659f12b body=47 status=ok
// SIG undefined FUN_14659f12b(void)

longlong FUN_14659f12b(void)

{
  if (DAT_14cb9db58 == 0) {
    FUN_14000fc22(&DAT_14cb9db58,&PTR_FUN_14b5a1150);
  }
  return DAT_14cb9db58;
}



// FUNCTION 14659f15a FUN_14659f15a body=47 status=ok
// SIG undefined FUN_14659f15a(void)

longlong FUN_14659f15a(void)

{
  if (DAT_14cb9db60 == 0) {
    FUN_14000fc22(&DAT_14cb9db60,&PTR_FUN_14b5a11d8);
  }
  return DAT_14cb9db60;
}



// FUNCTION 14659f189 FUN_14659f189 body=47 status=ok
// SIG undefined FUN_14659f189(void)

longlong FUN_14659f189(void)

{
  if (DAT_14cb9db68 == 0) {
    FUN_14000fc22(&DAT_14cb9db68,&PTR_FUN_14b5a1258);
  }
  return DAT_14cb9db68;
}



// FUNCTION 14659f1b8 FUN_14659f1b8 body=47 status=ok
// SIG undefined FUN_14659f1b8(void)

longlong FUN_14659f1b8(void)

{
  if (DAT_14cb9db70 == 0) {
    FUN_14000fc22(&DAT_14cb9db70,&PTR_FUN_14b5a1330);
  }
  return DAT_14cb9db70;
}



// FUNCTION 14659f1e7 FUN_14659f1e7 body=47 status=ok
// SIG undefined FUN_14659f1e7(void)

longlong FUN_14659f1e7(void)

{
  if (DAT_14cb9db78 == 0) {
    FUN_14000fc22(&DAT_14cb9db78,&PTR_FUN_14b5a13d0);
  }
  return DAT_14cb9db78;
}



// FUNCTION 14659f216 FUN_14659f216 body=47 status=ok
// SIG undefined FUN_14659f216(void)

longlong FUN_14659f216(void)

{
  if (DAT_14cb9db80 == 0) {
    FUN_14000fc22(&DAT_14cb9db80,&PTR_FUN_14b5a1470);
  }
  return DAT_14cb9db80;
}



// FUNCTION 14659f245 FUN_14659f245 body=47 status=ok
// SIG undefined FUN_14659f245(void)

longlong FUN_14659f245(void)

{
  if (DAT_14cb9db88 == 0) {
    FUN_14000fc22(&DAT_14cb9db88,&PTR_FUN_14b5a1518);
  }
  return DAT_14cb9db88;
}



// FUNCTION 14659f274 FUN_14659f274 body=47 status=ok
// SIG undefined FUN_14659f274(void)

longlong FUN_14659f274(void)

{
  if (DAT_14cb9db90 == 0) {
    FUN_14000fc22(&DAT_14cb9db90,&PTR_FUN_14b5a15c0);
  }
  return DAT_14cb9db90;
}



// FUNCTION 14659f2a3 FUN_14659f2a3 body=47 status=ok
// SIG undefined FUN_14659f2a3(void)

longlong FUN_14659f2a3(void)

{
  if (DAT_14cb9db98 == 0) {
    FUN_14000fc22(&DAT_14cb9db98,&PTR_FUN_14b5a1660);
  }
  return DAT_14cb9db98;
}



// FUNCTION 14659f2d2 FUN_14659f2d2 body=34 status=ok
// SIG undefined FUN_14659f2d2(void)

void FUN_14659f2d2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141225d10();
  FUN_14069c8d6(uVar1,&PTR_s_GetAutoRemoveWhenIndicatorCompon_14b5a16a0,0x2c);
  return;
}



// FUNCTION 14659f2f9 FUN_14659f2f9 body=92 status=ok
// SIG undefined FUN_14659f2f9(void)

void FUN_14659f2f9(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  FUN_140ea0e34(plVar1,param_1);
  *plVar1 = (longlong)&PTR_FUN_14b5a2870;
  plVar1[5] = (longlong)&PTR_FUN_14b5a2b70;
  FUN_140ca8f8e(plVar1 + 0x2e);
  plVar1[0x44] = 0;
  plVar1[0x45] = 0;
  *(byte *)((longlong)plVar1 + 0xd9) = *(byte *)((longlong)plVar1 + 0xd9) | 1;
                    /* WARNING: Could not recover jumptable at 0x00014659f352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2b0))(plVar1,3);
  return;
}



// FUNCTION 14659f355 FUN_14659f355 body=47 status=ok
// SIG undefined FUN_14659f355(void)

longlong FUN_14659f355(void)

{
  if (DAT_14cb9dc50 == 0) {
    FUN_14073dd9a(&DAT_14cb9dc50,&PTR_LAB_14b5a2828);
  }
  return DAT_14cb9dc50;
}



// FUNCTION 14659f384 FUN_14659f384 body=45 status=ok
// SIG undefined FUN_14659f384(void)

void FUN_14659f384(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_141092d32(&DAT_14cb10ae8);
  }
  FUN_1459a1f0e(param_1);
  return;
}



// FUNCTION 14659f3b2 FUN_14659f3b2 body=99 status=ok
// SIG undefined FUN_14659f3b2(void)

bool FUN_14659f3b2(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140aa7b7e(*(undefined8 *)(param_1 + 0x10),&local_28,0);
  iVar1 = (int)uStack_20;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14659f416 FUN_14659f416 body=85 status=ok
// SIG undefined FUN_14659f416(void)

undefined8 FUN_14659f416(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_1449db7f2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (*(longlong *)(lVar1 + 0x78) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x78) + 0x80) != 0)) {
      uVar3 = FUN_145aa2e42();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14659f46c FUN_14659f46c body=254 status=ok
// SIG undefined FUN_14659f46c(void)

undefined8
FUN_14659f46c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_14b47b1f0;
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
  *local_48 = &PTR_FUN_14b5a3ea0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145aa2ff8(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14659f56c FUN_14659f56c body=353 status=ok
// SIG undefined FUN_14659f56c(void)

void FUN_14659f56c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_148b6ce30(param_1 + 0x30);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x70));
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 == 0) goto LAB_14659f668;
  lVar1 = FUN_1449db7f2();
  lVar2 = *(longlong *)(lVar2 + 0x10);
  if ((*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) goto LAB_14659f668;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 == 0) {
LAB_14659f698:
    lVar2 = 0;
  }
  else {
    lVar1 = FUN_1449db7f2();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        != lVar1 + 0x30)) goto LAB_14659f698;
  }
  if ((*(longlong *)(lVar2 + 0x78) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x78) + 0x80), lVar2 != 0)) {
    lVar1 = FUN_144a79464();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      if (*(longlong *)(param_1 + 0x60) != 0) {
        FUN_14480f766(lVar2 + 0x2a8);
        *(undefined8 *)(param_1 + 0x60) = 0;
      }
      if (*(longlong *)(param_1 + 0x68) != 0) {
        FUN_14480f766(lVar2 + 0x2a8);
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
    }
  }
LAB_14659f668:
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_141092d32(&DAT_14cb10aa8);
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_141092d32(&DAT_14cb10ae8);
    return;
  }
  return;
}



// FUNCTION 14659f6ce FUN_14659f6ce body=146 status=ok
// SIG undefined FUN_14659f6ce(void)

void FUN_14659f6ce(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_140ed33be();
  iVar1 = *(int *)(param_1 + 0x308);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x300);
    lVar5 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar5);
      uVar4 = FUN_14779c14a(param_1);
      uVar4 = FUN_140059518(uVar4);
      FUN_148b55e90(uVar4,uVar3);
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *(undefined4 *)(param_1 + 0x308) = 0;
  if (*(int *)(param_1 + 0x30c) != 0) {
    FUN_1402191ca(param_1 + 0x300,0);
    return;
  }
  return;
}



// FUNCTION 14659f760 FUN_14659f760 body=29 status=ok
// SIG undefined FUN_14659f760(void)

bool FUN_14659f760(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14659f77e FUN_14659f77e body=26 status=ok
// SIG undefined FUN_14659f77e(void)

bool FUN_14659f77e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14659f798 FUN_14659f798 body=24 status=ok
// SIG undefined FUN_14659f798(void)

bool FUN_14659f798(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14659f7b0 FUN_14659f7b0 body=29 status=ok
// SIG undefined FUN_14659f7b0(void)

bool FUN_14659f7b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14659f7ce FUN_14659f7ce body=26 status=ok
// SIG undefined FUN_14659f7ce(void)

bool FUN_14659f7ce(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14659f7e8 FUN_14659f7e8 body=24 status=ok
// SIG undefined FUN_14659f7e8(void)

bool FUN_14659f7e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14659f800 FUN_14659f800 body=24 status=ok
// SIG undefined FUN_14659f800(void)

bool FUN_14659f800(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14659f818 FUN_14659f818 body=29 status=ok
// SIG undefined FUN_14659f818(void)

bool FUN_14659f818(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14659f836 FUN_14659f836 body=26 status=ok
// SIG undefined FUN_14659f836(void)

bool FUN_14659f836(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14659f850 FUN_14659f850 body=24 status=ok
// SIG undefined FUN_14659f850(void)

bool FUN_14659f850(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14659f868 FUN_14659f868 body=49 status=ok
// SIG undefined FUN_14659f868(void)

longlong FUN_14659f868(void)

{
  if (DAT_14cb9e3f0 == 0) {
    FUN_14073dd9a(&DAT_14cb9e3f0,&PTR_LAB_14b5a4cb0);
  }
  return DAT_14cb9e3f0;
}



// FUNCTION 14659f899 FUN_14659f899 body=47 status=ok
// SIG undefined FUN_14659f899(void)

longlong FUN_14659f899(void)

{
  if (DAT_14cb9e3d0 == 0) {
    FUN_14000fc22(&DAT_14cb9e3d0,&PTR_FUN_14b5a4a68);
  }
  return DAT_14cb9e3d0;
}



// FUNCTION 14659f8c8 FUN_14659f8c8 body=47 status=ok
// SIG undefined FUN_14659f8c8(void)

longlong FUN_14659f8c8(void)

{
  if (DAT_14cb9e3d8 == 0) {
    FUN_14000fc22(&DAT_14cb9e3d8,&PTR_FUN_14b5a4b10);
  }
  return DAT_14cb9e3d8;
}



// FUNCTION 14659f8f7 FUN_14659f8f7 body=47 status=ok
// SIG undefined FUN_14659f8f7(void)

longlong FUN_14659f8f7(void)

{
  if (DAT_14cb9e3e0 == 0) {
    FUN_14000fc22(&DAT_14cb9e3e0,&PTR_FUN_14b5a4bb8);
  }
  return DAT_14cb9e3e0;
}



// FUNCTION 14659f926 FUN_14659f926 body=34 status=ok
// SIG undefined FUN_14659f926(void)

void FUN_14659f926(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a888b6();
  FUN_14069c8d6(uVar1,&PTR_s_Bink_DrawOverlays_14b5a4a4f_1_14b5a4c00,3);
  return;
}



// FUNCTION 14659f948 FUN_14659f948 body=35 status=ok
// SIG undefined FUN_14659f948(void)

void FUN_14659f948(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b5a4cf0;
  return;
}



// FUNCTION 14659f96b FUN_14659f96b body=47 status=ok
// SIG undefined FUN_14659f96b(void)

longlong FUN_14659f96b(void)

{
  if (DAT_14cb9e400 == 0) {
    FUN_1409ce572(&DAT_14cb9e400,&PTR_FUN_14b5a5050);
  }
  return DAT_14cb9e400;
}



// FUNCTION 14659f99a FUN_14659f99a body=47 status=ok
// SIG undefined FUN_14659f99a(void)

longlong FUN_14659f99a(void)

{
  if (DAT_14cb9e418 == 0) {
    FUN_1409ce572(&DAT_14cb9e418,&PTR_FUN_14b5a5120);
  }
  return DAT_14cb9e418;
}



// FUNCTION 14659f9c9 FUN_14659f9c9 body=47 status=ok
// SIG undefined FUN_14659f9c9(void)

longlong FUN_14659f9c9(void)

{
  if (DAT_14cb9e430 == 0) {
    FUN_1409ce572(&DAT_14cb9e430,&PTR_FUN_14b5a51d0);
  }
  return DAT_14cb9e430;
}



// FUNCTION 14659f9f8 FUN_14659f9f8 body=47 status=ok
// SIG undefined FUN_14659f9f8(void)

longlong FUN_14659f9f8(void)

{
  if (DAT_14cb9e448 == 0) {
    FUN_14000fc22(&DAT_14cb9e448,&PTR_FUN_14b5a5230);
  }
  return DAT_14cb9e448;
}



// FUNCTION 14659fa27 FUN_14659fa27 body=47 status=ok
// SIG undefined FUN_14659fa27(void)

longlong FUN_14659fa27(void)

{
  if (DAT_14cb9e450 == 0) {
    FUN_14000fc22(&DAT_14cb9e450,&PTR_FUN_14b5a52e0);
  }
  return DAT_14cb9e450;
}



// FUNCTION 14659fa56 FUN_14659fa56 body=47 status=ok
// SIG undefined FUN_14659fa56(void)

longlong FUN_14659fa56(void)

{
  if (DAT_14cb9e458 == 0) {
    FUN_14000fc22(&DAT_14cb9e458,&PTR_FUN_14b5a5358);
  }
  return DAT_14cb9e458;
}



// FUNCTION 14659fa85 FUN_14659fa85 body=47 status=ok
// SIG undefined FUN_14659fa85(void)

longlong FUN_14659fa85(void)

{
  if (DAT_14cb9e460 == 0) {
    FUN_14000fc22(&DAT_14cb9e460,&PTR_FUN_14b5a53c8);
  }
  return DAT_14cb9e460;
}



// FUNCTION 14659fab4 FUN_14659fab4 body=47 status=ok
// SIG undefined FUN_14659fab4(void)

longlong FUN_14659fab4(void)

{
  if (DAT_14cb9e468 == 0) {
    FUN_14000fc22(&DAT_14cb9e468,&PTR_FUN_14b5a5450);
  }
  return DAT_14cb9e468;
}


