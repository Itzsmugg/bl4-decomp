// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1466cb0ba FUN_1466cb0ba body=47 status=ok
// SIG undefined FUN_1466cb0ba(void)

longlong FUN_1466cb0ba(void)

{
  if (DAT_14cc07098 == 0) {
    FUN_14000fc22(&DAT_14cc07098,&PTR_FUN_14bb69560);
  }
  return DAT_14cc07098;
}



// FUNCTION 1466cb0e9 FUN_1466cb0e9 body=47 status=ok
// SIG undefined FUN_1466cb0e9(void)

longlong FUN_1466cb0e9(void)

{
  if (DAT_14cc070a0 == 0) {
    FUN_14000fc22(&DAT_14cc070a0,&PTR_FUN_14bb69608);
  }
  return DAT_14cc070a0;
}



// FUNCTION 1466cb118 FUN_1466cb118 body=47 status=ok
// SIG undefined FUN_1466cb118(void)

longlong FUN_1466cb118(void)

{
  if (DAT_14cc070a8 == 0) {
    FUN_14000fc22(&DAT_14cc070a8,&PTR_FUN_14bb696a0);
  }
  return DAT_14cc070a8;
}



// FUNCTION 1466cb148 FUN_1466cb148 body=34 status=ok
// SIG undefined FUN_1466cb148(void)

void FUN_1466cb148(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459f6026();
  FUN_14069c8d6(uVar1,&PTR_s_GetGlobalTransform_14bb696e0,9);
  return;
}



// FUNCTION 1466cb16a FUN_1466cb16a body=49 status=ok
// SIG undefined FUN_1466cb16a(void)

longlong FUN_1466cb16a(void)

{
  if (DAT_14cc070c8 == 0) {
    FUN_14086a14e(&DAT_14cc070c8,&PTR_FUN_14bb6a3a8);
  }
  return DAT_14cc070c8;
}



// FUNCTION 1466cb19c FUN_1466cb19c body=48 status=ok
// SIG undefined FUN_1466cb19c(void)

void FUN_1466cb19c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000a0;
  *puVar1 = &PTR_FUN_14bb74e10;
  return;
}



// FUNCTION 1466cb1d1 FUN_1466cb1d1 body=47 status=ok
// SIG undefined FUN_1466cb1d1(void)

longlong FUN_1466cb1d1(void)

{
  if (DAT_14cc070e8 == 0) {
    FUN_14073dd9a(&DAT_14cc070e8,&PTR_LAB_14bb6a618);
  }
  return DAT_14cc070e8;
}



// FUNCTION 1466cb200 FUN_1466cb200 body=231 status=ok
// SIG undefined FUN_1466cb200(void)

void FUN_1466cb200(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14bb76a10;
  local_28[3] = &DAT_14cc07114;
  local_28[4] = FUN_145a9db8a;
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



// FUNCTION 1466cb2e8 FUN_1466cb2e8 body=71 status=ok
// SIG undefined FUN_1466cb2e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1466cb2e8(void)

{
  _DAT_14cc07178 = 0;
  if (DAT_14cc07170 != 0) {
    FUN_1400020a8();
  }
  FUN_14589ee26(&DAT_14cc07130);
  if (DAT_14cc07120 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1466cb330 FUN_1466cb330 body=55 status=ok
// SIG undefined FUN_1466cb330(void)

void FUN_1466cb330(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07188 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07188 = FUN_140002ddd(FUN_1466cb367,uVar1,L"ControlRigTestDataVariable");
  }
  return;
}



// FUNCTION 1466cb367 FUN_1466cb367 body=47 status=ok
// SIG undefined FUN_1466cb367(void)

longlong FUN_1466cb367(void)

{
  if (DAT_14cc07180 == 0) {
    FUN_14086a14e(&DAT_14cc07180,&PTR_FUN_14bb6ab28);
  }
  return DAT_14cc07180;
}



// FUNCTION 1466cb396 FUN_1466cb396 body=48 status=ok
// SIG undefined FUN_1466cb396(void)

void FUN_1466cb396(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb74f70;
  return;
}



// FUNCTION 1466cb3c6 FUN_1466cb3c6 body=55 status=ok
// SIG undefined FUN_1466cb3c6(void)

void FUN_1466cb3c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc071a0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc071a0 = FUN_140002ddd(FUN_1466cb3fd,uVar1,L"ControlRigTestDataFrame");
  }
  return;
}



// FUNCTION 1466cb3fd FUN_1466cb3fd body=49 status=ok
// SIG undefined FUN_1466cb3fd(void)

longlong FUN_1466cb3fd(void)

{
  if (DAT_14cc07198 == 0) {
    FUN_14086a14e(&DAT_14cc07198,&PTR_FUN_14bb6ad00);
  }
  return DAT_14cc07198;
}



// FUNCTION 1466cb42e FUN_1466cb42e body=48 status=ok
// SIG undefined FUN_1466cb42e(void)

void FUN_1466cb42e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14bb750d0;
  return;
}



// FUNCTION 1466cb45e FUN_1466cb45e body=47 status=ok
// SIG undefined FUN_1466cb45e(void)

longlong FUN_1466cb45e(void)

{
  if (DAT_14cc071b0 == 0) {
    FUN_1409ce572(&DAT_14cc071b0,&PTR_FUN_14bb6ada0);
  }
  return DAT_14cc071b0;
}



// FUNCTION 1466cb492 FUN_1466cb492 body=49 status=ok
// SIG undefined FUN_1466cb492(void)

longlong FUN_1466cb492(void)

{
  if (DAT_14cc07218 == 0) {
    FUN_14073dd9a(&DAT_14cc07218,&PTR_LAB_14bb6b9f0);
  }
  return DAT_14cc07218;
}



// FUNCTION 1466cb4c3 FUN_1466cb4c3 body=47 status=ok
// SIG undefined FUN_1466cb4c3(void)

longlong FUN_1466cb4c3(void)

{
  if (DAT_14cc071c8 == 0) {
    FUN_14000fc22(&DAT_14cc071c8,&PTR_FUN_14bb6aec8);
  }
  return DAT_14cc071c8;
}



// FUNCTION 1466cb4f2 FUN_1466cb4f2 body=47 status=ok
// SIG undefined FUN_1466cb4f2(void)

longlong FUN_1466cb4f2(void)

{
  if (DAT_14cc071d0 == 0) {
    FUN_14000fc22(&DAT_14cc071d0,&PTR_FUN_14bb6aff0);
  }
  return DAT_14cc071d0;
}



// FUNCTION 1466cb521 FUN_1466cb521 body=47 status=ok
// SIG undefined FUN_1466cb521(void)

longlong FUN_1466cb521(void)

{
  if (DAT_14cc071d8 == 0) {
    FUN_14000fc22(&DAT_14cc071d8,&PTR_FUN_14bb6b0d0);
  }
  return DAT_14cc071d8;
}



// FUNCTION 1466cb550 FUN_1466cb550 body=47 status=ok
// SIG undefined FUN_1466cb550(void)

longlong FUN_1466cb550(void)

{
  if (DAT_14cc071e0 == 0) {
    FUN_14000fc22(&DAT_14cc071e0,&PTR_FUN_14bb6b1a0);
  }
  return DAT_14cc071e0;
}



// FUNCTION 1466cb57f FUN_1466cb57f body=47 status=ok
// SIG undefined FUN_1466cb57f(void)

longlong FUN_1466cb57f(void)

{
  if (DAT_14cc071e8 == 0) {
    FUN_14000fc22(&DAT_14cc071e8,&PTR_FUN_14bb6b228);
  }
  return DAT_14cc071e8;
}



// FUNCTION 1466cb5ae FUN_1466cb5ae body=47 status=ok
// SIG undefined FUN_1466cb5ae(void)

longlong FUN_1466cb5ae(void)

{
  if (DAT_14cc071f0 == 0) {
    FUN_14000fc22(&DAT_14cc071f0,&PTR_FUN_14bb6b2c0);
  }
  return DAT_14cc071f0;
}



// FUNCTION 1466cb5dd FUN_1466cb5dd body=47 status=ok
// SIG undefined FUN_1466cb5dd(void)

longlong FUN_1466cb5dd(void)

{
  if (DAT_14cc071f8 == 0) {
    FUN_14000fc22(&DAT_14cc071f8,&PTR_FUN_14bb6b400);
  }
  return DAT_14cc071f8;
}



// FUNCTION 1466cb60c FUN_1466cb60c body=47 status=ok
// SIG undefined FUN_1466cb60c(void)

longlong FUN_1466cb60c(void)

{
  if (DAT_14cc07200 == 0) {
    FUN_14000fc22(&DAT_14cc07200,&PTR_FUN_14bb6b450);
  }
  return DAT_14cc07200;
}



// FUNCTION 1466cb63b FUN_1466cb63b body=47 status=ok
// SIG undefined FUN_1466cb63b(void)

longlong FUN_1466cb63b(void)

{
  if (DAT_14cc07208 == 0) {
    FUN_14000fc22(&DAT_14cc07208,&PTR_FUN_14bb6b588);
  }
  return DAT_14cc07208;
}



// FUNCTION 1466cb66a FUN_1466cb66a body=34 status=ok
// SIG undefined FUN_1466cb66a(void)

void FUN_1466cb66a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459886fc();
  FUN_14069c8d6(uVar1,&PTR_s_CreateNewAsset_14bb6b5d0,9);
  return;
}



// FUNCTION 1466cb68c FUN_1466cb68c body=55 status=ok
// SIG undefined FUN_1466cb68c(void)

void FUN_1466cb68c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07230 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07230 = FUN_140002ddd(FUN_1466cb6c3,uVar1,L"ControlRigValidationContext");
  }
  return;
}



// FUNCTION 1466cb6c3 FUN_1466cb6c3 body=47 status=ok
// SIG undefined FUN_1466cb6c3(void)

longlong FUN_1466cb6c3(void)

{
  if (DAT_14cc07228 == 0) {
    FUN_14086a14e(&DAT_14cc07228,&PTR_FUN_14bb6bdc0);
  }
  return DAT_14cc07228;
}



// FUNCTION 1466cb6f2 FUN_1466cb6f2 body=48 status=ok
// SIG undefined FUN_1466cb6f2(void)

void FUN_1466cb6f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb75380;
  return;
}



// FUNCTION 1466cb722 FUN_1466cb722 body=65 status=ok
// SIG undefined FUN_1466cb722(void)

void FUN_1466cb722(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bb6bf10;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  return;
}



// FUNCTION 1466cb768 FUN_1466cb768 body=47 status=ok
// SIG undefined FUN_1466cb768(void)

longlong FUN_1466cb768(void)

