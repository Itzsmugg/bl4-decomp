// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1465ba056 FUN_1465ba056 body=55 status=ok
// SIG undefined FUN_1465ba056(void)

void FUN_1465ba056(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3870 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3870 =
         FUN_140002ddd(FUN_1465ba08d,uVar1,L"GbxStatusEffectAspectData_CharacterLocksItem");
  }
  return;
}



// FUNCTION 1465ba08d FUN_1465ba08d body=49 status=ok
// SIG undefined FUN_1465ba08d(void)

longlong FUN_1465ba08d(void)

{
  if (DAT_14cba3868 == 0) {
    FUN_14086a14e(&DAT_14cba3868,&PTR_FUN_14b64e360);
  }
  return DAT_14cba3868;
}



// FUNCTION 1465ba0be FUN_1465ba0be body=48 status=ok
// SIG undefined FUN_1465ba0be(void)

void FUN_1465ba0be(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14b6526f0;
  return;
}



// FUNCTION 1465ba0ee FUN_1465ba0ee body=55 status=ok
// SIG undefined FUN_1465ba0ee(void)

void FUN_1465ba0ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3888 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3888 = FUN_140002ddd(FUN_1465ba125,uVar1,L"GbxStatusEffectAspectData_CharacterLocks");
  }
  return;
}



// FUNCTION 1465ba125 FUN_1465ba125 body=47 status=ok
// SIG undefined FUN_1465ba125(void)

longlong FUN_1465ba125(void)

{
  if (DAT_14cba3880 == 0) {
    FUN_14086a14e(&DAT_14cba3880,&PTR_FUN_14b64e4f8);
  }
  return DAT_14cba3880;
}



// FUNCTION 1465ba154 FUN_1465ba154 body=48 status=ok
// SIG undefined FUN_1465ba154(void)

void FUN_1465ba154(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000080;
  *puVar1 = &PTR_FUN_14b652850;
  return;
}



// FUNCTION 1465ba184 FUN_1465ba184 body=40 status=ok
// SIG undefined FUN_1465ba184(void)

undefined8 FUN_1465ba184(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba1ac FUN_1465ba1ac body=29 status=ok
// SIG undefined FUN_1465ba1ac(void)

undefined8 FUN_1465ba1ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba1ca FUN_1465ba1ca body=29 status=ok
// SIG undefined FUN_1465ba1ca(void)

undefined8 FUN_1465ba1ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba1e8 FUN_1465ba1e8 body=62 status=ok
// SIG undefined FUN_1465ba1e8(void)

void FUN_1465ba1e8(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x138);
  FUN_140f23ff6(param_2);
  *(undefined1 *)((longlong)param_2 + 0x130) = 0;
  *(undefined8 *)((longlong)param_2 + 0x110) = 0;
  *(undefined8 *)((longlong)param_2 + 0x118) = 0;
  *(undefined8 *)((longlong)param_2 + 0x119) = 0;
  *(undefined8 *)((longlong)param_2 + 0x121) = 0;
  return;
}



// FUNCTION 1465ba226 FUN_1465ba226 body=29 status=ok
// SIG undefined FUN_1465ba226(void)

