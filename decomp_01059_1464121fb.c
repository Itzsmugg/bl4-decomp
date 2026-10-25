// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1464121fb FUN_1464121fb body=47 status=ok
// SIG undefined FUN_1464121fb(void)

longlong FUN_1464121fb(void)

{
  if (DAT_14cb11bc0 == 0) {
    FUN_14073dd9a(&DAT_14cb11bc0,&PTR_LAB_14ab22d68);
  }
  return DAT_14cb11bc0;
}



// FUNCTION 14641222a FUN_14641222a body=47 status=ok
// SIG undefined FUN_14641222a(void)

longlong FUN_14641222a(void)

{
  if (DAT_14cb11be8 == 0) {
    FUN_14073dd9a(&DAT_14cb11be8,&PTR_LAB_14ab23358);
  }
  return DAT_14cb11be8;
}



// FUNCTION 146412259 FUN_146412259 body=35 status=ok
// SIG undefined FUN_146412259(void)

void FUN_146412259(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab23c40;
  return;
}



// FUNCTION 14641227c FUN_14641227c body=47 status=ok
// SIG undefined FUN_14641227c(void)

longlong FUN_14641227c(void)

{
  if (DAT_14cb11c30 == 0) {
    FUN_14073dd9a(&DAT_14cb11c30,&PTR_LAB_14ab23bf8);
  }
  return DAT_14cb11c30;
}



// FUNCTION 1464122ab FUN_1464122ab body=47 status=ok
// SIG undefined FUN_1464122ab(void)

longlong FUN_1464122ab(void)

{
  if (DAT_14cb11c48 == 0) {
    FUN_1409ce572(&DAT_14cb11c48,&PTR_FUN_14ab23f90);
  }
  return DAT_14cb11c48;
}



// FUNCTION 1464122da FUN_1464122da body=55 status=ok
// SIG undefined FUN_1464122da(void)

void FUN_1464122da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11c68 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11c68 = FUN_140002ddd(FUN_146412311,uVar1,L"WorldPartitionRuntimeCellStreamingData");
  }
  return;
}



// FUNCTION 146412311 FUN_146412311 body=47 status=ok
// SIG undefined FUN_146412311(void)

longlong FUN_146412311(void)

{
  if (DAT_14cb11c60 == 0) {
    FUN_14086a14e(&DAT_14cb11c60,&PTR_FUN_14ab240c8);
  }
  return DAT_14cb11c60;
}



// FUNCTION 146412340 FUN_146412340 body=48 status=ok
// SIG undefined FUN_146412340(void)

void FUN_146412340(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14ab2bfd0;
  return;
}



// FUNCTION 14641237b FUN_14641237b body=47 status=ok
// SIG undefined FUN_14641237b(void)

longlong FUN_14641237b(void)

{
  if (DAT_14cb11c80 == 0) {
    FUN_14073dd9a(&DAT_14cb11c80,&PTR_LAB_14ab244b8);
  }
  return DAT_14cb11c80;
}



// FUNCTION 1464123aa FUN_1464123aa body=75 status=ok
// SIG undefined FUN_1464123aa(void)

void FUN_1464123aa(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab24880;
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



// FUNCTION 1464123fa FUN_1464123fa body=47 status=ok
// SIG undefined FUN_1464123fa(void)

longlong FUN_1464123fa(void)

{
  if (DAT_14cb11c98 == 0) {
    FUN_14073dd9a(&DAT_14cb11c98,&PTR_LAB_14ab24838);
  }
  return DAT_14cb11c98;
}



// FUNCTION 146412429 FUN_146412429 body=47 status=ok
// SIG undefined FUN_146412429(void)

longlong FUN_146412429(void)

{
  if (DAT_14cb11ce0 == 0) {
    FUN_14073dd9a(&DAT_14cb11ce0,&PTR_LAB_14ab25000);
  }
  return DAT_14cb11ce0;
}



// FUNCTION 146412458 FUN_146412458 body=47 status=ok
// SIG undefined FUN_146412458(void)

longlong FUN_146412458(void)

{
  if (DAT_14cb11cc8 == 0) {
    FUN_14000fc22(&DAT_14cb11cc8,&PTR_FUN_14ab24e68);
  }
  return DAT_14cb11cc8;
}



// FUNCTION 146412487 FUN_146412487 body=47 status=ok
// SIG undefined FUN_146412487(void)

longlong FUN_146412487(void)

{
  if (DAT_14cb11cd0 == 0) {
    FUN_14000fc22(&DAT_14cb11cd0,&PTR_FUN_14ab24ea8);
  }
  return DAT_14cb11cd0;
}



// FUNCTION 1464124b6 FUN_1464124b6 body=34 status=ok
// SIG undefined FUN_1464124b6(void)

void FUN_1464124b6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140c71830();
  FUN_14069c8d6(uVar1,&PTR_s_OnLevelHidden_14ab24ef0,2);
  return;
}



// FUNCTION 1464124d8 FUN_1464124d8 body=47 status=ok
// SIG undefined FUN_1464124d8(void)

longlong FUN_1464124d8(void)

{
  if (DAT_14cb11cf0 == 0) {
    FUN_1409ce572(&DAT_14cb11cf0,&PTR_FUN_14ab254f0);
  }
  return DAT_14cb11cf0;
}



// FUNCTION 146412508 FUN_146412508 body=55 status=ok
// SIG undefined FUN_146412508(void)

void FUN_146412508(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11d10 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11d10 = FUN_140002ddd(FUN_14641253f,uVar1,L"SpatialHashSettings");
  }
  return;
}



// FUNCTION 14641253f FUN_14641253f body=49 status=ok
// SIG undefined FUN_14641253f(void)

longlong FUN_14641253f(void)

{
  if (DAT_14cb11d08 == 0) {
    FUN_14086a14e(&DAT_14cb11d08,&PTR_FUN_14ab25638);
  }
  return DAT_14cb11d08;
}



// FUNCTION 146412570 FUN_146412570 body=48 status=ok
// SIG undefined FUN_146412570(void)

void FUN_146412570(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000002;
  *puVar1 = &PTR_FUN_14ab2c230;
  return;
}



// FUNCTION 1464125a0 FUN_1464125a0 body=55 status=ok
// SIG undefined FUN_1464125a0(void)

void FUN_1464125a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11d28 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11d28 = FUN_140002ddd(FUN_1464125d7,uVar1,L"SpatialHashStreamingGridLayerCell");
  }
  return;
}



// FUNCTION 1464125d7 FUN_1464125d7 body=47 status=ok
// SIG undefined FUN_1464125d7(void)

longlong FUN_1464125d7(void)

{
  if (DAT_14cb11d20 == 0) {
    FUN_14086a14e(&DAT_14cb11d20,&PTR_FUN_14ab25778);
  }
  return DAT_14cb11d20;
}



// FUNCTION 146412606 FUN_146412606 body=48 status=ok
// SIG undefined FUN_146412606(void)

void FUN_146412606(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14ab2c390;
  return;
}



// FUNCTION 146412636 FUN_146412636 body=55 status=ok
// SIG undefined FUN_146412636(void)

void FUN_146412636(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11d40 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11d40 = FUN_140002ddd(FUN_14641266d,uVar1,L"SpatialHashStreamingGridLevel");
  }
  return;
}



// FUNCTION 14641266d FUN_14641266d body=49 status=ok
// SIG undefined FUN_14641266d(void)

longlong FUN_14641266d(void)

{
  if (DAT_14cb11d38 == 0) {
    FUN_14086a14e(&DAT_14cb11d38,&PTR_FUN_14ab25998);
  }
  return DAT_14cb11d38;
}



// FUNCTION 14641269e FUN_14641269e body=48 status=ok
// SIG undefined FUN_14641269e(void)

void FUN_14641269e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14ab2c4f0;
  return;
}



// FUNCTION 1464126ce FUN_1464126ce body=55 status=ok
// SIG undefined FUN_1464126ce(void)

void FUN_1464126ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11d58 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11d58 = FUN_140002ddd(FUN_146412705,uVar1,L"SpatialHashStreamingGrid");
  }
  return;
}



// FUNCTION 146412705 FUN_146412705 body=49 status=ok
// SIG undefined FUN_146412705(void)

longlong FUN_146412705(void)

{
  if (DAT_14cb11d50 == 0) {
    FUN_14086a14e(&DAT_14cb11d50,&PTR_FUN_14ab25e78);
  }
  return DAT_14cb11d50;
}



// FUNCTION 146412736 FUN_146412736 body=48 status=ok
// SIG undefined FUN_146412736(void)

void FUN_146412736(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000c0;
  *puVar1 = &PTR_FUN_14ab2c650;
  return;
}



