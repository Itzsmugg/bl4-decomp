// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1464660f4 FUN_1464660f4 body=34 status=ok
// SIG undefined FUN_1464660f4(void)

undefined8 FUN_1464660f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 146466116 FUN_146466116 body=49 status=ok
// SIG undefined FUN_146466116(void)

longlong FUN_146466116(void)

{
  if (DAT_14cb36278 == 0) {
    FUN_14073dd9a(&DAT_14cb36278,&PTR_LAB_14ad5e470);
  }
  return DAT_14cb36278;
}



// FUNCTION 146466147 FUN_146466147 body=47 status=ok
// SIG undefined FUN_146466147(void)

longlong FUN_146466147(void)

{
  if (DAT_14cb36260 == 0) {
    FUN_14000fc22(&DAT_14cb36260,&PTR_FUN_14ad5e1f0);
  }
  return DAT_14cb36260;
}



// FUNCTION 146466176 FUN_146466176 body=47 status=ok
// SIG undefined FUN_146466176(void)

longlong FUN_146466176(void)

{
  if (DAT_14cb36268 == 0) {
    FUN_14000fc22(&DAT_14cb36268,&PTR_FUN_14ad5e290);
  }
  return DAT_14cb36268;
}



// FUNCTION 1464661a6 FUN_1464661a6 body=34 status=ok
// SIG undefined FUN_1464661a6(void)

void FUN_1464661a6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1458935e0();
  FUN_14069c8d6(uVar1,&PTR_s_GetDataChannelReader_14ad5e2d0,2);
  return;
}



// FUNCTION 1464661cd FUN_1464661cd body=58 status=ok
// SIG undefined FUN_1464661cd(void)

void FUN_1464661cd(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad5e4b0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  FUN_144a78564(puVar1 + 0xb);
  return;
}



// FUNCTION 146466207 FUN_146466207 body=43 status=ok
// SIG undefined FUN_146466207(void)

void FUN_146466207(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad5e890;
  puVar1[5] = 0;
  return;
}



// FUNCTION 146466237 FUN_146466237 body=47 status=ok
// SIG undefined FUN_146466237(void)

longlong FUN_146466237(void)

{
  if (DAT_14cb36290 == 0) {
    FUN_14073dd9a(&DAT_14cb36290,&PTR_LAB_14ad5e848);
  }
  return DAT_14cb36290;
}



// FUNCTION 146466266 FUN_146466266 body=55 status=ok
// SIG undefined FUN_146466266(void)

void FUN_146466266(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb362a8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb362a8 = FUN_140002ddd(FUN_14646629d,uVar1,L"NiagaraDataChannelVariable");
  }
  return;
}



// FUNCTION 14646629d FUN_14646629d body=47 status=ok
// SIG undefined FUN_14646629d(void)

longlong FUN_14646629d(void)

{
  if (DAT_14cb362a0 == 0) {
    FUN_14086a14e(&DAT_14cb362a0,&PTR_FUN_14ad5eb88);
  }
  return DAT_14cb362a0;
}



// FUNCTION 1464662cc FUN_1464662cc body=43 status=ok
// SIG undefined FUN_1464662cc(void)

void FUN_1464662cc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14ad67e10;
  return;
}



// FUNCTION 1464662f8 FUN_1464662f8 body=55 status=ok
// SIG undefined FUN_1464662f8(void)

void FUN_1464662f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb362c0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb362c0 = FUN_140002ddd(FUN_14646632f,uVar1,L"NiagaraDataChannelSearchParameters");
  }
  return;
}



// FUNCTION 14646632f FUN_14646632f body=49 status=ok
// SIG undefined FUN_14646632f(void)

longlong FUN_14646632f(void)

{
  if (DAT_14cb362b8 == 0) {
    FUN_14086a14e(&DAT_14cb362b8,&PTR_FUN_14ad5ed10);
  }
  return DAT_14cb362b8;
}



// FUNCTION 146466360 FUN_146466360 body=43 status=ok
// SIG undefined FUN_146466360(void)

void FUN_146466360(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14ad67f80;
  return;
}



// FUNCTION 14646638c FUN_14646638c body=55 status=ok
// SIG undefined FUN_14646638c(void)

void FUN_14646638c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb362d8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb362d8 = FUN_140002ddd(FUN_1464663c3,uVar1,L"NiagaraDataChannelGameDataLayout");
  }
  return;
}



// FUNCTION 1464663c3 FUN_1464663c3 body=47 status=ok
// SIG undefined FUN_1464663c3(void)

longlong FUN_1464663c3(void)

{
  if (DAT_14cb362d0 == 0) {
    FUN_14086a14e(&DAT_14cb362d0,&PTR_FUN_14ad5ef40);
  }
  return DAT_14cb362d0;
}



// FUNCTION 1464663f2 FUN_1464663f2 body=43 status=ok
// SIG undefined FUN_1464663f2(void)

void FUN_1464663f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000060;
  *puVar1 = &PTR_FUN_14ad680e0;
  return;
}



// FUNCTION 146466423 FUN_146466423 body=47 status=ok
// SIG undefined FUN_146466423(void)

longlong FUN_146466423(void)

{
  if (DAT_14cb362f0 == 0) {
    FUN_14073dd9a(&DAT_14cb362f0,&PTR_LAB_14ad5f078);
  }
  return DAT_14cb362f0;
}



// FUNCTION 146466452 FUN_146466452 body=47 status=ok
// SIG undefined FUN_146466452(void)

longlong FUN_146466452(void)

{
  if (DAT_14cb36308 == 0) {
    FUN_14073dd9a(&DAT_14cb36308,&PTR_LAB_14ad5f3c8);
  }
  return DAT_14cb36308;
}



// FUNCTION 146466481 FUN_146466481 body=47 status=ok
// SIG undefined FUN_146466481(void)

longlong FUN_146466481(void)

{
  if (DAT_14cb36318 == 0) {
    FUN_1409ce572(&DAT_14cb36318,&PTR_FUN_14ad5f4a0);
  }
  return DAT_14cb36318;
}



// FUNCTION 1464664b0 FUN_1464664b0 body=55 status=ok
// SIG undefined FUN_1464664b0(void)

void FUN_1464664b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36338 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36338 = FUN_140002ddd(FUN_1464664e7,uVar1,L"NDCIsland");
  }
  return;
}



// FUNCTION 1464664e7 FUN_1464664e7 body=47 status=ok
// SIG undefined FUN_1464664e7(void)

longlong FUN_1464664e7(void)

{
  if (DAT_14cb36330 == 0) {
    FUN_14086a14e(&DAT_14cb36330,&PTR_FUN_14ad5f620);
  }
  return DAT_14cb36330;
}



// FUNCTION 14646651c FUN_14646651c body=43 status=ok
// SIG undefined FUN_14646651c(void)

void FUN_14646651c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14ad682d0;
  return;
}



// FUNCTION 146466548 FUN_146466548 body=55 status=ok
// SIG undefined FUN_146466548(void)

void FUN_146466548(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36350 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36350 = FUN_140002ddd(FUN_14646657f,uVar1,L"NDCIslandDebugDrawSettings");
  }
  return;
}



// FUNCTION 14646657f FUN_14646657f body=47 status=ok
// SIG undefined FUN_14646657f(void)

longlong FUN_14646657f(void)

{
  if (DAT_14cb36348 == 0) {
    FUN_14086a14e(&DAT_14cb36348,&PTR_FUN_14ad5f760);
  }
  return DAT_14cb36348;
}



// FUNCTION 1464665ae FUN_1464665ae body=43 status=ok
// SIG undefined FUN_1464665ae(void)

void FUN_1464665ae(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000004;
  *puVar1 = &PTR_FUN_14ad68440;
  return;
}



// FUNCTION 1464665d9 FUN_1464665d9 body=47 status=ok
// SIG undefined FUN_1464665d9(void)

longlong FUN_1464665d9(void)

{
  if (DAT_14cb36368 == 0) {
    FUN_14073dd9a(&DAT_14cb36368,&PTR_LAB_14ad5fb68);
  }
  return DAT_14cb36368;
}



// FUNCTION 146466608 FUN_146466608 body=47 status=ok
// SIG undefined FUN_146466608(void)

longlong FUN_146466608(void)

{
  if (DAT_14cb36380 == 0) {
    FUN_14073dd9a(&DAT_14cb36380,&PTR_LAB_14ad60078);
  }
  return DAT_14cb36380;
}



// FUNCTION 146466637 FUN_146466637 body=47 status=ok
// SIG undefined FUN_146466637(void)

longlong FUN_146466637(void)

{
  if (DAT_14cb363a0 == 0) {
    FUN_1409ce572(&DAT_14cb363a0,&PTR_FUN_14ad601d0);
  }
  return DAT_14cb363a0;
}



