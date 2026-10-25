// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1462aab36 FUN_1462aab36 body=34 status=ok
// SIG undefined FUN_1462aab36(void)

undefined8 FUN_1462aab36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462aab58 FUN_1462aab58 body=34 status=ok
// SIG undefined FUN_1462aab58(void)

undefined8 FUN_1462aab58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462aab7a FUN_1462aab7a body=34 status=ok
// SIG undefined FUN_1462aab7a(void)

undefined8 FUN_1462aab7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462aab9c FUN_1462aab9c body=34 status=ok
// SIG undefined FUN_1462aab9c(void)

undefined8 FUN_1462aab9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462aabbe FUN_1462aabbe body=34 status=ok
// SIG undefined FUN_1462aabbe(void)

undefined8 FUN_1462aabbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462aabe0 FUN_1462aabe0 body=34 status=ok
// SIG undefined FUN_1462aabe0(void)

undefined8 FUN_1462aabe0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462aac02 FUN_1462aac02 body=34 status=ok
// SIG undefined FUN_1462aac02(void)

undefined8 FUN_1462aac02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462aac24 FUN_1462aac24 body=34 status=ok
// SIG undefined FUN_1462aac24(void)

undefined8 FUN_1462aac24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462aac46 FUN_1462aac46 body=34 status=ok
// SIG undefined FUN_1462aac46(void)

undefined8 FUN_1462aac46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462aac68 FUN_1462aac68 body=34 status=ok
// SIG undefined FUN_1462aac68(void)

undefined8 FUN_1462aac68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462aac8a FUN_1462aac8a body=34 status=ok
// SIG undefined FUN_1462aac8a(void)

undefined8 FUN_1462aac8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462aacac FUN_1462aacac body=34 status=ok
// SIG undefined FUN_1462aacac(void)

undefined8 FUN_1462aacac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462aacce FUN_1462aacce body=151 status=ok
// SIG undefined FUN_1462aacce(void)

undefined8 * FUN_1462aacce(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78 [9];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar4 = (undefined8 *)(param_1 + 0x18);
  puVar2 = local_78;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  }
  *param_2 = 0;
  *(undefined2 *)(param_2 + 4) = 0x48;
  puVar2 = (undefined8 *)FUN_14001cc68(0x48,0);
  param_2[1] = puVar2;
  puVar4 = local_78;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar2 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)(param_2 + 5) = 0xf;
  uVar1 = 0xf;
  if ((DAT_14c9a95f4 & 0x20) != 0) {
    uVar1 = 0;
  }
  *(undefined1 *)(param_2 + 6) = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1462aad66 FUN_1462aad66 body=34 status=ok
// SIG undefined FUN_1462aad66(void)

undefined8 FUN_1462aad66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462aad88 FUN_1462aad88 body=55 status=ok
// SIG undefined FUN_1462aad88(void)

void FUN_1462aad88(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4d88 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4d88 = FUN_140002ddd(FUN_1462aadbf,uVar1,L"GbxBlackboardEntryDefault");
  }
  return;
}



// FUNCTION 1462aadbf FUN_1462aadbf body=47 status=ok
// SIG undefined FUN_1462aadbf(void)

longlong FUN_1462aadbf(void)

{
  if (DAT_14c9a4d80 == 0) {
    FUN_14086a14e(&DAT_14c9a4d80,&PTR_FUN_14a1a0cf8);
  }
  return DAT_14c9a4d80;
}



// FUNCTION 1462aadee FUN_1462aadee body=47 status=ok
// SIG undefined FUN_1462aadee(void)

longlong FUN_1462aadee(void)

{
  if (DAT_14c9a4de0 == 0) {
    FUN_14086a14e(&DAT_14c9a4de0,&PTR_FUN_14a1a1338);
  }
  return DAT_14c9a4de0;
}



// FUNCTION 1462aae1e FUN_1462aae1e body=48 status=ok
// SIG undefined FUN_1462aae1e(void)

void FUN_1462aae1e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14a1a7050;
  return;
}



// FUNCTION 1462aae4e FUN_1462aae4e body=55 status=ok
// SIG undefined FUN_1462aae4e(void)

void FUN_1462aae4e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4da0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4da0 = FUN_140002ddd(FUN_1462aae85,uVar1,L"GbxBlackboardDefaults");
  }
  return;
}



// FUNCTION 1462aae85 FUN_1462aae85 body=49 status=ok
// SIG undefined FUN_1462aae85(void)

longlong FUN_1462aae85(void)

{
  if (DAT_14c9a4d98 == 0) {
    FUN_14086a14e(&DAT_14c9a4d98,&PTR_FUN_14a1a0e08);
  }
  return DAT_14c9a4d98;
}



// FUNCTION 1462aaeb6 FUN_1462aaeb6 body=48 status=ok
// SIG undefined FUN_1462aaeb6(void)

void FUN_1462aaeb6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a1a71c0;
  return;
}



// FUNCTION 1462aaee6 FUN_1462aaee6 body=35 status=ok
// SIG undefined FUN_1462aaee6(void)

void FUN_1462aaee6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a1a0f30;
  return;
}



// FUNCTION 1462aaf0f FUN_1462aaf0f body=47 status=ok
// SIG undefined FUN_1462aaf0f(void)

longlong FUN_1462aaf0f(void)

{
  if (DAT_14c9a4db8 == 0) {
    FUN_14073dd9a(&DAT_14c9a4db8,&PTR_LAB_14a1a0ee8);
  }
  return DAT_14c9a4db8;
}



// FUNCTION 1462aaf3e FUN_1462aaf3e body=48 status=ok
// SIG undefined FUN_1462aaf3e(void)

void FUN_1462aaf3e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a1a7320;
  return;
}



// FUNCTION 1462aaf6e FUN_1462aaf6e body=55 status=ok
// SIG undefined FUN_1462aaf6e(void)

void FUN_1462aaf6e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4de8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4de8 = FUN_140002ddd(FUN_1462aadee,uVar1,L"GbxBlackboardExtensionSet");
  }
  return;
}



// FUNCTION 1462aafa6 FUN_1462aafa6 body=48 status=ok
// SIG undefined FUN_1462aafa6(void)

void FUN_1462aafa6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000004;
  *puVar1 = &PTR_FUN_14a1a7490;
  return;
}



// FUNCTION 1462aafd6 FUN_1462aafd6 body=47 status=ok
// SIG undefined FUN_1462aafd6(void)

longlong FUN_1462aafd6(void)

{
  if (DAT_14c9a4e10 == 0) {
    FUN_14073dd9a(&DAT_14c9a4e10,&PTR_LAB_14a1a14c0);
  }
  return DAT_14c9a4e10;
}



// FUNCTION 1462ab005 FUN_1462ab005 body=47 status=ok
// SIG undefined FUN_1462ab005(void)

longlong FUN_1462ab005(void)

{
  if (DAT_14c9a4e00 == 0) {
    FUN_14000fc22(&DAT_14c9a4e00,&PTR_FUN_14a1a1428);
  }
  return DAT_14c9a4e00;
}



// FUNCTION 1462ab034 FUN_1462ab034 body=35 status=ok
// SIG undefined FUN_1462ab034(void)

void FUN_1462ab034(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a1a1500;
  return;
}



// FUNCTION 1462ab062 FUN_1462ab062 body=55 status=ok
// SIG undefined FUN_1462ab062(void)

void FUN_1462ab062(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4e28 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4e28 = FUN_140002ddd(FUN_1462ab099,uVar1,L"GbxBlackboardOwnerContextResolver");
  }
  return;
}



// FUNCTION 1462ab099 FUN_1462ab099 body=47 status=ok
// SIG undefined FUN_1462ab099(void)

longlong FUN_1462ab099(void)

{
  if (DAT_14c9a4e20 == 0) {
    FUN_14086a14e(&DAT_14c9a4e20,&PTR_FUN_14a1a1830);
  }
  return DAT_14c9a4e20;
}



// FUNCTION 1462ab0c8 FUN_1462ab0c8 body=48 status=ok
// SIG undefined FUN_1462ab0c8(void)

void FUN_1462ab0c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14a1a7600;
  return;
}



// FUNCTION 1462ab0f8 FUN_1462ab0f8 body=55 status=ok
// SIG undefined FUN_1462ab0f8(void)

void FUN_1462ab0f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4e40 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4e40 = FUN_140002ddd(FUN_1462ab12f,uVar1,L"GbxBlackboardValueResolver");
  }
  return;
}



// FUNCTION 1462ab12f FUN_1462ab12f body=47 status=ok
// SIG undefined FUN_1462ab12f(void)

longlong FUN_1462ab12f(void)

{
  if (DAT_14c9a4e38 == 0) {
    FUN_14086a14e(&DAT_14c9a4e38,&PTR_FUN_14a1a1990);
  }
  return DAT_14c9a4e38;
}



