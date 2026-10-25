// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1463f78ea FUN_1463f78ea body=35 status=ok
// SIG undefined FUN_1463f78ea(void)

void FUN_1463f78ea(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aa39bc0;
  return;
}



// FUNCTION 1463f7918 FUN_1463f7918 body=49 status=ok
// SIG undefined FUN_1463f7918(void)

longlong FUN_1463f7918(void)

{
  if (DAT_14caf8968 == 0) {
    FUN_14073dd9a(&DAT_14caf8968,&PTR_LAB_14aa3a7d8);
  }
  return DAT_14caf8968;
}



// FUNCTION 1463f794a FUN_1463f794a body=103 status=ok
// SIG undefined FUN_1463f794a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1463f794a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf89a0) {
    FUN_144b3d300(&DAT_14caf89a0);
    if (DAT_14caf89a0 == -1) {
      _DAT_14caf8990 = &PTR_FUN_14aa4c7b0;
      DAT_14caf8998 = 0;
      _Init_thread_footer(&DAT_14caf89a0);
    }
  }
  return &DAT_14caf8990;
}



// FUNCTION 1463f79b1 FUN_1463f79b1 body=54 status=ok
// SIG undefined FUN_1463f79b1(void)

void FUN_1463f79b1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aa3b110;
  puVar1[5] = &PTR_LAB_14aa3b3c0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 1463f79ec FUN_1463f79ec body=47 status=ok
// SIG undefined FUN_1463f79ec(void)

longlong FUN_1463f79ec(void)

{
  if (DAT_14caf89d8 == 0) {
    FUN_14073dd9a(&DAT_14caf89d8,&PTR_LAB_14aa3b0c8);
  }
  return DAT_14caf89d8;
}



// FUNCTION 1463f7a1b FUN_1463f7a1b body=47 status=ok
// SIG undefined FUN_1463f7a1b(void)

longlong FUN_1463f7a1b(void)

{
  if (DAT_14caf94b8 == 0) {
    FUN_1409ce572(&DAT_14caf94b8,&PTR_FUN_14aa3b740);
  }
  return DAT_14caf94b8;
}



// FUNCTION 1463f7a4a FUN_1463f7a4a body=55 status=ok
// SIG undefined FUN_1463f7a4a(void)

void FUN_1463f7a4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf94d8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf94d8 = FUN_140002ddd(FUN_1463f7a81,uVar1,L"UpdateLevelStreamingLevelStatus");
  }
  return;
}



// FUNCTION 1463f7a81 FUN_1463f7a81 body=47 status=ok
// SIG undefined FUN_1463f7a81(void)

longlong FUN_1463f7a81(void)

{
  if (DAT_14caf94d0 == 0) {
    FUN_14086a14e(&DAT_14caf94d0,&PTR_FUN_14aa3b9d0);
  }
  return DAT_14caf94d0;
}



// FUNCTION 1463f7ab0 FUN_1463f7ab0 body=48 status=ok
// SIG undefined FUN_1463f7ab0(void)

void FUN_1463f7ab0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14aa4c960;
  return;
}



// FUNCTION 1463f7ae0 FUN_1463f7ae0 body=55 status=ok
// SIG undefined FUN_1463f7ae0(void)

void FUN_1463f7ae0(void)

{
  undefined8 uVar1;
  
  if (DAT_14caf94f0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caf94f0 = FUN_140002ddd(FUN_1463f7b17,uVar1,L"AsyncPhysicsTimestamp");
  }
  return;
}



// FUNCTION 1463f7b17 FUN_1463f7b17 body=49 status=ok
// SIG undefined FUN_1463f7b17(void)

longlong FUN_1463f7b17(void)

{
  if (DAT_14caf94e8 == 0) {
    FUN_14086a14e(&DAT_14caf94e8,&PTR_FUN_14aa3bad8);
  }
  return DAT_14caf94e8;
}



// FUNCTION 1463f7b48 FUN_1463f7b48 body=48 status=ok
// SIG undefined FUN_1463f7b48(void)

void FUN_1463f7b48(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14aa4cac0;
  return;
}



// FUNCTION 1463f7b78 FUN_1463f7b78 body=47 status=ok
// SIG undefined FUN_1463f7b78(void)

longlong FUN_1463f7b78(void)

{
  if (DAT_14caf9500 == 0) {
    FUN_14086a14e(&DAT_14caf9500,&PTR_FUN_14aa3bbc0);
  }
  return DAT_14caf9500;
}



// FUNCTION 1463f7ba7 FUN_1463f7ba7 body=47 status=ok
// SIG undefined FUN_1463f7ba7(void)

longlong FUN_1463f7ba7(void)

{
  if (DAT_14caf9508 == 0) {
    FUN_14000fc22(&DAT_14caf9508,&PTR_FUN_14aa3bc70);
  }
  return DAT_14caf9508;
}



// FUNCTION 1463f7bd6 FUN_1463f7bd6 body=47 status=ok
// SIG undefined FUN_1463f7bd6(void)

longlong FUN_1463f7bd6(void)

{
  if (DAT_14caf9510 == 0) {
    FUN_14000fc22(&DAT_14caf9510,&PTR_FUN_14aa3bd00);
  }
  return DAT_14caf9510;
}



// FUNCTION 1463f7c05 FUN_1463f7c05 body=47 status=ok
// SIG undefined FUN_1463f7c05(void)

longlong FUN_1463f7c05(void)

{
  if (DAT_14caf9518 == 0) {
    FUN_14000fc22(&DAT_14caf9518,&PTR_FUN_14aa3bd90);
  }
  return DAT_14caf9518;
}



// FUNCTION 1463f7c34 FUN_1463f7c34 body=47 status=ok
// SIG undefined FUN_1463f7c34(void)

longlong FUN_1463f7c34(void)

{
  if (DAT_14caf9520 == 0) {
    FUN_14000fc22(&DAT_14caf9520,&PTR_FUN_14aa3be20);
  }
  return DAT_14caf9520;
}



// FUNCTION 1463f7c63 FUN_1463f7c63 body=47 status=ok
// SIG undefined FUN_1463f7c63(void)

longlong FUN_1463f7c63(void)

{
  if (DAT_14caf9528 == 0) {
    FUN_14000fc22(&DAT_14caf9528,&PTR_FUN_14aa3bea0);
  }
  return DAT_14caf9528;
}



// FUNCTION 1463f7c92 FUN_1463f7c92 body=47 status=ok
// SIG undefined FUN_1463f7c92(void)

longlong FUN_1463f7c92(void)

{
  if (DAT_14caf9530 == 0) {
    FUN_14000fc22(&DAT_14caf9530,&PTR_FUN_14aa3bf40);
  }
  return DAT_14caf9530;
}



// FUNCTION 1463f7cc1 FUN_1463f7cc1 body=47 status=ok
// SIG undefined FUN_1463f7cc1(void)

longlong FUN_1463f7cc1(void)

{
  if (DAT_14caf9538 == 0) {
    FUN_14000fc22(&DAT_14caf9538,&PTR_FUN_14aa3bfa8);
  }
  return DAT_14caf9538;
}



// FUNCTION 1463f7cf0 FUN_1463f7cf0 body=47 status=ok
// SIG undefined FUN_1463f7cf0(void)

longlong FUN_1463f7cf0(void)

{
  if (DAT_14caf9540 == 0) {
    FUN_14000fc22(&DAT_14caf9540,&PTR_FUN_14aa3c008);
  }
  return DAT_14caf9540;
}



// FUNCTION 1463f7d1f FUN_1463f7d1f body=47 status=ok
// SIG undefined FUN_1463f7d1f(void)

longlong FUN_1463f7d1f(void)

{
  if (DAT_14caf9550 == 0) {
    FUN_14000fc22(&DAT_14caf9550,&PTR_FUN_14aa3c128);
  }
  return DAT_14caf9550;
}



// FUNCTION 1463f7d4e FUN_1463f7d4e body=47 status=ok
// SIG undefined FUN_1463f7d4e(void)

longlong FUN_1463f7d4e(void)

{
  if (DAT_14caf9560 == 0) {
    FUN_14000fc22(&DAT_14caf9560,&PTR_FUN_14aa3c2c8);
  }
  return DAT_14caf9560;
}



// FUNCTION 1463f7d7d FUN_1463f7d7d body=47 status=ok
// SIG undefined FUN_1463f7d7d(void)

longlong FUN_1463f7d7d(void)

{
  if (DAT_14caf9570 == 0) {
    FUN_14000fc22(&DAT_14caf9570,&PTR_FUN_14aa3c458);
  }
  return DAT_14caf9570;
}



// FUNCTION 1463f7dac FUN_1463f7dac body=47 status=ok
// SIG undefined FUN_1463f7dac(void)

longlong FUN_1463f7dac(void)

{
  if (DAT_14caf9580 == 0) {
    FUN_14000fc22(&DAT_14caf9580,&PTR_FUN_14aa3c4f0);
  }
  return DAT_14caf9580;
}



// FUNCTION 1463f7ddb FUN_1463f7ddb body=47 status=ok
// SIG undefined FUN_1463f7ddb(void)

longlong FUN_1463f7ddb(void)

{
  if (DAT_14caf9590 == 0) {
    FUN_14000fc22(&DAT_14caf9590,&PTR_FUN_14aa3c5b8);
  }
  return DAT_14caf9590;
}



// FUNCTION 1463f7e0a FUN_1463f7e0a body=47 status=ok
// SIG undefined FUN_1463f7e0a(void)

longlong FUN_1463f7e0a(void)

{
  if (DAT_14caf95a0 == 0) {
    FUN_14000fc22(&DAT_14caf95a0,&PTR_FUN_14aa3c650);
  }
  return DAT_14caf95a0;
}



// FUNCTION 1463f7e39 FUN_1463f7e39 body=47 status=ok
// SIG undefined FUN_1463f7e39(void)

longlong FUN_1463f7e39(void)

{
  if (DAT_14caf95b0 == 0) {
    FUN_14000fc22(&DAT_14caf95b0,&PTR_FUN_14aa3c6d8);
  }
  return DAT_14caf95b0;
}



// FUNCTION 1463f7e68 FUN_1463f7e68 body=47 status=ok
// SIG undefined FUN_1463f7e68(void)

longlong FUN_1463f7e68(void)

{
  if (DAT_14caf95c0 == 0) {
    FUN_14000fc22(&DAT_14caf95c0,&PTR_FUN_14aa3c7d8);
  }
  return DAT_14caf95c0;
}



// FUNCTION 1463f7e98 FUN_1463f7e98 body=91 status=ok
// SIG undefined FUN_1463f7e98(void)

void FUN_1463f7e98(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14caf95c8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463f7ef4 FUN_1463f7ef4 body=47 status=ok
// SIG undefined FUN_1463f7ef4(void)

longlong FUN_1463f7ef4(void)

{
  if (DAT_14caf95d0 == 0) {
    FUN_14000fc22(&DAT_14caf95d0,&PTR_FUN_14aa3c8b8);
  }
  return DAT_14caf95d0;
}



// FUNCTION 1463f7f24 FUN_1463f7f24 body=162 status=ok
// SIG undefined FUN_1463f7f24(void)

void FUN_1463f7f24(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xaa0))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463f7fc7 FUN_1463f7fc7 body=47 status=ok
// SIG undefined FUN_1463f7fc7(void)

longlong FUN_1463f7fc7(void)

{
  if (DAT_14caf95e0 == 0) {
    FUN_14000fc22(&DAT_14caf95e0,&PTR_FUN_14aa3c940);
  }
  return DAT_14caf95e0;
}



// FUNCTION 1463f7ff6 FUN_1463f7ff6 body=47 status=ok
// SIG undefined FUN_1463f7ff6(void)

longlong FUN_1463f7ff6(void)