undefined8 FUN_1465ba226(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba244 FUN_1465ba244 body=42 status=ok
// SIG undefined FUN_1465ba244(void)

void FUN_1465ba244(undefined8 param_1,longlong param_2)

{
  FUN_144a2da94(param_2 + 0x40);
  if (*(longlong *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1465ba26e FUN_1465ba26e body=29 status=ok
// SIG undefined FUN_1465ba26e(void)

undefined8 FUN_1465ba26e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba28c FUN_1465ba28c body=29 status=ok
// SIG undefined FUN_1465ba28c(void)

undefined8 FUN_1465ba28c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba2aa FUN_1465ba2aa body=29 status=ok
// SIG undefined FUN_1465ba2aa(void)

undefined8 FUN_1465ba2aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba2c8 FUN_1465ba2c8 body=29 status=ok
// SIG undefined FUN_1465ba2c8(void)

undefined8 FUN_1465ba2c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba2e6 FUN_1465ba2e6 body=29 status=ok
// SIG undefined FUN_1465ba2e6(void)

undefined8 FUN_1465ba2e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba304 FUN_1465ba304 body=29 status=ok
// SIG undefined FUN_1465ba304(void)

undefined8 FUN_1465ba304(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba322 FUN_1465ba322 body=29 status=ok
// SIG undefined FUN_1465ba322(void)

undefined8 FUN_1465ba322(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba340 FUN_1465ba340 body=29 status=ok
// SIG undefined FUN_1465ba340(void)

undefined8 FUN_1465ba340(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba35e FUN_1465ba35e body=29 status=ok
// SIG undefined FUN_1465ba35e(void)

undefined8 FUN_1465ba35e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba37c FUN_1465ba37c body=29 status=ok
// SIG undefined FUN_1465ba37c(void)

undefined8 FUN_1465ba37c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba39a FUN_1465ba39a body=29 status=ok
// SIG undefined FUN_1465ba39a(void)

undefined8 FUN_1465ba39a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba3b8 FUN_1465ba3b8 body=29 status=ok
// SIG undefined FUN_1465ba3b8(void)

undefined8 FUN_1465ba3b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba3d6 FUN_1465ba3d6 body=29 status=ok
// SIG undefined FUN_1465ba3d6(void)

undefined8 FUN_1465ba3d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba3f4 FUN_1465ba3f4 body=29 status=ok
// SIG undefined FUN_1465ba3f4(void)

undefined8 FUN_1465ba3f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba412 FUN_1465ba412 body=29 status=ok
// SIG undefined FUN_1465ba412(void)

undefined8 FUN_1465ba412(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba430 FUN_1465ba430 body=29 status=ok
// SIG undefined FUN_1465ba430(void)

undefined8 FUN_1465ba430(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba44e FUN_1465ba44e body=29 status=ok
// SIG undefined FUN_1465ba44e(void)

undefined8 FUN_1465ba44e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba46c FUN_1465ba46c body=29 status=ok
// SIG undefined FUN_1465ba46c(void)

undefined8 FUN_1465ba46c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba48a FUN_1465ba48a body=29 status=ok
// SIG undefined FUN_1465ba48a(void)

undefined8 FUN_1465ba48a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba4a8 FUN_1465ba4a8 body=29 status=ok
// SIG undefined FUN_1465ba4a8(void)

undefined8 FUN_1465ba4a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba4c6 FUN_1465ba4c6 body=29 status=ok
// SIG undefined FUN_1465ba4c6(void)

undefined8 FUN_1465ba4c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba4e4 FUN_1465ba4e4 body=29 status=ok
// SIG undefined FUN_1465ba4e4(void)

undefined8 FUN_1465ba4e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba502 FUN_1465ba502 body=29 status=ok
// SIG undefined FUN_1465ba502(void)

undefined8 FUN_1465ba502(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba520 FUN_1465ba520 body=29 status=ok
// SIG undefined FUN_1465ba520(void)

undefined8 FUN_1465ba520(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba53e FUN_1465ba53e body=29 status=ok
// SIG undefined FUN_1465ba53e(void)

undefined8 FUN_1465ba53e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba55c FUN_1465ba55c body=29 status=ok
// SIG undefined FUN_1465ba55c(void)

undefined8 FUN_1465ba55c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba57a FUN_1465ba57a body=29 status=ok
// SIG undefined FUN_1465ba57a(void)

undefined8 FUN_1465ba57a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba598 FUN_1465ba598 body=29 status=ok
// SIG undefined FUN_1465ba598(void)

undefined8 FUN_1465ba598(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba5b6 FUN_1465ba5b6 body=29 status=ok
// SIG undefined FUN_1465ba5b6(void)

undefined8 FUN_1465ba5b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba5d4 FUN_1465ba5d4 body=29 status=ok
// SIG undefined FUN_1465ba5d4(void)

undefined8 FUN_1465ba5d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba5f2 FUN_1465ba5f2 body=29 status=ok
// SIG undefined FUN_1465ba5f2(void)

undefined8 FUN_1465ba5f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba610 FUN_1465ba610 body=29 status=ok
// SIG undefined FUN_1465ba610(void)

undefined8 FUN_1465ba610(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465ba62e FUN_1465ba62e body=55 status=ok
// SIG undefined FUN_1465ba62e(void)

void FUN_1465ba62e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba38b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba38b8 = FUN_140002ddd(FUN_1465ba665,uVar1,L"GbxStatusEffectAspectData_Movement");
  }
  return;
}



// FUNCTION 1465ba665 FUN_1465ba665 body=47 status=ok
// SIG undefined FUN_1465ba665(void)

longlong FUN_1465ba665(void)

{
  if (DAT_14cba38b0 == 0) {
    FUN_14086a14e(&DAT_14cba38b0,&PTR_FUN_14b653a68);
  }
  return DAT_14cba38b0;
}



// FUNCTION 1465ba694 FUN_1465ba694 body=48 status=ok
// SIG undefined FUN_1465ba694(void)

void FUN_1465ba694(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b65a0b0;
  return;
}



// FUNCTION 1465ba6c4 FUN_1465ba6c4 body=47 status=ok
// SIG undefined FUN_1465ba6c4(void)

longlong FUN_1465ba6c4(void)

{
  if (DAT_14cba38c8 == 0) {
    FUN_1409ce572(&DAT_14cba38c8,&PTR_FUN_14b653b10);
  }
  return DAT_14cba38c8;
}



// FUNCTION 1465ba6f3 FUN_1465ba6f3 body=47 status=ok
// SIG undefined FUN_1465ba6f3(void)

longlong FUN_1465ba6f3(void)

{
  if (DAT_14cba38e0 == 0) {
    FUN_14086a14e(&DAT_14cba38e0,&PTR_FUN_14b653c88);
  }
  return DAT_14cba38e0;
}



// FUNCTION 1465ba722 FUN_1465ba722 body=48 status=ok
// SIG undefined FUN_1465ba722(void)

void FUN_1465ba722(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14b65a2e0;
  return;
}



// FUNCTION 1465ba752 FUN_1465ba752 body=55 status=ok
// SIG undefined FUN_1465ba752(void)

void FUN_1465ba752(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3900 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3900 = FUN_140002ddd(FUN_1465ba789,uVar1,L"GbxStatusEffectConditionData_FFYL");
  }
  return;
}



// FUNCTION 1465ba789 FUN_1465ba789 body=47 status=ok
// SIG undefined FUN_1465ba789(void)

longlong FUN_1465ba789(void)

{
  if (DAT_14cba38f8 == 0) {
    FUN_14086a14e(&DAT_14cba38f8,&PTR_FUN_14b653e98);
  }
  return DAT_14cba38f8;
}



// FUNCTION 1465ba7b8 FUN_1465ba7b8 body=48 status=ok
// SIG undefined FUN_1465ba7b8(void)

void FUN_1465ba7b8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b65a480;
  return;
}



// FUNCTION 1465ba7e8 FUN_1465ba7e8 body=55 status=ok
// SIG undefined FUN_1465ba7e8(void)

void FUN_1465ba7e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3918 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3918 = FUN_140002ddd(FUN_1465ba81f,uVar1,L"GbxStatusEffectConditionData_HasElemental");
  }
  return;
}



// FUNCTION 1465ba81f FUN_1465ba81f body=47 status=ok
// SIG undefined FUN_1465ba81f(void)

longlong FUN_1465ba81f(void)

{
  if (DAT_14cba3910 == 0) {
    FUN_14086a14e(&DAT_14cba3910,&PTR_FUN_14b653f78);
  }
  return DAT_14cba3910;
}



// FUNCTION 1465ba84e FUN_1465ba84e body=48 status=ok
// SIG undefined FUN_1465ba84e(void)

void FUN_1465ba84e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b65a610;
  return;
}



// FUNCTION 1465ba87e FUN_1465ba87e body=39 status=ok
// SIG undefined FUN_1465ba87e(void)

void FUN_1465ba87e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141051098(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b6540d0;
  *(undefined1 *)(puVar1 + 7) = 1;
  return;
}



// FUNCTION 1465ba8a5 FUN_1465ba8a5 body=47 status=ok
// SIG undefined FUN_1465ba8a5(void)

longlong FUN_1465ba8a5(void)

{
  if (DAT_14cba3930 == 0) {
    FUN_14073dd9a(&DAT_14cba3930,&PTR_LAB_14b654088);
  }
  return DAT_14cba3930;
}



// FUNCTION 1465ba8d4 FUN_1465ba8d4 body=49 status=ok
// SIG undefined FUN_1465ba8d4(void)

longlong FUN_1465ba8d4(void)

{
  if (DAT_14cba3a38 == 0) {
    FUN_14073dd9a(&DAT_14cba3a38,&PTR_LAB_14b654f20);
  }
  return DAT_14cba3a38;
}



// FUNCTION 1465ba905 FUN_1465ba905 body=47 status=ok
// SIG undefined FUN_1465ba905(void)

longlong FUN_1465ba905(void)

{
  if (DAT_14cba3958 == 0) {
    FUN_14000fc22(&DAT_14cba3958,&PTR_FUN_14b654430);
  }
  return DAT_14cba3958;
}



// FUNCTION 1465ba934 FUN_1465ba934 body=47 status=ok
// SIG undefined FUN_1465ba934(void)

longlong FUN_1465ba934(void)

{
  if (DAT_14cba3968 == 0) {
    FUN_14000fc22(&DAT_14cba3968,&PTR_FUN_14b6544e8);
  }
  return DAT_14cba3968;
}



// FUNCTION 1465ba963 FUN_1465ba963 body=47 status=ok
// SIG undefined FUN_1465ba963(void)

longlong FUN_1465ba963(void)

{
  if (DAT_14cba3978 == 0) {
    FUN_14000fc22(&DAT_14cba3978,&PTR_FUN_14b6545a0);
  }
  return DAT_14cba3978;
}



// FUNCTION 1465ba992 FUN_1465ba992 body=47 status=ok
// SIG undefined FUN_1465ba992(void)

longlong FUN_1465ba992(void)

{
  if (DAT_14cba3988 == 0) {
    FUN_14000fc22(&DAT_14cba3988,&PTR_FUN_14b654628);
  }
  return DAT_14cba3988;
}



// FUNCTION 1465ba9c1 FUN_1465ba9c1 body=47 status=ok
// SIG undefined FUN_1465ba9c1(void)

longlong FUN_1465ba9c1(void)

{
  if (DAT_14cba3998 == 0) {
    FUN_14000fc22(&DAT_14cba3998,&PTR_FUN_14b6546e0);
  }
  return DAT_14cba3998;
}



// FUNCTION 1465ba9f0 FUN_1465ba9f0 body=47 status=ok
// SIG undefined FUN_1465ba9f0(void)

longlong FUN_1465ba9f0(void)

{
  if (DAT_14cba39a8 == 0) {
    FUN_14000fc22(&DAT_14cba39a8,&PTR_FUN_14b654798);
  }
  return DAT_14cba39a8;
}



// FUNCTION 1465baa1f FUN_1465baa1f body=47 status=ok
// SIG undefined FUN_1465baa1f(void)

longlong FUN_1465baa1f(void)

{
  if (DAT_14cba39b8 == 0) {
    FUN_14000fc22(&DAT_14cba39b8,&PTR_FUN_14b654850);
  }
  return DAT_14cba39b8;
}



// FUNCTION 1465baa4e FUN_1465baa4e body=47 status=ok
// SIG undefined FUN_1465baa4e(void)

longlong FUN_1465baa4e(void)

{
  if (DAT_14cba39c8 == 0) {
    FUN_14000fc22(&DAT_14cba39c8,&PTR_FUN_14b654900);
  }
  return DAT_14cba39c8;
}



// FUNCTION 1465baa7d FUN_1465baa7d body=47 status=ok
// SIG undefined FUN_1465baa7d(void)

longlong FUN_1465baa7d(void)

{
  if (DAT_14cba39d8 == 0) {
    FUN_14000fc22(&DAT_14cba39d8,&PTR_FUN_14b6549c8);
  }
  return DAT_14cba39d8;
}



// FUNCTION 1465baaac FUN_1465baaac body=47 status=ok
// SIG undefined FUN_1465baaac(void)

longlong FUN_1465baaac(void)

{
  if (DAT_14cba39e8 == 0) {
    FUN_14000fc22(&DAT_14cba39e8,&PTR_FUN_14b654a90);
  }
  return DAT_14cba39e8;
}



// FUNCTION 1465baadb FUN_1465baadb body=47 status=ok
// SIG undefined FUN_1465baadb(void)

longlong FUN_1465baadb(void)

{
  if (DAT_14cba39f8 == 0) {
    FUN_14000fc22(&DAT_14cba39f8,&PTR_FUN_14b654b60);
  }
  return DAT_14cba39f8;
}



// FUNCTION 1465bab0a FUN_1465bab0a body=47 status=ok
// SIG undefined FUN_1465bab0a(void)

longlong FUN_1465bab0a(void)

{
  if (DAT_14cba3a08 == 0) {
    FUN_14000fc22(&DAT_14cba3a08,&PTR_FUN_14b654c30);
  }
  return DAT_14cba3a08;
}



// FUNCTION 1465bab39 FUN_1465bab39 body=47 status=ok
// SIG undefined FUN_1465bab39(void)

longlong FUN_1465bab39(void)

{
  if (DAT_14cba3a18 == 0) {
    FUN_14000fc22(&DAT_14cba3a18,&PTR_FUN_14b654ce8);
  }
  return DAT_14cba3a18;
}



// FUNCTION 1465bab68 FUN_1465bab68 body=47 status=ok
// SIG undefined FUN_1465bab68(void)

longlong FUN_1465bab68(void)

{
  if (DAT_14cba3a28 == 0) {
    FUN_14000fc22(&DAT_14cba3a28,&PTR_FUN_14b654da0);
  }
  return DAT_14cba3a28;
}



// FUNCTION 1465bab97 FUN_1465bab97 body=46 status=ok
// SIG undefined FUN_1465bab97(void)

void FUN_1465bab97(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14060481e(puVar1,param_1);
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b654f60;
  return;
}



// FUNCTION 1465babd0 FUN_1465babd0 body=47 status=ok
// SIG undefined FUN_1465babd0(void)

longlong FUN_1465babd0(void)

{
  if (DAT_14cba3a50 == 0) {
    FUN_14073dd9a(&DAT_14cba3a50,&PTR_LAB_14b6555a8);
  }
  return DAT_14cba3a50;
}



// FUNCTION 1465babff FUN_1465babff body=47 status=ok
// SIG undefined FUN_1465babff(void)

longlong FUN_1465babff(void)

{
  if (DAT_14cba3a78 == 0) {
    FUN_14073dd9a(&DAT_14cba3a78,&PTR_LAB_14b655688);
  }
  return DAT_14cba3a78;
}



// FUNCTION 1465bac2e FUN_1465bac2e body=47 status=ok
// SIG undefined FUN_1465bac2e(void)

longlong FUN_1465bac2e(void)

{
  if (DAT_14cba3a90 == 0) {
    FUN_14073dd9a(&DAT_14cba3a90,&PTR_LAB_14b655ac8);
  }
  return DAT_14cba3a90;
}



// FUNCTION 1465bac5d FUN_1465bac5d body=47 status=ok
// SIG undefined FUN_1465bac5d(void)

longlong FUN_1465bac5d(void)

{
  if (DAT_14cba3ab8 == 0) {
    FUN_14073dd9a(&DAT_14cba3ab8,&PTR_LAB_14b655d20);
  }
  return DAT_14cba3ab8;
}



// FUNCTION 1465bac8c FUN_1465bac8c body=47 status=ok
// SIG undefined FUN_1465bac8c(void)

longlong FUN_1465bac8c(void)

{
  if (DAT_14cba3aa8 == 0) {
    FUN_14000fc22(&DAT_14cba3aa8,&PTR_FUN_14b655c68);
  }
  return DAT_14cba3aa8;
}



// FUNCTION 1465bacc1 FUN_1465bacc1 body=47 status=ok
// SIG undefined FUN_1465bacc1(void)

longlong FUN_1465bacc1(void)

{
  if (DAT_14cba3ad0 == 0) {
    FUN_14073dd9a(&DAT_14cba3ad0,&PTR_LAB_14b656168);
  }
  return DAT_14cba3ad0;
}



// FUNCTION 1465bacf0 FUN_1465bacf0 body=55 status=ok
// SIG undefined FUN_1465bacf0(void)

void FUN_1465bacf0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3ae8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3ae8 = FUN_140002ddd(FUN_1465bad27,uVar1,L"ElementalHitReaction");
  }
  return;
}



// FUNCTION 1465bad27 FUN_1465bad27 body=49 status=ok
// SIG undefined FUN_1465bad27(void)

longlong FUN_1465bad27(void)

{
  if (DAT_14cba3ae0 == 0) {
    FUN_14086a14e(&DAT_14cba3ae0,&PTR_FUN_14b656240);
  }
  return DAT_14cba3ae0;
}



// FUNCTION 1465bad58 FUN_1465bad58 body=48 status=ok
// SIG undefined FUN_1465bad58(void)

void FUN_1465bad58(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14b65a7a0;
  return;
}



// FUNCTION 1465bad88 FUN_1465bad88 body=64 status=ok
// SIG undefined FUN_1465bad88(void)

void FUN_1465bad88(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14076ff26(puVar1);
  *puVar1 = &PTR_FUN_14b656370;
  puVar1[6] = &PTR_FUN_14b656660;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  return;
}



// FUNCTION 1465badc8 FUN_1465badc8 body=47 status=ok
// SIG undefined FUN_1465badc8(void)

longlong FUN_1465badc8(void)

{
  if (DAT_14cba3b00 == 0) {
    FUN_14073dd9a(&DAT_14cba3b00,&PTR_LAB_14b656328);
  }
  return DAT_14cba3b00;
}



// FUNCTION 1465badf7 FUN_1465badf7 body=47 status=ok
// SIG undefined FUN_1465badf7(void)

longlong FUN_1465badf7(void)

{
  if (DAT_14cba3b18 == 0) {
    FUN_14073dd9a(&DAT_14cba3b18,&PTR_LAB_14b656718);
  }
  return DAT_14cba3b18;
}



// FUNCTION 1465bae26 FUN_1465bae26 body=47 status=ok
// SIG undefined FUN_1465bae26(void)

longlong FUN_1465bae26(void)

{
  if (DAT_14cba3b30 == 0) {
    FUN_14073dd9a(&DAT_14cba3b30,&PTR_LAB_14b656968);
  }
  return DAT_14cba3b30;
}



// FUNCTION 1465bae56 FUN_1465bae56 body=55 status=ok
// SIG undefined FUN_1465bae56(void)

void FUN_1465bae56(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3b48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3b48 = FUN_140002ddd(FUN_1465bae8d,uVar1,L"SlamTrickProperties");
  }
  return;
}



// FUNCTION 1465bae8d FUN_1465bae8d body=49 status=ok
// SIG undefined FUN_1465bae8d(void)

longlong FUN_1465bae8d(void)

{
  if (DAT_14cba3b40 == 0) {
    FUN_14086a14e(&DAT_14cba3b40,&PTR_FUN_14b656d58);
  }
  return DAT_14cba3b40;
}



// FUNCTION 1465baebe FUN_1465baebe body=48 status=ok
// SIG undefined FUN_1465baebe(void)

void FUN_1465baebe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000034;
  *puVar1 = &PTR_FUN_14b65a930;
  return;
}



// FUNCTION 1465baeee FUN_1465baeee body=47 status=ok
// SIG undefined FUN_1465baeee(void)

longlong FUN_1465baeee(void)

{
  if (DAT_14cba3b60 == 0) {
    FUN_14073dd9a(&DAT_14cba3b60,&PTR_LAB_14b656ff8);
  }
  return DAT_14cba3b60;
}



// FUNCTION 1465baf1d FUN_1465baf1d body=47 status=ok
// SIG undefined FUN_1465baf1d(void)

longlong FUN_1465baf1d(void)

{
  if (DAT_14cba3bb0 == 0) {
    FUN_14000fc22(&DAT_14cba3bb0,&PTR_FUN_14b657108);
  }
  return DAT_14cba3bb0;
}



// FUNCTION 1465baf4c FUN_1465baf4c body=47 status=ok
// SIG undefined FUN_1465baf4c(void)

longlong FUN_1465baf4c(void)

{
  if (DAT_14cba3bb8 == 0) {
    FUN_14000fc22(&DAT_14cba3bb8,&PTR_FUN_14b6571c0);
  }
  return DAT_14cba3bb8;
}



// FUNCTION 1465baf7b FUN_1465baf7b body=47 status=ok
// SIG undefined FUN_1465baf7b(void)

longlong FUN_1465baf7b(void)

{
  if (DAT_14cba3bc0 == 0) {
    FUN_1409ce572(&DAT_14cba3bc0,&PTR_FUN_14b657250);
  }
  return DAT_14cba3bc0;
}



// FUNCTION 1465bafaa FUN_1465bafaa body=49 status=ok
// SIG undefined FUN_1465bafaa(void)

longlong FUN_1465bafaa(void)

{
  if (DAT_14cba3c08 == 0) {
    FUN_14073dd9a(&DAT_14cba3c08,&PTR_LAB_14b657520);
  }
  return DAT_14cba3c08;
}



// FUNCTION 1465bafdb FUN_1465bafdb body=47 status=ok
// SIG undefined FUN_1465bafdb(void)

longlong FUN_1465bafdb(void)

{
  if (DAT_14cba3bd8 == 0) {
    FUN_14000fc22(&DAT_14cba3bd8,&PTR_FUN_14b657290);
  }
  return DAT_14cba3bd8;
}



// FUNCTION 1465bb00a FUN_1465bb00a body=47 status=ok
// SIG undefined FUN_1465bb00a(void)

longlong FUN_1465bb00a(void)

{
  if (DAT_14cba3be0 == 0) {
    FUN_14000fc22(&DAT_14cba3be0,&PTR_FUN_14b657320);
  }
  return DAT_14cba3be0;
}



// FUNCTION 1465bb039 FUN_1465bb039 body=47 status=ok
// SIG undefined FUN_1465bb039(void)

longlong FUN_1465bb039(void)

{
  if (DAT_14cba3bf0 == 0) {
    FUN_14000fc22(&DAT_14cba3bf0,&PTR_FUN_14b657388);
  }
  return DAT_14cba3bf0;
}



// FUNCTION 1465bb068 FUN_1465bb068 body=47 status=ok
// SIG undefined FUN_1465bb068(void)

longlong FUN_1465bb068(void)

{
  if (DAT_14cba3bf8 == 0) {
    FUN_14000fc22(&DAT_14cba3bf8,&PTR_FUN_14b657420);
  }
  return DAT_14cba3bf8;
}



// FUNCTION 1465bb098 FUN_1465bb098 body=34 status=ok
// SIG undefined FUN_1465bb098(void)

void FUN_1465bb098(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459f2b8e();
  FUN_14069c8d6(uVar1,&PTR_s_EndStasis_14b657460,3);
  return;
}



// FUNCTION 1465bb0ba FUN_1465bb0ba body=50 status=ok
// SIG undefined FUN_1465bb0ba(void)

void FUN_1465bb0ba(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14060481e(puVar1,param_1);
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14b657560;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 1465bb0f4 FUN_1465bb0f4 body=47 status=ok
// SIG undefined FUN_1465bb0f4(void)

longlong FUN_1465bb0f4(void)

{
  if (DAT_14cba3c20 == 0) {
    FUN_14073dd9a(&DAT_14cba3c20,&PTR_LAB_14b657ea8);
  }
  return DAT_14cba3c20;
}



// FUNCTION 1465bb123 FUN_1465bb123 body=49 status=ok
// SIG undefined FUN_1465bb123(void)

longlong FUN_1465bb123(void)

{
  if (DAT_14cba3c58 == 0) {
    FUN_14073dd9a(&DAT_14cba3c58,&PTR_LAB_14b6584c0);
  }
  return DAT_14cba3c58;
}



// FUNCTION 1465bb154 FUN_1465bb154 body=47 status=ok
// SIG undefined FUN_1465bb154(void)

longlong FUN_1465bb154(void)

{
  if (DAT_14cba3c30 == 0) {
    FUN_14000fc22(&DAT_14cba3c30,&PTR_FUN_14b657f30);
  }
  return DAT_14cba3c30;
}



// FUNCTION 1465bb183 FUN_1465bb183 body=47 status=ok
// SIG undefined FUN_1465bb183(void)

longlong FUN_1465bb183(void)

{
  if (DAT_14cba3c38 == 0) {
    FUN_14000fc22(&DAT_14cba3c38,&PTR_FUN_14b658048);
  }
  return DAT_14cba3c38;
}



// FUNCTION 1465bb1b2 FUN_1465bb1b2 body=47 status=ok
// SIG undefined FUN_1465bb1b2(void)

longlong FUN_1465bb1b2(void)

{
  if (DAT_14cba3c40 == 0) {
    FUN_14000fc22(&DAT_14cba3c40,&PTR_FUN_14b6581b8);
  }
  return DAT_14cba3c40;
}



// FUNCTION 1465bb1e1 FUN_1465bb1e1 body=47 status=ok
// SIG undefined FUN_1465bb1e1(void)

longlong FUN_1465bb1e1(void)

{
  if (DAT_14cba3c48 == 0) {
    FUN_14000fc22(&DAT_14cba3c48,&PTR_FUN_14b6583a0);
  }
  return DAT_14cba3c48;
}



// FUNCTION 1465bb210 FUN_1465bb210 body=34 status=ok
// SIG undefined FUN_1465bb210(void)

void FUN_1465bb210(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a89690();
  FUN_14069c8d6(uVar1,&PTR_DAT_14b6583e0,4);
  return;
}



// FUNCTION 1465bb232 FUN_1465bb232 body=35 status=ok
// SIG undefined FUN_1465bb232(void)

void FUN_1465bb232(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b658500;
  return;
}



// FUNCTION 1465bb255 FUN_1465bb255 body=47 status=ok
// SIG undefined FUN_1465bb255(void)

longlong FUN_1465bb255(void)

{
  if (DAT_14cba3c68 == 0) {
    FUN_1409ce572(&DAT_14cba3c68,&PTR_FUN_14b6588f0);
  }
  return DAT_14cba3c68;
}



// FUNCTION 1465bb284 FUN_1465bb284 body=55 status=ok
// SIG undefined FUN_1465bb284(void)

void FUN_1465bb284(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3c88 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3c88 =
         FUN_140002ddd(FUN_1465bb2bb,uVar1,L"GbxUnlockableItemData_CharacterMovementType");
  }
  return;
}



// FUNCTION 1465bb2bb FUN_1465bb2bb body=47 status=ok
// SIG undefined FUN_1465bb2bb(void)

longlong FUN_1465bb2bb(void)

{
  if (DAT_14cba3c80 == 0) {
    FUN_14086a14e(&DAT_14cba3c80,&PTR_FUN_14b658a50);
  }
  return DAT_14cba3c80;
}



// FUNCTION 1465bb2ea FUN_1465bb2ea body=48 status=ok
// SIG undefined FUN_1465bb2ea(void)

void FUN_1465bb2ea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b65ace0;
  return;
}



// FUNCTION 1465bb31a FUN_1465bb31a body=55 status=ok
// SIG undefined FUN_1465bb31a(void)

void FUN_1465bb31a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3d68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3d68 = FUN_140002ddd(FUN_1465bb351,uVar1,L"GbxUnlockConditionData_Challenge");
  }
  return;
}



