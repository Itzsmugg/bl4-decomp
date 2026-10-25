// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14632685a FUN_14632685a body=47 status=ok
// SIG undefined FUN_14632685a(void)

longlong FUN_14632685a(void)

{
  if (DAT_14caa7bc0 == 0) {
    FUN_14073dd9a(&DAT_14caa7bc0,&PTR_LAB_14a3d6108);
  }
  return DAT_14caa7bc0;
}



// FUNCTION 14632688a FUN_14632688a body=55 status=ok
// SIG undefined FUN_14632688a(void)

void FUN_14632688a(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa7bf0 == 0) {
    uVar1 = FUN_140e97f0f();
    DAT_14caa7bf0 = FUN_140002ddd(FUN_1463268c1,uVar1,L"PhysicalMaterialInput");
  }
  return;
}



// FUNCTION 1463268c1 FUN_1463268c1 body=47 status=ok
// SIG undefined FUN_1463268c1(void)

longlong FUN_1463268c1(void)

{
  if (DAT_14caa7be8 == 0) {
    FUN_14086a14e(&DAT_14caa7be8,&PTR_FUN_14a3d6548);
  }
  return DAT_14caa7be8;
}



// FUNCTION 1463268f0 FUN_1463268f0 body=48 status=ok
// SIG undefined FUN_1463268f0(void)

void FUN_1463268f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14a3d6f80;
  return;
}



// FUNCTION 146326920 FUN_146326920 body=47 status=ok
// SIG undefined FUN_146326920(void)

longlong FUN_146326920(void)

{
  if (DAT_14caa7c08 == 0) {
    FUN_14073dd9a(&DAT_14caa7c08,&PTR_LAB_14a3d6688);
  }
  return DAT_14caa7c08;
}



// FUNCTION 14632694f FUN_14632694f body=47 status=ok
// SIG undefined FUN_14632694f(void)

longlong FUN_14632694f(void)

{
  if (DAT_14caa7c38 == 0) {
    FUN_14073dd9a(&DAT_14caa7c38,&PTR_LAB_14a3d6a98);
  }
  return DAT_14caa7c38;
}



// FUNCTION 14632697e FUN_14632697e body=40 status=ok
// SIG undefined FUN_14632697e(void)