// FUNCTION 146466666 FUN_146466666 body=55 status=ok
// SIG undefined FUN_146466666(void)

void FUN_146466666(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb363c0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb363c0 = FUN_140002ddd(FUN_14646669d,uVar1,L"NDIDataChannelFunctionInfo");
  }
  return;
}



// FUNCTION 14646669d FUN_14646669d body=47 status=ok
// SIG undefined FUN_14646669d(void)

longlong FUN_14646669d(void)

{
  if (DAT_14cb363b8 == 0) {
    FUN_14086a14e(&DAT_14cb363b8,&PTR_FUN_14ad603a8);
  }
  return DAT_14cb363b8;
}



// FUNCTION 1464666cc FUN_1464666cc body=43 status=ok
// SIG undefined FUN_1464666cc(void)

void FUN_1464666cc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14ad68640;
  return;
}



// FUNCTION 1464666f8 FUN_1464666f8 body=55 status=ok
// SIG undefined FUN_1464666f8(void)

void FUN_1464666f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb363d8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb363d8 =
         FUN_140002ddd(FUN_14646672f,uVar1,L"NDIDataChannel_GPUScriptParameterAccessInfo");
  }
  return;
}



// FUNCTION 14646672f FUN_14646672f body=47 status=ok
// SIG undefined FUN_14646672f(void)

longlong FUN_14646672f(void)

{
  if (DAT_14cb363d0 == 0) {
    FUN_14086a14e(&DAT_14cb363d0,&PTR_FUN_14ad60510);
  }
  return DAT_14cb363d0;
}



// FUNCTION 14646675e FUN_14646675e body=43 status=ok
// SIG undefined FUN_14646675e(void)

void FUN_14646675e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14ad687b0;
  return;
}



// FUNCTION 14646678a FUN_14646678a body=55 status=ok
// SIG undefined FUN_14646678a(void)

void FUN_14646678a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb363f0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb363f0 = FUN_140002ddd(FUN_1464667c1,uVar1,L"NDIDataChannelCompiledData");
  }
  return;
}



// FUNCTION 1464667c1 FUN_1464667c1 body=49 status=ok
// SIG undefined FUN_1464667c1(void)

longlong FUN_1464667c1(void)

{
  if (DAT_14cb363e8 == 0) {
    FUN_14086a14e(&DAT_14cb363e8,&PTR_FUN_14ad60958);
  }
  return DAT_14cb363e8;
}



// FUNCTION 1464667f2 FUN_1464667f2 body=43 status=ok
// SIG undefined FUN_1464667f2(void)

void FUN_1464667f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14ad68910;
  return;
}



// FUNCTION 14646681d FUN_14646681d body=47 status=ok
// SIG undefined FUN_14646681d(void)

longlong FUN_14646681d(void)

{
  if (DAT_14cb36400 == 0) {
    FUN_1409ce572(&DAT_14cb36400,&PTR_FUN_14ad60a90);
  }
  return DAT_14cb36400;
}



// FUNCTION 14646684c FUN_14646684c body=47 status=ok
// SIG undefined FUN_14646684c(void)

longlong FUN_14646684c(void)

{
  if (DAT_14cb36418 == 0) {
    FUN_1409ce572(&DAT_14cb36418,&PTR_FUN_14ad60b10);
  }
  return DAT_14cb36418;
}



// FUNCTION 14646687b FUN_14646687b body=47 status=ok
// SIG undefined FUN_14646687b(void)

longlong FUN_14646687b(void)

{
  if (DAT_14cb36438 == 0) {
    FUN_14073dd9a(&DAT_14cb36438,&PTR_LAB_14ad60d78);
  }
  return DAT_14cb36438;
}



// FUNCTION 1464668aa FUN_1464668aa body=55 status=ok
// SIG undefined FUN_1464668aa(void)

void FUN_1464668aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36450 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36450 = FUN_140002ddd(FUN_1464668e1,uVar1,L"NDIDataChannelWriteCompiledData");
  }
  return;
}



// FUNCTION 1464668e1 FUN_1464668e1 body=47 status=ok
// SIG undefined FUN_1464668e1(void)

longlong FUN_1464668e1(void)

{
  if (DAT_14cb36448 == 0) {
    FUN_14086a14e(&DAT_14cb36448,&PTR_FUN_14ad61320);
  }
  return DAT_14cb36448;
}



// FUNCTION 146466910 FUN_146466910 body=49 status=ok
// SIG undefined FUN_146466910(void)

longlong FUN_146466910(void)

{
  if (DAT_14cb364d8 == 0) {
    FUN_14086a14e(&DAT_14cb364d8,&PTR_FUN_14ad62ad8);
  }
  return DAT_14cb364d8;
}



// FUNCTION 146466942 FUN_146466942 body=43 status=ok
// SIG undefined FUN_146466942(void)

void FUN_146466942(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000b8;
  *puVar1 = &PTR_FUN_14ad68be0;
  return;
}



// FUNCTION 14646696e FUN_14646696e body=55 status=ok
// SIG undefined FUN_14646696e(void)

void FUN_14646696e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36468 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36468 = FUN_140002ddd(FUN_1464669a5,uVar1,L"NDIDataChannelWriteSimCacheFrameBuffer");
  }
  return;
}



// FUNCTION 1464669a5 FUN_1464669a5 body=47 status=ok
// SIG undefined FUN_1464669a5(void)

longlong FUN_1464669a5(void)

{
  if (DAT_14cb36460 == 0) {
    FUN_14086a14e(&DAT_14cb36460,&PTR_FUN_14ad614f8);
  }
  return DAT_14cb36460;
}



// FUNCTION 1464669d4 FUN_1464669d4 body=43 status=ok
// SIG undefined FUN_1464669d4(void)

void FUN_1464669d4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14ad68d40;
  return;
}



// FUNCTION 146466a00 FUN_146466a00 body=55 status=ok
// SIG undefined FUN_146466a00(void)

void FUN_146466a00(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36480 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36480 = FUN_140002ddd(FUN_146466a37,uVar1,L"NDIDataChannelWriteSimCacheFrame");
  }
  return;
}



// FUNCTION 146466a37 FUN_146466a37 body=47 status=ok
// SIG undefined FUN_146466a37(void)

longlong FUN_146466a37(void)

{
  if (DAT_14cb36478 == 0) {
    FUN_14086a14e(&DAT_14cb36478,&PTR_FUN_14ad61788);
  }
  return DAT_14cb36478;
}



// FUNCTION 146466a66 FUN_146466a66 body=43 status=ok
// SIG undefined FUN_146466a66(void)

void FUN_146466a66(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14ad68ea0;
  return;
}



// FUNCTION 146466a91 FUN_146466a91 body=58 status=ok
// SIG undefined FUN_146466a91(void)

void FUN_146466a91(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad619a0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  return;
}



// FUNCTION 146466ad0 FUN_146466ad0 body=47 status=ok
// SIG undefined FUN_146466ad0(void)

longlong FUN_146466ad0(void)

{
  if (DAT_14cb36498 == 0) {
    FUN_14073dd9a(&DAT_14cb36498,&PTR_LAB_14ad61958);
  }
  return DAT_14cb36498;
}



// FUNCTION 146466aff FUN_146466aff body=47 status=ok
// SIG undefined FUN_146466aff(void)

longlong FUN_146466aff(void)

{
  if (DAT_14cb364b0 == 0) {
    FUN_14073dd9a(&DAT_14cb364b0,&PTR_LAB_14ad61fa8);
  }
  return DAT_14cb364b0;
}



// FUNCTION 146466b2e FUN_146466b2e body=55 status=ok
// SIG undefined FUN_146466b2e(void)

void FUN_146466b2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb364c8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb364c8 = FUN_140002ddd(FUN_146466b65,uVar1,L"NiagaraVariableLayoutInfo");
  }
  return;
}



// FUNCTION 146466b65 FUN_146466b65 body=47 status=ok
// SIG undefined FUN_146466b65(void)

longlong FUN_146466b65(void)

{
  if (DAT_14cb364c0 == 0) {
    FUN_14086a14e(&DAT_14cb364c0,&PTR_FUN_14ad62700);
  }
  return DAT_14cb364c0;
}



// FUNCTION 146466b94 FUN_146466b94 body=43 status=ok
// SIG undefined FUN_146466b94(void)

void FUN_146466b94(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14ad69000;
  return;
}



// FUNCTION 146466bc0 FUN_146466bc0 body=55 status=ok
// SIG undefined FUN_146466bc0(void)

void FUN_146466bc0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb364e0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb364e0 = FUN_140002ddd(FUN_146466910,uVar1,L"NiagaraDataSetCompiledData");
  }
  return;
}



// FUNCTION 146466bf8 FUN_146466bf8 body=43 status=ok
// SIG undefined FUN_146466bf8(void)

void FUN_146466bf8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000048;
  *puVar1 = &PTR_FUN_14ad69160;
  return;
}