// FUNCTION 1465bb351 FUN_1465bb351 body=47 status=ok
// SIG undefined FUN_1465bb351(void)

longlong FUN_1465bb351(void)

{
  if (DAT_14cba3d60 == 0) {
    FUN_14086a14e(&DAT_14cba3d60,&PTR_FUN_14b658be8);
  }
  return DAT_14cba3d60;
}



// FUNCTION 1465bb380 FUN_1465bb380 body=48 status=ok
// SIG undefined FUN_1465bb380(void)

void FUN_1465bb380(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b65ae70;
  return;
}



// FUNCTION 1465bb3b0 FUN_1465bb3b0 body=55 status=ok
// SIG undefined FUN_1465bb3b0(void)

void FUN_1465bb3b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3d80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3d80 = FUN_140002ddd(FUN_1465bb3e7,uVar1,L"GbxUnlockConditionData_MovementGrant");
  }
  return;
}



// FUNCTION 1465bb3e7 FUN_1465bb3e7 body=47 status=ok
// SIG undefined FUN_1465bb3e7(void)

longlong FUN_1465bb3e7(void)

{
  if (DAT_14cba3d78 == 0) {
    FUN_14086a14e(&DAT_14cba3d78,&PTR_FUN_14b658d48);
  }
  return DAT_14cba3d78;
}



