// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1464703a8 FUN_1464703a8 body=62 status=ok
// SIG undefined FUN_1464703a8(void)

undefined8 * FUN_1464703a8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adc2450;
  FUN_1458219bc(param_1 + 8);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464703e6 FUN_1464703e6 body=40 status=ok
// SIG undefined FUN_1464703e6(void)

undefined8 FUN_1464703e6(undefined8 param_1,int param_2)

{
  FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14647040e FUN_14647040e body=69 status=ok
// SIG undefined FUN_14647040e(void)

undefined8 * FUN_14647040e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adc4f30;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146470454 FUN_146470454 body=69 status=ok
// SIG undefined FUN_146470454(void)

undefined8 * FUN_146470454(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adc62b0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14647049a FUN_14647049a body=40 status=ok
// SIG undefined FUN_14647049a(void)

undefined8 FUN_14647049a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464704c2 FUN_1464704c2 body=69 status=ok
// SIG undefined FUN_1464704c2(void)

undefined8 * FUN_1464704c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adc74d0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146470508 FUN_146470508 body=29 status=ok
// SIG undefined FUN_146470508(void)

undefined8 FUN_146470508(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146470526 FUN_146470526 body=29 status=ok
// SIG undefined FUN_146470526(void)

undefined8 FUN_146470526(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146470544 FUN_146470544 body=136 status=ok
// SIG undefined FUN_146470544(void)

code * FUN_146470544(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GbxCameraFieldOfView";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c0000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456d2e38;
}



// FUNCTION 1464705cc FUN_1464705cc body=130 status=ok
// SIG undefined FUN_1464705cc(void)

undefined1 * FUN_1464705cc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SystemLWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_146221bd4;
}



// FUNCTION 14647064e FUN_14647064e body=130 status=ok
// SIG undefined FUN_14647064e(void)

undefined1 * FUN_14647064e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OffsetFromSeed";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1457257d6;
}



// FUNCTION 1464706d0 FUN_1464706d0 body=136 status=ok
// SIG undefined FUN_1464706d0(void)

code * FUN_1464706d0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurveLUT";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481715bc;
}



// FUNCTION 146470758 FUN_146470758 body=136 status=ok
// SIG undefined FUN_146470758(void)

code * FUN_146470758(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxTime";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148171646;
}



// FUNCTION 1464707e0 FUN_1464707e0 body=136 status=ok
// SIG undefined FUN_1464707e0(void)

code * FUN_1464707e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWWriteBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14573ebd2;
}



// FUNCTION 146470868 FUN_146470868 body=136 status=ok
// SIG undefined FUN_146470868(void)

code * FUN_146470868(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputGrid";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2DArray<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456ea57a;
}



// FUNCTION 1464708f0 FUN_1464708f0 body=136 status=ok
// SIG undefined FUN_1464708f0(void)

code * FUN_1464708f0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CellSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481718f0;
}



// FUNCTION 146470978 FUN_146470978 body=47 status=ok
// SIG undefined FUN_146470978(void)

longlong FUN_146470978(void)

{
  if (DAT_14cb3c0f8 == 0) {
    FUN_14073dd9a(&DAT_14cb3c0f8,&PTR_LAB_14adcd368);
  }
  return DAT_14cb3c0f8;
}



// FUNCTION 1464709a7 FUN_1464709a7 body=47 status=ok
// SIG undefined FUN_1464709a7(void)

longlong FUN_1464709a7(void)

{
  if (DAT_14cb3c130 == 0) {
    FUN_14073dd9a(&DAT_14cb3c130,&PTR_LAB_14adcd9b8);
  }
  return DAT_14cb3c130;
}



// FUNCTION 1464709d6 FUN_1464709d6 body=255 status=ok
// SIG undefined FUN_1464709d6(void)

