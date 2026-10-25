// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1465e8c12 FUN_1465e8c12 body=47 status=ok
// SIG undefined FUN_1465e8c12(void)

longlong FUN_1465e8c12(void)

{
  if (DAT_14cbadba0 == 0) {
    FUN_14000fc22(&DAT_14cbadba0,&PTR_FUN_14b7caf38);
  }
  return DAT_14cbadba0;
}



// FUNCTION 1465e8c41 FUN_1465e8c41 body=47 status=ok
// SIG undefined FUN_1465e8c41(void)

longlong FUN_1465e8c41(void)

{
  if (DAT_14cbadbb0 == 0) {
    FUN_14000fc22(&DAT_14cbadbb0,&PTR_FUN_14b7cafa8);
  }
  return DAT_14cbadbb0;
}



// FUNCTION 1465e8c70 FUN_1465e8c70 body=47 status=ok
// SIG undefined FUN_1465e8c70(void)

longlong FUN_1465e8c70(void)

{
  if (DAT_14cbadbc0 == 0) {
    FUN_14000fc22(&DAT_14cbadbc0,&PTR_FUN_14b7cb128);
  }
  return DAT_14cbadbc0;
}



// FUNCTION 1465e8c9f FUN_1465e8c9f body=47 status=ok
// SIG undefined FUN_1465e8c9f(void)

longlong FUN_1465e8c9f(void)

{
  if (DAT_14cbadbd0 == 0) {
    FUN_14000fc22(&DAT_14cbadbd0,&PTR_FUN_14b7cb2c8);
  }
  return DAT_14cbadbd0;
}



// FUNCTION 1465e8cce FUN_1465e8cce body=47 status=ok
// SIG undefined FUN_1465e8cce(void)

longlong FUN_1465e8cce(void)

{
  if (DAT_14cbadbe0 == 0) {
    FUN_14000fc22(&DAT_14cbadbe0,&PTR_FUN_14b7cb410);
  }
  return DAT_14cbadbe0;
}



// FUNCTION 1465e8cfd FUN_1465e8cfd body=47 status=ok
// SIG undefined FUN_1465e8cfd(void)

longlong FUN_1465e8cfd(void)

{
  if (DAT_14cbadbf0 == 0) {
    FUN_14000fc22(&DAT_14cbadbf0,&PTR_FUN_14b7cb4f0);
  }
  return DAT_14cbadbf0;
}



// FUNCTION 1465e8d2c FUN_1465e8d2c body=47 status=ok
// SIG undefined FUN_1465e8d2c(void)

longlong FUN_1465e8d2c(void)

{
  if (DAT_14cbadc00 == 0) {
    FUN_14000fc22(&DAT_14cbadc00,&PTR_FUN_14b7cb5d8);
  }
  return DAT_14cbadc00;
}



// FUNCTION 1465e8d5b FUN_1465e8d5b body=47 status=ok
// SIG undefined FUN_1465e8d5b(void)

longlong FUN_1465e8d5b(void)

{
  if (DAT_14cbadc10 == 0) {
    FUN_14000fc22(&DAT_14cbadc10,&PTR_FUN_14b7cb718);
  }
  return DAT_14cbadc10;
}



// FUNCTION 1465e8d8a FUN_1465e8d8a body=200 status=ok
// SIG undefined FUN_1465e8d8a(void)

void FUN_1465e8d8a(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar2 = (**(code **)(*param_1 + 0x1188))(param_1,local_24 != 0);
  if (cVar2 == '\0') {
    FUN_1468998ea(L"ServerRequestPersonalVehicle_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x1190))(param_1,iVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465e8e53 FUN_1465e8e53 body=47 status=ok
// SIG undefined FUN_1465e8e53(void)

longlong FUN_1465e8e53(void)

{
  if (DAT_14cbadc20 == 0) {
    FUN_14000fc22(&DAT_14cbadc20,&PTR_FUN_14b7cb848);
  }
  return DAT_14cbadc20;
}



// FUNCTION 1465e8e82 FUN_1465e8e82 body=47 status=ok
// SIG undefined FUN_1465e8e82(void)

longlong FUN_1465e8e82(void)

{
  if (DAT_14cbadc30 == 0) {
    FUN_14000fc22(&DAT_14cbadc30,&PTR_FUN_14b7cb978);
  }
  return DAT_14cbadc30;
}



// FUNCTION 1465e8eb1 FUN_1465e8eb1 body=47 status=ok
// SIG undefined FUN_1465e8eb1(void)

longlong FUN_1465e8eb1(void)

{
  if (DAT_14cbadc40 == 0) {
    FUN_14000fc22(&DAT_14cbadc40,&PTR_FUN_14b7cbae0);
  }
  return DAT_14cbadc40;
}



// FUNCTION 1465e8ee0 FUN_1465e8ee0 body=47 status=ok
// SIG undefined FUN_1465e8ee0(void)

longlong FUN_1465e8ee0(void)

{
  if (DAT_14cbadc50 == 0) {
    FUN_14000fc22(&DAT_14cbadc50,&PTR_FUN_14b7cbc08);
  }
  return DAT_14cbadc50;
}



// FUNCTION 1465e8f0f FUN_1465e8f0f body=47 status=ok
// SIG undefined FUN_1465e8f0f(void)

longlong FUN_1465e8f0f(void)

{
  if (DAT_14cbadc60 == 0) {
    FUN_14000fc22(&DAT_14cbadc60,&PTR_FUN_14b7cbdc0);
  }
  return DAT_14cbadc60;
}



// FUNCTION 1465e8f3e FUN_1465e8f3e body=47 status=ok
// SIG undefined FUN_1465e8f3e(void)

longlong FUN_1465e8f3e(void)

{
  if (DAT_14cbadc70 == 0) {
    FUN_14000fc22(&DAT_14cbadc70,&PTR_FUN_14b7cbf10);
  }
  return DAT_14cbadc70;
}



// FUNCTION 1465e8f6d FUN_1465e8f6d body=47 status=ok
// SIG undefined FUN_1465e8f6d(void)

longlong FUN_1465e8f6d(void)

{
  if (DAT_14cbadc80 == 0) {
    FUN_14000fc22(&DAT_14cbadc80,&PTR_FUN_14b7cc030);
  }
  return DAT_14cbadc80;
}



// FUNCTION 1465e8f9c FUN_1465e8f9c body=47 status=ok
// SIG undefined FUN_1465e8f9c(void)

longlong FUN_1465e8f9c(void)

{
  if (DAT_14cbadc90 == 0) {
    FUN_14000fc22(&DAT_14cbadc90,&PTR_FUN_14b7cc170);
  }
  return DAT_14cbadc90;
}



// FUNCTION 1465e8fcc FUN_1465e8fcc body=200 status=ok
// SIG undefined FUN_1465e8fcc(void)

void FUN_1465e8fcc(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar2 = (**(code **)(*param_1 + 0x11c8))(param_1,local_24 != 0);
  if (cVar2 == '\0') {
    FUN_1468998ea(L"ServerSetBulletMagnetismSettings_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x11d0))(param_1,iVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465e9095 FUN_1465e9095 body=47 status=ok
// SIG undefined FUN_1465e9095(void)

longlong FUN_1465e9095(void)

{
  if (DAT_14cbadca0 == 0) {
    FUN_14000fc22(&DAT_14cbadca0,&PTR_FUN_14b7cc318);
  }
  return DAT_14cbadca0;
}



// FUNCTION 1465e90c4 FUN_1465e90c4 body=246 status=ok
// SIG undefined FUN_1465e90c4(void)

void FUN_1465e90c4(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x1290))(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465e91bb FUN_1465e91bb body=47 status=ok
// SIG undefined FUN_1465e91bb(void)

longlong FUN_1465e91bb(void)

{
  if (DAT_14cbadcb0 == 0) {
    FUN_14000fc22(&DAT_14cbadcb0,&PTR_FUN_14b7cc418);
  }
  return DAT_14cbadcb0;
}



// FUNCTION 1465e91ea FUN_1465e91ea body=47 status=ok
// SIG undefined FUN_1465e91ea(void)

longlong FUN_1465e91ea(void)

{
  if (DAT_14cbadcc0 == 0) {
    FUN_14000fc22(&DAT_14cbadcc0,&PTR_FUN_14b7cc550);
  }
  return DAT_14cbadcc0;
}



// FUNCTION 1465e921a FUN_1465e921a body=294 status=ok
// SIG undefined FUN_1465e921a(void)

void FUN_1465e921a(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  uVar2 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar2);
  local_40 = local_28;
  cVar1 = (**(code **)(*param_1 + 0x1178))(param_1,&local_50);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerSetPersonalVehicleDef_Validate");
  }
  else {
    local_68 = local_38;
    uVar2 = FUN_14477b664(uStack_30);
    local_60 = FUN_14477b664(uVar2);
    local_58 = local_28;
    (**(code **)(*param_1 + 0x1180))(param_1,&local_68);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465e9341 FUN_1465e9341 body=47 status=ok
// SIG undefined FUN_1465e9341(void)

longlong FUN_1465e9341(void)

{
  if (DAT_14cbadcd0 == 0) {
    FUN_14000fc22(&DAT_14cbadcd0,&PTR_FUN_14b7cc678);
  }
  return DAT_14cbadcd0;
}



// FUNCTION 1465e9370 FUN_1465e9370 body=47 status=ok
// SIG undefined FUN_1465e9370(void)

longlong FUN_1465e9370(void)

{
  if (DAT_14cbadce0 == 0) {
    FUN_14000fc22(&DAT_14cbadce0,&PTR_FUN_14b7cc7a8);
  }
  return DAT_14cbadce0;
}



// FUNCTION 1465e93a0 FUN_1465e93a0 body=294 status=ok
// SIG undefined FUN_1465e93a0(void)

void FUN_1465e93a0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  uVar2 = FUN_14477b664(uStack_30);
  local_48 = FUN_14477b664(uVar2);
  local_40 = local_28;
  cVar1 = (**(code **)(*param_1 + 0x1168))(param_1,&local_50);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerSetVehicleHoverDriveDef_Validate");
  }
  else {
    local_68 = local_38;
    uVar2 = FUN_14477b664(uStack_30);
    local_60 = FUN_14477b664(uVar2);
    local_58 = local_28;
    (**(code **)(*param_1 + 0x1170))(param_1,&local_68);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465e94c7 FUN_1465e94c7 body=47 status=ok
// SIG undefined FUN_1465e94c7(void)

longlong FUN_1465e94c7(void)

{
  if (DAT_14cbadcf0 == 0) {
    FUN_14000fc22(&DAT_14cbadcf0,&PTR_FUN_14b7cc978);
  }
  return DAT_14cbadcf0;
}



// FUNCTION 1465e94f6 FUN_1465e94f6 body=286 status=ok
// SIG undefined FUN_1465e94f6(void)

void FUN_1465e94f6(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x1468))(param_1,local_20,local_21);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerStartUsing_ObjectHosted_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x1470))(param_1,local_20,local_21);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465e9615 FUN_1465e9615 body=47 status=ok
// SIG undefined FUN_1465e9615(void)

longlong FUN_1465e9615(void)

{
  if (DAT_14cbadd00 == 0) {
    FUN_14000fc22(&DAT_14cbadd00,&PTR_FUN_14b7ccb38);
  }
  return DAT_14cbadd00;
}



// FUNCTION 1465e9644 FUN_1465e9644 body=286 status=ok
// SIG undefined FUN_1465e9644(void)

void FUN_1465e9644(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x1458))(param_1,local_20,local_21);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerStopUsing_ObjectHosted_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x1460))(param_1,local_20,local_21);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465e9763 FUN_1465e9763 body=47 status=ok
// SIG undefined FUN_1465e9763(void)

