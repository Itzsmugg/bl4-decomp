// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1463c82e4 FUN_1463c82e4 body=373 status=ok
// SIG undefined FUN_1463c82e4(void)

void FUN_1463c82e4(void)

{
  FUN_1449db362(&DAT_14cad8c08);
  FUN_144760e21(DAT_14cad8bf0,DAT_14cad8bf8);
  if (DAT_14cad8bf0 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(&DAT_14cad8be0);
  FUN_1449db362(&DAT_14cad8bd0);
  FUN_1449db362(&DAT_14cad8bc0);
  FUN_1449db362(&DAT_14cad8bb0);
  FUN_144760e21(DAT_14cad8b98,DAT_14cad8ba0);
  if (DAT_14cad8b98 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14cad8b80,DAT_14cad8b88);
  if (DAT_14cad8b80 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14cad8b68,DAT_14cad8b70);
  if (DAT_14cad8b68 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14cad8b50,DAT_14cad8b58);
  if (DAT_14cad8b50 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14cad8b38,DAT_14cad8b40);
  if (DAT_14cad8b38 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14cad8b20,DAT_14cad8b28);
  if (DAT_14cad8b20 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(DAT_14cad8b08,DAT_14cad8b10);
  if (DAT_14cad8b08 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1463c845a FUN_1463c845a body=248 status=ok
// SIG undefined FUN_1463c845a(void)

undefined8 FUN_1463c845a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar3 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14a8e9b60;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14a8e9af0;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145c22c52(&DAT_14cb0ca98,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463c8553 FUN_1463c8553 body=88 status=ok
// SIG undefined FUN_1463c8553(void)

void FUN_1463c8553(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1456d6e4a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8d5d90;
  puVar1[5] = &PTR_FUN_14a8d6300;
  puVar1[0x274] = 0;
  puVar1[0x26b] = 0;
  puVar1[0x26c] = 0;
  puVar1[0x26d] = 0;
  puVar1[0x26e] = 0;
  puVar1[0x26f] = 0;
  puVar1[0x270] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1384) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x138c) = 0;
  return;
}



// FUNCTION 1463c85b0 FUN_1463c85b0 body=47 status=ok
// SIG undefined FUN_1463c85b0(void)

longlong FUN_1463c85b0(void)

{
  if (DAT_14cada290 == 0) {
    FUN_14073dd9a(&DAT_14cada290,&PTR_LAB_14a8d67a8);
  }
  return DAT_14cada290;
}



// FUNCTION 1463c85df FUN_1463c85df body=187 status=ok
// SIG undefined FUN_1463c85df(void)

undefined8 FUN_1463c85df(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463c869b FUN_1463c869b body=187 status=ok
// SIG undefined FUN_1463c869b(void)

undefined8 FUN_1463c869b(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463c8757 FUN_1463c8757 body=47 status=ok
// SIG undefined FUN_1463c8757(void)

longlong FUN_1463c8757(void)

{
  if (DAT_14cada2b8 == 0) {
    FUN_14000fc22(&DAT_14cada2b8,&PTR_FUN_14a8d6a70);
  }
  return DAT_14cada2b8;
}



// FUNCTION 1463c8786 FUN_1463c8786 body=47 status=ok
// SIG undefined FUN_1463c8786(void)

longlong FUN_1463c8786(void)

{
  if (DAT_14cada2d8 == 0) {
    FUN_14073dd9a(&DAT_14cada2d8,&PTR_LAB_14a8d6f00);
  }
  return DAT_14cada2d8;
}



// FUNCTION 1463c87b5 FUN_1463c87b5 body=47 status=ok
// SIG undefined FUN_1463c87b5(void)

longlong FUN_1463c87b5(void)

{
  if (DAT_14cada2c0 == 0) {
    FUN_14000fc22(&DAT_14cada2c0,&PTR_FUN_14a8d6bd8);
  }
  return DAT_14cada2c0;
}



// FUNCTION 1463c87e4 FUN_1463c87e4 body=47 status=ok
// SIG undefined FUN_1463c87e4(void)

longlong FUN_1463c87e4(void)

{
  if (DAT_14cada2c8 == 0) {
    FUN_14000fc22(&DAT_14cada2c8,&PTR_FUN_14a8d6d90);
  }
  return DAT_14cada2c8;
}



// FUNCTION 1463c8814 FUN_1463c8814 body=34 status=ok
// SIG undefined FUN_1463c8814(void)

void FUN_1463c8814(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145921a52();
  FUN_14069c8d6(uVar1,&PTR_s_AsyncLoadGameFromSlot_14a8d6dd0,2);
  return;
}



// FUNCTION 1463c883b FUN_1463c883b body=54 status=ok
// SIG undefined FUN_1463c883b(void)

void FUN_1463c883b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141069aea(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8d6f40;
  puVar1[0xc] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



// FUNCTION 1463c8872 FUN_1463c8872 body=55 status=ok
// SIG undefined FUN_1463c8872(void)

void FUN_1463c8872(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada2f0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada2f0 =
         FUN_140002ddd(FUN_1463c88a9,uVar1,
                       L"CharacterNetworkSerializationPackedBitsNetSerializerConfig");
  }
  return;
}



// FUNCTION 1463c88a9 FUN_1463c88a9 body=47 status=ok
// SIG undefined FUN_1463c88a9(void)

longlong FUN_1463c88a9(void)

{
  if (DAT_14cada2e8 == 0) {
    FUN_14086a14e(&DAT_14cada2e8,&PTR_FUN_14a8d7358);
  }
  return DAT_14cada2e8;
}



// FUNCTION 1463c88d8 FUN_1463c88d8 body=48 status=ok
// SIG undefined FUN_1463c88d8(void)

void FUN_1463c88d8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a8e6c00;
  return;
}



// FUNCTION 1463c8908 FUN_1463c8908 body=55 status=ok
// SIG undefined FUN_1463c8908(void)

void FUN_1463c8908(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada458 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada458 = FUN_140002ddd(FUN_1463c893f,uVar1,L"ForceFeedbackChannelDetails");
  }
  return;
}



// FUNCTION 1463c893f FUN_1463c893f body=49 status=ok
// SIG undefined FUN_1463c893f(void)

longlong FUN_1463c893f(void)

{
  if (DAT_14cada450 == 0) {
    FUN_14086a14e(&DAT_14cada450,&PTR_FUN_14a8d75e8);
  }
  return DAT_14cada450;
}



// FUNCTION 1463c8970 FUN_1463c8970 body=48 status=ok
// SIG undefined FUN_1463c8970(void)

void FUN_1463c8970(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14a8e6d90;
  return;
}



// FUNCTION 1463c89a0 FUN_1463c89a0 body=55 status=ok
// SIG undefined FUN_1463c89a0(void)

void FUN_1463c89a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada470 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada470 = FUN_140002ddd(FUN_1463c89d7,uVar1,L"ActiveForceFeedbackEffect");
  }
  return;
}



// FUNCTION 1463c89d7 FUN_1463c89d7 body=47 status=ok
// SIG undefined FUN_1463c89d7(void)

longlong FUN_1463c89d7(void)

{
  if (DAT_14cada468 == 0) {
    FUN_14086a14e(&DAT_14cada468,&PTR_FUN_14a8d7768);
  }
  return DAT_14cada468;
}



// FUNCTION 1463c8a06 FUN_1463c8a06 body=48 status=ok
// SIG undefined FUN_1463c8a06(void)

void FUN_1463c8a06(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14a8e6ef0;
  return;
}



// FUNCTION 1463c8a36 FUN_1463c8a36 body=55 status=ok
// SIG undefined FUN_1463c8a36(void)

void FUN_1463c8a36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada488 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada488 = FUN_140002ddd(FUN_1463c8a6d,uVar1,L"ForceFeedbackEffectOverridenChannelDetails")
    ;
  }
  return;
}



// FUNCTION 1463c8a6d FUN_1463c8a6d body=47 status=ok
// SIG undefined FUN_1463c8a6d(void)

longlong FUN_1463c8a6d(void)

{
  if (DAT_14cada480 == 0) {
    FUN_14086a14e(&DAT_14cada480,&PTR_FUN_14a8d78c0);
  }
  return DAT_14cada480;
}



// FUNCTION 1463c8a9c FUN_1463c8a9c body=48 status=ok
// SIG undefined FUN_1463c8a9c(void)

void FUN_1463c8a9c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a8e7050;
  return;
}



// FUNCTION 1463c8ad1 FUN_1463c8ad1 body=47 status=ok
// SIG undefined FUN_1463c8ad1(void)

longlong FUN_1463c8ad1(void)

{
  if (DAT_14cada4a0 == 0) {
    FUN_14073dd9a(&DAT_14cada4a0,&PTR_LAB_14a8d7ba8);
  }
  return DAT_14cada4a0;
}



// FUNCTION 1463c8b00 FUN_1463c8b00 body=49 status=ok
// SIG undefined FUN_1463c8b00(void)

longlong FUN_1463c8b00(void)

{
  if (DAT_14cada4f0 == 0) {
    FUN_14073dd9a(&DAT_14cada4f0,&PTR_LAB_14a8d8550);
  }
  return DAT_14cada4f0;
}



// FUNCTION 1463c8b31 FUN_1463c8b31 body=47 status=ok
// SIG undefined FUN_1463c8b31(void)

longlong FUN_1463c8b31(void)

{
  if (DAT_14cada4c0 == 0) {
    FUN_14000fc22(&DAT_14cada4c0,&PTR_FUN_14a8d80f8);
  }
  return DAT_14cada4c0;
}