// FUNCTION 1462ab15e FUN_1462ab15e body=48 status=ok
// SIG undefined FUN_1462ab15e(void)

void FUN_1462ab15e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14a1a7780;
  return;
}



// FUNCTION 1462ab18e FUN_1462ab18e body=47 status=ok
// SIG undefined FUN_1462ab18e(void)

longlong FUN_1462ab18e(void)

{
  if (DAT_14c9a4e68 == 0) {
    FUN_14073dd9a(&DAT_14c9a4e68,&PTR_LAB_14a1a1d30);
  }
  return DAT_14c9a4e68;
}



// FUNCTION 1462ab1bd FUN_1462ab1bd body=47 status=ok
// SIG undefined FUN_1462ab1bd(void)

longlong FUN_1462ab1bd(void)

{
  if (DAT_14c9a4e50 == 0) {
    FUN_14000fc22(&DAT_14c9a4e50,&PTR_FUN_14a1a1ae0);
  }
  return DAT_14c9a4e50;
}



// FUNCTION 1462ab1ec FUN_1462ab1ec body=47 status=ok
// SIG undefined FUN_1462ab1ec(void)

longlong FUN_1462ab1ec(void)

{
  if (DAT_14c9a4e58 == 0) {
    FUN_14000fc22(&DAT_14c9a4e58,&PTR_FUN_14a1a1c60);
  }
  return DAT_14c9a4e58;
}



// FUNCTION 1462ab21c FUN_1462ab21c body=34 status=ok
// SIG undefined FUN_1462ab21c(void)

void FUN_1462ab21c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a63e8c();
  FUN_14069c8d6(uVar1,&PTR_s_EmitBookmarkWithValue_14a1a1ca0,2);
  return;
}



// FUNCTION 1462ab23e FUN_1462ab23e body=35 status=ok
// SIG undefined FUN_1462ab23e(void)

void FUN_1462ab23e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a1a1d70;
  return;
}



// FUNCTION 1462ab262 FUN_1462ab262 body=55 status=ok
// SIG undefined FUN_1462ab262(void)

void FUN_1462ab262(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4e80 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4e80 = FUN_140002ddd(FUN_1462ab299,uVar1,L"GbxClosestPlayerValueResolver");
  }
  return;
}



// FUNCTION 1462ab299 FUN_1462ab299 body=47 status=ok
// SIG undefined FUN_1462ab299(void)

longlong FUN_1462ab299(void)

{
  if (DAT_14c9a4e78 == 0) {
    FUN_14086a14e(&DAT_14c9a4e78,&PTR_FUN_14a1a20e8);
  }
  return DAT_14c9a4e78;
}



// FUNCTION 1462ab2c8 FUN_1462ab2c8 body=48 status=ok
// SIG undefined FUN_1462ab2c8(void)

void FUN_1462ab2c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a1a7970;
  return;
}



// FUNCTION 1462ab2f8 FUN_1462ab2f8 body=35 status=ok
// SIG undefined FUN_1462ab2f8(void)

void FUN_1462ab2f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a1a21e0;
  return;
}



// FUNCTION 1462ab325 FUN_1462ab325 body=47 status=ok
// SIG undefined FUN_1462ab325(void)

longlong FUN_1462ab325(void)

{
  if (DAT_14c9a4e98 == 0) {
    FUN_14073dd9a(&DAT_14c9a4e98,&PTR_LAB_14a1a2198);
  }
  return DAT_14c9a4e98;
}



// FUNCTION 1462ab354 FUN_1462ab354 body=47 status=ok
// SIG undefined FUN_1462ab354(void)

longlong FUN_1462ab354(void)

{
  if (DAT_14c9a4ea8 == 0) {
    FUN_1409ce572(&DAT_14c9a4ea8,&PTR_FUN_14a1a2520);
  }
  return DAT_14c9a4ea8;
}



// FUNCTION 1462ab384 FUN_1462ab384 body=55 status=ok
// SIG undefined FUN_1462ab384(void)

void FUN_1462ab384(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4ec8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4ec8 = FUN_140002ddd(FUN_1462ab3bb,uVar1,L"GbxCompactPose");
  }
  return;
}



// FUNCTION 1462ab3bb FUN_1462ab3bb body=47 status=ok
// SIG undefined FUN_1462ab3bb(void)

longlong FUN_1462ab3bb(void)

{
  if (DAT_14c9a4ec0 == 0) {
    FUN_14086a14e(&DAT_14c9a4ec0,&PTR_FUN_14a1a26d8);
  }
  return DAT_14c9a4ec0;
}



// FUNCTION 1462ab3ea FUN_1462ab3ea body=48 status=ok
// SIG undefined FUN_1462ab3ea(void)

void FUN_1462ab3ea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a1a7c30;
  return;
}



// FUNCTION 1462ab41a FUN_1462ab41a body=55 status=ok
// SIG undefined FUN_1462ab41a(void)

void FUN_1462ab41a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4ee0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4ee0 = FUN_140002ddd(FUN_1462ab451,uVar1,L"AttributeConditionalValue");
  }
  return;
}



// FUNCTION 1462ab451 FUN_1462ab451 body=47 status=ok
// SIG undefined FUN_1462ab451(void)

longlong FUN_1462ab451(void)

{
  if (DAT_14c9a4ed8 == 0) {
    FUN_14086a14e(&DAT_14c9a4ed8,&PTR_FUN_14a1a2840);
  }
  return DAT_14c9a4ed8;
}



// FUNCTION 1462ab480 FUN_1462ab480 body=48 status=ok
// SIG undefined FUN_1462ab480(void)

void FUN_1462ab480(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14a1a7d90;
  return;
}



// FUNCTION 1462ab4b0 FUN_1462ab4b0 body=55 status=ok
// SIG undefined FUN_1462ab4b0(void)

void FUN_1462ab4b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4ef8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4ef8 = FUN_140002ddd(FUN_1462ab4e7,uVar1,L"GbxConditionalAttributeValueResolver");
  }
  return;
}



// FUNCTION 1462ab4e7 FUN_1462ab4e7 body=47 status=ok
// SIG undefined FUN_1462ab4e7(void)

longlong FUN_1462ab4e7(void)

{
  if (DAT_14c9a4ef0 == 0) {
    FUN_14086a14e(&DAT_14c9a4ef0,&PTR_FUN_14a1a2a28);
  }
  return DAT_14c9a4ef0;
}



// FUNCTION 1462ab516 FUN_1462ab516 body=48 status=ok
// SIG undefined FUN_1462ab516(void)

void FUN_1462ab516(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b8;
  *puVar1 = &PTR_FUN_14a1a7ef0;
  return;
}



// FUNCTION 1462ab546 FUN_1462ab546 body=55 status=ok
// SIG undefined FUN_1462ab546(void)

void FUN_1462ab546(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4f10 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4f10 = FUN_140002ddd(FUN_14173b9cd,uVar1,L"GbxConditionValueResolver");
  }
  return;
}



// FUNCTION 1462ab57e FUN_1462ab57e body=48 status=ok
// SIG undefined FUN_1462ab57e(void)

void FUN_1462ab57e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a1a80e0;
  return;
}



// FUNCTION 1462ab5ae FUN_1462ab5ae body=55 status=ok
// SIG undefined FUN_1462ab5ae(void)

void FUN_1462ab5ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4f28 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4f28 = FUN_140002ddd(FUN_1462ab5e5,uVar1,L"GbxCondition_AttributeEvaluatorList");
  }
  return;
}



// FUNCTION 1462ab5e5 FUN_1462ab5e5 body=47 status=ok
// SIG undefined FUN_1462ab5e5(void)

longlong FUN_1462ab5e5(void)

{
  if (DAT_14c9a4f20 == 0) {
    FUN_14086a14e(&DAT_14c9a4f20,&PTR_FUN_14a1a2cb8);
  }
  return DAT_14c9a4f20;
}



// FUNCTION 1462ab614 FUN_1462ab614 body=48 status=ok
// SIG undefined FUN_1462ab614(void)

void FUN_1462ab614(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a1a8380;
  return;
}



// FUNCTION 1462ab644 FUN_1462ab644 body=55 status=ok
// SIG undefined FUN_1462ab644(void)

void FUN_1462ab644(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4f40 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4f40 = FUN_140002ddd(FUN_1462ab67b,uVar1,L"GbxCondition_MeshViewFlag");
  }
  return;
}



// FUNCTION 1462ab67b FUN_1462ab67b body=47 status=ok
// SIG undefined FUN_1462ab67b(void)

longlong FUN_1462ab67b(void)

{
  if (DAT_14c9a4f38 == 0) {
    FUN_14086a14e(&DAT_14c9a4f38,&PTR_FUN_14a1a2e00);
  }
  return DAT_14c9a4f38;
}



// FUNCTION 1462ab6aa FUN_1462ab6aa body=48 status=ok
// SIG undefined FUN_1462ab6aa(void)

