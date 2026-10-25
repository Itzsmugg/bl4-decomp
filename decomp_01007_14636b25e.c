// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14636b25e FUN_14636b25e body=55 status=ok
// SIG undefined FUN_14636b25e(void)

void FUN_14636b25e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabd960 == 0) {
    uVar1 = FUN_140f5467b();
    DAT_14cabd960 = FUN_140002ddd(FUN_14636ae18,uVar1,L"MassRuntimePipeline");
  }
  return;
}



// FUNCTION 14636b296 FUN_14636b296 body=48 status=ok
// SIG undefined FUN_14636b296(void)

void FUN_14636b296(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a5b5490;
  return;
}



// FUNCTION 14636b2c6 FUN_14636b2c6 body=47 status=ok
// SIG undefined FUN_14636b2c6(void)

longlong FUN_14636b2c6(void)

{
  if (DAT_14cabd970 == 0) {
    FUN_1409ce572(&DAT_14cabd970,&PTR_FUN_14a5b2c20);
  }
  return DAT_14cabd970;
}



// FUNCTION 14636b2f6 FUN_14636b2f6 body=55 status=ok
// SIG undefined FUN_14636b2f6(void)

void FUN_14636b2f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabd990 == 0) {
    uVar1 = FUN_140f5467b();
    DAT_14cabd990 = FUN_140002ddd(FUN_14636b32d,uVar1,L"MassProcessorExecutionOrder");
  }
  return;
}



// FUNCTION 14636b32d FUN_14636b32d body=47 status=ok
// SIG undefined FUN_14636b32d(void)

longlong FUN_14636b32d(void)

{
  if (DAT_14cabd988 == 0) {
    FUN_14086a14e(&DAT_14cabd988,&PTR_FUN_14a5b2ed8);
  }
  return DAT_14cabd988;
}



// FUNCTION 14636b35c FUN_14636b35c body=48 status=ok
// SIG undefined FUN_14636b35c(void)

void FUN_14636b35c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14a5b5710;
  return;
}



// FUNCTION 14636b394 FUN_14636b394 body=47 status=ok
// SIG undefined FUN_14636b394(void)

longlong FUN_14636b394(void)

{
  if (DAT_14cabd9c0 == 0) {
    FUN_14073dd9a(&DAT_14cabd9c0,&PTR_LAB_14a5b3598);
  }
  return DAT_14cabd9c0;
}



// FUNCTION 14636b3c4 FUN_14636b3c4 body=71 status=ok
// SIG undefined FUN_14636b3c4(void)

undefined8 FUN_14636b3c4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14636b40c FUN_14636b40c body=29 status=ok
// SIG undefined FUN_14636b40c(void)

undefined8 FUN_14636b40c(longlong param_1,undefined8 param_2)

{
  FUN_1400021e4(param_1 + 200);
  return param_2;
}



// FUNCTION 14636b42a FUN_14636b42a body=40 status=ok
// SIG undefined FUN_14636b42a(void)