// FUNCTION 146412766 FUN_146412766 body=55 status=ok
// SIG undefined FUN_146412766(void)

void FUN_146412766(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11d70 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11d70 = FUN_140002ddd(FUN_14641279d,uVar1,L"SpatialHashRuntimeGrid");
  }
  return;
}



// FUNCTION 14641279d FUN_14641279d body=47 status=ok
// SIG undefined FUN_14641279d(void)

longlong FUN_14641279d(void)

{
  if (DAT_14cb11d68 == 0) {
    FUN_14086a14e(&DAT_14cb11d68,&PTR_FUN_14ab25f38);
  }
  return DAT_14cb11d68;
}



// FUNCTION 1464127cc FUN_1464127cc body=48 status=ok
// SIG undefined FUN_1464127cc(void)

void FUN_1464127cc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14ab2c7c0;
  return;
}



// FUNCTION 1464127fc FUN_1464127fc body=47 status=ok
// SIG undefined FUN_1464127fc(void)

longlong FUN_1464127fc(void)

{
  if (DAT_14cb11d88 == 0) {
    FUN_14073dd9a(&DAT_14cb11d88,&PTR_LAB_14ab26018);
  }
  return DAT_14cb11d88;
}



// FUNCTION 14641282b FUN_14641282b body=67 status=ok
// SIG undefined FUN_14641282b(void)

void FUN_14641282b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c9245a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab267f0;
  puVar1[5] = &PTR_FUN_14ab26a90;
  puVar1[6] = &PTR_FUN_14ab26aa0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  return;
}



// FUNCTION 146412873 FUN_146412873 body=47 status=ok
// SIG undefined FUN_146412873(void)

longlong FUN_146412873(void)

{
  if (DAT_14cb11da0 == 0) {
    FUN_14073dd9a(&DAT_14cb11da0,&PTR_LAB_14ab267a8);
  }
  return DAT_14cb11da0;
}



// FUNCTION 1464128a2 FUN_1464128a2 body=47 status=ok
// SIG undefined FUN_1464128a2(void)

longlong FUN_1464128a2(void)

{
  if (DAT_14cb11db8 == 0) {
    FUN_14073dd9a(&DAT_14cb11db8,&PTR_LAB_14ab26d38);
  }
  return DAT_14cb11db8;
}



// FUNCTION 1464128d2 FUN_1464128d2 body=128 status=ok
// SIG undefined FUN_1464128d2(void)

void FUN_1464128d2(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146412954 FUN_146412954 body=55 status=ok
// SIG undefined FUN_146412954(void)

void FUN_146412954(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11e90 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11e90 =
         FUN_140002ddd(FUN_14641298b,uVar1,L"WorldPartitionRuntimeSpatialHashGridPreviewer");
  }
  return;
}



// FUNCTION 14641298b FUN_14641298b body=47 status=ok
// SIG undefined FUN_14641298b(void)

longlong FUN_14641298b(void)

{
  if (DAT_14cb11e88 == 0) {
    FUN_14086a14e(&DAT_14cb11e88,&PTR_FUN_14ab27770);
  }
  return DAT_14cb11e88;
}



// FUNCTION 1464129ba FUN_1464129ba body=48 status=ok
// SIG undefined FUN_1464129ba(void)

void FUN_1464129ba(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ab2c920;
  return;
}



// FUNCTION 1464129ea FUN_1464129ea body=55 status=ok
// SIG undefined FUN_1464129ea(void)

void FUN_1464129ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11ea8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11ea8 = FUN_140002ddd(FUN_146412a21,uVar1,L"ActivatedCells");
  }
  return;
}



// FUNCTION 146412a21 FUN_146412a21 body=47 status=ok
// SIG undefined FUN_146412a21(void)

longlong FUN_146412a21(void)

{
  if (DAT_14cb11ea0 == 0) {
    FUN_14086a14e(&DAT_14cb11ea0,&PTR_FUN_14ab27890);
  }
  return DAT_14cb11ea0;
}



// FUNCTION 146412a50 FUN_146412a50 body=48 status=ok
// SIG undefined FUN_146412a50(void)

void FUN_146412a50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a0;
  *puVar1 = &PTR_FUN_14ab2ca90;
  return;
}



// FUNCTION 146412a80 FUN_146412a80 body=55 status=ok
// SIG undefined FUN_146412a80(void)

void FUN_146412a80(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11ec0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11ec0 = FUN_140002ddd(FUN_146412ab7,uVar1,L"WorldPartitionUpdateStreamingTargetState");
  }
  return;
}



// FUNCTION 146412ab7 FUN_146412ab7 body=49 status=ok
// SIG undefined FUN_146412ab7(void)

longlong FUN_146412ab7(void)

{
  if (DAT_14cb11eb8 == 0) {
    FUN_14086a14e(&DAT_14cb11eb8,&PTR_FUN_14ab27bb0);
  }
  return DAT_14cb11eb8;
}



// FUNCTION 146412ae8 FUN_146412ae8 body=48 status=ok
// SIG undefined FUN_146412ae8(void)

void FUN_146412ae8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14ab2cbf0;
  return;
}



// FUNCTION 146412b18 FUN_146412b18 body=55 status=ok
// SIG undefined FUN_146412b18(void)

void FUN_146412b18(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11ed8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11ed8 = FUN_140002ddd(FUN_146412b4f,uVar1,L"WorldPartitionUpdateStreamingCurrentState");
  }
  return;
}



// FUNCTION 146412b4f FUN_146412b4f body=49 status=ok
// SIG undefined FUN_146412b4f(void)

longlong FUN_146412b4f(void)

{
  if (DAT_14cb11ed0 == 0) {
    FUN_14086a14e(&DAT_14cb11ed0,&PTR_FUN_14ab27d48);
  }
  return DAT_14cb11ed0;
}



// FUNCTION 146412b80 FUN_146412b80 body=48 status=ok
// SIG undefined FUN_146412b80(void)

void FUN_146412b80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000100;
  *puVar1 = &PTR_FUN_14ab2cd50;
  return;
}



// FUNCTION 146412bc0 FUN_146412bc0 body=55 status=ok
// SIG undefined FUN_146412bc0(void)

void FUN_146412bc0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb11fe0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb11fe0 = FUN_140002ddd(FUN_146412bf7,uVar1,L"StreamingSourceShape");
  }
  return;
}



// FUNCTION 146412bf7 FUN_146412bf7 body=49 status=ok
// SIG undefined FUN_146412bf7(void)

longlong FUN_146412bf7(void)

{
  if (DAT_14cb11fd8 == 0) {
    FUN_14086a14e(&DAT_14cb11fd8,&PTR_FUN_14ab29000);
  }
  return DAT_14cb11fd8;
}



// FUNCTION 146412c28 FUN_146412c28 body=48 status=ok
// SIG undefined FUN_146412c28(void)

void FUN_146412c28(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14ab2ceb0;
  return;
}



// FUNCTION 146412c58 FUN_146412c58 body=47 status=ok
// SIG undefined FUN_146412c58(void)

longlong FUN_146412c58(void)

{
  if (DAT_14cb11ff0 == 0) {
    FUN_1409ce572(&DAT_14cb11ff0,&PTR_FUN_14ab29080);
  }
  return DAT_14cb11ff0;
}



// FUNCTION 146412c87 FUN_146412c87 body=47 status=ok
// SIG undefined FUN_146412c87(void)

longlong FUN_146412c87(void)

{
  if (DAT_14cb12008 == 0) {
    FUN_1409ce572(&DAT_14cb12008,&PTR_FUN_14ab290f0);
  }
  return DAT_14cb12008;
}



// FUNCTION 146412cb6 FUN_146412cb6 body=55 status=ok
// SIG undefined FUN_146412cb6(void)

void FUN_146412cb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12028 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb12028 = FUN_140002ddd(FUN_146412ced,uVar1,L"WorldPartitionStreamingQuerySource");
  }
  return;
}



// FUNCTION 146412ced FUN_146412ced body=47 status=ok
// SIG undefined FUN_146412ced(void)

longlong FUN_146412ced(void)

{
  if (DAT_14cb12020 == 0) {
    FUN_14086a14e(&DAT_14cb12020,&PTR_FUN_14ab29390);
  }
  return DAT_14cb12020;
}



// FUNCTION 146412d1c FUN_146412d1c body=48 status=ok
// SIG undefined FUN_146412d1c(void)

void FUN_146412d1c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000108;
  *puVar1 = &PTR_FUN_14ab2d140;
  return;
}



// FUNCTION 146412d4c FUN_146412d4c body=49 status=ok
// SIG undefined FUN_146412d4c(void)

longlong FUN_146412d4c(void)

{
  if (DAT_14cb12038 == 0) {
    FUN_1409ce572(&DAT_14cb12038,&PTR_FUN_14ab29450);
  }
  return DAT_14cb12038;
}