longlong FUN_1465e9763(void)

{
  if (DAT_14cbadd10 == 0) {
    FUN_14000fc22(&DAT_14cbadd10,&PTR_FUN_14b7ccc78);
  }
  return DAT_14cbadd10;
}



// FUNCTION 1465e9792 FUN_1465e9792 body=47 status=ok
// SIG undefined FUN_1465e9792(void)

longlong FUN_1465e9792(void)

{
  if (DAT_14cbadd20 == 0) {
    FUN_14000fc22(&DAT_14cbadd20,&PTR_FUN_14b7ccde8);
  }
  return DAT_14cbadd20;
}



// FUNCTION 1465e97c1 FUN_1465e97c1 body=47 status=ok
// SIG undefined FUN_1465e97c1(void)

longlong FUN_1465e97c1(void)

{
  if (DAT_14cbadd30 == 0) {
    FUN_14000fc22(&DAT_14cbadd30,&PTR_FUN_14b7cce58);
  }
  return DAT_14cbadd30;
}



// FUNCTION 1465e97f0 FUN_1465e97f0 body=47 status=ok
// SIG undefined FUN_1465e97f0(void)

longlong FUN_1465e97f0(void)

{
  if (DAT_14cbadd40 == 0) {
    FUN_14000fc22(&DAT_14cbadd40,&PTR_FUN_14b7ccfc0);
  }
  return DAT_14cbadd40;
}



// FUNCTION 1465e981f FUN_1465e981f body=47 status=ok
// SIG undefined FUN_1465e981f(void)

longlong FUN_1465e981f(void)

{
  if (DAT_14cbadd50 == 0) {
    FUN_14000fc22(&DAT_14cbadd50,&PTR_FUN_14b7cd170);
  }
  return DAT_14cbadd50;
}



// FUNCTION 1465e984e FUN_1465e984e body=47 status=ok
// SIG undefined FUN_1465e984e(void)

longlong FUN_1465e984e(void)

{
  if (DAT_14cbadd60 == 0) {
    FUN_14000fc22(&DAT_14cbadd60,&PTR_FUN_14b7cd340);
  }
  return DAT_14cbadd60;
}



// FUNCTION 1465e987e FUN_1465e987e body=381 status=ok
// SIG undefined FUN_1465e987e(void)