undefined8 FUN_14636b42a(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b452 FUN_14636b452 body=40 status=ok
// SIG undefined FUN_14636b452(void)

undefined8 FUN_14636b452(undefined8 param_1,int param_2)

{
  FUN_1410891e4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b47a FUN_14636b47a body=40 status=ok
// SIG undefined FUN_14636b47a(void)

undefined8 FUN_14636b47a(undefined8 param_1,int param_2)

{
  FUN_141495b8a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b4a2 FUN_14636b4a2 body=40 status=ok
// SIG undefined FUN_14636b4a2(void)

undefined8 FUN_14636b4a2(undefined8 param_1,int param_2)

{
  FUN_141495b8a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b4ca FUN_14636b4ca body=29 status=ok
// SIG undefined FUN_14636b4ca(void)

undefined8 FUN_14636b4ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b4e8 FUN_14636b4e8 body=29 status=ok
// SIG undefined FUN_14636b4e8(void)

undefined8 FUN_14636b4e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b506 FUN_14636b506 body=29 status=ok
// SIG undefined FUN_14636b506(void)

undefined8 FUN_14636b506(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b524 FUN_14636b524 body=29 status=ok
// SIG undefined FUN_14636b524(void)

undefined8 FUN_14636b524(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b542 FUN_14636b542 body=29 status=ok
// SIG undefined FUN_14636b542(void)

undefined8 FUN_14636b542(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b560 FUN_14636b560 body=29 status=ok
// SIG undefined FUN_14636b560(void)

undefined8 FUN_14636b560(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b57e FUN_14636b57e body=29 status=ok
// SIG undefined FUN_14636b57e(void)

undefined8 FUN_14636b57e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b59c FUN_14636b59c body=29 status=ok
// SIG undefined FUN_14636b59c(void)

undefined8 FUN_14636b59c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b5ba FUN_14636b5ba body=29 status=ok
// SIG undefined FUN_14636b5ba(void)

undefined8 FUN_14636b5ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b5d8 FUN_14636b5d8 body=29 status=ok
// SIG undefined FUN_14636b5d8(void)

undefined8 FUN_14636b5d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b5f6 FUN_14636b5f6 body=29 status=ok
// SIG undefined FUN_14636b5f6(void)

undefined8 FUN_14636b5f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b614 FUN_14636b614 body=29 status=ok
// SIG undefined FUN_14636b614(void)

undefined8 FUN_14636b614(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b632 FUN_14636b632 body=29 status=ok
// SIG undefined FUN_14636b632(void)

undefined8 FUN_14636b632(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b650 FUN_14636b650 body=29 status=ok
// SIG undefined FUN_14636b650(void)

undefined8 FUN_14636b650(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b66e FUN_14636b66e body=29 status=ok
// SIG undefined FUN_14636b66e(void)

undefined8 FUN_14636b66e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b68c FUN_14636b68c body=29 status=ok
// SIG undefined FUN_14636b68c(void)

undefined8 FUN_14636b68c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b6aa FUN_14636b6aa body=29 status=ok
// SIG undefined FUN_14636b6aa(void)

undefined8 FUN_14636b6aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b6c8 FUN_14636b6c8 body=29 status=ok
// SIG undefined FUN_14636b6c8(void)

undefined8 FUN_14636b6c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b6e6 FUN_14636b6e6 body=93 status=ok
// SIG undefined FUN_14636b6e6(void)

void FUN_14636b6e6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a5b5910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14636b744 FUN_14636b744 body=29 status=ok
// SIG undefined FUN_14636b744(void)

undefined8 FUN_14636b744(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b762 FUN_14636b762 body=29 status=ok
// SIG undefined FUN_14636b762(void)

bool FUN_14636b762(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14636b780 FUN_14636b780 body=26 status=ok
// SIG undefined FUN_14636b780(void)

bool FUN_14636b780(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14636b79a FUN_14636b79a body=24 status=ok
// SIG undefined FUN_14636b79a(void)

bool FUN_14636b79a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14636b7b2 FUN_14636b7b2 body=29 status=ok
// SIG undefined FUN_14636b7b2(void)

undefined8 FUN_14636b7b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b7d0 FUN_14636b7d0 body=29 status=ok
// SIG undefined FUN_14636b7d0(void)

undefined8 FUN_14636b7d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636b7ed FUN_14636b7ed body=47 status=ok
// SIG undefined FUN_14636b7ed(void)

longlong FUN_14636b7ed(void)

{
  if (DAT_14cabe790 == 0) {
    FUN_1409ce572(&DAT_14cabe790,&PTR_FUN_14a5b5cd0);
  }
  return DAT_14cabe790;
}



// FUNCTION 14636b81c FUN_14636b81c body=47 status=ok
// SIG undefined FUN_14636b81c(void)

longlong FUN_14636b81c(void)

{
  if (DAT_14cabe7a8 == 0) {
    FUN_1409ce572(&DAT_14cabe7a8,&PTR_FUN_14a5b5d70);
  }
  return DAT_14cabe7a8;
}



// FUNCTION 14636b84c FUN_14636b84c body=55 status=ok
// SIG undefined FUN_14636b84c(void)

void FUN_14636b84c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabe7c8 == 0) {
    uVar1 = FUN_140f5467b();
    DAT_14cabe7c8 = FUN_140002ddd(FUN_14636b883,uVar1,L"MassSubsystemRequirements");
  }
  return;
}



// FUNCTION 14636b883 FUN_14636b883 body=47 status=ok
// SIG undefined FUN_14636b883(void)

longlong FUN_14636b883(void)

{
  if (DAT_14cabe7c0 == 0) {
    FUN_14086a14e(&DAT_14cabe7c0,&PTR_FUN_14a5b5df0);
  }
  return DAT_14cabe7c0;
}



// FUNCTION 14636b8b2 FUN_14636b8b2 body=48 status=ok
// SIG undefined FUN_14636b8b2(void)

void FUN_14636b8b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14a5b69a0;
  return;
}



// FUNCTION 14636b8e2 FUN_14636b8e2 body=55 status=ok
// SIG undefined FUN_14636b8e2(void)

void FUN_14636b8e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabe7e0 == 0) {
    uVar1 = FUN_140f5467b();
    DAT_14cabe7e0 = FUN_140002ddd(FUN_14636b919,uVar1,L"MassFragmentRequirements");
  }
  return;
}



// FUNCTION 14636b919 FUN_14636b919 body=47 status=ok
// SIG undefined FUN_14636b919(void)

longlong FUN_14636b919(void)

{
  if (DAT_14cabe7d8 == 0) {
    FUN_14086a14e(&DAT_14cabe7d8,&PTR_FUN_14a5b5e78);
  }
  return DAT_14cabe7d8;
}



// FUNCTION 14636b948 FUN_14636b948 body=48 status=ok
// SIG undefined FUN_14636b948(void)

void FUN_14636b948(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000268;
  *puVar1 = &PTR_FUN_14a5b6b00;
  return;
}



// FUNCTION 14636b978 FUN_14636b978 body=35 status=ok
// SIG undefined FUN_14636b978(void)

void FUN_14636b978(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a5b5fd0;
  return;
}



// FUNCTION 14636b9a0 FUN_14636b9a0 body=47 status=ok
// SIG undefined FUN_14636b9a0(void)

longlong FUN_14636b9a0(void)

{
  if (DAT_14cabe7f8 == 0) {
    FUN_14073dd9a(&DAT_14cabe7f8,&PTR_LAB_14a5b5f88);
  }
  return DAT_14cabe7f8;
}



// FUNCTION 14636b9cf FUN_14636b9cf body=78 status=ok
// SIG undefined FUN_14636b9cf(void)

void FUN_14636b9cf(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a5b63f0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  return;
}



// FUNCTION 14636ba1d FUN_14636ba1d body=47 status=ok
// SIG undefined FUN_14636ba1d(void)

longlong FUN_14636ba1d(void)

{
  if (DAT_14cabe810 == 0) {
    FUN_14073dd9a(&DAT_14cabe810,&PTR_LAB_14a5b63a8);
  }
  return DAT_14cabe810;
}



// FUNCTION 14636ba5c FUN_14636ba5c body=40 status=ok
// SIG undefined FUN_14636ba5c(void)

undefined8 FUN_14636ba5c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14636ba84 FUN_14636ba84 body=34 status=ok
// SIG undefined FUN_14636ba84(void)

undefined8 FUN_14636ba84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14636baa6 FUN_14636baa6 body=34 status=ok
// SIG undefined FUN_14636baa6(void)

undefined8 FUN_14636baa6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14636bac8 FUN_14636bac8 body=35 status=ok
// SIG undefined FUN_14636bac8(void)

void FUN_14636bac8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a5b6d20;
  return;
}



// FUNCTION 14636baeb FUN_14636baeb body=47 status=ok
// SIG undefined FUN_14636baeb(void)

longlong FUN_14636baeb(void)

{
  if (DAT_14cabe838 == 0) {
    FUN_14073dd9a(&DAT_14cabe838,&PTR_LAB_14a5b6cd8);
  }
  return DAT_14cabe838;
}



// FUNCTION 14636bb1a FUN_14636bb1a body=47 status=ok
// SIG undefined FUN_14636bb1a(void)

longlong FUN_14636bb1a(void)

{
  if (DAT_14cabe850 == 0) {
    FUN_14073dd9a(&DAT_14cabe850,&PTR_LAB_14a5b7118);
  }
  return DAT_14cabe850;
}



// FUNCTION 14636bb4a FUN_14636bb4a body=55 status=ok
// SIG undefined FUN_14636bb4a(void)

void FUN_14636bb4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabe868 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabe868 = FUN_140002ddd(FUN_1417ac811,uVar1,L"ActorDataLayer");
  }
  return;
}



// FUNCTION 14636bb82 FUN_14636bb82 body=48 status=ok
// SIG undefined FUN_14636bb82(void)

void FUN_14636bb82(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14a5c1350;
  return;
}



// FUNCTION 14636bbb2 FUN_14636bbb2 body=35 status=ok
// SIG undefined FUN_14636bbb2(void)

void FUN_14636bbb2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a5b7660;
  return;
}



// FUNCTION 14636bbda FUN_14636bbda body=47 status=ok
// SIG undefined FUN_14636bbda(void)

longlong FUN_14636bbda(void)

{
  if (DAT_14cabe880 == 0) {
    FUN_14073dd9a(&DAT_14cabe880,&PTR_LAB_14a5b7618);
  }
  return DAT_14cabe880;
}



// FUNCTION 14636bc09 FUN_14636bc09 body=47 status=ok
// SIG undefined FUN_14636bc09(void)

longlong FUN_14636bc09(void)

{
  if (DAT_14cabe890 == 0) {
    FUN_14086a14e(&DAT_14cabe890,&PTR_FUN_14a5b7ab0);
  }
  return DAT_14cabe890;
}



// FUNCTION 14636bc38 FUN_14636bc38 body=48 status=ok
// SIG undefined FUN_14636bc38(void)

void FUN_14636bc38(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14a5c14c0;
  return;
}



// FUNCTION 14636bc68 FUN_14636bc68 body=47 status=ok
// SIG undefined FUN_14636bc68(void)

longlong FUN_14636bc68(void)

{
  if (DAT_14cabe8a8 == 0) {
    FUN_14086a14e(&DAT_14cabe8a8,&PTR_FUN_14a5b7b78);
  }
  return DAT_14cabe8a8;
}



// FUNCTION 14636bc98 FUN_14636bc98 body=48 status=ok
// SIG undefined FUN_14636bc98(void)

void FUN_14636bc98(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a5c1620;
  return;
}



// FUNCTION 14636bcc8 FUN_14636bcc8 body=35 status=ok
// SIG undefined FUN_14636bcc8(void)

void FUN_14636bcc8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a5b7cc0;
  return;
}



// FUNCTION 14636bcf1 FUN_14636bcf1 body=47 status=ok
// SIG undefined FUN_14636bcf1(void)

longlong FUN_14636bcf1(void)

{
  if (DAT_14cabe8c8 == 0) {
    FUN_14073dd9a(&DAT_14cabe8c8,&PTR_LAB_14a5b7c78);
  }
  return DAT_14cabe8c8;
}



// FUNCTION 14636bd20 FUN_14636bd20 body=55 status=ok
// SIG undefined FUN_14636bd20(void)

void FUN_14636bd20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabe8e0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabe8e0 = FUN_140002ddd(FUN_14636bd57,uVar1,L"KAggregateGeom");
  }
  return;
}



// FUNCTION 14636bd57 FUN_14636bd57 body=49 status=ok
// SIG undefined FUN_14636bd57(void)

longlong FUN_14636bd57(void)

{
  if (DAT_14cabe8d8 == 0) {
    FUN_14086a14e(&DAT_14cabe8d8,&PTR_FUN_14a5b83f0);
  }
  return DAT_14cabe8d8;
}



// FUNCTION 14636bd88 FUN_14636bd88 body=48 status=ok
// SIG undefined FUN_14636bd88(void)

void FUN_14636bd88(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000080;
  *puVar1 = &PTR_FUN_14a5c1790;
  return;
}



// FUNCTION 14636bdb8 FUN_14636bdb8 body=35 status=ok
// SIG undefined FUN_14636bdb8(void)

void FUN_14636bdb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a5b84f0;
  return;
}



// FUNCTION 14636bddb FUN_14636bddb body=47 status=ok
// SIG undefined FUN_14636bddb(void)

longlong FUN_14636bddb(void)

{
  if (DAT_14cabe8f8 == 0) {
    FUN_14073dd9a(&DAT_14cabe8f8,&PTR_LAB_14a5b84a8);
  }
  return DAT_14cabe8f8;
}



// FUNCTION 14636be0a FUN_14636be0a body=55 status=ok
// SIG undefined FUN_14636be0a(void)

void FUN_14636be0a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabe910 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabe910 = FUN_140002ddd(FUN_14636be41,uVar1,L"NamedFloat");
  }
  return;
}



// FUNCTION 14636be41 FUN_14636be41 body=47 status=ok
// SIG undefined FUN_14636be41(void)

longlong FUN_14636be41(void)

{
  if (DAT_14cabe908 == 0) {
    FUN_14086a14e(&DAT_14cabe908,&PTR_FUN_14a5b8860);
  }
  return DAT_14cabe908;
}



// FUNCTION 14636be70 FUN_14636be70 body=48 status=ok
// SIG undefined FUN_14636be70(void)

void FUN_14636be70(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a5c18f0;
  return;
}



// FUNCTION 14636bea0 FUN_14636bea0 body=55 status=ok
// SIG undefined FUN_14636bea0(void)

void FUN_14636bea0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabe928 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabe928 = FUN_140002ddd(FUN_14636bed7,uVar1,L"NamedVector");
  }
  return;
}