{
  if (DAT_14caf95f0 == 0) {
    FUN_14000fc22(&DAT_14caf95f0,&PTR_FUN_14aa3c9d0);
  }
  return DAT_14caf95f0;
}



// FUNCTION 1463f8025 FUN_1463f8025 body=47 status=ok
// SIG undefined FUN_1463f8025(void)

longlong FUN_1463f8025(void)

{
  if (DAT_14caf9600 == 0) {
    FUN_14000fc22(&DAT_14caf9600,&PTR_FUN_14aa3ca68);
  }
  return DAT_14caf9600;
}



// FUNCTION 1463f8054 FUN_1463f8054 body=47 status=ok
// SIG undefined FUN_1463f8054(void)

longlong FUN_1463f8054(void)

{
  if (DAT_14caf9610 == 0) {
    FUN_14000fc22(&DAT_14caf9610,&PTR_FUN_14aa3cb90);
  }
  return DAT_14caf9610;
}



// FUNCTION 1463f8083 FUN_1463f8083 body=47 status=ok
// SIG undefined FUN_1463f8083(void)

longlong FUN_1463f8083(void)

{
  if (DAT_14caf9620 == 0) {
    FUN_14000fc22(&DAT_14caf9620,&PTR_FUN_14aa3cc40);
  }
  return DAT_14caf9620;
}



// FUNCTION 1463f80b2 FUN_1463f80b2 body=47 status=ok
// SIG undefined FUN_1463f80b2(void)

longlong FUN_1463f80b2(void)

{
  if (DAT_14caf9630 == 0) {
    FUN_14000fc22(&DAT_14caf9630,&PTR_FUN_14aa3cd10);
  }
  return DAT_14caf9630;
}



// FUNCTION 1463f80e1 FUN_1463f80e1 body=47 status=ok
// SIG undefined FUN_1463f80e1(void)

longlong FUN_1463f80e1(void)

{
  if (DAT_14caf9640 == 0) {
    FUN_14000fc22(&DAT_14caf9640,&PTR_FUN_14aa3cde0);
  }
  return DAT_14caf9640;
}



// FUNCTION 1463f8110 FUN_1463f8110 body=47 status=ok
// SIG undefined FUN_1463f8110(void)

longlong FUN_1463f8110(void)

{
  if (DAT_14caf9650 == 0) {
    FUN_14000fc22(&DAT_14caf9650,&PTR_FUN_14aa3cf28);
  }
  return DAT_14caf9650;
}



// FUNCTION 1463f813f FUN_1463f813f body=47 status=ok
// SIG undefined FUN_1463f813f(void)

longlong FUN_1463f813f(void)

{
  if (DAT_14caf9660 == 0) {
    FUN_14000fc22(&DAT_14caf9660,&PTR_FUN_14aa3cff0);
  }
  return DAT_14caf9660;
}



// FUNCTION 1463f816e FUN_1463f816e body=47 status=ok
// SIG undefined FUN_1463f816e(void)

longlong FUN_1463f816e(void)

{
  if (DAT_14caf9670 == 0) {
    FUN_14000fc22(&DAT_14caf9670,&PTR_FUN_14aa3d138);
  }
  return DAT_14caf9670;
}



// FUNCTION 1463f819d FUN_1463f819d body=47 status=ok
// SIG undefined FUN_1463f819d(void)

longlong FUN_1463f819d(void)

{
  if (DAT_14caf9680 == 0) {
    FUN_14000fc22(&DAT_14caf9680,&PTR_FUN_14aa3d278);
  }
  return DAT_14caf9680;
}



// FUNCTION 1463f81cc FUN_1463f81cc body=47 status=ok
// SIG undefined FUN_1463f81cc(void)

longlong FUN_1463f81cc(void)

{
  if (DAT_14caf9690 == 0) {
    FUN_14000fc22(&DAT_14caf9690,&PTR_FUN_14aa3d420);
  }
  return DAT_14caf9690;
}



// FUNCTION 1463f81fb FUN_1463f81fb body=47 status=ok
// SIG undefined FUN_1463f81fb(void)

longlong FUN_1463f81fb(void)

{
  if (DAT_14caf96a0 == 0) {
    FUN_14000fc22(&DAT_14caf96a0,&PTR_FUN_14aa3d590);
  }
  return DAT_14caf96a0;
}



// FUNCTION 1463f822a FUN_1463f822a body=47 status=ok
// SIG undefined FUN_1463f822a(void)

longlong FUN_1463f822a(void)

{
  if (DAT_14caf96b0 == 0) {
    FUN_14000fc22(&DAT_14caf96b0,&PTR_FUN_14aa3d738);
  }
  return DAT_14caf96b0;
}



// FUNCTION 1463f8259 FUN_1463f8259 body=47 status=ok
// SIG undefined FUN_1463f8259(void)

longlong FUN_1463f8259(void)

{
  if (DAT_14caf96c0 == 0) {
    FUN_14000fc22(&DAT_14caf96c0,&PTR_FUN_14aa3d948);
  }
  return DAT_14caf96c0;
}



// FUNCTION 1463f8288 FUN_1463f8288 body=47 status=ok
// SIG undefined FUN_1463f8288(void)

longlong FUN_1463f8288(void)

{
  if (DAT_14caf96d0 == 0) {
    FUN_14000fc22(&DAT_14caf96d0,&PTR_FUN_14aa3dad8);
  }
  return DAT_14caf96d0;
}



// FUNCTION 1463f82b7 FUN_1463f82b7 body=47 status=ok
// SIG undefined FUN_1463f82b7(void)

longlong FUN_1463f82b7(void)

{
  if (DAT_14caf96e0 == 0) {
    FUN_14000fc22(&DAT_14caf96e0,&PTR_FUN_14aa3dc20);
  }
  return DAT_14caf96e0;
}



// FUNCTION 1463f82e6 FUN_1463f82e6 body=47 status=ok
// SIG undefined FUN_1463f82e6(void)

longlong FUN_1463f82e6(void)

{
  if (DAT_14caf96f0 == 0) {
    FUN_14000fc22(&DAT_14caf96f0,&PTR_FUN_14aa3dcd8);
  }
  return DAT_14caf96f0;
}



// FUNCTION 1463f8315 FUN_1463f8315 body=47 status=ok
// SIG undefined FUN_1463f8315(void)

longlong FUN_1463f8315(void)

{
  if (DAT_14caf9700 == 0) {
    FUN_14000fc22(&DAT_14caf9700,&PTR_FUN_14aa3dd40);
  }
  return DAT_14caf9700;
}



// FUNCTION 1463f8344 FUN_1463f8344 body=47 status=ok
// SIG undefined FUN_1463f8344(void)

longlong FUN_1463f8344(void)

{
  if (DAT_14caf9710 == 0) {
    FUN_14000fc22(&DAT_14caf9710,&PTR_FUN_14aa3ddf8);
  }
  return DAT_14caf9710;
}



// FUNCTION 1463f8374 FUN_1463f8374 body=160 status=ok
// SIG undefined FUN_1463f8374(void)

void FUN_1463f8374(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x9b8))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463f8415 FUN_1463f8415 body=47 status=ok
// SIG undefined FUN_1463f8415(void)

longlong FUN_1463f8415(void)

{
  if (DAT_14caf9720 == 0) {
    FUN_14000fc22(&DAT_14caf9720,&PTR_FUN_14aa3ded8);
  }
  return DAT_14caf9720;
}



// FUNCTION 1463f8444 FUN_1463f8444 body=47 status=ok
// SIG undefined FUN_1463f8444(void)

longlong FUN_1463f8444(void)

{
  if (DAT_14caf9730 == 0) {
    FUN_14000fc22(&DAT_14caf9730,&PTR_FUN_14aa3dfd8);
  }
  return DAT_14caf9730;
}



// FUNCTION 1463f8473 FUN_1463f8473 body=47 status=ok
// SIG undefined FUN_1463f8473(void)

longlong FUN_1463f8473(void)

{
  if (DAT_14caf9740 == 0) {
    FUN_14000fc22(&DAT_14caf9740,&PTR_FUN_14aa3e070);
  }
  return DAT_14caf9740;
}



// FUNCTION 1463f84a2 FUN_1463f84a2 body=47 status=ok
// SIG undefined FUN_1463f84a2(void)

longlong FUN_1463f84a2(void)

{
  if (DAT_14caf9750 == 0) {
    FUN_14000fc22(&DAT_14caf9750,&PTR_FUN_14aa3e2b8);
  }
  return DAT_14caf9750;
}



// FUNCTION 1463f84d1 FUN_1463f84d1 body=47 status=ok
// SIG undefined FUN_1463f84d1(void)

longlong FUN_1463f84d1(void)

{
  if (DAT_14caf9760 == 0) {
    FUN_14000fc22(&DAT_14caf9760,&PTR_FUN_14aa3e388);
  }
  return DAT_14caf9760;
}



// FUNCTION 1463f8500 FUN_1463f8500 body=47 status=ok
// SIG undefined FUN_1463f8500(void)

longlong FUN_1463f8500(void)

{
  if (DAT_14caf9770 == 0) {
    FUN_14000fc22(&DAT_14caf9770,&PTR_FUN_14aa3e548);
  }
  return DAT_14caf9770;
}



// FUNCTION 1463f852f FUN_1463f852f body=47 status=ok
// SIG undefined FUN_1463f852f(void)

longlong FUN_1463f852f(void)

{
  if (DAT_14caf9780 == 0) {
    FUN_14000fc22(&DAT_14caf9780,&PTR_FUN_14aa3e6c0);
  }
  return DAT_14caf9780;
}



// FUNCTION 1463f855e FUN_1463f855e body=47 status=ok
// SIG undefined FUN_1463f855e(void)

longlong FUN_1463f855e(void)

{
  if (DAT_14caf9790 == 0) {
    FUN_14000fc22(&DAT_14caf9790,&PTR_FUN_14aa3e788);
  }
  return DAT_14caf9790;
}



// FUNCTION 1463f858d FUN_1463f858d body=47 status=ok
// SIG undefined FUN_1463f858d(void)

longlong FUN_1463f858d(void)

{
  if (DAT_14caf97a0 == 0) {
    FUN_14000fc22(&DAT_14caf97a0,&PTR_FUN_14aa3e870);
  }
  return DAT_14caf97a0;
}



// FUNCTION 1463f85bc FUN_1463f85bc body=47 status=ok
// SIG undefined FUN_1463f85bc(void)

longlong FUN_1463f85bc(void)

{
  if (DAT_14caf97b0 == 0) {
    FUN_14000fc22(&DAT_14caf97b0,&PTR_FUN_14aa3e968);
  }
  return DAT_14caf97b0;
}



// FUNCTION 1463f85eb FUN_1463f85eb body=47 status=ok
// SIG undefined FUN_1463f85eb(void)

longlong FUN_1463f85eb(void)

{
  if (DAT_14caf97c0 == 0) {
    FUN_14000fc22(&DAT_14caf97c0,&PTR_FUN_14aa3ea98);
  }
  return DAT_14caf97c0;
}



// FUNCTION 1463f861a FUN_1463f861a body=47 status=ok
// SIG undefined FUN_1463f861a(void)

longlong FUN_1463f861a(void)

{
  if (DAT_14caf97d0 == 0) {
    FUN_14000fc22(&DAT_14caf97d0,&PTR_FUN_14aa3eb80);
  }
  return DAT_14caf97d0;
}



// FUNCTION 1463f8649 FUN_1463f8649 body=47 status=ok
// SIG undefined FUN_1463f8649(void)

longlong FUN_1463f8649(void)

{
  if (DAT_14caf97e0 == 0) {
    FUN_14000fc22(&DAT_14caf97e0,&PTR_FUN_14aa3ec80);
  }
  return DAT_14caf97e0;
}