// FUNCTION 1463c8b60 FUN_1463c8b60 body=47 status=ok
// SIG undefined FUN_1463c8b60(void)

longlong FUN_1463c8b60(void)

{
  if (DAT_14cada4d0 == 0) {
    FUN_14000fc22(&DAT_14cada4d0,&PTR_FUN_14a8d82a8);
  }
  return DAT_14cada4d0;
}



// FUNCTION 1463c8b8f FUN_1463c8b8f body=47 status=ok
// SIG undefined FUN_1463c8b8f(void)

longlong FUN_1463c8b8f(void)

{
  if (DAT_14cada4e0 == 0) {
    FUN_14000fc22(&DAT_14cada4e0,&PTR_FUN_14a8d8410);
  }
  return DAT_14cada4e0;
}



// FUNCTION 1463c8bbe FUN_1463c8bbe body=34 status=ok
// SIG undefined FUN_1463c8bbe(void)

void FUN_1463c8bbe(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145862c7c();
  FUN_14069c8d6(uVar1,&PTR_s_ApplyDeviceProperty_14a8d8450,3);
  return;
}



// FUNCTION 1463c8be5 FUN_1463c8be5 body=42 status=ok
// SIG undefined FUN_1463c8be5(void)

void FUN_1463c8be5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8d8590;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



// FUNCTION 1463c8c10 FUN_1463c8c10 body=55 status=ok
// SIG undefined FUN_1463c8c10(void)

void FUN_1463c8c10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada508 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada508 = FUN_140002ddd(FUN_1463c8c47,uVar1,L"DeviceColorData");
  }
  return;
}



// FUNCTION 1463c8c47 FUN_1463c8c47 body=49 status=ok
// SIG undefined FUN_1463c8c47(void)

longlong FUN_1463c8c47(void)

{
  if (DAT_14cada500 == 0) {
    FUN_14086a14e(&DAT_14cada500,&PTR_FUN_14a8d8978);
  }
  return DAT_14cada500;
}



// FUNCTION 1463c8c78 FUN_1463c8c78 body=48 status=ok
// SIG undefined FUN_1463c8c78(void)

void FUN_1463c8c78(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14a8e71b0;
  return;
}



// FUNCTION 1463c8ca8 FUN_1463c8ca8 body=47 status=ok
// SIG undefined FUN_1463c8ca8(void)

longlong FUN_1463c8ca8(void)

{
  if (DAT_14cada520 == 0) {
    FUN_14073dd9a(&DAT_14cada520,&PTR_LAB_14a8d8b48);
  }
  return DAT_14cada520;
}



// FUNCTION 1463c8cd8 FUN_1463c8cd8 body=55 status=ok
// SIG undefined FUN_1463c8cd8(void)

void FUN_1463c8cd8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada538 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada538 = FUN_140002ddd(FUN_1463c8d0f,uVar1,L"DeviceColorCurveData");
  }
  return;
}



// FUNCTION 1463c8d0f FUN_1463c8d0f body=49 status=ok
// SIG undefined FUN_1463c8d0f(void)

longlong FUN_1463c8d0f(void)

{
  if (DAT_14cada530 == 0) {
    FUN_14086a14e(&DAT_14cada530,&PTR_FUN_14a8d8f90);
  }
  return DAT_14cada530;
}



// FUNCTION 1463c8d40 FUN_1463c8d40 body=48 status=ok
// SIG undefined FUN_1463c8d40(void)

void FUN_1463c8d40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a8e7330;
  return;
}



// FUNCTION 1463c8d70 FUN_1463c8d70 body=47 status=ok
// SIG undefined FUN_1463c8d70(void)

longlong FUN_1463c8d70(void)

{
  if (DAT_14cada550 == 0) {
    FUN_14073dd9a(&DAT_14cada550,&PTR_LAB_14a8d9138);
  }
  return DAT_14cada550;
}



// FUNCTION 1463c8da0 FUN_1463c8da0 body=55 status=ok
// SIG undefined FUN_1463c8da0(void)

void FUN_1463c8da0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada568 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada568 = FUN_140002ddd(FUN_1463c8dd7,uVar1,L"DeviceTriggerBaseData");
  }
  return;
}



// FUNCTION 1463c8dd7 FUN_1463c8dd7 body=47 status=ok
// SIG undefined FUN_1463c8dd7(void)

longlong FUN_1463c8dd7(void)

{
  if (DAT_14cada560 == 0) {
    FUN_14086a14e(&DAT_14cada560,&PTR_FUN_14a8d95a0);
  }
  return DAT_14cada560;
}



// FUNCTION 1463c8e06 FUN_1463c8e06 body=48 status=ok
// SIG undefined FUN_1463c8e06(void)

void FUN_1463c8e06(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000002;
  *puVar1 = &PTR_FUN_14a8e7490;
  return;
}



// FUNCTION 1463c8e36 FUN_1463c8e36 body=124 status=ok
// SIG undefined FUN_1463c8e36(void)

void FUN_1463c8e36(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 5) = 0;
  *puVar1 = &PTR_FUN_14a8d96d0;
  *(undefined2 *)(puVar1 + 6) = 0x103;
  FUN_1446ddc76(&local_20,"InputDeviceTriggerResetProperty",1);
  *(undefined8 *)((longlong)puVar1 + 0x34) = local_20;
  *(undefined1 *)((longlong)puVar1 + 0x3c) = 3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463c8eb3 FUN_1463c8eb3 body=49 status=ok
// SIG undefined FUN_1463c8eb3(void)

longlong FUN_1463c8eb3(void)

{
  if (DAT_14cada580 == 0) {
    FUN_14073dd9a(&DAT_14cada580,&PTR_LAB_14a8d9688);
  }
  return DAT_14cada580;
}



// FUNCTION 1463c8ee4 FUN_1463c8ee4 body=55 status=ok
// SIG undefined FUN_1463c8ee4(void)

void FUN_1463c8ee4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada598 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada598 = FUN_140002ddd(FUN_1463c8f1b,uVar1,L"DeviceTriggerFeedbackData");
  }
  return;
}



// FUNCTION 1463c8f1b FUN_1463c8f1b body=49 status=ok
// SIG undefined FUN_1463c8f1b(void)

longlong FUN_1463c8f1b(void)

{
  if (DAT_14cada590 == 0) {
    FUN_14086a14e(&DAT_14cada590,&PTR_FUN_14a8d9ab0);
  }
  return DAT_14cada590;
}



// FUNCTION 1463c8f4c FUN_1463c8f4c body=48 status=ok
// SIG undefined FUN_1463c8f4c(void)

void FUN_1463c8f4c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a8e7610;
  return;
}



// FUNCTION 1463c8f7c FUN_1463c8f7c body=47 status=ok
// SIG undefined FUN_1463c8f7c(void)

longlong FUN_1463c8f7c(void)

{
  if (DAT_14cada5b0 == 0) {
    FUN_14073dd9a(&DAT_14cada5b0,&PTR_LAB_14a8d9c68);
  }
  return DAT_14cada5b0;
}



// FUNCTION 1463c8fac FUN_1463c8fac body=55 status=ok
// SIG undefined FUN_1463c8fac(void)

void FUN_1463c8fac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada5c8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada5c8 = FUN_140002ddd(FUN_1463c8fe3,uVar1,L"DeviceTriggerTriggerResistanceData");
  }
  return;
}



// FUNCTION 1463c8fe3 FUN_1463c8fe3 body=49 status=ok
// SIG undefined FUN_1463c8fe3(void)

longlong FUN_1463c8fe3(void)

{
  if (DAT_14cada5c0 == 0) {
    FUN_14086a14e(&DAT_14cada5c0,&PTR_FUN_14a8da108);
  }
  return DAT_14cada5c0;
}



// FUNCTION 1463c9014 FUN_1463c9014 body=48 status=ok
// SIG undefined FUN_1463c9014(void)

void FUN_1463c9014(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14a8e7790;
  return;
}



// FUNCTION 1463c9044 FUN_1463c9044 body=47 status=ok
// SIG undefined FUN_1463c9044(void)

longlong FUN_1463c9044(void)

{
  if (DAT_14cada5e0 == 0) {
    FUN_14073dd9a(&DAT_14cada5e0,&PTR_LAB_14a8da2b8);
  }
  return DAT_14cada5e0;
}



// FUNCTION 1463c9074 FUN_1463c9074 body=55 status=ok
// SIG undefined FUN_1463c9074(void)

void FUN_1463c9074(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada5f8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada5f8 = FUN_140002ddd(FUN_1463c90ab,uVar1,L"DeviceTriggerTriggerVibrationData");
  }
  return;
}



// FUNCTION 1463c90ab FUN_1463c90ab body=49 status=ok
// SIG undefined FUN_1463c90ab(void)

longlong FUN_1463c90ab(void)

{
  if (DAT_14cada5f0 == 0) {
    FUN_14086a14e(&DAT_14cada5f0,&PTR_FUN_14a8da760);
  }
  return DAT_14cada5f0;
}



// FUNCTION 1463c90dc FUN_1463c90dc body=48 status=ok
// SIG undefined FUN_1463c90dc(void)

void FUN_1463c90dc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a8e7910;
  return;
}



// FUNCTION 1463c910c FUN_1463c910c body=47 status=ok
// SIG undefined FUN_1463c910c(void)

longlong FUN_1463c910c(void)

{
  if (DAT_14cada610 == 0) {
    FUN_14073dd9a(&DAT_14cada610,&PTR_LAB_14a8da918);
  }
  return DAT_14cada610;
}