void FUN_1464709d6(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
    FUN_1446f470e(&local_38,L"RenderTarget",1);
    local_20 = FUN_144a7937e();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    local_30 = local_38;
    DAT_14cb3c1c8 = FUN_144830b78(local_28);
    DAT_14cb3c1c0 = local_30;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146470ad6 FUN_146470ad6 body=47 status=ok
// SIG undefined FUN_146470ad6(void)

longlong FUN_146470ad6(void)

{
  if (DAT_14cb3c1d0 == 0) {
    FUN_1409ce572(&DAT_14cb3c1d0,&PTR_FUN_14adcdf40);
  }
  return DAT_14cb3c1d0;
}



// FUNCTION 146470b05 FUN_146470b05 body=47 status=ok
// SIG undefined FUN_146470b05(void)

longlong FUN_146470b05(void)

{
  if (DAT_14cb3c1f0 == 0) {
    FUN_14073dd9a(&DAT_14cb3c1f0,&PTR_LAB_14adce1b8);
  }
  return DAT_14cb3c1f0;
}



// FUNCTION 146470b34 FUN_146470b34 body=42 status=ok
// SIG undefined FUN_146470b34(void)

void FUN_146470b34(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14adce7c0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 146470b5e FUN_146470b5e body=47 status=ok
// SIG undefined FUN_146470b5e(void)

longlong FUN_146470b5e(void)

{
  if (DAT_14cb3c208 == 0) {
    FUN_14073dd9a(&DAT_14cb3c208,&PTR_LAB_14adce778);
  }
  return DAT_14cb3c208;
}



// FUNCTION 146470b8d FUN_146470b8d body=47 status=ok
// SIG undefined FUN_146470b8d(void)

longlong FUN_146470b8d(void)

{
  if (DAT_14cb3c260 == 0) {
    FUN_14086a14e(&DAT_14cb3c260,&PTR_FUN_14adcef78);
  }
  return DAT_14cb3c260;
}



// FUNCTION 146470bbc FUN_146470bbc body=48 status=ok
// SIG undefined FUN_146470bbc(void)

void FUN_146470bbc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14add37b0;
  return;
}



// FUNCTION 146470bec FUN_146470bec body=47 status=ok
// SIG undefined FUN_146470bec(void)

longlong FUN_146470bec(void)

{
  if (DAT_14cb3c280 == 0) {
    FUN_14073dd9a(&DAT_14cb3c280,&PTR_LAB_14adcf098);
  }
  return DAT_14cb3c280;
}



// FUNCTION 146470c1b FUN_146470c1b body=47 status=ok
// SIG undefined FUN_146470c1b(void)

longlong FUN_146470c1b(void)

{
  if (DAT_14cb3c2b0 == 0) {
    FUN_14073dd9a(&DAT_14cb3c2b0,&PTR_LAB_14adcf628);
  }
  return DAT_14cb3c2b0;
}



// FUNCTION 146470c4a FUN_146470c4a body=47 status=ok
// SIG undefined FUN_146470c4a(void)

longlong FUN_146470c4a(void)

{
  if (DAT_14cb3c368 == 0) {
    FUN_14073dd9a(&DAT_14cb3c368,&PTR_LAB_14adcfe68);
  }
  return DAT_14cb3c368;
}



// FUNCTION 146470c79 FUN_146470c79 body=47 status=ok
// SIG undefined FUN_146470c79(void)

longlong FUN_146470c79(void)

{
  if (DAT_14cb3c3a8 == 0) {
    FUN_14073dd9a(&DAT_14cb3c3a8,&PTR_LAB_14add0508);
  }
  return DAT_14cb3c3a8;
}



// FUNCTION 146470ca8 FUN_146470ca8 body=215 status=ok
// SIG undefined FUN_146470ca8(void)

void FUN_146470ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add5b80;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146470d80 FUN_146470d80 body=215 status=ok
// SIG undefined FUN_146470d80(void)

void FUN_146470d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add5c60;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146470e58 FUN_146470e58 body=215 status=ok
// SIG undefined FUN_146470e58(void)

void FUN_146470e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14add5d40;
  local_38[3] = param_1;
  local_38[4] = param_3;
  FUN_144a450dc(param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146470f35 FUN_146470f35 body=47 status=ok
// SIG undefined FUN_146470f35(void)

longlong FUN_146470f35(void)

{
  if (DAT_14cb3c538 == 0) {
    FUN_14073dd9a(&DAT_14cb3c538,&PTR_LAB_14add0f28);
  }
  return DAT_14cb3c538;
}



// FUNCTION 146470f64 FUN_146470f64 body=125 status=ok
// SIG undefined FUN_146470f64(void)

void FUN_146470f64(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146470fe2 FUN_146470fe2 body=47 status=ok
// SIG undefined FUN_146470fe2(void)

longlong FUN_146470fe2(void)

{
  if (DAT_14cb3c570 == 0) {
    FUN_14073dd9a(&DAT_14cb3c570,&PTR_LAB_14add1538);
  }
  return DAT_14cb3c570;
}



// FUNCTION 146471011 FUN_146471011 body=47 status=ok
// SIG undefined FUN_146471011(void)

longlong FUN_146471011(void)

{
  if (DAT_14cb3c648 == 0) {
    FUN_14073dd9a(&DAT_14cb3c648,&PTR_LAB_14add1f68);
  }
  return DAT_14cb3c648;
}



// FUNCTION 146471040 FUN_146471040 body=47 status=ok
// SIG undefined FUN_146471040(void)

longlong FUN_146471040(void)

{
  if (DAT_14cb3c6e8 == 0) {
    FUN_14073dd9a(&DAT_14cb3c6e8,&PTR_LAB_14add27a8);
  }
  return DAT_14cb3c6e8;
}



// FUNCTION 146471070 FUN_146471070 body=255 status=ok
// SIG undefined FUN_146471070(void)

void FUN_146471070(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
    FUN_1446f470e(&local_38,L"RenderTarget",1);
    local_20 = FUN_144a7937e();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    local_30 = local_38;
    DAT_14cb3c758 = FUN_144830b78(local_28);
    DAT_14cb3c750 = local_30;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146471170 FUN_146471170 body=47 status=ok
// SIG undefined FUN_146471170(void)

longlong FUN_146471170(void)

{
  if (DAT_14cb3c808 == 0) {
    FUN_14073dd9a(&DAT_14cb3c808,&PTR_LAB_14add3128);
  }
  return DAT_14cb3c808;
}



// FUNCTION 1464711a0 FUN_1464711a0 body=255 status=ok
// SIG undefined FUN_1464711a0(void)

void FUN_1464711a0(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
    FUN_1446f470e(&local_38,L"RenderTarget",1);
    local_20 = FUN_144a7937e();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    local_30 = local_38;
    DAT_14cb3c868 = FUN_144830b78(local_28);
    DAT_14cb3c860 = local_30;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464712a0 FUN_1464712a0 body=69 status=ok
// SIG undefined FUN_1464712a0(void)

undefined8 * FUN_1464712a0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adcda00;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464712e6 FUN_1464712e6 body=69 status=ok
// SIG undefined FUN_1464712e6(void)

undefined8 * FUN_1464712e6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adce7c0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14647132c FUN_14647132c body=40 status=ok
// SIG undefined FUN_14647132c(void)

undefined8 FUN_14647132c(undefined8 param_1,int param_2)

{
  thunk_FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146471354 FUN_146471354 body=125 status=ok
// SIG undefined FUN_146471354(void)

void FUN_146471354(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464713d2 FUN_1464713d2 body=40 status=ok
// SIG undefined FUN_1464713d2(void)

undefined8 FUN_1464713d2(undefined8 param_1,int param_2)

{
  thunk_FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464713fa FUN_1464713fa body=125 status=ok
// SIG undefined FUN_1464713fa(void)

void FUN_1464713fa(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146471478 FUN_146471478 body=69 status=ok
// SIG undefined FUN_146471478(void)

undefined8 * FUN_146471478(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14add27f0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464714be FUN_1464714be body=69 status=ok
// SIG undefined FUN_1464714be(void)

undefined8 * FUN_1464714be(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14add3170;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146471504 FUN_146471504 body=29 status=ok
// SIG undefined FUN_146471504(void)

undefined8 FUN_146471504(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146471522 FUN_146471522 body=29 status=ok
// SIG undefined FUN_146471522(void)

undefined8 FUN_146471522(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146471540 FUN_146471540 body=130 status=ok
// SIG undefined FUN_146471540(void)

void FUN_146471540(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x1c70);
  *(uint *)(param_1 + 0x1c70) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c74) < iVar1 + 1U) {
    FUN_140845902((longlong *)(param_1 + 0x1c68),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x1c68) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 1464715c2 FUN_1464715c2 body=136 status=ok
// SIG undefined FUN_1464715c2(void)

code * FUN_1464715c2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SystemLWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x31000000074;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148182558;
}



// FUNCTION 14647164a FUN_14647164a body=136 status=ok
// SIG undefined FUN_14647164a(void)

code * FUN_14647164a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CachedHeightTextureDimension";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e800000070;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481826f6;
}



// FUNCTION 1464716d2 FUN_1464716d2 body=136 status=ok
// SIG undefined FUN_1464716d2(void)

code * FUN_1464716d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NormalVirtualTexture1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1680000005c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148182f96;
}



// FUNCTION 14647175a FUN_14647175a body=136 status=ok
// SIG undefined FUN_14647175a(void)

code * FUN_14647175a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshDataBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145721ee6;
}



// FUNCTION 1464717e2 FUN_1464717e2 body=136 status=ok
// SIG undefined FUN_1464717e2(void)

code * FUN_1464717e2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CloudVolumetricTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000011;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145769e92;
}



// FUNCTION 14647186a FUN_14647186a body=136 status=ok
// SIG undefined FUN_14647186a(void)

code * FUN_14647186a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputHalfBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<half>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481872ba;
}



// FUNCTION 1464718f2 FUN_1464718f2 body=136 status=ok
// SIG undefined FUN_1464718f2(void)

code * FUN_1464718f2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SpawnedIDsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1457c4f4a;
}



// FUNCTION 14647197a FUN_14647197a body=136 status=ok
// SIG undefined FUN_14647197a(void)

code * FUN_14647197a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456e7fa4;
}



// FUNCTION 146471a02 FUN_146471a02 body=49 status=ok
// SIG undefined FUN_146471a02(void)

longlong FUN_146471a02(void)

{
  if (DAT_14cb3d1f0 == 0) {
    FUN_14073dd9a(&DAT_14cb3d1f0,&PTR_LAB_14add8518);
  }
  return DAT_14cb3d1f0;
}



// FUNCTION 146471a33 FUN_146471a33 body=47 status=ok
// SIG undefined FUN_146471a33(void)

longlong FUN_146471a33(void)

{
  if (DAT_14cb3d028 == 0) {
    FUN_14073dd9a(&DAT_14cb3d028,&PTR_LAB_14add6b88);
  }
  return DAT_14cb3d028;
}



// FUNCTION 146471a62 FUN_146471a62 body=255 status=ok
// SIG undefined FUN_146471a62(void)

void FUN_146471a62(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
    FUN_1446f470e(&local_38,L"RenderTarget",1);
    local_20 = FUN_144a7937e();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    local_30 = local_38;
    DAT_14cb3d0e0 = FUN_144830b78(local_28);
    DAT_14cb3d0d8 = local_30;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146471b62 FUN_146471b62 body=47 status=ok
// SIG undefined FUN_146471b62(void)

longlong FUN_146471b62(void)

{
  if (DAT_14cb3d0f0 == 0) {
    FUN_14073dd9a(&DAT_14cb3d0f0,&PTR_LAB_14add7858);
  }
  return DAT_14cb3d0f0;
}



// FUNCTION 146471b91 FUN_146471b91 body=47 status=ok
// SIG undefined FUN_146471b91(void)

longlong FUN_146471b91(void)

{
  if (DAT_14cb3d110 == 0) {
    FUN_14073dd9a(&DAT_14cb3d110,&PTR_LAB_14add7ee0);
  }
  return DAT_14cb3d110;
}



// FUNCTION 146471bc0 FUN_146471bc0 body=47 status=ok
// SIG undefined FUN_146471bc0(void)

longlong FUN_146471bc0(void)

{
  if (DAT_14cb3d100 == 0) {
    FUN_14000fc22(&DAT_14cb3d100,&PTR_FUN_14add7e00);
  }
  return DAT_14cb3d100;
}



// FUNCTION 146471bf0 FUN_146471bf0 body=34 status=ok
// SIG undefined FUN_146471bf0(void)

void FUN_146471bf0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7952c();
  FUN_14069c8d6(uVar1,&PTR_s_SetSourceActors_14add7e40,1);
  return;
}



// FUNCTION 146471c12 FUN_146471c12 body=35 status=ok
// SIG undefined FUN_146471c12(void)

void FUN_146471c12(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14add7f20;
  return;
}



// FUNCTION 146471c36 FUN_146471c36 body=125 status=ok
// SIG undefined FUN_146471c36(void)

void FUN_146471c36(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146471cb4 FUN_146471cb4 body=47 status=ok
// SIG undefined FUN_146471cb4(void)

longlong FUN_146471cb4(void)

{
  if (DAT_14cb3d1d0 == 0) {
    FUN_1409ce572(&DAT_14cb3d1d0,&PTR_FUN_14add8490);
  }
  return DAT_14cb3d1d0;
}



// FUNCTION 146471ce3 FUN_146471ce3 body=35 status=ok
// SIG undefined FUN_146471ce3(void)

void FUN_146471ce3(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140f8b11c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14add8560;
  return;
}



// FUNCTION 146471d06 FUN_146471d06 body=80 status=ok
// SIG undefined FUN_146471d06(void)

void FUN_146471d06(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140f8b11c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14add8c80;
  *(undefined1 *)(puVar1 + 7) = 1;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0x300000003;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0x3f80000000000003;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 10;
  puVar1[0xb] = 0x4059000000000000;
  puVar1[0xc] = 0x4059000000000000;
  puVar1[0xd] = 0x4059000000000000;
  return;
}



// FUNCTION 146471d56 FUN_146471d56 body=49 status=ok
// SIG undefined FUN_146471d56(void)

longlong FUN_146471d56(void)

{
  if (DAT_14cb3d208 == 0) {
    FUN_14073dd9a(&DAT_14cb3d208,&PTR_LAB_14add8c38);
  }
  return DAT_14cb3d208;
}



// FUNCTION 146471d87 FUN_146471d87 body=72 status=ok
// SIG undefined FUN_146471d87(void)

void FUN_146471d87(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140f8b11c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14add9370;
  *(undefined1 *)(puVar1 + 7) = 1;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0x300000003;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 3;
  *(undefined1 *)((longlong)puVar1 + 0x4c) = 0;
  puVar1[10] = 0x4059000000000000;
  puVar1[0xb] = 0x4059000000000000;
  return;
}



// FUNCTION 146471dcf FUN_146471dcf body=47 status=ok
// SIG undefined FUN_146471dcf(void)

longlong FUN_146471dcf(void)

{
  if (DAT_14cb3d220 == 0) {
    FUN_14073dd9a(&DAT_14cb3d220,&PTR_LAB_14add9328);
  }
  return DAT_14cb3d220;
}



// FUNCTION 146471dfe FUN_146471dfe body=47 status=ok
// SIG undefined FUN_146471dfe(void)

longlong FUN_146471dfe(void)

{
  if (DAT_14cb3d2f0 == 0) {
    FUN_1409ce572(&DAT_14cb3d2f0,&PTR_FUN_14add9a70);
  }
  return DAT_14cb3d2f0;
}



// FUNCTION 146471e2d FUN_146471e2d body=47 status=ok
// SIG undefined FUN_146471e2d(void)

longlong FUN_146471e2d(void)

{
  if (DAT_14cb3d308 == 0) {
    FUN_1409ce572(&DAT_14cb3d308,&PTR_FUN_14add9b00);
  }
  return DAT_14cb3d308;
}



// FUNCTION 146471e5c FUN_146471e5c body=47 status=ok
// SIG undefined FUN_146471e5c(void)

longlong FUN_146471e5c(void)

{
  if (DAT_14cb3d330 == 0) {
    FUN_14073dd9a(&DAT_14cb3d330,&PTR_LAB_14adda2d0);
  }
  return DAT_14cb3d330;
}



// FUNCTION 146471e8b FUN_146471e8b body=47 status=ok
// SIG undefined FUN_146471e8b(void)

longlong FUN_146471e8b(void)

{
  if (DAT_14cb3d320 == 0) {
    FUN_14000fc22(&DAT_14cb3d320,&PTR_FUN_14add9bc0);
  }
  return DAT_14cb3d320;
}



// FUNCTION 146471eba FUN_146471eba body=34 status=ok
// SIG undefined FUN_146471eba(void)

void FUN_146471eba(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140a45cc8();
  FUN_14069c8d6(uVar1,&PTR_s_OnSourceEndPlay_14add9c00,1);
  return;
}



// FUNCTION 146471ee1 FUN_146471ee1 body=47 status=ok
// SIG undefined FUN_146471ee1(void)

longlong FUN_146471ee1(void)

{
  if (DAT_14cb3d370 == 0) {
    FUN_14073dd9a(&DAT_14cb3d370,&PTR_LAB_14addad28);
  }
  return DAT_14cb3d370;
}



// FUNCTION 146471f10 FUN_146471f10 body=125 status=ok
// SIG undefined FUN_146471f10(void)

void FUN_146471f10(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146471f8e FUN_146471f8e body=55 status=ok
// SIG undefined FUN_146471f8e(void)

void FUN_146471f8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3d3b8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3d3b8 = FUN_140002ddd(FUN_146471fc5,uVar1,L"NiagaraDataInterfaceSplineLUT");
  }
  return;
}



// FUNCTION 146471fc5 FUN_146471fc5 body=47 status=ok
// SIG undefined FUN_146471fc5(void)

longlong FUN_146471fc5(void)

{
  if (DAT_14cb3d3b0 == 0) {
    FUN_14086a14e(&DAT_14cb3d3b0,&PTR_FUN_14addb6a0);
  }
  return DAT_14cb3d3b0;
}



// FUNCTION 146471ff4 FUN_146471ff4 body=48 status=ok
// SIG undefined FUN_146471ff4(void)

void FUN_146471ff4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14addcc70;
  return;
}



// FUNCTION 146472024 FUN_146472024 body=47 status=ok
// SIG undefined FUN_146472024(void)

longlong FUN_146472024(void)

{
  if (DAT_14cb3d3d0 == 0) {
    FUN_14073dd9a(&DAT_14cb3d3d0,&PTR_LAB_14addb868);
  }
  return DAT_14cb3d3d0;
}



// FUNCTION 146472053 FUN_146472053 body=47 status=ok
// SIG undefined FUN_146472053(void)

longlong FUN_146472053(void)

{
  if (DAT_14cb3d480 == 0) {
    FUN_14073dd9a(&DAT_14cb3d480,&PTR_LAB_14addc0b8);
  }
  return DAT_14cb3d480;
}



// FUNCTION 146472082 FUN_146472082 body=80 status=ok
// SIG undefined FUN_146472082(void)

undefined8 * FUN_146472082(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14add6bd0;
  param_1[7] = &PTR_LAB_14add7010;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464720d2 FUN_1464720d2 body=40 status=ok
// SIG undefined FUN_1464720d2(void)

undefined8 FUN_1464720d2(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464720fa FUN_1464720fa body=40 status=ok
// SIG undefined FUN_1464720fa(void)

undefined8 FUN_1464720fa(undefined8 param_1,int param_2)

{
  FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146472122 FUN_146472122 body=40 status=ok
// SIG undefined FUN_146472122(void)

undefined8 FUN_146472122(undefined8 param_1,int param_2)

{
  FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14647214a FUN_14647214a body=40 status=ok
// SIG undefined FUN_14647214a(void)

undefined8 FUN_14647214a(undefined8 param_1,int param_2)

{
  FUN_1403159fa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146472172 FUN_146472172 body=69 status=ok
// SIG undefined FUN_146472172(void)

undefined8 * FUN_146472172(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14addad70;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464721b8 FUN_1464721b8 body=29 status=ok
// SIG undefined FUN_1464721b8(void)

undefined8 FUN_1464721b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464721d6 FUN_1464721d6 body=136 status=ok
// SIG undefined FUN_1464721d6(void)

code * FUN_1464721d6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DeformedTangentBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d00000008a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819ed9a;
}



// FUNCTION 14647225e FUN_14647225e body=136 status=ok
// SIG undefined FUN_14647225e(void)

code * FUN_14647225e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreSkinnedLocalBoundsExtents";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b000000085;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819ef38;
}



// FUNCTION 1464722e6 FUN_1464722e6 body=136 status=ok
// SIG undefined FUN_1464722e6(void)

code * FUN_1464722e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumBones";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa400000071;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f7d8;
}



// FUNCTION 14647236e FUN_14647236e body=136 status=ok
// SIG undefined FUN_14647236e(void)

code * FUN_14647236e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubImageSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481b5722;
}



// FUNCTION 1464723f6 FUN_1464723f6 body=136 status=ok
// SIG undefined FUN_1464723f6(void)

code * FUN_1464723f6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000016;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ec8390;
}



// FUNCTION 14647247e FUN_14647247e body=47 status=ok
// SIG undefined FUN_14647247e(void)

longlong FUN_14647247e(void)

{
  if (DAT_14cb3d900 == 0) {
    FUN_14073dd9a(&DAT_14cb3d900,&PTR_LAB_14addfb78);
  }
  return DAT_14cb3d900;
}



// FUNCTION 1464724ad FUN_1464724ad body=47 status=ok
// SIG undefined FUN_1464724ad(void)

longlong FUN_1464724ad(void)

{
  if (DAT_14cb3d948 == 0) {
    FUN_14073dd9a(&DAT_14cb3d948,&PTR_LAB_14ade0218);
  }
  return DAT_14cb3d948;
}



// FUNCTION 1464724dc FUN_1464724dc body=47 status=ok
// SIG undefined FUN_1464724dc(void)

longlong FUN_1464724dc(void)

{
  if (DAT_14cb3d968 == 0) {
    FUN_14073dd9a(&DAT_14cb3d968,&PTR_LAB_14ade08b8);
  }
  return DAT_14cb3d968;
}



// FUNCTION 14647250c FUN_14647250c body=125 status=ok
// SIG undefined FUN_14647250c(void)

void FUN_14647250c(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14647258a FUN_14647258a body=47 status=ok
// SIG undefined FUN_14647258a(void)

longlong FUN_14647258a(void)

{
  if (DAT_14cb3d988 == 0) {
    FUN_14073dd9a(&DAT_14cb3d988,&PTR_LAB_14ade0ef8);
  }
  return DAT_14cb3d988;
}



// FUNCTION 1464725b9 FUN_1464725b9 body=47 status=ok
// SIG undefined FUN_1464725b9(void)

longlong FUN_1464725b9(void)

{
  if (DAT_14cb3d9a8 == 0) {
    FUN_14073dd9a(&DAT_14cb3d9a8,&PTR_LAB_14ade1598);
  }
  return DAT_14cb3d9a8;
}



// FUNCTION 1464725e8 FUN_1464725e8 body=47 status=ok
// SIG undefined FUN_1464725e8(void)

longlong FUN_1464725e8(void)

{
  if (DAT_14cb3da28 == 0) {
    FUN_14073dd9a(&DAT_14cb3da28,&PTR_LAB_14ade1b38);
  }
  return DAT_14cb3da28;
}



// FUNCTION 146472618 FUN_146472618 body=125 status=ok
// SIG undefined FUN_146472618(void)

void FUN_146472618(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a63f30();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    local_20 = *(longlong *)(param_1 + 0x10);
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffff;
    FUN_140c6bd52(&local_20,0x1f);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146472696 FUN_146472696 body=47 status=ok
// SIG undefined FUN_146472696(void)

longlong FUN_146472696(void)

{
  if (DAT_14cb3da78 == 0) {
    FUN_14073dd9a(&DAT_14cb3da78,&PTR_LAB_14ade2198);
  }
  return DAT_14cb3da78;
}



// FUNCTION 1464726c6 FUN_1464726c6 body=145 status=ok
// SIG undefined FUN_1464726c6(void)

undefined8 FUN_1464726c6(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  
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
  param_2[1] = DAT_14c9a5298;
  *(undefined4 *)(param_2 + 2) = DAT_14c9a52a0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar1 = FUN_144830b78(param_2 + 6,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 6) = uVar1;
  param_2[7] = 0;
  param_2[8] = 0;
  FUN_1404e5848(param_2 + 3,param_3 + 0x1e8,param_1 + 0x40);
  return 1;
}



// FUNCTION 146472758 FUN_146472758 body=55 status=ok
// SIG undefined FUN_146472758(void)

void FUN_146472758(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dbb0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dbb0 = FUN_140002ddd(FUN_14182d306,uVar1,L"NiagaraOutlinerTimingData");
  }
  return;
}



// FUNCTION 146472790 FUN_146472790 body=48 status=ok
// SIG undefined FUN_146472790(void)

void FUN_146472790(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14adeee30;
  return;
}



// FUNCTION 1464727c0 FUN_1464727c0 body=55 status=ok
// SIG undefined FUN_1464727c0(void)

void FUN_1464727c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dbc8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dbc8 = FUN_140002ddd(FUN_1464727f7,uVar1,L"NiagaraOutlinerEmitterInstanceData");
  }
  return;
}



// FUNCTION 1464727f7 FUN_1464727f7 body=47 status=ok
// SIG undefined FUN_1464727f7(void)

longlong FUN_1464727f7(void)

{
  if (DAT_14cb3dbc0 == 0) {
    FUN_14086a14e(&DAT_14cb3dbc0,&PTR_FUN_14ade3170);
  }
  return DAT_14cb3dbc0;
}



// FUNCTION 146472826 FUN_146472826 body=48 status=ok
// SIG undefined FUN_146472826(void)

void FUN_146472826(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14adeef90;
  return;
}



// FUNCTION 146472856 FUN_146472856 body=55 status=ok
// SIG undefined FUN_146472856(void)

void FUN_146472856(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dbe0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dbe0 = FUN_140002ddd(FUN_14647288d,uVar1,L"NiagaraOutlinerSystemInstanceData");
  }
  return;
}



// FUNCTION 14647288d FUN_14647288d body=47 status=ok
// SIG undefined FUN_14647288d(void)

longlong FUN_14647288d(void)

{
  if (DAT_14cb3dbd8 == 0) {
    FUN_14086a14e(&DAT_14cb3dbd8,&PTR_FUN_14ade3a08);
  }
  return DAT_14cb3dbd8;
}



// FUNCTION 1464728bc FUN_1464728bc body=48 status=ok
// SIG undefined FUN_1464728bc(void)

void FUN_1464728bc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14adef0f0;
  return;
}



// FUNCTION 1464728ec FUN_1464728ec body=55 status=ok
// SIG undefined FUN_1464728ec(void)

void FUN_1464728ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dbf8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dbf8 = FUN_140002ddd(FUN_146472923,uVar1,L"NiagaraOutlinerSystemData");
  }
  return;
}