// FUNCTION 146412d7d FUN_146412d7d body=47 status=ok
// SIG undefined FUN_146412d7d(void)

longlong FUN_146412d7d(void)

{
  if (DAT_14cb12088 == 0) {
    FUN_14073dd9a(&DAT_14cb12088,&PTR_LAB_14ab29db0);
  }
  return DAT_14cb12088;
}



// FUNCTION 146412dac FUN_146412dac body=47 status=ok
// SIG undefined FUN_146412dac(void)

longlong FUN_146412dac(void)

{
  if (DAT_14cb12070 == 0) {
    FUN_14000fc22(&DAT_14cb12070,&PTR_FUN_14ab29aa0);
  }
  return DAT_14cb12070;
}



// FUNCTION 146412ddb FUN_146412ddb body=47 status=ok
// SIG undefined FUN_146412ddb(void)

longlong FUN_146412ddb(void)

{
  if (DAT_14cb12078 == 0) {
    FUN_14000fc22(&DAT_14cb12078,&PTR_FUN_14ab29cc0);
  }
  return DAT_14cb12078;
}



// FUNCTION 146412e0a FUN_146412e0a body=34 status=ok
// SIG undefined FUN_146412e0a(void)

void FUN_146412e0a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14011c7bc();
  FUN_14069c8d6(uVar1,&PTR_s_IsAllStreamingCompleted_14ab29d00,2);
  return;
}



// FUNCTION 146412e32 FUN_146412e32 body=187 status=ok
// SIG undefined FUN_146412e32(void)

void FUN_146412e32(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_144a126be();
  FUN_145c35d62(&DAT_14cb121c0,param_1,uVar2);
  lVar3 = FUN_144a126be(param_1);
  FUN_140457ffc(lVar3 + 0x570,param_1);
  lVar3 = FUN_144a126be(param_1);
  FUN_140457ffc(lVar3 + 0x588,param_1);
  lVar3 = FUN_144a126be(param_1);
  bVar1 = *(byte *)(lVar3 + 0x152);
  if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
    FUN_140457ffc(&DAT_14cb0a8e8,param_1);
    FUN_140457ffc(&DAT_14cb0a900,param_1);
    FUN_140457ffc(&DAT_14cb0a918,param_1);
    FUN_140457ffc(&DAT_14cb0a930,param_1);
  }
  FUN_1413e1940(param_1);
  return;
}



// FUNCTION 146412eee FUN_146412eee body=34 status=ok
// SIG undefined FUN_146412eee(void)

byte FUN_146412eee(undefined8 param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = FUN_14110c842();
  return bVar1 | param_2 == 7 | param_2 == 4;
}



// FUNCTION 146412f10 FUN_146412f10 body=35 status=ok
// SIG undefined FUN_146412f10(void)