// FUNCTION 1465bb416 FUN_1465bb416 body=48 status=ok
// SIG undefined FUN_1465bb416(void)

void FUN_1465bb416(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b65aff0;
  return;
}



// FUNCTION 1465bb446 FUN_1465bb446 body=55 status=ok
// SIG undefined FUN_1465bb446(void)

void FUN_1465bb446(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3d98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3d98 = FUN_140002ddd(FUN_1465bb47d,uVar1,L"GbxUnlockConditionData_PlayerLevel");
  }
  return;
}



// FUNCTION 1465bb47d FUN_1465bb47d body=47 status=ok
// SIG undefined FUN_1465bb47d(void)

longlong FUN_1465bb47d(void)

{
  if (DAT_14cba3d90 == 0) {
    FUN_14086a14e(&DAT_14cba3d90,&PTR_FUN_14b658ea8);
  }
  return DAT_14cba3d90;
}



// FUNCTION 1465bb4ac FUN_1465bb4ac body=48 status=ok
// SIG undefined FUN_1465bb4ac(void)

void FUN_1465bb4ac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14b65b170;
  return;
}



// FUNCTION 1465bb4dc FUN_1465bb4dc body=47 status=ok
// SIG undefined FUN_1465bb4dc(void)

longlong FUN_1465bb4dc(void)

{
  if (DAT_14cba3da8 == 0) {
    FUN_1409ce572(&DAT_14cba3da8,&PTR_FUN_14b658f90);
  }
  return DAT_14cba3da8;
}



// FUNCTION 1465bb50c FUN_1465bb50c body=55 status=ok
// SIG undefined FUN_1465bb50c(void)

void FUN_1465bb50c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3dc8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3dc8 = FUN_140002ddd(FUN_1465bb543,uVar1,L"GimmeCondition_ExperienceLevel");
  }
  return;
}