// FUNCTION 146472923 FUN_146472923 body=47 status=ok
// SIG undefined FUN_146472923(void)

longlong FUN_146472923(void)

{
  if (DAT_14cb3dbf0 == 0) {
    FUN_14086a14e(&DAT_14cb3dbf0,&PTR_FUN_14ade3cb0);
  }
  return DAT_14cb3dbf0;
}



// FUNCTION 146472952 FUN_146472952 body=48 status=ok
// SIG undefined FUN_146472952(void)

void FUN_146472952(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14adef250;
  return;
}



// FUNCTION 146472982 FUN_146472982 body=55 status=ok
// SIG undefined FUN_146472982(void)

void FUN_146472982(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dc10 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dc10 = FUN_140002ddd(FUN_1464729b9,uVar1,L"NiagaraOutlinerWorldData");
  }
  return;
}



// FUNCTION 1464729b9 FUN_1464729b9 body=47 status=ok
// SIG undefined FUN_1464729b9(void)

longlong FUN_1464729b9(void)

{
  if (DAT_14cb3dc08 == 0) {
    FUN_14086a14e(&DAT_14cb3dc08,&PTR_FUN_14ade3fb0);
  }
  return DAT_14cb3dc08;
}



// FUNCTION 1464729e8 FUN_1464729e8 body=48 status=ok
// SIG undefined FUN_1464729e8(void)