void FUN_1465e987e(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  int local_30;
  undefined1 local_29;
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
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar2 = (**(code **)(*param_1 + 0x1478))(param_1,local_28,local_29,local_30 != 0);
  if (cVar2 == '\0') {
    FUN_1468998ea(L"ServerUseObject_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x1480))(param_1,local_28,local_29,iVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465e99fc FUN_1465e99fc body=47 status=ok
// SIG undefined FUN_1465e99fc(void)

longlong FUN_1465e99fc(void)

{
  if (DAT_14cbadd68 == 0) {
    FUN_14000fc22(&DAT_14cbadd68,&PTR_FUN_14b7cd460);
  }
  return DAT_14cbadd68;
}



// FUNCTION 1465e9a2b FUN_1465e9a2b body=47 status=ok
// SIG undefined FUN_1465e9a2b(void)

longlong FUN_1465e9a2b(void)

{
  if (DAT_14cbadd78 == 0) {
    FUN_14000fc22(&DAT_14cbadd78,&PTR_FUN_14b7cd4b8);
  }
  return DAT_14cbadd78;
}



// FUNCTION 1465e9a5a FUN_1465e9a5a body=47 status=ok
// SIG undefined FUN_1465e9a5a(void)

longlong FUN_1465e9a5a(void)

{
  if (DAT_14cbadd80 == 0) {
    FUN_14000fc22(&DAT_14cbadd80,&PTR_FUN_14b7cd508);
  }
  return DAT_14cbadd80;
}



// FUNCTION 1465e9a89 FUN_1465e9a89 body=47 status=ok
// SIG undefined FUN_1465e9a89(void)

longlong FUN_1465e9a89(void)

{
  if (DAT_14cbadd88 == 0) {
    FUN_14000fc22(&DAT_14cbadd88,&PTR_FUN_14b7cd560);
  }
  return DAT_14cbadd88;
}



// FUNCTION 1465e9ab8 FUN_1465e9ab8 body=34 status=ok
// SIG undefined FUN_1465e9ab8(void)

void FUN_1465e9ab8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a5dd5e();
  FUN_14069c8d6(uVar1,&PTR_s_CameraTransition_14b7cd5a0,0x6f);
  return;
}



// FUNCTION 1465e9ada FUN_1465e9ada body=1470 status=ok
// SIG undefined FUN_1465e9ada(void)

void FUN_1465e9ada(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbaddb0) {
    FUN_144b3d300(&DAT_14cbaddb0);
    if (DAT_14cbaddb0 == -1) {
      FUN_1446f470e(&DAT_14cbadda8,L"ClientCanUseObjectsLock",1);
      _Init_thread_footer(&DAT_14cbaddb0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbaddbc) {
    FUN_144b3d300(&DAT_14cbaddbc);
    if (DAT_14cbaddbc == -1) {
      FUN_1446f470e(&DAT_14cbaddb4,L"TravelStatus",1);
      _Init_thread_footer(&DAT_14cbaddbc);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbaddc8) {
    FUN_144b3d300(&DAT_14cbaddc8);
    if (DAT_14cbaddc8 == -1) {
      FUN_1446f470e(&DAT_14cbaddc0,L"ResurrectStation",1);
      _Init_thread_footer(&DAT_14cbaddc8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbaddd4) {
    FUN_144b3d300(&DAT_14cbaddd4);
    if (DAT_14cbaddd4 == -1) {
      FUN_1446f470e(&DAT_14cbaddcc,L"CheckpointStation",1);
      _Init_thread_footer(&DAT_14cbaddd4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbadde0) {
    FUN_144b3d300(&DAT_14cbadde0);
    if (DAT_14cbadde0 == -1) {
      FUN_1446f470e(&DAT_14cbaddd8,L"ServerCameraModeState",1);
      _Init_thread_footer(&DAT_14cbadde0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbaddec) {
    FUN_144b3d300(&DAT_14cbaddec);
    if (DAT_14cbaddec == -1) {
      FUN_1446f470e(&DAT_14cbadde4,L"InfiniteAmmoLock",1);
      _Init_thread_footer(&DAT_14cbaddec);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbaddf8) {
    FUN_144b3d300(&DAT_14cbaddf8);
    if (DAT_14cbaddf8 == -1) {
      FUN_1446f470e(&DAT_14cbaddf0,L"InfiniteClipLock",1);
      _Init_thread_footer(&DAT_14cbaddf8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbade04) {
    FUN_144b3d300(&DAT_14cbade04);
    if (DAT_14cbade04 == -1) {
      FUN_1446f470e(&DAT_14cbaddfc,L"ReplicatedAmmo",1);
      _Init_thread_footer(&DAT_14cbade04);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbade10) {
    FUN_144b3d300(&DAT_14cbade10);
    if (DAT_14cbade10 == -1) {
      FUN_1446f470e(&DAT_14cbade08,L"HUDIconList",1);
      _Init_thread_footer(&DAT_14cbade10);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbade1c) {
    FUN_144b3d300(&DAT_14cbade1c);
    if (DAT_14cbade1c == -1) {
      FUN_1446f470e(&DAT_14cbade14,L"HUDIconTotalCount",1);
      _Init_thread_footer(&DAT_14cbade1c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbade28) {
    FUN_144b3d300(&DAT_14cbade28);
    if (DAT_14cbade28 == -1) {
      FUN_1446f470e(&DAT_14cbade20,L"RecentlyCausedDamageInstances",1);
      _Init_thread_footer(&DAT_14cbade28);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbade34) {
    FUN_144b3d300(&DAT_14cbade34);
    if (DAT_14cbade34 == -1) {
      FUN_1446f470e(&DAT_14cbade2c,L"PendingTriggeredPresentationRepCount",1);
      _Init_thread_footer(&DAT_14cbade34);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbade40) {
    FUN_144b3d300(&DAT_14cbade40);
    if (DAT_14cbade40 == -1) {
      FUN_1446f470e(&DAT_14cbade38,L"PendingTriggeredPresentation",1);
      _Init_thread_footer(&DAT_14cbade40);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbade4c) {
    FUN_144b3d300(&DAT_14cbade4c);
    if (DAT_14cbade4c == -1) {
      FUN_1446f470e(&DAT_14cbade44,L"bIsCurrentlyTargeted",1);
      _Init_thread_footer(&DAT_14cbade4c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbade58) {
    FUN_144b3d300(&DAT_14cbade58);
    if (DAT_14cbade58 == -1) {
      FUN_1446f470e(&DAT_14cbade50,L"PersonalVehicleState",1);
      _Init_thread_footer(&DAT_14cbade58);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbade64) {
    FUN_144b3d300(&DAT_14cbade64);
    if (DAT_14cbade64 == -1) {
      FUN_1446f470e(&DAT_14cbade5c,L"BossState",1);
      _Init_thread_footer(&DAT_14cbade64);
      return;
    }
  }
  return;
}



// FUNCTION 1465ea098 FUN_1465ea098 body=40 status=ok
// SIG undefined FUN_1465ea098(void)

undefined8 FUN_1465ea098(undefined8 param_1,int param_2)

{
  thunk_FUN_140f51a94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea0c0 FUN_1465ea0c0 body=40 status=ok
// SIG undefined FUN_1465ea0c0(void)

undefined8 FUN_1465ea0c0(undefined8 param_1,int param_2)

{
  thunk_FUN_140f51a94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea0e8 FUN_1465ea0e8 body=40 status=ok
// SIG undefined FUN_1465ea0e8(void)

undefined8 FUN_1465ea0e8(undefined8 param_1,int param_2)

{
  FUN_140bd4d6a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea110 FUN_1465ea110 body=40 status=ok
// SIG undefined FUN_1465ea110(void)

undefined8 FUN_1465ea110(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea138 FUN_1465ea138 body=40 status=ok
// SIG undefined FUN_1465ea138(void)

undefined8 FUN_1465ea138(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea160 FUN_1465ea160 body=40 status=ok
// SIG undefined FUN_1465ea160(void)

undefined8 FUN_1465ea160(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea188 FUN_1465ea188 body=40 status=ok
// SIG undefined FUN_1465ea188(void)

undefined8 FUN_1465ea188(undefined8 param_1,int param_2)

{
  FUN_140894b60();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea1b0 FUN_1465ea1b0 body=40 status=ok
// SIG undefined FUN_1465ea1b0(void)

undefined8 FUN_1465ea1b0(undefined8 param_1,int param_2)

{
  FUN_14081002e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea1d8 FUN_1465ea1d8 body=40 status=ok
// SIG undefined FUN_1465ea1d8(void)

undefined8 FUN_1465ea1d8(undefined8 param_1,int param_2)

{
  FUN_1403d7a0a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea200 FUN_1465ea200 body=40 status=ok
// SIG undefined FUN_1465ea200(void)

undefined8 FUN_1465ea200(undefined8 param_1,int param_2)

{
  FUN_14028f33c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea228 FUN_1465ea228 body=40 status=ok
// SIG undefined FUN_1465ea228(void)

undefined8 FUN_1465ea228(undefined8 param_1,int param_2)

{
  FUN_140639172();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea250 FUN_1465ea250 body=40 status=ok
// SIG undefined FUN_1465ea250(void)

undefined8 FUN_1465ea250(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea278 FUN_1465ea278 body=29 status=ok
// SIG undefined FUN_1465ea278(void)

undefined8 FUN_1465ea278(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea296 FUN_1465ea296 body=29 status=ok
// SIG undefined FUN_1465ea296(void)

undefined8 FUN_1465ea296(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea2b4 FUN_1465ea2b4 body=29 status=ok
// SIG undefined FUN_1465ea2b4(void)

undefined8 FUN_1465ea2b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea2d2 FUN_1465ea2d2 body=29 status=ok
// SIG undefined FUN_1465ea2d2(void)

undefined8 FUN_1465ea2d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea2f0 FUN_1465ea2f0 body=29 status=ok
// SIG undefined FUN_1465ea2f0(void)

undefined8 FUN_1465ea2f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea30e FUN_1465ea30e body=29 status=ok
// SIG undefined FUN_1465ea30e(void)

undefined8 FUN_1465ea30e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea32c FUN_1465ea32c body=29 status=ok
// SIG undefined FUN_1465ea32c(void)

undefined8 FUN_1465ea32c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea34a FUN_1465ea34a body=29 status=ok
// SIG undefined FUN_1465ea34a(void)

undefined8 FUN_1465ea34a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea368 FUN_1465ea368 body=37 status=ok
// SIG undefined FUN_1465ea368(void)

void FUN_1465ea368(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  FUN_14585f6f6(param_2);
  return;
}



// FUNCTION 1465ea396 FUN_1465ea396 body=29 status=ok
// SIG undefined FUN_1465ea396(void)

undefined8 FUN_1465ea396(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea3b4 FUN_1465ea3b4 body=29 status=ok
// SIG undefined FUN_1465ea3b4(void)

undefined8 FUN_1465ea3b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea3d2 FUN_1465ea3d2 body=29 status=ok
// SIG undefined FUN_1465ea3d2(void)

undefined8 FUN_1465ea3d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea3f0 FUN_1465ea3f0 body=29 status=ok
// SIG undefined FUN_1465ea3f0(void)

undefined8 FUN_1465ea3f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea40e FUN_1465ea40e body=29 status=ok
// SIG undefined FUN_1465ea40e(void)

undefined8 FUN_1465ea40e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea42c FUN_1465ea42c body=29 status=ok
// SIG undefined FUN_1465ea42c(void)

undefined8 FUN_1465ea42c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea44a FUN_1465ea44a body=29 status=ok
// SIG undefined FUN_1465ea44a(void)

undefined8 FUN_1465ea44a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea468 FUN_1465ea468 body=29 status=ok
// SIG undefined FUN_1465ea468(void)

undefined8 FUN_1465ea468(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea486 FUN_1465ea486 body=76 status=ok
// SIG undefined FUN_1465ea486(void)

void FUN_1465ea486(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x6d0);
  FUN_140a3ff80(param_2);
  *param_2 = &PTR_FUN_14b7d0f50;
  param_2[0xd5] = 0;
  param_2[0xd6] = 0;
  param_2[0xd7] = 0;
  param_2[0xd8] = 0;
  param_2[0xd9] = 0;
  return;
}



// FUNCTION 1465ea4d2 FUN_1465ea4d2 body=38 status=ok
// SIG undefined FUN_1465ea4d2(void)

undefined8 FUN_1465ea4d2(undefined8 param_1,int param_2)

{
  FUN_14060f31a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea4f8 FUN_1465ea4f8 body=29 status=ok
// SIG undefined FUN_1465ea4f8(void)

undefined8 FUN_1465ea4f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea516 FUN_1465ea516 body=29 status=ok
// SIG undefined FUN_1465ea516(void)

undefined8 FUN_1465ea516(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea534 FUN_1465ea534 body=29 status=ok
// SIG undefined FUN_1465ea534(void)

undefined8 FUN_1465ea534(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea552 FUN_1465ea552 body=29 status=ok
// SIG undefined FUN_1465ea552(void)

undefined8 FUN_1465ea552(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea570 FUN_1465ea570 body=91 status=ok
// SIG undefined FUN_1465ea570(void)

undefined1 FUN_1465ea570(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140bf093e(param_2,param_3);
    lVar1 = *(longlong *)(param_3 + 0x10);
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *(longlong *)(param_3 + 0x10);
      }
    }
    param_3 = param_3 + 0x18;
    *(longlong *)(param_2 + 0x10) = lVar1;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 1465ea5cc FUN_1465ea5cc body=29 status=ok
// SIG undefined FUN_1465ea5cc(void)

undefined8 FUN_1465ea5cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ea5ef FUN_1465ea5ef body=47 status=ok
// SIG undefined FUN_1465ea5ef(void)

longlong FUN_1465ea5ef(void)

{
  if (DAT_14cbadfa8 == 0) {
    FUN_14073dd9a(&DAT_14cbadfa8,&PTR_LAB_14b7d42a8);
  }
  return DAT_14cbadfa8;
}



// FUNCTION 1465ea61e FUN_1465ea61e body=47 status=ok
// SIG undefined FUN_1465ea61e(void)

longlong FUN_1465ea61e(void)

{
  if (DAT_14cbadfb8 == 0) {
    FUN_1409ce572(&DAT_14cbadfb8,&PTR_FUN_14b7d4640);
  }
  return DAT_14cbadfb8;
}



// FUNCTION 1465ea64d FUN_1465ea64d body=47 status=ok
// SIG undefined FUN_1465ea64d(void)

longlong FUN_1465ea64d(void)

{
  if (DAT_14cbadfd8 == 0) {
    FUN_14073dd9a(&DAT_14cbadfd8,&PTR_LAB_14b7d46b8);
  }
  return DAT_14cbadfd8;
}



// FUNCTION 1465ea67c FUN_1465ea67c body=47 status=ok
// SIG undefined FUN_1465ea67c(void)

longlong FUN_1465ea67c(void)

{
  if (DAT_14cbadff0 == 0) {
    FUN_14073dd9a(&DAT_14cbadff0,&PTR_LAB_14b7d4788);
  }
  return DAT_14cbadff0;
}



// FUNCTION 1465ea6ab FUN_1465ea6ab body=47 status=ok
// SIG undefined FUN_1465ea6ab(void)

longlong FUN_1465ea6ab(void)

{
  if (DAT_14cbae000 == 0) {
    FUN_1409ce572(&DAT_14cbae000,&PTR_FUN_14b7d4830);
  }
  return DAT_14cbae000;
}



// FUNCTION 1465ea6da FUN_1465ea6da body=112 status=ok
// SIG undefined FUN_1465ea6da(void)

void FUN_1465ea6da(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7d4b00;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0x4000;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0xc;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0xc;
  puVar1[0x17] = 0;
  return;
}



// FUNCTION 1465ea74a FUN_1465ea74a body=47 status=ok
// SIG undefined FUN_1465ea74a(void)

longlong FUN_1465ea74a(void)

{
  if (DAT_14cbae020 == 0) {
    FUN_14073dd9a(&DAT_14cbae020,&PTR_LAB_14b7d4ab8);
  }
  return DAT_14cbae020;
}



// FUNCTION 1465ea77a FUN_1465ea77a body=55 status=ok
// SIG undefined FUN_1465ea77a(void)

void FUN_1465ea77a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae038 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae038 = FUN_140002ddd(FUN_1465ea7b1,uVar1,L"JumpTrajectory");
  }
  return;
}



// FUNCTION 1465ea7b1 FUN_1465ea7b1 body=49 status=ok
// SIG undefined FUN_1465ea7b1(void)

longlong FUN_1465ea7b1(void)

{
  if (DAT_14cbae030 == 0) {
    FUN_14086a14e(&DAT_14cbae030,&PTR_FUN_14b7d4ec8);
  }
  return DAT_14cbae030;
}



// FUNCTION 1465ea7e2 FUN_1465ea7e2 body=48 status=ok
// SIG undefined FUN_1465ea7e2(void)

void FUN_1465ea7e2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14b7dae80;
  return;
}



// FUNCTION 1465ea812 FUN_1465ea812 body=55 status=ok
// SIG undefined FUN_1465ea812(void)

void FUN_1465ea812(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae050 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae050 = FUN_140002ddd(FUN_1465ea849,uVar1,L"PlayerMetricsEvent");
  }
  return;
}



// FUNCTION 1465ea849 FUN_1465ea849 body=47 status=ok
// SIG undefined FUN_1465ea849(void)

longlong FUN_1465ea849(void)

{
  if (DAT_14cbae048 == 0) {
    FUN_14086a14e(&DAT_14cbae048,&PTR_FUN_14b7d51c8);
  }
  return DAT_14cbae048;
}



// FUNCTION 1465ea878 FUN_1465ea878 body=48 status=ok
// SIG undefined FUN_1465ea878(void)

void FUN_1465ea878(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000002c;
  *puVar1 = &PTR_FUN_14b7dafe0;
  return;
}



// FUNCTION 1465ea8a8 FUN_1465ea8a8 body=47 status=ok
// SIG undefined FUN_1465ea8a8(void)

longlong FUN_1465ea8a8(void)

{
  if (DAT_14cbae068 == 0) {
    FUN_14073dd9a(&DAT_14cbae068,&PTR_LAB_14b7d5268);
  }
  return DAT_14cbae068;
}



// FUNCTION 1465ea8d7 FUN_1465ea8d7 body=47 status=ok
// SIG undefined FUN_1465ea8d7(void)

longlong FUN_1465ea8d7(void)

{
  if (DAT_14cbae100 == 0) {
    FUN_14073dd9a(&DAT_14cbae100,&PTR_LAB_14b7d53a8);
  }
  return DAT_14cbae100;
}



// FUNCTION 1465ea906 FUN_1465ea906 body=55 status=ok
// SIG undefined FUN_1465ea906(void)

void FUN_1465ea906(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae118 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae118 = FUN_140002ddd(FUN_1465ea93d,uVar1,L"PlayerProxyDef");
  }
  return;
}



// FUNCTION 1465ea93d FUN_1465ea93d body=47 status=ok
// SIG undefined FUN_1465ea93d(void)

longlong FUN_1465ea93d(void)

{
  if (DAT_14cbae110 == 0) {
    FUN_14086a14e(&DAT_14cbae110,&PTR_FUN_14b7d5418);
  }
  return DAT_14cbae110;
}



// FUNCTION 1465ea96c FUN_1465ea96c body=48 status=ok
// SIG undefined FUN_1465ea96c(void)

void FUN_1465ea96c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000010c8;
  *puVar1 = &PTR_FUN_14b7db140;
  return;
}



// FUNCTION 1465ea99c FUN_1465ea99c body=55 status=ok
// SIG undefined FUN_1465ea99c(void)

void FUN_1465ea99c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae130 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae130 = FUN_140002ddd(FUN_1465ea9d3,uVar1,L"OakPlayerPuppet");
  }
  return;
}



// FUNCTION 1465ea9d3 FUN_1465ea9d3 body=47 status=ok
// SIG undefined FUN_1465ea9d3(void)

longlong FUN_1465ea9d3(void)

{
  if (DAT_14cbae128 == 0) {
    FUN_14086a14e(&DAT_14cbae128,&PTR_FUN_14b7d5570);
  }
  return DAT_14cbae128;
}



// FUNCTION 1465eaa02 FUN_1465eaa02 body=48 status=ok
// SIG undefined FUN_1465eaa02(void)

void FUN_1465eaa02(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b7db410;
  return;
}



// FUNCTION 1465eaa32 FUN_1465eaa32 body=47 status=ok
// SIG undefined FUN_1465eaa32(void)

longlong FUN_1465eaa32(void)

{
  if (DAT_14cbae140 == 0) {
    FUN_1409ce572(&DAT_14cbae140,&PTR_FUN_14b7d5610);
  }
  return DAT_14cbae140;
}



// FUNCTION 1465eaa61 FUN_1465eaa61 body=47 status=ok
// SIG undefined FUN_1465eaa61(void)

longlong FUN_1465eaa61(void)

{
  if (DAT_14cbae160 == 0) {
    FUN_14073dd9a(&DAT_14cbae160,&PTR_LAB_14b7d5998);
  }
  return DAT_14cbae160;
}



// FUNCTION 1465eaa90 FUN_1465eaa90 body=55 status=ok
// SIG undefined FUN_1465eaa90(void)

void FUN_1465eaa90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae178 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae178 = FUN_140002ddd(FUN_1465eaac7,uVar1,L"PuppetCameraState");
  }
  return;
}



// FUNCTION 1465eaac7 FUN_1465eaac7 body=49 status=ok
// SIG undefined FUN_1465eaac7(void)

longlong FUN_1465eaac7(void)

{
  if (DAT_14cbae170 == 0) {
    FUN_14086a14e(&DAT_14cbae170,&PTR_FUN_14b7d5b50);
  }
  return DAT_14cbae170;
}



// FUNCTION 1465eaaf8 FUN_1465eaaf8 body=48 status=ok
// SIG undefined FUN_1465eaaf8(void)

void FUN_1465eaaf8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b7db5d0;
  return;
}



// FUNCTION 1465eab28 FUN_1465eab28 body=55 status=ok
// SIG undefined FUN_1465eab28(void)

void FUN_1465eab28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae190 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae190 = FUN_140002ddd(FUN_1465eab5f,uVar1,L"PuppetCameraData");
  }
  return;
}



// FUNCTION 1465eab5f FUN_1465eab5f body=47 status=ok
// SIG undefined FUN_1465eab5f(void)

longlong FUN_1465eab5f(void)

{
  if (DAT_14cbae188 == 0) {
    FUN_14086a14e(&DAT_14cbae188,&PTR_FUN_14b7d5c78);
  }
  return DAT_14cbae188;
}



// FUNCTION 1465eab8e FUN_1465eab8e body=48 status=ok
// SIG undefined FUN_1465eab8e(void)

void FUN_1465eab8e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b7db730;
  return;
}



// FUNCTION 1465eabbe FUN_1465eabbe body=55 status=ok
// SIG undefined FUN_1465eabbe(void)

void FUN_1465eabbe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae1a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae1a8 = FUN_140002ddd(FUN_1465eabf5,uVar1,L"OakPlayerPuppetDef");
  }
  return;
}



// FUNCTION 1465eabf5 FUN_1465eabf5 body=47 status=ok
// SIG undefined FUN_1465eabf5(void)

longlong FUN_1465eabf5(void)

{
  if (DAT_14cbae1a0 == 0) {
    FUN_14086a14e(&DAT_14cbae1a0,&PTR_FUN_14b7d60d8);
  }
  return DAT_14cbae1a0;
}



// FUNCTION 1465eac24 FUN_1465eac24 body=48 status=ok
// SIG undefined FUN_1465eac24(void)

void FUN_1465eac24(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001a8;
  *puVar1 = &PTR_FUN_14b7db8a0;
  return;
}



// FUNCTION 1465eac54 FUN_1465eac54 body=47 status=ok
// SIG undefined FUN_1465eac54(void)

longlong FUN_1465eac54(void)

{
  if (DAT_14cbae1c0 == 0) {
    FUN_14073dd9a(&DAT_14cbae1c0,&PTR_LAB_14b7d6178);
  }
  return DAT_14cbae1c0;
}



// FUNCTION 1465eac83 FUN_1465eac83 body=49 status=ok
// SIG undefined FUN_1465eac83(void)

longlong FUN_1465eac83(void)

{
  if (DAT_14cbae1f0 == 0) {
    FUN_14073dd9a(&DAT_14cbae1f0,&PTR_LAB_14b7d6580);
  }
  return DAT_14cbae1f0;
}



// FUNCTION 1465eacb4 FUN_1465eacb4 body=47 status=ok
// SIG undefined FUN_1465eacb4(void)

longlong FUN_1465eacb4(void)

{
  if (DAT_14cbae1d0 == 0) {
    FUN_14000fc22(&DAT_14cbae1d0,&PTR_FUN_14b7d6310);
  }
  return DAT_14cbae1d0;
}



// FUNCTION 1465eace3 FUN_1465eace3 body=47 status=ok
// SIG undefined FUN_1465eace3(void)

longlong FUN_1465eace3(void)

{
  if (DAT_14cbae1d8 == 0) {
    FUN_14000fc22(&DAT_14cbae1d8,&PTR_FUN_14b7d63f0);
  }
  return DAT_14cbae1d8;
}



// FUNCTION 1465ead12 FUN_1465ead12 body=47 status=ok
// SIG undefined FUN_1465ead12(void)

longlong FUN_1465ead12(void)

{
  if (DAT_14cbae1e0 == 0) {
    FUN_14000fc22(&DAT_14cbae1e0,&PTR_FUN_14b7d6488);
  }
  return DAT_14cbae1e0;
}



// FUNCTION 1465ead42 FUN_1465ead42 body=34 status=ok
// SIG undefined FUN_1465ead42(void)

void FUN_1465ead42(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a8c610();
  FUN_14069c8d6(uVar1,&PTR_s_IsPuppeted_14b7d64d0,3);
  return;
}



// FUNCTION 1465ead64 FUN_1465ead64 body=35 status=ok
// SIG undefined FUN_1465ead64(void)

void FUN_1465ead64(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b7d65c0;
  return;
}



// FUNCTION 1465ead88 FUN_1465ead88 body=55 status=ok
// SIG undefined FUN_1465ead88(void)

void FUN_1465ead88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae208 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae208 = FUN_140002ddd(FUN_1465eadbf,uVar1,L"PlayerExperienceState");
  }
  return;
}



// FUNCTION 1465eadbf FUN_1465eadbf body=47 status=ok
// SIG undefined FUN_1465eadbf(void)

longlong FUN_1465eadbf(void)

{
  if (DAT_14cbae200 == 0) {
    FUN_14086a14e(&DAT_14cbae200,&PTR_FUN_14b7d6ae8);
  }
  return DAT_14cbae200;
}



// FUNCTION 1465eadee FUN_1465eadee body=48 status=ok
// SIG undefined FUN_1465eadee(void)

void FUN_1465eadee(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14b7dba00;
  return;
}



// FUNCTION 1465eae1e FUN_1465eae1e body=55 status=ok
// SIG undefined FUN_1465eae1e(void)

void FUN_1465eae1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae220 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae220 = FUN_140002ddd(FUN_1465eae55,uVar1,L"PlayerGenericProperty");
  }
  return;
}



// FUNCTION 1465eae55 FUN_1465eae55 body=47 status=ok
// SIG undefined FUN_1465eae55(void)

longlong FUN_1465eae55(void)

{
  if (DAT_14cbae218 == 0) {
    FUN_14086a14e(&DAT_14cbae218,&PTR_FUN_14b7d6c40);
  }
  return DAT_14cbae218;
}



// FUNCTION 1465eae84 FUN_1465eae84 body=48 status=ok
// SIG undefined FUN_1465eae84(void)

void FUN_1465eae84(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b7dbb60;
  return;
}



// FUNCTION 1465eaeb4 FUN_1465eaeb4 body=55 status=ok
// SIG undefined FUN_1465eaeb4(void)

void FUN_1465eaeb4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae238 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae238 = FUN_140002ddd(FUN_1465eaeeb,uVar1,L"PlayerGenericProperties");
  }
  return;
}



// FUNCTION 1465eaeeb FUN_1465eaeeb body=47 status=ok
// SIG undefined FUN_1465eaeeb(void)

longlong FUN_1465eaeeb(void)

{
  if (DAT_14cbae230 == 0) {
    FUN_14086a14e(&DAT_14cbae230,&PTR_FUN_14b7d6d90);
  }
  return DAT_14cbae230;
}



// FUNCTION 1465eaf1a FUN_1465eaf1a body=48 status=ok
// SIG undefined FUN_1465eaf1a(void)

void FUN_1465eaf1a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000d8;
  *puVar1 = &PTR_FUN_14b7dbcc0;
  return;
}



// FUNCTION 1465eaf4a FUN_1465eaf4a body=55 status=ok
// SIG undefined FUN_1465eaf4a(void)

void FUN_1465eaf4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae250 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae250 = FUN_140002ddd(FUN_1465eaf81,uVar1,L"ChallengeObjectiveState");
  }
  return;
}



// FUNCTION 1465eaf81 FUN_1465eaf81 body=47 status=ok
// SIG undefined FUN_1465eaf81(void)

longlong FUN_1465eaf81(void)

{
  if (DAT_14cbae248 == 0) {
    FUN_14086a14e(&DAT_14cbae248,&PTR_FUN_14b7d6ec8);
  }
  return DAT_14cbae248;
}



// FUNCTION 1465eafb0 FUN_1465eafb0 body=48 status=ok
// SIG undefined FUN_1465eafb0(void)

void FUN_1465eafb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b7dbe20;
  return;
}



// FUNCTION 1465eafe0 FUN_1465eafe0 body=47 status=ok
// SIG undefined FUN_1465eafe0(void)

longlong FUN_1465eafe0(void)

{
  if (DAT_14cbae260 == 0) {
    FUN_14000fc22(&DAT_14cbae260,&PTR_FUN_14b7d6fa8);
  }
  return DAT_14cbae260;
}



// FUNCTION 1465eb00f FUN_1465eb00f body=47 status=ok
// SIG undefined FUN_1465eb00f(void)

longlong FUN_1465eb00f(void)

{
  if (DAT_14cbae268 == 0) {
    FUN_14000fc22(&DAT_14cbae268,&PTR_FUN_14b7d7088);
  }
  return DAT_14cbae268;
}



// FUNCTION 1465eb03e FUN_1465eb03e body=47 status=ok
// SIG undefined FUN_1465eb03e(void)

longlong FUN_1465eb03e(void)

{
  if (DAT_14cbae270 == 0) {
    FUN_14000fc22(&DAT_14cbae270,&PTR_FUN_14b7d7128);
  }
  return DAT_14cbae270;
}



// FUNCTION 1465eb06d FUN_1465eb06d body=47 status=ok
// SIG undefined FUN_1465eb06d(void)

longlong FUN_1465eb06d(void)

{
  if (DAT_14cbae278 == 0) {
    FUN_14000fc22(&DAT_14cbae278,&PTR_FUN_14b7d7188);
  }
  return DAT_14cbae278;
}



// FUNCTION 1465eb09c FUN_1465eb09c body=47 status=ok
// SIG undefined FUN_1465eb09c(void)

longlong FUN_1465eb09c(void)

{
  if (DAT_14cbae280 == 0) {
    FUN_14000fc22(&DAT_14cbae280,&PTR_FUN_14b7d72b0);
  }
  return DAT_14cbae280;
}



// FUNCTION 1465eb0cb FUN_1465eb0cb body=47 status=ok
// SIG undefined FUN_1465eb0cb(void)

longlong FUN_1465eb0cb(void)

{
  if (DAT_14cbae288 == 0) {
    FUN_14000fc22(&DAT_14cbae288,&PTR_FUN_14b7d7348);
  }
  return DAT_14cbae288;
}



// FUNCTION 1465eb0fa FUN_1465eb0fa body=47 status=ok
// SIG undefined FUN_1465eb0fa(void)

longlong FUN_1465eb0fa(void)

{
  if (DAT_14cbae298 == 0) {
    FUN_14000fc22(&DAT_14cbae298,&PTR_FUN_14b7d7478);
  }
  return DAT_14cbae298;
}



// FUNCTION 1465eb129 FUN_1465eb129 body=47 status=ok
// SIG undefined FUN_1465eb129(void)

longlong FUN_1465eb129(void)

{
  if (DAT_14cbae2a0 == 0) {
    FUN_14000fc22(&DAT_14cbae2a0,&PTR_FUN_14b7d75a8);
  }
  return DAT_14cbae2a0;
}



// FUNCTION 1465eb158 FUN_1465eb158 body=47 status=ok
// SIG undefined FUN_1465eb158(void)

longlong FUN_1465eb158(void)

{
  if (DAT_14cbae2a8 == 0) {
    FUN_14000fc22(&DAT_14cbae2a8,&PTR_FUN_14b7d7600);
  }
  return DAT_14cbae2a8;
}



// FUNCTION 1465eb187 FUN_1465eb187 body=47 status=ok
// SIG undefined FUN_1465eb187(void)

longlong FUN_1465eb187(void)

{
  if (DAT_14cbae2b0 == 0) {
    FUN_14000fc22(&DAT_14cbae2b0,&PTR_FUN_14b7d7650);
  }
  return DAT_14cbae2b0;
}



// FUNCTION 1465eb1b6 FUN_1465eb1b6 body=47 status=ok
// SIG undefined FUN_1465eb1b6(void)

longlong FUN_1465eb1b6(void)

{
  if (DAT_14cbae2b8 == 0) {
    FUN_14000fc22(&DAT_14cbae2b8,&PTR_FUN_14b7d76a8);
  }
  return DAT_14cbae2b8;
}



// FUNCTION 1465eb1e5 FUN_1465eb1e5 body=47 status=ok
// SIG undefined FUN_1465eb1e5(void)

longlong FUN_1465eb1e5(void)

{
  if (DAT_14cbae2c0 == 0) {
    FUN_14000fc22(&DAT_14cbae2c0,&PTR_FUN_14b7d7708);
  }
  return DAT_14cbae2c0;
}



// FUNCTION 1465eb229 FUN_1465eb229 body=47 status=ok
// SIG undefined FUN_1465eb229(void)

longlong FUN_1465eb229(void)

{
  if (DAT_14cbae2c8 == 0) {
    FUN_14000fc22(&DAT_14cbae2c8,&PTR_FUN_14b7d7770);
  }
  return DAT_14cbae2c8;
}



// FUNCTION 1465eb258 FUN_1465eb258 body=47 status=ok
// SIG undefined FUN_1465eb258(void)

longlong FUN_1465eb258(void)

{
  if (DAT_14cbae2d0 == 0) {
    FUN_14000fc22(&DAT_14cbae2d0,&PTR_FUN_14b7d77d0);
  }
  return DAT_14cbae2d0;
}



// FUNCTION 1465eb287 FUN_1465eb287 body=47 status=ok
// SIG undefined FUN_1465eb287(void)

longlong FUN_1465eb287(void)

{
  if (DAT_14cbae2d8 == 0) {
    FUN_14000fc22(&DAT_14cbae2d8,&PTR_FUN_14b7d7828);
  }
  return DAT_14cbae2d8;
}



// FUNCTION 1465eb2b6 FUN_1465eb2b6 body=47 status=ok
// SIG undefined FUN_1465eb2b6(void)

longlong FUN_1465eb2b6(void)

{
  if (DAT_14cbae2e0 == 0) {
    FUN_14000fc22(&DAT_14cbae2e0,&PTR_FUN_14b7d7880);
  }
  return DAT_14cbae2e0;
}



// FUNCTION 1465eb2e5 FUN_1465eb2e5 body=47 status=ok
// SIG undefined FUN_1465eb2e5(void)

longlong FUN_1465eb2e5(void)

{
  if (DAT_14cbae2f0 == 0) {
    FUN_14000fc22(&DAT_14cbae2f0,&PTR_FUN_14b7d7938);
  }
  return DAT_14cbae2f0;
}



// FUNCTION 1465eb314 FUN_1465eb314 body=47 status=ok
// SIG undefined FUN_1465eb314(void)

longlong FUN_1465eb314(void)

{
  if (DAT_14cbae2f8 == 0) {
    FUN_14000fc22(&DAT_14cbae2f8,&PTR_FUN_14b7d7990);
  }
  return DAT_14cbae2f8;
}



// FUNCTION 1465eb343 FUN_1465eb343 body=47 status=ok
// SIG undefined FUN_1465eb343(void)

longlong FUN_1465eb343(void)

{
  if (DAT_14cbae300 == 0) {
    FUN_14000fc22(&DAT_14cbae300,&PTR_FUN_14b7d79e8);
  }
  return DAT_14cbae300;
}



// FUNCTION 1465eb372 FUN_1465eb372 body=47 status=ok
// SIG undefined FUN_1465eb372(void)

longlong FUN_1465eb372(void)

{
  if (DAT_14cbae310 == 0) {
    FUN_14000fc22(&DAT_14cbae310,&PTR_FUN_14b7d7a88);
  }
  return DAT_14cbae310;
}



// FUNCTION 1465eb3a1 FUN_1465eb3a1 body=47 status=ok
// SIG undefined FUN_1465eb3a1(void)

longlong FUN_1465eb3a1(void)

{
  if (DAT_14cbae318 == 0) {
    FUN_14000fc22(&DAT_14cbae318,&PTR_FUN_14b7d7b28);
  }
  return DAT_14cbae318;
}



// FUNCTION 1465eb3d0 FUN_1465eb3d0 body=47 status=ok
// SIG undefined FUN_1465eb3d0(void)

longlong FUN_1465eb3d0(void)

{
  if (DAT_14cbae328 == 0) {
    FUN_14000fc22(&DAT_14cbae328,&PTR_FUN_14b7d7c10);
  }
  return DAT_14cbae328;
}



// FUNCTION 1465eb3ff FUN_1465eb3ff body=47 status=ok
// SIG undefined FUN_1465eb3ff(void)

longlong FUN_1465eb3ff(void)

{
  if (DAT_14cbae348 == 0) {
    FUN_14000fc22(&DAT_14cbae348,&PTR_FUN_14b7d7dc8);
  }
  return DAT_14cbae348;
}



// FUNCTION 1465eb42e FUN_1465eb42e body=47 status=ok
// SIG undefined FUN_1465eb42e(void)

longlong FUN_1465eb42e(void)

{
  if (DAT_14cbae358 == 0) {
    FUN_14000fc22(&DAT_14cbae358,&PTR_FUN_14b7d7f58);
  }
  return DAT_14cbae358;
}



// FUNCTION 1465eb45d FUN_1465eb45d body=47 status=ok
// SIG undefined FUN_1465eb45d(void)

longlong FUN_1465eb45d(void)

{
  if (DAT_14cbae368 == 0) {
    FUN_14000fc22(&DAT_14cbae368,&PTR_FUN_14b7d8090);
  }
  return DAT_14cbae368;
}



// FUNCTION 1465eb48c FUN_1465eb48c body=47 status=ok
// SIG undefined FUN_1465eb48c(void)

longlong FUN_1465eb48c(void)

{
  if (DAT_14cbae378 == 0) {
    FUN_14000fc22(&DAT_14cbae378,&PTR_FUN_14b7d8238);
  }
  return DAT_14cbae378;
}



// FUNCTION 1465eb4bb FUN_1465eb4bb body=47 status=ok
// SIG undefined FUN_1465eb4bb(void)

longlong FUN_1465eb4bb(void)

{
  if (DAT_14cbae388 == 0) {
    FUN_14000fc22(&DAT_14cbae388,&PTR_FUN_14b7d83b8);
  }
  return DAT_14cbae388;
}



// FUNCTION 1465eb4ea FUN_1465eb4ea body=47 status=ok
// SIG undefined FUN_1465eb4ea(void)

longlong FUN_1465eb4ea(void)

{
  if (DAT_14cbae398 == 0) {
    FUN_14000fc22(&DAT_14cbae398,&PTR_FUN_14b7d84a0);
  }
  return DAT_14cbae398;
}



// FUNCTION 1465eb519 FUN_1465eb519 body=47 status=ok
// SIG undefined FUN_1465eb519(void)

longlong FUN_1465eb519(void)

{
  if (DAT_14cbae3a8 == 0) {
    FUN_14000fc22(&DAT_14cbae3a8,&PTR_FUN_14b7d85e8);
  }
  return DAT_14cbae3a8;
}



// FUNCTION 1465eb548 FUN_1465eb548 body=47 status=ok
// SIG undefined FUN_1465eb548(void)

longlong FUN_1465eb548(void)

{
  if (DAT_14cbae3b8 == 0) {
    FUN_14000fc22(&DAT_14cbae3b8,&PTR_FUN_14b7d8768);
  }
  return DAT_14cbae3b8;
}



// FUNCTION 1465eb577 FUN_1465eb577 body=47 status=ok
// SIG undefined FUN_1465eb577(void)

longlong FUN_1465eb577(void)

{
  if (DAT_14cbae3c0 == 0) {
    FUN_14000fc22(&DAT_14cbae3c0,&PTR_FUN_14b7d8888);
  }
  return DAT_14cbae3c0;
}



// FUNCTION 1465eb5a6 FUN_1465eb5a6 body=47 status=ok
// SIG undefined FUN_1465eb5a6(void)

longlong FUN_1465eb5a6(void)

{
  if (DAT_14cbae3c8 == 0) {
    FUN_14000fc22(&DAT_14cbae3c8,&PTR_FUN_14b7d8920);
  }
  return DAT_14cbae3c8;
}



// FUNCTION 1465eb5d5 FUN_1465eb5d5 body=47 status=ok
// SIG undefined FUN_1465eb5d5(void)

longlong FUN_1465eb5d5(void)

{
  if (DAT_14cbae3d0 == 0) {
    FUN_14000fc22(&DAT_14cbae3d0,&PTR_FUN_14b7d8a80);
  }
  return DAT_14cbae3d0;
}



// FUNCTION 1465eb604 FUN_1465eb604 body=34 status=ok
// SIG undefined FUN_1465eb604(void)

void FUN_1465eb604(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a7b4ca();
  FUN_14069c8d6(uVar1,&PTR_s_BP_GetExperienceLevel_14b7d8ac0,0x24);
  return;
}



// FUNCTION 1465eb630 FUN_1465eb630 body=47 status=ok
// SIG undefined FUN_1465eb630(void)

longlong FUN_1465eb630(void)

{
  if (DAT_14cbae598 == 0) {
    FUN_14073dd9a(&DAT_14cbae598,&PTR_LAB_14b7d9d98);
  }
  return DAT_14cbae598;
}



// FUNCTION 1465eb664 FUN_1465eb664 body=47 status=ok
// SIG undefined FUN_1465eb664(void)

longlong FUN_1465eb664(void)

{
  if (DAT_14cbae5b0 == 0) {
    FUN_14073dd9a(&DAT_14cbae5b0,&PTR_LAB_14b7da118);
  }
  return DAT_14cbae5b0;
}



// FUNCTION 1465eb693 FUN_1465eb693 body=47 status=ok
// SIG undefined FUN_1465eb693(void)

longlong FUN_1465eb693(void)

{
  if (DAT_14cbae5e0 == 0) {
    FUN_14073dd9a(&DAT_14cbae5e0,&PTR_LAB_14b7da288);
  }
  return DAT_14cbae5e0;
}



// FUNCTION 1465eb6c2 FUN_1465eb6c2 body=49 status=ok
// SIG undefined FUN_1465eb6c2(void)

longlong FUN_1465eb6c2(void)

{
  if (DAT_14cbae630 == 0) {
    FUN_14073dd9a(&DAT_14cbae630,&PTR_LAB_14b7da9d0);
  }
  return DAT_14cbae630;
}



// FUNCTION 1465eb6f3 FUN_1465eb6f3 body=49 status=ok
// SIG undefined FUN_1465eb6f3(void)

longlong FUN_1465eb6f3(void)

{
  if (DAT_14cbae608 == 0) {
    FUN_14000fc22(&DAT_14cbae608,&PTR_FUN_14b7da450);
  }
  return DAT_14cbae608;
}



// FUNCTION 1465eb724 FUN_1465eb724 body=47 status=ok
// SIG undefined FUN_1465eb724(void)

longlong FUN_1465eb724(void)

{
  if (DAT_14cbae610 == 0) {
    FUN_14000fc22(&DAT_14cbae610,&PTR_FUN_14b7da4d8);
  }
  return DAT_14cbae610;
}



// FUNCTION 1465eb753 FUN_1465eb753 body=47 status=ok
// SIG undefined FUN_1465eb753(void)

longlong FUN_1465eb753(void)

{
  if (DAT_14cbae618 == 0) {
    FUN_14000fc22(&DAT_14cbae618,&PTR_FUN_14b7da5b0);
  }
  return DAT_14cbae618;
}



// FUNCTION 1465eb782 FUN_1465eb782 body=47 status=ok
// SIG undefined FUN_1465eb782(void)

longlong FUN_1465eb782(void)

{
  if (DAT_14cbae620 == 0) {
    FUN_14000fc22(&DAT_14cbae620,&PTR_FUN_14b7da638);
  }
  return DAT_14cbae620;
}



// FUNCTION 1465eb7b2 FUN_1465eb7b2 body=34 status=ok
// SIG undefined FUN_1465eb7b2(void)

void FUN_1465eb7b2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14071731e();
  FUN_14069c8d6(uVar1,&PTR_s_IsGrappleableEnabled_14b7da680,3);
  return;
}



// FUNCTION 1465eb7d4 FUN_1465eb7d4 body=196 status=ok
// SIG undefined FUN_1465eb7d4(void)

void FUN_1465eb7d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae648) {
    FUN_144b3d300(&DAT_14cbae648);
    if (DAT_14cbae648 == -1) {
      FUN_1446f470e(&DAT_14cbae640,L"GrappleableState",1);
      _Init_thread_footer(&DAT_14cbae648);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae654) {
    FUN_144b3d300(&DAT_14cbae654);
    if (DAT_14cbae654 == -1) {
      FUN_1446f470e(&DAT_14cbae64c,L"bGrappleableEnabled",1);
      _Init_thread_footer(&DAT_14cbae654);
      return;
    }
  }
  return;
}



// FUNCTION 1465eb898 FUN_1465eb898 body=47 status=ok
// SIG undefined FUN_1465eb898(void)

longlong FUN_1465eb898(void)

{
  if (DAT_14cbae658 == 0) {
    FUN_14086a14e(&DAT_14cbae658,&PTR_FUN_14b7dace8);
  }
  return DAT_14cbae658;
}



// FUNCTION 1465eb8c8 FUN_1465eb8c8 body=48 status=ok
// SIG undefined FUN_1465eb8c8(void)

void FUN_1465eb8c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000720;
  *puVar1 = &PTR_FUN_14b7dc0e0;
  return;
}



// FUNCTION 1465eb8f8 FUN_1465eb8f8 body=40 status=ok
// SIG undefined FUN_1465eb8f8(void)

undefined8 FUN_1465eb8f8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465eb920 FUN_1465eb920 body=40 status=ok
// SIG undefined FUN_1465eb920(void)

undefined8 FUN_1465eb920(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465eb948 FUN_1465eb948 body=40 status=ok
// SIG undefined FUN_1465eb948(void)

undefined8 FUN_1465eb948(undefined8 param_1,int param_2)

{
  thunk_FUN_14006e79a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465eb970 FUN_1465eb970 body=40 status=ok
// SIG undefined FUN_1465eb970(void)

undefined8 FUN_1465eb970(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465eb998 FUN_1465eb998 body=40 status=ok
// SIG undefined FUN_1465eb998(void)

undefined8 FUN_1465eb998(undefined8 param_1,int param_2)

{
  FUN_14006e5d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465eb9c0 FUN_1465eb9c0 body=40 status=ok
// SIG undefined FUN_1465eb9c0(void)

undefined8 FUN_1465eb9c0(undefined8 param_1,int param_2)

{
  FUN_14145c7a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465eb9e8 FUN_1465eb9e8 body=62 status=ok
// SIG undefined FUN_1465eb9e8(void)

undefined8 * FUN_1465eb9e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b7e0ef0;
  FUN_144a2da94(param_1 + 9);
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465eba26 FUN_1465eba26 body=40 status=ok
// SIG undefined FUN_1465eba26(void)

undefined8 FUN_1465eba26(undefined8 param_1,int param_2)

{
  FUN_140efdedc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465eba4e FUN_1465eba4e body=40 status=ok
// SIG undefined FUN_1465eba4e(void)

undefined8 FUN_1465eba4e(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465eba76 FUN_1465eba76 body=40 status=ok
// SIG undefined FUN_1465eba76(void)

undefined8 FUN_1465eba76(undefined8 param_1,int param_2)

{
  thunk_FUN_140f51a94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465eba9e FUN_1465eba9e body=29 status=ok
// SIG undefined FUN_1465eba9e(void)

undefined8 FUN_1465eba9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ebabc FUN_1465ebabc body=29 status=ok
// SIG undefined FUN_1465ebabc(void)

undefined8 FUN_1465ebabc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ebada FUN_1465ebada body=29 status=ok
// SIG undefined FUN_1465ebada(void)

undefined8 FUN_1465ebada(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ebaf8 FUN_1465ebaf8 body=48 status=ok
// SIG undefined FUN_1465ebaf8(void)

void FUN_1465ebaf8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x10c8);
  FUN_140c15cec(param_2);
  *param_2 = &PTR_FUN_14b7db2a0;
  return;
}



// FUNCTION 1465ebb4e FUN_1465ebb4e body=29 status=ok
// SIG undefined FUN_1465ebb4e(void)

undefined8 FUN_1465ebb4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ebb6c FUN_1465ebb6c body=29 status=ok
// SIG undefined FUN_1465ebb6c(void)

undefined8 FUN_1465ebb6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ebb8a FUN_1465ebb8a body=29 status=ok
// SIG undefined FUN_1465ebb8a(void)

undefined8 FUN_1465ebb8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ebba8 FUN_1465ebba8 body=29 status=ok
// SIG undefined FUN_1465ebba8(void)

undefined8 FUN_1465ebba8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ebbc6 FUN_1465ebbc6 body=29 status=ok
// SIG undefined FUN_1465ebbc6(void)

undefined8 FUN_1465ebbc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ebbe4 FUN_1465ebbe4 body=29 status=ok
// SIG undefined FUN_1465ebbe4(void)

undefined8 FUN_1465ebbe4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ebc02 FUN_1465ebc02 body=29 status=ok
// SIG undefined FUN_1465ebc02(void)

undefined8 FUN_1465ebc02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ebc20 FUN_1465ebc20 body=37 status=ok
// SIG undefined FUN_1465ebc20(void)

void FUN_1465ebc20(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd8);
  FUN_14596779e(param_2);
  return;
}



// FUNCTION 1465ebc4e FUN_1465ebc4e body=29 status=ok
// SIG undefined FUN_1465ebc4e(void)

undefined8 FUN_1465ebc4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ebc6c FUN_1465ebc6c body=29 status=ok
// SIG undefined FUN_1465ebc6c(void)

undefined8 FUN_1465ebc6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ebc8f FUN_1465ebc8f body=47 status=ok
// SIG undefined FUN_1465ebc8f(void)

longlong FUN_1465ebc8f(void)

{
  if (DAT_14cbae680 == 0) {
    FUN_14073dd9a(&DAT_14cbae680,&PTR_LAB_14b7e2928);
  }
  return DAT_14cbae680;
}



// FUNCTION 1465ebcbe FUN_1465ebcbe body=47 status=ok
// SIG undefined FUN_1465ebcbe(void)

longlong FUN_1465ebcbe(void)

{
  if (DAT_14cbae698 == 0) {
    FUN_14073dd9a(&DAT_14cbae698,&PTR_LAB_14b7e2cb8);
  }
  return DAT_14cbae698;
}



// FUNCTION 1465ebcf3 FUN_1465ebcf3 body=47 status=ok
// SIG undefined FUN_1465ebcf3(void)

longlong FUN_1465ebcf3(void)

{
  if (DAT_14cbae6b0 == 0) {
    FUN_14073dd9a(&DAT_14cbae6b0,&PTR_LAB_14b7e2dc8);
  }
  return DAT_14cbae6b0;
}



// FUNCTION 1465ebd22 FUN_1465ebd22 body=55 status=ok
// SIG undefined FUN_1465ebd22(void)

void FUN_1465ebd22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae6e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae6e0 = FUN_140002ddd(FUN_1465ebd59,uVar1,L"OakUIRewardDisplay");
  }
  return;
}



// FUNCTION 1465ebd59 FUN_1465ebd59 body=47 status=ok
// SIG undefined FUN_1465ebd59(void)

longlong FUN_1465ebd59(void)

{
  if (DAT_14cbae6d8 == 0) {
    FUN_14086a14e(&DAT_14cbae6d8,&PTR_FUN_14b7e36a8);
  }
  return DAT_14cbae6d8;
}



// FUNCTION 1465ebd88 FUN_1465ebd88 body=48 status=ok
// SIG undefined FUN_1465ebd88(void)

void FUN_1465ebd88(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000e0;
  *puVar1 = &PTR_FUN_14b7edfe0;
  return;
}



// FUNCTION 1465ebdb8 FUN_1465ebdb8 body=47 status=ok
// SIG undefined FUN_1465ebdb8(void)

longlong FUN_1465ebdb8(void)

{
  if (DAT_14cbae6f0 == 0) {
    FUN_14086a14e(&DAT_14cbae6f0,&PTR_FUN_14b7e37e0);
  }
  return DAT_14cbae6f0;
}



// FUNCTION 1465ebde8 FUN_1465ebde8 body=48 status=ok
// SIG undefined FUN_1465ebde8(void)

void FUN_1465ebde8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b7ee140;
  return;
}



// FUNCTION 1465ebe18 FUN_1465ebe18 body=49 status=ok
// SIG undefined FUN_1465ebe18(void)

longlong FUN_1465ebe18(void)

{
  if (DAT_14cbae808 == 0) {
    FUN_14086a14e(&DAT_14cbae808,&PTR_FUN_14b7e39c0);
  }
  return DAT_14cbae808;
}



// FUNCTION 1465ebe4a FUN_1465ebe4a body=48 status=ok
// SIG undefined FUN_1465ebe4a(void)

void FUN_1465ebe4a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14b7ee2e0;
  return;
}



// FUNCTION 1465ebe7a FUN_1465ebe7a body=47 status=ok
// SIG undefined FUN_1465ebe7a(void)

longlong FUN_1465ebe7a(void)

{
  if (DAT_14cbae828 == 0) {
    FUN_14073dd9a(&DAT_14cbae828,&PTR_LAB_14b7e3a68);
  }
  return DAT_14cbae828;
}



// FUNCTION 1465ebeb3 FUN_1465ebeb3 body=47 status=ok
// SIG undefined FUN_1465ebeb3(void)

longlong FUN_1465ebeb3(void)

{
  if (DAT_14cbae840 == 0) {
    FUN_14073dd9a(&DAT_14cbae840,&PTR_LAB_14b7e3ce8);
  }
  return DAT_14cbae840;
}



// FUNCTION 1465ebee2 FUN_1465ebee2 body=55 status=ok
// SIG undefined FUN_1465ebee2(void)

void FUN_1465ebee2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae858 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae858 = FUN_140002ddd(FUN_1465ebf19,uVar1,L"OakSharedSkillDelegates");
  }
  return;
}



// FUNCTION 1465ebf19 FUN_1465ebf19 body=47 status=ok
// SIG undefined FUN_1465ebf19(void)

longlong FUN_1465ebf19(void)

{
  if (DAT_14cbae850 == 0) {
    FUN_14086a14e(&DAT_14cbae850,&PTR_FUN_14b7e4150);
  }
  return DAT_14cbae850;
}



// FUNCTION 1465ebf48 FUN_1465ebf48 body=48 status=ok
// SIG undefined FUN_1465ebf48(void)

void FUN_1465ebf48(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14b7ee480;
  return;
}



// FUNCTION 1465ebf78 FUN_1465ebf78 body=47 status=ok
// SIG undefined FUN_1465ebf78(void)

longlong FUN_1465ebf78(void)

{
  if (DAT_14cbae868 == 0) {
    FUN_14086a14e(&DAT_14cbae868,&PTR_FUN_14b7e42b8);
  }
  return DAT_14cbae868;
}



// FUNCTION 1465ebfa8 FUN_1465ebfa8 body=48 status=ok
// SIG undefined FUN_1465ebfa8(void)

void FUN_1465ebfa8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14b7ee5e0;
  return;
}



// FUNCTION 1465ebfd8 FUN_1465ebfd8 body=55 status=ok
// SIG undefined FUN_1465ebfd8(void)

void FUN_1465ebfd8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae888 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae888 = FUN_140002ddd(FUN_1465ec00f,uVar1,L"OakShieldNamingStrategy");
  }
  return;
}



// FUNCTION 1465ec00f FUN_1465ec00f body=47 status=ok
// SIG undefined FUN_1465ec00f(void)

longlong FUN_1465ec00f(void)

{
  if (DAT_14cbae880 == 0) {
    FUN_14086a14e(&DAT_14cbae880,&PTR_FUN_14b7e43a0);
  }
  return DAT_14cbae880;
}



// FUNCTION 1465ec03e FUN_1465ec03e body=48 status=ok
// SIG undefined FUN_1465ec03e(void)

void FUN_1465ec03e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b7ee760;
  return;
}



// FUNCTION 1465ec06e FUN_1465ec06e body=39 status=ok
// SIG undefined FUN_1465ec06e(void)

void FUN_1465ec06e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140bf9282(puVar1);
  *puVar1 = &PTR_FUN_14b7e44c0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1465ec09b FUN_1465ec09b body=47 status=ok
// SIG undefined FUN_1465ec09b(void)

longlong FUN_1465ec09b(void)

{
  if (DAT_14cbae8a8 == 0) {
    FUN_14073dd9a(&DAT_14cbae8a8,&PTR_LAB_14b7e4478);
  }
  return DAT_14cbae8a8;
}



// FUNCTION 1465ec0ca FUN_1465ec0ca body=47 status=ok
// SIG undefined FUN_1465ec0ca(void)

longlong FUN_1465ec0ca(void)

{
  if (DAT_14cbae8b8 == 0) {
    FUN_1409ce572(&DAT_14cbae8b8,&PTR_FUN_14b7e4810);
  }
  return DAT_14cbae8b8;
}



// FUNCTION 1465ec0f9 FUN_1465ec0f9 body=39 status=ok
// SIG undefined FUN_1465ec0f9(void)

void FUN_1465ec0f9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140bf9282(puVar1);
  *puVar1 = &PTR_FUN_14b7e48d0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1465ec125 FUN_1465ec125 body=47 status=ok
// SIG undefined FUN_1465ec125(void)

longlong FUN_1465ec125(void)

{
  if (DAT_14cbae8d8 == 0) {
    FUN_14073dd9a(&DAT_14cbae8d8,&PTR_LAB_14b7e4888);
  }
  return DAT_14cbae8d8;
}



// FUNCTION 1465ec15f FUN_1465ec15f body=47 status=ok
// SIG undefined FUN_1465ec15f(void)

longlong FUN_1465ec15f(void)

{
  if (DAT_14cbae8f0 == 0) {
    FUN_14073dd9a(&DAT_14cbae8f0,&PTR_LAB_14b7e4ec8);
  }
  return DAT_14cbae8f0;
}



// FUNCTION 1465ec18e FUN_1465ec18e body=47 status=ok
// SIG undefined FUN_1465ec18e(void)

longlong FUN_1465ec18e(void)

{
  if (DAT_14cbae918 == 0) {
    FUN_14073dd9a(&DAT_14cbae918,&PTR_LAB_14b7e58b0);
  }
  return DAT_14cbae918;
}



// FUNCTION 1465ec1bd FUN_1465ec1bd body=47 status=ok
// SIG undefined FUN_1465ec1bd(void)

longlong FUN_1465ec1bd(void)

{
  if (DAT_14cbae900 == 0) {
    FUN_14000fc22(&DAT_14cbae900,&PTR_FUN_14b7e5410);
  }
  return DAT_14cbae900;
}



// FUNCTION 1465ec1ec FUN_1465ec1ec body=47 status=ok
// SIG undefined FUN_1465ec1ec(void)

longlong FUN_1465ec1ec(void)

{
  if (DAT_14cbae908 == 0) {
    FUN_14000fc22(&DAT_14cbae908,&PTR_FUN_14b7e5590);
  }
  return DAT_14cbae908;
}



// FUNCTION 1465ec21c FUN_1465ec21c body=34 status=ok
// SIG undefined FUN_1465ec21c(void)

void FUN_1465ec21c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14135d6cc();
  FUN_14069c8d6(uVar1,&PTR_s_OnEnteringSingularityZone_14b7e55d0,2);
  return;
}



// FUNCTION 1465ec248 FUN_1465ec248 body=378 status=ok
// SIG undefined FUN_1465ec248(void)

void FUN_1465ec248(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae930) {
    FUN_144b3d300(&DAT_14cbae930);
    if (DAT_14cbae930 == -1) {
      FUN_1446f470e(&DAT_14cbae928,L"DefHandle",1);
      _Init_thread_footer(&DAT_14cbae930);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae93c) {
    FUN_144b3d300(&DAT_14cbae93c);
    if (DAT_14cbae93c == -1) {
      FUN_1446f470e(&DAT_14cbae934,L"MinRadius",1);
      _Init_thread_footer(&DAT_14cbae93c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae948) {
    FUN_144b3d300(&DAT_14cbae948);
    if (DAT_14cbae948 == -1) {
      FUN_1446f470e(&DAT_14cbae940,L"MaxRadius",1);
      _Init_thread_footer(&DAT_14cbae948);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbae954) {
    FUN_144b3d300(&DAT_14cbae954);
    if (DAT_14cbae954 == -1) {
      FUN_1446f470e(&DAT_14cbae94c,L"DamageType",1);
      _Init_thread_footer(&DAT_14cbae954);
      return;
    }
  }
  return;
}



// FUNCTION 1465ec3c2 FUN_1465ec3c2 body=47 status=ok
// SIG undefined FUN_1465ec3c2(void)

longlong FUN_1465ec3c2(void)

{
  if (DAT_14cbae958 == 0) {
    FUN_14086a14e(&DAT_14cbae958,&PTR_FUN_14b7e5970);
  }
  return DAT_14cbae958;
}



// FUNCTION 1465ec3f2 FUN_1465ec3f2 body=48 status=ok
// SIG undefined FUN_1465ec3f2(void)

void FUN_1465ec3f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000360;
  *puVar1 = &PTR_FUN_14b7ee9a0;
  return;
}



// FUNCTION 1465ec422 FUN_1465ec422 body=55 status=ok
// SIG undefined FUN_1465ec422(void)

void FUN_1465ec422(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae978 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae978 = FUN_140002ddd(FUN_1465ec459,uVar1,L"OakSingularityAudioProviderDef");
  }
  return;
}



// FUNCTION 1465ec459 FUN_1465ec459 body=47 status=ok
// SIG undefined FUN_1465ec459(void)

longlong FUN_1465ec459(void)

{
  if (DAT_14cbae970 == 0) {
    FUN_14086a14e(&DAT_14cbae970,&PTR_FUN_14b7e5b60);
  }
  return DAT_14cbae970;
}



// FUNCTION 1465ec488 FUN_1465ec488 body=48 status=ok
// SIG undefined FUN_1465ec488(void)

void FUN_1465ec488(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001a8;
  *puVar1 = &PTR_FUN_14b7eeb00;
  return;
}



// FUNCTION 1465ec4b8 FUN_1465ec4b8 body=47 status=ok
// SIG undefined FUN_1465ec4b8(void)

longlong FUN_1465ec4b8(void)

{
  if (DAT_14cbae988 == 0) {
    FUN_1409ce572(&DAT_14cbae988,&PTR_FUN_14b7e5c00);
  }
  return DAT_14cbae988;
}



// FUNCTION 1465ec4e7 FUN_1465ec4e7 body=47 status=ok
// SIG undefined FUN_1465ec4e7(void)

longlong FUN_1465ec4e7(void)

{
  if (DAT_14cbae9a0 == 0) {
    FUN_1409ce572(&DAT_14cbae9a0,&PTR_FUN_14b7e5c70);
  }
  return DAT_14cbae9a0;
}



// FUNCTION 1465ec516 FUN_1465ec516 body=47 status=ok
// SIG undefined FUN_1465ec516(void)

longlong FUN_1465ec516(void)

{
  if (DAT_14cbae9b8 == 0) {
    FUN_1409ce572(&DAT_14cbae9b8,&PTR_FUN_14b7e5ce0);
  }
  return DAT_14cbae9b8;
}



// FUNCTION 1465ec546 FUN_1465ec546 body=55 status=ok
// SIG undefined FUN_1465ec546(void)

void FUN_1465ec546(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae9d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae9d8 = FUN_140002ddd(FUN_1465ec57d,uVar1,L"OakSingularityOverrides");
  }
  return;
}



// FUNCTION 1465ec57d FUN_1465ec57d body=47 status=ok
// SIG undefined FUN_1465ec57d(void)

longlong FUN_1465ec57d(void)

{
  if (DAT_14cbae9d0 == 0) {
    FUN_14086a14e(&DAT_14cbae9d0,&PTR_FUN_14b7e5f60);
  }
  return DAT_14cbae9d0;
}



// FUNCTION 1465ec5ac FUN_1465ec5ac body=48 status=ok
// SIG undefined FUN_1465ec5ac(void)

void FUN_1465ec5ac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14b7eedc0;
  return;
}



// FUNCTION 1465ec5dc FUN_1465ec5dc body=47 status=ok
// SIG undefined FUN_1465ec5dc(void)

longlong FUN_1465ec5dc(void)

{
  if (DAT_14cbae9e8 == 0) {
    FUN_14086a14e(&DAT_14cbae9e8,&PTR_FUN_14b7e6cb0);
  }
  return DAT_14cbae9e8;
}



// FUNCTION 1465ec60c FUN_1465ec60c body=48 status=ok
// SIG undefined FUN_1465ec60c(void)

void FUN_1465ec60c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000640;
  *puVar1 = &PTR_FUN_14b7eef20;
  return;
}



// FUNCTION 1465ec63c FUN_1465ec63c body=55 status=ok
// SIG undefined FUN_1465ec63c(void)

void FUN_1465ec63c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaea08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaea08 = FUN_140002ddd(FUN_1465ec673,uVar1,L"OakSingularityEffectProvider");
  }
  return;
}



// FUNCTION 1465ec673 FUN_1465ec673 body=47 status=ok
// SIG undefined FUN_1465ec673(void)

longlong FUN_1465ec673(void)

{
  if (DAT_14cbaea00 == 0) {
    FUN_14086a14e(&DAT_14cbaea00,&PTR_FUN_14b7e6df8);
  }
  return DAT_14cbaea00;
}



// FUNCTION 1465ec6a2 FUN_1465ec6a2 body=48 status=ok
// SIG undefined FUN_1465ec6a2(void)

void FUN_1465ec6a2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14b7ef080;
  return;
}



// FUNCTION 1465ec6d2 FUN_1465ec6d2 body=47 status=ok
// SIG undefined FUN_1465ec6d2(void)

longlong FUN_1465ec6d2(void)

{
  if (DAT_14cbaea20 == 0) {
    FUN_14073dd9a(&DAT_14cbaea20,&PTR_LAB_14b7e7098);
  }
  return DAT_14cbaea20;
}



// FUNCTION 1465ec701 FUN_1465ec701 body=47 status=ok
// SIG undefined FUN_1465ec701(void)

longlong FUN_1465ec701(void)

{
  if (DAT_14cbaeab8 == 0) {
    FUN_14073dd9a(&DAT_14cbaeab8,&PTR_LAB_14b7e7148);
  }
  return DAT_14cbaeab8;
}