// FUNCTION 1463f8678 FUN_1463f8678 body=47 status=ok
// SIG undefined FUN_1463f8678(void)

longlong FUN_1463f8678(void)

{
  if (DAT_14caf97f0 == 0) {
    FUN_14000fc22(&DAT_14caf97f0,&PTR_FUN_14aa3ee70);
  }
  return DAT_14caf97f0;
}



// FUNCTION 1463f86a7 FUN_1463f86a7 body=47 status=ok
// SIG undefined FUN_1463f86a7(void)

longlong FUN_1463f86a7(void)

{
  if (DAT_14caf97f8 == 0) {
    FUN_14000fc22(&DAT_14caf97f8,&PTR_FUN_14aa3ef78);
  }
  return DAT_14caf97f8;
}



// FUNCTION 1463f86d6 FUN_1463f86d6 body=47 status=ok
// SIG undefined FUN_1463f86d6(void)

longlong FUN_1463f86d6(void)

{
  if (DAT_14caf9808 == 0) {
    FUN_14000fc22(&DAT_14caf9808,&PTR_FUN_14aa3f008);
  }
  return DAT_14caf9808;
}



// FUNCTION 1463f8705 FUN_1463f8705 body=47 status=ok
// SIG undefined FUN_1463f8705(void)

longlong FUN_1463f8705(void)

{
  if (DAT_14caf9818 == 0) {
    FUN_14000fc22(&DAT_14caf9818,&PTR_FUN_14aa3f128);
  }
  return DAT_14caf9818;
}



// FUNCTION 1463f8734 FUN_1463f8734 body=47 status=ok
// SIG undefined FUN_1463f8734(void)

longlong FUN_1463f8734(void)

{
  if (DAT_14caf9820 == 0) {
    FUN_14000fc22(&DAT_14caf9820,&PTR_FUN_14aa3f228);
  }
  return DAT_14caf9820;
}



// FUNCTION 1463f8763 FUN_1463f8763 body=47 status=ok
// SIG undefined FUN_1463f8763(void)

longlong FUN_1463f8763(void)

{
  if (DAT_14caf9830 == 0) {
    FUN_14000fc22(&DAT_14caf9830,&PTR_FUN_14aa3f338);
  }
  return DAT_14caf9830;
}



// FUNCTION 1463f8792 FUN_1463f8792 body=47 status=ok
// SIG undefined FUN_1463f8792(void)

longlong FUN_1463f8792(void)

{
  if (DAT_14caf9840 == 0) {
    FUN_14000fc22(&DAT_14caf9840,&PTR_FUN_14aa3f4d8);
  }
  return DAT_14caf9840;
}



// FUNCTION 1463f87c1 FUN_1463f87c1 body=47 status=ok
// SIG undefined FUN_1463f87c1(void)

longlong FUN_1463f87c1(void)

{
  if (DAT_14caf9848 == 0) {
    FUN_14000fc22(&DAT_14caf9848,&PTR_FUN_14aa3f670);
  }
  return DAT_14caf9848;
}



// FUNCTION 1463f87f0 FUN_1463f87f0 body=47 status=ok
// SIG undefined FUN_1463f87f0(void)

longlong FUN_1463f87f0(void)

{
  if (DAT_14caf9858 == 0) {
    FUN_14000fc22(&DAT_14caf9858,&PTR_FUN_14aa3f818);
  }
  return DAT_14caf9858;
}



// FUNCTION 1463f881f FUN_1463f881f body=47 status=ok
// SIG undefined FUN_1463f881f(void)

longlong FUN_1463f881f(void)

{
  if (DAT_14caf9868 == 0) {
    FUN_14000fc22(&DAT_14caf9868,&PTR_FUN_14aa3f8e0);
  }
  return DAT_14caf9868;
}



// FUNCTION 1463f884e FUN_1463f884e body=47 status=ok
// SIG undefined FUN_1463f884e(void)

longlong FUN_1463f884e(void)

{
  if (DAT_14caf9878 == 0) {
    FUN_14000fc22(&DAT_14caf9878,&PTR_FUN_14aa3f9f8);
  }
  return DAT_14caf9878;
}



// FUNCTION 1463f887d FUN_1463f887d body=47 status=ok
// SIG undefined FUN_1463f887d(void)

longlong FUN_1463f887d(void)

{
  if (DAT_14caf9888 == 0) {
    FUN_14000fc22(&DAT_14caf9888,&PTR_FUN_14aa3fc90);
  }
  return DAT_14caf9888;
}



// FUNCTION 1463f88ac FUN_1463f88ac body=47 status=ok
// SIG undefined FUN_1463f88ac(void)

longlong FUN_1463f88ac(void)

{
  if (DAT_14caf9898 == 0) {
    FUN_14000fc22(&DAT_14caf9898,&PTR_FUN_14aa3fdf0);
  }
  return DAT_14caf9898;
}



// FUNCTION 1463f88dc FUN_1463f88dc body=47 status=ok
// SIG undefined FUN_1463f88dc(void)