void FUN_1464729e8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14adef3b0;
  return;
}



// FUNCTION 146472a18 FUN_146472a18 body=55 status=ok
// SIG undefined FUN_146472a18(void)

void FUN_146472a18(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dc28 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dc28 = FUN_140002ddd(FUN_146472a4f,uVar1,L"NiagaraOutlinerData");
  }
  return;
}



// FUNCTION 146472a4f FUN_146472a4f body=47 status=ok
// SIG undefined FUN_146472a4f(void)

longlong FUN_146472a4f(void)

{
  if (DAT_14cb3dc20 == 0) {
    FUN_14086a14e(&DAT_14cb3dc20,&PTR_FUN_14ade4110);
  }
  return DAT_14cb3dc20;
}



// FUNCTION 146472a7e FUN_146472a7e body=48 status=ok
// SIG undefined FUN_146472a7e(void)

void FUN_146472a7e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14adef510;
  return;
}



// FUNCTION 146472aae FUN_146472aae body=55 status=ok
// SIG undefined FUN_146472aae(void)

void FUN_146472aae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dc40 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dc40 = FUN_140002ddd(FUN_146472ae5,uVar1,L"NiagaraDebuggerRequestConnection");
  }
  return;
}



// FUNCTION 146472ae5 FUN_146472ae5 body=47 status=ok
// SIG undefined FUN_146472ae5(void)

longlong FUN_146472ae5(void)

{
  if (DAT_14cb3dc38 == 0) {
    FUN_14086a14e(&DAT_14cb3dc38,&PTR_FUN_14ade4248);
  }
  return DAT_14cb3dc38;
}



// FUNCTION 146472b14 FUN_146472b14 body=48 status=ok
// SIG undefined FUN_146472b14(void)

void FUN_146472b14(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000020;
  *puVar1 = &PTR_FUN_14adef670;
  return;
}



// FUNCTION 146472b44 FUN_146472b44 body=55 status=ok
// SIG undefined FUN_146472b44(void)

void FUN_146472b44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dc58 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dc58 = FUN_140002ddd(FUN_146472b7b,uVar1,L"NiagaraDebuggerAcceptConnection");
  }
  return;
}



// FUNCTION 146472b7b FUN_146472b7b body=47 status=ok
// SIG undefined FUN_146472b7b(void)

longlong FUN_146472b7b(void)

{
  if (DAT_14cb3dc50 == 0) {
    FUN_14086a14e(&DAT_14cb3dc50,&PTR_FUN_14ade4370);
  }
  return DAT_14cb3dc50;
}



// FUNCTION 146472baa FUN_146472baa body=48 status=ok
// SIG undefined FUN_146472baa(void)

void FUN_146472baa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000020;
  *puVar1 = &PTR_FUN_14adef7d0;
  return;
}



// FUNCTION 146472bda FUN_146472bda body=55 status=ok
// SIG undefined FUN_146472bda(void)

void FUN_146472bda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dc70 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dc70 = FUN_140002ddd(FUN_146472c11,uVar1,L"NiagaraDebuggerConnectionClosed");
  }
  return;
}



// FUNCTION 146472c11 FUN_146472c11 body=47 status=ok
// SIG undefined FUN_146472c11(void)