// FUNCTION 1465bb543 FUN_1465bb543 body=47 status=ok
// SIG undefined FUN_1465bb543(void)

longlong FUN_1465bb543(void)

{
  if (DAT_14cba3dc0 == 0) {
    FUN_14086a14e(&DAT_14cba3dc0,&PTR_FUN_14b659160);
  }
  return DAT_14cba3dc0;
}



// FUNCTION 1465bb572 FUN_1465bb572 body=48 status=ok
// SIG undefined FUN_1465bb572(void)

void FUN_1465bb572(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14b65b420;
  return;
}



// FUNCTION 1465bb5a2 FUN_1465bb5a2 body=55 status=ok
// SIG undefined FUN_1465bb5a2(void)

void FUN_1465bb5a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3de0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3de0 =
         FUN_140002ddd(FUN_1465bb5d9,uVar1,L"GpsGeneratorSettings_Critters_DistanceFilter");
  }
  return;
}



// FUNCTION 1465bb5d9 FUN_1465bb5d9 body=47 status=ok
// SIG undefined FUN_1465bb5d9(void)

longlong FUN_1465bb5d9(void)

{
  if (DAT_14cba3dd8 == 0) {
    FUN_14086a14e(&DAT_14cba3dd8,&PTR_FUN_14b659358);
  }
  return DAT_14cba3dd8;
}



// FUNCTION 1465bb608 FUN_1465bb608 body=48 status=ok
// SIG undefined FUN_1465bb608(void)

void FUN_1465bb608(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000c0;
  *puVar1 = &PTR_FUN_14b65b580;
  return;
}



// FUNCTION 1465bb638 FUN_1465bb638 body=55 status=ok
// SIG undefined FUN_1465bb638(void)

void FUN_1465bb638(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3df8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3df8 = FUN_140002ddd(FUN_1465bb66f,uVar1,L"GpsGeneratorSettings_Critters");
  }
  return;
}



// FUNCTION 1465bb66f FUN_1465bb66f body=47 status=ok
// SIG undefined FUN_1465bb66f(void)

longlong FUN_1465bb66f(void)

{
  if (DAT_14cba3df0 == 0) {
    FUN_14086a14e(&DAT_14cba3df0,&PTR_FUN_14b659620);
  }
  return DAT_14cba3df0;
}



// FUNCTION 1465bb69e FUN_1465bb69e body=48 status=ok
// SIG undefined FUN_1465bb69e(void)

void FUN_1465bb69e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000138;
  *puVar1 = &PTR_FUN_14b65b6e0;
  return;
}



// FUNCTION 1465bb6ce FUN_1465bb6ce body=55 status=ok
// SIG undefined FUN_1465bb6ce(void)

void FUN_1465bb6ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3e10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3e10 = FUN_140002ddd(FUN_1465bb705,uVar1,L"GpsGenerator_Critters");
  }
  return;
}



// FUNCTION 1465bb705 FUN_1465bb705 body=47 status=ok
// SIG undefined FUN_1465bb705(void)

longlong FUN_1465bb705(void)

{
  if (DAT_14cba3e08 == 0) {
    FUN_14086a14e(&DAT_14cba3e08,&PTR_FUN_14b6596a0);
  }
  return DAT_14cba3e08;
}



// FUNCTION 1465bb734 FUN_1465bb734 body=48 status=ok
// SIG undefined FUN_1465bb734(void)

void FUN_1465bb734(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000448;
  *puVar1 = &PTR_FUN_14b65b8e0;
  return;
}



// FUNCTION 1465bb764 FUN_1465bb764 body=55 status=ok
// SIG undefined FUN_1465bb764(void)

void FUN_1465bb764(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3e28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3e28 = FUN_140002ddd(FUN_1465bb79b,uVar1,L"GpsGeneratorSettings_LootableObjects");
  }
  return;
}



// FUNCTION 1465bb79b FUN_1465bb79b body=47 status=ok
// SIG undefined FUN_1465bb79b(void)

longlong FUN_1465bb79b(void)

{
  if (DAT_14cba3e20 == 0) {
    FUN_14086a14e(&DAT_14cba3e20,&PTR_FUN_14b659818);
  }
  return DAT_14cba3e20;
}



// FUNCTION 1465bb7ca FUN_1465bb7ca body=48 status=ok
// SIG undefined FUN_1465bb7ca(void)

void FUN_1465bb7ca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000220;
  *puVar1 = &PTR_FUN_14b65bb30;
  return;
}



// FUNCTION 1465bb7fa FUN_1465bb7fa body=47 status=ok
// SIG undefined FUN_1465bb7fa(void)

longlong FUN_1465bb7fa(void)

{
  if (DAT_14cba3e38 == 0) {
    FUN_14086a14e(&DAT_14cba3e38,&PTR_FUN_14b6598a8);
  }
  return DAT_14cba3e38;
}



// FUNCTION 1465bb82a FUN_1465bb82a body=48 status=ok
// SIG undefined FUN_1465bb82a(void)

void FUN_1465bb82a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000448;
  *puVar1 = &PTR_FUN_14b65bd30;
  return;
}



// FUNCTION 1465bb85a FUN_1465bb85a body=55 status=ok
// SIG undefined FUN_1465bb85a(void)

void FUN_1465bb85a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3e58 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3e58 = FUN_140002ddd(FUN_1465bb891,uVar1,L"GpsModifierSettings_ProjectWater");
  }
  return;
}



// FUNCTION 1465bb891 FUN_1465bb891 body=47 status=ok
// SIG undefined FUN_1465bb891(void)

longlong FUN_1465bb891(void)

{
  if (DAT_14cba3e50 == 0) {
    FUN_14086a14e(&DAT_14cba3e50,&PTR_FUN_14b659df8);
  }
  return DAT_14cba3e50;
}



// FUNCTION 1465bb8c0 FUN_1465bb8c0 body=48 status=ok
// SIG undefined FUN_1465bb8c0(void)

void FUN_1465bb8c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000210;
  *puVar1 = &PTR_FUN_14b65bf80;
  return;
}



// FUNCTION 1465bb8f0 FUN_1465bb8f0 body=55 status=ok
// SIG undefined FUN_1465bb8f0(void)

void FUN_1465bb8f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3e70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3e70 = FUN_140002ddd(FUN_1465bb927,uVar1,L"GpsModifier_ProjectWater");
  }
  return;
}



// FUNCTION 1465bb927 FUN_1465bb927 body=47 status=ok
// SIG undefined FUN_1465bb927(void)

longlong FUN_1465bb927(void)

{
  if (DAT_14cba3e68 == 0) {
    FUN_14086a14e(&DAT_14cba3e68,&PTR_FUN_14b659e80);
  }
  return DAT_14cba3e68;
}



// FUNCTION 1465bb956 FUN_1465bb956 body=48 status=ok
// SIG undefined FUN_1465bb956(void)

void FUN_1465bb956(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000a0;
  *puVar1 = &PTR_FUN_14b65c180;
  return;
}



// FUNCTION 1465bb986 FUN_1465bb986 body=55 status=ok
// SIG undefined FUN_1465bb986(void)

void FUN_1465bb986(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3e88 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3e88 = FUN_140002ddd(FUN_1465bb9bd,uVar1,L"GpsTestSettings_CanRevive");
  }
  return;
}



// FUNCTION 1465bb9bd FUN_1465bb9bd body=47 status=ok
// SIG undefined FUN_1465bb9bd(void)

longlong FUN_1465bb9bd(void)

{
  if (DAT_14cba3e80 == 0) {
    FUN_14086a14e(&DAT_14cba3e80,&PTR_FUN_14b659fb0);
  }
  return DAT_14cba3e80;
}



// FUNCTION 1465bb9ec FUN_1465bb9ec body=48 status=ok
// SIG undefined FUN_1465bb9ec(void)

void FUN_1465bb9ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14b65c3c0;
  return;
}



// FUNCTION 1465bba1c FUN_1465bba1c body=47 status=ok
// SIG undefined FUN_1465bba1c(void)

longlong FUN_1465bba1c(void)

{
  if (DAT_14cba3e98 == 0) {
    FUN_14086a14e(&DAT_14cba3e98,&PTR_FUN_14b65a020);
  }
  return DAT_14cba3e98;
}



// FUNCTION 1465bba4c FUN_1465bba4c body=48 status=ok
// SIG undefined FUN_1465bba4c(void)

void FUN_1465bba4c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14b65c5d0;
  return;
}



// FUNCTION 1465bba7c FUN_1465bba7c body=40 status=ok
// SIG undefined FUN_1465bba7c(void)

undefined8 FUN_1465bba7c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbaa4 FUN_1465bbaa4 body=40 status=ok
// SIG undefined FUN_1465bbaa4(void)