{
  if (DAT_14cc07248 == 0) {
    FUN_14073dd9a(&DAT_14cc07248,&PTR_LAB_14bb6bec8);
  }
  return DAT_14cc07248;
}



// FUNCTION 1466cb797 FUN_1466cb797 body=35 status=ok
// SIG undefined FUN_1466cb797(void)

void FUN_1466cb797(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bb6c250;
  return;
}



// FUNCTION 1466cb7ba FUN_1466cb7ba body=47 status=ok
// SIG undefined FUN_1466cb7ba(void)

longlong FUN_1466cb7ba(void)

{
  if (DAT_14cc07260 == 0) {
    FUN_14073dd9a(&DAT_14cc07260,&PTR_LAB_14bb6c208);
  }
  return DAT_14cc07260;
}



// FUNCTION 1466cb7ea FUN_1466cb7ea body=55 status=ok
// SIG undefined FUN_1466cb7ea(void)

void FUN_1466cb7ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07278 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07278 = FUN_140002ddd(FUN_1466cb821,uVar1,L"CRSimContainer");
  }
  return;
}



// FUNCTION 1466cb821 FUN_1466cb821 body=47 status=ok
// SIG undefined FUN_1466cb821(void)

longlong FUN_1466cb821(void)

{
  if (DAT_14cc07270 == 0) {
    FUN_14086a14e(&DAT_14cc07270,&PTR_FUN_14bb6c6a8);
  }
  return DAT_14cc07270;
}



// FUNCTION 1466cb850 FUN_1466cb850 body=48 status=ok
// SIG undefined FUN_1466cb850(void)

void FUN_1466cb850(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb754e0;
  return;
}



// FUNCTION 1466cb880 FUN_1466cb880 body=55 status=ok
// SIG undefined FUN_1466cb880(void)

void FUN_1466cb880(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07290 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07290 = FUN_140002ddd(FUN_1466cb8b7,uVar1,L"CRSimLinearSpring");
  }
  return;
}



// FUNCTION 1466cb8b7 FUN_1466cb8b7 body=49 status=ok
// SIG undefined FUN_1466cb8b7(void)

longlong FUN_1466cb8b7(void)

{
  if (DAT_14cc07288 == 0) {
    FUN_14086a14e(&DAT_14cc07288,&PTR_FUN_14bb6c878);
  }
  return DAT_14cc07288;
}



// FUNCTION 1466cb8e8 FUN_1466cb8e8 body=48 status=ok
// SIG undefined FUN_1466cb8e8(void)

void FUN_1466cb8e8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14bb75680;
  return;
}



// FUNCTION 1466cb918 FUN_1466cb918 body=47 status=ok
// SIG undefined FUN_1466cb918(void)

longlong FUN_1466cb918(void)

{
  if (DAT_14cc072a0 == 0) {
    FUN_1409ce572(&DAT_14cc072a0,&PTR_FUN_14bb6c930);
  }
  return DAT_14cc072a0;
}



// FUNCTION 1466cb948 FUN_1466cb948 body=55 status=ok
// SIG undefined FUN_1466cb948(void)

void FUN_1466cb948(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc072c0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc072c0 = FUN_140002ddd(FUN_1466cb97f,uVar1,L"CRSimPointConstraint");
  }
  return;
}



// FUNCTION 1466cb97f FUN_1466cb97f body=47 status=ok
// SIG undefined FUN_1466cb97f(void)

longlong FUN_1466cb97f(void)

{
  if (DAT_14cc072b8 == 0) {
    FUN_14086a14e(&DAT_14cc072b8,&PTR_FUN_14bb6cb58);
  }
  return DAT_14cc072b8;
}



// FUNCTION 1466cb9ae FUN_1466cb9ae body=48 status=ok
// SIG undefined FUN_1466cb9ae(void)

void FUN_1466cb9ae(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bb75890;
  return;
}



// FUNCTION 1466cb9de FUN_1466cb9de body=55 status=ok
// SIG undefined FUN_1466cb9de(void)

void FUN_1466cb9de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc072d8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc072d8 = FUN_140002ddd(FUN_1466cba15,uVar1,L"CRSimPointContainer");
  }
  return;
}



// FUNCTION 1466cba15 FUN_1466cba15 body=49 status=ok
// SIG undefined FUN_1466cba15(void)

longlong FUN_1466cba15(void)

{
  if (DAT_14cc072d0 == 0) {
    FUN_14086a14e(&DAT_14cc072d0,&PTR_FUN_14bb6cf58);
  }
  return DAT_14cc072d0;
}



// FUNCTION 1466cba46 FUN_1466cba46 body=49 status=ok
// SIG undefined FUN_1466cba46(void)

longlong FUN_1466cba46(void)

{
  if (DAT_14cc07300 == 0) {
    FUN_14086a14e(&DAT_14cc07300,&PTR_FUN_14bb6d1b8);
  }
  return DAT_14cc07300;
}



// FUNCTION 1466cba77 FUN_1466cba77 body=49 status=ok
// SIG undefined FUN_1466cba77(void)

longlong FUN_1466cba77(void)

{
  if (DAT_14cc07330 == 0) {
    FUN_14086a14e(&DAT_14cc07330,&PTR_FUN_14bb6d580);
  }
  return DAT_14cc07330;
}



// FUNCTION 1466cbaa8 FUN_1466cbaa8 body=48 status=ok
// SIG undefined FUN_1466cbaa8(void)

void FUN_1466cbaa8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14bb759f0;
  return;
}



// FUNCTION 1466cbad8 FUN_1466cbad8 body=47 status=ok
// SIG undefined FUN_1466cbad8(void)

longlong FUN_1466cbad8(void)

{
  if (DAT_14cc072e8 == 0) {
    FUN_1409ce572(&DAT_14cc072e8,&PTR_FUN_14bb6cfe0);
  }
  return DAT_14cc072e8;
}



// FUNCTION 1466cbb08 FUN_1466cbb08 body=55 status=ok
// SIG undefined FUN_1466cbb08(void)

void FUN_1466cbb08(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07308 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07308 = FUN_140002ddd(FUN_1466cba46,uVar1,L"CRSimPointForce");
  }
  return;
}



// FUNCTION 1466cbb40 FUN_1466cbb40 body=48 status=ok
// SIG undefined FUN_1466cbb40(void)

void FUN_1466cbb40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14bb75bb0;
  return;
}



// FUNCTION 1466cbb70 FUN_1466cbb70 body=47 status=ok
// SIG undefined FUN_1466cbb70(void)

longlong FUN_1466cbb70(void)

{
  if (DAT_14cc07318 == 0) {
    FUN_1409ce572(&DAT_14cc07318,&PTR_FUN_14bb6d280);
  }
  return DAT_14cc07318;
}



// FUNCTION 1466cbba0 FUN_1466cbba0 body=55 status=ok
// SIG undefined FUN_1466cbba0(void)

void FUN_1466cbba0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07338 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07338 = FUN_140002ddd(FUN_1466cba77,uVar1,L"CRSimSoftCollision");
  }
  return;
}



// FUNCTION 1466cbbd8 FUN_1466cbbd8 body=48 status=ok
// SIG undefined FUN_1466cbbd8(void)

void FUN_1466cbbd8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000080;
  *puVar1 = &PTR_FUN_14bb75da0;
  return;
}



// FUNCTION 1466cbc08 FUN_1466cbc08 body=47 status=ok
// SIG undefined FUN_1466cbc08(void)

longlong FUN_1466cbc08(void)

{
  if (DAT_14cc07348 == 0) {
    FUN_14000fc22(&DAT_14cc07348,&PTR_FUN_14bb6d798);
  }
  return DAT_14cc07348;
}



// FUNCTION 1466cbc37 FUN_1466cbc37 body=47 status=ok
// SIG undefined FUN_1466cbc37(void)

longlong FUN_1466cbc37(void)

{
  if (DAT_14cc07350 == 0) {
    FUN_14000fc22(&DAT_14cc07350,&PTR_FUN_14bb6d980);
  }
  return DAT_14cc07350;
}



// FUNCTION 1466cbc66 FUN_1466cbc66 body=47 status=ok
// SIG undefined FUN_1466cbc66(void)

longlong FUN_1466cbc66(void)

{
  if (DAT_14cc07358 == 0) {
    FUN_14000fc22(&DAT_14cc07358,&PTR_FUN_14bb6db58);
  }
  return DAT_14cc07358;
}



// FUNCTION 1466cbc95 FUN_1466cbc95 body=47 status=ok
// SIG undefined FUN_1466cbc95(void)

longlong FUN_1466cbc95(void)

{
  if (DAT_14cc07360 == 0) {
    FUN_14000fc22(&DAT_14cc07360,&PTR_FUN_14bb6dd20);
  }
  return DAT_14cc07360;
}



// FUNCTION 1466cbcc4 FUN_1466cbcc4 body=47 status=ok
// SIG undefined FUN_1466cbcc4(void)

longlong FUN_1466cbcc4(void)

{
  if (DAT_14cc07368 == 0) {
    FUN_14000fc22(&DAT_14cc07368,&PTR_FUN_14bb6ded0);
  }
  return DAT_14cc07368;
}



// FUNCTION 1466cbcf3 FUN_1466cbcf3 body=47 status=ok
// SIG undefined FUN_1466cbcf3(void)

longlong FUN_1466cbcf3(void)

{
  if (DAT_14cc07370 == 0) {
    FUN_14000fc22(&DAT_14cc07370,&PTR_FUN_14bb6e120);
  }
  return DAT_14cc07370;
}



// FUNCTION 1466cbd22 FUN_1466cbd22 body=47 status=ok
// SIG undefined FUN_1466cbd22(void)

longlong FUN_1466cbd22(void)

{
  if (DAT_14cc07378 == 0) {
    FUN_14000fc22(&DAT_14cc07378,&PTR_FUN_14bb6e248);
  }
  return DAT_14cc07378;
}



// FUNCTION 1466cbd51 FUN_1466cbd51 body=47 status=ok
// SIG undefined FUN_1466cbd51(void)

longlong FUN_1466cbd51(void)

{
  if (DAT_14cc07380 == 0) {
    FUN_14000fc22(&DAT_14cc07380,&PTR_FUN_14bb6e320);
  }
  return DAT_14cc07380;
}



// FUNCTION 1466cbd80 FUN_1466cbd80 body=47 status=ok
// SIG undefined FUN_1466cbd80(void)

longlong FUN_1466cbd80(void)

{
  if (DAT_14cc07388 == 0) {
    FUN_14000fc22(&DAT_14cc07388,&PTR_FUN_14bb6e4b8);
  }
  return DAT_14cc07388;
}