// FUNCTION 1463c913c FUN_1463c913c body=55 status=ok
// SIG undefined FUN_1463c913c(void)

void FUN_1463c913c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada628 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada628 = FUN_140002ddd(FUN_1463c9173,uVar1,L"AudioBasedVibrationData");
  }
  return;
}



// FUNCTION 1463c9173 FUN_1463c9173 body=49 status=ok
// SIG undefined FUN_1463c9173(void)

longlong FUN_1463c9173(void)

{
  if (DAT_14cada620 == 0) {
    FUN_14086a14e(&DAT_14cada620,&PTR_FUN_14a8dacb8);
  }
  return DAT_14cada620;
}



// FUNCTION 1463c91a4 FUN_1463c91a4 body=48 status=ok
// SIG undefined FUN_1463c91a4(void)

void FUN_1463c91a4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14a8e7a90;
  return;
}



// FUNCTION 1463c91d4 FUN_1463c91d4 body=85 status=ok
// SIG undefined FUN_1463c91d4(void)

void FUN_1463c91d4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *(undefined4 *)(puVar1 + 5) = 0;
  *puVar1 = &PTR_FUN_14a8daeb0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  return;
}



// FUNCTION 1463c9229 FUN_1463c9229 body=47 status=ok
// SIG undefined FUN_1463c9229(void)

longlong FUN_1463c9229(void)

{
  if (DAT_14cada640 == 0) {
    FUN_14073dd9a(&DAT_14cada640,&PTR_LAB_14a8dae68);
  }
  return DAT_14cada640;
}



// FUNCTION 1463c9258 FUN_1463c9258 body=55 status=ok
// SIG undefined FUN_1463c9258(void)

void FUN_1463c9258(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada658 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada658 = FUN_140002ddd(FUN_1463c928f,uVar1,L"ActivateDevicePropertyParams");
  }
  return;
}



// FUNCTION 1463c928f FUN_1463c928f body=47 status=ok
// SIG undefined FUN_1463c928f(void)

longlong FUN_1463c928f(void)

{
  if (DAT_14cada650 == 0) {
    FUN_14086a14e(&DAT_14cada650,&PTR_FUN_14a8db5a8);
  }
  return DAT_14cada650;
}



// FUNCTION 1463c92be FUN_1463c92be body=48 status=ok
// SIG undefined FUN_1463c92be(void)

void FUN_1463c92be(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a8e7bf0;
  return;
}



// FUNCTION 1463c92ee FUN_1463c92ee body=55 status=ok
// SIG undefined FUN_1463c92ee(void)

void FUN_1463c92ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada670 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada670 = FUN_140002ddd(FUN_1463c9325,uVar1,L"ActiveDeviceProperty");
  }
  return;
}



// FUNCTION 1463c9325 FUN_1463c9325 body=47 status=ok
// SIG undefined FUN_1463c9325(void)

longlong FUN_1463c9325(void)

{
  if (DAT_14cada668 == 0) {
    FUN_14086a14e(&DAT_14cada668,&PTR_FUN_14a8db670);
  }
  return DAT_14cada668;
}



// FUNCTION 1463c9354 FUN_1463c9354 body=48 status=ok
// SIG undefined FUN_1463c9354(void)

void FUN_1463c9354(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a8e7d50;
  return;
}



// FUNCTION 1463c9384 FUN_1463c9384 body=47 status=ok
// SIG undefined FUN_1463c9384(void)

longlong FUN_1463c9384(void)

{
  if (DAT_14cada680 == 0) {
    FUN_14000fc22(&DAT_14cada680,&PTR_FUN_14a8db770);
  }
  return DAT_14cada680;
}



// FUNCTION 1463c93b3 FUN_1463c93b3 body=49 status=ok
// SIG undefined FUN_1463c93b3(void)

longlong FUN_1463c93b3(void)

{
  if (DAT_14cada6d8 == 0) {
    FUN_14073dd9a(&DAT_14cada6d8,&PTR_LAB_14a8dc340);
  }
  return DAT_14cada6d8;
}



// FUNCTION 1463c93e4 FUN_1463c93e4 body=47 status=ok
// SIG undefined FUN_1463c93e4(void)

longlong FUN_1463c93e4(void)

{
  if (DAT_14cada688 == 0) {
    FUN_14000fc22(&DAT_14cada688,&PTR_FUN_14a8db8b8);
  }
  return DAT_14cada688;
}



// FUNCTION 1463c9413 FUN_1463c9413 body=47 status=ok
// SIG undefined FUN_1463c9413(void)

longlong FUN_1463c9413(void)

{
  if (DAT_14cada690 == 0) {
    FUN_14000fc22(&DAT_14cada690,&PTR_FUN_14a8db9a8);
  }
  return DAT_14cada690;
}



// FUNCTION 1463c9442 FUN_1463c9442 body=47 status=ok
// SIG undefined FUN_1463c9442(void)

longlong FUN_1463c9442(void)

{
  if (DAT_14cada698 == 0) {
    FUN_14000fc22(&DAT_14cada698,&PTR_FUN_14a8dbab8);
  }
  return DAT_14cada698;
}



// FUNCTION 1463c9471 FUN_1463c9471 body=47 status=ok
// SIG undefined FUN_1463c9471(void)

longlong FUN_1463c9471(void)

{
  if (DAT_14cada6a0 == 0) {
    FUN_14000fc22(&DAT_14cada6a0,&PTR_FUN_14a8dbbc8);
  }
  return DAT_14cada6a0;
}



// FUNCTION 1463c94a0 FUN_1463c94a0 body=47 status=ok
// SIG undefined FUN_1463c94a0(void)

longlong FUN_1463c94a0(void)

{
  if (DAT_14cada6a8 == 0) {
    FUN_14000fc22(&DAT_14cada6a8,&PTR_FUN_14a8dbcc8);
  }
  return DAT_14cada6a8;
}



// FUNCTION 1463c94cf FUN_1463c94cf body=47 status=ok
// SIG undefined FUN_1463c94cf(void)

longlong FUN_1463c94cf(void)

{
  if (DAT_14cada6b0 == 0) {
    FUN_14000fc22(&DAT_14cada6b0,&PTR_FUN_14a8dbdb8);
  }
  return DAT_14cada6b0;
}



// FUNCTION 1463c94fe FUN_1463c94fe body=47 status=ok
// SIG undefined FUN_1463c94fe(void)

longlong FUN_1463c94fe(void)

{
  if (DAT_14cada6b8 == 0) {
    FUN_14000fc22(&DAT_14cada6b8,&PTR_FUN_14a8dbe18);
  }
  return DAT_14cada6b8;
}



// FUNCTION 1463c952d FUN_1463c952d body=47 status=ok
// SIG undefined FUN_1463c952d(void)

longlong FUN_1463c952d(void)

{
  if (DAT_14cada6c0 == 0) {
    FUN_14000fc22(&DAT_14cada6c0,&PTR_FUN_14a8dbed0);
  }
  return DAT_14cada6c0;
}



// FUNCTION 1463c955c FUN_1463c955c body=47 status=ok
// SIG undefined FUN_1463c955c(void)

longlong FUN_1463c955c(void)

{
  if (DAT_14cada6c8 == 0) {
    FUN_14000fc22(&DAT_14cada6c8,&PTR_FUN_14a8dbfd0);
  }
  return DAT_14cada6c8;
}



// FUNCTION 1463c958c FUN_1463c958c body=34 status=ok
// SIG undefined FUN_1463c958c(void)

void FUN_1463c958c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1403138ba();
  FUN_14069c8d6(uVar1,&PTR_s_ActivateDevicePropertyOfClass_14a8dc010,9);
  return;
}



// FUNCTION 1463c95b4 FUN_1463c95b4 body=25 status=ok
// SIG undefined FUN_1463c95b4(void)

char FUN_1463c95b4(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_144a792c0(param_1 + -0x30,0x30);
  return cVar1 * '\x02';
}



// FUNCTION 1463c95cd FUN_1463c95cd body=47 status=ok
// SIG undefined FUN_1463c95cd(void)

longlong FUN_1463c95cd(void)

{
  if (DAT_14cada6f0 == 0) {
    FUN_14073dd9a(&DAT_14cada6f0,&PTR_LAB_14a8dc768);
  }
  return DAT_14cada6f0;
}



// FUNCTION 1463c95fc FUN_1463c95fc body=47 status=ok
// SIG undefined FUN_1463c95fc(void)

longlong FUN_1463c95fc(void)

{
  if (DAT_14cada700 == 0) {
    FUN_1409ce572(&DAT_14cada700,&PTR_FUN_14a8dcac0);
  }
  return DAT_14cada700;
}



// FUNCTION 1463c962b FUN_1463c962b body=47 status=ok
// SIG undefined FUN_1463c962b(void)

longlong FUN_1463c962b(void)

{
  if (DAT_14cada718 == 0) {
    FUN_1409ce572(&DAT_14cada718,&PTR_FUN_14a8dcb40);
  }
  return DAT_14cada718;
}



// FUNCTION 1463c965a FUN_1463c965a body=47 status=ok
// SIG undefined FUN_1463c965a(void)

longlong FUN_1463c965a(void)

{
  if (DAT_14cada730 == 0) {
    FUN_1409ce572(&DAT_14cada730,&PTR_FUN_14a8dcbc0);
  }
  return DAT_14cada730;
}



// FUNCTION 1463c968a FUN_1463c968a body=55 status=ok
// SIG undefined FUN_1463c968a(void)

void FUN_1463c968a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada750 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada750 = FUN_140002ddd(FUN_1463c96c1,uVar1,L"RootMotionSourceStatus");
  }
  return;
}