// FUNCTION 14636bed7 FUN_14636bed7 body=47 status=ok
// SIG undefined FUN_14636bed7(void)

longlong FUN_14636bed7(void)

{
  if (DAT_14cabe920 == 0) {
    FUN_14086a14e(&DAT_14cabe920,&PTR_FUN_14a5b8950);
  }
  return DAT_14cabe920;
}



// FUNCTION 14636bf06 FUN_14636bf06 body=48 status=ok
// SIG undefined FUN_14636bf06(void)

void FUN_14636bf06(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a5c1a50;
  return;
}



// FUNCTION 14636bf36 FUN_14636bf36 body=55 status=ok
// SIG undefined FUN_14636bf36(void)

void FUN_14636bf36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabe940 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabe940 = FUN_140002ddd(FUN_14636bf6d,uVar1,L"NamedColor");
  }
  return;
}



// FUNCTION 14636bf6d FUN_14636bf6d body=47 status=ok
// SIG undefined FUN_14636bf6d(void)

longlong FUN_14636bf6d(void)

{
  if (DAT_14cabe938 == 0) {
    FUN_14086a14e(&DAT_14cabe938,&PTR_FUN_14a5b8a40);
  }
  return DAT_14cabe938;
}



// FUNCTION 14636bf9c FUN_14636bf9c body=48 status=ok
// SIG undefined FUN_14636bf9c(void)

void FUN_14636bf9c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a5c1bb0;
  return;
}



// FUNCTION 14636bfcc FUN_14636bfcc body=55 status=ok
// SIG undefined FUN_14636bfcc(void)

void FUN_14636bfcc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabe958 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabe958 = FUN_140002ddd(FUN_14636c003,uVar1,L"NamedTransform");
  }
  return;
}



// FUNCTION 14636c003 FUN_14636c003 body=47 status=ok
// SIG undefined FUN_14636c003(void)

longlong FUN_14636c003(void)

{
  if (DAT_14cabe950 == 0) {
    FUN_14086a14e(&DAT_14cabe950,&PTR_FUN_14a5b8b30);
  }
  return DAT_14cabe950;
}



// FUNCTION 14636c032 FUN_14636c032 body=48 status=ok
// SIG undefined FUN_14636c032(void)

void FUN_14636c032(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x1000000070;
  *puVar1 = &PTR_FUN_14a5c1d10;
  return;
}



// FUNCTION 14636c062 FUN_14636c062 body=55 status=ok
// SIG undefined FUN_14636c062(void)

void FUN_14636c062(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabe970 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabe970 = FUN_140002ddd(FUN_14636c099,uVar1,L"LocalSpacePose");
  }
  return;
}



// FUNCTION 14636c099 FUN_14636c099 body=47 status=ok
// SIG undefined FUN_14636c099(void)

longlong FUN_14636c099(void)

{
  if (DAT_14cabe968 == 0) {
    FUN_14086a14e(&DAT_14cabe968,&PTR_FUN_14a5b8ca0);
  }
  return DAT_14cabe968;
}



// FUNCTION 14636c0c8 FUN_14636c0c8 body=48 status=ok
// SIG undefined FUN_14636c0c8(void)

void FUN_14636c0c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a5c1e70;
  return;
}



// FUNCTION 14636c0f8 FUN_14636c0f8 body=55 status=ok
// SIG undefined FUN_14636c0f8(void)

void FUN_14636c0f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabe988 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabe988 = FUN_140002ddd(FUN_14636c12f,uVar1,L"ComponentSpacePose");
  }
  return;
}



// FUNCTION 14636c12f FUN_14636c12f body=47 status=ok
// SIG undefined FUN_14636c12f(void)

longlong FUN_14636c12f(void)

{
  if (DAT_14cabe980 == 0) {
    FUN_14086a14e(&DAT_14cabe980,&PTR_FUN_14a5b8e28);
  }
  return DAT_14cabe980;
}



// FUNCTION 14636c15e FUN_14636c15e body=48 status=ok
// SIG undefined FUN_14636c15e(void)

void FUN_14636c15e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a5c1fd0;
  return;
}



// FUNCTION 14636c18e FUN_14636c18e body=35 status=ok
// SIG undefined FUN_14636c18e(void)

void FUN_14636c18e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a5b9010;
  return;
}



// FUNCTION 14636c1b1 FUN_14636c1b1 body=47 status=ok
// SIG undefined FUN_14636c1b1(void)

longlong FUN_14636c1b1(void)

{
  if (DAT_14cabe9a0 == 0) {
    FUN_14073dd9a(&DAT_14cabe9a0,&PTR_LAB_14a5b8fc8);
  }
  return DAT_14cabe9a0;
}



// FUNCTION 14636c1e0 FUN_14636c1e0 body=47 status=ok
// SIG undefined FUN_14636c1e0(void)

longlong FUN_14636c1e0(void)

{
  if (DAT_14cabe9b0 == 0) {
    FUN_1409ce572(&DAT_14cabe9b0,&PTR_FUN_14a5b9330);
  }
  return DAT_14cabe9b0;
}



// FUNCTION 14636c210 FUN_14636c210 body=55 status=ok
// SIG undefined FUN_14636c210(void)

void FUN_14636c210(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabe9d0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabe9d0 = FUN_140002ddd(FUN_14636c247,uVar1,L"AnimationErrorStats");
  }
  return;
}



// FUNCTION 14636c247 FUN_14636c247 body=47 status=ok
// SIG undefined FUN_14636c247(void)

longlong FUN_14636c247(void)

{
  if (DAT_14cabe9c8 == 0) {
    FUN_14086a14e(&DAT_14cabe9c8,&PTR_FUN_14a5b93a0);
  }
  return DAT_14cabe9c8;
}



// FUNCTION 14636c276 FUN_14636c276 body=48 status=ok
// SIG undefined FUN_14636c276(void)

void FUN_14636c276(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14a5c21a0;
  return;
}



// FUNCTION 14636c2a6 FUN_14636c2a6 body=55 status=ok
// SIG undefined FUN_14636c2a6(void)

void FUN_14636c2a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabe9e8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabe9e8 = FUN_140002ddd(FUN_14636c2dd,uVar1,L"AnimCompressedCurveIndexedName");
  }
  return;
}



// FUNCTION 14636c2dd FUN_14636c2dd body=47 status=ok
// SIG undefined FUN_14636c2dd(void)

longlong FUN_14636c2dd(void)

{
  if (DAT_14cabe9e0 == 0) {
    FUN_14086a14e(&DAT_14cabe9e0,&PTR_FUN_14a5b9478);
  }
  return DAT_14cabe9e0;
}



// FUNCTION 14636c30c FUN_14636c30c body=48 status=ok
// SIG undefined FUN_14636c30c(void)

void FUN_14636c30c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a5c2300;
  return;
}



// FUNCTION 14636c33c FUN_14636c33c body=55 status=ok
// SIG undefined FUN_14636c33c(void)

void FUN_14636c33c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabea00 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabea00 = FUN_140002ddd(FUN_14636c373,uVar1,L"AnimCurveType");
  }
  return;
}



// FUNCTION 14636c373 FUN_14636c373 body=47 status=ok
// SIG undefined FUN_14636c373(void)

longlong FUN_14636c373(void)

{
  if (DAT_14cabe9f8 == 0) {
    FUN_14086a14e(&DAT_14cabe9f8,&PTR_FUN_14a5b9600);
  }
  return DAT_14cabe9f8;
}



// FUNCTION 14636c3a2 FUN_14636c3a2 body=48 status=ok
// SIG undefined FUN_14636c3a2(void)

void FUN_14636c3a2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000002;
  *puVar1 = &PTR_FUN_14a5c2460;
  return;
}



// FUNCTION 14636c3d2 FUN_14636c3d2 body=55 status=ok
// SIG undefined FUN_14636c3d2(void)

void FUN_14636c3d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabea18 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabea18 = FUN_140002ddd(FUN_14636c409,uVar1,L"CurveMetaData");
  }
  return;
}



// FUNCTION 14636c409 FUN_14636c409 body=47 status=ok
// SIG undefined FUN_14636c409(void)

longlong FUN_14636c409(void)

{
  if (DAT_14cabea10 == 0) {
    FUN_14086a14e(&DAT_14cabea10,&PTR_FUN_14a5b9790);
  }
  return DAT_14cabea10;
}



// FUNCTION 14636c438 FUN_14636c438 body=48 status=ok
// SIG undefined FUN_14636c438(void)

void FUN_14636c438(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a5c25c0;
  return;
}



// FUNCTION 14636c468 FUN_14636c468 body=35 status=ok
// SIG undefined FUN_14636c468(void)

void FUN_14636c468(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a5b9870;
  return;
}



// FUNCTION 14636c490 FUN_14636c490 body=47 status=ok
// SIG undefined FUN_14636c490(void)

longlong FUN_14636c490(void)