// FUNCTION 1466cbdaf FUN_1466cbdaf body=47 status=ok
// SIG undefined FUN_1466cbdaf(void)

longlong FUN_1466cbdaf(void)

{
  if (DAT_14cc07390 == 0) {
    FUN_14000fc22(&DAT_14cc07390,&PTR_FUN_14bb6e5e8);
  }
  return DAT_14cc07390;
}



// FUNCTION 1466cbdde FUN_1466cbdde body=47 status=ok
// SIG undefined FUN_1466cbdde(void)

longlong FUN_1466cbdde(void)

{
  if (DAT_14cc07398 == 0) {
    FUN_14000fc22(&DAT_14cc07398,&PTR_FUN_14bb6e6c8);
  }
  return DAT_14cc07398;
}



// FUNCTION 1466cbe0d FUN_1466cbe0d body=47 status=ok
// SIG undefined FUN_1466cbe0d(void)

longlong FUN_1466cbe0d(void)

{
  if (DAT_14cc073a0 == 0) {
    FUN_14000fc22(&DAT_14cc073a0,&PTR_FUN_14bb6e830);
  }
  return DAT_14cc073a0;
}



// FUNCTION 1466cbe3c FUN_1466cbe3c body=47 status=ok
// SIG undefined FUN_1466cbe3c(void)

longlong FUN_1466cbe3c(void)

{
  if (DAT_14cc073a8 == 0) {
    FUN_14000fc22(&DAT_14cc073a8,&PTR_FUN_14bb6e990);
  }
  return DAT_14cc073a8;
}



// FUNCTION 1466cbe6b FUN_1466cbe6b body=47 status=ok
// SIG undefined FUN_1466cbe6b(void)

longlong FUN_1466cbe6b(void)

{
  if (DAT_14cc073b0 == 0) {
    FUN_14000fc22(&DAT_14cc073b0,&PTR_FUN_14bb6eb00);
  }
  return DAT_14cc073b0;
}



// FUNCTION 1466cbe9a FUN_1466cbe9a body=47 status=ok
// SIG undefined FUN_1466cbe9a(void)

longlong FUN_1466cbe9a(void)

{
  if (DAT_14cc073b8 == 0) {
    FUN_14000fc22(&DAT_14cc073b8,&PTR_FUN_14bb6ec28);
  }
  return DAT_14cc073b8;
}



// FUNCTION 1466cbec9 FUN_1466cbec9 body=47 status=ok
// SIG undefined FUN_1466cbec9(void)

longlong FUN_1466cbec9(void)

{
  if (DAT_14cc073c0 == 0) {
    FUN_14000fc22(&DAT_14cc073c0,&PTR_FUN_14bb6edd0);
  }
  return DAT_14cc073c0;
}



// FUNCTION 1466cbef8 FUN_1466cbef8 body=47 status=ok
// SIG undefined FUN_1466cbef8(void)

longlong FUN_1466cbef8(void)

{
  if (DAT_14cc073c8 == 0) {
    FUN_14000fc22(&DAT_14cc073c8,&PTR_FUN_14bb6eef0);
  }
  return DAT_14cc073c8;
}



// FUNCTION 1466cbf27 FUN_1466cbf27 body=47 status=ok
// SIG undefined FUN_1466cbf27(void)

longlong FUN_1466cbf27(void)

{
  if (DAT_14cc073d0 == 0) {
    FUN_14000fc22(&DAT_14cc073d0,&PTR_FUN_14bb6f068);
  }
  return DAT_14cc073d0;
}



// FUNCTION 1466cbf56 FUN_1466cbf56 body=47 status=ok
// SIG undefined FUN_1466cbf56(void)

longlong FUN_1466cbf56(void)

{
  if (DAT_14cc073d8 == 0) {
    FUN_14000fc22(&DAT_14cc073d8,&PTR_FUN_14bb6f1f0);
  }
  return DAT_14cc073d8;
}



// FUNCTION 1466cbf85 FUN_1466cbf85 body=47 status=ok
// SIG undefined FUN_1466cbf85(void)

longlong FUN_1466cbf85(void)

{
  if (DAT_14cc073e0 == 0) {
    FUN_14000fc22(&DAT_14cc073e0,&PTR_FUN_14bb6f388);
  }
  return DAT_14cc073e0;
}



// FUNCTION 1466cbfb4 FUN_1466cbfb4 body=47 status=ok
// SIG undefined FUN_1466cbfb4(void)

longlong FUN_1466cbfb4(void)

{
  if (DAT_14cc073e8 == 0) {
    FUN_14000fc22(&DAT_14cc073e8,&PTR_FUN_14bb6f4f8);
  }
  return DAT_14cc073e8;
}



// FUNCTION 1466cbfe4 FUN_1466cbfe4 body=34 status=ok
// SIG undefined FUN_1466cbfe4(void)

void FUN_1466cbfe4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a56f1e();
  FUN_14069c8d6(uVar1,&PTR_s_AddModule_14bb6f540,0x15);
  return;
}



// FUNCTION 1466cc006 FUN_1466cc006 body=64 status=ok
// SIG undefined FUN_1466cc006(void)

void FUN_1466cc006(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bb6f870;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 2;
  *(undefined2 *)(puVar1 + 9) = 0x100;
  return;
}



// FUNCTION 1466cc046 FUN_1466cc046 body=40 status=ok
// SIG undefined FUN_1466cc046(void)