// FUNCTION 1463c96c1 FUN_1463c96c1 body=47 status=ok
// SIG undefined FUN_1463c96c1(void)

longlong FUN_1463c96c1(void)

{
  if (DAT_14cada748 == 0) {
    FUN_14086a14e(&DAT_14cada748,&PTR_FUN_14a8dcc80);
  }
  return DAT_14cada748;
}



// FUNCTION 1463c96f0 FUN_1463c96f0 body=48 status=ok
// SIG undefined FUN_1463c96f0(void)

void FUN_1463c96f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a8e80e0;
  return;
}



// FUNCTION 1463c9720 FUN_1463c9720 body=55 status=ok
// SIG undefined FUN_1463c9720(void)

void FUN_1463c9720(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada768 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada768 = FUN_140002ddd(FUN_1463c9757,uVar1,L"RootMotionSourceSettings");
  }
  return;
}



// FUNCTION 1463c9757 FUN_1463c9757 body=49 status=ok
// SIG undefined FUN_1463c9757(void)

longlong FUN_1463c9757(void)

{
  if (DAT_14cada760 == 0) {
    FUN_14086a14e(&DAT_14cada760,&PTR_FUN_14a8dcd58);
  }
  return DAT_14cada760;
}



// FUNCTION 1463c9788 FUN_1463c9788 body=48 status=ok
// SIG undefined FUN_1463c9788(void)

void FUN_1463c9788(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a8e8240;
  return;
}



// FUNCTION 1463c97b8 FUN_1463c97b8 body=47 status=ok
// SIG undefined FUN_1463c97b8(void)

longlong FUN_1463c97b8(void)

{
  if (DAT_14cada778 == 0) {
    FUN_1409ce572(&DAT_14cada778,&PTR_FUN_14a8dcde0);
  }
  return DAT_14cada778;
}



// FUNCTION 1463c97e8 FUN_1463c97e8 body=55 status=ok
// SIG undefined FUN_1463c97e8(void)

void FUN_1463c97e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada798 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada798 = FUN_140002ddd(FUN_1463c981f,uVar1,L"RootMotionFinishVelocitySettings");
  }
  return;
}



// FUNCTION 1463c981f FUN_1463c981f body=47 status=ok
// SIG undefined FUN_1463c981f(void)

longlong FUN_1463c981f(void)

{
  if (DAT_14cada790 == 0) {
    FUN_14086a14e(&DAT_14cada790,&PTR_FUN_14a8dcfb8);
  }
  return DAT_14cada790;
}



// FUNCTION 1463c984e FUN_1463c984e body=48 status=ok
// SIG undefined FUN_1463c984e(void)

void FUN_1463c984e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a8e8480;
  return;
}



// FUNCTION 1463c987e FUN_1463c987e body=55 status=ok
// SIG undefined FUN_1463c987e(void)

void FUN_1463c987e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada7b0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada7b0 = FUN_140002ddd(FUN_1463c98b5,uVar1,L"RootMotionSource");
  }
  return;
}



// FUNCTION 1463c98b5 FUN_1463c98b5 body=49 status=ok
// SIG undefined FUN_1463c98b5(void)

longlong FUN_1463c98b5(void)

{
  if (DAT_14cada7a8 == 0) {
    FUN_14086a14e(&DAT_14cada7a8,&PTR_FUN_14a8dd428);
  }
  return DAT_14cada7a8;
}



// FUNCTION 1463c98e6 FUN_1463c98e6 body=48 status=ok
// SIG undefined FUN_1463c98e6(void)

void FUN_1463c98e6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000c0;
  *puVar1 = &PTR_FUN_14a8e85f0;
  return;
}



// FUNCTION 1463c9916 FUN_1463c9916 body=55 status=ok
// SIG undefined FUN_1463c9916(void)

void FUN_1463c9916(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada7c8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada7c8 = FUN_140002ddd(FUN_1463c994d,uVar1,L"RootMotionSource_ConstantForce");
  }
  return;
}



// FUNCTION 1463c994d FUN_1463c994d body=47 status=ok
// SIG undefined FUN_1463c994d(void)

longlong FUN_1463c994d(void)

{
  if (DAT_14cada7c0 == 0) {
    FUN_14086a14e(&DAT_14cada7c0,&PTR_FUN_14a8dd570);
  }
  return DAT_14cada7c0;
}



// FUNCTION 1463c997c FUN_1463c997c body=48 status=ok
// SIG undefined FUN_1463c997c(void)

void FUN_1463c997c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000e0;
  *puVar1 = &PTR_FUN_14a8e8750;
  return;
}



// FUNCTION 1463c99ac FUN_1463c99ac body=55 status=ok
// SIG undefined FUN_1463c99ac(void)

void FUN_1463c99ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada7e0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada7e0 = FUN_140002ddd(FUN_1463c99e3,uVar1,L"RootMotionSource_RadialForce");
  }
  return;
}



// FUNCTION 1463c99e3 FUN_1463c99e3 body=47 status=ok
// SIG undefined FUN_1463c99e3(void)

longlong FUN_1463c99e3(void)

{
  if (DAT_14cada7d8 == 0) {
    FUN_14086a14e(&DAT_14cada7d8,&PTR_FUN_14a8dd940);
  }
  return DAT_14cada7d8;
}



// FUNCTION 1463c9a12 FUN_1463c9a12 body=48 status=ok
// SIG undefined FUN_1463c9a12(void)

void FUN_1463c9a12(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000120;
  *puVar1 = &PTR_FUN_14a8e88b0;
  return;
}



// FUNCTION 1463c9a42 FUN_1463c9a42 body=55 status=ok
// SIG undefined FUN_1463c9a42(void)

void FUN_1463c9a42(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada7f8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada7f8 = FUN_140002ddd(FUN_1463c9a79,uVar1,L"RootMotionSource_MoveToForce");
  }
  return;
}



// FUNCTION 1463c9a79 FUN_1463c9a79 body=47 status=ok
// SIG undefined FUN_1463c9a79(void)

longlong FUN_1463c9a79(void)

{
  if (DAT_14cada7f0 == 0) {
    FUN_14086a14e(&DAT_14cada7f0,&PTR_FUN_14a8ddb30);
  }
  return DAT_14cada7f0;
}



// FUNCTION 1463c9aa8 FUN_1463c9aa8 body=48 status=ok
// SIG undefined FUN_1463c9aa8(void)

void FUN_1463c9aa8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000100;
  *puVar1 = &PTR_FUN_14a8e8a10;
  return;
}



// FUNCTION 1463c9ad8 FUN_1463c9ad8 body=55 status=ok
// SIG undefined FUN_1463c9ad8(void)

void FUN_1463c9ad8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada810 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada810 = FUN_140002ddd(FUN_1463c9b0f,uVar1,L"RootMotionSource_MoveToDynamicForce");
  }
  return;
}



// FUNCTION 1463c9b0f FUN_1463c9b0f body=47 status=ok
// SIG undefined FUN_1463c9b0f(void)

longlong FUN_1463c9b0f(void)

{
  if (DAT_14cada808 == 0) {
    FUN_14086a14e(&DAT_14cada808,&PTR_FUN_14a8dddb8);
  }
  return DAT_14cada808;
}



// FUNCTION 1463c9b3e FUN_1463c9b3e body=48 status=ok
// SIG undefined FUN_1463c9b3e(void)

void FUN_1463c9b3e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000120;
  *puVar1 = &PTR_FUN_14a8e8b70;
  return;
}



// FUNCTION 1463c9b6e FUN_1463c9b6e body=55 status=ok
// SIG undefined FUN_1463c9b6e(void)

void FUN_1463c9b6e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada828 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada828 = FUN_140002ddd(FUN_1463c9ba5,uVar1,L"RootMotionSource_JumpForce");
  }
  return;
}



// FUNCTION 1463c9ba5 FUN_1463c9ba5 body=47 status=ok
// SIG undefined FUN_1463c9ba5(void)

longlong FUN_1463c9ba5(void)

{
  if (DAT_14cada820 == 0) {
    FUN_14086a14e(&DAT_14cada820,&PTR_FUN_14a8de000);
  }
  return DAT_14cada820;
}



// FUNCTION 1463c9bd4 FUN_1463c9bd4 body=48 status=ok
// SIG undefined FUN_1463c9bd4(void)

void FUN_1463c9bd4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000110;
  *puVar1 = &PTR_FUN_14a8e8cd0;
  return;
}



// FUNCTION 1463c9c04 FUN_1463c9c04 body=55 status=ok
// SIG undefined FUN_1463c9c04(void)

void FUN_1463c9c04(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada840 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada840 = FUN_140002ddd(FUN_1463c9c3b,uVar1,L"RootMotionSourceGroup");
  }
  return;
}



// FUNCTION 1463c9c3b FUN_1463c9c3b body=49 status=ok
// SIG undefined FUN_1463c9c3b(void)

longlong FUN_1463c9c3b(void)

{
  if (DAT_14cada838 == 0) {
    FUN_14086a14e(&DAT_14cada838,&PTR_FUN_14a8de2d8);
  }
  return DAT_14cada838;
}



// FUNCTION 1463c9c6c FUN_1463c9c6c body=48 status=ok
// SIG undefined FUN_1463c9c6c(void)

void FUN_1463c9c6c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14a8e8e40;
  return;
}



// FUNCTION 1463c9c9c FUN_1463c9c9c body=55 status=ok
// SIG undefined FUN_1463c9c9c(void)