void FUN_1462ab6aa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a1a8580;
  return;
}



// FUNCTION 1462ab6da FUN_1462ab6da body=55 status=ok
// SIG undefined FUN_1462ab6da(void)

void FUN_1462ab6da(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4f58 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4f58 = FUN_140002ddd(FUN_1462ab711,uVar1,L"GbxCondition_Random");
  }
  return;
}



// FUNCTION 1462ab711 FUN_1462ab711 body=47 status=ok
// SIG undefined FUN_1462ab711(void)

longlong FUN_1462ab711(void)

{
  if (DAT_14c9a4f50 == 0) {
    FUN_14086a14e(&DAT_14c9a4f50,&PTR_FUN_14a1a2ef8);
  }
  return DAT_14c9a4f50;
}



// FUNCTION 1462ab740 FUN_1462ab740 body=48 status=ok
// SIG undefined FUN_1462ab740(void)

void FUN_1462ab740(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a1a8780;
  return;
}



// FUNCTION 1462ab770 FUN_1462ab770 body=55 status=ok
// SIG undefined FUN_1462ab770(void)

void FUN_1462ab770(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4f70 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4f70 = FUN_140002ddd(FUN_1462ab7a7,uVar1,L"GbxConstantAttributeValueResolver");
  }
  return;
}



// FUNCTION 1462ab7a7 FUN_1462ab7a7 body=47 status=ok
// SIG undefined FUN_1462ab7a7(void)

longlong FUN_1462ab7a7(void)

{
  if (DAT_14c9a4f68 == 0) {
    FUN_14086a14e(&DAT_14c9a4f68,&PTR_FUN_14a1a3020);
  }
  return DAT_14c9a4f68;
}



// FUNCTION 1462ab7d6 FUN_1462ab7d6 body=48 status=ok
// SIG undefined FUN_1462ab7d6(void)

void FUN_1462ab7d6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14a1a8980;
  return;
}



// FUNCTION 1462ab806 FUN_1462ab806 body=35 status=ok
// SIG undefined FUN_1462ab806(void)

void FUN_1462ab806(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a1a3130;
  return;
}



// FUNCTION 1462ab82f FUN_1462ab82f body=47 status=ok
// SIG undefined FUN_1462ab82f(void)

longlong FUN_1462ab82f(void)

{
  if (DAT_14c9a4f88 == 0) {
    FUN_14073dd9a(&DAT_14c9a4f88,&PTR_LAB_14a1a30e8);
  }
  return DAT_14c9a4f88;
}



// FUNCTION 1462ab85e FUN_1462ab85e body=47 status=ok
// SIG undefined FUN_1462ab85e(void)

longlong FUN_1462ab85e(void)

{
  if (DAT_14c9a4fa0 == 0) {
    FUN_14073dd9a(&DAT_14c9a4fa0,&PTR_LAB_14a1a3548);
  }
  return DAT_14c9a4fa0;
}



// FUNCTION 1462ab88d FUN_1462ab88d body=47 status=ok
// SIG undefined FUN_1462ab88d(void)

longlong FUN_1462ab88d(void)

{
  if (DAT_14c9a4fc8 == 0) {
    FUN_14073dd9a(&DAT_14c9a4fc8,&PTR_LAB_14a1a3b60);
  }
  return DAT_14c9a4fc8;
}



// FUNCTION 1462ab8bc FUN_1462ab8bc body=47 status=ok
// SIG undefined FUN_1462ab8bc(void)

longlong FUN_1462ab8bc(void)

{
  if (DAT_14c9a4fb0 == 0) {
    FUN_14000fc22(&DAT_14c9a4fb0,&PTR_FUN_14a1a3938);
  }
  return DAT_14c9a4fb0;
}



// FUNCTION 1462ab8eb FUN_1462ab8eb body=47 status=ok
// SIG undefined FUN_1462ab8eb(void)

longlong FUN_1462ab8eb(void)

{
  if (DAT_14c9a4fb8 == 0) {
    FUN_14000fc22(&DAT_14c9a4fb8,&PTR_FUN_14a1a3a78);
  }
  return DAT_14c9a4fb8;
}



// FUNCTION 1462ab91a FUN_1462ab91a body=34 status=ok
// SIG undefined FUN_1462ab91a(void)

void FUN_1462ab91a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a63f78();
  FUN_14069c8d6(uVar1,&PTR_s_Conv_DataTableValueHandleToStrin_14a1a3ac0,2);
  return;
}



// FUNCTION 1462ab93c FUN_1462ab93c body=35 status=ok
// SIG undefined FUN_1462ab93c(void)

void FUN_1462ab93c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a1a3ba0;
  return;
}



// FUNCTION 1462ab960 FUN_1462ab960 body=55 status=ok
// SIG undefined FUN_1462ab960(void)

void FUN_1462ab960(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4fe0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4fe0 = FUN_140002ddd(FUN_1462ab997,uVar1,L"GbxDataTableGameDataCategories_DONTUSE");
  }
  return;
}



// FUNCTION 1462ab997 FUN_1462ab997 body=47 status=ok
// SIG undefined FUN_1462ab997(void)

longlong FUN_1462ab997(void)

{
  if (DAT_14c9a4fd8 == 0) {
    FUN_14086a14e(&DAT_14c9a4fd8,&PTR_FUN_14a1a3ee0);
  }
  return DAT_14c9a4fd8;
}



// FUNCTION 1462ab9c6 FUN_1462ab9c6 body=48 status=ok
// SIG undefined FUN_1462ab9c6(void)

void FUN_1462ab9c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a1a8b70;
  return;
}



// FUNCTION 1462ab9f6 FUN_1462ab9f6 body=55 status=ok
// SIG undefined FUN_1462ab9f6(void)

void FUN_1462ab9f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a4ff8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a4ff8 = FUN_140002ddd(FUN_1462aba2d,uVar1,L"GbxDataTableValueResolver");
  }
  return;
}



// FUNCTION 1462aba2d FUN_1462aba2d body=47 status=ok
// SIG undefined FUN_1462aba2d(void)

longlong FUN_1462aba2d(void)

{
  if (DAT_14c9a4ff0 == 0) {
    FUN_14086a14e(&DAT_14c9a4ff0,&PTR_FUN_14a1a3fe8);
  }
  return DAT_14c9a4ff0;
}



// FUNCTION 1462aba5c FUN_1462aba5c body=48 status=ok
// SIG undefined FUN_1462aba5c(void)

void FUN_1462aba5c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14a1a8cd0;
  return;
}



// FUNCTION 1462aba8c FUN_1462aba8c body=55 status=ok
// SIG undefined FUN_1462aba8c(void)

void FUN_1462aba8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5018 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5018 = FUN_140002ddd(FUN_1462abac3,uVar1,L"GbxDef_GbxDefPtrEngineTest_StructRefs");
  }
  return;
}



// FUNCTION 1462abac3 FUN_1462abac3 body=47 status=ok
// SIG undefined FUN_1462abac3(void)

longlong FUN_1462abac3(void)

{
  if (DAT_14c9a5010 == 0) {
    FUN_14086a14e(&DAT_14c9a5010,&PTR_FUN_14a1a41c0);
  }
  return DAT_14c9a5010;
}



// FUNCTION 1462abaf2 FUN_1462abaf2 body=47 status=ok
// SIG undefined FUN_1462abaf2(void)

longlong FUN_1462abaf2(void)

{
  if (DAT_14c9a5028 == 0) {
    FUN_14086a14e(&DAT_14c9a5028,&PTR_FUN_14a1a42b0);
  }
  return DAT_14c9a5028;
}



// FUNCTION 1462abb22 FUN_1462abb22 body=48 status=ok
// SIG undefined FUN_1462abb22(void)

void FUN_1462abb22(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14a1a8ec0;
  return;
}



// FUNCTION 1462abb52 FUN_1462abb52 body=55 status=ok
// SIG undefined FUN_1462abb52(void)

void FUN_1462abb52(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5030 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5030 = FUN_140002ddd(FUN_1462abaf2,uVar1,L"GbxDef_GbxDefPtrEngineTest_SimpleStruct");
  }
  return;
}



// FUNCTION 1462abb8a FUN_1462abb8a body=48 status=ok
// SIG undefined FUN_1462abb8a(void)

void FUN_1462abb8a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a1a9040;
  return;
}



// FUNCTION 1462abbba FUN_1462abbba body=55 status=ok
// SIG undefined FUN_1462abbba(void)

void FUN_1462abbba(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5048 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5048 = FUN_140002ddd(FUN_1462abbf1,uVar1,L"GbxDef_GbxDefPtrEngineTest_InvalidStruct");
  }
  return;
}



// FUNCTION 1462abbf1 FUN_1462abbf1 body=47 status=ok
// SIG undefined FUN_1462abbf1(void)

longlong FUN_1462abbf1(void)