longlong FUN_146472c11(void)

{
  if (DAT_14cb3dc68 == 0) {
    FUN_14086a14e(&DAT_14cb3dc68,&PTR_FUN_14ade44a0);
  }
  return DAT_14cb3dc68;
}



// FUNCTION 146472c40 FUN_146472c40 body=48 status=ok
// SIG undefined FUN_146472c40(void)

void FUN_146472c40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000020;
  *puVar1 = &PTR_FUN_14adef930;
  return;
}



// FUNCTION 146472c70 FUN_146472c70 body=55 status=ok
// SIG undefined FUN_146472c70(void)

void FUN_146472c70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dc88 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dc88 = FUN_140002ddd(FUN_146472ca7,uVar1,L"NiagaraDebuggerExecuteConsoleCommand");
  }
  return;
}



// FUNCTION 146472ca7 FUN_146472ca7 body=47 status=ok
// SIG undefined FUN_146472ca7(void)

longlong FUN_146472ca7(void)

{
  if (DAT_14cb3dc80 == 0) {
    FUN_14086a14e(&DAT_14cb3dc80,&PTR_FUN_14ade45e8);
  }
  return DAT_14cb3dc80;
}



// FUNCTION 146472cd6 FUN_146472cd6 body=48 status=ok
// SIG undefined FUN_146472cd6(void)

void FUN_146472cd6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14adefa90;
  return;
}



// FUNCTION 146472d06 FUN_146472d06 body=55 status=ok
// SIG undefined FUN_146472d06(void)

void FUN_146472d06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dca0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dca0 = FUN_140002ddd(FUN_146472d3d,uVar1,L"NiagaraDebuggerOutlinerUpdate");
  }
  return;
}



// FUNCTION 146472d3d FUN_146472d3d body=47 status=ok
// SIG undefined FUN_146472d3d(void)

longlong FUN_146472d3d(void)

{
  if (DAT_14cb3dc98 == 0) {
    FUN_14086a14e(&DAT_14cb3dc98,&PTR_FUN_14ade46d8);
  }
  return DAT_14cb3dc98;
}



// FUNCTION 146472d6c FUN_146472d6c body=48 status=ok
// SIG undefined FUN_146472d6c(void)

void FUN_146472d6c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14adefbf0;
  return;
}



// FUNCTION 146472d9c FUN_146472d9c body=47 status=ok
// SIG undefined FUN_146472d9c(void)

longlong FUN_146472d9c(void)

{
  if (DAT_14cb3dcb0 == 0) {
    FUN_1409ce572(&DAT_14cb3dcb0,&PTR_FUN_14ade4770);
  }
  return DAT_14cb3dcb0;
}



// FUNCTION 146472dcb FUN_146472dcb body=47 status=ok
// SIG undefined FUN_146472dcb(void)

longlong FUN_146472dcb(void)

{
  if (DAT_14cb3dcc8 == 0) {
    FUN_1409ce572(&DAT_14cb3dcc8,&PTR_FUN_14ade47f0);
  }
  return DAT_14cb3dcc8;
}



// FUNCTION 146472dfa FUN_146472dfa body=47 status=ok
// SIG undefined FUN_146472dfa(void)

longlong FUN_146472dfa(void)

{
  if (DAT_14cb3dce0 == 0) {
    FUN_1409ce572(&DAT_14cb3dce0,&PTR_FUN_14ade4870);
  }
  return DAT_14cb3dce0;
}



// FUNCTION 146472e29 FUN_146472e29 body=47 status=ok
// SIG undefined FUN_146472e29(void)

longlong FUN_146472e29(void)

{
  if (DAT_14cb3dcf8 == 0) {
    FUN_1409ce572(&DAT_14cb3dcf8,&PTR_FUN_14ade48e0);
  }
  return DAT_14cb3dcf8;
}



// FUNCTION 146472e58 FUN_146472e58 body=49 status=ok
// SIG undefined FUN_146472e58(void)

longlong FUN_146472e58(void)

{
  if (DAT_14cb3dd10 == 0) {
    FUN_1409ce572(&DAT_14cb3dd10,&PTR_FUN_14ade4960);
  }
  return DAT_14cb3dd10;
}



// FUNCTION 146472e8a FUN_146472e8a body=55 status=ok
// SIG undefined FUN_146472e8a(void)

void FUN_146472e8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dd30 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dd30 = FUN_140002ddd(FUN_146472ec1,uVar1,L"NiagaraDebugHudTextOptions");
  }
  return;
}



// FUNCTION 146472ec1 FUN_146472ec1 body=49 status=ok
// SIG undefined FUN_146472ec1(void)

longlong FUN_146472ec1(void)

{
  if (DAT_14cb3dd28 == 0) {
    FUN_14086a14e(&DAT_14cb3dd28,&PTR_FUN_14ade4be8);
  }
  return DAT_14cb3dd28;
}



// FUNCTION 146472ef2 FUN_146472ef2 body=48 status=ok
// SIG undefined FUN_146472ef2(void)

void FUN_146472ef2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14adf0020;
  return;
}



// FUNCTION 146472f22 FUN_146472f22 body=55 status=ok
// SIG undefined FUN_146472f22(void)

void FUN_146472f22(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dd48 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dd48 = FUN_140002ddd(FUN_146472f59,uVar1,L"NiagaraDebugHUDVariable");
  }
  return;
}



// FUNCTION 146472f59 FUN_146472f59 body=49 status=ok
// SIG undefined FUN_146472f59(void)

longlong FUN_146472f59(void)

{
  if (DAT_14cb3dd40 == 0) {
    FUN_14086a14e(&DAT_14cb3dd40,&PTR_FUN_14ade4cf8);
  }
  return DAT_14cb3dd40;
}



// FUNCTION 146472f8a FUN_146472f8a body=48 status=ok
// SIG undefined FUN_146472f8a(void)

void FUN_146472f8a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14adf0180;
  return;
}



// FUNCTION 146472fba FUN_146472fba body=47 status=ok
// SIG undefined FUN_146472fba(void)

longlong FUN_146472fba(void)

{
  if (DAT_14cb3dd58 == 0) {
    FUN_1409ce572(&DAT_14cb3dd58,&PTR_FUN_14ade4da0);
  }
  return DAT_14cb3dd58;
}



// FUNCTION 146472fe9 FUN_146472fe9 body=47 status=ok
// SIG undefined FUN_146472fe9(void)

longlong FUN_146472fe9(void)

{
  if (DAT_14cb3dd70 == 0) {
    FUN_1409ce572(&DAT_14cb3dd70,&PTR_FUN_14ade4e20);
  }
  return DAT_14cb3dd70;
}



// FUNCTION 146473018 FUN_146473018 body=47 status=ok
// SIG undefined FUN_146473018(void)

longlong FUN_146473018(void)

{
  if (DAT_14cb3dd88 == 0) {
    FUN_1409ce572(&DAT_14cb3dd88,&PTR_FUN_14ade4e90);
  }
  return DAT_14cb3dd88;
}



// FUNCTION 146473047 FUN_146473047 body=47 status=ok
// SIG undefined FUN_146473047(void)

longlong FUN_146473047(void)

{
  if (DAT_14cb3dda0 == 0) {
    FUN_1409ce572(&DAT_14cb3dda0,&PTR_FUN_14ade4f00);
  }
  return DAT_14cb3dda0;
}



// FUNCTION 146473076 FUN_146473076 body=47 status=ok
// SIG undefined FUN_146473076(void)

longlong FUN_146473076(void)

{
  if (DAT_14cb3ddb8 == 0) {
    FUN_1409ce572(&DAT_14cb3ddb8,&PTR_FUN_14ade4fb0);
  }
  return DAT_14cb3ddb8;
}



// FUNCTION 1464730a6 FUN_1464730a6 body=55 status=ok
// SIG undefined FUN_1464730a6(void)

void FUN_1464730a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3ddd8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3ddd8 = FUN_140002ddd(FUN_1464730dd,uVar1,L"NiagaraDebugHUDSettingsData");
  }
  return;
}



// FUNCTION 1464730dd FUN_1464730dd body=47 status=ok
// SIG undefined FUN_1464730dd(void)

longlong FUN_1464730dd(void)

{
  if (DAT_14cb3ddd0 == 0) {
    FUN_14086a14e(&DAT_14cb3ddd0,&PTR_FUN_14ade6ed8);
  }
  return DAT_14cb3ddd0;
}



// FUNCTION 14647310c FUN_14647310c body=48 status=ok
// SIG undefined FUN_14647310c(void)

void FUN_14647310c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000240;
  *puVar1 = &PTR_FUN_14adf0720;
  return;
}



// FUNCTION 14647313c FUN_14647313c body=55 status=ok
// SIG undefined FUN_14647313c(void)

void FUN_14647313c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3ddf0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3ddf0 = FUN_140002ddd(FUN_146473173,uVar1,L"NiagaraRequestSimpleClientInfoMessage");
  }
  return;
}