{
  if (DAT_14cabea30 == 0) {
    FUN_14073dd9a(&DAT_14cabea30,&PTR_LAB_14a5b9828);
  }
  return DAT_14cabea30;
}



// FUNCTION 14636c4bf FUN_14636c4bf body=47 status=ok
// SIG undefined FUN_14636c4bf(void)

longlong FUN_14636c4bf(void)

{
  if (DAT_14cabea48 == 0) {
    FUN_14073dd9a(&DAT_14cabea48,&PTR_LAB_14a5b9c48);
  }
  return DAT_14cabea48;
}



// FUNCTION 14636c4ee FUN_14636c4ee body=47 status=ok
// SIG undefined FUN_14636c4ee(void)

longlong FUN_14636c4ee(void)

{
  if (DAT_14cabea58 == 0) {
    FUN_1409ce572(&DAT_14cabea58,&PTR_FUN_14a5ba090);
  }
  return DAT_14cabea58;
}



// FUNCTION 14636c51d FUN_14636c51d body=47 status=ok
// SIG undefined FUN_14636c51d(void)

longlong FUN_14636c51d(void)

{
  if (DAT_14cabea70 == 0) {
    FUN_1409ce572(&DAT_14cabea70,&PTR_FUN_14a5ba160);
  }
  return DAT_14cabea70;
}



// FUNCTION 14636c54c FUN_14636c54c body=55 status=ok
// SIG undefined FUN_14636c54c(void)

void FUN_14636c54c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabea90 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabea90 = FUN_140002ddd(FUN_14636c583,uVar1,L"AnimCurveParam");
  }
  return;
}



// FUNCTION 14636c583 FUN_14636c583 body=47 status=ok
// SIG undefined FUN_14636c583(void)

longlong FUN_14636c583(void)

{
  if (DAT_14cabea88 == 0) {
    FUN_14086a14e(&DAT_14cabea88,&PTR_FUN_14a5ba200);
  }
  return DAT_14cabea88;
}



// FUNCTION 14636c5b2 FUN_14636c5b2 body=48 status=ok
// SIG undefined FUN_14636c5b2(void)

void FUN_14636c5b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a5c2890;
  return;
}



// FUNCTION 14636c5e2 FUN_14636c5e2 body=55 status=ok
// SIG undefined FUN_14636c5e2(void)

void FUN_14636c5e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabeaa8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabeaa8 = FUN_140002ddd(FUN_14636c619,uVar1,L"AnimCurveBase");
  }
  return;
}



// FUNCTION 14636c619 FUN_14636c619 body=49 status=ok
// SIG undefined FUN_14636c619(void)

longlong FUN_14636c619(void)

{
  if (DAT_14cabeaa0 == 0) {
    FUN_14086a14e(&DAT_14cabeaa0,&PTR_FUN_14a5ba300);
  }
  return DAT_14cabeaa0;
}



// FUNCTION 14636c64a FUN_14636c64a body=48 status=ok
// SIG undefined FUN_14636c64a(void)

void FUN_14636c64a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a5c29f0;
  return;
}



// FUNCTION 14636c67a FUN_14636c67a body=55 status=ok
// SIG undefined FUN_14636c67a(void)

void FUN_14636c67a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabeac0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabeac0 = FUN_140002ddd(FUN_14636c6b1,uVar1,L"FloatCurve");
  }
  return;
}



// FUNCTION 14636c6b1 FUN_14636c6b1 body=49 status=ok
// SIG undefined FUN_14636c6b1(void)

longlong FUN_14636c6b1(void)

{
  if (DAT_14cabeab8 == 0) {
    FUN_14086a14e(&DAT_14cabeab8,&PTR_FUN_14a5ba398);
  }
  return DAT_14cabeab8;
}



// FUNCTION 14636c6e2 FUN_14636c6e2 body=48 status=ok
// SIG undefined FUN_14636c6e2(void)

void FUN_14636c6e2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000090;
  *puVar1 = &PTR_FUN_14a5c2b60;
  return;
}



// FUNCTION 14636c712 FUN_14636c712 body=55 status=ok
// SIG undefined FUN_14636c712(void)

void FUN_14636c712(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabead8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabead8 = FUN_140002ddd(FUN_14636c749,uVar1,L"VectorCurve");
  }
  return;
}



// FUNCTION 14636c749 FUN_14636c749 body=49 status=ok
// SIG undefined FUN_14636c749(void)

longlong FUN_14636c749(void)

{
  if (DAT_14cabead0 == 0) {
    FUN_14086a14e(&DAT_14cabead0,&PTR_FUN_14a5ba450);
  }
  return DAT_14cabead0;
}



// FUNCTION 14636c77a FUN_14636c77a body=48 status=ok
// SIG undefined FUN_14636c77a(void)

void FUN_14636c77a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000190;
  *puVar1 = &PTR_FUN_14a5c2cc0;
  return;
}



// FUNCTION 14636c7aa FUN_14636c7aa body=55 status=ok
// SIG undefined FUN_14636c7aa(void)

void FUN_14636c7aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabeaf0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabeaf0 = FUN_140002ddd(FUN_14636c7e1,uVar1,L"TransformCurve");
  }
  return;
}



// FUNCTION 14636c7e1 FUN_14636c7e1 body=47 status=ok
// SIG undefined FUN_14636c7e1(void)

longlong FUN_14636c7e1(void)

{
  if (DAT_14cabeae8 == 0) {
    FUN_14086a14e(&DAT_14cabeae8,&PTR_FUN_14a5ba5b8);
  }
  return DAT_14cabeae8;
}



// FUNCTION 14636c810 FUN_14636c810 body=48 status=ok
// SIG undefined FUN_14636c810(void)

void FUN_14636c810(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000004c0;
  *puVar1 = &PTR_FUN_14a5c2e20;
  return;
}



// FUNCTION 14636c840 FUN_14636c840 body=55 status=ok
// SIG undefined FUN_14636c840(void)

void FUN_14636c840(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabeb08 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabeb08 = FUN_140002ddd(FUN_14636c877,uVar1,L"CachedFloatCurve");
  }
  return;
}



// FUNCTION 14636c877 FUN_14636c877 body=47 status=ok
// SIG undefined FUN_14636c877(void)

longlong FUN_14636c877(void)

{
  if (DAT_14cabeb00 == 0) {
    FUN_14086a14e(&DAT_14cabeb00,&PTR_FUN_14a5ba670);
  }
  return DAT_14cabeb00;
}



// FUNCTION 14636c8a6 FUN_14636c8a6 body=48 status=ok
// SIG undefined FUN_14636c8a6(void)

void FUN_14636c8a6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14a5c2f90;
  return;
}



// FUNCTION 14636c8d6 FUN_14636c8d6 body=49 status=ok
// SIG undefined FUN_14636c8d6(void)

longlong FUN_14636c8d6(void)

{
  if (DAT_14cabeb18 == 0) {
    FUN_1409ce572(&DAT_14cabeb18,&PTR_FUN_14a5ba700);
  }
  return DAT_14cabeb18;
}



// FUNCTION 14636c908 FUN_14636c908 body=55 status=ok
// SIG undefined FUN_14636c908(void)

void FUN_14636c908(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabeb38 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabeb38 = FUN_140002ddd(FUN_14636c93f,uVar1,L"RawCurveTracks");
  }
  return;
}



// FUNCTION 14636c93f FUN_14636c93f body=47 status=ok
// SIG undefined FUN_14636c93f(void)

longlong FUN_14636c93f(void)

{
  if (DAT_14cabeb30 == 0) {
    FUN_14086a14e(&DAT_14cabeb30,&PTR_FUN_14a5ba7f0);
  }
  return DAT_14cabeb30;
}



// FUNCTION 14636c96e FUN_14636c96e body=48 status=ok
// SIG undefined FUN_14636c96e(void)

void FUN_14636c96e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a5c31a0;
  return;
}



// FUNCTION 14636c99e FUN_14636c99e body=47 status=ok
// SIG undefined FUN_14636c99e(void)

longlong FUN_14636c99e(void)

{
  if (DAT_14cabeb48 == 0) {
    FUN_1409ce572(&DAT_14cabeb48,&PTR_FUN_14a5bab30);
  }
  return DAT_14cabeb48;
}



// FUNCTION 14636c9ce FUN_14636c9ce body=55 status=ok
// SIG undefined FUN_14636c9ce(void)

void FUN_14636c9ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabeb68 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabeb68 = FUN_140002ddd(FUN_14636ca05,uVar1,L"EmptyPayload");
  }
  return;
}



// FUNCTION 14636ca05 FUN_14636ca05 body=49 status=ok
// SIG undefined FUN_14636ca05(void)

longlong FUN_14636ca05(void)

{
  if (DAT_14cabeb60 == 0) {
    FUN_14086a14e(&DAT_14cabeb60,&PTR_FUN_14a5bab88);
  }
  return DAT_14cabeb60;
}