void FUN_146412f10(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1405ba846(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab2b350;
  return;
}



// FUNCTION 146412f33 FUN_146412f33 body=47 status=ok
// SIG undefined FUN_146412f33(void)

longlong FUN_146412f33(void)

{
  if (DAT_14cb12210 == 0) {
    FUN_14073dd9a(&DAT_14cb12210,&PTR_LAB_14ab2b308);
  }
  return DAT_14cb12210;
}



// FUNCTION 146412f62 FUN_146412f62 body=238 status=ok
// SIG undefined FUN_146412f62(void)

undefined8
FUN_146412f62(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_d8,param_2);
  local_b0 = param_5;
  local_b8 = param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d0 = param_1;
  local_c8 = param_3;
  local_c0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146413052 FUN_146413052 body=38 status=ok
// SIG undefined FUN_146413052(void)

void FUN_146413052(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  FUN_1447f69b6(lVar1 + 2000);
  *(byte *)(lVar1 + 0x155) = *(byte *)(lVar1 + 0x155) | 2;
  return;
}



// FUNCTION 146413078 FUN_146413078 body=501 status=ok
// SIG undefined FUN_146413078(void)

void FUN_146413078(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_58,L"PauserPlayerState",1);
  uVar1 = FUN_14059e8cc();
  FUN_14059e8cc();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"TimeDilation",1);
  uVar1 = FUN_14059e8cc();
  FUN_14059e8cc();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"CinematicTimeDilation",1);
  uVar1 = FUN_14059e8cc();
  FUN_14059e8cc();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"WorldGravityZ",1);
  uVar1 = FUN_14059e8cc();
  FUN_14059e8cc();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"bHighPriorityLoading",1);
  uVar1 = FUN_14059e8cc();
  FUN_14059e8cc();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = CONCAT71(uStack_50._1_7_,1);
  local_68 = L"NaniteSettings";
  local_60 = 0x10000000d;
  FUN_140c2c993(&local_68,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14641326e FUN_14641326e body=164 status=ok
// SIG undefined FUN_14641326e(void)

undefined8 * FUN_14641326e(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x39d) & 0x10) == 0) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  FUN_14475cc44(param_1 + 0x3a8,&local_38);
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_28 = local_38;
  local_20 = local_30 + -1;
  if (local_30 == 0) {
    local_20 = 0;
  }
  FUN_14475bf92(param_2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146413316 FUN_146413316 body=40 status=ok
// SIG undefined FUN_146413316(void)

undefined8 FUN_146413316(undefined8 param_1,int param_2)

{
  thunk_FUN_1402d9b92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641333e FUN_14641333e body=40 status=ok
// SIG undefined FUN_14641333e(void)

undefined8 FUN_14641333e(undefined8 param_1,int param_2)

{
  FUN_1402d9bec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146413366 FUN_146413366 body=40 status=ok
// SIG undefined FUN_146413366(void)

undefined8 FUN_146413366(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641338e FUN_14641338e body=40 status=ok
// SIG undefined FUN_14641338e(void)

undefined8 FUN_14641338e(undefined8 param_1,int param_2)

{
  FUN_145a58c2e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464133b6 FUN_1464133b6 body=40 status=ok
// SIG undefined FUN_1464133b6(void)

undefined8 FUN_1464133b6(undefined8 param_1,int param_2)

{
  FUN_1457c0e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464133de FUN_1464133de body=70 status=ok
// SIG undefined FUN_1464133de(void)

undefined8 * FUN_1464133de(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab26060;
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146413424 FUN_146413424 body=40 status=ok
// SIG undefined FUN_146413424(void)

undefined8 FUN_146413424(undefined8 param_1,int param_2)

{
  FUN_1458927b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641344c FUN_14641344c body=40 status=ok
// SIG undefined FUN_14641344c(void)

undefined8 FUN_14641344c(undefined8 param_1,int param_2)

{
  thunk_FUN_1402d9b92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146413474 FUN_146413474 body=29 status=ok
// SIG undefined FUN_146413474(void)

undefined8 FUN_146413474(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146413492 FUN_146413492 body=29 status=ok
// SIG undefined FUN_146413492(void)

undefined8 FUN_146413492(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464134b0 FUN_1464134b0 body=29 status=ok
// SIG undefined FUN_1464134b0(void)

undefined8 FUN_1464134b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464134ce FUN_1464134ce body=29 status=ok
// SIG undefined FUN_1464134ce(void)

undefined8 FUN_1464134ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464134ec FUN_1464134ec body=29 status=ok
// SIG undefined FUN_1464134ec(void)

undefined8 FUN_1464134ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641350a FUN_14641350a body=29 status=ok
// SIG undefined FUN_14641350a(void)

undefined8 FUN_14641350a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146413528 FUN_146413528 body=29 status=ok
// SIG undefined FUN_146413528(void)

undefined8 FUN_146413528(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146413546 FUN_146413546 body=29 status=ok
// SIG undefined FUN_146413546(void)

undefined8 FUN_146413546(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146413564 FUN_146413564 body=29 status=ok
// SIG undefined FUN_146413564(void)

undefined8 FUN_146413564(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146413582 FUN_146413582 body=29 status=ok
// SIG undefined FUN_146413582(void)

undefined8 FUN_146413582(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464135a0 FUN_1464135a0 body=29 status=ok
// SIG undefined FUN_1464135a0(void)

undefined8 FUN_1464135a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464135be FUN_1464135be body=29 status=ok
// SIG undefined FUN_1464135be(void)

undefined8 FUN_1464135be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464135dc FUN_1464135dc body=29 status=ok
// SIG undefined FUN_1464135dc(void)

undefined8 FUN_1464135dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464135fa FUN_1464135fa body=29 status=ok
// SIG undefined FUN_1464135fa(void)

undefined8 FUN_1464135fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146413618 FUN_146413618 body=29 status=ok
// SIG undefined FUN_146413618(void)

undefined8 FUN_146413618(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146413636 FUN_146413636 body=24 status=ok
// SIG undefined FUN_146413636(void)

bool FUN_146413636(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14641364e FUN_14641364e body=29 status=ok
// SIG undefined FUN_14641364e(void)

bool FUN_14641364e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14641366c FUN_14641366c body=26 status=ok
// SIG undefined FUN_14641366c(void)

bool FUN_14641366c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146413686 FUN_146413686 body=24 status=ok
// SIG undefined FUN_146413686(void)

bool FUN_146413686(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14641369e FUN_14641369e body=29 status=ok
// SIG undefined FUN_14641369e(void)

bool FUN_14641369e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1464136bc FUN_1464136bc body=26 status=ok
// SIG undefined FUN_1464136bc(void)

bool FUN_1464136bc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1464136d6 FUN_1464136d6 body=24 status=ok
// SIG undefined FUN_1464136d6(void)

bool FUN_1464136d6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1464136ee FUN_1464136ee body=29 status=ok
// SIG undefined FUN_1464136ee(void)

bool FUN_1464136ee(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14641370c FUN_14641370c body=24 status=ok
// SIG undefined FUN_14641370c(void)

bool FUN_14641370c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146413724 FUN_146413724 body=26 status=ok
// SIG undefined FUN_146413724(void)

bool FUN_146413724(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14641373e FUN_14641373e body=24 status=ok
// SIG undefined FUN_14641373e(void)

bool FUN_14641373e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146413756 FUN_146413756 body=101 status=ok
// SIG undefined FUN_146413756(void)

void FUN_146413756(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bc3e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab2dc10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1464137bc FUN_1464137bc body=181 status=ok
// SIG undefined FUN_1464137bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1464137bc(void)

{
  if ((DAT_14cb123bf & 2) == 0) {
    DAT_14cb123bf = DAT_14cb123bf | 2;
    _DAT_14cb12360 = L"FSubstrateOperator";
    _DAT_14cb12378 = FUN_146826540;
    _DAT_14cb12380 = FUN_146825d77;
    _DAT_14cb12388 = FUN_146825fd6;
    _DAT_14cb12390 = FUN_1407e02ea;
    _DAT_14cb12398 = FUN_146826273;
    _DAT_14cb12370 = &LAB_147dd9996;
    _DAT_14cb123b0 = 0xffffffff00000001;
    _DAT_14cb123b8 = 1;
    DAT_14cb123bc = 0;
    _DAT_14cb123a0 = &LAB_147dd999a;
    FUN_1407e00cc(&DAT_14cb12358);
    return;
  }
  return;
}



// FUNCTION 146413872 FUN_146413872 body=181 status=ok
// SIG undefined FUN_146413872(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146413872(void)

{
  if ((DAT_14cb1242f & 2) == 0) {
    DAT_14cb1242f = DAT_14cb1242f | 2;
    _DAT_14cb123d0 = L"FSubstrateRegisteredSharedLocalBasis";
    _DAT_14cb123e8 = FUN_146826540;
    _DAT_14cb123f0 = FUN_146825d77;
    _DAT_14cb123f8 = FUN_146825fd6;
    _DAT_14cb12400 = FUN_1407e02ea;
    _DAT_14cb12408 = FUN_146826273;
    _DAT_14cb123e0 = &LAB_147dd999e;
    _DAT_14cb12420 = 0xffffffff00000001;
    _DAT_14cb12428 = 1;
    DAT_14cb1242c = 0;
    _DAT_14cb12410 = &LAB_147dd99a2;
    FUN_1407e00cc(&DAT_14cb123c8);
    return;
  }
  return;
}



// FUNCTION 146413928 FUN_146413928 body=192 status=ok
// SIG undefined FUN_146413928(void)

void FUN_146413928(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ab2e5e0;
  puVar1[3] = &DAT_14cb124c8;
  puVar1[4] = FUN_1459a6298;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464139ea FUN_1464139ea body=93 status=ok
// SIG undefined FUN_1464139ea(void)

void FUN_1464139ea(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab2e5e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146413a48 FUN_146413a48 body=29 status=ok
// SIG undefined FUN_146413a48(void)

undefined8 FUN_146413a48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146413a66 FUN_146413a66 body=202 status=ok
// SIG undefined FUN_146413a66(void)

undefined8 * FUN_146413a66(void)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb124d8) {
    FUN_144b3d300(&DAT_14cb124d8);
    if (DAT_14cb124d8 == -1) {
      puVar1 = (undefined8 *)FUN_14494321d(0xe0);
      FUN_1457bbea4(puVar1);
      *puVar1 = &PTR_FUN_14ab2e1a0;
      memset(puVar1 + 1,0,0x88);
      *(undefined2 *)(puVar1 + 0x12) = 0x101;
      puVar1[0x13] = 0;
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
      puVar1[0x16] = 0;
      puVar1[0x17] = 0;
      puVar1[0x18] = 0;
      puVar1[0x19] = 0;
      puVar1[0x1a] = 0;
      *(undefined1 *)(puVar1 + 0x1b) = 0;
      DAT_14cb124d0 = puVar1;
      atexit((_func_5014 *)&LAB_1437c4ac9);
      _Init_thread_footer(&DAT_14cb124d8);
    }
  }
  return DAT_14cb124d0;
}



// FUNCTION 146413b30 FUN_146413b30 body=192 status=ok
// SIG undefined FUN_146413b30(void)

void FUN_146413b30(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ab2e6b0;
  puVar1[3] = &DAT_14cb124dc;
  puVar1[4] = FUN_147ddddb6;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146413bf2 FUN_146413bf2 body=93 status=ok
// SIG undefined FUN_146413bf2(void)

void FUN_146413bf2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab2e6b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146413c50 FUN_146413c50 body=55 status=ok
// SIG undefined FUN_146413c50(void)

void FUN_146413c50(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12500 == 0) {
    uVar1 = FUN_141022ab4();
    DAT_14cb12500 = FUN_140002ddd(FUN_146413c87,uVar1,L"StructSerializerNumericTestStruct");
  }
  return;
}



// FUNCTION 146413c87 FUN_146413c87 body=47 status=ok
// SIG undefined FUN_146413c87(void)

longlong FUN_146413c87(void)

{
  if (DAT_14cb124f8 == 0) {
    FUN_14086a14e(&DAT_14cb124f8,&PTR_FUN_14ab2ec28);
  }
  return DAT_14cb124f8;
}



// FUNCTION 146413cb6 FUN_146413cb6 body=48 status=ok
// SIG undefined FUN_146413cb6(void)

void FUN_146413cb6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14ab32060;
  return;
}



// FUNCTION 146413ce6 FUN_146413ce6 body=55 status=ok
// SIG undefined FUN_146413ce6(void)

void FUN_146413ce6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12518 == 0) {
    uVar1 = FUN_141022ab4();
    DAT_14cb12518 = FUN_140002ddd(FUN_146413d1d,uVar1,L"StructSerializerBooleanTestStruct");
  }
  return;
}



// FUNCTION 146413d1d FUN_146413d1d body=47 status=ok
// SIG undefined FUN_146413d1d(void)

longlong FUN_146413d1d(void)

{
  if (DAT_14cb12510 == 0) {
    FUN_14086a14e(&DAT_14cb12510,&PTR_FUN_14ab2f038);
  }
  return DAT_14cb12510;
}



// FUNCTION 146413d4c FUN_146413d4c body=48 status=ok
// SIG undefined FUN_146413d4c(void)

void FUN_146413d4c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000003;
  *puVar1 = &PTR_FUN_14ab321c0;
  return;
}



// FUNCTION 146413d7c FUN_146413d7c body=55 status=ok
// SIG undefined FUN_146413d7c(void)

void FUN_146413d7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12530 == 0) {
    uVar1 = FUN_141022ab4();
    DAT_14cb12530 = FUN_140002ddd(FUN_146413db3,uVar1,L"StructSerializerObjectTestStruct");
  }
  return;
}



// FUNCTION 146413db3 FUN_146413db3 body=47 status=ok
// SIG undefined FUN_146413db3(void)

longlong FUN_146413db3(void)

{
  if (DAT_14cb12528 == 0) {
    FUN_14086a14e(&DAT_14cb12528,&PTR_FUN_14ab2f428);
  }
  return DAT_14cb12528;
}



// FUNCTION 146413de2 FUN_146413de2 body=48 status=ok
// SIG undefined FUN_146413de2(void)

void FUN_146413de2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000c0;
  *puVar1 = &PTR_FUN_14ab32320;
  return;
}



// FUNCTION 146413e12 FUN_146413e12 body=55 status=ok
// SIG undefined FUN_146413e12(void)

void FUN_146413e12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12548 == 0) {
    uVar1 = FUN_141022ab4();
    DAT_14cb12548 = FUN_140002ddd(FUN_146413e49,uVar1,L"StructSerializerBuiltinTestStruct");
  }
  return;
}



// FUNCTION 146413e49 FUN_146413e49 body=49 status=ok
// SIG undefined FUN_146413e49(void)

longlong FUN_146413e49(void)

{
  if (DAT_14cb12540 == 0) {
    FUN_14086a14e(&DAT_14cb12540,&PTR_FUN_14ab2f7e0);
  }
  return DAT_14cb12540;
}



// FUNCTION 146413e7a FUN_146413e7a body=48 status=ok
// SIG undefined FUN_146413e7a(void)

void FUN_146413e7a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000d0;
  *puVar1 = &PTR_FUN_14ab32480;
  return;
}



// FUNCTION 146413eaa FUN_146413eaa body=55 status=ok
// SIG undefined FUN_146413eaa(void)

void FUN_146413eaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12560 == 0) {
    uVar1 = FUN_141022ab4();
    DAT_14cb12560 = FUN_140002ddd(FUN_146413ee1,uVar1,L"StructSerializerLWCTypesTest");
  }
  return;
}



// FUNCTION 146413ee1 FUN_146413ee1 body=47 status=ok
// SIG undefined FUN_146413ee1(void)

longlong FUN_146413ee1(void)

{
  if (DAT_14cb12558 == 0) {
    FUN_14086a14e(&DAT_14cb12558,&PTR_FUN_14ab2fe78);
  }
  return DAT_14cb12558;
}



// FUNCTION 146413f10 FUN_146413f10 body=48 status=ok
// SIG undefined FUN_146413f10(void)

void FUN_146413f10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000360;
  *puVar1 = &PTR_FUN_14ab32620;
  return;
}



// FUNCTION 146413f40 FUN_146413f40 body=55 status=ok
// SIG undefined FUN_146413f40(void)

void FUN_146413f40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12578 == 0) {
    uVar1 = FUN_141022ab4();
    DAT_14cb12578 = FUN_140002ddd(FUN_146413f77,uVar1,L"OrientedBoxFloat");
  }
  return;
}



// FUNCTION 146413f77 FUN_146413f77 body=47 status=ok
// SIG undefined FUN_146413f77(void)

longlong FUN_146413f77(void)

{
  if (DAT_14cb12570 == 0) {
    FUN_14086a14e(&DAT_14cb12570,&PTR_FUN_14ab300d0);
  }
  return DAT_14cb12570;
}



// FUNCTION 146413fa6 FUN_146413fa6 body=48 status=ok
// SIG undefined FUN_146413fa6(void)

void FUN_146413fa6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000003c;
  *puVar1 = &PTR_FUN_14ab327a0;
  return;
}



// FUNCTION 146413fd6 FUN_146413fd6 body=55 status=ok
// SIG undefined FUN_146413fd6(void)

void FUN_146413fd6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12590 == 0) {
    uVar1 = FUN_141022ab4();
    DAT_14cb12590 = FUN_140002ddd(FUN_14641400d,uVar1,L"StructSerializerNonLWCTypesTest");
  }
  return;
}



// FUNCTION 14641400d FUN_14641400d body=47 status=ok
// SIG undefined FUN_14641400d(void)

longlong FUN_14641400d(void)

{
  if (DAT_14cb12588 == 0) {
    FUN_14086a14e(&DAT_14cb12588,&PTR_FUN_14ab30728);
  }
  return DAT_14cb12588;
}



// FUNCTION 14641403c FUN_14641403c body=48 status=ok
// SIG undefined FUN_14641403c(void)

void FUN_14641403c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000220;
  *puVar1 = &PTR_FUN_14ab32910;
  return;
}



// FUNCTION 14641406c FUN_14641406c body=55 status=ok
// SIG undefined FUN_14641406c(void)

void FUN_14641406c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb125a8 == 0) {
    uVar1 = FUN_141022ab4();
    DAT_14cb125a8 = FUN_140002ddd(FUN_1464140a3,uVar1,L"StructSerializerByteArray");
  }
  return;
}