// FUNCTION 146466c23 FUN_146466c23 body=47 status=ok
// SIG undefined FUN_146466c23(void)

longlong FUN_146466c23(void)

{
  if (DAT_14cb364f0 == 0) {
    FUN_1409ce572(&DAT_14cb364f0,&PTR_FUN_14ad62bd0);
  }
  return DAT_14cb364f0;
}



// FUNCTION 146466c52 FUN_146466c52 body=32 status=ok
// SIG undefined FUN_146466c52(void)

void FUN_146466c52(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_1400841f8(param_1);
  *param_1 = &PTR_FUN_14ad62c90;
  return;
}



// FUNCTION 146466c72 FUN_146466c72 body=47 status=ok
// SIG undefined FUN_146466c72(void)

longlong FUN_146466c72(void)

{
  if (DAT_14cb36510 == 0) {
    FUN_14073dd9a(&DAT_14cb36510,&PTR_LAB_14ad62c48);
  }
  return DAT_14cb36510;
}



// FUNCTION 146466ca2 FUN_146466ca2 body=55 status=ok
// SIG undefined FUN_146466ca2(void)

void FUN_146466ca2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36528 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36528 = FUN_140002ddd(FUN_146466cd9,uVar1,L"NiagaraMessageStore");
  }
  return;
}



// FUNCTION 146466cd9 FUN_146466cd9 body=47 status=ok
// SIG undefined FUN_146466cd9(void)

longlong FUN_146466cd9(void)

{
  if (DAT_14cb36520 == 0) {
    FUN_14086a14e(&DAT_14cb36520,&PTR_FUN_14ad62fa8);
  }
  return DAT_14cb36520;
}



// FUNCTION 146466d08 FUN_146466d08 body=43 status=ok
// SIG undefined FUN_146466d08(void)

void FUN_146466d08(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ad69380;
  return;
}



// FUNCTION 146466d34 FUN_146466d34 body=55 status=ok
// SIG undefined FUN_146466d34(void)

void FUN_146466d34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36540 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36540 = FUN_140002ddd(FUN_146466d6b,uVar1,L"NiagaraParameterBinding");
  }
  return;
}



// FUNCTION 146466d6b FUN_146466d6b body=49 status=ok
// SIG undefined FUN_146466d6b(void)

longlong FUN_146466d6b(void)

{
  if (DAT_14cb36538 == 0) {
    FUN_14086a14e(&DAT_14cb36538,&PTR_FUN_14ad630b0);
  }
  return DAT_14cb36538;
}



// FUNCTION 146466d9c FUN_146466d9c body=43 status=ok
// SIG undefined FUN_146466d9c(void)

void FUN_146466d9c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14ad694e0;
  return;
}



// FUNCTION 146466dc8 FUN_146466dc8 body=55 status=ok
// SIG undefined FUN_146466dc8(void)

void FUN_146466dc8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36558 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36558 = FUN_140002ddd(FUN_14181d888,uVar1,L"NiagaraParameterBindingWithValue");
  }
  return;
}



// FUNCTION 146466e00 FUN_146466e00 body=43 status=ok
// SIG undefined FUN_146466e00(void)

void FUN_146466e00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14ad69640;
  return;
}



// FUNCTION 146466e2b FUN_146466e2b body=35 status=ok
// SIG undefined FUN_146466e2b(void)

void FUN_146466e2b(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad63320;
  return;
}



// FUNCTION 146466e4e FUN_146466e4e body=47 status=ok
// SIG undefined FUN_146466e4e(void)

longlong FUN_146466e4e(void)

{
  if (DAT_14cb36570 == 0) {
    FUN_14073dd9a(&DAT_14cb36570,&PTR_LAB_14ad632d8);
  }
  return DAT_14cb36570;
}



// FUNCTION 146466e7d FUN_146466e7d body=35 status=ok
// SIG undefined FUN_146466e7d(void)

void FUN_146466e7d(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad63690;
  return;
}



// FUNCTION 146466ea5 FUN_146466ea5 body=47 status=ok
// SIG undefined FUN_146466ea5(void)

longlong FUN_146466ea5(void)

{
  if (DAT_14cb36588 == 0) {
    FUN_14073dd9a(&DAT_14cb36588,&PTR_LAB_14ad63648);
  }
  return DAT_14cb36588;
}



// FUNCTION 146466ed4 FUN_146466ed4 body=55 status=ok
// SIG undefined FUN_146466ed4(void)

void FUN_146466ed4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb365a0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb365a0 = FUN_140002ddd(FUN_146466f0b,uVar1,L"NiagaraScalabilityState");
  }
  return;
}



// FUNCTION 146466f0b FUN_146466f0b body=47 status=ok
// SIG undefined FUN_146466f0b(void)

longlong FUN_146466f0b(void)

{
  if (DAT_14cb36598 == 0) {
    FUN_14086a14e(&DAT_14cb36598,&PTR_FUN_14ad63d28);
  }
  return DAT_14cb36598;
}



// FUNCTION 146466f3a FUN_146466f3a body=43 status=ok
// SIG undefined FUN_146466f3a(void)

void FUN_146466f3a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x40000000c;
  *puVar1 = &PTR_FUN_14ad697a0;
  return;
}



// FUNCTION 146466f65 FUN_146466f65 body=47 status=ok
// SIG undefined FUN_146466f65(void)

longlong FUN_146466f65(void)

{
  if (DAT_14cb365b8 == 0) {
    FUN_14073dd9a(&DAT_14cb365b8,&PTR_LAB_14ad63dd8);
  }
  return DAT_14cb365b8;
}



// FUNCTION 146466f94 FUN_146466f94 body=47 status=ok
// SIG undefined FUN_146466f94(void)

longlong FUN_146466f94(void)

{
  if (DAT_14cb365c8 == 0) {
    FUN_1409ce572(&DAT_14cb365c8,&PTR_FUN_14ad641c0);
  }
  return DAT_14cb365c8;
}



// FUNCTION 146466fc3 FUN_146466fc3 body=47 status=ok
// SIG undefined FUN_146466fc3(void)

longlong FUN_146466fc3(void)

{
  if (DAT_14cb365e0 == 0) {
    FUN_1409ce572(&DAT_14cb365e0,&PTR_FUN_14ad64280);
  }
  return DAT_14cb365e0;
}



// FUNCTION 146466ff2 FUN_146466ff2 body=47 status=ok
// SIG undefined FUN_146466ff2(void)

longlong FUN_146466ff2(void)

{
  if (DAT_14cb365f8 == 0) {
    FUN_1409ce572(&DAT_14cb365f8,&PTR_FUN_14ad64330);
  }
  return DAT_14cb365f8;
}



// FUNCTION 146467021 FUN_146467021 body=47 status=ok
// SIG undefined FUN_146467021(void)

longlong FUN_146467021(void)

{
  if (DAT_14cb36610 == 0) {
    FUN_1409ce572(&DAT_14cb36610,&PTR_FUN_14ad643b0);
  }
  return DAT_14cb36610;
}



// FUNCTION 146467050 FUN_146467050 body=47 status=ok
// SIG undefined FUN_146467050(void)

longlong FUN_146467050(void)

{
  if (DAT_14cb36628 == 0) {
    FUN_1409ce572(&DAT_14cb36628,&PTR_FUN_14ad64420);
  }
  return DAT_14cb36628;
}



// FUNCTION 14646707f FUN_14646707f body=47 status=ok
// SIG undefined FUN_14646707f(void)

longlong FUN_14646707f(void)

{
  if (DAT_14cb36640 == 0) {
    FUN_1409ce572(&DAT_14cb36640,&PTR_FUN_14ad644a0);
  }
  return DAT_14cb36640;
}



// FUNCTION 1464670ae FUN_1464670ae body=47 status=ok
// SIG undefined FUN_1464670ae(void)

longlong FUN_1464670ae(void)

{
  if (DAT_14cb36658 == 0) {
    FUN_1409ce572(&DAT_14cb36658,&PTR_FUN_14ad64530);
  }
  return DAT_14cb36658;
}



// FUNCTION 1464670dd FUN_1464670dd body=47 status=ok
// SIG undefined FUN_1464670dd(void)

longlong FUN_1464670dd(void)

{
  if (DAT_14cb36670 == 0) {
    FUN_1409ce572(&DAT_14cb36670,&PTR_FUN_14ad64600);
  }
  return DAT_14cb36670;
}



// FUNCTION 14646710c FUN_14646710c body=47 status=ok
// SIG undefined FUN_14646710c(void)

longlong FUN_14646710c(void)

{
  if (DAT_14cb36688 == 0) {
    FUN_1409ce572(&DAT_14cb36688,&PTR_FUN_14ad64690);
  }
  return DAT_14cb36688;
}



// FUNCTION 146467141 FUN_146467141 body=47 status=ok
// SIG undefined FUN_146467141(void)