// FUNCTION 146473173 FUN_146473173 body=47 status=ok
// SIG undefined FUN_146473173(void)

longlong FUN_146473173(void)

{
  if (DAT_14cb3dde8 == 0) {
    FUN_14086a14e(&DAT_14cb3dde8,&PTR_FUN_14ade6f88);
  }
  return DAT_14cb3dde8;
}



// FUNCTION 1464731a2 FUN_1464731a2 body=48 status=ok
// SIG undefined FUN_1464731a2(void)

void FUN_1464731a2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14adf0880;
  return;
}



// FUNCTION 1464731d2 FUN_1464731d2 body=47 status=ok
// SIG undefined FUN_1464731d2(void)

longlong FUN_1464731d2(void)

{
  if (DAT_14cb3de08 == 0) {
    FUN_14073dd9a(&DAT_14cb3de08,&PTR_LAB_14ade7058);
  }
  return DAT_14cb3de08;
}



// FUNCTION 146473202 FUN_146473202 body=55 status=ok
// SIG undefined FUN_146473202(void)

void FUN_146473202(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3de20 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3de20 = FUN_140002ddd(FUN_146473239,uVar1,L"NiagaraOutlinerCaptureSettings");
  }
  return;
}



// FUNCTION 146473239 FUN_146473239 body=47 status=ok
// SIG undefined FUN_146473239(void)

longlong FUN_146473239(void)

{
  if (DAT_14cb3de18 == 0) {
    FUN_14086a14e(&DAT_14cb3de18,&PTR_FUN_14ade7520);
  }
  return DAT_14cb3de18;
}



// FUNCTION 146473268 FUN_146473268 body=48 status=ok
// SIG undefined FUN_146473268(void)

void FUN_146473268(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14adf09f0;
  return;
}



// FUNCTION 146473298 FUN_146473298 body=55 status=ok
// SIG undefined FUN_146473298(void)

void FUN_146473298(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3de38 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3de38 = FUN_140002ddd(FUN_1464732cf,uVar1,L"NiagaraSimpleClientInfo");
  }
  return;
}



// FUNCTION 1464732cf FUN_1464732cf body=47 status=ok
// SIG undefined FUN_1464732cf(void)

longlong FUN_1464732cf(void)

{
  if (DAT_14cb3de30 == 0) {
    FUN_14086a14e(&DAT_14cb3de30,&PTR_FUN_14ade77a8);
  }
  return DAT_14cb3de30;
}



// FUNCTION 1464732fe FUN_1464732fe body=48 status=ok
// SIG undefined FUN_1464732fe(void)

void FUN_1464732fe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14adf0b50;
  return;
}



// FUNCTION 14647332e FUN_14647332e body=55 status=ok
// SIG undefined FUN_14647332e(void)

void FUN_14647332e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3de50 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3de50 = FUN_140002ddd(FUN_146473365,uVar1,L"NiagaraSystemSimCacheCaptureRequest");
  }
  return;
}



// FUNCTION 146473365 FUN_146473365 body=47 status=ok
// SIG undefined FUN_146473365(void)

longlong FUN_146473365(void)

{
  if (DAT_14cb3de48 == 0) {
    FUN_14086a14e(&DAT_14cb3de48,&PTR_FUN_14ade7920);
  }
  return DAT_14cb3de48;
}



// FUNCTION 146473394 FUN_146473394 body=48 status=ok
// SIG undefined FUN_146473394(void)

void FUN_146473394(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14adf0cb0;
  return;
}



// FUNCTION 1464733c4 FUN_1464733c4 body=55 status=ok
// SIG undefined FUN_1464733c4(void)

void FUN_1464733c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3de68 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3de68 = FUN_140002ddd(FUN_1464733fb,uVar1,L"NiagaraSystemSimCacheCaptureReply");
  }
  return;
}



// FUNCTION 1464733fb FUN_1464733fb body=47 status=ok
// SIG undefined FUN_1464733fb(void)

longlong FUN_1464733fb(void)

{
  if (DAT_14cb3de60 == 0) {
    FUN_14086a14e(&DAT_14cb3de60,&PTR_FUN_14ade7aa0);
  }
  return DAT_14cb3de60;
}



// FUNCTION 14647342a FUN_14647342a body=48 status=ok
// SIG undefined FUN_14647342a(void)

void FUN_14647342a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14adf0e10;
  return;
}



// FUNCTION 14647345a FUN_14647345a body=115 status=ok
// SIG undefined FUN_14647345a(void)

void FUN_14647345a(longlong param_1)

{
  undefined1 auStack_278 [32];
  undefined1 local_258 [560];
  undefined1 local_28;
  undefined1 local_27;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_144a63f30();
  FUN_1461426fc(local_258);
  *(undefined1 *)(param_1 + 0x278) = local_28;
  *(undefined1 *)(param_1 + 0x279) = local_27;
  FUN_145972a26(local_258);
  if ((local_18 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464734ce FUN_1464734ce body=47 status=ok
// SIG undefined FUN_1464734ce(void)

longlong FUN_1464734ce(void)

{
  if (DAT_14cb3de80 == 0) {
    FUN_14073dd9a(&DAT_14cb3de80,&PTR_LAB_14ade8478);
  }
  return DAT_14cb3de80;
}



// FUNCTION 1464734fe FUN_1464734fe body=111 status=ok
// SIG undefined FUN_1464734fe(void)

void FUN_1464734fe(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_145a79618();
  lVar3 = *(longlong *)(lVar1 + 0x110);
  if (lVar3 == 0) {
    FUN_140aa6c08(lVar1);
    lVar3 = *(longlong *)(lVar1 + 0x110);
  }
  FUN_1414c6ee0(lVar3);
  if ((longlong)DAT_14cb3de98 != 0) {
    lVar1 = (longlong)DAT_14cb3de98 << 3;
    lVar3 = DAT_14cb3de90;
    do {
      lVar2 = FUN_14479d2ce(lVar3);
      if (lVar2 != 0) {
        FUN_1414c6ee0(lVar2);
      }
      lVar3 = lVar3 + 8;
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14647356e FUN_14647356e body=55 status=ok
// SIG undefined FUN_14647356e(void)

void FUN_14647356e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3dea8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3dea8 = FUN_140002ddd(FUN_1464735a5,uVar1,L"NiagaraGraphViewSettings");
  }
  return;
}



// FUNCTION 1464735a5 FUN_1464735a5 body=47 status=ok
// SIG undefined FUN_1464735a5(void)

longlong FUN_1464735a5(void)

{
  if (DAT_14cb3dea0 == 0) {
    FUN_14086a14e(&DAT_14cb3dea0,&PTR_FUN_14ade8968);
  }
  return DAT_14cb3dea0;
}



// FUNCTION 1464735d4 FUN_1464735d4 body=48 status=ok
// SIG undefined FUN_1464735d4(void)

void FUN_1464735d4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14adf1050;
  return;
}



// FUNCTION 146473604 FUN_146473604 body=35 status=ok
// SIG undefined FUN_146473604(void)

void FUN_146473604(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ade8a30;
  return;
}



// FUNCTION 146473627 FUN_146473627 body=47 status=ok
// SIG undefined FUN_146473627(void)

longlong FUN_146473627(void)

{
  if (DAT_14cb3dec0 == 0) {
    FUN_14073dd9a(&DAT_14cb3dec0,&PTR_LAB_14ade89e8);
  }
  return DAT_14cb3dec0;
}



// FUNCTION 146473656 FUN_146473656 body=35 status=ok
// SIG undefined FUN_146473656(void)

void FUN_146473656(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ade8d80;
  return;
}



// FUNCTION 146473679 FUN_146473679 body=47 status=ok
// SIG undefined FUN_146473679(void)

longlong FUN_146473679(void)

{
  if (DAT_14cb3ded8 == 0) {
    FUN_14073dd9a(&DAT_14cb3ded8,&PTR_LAB_14ade8d38);
  }
  return DAT_14cb3ded8;
}



// FUNCTION 1464736a8 FUN_1464736a8 body=47 status=ok
// SIG undefined FUN_1464736a8(void)

longlong FUN_1464736a8(void)

{
  if (DAT_14cb3dff8 == 0) {
    FUN_1409ce572(&DAT_14cb3dff8,&PTR_FUN_14ade9560);
  }
  return DAT_14cb3dff8;
}



// FUNCTION 1464736d7 FUN_1464736d7 body=47 status=ok
// SIG undefined FUN_1464736d7(void)

longlong FUN_1464736d7(void)

{
  if (DAT_14cb3e010 == 0) {
    FUN_1409ce572(&DAT_14cb3e010,&PTR_FUN_14ade9610);
  }
  return DAT_14cb3e010;
}



// FUNCTION 146473706 FUN_146473706 body=47 status=ok
// SIG undefined FUN_146473706(void)

longlong FUN_146473706(void)

{
  if (DAT_14cb3e028 == 0) {
    FUN_1409ce572(&DAT_14cb3e028,&PTR_FUN_14ade9680);
  }
  return DAT_14cb3e028;
}



// FUNCTION 146473736 FUN_146473736 body=55 status=ok
// SIG undefined FUN_146473736(void)

void FUN_146473736(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e048 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e048 = FUN_140002ddd(FUN_14647376d,uVar1,L"NiagaraLinearRamp");
  }
  return;
}



// FUNCTION 14647376d FUN_14647376d body=49 status=ok
// SIG undefined FUN_14647376d(void)

longlong FUN_14647376d(void)

{
  if (DAT_14cb3e040 == 0) {
    FUN_14086a14e(&DAT_14cb3e040,&PTR_FUN_14ade9818);
  }
  return DAT_14cb3e040;
}



// FUNCTION 14647379e FUN_14647379e body=48 status=ok
// SIG undefined FUN_14647379e(void)

void FUN_14647379e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14adf1430;
  return;
}



// FUNCTION 1464737ce FUN_1464737ce body=55 status=ok
// SIG undefined FUN_1464737ce(void)

void FUN_1464737ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e060 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e060 = FUN_140002ddd(FUN_146473805,uVar1,L"NiagaraGlobalBudgetScaling");
  }
  return;
}