{
  if (DAT_14c9a5040 == 0) {
    FUN_14086a14e(&DAT_14c9a5040,&PTR_FUN_14a1a4368);
  }
  return DAT_14c9a5040;
}



// FUNCTION 1462abc20 FUN_1462abc20 body=48 status=ok
// SIG undefined FUN_1462abc20(void)

void FUN_1462abc20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a1a91c0;
  return;
}



// FUNCTION 1462abc50 FUN_1462abc50 body=55 status=ok
// SIG undefined FUN_1462abc50(void)

void FUN_1462abc50(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5060 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5060 =
         FUN_140002ddd(FUN_1462abc87,uVar1,L"GbxDef_GbxDefPtrEngineTest_InvalidSubStruct");
  }
  return;
}



// FUNCTION 1462abc87 FUN_1462abc87 body=47 status=ok
// SIG undefined FUN_1462abc87(void)

longlong FUN_1462abc87(void)

{
  if (DAT_14c9a5058 == 0) {
    FUN_14086a14e(&DAT_14c9a5058,&PTR_FUN_14a1a4428);
  }
  return DAT_14c9a5058;
}



// FUNCTION 1462abcb6 FUN_1462abcb6 body=48 status=ok
// SIG undefined FUN_1462abcb6(void)

void FUN_1462abcb6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a1a9320;
  return;
}



// FUNCTION 1462abce6 FUN_1462abce6 body=55 status=ok
// SIG undefined FUN_1462abce6(void)

void FUN_1462abce6(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5078 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5078 = FUN_140002ddd(FUN_1462abd1d,uVar1,L"GbxDef_IntegratedTest_Cook");
  }
  return;
}



// FUNCTION 1462abd1d FUN_1462abd1d body=47 status=ok
// SIG undefined FUN_1462abd1d(void)

longlong FUN_1462abd1d(void)

{
  if (DAT_14c9a5070 == 0) {
    FUN_14086a14e(&DAT_14c9a5070,&PTR_FUN_14a1a44d8);
  }
  return DAT_14c9a5070;
}



// FUNCTION 1462abd4c FUN_1462abd4c body=48 status=ok
// SIG undefined FUN_1462abd4c(void)

void FUN_1462abd4c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a1a9480;
  return;
}



// FUNCTION 1462abd7c FUN_1462abd7c body=47 status=ok
// SIG undefined FUN_1462abd7c(void)

longlong FUN_1462abd7c(void)

{
  if (DAT_14c9a5090 == 0) {
    FUN_14073dd9a(&DAT_14c9a5090,&PTR_LAB_14a1a4578);
  }
  return DAT_14c9a5090;
}



// FUNCTION 1462abdac FUN_1462abdac body=55 status=ok
// SIG undefined FUN_1462abdac(void)

void FUN_1462abdac(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a50a8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a50a8 = FUN_140002ddd(FUN_1462abde3,uVar1,L"SectorRange");
  }
  return;
}



// FUNCTION 1462abde3 FUN_1462abde3 body=47 status=ok
// SIG undefined FUN_1462abde3(void)

longlong FUN_1462abde3(void)

{
  if (DAT_14c9a50a0 == 0) {
    FUN_14086a14e(&DAT_14c9a50a0,&PTR_FUN_14a1a4760);
  }
  return DAT_14c9a50a0;
}



// FUNCTION 1462abe12 FUN_1462abe12 body=48 status=ok
// SIG undefined FUN_1462abe12(void)

void FUN_1462abe12(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14a1a9600;
  return;
}



// FUNCTION 1462abe42 FUN_1462abe42 body=55 status=ok
// SIG undefined FUN_1462abe42(void)

void FUN_1462abe42(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a50c0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a50c0 = FUN_140002ddd(FUN_1462abe79,uVar1,L"ManagedVector2D");
  }
  return;
}



// FUNCTION 1462abe79 FUN_1462abe79 body=47 status=ok
// SIG undefined FUN_1462abe79(void)

longlong FUN_1462abe79(void)

{
  if (DAT_14c9a50b8 == 0) {
    FUN_14086a14e(&DAT_14c9a50b8,&PTR_FUN_14a1a4870);
  }
  return DAT_14c9a50b8;
}



// FUNCTION 1462abea8 FUN_1462abea8 body=48 status=ok
// SIG undefined FUN_1462abea8(void)

void FUN_1462abea8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a1a9760;
  return;
}



// FUNCTION 1462abed8 FUN_1462abed8 body=55 status=ok
// SIG undefined FUN_1462abed8(void)

void FUN_1462abed8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a50d8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a50d8 = FUN_140002ddd(FUN_1462abf0f,uVar1,L"GbxDirectionNodePin");
  }
  return;
}



// FUNCTION 1462abf0f FUN_1462abf0f body=47 status=ok
// SIG undefined FUN_1462abf0f(void)

longlong FUN_1462abf0f(void)

{
  if (DAT_14c9a50d0 == 0) {
    FUN_14086a14e(&DAT_14c9a50d0,&PTR_FUN_14a1a49c0);
  }
  return DAT_14c9a50d0;
}



// FUNCTION 1462abf3e FUN_1462abf3e body=48 status=ok
// SIG undefined FUN_1462abf3e(void)

void FUN_1462abf3e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14a1a98c0;
  return;
}



// FUNCTION 1462abf6e FUN_1462abf6e body=42 status=ok
// SIG undefined FUN_1462abf6e(void)

void FUN_1462abf6e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a1a4b20;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1462abf9d FUN_1462abf9d body=47 status=ok
// SIG undefined FUN_1462abf9d(void)

longlong FUN_1462abf9d(void)

{
  if (DAT_14c9a50f0 == 0) {
    FUN_14073dd9a(&DAT_14c9a50f0,&PTR_LAB_14a1a4ad8);
  }
  return DAT_14c9a50f0;
}



// FUNCTION 1462abfcc FUN_1462abfcc body=55 status=ok
// SIG undefined FUN_1462abfcc(void)

void FUN_1462abfcc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5108 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5108 = FUN_140002ddd(FUN_1462ac003,uVar1,L"DirectionNodeSettingsConditional");
  }
  return;
}



// FUNCTION 1462ac003 FUN_1462ac003 body=47 status=ok
// SIG undefined FUN_1462ac003(void)

longlong FUN_1462ac003(void)

{
  if (DAT_14c9a5100 == 0) {
    FUN_14086a14e(&DAT_14c9a5100,&PTR_FUN_14a1a4f20);
  }
  return DAT_14c9a5100;
}



// FUNCTION 1462ac032 FUN_1462ac032 body=48 status=ok
// SIG undefined FUN_1462ac032(void)

void FUN_1462ac032(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14a1a9a20;
  return;
}



// FUNCTION 1462ac062 FUN_1462ac062 body=55 status=ok
// SIG undefined FUN_1462ac062(void)

void FUN_1462ac062(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5120 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5120 = FUN_140002ddd(FUN_1462ac099,uVar1,L"AnimNodeDirectionState");
  }
  return;
}



// FUNCTION 1462ac099 FUN_1462ac099 body=47 status=ok
// SIG undefined FUN_1462ac099(void)

longlong FUN_1462ac099(void)

{
  if (DAT_14c9a5118 == 0) {
    FUN_14086a14e(&DAT_14c9a5118,&PTR_FUN_14a1a4fa0);
  }
  return DAT_14c9a5118;
}



// FUNCTION 1462ac0c8 FUN_1462ac0c8 body=48 status=ok
// SIG undefined FUN_1462ac0c8(void)

void FUN_1462ac0c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a1a9b80;
  return;
}



// FUNCTION 1462ac0f8 FUN_1462ac0f8 body=55 status=ok
// SIG undefined FUN_1462ac0f8(void)

void FUN_1462ac0f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5138 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5138 = FUN_140002ddd(FUN_1462ac12f,uVar1,L"ActorDirectionNodeState");
  }
  return;
}



// FUNCTION 1462ac12f FUN_1462ac12f body=47 status=ok
// SIG undefined FUN_1462ac12f(void)

longlong FUN_1462ac12f(void)

{
  if (DAT_14c9a5130 == 0) {
    FUN_14086a14e(&DAT_14c9a5130,&PTR_FUN_14a1a5020);
  }
  return DAT_14c9a5130;
}



// FUNCTION 1462ac15e FUN_1462ac15e body=48 status=ok
// SIG undefined FUN_1462ac15e(void)

void FUN_1462ac15e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000110;
  *puVar1 = &PTR_FUN_14a1a9cf0;
  return;
}



// FUNCTION 1462ac18e FUN_1462ac18e body=55 status=ok
// SIG undefined FUN_1462ac18e(void)

void FUN_1462ac18e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5150 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5150 = FUN_140002ddd(FUN_1462ac1c5,uVar1,L"GbxEasingFunc");
  }
  return;
}



// FUNCTION 1462ac1c5 FUN_1462ac1c5 body=49 status=ok
// SIG undefined FUN_1462ac1c5(void)