undefined8 FUN_14632697e(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463269a6 FUN_1463269a6 body=40 status=ok
// SIG undefined FUN_1463269a6(void)

undefined8 FUN_1463269a6(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463269ce FUN_1463269ce body=40 status=ok
// SIG undefined FUN_1463269ce(void)

undefined8 FUN_1463269ce(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463269f6 FUN_1463269f6 body=72 status=ok
// SIG undefined FUN_1463269f6(void)

undefined8 * FUN_1463269f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3d66d0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_140bc97f4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146326a3e FUN_146326a3e body=40 status=ok
// SIG undefined FUN_146326a3e(void)

undefined8 FUN_146326a3e(undefined8 param_1,int param_2)

{
  FUN_140bc97f4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146326a66 FUN_146326a66 body=29 status=ok
// SIG undefined FUN_146326a66(void)

undefined8 FUN_146326a66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146326a84 FUN_146326a84 body=29 status=ok
// SIG undefined FUN_146326a84(void)

undefined8 FUN_146326a84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146326aa2 FUN_146326aa2 body=29 status=ok
// SIG undefined FUN_146326aa2(void)

bool FUN_146326aa2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146326ac0 FUN_146326ac0 body=24 status=ok
// SIG undefined FUN_146326ac0(void)

bool FUN_146326ac0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146326ad8 FUN_146326ad8 body=24 status=ok
// SIG undefined FUN_146326ad8(void)

bool FUN_146326ad8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146326af0 FUN_146326af0 body=103 status=ok
// SIG undefined FUN_146326af0(void)

void FUN_146326af0(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_1 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != DAT_14caa7adc) {
    DAT_14caa7adc = (int)uVar2;
    FUN_1446f8d3c(&DAT_14caa7ad0,DAT_14caa7ad8,uVar2,8,8);
  }
  return;
}



// FUNCTION 146326b58 FUN_146326b58 body=55 status=ok
// SIG undefined FUN_146326b58(void)

void FUN_146326b58(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa7c88 == 0) {
    uVar1 = FUN_140608922();
    DAT_14caa7c88 =
         FUN_140002ddd(FUN_146326b8f,uVar1,L"GameplayTagContainerNetSerializerSerializationHelper");
  }
  return;
}



// FUNCTION 146326b8f FUN_146326b8f body=47 status=ok
// SIG undefined FUN_146326b8f(void)

longlong FUN_146326b8f(void)

{
  if (DAT_14caa7c80 == 0) {
    FUN_14086a14e(&DAT_14caa7c80,&PTR_FUN_14a3d7568);
  }
  return DAT_14caa7c80;
}



// FUNCTION 146326bbe FUN_146326bbe body=48 status=ok
// SIG undefined FUN_146326bbe(void)

void FUN_146326bbe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a3e0350;
  return;
}



// FUNCTION 146326bee FUN_146326bee body=47 status=ok
// SIG undefined FUN_146326bee(void)

longlong FUN_146326bee(void)

{
  if (DAT_14caa7c98 == 0) {
    FUN_14000fc22(&DAT_14caa7c98,&PTR_FUN_14a3d7670);
  }
  return DAT_14caa7c98;
}



// FUNCTION 146326c1d FUN_146326c1d body=47 status=ok
// SIG undefined FUN_146326c1d(void)

longlong FUN_146326c1d(void)

{
  if (DAT_14caa7ca0 == 0) {
    FUN_14000fc22(&DAT_14caa7ca0,&PTR_FUN_14a3d7790);
  }
  return DAT_14caa7ca0;
}



// FUNCTION 146326c4c FUN_146326c4c body=47 status=ok
// SIG undefined FUN_146326c4c(void)

longlong FUN_146326c4c(void)

{
  if (DAT_14caa7ca8 == 0) {
    FUN_14000fc22(&DAT_14caa7ca8,&PTR_FUN_14a3d78d8);
  }
  return DAT_14caa7ca8;
}



// FUNCTION 146326c80 FUN_146326c80 body=47 status=ok
// SIG undefined FUN_146326c80(void)

longlong FUN_146326c80(void)

{
  if (DAT_14caa7cb0 == 0) {
    FUN_14000fc22(&DAT_14caa7cb0,&PTR_FUN_14a3d79e8);
  }
  return DAT_14caa7cb0;
}



// FUNCTION 146326caf FUN_146326caf body=47 status=ok
// SIG undefined FUN_146326caf(void)

longlong FUN_146326caf(void)

{
  if (DAT_14caa7cb8 == 0) {
    FUN_14000fc22(&DAT_14caa7cb8,&PTR_FUN_14a3d7b38);
  }
  return DAT_14caa7cb8;
}



// FUNCTION 146326cde FUN_146326cde body=47 status=ok
// SIG undefined FUN_146326cde(void)

longlong FUN_146326cde(void)

{
  if (DAT_14caa7cc0 == 0) {
    FUN_14000fc22(&DAT_14caa7cc0,&PTR_FUN_14a3d7c88);
  }
  return DAT_14caa7cc0;
}



// FUNCTION 146326d0d FUN_146326d0d body=47 status=ok
// SIG undefined FUN_146326d0d(void)

longlong FUN_146326d0d(void)

{
  if (DAT_14caa7cc8 == 0) {
    FUN_14000fc22(&DAT_14caa7cc8,&PTR_FUN_14a3d7dc0);
  }
  return DAT_14caa7cc8;
}



// FUNCTION 146326d3c FUN_146326d3c body=47 status=ok
// SIG undefined FUN_146326d3c(void)

longlong FUN_146326d3c(void)

{
  if (DAT_14caa7cd0 == 0) {
    FUN_14000fc22(&DAT_14caa7cd0,&PTR_FUN_14a3d7ef8);
  }
  return DAT_14caa7cd0;
}



// FUNCTION 146326d6b FUN_146326d6b body=47 status=ok
// SIG undefined FUN_146326d6b(void)

longlong FUN_146326d6b(void)

{
  if (DAT_14caa7cd8 == 0) {
    FUN_14000fc22(&DAT_14caa7cd8,&PTR_FUN_14a3d80e0);
  }
  return DAT_14caa7cd8;
}



// FUNCTION 146326d9a FUN_146326d9a body=47 status=ok
// SIG undefined FUN_146326d9a(void)

longlong FUN_146326d9a(void)

{
  if (DAT_14caa7ce0 == 0) {
    FUN_14000fc22(&DAT_14caa7ce0,&PTR_FUN_14a3d81d0);
  }
  return DAT_14caa7ce0;
}



// FUNCTION 146326dc9 FUN_146326dc9 body=47 status=ok
// SIG undefined FUN_146326dc9(void)

longlong FUN_146326dc9(void)

{
  if (DAT_14caa7ce8 == 0) {
    FUN_14000fc22(&DAT_14caa7ce8,&PTR_FUN_14a3d82c8);
  }
  return DAT_14caa7ce8;
}



// FUNCTION 146326df8 FUN_146326df8 body=47 status=ok
// SIG undefined FUN_146326df8(void)

longlong FUN_146326df8(void)

{
  if (DAT_14caa7cf0 == 0) {
    FUN_14000fc22(&DAT_14caa7cf0,&PTR_FUN_14a3d83b0);
  }
  return DAT_14caa7cf0;
}



// FUNCTION 146326e27 FUN_146326e27 body=47 status=ok
// SIG undefined FUN_146326e27(void)

longlong FUN_146326e27(void)

{
  if (DAT_14caa7cf8 == 0) {
    FUN_14000fc22(&DAT_14caa7cf8,&PTR_FUN_14a3d8498);
  }
  return DAT_14caa7cf8;
}



// FUNCTION 146326e56 FUN_146326e56 body=47 status=ok
// SIG undefined FUN_146326e56(void)

longlong FUN_146326e56(void)

{
  if (DAT_14caa7d00 == 0) {
    FUN_14000fc22(&DAT_14caa7d00,&PTR_FUN_14a3d8570);
  }
  return DAT_14caa7d00;
}



// FUNCTION 146326e85 FUN_146326e85 body=47 status=ok
// SIG undefined FUN_146326e85(void)

longlong FUN_146326e85(void)

{
  if (DAT_14caa7d08 == 0) {
    FUN_14000fc22(&DAT_14caa7d08,&PTR_FUN_14a3d86b8);
  }
  return DAT_14caa7d08;
}



// FUNCTION 146326eb4 FUN_146326eb4 body=47 status=ok
// SIG undefined FUN_146326eb4(void)

longlong FUN_146326eb4(void)

{
  if (DAT_14caa7d10 == 0) {
    FUN_14000fc22(&DAT_14caa7d10,&PTR_FUN_14a3d8830);
  }
  return DAT_14caa7d10;
}



// FUNCTION 146326ee3 FUN_146326ee3 body=47 status=ok
// SIG undefined FUN_146326ee3(void)

longlong FUN_146326ee3(void)

{
  if (DAT_14caa7d18 == 0) {
    FUN_14000fc22(&DAT_14caa7d18,&PTR_FUN_14a3d8990);
  }
  return DAT_14caa7d18;
}



// FUNCTION 146326f12 FUN_146326f12 body=47 status=ok
// SIG undefined FUN_146326f12(void)

longlong FUN_146326f12(void)

{
  if (DAT_14caa7d20 == 0) {
    FUN_14000fc22(&DAT_14caa7d20,&PTR_FUN_14a3d8af0);
  }
  return DAT_14caa7d20;
}



// FUNCTION 146326f41 FUN_146326f41 body=47 status=ok
// SIG undefined FUN_146326f41(void)

longlong FUN_146326f41(void)

{
  if (DAT_14caa7d28 == 0) {
    FUN_14000fc22(&DAT_14caa7d28,&PTR_FUN_14a3d8bd8);
  }
  return DAT_14caa7d28;
}



// FUNCTION 146326f70 FUN_146326f70 body=47 status=ok
// SIG undefined FUN_146326f70(void)

longlong FUN_146326f70(void)

{
  if (DAT_14caa7d30 == 0) {
    FUN_14000fc22(&DAT_14caa7d30,&PTR_FUN_14a3d8cc0);
  }
  return DAT_14caa7d30;
}



// FUNCTION 146326f9f FUN_146326f9f body=47 status=ok
// SIG undefined FUN_146326f9f(void)

longlong FUN_146326f9f(void)

{
  if (DAT_14caa7d38 == 0) {
    FUN_14000fc22(&DAT_14caa7d38,&PTR_FUN_14a3d8e00);
  }
  return DAT_14caa7d38;
}



// FUNCTION 146326fce FUN_146326fce body=47 status=ok
// SIG undefined FUN_146326fce(void)

longlong FUN_146326fce(void)

{
  if (DAT_14caa7d40 == 0) {
    FUN_14000fc22(&DAT_14caa7d40,&PTR_FUN_14a3d8f00);
  }
  return DAT_14caa7d40;
}



// FUNCTION 146326ffd FUN_146326ffd body=47 status=ok
// SIG undefined FUN_146326ffd(void)

longlong FUN_146326ffd(void)

{
  if (DAT_14caa7d48 == 0) {
    FUN_14000fc22(&DAT_14caa7d48,&PTR_FUN_14a3d8fe8);
  }
  return DAT_14caa7d48;
}



// FUNCTION 14632702c FUN_14632702c body=47 status=ok
// SIG undefined FUN_14632702c(void)

longlong FUN_14632702c(void)

{
  if (DAT_14caa7d50 == 0) {
    FUN_14000fc22(&DAT_14caa7d50,&PTR_FUN_14a3d90e8);
  }
  return DAT_14caa7d50;
}



// FUNCTION 14632705b FUN_14632705b body=47 status=ok
// SIG undefined FUN_14632705b(void)

longlong FUN_14632705b(void)

{
  if (DAT_14caa7d58 == 0) {
    FUN_14000fc22(&DAT_14caa7d58,&PTR_FUN_14a3d91e8);
  }
  return DAT_14caa7d58;
}



// FUNCTION 14632708a FUN_14632708a body=47 status=ok
// SIG undefined FUN_14632708a(void)

longlong FUN_14632708a(void)

{
  if (DAT_14caa7d60 == 0) {
    FUN_14000fc22(&DAT_14caa7d60,&PTR_FUN_14a3d92e8);
  }
  return DAT_14caa7d60;
}



// FUNCTION 1463270b9 FUN_1463270b9 body=47 status=ok
// SIG undefined FUN_1463270b9(void)

longlong FUN_1463270b9(void)

{
  if (DAT_14caa7d68 == 0) {
    FUN_14000fc22(&DAT_14caa7d68,&PTR_FUN_14a3d93d8);
  }
  return DAT_14caa7d68;
}



// FUNCTION 1463270e8 FUN_1463270e8 body=47 status=ok
// SIG undefined FUN_1463270e8(void)

longlong FUN_1463270e8(void)

{
  if (DAT_14caa7d70 == 0) {
    FUN_14000fc22(&DAT_14caa7d70,&PTR_FUN_14a3d94d0);
  }
  return DAT_14caa7d70;
}



// FUNCTION 146327117 FUN_146327117 body=47 status=ok
// SIG undefined FUN_146327117(void)

longlong FUN_146327117(void)

{
  if (DAT_14caa7d78 == 0) {
    FUN_14000fc22(&DAT_14caa7d78,&PTR_FUN_14a3d9650);
  }
  return DAT_14caa7d78;
}



// FUNCTION 146327146 FUN_146327146 body=47 status=ok
// SIG undefined FUN_146327146(void)

longlong FUN_146327146(void)

{
  if (DAT_14caa7d80 == 0) {
    FUN_14000fc22(&DAT_14caa7d80,&PTR_FUN_14a3d97d0);
  }
  return DAT_14caa7d80;
}



// FUNCTION 146327176 FUN_146327176 body=365 status=ok
// SIG undefined FUN_146327176(void)

void FUN_146327176(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = local_30;
  local_28 = local_38;
  if (local_3c == 0) {
    uVar1 = FUN_14021d296(&local_20,&local_28);
  }
  else {
    uVar1 = local_30 == local_38 && local_38 != 0;
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463272e4 FUN_1463272e4 body=47 status=ok
// SIG undefined FUN_1463272e4(void)

longlong FUN_1463272e4(void)

{
  if (DAT_14caa7d88 == 0) {
    FUN_14000fc22(&DAT_14caa7d88,&PTR_FUN_14a3d9900);
  }
  return DAT_14caa7d88;
}



// FUNCTION 146327313 FUN_146327313 body=47 status=ok
// SIG undefined FUN_146327313(void)

longlong FUN_146327313(void)

{
  if (DAT_14caa7d90 == 0) {
    FUN_14000fc22(&DAT_14caa7d90,&PTR_FUN_14a3d9a38);
  }
  return DAT_14caa7d90;
}



// FUNCTION 146327342 FUN_146327342 body=47 status=ok
// SIG undefined FUN_146327342(void)

longlong FUN_146327342(void)

{
  if (DAT_14caa7d98 == 0) {
    FUN_14000fc22(&DAT_14caa7d98,&PTR_FUN_14a3d9b70);
  }
  return DAT_14caa7d98;
}



// FUNCTION 146327371 FUN_146327371 body=47 status=ok
// SIG undefined FUN_146327371(void)

longlong FUN_146327371(void)

{
  if (DAT_14caa7da0 == 0) {
    FUN_14000fc22(&DAT_14caa7da0,&PTR_FUN_14a3d9c98);
  }
  return DAT_14caa7da0;
}



// FUNCTION 1463273a0 FUN_1463273a0 body=47 status=ok
// SIG undefined FUN_1463273a0(void)

longlong FUN_1463273a0(void)

{
  if (DAT_14caa7da8 == 0) {
    FUN_14000fc22(&DAT_14caa7da8,&PTR_FUN_14a3d9dd0);
  }
  return DAT_14caa7da8;
}



// FUNCTION 1463273d0 FUN_1463273d0 body=34 status=ok
// SIG undefined FUN_1463273d0(void)

void FUN_1463273d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a653c0();
  FUN_14069c8d6(uVar1,&PTR_s_AddGameplayTag_14a3d9e10,0x23);
  return;
}



// FUNCTION 1463273f2 FUN_1463273f2 body=35 status=ok
// SIG undefined FUN_1463273f2(void)

void FUN_1463273f2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3da310;
  return;
}



// FUNCTION 146327415 FUN_146327415 body=49 status=ok
// SIG undefined FUN_146327415(void)

longlong FUN_146327415(void)

{
  if (DAT_14caa7df0 == 0) {
    FUN_14073dd9a(&DAT_14caa7df0,&PTR_LAB_14a3daa20);
  }
  return DAT_14caa7df0;
}



// FUNCTION 146327446 FUN_146327446 body=47 status=ok
// SIG undefined FUN_146327446(void)

longlong FUN_146327446(void)

{
  if (DAT_14caa7dc8 == 0) {
    FUN_14000fc22(&DAT_14caa7dc8,&PTR_FUN_14a3da638);
  }
  return DAT_14caa7dc8;
}



// FUNCTION 146327475 FUN_146327475 body=47 status=ok
// SIG undefined FUN_146327475(void)

longlong FUN_146327475(void)

{
  if (DAT_14caa7dd0 == 0) {
    FUN_14000fc22(&DAT_14caa7dd0,&PTR_FUN_14a3da710);
  }
  return DAT_14caa7dd0;
}



// FUNCTION 1463274a4 FUN_1463274a4 body=47 status=ok
// SIG undefined FUN_1463274a4(void)

longlong FUN_1463274a4(void)

{
  if (DAT_14caa7dd8 == 0) {
    FUN_14000fc22(&DAT_14caa7dd8,&PTR_FUN_14a3da800);
  }
  return DAT_14caa7dd8;
}



// FUNCTION 1463274d3 FUN_1463274d3 body=47 status=ok
// SIG undefined FUN_1463274d3(void)

longlong FUN_1463274d3(void)

{
  if (DAT_14caa7de0 == 0) {
    FUN_14000fc22(&DAT_14caa7de0,&PTR_FUN_14a3da8f8);
  }
  return DAT_14caa7de0;
}



// FUNCTION 146327502 FUN_146327502 body=34 status=ok
// SIG undefined FUN_146327502(void)

void FUN_146327502(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1403ad4e4();
  FUN_14069c8d6(uVar1,&PTR_s_BP_GetOwnedGameplayTags_14a3da940,4);
  return;
}



// FUNCTION 146327529 FUN_146327529 body=35 status=ok
// SIG undefined FUN_146327529(void)

void FUN_146327529(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3daa60;
  return;
}



// FUNCTION 146327565 FUN_146327565 body=49 status=ok
// SIG undefined FUN_146327565(void)

longlong FUN_146327565(void)

{
  if (DAT_14caa7e08 == 0) {
    FUN_1409ce572(&DAT_14caa7e08,&PTR_FUN_14a3dad90);
  }
  return DAT_14caa7e08;
}



// FUNCTION 146327596 FUN_146327596 body=48 status=ok
// SIG undefined FUN_146327596(void)

void FUN_146327596(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14a3e0530;
  return;
}



// FUNCTION 1463275c6 FUN_1463275c6 body=48 status=ok
// SIG undefined FUN_1463275c6(void)

void FUN_1463275c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a3e06a0;
  return;
}