// FUNCTION 14636ca36 FUN_14636ca36 body=48 status=ok
// SIG undefined FUN_14636ca36(void)

void FUN_14636ca36(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14a5c36b0;
  return;
}



// FUNCTION 14636ca66 FUN_14636ca66 body=55 status=ok
// SIG undefined FUN_14636ca66(void)

void FUN_14636ca66(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabeb80 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabeb80 = FUN_140002ddd(FUN_14636ca9d,uVar1,L"BracketPayload");
  }
  return;
}



// FUNCTION 14636ca9d FUN_14636ca9d body=47 status=ok
// SIG undefined FUN_14636ca9d(void)

longlong FUN_14636ca9d(void)

{
  if (DAT_14cabeb78 == 0) {
    FUN_14086a14e(&DAT_14cabeb78,&PTR_FUN_14a5bac30);
  }
  return DAT_14cabeb78;
}



// FUNCTION 14636cacc FUN_14636cacc body=48 status=ok
// SIG undefined FUN_14636cacc(void)

void FUN_14636cacc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a5c3820;
  return;
}



// FUNCTION 14636cafc FUN_14636cafc body=55 status=ok
// SIG undefined FUN_14636cafc(void)

void FUN_14636cafc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabeb98 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabeb98 = FUN_140002ddd(FUN_14636cb33,uVar1,L"AnimationTrackPayload");
  }
  return;
}



// FUNCTION 14636cb33 FUN_14636cb33 body=47 status=ok
// SIG undefined FUN_14636cb33(void)

longlong FUN_14636cb33(void)

{
  if (DAT_14cabeb90 == 0) {
    FUN_14086a14e(&DAT_14cabeb90,&PTR_FUN_14a5bacf0);
  }
  return DAT_14cabeb90;
}



// FUNCTION 14636cb62 FUN_14636cb62 body=48 status=ok
// SIG undefined FUN_14636cb62(void)

void FUN_14636cb62(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14a5c3980;
  return;
}



// FUNCTION 14636cb92 FUN_14636cb92 body=55 status=ok
// SIG undefined FUN_14636cb92(void)

void FUN_14636cb92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabebb0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabebb0 = FUN_140002ddd(FUN_14636cbc9,uVar1,L"AnimationTrackAddedPayload");
  }
  return;
}



// FUNCTION 14636cbc9 FUN_14636cbc9 body=47 status=ok
// SIG undefined FUN_14636cbc9(void)

longlong FUN_14636cbc9(void)

{
  if (DAT_14cabeba8 == 0) {
    FUN_14086a14e(&DAT_14cabeba8,&PTR_FUN_14a5badc0);
  }
  return DAT_14cabeba8;
}



// FUNCTION 14636cbf8 FUN_14636cbf8 body=48 status=ok
// SIG undefined FUN_14636cbf8(void)

void FUN_14636cbf8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a5c3ae0;
  return;
}



// FUNCTION 14636cc28 FUN_14636cc28 body=55 status=ok
// SIG undefined FUN_14636cc28(void)

void FUN_14636cc28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabebc8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabebc8 = FUN_140002ddd(FUN_14636cc5f,uVar1,L"SequenceLengthChangedPayload");
  }
  return;
}



// FUNCTION 14636cc5f FUN_14636cc5f body=47 status=ok
// SIG undefined FUN_14636cc5f(void)

longlong FUN_14636cc5f(void)

{
  if (DAT_14cabebc0 == 0) {
    FUN_14086a14e(&DAT_14cabebc0,&PTR_FUN_14a5bb040);
  }
  return DAT_14cabebc0;
}



// FUNCTION 14636cc8e FUN_14636cc8e body=48 status=ok
// SIG undefined FUN_14636cc8e(void)

void FUN_14636cc8e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000018;
  *puVar1 = &PTR_FUN_14a5c3c40;
  return;
}



// FUNCTION 14636ccbe FUN_14636ccbe body=55 status=ok
// SIG undefined FUN_14636ccbe(void)

void FUN_14636ccbe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabebe0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabebe0 = FUN_140002ddd(FUN_14636ccf5,uVar1,L"FrameRateChangedPayload");
  }
  return;
}



// FUNCTION 14636ccf5 FUN_14636ccf5 body=47 status=ok
// SIG undefined FUN_14636ccf5(void)

longlong FUN_14636ccf5(void)

{
  if (DAT_14cabebd8 == 0) {
    FUN_14086a14e(&DAT_14cabebd8,&PTR_FUN_14a5bb120);
  }
  return DAT_14cabebd8;
}



// FUNCTION 14636cd24 FUN_14636cd24 body=48 status=ok
// SIG undefined FUN_14636cd24(void)

void FUN_14636cd24(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14a5c3da0;
  return;
}



// FUNCTION 14636cd54 FUN_14636cd54 body=55 status=ok
// SIG undefined FUN_14636cd54(void)

void FUN_14636cd54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabebf8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabebf8 = FUN_140002ddd(FUN_14636cd8b,uVar1,L"CurvePayload");
  }
  return;
}



// FUNCTION 14636cd8b FUN_14636cd8b body=49 status=ok
// SIG undefined FUN_14636cd8b(void)

longlong FUN_14636cd8b(void)

{
  if (DAT_14cabebf0 == 0) {
    FUN_14086a14e(&DAT_14cabebf0,&PTR_FUN_14a5bb1d8);
  }
  return DAT_14cabebf0;
}



// FUNCTION 14636cdbc FUN_14636cdbc body=48 status=ok
// SIG undefined FUN_14636cdbc(void)

void FUN_14636cdbc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a5c3f00;
  return;
}



// FUNCTION 14636cdec FUN_14636cdec body=55 status=ok
// SIG undefined FUN_14636cdec(void)

void FUN_14636cdec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabec10 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabec10 = FUN_140002ddd(FUN_14636ce23,uVar1,L"CurveScaledPayload");
  }
  return;
}



// FUNCTION 14636ce23 FUN_14636ce23 body=47 status=ok
// SIG undefined FUN_14636ce23(void)

longlong FUN_14636ce23(void)

{
  if (DAT_14cabec08 == 0) {
    FUN_14086a14e(&DAT_14cabec08,&PTR_FUN_14a5bb2d8);
  }
  return DAT_14cabec08;
}



// FUNCTION 14636ce52 FUN_14636ce52 body=48 status=ok
// SIG undefined FUN_14636ce52(void)

void FUN_14636ce52(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000014;
  *puVar1 = &PTR_FUN_14a5c4060;
  return;
}



// FUNCTION 14636ce82 FUN_14636ce82 body=55 status=ok
// SIG undefined FUN_14636ce82(void)

void FUN_14636ce82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabec28 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabec28 = FUN_140002ddd(FUN_14636ceb9,uVar1,L"CurveRenamedPayload");
  }
  return;
}



// FUNCTION 14636ceb9 FUN_14636ceb9 body=47 status=ok
// SIG undefined FUN_14636ceb9(void)

longlong FUN_14636ceb9(void)

{
  if (DAT_14cabec20 == 0) {
    FUN_14086a14e(&DAT_14cabec20,&PTR_FUN_14a5bb3a8);
  }
  return DAT_14cabec20;
}



// FUNCTION 14636cee8 FUN_14636cee8 body=48 status=ok
// SIG undefined FUN_14636cee8(void)

void FUN_14636cee8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000018;
  *puVar1 = &PTR_FUN_14a5c41c0;
  return;
}



// FUNCTION 14636cf18 FUN_14636cf18 body=55 status=ok
// SIG undefined FUN_14636cf18(void)

void FUN_14636cf18(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabec40 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabec40 = FUN_140002ddd(FUN_14636cf4f,uVar1,L"CurveFlagsChangedPayload");
  }
  return;
}



// FUNCTION 14636cf4f FUN_14636cf4f body=47 status=ok
// SIG undefined FUN_14636cf4f(void)

longlong FUN_14636cf4f(void)

{
  if (DAT_14cabec38 == 0) {
    FUN_14086a14e(&DAT_14cabec38,&PTR_FUN_14a5bb480);
  }
  return DAT_14cabec38;
}



// FUNCTION 14636cf7e FUN_14636cf7e body=48 status=ok
// SIG undefined FUN_14636cf7e(void)

void FUN_14636cf7e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14a5c4320;
  return;
}



// FUNCTION 14636cfae FUN_14636cfae body=55 status=ok
// SIG undefined FUN_14636cfae(void)

void FUN_14636cfae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabec58 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabec58 = FUN_140002ddd(FUN_14636cfe5,uVar1,L"AttributePayload");
  }
  return;
}



// FUNCTION 14636cfe5 FUN_14636cfe5 body=47 status=ok
// SIG undefined FUN_14636cfe5(void)

longlong FUN_14636cfe5(void)

{
  if (DAT_14cabec50 == 0) {
    FUN_14086a14e(&DAT_14cabec50,&PTR_FUN_14a5bb540);
  }
  return DAT_14cabec50;
}