void FUN_1463c9c9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada858 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada858 = FUN_140002ddd(FUN_1463c9cd3,uVar1,L"RootMotionSourceGroupNetSerializerConfig");
  }
  return;
}



// FUNCTION 1463c9cd3 FUN_1463c9cd3 body=47 status=ok
// SIG undefined FUN_1463c9cd3(void)

longlong FUN_1463c9cd3(void)

{
  if (DAT_14cada850 == 0) {
    FUN_14086a14e(&DAT_14cada850,&PTR_FUN_14a8dea28);
  }
  return DAT_14cada850;
}



// FUNCTION 1463c9d02 FUN_1463c9d02 body=48 status=ok
// SIG undefined FUN_1463c9d02(void)

void FUN_1463c9d02(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14a8e8fb0;
  return;
}



// FUNCTION 1463c9d64 FUN_1463c9d64 body=35 status=ok
// SIG undefined FUN_1463c9d64(void)

void FUN_1463c9d64(void)

{
  FUN_1446ddc76(&DAT_14cada890,"RootMotionSourceGroup",1);
  return;
}



// FUNCTION 1463c9d87 FUN_1463c9d87 body=51 status=ok
// SIG undefined FUN_1463c9d87(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1463c9d87(void)

{
  FUN_14588533c(&DAT_14cada898,1);
  _DAT_14cada898 = &PTR_FUN_14a8dead0;
  atexit((_func_5014 *)&LAB_1434e90e1);
  return;
}



// FUNCTION 1463c9dba FUN_1463c9dba body=35 status=ok
// SIG undefined FUN_1463c9dba(void)

void FUN_1463c9dba(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8deb70;
  return;
}



// FUNCTION 1463c9de3 FUN_1463c9de3 body=49 status=ok
// SIG undefined FUN_1463c9de3(void)

longlong FUN_1463c9de3(void)

{
  if (DAT_14cada948 == 0) {
    FUN_14073dd9a(&DAT_14cada948,&PTR_LAB_14a8deb28);
  }
  return DAT_14cada948;
}



// FUNCTION 1463c9e14 FUN_1463c9e14 body=47 status=ok
// SIG undefined FUN_1463c9e14(void)

longlong FUN_1463c9e14(void)

{
  if (DAT_14cada958 == 0) {
    FUN_14000fc22(&DAT_14cada958,&PTR_FUN_14a8dee88);
  }
  return DAT_14cada958;
}



// FUNCTION 1463c9e43 FUN_1463c9e43 body=47 status=ok
// SIG undefined FUN_1463c9e43(void)

longlong FUN_1463c9e43(void)

{
  if (DAT_14cada960 == 0) {
    FUN_14000fc22(&DAT_14cada960,&PTR_FUN_14a8df060);
  }
  return DAT_14cada960;
}



// FUNCTION 1463c9e72 FUN_1463c9e72 body=47 status=ok
// SIG undefined FUN_1463c9e72(void)

longlong FUN_1463c9e72(void)

{
  if (DAT_14cada968 == 0) {
    FUN_14000fc22(&DAT_14cada968,&PTR_FUN_14a8df110);
  }
  return DAT_14cada968;
}



// FUNCTION 1463c9ea1 FUN_1463c9ea1 body=47 status=ok
// SIG undefined FUN_1463c9ea1(void)

longlong FUN_1463c9ea1(void)

{
  if (DAT_14cada970 == 0) {
    FUN_14000fc22(&DAT_14cada970,&PTR_FUN_14a8df1a8);
  }
  return DAT_14cada970;
}



// FUNCTION 1463c9ed0 FUN_1463c9ed0 body=47 status=ok
// SIG undefined FUN_1463c9ed0(void)

longlong FUN_1463c9ed0(void)

{
  if (DAT_14cada978 == 0) {
    FUN_14000fc22(&DAT_14cada978,&PTR_FUN_14a8df240);
  }
  return DAT_14cada978;
}



// FUNCTION 1463c9eff FUN_1463c9eff body=47 status=ok
// SIG undefined FUN_1463c9eff(void)

longlong FUN_1463c9eff(void)

{
  if (DAT_14cada980 == 0) {
    FUN_14000fc22(&DAT_14cada980,&PTR_FUN_14a8df2e8);
  }
  return DAT_14cada980;
}



// FUNCTION 1463c9f2e FUN_1463c9f2e body=47 status=ok
// SIG undefined FUN_1463c9f2e(void)

longlong FUN_1463c9f2e(void)

{
  if (DAT_14cada988 == 0) {
    FUN_14000fc22(&DAT_14cada988,&PTR_FUN_14a8df370);
  }
  return DAT_14cada988;
}



// FUNCTION 1463c9f5d FUN_1463c9f5d body=47 status=ok
// SIG undefined FUN_1463c9f5d(void)

longlong FUN_1463c9f5d(void)

{
  if (DAT_14cada990 == 0) {
    FUN_14000fc22(&DAT_14cada990,&PTR_FUN_14a8df408);
  }
  return DAT_14cada990;
}



// FUNCTION 1463c9f8c FUN_1463c9f8c body=47 status=ok
// SIG undefined FUN_1463c9f8c(void)

longlong FUN_1463c9f8c(void)

{
  if (DAT_14cada998 == 0) {
    FUN_14000fc22(&DAT_14cada998,&PTR_FUN_14a8df4a0);
  }
  return DAT_14cada998;
}



// FUNCTION 1463c9fbb FUN_1463c9fbb body=47 status=ok
// SIG undefined FUN_1463c9fbb(void)

longlong FUN_1463c9fbb(void)

{
  if (DAT_14cada9a0 == 0) {
    FUN_14000fc22(&DAT_14cada9a0,&PTR_FUN_14a8df530);
  }
  return DAT_14cada9a0;
}



// FUNCTION 1463c9fea FUN_1463c9fea body=47 status=ok
// SIG undefined FUN_1463c9fea(void)

longlong FUN_1463c9fea(void)

{
  if (DAT_14cada9a8 == 0) {
    FUN_14000fc22(&DAT_14cada9a8,&PTR_FUN_14a8df5d0);
  }
  return DAT_14cada9a8;
}



// FUNCTION 1463ca019 FUN_1463ca019 body=47 status=ok
// SIG undefined FUN_1463ca019(void)

longlong FUN_1463ca019(void)

{
  if (DAT_14cada9b0 == 0) {
    FUN_14000fc22(&DAT_14cada9b0,&PTR_FUN_14a8df758);
  }
  return DAT_14cada9b0;
}



// FUNCTION 1463ca048 FUN_1463ca048 body=47 status=ok
// SIG undefined FUN_1463ca048(void)

longlong FUN_1463ca048(void)

{
  if (DAT_14cada9c0 == 0) {
    FUN_14000fc22(&DAT_14cada9c0,&PTR_FUN_14a8df7c0);
  }
  return DAT_14cada9c0;
}



// FUNCTION 1463ca077 FUN_1463ca077 body=47 status=ok
// SIG undefined FUN_1463ca077(void)

longlong FUN_1463ca077(void)

{
  if (DAT_14cada9d0 == 0) {
    FUN_14000fc22(&DAT_14cada9d0,&PTR_FUN_14a8df870);
  }
  return DAT_14cada9d0;
}



// FUNCTION 1463ca0a6 FUN_1463ca0a6 body=47 status=ok
// SIG undefined FUN_1463ca0a6(void)

longlong FUN_1463ca0a6(void)

{
  if (DAT_14cada9e0 == 0) {
    FUN_14000fc22(&DAT_14cada9e0,&PTR_FUN_14a8df8d0);
  }
  return DAT_14cada9e0;
}



// FUNCTION 1463ca0d5 FUN_1463ca0d5 body=47 status=ok
// SIG undefined FUN_1463ca0d5(void)

longlong FUN_1463ca0d5(void)

{
  if (DAT_14cada9f0 == 0) {
    FUN_14000fc22(&DAT_14cada9f0,&PTR_FUN_14a8df948);
  }
  return DAT_14cada9f0;
}



// FUNCTION 1463ca104 FUN_1463ca104 body=47 status=ok
// SIG undefined FUN_1463ca104(void)

longlong FUN_1463ca104(void)

{
  if (DAT_14cada9f8 == 0) {
    FUN_14000fc22(&DAT_14cada9f8,&PTR_FUN_14a8df998);
  }
  return DAT_14cada9f8;
}



// FUNCTION 1463ca133 FUN_1463ca133 body=47 status=ok
// SIG undefined FUN_1463ca133(void)

longlong FUN_1463ca133(void)

{
  if (DAT_14cadaa00 == 0) {
    FUN_14000fc22(&DAT_14cadaa00,&PTR_FUN_14a8dfa40);
  }
  return DAT_14cadaa00;
}



// FUNCTION 1463ca162 FUN_1463ca162 body=47 status=ok
// SIG undefined FUN_1463ca162(void)

longlong FUN_1463ca162(void)

{
  if (DAT_14cadaa08 == 0) {
    FUN_14000fc22(&DAT_14cadaa08,&PTR_FUN_14a8dfae0);
  }
  return DAT_14cadaa08;
}



// FUNCTION 1463ca191 FUN_1463ca191 body=47 status=ok
// SIG undefined FUN_1463ca191(void)

longlong FUN_1463ca191(void)

{
  if (DAT_14cadaa10 == 0) {
    FUN_14000fc22(&DAT_14cadaa10,&PTR_FUN_14a8dfb78);
  }
  return DAT_14cadaa10;
}



// FUNCTION 1463ca1c0 FUN_1463ca1c0 body=47 status=ok
// SIG undefined FUN_1463ca1c0(void)