// FUNCTION 1463275f6 FUN_1463275f6 body=55 status=ok
// SIG undefined FUN_1463275f6(void)

void FUN_1463275f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa7e58 == 0) {
    uVar1 = FUN_140608922();
    DAT_14caa7e58 = FUN_140002ddd(FUN_14632762d,uVar1,L"GameplayTagCreationWidgetHelper");
  }
  return;
}



// FUNCTION 14632762d FUN_14632762d body=47 status=ok
// SIG undefined FUN_14632762d(void)

longlong FUN_14632762d(void)

{
  if (DAT_14caa7e50 == 0) {
    FUN_14086a14e(&DAT_14caa7e50,&PTR_FUN_14a3db038);
  }
  return DAT_14caa7e50;
}



// FUNCTION 14632765c FUN_14632765c body=48 status=ok
// SIG undefined FUN_14632765c(void)

void FUN_14632765c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a3e0810;
  return;
}



// FUNCTION 14632768c FUN_14632768c body=47 status=ok
// SIG undefined FUN_14632768c(void)

longlong FUN_14632768c(void)

{
  if (DAT_14caa7e68 == 0) {
    FUN_1409ce572(&DAT_14caa7e68,&PTR_FUN_14a3db100);
  }
  return DAT_14caa7e68;
}



// FUNCTION 1463276bc FUN_1463276bc body=55 status=ok
// SIG undefined FUN_1463276bc(void)

void FUN_1463276bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa7e88 == 0) {
    uVar1 = FUN_140608922();
    DAT_14caa7e88 = FUN_140002ddd(FUN_14179497c,uVar1,L"GameplayTagQuery");
  }
  return;
}



// FUNCTION 1463276f4 FUN_1463276f4 body=48 status=ok
// SIG undefined FUN_1463276f4(void)

void FUN_1463276f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14a3e0ad0;
  return;
}



// FUNCTION 146327724 FUN_146327724 body=69 status=ok
// SIG undefined FUN_146327724(void)

void FUN_146327724(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3db560;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  return;
}



// FUNCTION 14632776e FUN_14632776e body=47 status=ok
// SIG undefined FUN_14632776e(void)

longlong FUN_14632776e(void)

{
  if (DAT_14caa7ea0 == 0) {
    FUN_14073dd9a(&DAT_14caa7ea0,&PTR_LAB_14a3db518);
  }
  return DAT_14caa7ea0;
}



// FUNCTION 14632779d FUN_14632779d body=35 status=ok
// SIG undefined FUN_14632779d(void)

void FUN_14632779d(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3db8b0;
  return;
}



// FUNCTION 1463277c0 FUN_1463277c0 body=49 status=ok
// SIG undefined FUN_1463277c0(void)

longlong FUN_1463277c0(void)

{
  if (DAT_14caa7eb8 == 0) {
    FUN_14073dd9a(&DAT_14caa7eb8,&PTR_LAB_14a3db868);
  }
  return DAT_14caa7eb8;
}



// FUNCTION 1463277f1 FUN_1463277f1 body=46 status=ok
// SIG undefined FUN_1463277f1(void)

void FUN_1463277f1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3dbc60;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 14632781f FUN_14632781f body=47 status=ok
// SIG undefined FUN_14632781f(void)

longlong FUN_14632781f(void)

{
  if (DAT_14caa7ed0 == 0) {
    FUN_14073dd9a(&DAT_14caa7ed0,&PTR_LAB_14a3dbc18);
  }
  return DAT_14caa7ed0;
}



// FUNCTION 14632784e FUN_14632784e body=46 status=ok
// SIG undefined FUN_14632784e(void)

void FUN_14632784e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3dc010;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 14632787c FUN_14632787c body=47 status=ok
// SIG undefined FUN_14632787c(void)

longlong FUN_14632787c(void)

{
  if (DAT_14caa7ee8 == 0) {
    FUN_14073dd9a(&DAT_14caa7ee8,&PTR_LAB_14a3dbfc8);
  }
  return DAT_14caa7ee8;
}



// FUNCTION 1463278ab FUN_1463278ab body=46 status=ok
// SIG undefined FUN_1463278ab(void)