// FUNCTION 14636d014 FUN_14636d014 body=48 status=ok
// SIG undefined FUN_14636d014(void)

void FUN_14636d014(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14a5c4480;
  return;
}



// FUNCTION 14636d044 FUN_14636d044 body=55 status=ok
// SIG undefined FUN_14636d044(void)

void FUN_14636d044(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabec70 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabec70 = FUN_140002ddd(FUN_14636d07b,uVar1,L"AnimDataModelNotifPayload");
  }
  return;
}



// FUNCTION 14636d07b FUN_14636d07b body=47 status=ok
// SIG undefined FUN_14636d07b(void)

longlong FUN_14636d07b(void)

{
  if (DAT_14cabec68 == 0) {
    FUN_14086a14e(&DAT_14cabec68,&PTR_FUN_14a5bb5c8);
  }
  return DAT_14cabec68;
}



// FUNCTION 14636d0aa FUN_14636d0aa body=48 status=ok
// SIG undefined FUN_14636d0aa(void)

void FUN_14636d0aa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a5c45e0;
  return;
}



// FUNCTION 14636d0da FUN_14636d0da body=35 status=ok
// SIG undefined FUN_14636d0da(void)

void FUN_14636d0da(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a5bb6b0;
  return;
}



// FUNCTION 14636d0fd FUN_14636d0fd body=47 status=ok
// SIG undefined FUN_14636d0fd(void)

longlong FUN_14636d0fd(void)

{
  if (DAT_14cabec88 == 0) {
    FUN_14073dd9a(&DAT_14cabec88,&PTR_LAB_14a5bb668);
  }
  return DAT_14cabec88;
}



// FUNCTION 14636d12c FUN_14636d12c body=47 status=ok
// SIG undefined FUN_14636d12c(void)

longlong FUN_14636d12c(void)

{
  if (DAT_14cabec98 == 0) {
    FUN_14000fc22(&DAT_14cabec98,&PTR_FUN_14a5bbab8);
  }
  return DAT_14cabec98;
}



// FUNCTION 14636d15b FUN_14636d15b body=49 status=ok
// SIG undefined FUN_14636d15b(void)

longlong FUN_14636d15b(void)

{
  if (DAT_14cabeca0 == 0) {
    FUN_1409ce572(&DAT_14cabeca0,&PTR_FUN_14a5bbd90);
  }
  return DAT_14cabeca0;
}



// FUNCTION 14636d18c FUN_14636d18c body=47 status=ok
// SIG undefined FUN_14636d18c(void)

longlong FUN_14636d18c(void)

{
  if (DAT_14cabecb8 == 0) {
    FUN_1409ce572(&DAT_14cabecb8,&PTR_FUN_14a5bbe30);
  }
  return DAT_14cabecb8;
}



// FUNCTION 14636d1bb FUN_14636d1bb body=47 status=ok
// SIG undefined FUN_14636d1bb(void)

longlong FUN_14636d1bb(void)

{
  if (DAT_14cabecd0 == 0) {
    FUN_1409ce572(&DAT_14cabecd0,&PTR_FUN_14a5bbee0);
  }
  return DAT_14cabecd0;
}



// FUNCTION 14636d1ea FUN_14636d1ea body=49 status=ok
// SIG undefined FUN_14636d1ea(void)

longlong FUN_14636d1ea(void)

{
  if (DAT_14cabece8 == 0) {
    FUN_1409ce572(&DAT_14cabece8,&PTR_FUN_14a5bbfb0);
  }
  return DAT_14cabece8;
}



// FUNCTION 14636d21c FUN_14636d21c body=55 status=ok
// SIG undefined FUN_14636d21c(void)

void FUN_14636d21c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabed08 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabed08 = FUN_140002ddd(FUN_14636d253,uVar1,L"InertializationRequest");
  }
  return;
}



// FUNCTION 14636d253 FUN_14636d253 body=49 status=ok
// SIG undefined FUN_14636d253(void)

longlong FUN_14636d253(void)

{
  if (DAT_14cabed00 == 0) {
    FUN_14086a14e(&DAT_14cabed00,&PTR_FUN_14a5bc398);
  }
  return DAT_14cabed00;
}



// FUNCTION 14636d284 FUN_14636d284 body=48 status=ok
// SIG undefined FUN_14636d284(void)

void FUN_14636d284(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14a5c49b0;
  return;
}



// FUNCTION 14636d2b4 FUN_14636d2b4 body=47 status=ok
// SIG undefined FUN_14636d2b4(void)

longlong FUN_14636d2b4(void)

{
  if (DAT_14cabed18 == 0) {
    FUN_1409ce572(&DAT_14cabed18,&PTR_FUN_14a5bc440);
  }
  return DAT_14cabed18;
}



// FUNCTION 14636d2e3 FUN_14636d2e3 body=47 status=ok
// SIG undefined FUN_14636d2e3(void)

longlong FUN_14636d2e3(void)

{
  if (DAT_14cabed30 == 0) {
    FUN_14086a14e(&DAT_14cabed30,&PTR_FUN_14a5bc550);
  }
  return DAT_14cabed30;
}



// FUNCTION 14636d312 FUN_14636d312 body=48 status=ok
// SIG undefined FUN_14636d312(void)

void FUN_14636d312(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000004;
  *puVar1 = &PTR_FUN_14a5c4bc0;
  return;
}



// FUNCTION 14636d342 FUN_14636d342 body=35 status=ok
// SIG undefined FUN_14636d342(void)

void FUN_14636d342(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a5bc660;
  return;
}



// FUNCTION 14636d36a FUN_14636d36a body=47 status=ok
// SIG undefined FUN_14636d36a(void)

longlong FUN_14636d36a(void)

{
  if (DAT_14cabed50 == 0) {
    FUN_14073dd9a(&DAT_14cabed50,&PTR_LAB_14a5bc618);
  }
  return DAT_14cabed50;
}



// FUNCTION 14636d39a FUN_14636d39a body=55 status=ok
// SIG undefined FUN_14636d39a(void)

void FUN_14636d39a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabed68 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabed68 = FUN_140002ddd(FUN_14636d3d1,uVar1,L"AnimNodeConstantData");
  }
  return;
}



// FUNCTION 14636d3d1 FUN_14636d3d1 body=47 status=ok
// SIG undefined FUN_14636d3d1(void)

longlong FUN_14636d3d1(void)

{
  if (DAT_14cabed60 == 0) {
    FUN_14086a14e(&DAT_14cabed60,&PTR_FUN_14a5bca18);
  }
  return DAT_14cabed60;
}



// FUNCTION 14636d400 FUN_14636d400 body=48 status=ok
// SIG undefined FUN_14636d400(void)

void FUN_14636d400(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a5c4d20;
  return;
}



// FUNCTION 14636d430 FUN_14636d430 body=47 status=ok
// SIG undefined FUN_14636d430(void)

longlong FUN_14636d430(void)

{
  if (DAT_14cabed78 == 0) {
    FUN_1409ce572(&DAT_14cabed78,&PTR_FUN_14a5bcae0);
  }
  return DAT_14cabed78;
}



// FUNCTION 14636d45f FUN_14636d45f body=47 status=ok
// SIG undefined FUN_14636d45f(void)

longlong FUN_14636d45f(void)

{
  if (DAT_14cabed90 == 0) {
    FUN_1409ce572(&DAT_14cabed90,&PTR_FUN_14a5bcb60);
  }
  return DAT_14cabed90;
}



// FUNCTION 14636d48e FUN_14636d48e body=47 status=ok
// SIG undefined FUN_14636d48e(void)

longlong FUN_14636d48e(void)

{
  if (DAT_14cabeda8 == 0) {
    FUN_1409ce572(&DAT_14cabeda8,&PTR_FUN_14a5bcbf0);
  }
  return DAT_14cabeda8;
}



// FUNCTION 14636d4bd FUN_14636d4bd body=47 status=ok
// SIG undefined FUN_14636d4bd(void)

longlong FUN_14636d4bd(void)

{
  if (DAT_14cabedc0 == 0) {
    FUN_1409ce572(&DAT_14cabedc0,&PTR_FUN_14a5bccb0);
  }
  return DAT_14cabedc0;
}



// FUNCTION 14636d4f7 FUN_14636d4f7 body=49 status=ok
// SIG undefined FUN_14636d4f7(void)

longlong FUN_14636d4f7(void)

{
  if (DAT_14cabeef8 == 0) {
    FUN_14086a14e(&DAT_14cabeef8,&PTR_FUN_14a5be298);
  }
  return DAT_14cabeef8;
}



// FUNCTION 14636d528 FUN_14636d528 body=49 status=ok
// SIG undefined FUN_14636d528(void)

longlong FUN_14636d528(void)

{
  if (DAT_14cabede0 == 0) {
    FUN_14073dd9a(&DAT_14cabede0,&PTR_LAB_14a5bcef8);
  }
  return DAT_14cabede0;
}