longlong FUN_1463ca1c0(void)

{
  if (DAT_14cadaa18 == 0) {
    FUN_14000fc22(&DAT_14cadaa18,&PTR_FUN_14a8dfc18);
  }
  return DAT_14cadaa18;
}



// FUNCTION 1463ca1f0 FUN_1463ca1f0 body=34 status=ok
// SIG undefined FUN_1463ca1f0(void)

void FUN_1463ca1f0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458d4c52();
  FUN_14069c8d6(uVar1,&PTR_s_AsyncLoadOrCreateSaveGameForLoca_14a8dfc60,0x10);
  return;
}



// FUNCTION 1463ca217 FUN_1463ca217 body=58 status=ok
// SIG undefined FUN_1463ca217(void)

void FUN_1463ca217(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8e0190;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0xffffffff;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  return;
}



// FUNCTION 1463ca251 FUN_1463ca251 body=49 status=ok
// SIG undefined FUN_1463ca251(void)

longlong FUN_1463ca251(void)

{
  if (DAT_14cadaa58 == 0) {
    FUN_14073dd9a(&DAT_14cadaa58,&PTR_LAB_14a8e0e70);
  }
  return DAT_14cadaa58;
}



// FUNCTION 1463ca282 FUN_1463ca282 body=47 status=ok
// SIG undefined FUN_1463ca282(void)

longlong FUN_1463ca282(void)

{
  if (DAT_14cadaa38 == 0) {
    FUN_14000fc22(&DAT_14cadaa38,&PTR_FUN_14a8e0590);
  }
  return DAT_14cadaa38;
}



// FUNCTION 1463ca2b1 FUN_1463ca2b1 body=47 status=ok
// SIG undefined FUN_1463ca2b1(void)

longlong FUN_1463ca2b1(void)

{
  if (DAT_14cadaa40 == 0) {
    FUN_14000fc22(&DAT_14cadaa40,&PTR_FUN_14a8e0638);
  }
  return DAT_14cadaa40;
}



// FUNCTION 1463ca2e0 FUN_1463ca2e0 body=47 status=ok
// SIG undefined FUN_1463ca2e0(void)

longlong FUN_1463ca2e0(void)

{
  if (DAT_14cadaa48 == 0) {
    FUN_14000fc22(&DAT_14cadaa48,&PTR_FUN_14a8e06d8);
  }
  return DAT_14cadaa48;
}



// FUNCTION 1463ca310 FUN_1463ca310 body=34 status=ok
// SIG undefined FUN_1463ca310(void)

void FUN_1463ca310(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145992a10();
  FUN_14069c8d6(uVar1,&PTR_s_GetTargetRotation_14a8e0720,3);
  return;
}



// FUNCTION 1463ca338 FUN_1463ca338 body=95 status=ok
// SIG undefined FUN_1463ca338(void)

void FUN_1463ca338(longlong *param_1)

{
  float fVar1;
  
  FUN_1401a0912();
  fVar1 = *(float *)((longlong)param_1 + 0x2f4);
  if (fVar1 <= 0.005) {
    fVar1 = 0.005;
  }
  *(float *)((longlong)param_1 + 0x2f4) = fVar1;
  fVar1 = *(float *)((longlong)param_1 + 0x2ec);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x2ec) = fVar1;
  (**(code **)(*param_1 + 0x5e0))(param_1,0,0,0,0);
  return;
}



// FUNCTION 1463ca398 FUN_1463ca398 body=55 status=ok
// SIG undefined FUN_1463ca398(void)

void FUN_1463ca398(void)

{
  undefined8 uVar1;
  
  if (DAT_14cadaa78 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cadaa78 = FUN_140002ddd(FUN_1463ca3cf,uVar1,L"TouchInputControl");
  }
  return;
}



// FUNCTION 1463ca3cf FUN_1463ca3cf body=47 status=ok
// SIG undefined FUN_1463ca3cf(void)

longlong FUN_1463ca3cf(void)

{
  if (DAT_14cadaa70 == 0) {
    FUN_14086a14e(&DAT_14cadaa70,&PTR_FUN_14a8e1908);
  }
  return DAT_14cadaa70;
}



// FUNCTION 1463ca3fe FUN_1463ca3fe body=48 status=ok
// SIG undefined FUN_1463ca3fe(void)

void FUN_1463ca3fe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000098;
  *puVar1 = &PTR_FUN_14a8e9130;
  return;
}



// FUNCTION 1463ca42e FUN_1463ca42e body=65 status=ok
// SIG undefined FUN_1463ca42e(void)

void FUN_1463ca42e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8e1cb0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0x3dcccccd3f800000;
  puVar1[8] = 0x400000003f000000;
  *(undefined4 *)(puVar1 + 9) = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x4c) = 0;
  return;
}



// FUNCTION 1463ca475 FUN_1463ca475 body=47 status=ok
// SIG undefined FUN_1463ca475(void)

longlong FUN_1463ca475(void)

{
  if (DAT_14cadaa90 == 0) {
    FUN_14073dd9a(&DAT_14cadaa90,&PTR_LAB_14a8e1c68);
  }
  return DAT_14cadaa90;
}



// FUNCTION 1463ca4a4 FUN_1463ca4a4 body=55 status=ok
// SIG undefined FUN_1463ca4a4(void)

void FUN_1463ca4a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cadaaa8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cadaaa8 = FUN_140002ddd(FUN_1463ca4db,uVar1,L"UniqueNetIdReplNetSerializerConfig");
  }
  return;
}



// FUNCTION 1463ca4db FUN_1463ca4db body=47 status=ok
// SIG undefined FUN_1463ca4db(void)

longlong FUN_1463ca4db(void)

{
  if (DAT_14cadaaa0 == 0) {
    FUN_14086a14e(&DAT_14cadaaa0,&PTR_FUN_14a8e2028);
  }
  return DAT_14cadaaa0;
}



// FUNCTION 1463ca50a FUN_1463ca50a body=48 status=ok
// SIG undefined FUN_1463ca50a(void)

void FUN_1463ca50a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a8e9290;
  return;
}



// FUNCTION 1463ca53a FUN_1463ca53a body=55 status=ok
// SIG undefined FUN_1463ca53a(void)

void FUN_1463ca53a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cadabd0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cadabd0 = FUN_140002ddd(FUN_1463ca571,uVar1,L"NetLevelVisibilityTransactionId");
  }
  return;
}



// FUNCTION 1463ca571 FUN_1463ca571 body=49 status=ok
// SIG undefined FUN_1463ca571(void)

longlong FUN_1463ca571(void)

{
  if (DAT_14cadabc8 == 0) {
    FUN_14086a14e(&DAT_14cadabc8,&PTR_FUN_14a8e2300);
  }
  return DAT_14cadabc8;
}



// FUNCTION 1463ca5a2 FUN_1463ca5a2 body=48 status=ok
// SIG undefined FUN_1463ca5a2(void)

void FUN_1463ca5a2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000004;
  *puVar1 = &PTR_FUN_14a8e9430;
  return;
}



// FUNCTION 1463ca5d2 FUN_1463ca5d2 body=55 status=ok
// SIG undefined FUN_1463ca5d2(void)

void FUN_1463ca5d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cadabe8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cadabe8 = FUN_140002ddd(FUN_1463ca609,uVar1,L"UpdateLevelVisibilityLevelInfo");
  }
  return;
}



// FUNCTION 1463ca609 FUN_1463ca609 body=49 status=ok
// SIG undefined FUN_1463ca609(void)

longlong FUN_1463ca609(void)

{
  if (DAT_14cadabe0 == 0) {
    FUN_14086a14e(&DAT_14cadabe0,&PTR_FUN_14a8e2580);
  }
  return DAT_14cadabe0;
}



// FUNCTION 1463ca63a FUN_1463ca63a body=48 status=ok
// SIG undefined FUN_1463ca63a(void)

void FUN_1463ca63a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000018;
  *puVar1 = &PTR_FUN_14a8e9590;
  return;
}



// FUNCTION 1463ca66a FUN_1463ca66a body=47 status=ok
// SIG undefined FUN_1463ca66a(void)

longlong FUN_1463ca66a(void)

{
  if (DAT_14cadac10 == 0) {
    FUN_14000fc22(&DAT_14cadac10,&PTR_FUN_14a8e2860);
  }
  return DAT_14cadac10;
}



// FUNCTION 1463ca699 FUN_1463ca699 body=47 status=ok
// SIG undefined FUN_1463ca699(void)

longlong FUN_1463ca699(void)

{
  if (DAT_14cadac18 == 0) {
    FUN_14000fc22(&DAT_14cadac18,&PTR_FUN_14a8e2a18);
  }
  return DAT_14cadac18;
}



// FUNCTION 1463ca6c8 FUN_1463ca6c8 body=47 status=ok
// SIG undefined FUN_1463ca6c8(void)

longlong FUN_1463ca6c8(void)

{
  if (DAT_14cadac20 == 0) {
    FUN_14000fc22(&DAT_14cadac20,&PTR_FUN_14a8e2ba0);
  }
  return DAT_14cadac20;
}



// FUNCTION 1463ca6f7 FUN_1463ca6f7 body=49 status=ok
// SIG undefined FUN_1463ca6f7(void)

longlong FUN_1463ca6f7(void)

{
  if (DAT_14cadac80 == 0) {
    FUN_14073dd9a(&DAT_14cadac80,&PTR_LAB_14a8e3370);
  }
  return DAT_14cadac80;
}