void FUN_1463278ab(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3dc3c0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 1463278d9 FUN_1463278d9 body=47 status=ok
// SIG undefined FUN_1463278d9(void)

longlong FUN_1463278d9(void)

{
  if (DAT_14caa7f00 == 0) {
    FUN_14073dd9a(&DAT_14caa7f00,&PTR_LAB_14a3dc378);
  }
  return DAT_14caa7f00;
}



// FUNCTION 146327908 FUN_146327908 body=42 status=ok
// SIG undefined FUN_146327908(void)

void FUN_146327908(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3dc7c0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 146327932 FUN_146327932 body=47 status=ok
// SIG undefined FUN_146327932(void)

longlong FUN_146327932(void)

{
  if (DAT_14caa7f18 == 0) {
    FUN_14073dd9a(&DAT_14caa7f18,&PTR_LAB_14a3dc778);
  }
  return DAT_14caa7f18;
}



// FUNCTION 146327961 FUN_146327961 body=42 status=ok
// SIG undefined FUN_146327961(void)

void FUN_146327961(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3dcbb0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14632798b FUN_14632798b body=47 status=ok
// SIG undefined FUN_14632798b(void)

longlong FUN_14632798b(void)

{
  if (DAT_14caa7f30 == 0) {
    FUN_14073dd9a(&DAT_14caa7f30,&PTR_LAB_14a3dcb68);
  }
  return DAT_14caa7f30;
}



// FUNCTION 1463279ba FUN_1463279ba body=42 status=ok
// SIG undefined FUN_1463279ba(void)

void FUN_1463279ba(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3dcfa0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 1463279e4 FUN_1463279e4 body=47 status=ok
// SIG undefined FUN_1463279e4(void)

longlong FUN_1463279e4(void)

{
  if (DAT_14caa7f48 == 0) {
    FUN_14073dd9a(&DAT_14caa7f48,&PTR_LAB_14a3dcf58);
  }
  return DAT_14caa7f48;
}



// FUNCTION 146327a14 FUN_146327a14 body=55 status=ok
// SIG undefined FUN_146327a14(void)

void FUN_146327a14(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa7fd0 == 0) {
    uVar1 = FUN_140608922();
    DAT_14caa7fd0 = FUN_140002ddd(FUN_146327a4b,uVar1,L"GameplayTagContainerNetSerializerConfig");
  }
  return;
}



// FUNCTION 146327a4b FUN_146327a4b body=47 status=ok
// SIG undefined FUN_146327a4b(void)

longlong FUN_146327a4b(void)

{
  if (DAT_14caa7fc8 == 0) {
    FUN_14086a14e(&DAT_14caa7fc8,&PTR_FUN_14a3dd7b0);
  }
  return DAT_14caa7fc8;
}



// FUNCTION 146327a7a FUN_146327a7a body=48 status=ok
// SIG undefined FUN_146327a7a(void)

void FUN_146327a7a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a3e0c70;
  return;
}



// FUNCTION 146327aaa FUN_146327aaa body=55 status=ok
// SIG undefined FUN_146327aaa(void)

void FUN_146327aaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa80e0 == 0) {
    uVar1 = FUN_140608922();
    DAT_14caa80e0 = FUN_140002ddd(FUN_146327ae1,uVar1,L"GameplayTagNetSerializerConfig");
  }
  return;
}



// FUNCTION 146327ae1 FUN_146327ae1 body=47 status=ok
// SIG undefined FUN_146327ae1(void)

longlong FUN_146327ae1(void)

{
  if (DAT_14caa80d8 == 0) {
    FUN_14086a14e(&DAT_14caa80d8,&PTR_FUN_14a3dd908);
  }
  return DAT_14caa80d8;
}



// FUNCTION 146327b10 FUN_146327b10 body=48 status=ok
// SIG undefined FUN_146327b10(void)

void FUN_146327b10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a3e0e00;
  return;
}



// FUNCTION 146327b40 FUN_146327b40 body=55 status=ok
// SIG undefined FUN_146327b40(void)

void FUN_146327b40(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa81d8 == 0) {
    uVar1 = FUN_140608922();
    DAT_14caa81d8 = FUN_140002ddd(FUN_146327b77,uVar1,L"GameplayTagRedirect");
  }
  return;
}



// FUNCTION 146327b77 FUN_146327b77 body=47 status=ok
// SIG undefined FUN_146327b77(void)

longlong FUN_146327b77(void)

{
  if (DAT_14caa81d0 == 0) {
    FUN_14086a14e(&DAT_14caa81d0,&PTR_FUN_14a3dda78);
  }
  return DAT_14caa81d0;
}



// FUNCTION 146327ba6 FUN_146327ba6 body=48 status=ok
// SIG undefined FUN_146327ba6(void)

void FUN_146327ba6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14a3e0f90;
  return;
}



// FUNCTION 146327bd6 FUN_146327bd6 body=55 status=ok
// SIG undefined FUN_146327bd6(void)

void FUN_146327bd6(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8248 == 0) {
    uVar1 = FUN_140608922();
    DAT_14caa8248 = FUN_140002ddd(FUN_146327c0d,uVar1,L"GameplayTagTableRow");
  }
  return;
}



// FUNCTION 146327c0d FUN_146327c0d body=49 status=ok
// SIG undefined FUN_146327c0d(void)

longlong FUN_146327c0d(void)

{
  if (DAT_14caa8240 == 0) {
    FUN_14086a14e(&DAT_14caa8240,&PTR_FUN_14a3ddc08);
  }
  return DAT_14caa8240;
}



// FUNCTION 146327c3e FUN_146327c3e body=48 status=ok
// SIG undefined FUN_146327c3e(void)

void FUN_146327c3e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a3e10f0;
  return;
}



// FUNCTION 146327c6e FUN_146327c6e body=55 status=ok
// SIG undefined FUN_146327c6e(void)

void FUN_146327c6e(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8260 == 0) {
    uVar1 = FUN_140608922();
    DAT_14caa8260 = FUN_140002ddd(FUN_146327ca5,uVar1,L"RestrictedGameplayTagTableRow");
  }
  return;
}



// FUNCTION 146327ca5 FUN_146327ca5 body=47 status=ok
// SIG undefined FUN_146327ca5(void)

longlong FUN_146327ca5(void)

{
  if (DAT_14caa8258 == 0) {
    FUN_14086a14e(&DAT_14caa8258,&PTR_FUN_14a3ddd00);
  }
  return DAT_14caa8258;
}



// FUNCTION 146327cd4 FUN_146327cd4 body=48 status=ok
// SIG undefined FUN_146327cd4(void)

void FUN_146327cd4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14a3e1250;
  return;
}



// FUNCTION 146327d04 FUN_146327d04 body=47 status=ok
// SIG undefined FUN_146327d04(void)

longlong FUN_146327d04(void)

{
  if (DAT_14caa8270 == 0) {
    FUN_1409ce572(&DAT_14caa8270,&PTR_FUN_14a3dddb0);
  }
  return DAT_14caa8270;
}



// FUNCTION 146327d33 FUN_146327d33 body=47 status=ok
// SIG undefined FUN_146327d33(void)

longlong FUN_146327d33(void)

{
  if (DAT_14caa8288 == 0) {
    FUN_1409ce572(&DAT_14caa8288,&PTR_FUN_14a3dde40);
  }
  return DAT_14caa8288;
}



// FUNCTION 146327d62 FUN_146327d62 body=55 status=ok
// SIG undefined FUN_146327d62(void)

void FUN_146327d62(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa82a8 == 0) {
    uVar1 = FUN_140608922();
    DAT_14caa82a8 = FUN_140002ddd(FUN_146327d99,uVar1,L"GameplayTagSource");
  }
  return;
}



// FUNCTION 146327d99 FUN_146327d99 body=47 status=ok
// SIG undefined FUN_146327d99(void)

longlong FUN_146327d99(void)

{
  if (DAT_14caa82a0 == 0) {
    FUN_14086a14e(&DAT_14caa82a0,&PTR_FUN_14a3de050);
  }
  return DAT_14caa82a0;
}



// FUNCTION 146327dd2 FUN_146327dd2 body=48 status=ok
// SIG undefined FUN_146327dd2(void)

void FUN_146327dd2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a3e1580;
  return;
}



// FUNCTION 146327e02 FUN_146327e02 body=55 status=ok
// SIG undefined FUN_146327e02(void)

void FUN_146327e02(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa82c0 == 0) {
    uVar1 = FUN_140608922();
    DAT_14caa82c0 = FUN_140002ddd(FUN_146327e39,uVar1,L"GameplayTagNode");
  }
  return;
}



// FUNCTION 146327e39 FUN_146327e39 body=47 status=ok
// SIG undefined FUN_146327e39(void)

longlong FUN_146327e39(void)

{
  if (DAT_14caa82b8 == 0) {
    FUN_14086a14e(&DAT_14caa82b8,&PTR_FUN_14a3de0b8);
  }
  return DAT_14caa82b8;
}



// FUNCTION 146327e68 FUN_146327e68 body=48 status=ok
// SIG undefined FUN_146327e68(void)