undefined8 FUN_1465bbaa4(undefined8 param_1,int param_2)

{
  FUN_1411d0104();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbacc FUN_1465bbacc body=40 status=ok
// SIG undefined FUN_1465bbacc(void)

undefined8 FUN_1465bbacc(undefined8 param_1,int param_2)

{
  FUN_140f000e4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbaf4 FUN_1465bbaf4 body=40 status=ok
// SIG undefined FUN_1465bbaf4(void)

undefined8 FUN_1465bbaf4(undefined8 param_1,int param_2)

{
  FUN_1408ee338();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbb1c FUN_1465bbb1c body=76 status=ok
// SIG undefined FUN_1465bbb1c(void)

undefined8 * FUN_1465bbb1c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b657560;
  plVar2 = (longlong *)param_1[9];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbb68 FUN_1465bbb68 body=40 status=ok
// SIG undefined FUN_1465bbb68(void)

undefined8 FUN_1465bbb68(undefined8 param_1,int param_2)

{
  FUN_1457448ba();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbb90 FUN_1465bbb90 body=40 status=ok
// SIG undefined FUN_1465bbb90(void)

undefined8 FUN_1465bbb90(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbbb8 FUN_1465bbbb8 body=29 status=ok
// SIG undefined FUN_1465bbbb8(void)

undefined8 FUN_1465bbbb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbbd6 FUN_1465bbbd6 body=29 status=ok
// SIG undefined FUN_1465bbbd6(void)

undefined8 FUN_1465bbbd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbbf4 FUN_1465bbbf4 body=40 status=ok
// SIG undefined FUN_1465bbbf4(void)

undefined8 FUN_1465bbbf4(undefined8 param_1,int param_2)

{
  FUN_14584efb0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbc1c FUN_1465bbc1c body=29 status=ok
// SIG undefined FUN_1465bbc1c(void)

undefined8 FUN_1465bbc1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbc3a FUN_1465bbc3a body=29 status=ok
// SIG undefined FUN_1465bbc3a(void)

undefined8 FUN_1465bbc3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbc58 FUN_1465bbc58 body=29 status=ok
// SIG undefined FUN_1465bbc58(void)

undefined8 FUN_1465bbc58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbc76 FUN_1465bbc76 body=29 status=ok
// SIG undefined FUN_1465bbc76(void)

undefined8 FUN_1465bbc76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbc94 FUN_1465bbc94 body=29 status=ok
// SIG undefined FUN_1465bbc94(void)

undefined8 FUN_1465bbc94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbcb2 FUN_1465bbcb2 body=29 status=ok
// SIG undefined FUN_1465bbcb2(void)

undefined8 FUN_1465bbcb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbcd0 FUN_1465bbcd0 body=29 status=ok
// SIG undefined FUN_1465bbcd0(void)

undefined8 FUN_1465bbcd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbcee FUN_1465bbcee body=29 status=ok
// SIG undefined FUN_1465bbcee(void)

undefined8 FUN_1465bbcee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbd0c FUN_1465bbd0c body=29 status=ok
// SIG undefined FUN_1465bbd0c(void)

undefined8 FUN_1465bbd0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbd2a FUN_1465bbd2a body=29 status=ok
// SIG undefined FUN_1465bbd2a(void)

undefined8 FUN_1465bbd2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbd48 FUN_1465bbd48 body=29 status=ok
// SIG undefined FUN_1465bbd48(void)

undefined8 FUN_1465bbd48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbd66 FUN_1465bbd66 body=29 status=ok
// SIG undefined FUN_1465bbd66(void)

undefined8 FUN_1465bbd66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbd84 FUN_1465bbd84 body=29 status=ok
// SIG undefined FUN_1465bbd84(void)

undefined8 FUN_1465bbd84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbda2 FUN_1465bbda2 body=84 status=ok
// SIG undefined FUN_1465bbda2(void)

void FUN_1465bbda2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1412ebe6c(param_2);
  *param_2 = &PTR_FUN_14b2df1d0;
  FUN_140fbcb60(param_2 + 0x39);
  *(undefined1 *)(param_2 + 0x42) = 0;
  *param_2 = &PTR_FUN_14b65bc90;
  *(undefined1 *)(param_2 + 0x43) = 1;
  return;
}



// FUNCTION 1465bbe12 FUN_1465bbe12 body=65 status=ok
// SIG undefined FUN_1465bbe12(void)

undefined8 * FUN_1465bbe12(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2df1d0;
  FUN_1412dafa6(param_1 + 0x39);
  FUN_140ff0132(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbe54 FUN_1465bbe54 body=29 status=ok
// SIG undefined FUN_1465bbe54(void)

undefined8 FUN_1465bbe54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbe72 FUN_1465bbe72 body=29 status=ok
// SIG undefined FUN_1465bbe72(void)

undefined8 FUN_1465bbe72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbe90 FUN_1465bbe90 body=29 status=ok
// SIG undefined FUN_1465bbe90(void)

undefined8 FUN_1465bbe90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbeae FUN_1465bbeae body=29 status=ok
// SIG undefined FUN_1465bbeae(void)

undefined8 FUN_1465bbeae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbecc FUN_1465bbecc body=55 status=ok
// SIG undefined FUN_1465bbecc(void)

void FUN_1465bbecc(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x88);
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14b65c530;
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 1465bbf20 FUN_1465bbf20 body=40 status=ok
// SIG undefined FUN_1465bbf20(void)

undefined8 FUN_1465bbf20(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbf48 FUN_1465bbf48 body=29 status=ok
// SIG undefined FUN_1465bbf48(void)

undefined8 FUN_1465bbf48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbf66 FUN_1465bbf66 body=40 status=ok
// SIG undefined FUN_1465bbf66(void)

undefined8 FUN_1465bbf66(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465bbf8e FUN_1465bbf8e body=55 status=ok
// SIG undefined FUN_1465bbf8e(void)

void FUN_1465bbf8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3eb8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3eb8 = FUN_140002ddd(FUN_1465bbfc5,uVar1,L"GpsTestSettings_ExoMarkedTarget");
  }
  return;
}



// FUNCTION 1465bbfc5 FUN_1465bbfc5 body=47 status=ok
// SIG undefined FUN_1465bbfc5(void)

longlong FUN_1465bbfc5(void)

{
  if (DAT_14cba3eb0 == 0) {
    FUN_14086a14e(&DAT_14cba3eb0,&PTR_FUN_14b65dea8);
  }
  return DAT_14cba3eb0;
}



// FUNCTION 1465bbff4 FUN_1465bbff4 body=43 status=ok
// SIG undefined FUN_1465bbff4(void)

void FUN_1465bbff4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14b666840;
  return;
}



// FUNCTION 1465bc020 FUN_1465bc020 body=55 status=ok
// SIG undefined FUN_1465bc020(void)

void FUN_1465bc020(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3ed0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3ed0 = FUN_140002ddd(FUN_1465bc057,uVar1,L"GpsTest_ExoMarkedTarget");
  }
  return;
}



// FUNCTION 1465bc057 FUN_1465bc057 body=47 status=ok
// SIG undefined FUN_1465bc057(void)

longlong FUN_1465bc057(void)

{
  if (DAT_14cba3ec8 == 0) {
    FUN_14086a14e(&DAT_14cba3ec8,&PTR_FUN_14b65df28);
  }
  return DAT_14cba3ec8;
}



// FUNCTION 1465bc086 FUN_1465bc086 body=43 status=ok
// SIG undefined FUN_1465bc086(void)

void FUN_1465bc086(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14b666a40;
  return;
}



// FUNCTION 1465bc0b2 FUN_1465bc0b2 body=55 status=ok
// SIG undefined FUN_1465bc0b2(void)

void FUN_1465bc0b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3ee8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3ee8 = FUN_140002ddd(FUN_1465bc0e9,uVar1,L"GpsTestSettings_InsideWaterBody");
  }
  return;
}



// FUNCTION 1465bc0e9 FUN_1465bc0e9 body=47 status=ok
// SIG undefined FUN_1465bc0e9(void)

longlong FUN_1465bc0e9(void)

{
  if (DAT_14cba3ee0 == 0) {
    FUN_14086a14e(&DAT_14cba3ee0,&PTR_FUN_14b65e1d0);
  }
  return DAT_14cba3ee0;
}



// FUNCTION 1465bc118 FUN_1465bc118 body=43 status=ok
// SIG undefined FUN_1465bc118(void)

void FUN_1465bc118(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000001b8;
  *puVar1 = &PTR_FUN_14b666c80;
  return;
}



// FUNCTION 1465bc143 FUN_1465bc143 body=47 status=ok
// SIG undefined FUN_1465bc143(void)

longlong FUN_1465bc143(void)

{
  if (DAT_14cba3ef8 == 0) {
    FUN_14086a14e(&DAT_14cba3ef8,&PTR_FUN_14b65e250);
  }
  return DAT_14cba3ef8;
}



// FUNCTION 1465bc172 FUN_1465bc172 body=43 status=ok
// SIG undefined FUN_1465bc172(void)

void FUN_1465bc172(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14b666e80;
  return;
}



// FUNCTION 1465bc19e FUN_1465bc19e body=55 status=ok
// SIG undefined FUN_1465bc19e(void)

void FUN_1465bc19e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3f18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3f18 = FUN_140002ddd(FUN_1465bc1d5,uVar1,L"GpsTestSettings_IsCauser");
  }
  return;
}



// FUNCTION 1465bc1d5 FUN_1465bc1d5 body=47 status=ok
// SIG undefined FUN_1465bc1d5(void)

longlong FUN_1465bc1d5(void)

{
  if (DAT_14cba3f10 == 0) {
    FUN_14086a14e(&DAT_14cba3f10,&PTR_FUN_14b65e380);
  }
  return DAT_14cba3f10;
}



// FUNCTION 1465bc204 FUN_1465bc204 body=43 status=ok
// SIG undefined FUN_1465bc204(void)

void FUN_1465bc204(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14b6670c0;
  return;
}



// FUNCTION 1465bc22f FUN_1465bc22f body=47 status=ok
// SIG undefined FUN_1465bc22f(void)

longlong FUN_1465bc22f(void)

{
  if (DAT_14cba3f28 == 0) {
    FUN_14086a14e(&DAT_14cba3f28,&PTR_FUN_14b65e3f0);
  }
  return DAT_14cba3f28;
}



// FUNCTION 1465bc25e FUN_1465bc25e body=43 status=ok
// SIG undefined FUN_1465bc25e(void)

void FUN_1465bc25e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14b6672c0;
  return;
}