void FUN_1463f88dc(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14caf98a0);
                    /* WARNING: Could not recover jumptable at 0x0001463f8908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1463f890b FUN_1463f890b body=47 status=ok
// SIG undefined FUN_1463f890b(void)

longlong FUN_1463f890b(void)

{
  if (DAT_14caf98a8 == 0) {
    FUN_14000fc22(&DAT_14caf98a8,&PTR_FUN_14aa3fe88);
  }
  return DAT_14caf98a8;
}



// FUNCTION 1463f893a FUN_1463f893a body=47 status=ok
// SIG undefined FUN_1463f893a(void)

longlong FUN_1463f893a(void)

{
  if (DAT_14caf98b8 == 0) {
    FUN_14000fc22(&DAT_14caf98b8,&PTR_FUN_14aa3ff48);
  }
  return DAT_14caf98b8;
}



// FUNCTION 1463f8969 FUN_1463f8969 body=47 status=ok
// SIG undefined FUN_1463f8969(void)

longlong FUN_1463f8969(void)

{
  if (DAT_14caf98c0 == 0) {
    FUN_14000fc22(&DAT_14caf98c0,&PTR_FUN_14aa3ffe0);
  }
  return DAT_14caf98c0;
}



// FUNCTION 1463f8998 FUN_1463f8998 body=47 status=ok
// SIG undefined FUN_1463f8998(void)

longlong FUN_1463f8998(void)

{
  if (DAT_14caf98c8 == 0) {
    FUN_14000fc22(&DAT_14caf98c8,&PTR_FUN_14aa40118);
  }
  return DAT_14caf98c8;
}



// FUNCTION 1463f89c7 FUN_1463f89c7 body=47 status=ok
// SIG undefined FUN_1463f89c7(void)

longlong FUN_1463f89c7(void)

{
  if (DAT_14caf98d0 == 0) {
    FUN_14000fc22(&DAT_14caf98d0,&PTR_FUN_14aa402d8);
  }
  return DAT_14caf98d0;
}



// FUNCTION 1463f89f6 FUN_1463f89f6 body=47 status=ok
// SIG undefined FUN_1463f89f6(void)

longlong FUN_1463f89f6(void)

{
  if (DAT_14caf98d8 == 0) {
    FUN_14000fc22(&DAT_14caf98d8,&PTR_FUN_14aa40328);
  }
  return DAT_14caf98d8;
}



// FUNCTION 1463f8a25 FUN_1463f8a25 body=47 status=ok
// SIG undefined FUN_1463f8a25(void)

longlong FUN_1463f8a25(void)

{
  if (DAT_14caf98e0 == 0) {
    FUN_14000fc22(&DAT_14caf98e0,&PTR_FUN_14aa403a8);
  }
  return DAT_14caf98e0;
}



// FUNCTION 1463f8a54 FUN_1463f8a54 body=47 status=ok
// SIG undefined FUN_1463f8a54(void)

longlong FUN_1463f8a54(void)

{
  if (DAT_14caf98e8 == 0) {
    FUN_14000fc22(&DAT_14caf98e8,&PTR_FUN_14aa40448);
  }
  return DAT_14caf98e8;
}



// FUNCTION 1463f8a83 FUN_1463f8a83 body=47 status=ok
// SIG undefined FUN_1463f8a83(void)

longlong FUN_1463f8a83(void)

{
  if (DAT_14caf98f0 == 0) {
    FUN_14000fc22(&DAT_14caf98f0,&PTR_FUN_14aa404e8);
  }
  return DAT_14caf98f0;
}



// FUNCTION 1463f8ab2 FUN_1463f8ab2 body=47 status=ok
// SIG undefined FUN_1463f8ab2(void)

longlong FUN_1463f8ab2(void)

{
  if (DAT_14caf98f8 == 0) {
    FUN_14000fc22(&DAT_14caf98f8,&PTR_FUN_14aa40588);
  }
  return DAT_14caf98f8;
}



// FUNCTION 1463f8ae1 FUN_1463f8ae1 body=47 status=ok
// SIG undefined FUN_1463f8ae1(void)

longlong FUN_1463f8ae1(void)

{
  if (DAT_14caf9900 == 0) {
    FUN_14000fc22(&DAT_14caf9900,&PTR_FUN_14aa40628);
  }
  return DAT_14caf9900;
}



// FUNCTION 1463f8b10 FUN_1463f8b10 body=47 status=ok
// SIG undefined FUN_1463f8b10(void)

longlong FUN_1463f8b10(void)

{
  if (DAT_14caf9908 == 0) {
    FUN_14000fc22(&DAT_14caf9908,&PTR_FUN_14aa407a8);
  }
  return DAT_14caf9908;
}



// FUNCTION 1463f8b3f FUN_1463f8b3f body=47 status=ok
// SIG undefined FUN_1463f8b3f(void)

longlong FUN_1463f8b3f(void)

{
  if (DAT_14caf9910 == 0) {
    FUN_14000fc22(&DAT_14caf9910,&PTR_FUN_14aa40938);
  }
  return DAT_14caf9910;
}



// FUNCTION 1463f8b6e FUN_1463f8b6e body=47 status=ok
// SIG undefined FUN_1463f8b6e(void)

longlong FUN_1463f8b6e(void)

{
  if (DAT_14caf9918 == 0) {
    FUN_14000fc22(&DAT_14caf9918,&PTR_FUN_14aa40b00);
  }
  return DAT_14caf9918;
}



// FUNCTION 1463f8b9d FUN_1463f8b9d body=47 status=ok
// SIG undefined FUN_1463f8b9d(void)

longlong FUN_1463f8b9d(void)

{
  if (DAT_14caf9920 == 0) {
    FUN_14000fc22(&DAT_14caf9920,&PTR_FUN_14aa40cc0);
  }
  return DAT_14caf9920;
}



// FUNCTION 1463f8bcc FUN_1463f8bcc body=47 status=ok
// SIG undefined FUN_1463f8bcc(void)

longlong FUN_1463f8bcc(void)

{
  if (DAT_14caf9928 == 0) {
    FUN_14000fc22(&DAT_14caf9928,&PTR_FUN_14aa40e90);
  }
  return DAT_14caf9928;
}



// FUNCTION 1463f8bfb FUN_1463f8bfb body=47 status=ok
// SIG undefined FUN_1463f8bfb(void)

longlong FUN_1463f8bfb(void)

{
  if (DAT_14caf9930 == 0) {
    FUN_14000fc22(&DAT_14caf9930,&PTR_FUN_14aa410a8);
  }
  return DAT_14caf9930;
}



// FUNCTION 1463f8c2a FUN_1463f8c2a body=47 status=ok
// SIG undefined FUN_1463f8c2a(void)

longlong FUN_1463f8c2a(void)

{
  if (DAT_14caf9938 == 0) {
    FUN_14000fc22(&DAT_14caf9938,&PTR_FUN_14aa41138);
  }
  return DAT_14caf9938;
}



// FUNCTION 1463f8c59 FUN_1463f8c59 body=47 status=ok
// SIG undefined FUN_1463f8c59(void)

longlong FUN_1463f8c59(void)

{
  if (DAT_14caf9940 == 0) {
    FUN_14000fc22(&DAT_14caf9940,&PTR_FUN_14aa41218);
  }
  return DAT_14caf9940;
}



// FUNCTION 1463f8c88 FUN_1463f8c88 body=47 status=ok
// SIG undefined FUN_1463f8c88(void)

longlong FUN_1463f8c88(void)

{
  if (DAT_14caf9948 == 0) {
    FUN_14000fc22(&DAT_14caf9948,&PTR_FUN_14aa41348);
  }
  return DAT_14caf9948;
}



// FUNCTION 1463f8cb7 FUN_1463f8cb7 body=47 status=ok
// SIG undefined FUN_1463f8cb7(void)

longlong FUN_1463f8cb7(void)

{
  if (DAT_14caf9950 == 0) {
    FUN_14000fc22(&DAT_14caf9950,&PTR_FUN_14aa41428);
  }
  return DAT_14caf9950;
}



// FUNCTION 1463f8ce6 FUN_1463f8ce6 body=47 status=ok
// SIG undefined FUN_1463f8ce6(void)

longlong FUN_1463f8ce6(void)

{
  if (DAT_14caf9958 == 0) {
    FUN_14000fc22(&DAT_14caf9958,&PTR_FUN_14aa415a8);
  }
  return DAT_14caf9958;
}



// FUNCTION 1463f8d15 FUN_1463f8d15 body=47 status=ok
// SIG undefined FUN_1463f8d15(void)

longlong FUN_1463f8d15(void)

{
  if (DAT_14caf9960 == 0) {
    FUN_14000fc22(&DAT_14caf9960,&PTR_FUN_14aa41688);
  }
  return DAT_14caf9960;
}



// FUNCTION 1463f8d44 FUN_1463f8d44 body=47 status=ok
// SIG undefined FUN_1463f8d44(void)

longlong FUN_1463f8d44(void)

{
  if (DAT_14caf9968 == 0) {
    FUN_14000fc22(&DAT_14caf9968,&PTR_FUN_14aa417f8);
  }
  return DAT_14caf9968;
}



// FUNCTION 1463f8d73 FUN_1463f8d73 body=47 status=ok
// SIG undefined FUN_1463f8d73(void)

longlong FUN_1463f8d73(void)

{
  if (DAT_14caf9970 == 0) {
    FUN_14000fc22(&DAT_14caf9970,&PTR_FUN_14aa418e8);
  }
  return DAT_14caf9970;
}



// FUNCTION 1463f8da2 FUN_1463f8da2 body=47 status=ok
// SIG undefined FUN_1463f8da2(void)

longlong FUN_1463f8da2(void)

{
  if (DAT_14caf9978 == 0) {
    FUN_14000fc22(&DAT_14caf9978,&PTR_FUN_14aa41a10);
  }
  return DAT_14caf9978;
}



// FUNCTION 1463f8dd1 FUN_1463f8dd1 body=47 status=ok
// SIG undefined FUN_1463f8dd1(void)

longlong FUN_1463f8dd1(void)

{
  if (DAT_14caf9980 == 0) {
    FUN_14000fc22(&DAT_14caf9980,&PTR_FUN_14aa41ac0);
  }
  return DAT_14caf9980;
}



// FUNCTION 1463f8e00 FUN_1463f8e00 body=47 status=ok
// SIG undefined FUN_1463f8e00(void)

longlong FUN_1463f8e00(void)

{
  if (DAT_14caf9988 == 0) {
    FUN_14000fc22(&DAT_14caf9988,&PTR_FUN_14aa41b48);
  }
  return DAT_14caf9988;
}



// FUNCTION 1463f8e2f FUN_1463f8e2f body=47 status=ok
// SIG undefined FUN_1463f8e2f(void)

longlong FUN_1463f8e2f(void)

{
  if (DAT_14caf9990 == 0) {
    FUN_14000fc22(&DAT_14caf9990,&PTR_FUN_14aa41be8);
  }
  return DAT_14caf9990;
}



// FUNCTION 1463f8e5e FUN_1463f8e5e body=47 status=ok
// SIG undefined FUN_1463f8e5e(void)

longlong FUN_1463f8e5e(void)

{
  if (DAT_14caf9998 == 0) {
    FUN_14000fc22(&DAT_14caf9998,&PTR_FUN_14aa41ce8);
  }
  return DAT_14caf9998;
}



// FUNCTION 1463f8e8d FUN_1463f8e8d body=47 status=ok
// SIG undefined FUN_1463f8e8d(void)

longlong FUN_1463f8e8d(void)

{
  if (DAT_14caf99a0 == 0) {
    FUN_14000fc22(&DAT_14caf99a0,&PTR_FUN_14aa41de0);
  }
  return DAT_14caf99a0;
}



// FUNCTION 1463f8ebc FUN_1463f8ebc body=47 status=ok
// SIG undefined FUN_1463f8ebc(void)

longlong FUN_1463f8ebc(void)

{
  if (DAT_14caf99a8 == 0) {
    FUN_14000fc22(&DAT_14caf99a8,&PTR_FUN_14aa41ee0);
  }
  return DAT_14caf99a8;
}



// FUNCTION 1463f8eeb FUN_1463f8eeb body=47 status=ok
// SIG undefined FUN_1463f8eeb(void)

longlong FUN_1463f8eeb(void)

{
  if (DAT_14caf99b0 == 0) {
    FUN_14000fc22(&DAT_14caf99b0,&PTR_FUN_14aa41fa0);
  }
  return DAT_14caf99b0;
}



// FUNCTION 1463f8f1a FUN_1463f8f1a body=47 status=ok
// SIG undefined FUN_1463f8f1a(void)

longlong FUN_1463f8f1a(void)

{
  if (DAT_14caf99b8 == 0) {
    FUN_14000fc22(&DAT_14caf99b8,&PTR_FUN_14aa42080);
  }
  return DAT_14caf99b8;
}



// FUNCTION 1463f8f49 FUN_1463f8f49 body=47 status=ok
// SIG undefined FUN_1463f8f49(void)

longlong FUN_1463f8f49(void)

{
  if (DAT_14caf99c0 == 0) {
    FUN_14000fc22(&DAT_14caf99c0,&PTR_FUN_14aa42108);
  }
  return DAT_14caf99c0;
}



// FUNCTION 1463f8f78 FUN_1463f8f78 body=47 status=ok
// SIG undefined FUN_1463f8f78(void)

longlong FUN_1463f8f78(void)

{
  if (DAT_14caf99c8 == 0) {
    FUN_14000fc22(&DAT_14caf99c8,&PTR_FUN_14aa422c8);
  }
  return DAT_14caf99c8;
}



// FUNCTION 1463f8fa7 FUN_1463f8fa7 body=47 status=ok
// SIG undefined FUN_1463f8fa7(void)

longlong FUN_1463f8fa7(void)

{
  if (DAT_14caf99d0 == 0) {
    FUN_14000fc22(&DAT_14caf99d0,&PTR_FUN_14aa42358);
  }
  return DAT_14caf99d0;
}



// FUNCTION 1463f8fd6 FUN_1463f8fd6 body=47 status=ok
// SIG undefined FUN_1463f8fd6(void)

longlong FUN_1463f8fd6(void)

{
  if (DAT_14caf99e0 == 0) {
    FUN_14000fc22(&DAT_14caf99e0,&PTR_FUN_14aa42448);
  }
  return DAT_14caf99e0;
}



// FUNCTION 1463f9005 FUN_1463f9005 body=47 status=ok
// SIG undefined FUN_1463f9005(void)

longlong FUN_1463f9005(void)

{
  if (DAT_14caf99e8 == 0) {
    FUN_14000fc22(&DAT_14caf99e8,&PTR_FUN_14aa42488);
  }
  return DAT_14caf99e8;
}



// FUNCTION 1463f9034 FUN_1463f9034 body=47 status=ok
// SIG undefined FUN_1463f9034(void)

longlong FUN_1463f9034(void)

{
  if (DAT_14caf99f0 == 0) {
    FUN_14000fc22(&DAT_14caf99f0,&PTR_FUN_14aa42720);
  }
  return DAT_14caf99f0;
}



// FUNCTION 1463f9063 FUN_1463f9063 body=47 status=ok
// SIG undefined FUN_1463f9063(void)

longlong FUN_1463f9063(void)

{
  if (DAT_14caf99f8 == 0) {
    FUN_14000fc22(&DAT_14caf99f8,&PTR_FUN_14aa428e0);
  }
  return DAT_14caf99f8;
}



// FUNCTION 1463f9092 FUN_1463f9092 body=47 status=ok
// SIG undefined FUN_1463f9092(void)

longlong FUN_1463f9092(void)

{
  if (DAT_14caf9a00 == 0) {
    FUN_14000fc22(&DAT_14caf9a00,&PTR_FUN_14aa42a70);
  }
  return DAT_14caf9a00;
}



// FUNCTION 1463f90c1 FUN_1463f90c1 body=47 status=ok
// SIG undefined FUN_1463f90c1(void)

longlong FUN_1463f90c1(void)

{
  if (DAT_14caf9a08 == 0) {
    FUN_14000fc22(&DAT_14caf9a08,&PTR_FUN_14aa42ad0);
  }
  return DAT_14caf9a08;
}



// FUNCTION 1463f90f0 FUN_1463f90f0 body=47 status=ok
// SIG undefined FUN_1463f90f0(void)

longlong FUN_1463f90f0(void)

{
  if (DAT_14caf9a10 == 0) {
    FUN_14000fc22(&DAT_14caf9a10,&PTR_FUN_14aa42b30);
  }
  return DAT_14caf9a10;
}



// FUNCTION 1463f911f FUN_1463f911f body=47 status=ok
// SIG undefined FUN_1463f911f(void)

longlong FUN_1463f911f(void)

{
  if (DAT_14caf9a18 == 0) {
    FUN_14000fc22(&DAT_14caf9a18,&PTR_FUN_14aa42b80);
  }
  return DAT_14caf9a18;
}



// FUNCTION 1463f914e FUN_1463f914e body=47 status=ok
// SIG undefined FUN_1463f914e(void)

longlong FUN_1463f914e(void)

{
  if (DAT_14caf9a20 == 0) {
    FUN_14000fc22(&DAT_14caf9a20,&PTR_FUN_14aa42c10);
  }
  return DAT_14caf9a20;
}



// FUNCTION 1463f917d FUN_1463f917d body=47 status=ok
// SIG undefined FUN_1463f917d(void)

longlong FUN_1463f917d(void)

{
  if (DAT_14caf9a30 == 0) {
    FUN_14000fc22(&DAT_14caf9a30,&PTR_FUN_14aa42cf0);
  }
  return DAT_14caf9a30;
}



// FUNCTION 1463f91ac FUN_1463f91ac body=47 status=ok
// SIG undefined FUN_1463f91ac(void)

longlong FUN_1463f91ac(void)

{
  if (DAT_14caf9a40 == 0) {
    FUN_14000fc22(&DAT_14caf9a40,&PTR_FUN_14aa42e00);
  }
  return DAT_14caf9a40;
}



// FUNCTION 1463f91db FUN_1463f91db body=47 status=ok
// SIG undefined FUN_1463f91db(void)

longlong FUN_1463f91db(void)

{
  if (DAT_14caf9a50 == 0) {
    FUN_14000fc22(&DAT_14caf9a50,&PTR_FUN_14aa42ee0);
  }
  return DAT_14caf9a50;
}



// FUNCTION 1463f920a FUN_1463f920a body=47 status=ok
// SIG undefined FUN_1463f920a(void)

longlong FUN_1463f920a(void)

{
  if (DAT_14caf9a60 == 0) {
    FUN_14000fc22(&DAT_14caf9a60,&PTR_FUN_14aa42fc8);
  }
  return DAT_14caf9a60;
}



// FUNCTION 1463f9239 FUN_1463f9239 body=47 status=ok
// SIG undefined FUN_1463f9239(void)

longlong FUN_1463f9239(void)

{
  if (DAT_14caf9a70 == 0) {
    FUN_14000fc22(&DAT_14caf9a70,&PTR_FUN_14aa43090);
  }
  return DAT_14caf9a70;
}



// FUNCTION 1463f9268 FUN_1463f9268 body=47 status=ok
// SIG undefined FUN_1463f9268(void)

longlong FUN_1463f9268(void)

{
  if (DAT_14caf9a80 == 0) {
    FUN_14000fc22(&DAT_14caf9a80,&PTR_FUN_14aa43188);
  }
  return DAT_14caf9a80;
}



// FUNCTION 1463f9297 FUN_1463f9297 body=47 status=ok
// SIG undefined FUN_1463f9297(void)

longlong FUN_1463f9297(void)

{
  if (DAT_14caf9a90 == 0) {
    FUN_14000fc22(&DAT_14caf9a90,&PTR_FUN_14aa43250);
  }
  return DAT_14caf9a90;
}



// FUNCTION 1463f92c6 FUN_1463f92c6 body=47 status=ok
// SIG undefined FUN_1463f92c6(void)

longlong FUN_1463f92c6(void)

{
  if (DAT_14caf9a98 == 0) {
    FUN_14000fc22(&DAT_14caf9a98,&PTR_FUN_14aa43310);
  }
  return DAT_14caf9a98;
}



// FUNCTION 1463f92f5 FUN_1463f92f5 body=47 status=ok
// SIG undefined FUN_1463f92f5(void)

longlong FUN_1463f92f5(void)

{
  if (DAT_14caf9aa8 == 0) {
    FUN_14000fc22(&DAT_14caf9aa8,&PTR_FUN_14aa433c0);
  }
  return DAT_14caf9aa8;
}



// FUNCTION 1463f9324 FUN_1463f9324 body=47 status=ok
// SIG undefined FUN_1463f9324(void)

longlong FUN_1463f9324(void)

{
  if (DAT_14caf9ab8 == 0) {
    FUN_14000fc22(&DAT_14caf9ab8,&PTR_FUN_14aa434c8);
  }
  return DAT_14caf9ab8;
}



// FUNCTION 1463f9353 FUN_1463f9353 body=47 status=ok
// SIG undefined FUN_1463f9353(void)

longlong FUN_1463f9353(void)

{
  if (DAT_14caf9ac8 == 0) {
    FUN_14000fc22(&DAT_14caf9ac8,&PTR_FUN_14aa435d0);
  }
  return DAT_14caf9ac8;
}



// FUNCTION 1463f9382 FUN_1463f9382 body=92 status=ok
// SIG undefined FUN_1463f9382(void)

void FUN_1463f9382(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14caf9ad0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463f93df FUN_1463f93df body=47 status=ok
// SIG undefined FUN_1463f93df(void)

longlong FUN_1463f93df(void)

{
  if (DAT_14caf9ad8 == 0) {
    FUN_14000fc22(&DAT_14caf9ad8,&PTR_FUN_14aa436e0);
  }
  return DAT_14caf9ad8;
}



// FUNCTION 1463f940e FUN_1463f940e body=47 status=ok
// SIG undefined FUN_1463f940e(void)

longlong FUN_1463f940e(void)

{
  if (DAT_14caf9ae8 == 0) {
    FUN_14000fc22(&DAT_14caf9ae8,&PTR_FUN_14aa43788);
  }
  return DAT_14caf9ae8;
}



// FUNCTION 1463f943d FUN_1463f943d body=47 status=ok
// SIG undefined FUN_1463f943d(void)

longlong FUN_1463f943d(void)

{
  if (DAT_14caf9af8 == 0) {
    FUN_14000fc22(&DAT_14caf9af8,&PTR_FUN_14aa43928);
  }
  return DAT_14caf9af8;
}



// FUNCTION 1463f946c FUN_1463f946c body=47 status=ok
// SIG undefined FUN_1463f946c(void)

longlong FUN_1463f946c(void)

{
  if (DAT_14caf9b08 == 0) {
    FUN_14000fc22(&DAT_14caf9b08,&PTR_FUN_14aa439a8);
  }
  return DAT_14caf9b08;
}



// FUNCTION 1463f949b FUN_1463f949b body=47 status=ok
// SIG undefined FUN_1463f949b(void)

longlong FUN_1463f949b(void)

{
  if (DAT_14caf9b18 == 0) {
    FUN_14000fc22(&DAT_14caf9b18,&PTR_FUN_14aa43b48);
  }
  return DAT_14caf9b18;
}



// FUNCTION 1463f94ca FUN_1463f94ca body=47 status=ok
// SIG undefined FUN_1463f94ca(void)

longlong FUN_1463f94ca(void)

{
  if (DAT_14caf9b28 == 0) {
    FUN_14000fc22(&DAT_14caf9b28,&PTR_FUN_14aa43ca0);
  }
  return DAT_14caf9b28;
}



// FUNCTION 1463f94f9 FUN_1463f94f9 body=47 status=ok
// SIG undefined FUN_1463f94f9(void)

longlong FUN_1463f94f9(void)

{
  if (DAT_14caf9b38 == 0) {
    FUN_14000fc22(&DAT_14caf9b38,&PTR_FUN_14aa43dd0);
  }
  return DAT_14caf9b38;
}



// FUNCTION 1463f9528 FUN_1463f9528 body=47 status=ok
// SIG undefined FUN_1463f9528(void)

longlong FUN_1463f9528(void)

{
  if (DAT_14caf9b48 == 0) {
    FUN_14000fc22(&DAT_14caf9b48,&PTR_FUN_14aa43ef8);
  }
  return DAT_14caf9b48;
}



// FUNCTION 1463f9557 FUN_1463f9557 body=47 status=ok
// SIG undefined FUN_1463f9557(void)

longlong FUN_1463f9557(void)

{
  if (DAT_14caf9b58 == 0) {
    FUN_14000fc22(&DAT_14caf9b58,&PTR_FUN_14aa43fb8);
  }
  return DAT_14caf9b58;
}



// FUNCTION 1463f9586 FUN_1463f9586 body=47 status=ok
// SIG undefined FUN_1463f9586(void)

longlong FUN_1463f9586(void)

{
  if (DAT_14caf9b68 == 0) {
    FUN_14000fc22(&DAT_14caf9b68,&PTR_FUN_14aa44030);
  }
  return DAT_14caf9b68;
}



// FUNCTION 1463f95b5 FUN_1463f95b5 body=47 status=ok
// SIG undefined FUN_1463f95b5(void)

longlong FUN_1463f95b5(void)

{
  if (DAT_14caf9b78 == 0) {
    FUN_14000fc22(&DAT_14caf9b78,&PTR_FUN_14aa440f8);
  }
  return DAT_14caf9b78;
}



// FUNCTION 1463f95e4 FUN_1463f95e4 body=47 status=ok
// SIG undefined FUN_1463f95e4(void)

longlong FUN_1463f95e4(void)

{
  if (DAT_14caf9b88 == 0) {
    FUN_14000fc22(&DAT_14caf9b88,&PTR_FUN_14aa441f8);
  }
  return DAT_14caf9b88;
}



// FUNCTION 1463f9613 FUN_1463f9613 body=47 status=ok
// SIG undefined FUN_1463f9613(void)

longlong FUN_1463f9613(void)

{
  if (DAT_14caf9b98 == 0) {
    FUN_14000fc22(&DAT_14caf9b98,&PTR_FUN_14aa44318);
  }
  return DAT_14caf9b98;
}



// FUNCTION 1463f9642 FUN_1463f9642 body=47 status=ok
// SIG undefined FUN_1463f9642(void)

longlong FUN_1463f9642(void)

{
  if (DAT_14caf9ba8 == 0) {
    FUN_14000fc22(&DAT_14caf9ba8,&PTR_FUN_14aa44440);
  }
  return DAT_14caf9ba8;
}



// FUNCTION 1463f9671 FUN_1463f9671 body=47 status=ok
// SIG undefined FUN_1463f9671(void)

longlong FUN_1463f9671(void)

{
  if (DAT_14caf9bb8 == 0) {
    FUN_14000fc22(&DAT_14caf9bb8,&PTR_FUN_14aa445d8);
  }
  return DAT_14caf9bb8;
}



// FUNCTION 1463f96a0 FUN_1463f96a0 body=47 status=ok
// SIG undefined FUN_1463f96a0(void)

longlong FUN_1463f96a0(void)

{
  if (DAT_14caf9bc8 == 0) {
    FUN_14000fc22(&DAT_14caf9bc8,&PTR_FUN_14aa446c0);
  }
  return DAT_14caf9bc8;
}



// FUNCTION 1463f96cf FUN_1463f96cf body=47 status=ok
// SIG undefined FUN_1463f96cf(void)

longlong FUN_1463f96cf(void)

{
  if (DAT_14caf9bd8 == 0) {
    FUN_14000fc22(&DAT_14caf9bd8,&PTR_FUN_14aa44780);
  }
  return DAT_14caf9bd8;
}



// FUNCTION 1463f96fe FUN_1463f96fe body=47 status=ok
// SIG undefined FUN_1463f96fe(void)

longlong FUN_1463f96fe(void)

{
  if (DAT_14caf9be8 == 0) {
    FUN_14000fc22(&DAT_14caf9be8,&PTR_FUN_14aa44840);
  }
  return DAT_14caf9be8;
}



// FUNCTION 1463f972d FUN_1463f972d body=47 status=ok
// SIG undefined FUN_1463f972d(void)

longlong FUN_1463f972d(void)

{
  if (DAT_14caf9bf8 == 0) {
    FUN_14000fc22(&DAT_14caf9bf8,&PTR_FUN_14aa44938);
  }
  return DAT_14caf9bf8;
}



// FUNCTION 1463f975c FUN_1463f975c body=47 status=ok
// SIG undefined FUN_1463f975c(void)

longlong FUN_1463f975c(void)

{
  if (DAT_14caf9c00 == 0) {
    FUN_14000fc22(&DAT_14caf9c00,&PTR_FUN_14aa44a88);
  }
  return DAT_14caf9c00;
}



// FUNCTION 1463f978b FUN_1463f978b body=47 status=ok
// SIG undefined FUN_1463f978b(void)

longlong FUN_1463f978b(void)

{
  if (DAT_14caf9c08 == 0) {
    FUN_14000fc22(&DAT_14caf9c08,&PTR_FUN_14aa44bc8);
  }
  return DAT_14caf9c08;
}



// FUNCTION 1463f97ba FUN_1463f97ba body=47 status=ok
// SIG undefined FUN_1463f97ba(void)

longlong FUN_1463f97ba(void)

{
  if (DAT_14caf9c10 == 0) {
    FUN_14000fc22(&DAT_14caf9c10,&PTR_FUN_14aa44d78);
  }
  return DAT_14caf9c10;
}



// FUNCTION 1463f97e9 FUN_1463f97e9 body=47 status=ok
// SIG undefined FUN_1463f97e9(void)

longlong FUN_1463f97e9(void)

{
  if (DAT_14caf9c18 == 0) {
    FUN_14000fc22(&DAT_14caf9c18,&PTR_FUN_14aa44e78);
  }
  return DAT_14caf9c18;
}



// FUNCTION 1463f9818 FUN_1463f9818 body=47 status=ok
// SIG undefined FUN_1463f9818(void)

longlong FUN_1463f9818(void)

{
  if (DAT_14caf9c20 == 0) {
    FUN_14000fc22(&DAT_14caf9c20,&PTR_FUN_14aa44f18);
  }
  return DAT_14caf9c20;
}



// FUNCTION 1463f9847 FUN_1463f9847 body=47 status=ok
// SIG undefined FUN_1463f9847(void)

longlong FUN_1463f9847(void)

{
  if (DAT_14caf9c28 == 0) {
    FUN_14000fc22(&DAT_14caf9c28,&PTR_FUN_14aa44fb8);
  }
  return DAT_14caf9c28;
}



// FUNCTION 1463f9876 FUN_1463f9876 body=47 status=ok
// SIG undefined FUN_1463f9876(void)

longlong FUN_1463f9876(void)

{
  if (DAT_14caf9c30 == 0) {
    FUN_14000fc22(&DAT_14caf9c30,&PTR_FUN_14aa45058);
  }
  return DAT_14caf9c30;
}



// FUNCTION 1463f98a5 FUN_1463f98a5 body=47 status=ok
// SIG undefined FUN_1463f98a5(void)

longlong FUN_1463f98a5(void)

{
  if (DAT_14caf9c38 == 0) {
    FUN_14000fc22(&DAT_14caf9c38,&PTR_FUN_14aa450f8);
  }
  return DAT_14caf9c38;
}



// FUNCTION 1463f98d4 FUN_1463f98d4 body=47 status=ok
// SIG undefined FUN_1463f98d4(void)

longlong FUN_1463f98d4(void)

{
  if (DAT_14caf9c40 == 0) {
    FUN_14000fc22(&DAT_14caf9c40,&PTR_FUN_14aa451a8);
  }
  return DAT_14caf9c40;
}



// FUNCTION 1463f9903 FUN_1463f9903 body=47 status=ok
// SIG undefined FUN_1463f9903(void)

longlong FUN_1463f9903(void)

{
  if (DAT_14caf9c48 == 0) {
    FUN_14000fc22(&DAT_14caf9c48,&PTR_FUN_14aa45318);
  }
  return DAT_14caf9c48;
}



// FUNCTION 1463f9932 FUN_1463f9932 body=47 status=ok
// SIG undefined FUN_1463f9932(void)

longlong FUN_1463f9932(void)

{
  if (DAT_14caf9c50 == 0) {
    FUN_14000fc22(&DAT_14caf9c50,&PTR_FUN_14aa453c0);
  }
  return DAT_14caf9c50;
}



// FUNCTION 1463f9961 FUN_1463f9961 body=47 status=ok
// SIG undefined FUN_1463f9961(void)

longlong FUN_1463f9961(void)

{
  if (DAT_14caf9c58 == 0) {
    FUN_14000fc22(&DAT_14caf9c58,&PTR_FUN_14aa454b8);
  }
  return DAT_14caf9c58;
}



// FUNCTION 1463f9990 FUN_1463f9990 body=47 status=ok
// SIG undefined FUN_1463f9990(void)

longlong FUN_1463f9990(void)

{
  if (DAT_14caf9c60 == 0) {
    FUN_14000fc22(&DAT_14caf9c60,&PTR_FUN_14aa45598);
  }
  return DAT_14caf9c60;
}



// FUNCTION 1463f99bf FUN_1463f99bf body=47 status=ok
// SIG undefined FUN_1463f99bf(void)

longlong FUN_1463f99bf(void)

{
  if (DAT_14caf9c68 == 0) {
    FUN_14000fc22(&DAT_14caf9c68,&PTR_FUN_14aa45620);
  }
  return DAT_14caf9c68;
}



// FUNCTION 1463f99ee FUN_1463f99ee body=47 status=ok
// SIG undefined FUN_1463f99ee(void)

longlong FUN_1463f99ee(void)

{
  if (DAT_14caf9c70 == 0) {
    FUN_14000fc22(&DAT_14caf9c70,&PTR_FUN_14aa456e8);
  }
  return DAT_14caf9c70;
}



// FUNCTION 1463f9a1d FUN_1463f9a1d body=47 status=ok
// SIG undefined FUN_1463f9a1d(void)

longlong FUN_1463f9a1d(void)

{
  if (DAT_14caf9c78 == 0) {
    FUN_14000fc22(&DAT_14caf9c78,&PTR_FUN_14aa458c0);
  }
  return DAT_14caf9c78;
}



// FUNCTION 1463f9a4c FUN_1463f9a4c body=47 status=ok
// SIG undefined FUN_1463f9a4c(void)

longlong FUN_1463f9a4c(void)

{
  if (DAT_14caf9c80 == 0) {
    FUN_14000fc22(&DAT_14caf9c80,&PTR_FUN_14aa45968);
  }
  return DAT_14caf9c80;
}



// FUNCTION 1463f9a7b FUN_1463f9a7b body=47 status=ok
// SIG undefined FUN_1463f9a7b(void)

longlong FUN_1463f9a7b(void)

{
  if (DAT_14caf9c88 == 0) {
    FUN_14000fc22(&DAT_14caf9c88,&PTR_FUN_14aa45a10);
  }
  return DAT_14caf9c88;
}



// FUNCTION 1463f9aaa FUN_1463f9aaa body=47 status=ok
// SIG undefined FUN_1463f9aaa(void)

longlong FUN_1463f9aaa(void)

{
  if (DAT_14caf9c90 == 0) {
    FUN_14000fc22(&DAT_14caf9c90,&PTR_FUN_14aa45af8);
  }
  return DAT_14caf9c90;
}



// FUNCTION 1463f9ad9 FUN_1463f9ad9 body=47 status=ok
// SIG undefined FUN_1463f9ad9(void)

longlong FUN_1463f9ad9(void)

{
  if (DAT_14caf9c98 == 0) {
    FUN_14000fc22(&DAT_14caf9c98,&PTR_FUN_14aa45ba0);
  }
  return DAT_14caf9c98;
}



// FUNCTION 1463f9b08 FUN_1463f9b08 body=47 status=ok
// SIG undefined FUN_1463f9b08(void)

longlong FUN_1463f9b08(void)

{
  if (DAT_14caf9ca0 == 0) {
    FUN_14000fc22(&DAT_14caf9ca0,&PTR_FUN_14aa45c58);
  }
  return DAT_14caf9ca0;
}



// FUNCTION 1463f9b37 FUN_1463f9b37 body=47 status=ok
// SIG undefined FUN_1463f9b37(void)

longlong FUN_1463f9b37(void)

{
  if (DAT_14caf9ca8 == 0) {
    FUN_14000fc22(&DAT_14caf9ca8,&PTR_FUN_14aa45ce8);
  }
  return DAT_14caf9ca8;
}



// FUNCTION 1463f9b66 FUN_1463f9b66 body=47 status=ok
// SIG undefined FUN_1463f9b66(void)

longlong FUN_1463f9b66(void)

{
  if (DAT_14caf9cb0 == 0) {
    FUN_14000fc22(&DAT_14caf9cb0,&PTR_FUN_14aa45dd0);
  }
  return DAT_14caf9cb0;
}



// FUNCTION 1463f9b95 FUN_1463f9b95 body=47 status=ok
// SIG undefined FUN_1463f9b95(void)

longlong FUN_1463f9b95(void)

{
  if (DAT_14caf9cb8 == 0) {
    FUN_14000fc22(&DAT_14caf9cb8,&PTR_FUN_14aa45e78);
  }
  return DAT_14caf9cb8;
}



// FUNCTION 1463f9bc4 FUN_1463f9bc4 body=47 status=ok
// SIG undefined FUN_1463f9bc4(void)

longlong FUN_1463f9bc4(void)

{
  if (DAT_14caf9cc0 == 0) {
    FUN_14000fc22(&DAT_14caf9cc0,&PTR_FUN_14aa45f68);
  }
  return DAT_14caf9cc0;
}



// FUNCTION 1463f9bf3 FUN_1463f9bf3 body=47 status=ok
// SIG undefined FUN_1463f9bf3(void)

longlong FUN_1463f9bf3(void)

{
  if (DAT_14caf9cc8 == 0) {
    FUN_14000fc22(&DAT_14caf9cc8,&PTR_FUN_14aa46058);
  }
  return DAT_14caf9cc8;
}



// FUNCTION 1463f9c22 FUN_1463f9c22 body=34 status=ok
// SIG undefined FUN_1463f9c22(void)

void FUN_1463f9c22(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a75eb4();
  FUN_14069c8d6(uVar1,&PTR_s_ActivateTouchInterface_14aa460a0,0xa5);
  return;
}



// FUNCTION 1463f9c50 FUN_1463f9c50 body=196 status=ok
// SIG undefined FUN_1463f9c50(void)

void FUN_1463f9c50(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf9cf0) {
    FUN_144b3d300(&DAT_14caf9cf0);
    if (DAT_14caf9cf0 == -1) {
      FUN_1446f470e(&DAT_14caf9ce8,L"TargetViewRotation",1);
      _Init_thread_footer(&DAT_14caf9cf0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf9cfc) {
    FUN_144b3d300(&DAT_14caf9cfc);
    if (DAT_14caf9cfc == -1) {
      FUN_1446f470e(&DAT_14caf9cf4,L"SpawnLocation",1);
      _Init_thread_footer(&DAT_14caf9cfc);
      return;
    }
  }
  return;
}



// FUNCTION 1463f9d14 FUN_1463f9d14 body=192 status=ok
// SIG undefined FUN_1463f9d14(void)

undefined8 FUN_1463f9d14(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar3 = FUN_140496b24();
    plVar1 = *(longlong **)(param_1 + 0x430);
    if (plVar1 != (longlong *)0x0) {
      uVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = plVar1[2], lVar2 == 0)) goto LAB_1463f9d73;
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        FUN_1459b235e(local_48,0x42);
        (**(code **)(*plVar1 + 0x328))(plVar1,local_48);
        if (local_20 != 0) {
          (**(code **)(local_20 + -0x10))(local_20 + -0x10);
        }
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        uVar4 = 1;
        goto LAB_1463f9d73;
      }
    }
  }
  uVar4 = 0;
LAB_1463f9d73:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463f9dd6 FUN_1463f9dd6 body=223 status=ok
// SIG undefined FUN_1463f9dd6(void)

void FUN_1463f9dd6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0x86] == 0) goto LAB_1463f9e86;
  lVar2 = FUN_1449db7f2();
  if ((((param_1[0x86] == 0) || (lVar2 == 0)) ||
      (lVar1 = *(longlong *)(param_1[0x86] + 0x10), lVar1 == 0)) ||
     ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30)))) goto LAB_1463f9e86;
  if ((param_2 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0x87] = (longlong)param_2;
    if (param_2 != (longlong *)0x0) goto LAB_1463f9e50;
  }
  else {
    FUN_1456cec3c(param_2);
    param_1[0x87] = (longlong)param_2;
LAB_1463f9e50:
    (**(code **)(*param_2 + 0x6c8))(param_2);
  }
  local_28 = param_2;
  uVar3 = FUN_14477b072(param_1,DAT_14caf9a28);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_28);
LAB_1463f9e86:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463f9eb6 FUN_1463f9eb6 body=107 status=ok
// SIG undefined FUN_1463f9eb6(void)

void FUN_1463f9eb6(longlong param_1)

{
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401b2056();
  FUN_144842a8a(param_1,local_20);
  if (local_20[0] < 0x129) {
    *(uint *)(param_1 + 0x634) =
         (*(uint *)(param_1 + 0x634) & 0xfffffffb) + (*(uint *)(param_1 + 0x634) & 2) * 2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463f9f22 FUN_1463f9f22 body=62 status=ok
// SIG undefined FUN_1463f9f22(void)

void FUN_1463f9f22(longlong *param_1)

{
  if (param_1[0x86] != 0) {
    FUN_1449db7f2();
  }
  if (param_1[0xe1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001463f9f5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xca0))(param_1,0);
  return;
}



// FUNCTION 1463f9f60 FUN_1463f9f60 body=95 status=ok
// SIG undefined FUN_1463f9f60(void)

bool FUN_1463f9f60(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = FUN_1401b4c98();
  local_18 = *(undefined8 *)(param_1 + 0x728);
  lVar2 = FUN_144a61814(uVar1);
  if (lVar2 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(lVar2 + 1) != '\x02';
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463f9fc0 FUN_1463f9fc0 body=242 status=ok
// SIG undefined FUN_1463f9fc0(void)

undefined4 FUN_1463f9fc0(undefined8 param_1,char param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14487fd02();
  if (iVar1 != 3) {
    lVar3 = FUN_1447210f0(param_1);
    plVar4 = *(longlong **)(lVar3 + 0x170);
    if (plVar4 != (longlong *)0x0) {
      lVar3 = FUN_14093f908(param_1);
      if (param_2 == '\x01' && *(longlong *)(lVar3 + 0x588) == 0) {
        local_38 = 0;
        local_30 = 0;
        FUN_14096c7c0(&local_38,param_3);
        uVar2 = (**(code **)(*plVar4 + 0x6d8))(plVar4,param_1,&local_38);
        plVar4 = (longlong *)FUN_14093f908(param_1);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x578))(plVar4);
        }
        goto LAB_1463fa028;
      }
      if (*(longlong *)(lVar3 + 0x588) != 0 && param_2 == '\0') {
        uVar2 = (**(code **)(*plVar4 + 0x6e0))(plVar4);
        goto LAB_1463fa028;
      }
    }
  }
  uVar2 = 0;
LAB_1463fa028:
  FUN_1449db362(param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463fa0b4 FUN_1463fa0b4 body=131 status=ok
// SIG undefined FUN_1463fa0b4(void)

void FUN_1463fa0b4(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1[0x7a] != 0) && (param_1[0x87] != param_1[0x7a])) {
    lVar1 = FUN_1447210f0(param_1);
    if (0.25 < *(double *)(lVar1 + 0x6d0) - (double)*(float *)(param_1 + 0xf5)) {
      uVar2 = FUN_14477b072(param_1,DAT_14caf9a68);
      (**(code **)(*param_1 + 0x248))(param_1,uVar2,0);
      *(float *)(param_1 + 0xf5) = (float)*(double *)(lVar1 + 0x6d0);
    }
  }
  return;
}



// FUNCTION 1463fa138 FUN_1463fa138 body=81 status=ok
// SIG undefined FUN_1463fa138(void)

bool FUN_1463fa138(longlong param_1)

{
  char cVar1;
  
  if ((((*(char *)(param_1 + 0x940) != '\x02') || (*(longlong *)(param_1 + 0x3d0) == 0)) &&
      (*(longlong *)(param_1 + 0x398) != 0)) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x398) + 0x39a) & 4) == 0 &&
      (cVar1 = FUN_140496a74(param_1), cVar1 != '\0')))) {
    return *(longlong *)(param_1 + 0x600) == 0;
  }
  return false;
}



// FUNCTION 1463fa18a FUN_1463fa18a body=86 status=ok
// SIG undefined FUN_1463fa18a(void)

void FUN_1463fa18a(longlong *param_1)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if ((param_1[0x79] == (ulonglong)DAT_14c893048) && (param_1[0xf4] == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001463fa1d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xe68))(param_1);
    return;
  }
  return;
}



// FUNCTION 1463fa1e0 FUN_1463fa1e0 body=40 status=ok
// SIG undefined FUN_1463fa1e0(void)

undefined8 FUN_1463fa1e0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463fa208 FUN_1463fa208 body=40 status=ok
// SIG undefined FUN_1463fa208(void)

undefined8 FUN_1463fa208(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463fa230 FUN_1463fa230 body=40 status=ok
// SIG undefined FUN_1463fa230(void)

undefined8 FUN_1463fa230(undefined8 param_1,int param_2)

{
  thunk_FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463fa258 FUN_1463fa258 body=92 status=ok
// SIG undefined FUN_1463fa258(void)

undefined8 * FUN_1463fa258(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa38500;
  param_1[5] = &PTR_LAB_14aa38af0;
  param_1[6] = &PTR_LAB_14aa38b30;
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463fa2b4 FUN_1463fa2b4 body=40 status=ok
// SIG undefined FUN_1463fa2b4(void)

undefined8 FUN_1463fa2b4(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463fa2dc FUN_1463fa2dc body=40 status=ok
// SIG undefined FUN_1463fa2dc(void)

undefined8 FUN_1463fa2dc(undefined8 param_1,int param_2)

{
  FUN_1402d9b92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463fa304 FUN_1463fa304 body=52 status=ok
// SIG undefined FUN_1463fa304(void)

longlong FUN_1463fa304(longlong param_1,int param_2)

{
  FUN_14114f6bc(param_1 + 0x28);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463fa338 FUN_1463fa338 body=40 status=ok
// SIG undefined FUN_1463fa338(void)

undefined8 FUN_1463fa338(undefined8 param_1,int param_2)

{
  FUN_1413f40c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463fa360 FUN_1463fa360 body=29 status=ok
// SIG undefined FUN_1463fa360(void)

undefined8 FUN_1463fa360(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463fa37e FUN_1463fa37e body=29 status=ok
// SIG undefined FUN_1463fa37e(void)

undefined8 FUN_1463fa37e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463fa39c FUN_1463fa39c body=29 status=ok
// SIG undefined FUN_1463fa39c(void)

undefined8 FUN_1463fa39c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463fa3ba FUN_1463fa3ba body=29 status=ok
// SIG undefined FUN_1463fa3ba(void)

undefined8 FUN_1463fa3ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463fa3d8 FUN_1463fa3d8 body=29 status=ok
// SIG undefined FUN_1463fa3d8(void)

undefined8 FUN_1463fa3d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463fa3f6 FUN_1463fa3f6 body=29 status=ok
// SIG undefined FUN_1463fa3f6(void)

undefined8 FUN_1463fa3f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463fa414 FUN_1463fa414 body=29 status=ok
// SIG undefined FUN_1463fa414(void)

undefined8 FUN_1463fa414(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1463fa432 FUN_1463fa432 body=146 status=ok
// SIG undefined FUN_1463fa432(void)

void FUN_1463fa432(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x160,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x160)) {
      uVar5 = uVar4 / 0x160 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x160,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1463fa4c6 FUN_1463fa4c6 body=24 status=ok
// SIG undefined FUN_1463fa4c6(void)

bool FUN_1463fa4c6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1463fa4f2 FUN_1463fa4f2 body=24 status=ok
// SIG undefined FUN_1463fa4f2(void)

bool FUN_1463fa4f2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1463fa50a FUN_1463fa50a body=93 status=ok
// SIG undefined FUN_1463fa50a(void)

void FUN_1463fa50a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aa4d440;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1463fa57c FUN_1463fa57c body=24 status=ok
// SIG undefined FUN_1463fa57c(void)

bool FUN_1463fa57c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1463fa594 FUN_1463fa594 body=101 status=ok
// SIG undefined FUN_1463fa594(void)

void FUN_1463fa594(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aa4d800;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1463fa5f9 FUN_1463fa5f9 body=47 status=ok
// SIG undefined FUN_1463fa5f9(void)

longlong FUN_1463fa5f9(void)

{
  if (DAT_14cafa578 == 0) {
    FUN_1409ce572(&DAT_14cafa578,&PTR_FUN_14aa4dba0);
  }
  return DAT_14cafa578;
}



// FUNCTION 1463fa628 FUN_1463fa628 body=55 status=ok
// SIG undefined FUN_1463fa628(void)

void FUN_1463fa628(void)

{
  undefined8 uVar1;
  
  if (DAT_14cafa598 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cafa598 = FUN_140002ddd(FUN_1463fa65f,uVar1,L"PlayerMuteList");
  }
  return;
}



// FUNCTION 1463fa65f FUN_1463fa65f body=47 status=ok
// SIG undefined FUN_1463fa65f(void)

longlong FUN_1463fa65f(void)

{
  if (DAT_14cafa590 == 0) {
    FUN_14086a14e(&DAT_14cafa590,&PTR_FUN_14aa4dcc0);
  }
  return DAT_14cafa590;
}



// FUNCTION 1463fa68e FUN_1463fa68e body=48 status=ok
// SIG undefined FUN_1463fa68e(void)

void FUN_1463fa68e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000058;
  *puVar1 = &PTR_FUN_14aa57f80;
  return;
}



// FUNCTION 1463fa6be FUN_1463fa6be body=47 status=ok
// SIG undefined FUN_1463fa6be(void)

longlong FUN_1463fa6be(void)

{
  if (DAT_14cafa5b0 == 0) {
    FUN_14073dd9a(&DAT_14cafa5b0,&PTR_LAB_14aa4ddd8);
  }
  return DAT_14cafa5b0;
}



// FUNCTION 1463fa6ed FUN_1463fa6ed body=122 status=ok
// SIG undefined FUN_1463fa6ed(void)

void FUN_1463fa6ed(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14585ff84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aa4de20;
  puVar1[0x72] = &PTR_FUN_14aa4e470;
  puVar1[0x77] = 0;
  *(undefined8 *)(puVar1[0x73] + 0x640) = 0x4220000042b80000;
  FUN_14126002c(puVar1[0x73],0);
  *puVar1 = &PTR_FUN_14aa4e580;
  puVar1[0x72] = &PTR_FUN_14aa4ebd0;
  return;
}



// FUNCTION 1463fa76d FUN_1463fa76d body=47 status=ok
// SIG undefined FUN_1463fa76d(void)

longlong FUN_1463fa76d(void)

{
  if (DAT_14cafa5c8 == 0) {
    FUN_14073dd9a(&DAT_14cafa5c8,&PTR_LAB_14aa4e538);
  }
  return DAT_14cafa5c8;
}



// FUNCTION 1463fa79c FUN_1463fa79c body=47 status=ok
// SIG undefined FUN_1463fa79c(void)

longlong FUN_1463fa79c(void)

{
  if (DAT_14cafa5d8 == 0) {
    FUN_14000fc22(&DAT_14cafa5d8,&PTR_FUN_14aa4ed60);
  }
  return DAT_14cafa5d8;
}



// FUNCTION 1463fa7cb FUN_1463fa7cb body=47 status=ok
// SIG undefined FUN_1463fa7cb(void)

longlong FUN_1463fa7cb(void)

{
  if (DAT_14cafa5e0 == 0) {
    FUN_14000fc22(&DAT_14cafa5e0,&PTR_FUN_14aa4edf8);
  }
  return DAT_14cafa5e0;
}



// FUNCTION 1463fa7fa FUN_1463fa7fa body=47 status=ok
// SIG undefined FUN_1463fa7fa(void)

longlong FUN_1463fa7fa(void)

{
  if (DAT_14cafa5f0 == 0) {
    FUN_14000fc22(&DAT_14cafa5f0,&PTR_FUN_14aa4eed0);
  }
  return DAT_14cafa5f0;
}



// FUNCTION 1463fa829 FUN_1463fa829 body=47 status=ok
// SIG undefined FUN_1463fa829(void)

longlong FUN_1463fa829(void)

{
  if (DAT_14cafa5f8 == 0) {
    FUN_14000fc22(&DAT_14cafa5f8,&PTR_FUN_14aa4ef70);
  }
  return DAT_14cafa5f8;
}



// FUNCTION 1463fa858 FUN_1463fa858 body=47 status=ok
// SIG undefined FUN_1463fa858(void)

longlong FUN_1463fa858(void)

{
  if (DAT_14cafa600 == 0) {
    FUN_14000fc22(&DAT_14cafa600,&PTR_FUN_14aa4f000);
  }
  return DAT_14cafa600;
}



// FUNCTION 1463fa887 FUN_1463fa887 body=47 status=ok
// SIG undefined FUN_1463fa887(void)

longlong FUN_1463fa887(void)

{
  if (DAT_14cafa608 == 0) {
    FUN_14000fc22(&DAT_14cafa608,&PTR_FUN_14aa4f098);
  }
  return DAT_14cafa608;
}



// FUNCTION 1463fa8b6 FUN_1463fa8b6 body=47 status=ok
// SIG undefined FUN_1463fa8b6(void)

longlong FUN_1463fa8b6(void)

{
  if (DAT_14cafa610 == 0) {
    FUN_14000fc22(&DAT_14cafa610,&PTR_FUN_14aa4f120);
  }
  return DAT_14cafa610;
}



// FUNCTION 1463fa8e5 FUN_1463fa8e5 body=47 status=ok
// SIG undefined FUN_1463fa8e5(void)

longlong FUN_1463fa8e5(void)

{
  if (DAT_14cafa618 == 0) {
    FUN_14000fc22(&DAT_14cafa618,&PTR_FUN_14aa4f1b0);
  }
  return DAT_14cafa618;
}



// FUNCTION 1463fa914 FUN_1463fa914 body=47 status=ok
// SIG undefined FUN_1463fa914(void)

longlong FUN_1463fa914(void)

{
  if (DAT_14cafa620 == 0) {
    FUN_14000fc22(&DAT_14cafa620,&PTR_FUN_14aa4f230);
  }
  return DAT_14cafa620;
}



// FUNCTION 1463fa943 FUN_1463fa943 body=47 status=ok
// SIG undefined FUN_1463fa943(void)

longlong FUN_1463fa943(void)

{
  if (DAT_14cafa628 == 0) {
    FUN_14000fc22(&DAT_14cafa628,&PTR_FUN_14aa4f2c0);
  }
  return DAT_14cafa628;
}



// FUNCTION 1463fa972 FUN_1463fa972 body=47 status=ok
// SIG undefined FUN_1463fa972(void)

longlong FUN_1463fa972(void)

{
  if (DAT_14cafa630 == 0) {
    FUN_14000fc22(&DAT_14cafa630,&PTR_FUN_14aa4f350);
  }
  return DAT_14cafa630;
}



// FUNCTION 1463fa9a1 FUN_1463fa9a1 body=47 status=ok
// SIG undefined FUN_1463fa9a1(void)

longlong FUN_1463fa9a1(void)

{
  if (DAT_14cafa638 == 0) {
    FUN_14000fc22(&DAT_14cafa638,&PTR_FUN_14aa4f3f0);
  }
  return DAT_14cafa638;
}



// FUNCTION 1463fa9d0 FUN_1463fa9d0 body=47 status=ok
// SIG undefined FUN_1463fa9d0(void)

longlong FUN_1463fa9d0(void)

{
  if (DAT_14cafa640 == 0) {
    FUN_14000fc22(&DAT_14cafa640,&PTR_FUN_14aa4f488);
  }
  return DAT_14cafa640;
}



// FUNCTION 1463fa9ff FUN_1463fa9ff body=47 status=ok
// SIG undefined FUN_1463fa9ff(void)

longlong FUN_1463fa9ff(void)

{
  if (DAT_14cafa648 == 0) {
    FUN_14000fc22(&DAT_14cafa648,&PTR_FUN_14aa4f528);
  }
  return DAT_14cafa648;
}



// FUNCTION 1463faa2e FUN_1463faa2e body=168 status=ok
// SIG undefined FUN_1463faa2e(void)

void FUN_1463faa2e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x408) == local_20) {
    *(undefined8 *)(param_1 + 0x408) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463faad7 FUN_1463faad7 body=47 status=ok
// SIG undefined FUN_1463faad7(void)

longlong FUN_1463faad7(void)

{
  if (DAT_14cafa650 == 0) {
    FUN_14000fc22(&DAT_14cafa650,&PTR_FUN_14aa4f580);
  }
  return DAT_14cafa650;
}



// FUNCTION 1463fab06 FUN_1463fab06 body=47 status=ok
// SIG undefined FUN_1463fab06(void)

longlong FUN_1463fab06(void)

{
  if (DAT_14cafa658 == 0) {
    FUN_14000fc22(&DAT_14cafa658,&PTR_FUN_14aa4f5d0);
  }
  return DAT_14cafa658;
}



// FUNCTION 1463fab35 FUN_1463fab35 body=47 status=ok
// SIG undefined FUN_1463fab35(void)

longlong FUN_1463fab35(void)

{
  if (DAT_14cafa660 == 0) {
    FUN_14000fc22(&DAT_14cafa660,&PTR_FUN_14aa4f628);
  }
  return DAT_14cafa660;
}



// FUNCTION 1463fab64 FUN_1463fab64 body=47 status=ok
// SIG undefined FUN_1463fab64(void)

longlong FUN_1463fab64(void)

{
  if (DAT_14cafa668 == 0) {
    FUN_14000fc22(&DAT_14cafa668,&PTR_FUN_14aa4f678);
  }
  return DAT_14cafa668;
}



// FUNCTION 1463fab93 FUN_1463fab93 body=47 status=ok
// SIG undefined FUN_1463fab93(void)

longlong FUN_1463fab93(void)

{
  if (DAT_14cafa670 == 0) {
    FUN_14000fc22(&DAT_14cafa670,&PTR_FUN_14aa4f6c8);
  }
  return DAT_14cafa670;
}



// FUNCTION 1463fabc2 FUN_1463fabc2 body=47 status=ok
// SIG undefined FUN_1463fabc2(void)

longlong FUN_1463fabc2(void)

{
  if (DAT_14cafa680 == 0) {
    FUN_14000fc22(&DAT_14cafa680,&PTR_FUN_14aa4f7a8);
  }
  return DAT_14cafa680;
}



// FUNCTION 1463fabf1 FUN_1463fabf1 body=47 status=ok
// SIG undefined FUN_1463fabf1(void)

longlong FUN_1463fabf1(void)

{
  if (DAT_14cafa690 == 0) {
    FUN_14000fc22(&DAT_14cafa690,&PTR_FUN_14aa4f880);
  }
  return DAT_14cafa690;
}



// FUNCTION 1463fac20 FUN_1463fac20 body=34 status=ok
// SIG undefined FUN_1463fac20(void)

void FUN_1463fac20(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400d1928();
  FUN_14069c8d6(uVar1,&PTR_s_BP_GetUniqueId_14aa4f8c0,0x12);
  return;
}



// FUNCTION 1463fac52 FUN_1463fac52 body=1015 status=ok
// SIG undefined FUN_1463fac52(void)

void FUN_1463fac52(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafa6b8) {
    FUN_144b3d300(&DAT_14cafa6b8);
    if (DAT_14cafa6b8 == -1) {
      FUN_1446f470e(&DAT_14cafa6b0,L"Score",1);
      _Init_thread_footer(&DAT_14cafa6b8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafa6c4) {
    FUN_144b3d300(&DAT_14cafa6c4);
    if (DAT_14cafa6c4 == -1) {
      FUN_1446f470e(&DAT_14cafa6bc,L"PlayerId",1);
      _Init_thread_footer(&DAT_14cafa6c4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafa6d0) {
    FUN_144b3d300(&DAT_14cafa6d0);
    if (DAT_14cafa6d0 == -1) {
      FUN_1446f470e(&DAT_14cafa6c8,L"CompressedPing",1);
      _Init_thread_footer(&DAT_14cafa6d0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafa6dc) {
    FUN_144b3d300(&DAT_14cafa6dc);
    if (DAT_14cafa6dc == -1) {
      FUN_1446f470e(&DAT_14cafa6d4,L"bIsSpectator",1);
      _Init_thread_footer(&DAT_14cafa6dc);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafa6e8) {
    FUN_144b3d300(&DAT_14cafa6e8);
    if (DAT_14cafa6e8 == -1) {
      FUN_1446f470e(&DAT_14cafa6e0,L"bOnlySpectator",1);
      _Init_thread_footer(&DAT_14cafa6e8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafa6f4) {
    FUN_144b3d300(&DAT_14cafa6f4);
    if (DAT_14cafa6f4 == -1) {
      FUN_1446f470e(&DAT_14cafa6ec,L"bIsABot",1);
      _Init_thread_footer(&DAT_14cafa6f4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafa700) {
    FUN_144b3d300(&DAT_14cafa700);
    if (DAT_14cafa700 == -1) {
      FUN_1446f470e(&DAT_14cafa6f8,L"bIsInactive",1);
      _Init_thread_footer(&DAT_14cafa700);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafa70c) {
    FUN_144b3d300(&DAT_14cafa70c);
    if (DAT_14cafa70c == -1) {
      FUN_1446f470e(&DAT_14cafa704,L"bFromPreviousLevel",1);
      _Init_thread_footer(&DAT_14cafa70c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafa718) {
    FUN_144b3d300(&DAT_14cafa718);
    if (DAT_14cafa718 == -1) {
      FUN_1446f470e(&DAT_14cafa710,L"StartTime",1);
      _Init_thread_footer(&DAT_14cafa718);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafa724) {
    FUN_144b3d300(&DAT_14cafa724);
    if (DAT_14cafa724 == -1) {
      FUN_1446f470e(&DAT_14cafa71c,L"UniqueId",1);
      _Init_thread_footer(&DAT_14cafa724);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafa730) {
    FUN_144b3d300(&DAT_14cafa730);
    if (DAT_14cafa730 == -1) {
      FUN_1446f470e(&DAT_14cafa728,L"PlayerNamePrivate",1);
      _Init_thread_footer(&DAT_14cafa730);
      return;
    }
  }
  return;
}



// FUNCTION 1463fb054 FUN_1463fb054 body=204 status=ok
// SIG undefined FUN_1463fb054(void)

void FUN_1463fb054(longlong *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x690))();
  uVar1 = FUN_14487fd02(param_1);
  if ((uVar1 & 0xfffffffd) == 0) {
    (**(code **)(*param_1 + 0x648))(param_1);
  }
  FUN_141220240(param_1,&local_28);
  if (param_1 + 0x87 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x87] != 0) {
      FUN_1400020a8();
    }
    param_1[0x87] = local_28;
    local_28 = 0;
    *(undefined4 *)(param_1 + 0x88) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x444) = local_1c;
  }
  (**(code **)(*param_1 + 0x578))(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1463fb122 FUN_1463fb122 body=62 status=ok
// SIG undefined FUN_1463fb122(void)

longlong FUN_1463fb122(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    lVar2 = FUN_144a75eb4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1463fb160 FUN_1463fb160 body=42 status=ok
// SIG undefined FUN_1463fb160(void)

undefined8 FUN_1463fb160(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x5d0))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001463fb17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x5e0))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1463fb18a FUN_1463fb18a body=222 status=ok
// SIG undefined FUN_1463fb18a(void)

void FUN_1463fb18a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [240];
  longlong local_a8;
  undefined1 local_90 [8];
  undefined1 local_88 [72];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar2 = 0;
    iVar1 = 0;
    do {
      FUN_147caae0e(local_198,*(longlong *)(param_1 + 0x28) + lVar2);
      (**(code **)(*param_2 + 0x88))(param_2,local_90,param_1,0);
      (**(code **)(*param_2 + 0x88))(param_2,local_88,param_1);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 0x158;
    } while (iVar1 < *(int *)(param_1 + 0x30));
  }
  FUN_1449e2820(param_1,param_2);
  if ((local_40 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