// FUNCTION 14636d55a FUN_14636d55a body=55 status=ok
// SIG undefined FUN_14636d55a(void)

void FUN_14636d55a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabedf8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabedf8 = FUN_140002ddd(FUN_14636d591,uVar1,L"SlotEvaluationPose");
  }
  return;
}



// FUNCTION 14636d591 FUN_14636d591 body=47 status=ok
// SIG undefined FUN_14636d591(void)

longlong FUN_14636d591(void)

{
  if (DAT_14cabedf0 == 0) {
    FUN_14086a14e(&DAT_14cabedf0,&PTR_FUN_14a5bd4f8);
  }
  return DAT_14cabedf0;
}



// FUNCTION 14636d5c0 FUN_14636d5c0 body=47 status=ok
// SIG undefined FUN_14636d5c0(void)

longlong FUN_14636d5c0(void)

{
  if (DAT_14cabef58 == 0) {
    FUN_1409ce572(&DAT_14cabef58,&PTR_FUN_14a5be6a0);
  }
  return DAT_14cabef58;
}



// FUNCTION 14636d5f0 FUN_14636d5f0 body=48 status=ok
// SIG undefined FUN_14636d5f0(void)

void FUN_14636d5f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000080;
  *puVar1 = &PTR_FUN_14a5c50d0;
  return;
}



// FUNCTION 14636d620 FUN_14636d620 body=49 status=ok
// SIG undefined FUN_14636d620(void)

longlong FUN_14636d620(void)

{
  if (DAT_14cabee08 == 0) {
    FUN_14086a14e(&DAT_14cabee08,&PTR_FUN_14a5bd588);
  }
  return DAT_14cabee08;
}



// FUNCTION 14636d652 FUN_14636d652 body=48 status=ok
// SIG undefined FUN_14636d652(void)

void FUN_14636d652(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14a5c5230;
  return;
}



// FUNCTION 14636d682 FUN_14636d682 body=47 status=ok
// SIG undefined FUN_14636d682(void)

longlong FUN_14636d682(void)

{
  if (DAT_14cabee20 == 0) {
    FUN_14086a14e(&DAT_14cabee20,&PTR_FUN_14a5bd630);
  }
  return DAT_14cabee20;
}



// FUNCTION 14636d6b2 FUN_14636d6b2 body=48 status=ok
// SIG undefined FUN_14636d6b2(void)

void FUN_14636d6b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000008;
  *puVar1 = &PTR_FUN_14a5c53d0;
  return;
}



// FUNCTION 14636d6e2 FUN_14636d6e2 body=55 status=ok
// SIG undefined FUN_14636d6e2(void)

void FUN_14636d6e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabee40 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabee40 = FUN_140002ddd(FUN_14636d719,uVar1,L"AnimSubsystem_BlendSpaceGraph");
  }
  return;
}



// FUNCTION 14636d719 FUN_14636d719 body=47 status=ok
// SIG undefined FUN_14636d719(void)

longlong FUN_14636d719(void)

{
  if (DAT_14cabee38 == 0) {
    FUN_14086a14e(&DAT_14cabee38,&PTR_FUN_14a5bd790);
  }
  return DAT_14cabee38;
}



// FUNCTION 14636d748 FUN_14636d748 body=48 status=ok
// SIG undefined FUN_14636d748(void)

void FUN_14636d748(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14a5c5540;
  return;
}



// FUNCTION 14636d778 FUN_14636d778 body=47 status=ok
// SIG undefined FUN_14636d778(void)

longlong FUN_14636d778(void)

{
  if (DAT_14cabee50 == 0) {
    FUN_1409ce572(&DAT_14cabee50,&PTR_FUN_14a5bd840);
  }
  return DAT_14cabee50;
}



// FUNCTION 14636d7a7 FUN_14636d7a7 body=47 status=ok
// SIG undefined FUN_14636d7a7(void)

longlong FUN_14636d7a7(void)

{
  if (DAT_14cabee80 == 0) {
    FUN_1409ce572(&DAT_14cabee80,&PTR_FUN_14a5bd960);
  }
  return DAT_14cabee80;
}



// FUNCTION 14636d7d6 FUN_14636d7d6 body=47 status=ok
// SIG undefined FUN_14636d7d6(void)

longlong FUN_14636d7d6(void)

{
  if (DAT_14cabee98 == 0) {
    FUN_1409ce572(&DAT_14cabee98,&PTR_FUN_14a5bd9f0);
  }
  return DAT_14cabee98;
}



// FUNCTION 14636d805 FUN_14636d805 body=47 status=ok
// SIG undefined FUN_14636d805(void)

longlong FUN_14636d805(void)

{
  if (DAT_14cabeeb0 == 0) {
    FUN_1409ce572(&DAT_14cabeeb0,&PTR_FUN_14a5bda70);
  }
  return DAT_14cabeeb0;
}



// FUNCTION 14636d834 FUN_14636d834 body=55 status=ok
// SIG undefined FUN_14636d834(void)

void FUN_14636d834(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabeed0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabeed0 = FUN_140002ddd(FUN_14636d86b,uVar1,L"PerBoneBlendWeight");
  }
  return;
}



// FUNCTION 14636d86b FUN_14636d86b body=49 status=ok
// SIG undefined FUN_14636d86b(void)

longlong FUN_14636d86b(void)

{
  if (DAT_14cabeec8 == 0) {
    FUN_14086a14e(&DAT_14cabeec8,&PTR_FUN_14a5bdb68);
  }
  return DAT_14cabeec8;
}



// FUNCTION 14636d89c FUN_14636d89c body=48 status=ok
// SIG undefined FUN_14636d89c(void)

void FUN_14636d89c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000008;
  *puVar1 = &PTR_FUN_14a5c58a0;
  return;
}



// FUNCTION 14636d8cc FUN_14636d8cc body=55 status=ok
// SIG undefined FUN_14636d8cc(void)

void FUN_14636d8cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabeee8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabeee8 = FUN_140002ddd(FUN_14636d903,uVar1,L"PerBoneBlendWeights");
  }
  return;
}



// FUNCTION 14636d903 FUN_14636d903 body=47 status=ok
// SIG undefined FUN_14636d903(void)

longlong FUN_14636d903(void)

{
  if (DAT_14cabeee0 == 0) {
    FUN_14086a14e(&DAT_14cabeee0,&PTR_FUN_14a5bdc70);
  }
  return DAT_14cabeee0;
}



// FUNCTION 14636d932 FUN_14636d932 body=48 status=ok
// SIG undefined FUN_14636d932(void)

void FUN_14636d932(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14a5c5a00;
  return;
}



// FUNCTION 14636d962 FUN_14636d962 body=55 status=ok
// SIG undefined FUN_14636d962(void)

void FUN_14636d962(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabef00 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabef00 = FUN_140002ddd(FUN_14636d4f7,uVar1,L"AnimNotifyEvent");
  }
  return;
}



// FUNCTION 14636d99a FUN_14636d99a body=48 status=ok
// SIG undefined FUN_14636d99a(void)

void FUN_14636d99a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b8;
  *puVar1 = &PTR_FUN_14a5c5b60;
  return;
}



// FUNCTION 14636d9ca FUN_14636d9ca body=55 status=ok
// SIG undefined FUN_14636d9ca(void)

void FUN_14636d9ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabef18 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabef18 = FUN_140002ddd(FUN_14636da01,uVar1,L"AnimSyncMarker");
  }
  return;
}



// FUNCTION 14636da01 FUN_14636da01 body=49 status=ok
// SIG undefined FUN_14636da01(void)

longlong FUN_14636da01(void)

{
  if (DAT_14cabef10 == 0) {
    FUN_14086a14e(&DAT_14cabef10,&PTR_FUN_14a5be380);
  }
  return DAT_14cabef10;
}



// FUNCTION 14636da32 FUN_14636da32 body=48 status=ok
// SIG undefined FUN_14636da32(void)

void FUN_14636da32(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14a5c5cc0;
  return;
}



// FUNCTION 14636da62 FUN_14636da62 body=47 status=ok
// SIG undefined FUN_14636da62(void)

longlong FUN_14636da62(void)

{
  if (DAT_14cabef28 == 0) {
    FUN_1409ce572(&DAT_14cabef28,&PTR_FUN_14a5be410);
  }
  return DAT_14cabef28;
}



// FUNCTION 14636da92 FUN_14636da92 body=55 status=ok
// SIG undefined FUN_14636da92(void)

void FUN_14636da92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabef48 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabef48 = FUN_140002ddd(FUN_14636dac9,uVar1,L"AnimNotifyTrack");
  }
  return;
}



// FUNCTION 14636dac9 FUN_14636dac9 body=47 status=ok
// SIG undefined FUN_14636dac9(void)

longlong FUN_14636dac9(void)

{
  if (DAT_14cabef40 == 0) {
    FUN_14086a14e(&DAT_14cabef40,&PTR_FUN_14a5be608);
  }
  return DAT_14cabef40;
}