longlong FUN_1462ac1c5(void)

{
  if (DAT_14c9a5148 == 0) {
    FUN_14086a14e(&DAT_14c9a5148,&PTR_FUN_14a1a5288);
  }
  return DAT_14c9a5148;
}



// FUNCTION 1462ac1f6 FUN_1462ac1f6 body=48 status=ok
// SIG undefined FUN_1462ac1f6(void)

void FUN_1462ac1f6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a1a9e50;
  return;
}



// FUNCTION 1462ac226 FUN_1462ac226 body=55 status=ok
// SIG undefined FUN_1462ac226(void)

void FUN_1462ac226(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5190 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5190 = FUN_140002ddd(FUN_1462ac25d,uVar1,L"GbxEngineAnimInstanceProxy");
  }
  return;
}



// FUNCTION 1462ac25d FUN_1462ac25d body=47 status=ok
// SIG undefined FUN_1462ac25d(void)

longlong FUN_1462ac25d(void)

{
  if (DAT_14c9a5188 == 0) {
    FUN_14086a14e(&DAT_14c9a5188,&PTR_FUN_14a1a53f0);
  }
  return DAT_14c9a5188;
}



// FUNCTION 1462ac292 FUN_1462ac292 body=48 status=ok
// SIG undefined FUN_1462ac292(void)

void FUN_1462ac292(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000970;
  *puVar1 = &PTR_FUN_14a1a9fc0;
  return;
}



// FUNCTION 1462ac2c2 FUN_1462ac2c2 body=49 status=ok
// SIG undefined FUN_1462ac2c2(void)

longlong FUN_1462ac2c2(void)

{
  if (DAT_14c9a51e0 == 0) {
    FUN_14073dd9a(&DAT_14c9a51e0,&PTR_LAB_14a1a5e00);
  }
  return DAT_14c9a51e0;
}



// FUNCTION 1462ac2f3 FUN_1462ac2f3 body=47 status=ok
// SIG undefined FUN_1462ac2f3(void)

longlong FUN_1462ac2f3(void)

{
  if (DAT_14c9a51a0 == 0) {
    FUN_14000fc22(&DAT_14c9a51a0,&PTR_FUN_14a1a5510);
  }
  return DAT_14c9a51a0;
}



// FUNCTION 1462ac322 FUN_1462ac322 body=47 status=ok
// SIG undefined FUN_1462ac322(void)

longlong FUN_1462ac322(void)

{
  if (DAT_14c9a51a8 == 0) {
    FUN_14000fc22(&DAT_14c9a51a8,&PTR_FUN_14a1a5630);
  }
  return DAT_14c9a51a8;
}



// FUNCTION 1462ac351 FUN_1462ac351 body=47 status=ok
// SIG undefined FUN_1462ac351(void)

longlong FUN_1462ac351(void)

{
  if (DAT_14c9a51b0 == 0) {
    FUN_14000fc22(&DAT_14c9a51b0,&PTR_FUN_14a1a5710);
  }
  return DAT_14c9a51b0;
}



// FUNCTION 1462ac380 FUN_1462ac380 body=47 status=ok
// SIG undefined FUN_1462ac380(void)

longlong FUN_1462ac380(void)

{
  if (DAT_14c9a51b8 == 0) {
    FUN_14000fc22(&DAT_14c9a51b8,&PTR_FUN_14a1a57f8);
  }
  return DAT_14c9a51b8;
}



// FUNCTION 1462ac3af FUN_1462ac3af body=47 status=ok
// SIG undefined FUN_1462ac3af(void)

longlong FUN_1462ac3af(void)

{
  if (DAT_14c9a51c0 == 0) {
    FUN_14000fc22(&DAT_14c9a51c0,&PTR_FUN_14a1a58d0);
  }
  return DAT_14c9a51c0;
}



// FUNCTION 1462ac3de FUN_1462ac3de body=47 status=ok
// SIG undefined FUN_1462ac3de(void)

longlong FUN_1462ac3de(void)

{
  if (DAT_14c9a51d0 == 0) {
    FUN_14000fc22(&DAT_14c9a51d0,&PTR_FUN_14a1a5950);
  }
  return DAT_14c9a51d0;
}



// FUNCTION 1462ac40e FUN_1462ac40e body=34 status=ok
// SIG undefined FUN_1462ac40e(void)

void FUN_1462ac40e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a73ef6();
  FUN_14069c8d6(uVar1,&PTR_s_GbxAllSlotsActive_14a1a5990,5);
  return;
}



// FUNCTION 1462ac443 FUN_1462ac443 body=47 status=ok
// SIG undefined FUN_1462ac443(void)

longlong FUN_1462ac443(void)

{
  if (DAT_14c9a51f0 == 0) {
    FUN_1409ce572(&DAT_14c9a51f0,&PTR_FUN_14a1a5ed0);
  }
  return DAT_14c9a51f0;
}



// FUNCTION 1462ac472 FUN_1462ac472 body=49 status=ok
// SIG undefined FUN_1462ac472(void)

longlong FUN_1462ac472(void)

{
  if (DAT_14c9a5258 == 0) {
    FUN_14073dd9a(&DAT_14c9a5258,&PTR_LAB_14a1a6a40);
  }
  return DAT_14c9a5258;
}



// FUNCTION 1462ac4a3 FUN_1462ac4a3 body=47 status=ok
// SIG undefined FUN_1462ac4a3(void)

longlong FUN_1462ac4a3(void)

{
  if (DAT_14c9a5208 == 0) {
    FUN_14000fc22(&DAT_14c9a5208,&PTR_FUN_14a1a5fa0);
  }
  return DAT_14c9a5208;
}



// FUNCTION 1462ac4d2 FUN_1462ac4d2 body=47 status=ok
// SIG undefined FUN_1462ac4d2(void)

longlong FUN_1462ac4d2(void)

{
  if (DAT_14c9a5210 == 0) {
    FUN_14000fc22(&DAT_14c9a5210,&PTR_FUN_14a1a5ff8);
  }
  return DAT_14c9a5210;
}



// FUNCTION 1462ac501 FUN_1462ac501 body=47 status=ok
// SIG undefined FUN_1462ac501(void)

longlong FUN_1462ac501(void)

{
  if (DAT_14c9a5218 == 0) {
    FUN_14000fc22(&DAT_14c9a5218,&PTR_FUN_14a1a6128);
  }
  return DAT_14c9a5218;
}



// FUNCTION 1462ac530 FUN_1462ac530 body=47 status=ok
// SIG undefined FUN_1462ac530(void)

longlong FUN_1462ac530(void)

{
  if (DAT_14c9a5220 == 0) {
    FUN_14000fc22(&DAT_14c9a5220,&PTR_FUN_14a1a6278);
  }
  return DAT_14c9a5220;
}



// FUNCTION 1462ac55f FUN_1462ac55f body=47 status=ok
// SIG undefined FUN_1462ac55f(void)

longlong FUN_1462ac55f(void)

{
  if (DAT_14c9a5228 == 0) {
    FUN_14000fc22(&DAT_14c9a5228,&PTR_FUN_14a1a6440);
  }
  return DAT_14c9a5228;
}



// FUNCTION 1462ac58e FUN_1462ac58e body=47 status=ok
// SIG undefined FUN_1462ac58e(void)

longlong FUN_1462ac58e(void)

{
  if (DAT_14c9a5230 == 0) {
    FUN_14000fc22(&DAT_14c9a5230,&PTR_FUN_14a1a64e8);
  }
  return DAT_14c9a5230;
}



// FUNCTION 1462ac5bd FUN_1462ac5bd body=47 status=ok
// SIG undefined FUN_1462ac5bd(void)

longlong FUN_1462ac5bd(void)

{
  if (DAT_14c9a5238 == 0) {
    FUN_14000fc22(&DAT_14c9a5238,&PTR_FUN_14a1a6618);
  }
  return DAT_14c9a5238;
}



// FUNCTION 1462ac5ec FUN_1462ac5ec body=47 status=ok
// SIG undefined FUN_1462ac5ec(void)

longlong FUN_1462ac5ec(void)

{
  if (DAT_14c9a5240 == 0) {
    FUN_14000fc22(&DAT_14c9a5240,&PTR_FUN_14a1a6740);
  }
  return DAT_14c9a5240;
}



// FUNCTION 1462ac61b FUN_1462ac61b body=47 status=ok
// SIG undefined FUN_1462ac61b(void)

longlong FUN_1462ac61b(void)

{
  if (DAT_14c9a5248 == 0) {
    FUN_14000fc22(&DAT_14c9a5248,&PTR_FUN_14a1a6880);
  }
  return DAT_14c9a5248;
}



// FUNCTION 1462ac64a FUN_1462ac64a body=34 status=ok
// SIG undefined FUN_1462ac64a(void)