longlong FUN_146467141(void)

{
  if (DAT_14cb366a8 == 0) {
    FUN_14073dd9a(&DAT_14cb366a8,&PTR_LAB_14ad65668);
  }
  return DAT_14cb366a8;
}



// FUNCTION 146467170 FUN_146467170 body=55 status=ok
// SIG undefined FUN_146467170(void)

void FUN_146467170(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb366c0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb366c0 = FUN_140002ddd(FUN_1464671a7,uVar1,L"NiagaraSimCacheCaptureParameters");
  }
  return;
}



// FUNCTION 1464671a7 FUN_1464671a7 body=47 status=ok
// SIG undefined FUN_1464671a7(void)

longlong FUN_1464671a7(void)

{
  if (DAT_14cb366b8 == 0) {
    FUN_14086a14e(&DAT_14cb366b8,&PTR_FUN_14ad65df8);
  }
  return DAT_14cb366b8;
}



// FUNCTION 1464671d6 FUN_1464671d6 body=43 status=ok
// SIG undefined FUN_1464671d6(void)

void FUN_1464671d6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x40000001c;
  *puVar1 = &PTR_FUN_14ad69ff0;
  return;
}



// FUNCTION 146467201 FUN_146467201 body=35 status=ok
// SIG undefined FUN_146467201(void)

void FUN_146467201(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad65f10;
  return;
}



// FUNCTION 146467229 FUN_146467229 body=47 status=ok
// SIG undefined FUN_146467229(void)

longlong FUN_146467229(void)

{
  if (DAT_14cb366d8 == 0) {
    FUN_14073dd9a(&DAT_14cb366d8,&PTR_LAB_14ad65ec8);
  }
  return DAT_14cb366d8;
}



// FUNCTION 146467258 FUN_146467258 body=55 status=ok
// SIG undefined FUN_146467258(void)

void FUN_146467258(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb366f0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb366f0 = FUN_140002ddd(FUN_14646728f,uVar1,L"NiagaraSimCacheDebugDataFrame");
  }
  return;
}



// FUNCTION 14646728f FUN_14646728f body=47 status=ok
// SIG undefined FUN_14646728f(void)

longlong FUN_14646728f(void)

{
  if (DAT_14cb366e8 == 0) {
    FUN_14086a14e(&DAT_14cb366e8,&PTR_FUN_14ad66338);
  }
  return DAT_14cb366e8;
}



// FUNCTION 1464672be FUN_1464672be body=43 status=ok
// SIG undefined FUN_1464672be(void)

void FUN_1464672be(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14ad6a150;
  return;
}



// FUNCTION 1464672ee FUN_1464672ee body=47 status=ok
// SIG undefined FUN_1464672ee(void)

longlong FUN_1464672ee(void)

{
  if (DAT_14cb36708 == 0) {
    FUN_14073dd9a(&DAT_14cb36708,&PTR_LAB_14ad66448);
  }
  return DAT_14cb36708;
}



// FUNCTION 14646731e FUN_14646731e body=55 status=ok
// SIG undefined FUN_14646731e(void)

void FUN_14646731e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36720 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36720 = FUN_140002ddd(FUN_146467355,uVar1,L"NiagaraSimStageExecutionLoopEditorData");
  }
  return;
}



// FUNCTION 146467355 FUN_146467355 body=47 status=ok
// SIG undefined FUN_146467355(void)

longlong FUN_146467355(void)

{
  if (DAT_14cb36718 == 0) {
    FUN_14086a14e(&DAT_14cb36718,&PTR_FUN_14ad66800);
  }
  return DAT_14cb36718;
}



// FUNCTION 146467384 FUN_146467384 body=43 status=ok
// SIG undefined FUN_146467384(void)

void FUN_146467384(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14ad6a2b0;
  return;
}



// FUNCTION 1464673b0 FUN_1464673b0 body=55 status=ok
// SIG undefined FUN_1464673b0(void)

void FUN_1464673b0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36738 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36738 = FUN_140002ddd(FUN_1464673e7,uVar1,L"NiagaraSimStageExecutionLoopData");
  }
  return;
}



// FUNCTION 1464673e7 FUN_1464673e7 body=47 status=ok
// SIG undefined FUN_1464673e7(void)

longlong FUN_1464673e7(void)

{
  if (DAT_14cb36730 == 0) {
    FUN_14086a14e(&DAT_14cb36730,&PTR_FUN_14ad669d8);
  }
  return DAT_14cb36730;
}



// FUNCTION 146467416 FUN_146467416 body=43 status=ok
// SIG undefined FUN_146467416(void)

void FUN_146467416(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000014;
  *puVar1 = &PTR_FUN_14ad6a420;
  return;
}



// FUNCTION 146467442 FUN_146467442 body=55 status=ok
// SIG undefined FUN_146467442(void)

void FUN_146467442(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36750 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36750 = FUN_140002ddd(FUN_146467479,uVar1,L"NiagaraStackSection");
  }
  return;
}



// FUNCTION 146467479 FUN_146467479 body=47 status=ok
// SIG undefined FUN_146467479(void)

longlong FUN_146467479(void)

{
  if (DAT_14cb36748 == 0) {
    FUN_14086a14e(&DAT_14cb36748,&PTR_FUN_14ad66c58);
  }
  return DAT_14cb36748;
}



// FUNCTION 1464674a8 FUN_1464674a8 body=43 status=ok
// SIG undefined FUN_1464674a8(void)

void FUN_1464674a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14ad6a580;
  return;
}



// FUNCTION 1464674d3 FUN_1464674d3 body=47 status=ok
// SIG undefined FUN_1464674d3(void)

longlong FUN_1464674d3(void)

{
  if (DAT_14cb36760 == 0) {
    FUN_1409ce572(&DAT_14cb36760,&PTR_FUN_14ad66d30);
  }
  return DAT_14cb36760;
}



// FUNCTION 146467502 FUN_146467502 body=47 status=ok
// SIG undefined FUN_146467502(void)

longlong FUN_146467502(void)

{
  if (DAT_14cb36778 == 0) {
    FUN_1409ce572(&DAT_14cb36778,&PTR_FUN_14ad66df0);
  }
  return DAT_14cb36778;
}



// FUNCTION 146467532 FUN_146467532 body=55 status=ok
// SIG undefined FUN_146467532(void)

void FUN_146467532(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36798 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36798 = FUN_140002ddd(FUN_146467569,uVar1,L"NiagaraDistributionBase");
  }
  return;
}



// FUNCTION 146467569 FUN_146467569 body=49 status=ok
// SIG undefined FUN_146467569(void)

longlong FUN_146467569(void)

{
  if (DAT_14cb36790 == 0) {
    FUN_14086a14e(&DAT_14cb36790,&PTR_FUN_14ad66f50);
  }
  return DAT_14cb36790;
}



// FUNCTION 14646759a FUN_14646759a body=43 status=ok
// SIG undefined FUN_14646759a(void)

void FUN_14646759a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14ad6a930;
  return;
}



// FUNCTION 1464675c6 FUN_1464675c6 body=55 status=ok
// SIG undefined FUN_1464675c6(void)

void FUN_1464675c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb367b0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb367b0 = FUN_140002ddd(FUN_1464675fd,uVar1,L"NiagaraDistributionRangeInt");
  }
  return;
}



// FUNCTION 1464675fd FUN_1464675fd body=49 status=ok
// SIG undefined FUN_1464675fd(void)

longlong FUN_1464675fd(void)

{
  if (DAT_14cb367a8 == 0) {
    FUN_14086a14e(&DAT_14cb367a8,&PTR_FUN_14ad67138);
  }
  return DAT_14cb367a8;
}



// FUNCTION 14646762e FUN_14646762e body=43 status=ok
// SIG undefined FUN_14646762e(void)

void FUN_14646762e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000018;
  *puVar1 = &PTR_FUN_14ad6aaa0;
  return;
}



// FUNCTION 14646765a FUN_14646765a body=55 status=ok
// SIG undefined FUN_14646765a(void)

void FUN_14646765a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb367c8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb367c8 = FUN_140002ddd(FUN_14181d8b9,uVar1,L"NiagaraDistributionRangeFloat");
  }
  return;
}



// FUNCTION 146467692 FUN_146467692 body=43 status=ok
// SIG undefined FUN_146467692(void)

void FUN_146467692(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14ad6ac10;
  return;
}



// FUNCTION 1464676be FUN_1464676be body=55 status=ok
// SIG undefined FUN_1464676be(void)

void FUN_1464676be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb367e0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb367e0 = FUN_140002ddd(FUN_1464676f5,uVar1,L"NiagaraDistributionRangeVector2");
  }
  return;
}



// FUNCTION 1464676f5 FUN_1464676f5 body=49 status=ok
// SIG undefined FUN_1464676f5(void)