undefined8 FUN_1466cc046(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc06e FUN_1466cc06e body=40 status=ok
// SIG undefined FUN_1466cc06e(void)

undefined8 FUN_1466cc06e(undefined8 param_1,int param_2)

{
  FUN_14064ee12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc096 FUN_1466cc096 body=40 status=ok
// SIG undefined FUN_1466cc096(void)

undefined8 FUN_1466cc096(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc0be FUN_1466cc0be body=40 status=ok
// SIG undefined FUN_1466cc0be(void)

undefined8 FUN_1466cc0be(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc0e6 FUN_1466cc0e6 body=29 status=ok
// SIG undefined FUN_1466cc0e6(void)

undefined8 FUN_1466cc0e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc104 FUN_1466cc104 body=29 status=ok
// SIG undefined FUN_1466cc104(void)

undefined8 FUN_1466cc104(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc122 FUN_1466cc122 body=29 status=ok
// SIG undefined FUN_1466cc122(void)

undefined8 FUN_1466cc122(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc140 FUN_1466cc140 body=29 status=ok
// SIG undefined FUN_1466cc140(void)

undefined8 FUN_1466cc140(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc15e FUN_1466cc15e body=29 status=ok
// SIG undefined FUN_1466cc15e(void)

undefined8 FUN_1466cc15e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc17c FUN_1466cc17c body=29 status=ok
// SIG undefined FUN_1466cc17c(void)

undefined8 FUN_1466cc17c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc19a FUN_1466cc19a body=29 status=ok
// SIG undefined FUN_1466cc19a(void)

undefined8 FUN_1466cc19a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc1b8 FUN_1466cc1b8 body=29 status=ok
// SIG undefined FUN_1466cc1b8(void)

undefined8 FUN_1466cc1b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc1d6 FUN_1466cc1d6 body=29 status=ok
// SIG undefined FUN_1466cc1d6(void)

undefined8 FUN_1466cc1d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc1f4 FUN_1466cc1f4 body=29 status=ok
// SIG undefined FUN_1466cc1f4(void)

undefined8 FUN_1466cc1f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc212 FUN_1466cc212 body=29 status=ok
// SIG undefined FUN_1466cc212(void)

undefined8 FUN_1466cc212(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc230 FUN_1466cc230 body=29 status=ok
// SIG undefined FUN_1466cc230(void)

undefined8 FUN_1466cc230(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc24e FUN_1466cc24e body=29 status=ok
// SIG undefined FUN_1466cc24e(void)

undefined8 FUN_1466cc24e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc26c FUN_1466cc26c body=29 status=ok
// SIG undefined FUN_1466cc26c(void)

undefined8 FUN_1466cc26c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc28a FUN_1466cc28a body=29 status=ok
// SIG undefined FUN_1466cc28a(void)

undefined8 FUN_1466cc28a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc2a8 FUN_1466cc2a8 body=29 status=ok
// SIG undefined FUN_1466cc2a8(void)

undefined8 FUN_1466cc2a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc2c6 FUN_1466cc2c6 body=29 status=ok
// SIG undefined FUN_1466cc2c6(void)

undefined8 FUN_1466cc2c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc2e4 FUN_1466cc2e4 body=29 status=ok
// SIG undefined FUN_1466cc2e4(void)

undefined8 FUN_1466cc2e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc302 FUN_1466cc302 body=29 status=ok
// SIG undefined FUN_1466cc302(void)

undefined8 FUN_1466cc302(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc320 FUN_1466cc320 body=29 status=ok
// SIG undefined FUN_1466cc320(void)

undefined8 FUN_1466cc320(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc33e FUN_1466cc33e body=29 status=ok
// SIG undefined FUN_1466cc33e(void)

undefined8 FUN_1466cc33e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc35c FUN_1466cc35c body=29 status=ok
// SIG undefined FUN_1466cc35c(void)

undefined8 FUN_1466cc35c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc37a FUN_1466cc37a body=29 status=ok
// SIG undefined FUN_1466cc37a(void)

undefined8 FUN_1466cc37a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc398 FUN_1466cc398 body=29 status=ok
// SIG undefined FUN_1466cc398(void)

undefined8 FUN_1466cc398(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc3b6 FUN_1466cc3b6 body=29 status=ok
// SIG undefined FUN_1466cc3b6(void)

undefined8 FUN_1466cc3b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc3d4 FUN_1466cc3d4 body=29 status=ok
// SIG undefined FUN_1466cc3d4(void)

undefined8 FUN_1466cc3d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc3f2 FUN_1466cc3f2 body=29 status=ok
// SIG undefined FUN_1466cc3f2(void)

undefined8 FUN_1466cc3f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc410 FUN_1466cc410 body=29 status=ok
// SIG undefined FUN_1466cc410(void)

undefined8 FUN_1466cc410(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc42e FUN_1466cc42e body=29 status=ok
// SIG undefined FUN_1466cc42e(void)

undefined8 FUN_1466cc42e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc44c FUN_1466cc44c body=29 status=ok
// SIG undefined FUN_1466cc44c(void)

undefined8 FUN_1466cc44c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc46a FUN_1466cc46a body=29 status=ok
// SIG undefined FUN_1466cc46a(void)

undefined8 FUN_1466cc46a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc488 FUN_1466cc488 body=29 status=ok
// SIG undefined FUN_1466cc488(void)

undefined8 FUN_1466cc488(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc4a6 FUN_1466cc4a6 body=29 status=ok
// SIG undefined FUN_1466cc4a6(void)

undefined8 FUN_1466cc4a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc4c4 FUN_1466cc4c4 body=29 status=ok
// SIG undefined FUN_1466cc4c4(void)

undefined8 FUN_1466cc4c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc4e2 FUN_1466cc4e2 body=29 status=ok
// SIG undefined FUN_1466cc4e2(void)

undefined8 FUN_1466cc4e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc500 FUN_1466cc500 body=29 status=ok
// SIG undefined FUN_1466cc500(void)

undefined8 FUN_1466cc500(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc51e FUN_1466cc51e body=29 status=ok
// SIG undefined FUN_1466cc51e(void)

undefined8 FUN_1466cc51e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc53c FUN_1466cc53c body=29 status=ok
// SIG undefined FUN_1466cc53c(void)

undefined8 FUN_1466cc53c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc55a FUN_1466cc55a body=29 status=ok
// SIG undefined FUN_1466cc55a(void)

undefined8 FUN_1466cc55a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc578 FUN_1466cc578 body=29 status=ok
// SIG undefined FUN_1466cc578(void)

undefined8 FUN_1466cc578(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc596 FUN_1466cc596 body=29 status=ok
// SIG undefined FUN_1466cc596(void)

undefined8 FUN_1466cc596(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc5b4 FUN_1466cc5b4 body=29 status=ok
// SIG undefined FUN_1466cc5b4(void)

undefined8 FUN_1466cc5b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc5d2 FUN_1466cc5d2 body=29 status=ok
// SIG undefined FUN_1466cc5d2(void)

undefined8 FUN_1466cc5d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc5f0 FUN_1466cc5f0 body=29 status=ok
// SIG undefined FUN_1466cc5f0(void)

undefined8 FUN_1466cc5f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc60e FUN_1466cc60e body=29 status=ok
// SIG undefined FUN_1466cc60e(void)

undefined8 FUN_1466cc60e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc62c FUN_1466cc62c body=29 status=ok
// SIG undefined FUN_1466cc62c(void)

undefined8 FUN_1466cc62c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc64a FUN_1466cc64a body=29 status=ok
// SIG undefined FUN_1466cc64a(void)

undefined8 FUN_1466cc64a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc668 FUN_1466cc668 body=29 status=ok
// SIG undefined FUN_1466cc668(void)

undefined8 FUN_1466cc668(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc686 FUN_1466cc686 body=29 status=ok
// SIG undefined FUN_1466cc686(void)

undefined8 FUN_1466cc686(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc6a4 FUN_1466cc6a4 body=29 status=ok
// SIG undefined FUN_1466cc6a4(void)

undefined8 FUN_1466cc6a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc6c2 FUN_1466cc6c2 body=29 status=ok
// SIG undefined FUN_1466cc6c2(void)

undefined8 FUN_1466cc6c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc6e0 FUN_1466cc6e0 body=29 status=ok
// SIG undefined FUN_1466cc6e0(void)

undefined8 FUN_1466cc6e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc6fe FUN_1466cc6fe body=29 status=ok
// SIG undefined FUN_1466cc6fe(void)

undefined8 FUN_1466cc6fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc71c FUN_1466cc71c body=29 status=ok
// SIG undefined FUN_1466cc71c(void)

undefined8 FUN_1466cc71c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc73a FUN_1466cc73a body=29 status=ok
// SIG undefined FUN_1466cc73a(void)

undefined8 FUN_1466cc73a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc758 FUN_1466cc758 body=29 status=ok
// SIG undefined FUN_1466cc758(void)

undefined8 FUN_1466cc758(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc776 FUN_1466cc776 body=29 status=ok
// SIG undefined FUN_1466cc776(void)

undefined8 FUN_1466cc776(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc794 FUN_1466cc794 body=29 status=ok
// SIG undefined FUN_1466cc794(void)

undefined8 FUN_1466cc794(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc7b2 FUN_1466cc7b2 body=29 status=ok
// SIG undefined FUN_1466cc7b2(void)

undefined8 FUN_1466cc7b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc7d0 FUN_1466cc7d0 body=98 status=ok
// SIG undefined FUN_1466cc7d0(void)

void FUN_1466cc7d0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1466cc832 FUN_1466cc832 body=98 status=ok
// SIG undefined FUN_1466cc832(void)

void FUN_1466cc832(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,2);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,2);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1466cc894 FUN_1466cc894 body=26 status=ok
// SIG undefined FUN_1466cc894(void)

bool FUN_1466cc894(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1466cc8ae FUN_1466cc8ae body=132 status=ok
// SIG undefined FUN_1466cc8ae(void)

void FUN_1466cc8ae(longlong param_1,int param_2)

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



// FUNCTION 1466cc932 FUN_1466cc932 body=29 status=ok
// SIG undefined FUN_1466cc932(void)

bool FUN_1466cc932(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1466cc950 FUN_1466cc950 body=26 status=ok
// SIG undefined FUN_1466cc950(void)

bool FUN_1466cc950(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1466cc96a FUN_1466cc96a body=24 status=ok
// SIG undefined FUN_1466cc96a(void)

bool FUN_1466cc96a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1466cc982 FUN_1466cc982 body=93 status=ok
// SIG undefined FUN_1466cc982(void)

void FUN_1466cc982(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bb76a10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1466cc9e0 FUN_1466cc9e0 body=29 status=ok
// SIG undefined FUN_1466cc9e0(void)

undefined8 FUN_1466cc9e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1466cc9fd FUN_1466cc9fd body=47 status=ok
// SIG undefined FUN_1466cc9fd(void)

longlong FUN_1466cc9fd(void)

{
  if (DAT_14cc07508 == 0) {
    FUN_1409ce572(&DAT_14cc07508,&PTR_FUN_14bb779d0);
  }
  return DAT_14cc07508;
}



// FUNCTION 1466cca2c FUN_1466cca2c body=55 status=ok
// SIG undefined FUN_1466cca2c(void)

void FUN_1466cca2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07528 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07528 = FUN_140002ddd(FUN_1466cca63,uVar1,L"RigModuleReference");
  }
  return;
}



// FUNCTION 1466cca63 FUN_1466cca63 body=47 status=ok
// SIG undefined FUN_1466cca63(void)

longlong FUN_1466cca63(void)

{
  if (DAT_14cc07520 == 0) {
    FUN_14086a14e(&DAT_14cc07520,&PTR_FUN_14bb77ed8);
  }
  return DAT_14cc07520;
}



// FUNCTION 1466cca92 FUN_1466cca92 body=48 status=ok
// SIG undefined FUN_1466cca92(void)

void FUN_1466cca92(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000170;
  *puVar1 = &PTR_FUN_14bb88550;
  return;
}



// FUNCTION 1466ccac2 FUN_1466ccac2 body=55 status=ok
// SIG undefined FUN_1466ccac2(void)

void FUN_1466ccac2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07540 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07540 = FUN_140002ddd(FUN_1466ccaf9,uVar1,L"ModularRigSingleConnection");
  }
  return;
}



// FUNCTION 1466ccaf9 FUN_1466ccaf9 body=47 status=ok
// SIG undefined FUN_1466ccaf9(void)

longlong FUN_1466ccaf9(void)

{
  if (DAT_14cc07538 == 0) {
    FUN_14086a14e(&DAT_14cc07538,&PTR_FUN_14bb78000);
  }
  return DAT_14cc07538;
}



// FUNCTION 1466ccb28 FUN_1466ccb28 body=48 status=ok
// SIG undefined FUN_1466ccb28(void)

void FUN_1466ccb28(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000018;
  *puVar1 = &PTR_FUN_14bb886b0;
  return;
}



// FUNCTION 1466ccb58 FUN_1466ccb58 body=55 status=ok
// SIG undefined FUN_1466ccb58(void)

void FUN_1466ccb58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07558 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07558 = FUN_140002ddd(FUN_1466ccb8f,uVar1,L"ModularRigConnections");
  }
  return;
}



// FUNCTION 1466ccb8f FUN_1466ccb8f body=47 status=ok
// SIG undefined FUN_1466ccb8f(void)

longlong FUN_1466ccb8f(void)

{
  if (DAT_14cc07550 == 0) {
    FUN_14086a14e(&DAT_14cc07550,&PTR_FUN_14bb78118);
  }
  return DAT_14cc07550;
}



// FUNCTION 1466ccbbe FUN_1466ccbbe body=48 status=ok
// SIG undefined FUN_1466ccbbe(void)

void FUN_1466ccbbe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14bb88810;
  return;
}



// FUNCTION 1466ccbee FUN_1466ccbee body=55 status=ok
// SIG undefined FUN_1466ccbee(void)

void FUN_1466ccbee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07570 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07570 = FUN_140002ddd(FUN_1466ccc25,uVar1,L"ModularRigModel");
  }
  return;
}



// FUNCTION 1466ccc25 FUN_1466ccc25 body=47 status=ok
// SIG undefined FUN_1466ccc25(void)

longlong FUN_1466ccc25(void)

{
  if (DAT_14cc07568 == 0) {
    FUN_14086a14e(&DAT_14cc07568,&PTR_FUN_14bb78290);
  }
  return DAT_14cc07568;
}



// FUNCTION 1466ccc54 FUN_1466ccc54 body=48 status=ok
// SIG undefined FUN_1466ccc54(void)

void FUN_1466ccc54(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b0;
  *puVar1 = &PTR_FUN_14bb88970;
  return;
}



// FUNCTION 1466ccc84 FUN_1466ccc84 body=43 status=ok
// SIG undefined FUN_1466ccc84(void)

void FUN_1466ccc84(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bb78420;
  puVar1[5] = 0;
  return;
}



// FUNCTION 1466cccb5 FUN_1466cccb5 body=47 status=ok
// SIG undefined FUN_1466cccb5(void)

longlong FUN_1466cccb5(void)

{
  if (DAT_14cc07588 == 0) {
    FUN_14073dd9a(&DAT_14cc07588,&PTR_LAB_14bb783d8);
  }
  return DAT_14cc07588;
}



// FUNCTION 1466ccce4 FUN_1466ccce4 body=93 status=ok
// SIG undefined FUN_1466ccce4(void)

void FUN_1466ccce4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145b27574(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bb78770;
  puVar1[5] = &PTR_FUN_14bb78bf0;
  puVar1[0x4f] = &PTR_FUN_14bb78c30;
  puVar1[0x50] = &PTR_FUN_14bb78c50;
  *(undefined2 *)(puVar1 + 0xf9) = 0;
  puVar1[0x15a] = 0;
  puVar1[0x15b] = 0;
  return;
}



// FUNCTION 1466ccd41 FUN_1466ccd41 body=47 status=ok
// SIG undefined FUN_1466ccd41(void)

longlong FUN_1466ccd41(void)

{
  if (DAT_14cc075a0 == 0) {
    FUN_14073dd9a(&DAT_14cc075a0,&PTR_LAB_14bb78728);
  }
  return DAT_14cc075a0;
}



// FUNCTION 1466ccd70 FUN_1466ccd70 body=55 status=ok
// SIG undefined FUN_1466ccd70(void)

void FUN_1466ccd70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc075b8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc075b8 = FUN_140002ddd(FUN_1466ccda7,uVar1,L"ConstraintNodeData");
  }
  return;
}



// FUNCTION 1466ccda7 FUN_1466ccda7 body=47 status=ok
// SIG undefined FUN_1466ccda7(void)

longlong FUN_1466ccda7(void)

{
  if (DAT_14cc075b0 == 0) {
    FUN_14086a14e(&DAT_14cc075b0,&PTR_FUN_14bb78e70);
  }
  return DAT_14cc075b0;
}



// FUNCTION 1466ccdd6 FUN_1466ccdd6 body=48 status=ok
// SIG undefined FUN_1466ccdd6(void)

void FUN_1466ccdd6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000140;
  *puVar1 = &PTR_FUN_14bb88ad0;
  return;
}



// FUNCTION 1466cce06 FUN_1466cce06 body=55 status=ok
// SIG undefined FUN_1466cce06(void)

void FUN_1466cce06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc075d0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc075d0 = FUN_140002ddd(FUN_1466cce3d,uVar1,L"AnimationHierarchy");
  }
  return;
}



// FUNCTION 1466cce3d FUN_1466cce3d body=47 status=ok
// SIG undefined FUN_1466cce3d(void)

longlong FUN_1466cce3d(void)

{
  if (DAT_14cc075c8 == 0) {
    FUN_14086a14e(&DAT_14cc075c8,&PTR_FUN_14bb78f78);
  }
  return DAT_14cc075c8;
}



// FUNCTION 1466cce6c FUN_1466cce6c body=48 status=ok
// SIG undefined FUN_1466cce6c(void)

void FUN_1466cce6c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14bb88c30;
  return;
}



// FUNCTION 1466cce9c FUN_1466cce9c body=47 status=ok
// SIG undefined FUN_1466cce9c(void)

longlong FUN_1466cce9c(void)

{
  if (DAT_14cc075e0 == 0) {
    FUN_1409ce572(&DAT_14cc075e0,&PTR_FUN_14bb79060);
  }
  return DAT_14cc075e0;
}



// FUNCTION 1466ccecb FUN_1466ccecb body=130 status=ok
// SIG undefined FUN_1466ccecb(void)

void FUN_1466ccecb(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145b27574(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bb79240;
  puVar1[5] = &PTR_FUN_14bb796c0;
  puVar1[0x4f] = &PTR_FUN_14bb79700;
  puVar1[0x50] = &PTR_FUN_14bb79720;
  puVar1[0x15a] = 0;
  puVar1[0x15b] = 0;
  *(undefined2 *)(puVar1 + 0x15c) = 0;
  *(undefined2 *)(puVar1 + 0x15d) = 0x101;
  *(undefined1 *)((longlong)puVar1 + 0xaea) = 1;
  *(undefined2 *)(puVar1 + 0xf9) = 0;
  puVar1[0x15e] = 0;
  puVar1[0x15f] = 0;
  puVar1[0x160] = 0;
  puVar1[0x161] = 0;
  return;
}



// FUNCTION 1466ccf4d FUN_1466ccf4d body=47 status=ok
// SIG undefined FUN_1466ccf4d(void)

longlong FUN_1466ccf4d(void)

{
  if (DAT_14cc07600 == 0) {
    FUN_14073dd9a(&DAT_14cc07600,&PTR_LAB_14bb791f8);
  }
  return DAT_14cc07600;
}



// FUNCTION 1466ccf7c FUN_1466ccf7c body=55 status=ok
// SIG undefined FUN_1466ccf7c(void)

void FUN_1466ccf7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07618 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07618 = FUN_140002ddd(FUN_1466ccfb3,uVar1,L"RigBone");
  }
  return;
}



// FUNCTION 1466ccfb3 FUN_1466ccfb3 body=47 status=ok
// SIG undefined FUN_1466ccfb3(void)

longlong FUN_1466ccfb3(void)

{
  if (DAT_14cc07610 == 0) {
    FUN_14086a14e(&DAT_14cc07610,&PTR_FUN_14bb79a40);
  }
  return DAT_14cc07610;
}



// FUNCTION 1466ccfe2 FUN_1466ccfe2 body=49 status=ok
// SIG undefined FUN_1466ccfe2(void)

longlong FUN_1466ccfe2(void)

{
  if (DAT_14cc079c0 == 0) {
    FUN_1409ce572(&DAT_14cc079c0,&PTR_FUN_14bb81690);
  }
  return DAT_14cc079c0;
}



// FUNCTION 1466cd013 FUN_1466cd013 body=49 status=ok
// SIG undefined FUN_1466cd013(void)

longlong FUN_1466cd013(void)

{
  if (DAT_14cc07b40 == 0) {
    FUN_14086a14e(&DAT_14cc07b40,&PTR_FUN_14bb82dc0);
  }
  return DAT_14cc07b40;
}



// FUNCTION 1466cd044 FUN_1466cd044 body=48 status=ok
// SIG undefined FUN_1466cd044(void)

void FUN_1466cd044(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000170;
  *puVar1 = &PTR_FUN_14bb88ed0;
  return;
}



// FUNCTION 1466cd074 FUN_1466cd074 body=55 status=ok
// SIG undefined FUN_1466cd074(void)

void FUN_1466cd074(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07630 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07630 = FUN_140002ddd(FUN_1466cd0ab,uVar1,L"RigBoneHierarchy");
  }
  return;
}



// FUNCTION 1466cd0ab FUN_1466cd0ab body=47 status=ok
// SIG undefined FUN_1466cd0ab(void)

longlong FUN_1466cd0ab(void)

{
  if (DAT_14cc07628 == 0) {
    FUN_14086a14e(&DAT_14cc07628,&PTR_FUN_14bb79b48);
  }
  return DAT_14cc07628;
}



// FUNCTION 1466cd0da FUN_1466cd0da body=48 status=ok
// SIG undefined FUN_1466cd0da(void)

void FUN_1466cd0da(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb89030;
  return;
}



// FUNCTION 1466cd10a FUN_1466cd10a body=55 status=ok
// SIG undefined FUN_1466cd10a(void)

void FUN_1466cd10a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07648 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07648 = FUN_140002ddd(FUN_1466cd141,uVar1,L"RigConnectionRuleStash");
  }
  return;
}



// FUNCTION 1466cd141 FUN_1466cd141 body=49 status=ok
// SIG undefined FUN_1466cd141(void)

longlong FUN_1466cd141(void)

{
  if (DAT_14cc07640 == 0) {
    FUN_14086a14e(&DAT_14cc07640,&PTR_FUN_14bb79ca8);
  }
  return DAT_14cc07640;
}



// FUNCTION 1466cd172 FUN_1466cd172 body=48 status=ok
// SIG undefined FUN_1466cd172(void)

void FUN_1466cd172(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb891c0;
  return;
}



// FUNCTION 1466cd1a2 FUN_1466cd1a2 body=55 status=ok
// SIG undefined FUN_1466cd1a2(void)

void FUN_1466cd1a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07660 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07660 = FUN_140002ddd(FUN_1466cd1d9,uVar1,L"RigConnectionRule");
  }
  return;
}



// FUNCTION 1466cd1d9 FUN_1466cd1d9 body=49 status=ok
// SIG undefined FUN_1466cd1d9(void)

longlong FUN_1466cd1d9(void)

{
  if (DAT_14cc07658 == 0) {
    FUN_14086a14e(&DAT_14cc07658,&PTR_FUN_14bb79d18);
  }
  return DAT_14cc07658;
}



// FUNCTION 1466cd20a FUN_1466cd20a body=48 status=ok
// SIG undefined FUN_1466cd20a(void)

void FUN_1466cd20a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bb89320;
  return;
}



// FUNCTION 1466cd23a FUN_1466cd23a body=55 status=ok
// SIG undefined FUN_1466cd23a(void)

void FUN_1466cd23a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07678 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07678 = FUN_140002ddd(FUN_1466cd271,uVar1,L"RigAndConnectionRule");
  }
  return;
}



// FUNCTION 1466cd271 FUN_1466cd271 body=47 status=ok
// SIG undefined FUN_1466cd271(void)

longlong FUN_1466cd271(void)

{
  if (DAT_14cc07670 == 0) {
    FUN_14086a14e(&DAT_14cc07670,&PTR_FUN_14bb79e28);
  }
  return DAT_14cc07670;
}



// FUNCTION 1466cd2a0 FUN_1466cd2a0 body=48 status=ok
// SIG undefined FUN_1466cd2a0(void)

void FUN_1466cd2a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb894a0;
  return;
}