// FUNCTION 14636daf8 FUN_14636daf8 body=48 status=ok
// SIG undefined FUN_14636daf8(void)

void FUN_14636daf8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14a5c5ed0;
  return;
}



// FUNCTION 14636db28 FUN_14636db28 body=47 status=ok
// SIG undefined FUN_14636db28(void)

longlong FUN_14636db28(void)

{
  if (DAT_14cabef70 == 0) {
    FUN_1409ce572(&DAT_14cabef70,&PTR_FUN_14a5be770);
  }
  return DAT_14cabef70;
}



// FUNCTION 14636db58 FUN_14636db58 body=55 status=ok
// SIG undefined FUN_14636db58(void)

void FUN_14636db58(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabef90 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabef90 = FUN_140002ddd(FUN_14636db8f,uVar1,L"MarkerSyncData");
  }
  return;
}



// FUNCTION 14636db8f FUN_14636db8f body=47 status=ok
// SIG undefined FUN_14636db8f(void)

longlong FUN_14636db8f(void)

{
  if (DAT_14cabef88 == 0) {
    FUN_14086a14e(&DAT_14cabef88,&PTR_FUN_14a5be870);
  }
  return DAT_14cabef88;
}



// FUNCTION 14636dbbe FUN_14636dbbe body=48 status=ok
// SIG undefined FUN_14636dbbe(void)

void FUN_14636dbbe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a5c61b0;
  return;
}



// FUNCTION 14636dbee FUN_14636dbee body=49 status=ok
// SIG undefined FUN_14636dbee(void)

longlong FUN_14636dbee(void)

{
  if (DAT_14cabefa0 == 0) {
    FUN_1409ce572(&DAT_14cabefa0,&PTR_FUN_14a5be8e0);
  }
  return DAT_14cabefa0;
}



// FUNCTION 14636dc1f FUN_14636dc1f body=47 status=ok
// SIG undefined FUN_14636dc1f(void)

longlong FUN_14636dc1f(void)

{
  if (DAT_14cabefb8 == 0) {
    FUN_1409ce572(&DAT_14cabefb8,&PTR_FUN_14a5be9a0);
  }
  return DAT_14cabefb8;
}



// FUNCTION 14636dc4e FUN_14636dc4e body=47 status=ok
// SIG undefined FUN_14636dc4e(void)

longlong FUN_14636dc4e(void)

{
  if (DAT_14cabefd0 == 0) {
    FUN_1409ce572(&DAT_14cabefd0,&PTR_FUN_14a5beab0);
  }
  return DAT_14cabefd0;
}



// FUNCTION 14636dc7e FUN_14636dc7e body=55 status=ok
// SIG undefined FUN_14636dc7e(void)

void FUN_14636dc7e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabeff0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabeff0 = FUN_140002ddd(FUN_14636dcb5,uVar1,L"TrackToSkeletonMap");
  }
  return;
}



// FUNCTION 14636dcb5 FUN_14636dcb5 body=47 status=ok
// SIG undefined FUN_14636dcb5(void)

longlong FUN_14636dcb5(void)

{
  if (DAT_14cabefe8 == 0) {
    FUN_14086a14e(&DAT_14cabefe8,&PTR_FUN_14a5beb70);
  }
  return DAT_14cabefe8;
}



// FUNCTION 14636dce4 FUN_14636dce4 body=48 status=ok
// SIG undefined FUN_14636dce4(void)

void FUN_14636dce4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000004;
  *puVar1 = &PTR_FUN_14a5c6510;
  return;
}



// FUNCTION 14636dd14 FUN_14636dd14 body=55 status=ok
// SIG undefined FUN_14636dd14(void)

void FUN_14636dd14(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf008 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf008 = FUN_140002ddd(FUN_14636dd4b,uVar1,L"RawAnimSequenceTrack");
  }
  return;
}



// FUNCTION 14636dd4b FUN_14636dd4b body=49 status=ok
// SIG undefined FUN_14636dd4b(void)

longlong FUN_14636dd4b(void)

{
  if (DAT_14cabf000 == 0) {
    FUN_14086a14e(&DAT_14cabf000,&PTR_FUN_14a5beda8);
  }
  return DAT_14cabf000;
}



// FUNCTION 14636dd7c FUN_14636dd7c body=48 status=ok
// SIG undefined FUN_14636dd7c(void)

void FUN_14636dd7c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14a5c6670;
  return;
}



// FUNCTION 14636ddac FUN_14636ddac body=49 status=ok
// SIG undefined FUN_14636ddac(void)

longlong FUN_14636ddac(void)

{
  if (DAT_14cabf038 == 0) {
    FUN_14073dd9a(&DAT_14cabf038,&PTR_LAB_14a5bf230);
  }
  return DAT_14cabf038;
}



// FUNCTION 14636dddd FUN_14636dddd body=47 status=ok
// SIG undefined FUN_14636dddd(void)

longlong FUN_14636dddd(void)

{
  if (DAT_14cabf018 == 0) {
    FUN_14000fc22(&DAT_14cabf018,&PTR_FUN_14a5beed0);
  }
  return DAT_14cabf018;
}



// FUNCTION 14636de0c FUN_14636de0c body=47 status=ok
// SIG undefined FUN_14636de0c(void)

longlong FUN_14636de0c(void)

{
  if (DAT_14cabf020 == 0) {
    FUN_14000fc22(&DAT_14cabf020,&PTR_FUN_14a5bf000);
  }
  return DAT_14cabf020;
}



// FUNCTION 14636de3b FUN_14636de3b body=47 status=ok
// SIG undefined FUN_14636de3b(void)

longlong FUN_14636de3b(void)

{
  if (DAT_14cabf028 == 0) {
    FUN_14000fc22(&DAT_14cabf028,&PTR_FUN_14a5bf128);
  }
  return DAT_14cabf028;
}



// FUNCTION 14636de6a FUN_14636de6a body=34 status=ok
// SIG undefined FUN_14636de6a(void)

void FUN_14636de6a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a6aff6();
  FUN_14069c8d6(uVar1,&PTR_s_GetPositionalKeys_14a5bf170,3);
  return;
}



// FUNCTION 14636de8c FUN_14636de8c body=35 status=ok
// SIG undefined FUN_14636de8c(void)

void FUN_14636de8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a5bf270;
  return;
}



// FUNCTION 14636deaf FUN_14636deaf body=62 status=ok
// SIG undefined FUN_14636deaf(void)

void FUN_14636deaf(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a5bfcc0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  return;
}



// FUNCTION 14636def3 FUN_14636def3 body=47 status=ok
// SIG undefined FUN_14636def3(void)

longlong FUN_14636def3(void)

{
  if (DAT_14cabf050 == 0) {
    FUN_14073dd9a(&DAT_14cabf050,&PTR_LAB_14a5bfc78);
  }
  return DAT_14cabf050;
}



// FUNCTION 14636df22 FUN_14636df22 body=47 status=ok
// SIG undefined FUN_14636df22(void)

longlong FUN_14636df22(void)

{
  if (DAT_14cabf060 == 0) {
    FUN_14086a14e(&DAT_14cabf060,&PTR_FUN_14a5c0018);
  }
  return DAT_14cabf060;
}



// FUNCTION 14636df52 FUN_14636df52 body=48 status=ok
// SIG undefined FUN_14636df52(void)

void FUN_14636df52(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14a5c67e0;
  return;
}



// FUNCTION 14636df82 FUN_14636df82 body=55 status=ok
// SIG undefined FUN_14636df82(void)

void FUN_14636df82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf080 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf080 = FUN_140002ddd(FUN_14636dfb9,uVar1,L"AssetManagerRedirect");
  }
  return;
}



// FUNCTION 14636dfb9 FUN_14636dfb9 body=49 status=ok
// SIG undefined FUN_14636dfb9(void)

longlong FUN_14636dfb9(void)

{
  if (DAT_14cabf078 == 0) {
    FUN_14086a14e(&DAT_14cabf078,&PTR_FUN_14a5c0148);
  }
  return DAT_14cabf078;
}



// FUNCTION 14636dfea FUN_14636dfea body=48 status=ok
// SIG undefined FUN_14636dfea(void)

void FUN_14636dfea(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14a5c6950;
  return;
}



// FUNCTION 14636e01a FUN_14636e01a body=55 status=ok
// SIG undefined FUN_14636e01a(void)

void FUN_14636e01a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabf098 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabf098 = FUN_140002ddd(FUN_14636e051,uVar1,L"PrimaryAssetRulesOverride");
  }
  return;
}



// FUNCTION 14636e051 FUN_14636e051 body=47 status=ok
// SIG undefined FUN_14636e051(void)

longlong FUN_14636e051(void)

{
  if (DAT_14cabf090 == 0) {
    FUN_14086a14e(&DAT_14cabf090,&PTR_FUN_14a5c0270);
  }
  return DAT_14cabf090;
}