void FUN_146327e68(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14a3e16f0;
  return;
}



// FUNCTION 146327e98 FUN_146327e98 body=47 status=ok
// SIG undefined FUN_146327e98(void)

longlong FUN_146327e98(void)

{
  if (DAT_14caa82d8 == 0) {
    FUN_14073dd9a(&DAT_14caa82d8,&PTR_LAB_14a3de2c8);
  }
  return DAT_14caa82d8;
}



// FUNCTION 146327ed3 FUN_146327ed3 body=219 status=ok
// SIG undefined FUN_146327ed3(void)

undefined8
FUN_146327ed3(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
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
  uVar1 = FUN_145a518b4();
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



// FUNCTION 146327fb0 FUN_146327fb0 body=244 status=ok
// SIG undefined FUN_146327fb0(void)

undefined8
FUN_146327fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14a3e1c40;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_1448b6402(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463280a6 FUN_1463280a6 body=231 status=ok
// SIG undefined FUN_1463280a6(void)

void FUN_1463280a6(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14a3e1cd0;
  local_28[3] = &DAT_14caa8458;
  local_28[4] = FUN_14747e590;
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



// FUNCTION 14632818e FUN_14632818e body=55 status=ok
// SIG undefined FUN_14632818e(void)

void FUN_14632818e(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8468 == 0) {
    uVar1 = FUN_140608922();
    DAT_14caa8468 = FUN_140002ddd(FUN_1463281c5,uVar1,L"GameplayTagCategoryRemap");
  }
  return;
}



// FUNCTION 1463281c5 FUN_1463281c5 body=47 status=ok
// SIG undefined FUN_1463281c5(void)

longlong FUN_1463281c5(void)

{
  if (DAT_14caa8460 == 0) {
    FUN_14086a14e(&DAT_14caa8460,&PTR_FUN_14a3dea38);
  }
  return DAT_14caa8460;
}



// FUNCTION 1463281f4 FUN_1463281f4 body=48 status=ok
// SIG undefined FUN_1463281f4(void)

void FUN_1463281f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a3e18d0;
  return;
}



// FUNCTION 146328224 FUN_146328224 body=46 status=ok
// SIG undefined FUN_146328224(void)

void FUN_146328224(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3dec00;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 146328252 FUN_146328252 body=47 status=ok
// SIG undefined FUN_146328252(void)

longlong FUN_146328252(void)

{
  if (DAT_14caa8480 == 0) {
    FUN_14073dd9a(&DAT_14caa8480,&PTR_LAB_14a3debb8);
  }
  return DAT_14caa8480;
}



// FUNCTION 146328281 FUN_146328281 body=46 status=ok
// SIG undefined FUN_146328281(void)

void FUN_146328281(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3df030;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 1463282af FUN_1463282af body=47 status=ok
// SIG undefined FUN_1463282af(void)

longlong FUN_1463282af(void)

{
  if (DAT_14caa8498 == 0) {
    FUN_14073dd9a(&DAT_14caa8498,&PTR_LAB_14a3defe8);
  }
  return DAT_14caa8498;
}



// FUNCTION 1463282de FUN_1463282de body=55 status=ok
// SIG undefined FUN_1463282de(void)

void FUN_1463282de(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa84b0 == 0) {
    uVar1 = FUN_140608922();
    DAT_14caa84b0 = FUN_140002ddd(FUN_146328315,uVar1,L"RestrictedConfigInfo");
  }
  return;
}



// FUNCTION 146328315 FUN_146328315 body=47 status=ok
// SIG undefined FUN_146328315(void)

longlong FUN_146328315(void)

{
  if (DAT_14caa84a8 == 0) {
    FUN_14086a14e(&DAT_14caa84a8,&PTR_FUN_14a3df3f0);
  }
  return DAT_14caa84a8;
}



// FUNCTION 146328344 FUN_146328344 body=48 status=ok
// SIG undefined FUN_146328344(void)

void FUN_146328344(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a3e1a60;
  return;
}



// FUNCTION 146328374 FUN_146328374 body=47 status=ok
// SIG undefined FUN_146328374(void)

longlong FUN_146328374(void)

{
  if (DAT_14caa84c8 == 0) {
    FUN_14073dd9a(&DAT_14caa84c8,&PTR_LAB_14a3dfb28);
  }
  return DAT_14caa84c8;
}



// FUNCTION 1463283a3 FUN_1463283a3 body=50 status=ok
// SIG undefined FUN_1463283a3(void)

void FUN_1463283a3(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3dff60;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



// FUNCTION 1463283d5 FUN_1463283d5 body=47 status=ok
// SIG undefined FUN_1463283d5(void)

longlong FUN_1463283d5(void)

{
  if (DAT_14caa84e0 == 0) {
    FUN_14073dd9a(&DAT_14caa84e0,&PTR_LAB_14a3dff18);
  }
  return DAT_14caa84e0;
}



// FUNCTION 146328404 FUN_146328404 body=40 status=ok
// SIG undefined FUN_146328404(void)

undefined8 FUN_146328404(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632842c FUN_14632842c body=40 status=ok
// SIG undefined FUN_14632842c(void)

undefined8 FUN_14632842c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146328454 FUN_146328454 body=40 status=ok
// SIG undefined FUN_146328454(void)

undefined8 FUN_146328454(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632847c FUN_14632847c body=69 status=ok
// SIG undefined FUN_14632847c(void)

undefined8 * FUN_14632847c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3dc7c0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463284c2 FUN_1463284c2 body=69 status=ok
// SIG undefined FUN_1463284c2(void)

undefined8 * FUN_1463284c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3dcbb0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146328508 FUN_146328508 body=69 status=ok
// SIG undefined FUN_146328508(void)

undefined8 * FUN_146328508(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3dcfa0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632854e FUN_14632854e body=69 status=ok
// SIG undefined FUN_14632854e(void)

undefined8 * FUN_14632854e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3dff60;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146328594 FUN_146328594 body=38 status=ok
// SIG undefined FUN_146328594(void)

undefined8 FUN_146328594(undefined8 param_1,int param_2)

{
  FUN_14591a35e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463285ba FUN_1463285ba body=29 status=ok
// SIG undefined FUN_1463285ba(void)

undefined8 FUN_1463285ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463285d8 FUN_1463285d8 body=29 status=ok
// SIG undefined FUN_1463285d8(void)

undefined8 FUN_1463285d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463285f6 FUN_1463285f6 body=29 status=ok
// SIG undefined FUN_1463285f6(void)

undefined8 FUN_1463285f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146328614 FUN_146328614 body=29 status=ok
// SIG undefined FUN_146328614(void)

undefined8 FUN_146328614(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146328632 FUN_146328632 body=29 status=ok
// SIG undefined FUN_146328632(void)

undefined8 FUN_146328632(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146328650 FUN_146328650 body=29 status=ok
// SIG undefined FUN_146328650(void)

undefined8 FUN_146328650(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632866e FUN_14632866e body=29 status=ok
// SIG undefined FUN_14632866e(void)

undefined8 FUN_14632866e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632868c FUN_14632868c body=29 status=ok
// SIG undefined FUN_14632868c(void)

undefined8 FUN_14632868c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463286aa FUN_1463286aa body=29 status=ok
// SIG undefined FUN_1463286aa(void)

undefined8 FUN_1463286aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463286c8 FUN_1463286c8 body=29 status=ok
// SIG undefined FUN_1463286c8(void)

undefined8 FUN_1463286c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463286e6 FUN_1463286e6 body=29 status=ok
// SIG undefined FUN_1463286e6(void)

undefined8 FUN_1463286e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146328704 FUN_146328704 body=29 status=ok
// SIG undefined FUN_146328704(void)

undefined8 FUN_146328704(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146328722 FUN_146328722 body=29 status=ok
// SIG undefined FUN_146328722(void)

undefined8 FUN_146328722(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146328740 FUN_146328740 body=29 status=ok
// SIG undefined FUN_146328740(void)

undefined8 FUN_146328740(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14632875e FUN_14632875e body=132 status=ok
// SIG undefined FUN_14632875e(void)

void FUN_14632875e(longlong param_1,int param_2)

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



// FUNCTION 1463287e4 FUN_1463287e4 body=29 status=ok
// SIG undefined FUN_1463287e4(void)

bool FUN_1463287e4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146328802 FUN_146328802 body=26 status=ok
// SIG undefined FUN_146328802(void)

bool FUN_146328802(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14632881c FUN_14632881c body=24 status=ok
// SIG undefined FUN_14632881c(void)

bool FUN_14632881c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146328834 FUN_146328834 body=95 status=ok
// SIG undefined FUN_146328834(void)

void FUN_146328834(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146328894 FUN_146328894 body=93 status=ok
// SIG undefined FUN_146328894(void)

void FUN_146328894(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a3e1cd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1463288f1 FUN_1463288f1 body=47 status=ok
// SIG undefined FUN_1463288f1(void)

longlong FUN_1463288f1(void)

{
  if (DAT_14caa85a0 == 0) {
    FUN_14086a14e(&DAT_14caa85a0,&PTR_FUN_14a3e1f10);
  }
  return DAT_14caa85a0;
}



// FUNCTION 146328920 FUN_146328920 body=48 status=ok
// SIG undefined FUN_146328920(void)

void FUN_146328920(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a3e4420;
  return;
}



// FUNCTION 146328950 FUN_146328950 body=55 status=ok
// SIG undefined FUN_146328950(void)

void FUN_146328950(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa85c0 == 0) {
    uVar1 = FUN_145a24b95();
    DAT_14caa85c0 = FUN_140002ddd(FUN_146328987,uVar1,L"DataflowPreviewCacheParams");
  }
  return;
}



// FUNCTION 146328987 FUN_146328987 body=47 status=ok
// SIG undefined FUN_146328987(void)

longlong FUN_146328987(void)

{
  if (DAT_14caa85b8 == 0) {
    FUN_14086a14e(&DAT_14caa85b8,&PTR_FUN_14a3e20c8);
  }
  return DAT_14caa85b8;
}



// FUNCTION 1463289b6 FUN_1463289b6 body=48 status=ok
// SIG undefined FUN_1463289b6(void)

void FUN_1463289b6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14a3e4590;
  return;
}



// FUNCTION 1463289e6 FUN_1463289e6 body=39 status=ok
// SIG undefined FUN_1463289e6(void)

void FUN_1463289e6(void)

{
  FUN_140056680(&DAT_14caa85d0,L"DataflowSimulationTag");
  atexit((_func_5014 *)&LAB_143275248);
  return;
}



// FUNCTION 146328a0d FUN_146328a0d body=47 status=ok
// SIG undefined FUN_146328a0d(void)

longlong FUN_146328a0d(void)

{
  if (DAT_14caa85f0 == 0) {
    FUN_14073dd9a(&DAT_14caa85f0,&PTR_LAB_14a3e2340);
  }
  return DAT_14caa85f0;
}



// FUNCTION 146328a3c FUN_146328a3c body=47 status=ok
// SIG undefined FUN_146328a3c(void)

longlong FUN_146328a3c(void)

{
  if (DAT_14caa85e0 == 0) {
    FUN_14000fc22(&DAT_14caa85e0,&PTR_FUN_14a3e2278);
  }
  return DAT_14caa85e0;
}



// FUNCTION 146328a6c FUN_146328a6c body=34 status=ok
// SIG undefined FUN_146328a6c(void)

void FUN_146328a6c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a654ac();
  FUN_14069c8d6(uVar1,&PTR_s_EvaluateTerminalNodeByName_14a3e22c0,1);
  return;
}



// FUNCTION 146328a8e FUN_146328a8e body=35 status=ok
// SIG undefined FUN_146328a8e(void)

void FUN_146328a8e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3e2380;
  return;
}



// FUNCTION 146328ab1 FUN_146328ab1 body=35 status=ok
// SIG undefined FUN_146328ab1(void)

void FUN_146328ab1(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3e26e0;
  return;
}



// FUNCTION 146328ad9 FUN_146328ad9 body=47 status=ok
// SIG undefined FUN_146328ad9(void)

longlong FUN_146328ad9(void)

{
  if (DAT_14caa8618 == 0) {
    FUN_14073dd9a(&DAT_14caa8618,&PTR_LAB_14a3e2698);
  }
  return DAT_14caa8618;
}



// FUNCTION 146328b08 FUN_146328b08 body=47 status=ok
// SIG undefined FUN_146328b08(void)

longlong FUN_146328b08(void)

{
  if (DAT_14caa8670 == 0) {
    FUN_14073dd9a(&DAT_14caa8670,&PTR_LAB_14a3e3538);
  }
  return DAT_14caa8670;
}



// FUNCTION 146328b37 FUN_146328b37 body=47 status=ok
// SIG undefined FUN_146328b37(void)

longlong FUN_146328b37(void)

{
  if (DAT_14caa8630 == 0) {
    FUN_14073dd9a(&DAT_14caa8630,&PTR_LAB_14a3e2b38);
  }
  return DAT_14caa8630;
}



// FUNCTION 146328b66 FUN_146328b66 body=51 status=ok
// SIG undefined FUN_146328b66(void)

void FUN_146328b66(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145ae1d14(puVar1);
  *puVar1 = &PTR_FUN_14a3e2f80;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  *(undefined2 *)(puVar1 + 0x17) = 0;
  return;
}



// FUNCTION 146328b99 FUN_146328b99 body=47 status=ok
// SIG undefined FUN_146328b99(void)

longlong FUN_146328b99(void)

{
  if (DAT_14caa8648 == 0) {
    FUN_14073dd9a(&DAT_14caa8648,&PTR_LAB_14a3e2f38);
  }
  return DAT_14caa8648;
}



// FUNCTION 146328bc8 FUN_146328bc8 body=51 status=ok
// SIG undefined FUN_146328bc8(void)

void FUN_146328bc8(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x38,0,0);
  FUN_1449e2820(param_1,param_2);
  return;
}



// FUNCTION 146328bfb FUN_146328bfb body=58 status=ok
// SIG undefined FUN_146328bfb(void)

void FUN_146328bfb(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3e3580;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x61) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x69) = 0;
  return;
}



// FUNCTION 146328c3f FUN_146328c3f body=47 status=ok
// SIG undefined FUN_146328c3f(void)

longlong FUN_146328c3f(void)

{
  if (DAT_14caa8688 == 0) {
    FUN_14073dd9a(&DAT_14caa8688,&PTR_LAB_14a3e39c8);
  }
  return DAT_14caa8688;
}



// FUNCTION 146328c6e FUN_146328c6e body=192 status=ok
// SIG undefined FUN_146328c6e(void)

void FUN_146328c6e(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14a3e47f0;
  puVar1[3] = &DAT_14caa8698;
  puVar1[4] = FUN_147480372;
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



// FUNCTION 146328d2f FUN_146328d2f body=47 status=ok
// SIG undefined FUN_146328d2f(void)

longlong FUN_146328d2f(void)

{
  if (DAT_14caa86a0 == 0) {
    FUN_1409ce572(&DAT_14caa86a0,&PTR_FUN_14a3e3da0);
  }
  return DAT_14caa86a0;
}



// FUNCTION 146328d69 FUN_146328d69 body=47 status=ok
// SIG undefined FUN_146328d69(void)

longlong FUN_146328d69(void)

{
  if (DAT_14caa86c0 == 0) {
    FUN_14073dd9a(&DAT_14caa86c0,&PTR_LAB_14a3e3fb8);
  }
  return DAT_14caa86c0;
}



// FUNCTION 146328d98 FUN_146328d98 body=40 status=ok
// SIG undefined FUN_146328d98(void)

undefined8 FUN_146328d98(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146328dc0 FUN_146328dc0 body=40 status=ok
// SIG undefined FUN_146328dc0(void)

undefined8 FUN_146328dc0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146328de8 FUN_146328de8 body=40 status=ok
// SIG undefined FUN_146328de8(void)

undefined8 FUN_146328de8(undefined8 param_1,int param_2)

{
  FUN_145b07534();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146328e10 FUN_146328e10 body=40 status=ok
// SIG undefined FUN_146328e10(void)

undefined8 FUN_146328e10(undefined8 param_1,int param_2)

{
  FUN_145b075ea();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146328e38 FUN_146328e38 body=29 status=ok
// SIG undefined FUN_146328e38(void)

undefined8 FUN_146328e38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146328e56 FUN_146328e56 body=29 status=ok
// SIG undefined FUN_146328e56(void)

undefined8 FUN_146328e56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146328e74 FUN_146328e74 body=93 status=ok
// SIG undefined FUN_146328e74(void)

void FUN_146328e74(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a3e47f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146328ed2 FUN_146328ed2 body=29 status=ok
// SIG undefined FUN_146328ed2(void)

undefined8 FUN_146328ed2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146328ef0 FUN_146328ef0 body=55 status=ok
// SIG undefined FUN_146328ef0(void)

void FUN_146328ef0(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8708 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8708 = FUN_140002ddd(FUN_146328f27,uVar1,L"DataflowCollisionObjectProxy");
  }
  return;
}



// FUNCTION 146328f27 FUN_146328f27 body=47 status=ok
// SIG undefined FUN_146328f27(void)

longlong FUN_146328f27(void)

{
  if (DAT_14caa8700 == 0) {
    FUN_14086a14e(&DAT_14caa8700,&PTR_FUN_14a3e4918);
  }
  return DAT_14caa8700;
}



// FUNCTION 146328f56 FUN_146328f56 body=49 status=ok
// SIG undefined FUN_146328f56(void)

longlong FUN_146328f56(void)

{
  if (DAT_14caa8870 == 0) {
    FUN_14086a14e(&DAT_14caa8870,&PTR_FUN_14a3e6c98);
  }
  return DAT_14caa8870;
}



// FUNCTION 146328f88 FUN_146328f88 body=48 status=ok
// SIG undefined FUN_146328f88(void)

void FUN_146328f88(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14a3e7dc0;
  return;
}



// FUNCTION 146328fbd FUN_146328fbd body=35 status=ok
// SIG undefined FUN_146328fbd(void)

void FUN_146328fbd(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3e4a00;
  return;
}



// FUNCTION 146328fe0 FUN_146328fe0 body=49 status=ok
// SIG undefined FUN_146328fe0(void)

longlong FUN_146328fe0(void)

{
  if (DAT_14caa8810 == 0) {
    FUN_14073dd9a(&DAT_14caa8810,&PTR_LAB_14a3e5f28);
  }
  return DAT_14caa8810;
}



// FUNCTION 146329011 FUN_146329011 body=47 status=ok
// SIG undefined FUN_146329011(void)

longlong FUN_146329011(void)

{
  if (DAT_14caa8720 == 0) {
    FUN_14073dd9a(&DAT_14caa8720,&PTR_LAB_14a3e49b8);
  }
  return DAT_14caa8720;
}



// FUNCTION 146329040 FUN_146329040 body=55 status=ok
// SIG undefined FUN_146329040(void)

void FUN_146329040(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8738 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8738 = FUN_140002ddd(FUN_146329077,uVar1,L"DataflowConstraintObjectProxy");
  }
  return;
}



// FUNCTION 146329077 FUN_146329077 body=47 status=ok
// SIG undefined FUN_146329077(void)

longlong FUN_146329077(void)

{
  if (DAT_14caa8730 == 0) {
    FUN_14086a14e(&DAT_14caa8730,&PTR_FUN_14a3e4d88);
  }
  return DAT_14caa8730;
}



// FUNCTION 1463290a6 FUN_1463290a6 body=48 status=ok
// SIG undefined FUN_1463290a6(void)

void FUN_1463290a6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14a3e7f40;
  return;
}



// FUNCTION 1463290d6 FUN_1463290d6 body=35 status=ok
// SIG undefined FUN_1463290d6(void)

void FUN_1463290d6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3e4e70;
  return;
}



// FUNCTION 1463290f9 FUN_1463290f9 body=47 status=ok
// SIG undefined FUN_1463290f9(void)

longlong FUN_1463290f9(void)

{
  if (DAT_14caa8750 == 0) {
    FUN_14073dd9a(&DAT_14caa8750,&PTR_LAB_14a3e4e28);
  }
  return DAT_14caa8750;
}



// FUNCTION 146329128 FUN_146329128 body=35 status=ok
// SIG undefined FUN_146329128(void)

void FUN_146329128(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3e5200;
  return;
}



// FUNCTION 14632914b FUN_14632914b body=47 status=ok
// SIG undefined FUN_14632914b(void)

longlong FUN_14632914b(void)

{
  if (DAT_14caa8768 == 0) {
    FUN_14073dd9a(&DAT_14caa8768,&PTR_LAB_14a3e51b8);
  }
  return DAT_14caa8768;
}



// FUNCTION 14632917a FUN_14632917a body=55 status=ok
// SIG undefined FUN_14632917a(void)

void FUN_14632917a(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8780 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8780 = FUN_140002ddd(FUN_1463291b1,uVar1,L"DataflowPhysicsObjectProxy");
  }
  return;
}



// FUNCTION 1463291b1 FUN_1463291b1 body=47 status=ok
// SIG undefined FUN_1463291b1(void)

longlong FUN_1463291b1(void)

{
  if (DAT_14caa8778 == 0) {
    FUN_14086a14e(&DAT_14caa8778,&PTR_FUN_14a3e5520);
  }
  return DAT_14caa8778;
}



// FUNCTION 1463291e0 FUN_1463291e0 body=48 status=ok
// SIG undefined FUN_1463291e0(void)

void FUN_1463291e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14a3e80a0;
  return;
}



// FUNCTION 146329210 FUN_146329210 body=35 status=ok
// SIG undefined FUN_146329210(void)

void FUN_146329210(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3e5600;
  return;
}



// FUNCTION 146329233 FUN_146329233 body=47 status=ok
// SIG undefined FUN_146329233(void)

longlong FUN_146329233(void)

{
  if (DAT_14caa8798 == 0) {
    FUN_14073dd9a(&DAT_14caa8798,&PTR_LAB_14a3e55b8);
  }
  return DAT_14caa8798;
}



// FUNCTION 146329262 FUN_146329262 body=55 status=ok
// SIG undefined FUN_146329262(void)

void FUN_146329262(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa87b0 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa87b0 = FUN_140002ddd(FUN_146329299,uVar1,L"DataflowPhysicsSolverProxy");
  }
  return;
}



// FUNCTION 146329299 FUN_146329299 body=47 status=ok
// SIG undefined FUN_146329299(void)

longlong FUN_146329299(void)

{
  if (DAT_14caa87a8 == 0) {
    FUN_14086a14e(&DAT_14caa87a8,&PTR_FUN_14a3e5950);
  }
  return DAT_14caa87a8;
}



// FUNCTION 1463292c8 FUN_1463292c8 body=48 status=ok
// SIG undefined FUN_1463292c8(void)

void FUN_1463292c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14a3e8200;
  return;
}



// FUNCTION 1463292f8 FUN_1463292f8 body=35 status=ok
// SIG undefined FUN_1463292f8(void)

void FUN_1463292f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3e5a30;
  return;
}



// FUNCTION 146329320 FUN_146329320 body=47 status=ok
// SIG undefined FUN_146329320(void)

longlong FUN_146329320(void)

{
  if (DAT_14caa87c8 == 0) {
    FUN_14073dd9a(&DAT_14caa87c8,&PTR_LAB_14a3e59e8);
  }
  return DAT_14caa87c8;
}



// FUNCTION 146329350 FUN_146329350 body=55 status=ok
// SIG undefined FUN_146329350(void)

void FUN_146329350(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa87f8 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa87f8 = FUN_140002ddd(FUN_146329387,uVar1,L"DataflowSimulationAsset");
  }
  return;
}



// FUNCTION 146329387 FUN_146329387 body=47 status=ok
// SIG undefined FUN_146329387(void)

longlong FUN_146329387(void)

{
  if (DAT_14caa87f0 == 0) {
    FUN_14086a14e(&DAT_14caa87f0,&PTR_FUN_14a3e5e90);
  }
  return DAT_14caa87f0;
}



// FUNCTION 1463293b6 FUN_1463293b6 body=48 status=ok
// SIG undefined FUN_1463293b6(void)

void FUN_1463293b6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14a3e8360;
  return;
}



// FUNCTION 1463293e6 FUN_1463293e6 body=35 status=ok
// SIG undefined FUN_1463293e6(void)

void FUN_1463293e6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3e5f70;
  return;
}



// FUNCTION 146329409 FUN_146329409 body=105 status=ok
// SIG undefined FUN_146329409(void)

void FUN_146329409(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410ba828(puVar1);
  *puVar1 = &PTR_FUN_14a3e6300;
  puVar1[6] = &PTR_FUN_14a3e65e0;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  *(undefined2 *)(puVar1 + 0x14) = 1;
  return;
}



// FUNCTION 146329477 FUN_146329477 body=47 status=ok
// SIG undefined FUN_146329477(void)

longlong FUN_146329477(void)

{
  if (DAT_14caa8828 == 0) {
    FUN_14073dd9a(&DAT_14caa8828,&PTR_LAB_14a3e62b8);
  }
  return DAT_14caa8828;
}



// FUNCTION 1463294a6 FUN_1463294a6 body=47 status=ok
// SIG undefined FUN_1463294a6(void)

longlong FUN_1463294a6(void)

{
  if (DAT_14caa8860 == 0) {
    FUN_14073dd9a(&DAT_14caa8860,&PTR_LAB_14a3e6920);
  }
  return DAT_14caa8860;
}



// FUNCTION 1463294d5 FUN_1463294d5 body=47 status=ok
// SIG undefined FUN_1463294d5(void)

longlong FUN_1463294d5(void)

{
  if (DAT_14caa8840 == 0) {
    FUN_14000fc22(&DAT_14caa8840,&PTR_FUN_14a3e6720);
  }
  return DAT_14caa8840;
}



// FUNCTION 146329504 FUN_146329504 body=47 status=ok
// SIG undefined FUN_146329504(void)

longlong FUN_146329504(void)

{
  if (DAT_14caa8850 == 0) {
    FUN_14000fc22(&DAT_14caa8850,&PTR_FUN_14a3e6840);
  }
  return DAT_14caa8850;
}



// FUNCTION 146329534 FUN_146329534 body=34 status=ok
// SIG undefined FUN_146329534(void)

void FUN_146329534(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a6585c();
  FUN_14069c8d6(uVar1,&PTR_s_PostDataflowSimulationTick_14a3e6880,2);
  return;
}



// FUNCTION 146329556 FUN_146329556 body=35 status=ok
// SIG undefined FUN_146329556(void)

void FUN_146329556(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a3e6960;
  return;
}



// FUNCTION 14632957a FUN_14632957a body=55 status=ok
// SIG undefined FUN_14632957a(void)

void FUN_14632957a(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8878 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8878 = FUN_140002ddd(FUN_146328f56,uVar1,L"DataflowSimulationProxy");
  }
  return;
}



// FUNCTION 1463295b2 FUN_1463295b2 body=48 status=ok
// SIG undefined FUN_1463295b2(void)

void FUN_1463295b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14a3e84c0;
  return;
}