// FUNCTION 1465bc28a FUN_1465bc28a body=55 status=ok
// SIG undefined FUN_1465bc28a(void)

void FUN_1465bc28a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3f48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3f48 = FUN_140002ddd(FUN_1465bc2c1,uVar1,L"GpsTestSettings_IsFocuser");
  }
  return;
}



// FUNCTION 1465bc2c1 FUN_1465bc2c1 body=47 status=ok
// SIG undefined FUN_1465bc2c1(void)

longlong FUN_1465bc2c1(void)

{
  if (DAT_14cba3f40 == 0) {
    FUN_14086a14e(&DAT_14cba3f40,&PTR_FUN_14b65e520);
  }
  return DAT_14cba3f40;
}



// FUNCTION 1465bc2f0 FUN_1465bc2f0 body=43 status=ok
// SIG undefined FUN_1465bc2f0(void)

void FUN_1465bc2f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14b667500;
  return;
}



// FUNCTION 1465bc31b FUN_1465bc31b body=47 status=ok
// SIG undefined FUN_1465bc31b(void)

longlong FUN_1465bc31b(void)

{
  if (DAT_14cba3f58 == 0) {
    FUN_14086a14e(&DAT_14cba3f58,&PTR_FUN_14b65e590);
  }
  return DAT_14cba3f58;
}



// FUNCTION 1465bc34a FUN_1465bc34a body=43 status=ok
// SIG undefined FUN_1465bc34a(void)

void FUN_1465bc34a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14b667710;
  return;
}



// FUNCTION 1465bc37d FUN_1465bc37d body=49 status=ok
// SIG undefined FUN_1465bc37d(void)

longlong FUN_1465bc37d(void)

{
  if (DAT_14cba3f90 == 0) {
    FUN_14073dd9a(&DAT_14cba3f90,&PTR_LAB_14b65e728);
  }
  return DAT_14cba3f90;
}



// FUNCTION 1465bc3ae FUN_1465bc3ae body=68 status=ok
// SIG undefined FUN_1465bc3ae(void)

void FUN_1465bc3ae(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14100142e(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b65e850;
  puVar1[5] = &PTR_FUN_14b65eb00;
  puVar1[10] = &PTR_FUN_14b65eb30;
  puVar1[0xb] = &PTR_FUN_14b65eb60;
  return;
}



// FUNCTION 1465bc3f2 FUN_1465bc3f2 body=47 status=ok
// SIG undefined FUN_1465bc3f2(void)

longlong FUN_1465bc3f2(void)

{
  if (DAT_14cba3fa8 == 0) {
    FUN_14073dd9a(&DAT_14cba3fa8,&PTR_LAB_14b65e808);
  }
  return DAT_14cba3fa8;
}



// FUNCTION 1465bc421 FUN_1465bc421 body=49 status=ok
// SIG undefined FUN_1465bc421(void)

longlong FUN_1465bc421(void)

{
  if (DAT_14cba3fb8 == 0) {
    FUN_14086a14e(&DAT_14cba3fb8,&PTR_FUN_14b65ed10);
  }
  return DAT_14cba3fb8;
}



// FUNCTION 1465bc452 FUN_1465bc452 body=43 status=ok
// SIG undefined FUN_1465bc452(void)

void FUN_1465bc452(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000004b0;
  *puVar1 = &PTR_FUN_14b667950;
  return;
}



// FUNCTION 1465bc47d FUN_1465bc47d body=47 status=ok
// SIG undefined FUN_1465bc47d(void)

longlong FUN_1465bc47d(void)

{
  if (DAT_14cba3fd0 == 0) {
    FUN_14086a14e(&DAT_14cba3fd0,&PTR_FUN_14b65f100);
  }
  return DAT_14cba3fd0;
}



// FUNCTION 1465bc4ac FUN_1465bc4ac body=43 status=ok
// SIG undefined FUN_1465bc4ac(void)

void FUN_1465bc4ac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000004d8;
  *puVar1 = &PTR_FUN_14b667c10;
  return;
}



// FUNCTION 1465bc4d7 FUN_1465bc4d7 body=47 status=ok
// SIG undefined FUN_1465bc4d7(void)

longlong FUN_1465bc4d7(void)

{
  if (DAT_14cba3fe8 == 0) {
    FUN_14086a14e(&DAT_14cba3fe8,&PTR_FUN_14b65f168);
  }
  return DAT_14cba3fe8;
}



// FUNCTION 1465bc506 FUN_1465bc506 body=43 status=ok
// SIG undefined FUN_1465bc506(void)

void FUN_1465bc506(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000004b0;
  *puVar1 = &PTR_FUN_14b667ed0;
  return;
}



// FUNCTION 1465bc531 FUN_1465bc531 body=47 status=ok
// SIG undefined FUN_1465bc531(void)

longlong FUN_1465bc531(void)

{
  if (DAT_14cba4000 == 0) {
    FUN_14086a14e(&DAT_14cba4000,&PTR_FUN_14b65f1e8);
  }
  return DAT_14cba4000;
}



// FUNCTION 1465bc560 FUN_1465bc560 body=43 status=ok
// SIG undefined FUN_1465bc560(void)

void FUN_1465bc560(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000004b0;
  *puVar1 = &PTR_FUN_14b668190;
  return;
}



// FUNCTION 1465bc58c FUN_1465bc58c body=55 status=ok
// SIG undefined FUN_1465bc58c(void)

void FUN_1465bc58c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4020 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4020 = FUN_140002ddd(FUN_1465bc5c3,uVar1,L"GrappleDef");
  }
  return;
}



// FUNCTION 1465bc5c3 FUN_1465bc5c3 body=47 status=ok
// SIG undefined FUN_1465bc5c3(void)

longlong FUN_1465bc5c3(void)

{
  if (DAT_14cba4018 == 0) {
    FUN_14086a14e(&DAT_14cba4018,&PTR_FUN_14b660760);
  }
  return DAT_14cba4018;
}



// FUNCTION 1465bc5f2 FUN_1465bc5f2 body=43 status=ok
// SIG undefined FUN_1465bc5f2(void)

void FUN_1465bc5f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000590;
  *puVar1 = &PTR_FUN_14b668450;
  return;
}



// FUNCTION 1465bc623 FUN_1465bc623 body=47 status=ok
// SIG undefined FUN_1465bc623(void)

longlong FUN_1465bc623(void)

{
  if (DAT_14cba4038 == 0) {
    FUN_14073dd9a(&DAT_14cba4038,&PTR_LAB_14b660808);
  }
  return DAT_14cba4038;
}



// FUNCTION 1465bc657 FUN_1465bc657 body=47 status=ok
// SIG undefined FUN_1465bc657(void)

longlong FUN_1465bc657(void)

{
  if (DAT_14cba4050 == 0) {
    FUN_14073dd9a(&DAT_14cba4050,&PTR_LAB_14b6618a8);
  }
  return DAT_14cba4050;
}



// FUNCTION 1465bc686 FUN_1465bc686 body=47 status=ok
// SIG undefined FUN_1465bc686(void)