longlong FUN_1464676f5(void)

{
  if (DAT_14cb367d8 == 0) {
    FUN_14086a14e(&DAT_14cb367d8,&PTR_FUN_14ad67380);
  }
  return DAT_14cb367d8;
}



// FUNCTION 146467726 FUN_146467726 body=43 status=ok
// SIG undefined FUN_146467726(void)

void FUN_146467726(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14ad6ad80;
  return;
}



// FUNCTION 146467752 FUN_146467752 body=55 status=ok
// SIG undefined FUN_146467752(void)

void FUN_146467752(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb367f8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb367f8 = FUN_140002ddd(FUN_14181d8ea,uVar1,L"NiagaraDistributionRangeVector3");
  }
  return;
}



// FUNCTION 14646778a FUN_14646778a body=43 status=ok
// SIG undefined FUN_14646778a(void)

void FUN_14646778a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14ad6aef0;
  return;
}



// FUNCTION 1464677b6 FUN_1464677b6 body=55 status=ok
// SIG undefined FUN_1464677b6(void)

void FUN_1464677b6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36810 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36810 = FUN_140002ddd(FUN_1464677ed,uVar1,L"NiagaraDistributionRangeColor");
  }
  return;
}



// FUNCTION 1464677ed FUN_1464677ed body=47 status=ok
// SIG undefined FUN_1464677ed(void)

longlong FUN_1464677ed(void)

{
  if (DAT_14cb36808 == 0) {
    FUN_14086a14e(&DAT_14cb36808,&PTR_FUN_14ad675e0);
  }
  return DAT_14cb36808;
}



// FUNCTION 14646781c FUN_14646781c body=43 status=ok
// SIG undefined FUN_14646781c(void)

void FUN_14646781c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14ad6b070;
  return;
}



// FUNCTION 146467848 FUN_146467848 body=55 status=ok
// SIG undefined FUN_146467848(void)

void FUN_146467848(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36828 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36828 = FUN_140002ddd(FUN_14646787f,uVar1,L"NiagaraDistributionFloat");
  }
  return;
}



// FUNCTION 14646787f FUN_14646787f body=49 status=ok
// SIG undefined FUN_14646787f(void)

longlong FUN_14646787f(void)

{
  if (DAT_14cb36820 == 0) {
    FUN_14086a14e(&DAT_14cb36820,&PTR_FUN_14ad67748);
  }
  return DAT_14cb36820;
}



// FUNCTION 1464678b0 FUN_1464678b0 body=43 status=ok
// SIG undefined FUN_1464678b0(void)

void FUN_1464678b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14ad6b1e0;
  return;
}



// FUNCTION 1464678dc FUN_1464678dc body=55 status=ok
// SIG undefined FUN_1464678dc(void)

void FUN_1464678dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36840 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36840 = FUN_140002ddd(FUN_146467913,uVar1,L"NiagaraDistributionVector2");
  }
  return;
}



// FUNCTION 146467913 FUN_146467913 body=47 status=ok
// SIG undefined FUN_146467913(void)

longlong FUN_146467913(void)

{
  if (DAT_14cb36838 == 0) {
    FUN_14086a14e(&DAT_14cb36838,&PTR_FUN_14ad678a8);
  }
  return DAT_14cb36838;
}



// FUNCTION 146467942 FUN_146467942 body=43 status=ok
// SIG undefined FUN_146467942(void)

void FUN_146467942(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14ad6b350;
  return;
}



// FUNCTION 14646796e FUN_14646796e body=55 status=ok
// SIG undefined FUN_14646796e(void)

void FUN_14646796e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36858 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36858 = FUN_140002ddd(FUN_1464679a5,uVar1,L"NiagaraDistributionVector3");
  }
  return;
}



// FUNCTION 1464679a5 FUN_1464679a5 body=49 status=ok
// SIG undefined FUN_1464679a5(void)

longlong FUN_1464679a5(void)

{
  if (DAT_14cb36850 == 0) {
    FUN_14086a14e(&DAT_14cb36850,&PTR_FUN_14ad67a08);
  }
  return DAT_14cb36850;
}



// FUNCTION 1464679d6 FUN_1464679d6 body=43 status=ok
// SIG undefined FUN_1464679d6(void)

void FUN_1464679d6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14ad6b4c0;
  return;
}



// FUNCTION 146467a02 FUN_146467a02 body=55 status=ok
// SIG undefined FUN_146467a02(void)

void FUN_146467a02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36870 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36870 = FUN_140002ddd(FUN_146467a39,uVar1,L"NiagaraDistributionPosition");
  }
  return;
}



// FUNCTION 146467a39 FUN_146467a39 body=47 status=ok
// SIG undefined FUN_146467a39(void)

longlong FUN_146467a39(void)

{
  if (DAT_14cb36868 == 0) {
    FUN_14086a14e(&DAT_14cb36868,&PTR_FUN_14ad67a98);
  }
  return DAT_14cb36868;
}



// FUNCTION 146467a68 FUN_146467a68 body=43 status=ok
// SIG undefined FUN_146467a68(void)

void FUN_146467a68(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14ad6b630;
  return;
}



// FUNCTION 146467a94 FUN_146467a94 body=55 status=ok
// SIG undefined FUN_146467a94(void)

void FUN_146467a94(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36888 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36888 = FUN_140002ddd(FUN_146467acb,uVar1,L"NiagaraDistributionColor");
  }
  return;
}



// FUNCTION 146467acb FUN_146467acb body=47 status=ok
// SIG undefined FUN_146467acb(void)

longlong FUN_146467acb(void)

{
  if (DAT_14cb36880 == 0) {
    FUN_14086a14e(&DAT_14cb36880,&PTR_FUN_14ad67bf8);
  }
  return DAT_14cb36880;
}



// FUNCTION 146467afa FUN_146467afa body=43 status=ok
// SIG undefined FUN_146467afa(void)

void FUN_146467afa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14ad6b7a0;
  return;
}



// FUNCTION 146467b26 FUN_146467b26 body=40 status=ok
// SIG undefined FUN_146467b26(void)

undefined8 FUN_146467b26(undefined8 param_1,int param_2)