// FUNCTION 1463295e2 FUN_1463295e2 body=54 status=ok
// SIG undefined FUN_1463295e2(void)

ulonglong FUN_1463295e2(longlong param_1)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,2);
  if ((*(uint *)(param_1 + -0x28) & 0x10) == 0) {
    lVar1 = FUN_144a126be(param_1 + -0x30);
    if (lVar1 != 0) {
      FUN_144a126be(param_1 + -0x30);
      uVar2 = CONCAT71(uVar3,1);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 146329618 FUN_146329618 body=39 status=ok
// SIG undefined FUN_146329618(void)

byte FUN_146329618(undefined8 param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = FUN_14110c842();
  return bVar1 | param_2 == 6 | (param_2 & 0xfffffffe) == 4;
}



// FUNCTION 146329646 FUN_146329646 body=26 status=ok
// SIG undefined FUN_146329646(void)

void FUN_146329646(undefined8 param_1)

{
  FUN_1413e1940();
  FUN_1406e3a52(param_1);
  return;
}



// FUNCTION 146329660 FUN_146329660 body=55 status=ok
// SIG undefined FUN_146329660(void)

void FUN_146329660(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa88f8 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa88f8 = FUN_140002ddd(FUN_146329697,uVar1,L"DataflowSimulationProperty");
  }
  return;
}



// FUNCTION 146329697 FUN_146329697 body=49 status=ok
// SIG undefined FUN_146329697(void)

longlong FUN_146329697(void)

{
  if (DAT_14caa88f0 == 0) {
    FUN_14086a14e(&DAT_14caa88f0,&PTR_FUN_14a3e7010);
  }
  return DAT_14caa88f0;
}



// FUNCTION 1463296c8 FUN_1463296c8 body=48 status=ok
// SIG undefined FUN_1463296c8(void)

void FUN_1463296c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14a3e8620;
  return;
}