longlong FUN_1465bc686(void)

{
  if (DAT_14cba4060 == 0) {
    FUN_1409ce572(&DAT_14cba4060,&PTR_FUN_14b662970);
  }
  return DAT_14cba4060;
}



// FUNCTION 1465bc6b5 FUN_1465bc6b5 body=47 status=ok
// SIG undefined FUN_1465bc6b5(void)

longlong FUN_1465bc6b5(void)

{
  if (DAT_14cba4078 == 0) {
    FUN_1409ce572(&DAT_14cba4078,&PTR_FUN_14b6629d0);
  }
  return DAT_14cba4078;
}



// FUNCTION 1465bc6e4 FUN_1465bc6e4 body=47 status=ok
// SIG undefined FUN_1465bc6e4(void)

longlong FUN_1465bc6e4(void)

{
  if (DAT_14cba4090 == 0) {
    FUN_1409ce572(&DAT_14cba4090,&PTR_FUN_14b662a40);
  }
  return DAT_14cba4090;
}



// FUNCTION 1465bc714 FUN_1465bc714 body=55 status=ok
// SIG undefined FUN_1465bc714(void)

void FUN_1465bc714(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba40b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba40b0 = FUN_140002ddd(FUN_1465bc74b,uVar1,L"GrappleableTargetInit");
  }
  return;
}



// FUNCTION 1465bc74b FUN_1465bc74b body=49 status=ok
// SIG undefined FUN_1465bc74b(void)

longlong FUN_1465bc74b(void)

{
  if (DAT_14cba40a8 == 0) {
    FUN_14086a14e(&DAT_14cba40a8,&PTR_FUN_14b662fa0);
  }
  return DAT_14cba40a8;
}



// FUNCTION 1465bc77c FUN_1465bc77c body=43 status=ok
// SIG undefined FUN_1465bc77c(void)

void FUN_1465bc77c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x40000002c;
  *puVar1 = &PTR_FUN_14b668770;
  return;
}



// FUNCTION 1465bc7a8 FUN_1465bc7a8 body=55 status=ok
// SIG undefined FUN_1465bc7a8(void)

void FUN_1465bc7a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba40c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba40c8 = FUN_140002ddd(FUN_1418c4d97,uVar1,L"GrappleableTargetReference");
  }
  return;
}



// FUNCTION 1465bc7e4 FUN_1465bc7e4 body=43 status=ok
// SIG undefined FUN_1465bc7e4(void)

void FUN_1465bc7e4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b6688d0;
  return;
}



// FUNCTION 1465bc810 FUN_1465bc810 body=55 status=ok
// SIG undefined FUN_1465bc810(void)

void FUN_1465bc810(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba40e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba40e0 = FUN_140002ddd(FUN_1418c4dc8,uVar1,L"GrappleableTarget");
  }
  return;
}



// FUNCTION 1465bc848 FUN_1465bc848 body=43 status=ok
// SIG undefined FUN_1465bc848(void)

void FUN_1465bc848(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x10000000c0;
  *puVar1 = &PTR_FUN_14b668a40;
  return;
}



// FUNCTION 1465bc873 FUN_1465bc873 body=47 status=ok
// SIG undefined FUN_1465bc873(void)

longlong FUN_1465bc873(void)

{
  if (DAT_14cba40f0 == 0) {
    FUN_1409ce572(&DAT_14cba40f0,&PTR_FUN_14b663410);
  }
  return DAT_14cba40f0;
}



// FUNCTION 1465bc8a2 FUN_1465bc8a2 body=55 status=ok
// SIG undefined FUN_1465bc8a2(void)

void FUN_1465bc8a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4110 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4110 = FUN_140002ddd(FUN_1465bc8d9,uVar1,L"ScoredGrappleTarget");
  }
  return;
}



// FUNCTION 1465bc8d9 FUN_1465bc8d9 body=47 status=ok
// SIG undefined FUN_1465bc8d9(void)

longlong FUN_1465bc8d9(void)

{
  if (DAT_14cba4108 == 0) {
    FUN_14086a14e(&DAT_14cba4108,&PTR_FUN_14b663610);
  }
  return DAT_14cba4108;
}



// FUNCTION 1465bc908 FUN_1465bc908 body=43 status=ok
// SIG undefined FUN_1465bc908(void)

void FUN_1465bc908(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b668c10;
  return;
}



// FUNCTION 1465bc934 FUN_1465bc934 body=55 status=ok
// SIG undefined FUN_1465bc934(void)

void FUN_1465bc934(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4128 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4128 = FUN_140002ddd(FUN_1465bc96b,uVar1,L"GrappleScoringContext");
  }
  return;
}



// FUNCTION 1465bc96b FUN_1465bc96b body=47 status=ok
// SIG undefined FUN_1465bc96b(void)

longlong FUN_1465bc96b(void)

{
  if (DAT_14cba4120 == 0) {
    FUN_14086a14e(&DAT_14cba4120,&PTR_FUN_14b663810);
  }
  return DAT_14cba4120;
}



// FUNCTION 1465bc99a FUN_1465bc99a body=43 status=ok
// SIG undefined FUN_1465bc99a(void)

void FUN_1465bc99a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14b668d70;
  return;
}



// FUNCTION 1465bc9c6 FUN_1465bc9c6 body=55 status=ok
// SIG undefined FUN_1465bc9c6(void)

void FUN_1465bc9c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4140 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4140 = FUN_140002ddd(FUN_1465bc9fd,uVar1,L"GrappleAsyncTraceData");
  }
  return;
}



// FUNCTION 1465bc9fd FUN_1465bc9fd body=47 status=ok
// SIG undefined FUN_1465bc9fd(void)

longlong FUN_1465bc9fd(void)

{
  if (DAT_14cba4138 == 0) {
    FUN_14086a14e(&DAT_14cba4138,&PTR_FUN_14b663928);
  }
  return DAT_14cba4138;
}



// FUNCTION 1465bca2c FUN_1465bca2c body=43 status=ok
// SIG undefined FUN_1465bca2c(void)

void FUN_1465bca2c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14b668ed0;
  return;
}



// FUNCTION 1465bca58 FUN_1465bca58 body=55 status=ok
// SIG undefined FUN_1465bca58(void)

void FUN_1465bca58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4158 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4158 = FUN_140002ddd(FUN_1465bca8f,uVar1,L"GrappleAsyncTraceResult");
  }
  return;
}



// FUNCTION 1465bca8f FUN_1465bca8f body=47 status=ok
// SIG undefined FUN_1465bca8f(void)

longlong FUN_1465bca8f(void)

{
  if (DAT_14cba4150 == 0) {
    FUN_14086a14e(&DAT_14cba4150,&PTR_FUN_14b663a58);
  }
  return DAT_14cba4150;
}



// FUNCTION 1465bcabe FUN_1465bcabe body=43 status=ok
// SIG undefined FUN_1465bcabe(void)

void FUN_1465bcabe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14b669030;
  return;
}



// FUNCTION 1465bcae9 FUN_1465bcae9 body=35 status=ok
// SIG undefined FUN_1465bcae9(void)

void FUN_1465bcae9(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b663be0;
  return;
}



// FUNCTION 1465bcb11 FUN_1465bcb11 body=47 status=ok
// SIG undefined FUN_1465bcb11(void)

longlong FUN_1465bcb11(void)

{
  if (DAT_14cba4178 == 0) {
    FUN_14073dd9a(&DAT_14cba4178,&PTR_LAB_14b663b98);
  }
  return DAT_14cba4178;
}



// FUNCTION 1465bcb40 FUN_1465bcb40 body=35 status=ok
// SIG undefined FUN_1465bcb40(void)

void FUN_1465bcb40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b663f00;
  return;
}



// FUNCTION 1465bcb6d FUN_1465bcb6d body=47 status=ok
// SIG undefined FUN_1465bcb6d(void)

longlong FUN_1465bcb6d(void)

{
  if (DAT_14cba4190 == 0) {
    FUN_14073dd9a(&DAT_14cba4190,&PTR_LAB_14b663eb8);
  }
  return DAT_14cba4190;
}



// FUNCTION 1465bcb9c FUN_1465bcb9c body=55 status=ok
// SIG undefined FUN_1465bcb9c(void)

void FUN_1465bcb9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba41a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba41a8 = FUN_140002ddd(FUN_1465bcbd3,uVar1,L"GrappleableState");
  }
  return;
}



// FUNCTION 1465bcbd3 FUN_1465bcbd3 body=49 status=ok
// SIG undefined FUN_1465bcbd3(void)

longlong FUN_1465bcbd3(void)

{
  if (DAT_14cba41a0 == 0) {
    FUN_14086a14e(&DAT_14cba41a0,&PTR_FUN_14b664340);
  }
  return DAT_14cba41a0;
}