{
  FUN_145964bf6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467b4e FUN_146467b4e body=40 status=ok
// SIG undefined FUN_146467b4e(void)

undefined8 FUN_146467b4e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467b76 FUN_146467b76 body=40 status=ok
// SIG undefined FUN_146467b76(void)

undefined8 FUN_146467b76(undefined8 param_1,int param_2)

{
  FUN_145ade8a0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467b9e FUN_146467b9e body=40 status=ok
// SIG undefined FUN_146467b9e(void)

undefined8 FUN_146467b9e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467bc6 FUN_146467bc6 body=40 status=ok
// SIG undefined FUN_146467bc6(void)

undefined8 FUN_146467bc6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467bee FUN_146467bee body=40 status=ok
// SIG undefined FUN_146467bee(void)

undefined8 FUN_146467bee(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467c16 FUN_146467c16 body=40 status=ok
// SIG undefined FUN_146467c16(void)

undefined8 FUN_146467c16(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467c3e FUN_146467c3e body=29 status=ok
// SIG undefined FUN_146467c3e(void)

undefined8 FUN_146467c3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467c5c FUN_146467c5c body=29 status=ok
// SIG undefined FUN_146467c5c(void)

undefined8 FUN_146467c5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467c7a FUN_146467c7a body=29 status=ok
// SIG undefined FUN_146467c7a(void)

undefined8 FUN_146467c7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467c98 FUN_146467c98 body=29 status=ok
// SIG undefined FUN_146467c98(void)

undefined8 FUN_146467c98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467cb6 FUN_146467cb6 body=29 status=ok
// SIG undefined FUN_146467cb6(void)

undefined8 FUN_146467cb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467cd4 FUN_146467cd4 body=29 status=ok
// SIG undefined FUN_146467cd4(void)

undefined8 FUN_146467cd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467cf2 FUN_146467cf2 body=29 status=ok
// SIG undefined FUN_146467cf2(void)

undefined8 FUN_146467cf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467d10 FUN_146467d10 body=29 status=ok
// SIG undefined FUN_146467d10(void)

undefined8 FUN_146467d10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467d2e FUN_146467d2e body=29 status=ok
// SIG undefined FUN_146467d2e(void)

undefined8 FUN_146467d2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467d4c FUN_146467d4c body=29 status=ok
// SIG undefined FUN_146467d4c(void)

undefined8 FUN_146467d4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467d6a FUN_146467d6a body=29 status=ok
// SIG undefined FUN_146467d6a(void)

undefined8 FUN_146467d6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467d88 FUN_146467d88 body=29 status=ok
// SIG undefined FUN_146467d88(void)

undefined8 FUN_146467d88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467da6 FUN_146467da6 body=29 status=ok
// SIG undefined FUN_146467da6(void)

undefined8 FUN_146467da6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467dc4 FUN_146467dc4 body=29 status=ok
// SIG undefined FUN_146467dc4(void)

undefined8 FUN_146467dc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467de2 FUN_146467de2 body=29 status=ok
// SIG undefined FUN_146467de2(void)

undefined8 FUN_146467de2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467e00 FUN_146467e00 body=29 status=ok
// SIG undefined FUN_146467e00(void)

undefined8 FUN_146467e00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467e1e FUN_146467e1e body=29 status=ok
// SIG undefined FUN_146467e1e(void)

undefined8 FUN_146467e1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467e3c FUN_146467e3c body=29 status=ok
// SIG undefined FUN_146467e3c(void)

undefined8 FUN_146467e3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467e5a FUN_146467e5a body=29 status=ok
// SIG undefined FUN_146467e5a(void)

undefined8 FUN_146467e5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467e78 FUN_146467e78 body=29 status=ok
// SIG undefined FUN_146467e78(void)

undefined8 FUN_146467e78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467e96 FUN_146467e96 body=29 status=ok
// SIG undefined FUN_146467e96(void)

undefined8 FUN_146467e96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467eb4 FUN_146467eb4 body=29 status=ok
// SIG undefined FUN_146467eb4(void)

undefined8 FUN_146467eb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467ed2 FUN_146467ed2 body=29 status=ok
// SIG undefined FUN_146467ed2(void)

undefined8 FUN_146467ed2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467ef0 FUN_146467ef0 body=29 status=ok
// SIG undefined FUN_146467ef0(void)

undefined8 FUN_146467ef0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467f0e FUN_146467f0e body=29 status=ok
// SIG undefined FUN_146467f0e(void)

undefined8 FUN_146467f0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467f2c FUN_146467f2c body=29 status=ok
// SIG undefined FUN_146467f2c(void)

undefined8 FUN_146467f2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467f4a FUN_146467f4a body=29 status=ok
// SIG undefined FUN_146467f4a(void)

undefined8 FUN_146467f4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467f68 FUN_146467f68 body=29 status=ok
// SIG undefined FUN_146467f68(void)

undefined8 FUN_146467f68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467f86 FUN_146467f86 body=29 status=ok
// SIG undefined FUN_146467f86(void)

undefined8 FUN_146467f86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467fa4 FUN_146467fa4 body=29 status=ok
// SIG undefined FUN_146467fa4(void)

undefined8 FUN_146467fa4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467fc2 FUN_146467fc2 body=29 status=ok
// SIG undefined FUN_146467fc2(void)

undefined8 FUN_146467fc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467fe0 FUN_146467fe0 body=29 status=ok
// SIG undefined FUN_146467fe0(void)

undefined8 FUN_146467fe0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146467ffe FUN_146467ffe body=29 status=ok
// SIG undefined FUN_146467ffe(void)

undefined8 FUN_146467ffe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146468020 FUN_146468020 body=47 status=ok
// SIG undefined FUN_146468020(void)

longlong FUN_146468020(void)

{
  if (DAT_14cb36c88 == 0) {
    FUN_14086a14e(&DAT_14cb36c88,&PTR_FUN_14ad76a50);
  }
  return DAT_14cb36c88;
}



// FUNCTION 14646804f FUN_14646804f body=47 status=ok
// SIG undefined FUN_14646804f(void)

longlong FUN_14646804f(void)

{
  if (DAT_14cb36bf8 == 0) {
    FUN_14086a14e(&DAT_14cb36bf8,&PTR_FUN_14ad75a10);
  }
  return DAT_14cb36bf8;
}



// FUNCTION 146468083 FUN_146468083 body=47 status=ok
// SIG undefined FUN_146468083(void)

longlong FUN_146468083(void)

{
  if (DAT_14cb368a0 == 0) {
    FUN_14073dd9a(&DAT_14cb368a0,&PTR_LAB_14ad6c6a8);
  }
  return DAT_14cb368a0;
}



// FUNCTION 1464680b2 FUN_1464680b2 body=35 status=ok
// SIG undefined FUN_1464680b2(void)

void FUN_1464680b2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad6ca60;
  return;
}



// FUNCTION 1464680d5 FUN_1464680d5 body=47 status=ok
// SIG undefined FUN_1464680d5(void)

longlong FUN_1464680d5(void)

{
  if (DAT_14cb368b8 == 0) {
    FUN_14073dd9a(&DAT_14cb368b8,&PTR_LAB_14ad6ca18);
  }
  return DAT_14cb368b8;
}



// FUNCTION 146468104 FUN_146468104 body=35 status=ok
// SIG undefined FUN_146468104(void)

void FUN_146468104(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad6cdc0;
  return;
}



// FUNCTION 146468127 FUN_146468127 body=47 status=ok
// SIG undefined FUN_146468127(void)

longlong FUN_146468127(void)

{
  if (DAT_14cb368d0 == 0) {
    FUN_14073dd9a(&DAT_14cb368d0,&PTR_LAB_14ad6cd78);
  }
  return DAT_14cb368d0;
}



// FUNCTION 146468156 FUN_146468156 body=35 status=ok
// SIG undefined FUN_146468156(void)

void FUN_146468156(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad6d130;
  return;
}



// FUNCTION 146468179 FUN_146468179 body=47 status=ok
// SIG undefined FUN_146468179(void)

longlong FUN_146468179(void)

{
  if (DAT_14cb368e8 == 0) {
    FUN_14073dd9a(&DAT_14cb368e8,&PTR_LAB_14ad6d0e8);
  }
  return DAT_14cb368e8;
}



// FUNCTION 1464681a8 FUN_1464681a8 body=36 status=ok
// SIG undefined FUN_1464681a8(void)

void FUN_1464681a8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e3eac6(puVar1);
  *puVar1 = &PTR_FUN_14ad6d550;
  *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) | 1;
  return;
}



// FUNCTION 1464681cc FUN_1464681cc body=47 status=ok
// SIG undefined FUN_1464681cc(void)

longlong FUN_1464681cc(void)

{
  if (DAT_14cb36918 == 0) {
    FUN_14073dd9a(&DAT_14cb36918,&PTR_LAB_14ad6d998);
  }
  return DAT_14cb36918;
}



// FUNCTION 1464681fb FUN_1464681fb body=47 status=ok
// SIG undefined FUN_1464681fb(void)

longlong FUN_1464681fb(void)

{
  if (DAT_14cb36928 == 0) {
    FUN_1409ce572(&DAT_14cb36928,&PTR_FUN_14ad6dd10);
  }
  return DAT_14cb36928;
}



// FUNCTION 14646822a FUN_14646822a body=47 status=ok
// SIG undefined FUN_14646822a(void)

longlong FUN_14646822a(void)

{
  if (DAT_14cb36948 == 0) {
    FUN_14073dd9a(&DAT_14cb36948,&PTR_LAB_14ad6e268);
  }
  return DAT_14cb36948;
}



// FUNCTION 146468259 FUN_146468259 body=36 status=ok
// SIG undefined FUN_146468259(void)

void FUN_146468259(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e3eac6(puVar1);
  *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) | 1;
  *puVar1 = &PTR_FUN_14ad6e680;
  return;
}



// FUNCTION 14646827d FUN_14646827d body=47 status=ok
// SIG undefined FUN_14646827d(void)

longlong FUN_14646827d(void)

{
  if (DAT_14cb36960 == 0) {
    FUN_14073dd9a(&DAT_14cb36960,&PTR_LAB_14ad6e638);
  }
  return DAT_14cb36960;
}



// FUNCTION 1464682ac FUN_1464682ac body=47 status=ok
// SIG undefined FUN_1464682ac(void)

longlong FUN_1464682ac(void)

{
  if (DAT_14cb36978 == 0) {
    FUN_14073dd9a(&DAT_14cb36978,&PTR_LAB_14ad6ea38);
  }
  return DAT_14cb36978;
}



// FUNCTION 1464682db FUN_1464682db body=47 status=ok
// SIG undefined FUN_1464682db(void)

longlong FUN_1464682db(void)

{
  if (DAT_14cb36988 == 0) {
    FUN_1409ce572(&DAT_14cb36988,&PTR_FUN_14ad6edc0);
  }
  return DAT_14cb36988;
}



// FUNCTION 14646830a FUN_14646830a body=65 status=ok
// SIG undefined FUN_14646830a(void)

void FUN_14646830a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e3eac6(puVar1);
  *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) | 1;
  *puVar1 = &PTR_FUN_14ad6f040;
  puVar1[6] = 0x3f80000043480000;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 14646834b FUN_14646834b body=47 status=ok
// SIG undefined FUN_14646834b(void)

longlong FUN_14646834b(void)

{
  if (DAT_14cb369a8 == 0) {
    FUN_14073dd9a(&DAT_14cb369a8,&PTR_LAB_14ad6eff8);
  }
  return DAT_14cb369a8;
}