// FUNCTION 146473805 FUN_146473805 body=47 status=ok
// SIG undefined FUN_146473805(void)

longlong FUN_146473805(void)

{
  if (DAT_14cb3e058 == 0) {
    FUN_14086a14e(&DAT_14cb3e058,&PTR_FUN_14ade9c10);
  }
  return DAT_14cb3e058;
}



// FUNCTION 146473834 FUN_146473834 body=48 status=ok
// SIG undefined FUN_146473834(void)

void FUN_146473834(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000038;
  *puVar1 = &PTR_FUN_14adf1590;
  return;
}



// FUNCTION 146473864 FUN_146473864 body=55 status=ok
// SIG undefined FUN_146473864(void)

void FUN_146473864(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e078 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e078 = FUN_140002ddd(FUN_14647389b,uVar1,L"NiagaraSystemVisibilityCullingSettings");
  }
  return;
}



// FUNCTION 14647389b FUN_14647389b body=47 status=ok
// SIG undefined FUN_14647389b(void)

longlong FUN_14647389b(void)

{
  if (DAT_14cb3e070 == 0) {
    FUN_14086a14e(&DAT_14cb3e070,&PTR_FUN_14ade9ea0);
  }
  return DAT_14cb3e070;
}



// FUNCTION 1464738ca FUN_1464738ca body=48 status=ok
// SIG undefined FUN_1464738ca(void)

void FUN_1464738ca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14adf16f0;
  return;
}



// FUNCTION 1464738fa FUN_1464738fa body=55 status=ok
// SIG undefined FUN_1464738fa(void)

void FUN_1464738fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e090 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e090 = FUN_140002ddd(FUN_146473931,uVar1,L"NiagaraSystemScalabilitySettings");
  }
  return;
}



// FUNCTION 146473931 FUN_146473931 body=49 status=ok
// SIG undefined FUN_146473931(void)

longlong FUN_146473931(void)

{
  if (DAT_14cb3e088 == 0) {
    FUN_14086a14e(&DAT_14cb3e088,&PTR_FUN_14adea3e8);
  }
  return DAT_14cb3e088;
}



// FUNCTION 146473962 FUN_146473962 body=48 status=ok
// SIG undefined FUN_146473962(void)

void FUN_146473962(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14adf1850;
  return;
}



// FUNCTION 146473992 FUN_146473992 body=55 status=ok
// SIG undefined FUN_146473992(void)

void FUN_146473992(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e0a8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e0a8 = FUN_140002ddd(FUN_1464739c9,uVar1,L"NiagaraSystemScalabilitySettingsArray");
  }
  return;
}



// FUNCTION 1464739c9 FUN_1464739c9 body=47 status=ok
// SIG undefined FUN_1464739c9(void)

longlong FUN_1464739c9(void)

{
  if (DAT_14cb3e0a0 == 0) {
    FUN_14086a14e(&DAT_14cb3e0a0,&PTR_FUN_14adea528);
  }
  return DAT_14cb3e0a0;
}



// FUNCTION 1464739f8 FUN_1464739f8 body=48 status=ok
// SIG undefined FUN_1464739f8(void)

void FUN_1464739f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14adf19b0;
  return;
}



// FUNCTION 146473a28 FUN_146473a28 body=55 status=ok
// SIG undefined FUN_146473a28(void)

void FUN_146473a28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e0c0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e0c0 = FUN_140002ddd(FUN_146473a5f,uVar1,L"NiagaraSystemScalabilityOverride");
  }
  return;
}



// FUNCTION 146473a5f FUN_146473a5f body=47 status=ok
// SIG undefined FUN_146473a5f(void)

longlong FUN_146473a5f(void)

{
  if (DAT_14cb3e0b8 == 0) {
    FUN_14086a14e(&DAT_14cb3e0b8,&PTR_FUN_14adea848);
  }
  return DAT_14cb3e0b8;
}



// FUNCTION 146473a8e FUN_146473a8e body=48 status=ok
// SIG undefined FUN_146473a8e(void)

void FUN_146473a8e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a0;
  *puVar1 = &PTR_FUN_14adf1b10;
  return;
}



// FUNCTION 146473abe FUN_146473abe body=55 status=ok
// SIG undefined FUN_146473abe(void)

void FUN_146473abe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e0d8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e0d8 = FUN_140002ddd(FUN_146473af5,uVar1,L"NiagaraEmitterScalabilitySettings");
  }
  return;
}



// FUNCTION 146473af5 FUN_146473af5 body=49 status=ok
// SIG undefined FUN_146473af5(void)

longlong FUN_146473af5(void)

{
  if (DAT_14cb3e0d0 == 0) {
    FUN_14086a14e(&DAT_14cb3e0d0,&PTR_FUN_14adea9f0);
  }
  return DAT_14cb3e0d0;
}



// FUNCTION 146473b26 FUN_146473b26 body=48 status=ok
// SIG undefined FUN_146473b26(void)

void FUN_146473b26(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14adf1c70;
  return;
}



// FUNCTION 146473b56 FUN_146473b56 body=55 status=ok
// SIG undefined FUN_146473b56(void)

void FUN_146473b56(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e0f0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e0f0 = FUN_140002ddd(FUN_146473b8d,uVar1,L"NiagaraEmitterScalabilitySettingsArray");
  }
  return;
}



// FUNCTION 146473b8d FUN_146473b8d body=47 status=ok
// SIG undefined FUN_146473b8d(void)

longlong FUN_146473b8d(void)

{
  if (DAT_14cb3e0e8 == 0) {
    FUN_14086a14e(&DAT_14cb3e0e8,&PTR_FUN_14adeab28);
  }
  return DAT_14cb3e0e8;
}



// FUNCTION 146473bbc FUN_146473bbc body=48 status=ok
// SIG undefined FUN_146473bbc(void)

void FUN_146473bbc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14adf1dd0;
  return;
}



// FUNCTION 146473bec FUN_146473bec body=55 status=ok
// SIG undefined FUN_146473bec(void)

void FUN_146473bec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e108 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e108 = FUN_140002ddd(FUN_146473c23,uVar1,L"NiagaraEmitterScalabilityOverride");
  }
  return;
}



// FUNCTION 146473c23 FUN_146473c23 body=47 status=ok
// SIG undefined FUN_146473c23(void)

longlong FUN_146473c23(void)

{
  if (DAT_14cb3e100 == 0) {
    FUN_14086a14e(&DAT_14cb3e100,&PTR_FUN_14adeac30);
  }
  return DAT_14cb3e100;
}



// FUNCTION 146473c52 FUN_146473c52 body=48 status=ok
// SIG undefined FUN_146473c52(void)

void FUN_146473c52(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14adf1f30;
  return;
}



// FUNCTION 146473c82 FUN_146473c82 body=55 status=ok
// SIG undefined FUN_146473c82(void)

void FUN_146473c82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e120 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e120 = FUN_140002ddd(FUN_146473cb9,uVar1,L"NiagaraEmitterScalabilityOverrides");
  }
  return;
}



// FUNCTION 146473cb9 FUN_146473cb9 body=49 status=ok
// SIG undefined FUN_146473cb9(void)

longlong FUN_146473cb9(void)

{
  if (DAT_14cb3e118 == 0) {
    FUN_14086a14e(&DAT_14cb3e118,&PTR_FUN_14adead68);
  }
  return DAT_14cb3e118;
}



// FUNCTION 146473cea FUN_146473cea body=48 status=ok
// SIG undefined FUN_146473cea(void)

void FUN_146473cea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14adf2090;
  return;
}



// FUNCTION 146473d1a FUN_146473d1a body=35 status=ok
// SIG undefined FUN_146473d1a(void)

void FUN_146473d1a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14adeae40;
  return;
}