// FUNCTION 1463ca728 FUN_1463ca728 body=47 status=ok
// SIG undefined FUN_1463ca728(void)

longlong FUN_1463ca728(void)

{
  if (DAT_14cadac28 == 0) {
    FUN_14000fc22(&DAT_14cadac28,&PTR_FUN_14a8e2c38);
  }
  return DAT_14cadac28;
}



// FUNCTION 1463ca757 FUN_1463ca757 body=47 status=ok
// SIG undefined FUN_1463ca757(void)

longlong FUN_1463ca757(void)

{
  if (DAT_14cadac30 == 0) {
    FUN_14000fc22(&DAT_14cadac30,&PTR_FUN_14a8e2cd0);
  }
  return DAT_14cadac30;
}



// FUNCTION 1463ca786 FUN_1463ca786 body=47 status=ok
// SIG undefined FUN_1463ca786(void)

longlong FUN_1463ca786(void)

{
  if (DAT_14cadac40 == 0) {
    FUN_14000fc22(&DAT_14cadac40,&PTR_FUN_14a8e2e08);
  }
  return DAT_14cadac40;
}



// FUNCTION 1463ca7b5 FUN_1463ca7b5 body=47 status=ok
// SIG undefined FUN_1463ca7b5(void)

longlong FUN_1463ca7b5(void)

{
  if (DAT_14cadac50 == 0) {
    FUN_14000fc22(&DAT_14cadac50,&PTR_FUN_14a8e2ed0);
  }
  return DAT_14cadac50;
}



// FUNCTION 1463ca7e4 FUN_1463ca7e4 body=47 status=ok
// SIG undefined FUN_1463ca7e4(void)

longlong FUN_1463ca7e4(void)

{
  if (DAT_14cadac60 == 0) {
    FUN_14000fc22(&DAT_14cadac60,&PTR_FUN_14a8e2f38);
  }
  return DAT_14cadac60;
}



// FUNCTION 1463ca813 FUN_1463ca813 body=47 status=ok
// SIG undefined FUN_1463ca813(void)

longlong FUN_1463ca813(void)

{
  if (DAT_14cadac70 == 0) {
    FUN_14000fc22(&DAT_14cadac70,&PTR_FUN_14a8e2fa8);
  }
  return DAT_14cadac70;
}



// FUNCTION 1463ca842 FUN_1463ca842 body=34 status=ok
// SIG undefined FUN_1463ca842(void)

void FUN_1463ca842(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400b4698();
  FUN_14069c8d6(uVar1,&PTR_s_DebugCreatePlayer_14a8e2ff0,2);
  return;
}



// FUNCTION 1463ca870 FUN_1463ca870 body=95 status=ok
// SIG undefined FUN_1463ca870(void)

void FUN_1463ca870(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0xf8);
  if (lVar2 != 0) {
    FUN_1407909d0(lVar2);
    FUN_1400020a8(lVar2);
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  switchD_143c3d4dc::caseD_1f(param_1);
  return;
}



// FUNCTION 1463ca8cf FUN_1463ca8cf body=187 status=ok
// SIG undefined FUN_1463ca8cf(void)

undefined8 FUN_1463ca8cf(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463ca98b FUN_1463ca98b body=262 status=ok
// SIG undefined FUN_1463ca98b(void)

undefined8
FUN_1463ca98b(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,undefined8 param_5
             ,byte param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_98 = 0;
  uStack_c0 = (ulonglong)param_4;
  local_b0 = param_5;
  local_b8 = (ushort)param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d8 = param_2;
  local_d0 = param_1;
  local_c8 = param_3;
  uVar1 = FUN_1402710dd(&local_d8);
  if (local_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463caa92 FUN_1463caa92 body=314 status=ok
// SIG undefined FUN_1463caa92(void)

undefined8 * FUN_1463caa92(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined **local_58 [3];
  byte local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(param_1 + 0x40);
  if ((iVar3 < 1) || ((longlong *)**(longlong **)(param_1 + 0x38) == (longlong *)0x0)) {
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    *param_2 = &PTR_FUN_14a5af930;
    param_2[4] = 0;
    param_2[5] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  lVar5 = 1;
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x38);
  do {
    plVar4 = plVar1;
    if (plVar4[6] != 0) {
      cVar2 = FUN_141107632();
      if (cVar2 != '\0') break;
      iVar3 = *(int *)(param_1 + 0x40);
    }
    if (iVar3 <= (int)lVar5) break;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + lVar5 * 8);
    lVar5 = lVar5 + 1;
  } while (plVar1 != (longlong *)0x0);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_14a5af930;
  param_2[4] = 0;
  param_2[5] = 0;
  (**(code **)(*plVar4 + 0x350))(plVar4,local_58);
  FUN_141238a10(param_2,local_58);
  local_58[0] = &PTR_FUN_14a5af930;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  local_58[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_40])();
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1463cabd0 FUN_1463cabd0 body=126 status=ok
// SIG undefined FUN_1463cabd0(void)

undefined8 FUN_1463cabd0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401a700c(&local_24,0x11a);
  if ((((local_24 == param_2) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x170), lVar1 != 0)) {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x414));
  }
  else {
    uVar2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463cac55 FUN_1463cac55 body=49 status=ok
// SIG undefined FUN_1463cac55(void)

longlong FUN_1463cac55(void)

{
  if (DAT_14cadad00 == 0) {
    FUN_14073dd9a(&DAT_14cadad00,&PTR_LAB_14a8e4800);
  }
  return DAT_14cadad00;
}



// FUNCTION 1463cac86 FUN_1463cac86 body=47 status=ok
// SIG undefined FUN_1463cac86(void)

longlong FUN_1463cac86(void)

{
  if (DAT_14cadac90 == 0) {
    FUN_14000fc22(&DAT_14cadac90,&PTR_FUN_14a8e3d38);
  }
  return DAT_14cadac90;
}



// FUNCTION 1463cacb5 FUN_1463cacb5 body=47 status=ok
// SIG undefined FUN_1463cacb5(void)

longlong FUN_1463cacb5(void)

{
  if (DAT_14cadac98 == 0) {
    FUN_14000fc22(&DAT_14cadac98,&PTR_FUN_14a8e3d78);
  }
  return DAT_14cadac98;
}



// FUNCTION 1463cace4 FUN_1463cace4 body=47 status=ok
// SIG undefined FUN_1463cace4(void)

longlong FUN_1463cace4(void)

{
  if (DAT_14cadaca0 == 0) {
    FUN_14000fc22(&DAT_14cadaca0,&PTR_FUN_14a8e3e08);
  }
  return DAT_14cadaca0;
}



// FUNCTION 1463cad13 FUN_1463cad13 body=47 status=ok
// SIG undefined FUN_1463cad13(void)

longlong FUN_1463cad13(void)

{
  if (DAT_14cadaca8 == 0) {
    FUN_14000fc22(&DAT_14cadaca8,&PTR_FUN_14a8e3ea8);
  }
  return DAT_14cadaca8;
}



// FUNCTION 1463cad42 FUN_1463cad42 body=47 status=ok
// SIG undefined FUN_1463cad42(void)

longlong FUN_1463cad42(void)

{
  if (DAT_14cadacb8 == 0) {
    FUN_14000fc22(&DAT_14cadacb8,&PTR_FUN_14a8e3f68);
  }
  return DAT_14cadacb8;
}



// FUNCTION 1463cad71 FUN_1463cad71 body=47 status=ok
// SIG undefined FUN_1463cad71(void)

longlong FUN_1463cad71(void)

{
  if (DAT_14cadacc8 == 0) {
    FUN_14000fc22(&DAT_14cadacc8,&PTR_FUN_14a8e4020);
  }
  return DAT_14cadacc8;
}



// FUNCTION 1463cada0 FUN_1463cada0 body=47 status=ok
// SIG undefined FUN_1463cada0(void)

longlong FUN_1463cada0(void)

{
  if (DAT_14cadacd8 == 0) {
    FUN_14000fc22(&DAT_14cadacd8,&PTR_FUN_14a8e40e8);
  }
  return DAT_14cadacd8;
}



// FUNCTION 1463cadcf FUN_1463cadcf body=47 status=ok
// SIG undefined FUN_1463cadcf(void)

longlong FUN_1463cadcf(void)

{
  if (DAT_14cadace0 == 0) {
    FUN_14000fc22(&DAT_14cadace0,&PTR_FUN_14a8e4138);
  }
  return DAT_14cadace0;
}



// FUNCTION 1463cadfe FUN_1463cadfe body=47 status=ok
// SIG undefined FUN_1463cadfe(void)

longlong FUN_1463cadfe(void)

{
  if (DAT_14cadace8 == 0) {
    FUN_14000fc22(&DAT_14cadace8,&PTR_FUN_14a8e41c0);
  }
  return DAT_14cadace8;
}



// FUNCTION 1463cae2d FUN_1463cae2d body=47 status=ok
// SIG undefined FUN_1463cae2d(void)

longlong FUN_1463cae2d(void)

{
  if (DAT_14cadacf0 == 0) {
    FUN_14000fc22(&DAT_14cadacf0,&PTR_FUN_14a8e4210);
  }
  return DAT_14cadacf0;
}



// FUNCTION 1463cae5c FUN_1463cae5c body=34 status=ok
// SIG undefined FUN_1463cae5c(void)

void FUN_1463cae5c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14592c56a();
  FUN_14069c8d6(uVar1,&PTR_s_AbortMatch_14a8e4250,9);
  return;
}



// FUNCTION 1463cae8a FUN_1463cae8a body=244 status=ok
// SIG undefined FUN_1463cae8a(void)