// FUNCTION 1464140a3 FUN_1464140a3 body=47 status=ok
// SIG undefined FUN_1464140a3(void)

longlong FUN_1464140a3(void)

{
  if (DAT_14cb125a0 == 0) {
    FUN_14086a14e(&DAT_14cb125a0,&PTR_FUN_14ab309a8);
  }
  return DAT_14cb125a0;
}



// FUNCTION 1464140d2 FUN_1464140d2 body=48 status=ok
// SIG undefined FUN_1464140d2(void)

void FUN_1464140d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14ab32a70;
  return;
}



// FUNCTION 146414102 FUN_146414102 body=55 status=ok
// SIG undefined FUN_146414102(void)

void FUN_146414102(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb125c0 == 0) {
    uVar1 = FUN_141022ab4();
    DAT_14cb125c0 = FUN_140002ddd(FUN_146414139,uVar1,L"StructSerializerArrayTestStruct");
  }
  return;
}



// FUNCTION 146414139 FUN_146414139 body=47 status=ok
// SIG undefined FUN_146414139(void)

longlong FUN_146414139(void)

{
  if (DAT_14cb125b8 == 0) {
    FUN_14086a14e(&DAT_14cb125b8,&PTR_FUN_14ab30d78);
  }
  return DAT_14cb125b8;
}



// FUNCTION 146414168 FUN_146414168 body=48 status=ok
// SIG undefined FUN_146414168(void)

void FUN_146414168(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14ab32bd0;
  return;
}



// FUNCTION 146414198 FUN_146414198 body=55 status=ok
// SIG undefined FUN_146414198(void)

void FUN_146414198(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb125d8 == 0) {
    uVar1 = FUN_141022ab4();
    DAT_14cb125d8 = FUN_140002ddd(FUN_1464141cf,uVar1,L"StructSerializerMapTestStruct");
  }
  return;
}



// FUNCTION 1464141cf FUN_1464141cf body=47 status=ok
// SIG undefined FUN_1464141cf(void)

longlong FUN_1464141cf(void)

{
  if (DAT_14cb125d0 == 0) {
    FUN_14086a14e(&DAT_14cb125d0,&PTR_FUN_14ab31180);
  }
  return DAT_14cb125d0;
}



// FUNCTION 1464141fe FUN_1464141fe body=48 status=ok
// SIG undefined FUN_1464141fe(void)

void FUN_1464141fe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000140;
  *puVar1 = &PTR_FUN_14ab32d30;
  return;
}



// FUNCTION 14641422e FUN_14641422e body=55 status=ok
// SIG undefined FUN_14641422e(void)

void FUN_14641422e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb125f0 == 0) {
    uVar1 = FUN_141022ab4();
    DAT_14cb125f0 = FUN_140002ddd(FUN_146414265,uVar1,L"StructSerializerSetTestStruct");
  }
  return;
}



// FUNCTION 146414265 FUN_146414265 body=47 status=ok
// SIG undefined FUN_146414265(void)

longlong FUN_146414265(void)

{
  if (DAT_14cb125e8 == 0) {
    FUN_14086a14e(&DAT_14cb125e8,&PTR_FUN_14ab31450);
  }
  return DAT_14cb125e8;
}



// FUNCTION 146414294 FUN_146414294 body=48 status=ok
// SIG undefined FUN_146414294(void)

void FUN_146414294(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000140;
  *puVar1 = &PTR_FUN_14ab32ef0;
  return;
}



// FUNCTION 1464142c4 FUN_1464142c4 body=55 status=ok
// SIG undefined FUN_1464142c4(void)

void FUN_1464142c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12608 == 0) {
    uVar1 = FUN_141022ab4();
    DAT_14cb12608 = FUN_140002ddd(FUN_1464142fb,uVar1,L"StructSerializerOptionalTestStruct");
  }
  return;
}



// FUNCTION 1464142fb FUN_1464142fb body=47 status=ok
// SIG undefined FUN_1464142fb(void)

longlong FUN_1464142fb(void)

{
  if (DAT_14cb12600 == 0) {
    FUN_14086a14e(&DAT_14cb12600,&PTR_FUN_14ab319a8);
  }
  return DAT_14cb12600;
}



// FUNCTION 14641432a FUN_14641432a body=48 status=ok
// SIG undefined FUN_14641432a(void)

void FUN_14641432a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000200;
  *puVar1 = &PTR_FUN_14ab33080;
  return;
}



// FUNCTION 14641435a FUN_14641435a body=55 status=ok
// SIG undefined FUN_14641435a(void)

void FUN_14641435a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12620 == 0) {
    uVar1 = FUN_141022ab4();
    DAT_14cb12620 = FUN_140002ddd(FUN_146414391,uVar1,L"StructSerializerTestStruct");
  }
  return;
}