// FUNCTION 14646837a FUN_14646837a body=47 status=ok
// SIG undefined FUN_14646837a(void)

longlong FUN_14646837a(void)

{
  if (DAT_14cb369c0 == 0) {
    FUN_14073dd9a(&DAT_14cb369c0,&PTR_LAB_14ad6f3f8);
  }
  return DAT_14cb369c0;
}



// FUNCTION 1464683aa FUN_1464683aa body=55 status=ok
// SIG undefined FUN_1464683aa(void)

void FUN_1464683aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb369d8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb369d8 = FUN_140002ddd(FUN_1464683e1,uVar1,L"NiagaraStatelessDynamicParameterSet");
  }
  return;
}



// FUNCTION 1464683e1 FUN_1464683e1 body=49 status=ok
// SIG undefined FUN_1464683e1(void)

longlong FUN_1464683e1(void)

{
  if (DAT_14cb369d0 == 0) {
    FUN_14086a14e(&DAT_14cb369d0,&PTR_FUN_14ad6fa98);
  }
  return DAT_14cb369d0;
}



// FUNCTION 146468412 FUN_146468412 body=48 status=ok
// SIG undefined FUN_146468412(void)

void FUN_146468412(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000c8;
  *puVar1 = &PTR_FUN_14ad78d50;
  return;
}



// FUNCTION 146468442 FUN_146468442 body=47 status=ok
// SIG undefined FUN_146468442(void)

longlong FUN_146468442(void)

{
  if (DAT_14cb369f0 == 0) {
    FUN_14073dd9a(&DAT_14cb369f0,&PTR_LAB_14ad6fe28);
  }
  return DAT_14cb369f0;
}



// FUNCTION 146468471 FUN_146468471 body=47 status=ok
// SIG undefined FUN_146468471(void)

longlong FUN_146468471(void)

{
  if (DAT_14cb36a08 == 0) {
    FUN_14073dd9a(&DAT_14cb36a08,&PTR_LAB_14ad70248);
  }
  return DAT_14cb36a08;
}



// FUNCTION 1464684a0 FUN_1464684a0 body=47 status=ok
// SIG undefined FUN_1464684a0(void)

longlong FUN_1464684a0(void)

{
  if (DAT_14cb36a20 == 0) {
    FUN_14073dd9a(&DAT_14cb36a20,&PTR_LAB_14ad70968);
  }
  return DAT_14cb36a20;
}



// FUNCTION 1464684cf FUN_1464684cf body=47 status=ok
// SIG undefined FUN_1464684cf(void)

longlong FUN_1464684cf(void)

{
  if (DAT_14cb36a30 == 0) {
    FUN_1409ce572(&DAT_14cb36a30,&PTR_FUN_14ad70cf0);
  }
  return DAT_14cb36a30;
}



// FUNCTION 1464684fe FUN_1464684fe body=47 status=ok
// SIG undefined FUN_1464684fe(void)

longlong FUN_1464684fe(void)

{
  if (DAT_14cb36a50 == 0) {
    FUN_14073dd9a(&DAT_14cb36a50,&PTR_LAB_14ad70f48);
  }
  return DAT_14cb36a50;
}



// FUNCTION 14646852d FUN_14646852d body=47 status=ok
// SIG undefined FUN_14646852d(void)

longlong FUN_14646852d(void)

{
  if (DAT_14cb36a70 == 0) {
    FUN_14073dd9a(&DAT_14cb36a70,&PTR_LAB_14ad714b0);
  }
  return DAT_14cb36a70;
}



// FUNCTION 14646855c FUN_14646855c body=47 status=ok
// SIG undefined FUN_14646855c(void)

longlong FUN_14646855c(void)

{
  if (DAT_14cb36a60 == 0) {
    FUN_14000fc22(&DAT_14cb36a60,&PTR_FUN_14ad712f8);
  }
  return DAT_14cb36a60;
}



// FUNCTION 14646858c FUN_14646858c body=34 status=ok
// SIG undefined FUN_14646858c(void)

void FUN_14646858c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a7892a();
  FUN_14069c8d6(uVar1,&PTR_s_NeedsMeshIndexWeights_14ad71340,1);
  return;
}



// FUNCTION 1464685ae FUN_1464685ae body=47 status=ok
// SIG undefined FUN_1464685ae(void)

longlong FUN_1464685ae(void)

{
  if (DAT_14cb36a88 == 0) {
    FUN_14073dd9a(&DAT_14cb36a88,&PTR_LAB_14ad718a8);
  }
  return DAT_14cb36a88;
}



// FUNCTION 1464685dd FUN_1464685dd body=55 status=ok
// SIG undefined FUN_1464685dd(void)

void FUN_1464685dd(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e3eac6(puVar1);
  *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) | 1;
  *puVar1 = &PTR_FUN_14ad71e60;
  puVar1[6] = 0x43b4000043b40000;
  puVar1[7] = 0x4248000042480000;
  puVar1[8] = 0;
  return;
}



// FUNCTION 146468614 FUN_146468614 body=47 status=ok
// SIG undefined FUN_146468614(void)

longlong FUN_146468614(void)

{
  if (DAT_14cb36aa0 == 0) {
    FUN_14073dd9a(&DAT_14cb36aa0,&PTR_LAB_14ad71e18);
  }
  return DAT_14cb36aa0;
}



// FUNCTION 146468643 FUN_146468643 body=47 status=ok
// SIG undefined FUN_146468643(void)

longlong FUN_146468643(void)

{
  if (DAT_14cb36ab8 == 0) {
    FUN_14073dd9a(&DAT_14cb36ab8,&PTR_LAB_14ad72208);
  }
  return DAT_14cb36ab8;
}



// FUNCTION 146468672 FUN_146468672 body=47 status=ok
// SIG undefined FUN_146468672(void)

longlong FUN_146468672(void)

{
  if (DAT_14cb36ad8 == 0) {
    FUN_14073dd9a(&DAT_14cb36ad8,&PTR_LAB_14ad72710);
  }
  return DAT_14cb36ad8;
}



// FUNCTION 1464686a1 FUN_1464686a1 body=47 status=ok
// SIG undefined FUN_1464686a1(void)

longlong FUN_1464686a1(void)

{
  if (DAT_14cb36ac8 == 0) {
    FUN_14000fc22(&DAT_14cb36ac8,&PTR_FUN_14ad72598);
  }
  return DAT_14cb36ac8;
}



// FUNCTION 1464686d0 FUN_1464686d0 body=34 status=ok
// SIG undefined FUN_1464686d0(void)

void FUN_1464686d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a78a16();
  FUN_14069c8d6(uVar1,&PTR_s_UseScaleCurveRange_14ad725e0,1);
  return;
}



// FUNCTION 1464686f2 FUN_1464686f2 body=47 status=ok
// SIG undefined FUN_1464686f2(void)

longlong FUN_1464686f2(void)

{
  if (DAT_14cb36af0 == 0) {
    FUN_14073dd9a(&DAT_14cb36af0,&PTR_LAB_14ad72c88);
  }
  return DAT_14cb36af0;
}



// FUNCTION 146468721 FUN_146468721 body=47 status=ok
// SIG undefined FUN_146468721(void)

longlong FUN_146468721(void)

{
  if (DAT_14cb36b10 == 0) {
    FUN_14073dd9a(&DAT_14cb36b10,&PTR_LAB_14ad73160);
  }
  return DAT_14cb36b10;
}



// FUNCTION 146468750 FUN_146468750 body=47 status=ok
// SIG undefined FUN_146468750(void)

longlong FUN_146468750(void)

{
  if (DAT_14cb36b00 == 0) {
    FUN_14000fc22(&DAT_14cb36b00,&PTR_FUN_14ad73000);
  }
  return DAT_14cb36b00;
}



// FUNCTION 146468780 FUN_146468780 body=34 status=ok
// SIG undefined FUN_146468780(void)

void FUN_146468780(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a78b02();
  FUN_14069c8d6(uVar1,&PTR_s_UseScaleCurveRange_14ad73040,1);
  return;
}



// FUNCTION 1464687a2 FUN_1464687a2 body=47 status=ok
// SIG undefined FUN_1464687a2(void)

longlong FUN_1464687a2(void)

{
  if (DAT_14cb36b28 == 0) {
    FUN_14073dd9a(&DAT_14cb36b28,&PTR_LAB_14ad73678);
  }
  return DAT_14cb36b28;
}



// FUNCTION 1464687d1 FUN_1464687d1 body=47 status=ok
// SIG undefined FUN_1464687d1(void)

longlong FUN_1464687d1(void)

{
  if (DAT_14cb36b38 == 0) {
    FUN_1409ce572(&DAT_14cb36b38,&PTR_FUN_14ad73a10);
  }
  return DAT_14cb36b38;
}