void FUN_1462ac64a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a64064();
  FUN_14069c8d6(uVar1,&PTR_s_Conv_BoolToName_14a1a68c0,9);
  return;
}



// FUNCTION 1462ac66c FUN_1462ac66c body=35 status=ok
// SIG undefined FUN_1462ac66c(void)

void FUN_1462ac66c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a1a6a80;
  return;
}



// FUNCTION 1462ac6b0 FUN_1462ac6b0 body=47 status=ok
// SIG undefined FUN_1462ac6b0(void)

longlong FUN_1462ac6b0(void)

{
  if (DAT_14c9a5270 == 0) {
    FUN_14073dd9a(&DAT_14c9a5270,&PTR_LAB_14a1a6e28);
  }
  return DAT_14c9a5270;
}



// FUNCTION 1462ac6f5 FUN_1462ac6f5 body=47 status=ok
// SIG undefined FUN_1462ac6f5(void)

longlong FUN_1462ac6f5(void)

{
  if (DAT_14c9a5288 == 0) {
    FUN_14073dd9a(&DAT_14c9a5288,&PTR_LAB_14a1a6fd8);
  }
  return DAT_14c9a5288;
}



// FUNCTION 1462ac724 FUN_1462ac724 body=40 status=ok
// SIG undefined FUN_1462ac724(void)