undefined8
FUN_1463cae8a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *local_40 = &PTR_FUN_14a8ea920;
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



// FUNCTION 1463caf94 FUN_1463caf94 body=127 status=ok
// SIG undefined FUN_1463caf94(void)

void FUN_1463caf94(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_141440cd6(&DAT_14cadbe60,param_1[0x86]);
  lVar1 = param_1[0x86];
  lVar2 = 0x880;
  if ((lVar1 != DAT_14cadad70) && (lVar2 = 0x888, lVar1 != DAT_14cadad78)) {
    if (lVar1 == DAT_14cadad80) {
      lVar2 = 0x890;
    }
    else {
      lVar2 = 0x898;
      if ((lVar1 != DAT_14cadad88) && (lVar2 = 0x8a0, lVar1 != DAT_14cadad10)) {
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001463caff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar2))(param_1);
  return;
}



// FUNCTION 1463cb014 FUN_1463cb014 body=80 status=ok
// SIG undefined FUN_1463cb014(void)

undefined8 * FUN_1463cb014(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a8cc2c0;
  param_1[6] = &PTR_FUN_14a8cc5a0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1410891e4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb064 FUN_1463cb064 body=40 status=ok
// SIG undefined FUN_1463cb064(void)

undefined8 FUN_1463cb064(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb08c FUN_1463cb08c body=40 status=ok
// SIG undefined FUN_1463cb08c(void)

undefined8 FUN_1463cb08c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb0b4 FUN_1463cb0b4 body=40 status=ok
// SIG undefined FUN_1463cb0b4(void)

undefined8 FUN_1463cb0b4(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb0dc FUN_1463cb0dc body=40 status=ok
// SIG undefined FUN_1463cb0dc(void)

undefined8 FUN_1463cb0dc(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb104 FUN_1463cb104 body=40 status=ok
// SIG undefined FUN_1463cb104(void)

undefined8 FUN_1463cb104(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb12c FUN_1463cb12c body=40 status=ok
// SIG undefined FUN_1463cb12c(void)

undefined8 FUN_1463cb12c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb154 FUN_1463cb154 body=40 status=ok
// SIG undefined FUN_1463cb154(void)

undefined8 FUN_1463cb154(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb17c FUN_1463cb17c body=40 status=ok
// SIG undefined FUN_1463cb17c(void)

undefined8 FUN_1463cb17c(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb1a4 FUN_1463cb1a4 body=40 status=ok
// SIG undefined FUN_1463cb1a4(void)

undefined8 FUN_1463cb1a4(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb1cc FUN_1463cb1cc body=40 status=ok
// SIG undefined FUN_1463cb1cc(void)

undefined8 FUN_1463cb1cc(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb1f4 FUN_1463cb1f4 body=40 status=ok
// SIG undefined FUN_1463cb1f4(void)

undefined8 FUN_1463cb1f4(undefined8 param_1,int param_2)

{
  FUN_140d7aa08();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb21c FUN_1463cb21c body=40 status=ok
// SIG undefined FUN_1463cb21c(void)

undefined8 FUN_1463cb21c(undefined8 param_1,int param_2)

{
  FUN_1461a7e2c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb244 FUN_1463cb244 body=40 status=ok
// SIG undefined FUN_1463cb244(void)

undefined8 FUN_1463cb244(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb26c FUN_1463cb26c body=40 status=ok
// SIG undefined FUN_1463cb26c(void)

undefined8 FUN_1463cb26c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb294 FUN_1463cb294 body=40 status=ok
// SIG undefined FUN_1463cb294(void)

undefined8 FUN_1463cb294(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb2bc FUN_1463cb2bc body=69 status=ok
// SIG undefined FUN_1463cb2bc(void)

undefined8 * FUN_1463cb2bc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a8e0190;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb302 FUN_1463cb302 body=40 status=ok
// SIG undefined FUN_1463cb302(void)

undefined8 FUN_1463cb302(undefined8 param_1,int param_2)

{
  FUN_14006e79a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb32a FUN_1463cb32a body=40 status=ok
// SIG undefined FUN_1463cb32a(void)

undefined8 FUN_1463cb32a(undefined8 param_1,int param_2)

{
  FUN_145b04cda();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb352 FUN_1463cb352 body=72 status=ok
// SIG undefined FUN_1463cb352(void)

undefined8 * FUN_1463cb352(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a8e4840;
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  FUN_1458d89e6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb39a FUN_1463cb39a body=29 status=ok
// SIG undefined FUN_1463cb39a(void)

undefined8 FUN_1463cb39a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb3b8 FUN_1463cb3b8 body=29 status=ok
// SIG undefined FUN_1463cb3b8(void)

undefined8 FUN_1463cb3b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb3d6 FUN_1463cb3d6 body=29 status=ok
// SIG undefined FUN_1463cb3d6(void)

undefined8 FUN_1463cb3d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb3f4 FUN_1463cb3f4 body=29 status=ok
// SIG undefined FUN_1463cb3f4(void)

undefined8 FUN_1463cb3f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb412 FUN_1463cb412 body=29 status=ok
// SIG undefined FUN_1463cb412(void)

undefined8 FUN_1463cb412(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb430 FUN_1463cb430 body=29 status=ok
// SIG undefined FUN_1463cb430(void)

undefined8 FUN_1463cb430(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb44e FUN_1463cb44e body=29 status=ok
// SIG undefined FUN_1463cb44e(void)

undefined8 FUN_1463cb44e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb46c FUN_1463cb46c body=29 status=ok
// SIG undefined FUN_1463cb46c(void)

undefined8 FUN_1463cb46c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb48a FUN_1463cb48a body=29 status=ok
// SIG undefined FUN_1463cb48a(void)

undefined8 FUN_1463cb48a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb4a8 FUN_1463cb4a8 body=29 status=ok
// SIG undefined FUN_1463cb4a8(void)

undefined8 FUN_1463cb4a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb4c6 FUN_1463cb4c6 body=29 status=ok
// SIG undefined FUN_1463cb4c6(void)

undefined8 FUN_1463cb4c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb4e4 FUN_1463cb4e4 body=29 status=ok
// SIG undefined FUN_1463cb4e4(void)

undefined8 FUN_1463cb4e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb502 FUN_1463cb502 body=29 status=ok
// SIG undefined FUN_1463cb502(void)

undefined8 FUN_1463cb502(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb520 FUN_1463cb520 body=29 status=ok
// SIG undefined FUN_1463cb520(void)

undefined8 FUN_1463cb520(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb53e FUN_1463cb53e body=29 status=ok
// SIG undefined FUN_1463cb53e(void)

undefined8 FUN_1463cb53e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb55c FUN_1463cb55c body=29 status=ok
// SIG undefined FUN_1463cb55c(void)

undefined8 FUN_1463cb55c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb57a FUN_1463cb57a body=29 status=ok
// SIG undefined FUN_1463cb57a(void)

undefined8 FUN_1463cb57a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb598 FUN_1463cb598 body=29 status=ok
// SIG undefined FUN_1463cb598(void)

undefined8 FUN_1463cb598(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb5b6 FUN_1463cb5b6 body=29 status=ok
// SIG undefined FUN_1463cb5b6(void)

undefined8 FUN_1463cb5b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb5d4 FUN_1463cb5d4 body=29 status=ok
// SIG undefined FUN_1463cb5d4(void)

undefined8 FUN_1463cb5d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb5f2 FUN_1463cb5f2 body=29 status=ok
// SIG undefined FUN_1463cb5f2(void)

undefined8 FUN_1463cb5f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb610 FUN_1463cb610 body=29 status=ok
// SIG undefined FUN_1463cb610(void)

undefined8 FUN_1463cb610(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb62e FUN_1463cb62e body=29 status=ok
// SIG undefined FUN_1463cb62e(void)

undefined8 FUN_1463cb62e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb64c FUN_1463cb64c body=29 status=ok
// SIG undefined FUN_1463cb64c(void)

undefined8 FUN_1463cb64c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb66a FUN_1463cb66a body=29 status=ok
// SIG undefined FUN_1463cb66a(void)

undefined8 FUN_1463cb66a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb688 FUN_1463cb688 body=29 status=ok
// SIG undefined FUN_1463cb688(void)

undefined8 FUN_1463cb688(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb6a6 FUN_1463cb6a6 body=29 status=ok
// SIG undefined FUN_1463cb6a6(void)

undefined8 FUN_1463cb6a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb6c4 FUN_1463cb6c4 body=29 status=ok
// SIG undefined FUN_1463cb6c4(void)

undefined8 FUN_1463cb6c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb6e2 FUN_1463cb6e2 body=29 status=ok
// SIG undefined FUN_1463cb6e2(void)

undefined8 FUN_1463cb6e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb700 FUN_1463cb700 body=29 status=ok
// SIG undefined FUN_1463cb700(void)

undefined8 FUN_1463cb700(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb71e FUN_1463cb71e body=29 status=ok
// SIG undefined FUN_1463cb71e(void)

undefined8 FUN_1463cb71e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb73c FUN_1463cb73c body=29 status=ok
// SIG undefined FUN_1463cb73c(void)

undefined8 FUN_1463cb73c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb75a FUN_1463cb75a body=29 status=ok
// SIG undefined FUN_1463cb75a(void)

undefined8 FUN_1463cb75a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb778 FUN_1463cb778 body=29 status=ok
// SIG undefined FUN_1463cb778(void)

undefined8 FUN_1463cb778(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463cb796 FUN_1463cb796 body=29 status=ok
// SIG undefined FUN_1463cb796(void)

undefined8 FUN_1463cb796(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