// FUNCTION 146414391 FUN_146414391 body=47 status=ok
// SIG undefined FUN_146414391(void)

longlong FUN_146414391(void)

{
  if (DAT_14cb12618 == 0) {
    FUN_14086a14e(&DAT_14cb12618,&PTR_FUN_14ab31d28);
  }
  return DAT_14cb12618;
}



// FUNCTION 1464143c0 FUN_1464143c0 body=48 status=ok
// SIG undefined FUN_1464143c0(void)

void FUN_1464143c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000a10;
  *puVar1 = &PTR_FUN_14ab33210;
  return;
}



// FUNCTION 1464143f0 FUN_1464143f0 body=192 status=ok
// SIG undefined FUN_1464143f0(void)

void FUN_1464143f0(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ab33380;
  puVar1[3] = &DAT_14cb12644;
  puVar1[4] = FUN_147ded9d0;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464144b2 FUN_1464144b2 body=29 status=ok
// SIG undefined FUN_1464144b2(void)

undefined8 FUN_1464144b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464144d0 FUN_1464144d0 body=29 status=ok
// SIG undefined FUN_1464144d0(void)

undefined8 FUN_1464144d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464144ee FUN_1464144ee body=29 status=ok
// SIG undefined FUN_1464144ee(void)

undefined8 FUN_1464144ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641450c FUN_14641450c body=29 status=ok
// SIG undefined FUN_14641450c(void)

undefined8 FUN_14641450c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641452a FUN_14641452a body=29 status=ok
// SIG undefined FUN_14641452a(void)

undefined8 FUN_14641452a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146414548 FUN_146414548 body=29 status=ok
// SIG undefined FUN_146414548(void)

undefined8 FUN_146414548(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146414566 FUN_146414566 body=29 status=ok
// SIG undefined FUN_146414566(void)

undefined8 FUN_146414566(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146414584 FUN_146414584 body=29 status=ok
// SIG undefined FUN_146414584(void)

undefined8 FUN_146414584(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464145a2 FUN_1464145a2 body=29 status=ok
// SIG undefined FUN_1464145a2(void)

undefined8 FUN_1464145a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464145c0 FUN_1464145c0 body=29 status=ok
// SIG undefined FUN_1464145c0(void)

undefined8 FUN_1464145c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464145de FUN_1464145de body=29 status=ok
// SIG undefined FUN_1464145de(void)

undefined8 FUN_1464145de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464145fc FUN_1464145fc body=29 status=ok
// SIG undefined FUN_1464145fc(void)

undefined8 FUN_1464145fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641461a FUN_14641461a body=29 status=ok
// SIG undefined FUN_14641461a(void)

undefined8 FUN_14641461a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146414638 FUN_146414638 body=93 status=ok
// SIG undefined FUN_146414638(void)

void FUN_146414638(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab33380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146414695 FUN_146414695 body=47 status=ok
// SIG undefined FUN_146414695(void)

longlong FUN_146414695(void)

{
  if (DAT_14cb126b8 == 0) {
    FUN_14086a14e(&DAT_14cb126b8,&PTR_FUN_14ab336a0);
  }
  return DAT_14cb126b8;
}



// FUNCTION 1464146c4 FUN_1464146c4 body=43 status=ok
// SIG undefined FUN_1464146c4(void)

void FUN_1464146c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14ab34300;
  return;
}



// FUNCTION 1464146ef FUN_1464146ef body=35 status=ok
// SIG undefined FUN_1464146ef(void)

void FUN_1464146ef(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab33750;
  return;
}



// FUNCTION 146414712 FUN_146414712 body=47 status=ok
// SIG undefined FUN_146414712(void)

longlong FUN_146414712(void)

{
  if (DAT_14cb126d8 == 0) {
    FUN_14073dd9a(&DAT_14cb126d8,&PTR_LAB_14ab33708);
  }
  return DAT_14cb126d8;
}



// FUNCTION 146414741 FUN_146414741 body=42 status=ok
// SIG undefined FUN_146414741(void)

void FUN_146414741(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab33b70;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 146414771 FUN_146414771 body=47 status=ok
// SIG undefined FUN_146414771(void)

longlong FUN_146414771(void)

{
  if (DAT_14cb126f0 == 0) {
    FUN_14073dd9a(&DAT_14cb126f0,&PTR_LAB_14ab33b28);
  }
  return DAT_14cb126f0;
}



// FUNCTION 1464147a5 FUN_1464147a5 body=79 status=ok
// SIG undefined FUN_1464147a5(void)

void FUN_1464147a5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab34020;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return;
}



// FUNCTION 1464147f4 FUN_1464147f4 body=47 status=ok
// SIG undefined FUN_1464147f4(void)

longlong FUN_1464147f4(void)

{
  if (DAT_14cb12708 == 0) {
    FUN_14073dd9a(&DAT_14cb12708,&PTR_LAB_14ab33fd8);
  }
  return DAT_14cb12708;
}



// FUNCTION 14641482a FUN_14641482a body=192 status=ok
// SIG undefined FUN_14641482a(void)

void FUN_14641482a(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ab34470;
  puVar1[3] = &DAT_14cb12718;
  puVar1[4] = FUN_1459a62c2;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1464148ec FUN_1464148ec body=40 status=ok
// SIG undefined FUN_1464148ec(void)

undefined8 FUN_1464148ec(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146414914 FUN_146414914 body=34 status=ok
// SIG undefined FUN_146414914(void)

undefined8 FUN_146414914(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146414936 FUN_146414936 body=93 status=ok
// SIG undefined FUN_146414936(void)

void FUN_146414936(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab34470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146414994 FUN_146414994 body=34 status=ok
// SIG undefined FUN_146414994(void)

undefined8 FUN_146414994(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1464149b6 FUN_1464149b6 body=326 status=ok
// SIG undefined FUN_1464149b6(void)

undefined8 * FUN_1464149b6(undefined8 *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb12798 == 0) {
    if ((DAT_14cb127a0 == '\0') && (1 < DAT_14c872cf0)) {
      local_28 = (undefined2 *)0x0;
      uStack_20 = 0;
      local_38 = &DAT_14c872ce8;
      FUN_1449da20c(DAT_14c872ce0,L"InstallBundleManager",L"ModuleName",&local_28);
      uVar3 = FUN_144a52528();
      puVar4 = local_28;
      if ((int)uStack_20 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      cVar2 = FUN_1457f751e(uVar3,puVar4,0);
      if (cVar2 != '\0') {
        puVar4 = local_28;
        if ((int)uStack_20 == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        FUN_1446f470e(&local_30,puVar4,1);
        uVar3 = FUN_144a52528();
        DAT_14cb12798 = FUN_1405f3750(uVar3,local_30,0);
      }
      DAT_14cb127a0 = '\x01';
      if (local_28 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (DAT_14cb12798 != 0) goto LAB_146414a99;
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
LAB_146414a99:
    lVar1 = DAT_14cb12798;
    *param_1 = *(undefined8 *)(DAT_14cb12798 + 8);
    lVar1 = *(longlong *)(lVar1 + 0x10);
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146414afe FUN_146414afe body=192 status=ok
// SIG undefined FUN_146414afe(void)

void FUN_146414afe(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ab34670;
  puVar1[3] = &DAT_14cb127a1;
  puVar1[4] = FUN_147deef4e;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146414bc0 FUN_146414bc0 body=93 status=ok
// SIG undefined FUN_146414bc0(void)

void FUN_146414bc0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab34670;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146414c1d FUN_146414c1d body=47 status=ok
// SIG undefined FUN_146414c1d(void)

longlong FUN_146414c1d(void)

{
  if (DAT_14cb127d0 == 0) {
    FUN_1409ce572(&DAT_14cb127d0,&PTR_FUN_14ab34780);
  }
  return DAT_14cb127d0;
}



// FUNCTION 146414c4c FUN_146414c4c body=48 status=ok
// SIG undefined FUN_146414c4c(void)

void FUN_146414c4c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14ab38060;
  return;
}



// FUNCTION 146414c7c FUN_146414c7c body=55 status=ok
// SIG undefined FUN_146414c7c(void)

void FUN_146414c7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12808 == 0) {
    uVar1 = FUN_14125ebb0();
    DAT_14cb12808 = FUN_140002ddd(FUN_146414cb3,uVar1,L"ClothConfig_Legacy");
  }
  return;
}



// FUNCTION 146414cb3 FUN_146414cb3 body=47 status=ok
// SIG undefined FUN_146414cb3(void)

longlong FUN_146414cb3(void)

{
  if (DAT_14cb12800 == 0) {
    FUN_14086a14e(&DAT_14cb12800,&PTR_FUN_14ab352c8);
  }
  return DAT_14cb12800;
}



// FUNCTION 146414ce2 FUN_146414ce2 body=48 status=ok
// SIG undefined FUN_146414ce2(void)

void FUN_146414ce2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000130;
  *puVar1 = &PTR_FUN_14ab381c0;
  return;
}



// FUNCTION 146414d12 FUN_146414d12 body=47 status=ok
// SIG undefined FUN_146414d12(void)

longlong FUN_146414d12(void)

{
  if (DAT_14cb12830 == 0) {
    FUN_1409ce572(&DAT_14cb12830,&PTR_FUN_14ab35480);
  }
  return DAT_14cb12830;
}



// FUNCTION 146414d42 FUN_146414d42 body=55 status=ok
// SIG undefined FUN_146414d42(void)

void FUN_146414d42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12850 == 0) {
    uVar1 = FUN_14125ebb0();
    DAT_14cb12850 = FUN_140002ddd(FUN_146414d79,uVar1,L"PointWeightMap");
  }
  return;
}



// FUNCTION 146414d79 FUN_146414d79 body=47 status=ok
// SIG undefined FUN_146414d79(void)

longlong FUN_146414d79(void)

{
  if (DAT_14cb12848 == 0) {
    FUN_14086a14e(&DAT_14cb12848,&PTR_FUN_14ab35560);
  }
  return DAT_14cb12848;
}



// FUNCTION 146414da8 FUN_146414da8 body=48 status=ok
// SIG undefined FUN_146414da8(void)

void FUN_146414da8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14ab38450;
  return;
}



// FUNCTION 146414dd8 FUN_146414dd8 body=47 status=ok
// SIG undefined FUN_146414dd8(void)

longlong FUN_146414dd8(void)

{
  if (DAT_14cb12860 == 0) {
    FUN_1409ce572(&DAT_14cb12860,&PTR_FUN_14ab35640);
  }
  return DAT_14cb12860;
}



// FUNCTION 146414e07 FUN_146414e07 body=32 status=ok
// SIG undefined FUN_146414e07(void)

void FUN_146414e07(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_1400841f8(param_1);
  *param_1 = &PTR_FUN_14ab35700;
  return;
}



// FUNCTION 146414e27 FUN_146414e27 body=49 status=ok
// SIG undefined FUN_146414e27(void)

longlong FUN_146414e27(void)

{
  if (DAT_14cb12880 == 0) {
    FUN_14073dd9a(&DAT_14cb12880,&PTR_LAB_14ab356b8);
  }
  return DAT_14cb12880;
}



// FUNCTION 146414e58 FUN_146414e58 body=32 status=ok
// SIG undefined FUN_146414e58(void)

void FUN_146414e58(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_1400841f8(param_1);
  *param_1 = &PTR_FUN_14ab35a80;
  return;
}



// FUNCTION 146414e78 FUN_146414e78 body=47 status=ok
// SIG undefined FUN_146414e78(void)

longlong FUN_146414e78(void)

{
  if (DAT_14cb12898 == 0) {
    FUN_14073dd9a(&DAT_14cb12898,&PTR_LAB_14ab35a38);
  }
  return DAT_14cb12898;
}



// FUNCTION 146414ea7 FUN_146414ea7 body=35 status=ok
// SIG undefined FUN_146414ea7(void)

void FUN_146414ea7(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab35e80;
  return;
}



// FUNCTION 146414eca FUN_146414eca body=47 status=ok
// SIG undefined FUN_146414eca(void)

longlong FUN_146414eca(void)

{
  if (DAT_14cb128c0 == 0) {
    FUN_14073dd9a(&DAT_14cb128c0,&PTR_LAB_14ab35e38);
  }
  return DAT_14cb128c0;
}



// FUNCTION 146414ef9 FUN_146414ef9 body=47 status=ok
// SIG undefined FUN_146414ef9(void)

longlong FUN_146414ef9(void)

{
  if (DAT_14cb12940 == 0) {
    FUN_14086a14e(&DAT_14cb12940,&PTR_FUN_14ab37088);
  }
  return DAT_14cb12940;
}



// FUNCTION 146414f28 FUN_146414f28 body=47 status=ok
// SIG undefined FUN_146414f28(void)

longlong FUN_146414f28(void)

{
  if (DAT_14cb128d8 == 0) {
    FUN_14073dd9a(&DAT_14cb128d8,&PTR_LAB_14ab36538);
  }
  return DAT_14cb128d8;
}



// FUNCTION 146414f58 FUN_146414f58 body=192 status=ok
// SIG undefined FUN_146414f58(void)

void FUN_146414f58(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ab38dc0;
  puVar1[3] = &DAT_14cb12938;
  puVar1[4] = FUN_147dfa2c4;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14641501a FUN_14641501a body=55 status=ok
// SIG undefined FUN_14641501a(void)

void FUN_14641501a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12948 == 0) {
    uVar1 = FUN_14125ebb0();
    DAT_14cb12948 = FUN_140002ddd(FUN_146414ef9,uVar1,L"ClothLODDataCommon");
  }
  return;
}



// FUNCTION 146415051 FUN_146415051 body=49 status=ok
// SIG undefined FUN_146415051(void)

longlong FUN_146415051(void)

{
  if (DAT_14cb12988 == 0) {
    FUN_14086a14e(&DAT_14cb12988,&PTR_FUN_14ab37e48);
  }
  return DAT_14cb12988;
}



// FUNCTION 146415082 FUN_146415082 body=48 status=ok
// SIG undefined FUN_146415082(void)

void FUN_146415082(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000158;
  *puVar1 = &PTR_FUN_14ab38640;
  return;
}



// FUNCTION 1464150b2 FUN_1464150b2 body=55 status=ok
// SIG undefined FUN_1464150b2(void)

void FUN_1464150b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12960 == 0) {
    uVar1 = FUN_14125ebb0();
    DAT_14cb12960 = FUN_140002ddd(FUN_1464150e9,uVar1,L"ClothParameterMask_Legacy");
  }
  return;
}



// FUNCTION 1464150e9 FUN_1464150e9 body=47 status=ok
// SIG undefined FUN_1464150e9(void)

longlong FUN_1464150e9(void)

{
  if (DAT_14cb12958 == 0) {
    FUN_14086a14e(&DAT_14cb12958,&PTR_FUN_14ab37370);
  }
  return DAT_14cb12958;
}



// FUNCTION 146415118 FUN_146415118 body=48 status=ok
// SIG undefined FUN_146415118(void)

void FUN_146415118(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14ab387b0;
  return;
}



// FUNCTION 146415148 FUN_146415148 body=47 status=ok
// SIG undefined FUN_146415148(void)

longlong FUN_146415148(void)

{
  if (DAT_14cb12978 == 0) {
    FUN_14073dd9a(&DAT_14cb12978,&PTR_LAB_14ab37508);
  }
  return DAT_14cb12978;
}



// FUNCTION 146415178 FUN_146415178 body=55 status=ok
// SIG undefined FUN_146415178(void)

void FUN_146415178(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12990 == 0) {
    uVar1 = FUN_14125ebb0();
    DAT_14cb12990 = FUN_140002ddd(FUN_146415051,uVar1,L"ClothPhysicalMeshData");
  }
  return;
}



// FUNCTION 1464151af FUN_1464151af body=49 status=ok
// SIG undefined FUN_1464151af(void)

longlong FUN_1464151af(void)

{
  if (DAT_14cb129a0 == 0) {
    FUN_14086a14e(&DAT_14cb129a0,&PTR_FUN_14ab37ed8);
  }
  return DAT_14cb129a0;
}



// FUNCTION 1464151e0 FUN_1464151e0 body=48 status=ok
// SIG undefined FUN_1464151e0(void)

void FUN_1464151e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000128;
  *puVar1 = &PTR_FUN_14ab38910;
  return;
}



// FUNCTION 146415210 FUN_146415210 body=55 status=ok
// SIG undefined FUN_146415210(void)

void FUN_146415210(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb129a8 == 0) {
    uVar1 = FUN_14125ebb0();
    DAT_14cb129a8 = FUN_140002ddd(FUN_1464151af,uVar1,L"ClothTetherData");
  }
  return;
}



// FUNCTION 146415248 FUN_146415248 body=48 status=ok
// SIG undefined FUN_146415248(void)

void FUN_146415248(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14ab38a80;
  return;
}



// FUNCTION 146415278 FUN_146415278 body=40 status=ok
// SIG undefined FUN_146415278(void)

undefined8 FUN_146415278(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464152a0 FUN_1464152a0 body=40 status=ok
// SIG undefined FUN_1464152a0(void)

undefined8 FUN_1464152a0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464152c8 FUN_1464152c8 body=40 status=ok
// SIG undefined FUN_1464152c8(void)

undefined8 FUN_1464152c8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464152f0 FUN_1464152f0 body=29 status=ok
// SIG undefined FUN_1464152f0(void)

undefined8 FUN_1464152f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641530e FUN_14641530e body=29 status=ok
// SIG undefined FUN_14641530e(void)

undefined8 FUN_14641530e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641532c FUN_14641532c body=29 status=ok
// SIG undefined FUN_14641532c(void)

undefined8 FUN_14641532c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14641534a FUN_14641534a body=29 status=ok
// SIG undefined FUN_14641534a(void)

undefined8 FUN_14641534a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146415368 FUN_146415368 body=29 status=ok
// SIG undefined FUN_146415368(void)

undefined8 FUN_146415368(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146415386 FUN_146415386 body=29 status=ok
// SIG undefined FUN_146415386(void)

undefined8 FUN_146415386(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464153a4 FUN_1464153a4 body=29 status=ok
// SIG undefined FUN_1464153a4(void)

undefined8 FUN_1464153a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1464153c2 FUN_1464153c2 body=93 status=ok
// SIG undefined FUN_1464153c2(void)

void FUN_1464153c2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab38dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14641541f FUN_14641541f body=49 status=ok
// SIG undefined FUN_14641541f(void)

longlong FUN_14641541f(void)

{
  if (DAT_14cb129d0 == 0) {
    FUN_14086a14e(&DAT_14cb129d0,&PTR_FUN_14ab39048);
  }
  return DAT_14cb129d0;
}



// FUNCTION 146415450 FUN_146415450 body=43 status=ok
// SIG undefined FUN_146415450(void)

void FUN_146415450(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14ab3ad10;
  return;
}



// FUNCTION 14641547b FUN_14641547b body=47 status=ok
// SIG undefined FUN_14641547b(void)

longlong FUN_14641547b(void)

{
  if (DAT_14cb129e8 == 0) {
    FUN_1409ce572(&DAT_14cb129e8,&PTR_FUN_14ab390c0);
  }
  return DAT_14cb129e8;
}



// FUNCTION 1464154aa FUN_1464154aa body=47 status=ok
// SIG undefined FUN_1464154aa(void)

longlong FUN_1464154aa(void)

{
  if (DAT_14cb12a08 == 0) {
    FUN_14073dd9a(&DAT_14cb12a08,&PTR_LAB_14ab39ab8);
  }
  return DAT_14cb12a08;
}



// FUNCTION 1464154d9 FUN_1464154d9 body=47 status=ok
// SIG undefined FUN_1464154d9(void)

longlong FUN_1464154d9(void)

{
  if (DAT_14cb12a30 == 0) {
    FUN_14073dd9a(&DAT_14cb12a30,&PTR_LAB_14ab39ef8);
  }
  return DAT_14cb12a30;
}



// FUNCTION 146415508 FUN_146415508 body=47 status=ok
// SIG undefined FUN_146415508(void)

longlong FUN_146415508(void)

{
  if (DAT_14cb12a50 == 0) {
    FUN_14073dd9a(&DAT_14cb12a50,&PTR_LAB_14ab3a370);
  }
  return DAT_14cb12a50;
}



// FUNCTION 146415537 FUN_146415537 body=47 status=ok
// SIG undefined FUN_146415537(void)

longlong FUN_146415537(void)

{
  if (DAT_14cb12a40 == 0) {
    FUN_14000fc22(&DAT_14cb12a40,&PTR_FUN_14ab3a2a8);
  }
  return DAT_14cb12a40;
}



// FUNCTION 146415566 FUN_146415566 body=34 status=ok
// SIG undefined FUN_146415566(void)

void FUN_146415566(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a73c9a();
  FUN_14069c8d6(uVar1,&PTR_s_SetAnimDriveDamperStiffness_14ab3a2f0,1);
  return;
}



// FUNCTION 146415588 FUN_146415588 body=35 status=ok
// SIG undefined FUN_146415588(void)

void FUN_146415588(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e622d8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab3a3b0;
  return;
}



// FUNCTION 1464155ac FUN_1464155ac body=192 status=ok
// SIG undefined FUN_1464155ac(void)

void FUN_1464155ac(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14ab3aef0;
  puVar1[3] = &DAT_14cb12a60;
  puVar1[4] = FUN_145a1f336;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14641566e FUN_14641566e body=45 status=ok
// SIG undefined FUN_14641566e(void)

void FUN_14641566e(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1448c2e86();
                    /* WARNING: Could not recover jumptable at 0x000146415698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,DAT_14c99d400,param_1 + 0x10,*(code **)(*plVar1 + 0x28));
  return;
}



// FUNCTION 14641569c FUN_14641569c body=45 status=ok
// SIG undefined FUN_14641569c(void)

void FUN_14641569c(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1448c2e86();
                    /* WARNING: Could not recover jumptable at 0x0001464156c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,DAT_14c99d400,param_1 + 0x10,*(code **)(*plVar1 + 0x30));
  return;
}



// FUNCTION 1464156c9 FUN_1464156c9 body=47 status=ok
// SIG undefined FUN_1464156c9(void)

longlong FUN_1464156c9(void)

{
  if (DAT_14cb12a70 == 0) {
    FUN_14073dd9a(&DAT_14cb12a70,&PTR_LAB_14ab3a9f8);
  }
  return DAT_14cb12a70;
}



// FUNCTION 1464156f8 FUN_1464156f8 body=40 status=ok
// SIG undefined FUN_1464156f8(void)

undefined8 FUN_1464156f8(undefined8 param_1,int param_2)

{
  FUN_140da201a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146415720 FUN_146415720 body=34 status=ok
// SIG undefined FUN_146415720(void)

undefined8 FUN_146415720(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146415742 FUN_146415742 body=34 status=ok
// SIG undefined FUN_146415742(void)

undefined8 FUN_146415742(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146415764 FUN_146415764 body=93 status=ok
// SIG undefined FUN_146415764(void)

void FUN_146415764(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ab3aef0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1464157c1 FUN_1464157c1 body=47 status=ok
// SIG undefined FUN_1464157c1(void)

longlong FUN_1464157c1(void)

{
  if (DAT_14cb12a98 == 0) {
    FUN_14086a14e(&DAT_14cb12a98,&PTR_FUN_14ab3b040);
  }
  return DAT_14cb12a98;
}



// FUNCTION 1464157f0 FUN_1464157f0 body=43 status=ok
// SIG undefined FUN_1464157f0(void)

void FUN_1464157f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14ab3b790;
  return;
}



// FUNCTION 14641581c FUN_14641581c body=55 status=ok
// SIG undefined FUN_14641581c(void)

void FUN_14641581c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12ab8 == 0) {
    uVar1 = FUN_145d88f29();
    DAT_14cb12ab8 = FUN_140002ddd(FUN_146415853,uVar1,L"SessionServicePong");
  }
  return;
}



// FUNCTION 146415853 FUN_146415853 body=47 status=ok
// SIG undefined FUN_146415853(void)

longlong FUN_146415853(void)

{
  if (DAT_14cb12ab0 == 0) {
    FUN_14086a14e(&DAT_14cb12ab0,&PTR_FUN_14ab3b378);
  }
  return DAT_14cb12ab0;
}



// FUNCTION 146415882 FUN_146415882 body=43 status=ok
// SIG undefined FUN_146415882(void)

void FUN_146415882(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14ab3b8f0;
  return;
}



// FUNCTION 1464158ae FUN_1464158ae body=55 status=ok
// SIG undefined FUN_1464158ae(void)

void FUN_1464158ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12ad0 == 0) {
    uVar1 = FUN_145d88f29();
    DAT_14cb12ad0 = FUN_140002ddd(FUN_1464158e5,uVar1,L"SessionServiceLog");
  }
  return;
}



// FUNCTION 1464158e5 FUN_1464158e5 body=47 status=ok
// SIG undefined FUN_1464158e5(void)

longlong FUN_1464158e5(void)

{
  if (DAT_14cb12ac8 == 0) {
    FUN_14086a14e(&DAT_14cb12ac8,&PTR_FUN_14ab3b540);
  }
  return DAT_14cb12ac8;
}



// FUNCTION 146415914 FUN_146415914 body=43 status=ok
// SIG undefined FUN_146415914(void)

void FUN_146415914(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14ab3ba50;
  return;
}



// FUNCTION 146415940 FUN_146415940 body=55 status=ok
// SIG undefined FUN_146415940(void)

void FUN_146415940(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb12ae8 == 0) {
    uVar1 = FUN_145d88f29();
    DAT_14cb12ae8 = FUN_140002ddd(FUN_146415977,uVar1,L"SessionServiceLogSubscribe");
  }
  return;
}