// FUNCTION 1466cd2d0 FUN_1466cd2d0 body=55 status=ok
// SIG undefined FUN_1466cd2d0(void)

void FUN_1466cd2d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07690 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07690 = FUN_140002ddd(FUN_1466cd307,uVar1,L"RigOrConnectionRule");
  }
  return;
}



// FUNCTION 1466cd307 FUN_1466cd307 body=47 status=ok
// SIG undefined FUN_1466cd307(void)

longlong FUN_1466cd307(void)

{
  if (DAT_14cc07688 == 0) {
    FUN_14086a14e(&DAT_14cc07688,&PTR_FUN_14bb79f28);
  }
  return DAT_14cc07688;
}



// FUNCTION 1466cd336 FUN_1466cd336 body=48 status=ok
// SIG undefined FUN_1466cd336(void)

void FUN_1466cd336(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bb89620;
  return;
}



// FUNCTION 1466cd366 FUN_1466cd366 body=55 status=ok
// SIG undefined FUN_1466cd366(void)

void FUN_1466cd366(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc076a8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc076a8 = FUN_140002ddd(FUN_1466cd39d,uVar1,L"RigTypeConnectionRule");
  }
  return;
}



// FUNCTION 1466cd39d FUN_1466cd39d body=47 status=ok
// SIG undefined FUN_1466cd39d(void)

longlong FUN_1466cd39d(void)

{
  if (DAT_14cc076a0 == 0) {
    FUN_14086a14e(&DAT_14cc076a0,&PTR_FUN_14bb7a038);
  }
  return DAT_14cc076a0;
}