undefined8 FUN_1462ac724(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462ac74c FUN_1462ac74c body=40 status=ok
// SIG undefined FUN_1462ac74c(void)

undefined8 FUN_1462ac74c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462ac774 FUN_1462ac774 body=40 status=ok
// SIG undefined FUN_1462ac774(void)

undefined8 FUN_1462ac774(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462ac79c FUN_1462ac79c body=40 status=ok
// SIG undefined FUN_1462ac79c(void)

undefined8 FUN_1462ac79c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462ac7c4 FUN_1462ac7c4 body=40 status=ok
// SIG undefined FUN_1462ac7c4(void)

undefined8 FUN_1462ac7c4(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462ac7ec FUN_1462ac7ec body=80 status=ok
// SIG undefined FUN_1462ac7ec(void)

undefined8 * FUN_1462ac7ec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1a3590;
  param_1[5] = &PTR_LAB_14a1a3840;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145aba340(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462ac83c FUN_1462ac83c body=40 status=ok
// SIG undefined FUN_1462ac83c(void)

undefined8 FUN_1462ac83c(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462ac864 FUN_1462ac864 body=40 status=ok
// SIG undefined FUN_1462ac864(void)

undefined8 FUN_1462ac864(undefined8 param_1,int param_2)

{
  FUN_140efdedc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462ac88c FUN_1462ac88c body=69 status=ok
// SIG undefined FUN_1462ac88c(void)

undefined8 * FUN_1462ac88c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1a4b20;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462ac8d2 FUN_1462ac8d2 body=40 status=ok
// SIG undefined FUN_1462ac8d2(void)

undefined8 FUN_1462ac8d2(undefined8 param_1,int param_2)

{
  FUN_140877576();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462ac8fa FUN_1462ac8fa body=40 status=ok
// SIG undefined FUN_1462ac8fa(void)

undefined8 FUN_1462ac8fa(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462ac922 FUN_1462ac922 body=40 status=ok
// SIG undefined FUN_1462ac922(void)

undefined8 FUN_1462ac922(undefined8 param_1,int param_2)

{
  FUN_140cbb07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462ac94a FUN_1462ac94a body=40 status=ok
// SIG undefined FUN_1462ac94a(void)

undefined8 FUN_1462ac94a(undefined8 param_1,int param_2)

{
  FUN_140d7a33a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1462ac972 FUN_1462ac972 body=34 status=ok
// SIG undefined FUN_1462ac972(void)

undefined8 FUN_1462ac972(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462ac994 FUN_1462ac994 body=34 status=ok
// SIG undefined FUN_1462ac994(void)

undefined8 FUN_1462ac994(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462ac9b6 FUN_1462ac9b6 body=34 status=ok
// SIG undefined FUN_1462ac9b6(void)

undefined8 FUN_1462ac9b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462ac9d8 FUN_1462ac9d8 body=34 status=ok
// SIG undefined FUN_1462ac9d8(void)

undefined8 FUN_1462ac9d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462ac9fa FUN_1462ac9fa body=34 status=ok
// SIG undefined FUN_1462ac9fa(void)

undefined8 FUN_1462ac9fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462aca1c FUN_1462aca1c body=34 status=ok
// SIG undefined FUN_1462aca1c(void)

undefined8 FUN_1462aca1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462aca3e FUN_1462aca3e body=34 status=ok
// SIG undefined FUN_1462aca3e(void)

undefined8 FUN_1462aca3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462aca60 FUN_1462aca60 body=34 status=ok
// SIG undefined FUN_1462aca60(void)

undefined8 FUN_1462aca60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462aca82 FUN_1462aca82 body=34 status=ok
// SIG undefined FUN_1462aca82(void)

undefined8 FUN_1462aca82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acaa4 FUN_1462acaa4 body=34 status=ok
// SIG undefined FUN_1462acaa4(void)

undefined8 FUN_1462acaa4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acac6 FUN_1462acac6 body=34 status=ok
// SIG undefined FUN_1462acac6(void)

undefined8 FUN_1462acac6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acae8 FUN_1462acae8 body=34 status=ok
// SIG undefined FUN_1462acae8(void)

undefined8 FUN_1462acae8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acb0a FUN_1462acb0a body=34 status=ok
// SIG undefined FUN_1462acb0a(void)

undefined8 FUN_1462acb0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acb2c FUN_1462acb2c body=34 status=ok
// SIG undefined FUN_1462acb2c(void)

undefined8 FUN_1462acb2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acb4e FUN_1462acb4e body=34 status=ok
// SIG undefined FUN_1462acb4e(void)

undefined8 FUN_1462acb4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acb70 FUN_1462acb70 body=34 status=ok
// SIG undefined FUN_1462acb70(void)

undefined8 FUN_1462acb70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acb92 FUN_1462acb92 body=34 status=ok
// SIG undefined FUN_1462acb92(void)

undefined8 FUN_1462acb92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acbb4 FUN_1462acbb4 body=34 status=ok
// SIG undefined FUN_1462acbb4(void)

undefined8 FUN_1462acbb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acbd6 FUN_1462acbd6 body=34 status=ok
// SIG undefined FUN_1462acbd6(void)

undefined8 FUN_1462acbd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acbf8 FUN_1462acbf8 body=34 status=ok
// SIG undefined FUN_1462acbf8(void)

undefined8 FUN_1462acbf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acc1a FUN_1462acc1a body=34 status=ok
// SIG undefined FUN_1462acc1a(void)

undefined8 FUN_1462acc1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acc3c FUN_1462acc3c body=34 status=ok
// SIG undefined FUN_1462acc3c(void)

undefined8 FUN_1462acc3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acc5e FUN_1462acc5e body=34 status=ok
// SIG undefined FUN_1462acc5e(void)

undefined8 FUN_1462acc5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acc80 FUN_1462acc80 body=34 status=ok
// SIG undefined FUN_1462acc80(void)

undefined8 FUN_1462acc80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acca2 FUN_1462acca2 body=34 status=ok
// SIG undefined FUN_1462acca2(void)

undefined8 FUN_1462acca2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462accc4 FUN_1462accc4 body=34 status=ok
// SIG undefined FUN_1462accc4(void)

undefined8 FUN_1462accc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acce6 FUN_1462acce6 body=34 status=ok
// SIG undefined FUN_1462acce6(void)

undefined8 FUN_1462acce6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acd08 FUN_1462acd08 body=34 status=ok
// SIG undefined FUN_1462acd08(void)

undefined8 FUN_1462acd08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acd2a FUN_1462acd2a body=34 status=ok
// SIG undefined FUN_1462acd2a(void)

undefined8 FUN_1462acd2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acd4c FUN_1462acd4c body=34 status=ok
// SIG undefined FUN_1462acd4c(void)

undefined8 FUN_1462acd4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1462acd6e FUN_1462acd6e body=47 status=ok
// SIG undefined FUN_1462acd6e(void)

longlong FUN_1462acd6e(void)

{
  if (DAT_14c9a52a8 == 0) {
    FUN_1409ce572(&DAT_14c9a52a8,&PTR_FUN_14a1ac400);
  }
  return DAT_14c9a52a8;
}



// FUNCTION 1462acd9d FUN_1462acd9d body=49 status=ok
// SIG undefined FUN_1462acd9d(void)

longlong FUN_1462acd9d(void)

{
  if (DAT_14c9a52c0 == 0) {
    FUN_14000fc22(&DAT_14c9a52c0,&PTR_FUN_14a1ac450);
  }
  return DAT_14c9a52c0;
}



// FUNCTION 1462acdce FUN_1462acdce body=49 status=ok
// SIG undefined FUN_1462acdce(void)

longlong FUN_1462acdce(void)

{
  if (DAT_14c9a52f0 == 0) {
    FUN_14073dd9a(&DAT_14c9a52f0,&PTR_LAB_14a1ac8f0);
  }
  return DAT_14c9a52f0;
}



// FUNCTION 1462acdff FUN_1462acdff body=47 status=ok
// SIG undefined FUN_1462acdff(void)

longlong FUN_1462acdff(void)

{
  if (DAT_14c9a52c8 == 0) {
    FUN_14000fc22(&DAT_14c9a52c8,&PTR_FUN_14a1ac4a0);
  }
  return DAT_14c9a52c8;
}



// FUNCTION 1462ace2e FUN_1462ace2e body=47 status=ok
// SIG undefined FUN_1462ace2e(void)

longlong FUN_1462ace2e(void)

{
  if (DAT_14c9a52d0 == 0) {
    FUN_14000fc22(&DAT_14c9a52d0,&PTR_FUN_14a1ac4f0);
  }
  return DAT_14c9a52d0;
}



// FUNCTION 1462ace5d FUN_1462ace5d body=47 status=ok
// SIG undefined FUN_1462ace5d(void)

longlong FUN_1462ace5d(void)

{
  if (DAT_14c9a52d8 == 0) {
    FUN_14000fc22(&DAT_14c9a52d8,&PTR_FUN_14a1ac540);
  }
  return DAT_14c9a52d8;
}



// FUNCTION 1462ace8c FUN_1462ace8c body=47 status=ok
// SIG undefined FUN_1462ace8c(void)

longlong FUN_1462ace8c(void)

{
  if (DAT_14c9a52e0 == 0) {
    FUN_14000fc22(&DAT_14c9a52e0,&PTR_FUN_14a1ac580);
  }
  return DAT_14c9a52e0;
}



// FUNCTION 1462acebc FUN_1462acebc body=34 status=ok
// SIG undefined FUN_1462acebc(void)

void FUN_1462acebc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459571c0();
  FUN_14069c8d6(uVar1,&PTR_s_OnRep_IsActive_14a1ac5c0,4);
  return;
}



// FUNCTION 1462acee9 FUN_1462acee9 body=47 status=ok
// SIG undefined FUN_1462acee9(void)

longlong FUN_1462acee9(void)

{
  if (DAT_14c9a5310 == 0) {
    FUN_1409ce572(&DAT_14c9a5310,&PTR_FUN_14a1acaa0);
  }
  return DAT_14c9a5310;
}



// FUNCTION 1462acf18 FUN_1462acf18 body=55 status=ok
// SIG undefined FUN_1462acf18(void)

void FUN_1462acf18(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5330 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5330 = FUN_140002ddd(FUN_1462acf4f,uVar1,L"GbxAttributeExpression");
  }
  return;
}



// FUNCTION 1462acf4f FUN_1462acf4f body=47 status=ok
// SIG undefined FUN_1462acf4f(void)

longlong FUN_1462acf4f(void)

{
  if (DAT_14c9a5328 == 0) {
    FUN_14086a14e(&DAT_14c9a5328,&PTR_FUN_14a1acb68);
  }
  return DAT_14c9a5328;
}



// FUNCTION 1462acf7e FUN_1462acf7e body=47 status=ok
// SIG undefined FUN_1462acf7e(void)

longlong FUN_1462acf7e(void)

{
  if (DAT_14c9a5358 == 0) {
    FUN_14086a14e(&DAT_14c9a5358,&PTR_FUN_14a1ace48);
  }
  return DAT_14c9a5358;
}



// FUNCTION 1462acfae FUN_1462acfae body=48 status=ok
// SIG undefined FUN_1462acfae(void)

void FUN_1462acfae(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14a1b4290;
  return;
}



// FUNCTION 1462acfde FUN_1462acfde body=55 status=ok
// SIG undefined FUN_1462acfde(void)

void FUN_1462acfde(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5348 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5348 = FUN_140002ddd(FUN_1462ad015,uVar1,L"GbxExpressionValueResolver");
  }
  return;
}



// FUNCTION 1462ad015 FUN_1462ad015 body=47 status=ok
// SIG undefined FUN_1462ad015(void)

longlong FUN_1462ad015(void)

{
  if (DAT_14c9a5340 == 0) {
    FUN_14086a14e(&DAT_14c9a5340,&PTR_FUN_14a1acc40);
  }
  return DAT_14c9a5340;
}



// FUNCTION 1462ad044 FUN_1462ad044 body=48 status=ok
// SIG undefined FUN_1462ad044(void)

void FUN_1462ad044(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14a1b43f0;
  return;
}



// FUNCTION 1462ad074 FUN_1462ad074 body=48 status=ok
// SIG undefined FUN_1462ad074(void)

void FUN_1462ad074(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14a1b45e0;
  return;
}



// FUNCTION 1462ad0a4 FUN_1462ad0a4 body=55 status=ok
// SIG undefined FUN_1462ad0a4(void)

void FUN_1462ad0a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5378 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5378 = FUN_140002ddd(FUN_1462ad0db,uVar1,L"GbxFlag");
  }
  return;
}



// FUNCTION 1462ad0db FUN_1462ad0db body=47 status=ok
// SIG undefined FUN_1462ad0db(void)

longlong FUN_1462ad0db(void)

{
  if (DAT_14c9a5370 == 0) {
    FUN_14086a14e(&DAT_14c9a5370,&PTR_FUN_14a1acec0);
  }
  return DAT_14c9a5370;
}



// FUNCTION 1462ad10a FUN_1462ad10a body=48 status=ok
// SIG undefined FUN_1462ad10a(void)

void FUN_1462ad10a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a1b4740;
  return;
}



// FUNCTION 1462ad13a FUN_1462ad13a body=35 status=ok
// SIG undefined FUN_1462ad13a(void)

void FUN_1462ad13a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a1acfc0;
  return;
}



// FUNCTION 1462ad15d FUN_1462ad15d body=47 status=ok
// SIG undefined FUN_1462ad15d(void)

longlong FUN_1462ad15d(void)

{
  if (DAT_14c9a5390 == 0) {
    FUN_14073dd9a(&DAT_14c9a5390,&PTR_LAB_14a1acf78);
  }
  return DAT_14c9a5390;
}



// FUNCTION 1462ad18c FUN_1462ad18c body=55 status=ok
// SIG undefined FUN_1462ad18c(void)

void FUN_1462ad18c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a53a8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a53a8 = FUN_140002ddd(FUN_1462ad1c3,uVar1,L"AssetPlayerGaitScalingState");
  }
  return;
}



// FUNCTION 1462ad1c3 FUN_1462ad1c3 body=49 status=ok
// SIG undefined FUN_1462ad1c3(void)

longlong FUN_1462ad1c3(void)

{
  if (DAT_14c9a53a0 == 0) {
    FUN_14086a14e(&DAT_14c9a53a0,&PTR_FUN_14a1ad338);
  }
  return DAT_14c9a53a0;
}



// FUNCTION 1462ad1f4 FUN_1462ad1f4 body=48 status=ok
// SIG undefined FUN_1462ad1f4(void)

void FUN_1462ad1f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14a1b48a0;
  return;
}



// FUNCTION 1462ad224 FUN_1462ad224 body=55 status=ok
// SIG undefined FUN_1462ad224(void)

void FUN_1462ad224(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a53c0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a53c0 = FUN_140002ddd(FUN_1462ad25b,uVar1,L"GaitScalingData");
  }
  return;
}



// FUNCTION 1462ad25b FUN_1462ad25b body=47 status=ok
// SIG undefined FUN_1462ad25b(void)

longlong FUN_1462ad25b(void)

{
  if (DAT_14c9a53b8 == 0) {
    FUN_14086a14e(&DAT_14c9a53b8,&PTR_FUN_14a1ad3f0);
  }
  return DAT_14c9a53b8;
}



// FUNCTION 1462ad28a FUN_1462ad28a body=48 status=ok
// SIG undefined FUN_1462ad28a(void)

void FUN_1462ad28a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14a1b4a00;
  return;
}



// FUNCTION 1462ad2ba FUN_1462ad2ba body=35 status=ok
// SIG undefined FUN_1462ad2ba(void)

void FUN_1462ad2ba(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a1ad530;
  return;
}



// FUNCTION 1462ad2e3 FUN_1462ad2e3 body=47 status=ok
// SIG undefined FUN_1462ad2e3(void)

longlong FUN_1462ad2e3(void)

{
  if (DAT_14c9a53d8 == 0) {
    FUN_14073dd9a(&DAT_14c9a53d8,&PTR_LAB_14a1ad4e8);
  }
  return DAT_14c9a53d8;
}



// FUNCTION 1462ad312 FUN_1462ad312 body=57 status=ok
// SIG undefined FUN_1462ad312(void)