// FUNCTION 146468800 FUN_146468800 body=47 status=ok
// SIG undefined FUN_146468800(void)

longlong FUN_146468800(void)

{
  if (DAT_14cb36b58 == 0) {
    FUN_14073dd9a(&DAT_14cb36b58,&PTR_LAB_14ad73f88);
  }
  return DAT_14cb36b58;
}



// FUNCTION 14646882f FUN_14646882f body=36 status=ok
// SIG undefined FUN_14646882f(void)

void FUN_14646882f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e3eac6(puVar1);
  *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) | 1;
  *puVar1 = &PTR_FUN_14ad743a0;
  return;
}



// FUNCTION 146468853 FUN_146468853 body=47 status=ok
// SIG undefined FUN_146468853(void)

longlong FUN_146468853(void)

{
  if (DAT_14cb36b70 == 0) {
    FUN_14073dd9a(&DAT_14cb36b70,&PTR_LAB_14ad74358);
  }
  return DAT_14cb36b70;
}



// FUNCTION 146468882 FUN_146468882 body=82 status=ok
// SIG undefined FUN_146468882(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146468882(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e3eac6(puVar1);
  *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) | 1;
  *puVar1 = &PTR_FUN_14ad748c0;
  *(undefined2 *)(puVar1 + 6) = 1;
  *(undefined8 *)((longlong)puVar1 + 0x34) = _DAT_14c84637c;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = DAT_14c846384;
  puVar1[8] = DAT_14c846370;
  *(undefined4 *)(puVar1 + 9) = DAT_14c846378;
  return;
}



// FUNCTION 1464688d4 FUN_1464688d4 body=47 status=ok
// SIG undefined FUN_1464688d4(void)

longlong FUN_1464688d4(void)

{
  if (DAT_14cb36b88 == 0) {
    FUN_14073dd9a(&DAT_14cb36b88,&PTR_LAB_14ad74878);
  }
  return DAT_14cb36b88;
}



// FUNCTION 146468903 FUN_146468903 body=47 status=ok
// SIG undefined FUN_146468903(void)

longlong FUN_146468903(void)

{
  if (DAT_14cb36ba0 == 0) {
    FUN_14073dd9a(&DAT_14cb36ba0,&PTR_LAB_14ad74c68);
  }
  return DAT_14cb36ba0;
}



// FUNCTION 146468932 FUN_146468932 body=47 status=ok
// SIG undefined FUN_146468932(void)

longlong FUN_146468932(void)

{
  if (DAT_14cb36bb0 == 0) {
    FUN_1409ce572(&DAT_14cb36bb0,&PTR_FUN_14ad74fe0);
  }
  return DAT_14cb36bb0;
}



// FUNCTION 146468961 FUN_146468961 body=78 status=ok
// SIG undefined FUN_146468961(void)

void FUN_146468961(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e3eac6(puVar1);
  *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) | 1;
  *puVar1 = &PTR_FUN_14ad753c0;
  *(undefined4 *)(puVar1 + 6) = 0x10;
  *(undefined2 *)((longlong)puVar1 + 0x34) = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 1;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0x3dcccccd3f800000;
  return;
}



// FUNCTION 1464689af FUN_1464689af body=47 status=ok
// SIG undefined FUN_1464689af(void)

longlong FUN_1464689af(void)

{
  if (DAT_14cb36bd0 == 0) {
    FUN_14073dd9a(&DAT_14cb36bd0,&PTR_LAB_14ad75378);
  }
  return DAT_14cb36bd0;
}



// FUNCTION 1464689de FUN_1464689de body=47 status=ok
// SIG undefined FUN_1464689de(void)

longlong FUN_1464689de(void)

{
  if (DAT_14cb36be0 == 0) {
    FUN_1409ce572(&DAT_14cb36be0,&PTR_FUN_14ad75710);
  }
  return DAT_14cb36be0;
}



// FUNCTION 146468a0e FUN_146468a0e body=55 status=ok
// SIG undefined FUN_146468a0e(void)

void FUN_146468a0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36c00 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36c00 = FUN_140002ddd(FUN_14646804f,uVar1,L"NiagaraStatelessSpawnInfo");
  }
  return;
}



// FUNCTION 146468a46 FUN_146468a46 body=48 status=ok
// SIG undefined FUN_146468a46(void)

void FUN_146468a46(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14ad79140;
  return;
}



// FUNCTION 146468a76 FUN_146468a76 body=47 status=ok
// SIG undefined FUN_146468a76(void)

longlong FUN_146468a76(void)

{
  if (DAT_14cb36c10 == 0) {
    FUN_1409ce572(&DAT_14cb36c10,&PTR_FUN_14ad75ae0);
  }
  return DAT_14cb36c10;
}



// FUNCTION 146468aa5 FUN_146468aa5 body=47 status=ok
// SIG undefined FUN_146468aa5(void)

longlong FUN_146468aa5(void)

{
  if (DAT_14cb36c28 == 0) {
    FUN_1409ce572(&DAT_14cb36c28,&PTR_FUN_14ad75b50);
  }
  return DAT_14cb36c28;
}



// FUNCTION 146468ad4 FUN_146468ad4 body=47 status=ok
// SIG undefined FUN_146468ad4(void)

longlong FUN_146468ad4(void)

{
  if (DAT_14cb36c40 == 0) {
    FUN_1409ce572(&DAT_14cb36c40,&PTR_FUN_14ad75bd0);
  }
  return DAT_14cb36c40;
}



// FUNCTION 146468b03 FUN_146468b03 body=47 status=ok
// SIG undefined FUN_146468b03(void)

longlong FUN_146468b03(void)

{
  if (DAT_14cb36c58 == 0) {
    FUN_1409ce572(&DAT_14cb36c58,&PTR_FUN_14ad75c40);
  }
  return DAT_14cb36c58;
}



// FUNCTION 146468b32 FUN_146468b32 body=55 status=ok
// SIG undefined FUN_146468b32(void)

void FUN_146468b32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36c78 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36c78 = FUN_140002ddd(FUN_146468b69,uVar1,L"NiagaraSystemStateData");
  }
  return;
}



// FUNCTION 146468b69 FUN_146468b69 body=47 status=ok
// SIG undefined FUN_146468b69(void)

longlong FUN_146468b69(void)

{
  if (DAT_14cb36c70 == 0) {
    FUN_14086a14e(&DAT_14cb36c70,&PTR_FUN_14ad76178);
  }
  return DAT_14cb36c70;
}



// FUNCTION 146468b98 FUN_146468b98 body=48 status=ok
// SIG undefined FUN_146468b98(void)

void FUN_146468b98(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14ad794c0;
  return;
}



// FUNCTION 146468bc8 FUN_146468bc8 body=55 status=ok
// SIG undefined FUN_146468bc8(void)

void FUN_146468bc8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36c90 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36c90 = FUN_140002ddd(FUN_146468020,uVar1,L"NiagaraEmitterStateData");
  }
  return;
}



// FUNCTION 146468c00 FUN_146468c00 body=48 status=ok
// SIG undefined FUN_146468c00(void)

void FUN_146468c00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14ad79620;
  return;
}



// FUNCTION 146468c30 FUN_146468c30 body=49 status=ok
// SIG undefined FUN_146468c30(void)

longlong FUN_146468c30(void)

{
  if (DAT_14cb36ca0 == 0) {
    FUN_1409ce572(&DAT_14cb36ca0,&PTR_FUN_14ad76bc0);
  }
  return DAT_14cb36ca0;
}



// FUNCTION 146468c61 FUN_146468c61 body=42 status=ok
// SIG undefined FUN_146468c61(void)

void FUN_146468c61(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad76d20;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 146468c8b FUN_146468c8b body=47 status=ok
// SIG undefined FUN_146468c8b(void)

longlong FUN_146468c8b(void)

{
  if (DAT_14cb36cc0 == 0) {
    FUN_14073dd9a(&DAT_14cb36cc0,&PTR_LAB_14ad76cd8);
  }
  return DAT_14cb36cc0;
}



// FUNCTION 146468cba FUN_146468cba body=55 status=ok
// SIG undefined FUN_146468cba(void)

void FUN_146468cba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36cd8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36cd8 = FUN_140002ddd(FUN_146468cf1,uVar1,L"NiagaraInputConditionMetadata");
  }
  return;
}



// FUNCTION 146468cf1 FUN_146468cf1 body=49 status=ok
// SIG undefined FUN_146468cf1(void)

longlong FUN_146468cf1(void)

{
  if (DAT_14cb36cd0 == 0) {
    FUN_14086a14e(&DAT_14cb36cd0,&PTR_FUN_14ad77118);
  }
  return DAT_14cb36cd0;
}



// FUNCTION 146468d22 FUN_146468d22 body=48 status=ok
// SIG undefined FUN_146468d22(void)

void FUN_146468d22(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14ad79840;
  return;
}