// FUNCTION 1466cd3cc FUN_1466cd3cc body=48 status=ok
// SIG undefined FUN_1466cd3cc(void)

void FUN_1466cd3cc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb897a0;
  return;
}



// FUNCTION 1466cd3fc FUN_1466cd3fc body=55 status=ok
// SIG undefined FUN_1466cd3fc(void)

void FUN_1466cd3fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc076c0 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc076c0 = FUN_140002ddd(FUN_1466cd433,uVar1,L"RigTagConnectionRule");
  }
  return;
}



// FUNCTION 1466cd433 FUN_1466cd433 body=47 status=ok
// SIG undefined FUN_1466cd433(void)

longlong FUN_1466cd433(void)

{
  if (DAT_14cc076b8 == 0) {
    FUN_14086a14e(&DAT_14cc076b8,&PTR_FUN_14bb7a0f8);
  }
  return DAT_14cc076b8;
}



// FUNCTION 1466cd462 FUN_1466cd462 body=48 status=ok
// SIG undefined FUN_1466cd462(void)

void FUN_1466cd462(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb89920;
  return;
}



// FUNCTION 1466cd492 FUN_1466cd492 body=55 status=ok
// SIG undefined FUN_1466cd492(void)

void FUN_1466cd492(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc076d8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc076d8 = FUN_140002ddd(FUN_1466cd4c9,uVar1,L"RigChildOfPrimaryConnectionRule");
  }
  return;
}



// FUNCTION 1466cd4c9 FUN_1466cd4c9 body=47 status=ok
// SIG undefined FUN_1466cd4c9(void)

longlong FUN_1466cd4c9(void)

{
  if (DAT_14cc076d0 == 0) {
    FUN_14086a14e(&DAT_14cc076d0,&PTR_FUN_14bb7a190);
  }
  return DAT_14cc076d0;
}



// FUNCTION 1466cd4f8 FUN_1466cd4f8 body=48 status=ok
// SIG undefined FUN_1466cd4f8(void)

void FUN_1466cd4f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14bb89aa0;
  return;
}



// FUNCTION 1466cd528 FUN_1466cd528 body=55 status=ok
// SIG undefined FUN_1466cd528(void)

void FUN_1466cd528(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07748 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07748 = FUN_140002ddd(FUN_1466cd55f,uVar1,L"RigControl");
  }
  return;
}



// FUNCTION 1466cd55f FUN_1466cd55f body=47 status=ok
// SIG undefined FUN_1466cd55f(void)

longlong FUN_1466cd55f(void)

{
  if (DAT_14cc07740 == 0) {
    FUN_14086a14e(&DAT_14cc07740,&PTR_FUN_14bb7ada8);
  }
  return DAT_14cc07740;
}



// FUNCTION 1466cd58e FUN_1466cd58e body=49 status=ok
// SIG undefined FUN_1466cd58e(void)

longlong FUN_1466cd58e(void)

{
  if (DAT_14cc07a38 == 0) {
    FUN_1409ce572(&DAT_14cc07a38,&PTR_FUN_14bb81bd0);
  }
  return DAT_14cc07a38;
}



// FUNCTION 1466cd5bf FUN_1466cd5bf body=49 status=ok
// SIG undefined FUN_1466cd5bf(void)

longlong FUN_1466cd5bf(void)

{
  if (DAT_14cc07a98 == 0) {
    FUN_1409ce572(&DAT_14cc07a98,&PTR_FUN_14bb81dd0);
  }
  return DAT_14cc07a98;
}



// FUNCTION 1466cd5f0 FUN_1466cd5f0 body=48 status=ok
// SIG undefined FUN_1466cd5f0(void)

void FUN_1466cd5f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000360;
  *puVar1 = &PTR_FUN_14bb89c80;
  return;
}



// FUNCTION 1466cd620 FUN_1466cd620 body=55 status=ok
// SIG undefined FUN_1466cd620(void)

void FUN_1466cd620(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07760 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07760 = FUN_140002ddd(FUN_1466cd657,uVar1,L"RigControlHierarchy");
  }
  return;
}



// FUNCTION 1466cd657 FUN_1466cd657 body=47 status=ok
// SIG undefined FUN_1466cd657(void)

longlong FUN_1466cd657(void)

{
  if (DAT_14cc07758 == 0) {
    FUN_14086a14e(&DAT_14cc07758,&PTR_FUN_14bb7aea8);
  }
  return DAT_14cc07758;
}



// FUNCTION 1466cd686 FUN_1466cd686 body=48 status=ok
// SIG undefined FUN_1466cd686(void)

void FUN_1466cd686(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb89de0;
  return;
}



// FUNCTION 1466cd6b6 FUN_1466cd6b6 body=55 status=ok
// SIG undefined FUN_1466cd6b6(void)

void FUN_1466cd6b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07778 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07778 = FUN_140002ddd(FUN_1466cd6ed,uVar1,L"RigCurve");
  }
  return;
}



// FUNCTION 1466cd6ed FUN_1466cd6ed body=47 status=ok
// SIG undefined FUN_1466cd6ed(void)

longlong FUN_1466cd6ed(void)

{
  if (DAT_14cc07770 == 0) {
    FUN_14086a14e(&DAT_14cc07770,&PTR_FUN_14bb7af98);
  }
  return DAT_14cc07770;
}



// FUNCTION 1466cd71c FUN_1466cd71c body=48 status=ok
// SIG undefined FUN_1466cd71c(void)

void FUN_1466cd71c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb89f70;
  return;
}



// FUNCTION 1466cd74c FUN_1466cd74c body=55 status=ok
// SIG undefined FUN_1466cd74c(void)

void FUN_1466cd74c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07790 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07790 = FUN_140002ddd(FUN_1466cd783,uVar1,L"RigCurveContainer");
  }
  return;
}



// FUNCTION 1466cd783 FUN_1466cd783 body=47 status=ok
// SIG undefined FUN_1466cd783(void)

longlong FUN_1466cd783(void)

{
  if (DAT_14cc07788 == 0) {
    FUN_14086a14e(&DAT_14cc07788,&PTR_FUN_14bb7b098);
  }
  return DAT_14cc07788;
}



// FUNCTION 1466cd7b2 FUN_1466cd7b2 body=48 status=ok
// SIG undefined FUN_1466cd7b2(void)

void FUN_1466cd7b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14bb8a0d0;
  return;
}



// FUNCTION 1466cd7e2 FUN_1466cd7e2 body=28 status=ok
// SIG undefined FUN_1466cd7e2(void)

void FUN_1466cd7e2(undefined8 param_1)

{
  FUN_14150bb00(param_1,1);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1466cd7fe FUN_1466cd7fe body=332 status=ok
// SIG undefined FUN_1466cd7fe(void)

longlong FUN_1466cd7fe(longlong *param_1,longlong param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0x400000000;
  iVar4 = (int)param_1[3];
  if (param_3 < (int)param_1[3]) {
    iVar4 = param_3;
  }
  if (param_3 - iVar4 != 0 && iVar4 <= param_3) {
    iVar4 = (param_3 - iVar4) + (int)param_1[1];
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      FUN_14482f6fa(param_1);
    }
  }
  if (0 < param_3) {
    do {
      iVar4 = (int)param_1[3];
      if ((longlong)iVar4 == 0) {
        iVar4 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
          FUN_14475e4ac(param_1,iVar4);
        }
        *(undefined4 *)(*param_1 + (longlong)iVar4 * 4) = *param_4;
        iVar1 = *(int *)(param_2 + 0x18);
        *(uint *)(param_2 + 0x18) = iVar1 + 1U;
        if (*(uint *)(param_2 + 0x1c) < iVar1 + 1U) {
          FUN_1400c4ccc(param_2,iVar1);
        }
        lVar3 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar3 = param_2;
        }
        *(int *)(lVar3 + (longlong)iVar1 * 4) = iVar4;
      }
      else {
        uVar2 = *(undefined4 *)(param_1[2] + -4 + (longlong)iVar4 * 4);
        *(int *)(param_1 + 3) = iVar4 + -1;
        iVar4 = *(int *)(param_2 + 0x18);
        *(uint *)(param_2 + 0x18) = iVar4 + 1U;
        if (*(uint *)(param_2 + 0x1c) < iVar4 + 1U) {
          FUN_1400c4ccc(param_2,iVar4);
        }
        lVar3 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar3 = param_2;
        }
        *(undefined4 *)(lVar3 + (longlong)iVar4 * 4) = uVar2;
        lVar3 = *(longlong *)(param_2 + 0x10);
        if (*(longlong *)(param_2 + 0x10) == 0) {
          lVar3 = param_2;
        }
        *(undefined4 *)
         (*param_1 + (longlong)*(int *)(lVar3 + (longlong)(*(int *)(param_2 + 0x18) + -1) * 4) * 4)
             = *param_4;
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return param_2;
}



// FUNCTION 1466cd94a FUN_1466cd94a body=785 status=ok
// SIG undefined FUN_1466cd94a(void)