void FUN_1462ad312(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a1ad920;
  puVar1[5] = &PTR_FUN_14a1adbd0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 1462ad34b FUN_1462ad34b body=49 status=ok
// SIG undefined FUN_1462ad34b(void)

longlong FUN_1462ad34b(void)

{
  if (DAT_14c9a53f0 == 0) {
    FUN_14073dd9a(&DAT_14c9a53f0,&PTR_LAB_14a1ad8d8);
  }
  return DAT_14c9a53f0;
}



// FUNCTION 1462ad37c FUN_1462ad37c body=49 status=ok
// SIG undefined FUN_1462ad37c(void)

longlong FUN_1462ad37c(void)

{
  if (DAT_14c9a5420 == 0) {
    FUN_14073dd9a(&DAT_14c9a5420,&PTR_LAB_14a1ae090);
  }
  return DAT_14c9a5420;
}



// FUNCTION 1462ad3ad FUN_1462ad3ad body=47 status=ok
// SIG undefined FUN_1462ad3ad(void)

longlong FUN_1462ad3ad(void)

{
  if (DAT_14c9a5400 == 0) {
    FUN_14000fc22(&DAT_14c9a5400,&PTR_FUN_14a1add30);
  }
  return DAT_14c9a5400;
}



// FUNCTION 1462ad3dc FUN_1462ad3dc body=47 status=ok
// SIG undefined FUN_1462ad3dc(void)

longlong FUN_1462ad3dc(void)

{
  if (DAT_14c9a5408 == 0) {
    FUN_14000fc22(&DAT_14c9a5408,&PTR_FUN_14a1ade60);
  }
  return DAT_14c9a5408;
}



// FUNCTION 1462ad40b FUN_1462ad40b body=47 status=ok
// SIG undefined FUN_1462ad40b(void)

longlong FUN_1462ad40b(void)

{
  if (DAT_14c9a5410 == 0) {
    FUN_14000fc22(&DAT_14c9a5410,&PTR_FUN_14a1adf88);
  }
  return DAT_14c9a5410;
}



// FUNCTION 1462ad43a FUN_1462ad43a body=34 status=ok
// SIG undefined FUN_1462ad43a(void)

void FUN_1462ad43a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a64150();
  FUN_14069c8d6(uVar1,&PTR_s_BreakGbxGraphParam_14a1adfd0,3);
  return;
}



// FUNCTION 1462ad45c FUN_1462ad45c body=35 status=ok
// SIG undefined FUN_1462ad45c(void)

void FUN_1462ad45c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a1ae0d0;
  return;
}



// FUNCTION 1462ad47f FUN_1462ad47f body=47 status=ok
// SIG undefined FUN_1462ad47f(void)

longlong FUN_1462ad47f(void)

{
  if (DAT_14c9a5430 == 0) {
    FUN_14086a14e(&DAT_14c9a5430,&PTR_FUN_14a1ae3e0);
  }
  return DAT_14c9a5430;
}



// FUNCTION 1462ad4ae FUN_1462ad4ae body=48 status=ok
// SIG undefined FUN_1462ad4ae(void)

void FUN_1462ad4ae(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a1b4b70;
  return;
}



// FUNCTION 1462ad4de FUN_1462ad4de body=49 status=ok
// SIG undefined FUN_1462ad4de(void)

longlong FUN_1462ad4de(void)

{
  if (DAT_14c9a5448 == 0) {
    FUN_14086a14e(&DAT_14c9a5448,&PTR_FUN_14a1ae4f8);
  }
  return DAT_14c9a5448;
}



// FUNCTION 1462ad510 FUN_1462ad510 body=48 status=ok
// SIG undefined FUN_1462ad510(void)

void FUN_1462ad510(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14a1b4ce0;
  return;
}



// FUNCTION 1462ad540 FUN_1462ad540 body=35 status=ok
// SIG undefined FUN_1462ad540(void)

void FUN_1462ad540(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a1ae600;
  return;
}



// FUNCTION 1462ad563 FUN_1462ad563 body=47 status=ok
// SIG undefined FUN_1462ad563(void)

longlong FUN_1462ad563(void)

{
  if (DAT_14c9a5468 == 0) {
    FUN_14073dd9a(&DAT_14c9a5468,&PTR_LAB_14a1ae5b8);
  }
  return DAT_14c9a5468;
}



// FUNCTION 1462ad592 FUN_1462ad592 body=47 status=ok
// SIG undefined FUN_1462ad592(void)

longlong FUN_1462ad592(void)

{
  if (DAT_14c9a5478 == 0) {
    FUN_1409ce572(&DAT_14c9a5478,&PTR_FUN_14a1ae950);
  }
  return DAT_14c9a5478;
}



// FUNCTION 1462ad5c1 FUN_1462ad5c1 body=49 status=ok
// SIG undefined FUN_1462ad5c1(void)

longlong FUN_1462ad5c1(void)

{
  if (DAT_14c9a5490 == 0) {
    FUN_14086a14e(&DAT_14c9a5490,&PTR_FUN_14a1ae9b8);
  }
  return DAT_14c9a5490;
}



// FUNCTION 1462ad5f2 FUN_1462ad5f2 body=48 status=ok
// SIG undefined FUN_1462ad5f2(void)

void FUN_1462ad5f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14a1b4f70;
  return;
}



// FUNCTION 1462ad622 FUN_1462ad622 body=55 status=ok
// SIG undefined FUN_1462ad622(void)

void FUN_1462ad622(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a54b0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a54b0 = FUN_140002ddd(FUN_14173bb77,uVar1,L"GbxGraphParam");
  }
  return;
}



// FUNCTION 1462ad65a FUN_1462ad65a body=48 status=ok
// SIG undefined FUN_1462ad65a(void)

void FUN_1462ad65a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14a1b50d0;
  return;
}



// FUNCTION 1462ad68a FUN_1462ad68a body=55 status=ok
// SIG undefined FUN_1462ad68a(void)

void FUN_1462ad68a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a54c8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a54c8 = FUN_140002ddd(FUN_1462ad6c1,uVar1,L"GbxGraphParamOverrides");
  }
  return;
}



// FUNCTION 1462ad6c1 FUN_1462ad6c1 body=49 status=ok
// SIG undefined FUN_1462ad6c1(void)

longlong FUN_1462ad6c1(void)

{
  if (DAT_14c9a54c0 == 0) {
    FUN_14086a14e(&DAT_14c9a54c0,&PTR_FUN_14a1aecb0);
  }
  return DAT_14c9a54c0;
}



// FUNCTION 1462ad6f2 FUN_1462ad6f2 body=48 status=ok
// SIG undefined FUN_1462ad6f2(void)

void FUN_1462ad6f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000080;
  *puVar1 = &PTR_FUN_14a1b5230;
  return;
}



// FUNCTION 1462ad722 FUN_1462ad722 body=47 status=ok
// SIG undefined FUN_1462ad722(void)

longlong FUN_1462ad722(void)

{
  if (DAT_14c9a54d8 == 0) {
    FUN_14086a14e(&DAT_14c9a54d8,&PTR_FUN_14a1aede8);
  }
  return DAT_14c9a54d8;
}



// FUNCTION 1462ad752 FUN_1462ad752 body=48 status=ok
// SIG undefined FUN_1462ad752(void)

void FUN_1462ad752(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a1b5390;
  return;
}



// FUNCTION 1462ad782 FUN_1462ad782 body=55 status=ok
// SIG undefined FUN_1462ad782(void)

void FUN_1462ad782(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a54f8 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a54f8 = FUN_140002ddd(FUN_1462ad7b9,uVar1,L"GbxGraphSettings");
  }
  return;
}



// FUNCTION 1462ad7b9 FUN_1462ad7b9 body=49 status=ok
// SIG undefined FUN_1462ad7b9(void)

longlong FUN_1462ad7b9(void)

{
  if (DAT_14c9a54f0 == 0) {
    FUN_14086a14e(&DAT_14c9a54f0,&PTR_FUN_14a1aef58);
  }
  return DAT_14c9a54f0;
}



// FUNCTION 1462ad7ea FUN_1462ad7ea body=48 status=ok
// SIG undefined FUN_1462ad7ea(void)

void FUN_1462ad7ea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a8;
  *puVar1 = &PTR_FUN_14a1b5500;
  return;
}



// FUNCTION 1462ad81a FUN_1462ad81a body=49 status=ok
// SIG undefined FUN_1462ad81a(void)

longlong FUN_1462ad81a(void)

{
  if (DAT_14c9a5508 == 0) {
    FUN_14086a14e(&DAT_14c9a5508,&PTR_FUN_14a1aefe8);
  }
  return DAT_14c9a5508;
}



// FUNCTION 1462ad84c FUN_1462ad84c body=48 status=ok
// SIG undefined FUN_1462ad84c(void)

void FUN_1462ad84c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000130;
  *puVar1 = &PTR_FUN_14a1b5670;
  return;
}