// FUNCTION 1463296f8 FUN_1463296f8 body=55 status=ok
// SIG undefined FUN_1463296f8(void)

void FUN_1463296f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8910 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8910 = FUN_140002ddd(FUN_14632972f,uVar1,L"DataflowSimulationNode");
  }
  return;
}



// FUNCTION 14632972f FUN_14632972f body=49 status=ok
// SIG undefined FUN_14632972f(void)

longlong FUN_14632972f(void)

{
  if (DAT_14caa8908 == 0) {
    FUN_14086a14e(&DAT_14caa8908,&PTR_FUN_14a3e7090);
  }
  return DAT_14caa8908;
}



// FUNCTION 146329760 FUN_146329760 body=48 status=ok
// SIG undefined FUN_146329760(void)

void FUN_146329760(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000198;
  *puVar1 = &PTR_FUN_14a3e8790;
  return;
}



// FUNCTION 146329790 FUN_146329790 body=55 status=ok
// SIG undefined FUN_146329790(void)

void FUN_146329790(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8928 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8928 = FUN_140002ddd(FUN_1463297c7,uVar1,L"DataflowInvalidNode");
  }
  return;
}



// FUNCTION 1463297c7 FUN_1463297c7 body=47 status=ok
// SIG undefined FUN_1463297c7(void)