undefined8 * FUN_1466cd94a(void **param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  void *local_98;
  int local_90;
  int local_8c;
  void *local_88;
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  int *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar9 = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar10 = *(uint *)(param_1 + 3);
  if (uVar10 == 0) goto LAB_1466cd9aa;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar10 == uVar5) {
    if (*param_3 != 0) {
      uStack_70 = (ulonglong)uVar10;
LAB_1466cda46:
      FUN_1401c3474(&local_78);
      goto LAB_1466cda58;
    }
  }
  else {
    uStack_70 = (ulonglong)uVar5;
    if (uVar5 != 0) goto LAB_1466cda46;
LAB_1466cda58:
    uVar10 = 0;
    memset(local_78,0,(longlong)(int)uVar5);
    iVar9 = *(int *)(param_1 + 3);
    if ((longlong)iVar9 != 0) {
      local_98 = param_1[2];
      local_a0 = param_3 + 4;
      lVar11 = 0;
      do {
        iVar1 = *(int *)((longlong)local_98 + lVar11);
        *(undefined1 *)((longlong)local_78 + (longlong)iVar1) = 1;
        pcVar2 = (code *)*param_3;
        if (pcVar2 != (code *)0x0) {
          pvVar3 = *param_1;
          local_60 = (int *)CONCAT44(local_60._4_4_,iVar1);
          plVar7 = (longlong *)param_3[2];
          if ((longlong *)param_3[2] == (longlong *)0x0) {
            plVar7 = local_a0;
          }
          uVar6 = (**(code **)(*plVar7 + 8))();
          (*pcVar2)(uVar6,&local_60,(void *)((longlong)iVar1 * 0x60 + (longlong)pvVar3));
        }
        lVar11 = lVar11 + 4;
      } while ((longlong)iVar9 * 4 != lVar11);
      uVar10 = *(uint *)(param_1 + 3);
    }
  }
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 == uVar10) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_1401a2688(param_1,0);
    }
  }
  else {
    local_88 = (void *)0x0;
    uStack_80 = 0;
    if ((int)uVar10 < (int)uVar5) {
      FUN_1401a2688();
      uVar5 = *(uint *)(param_1 + 1);
    }
    local_8c = 0;
    if (0 < (int)uVar5) {
      do {
        uVar4 = uStack_80;
        lVar11 = (longlong)local_8c;
        if (*(char *)((longlong)local_78 + lVar11) == '\0') {
          pvVar3 = *param_1;
          iVar9 = (int)uStack_80;
          uVar10 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
          if (uStack_80._4_4_ < uVar10) {
            FUN_144a2c682(&local_88,uVar4 & 0xffffffff);
          }
          puVar12 = (undefined8 *)(lVar11 * 0x60 + (longlong)pvVar3);
          puVar13 = (undefined8 *)((longlong)iVar9 * 0x60 + (longlong)local_88);
          for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar13 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar13 = puVar13 + 1;
          }
          local_90 = iVar9;
          local_60 = &local_8c;
          local_58 = &local_90;
          FUN_140c0fbee(param_2,local_4c,&local_60,0);
          uVar5 = *(uint *)(param_1 + 1);
        }
        local_8c = local_8c + 1;
      } while (local_8c < (int)uVar5);
    }
    pvVar3 = local_88;
    if (&local_88 != param_1) {
      iVar9 = (int)uStack_80;
      lVar11 = (longlong)(int)uStack_80;
      *(int *)(param_1 + 1) = (int)uStack_80;
      if ((int)uStack_80 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_144756262(param_1,uStack_80 & 0xffffffff);
        if (iVar9 != 0) {
          memcpy(*param_1,pvVar3,lVar11 * 0x60);
        }
      }
    }
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    FUN_14481578e(param_1 + 2,0);
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  iVar9 = *(int *)(param_1 + 3);
LAB_1466cd9aa:
  if (*(int *)((longlong)param_1 + 0x1c) != iVar9) {
    FUN_14481578e(param_1 + 2);
  }
  if (*(int *)((longlong)param_1 + 0xc) != *(int *)(param_1 + 1)) {
    FUN_1401a2688(param_1);
  }
  if (*param_3 != 0) {
    plVar7 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1466cdc5c FUN_1466cdc5c body=749 status=ok
// SIG undefined FUN_1466cdc5c(void)

undefined8 * FUN_1466cdc5c(void **param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  size_t _Size;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  void *local_98;
  int local_90;
  int local_8c;
  void *local_88;
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  int *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar8 = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar9 = *(uint *)(param_1 + 3);
  if (uVar9 == 0) goto LAB_1466cdcbc;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar9 == uVar5) {
    if (*param_3 != 0) {
      uStack_70 = (ulonglong)uVar9;
LAB_1466cdd58:
      FUN_1401c3474(&local_78);
      goto LAB_1466cdd6a;
    }
  }
  else {
    uStack_70 = (ulonglong)uVar5;
    if (uVar5 != 0) goto LAB_1466cdd58;
LAB_1466cdd6a:
    uVar9 = 0;
    memset(local_78,0,(longlong)(int)uVar5);
    iVar8 = *(int *)(param_1 + 3);
    if ((longlong)iVar8 != 0) {
      local_98 = param_1[2];
      local_a0 = param_3 + 4;
      lVar10 = 0;
      do {
        iVar1 = *(int *)((longlong)local_98 + lVar10);
        *(undefined1 *)((longlong)local_78 + (longlong)iVar1) = 1;
        pcVar2 = (code *)*param_3;
        if (pcVar2 != (code *)0x0) {
          pvVar3 = *param_1;
          local_60 = (int *)CONCAT44(local_60._4_4_,iVar1);
          plVar7 = (longlong *)param_3[2];
          if ((longlong *)param_3[2] == (longlong *)0x0) {
            plVar7 = local_a0;
          }
          uVar6 = (**(code **)(*plVar7 + 8))();
          (*pcVar2)(uVar6,&local_60,(longlong)pvVar3 + (longlong)iVar1);
        }
        lVar10 = lVar10 + 4;
      } while ((longlong)iVar8 * 4 != lVar10);
      uVar9 = *(uint *)(param_1 + 3);
    }
  }
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 == uVar9) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_14475e67c(param_1,0);
    }
  }
  else {
    local_88 = (void *)0x0;
    uStack_80 = 0;
    if ((int)uVar9 < (int)uVar5) {
      FUN_14475e67c();
      uVar5 = *(uint *)(param_1 + 1);
    }
    local_8c = 0;
    if (0 < (int)uVar5) {
      do {
        uVar4 = uStack_80;
        lVar10 = (longlong)local_8c;
        if (*(char *)((longlong)local_78 + lVar10) == '\0') {
          pvVar3 = *param_1;
          iVar8 = (int)uStack_80;
          uVar9 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
          if (uStack_80._4_4_ < uVar9) {
            FUN_1401c3474(&local_88,uVar4 & 0xffffffff);
          }
          *(undefined1 *)((longlong)local_88 + (longlong)iVar8) =
               *(undefined1 *)((longlong)pvVar3 + lVar10);
          local_90 = iVar8;
          local_60 = &local_8c;
          local_58 = &local_90;
          FUN_140c0fbee(param_2,local_4c,&local_60,0);
          uVar5 = *(uint *)(param_1 + 1);
        }
        local_8c = local_8c + 1;
      } while (local_8c < (int)uVar5);
    }
    pvVar3 = local_88;
    if (&local_88 != param_1) {
      iVar8 = (int)uStack_80;
      _Size = (size_t)(int)uStack_80;
      *(int *)(param_1 + 1) = (int)uStack_80;
      if ((int)uStack_80 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1447cd5fa(param_1,uStack_80 & 0xffffffff);
        if (iVar8 != 0) {
          memcpy(*param_1,pvVar3,_Size);
        }
      }
    }
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    FUN_14481578e(param_1 + 2,0);
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  iVar8 = *(int *)(param_1 + 3);
LAB_1466cdcbc:
  if (*(int *)((longlong)param_1 + 0x1c) != iVar8) {
    FUN_14481578e(param_1 + 2);
  }
  if (*(int *)((longlong)param_1 + 0xc) != *(int *)(param_1 + 1)) {
    FUN_14475e67c(param_1);
  }
  if (*param_3 != 0) {
    plVar7 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1466cdf4a FUN_1466cdf4a body=764 status=ok
// SIG undefined FUN_1466cdf4a(void)

undefined8 * FUN_1466cdf4a(void **param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  void *pvVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  void *local_98;
  int local_90;
  int local_8c;
  void *local_88;
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  int *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar8 = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar9 = *(uint *)(param_1 + 3);
  if (uVar9 == 0) goto LAB_1466cdfaa;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar9 == uVar5) {
    if (*param_3 != 0) {
      uStack_70 = (ulonglong)uVar9;
LAB_1466ce048:
      FUN_1401c3474(&local_78);
      goto LAB_1466ce05a;
    }
  }
  else {
    uStack_70 = (ulonglong)uVar5;
    if (uVar5 != 0) goto LAB_1466ce048;
LAB_1466ce05a:
    uVar9 = 0;
    memset(local_78,0,(longlong)(int)uVar5);
    iVar8 = *(int *)(param_1 + 3);
    if ((longlong)iVar8 != 0) {
      local_98 = param_1[2];
      local_a0 = param_3 + 4;
      lVar10 = 0;
      do {
        iVar1 = *(int *)((longlong)local_98 + lVar10);
        *(undefined1 *)((longlong)local_78 + (longlong)iVar1) = 1;
        pcVar2 = (code *)*param_3;
        if (pcVar2 != (code *)0x0) {
          pvVar3 = *param_1;
          local_60 = (int *)CONCAT44(local_60._4_4_,iVar1);
          plVar7 = (longlong *)param_3[2];
          if ((longlong *)param_3[2] == (longlong *)0x0) {
            plVar7 = local_a0;
          }
          uVar6 = (**(code **)(*plVar7 + 8))();
          (*pcVar2)(uVar6,&local_60,(void *)((longlong)iVar1 * 4 + (longlong)pvVar3));
        }
        lVar10 = lVar10 + 4;
      } while ((longlong)iVar8 * 4 != lVar10);
      uVar9 = *(uint *)(param_1 + 3);
    }
  }
  uVar5 = *(uint *)(param_1 + 1);
  if (uVar5 == uVar9) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_14482f6fa(param_1,0);
    }
  }
  else {
    local_88 = (void *)0x0;
    uStack_80 = 0;
    if ((int)uVar9 < (int)uVar5) {
      FUN_14482f6fa();
      uVar5 = *(uint *)(param_1 + 1);
    }
    local_8c = 0;
    if (0 < (int)uVar5) {
      do {
        uVar4 = uStack_80;
        lVar10 = (longlong)local_8c;
        if (*(char *)((longlong)local_78 + lVar10) == '\0') {
          pvVar3 = *param_1;
          iVar8 = (int)uStack_80;
          uVar9 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
          if (uStack_80._4_4_ < uVar9) {
            FUN_14475e4ac(&local_88,uVar4 & 0xffffffff);
          }
          *(undefined4 *)((longlong)local_88 + (longlong)iVar8 * 4) =
               *(undefined4 *)((longlong)pvVar3 + lVar10 * 4);
          local_90 = iVar8;
          local_60 = &local_8c;
          local_58 = &local_90;
          FUN_140c0fbee(param_2,local_4c,&local_60,0);
          uVar5 = *(uint *)(param_1 + 1);
        }
        local_8c = local_8c + 1;
      } while (local_8c < (int)uVar5);
    }
    pvVar3 = local_88;
    if (&local_88 != param_1) {
      iVar8 = (int)uStack_80;
      lVar10 = (longlong)(int)uStack_80;
      *(int *)(param_1 + 1) = (int)uStack_80;
      if ((int)uStack_80 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1447c510a(param_1,uStack_80 & 0xffffffff);
        if (iVar8 != 0) {
          memcpy(*param_1,pvVar3,lVar10 << 2);
        }
      }
    }
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    FUN_14481578e(param_1 + 2,0);
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  iVar8 = *(int *)(param_1 + 3);
LAB_1466cdfaa:
  if (*(int *)((longlong)param_1 + 0x1c) != iVar8) {
    FUN_14481578e(param_1 + 2);
  }
  if (*(int *)((longlong)param_1 + 0xc) != *(int *)(param_1 + 1)) {
    FUN_14482f6fa(param_1);
  }
  if (*param_3 != 0) {
    plVar7 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1466ce248 FUN_1466ce248 body=101 status=ok
// SIG undefined FUN_1466ce248(void)

void FUN_1466ce248(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  cVar1 = FUN_144729dda(param_1 + 0x310);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x310);
    if (lVar2 != 0) {
      FUN_140ad4952(param_1,lVar2,1);
      goto LAB_1466ce290;
    }
  }
  FUN_14150bb00(param_1,1);
LAB_1466ce290:
                    /* WARNING: Could not recover jumptable at 0x0001466ce29a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  return;
}



// FUNCTION 1466ce2ad FUN_1466ce2ad body=221 status=ok
// SIG undefined FUN_1466ce2ad(void)

undefined8
FUN_1466ce2ad(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

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
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1458b5ed8();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1466ce38c FUN_1466ce38c body=224 status=ok
// SIG undefined FUN_1466ce38c(void)

longlong FUN_1466ce38c(undefined8 param_1,uint param_2,char param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_2;
  lVar2 = FUN_14001cc68((longlong)(int)param_2 * 0x58);
  if ((int)param_2 < 1) {
    *(uint *)(lVar2 + 0x2c) = param_2;
  }
  else {
    lVar3 = 0;
    do {
      *(undefined8 *)(lVar2 + 8 + lVar3) = param_1;
      *(undefined1 *)(lVar2 + 0x10 + lVar3) = 8;
      *(undefined8 *)(lVar2 + 0x14 + lVar3) = 0;
      *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0xffffffffffffffff;
      *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0xffffffff;
      *(undefined1 *)(lVar2 + 0x28 + lVar3) = 0;
      *(undefined8 *)(lVar2 + 0x2c + lVar3) = 0xffffffff00000000;
      *(undefined4 *)(lVar2 + 0x34 + lVar3) = 0xffffffff;
      puVar1 = (undefined8 *)(lVar2 + 0x38 + lVar3);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined ***)(lVar2 + lVar3) = &PTR_FUN_14bb770a0;
      *(undefined1 *)(lVar2 + 0x48 + lVar3) = 1;
      *(undefined4 *)(lVar2 + 0x4c + lVar3) = 0xffffffff;
      *(undefined8 *)(lVar2 + 0x50 + lVar3) = 0;
      lVar3 = lVar3 + 0x58;
    } while (uVar4 * 0x58 - lVar3 != 0);
    *(uint *)(lVar2 + 0x2c) = param_2;
    lVar3 = lVar2;
    if (param_3 != '\0') {
      do {
        FUN_1491d7c54(param_1,lVar3,0);
        uVar4 = uVar4 - 1;
        lVar3 = lVar3 + 0x58;
      } while (uVar4 != 0);
    }
  }
  return lVar2;
}



// FUNCTION 1466ce46c FUN_1466ce46c body=48 status=ok
// SIG undefined FUN_1466ce46c(void)

void FUN_1466ce46c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bb8a280;
  return;
}



// FUNCTION 1466ce49c FUN_1466ce49c body=55 status=ok
// SIG undefined FUN_1466ce49c(void)

void FUN_1466ce49c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07838 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07838 = FUN_140002ddd(FUN_1466ce4d3,uVar1,L"RigHierarchyContainer");
  }
  return;
}



// FUNCTION 1466ce4d3 FUN_1466ce4d3 body=47 status=ok
// SIG undefined FUN_1466ce4d3(void)

longlong FUN_1466ce4d3(void)

{
  if (DAT_14cc07830 == 0) {
    FUN_14086a14e(&DAT_14cc07830,&PTR_FUN_14bb7b798);
  }
  return DAT_14cc07830;
}



// FUNCTION 1466ce502 FUN_1466ce502 body=47 status=ok
// SIG undefined FUN_1466ce502(void)

longlong FUN_1466ce502(void)

{
  if (DAT_14cc08078 == 0) {
    FUN_14086a14e(&DAT_14cc08078,&PTR_FUN_14bb86388);
  }
  return DAT_14cc08078;
}



// FUNCTION 1466ce532 FUN_1466ce532 body=48 status=ok
// SIG undefined FUN_1466ce532(void)

void FUN_1466ce532(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bb8a3f0;
  return;
}



// FUNCTION 1466ce562 FUN_1466ce562 body=55 status=ok
// SIG undefined FUN_1466ce562(void)

void FUN_1466ce562(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc07850 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc07850 = FUN_140002ddd(FUN_1466ce599,uVar1,L"RigHierarchyRef");
  }
  return;
}



// FUNCTION 1466ce599 FUN_1466ce599 body=47 status=ok
// SIG undefined FUN_1466ce599(void)

longlong FUN_1466ce599(void)

{
  if (DAT_14cc07848 == 0) {
    FUN_14086a14e(&DAT_14cc07848,&PTR_FUN_14bb7b800);
  }
  return DAT_14cc07848;
}



// FUNCTION 1466ce5c8 FUN_1466ce5c8 body=48 status=ok
// SIG undefined FUN_1466ce5c8(void)

void FUN_1466ce5c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14bb8a550;
  return;
}



// FUNCTION 1466ce5f8 FUN_1466ce5f8 body=55 status=ok
// SIG undefined FUN_1466ce5f8(void)

void FUN_1466ce5f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc08068 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc08068 = FUN_140002ddd(FUN_1466d0865,uVar1,L"RigSpace");
  }
  return;
}



// FUNCTION 1466ce62f FUN_1466ce62f body=47 status=ok
// SIG undefined FUN_1466ce62f(void)

longlong FUN_1466ce62f(void)

{
  if (DAT_14cc07860 == 0) {
    FUN_14000fc22(&DAT_14cc07860,&PTR_FUN_14bb7ba78);
  }
  return DAT_14cc07860;
}



// FUNCTION 1466ce65e FUN_1466ce65e body=47 status=ok
// SIG undefined FUN_1466ce65e(void)

longlong FUN_1466ce65e(void)

{
  if (DAT_14cc07868 == 0) {
    FUN_14000fc22(&DAT_14cc07868,&PTR_FUN_14bb7bc50);
  }
  return DAT_14cc07868;
}



// FUNCTION 1466ce68d FUN_1466ce68d body=47 status=ok
// SIG undefined FUN_1466ce68d(void)

longlong FUN_1466ce68d(void)

{
  if (DAT_14cc07870 == 0) {
    FUN_14000fc22(&DAT_14cc07870,&PTR_FUN_14bb7bf40);
  }
  return DAT_14cc07870;
}



// FUNCTION 1466ce6bc FUN_1466ce6bc body=47 status=ok
// SIG undefined FUN_1466ce6bc(void)

longlong FUN_1466ce6bc(void)

{
  if (DAT_14cc07878 == 0) {
    FUN_14000fc22(&DAT_14cc07878,&PTR_FUN_14bb7c108);
  }
  return DAT_14cc07878;
}



// FUNCTION 1466ce6eb FUN_1466ce6eb body=47 status=ok
// SIG undefined FUN_1466ce6eb(void)

longlong FUN_1466ce6eb(void)

{
  if (DAT_14cc07880 == 0) {
    FUN_14000fc22(&DAT_14cc07880,&PTR_FUN_14bb7c2b8);
  }
  return DAT_14cc07880;
}



// FUNCTION 1466ce71a FUN_1466ce71a body=47 status=ok
// SIG undefined FUN_1466ce71a(void)

longlong FUN_1466ce71a(void)

{
  if (DAT_14cc07888 == 0) {
    FUN_14000fc22(&DAT_14cc07888,&PTR_FUN_14bb7c500);
  }
  return DAT_14cc07888;
}



// FUNCTION 1466ce749 FUN_1466ce749 body=47 status=ok
// SIG undefined FUN_1466ce749(void)

longlong FUN_1466ce749(void)

{
  if (DAT_14cc07890 == 0) {
    FUN_14000fc22(&DAT_14cc07890,&PTR_FUN_14bb7c698);
  }
  return DAT_14cc07890;
}



// FUNCTION 1466ce778 FUN_1466ce778 body=47 status=ok
// SIG undefined FUN_1466ce778(void)

longlong FUN_1466ce778(void)

{
  if (DAT_14cc07898 == 0) {
    FUN_14000fc22(&DAT_14cc07898,&PTR_FUN_14bb7c8d0);
  }
  return DAT_14cc07898;
}



// FUNCTION 1466ce7a7 FUN_1466ce7a7 body=47 status=ok
// SIG undefined FUN_1466ce7a7(void)

longlong FUN_1466ce7a7(void)

{
  if (DAT_14cc078a0 == 0) {
    FUN_14000fc22(&DAT_14cc078a0,&PTR_FUN_14bb7caf0);
  }
  return DAT_14cc078a0;
}



// FUNCTION 1466ce7d6 FUN_1466ce7d6 body=47 status=ok
// SIG undefined FUN_1466ce7d6(void)

longlong FUN_1466ce7d6(void)

{
  if (DAT_14cc078a8 == 0) {
    FUN_14000fc22(&DAT_14cc078a8,&PTR_FUN_14bb7cda8);
  }
  return DAT_14cc078a8;
}



// FUNCTION 1466ce805 FUN_1466ce805 body=47 status=ok
// SIG undefined FUN_1466ce805(void)

longlong FUN_1466ce805(void)

{
  if (DAT_14cc078b0 == 0) {
    FUN_14000fc22(&DAT_14cc078b0,&PTR_FUN_14bb7d078);
  }
  return DAT_14cc078b0;
}



// FUNCTION 1466ce834 FUN_1466ce834 body=47 status=ok
// SIG undefined FUN_1466ce834(void)

longlong FUN_1466ce834(void)

{
  if (DAT_14cc078b8 == 0) {
    FUN_14000fc22(&DAT_14cc078b8,&PTR_FUN_14bb7d100);
  }
  return DAT_14cc078b8;
}



// FUNCTION 1466ce863 FUN_1466ce863 body=47 status=ok
// SIG undefined FUN_1466ce863(void)

longlong FUN_1466ce863(void)

{
  if (DAT_14cc078c0 == 0) {
    FUN_14000fc22(&DAT_14cc078c0,&PTR_FUN_14bb7d1d0);
  }
  return DAT_14cc078c0;
}



// FUNCTION 1466ce892 FUN_1466ce892 body=47 status=ok
// SIG undefined FUN_1466ce892(void)

longlong FUN_1466ce892(void)

{
  if (DAT_14cc078c8 == 0) {
    FUN_14000fc22(&DAT_14cc078c8,&PTR_FUN_14bb7d430);
  }
  return DAT_14cc078c8;
}