// FUNCTION 146473d42 FUN_146473d42 body=47 status=ok
// SIG undefined FUN_146473d42(void)

longlong FUN_146473d42(void)

{
  if (DAT_14cb3e138 == 0) {
    FUN_14073dd9a(&DAT_14cb3e138,&PTR_LAB_14adeadf8);
  }
  return DAT_14cb3e138;
}



// FUNCTION 146473d71 FUN_146473d71 body=47 status=ok
// SIG undefined FUN_146473d71(void)

longlong FUN_146473d71(void)

{
  if (DAT_14cb3e150 == 0) {
    FUN_14073dd9a(&DAT_14cb3e150,&PTR_LAB_14adeb148);
  }
  return DAT_14cb3e150;
}



// FUNCTION 146473da0 FUN_146473da0 body=47 status=ok
// SIG undefined FUN_146473da0(void)

longlong FUN_146473da0(void)

{
  if (DAT_14cb3e168 == 0) {
    FUN_14073dd9a(&DAT_14cb3e168,&PTR_LAB_14adeb498);
  }
  return DAT_14cb3e168;
}



// FUNCTION 146473dd5 FUN_146473dd5 body=47 status=ok
// SIG undefined FUN_146473dd5(void)

longlong FUN_146473dd5(void)

{
  if (DAT_14cb3e180 == 0) {
    FUN_14073dd9a(&DAT_14cb3e180,&PTR_LAB_14adebc68);
  }
  return DAT_14cb3e180;
}



// FUNCTION 146473e04 FUN_146473e04 body=55 status=ok
// SIG undefined FUN_146473e04(void)

void FUN_146473e04(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e198 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e198 = FUN_140002ddd(FUN_146473e3b,uVar1,L"NiagaraEventReceiverProperties");
  }
  return;
}



// FUNCTION 146473e3b FUN_146473e3b body=47 status=ok
// SIG undefined FUN_146473e3b(void)

longlong FUN_146473e3b(void)

{
  if (DAT_14cb3e190 == 0) {
    FUN_14086a14e(&DAT_14cb3e190,&PTR_FUN_14adec088);
  }
  return DAT_14cb3e190;
}



// FUNCTION 146473e6a FUN_146473e6a body=48 status=ok
// SIG undefined FUN_146473e6a(void)

void FUN_146473e6a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000018;
  *puVar1 = &PTR_FUN_14adf21f0;
  return;
}



// FUNCTION 146473e9a FUN_146473e9a body=55 status=ok
// SIG undefined FUN_146473e9a(void)

void FUN_146473e9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e1b0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e1b0 = FUN_140002ddd(FUN_146473ed1,uVar1,L"NiagaraEventGeneratorProperties");
  }
  return;
}



// FUNCTION 146473ed1 FUN_146473ed1 body=47 status=ok
// SIG undefined FUN_146473ed1(void)

longlong FUN_146473ed1(void)

{
  if (DAT_14cb3e1a8 == 0) {
    FUN_14086a14e(&DAT_14cb3e1a8,&PTR_FUN_14adec208);
  }
  return DAT_14cb3e1a8;
}



// FUNCTION 146473f00 FUN_146473f00 body=48 status=ok
// SIG undefined FUN_146473f00(void)

void FUN_146473f00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14adf2350;
  return;
}



// FUNCTION 146473f30 FUN_146473f30 body=47 status=ok
// SIG undefined FUN_146473f30(void)

longlong FUN_146473f30(void)

{
  if (DAT_14cb3e1c0 == 0) {
    FUN_1409ce572(&DAT_14cb3e1c0,&PTR_FUN_14adec290);
  }
  return DAT_14cb3e1c0;
}



// FUNCTION 146473f5f FUN_146473f5f body=47 status=ok
// SIG undefined FUN_146473f5f(void)

longlong FUN_146473f5f(void)

{
  if (DAT_14cb3e1d8 == 0) {
    FUN_1409ce572(&DAT_14cb3e1d8,&PTR_FUN_14adec310);
  }
  return DAT_14cb3e1d8;
}



// FUNCTION 146473f8e FUN_146473f8e body=47 status=ok
// SIG undefined FUN_146473f8e(void)

longlong FUN_146473f8e(void)

{
  if (DAT_14cb3e1f0 == 0) {
    FUN_1409ce572(&DAT_14cb3e1f0,&PTR_FUN_14adec3a0);
  }
  return DAT_14cb3e1f0;
}



// FUNCTION 146473fbe FUN_146473fbe body=55 status=ok
// SIG undefined FUN_146473fbe(void)

void FUN_146473fbe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e210 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e210 = FUN_140002ddd(FUN_146473ff5,uVar1,L"NiagaraEmitterScriptProperties");
  }
  return;
}



// FUNCTION 146473ff5 FUN_146473ff5 body=49 status=ok
// SIG undefined FUN_146473ff5(void)

longlong FUN_146473ff5(void)

{
  if (DAT_14cb3e208 == 0) {
    FUN_14086a14e(&DAT_14cb3e208,&PTR_FUN_14adec5a8);
  }
  return DAT_14cb3e208;
}



// FUNCTION 146474026 FUN_146474026 body=48 status=ok
// SIG undefined FUN_146474026(void)

void FUN_146474026(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14adf26c0;
  return;
}



// FUNCTION 146474056 FUN_146474056 body=55 status=ok
// SIG undefined FUN_146474056(void)

void FUN_146474056(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e228 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e228 = FUN_140002ddd(FUN_14647408d,uVar1,L"NiagaraEventScriptProperties");
  }
  return;
}



// FUNCTION 14647408d FUN_14647408d body=47 status=ok
// SIG undefined FUN_14647408d(void)

longlong FUN_14647408d(void)

{
  if (DAT_14cb3e220 == 0) {
    FUN_14086a14e(&DAT_14cb3e220,&PTR_FUN_14adec938);
  }
  return DAT_14cb3e220;
}



// FUNCTION 1464740bc FUN_1464740bc body=48 status=ok
// SIG undefined FUN_1464740bc(void)

void FUN_1464740bc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14adf2820;
  return;
}



// FUNCTION 1464740ec FUN_1464740ec body=55 status=ok
// SIG undefined FUN_1464740ec(void)

void FUN_1464740ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e240 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e240 = FUN_140002ddd(FUN_146474123,uVar1,L"NiagaraDetailsLevelScaleOverrides");
  }
  return;
}



// FUNCTION 146474123 FUN_146474123 body=47 status=ok
// SIG undefined FUN_146474123(void)

longlong FUN_146474123(void)

{
  if (DAT_14cb3e238 == 0) {
    FUN_14086a14e(&DAT_14cb3e238,&PTR_FUN_14adecb30);
  }
  return DAT_14cb3e238;
}



// FUNCTION 146474152 FUN_146474152 body=48 status=ok
// SIG undefined FUN_146474152(void)

void FUN_146474152(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000014;
  *puVar1 = &PTR_FUN_14adf2980;
  return;
}



// FUNCTION 146474182 FUN_146474182 body=55 status=ok
// SIG undefined FUN_146474182(void)

void FUN_146474182(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e258 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e258 = FUN_140002ddd(FUN_1464741b9,uVar1,L"VersionedNiagaraEmitterData");
  }
  return;
}



// FUNCTION 1464741b9 FUN_1464741b9 body=47 status=ok
// SIG undefined FUN_1464741b9(void)

longlong FUN_1464741b9(void)

{
  if (DAT_14cb3e250 == 0) {
    FUN_14086a14e(&DAT_14cb3e250,&PTR_FUN_14aded8b8);
  }
  return DAT_14cb3e250;
}



// FUNCTION 1464741e8 FUN_1464741e8 body=48 status=ok
// SIG undefined FUN_1464741e8(void)

void FUN_1464741e8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000368;
  *puVar1 = &PTR_FUN_14adf2af0;
  return;
}



// FUNCTION 14647421d FUN_14647421d body=47 status=ok
// SIG undefined FUN_14647421d(void)

longlong FUN_14647421d(void)

{
  if (DAT_14cb3e270 == 0) {
    FUN_14073dd9a(&DAT_14cb3e270,&PTR_LAB_14adedac8);
  }
  return DAT_14cb3e270;
}



// FUNCTION 14647424c FUN_14647424c body=72 status=ok
// SIG undefined FUN_14647424c(void)

void FUN_14647424c(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14adf3040;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 146474294 FUN_146474294 body=72 status=ok
// SIG undefined FUN_146474294(void)

void FUN_146474294(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14adf3070;
  FUN_144725486();
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 1464742dc FUN_1464742dc body=40 status=ok
// SIG undefined FUN_1464742dc(void)

undefined8 FUN_1464742dc(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146474304 FUN_146474304 body=40 status=ok
// SIG undefined FUN_146474304(void)

undefined8 FUN_146474304(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14647432c FUN_14647432c body=40 status=ok
// SIG undefined FUN_14647432c(void)

undefined8 FUN_14647432c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}