longlong FUN_1463297c7(void)

{
  if (DAT_14caa8920 == 0) {
    FUN_14086a14e(&DAT_14caa8920,&PTR_FUN_14a3e7108);
  }
  return DAT_14caa8920;
}



// FUNCTION 1463297f6 FUN_1463297f6 body=48 status=ok
// SIG undefined FUN_1463297f6(void)

void FUN_1463297f6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000198;
  *puVar1 = &PTR_FUN_14a3e8a10;
  return;
}



// FUNCTION 146329826 FUN_146329826 body=55 status=ok
// SIG undefined FUN_146329826(void)

void FUN_146329826(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8940 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8940 = FUN_140002ddd(FUN_14632985d,uVar1,L"DataflowExecutionNode");
  }
  return;
}



// FUNCTION 14632985d FUN_14632985d body=47 status=ok
// SIG undefined FUN_14632985d(void)

longlong FUN_14632985d(void)

{
  if (DAT_14caa8938 == 0) {
    FUN_14086a14e(&DAT_14caa8938,&PTR_FUN_14a3e7188);
  }
  return DAT_14caa8938;
}



// FUNCTION 14632988c FUN_14632988c body=48 status=ok
// SIG undefined FUN_14632988c(void)

void FUN_14632988c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000198;
  *puVar1 = &PTR_FUN_14a3e8c90;
  return;
}



// FUNCTION 1463298bc FUN_1463298bc body=55 status=ok
// SIG undefined FUN_1463298bc(void)

void FUN_1463298bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8958 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8958 = FUN_140002ddd(FUN_1463298f3,uVar1,L"DataflowSimulationTime");
  }
  return;
}



// FUNCTION 1463298f3 FUN_1463298f3 body=49 status=ok
// SIG undefined FUN_1463298f3(void)

longlong FUN_1463298f3(void)

{
  if (DAT_14caa8950 == 0) {
    FUN_14086a14e(&DAT_14caa8950,&PTR_FUN_14a3e72f0);
  }
  return DAT_14caa8950;
}



// FUNCTION 146329924 FUN_146329924 body=48 status=ok
// SIG undefined FUN_146329924(void)

void FUN_146329924(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a3e8f10;
  return;
}



// FUNCTION 146329954 FUN_146329954 body=55 status=ok
// SIG undefined FUN_146329954(void)

void FUN_146329954(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8970 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8970 = FUN_140002ddd(FUN_14632998b,uVar1,L"GetSimulationTimeDataflowNode");
  }
  return;
}



// FUNCTION 14632998b FUN_14632998b body=47 status=ok
// SIG undefined FUN_14632998b(void)

longlong FUN_14632998b(void)

{
  if (DAT_14caa8968 == 0) {
    FUN_14086a14e(&DAT_14caa8968,&PTR_FUN_14a3e73d0);
  }
  return DAT_14caa8968;
}



// FUNCTION 1463299ba FUN_1463299ba body=48 status=ok
// SIG undefined FUN_1463299ba(void)

void FUN_1463299ba(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001a8;
  *puVar1 = &PTR_FUN_14a3e9080;
  return;
}



// FUNCTION 1463299ea FUN_1463299ea body=55 status=ok
// SIG undefined FUN_1463299ea(void)

void FUN_1463299ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8988 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8988 = FUN_140002ddd(FUN_146329a21,uVar1,L"GetPhysicsSolversDataflowNode");
  }
  return;
}



// FUNCTION 146329a21 FUN_146329a21 body=47 status=ok
// SIG undefined FUN_146329a21(void)

longlong FUN_146329a21(void)

{
  if (DAT_14caa8980 == 0) {
    FUN_14086a14e(&DAT_14caa8980,&PTR_FUN_14a3e7580);
  }
  return DAT_14caa8980;
}



// FUNCTION 146329a50 FUN_146329a50 body=48 status=ok
// SIG undefined FUN_146329a50(void)

void FUN_146329a50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001b8;
  *puVar1 = &PTR_FUN_14a3e9330;
  return;
}



// FUNCTION 146329a80 FUN_146329a80 body=55 status=ok
// SIG undefined FUN_146329a80(void)

void FUN_146329a80(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa89a0 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa89a0 = FUN_140002ddd(FUN_146329ab7,uVar1,L"AdvancePhysicsSolversDataflowNode");
  }
  return;
}


