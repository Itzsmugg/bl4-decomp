// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146769293 FUN_146769293 body=49 status=ok
// SIG undefined FUN_146769293(void)

longlong FUN_146769293(void)

{
  if (DAT_14cc2d940 == 0) {
    FUN_14073dd9a(&DAT_14cc2d940,&PTR_LAB_14bebdd90);
  }
  return DAT_14cc2d940;
}



// FUNCTION 1467692c4 FUN_1467692c4 body=47 status=ok
// SIG undefined FUN_1467692c4(void)

longlong FUN_1467692c4(void)

{
  if (DAT_14cc2d918 == 0) {
    FUN_14000fc22(&DAT_14cc2d918,&PTR_FUN_14bebd8b8);
  }
  return DAT_14cc2d918;
}



// FUNCTION 1467692f3 FUN_1467692f3 body=47 status=ok
// SIG undefined FUN_1467692f3(void)

longlong FUN_1467692f3(void)

{
  if (DAT_14cc2d920 == 0) {
    FUN_14000fc22(&DAT_14cc2d920,&PTR_FUN_14bebd950);
  }
  return DAT_14cc2d920;
}



// FUNCTION 146769322 FUN_146769322 body=47 status=ok
// SIG undefined FUN_146769322(void)

longlong FUN_146769322(void)

{
  if (DAT_14cc2d928 == 0) {
    FUN_14000fc22(&DAT_14cc2d928,&PTR_FUN_14bebdb18);
  }
  return DAT_14cc2d928;
}



// FUNCTION 146769351 FUN_146769351 body=47 status=ok
// SIG undefined FUN_146769351(void)

longlong FUN_146769351(void)

{
  if (DAT_14cc2d930 == 0) {
    FUN_14000fc22(&DAT_14cc2d930,&PTR_FUN_14bebdc78);
  }
  return DAT_14cc2d930;
}



// FUNCTION 146769380 FUN_146769380 body=34 status=ok
// SIG undefined FUN_146769380(void)

void FUN_146769380(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a98134();
  FUN_14069c8d6(uVar1,&PTR_s_ClearAllGoals_14bebdcc0,4);
  return;
}



// FUNCTION 1467693a2 FUN_1467693a2 body=81 status=ok
// SIG undefined FUN_1467693a2(void)

void FUN_1467693a2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bebddd0;
  puVar1[5] = &PTR_LAB_14bebe250;
  puVar1[6] = &PTR_LAB_14bebe290;
  puVar1[0x22] = &PTR_FUN_14bebe2e0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  return;
}



// FUNCTION 1467693f4 FUN_1467693f4 body=55 status=ok
// SIG undefined FUN_1467693f4(void)

void FUN_1467693f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d968 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2d968 = FUN_140002ddd(FUN_14676942b,uVar1,L"AnimNode_IKRig");
  }
  return;
}



// FUNCTION 14676942b FUN_14676942b body=47 status=ok
// SIG undefined FUN_14676942b(void)

longlong FUN_14676942b(void)

{
  if (DAT_14cc2d960 == 0) {
    FUN_14086a14e(&DAT_14cc2d960,&PTR_FUN_14bebe7b8);
  }
  return DAT_14cc2d960;
}



// FUNCTION 14676945a FUN_14676945a body=48 status=ok
// SIG undefined FUN_14676945a(void)

void FUN_14676945a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001e8;
  *puVar1 = &PTR_FUN_14becc720;
  return;
}



// FUNCTION 14676948a FUN_14676948a body=55 status=ok
// SIG undefined FUN_14676948a(void)

void FUN_14676948a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d9e0 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2d9e0 = FUN_140002ddd(FUN_1467694c1,uVar1,L"AnimNode_RetargetPoseFromMesh");
  }
  return;
}



// FUNCTION 1467694c1 FUN_1467694c1 body=47 status=ok
// SIG undefined FUN_1467694c1(void)

longlong FUN_1467694c1(void)

{
  if (DAT_14cc2d9d8 == 0) {
    FUN_14086a14e(&DAT_14cc2d9d8,&PTR_FUN_14bebed78);
  }
  return DAT_14cc2d9d8;
}



// FUNCTION 1467694f6 FUN_1467694f6 body=48 status=ok
// SIG undefined FUN_1467694f6(void)

void FUN_1467694f6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000001e8;
  *puVar1 = &PTR_FUN_14becc8f0;
  return;
}



// FUNCTION 146769526 FUN_146769526 body=192 status=ok
// SIG undefined FUN_146769526(void)

void FUN_146769526(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bece8d0;
  puVar1[3] = &DAT_14cc2d9f0;
  puVar1[4] = FUN_1459d1762;
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



// FUNCTION 1467695e8 FUN_1467695e8 body=55 status=ok
// SIG undefined FUN_1467695e8(void)

void FUN_1467695e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2da10 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2da10 = FUN_140002ddd(FUN_14676961f,uVar1,L"RetargetChainMap");
  }
  return;
}



// FUNCTION 14676961f FUN_14676961f body=47 status=ok
// SIG undefined FUN_14676961f(void)

longlong FUN_14676961f(void)

{
  if (DAT_14cc2da08 == 0) {
    FUN_14086a14e(&DAT_14cc2da08,&PTR_FUN_14bebeee8);
  }
  return DAT_14cc2da08;
}



// FUNCTION 14676964e FUN_14676964e body=48 status=ok
// SIG undefined FUN_14676964e(void)

void FUN_14676964e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14beccb40;
  return;
}



// FUNCTION 146769683 FUN_146769683 body=47 status=ok
// SIG undefined FUN_146769683(void)

longlong FUN_146769683(void)

{
  if (DAT_14cc2da28 == 0) {
    FUN_14073dd9a(&DAT_14cc2da28,&PTR_LAB_14bebf038);
  }
  return DAT_14cc2da28;
}



// FUNCTION 1467696b2 FUN_1467696b2 body=140 status=ok
// SIG undefined FUN_1467696b2(void)

void FUN_1467696b2(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bebf400;
  puVar1[5] = &DAT_3f8000003f800000;
  *(undefined4 *)(puVar1 + 6) = 0;
  uVar2 = DAT_14c846518;
  puVar1[7] = DAT_14c846510;
  puVar1[8] = uVar2;
  puVar1[9] = DAT_14c846520;
  puVar1[10] = &DAT_3f8000003f800000;
  uVar2 = DAT_14c8464e8;
  puVar1[0xb] = DAT_14c8464e0;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = DAT_14c8464f0;
  puVar1[0x10] = DAT_14c846508;
  uVar2 = DAT_14c846500;
  puVar1[0xe] = DAT_14c8464f8;
  puVar1[0xf] = uVar2;
  puVar1[0x11] = 0x3f800000;
  return;
}



// FUNCTION 146769743 FUN_146769743 body=47 status=ok
// SIG undefined FUN_146769743(void)

longlong FUN_146769743(void)

{
  if (DAT_14cc2da40 == 0) {
    FUN_14073dd9a(&DAT_14cc2da40,&PTR_LAB_14bebf3b8);
  }
  return DAT_14cc2da40;
}



// FUNCTION 146769772 FUN_146769772 body=73 status=ok
// SIG undefined FUN_146769772(void)

void FUN_146769772(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bebf780;
  *(undefined4 *)(puVar1 + 5) = 0x1010101;
  *(undefined1 *)((longlong)puVar1 + 0x2c) = 0;
  puVar1[6] = 0x100000000;
  puVar1[7] = 0;
  puVar1[8] = 0x3f800000;
  *(undefined4 *)(puVar1 + 9) = 0x3f800000;
  return;
}



// FUNCTION 1467697c0 FUN_1467697c0 body=47 status=ok
// SIG undefined FUN_1467697c0(void)

longlong FUN_1467697c0(void)

{
  if (DAT_14cc2da58 == 0) {
    FUN_14073dd9a(&DAT_14cc2da58,&PTR_LAB_14bebf738);
  }
  return DAT_14cc2da58;
}



// FUNCTION 1467697f0 FUN_1467697f0 body=55 status=ok
// SIG undefined FUN_1467697f0(void)

void FUN_1467697f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2da70 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2da70 = FUN_140002ddd(FUN_146769827,uVar1,L"IKRetargetPose");
  }
  return;
}



// FUNCTION 146769827 FUN_146769827 body=49 status=ok
// SIG undefined FUN_146769827(void)

longlong FUN_146769827(void)

{
  if (DAT_14cc2da68 == 0) {
    FUN_14086a14e(&DAT_14cc2da68,&PTR_FUN_14bebfbb0);
  }
  return DAT_14cc2da68;
}



// FUNCTION 146769858 FUN_146769858 body=48 status=ok
// SIG undefined FUN_146769858(void)

void FUN_146769858(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14beccca0;
  return;
}



// FUNCTION 146769888 FUN_146769888 body=49 status=ok
// SIG undefined FUN_146769888(void)

longlong FUN_146769888(void)

{
  if (DAT_14cc2db18 == 0) {
    FUN_14073dd9a(&DAT_14cc2db18,&PTR_LAB_14bec1790);
  }
  return DAT_14cc2db18;
}



// FUNCTION 1467698b9 FUN_1467698b9 body=47 status=ok
// SIG undefined FUN_1467698b9(void)

longlong FUN_1467698b9(void)

{
  if (DAT_14cc2da98 == 0) {
    FUN_14000fc22(&DAT_14cc2da98,&PTR_FUN_14bebfdb8);
  }
  return DAT_14cc2da98;
}



// FUNCTION 1467698e8 FUN_1467698e8 body=47 status=ok
// SIG undefined FUN_1467698e8(void)

longlong FUN_1467698e8(void)

{
  if (DAT_14cc2daa0 == 0) {
    FUN_14000fc22(&DAT_14cc2daa0,&PTR_FUN_14bebfef0);
  }
  return DAT_14cc2daa0;
}



// FUNCTION 146769917 FUN_146769917 body=47 status=ok
// SIG undefined FUN_146769917(void)

longlong FUN_146769917(void)

{
  if (DAT_14cc2daa8 == 0) {
    FUN_14000fc22(&DAT_14cc2daa8,&PTR_FUN_14bec0040);
  }
  return DAT_14cc2daa8;
}



// FUNCTION 146769946 FUN_146769946 body=47 status=ok
// SIG undefined FUN_146769946(void)

longlong FUN_146769946(void)

{
  if (DAT_14cc2dab0 == 0) {
    FUN_14000fc22(&DAT_14cc2dab0,&PTR_FUN_14bec0190);
  }
  return DAT_14cc2dab0;
}



// FUNCTION 146769975 FUN_146769975 body=47 status=ok
// SIG undefined FUN_146769975(void)

longlong FUN_146769975(void)

{
  if (DAT_14cc2dab8 == 0) {
    FUN_14000fc22(&DAT_14cc2dab8,&PTR_FUN_14bec0288);
  }
  return DAT_14cc2dab8;
}



// FUNCTION 1467699a4 FUN_1467699a4 body=47 status=ok
// SIG undefined FUN_1467699a4(void)

longlong FUN_1467699a4(void)

{
  if (DAT_14cc2dac0 == 0) {
    FUN_14000fc22(&DAT_14cc2dac0,&PTR_FUN_14bec03c0);
  }
  return DAT_14cc2dac0;
}



// FUNCTION 1467699d3 FUN_1467699d3 body=47 status=ok
// SIG undefined FUN_1467699d3(void)

longlong FUN_1467699d3(void)

{
  if (DAT_14cc2dac8 == 0) {
    FUN_14000fc22(&DAT_14cc2dac8,&PTR_FUN_14bec04b8);
  }
  return DAT_14cc2dac8;
}



// FUNCTION 146769a02 FUN_146769a02 body=47 status=ok
// SIG undefined FUN_146769a02(void)

longlong FUN_146769a02(void)

{
  if (DAT_14cc2dad0 == 0) {
    FUN_14000fc22(&DAT_14cc2dad0,&PTR_FUN_14bec0550);
  }
  return DAT_14cc2dad0;
}



// FUNCTION 146769a31 FUN_146769a31 body=47 status=ok
// SIG undefined FUN_146769a31(void)

longlong FUN_146769a31(void)

{
  if (DAT_14cc2dad8 == 0) {
    FUN_14000fc22(&DAT_14cc2dad8,&PTR_FUN_14bec05e8);
  }
  return DAT_14cc2dad8;
}



// FUNCTION 146769a60 FUN_146769a60 body=49 status=ok
// SIG undefined FUN_146769a60(void)

longlong FUN_146769a60(void)

{
  if (DAT_14cc2db98 == 0) {
    FUN_14086a14e(&DAT_14cc2db98,&PTR_FUN_14bec4098);
  }
  return DAT_14cc2db98;
}



// FUNCTION 146769a91 FUN_146769a91 body=47 status=ok
// SIG undefined FUN_146769a91(void)

longlong FUN_146769a91(void)

{
  if (DAT_14cc2dae0 == 0) {
    FUN_14000fc22(&DAT_14cc2dae0,&PTR_FUN_14bec0730);
  }
  return DAT_14cc2dae0;
}



// FUNCTION 146769ac0 FUN_146769ac0 body=49 status=ok
// SIG undefined FUN_146769ac0(void)

longlong FUN_146769ac0(void)

{
  if (DAT_14cc2dbb0 == 0) {
    FUN_14086a14e(&DAT_14cc2dbb0,&PTR_FUN_14bec4420);
  }
  return DAT_14cc2dbb0;
}



// FUNCTION 146769af1 FUN_146769af1 body=47 status=ok
// SIG undefined FUN_146769af1(void)

longlong FUN_146769af1(void)

{
  if (DAT_14cc2dae8 == 0) {
    FUN_14000fc22(&DAT_14cc2dae8,&PTR_FUN_14bec0880);
  }
  return DAT_14cc2dae8;
}



// FUNCTION 146769b20 FUN_146769b20 body=47 status=ok
// SIG undefined FUN_146769b20(void)

longlong FUN_146769b20(void)

{
  if (DAT_14cc2daf0 == 0) {
    FUN_14000fc22(&DAT_14cc2daf0,&PTR_FUN_14bec09c0);
  }
  return DAT_14cc2daf0;
}



// FUNCTION 146769b4f FUN_146769b4f body=49 status=ok
// SIG undefined FUN_146769b4f(void)

longlong FUN_146769b4f(void)

{
  if (DAT_14cc2db80 == 0) {
    FUN_14086a14e(&DAT_14cc2db80,&PTR_FUN_14bec3cf8);
  }
  return DAT_14cc2db80;
}



// FUNCTION 146769b80 FUN_146769b80 body=47 status=ok
// SIG undefined FUN_146769b80(void)

longlong FUN_146769b80(void)

{
  if (DAT_14cc2daf8 == 0) {
    FUN_14000fc22(&DAT_14cc2daf8,&PTR_FUN_14bec0b18);
  }
  return DAT_14cc2daf8;
}



// FUNCTION 146769baf FUN_146769baf body=47 status=ok
// SIG undefined FUN_146769baf(void)

longlong FUN_146769baf(void)

{
  if (DAT_14cc2db00 == 0) {
    FUN_14000fc22(&DAT_14cc2db00,&PTR_FUN_14bec0c18);
  }
  return DAT_14cc2db00;
}



// FUNCTION 146769bde FUN_146769bde body=47 status=ok
// SIG undefined FUN_146769bde(void)

longlong FUN_146769bde(void)

{
  if (DAT_14cc2db08 == 0) {
    FUN_14000fc22(&DAT_14cc2db08,&PTR_FUN_14bec0d18);
  }
  return DAT_14cc2db08;
}



// FUNCTION 146769c0e FUN_146769c0e body=34 status=ok
// SIG undefined FUN_146769c0e(void)

void FUN_146769c0e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145876cee();
  FUN_14069c8d6(uVar1,&PTR_s_GetChainSettingsFromRetargetAsse_14bec0d60,0xf);
  return;
}



// FUNCTION 146769c35 FUN_146769c35 body=47 status=ok
// SIG undefined FUN_146769c35(void)

longlong FUN_146769c35(void)

{
  if (DAT_14cc2db40 == 0) {
    FUN_14073dd9a(&DAT_14cc2db40,&PTR_LAB_14bec1d08);
  }
  return DAT_14cc2db40;
}



// FUNCTION 146769c64 FUN_146769c64 body=47 status=ok
// SIG undefined FUN_146769c64(void)

longlong FUN_146769c64(void)

{
  if (DAT_14cc2db50 == 0) {
    FUN_1409ce572(&DAT_14cc2db50,&PTR_FUN_14bec3a40);
  }
  return DAT_14cc2db50;
}



// FUNCTION 146769c93 FUN_146769c93 body=47 status=ok
// SIG undefined FUN_146769c93(void)

longlong FUN_146769c93(void)

{
  if (DAT_14cc2db68 == 0) {
    FUN_1409ce572(&DAT_14cc2db68,&PTR_FUN_14bec3ad0);
  }
  return DAT_14cc2db68;
}



// FUNCTION 146769cc2 FUN_146769cc2 body=55 status=ok
// SIG undefined FUN_146769cc2(void)

void FUN_146769cc2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2db88 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2db88 = FUN_140002ddd(FUN_146769b4f,uVar1,L"TargetChainSpeedPlantSettings");
  }
  return;
}



// FUNCTION 146769cfa FUN_146769cfa body=48 status=ok
// SIG undefined FUN_146769cfa(void)

void FUN_146769cfa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000018;
  *puVar1 = &PTR_FUN_14becd000;
  return;
}



// FUNCTION 146769d2a FUN_146769d2a body=55 status=ok
// SIG undefined FUN_146769d2a(void)

void FUN_146769d2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dba0 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2dba0 = FUN_140002ddd(FUN_146769a60,uVar1,L"TargetChainFKSettings");
  }
  return;
}



// FUNCTION 146769d62 FUN_146769d62 body=48 status=ok
// SIG undefined FUN_146769d62(void)

void FUN_146769d62(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x40000001c;
  *puVar1 = &PTR_FUN_14becd160;
  return;
}



// FUNCTION 146769d92 FUN_146769d92 body=55 status=ok
// SIG undefined FUN_146769d92(void)

void FUN_146769d92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dbb8 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2dbb8 = FUN_140002ddd(FUN_146769ac0,uVar1,L"TargetChainIKSettings");
  }
  return;
}



// FUNCTION 146769dca FUN_146769dca body=48 status=ok
// SIG undefined FUN_146769dca(void)

void FUN_146769dca(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000078;
  *puVar1 = &PTR_FUN_14becd2c0;
  return;
}



// FUNCTION 146769dfa FUN_146769dfa body=55 status=ok
// SIG undefined FUN_146769dfa(void)

void FUN_146769dfa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dbd0 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2dbd0 = FUN_140002ddd(FUN_146768f45,uVar1,L"TargetChainSettings");
  }
  return;
}



// FUNCTION 146769e32 FUN_146769e32 body=48 status=ok
// SIG undefined FUN_146769e32(void)

void FUN_146769e32(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b0;
  *puVar1 = &PTR_FUN_14becd420;
  return;
}



// FUNCTION 146769e62 FUN_146769e62 body=55 status=ok
// SIG undefined FUN_146769e62(void)

void FUN_146769e62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dbe8 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2dbe8 = FUN_140002ddd(FUN_146768f76,uVar1,L"TargetRootSettings");
  }
  return;
}



// FUNCTION 146769e9a FUN_146769e9a body=48 status=ok
// SIG undefined FUN_146769e9a(void)

void FUN_146769e9a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14becd580;
  return;
}



// FUNCTION 146769eca FUN_146769eca body=47 status=ok
// SIG undefined FUN_146769eca(void)

longlong FUN_146769eca(void)

{
  if (DAT_14cc2dbf8 == 0) {
    FUN_1409ce572(&DAT_14cc2dbf8,&PTR_FUN_14bec4990);
  }
  return DAT_14cc2dbf8;
}



// FUNCTION 146769ef9 FUN_146769ef9 body=47 status=ok
// SIG undefined FUN_146769ef9(void)

longlong FUN_146769ef9(void)

{
  if (DAT_14cc2dc10 == 0) {
    FUN_1409ce572(&DAT_14cc2dc10,&PTR_FUN_14bec4a10);
  }
  return DAT_14cc2dc10;
}



// FUNCTION 146769f28 FUN_146769f28 body=55 status=ok
// SIG undefined FUN_146769f28(void)

void FUN_146769f28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dc30 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2dc30 = FUN_140002ddd(FUN_146768fa7,uVar1,L"RetargetGlobalSettings");
  }
  return;
}



// FUNCTION 146769f60 FUN_146769f60 body=48 status=ok
// SIG undefined FUN_146769f60(void)

void FUN_146769f60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000024;
  *puVar1 = &PTR_FUN_14becd7f0;
  return;
}



// FUNCTION 146769f90 FUN_146769f90 body=47 status=ok
// SIG undefined FUN_146769f90(void)

longlong FUN_146769f90(void)

{
  if (DAT_14cc2dc40 == 0) {
    FUN_1409ce572(&DAT_14cc2dc40,&PTR_FUN_14bec53c0);
  }
  return DAT_14cc2dc40;
}



// FUNCTION 146769fbf FUN_146769fbf body=47 status=ok
// SIG undefined FUN_146769fbf(void)

longlong FUN_146769fbf(void)

{
  if (DAT_14cc2dc58 == 0) {
    FUN_1409ce572(&DAT_14cc2dc58,&PTR_FUN_14bec5440);
  }
  return DAT_14cc2dc58;
}



// FUNCTION 146769fee FUN_146769fee body=55 status=ok
// SIG undefined FUN_146769fee(void)

void FUN_146769fee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dc78 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2dc78 = FUN_140002ddd(FUN_146769008,uVar1,L"IKRigGoal");
  }
  return;
}



// FUNCTION 14676a026 FUN_14676a026 body=48 status=ok
// SIG undefined FUN_14676a026(void)

void FUN_14676a026(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x10000000a0;
  *puVar1 = &PTR_FUN_14becda60;
  return;
}



// FUNCTION 14676a056 FUN_14676a056 body=55 status=ok
// SIG undefined FUN_14676a056(void)

void FUN_14676a056(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dc90 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2dc90 = FUN_140002ddd(FUN_14676a08d,uVar1,L"IKRigGoalContainer");
  }
  return;
}



// FUNCTION 14676a08d FUN_14676a08d body=47 status=ok
// SIG undefined FUN_14676a08d(void)

longlong FUN_14676a08d(void)

{
  if (DAT_14cc2dc88 == 0) {
    FUN_14086a14e(&DAT_14cc2dc88,&PTR_FUN_14bec5928);
  }
  return DAT_14cc2dc88;
}



// FUNCTION 14676a0bc FUN_14676a0bc body=48 status=ok
// SIG undefined FUN_14676a0bc(void)

void FUN_14676a0bc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14becdbd0;
  return;
}



// FUNCTION 14676a0ec FUN_14676a0ec body=153 status=ok
// SIG undefined FUN_14676a0ec(void)

void FUN_14676a0ec(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bec5c10;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = &DAT_3f8000003f800000;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x3ff00000;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3ff0000000000000;
  puVar1[0x11] = 0x3ff0000000000000;
  puVar1[0x12] = 0x3ff0000000000000;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xb4) = 0;
  *(undefined4 *)(puVar1 + 0x17) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xbc) = 0x3ff00000;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0x3ff0000000000000;
  puVar1[0x1d] = 0x3ff0000000000000;
  puVar1[0x1e] = 0x3ff0000000000000;
  puVar1[0x1f] = 0;
  return;
}



// FUNCTION 14676a18a FUN_14676a18a body=47 status=ok
// SIG undefined FUN_14676a18a(void)

longlong FUN_14676a18a(void)

{
  if (DAT_14cc2dca8 == 0) {
    FUN_14073dd9a(&DAT_14cc2dca8,&PTR_LAB_14bec5bc8);
  }
  return DAT_14cc2dca8;
}



// FUNCTION 14676a1ba FUN_14676a1ba body=55 status=ok
// SIG undefined FUN_14676a1ba(void)

void FUN_14676a1ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dcc0 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2dcc0 = FUN_140002ddd(FUN_14676a1f1,uVar1,L"BoneChain");
  }
  return;
}



// FUNCTION 14676a1f1 FUN_14676a1f1 body=47 status=ok
// SIG undefined FUN_14676a1f1(void)

longlong FUN_14676a1f1(void)

{
  if (DAT_14cc2dcb8 == 0) {
    FUN_14086a14e(&DAT_14cc2dcb8,&PTR_FUN_14bec5ff0);
  }
  return DAT_14cc2dcb8;
}



// FUNCTION 14676a220 FUN_14676a220 body=48 status=ok
// SIG undefined FUN_14676a220(void)

void FUN_14676a220(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000030;
  *puVar1 = &PTR_FUN_14becdd30;
  return;
}



// FUNCTION 14676a250 FUN_14676a250 body=55 status=ok
// SIG undefined FUN_14676a250(void)

void FUN_14676a250(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dcd8 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2dcd8 = FUN_140002ddd(FUN_14676a287,uVar1,L"RetargetDefinition");
  }
  return;
}



// FUNCTION 14676a287 FUN_14676a287 body=47 status=ok
// SIG undefined FUN_14676a287(void)

longlong FUN_14676a287(void)

{
  if (DAT_14cc2dcd0 == 0) {
    FUN_14086a14e(&DAT_14cc2dcd0,&PTR_FUN_14bec6140);
  }
  return DAT_14cc2dcd0;
}



// FUNCTION 14676a2b6 FUN_14676a2b6 body=48 status=ok
// SIG undefined FUN_14676a2b6(void)

void FUN_14676a2b6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14becde90;
  return;
}



// FUNCTION 14676a2e6 FUN_14676a2e6 body=65 status=ok
// SIG undefined FUN_14676a2e6(void)

void FUN_14676a2e6(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1);
  *puVar1 = &PTR_FUN_14bec6420;
  puVar1[5] = &PTR_FUN_14bec66c0;
  memset(puVar1 + 6,0,0xd0);
  return;
}



// FUNCTION 14676a32d FUN_14676a32d body=47 status=ok
// SIG undefined FUN_14676a32d(void)

longlong FUN_14676a32d(void)

{
  if (DAT_14cc2dd48 == 0) {
    FUN_14086a14e(&DAT_14cc2dd48,&PTR_FUN_14bec7950);
  }
  return DAT_14cc2dd48;
}



// FUNCTION 14676a361 FUN_14676a361 body=47 status=ok
// SIG undefined FUN_14676a361(void)

longlong FUN_14676a361(void)

{
  if (DAT_14cc2dcf0 == 0) {
    FUN_14073dd9a(&DAT_14cc2dcf0,&PTR_LAB_14bec63d8);
  }
  return DAT_14cc2dcf0;
}



// FUNCTION 14676a390 FUN_14676a390 body=55 status=ok
// SIG undefined FUN_14676a390(void)

void FUN_14676a390(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dd08 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2dd08 = FUN_140002ddd(FUN_14676a3c7,uVar1,L"GoalBone");
  }
  return;
}



// FUNCTION 14676a3c7 FUN_14676a3c7 body=47 status=ok
// SIG undefined FUN_14676a3c7(void)

longlong FUN_14676a3c7(void)

{
  if (DAT_14cc2dd00 == 0) {
    FUN_14086a14e(&DAT_14cc2dd00,&PTR_FUN_14bec67b0);
  }
  return DAT_14cc2dd00;
}



// FUNCTION 14676a3f6 FUN_14676a3f6 body=48 status=ok
// SIG undefined FUN_14676a3f6(void)

void FUN_14676a3f6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14becdff0;
  return;
}



// FUNCTION 14676a42b FUN_14676a42b body=47 status=ok
// SIG undefined FUN_14676a42b(void)

longlong FUN_14676a42b(void)

{
  if (DAT_14cc2dd20 == 0) {
    FUN_14073dd9a(&DAT_14cc2dd20,&PTR_LAB_14bec68a8);
  }
  return DAT_14cc2dd20;
}



// FUNCTION 14676a45a FUN_14676a45a body=55 status=ok
// SIG undefined FUN_14676a45a(void)

void FUN_14676a45a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dd38 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2dd38 = FUN_140002ddd(FUN_14676a491,uVar1,L"IKRigInputSkeleton");
  }
  return;
}



// FUNCTION 14676a491 FUN_14676a491 body=47 status=ok
// SIG undefined FUN_14676a491(void)

longlong FUN_14676a491(void)

{
  if (DAT_14cc2dd30 == 0) {
    FUN_14086a14e(&DAT_14cc2dd30,&PTR_FUN_14bec7590);
  }
  return DAT_14cc2dd30;
}



// FUNCTION 14676a4c0 FUN_14676a4c0 body=48 status=ok
// SIG undefined FUN_14676a4c0(void)

void FUN_14676a4c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bece150;
  return;
}



// FUNCTION 14676a4f0 FUN_14676a4f0 body=55 status=ok
// SIG undefined FUN_14676a4f0(void)

void FUN_14676a4f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dd50 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2dd50 = FUN_140002ddd(FUN_14676a32d,uVar1,L"IKRigSkeleton");
  }
  return;
}



// FUNCTION 14676a528 FUN_14676a528 body=48 status=ok
// SIG undefined FUN_14676a528(void)

void FUN_14676a528(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14bece2b0;
  return;
}



// FUNCTION 14676a558 FUN_14676a558 body=48 status=ok
// SIG undefined FUN_14676a558(void)

void FUN_14676a558(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14bec7ab0;
  *(undefined1 *)(puVar1 + 5) = 1;
  FUN_144757f48(puVar1,8);
  return;
}



// FUNCTION 14676a588 FUN_14676a588 body=49 status=ok
// SIG undefined FUN_14676a588(void)

longlong FUN_14676a588(void)

{
  if (DAT_14cc2dd68 == 0) {
    FUN_14073dd9a(&DAT_14cc2dd68,&PTR_LAB_14bec7a68);
  }
  return DAT_14cc2dd68;
}



// FUNCTION 14676a5b9 FUN_14676a5b9 body=58 status=ok
// SIG undefined FUN_14676a5b9(void)

void FUN_14676a5b9(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14bec7f30;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  FUN_144757f48(puVar1,8);
  return;
}



// FUNCTION 14676a5f8 FUN_14676a5f8 body=47 status=ok
// SIG undefined FUN_14676a5f8(void)

longlong FUN_14676a5f8(void)

{
  if (DAT_14cc2dd80 == 0) {
    FUN_14073dd9a(&DAT_14cc2dd80,&PTR_LAB_14bec7ee8);
  }
  return DAT_14cc2dd80;
}



// FUNCTION 14676a627 FUN_14676a627 body=47 status=ok
// SIG undefined FUN_14676a627(void)

longlong FUN_14676a627(void)

{
  if (DAT_14cc2dd98 == 0) {
    FUN_14073dd9a(&DAT_14cc2dd98,&PTR_LAB_14bec8658);
  }
  return DAT_14cc2dd98;
}



// FUNCTION 14676a656 FUN_14676a656 body=51 status=ok
// SIG undefined FUN_14676a656(void)

void FUN_14676a656(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14bec8ae0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  FUN_144757f48(puVar1,8);
  return;
}



// FUNCTION 14676a68e FUN_14676a68e body=47 status=ok
// SIG undefined FUN_14676a68e(void)

longlong FUN_14676a68e(void)

{
  if (DAT_14cc2ddb0 == 0) {
    FUN_14073dd9a(&DAT_14cc2ddb0,&PTR_LAB_14bec8a98);
  }
  return DAT_14cc2ddb0;
}



// FUNCTION 14676a6bd FUN_14676a6bd body=47 status=ok
// SIG undefined FUN_14676a6bd(void)

longlong FUN_14676a6bd(void)

{
  if (DAT_14cc2ddc8 == 0) {
    FUN_14073dd9a(&DAT_14cc2ddc8,&PTR_LAB_14bec9168);
  }
  return DAT_14cc2ddc8;
}



// FUNCTION 14676a6ec FUN_14676a6ec body=69 status=ok
// SIG undefined FUN_14676a6ec(void)

void FUN_14676a6ec(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14bec9740;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(puVar1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0x3f800000;
  *(undefined4 *)(puVar1 + 9) = 0xffffffff;
  FUN_144757f48(puVar1,8);
  return;
}



// FUNCTION 14676a737 FUN_14676a737 body=47 status=ok
// SIG undefined FUN_14676a737(void)

longlong FUN_14676a737(void)

{
  if (DAT_14cc2dde0 == 0) {
    FUN_14073dd9a(&DAT_14cc2dde0,&PTR_LAB_14bec96f8);
  }
  return DAT_14cc2dde0;
}



// FUNCTION 14676a76b FUN_14676a76b body=47 status=ok
// SIG undefined FUN_14676a76b(void)

longlong FUN_14676a76b(void)

{
  if (DAT_14cc2ddf8 == 0) {
    FUN_14073dd9a(&DAT_14cc2ddf8,&PTR_LAB_14bec9eb8);
  }
  return DAT_14cc2ddf8;
}



// FUNCTION 14676a79a FUN_14676a79a body=47 status=ok
// SIG undefined FUN_14676a79a(void)

longlong FUN_14676a79a(void)

{
  if (DAT_14cc2de20 == 0) {
    FUN_14073dd9a(&DAT_14cc2de20,&PTR_LAB_14beca820);
  }
  return DAT_14cc2de20;
}



// FUNCTION 14676a7c9 FUN_14676a7c9 body=47 status=ok
// SIG undefined FUN_14676a7c9(void)

longlong FUN_14676a7c9(void)

{
  if (DAT_14cc2de08 == 0) {
    FUN_14000fc22(&DAT_14cc2de08,&PTR_FUN_14beca240);
  }
  return DAT_14cc2de08;
}



// FUNCTION 14676a7f8 FUN_14676a7f8 body=47 status=ok
// SIG undefined FUN_14676a7f8(void)

longlong FUN_14676a7f8(void)

{
  if (DAT_14cc2de10 == 0) {
    FUN_14000fc22(&DAT_14cc2de10,&PTR_FUN_14beca320);
  }
  return DAT_14cc2de10;
}



// FUNCTION 14676a828 FUN_14676a828 body=34 status=ok
// SIG undefined FUN_14676a828(void)

void FUN_14676a828(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a98220();
  FUN_14069c8d6(uVar1,&PTR_s_GetBoneSettings_14beca360,2);
  return;
}



// FUNCTION 14676a84a FUN_14676a84a body=58 status=ok
// SIG undefined FUN_14676a84a(void)

void FUN_14676a84a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400841f8(puVar1);
  *puVar1 = &PTR_FUN_14becad20;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  FUN_144757f48(puVar1,8);
  return;
}



// FUNCTION 14676a889 FUN_14676a889 body=47 status=ok
// SIG undefined FUN_14676a889(void)

longlong FUN_14676a889(void)

{
  if (DAT_14cc2de38 == 0) {
    FUN_14073dd9a(&DAT_14cc2de38,&PTR_LAB_14becacd8);
  }
  return DAT_14cc2de38;
}



// FUNCTION 14676a8b8 FUN_14676a8b8 body=47 status=ok
// SIG undefined FUN_14676a8b8(void)

longlong FUN_14676a8b8(void)

{
  if (DAT_14cc2de50 == 0) {
    FUN_14073dd9a(&DAT_14cc2de50,&PTR_LAB_14becb0d8);
  }
  return DAT_14cc2de50;
}



// FUNCTION 14676a8e7 FUN_14676a8e7 body=48 status=ok
// SIG undefined FUN_14676a8e7(void)

void FUN_14676a8e7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14becb5e0;
  *(undefined2 *)(puVar1 + 5) = 0x101;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x3f800000;
  return;
}



// FUNCTION 14676a91c FUN_14676a91c body=47 status=ok
// SIG undefined FUN_14676a91c(void)

longlong FUN_14676a91c(void)

{
  if (DAT_14cc2de68 == 0) {
    FUN_14073dd9a(&DAT_14cc2de68,&PTR_LAB_14becb598);
  }
  return DAT_14cc2de68;
}



// FUNCTION 14676a94b FUN_14676a94b body=47 status=ok
// SIG undefined FUN_14676a94b(void)

longlong FUN_14676a94b(void)

{
  if (DAT_14cc2de80 == 0) {
    FUN_14073dd9a(&DAT_14cc2de80,&PTR_LAB_14becb998);
  }
  return DAT_14cc2de80;
}



// FUNCTION 14676a97a FUN_14676a97a body=55 status=ok
// SIG undefined FUN_14676a97a(void)

void FUN_14676a97a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2de98 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2de98 = FUN_140002ddd(FUN_14676a9b1,uVar1,L"LimbSolverSettings");
  }
  return;
}



// FUNCTION 14676a9b1 FUN_14676a9b1 body=47 status=ok
// SIG undefined FUN_14676a9b1(void)

longlong FUN_14676a9b1(void)

{
  if (DAT_14cc2de90 == 0) {
    FUN_14086a14e(&DAT_14cc2de90,&PTR_FUN_14becbff8);
  }
  return DAT_14cc2de90;
}



// FUNCTION 14676a9e0 FUN_14676a9e0 body=48 status=ok
// SIG undefined FUN_14676a9e0(void)

void FUN_14676a9e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x400000024;
  *puVar1 = &PTR_FUN_14bece410;
  return;
}



// FUNCTION 14676aa10 FUN_14676aa10 body=55 status=ok
// SIG undefined FUN_14676aa10(void)

void FUN_14676aa10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2deb0 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2deb0 = FUN_140002ddd(FUN_14676aa47,uVar1,L"LimbLink");
  }
  return;
}



// FUNCTION 14676aa47 FUN_14676aa47 body=47 status=ok
// SIG undefined FUN_14676aa47(void)

longlong FUN_14676aa47(void)

{
  if (DAT_14cc2dea8 == 0) {
    FUN_14086a14e(&DAT_14cc2dea8,&PTR_FUN_14becc050);
  }
  return DAT_14cc2dea8;
}



// FUNCTION 14676aa76 FUN_14676aa76 body=48 status=ok
// SIG undefined FUN_14676aa76(void)

void FUN_14676aa76(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000068;
  *puVar1 = &PTR_FUN_14bece570;
  return;
}



// FUNCTION 14676aaa6 FUN_14676aaa6 body=55 status=ok
// SIG undefined FUN_14676aaa6(void)

void FUN_14676aaa6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dec8 == 0) {
    uVar1 = FUN_140f0d032();
    DAT_14cc2dec8 = FUN_140002ddd(FUN_14676aadd,uVar1,L"LimbSolver");
  }
  return;
}



// FUNCTION 14676aadd FUN_14676aadd body=47 status=ok
// SIG undefined FUN_14676aadd(void)

longlong FUN_14676aadd(void)

{
  if (DAT_14cc2dec0 == 0) {
    FUN_14086a14e(&DAT_14cc2dec0,&PTR_FUN_14becc0b0);
  }
  return DAT_14cc2dec0;
}



// FUNCTION 14676ab0c FUN_14676ab0c body=48 status=ok
// SIG undefined FUN_14676ab0c(void)

void FUN_14676ab0c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bece6e0;
  return;
}



// FUNCTION 14676ab3c FUN_14676ab3c body=69 status=ok
// SIG undefined FUN_14676ab3c(void)

undefined8 * FUN_14676ab3c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bebb3f0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676ab82 FUN_14676ab82 body=40 status=ok
// SIG undefined FUN_14676ab82(void)

undefined8 FUN_14676ab82(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676abaa FUN_14676abaa body=69 status=ok
// SIG undefined FUN_14676abaa(void)

undefined8 * FUN_14676abaa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bebbbb0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676abf0 FUN_14676abf0 body=40 status=ok
// SIG undefined FUN_14676abf0(void)

undefined8 FUN_14676abf0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676ac18 FUN_14676ac18 body=69 status=ok
// SIG undefined FUN_14676ac18(void)

undefined8 * FUN_14676ac18(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bebcd40;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676ac5e FUN_14676ac5e body=72 status=ok
// SIG undefined FUN_14676ac5e(void)

undefined8 * FUN_14676ac5e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bebd590;
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676aca6 FUN_14676aca6 body=108 status=ok
// SIG undefined FUN_14676aca6(void)

undefined8 * FUN_14676aca6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bebddd0;
  param_1[5] = &PTR_LAB_14bebe250;
  param_1[6] = &PTR_LAB_14bebe290;
  param_1[0x22] = &PTR_FUN_14bebe2e0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676ad12 FUN_14676ad12 body=40 status=ok
// SIG undefined FUN_14676ad12(void)

undefined8 FUN_14676ad12(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676ad3a FUN_14676ad3a body=40 status=ok
// SIG undefined FUN_14676ad3a(void)

undefined8 FUN_14676ad3a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676ad62 FUN_14676ad62 body=40 status=ok
// SIG undefined FUN_14676ad62(void)

undefined8 FUN_14676ad62(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676ad8a FUN_14676ad8a body=40 status=ok
// SIG undefined FUN_14676ad8a(void)

undefined8 FUN_14676ad8a(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676adb2 FUN_14676adb2 body=40 status=ok
// SIG undefined FUN_14676adb2(void)

undefined8 FUN_14676adb2(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676adda FUN_14676adda body=40 status=ok
// SIG undefined FUN_14676adda(void)

undefined8 FUN_14676adda(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676ae02 FUN_14676ae02 body=69 status=ok
// SIG undefined FUN_14676ae02(void)

undefined8 * FUN_14676ae02(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bec86a0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676ae48 FUN_14676ae48 body=40 status=ok
// SIG undefined FUN_14676ae48(void)

undefined8 FUN_14676ae48(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676ae70 FUN_14676ae70 body=40 status=ok
// SIG undefined FUN_14676ae70(void)

undefined8 FUN_14676ae70(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676ae98 FUN_14676ae98 body=40 status=ok
// SIG undefined FUN_14676ae98(void)

undefined8 FUN_14676ae98(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676aec0 FUN_14676aec0 body=40 status=ok
// SIG undefined FUN_14676aec0(void)

undefined8 FUN_14676aec0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676aee8 FUN_14676aee8 body=40 status=ok
// SIG undefined FUN_14676aee8(void)

undefined8 FUN_14676aee8(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676af10 FUN_14676af10 body=40 status=ok
// SIG undefined FUN_14676af10(void)

undefined8 FUN_14676af10(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676af38 FUN_14676af38 body=29 status=ok
// SIG undefined FUN_14676af38(void)

undefined8 FUN_14676af38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676af56 FUN_14676af56 body=29 status=ok
// SIG undefined FUN_14676af56(void)

undefined8 FUN_14676af56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676af74 FUN_14676af74 body=29 status=ok
// SIG undefined FUN_14676af74(void)

undefined8 FUN_14676af74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676af92 FUN_14676af92 body=29 status=ok
// SIG undefined FUN_14676af92(void)

undefined8 FUN_14676af92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676afb0 FUN_14676afb0 body=29 status=ok
// SIG undefined FUN_14676afb0(void)

undefined8 FUN_14676afb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676afce FUN_14676afce body=29 status=ok
// SIG undefined FUN_14676afce(void)

undefined8 FUN_14676afce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676afec FUN_14676afec body=29 status=ok
// SIG undefined FUN_14676afec(void)

undefined8 FUN_14676afec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b00a FUN_14676b00a body=29 status=ok
// SIG undefined FUN_14676b00a(void)

undefined8 FUN_14676b00a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b028 FUN_14676b028 body=29 status=ok
// SIG undefined FUN_14676b028(void)

undefined8 FUN_14676b028(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b046 FUN_14676b046 body=29 status=ok
// SIG undefined FUN_14676b046(void)

undefined8 FUN_14676b046(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b064 FUN_14676b064 body=29 status=ok
// SIG undefined FUN_14676b064(void)

undefined8 FUN_14676b064(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b082 FUN_14676b082 body=29 status=ok
// SIG undefined FUN_14676b082(void)

undefined8 FUN_14676b082(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b0a0 FUN_14676b0a0 body=29 status=ok
// SIG undefined FUN_14676b0a0(void)

undefined8 FUN_14676b0a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b0be FUN_14676b0be body=29 status=ok
// SIG undefined FUN_14676b0be(void)

undefined8 FUN_14676b0be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b0dc FUN_14676b0dc body=29 status=ok
// SIG undefined FUN_14676b0dc(void)

undefined8 FUN_14676b0dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b0fa FUN_14676b0fa body=29 status=ok
// SIG undefined FUN_14676b0fa(void)

undefined8 FUN_14676b0fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b118 FUN_14676b118 body=29 status=ok
// SIG undefined FUN_14676b118(void)

undefined8 FUN_14676b118(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b136 FUN_14676b136 body=29 status=ok
// SIG undefined FUN_14676b136(void)

undefined8 FUN_14676b136(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b154 FUN_14676b154 body=29 status=ok
// SIG undefined FUN_14676b154(void)

undefined8 FUN_14676b154(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b172 FUN_14676b172 body=29 status=ok
// SIG undefined FUN_14676b172(void)

undefined8 FUN_14676b172(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b190 FUN_14676b190 body=29 status=ok
// SIG undefined FUN_14676b190(void)

undefined8 FUN_14676b190(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b1ae FUN_14676b1ae body=29 status=ok
// SIG undefined FUN_14676b1ae(void)

undefined8 FUN_14676b1ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b1cc FUN_14676b1cc body=29 status=ok
// SIG undefined FUN_14676b1cc(void)

undefined8 FUN_14676b1cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b1ea FUN_14676b1ea body=93 status=ok
// SIG undefined FUN_14676b1ea(void)

void FUN_14676b1ea(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bece8d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14676b248 FUN_14676b248 body=29 status=ok
// SIG undefined FUN_14676b248(void)

undefined8 FUN_14676b248(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676b265 FUN_14676b265 body=49 status=ok
// SIG undefined FUN_14676b265(void)

longlong FUN_14676b265(void)

{
  if (DAT_14cc2ded8 == 0) {
    FUN_1409ce572(&DAT_14cc2ded8,&PTR_FUN_14becead0);
  }
  return DAT_14cc2ded8;
}



// FUNCTION 14676b296 FUN_14676b296 body=47 status=ok
// SIG undefined FUN_14676b296(void)

longlong FUN_14676b296(void)

{
  if (DAT_14cc2def0 == 0) {
    FUN_14086a14e(&DAT_14cc2def0,&PTR_FUN_14beced58);
  }
  return DAT_14cc2def0;
}



// FUNCTION 14676b2c6 FUN_14676b2c6 body=43 status=ok
// SIG undefined FUN_14676b2c6(void)

void FUN_14676b2c6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bed04d0;
  return;
}



// FUNCTION 14676b2f1 FUN_14676b2f1 body=47 status=ok
// SIG undefined FUN_14676b2f1(void)

longlong FUN_14676b2f1(void)

{
  if (DAT_14cc2df08 == 0) {
    FUN_1409ce572(&DAT_14cc2df08,&PTR_FUN_14becedd0);
  }
  return DAT_14cc2df08;
}



// FUNCTION 14676b320 FUN_14676b320 body=55 status=ok
// SIG undefined FUN_14676b320(void)

void FUN_14676b320(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2df28 == 0) {
    uVar1 = FUN_141235f08();
    DAT_14cc2df28 = FUN_140002ddd(FUN_14676b357,uVar1,L"FBIKConstraintOption");
  }
  return;
}



// FUNCTION 14676b357 FUN_14676b357 body=47 status=ok
// SIG undefined FUN_14676b357(void)

longlong FUN_14676b357(void)

{
  if (DAT_14cc2df20 == 0) {
    FUN_14086a14e(&DAT_14cc2df20,&PTR_FUN_14becf208);
  }
  return DAT_14cc2df20;
}



// FUNCTION 14676b386 FUN_14676b386 body=43 status=ok
// SIG undefined FUN_14676b386(void)

void FUN_14676b386(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000a0;
  *puVar1 = &PTR_FUN_14bed0690;
  return;
}



// FUNCTION 14676b3b2 FUN_14676b3b2 body=55 status=ok
// SIG undefined FUN_14676b3b2(void)

void FUN_14676b3b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2df40 == 0) {
    uVar1 = FUN_141235f08();
    DAT_14cc2df40 = FUN_140002ddd(FUN_14676b3e9,uVar1,L"MotionProcessInput");
  }
  return;
}



// FUNCTION 14676b3e9 FUN_14676b3e9 body=47 status=ok
// SIG undefined FUN_14676b3e9(void)

longlong FUN_14676b3e9(void)

{
  if (DAT_14cc2df38 == 0) {
    FUN_14086a14e(&DAT_14cc2df38,&PTR_FUN_14becf358);
  }
  return DAT_14cc2df38;
}



// FUNCTION 14676b418 FUN_14676b418 body=43 status=ok
// SIG undefined FUN_14676b418(void)

void FUN_14676b418(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = &DAT_100000002;
  *puVar1 = &PTR_FUN_14bed07f0;
  return;
}



// FUNCTION 14676b444 FUN_14676b444 body=55 status=ok
// SIG undefined FUN_14676b444(void)

void FUN_14676b444(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2df58 == 0) {
    uVar1 = FUN_141235f08();
    DAT_14cc2df58 = FUN_140002ddd(FUN_14676b47b,uVar1,L"FBIKDebugOption");
  }
  return;
}



// FUNCTION 14676b47b FUN_14676b47b body=47 status=ok
// SIG undefined FUN_14676b47b(void)

longlong FUN_14676b47b(void)

{
  if (DAT_14cc2df50 == 0) {
    FUN_14086a14e(&DAT_14cc2df50,&PTR_FUN_14becf770);
  }
  return DAT_14cc2df50;
}



// FUNCTION 14676b4aa FUN_14676b4aa body=43 status=ok
// SIG undefined FUN_14676b4aa(void)

void FUN_14676b4aa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x1000000080;
  *puVar1 = &PTR_FUN_14bed0950;
  return;
}



// FUNCTION 14676b4d6 FUN_14676b4d6 body=55 status=ok
// SIG undefined FUN_14676b4d6(void)

void FUN_14676b4d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2df88 == 0) {
    uVar1 = FUN_141235f08();
    DAT_14cc2df88 = FUN_140002ddd(FUN_14676b50d,uVar1,L"SolverInput");
  }
  return;
}



// FUNCTION 14676b50d FUN_14676b50d body=47 status=ok
// SIG undefined FUN_14676b50d(void)

longlong FUN_14676b50d(void)

{
  if (DAT_14cc2df80 == 0) {
    FUN_14086a14e(&DAT_14cc2df80,&PTR_FUN_14becfb18);
  }
  return DAT_14cc2df80;
}



// FUNCTION 14676b53c FUN_14676b53c body=43 status=ok
// SIG undefined FUN_14676b53c(void)

void FUN_14676b53c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000024;
  *puVar1 = &PTR_FUN_14bed0ad0;
  return;
}



// FUNCTION 14676b568 FUN_14676b568 body=231 status=ok
// SIG undefined FUN_14676b568(void)

void FUN_14676b568(undefined4 *param_1)

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
  *local_28 = &PTR_FUN_14bed1160;
  local_28[3] = &DAT_14cc2df98;
  local_28[4] = FUN_1459a6f8a;
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



// FUNCTION 14676b650 FUN_14676b650 body=55 status=ok
// SIG undefined FUN_14676b650(void)

void FUN_14676b650(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dfb8 == 0) {
    uVar1 = FUN_141235f08();
    DAT_14cc2dfb8 = FUN_140002ddd(FUN_14676b687,uVar1,L"FBIKEndEffector");
  }
  return;
}



// FUNCTION 14676b687 FUN_14676b687 body=47 status=ok
// SIG undefined FUN_14676b687(void)

longlong FUN_14676b687(void)

{
  if (DAT_14cc2dfb0 == 0) {
    FUN_14086a14e(&DAT_14cc2dfb0,&PTR_FUN_14becfe10);
  }
  return DAT_14cc2dfb0;
}



// FUNCTION 14676b6b6 FUN_14676b6b6 body=43 status=ok
// SIG undefined FUN_14676b6b6(void)

void FUN_14676b6b6(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x1000000060;
  *puVar1 = &PTR_FUN_14bed0c30;
  return;
}



// FUNCTION 14676b6e2 FUN_14676b6e2 body=55 status=ok
// SIG undefined FUN_14676b6e2(void)

void FUN_14676b6e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2dfd0 == 0) {
    uVar1 = FUN_141235f08();
    DAT_14cc2dfd0 = FUN_140002ddd(FUN_14676b719,uVar1,L"RigUnit_FullbodyIK_WorkData");
  }
  return;
}



// FUNCTION 14676b719 FUN_14676b719 body=47 status=ok
// SIG undefined FUN_14676b719(void)

longlong FUN_14676b719(void)

{
  if (DAT_14cc2dfc8 == 0) {
    FUN_14086a14e(&DAT_14cc2dfc8,&PTR_FUN_14becfea0);
  }
  return DAT_14cc2dfc8;
}



// FUNCTION 14676b748 FUN_14676b748 body=43 status=ok
// SIG undefined FUN_14676b748(void)

void FUN_14676b748(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000198;
  *puVar1 = &PTR_FUN_14bed0da0;
  return;
}



// FUNCTION 14676b774 FUN_14676b774 body=922 status=ok
// SIG undefined FUN_14676b774(void)

longlong FUN_14676b774(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined8 *local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2dfe8 == 0) {
    uVar4 = FUN_141235f08();
    DAT_14cc2dfe8 = FUN_140002ddd(FUN_14676bb0f,uVar4,L"RigUnit_FullbodyIK");
    local_58 = (undefined8 *)0x0;
    uStack_50._0_4_ = 1;
    uStack_50._4_4_ = 0;
    FUN_140c0351c(&local_58,0);
    iVar2 = (uint)uStack_50;
    *local_58 = L"Root";
    local_58[1] = L"FRigElementKey";
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    *(undefined1 *)(local_58 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,iVar2);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Effectors";
    local_58[lVar6 * 7 + 1] = L"TArray<FFBIKEndEffector>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"Constraints";
    local_58[lVar6 * 7 + 1] = L"TArray<FFBIKConstraintOption>";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"SolverProperty";
    local_58[lVar6 * 7 + 1] = L"FSolverInput";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"MotionProperty";
    local_58[lVar6 * 7 + 1] = L"FMotionProcessInput";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"bPropagateToChildren";
    local_58[lVar6 * 7 + 1] = L"bool";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    uVar3 = (uint)uStack_50;
    local_58[lVar6 * 7] = L"DebugOption";
    local_58[lVar6 * 7 + 1] = L"FFBIKDebugOption";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar6 = (longlong)(int)(uint)uStack_50;
    uStack_50._0_4_ = (uint)uStack_50 + 1;
    if (uStack_50._4_4_ < (uint)uStack_50) {
      FUN_140c0351c(&local_58,uVar3);
    }
    local_58[lVar6 * 7] = L"WorkData";
    local_58[lVar6 * 7 + 1] = L"FRigUnit_FullbodyIK_WorkData";
    local_58[lVar6 * 7 + 2] = 0;
    (local_58 + lVar6 * 7 + 2)[1] = 0;
    local_58[lVar6 * 7 + 4] = 0;
    (local_58 + lVar6 * 7 + 4)[1] = 0;
    *(undefined1 *)(local_58 + lVar6 * 7 + 6) = 0;
    lVar5 = FUN_14001a7b2();
    lVar6 = DAT_14cc2dfe8;
    local_38 = 0x101;
    local_40 = lVar5;
    AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x3a0));
    LOCK();
    piVar1 = (int *)(lVar5 + 0x3ac);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      LOCK();
      *(undefined1 *)(local_40 + 0x3a8) = (undefined1)local_38;
      UNLOCK();
    }
    local_68 = &local_58;
    FUN_1446f2f9a(lVar5,L"FRigUnit_FullbodyIK::Execute",FUN_1498969d8,lVar6);
    FUN_1409be446(&local_40);
    FUN_140e03040(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc2dfe8;
}



// FUNCTION 14676bb0f FUN_14676bb0f body=47 status=ok
// SIG undefined FUN_14676bb0f(void)

longlong FUN_14676bb0f(void)

{
  if (DAT_14cc2dfe0 == 0) {
    FUN_14086a14e(&DAT_14cc2dfe0,&PTR_FUN_14bed03a8);
  }
  return DAT_14cc2dfe0;
}



// FUNCTION 14676bb3e FUN_14676bb3e body=43 status=ok
// SIG undefined FUN_14676bb3e(void)

void FUN_14676bb3e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x1000000470;
  *puVar1 = &PTR_FUN_14bed0f40;
  return;
}



// FUNCTION 14676bb6a FUN_14676bb6a body=34 status=ok
// SIG undefined FUN_14676bb6a(void)

undefined8 FUN_14676bb6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14676bb8c FUN_14676bb8c body=34 status=ok
// SIG undefined FUN_14676bb8c(void)

undefined8 FUN_14676bb8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14676bbae FUN_14676bbae body=34 status=ok
// SIG undefined FUN_14676bbae(void)

undefined8 FUN_14676bbae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14676bbd0 FUN_14676bbd0 body=34 status=ok
// SIG undefined FUN_14676bbd0(void)

undefined8 FUN_14676bbd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14676bbf2 FUN_14676bbf2 body=34 status=ok
// SIG undefined FUN_14676bbf2(void)

undefined8 FUN_14676bbf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14676bc14 FUN_14676bc14 body=34 status=ok
// SIG undefined FUN_14676bc14(void)

undefined8 FUN_14676bc14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14676bc36 FUN_14676bc36 body=34 status=ok
// SIG undefined FUN_14676bc36(void)

undefined8 FUN_14676bc36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14676bc58 FUN_14676bc58 body=34 status=ok
// SIG undefined FUN_14676bc58(void)

undefined8 FUN_14676bc58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14676bc7a FUN_14676bc7a body=93 status=ok
// SIG undefined FUN_14676bc7a(void)

void FUN_14676bc7a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bed1160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14676bcd8 FUN_14676bcd8 body=34 status=ok
// SIG undefined FUN_14676bcd8(void)

undefined8 FUN_14676bcd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14676bcfa FUN_14676bcfa body=49 status=ok
// SIG undefined FUN_14676bcfa(void)

longlong FUN_14676bcfa(void)

{
  if (DAT_14cc2e018 == 0) {
    FUN_140f50038(&DAT_14cc2e018,&PTR_s__Script_OodleNetworkHandlerCompo_14bed15f9_7_14bed15e0);
  }
  return DAT_14cc2e018;
}



// FUNCTION 14676bd2b FUN_14676bd2b body=47 status=ok
// SIG undefined FUN_14676bd2b(void)

longlong FUN_14676bd2b(void)

{
  if (DAT_14cc2dff8 == 0) {
    FUN_1409ce572(&DAT_14cc2dff8,&PTR_FUN_14bed1560);
  }
  return DAT_14cc2dff8;
}



// FUNCTION 14676bd5a FUN_14676bd5a body=47 status=ok
// SIG undefined FUN_14676bd5a(void)

longlong FUN_14676bd5a(void)

{
  if (DAT_14cc2e388 == 0) {
    FUN_1409ce572(&DAT_14cc2e388,&PTR_FUN_14bed2270);
  }
  return DAT_14cc2e388;
}



// FUNCTION 14676bd8a FUN_14676bd8a body=421 status=ok
// SIG undefined FUN_14676bd8a(void)

void FUN_14676bd8a(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  size_t sVar4;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  int local_50;
  longlong local_48 [2];
  wchar_t *local_38;
  undefined8 uStack_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_14118da1c();
  DAT_14cc2e458 = FUN_14054d46e(uVar2,L"Oodle");
  puVar3 = (undefined8 *)FUN_14047ac8c();
  if (*(int *)(puVar3 + 1) == 0) {
    local_38 = L"";
  }
  else {
    local_38 = (wchar_t *)*puVar3;
  }
  if (local_38 == (wchar_t *)0x0) {
    uVar1 = 0;
  }
  else {
    sVar4 = wcslen(local_38);
    uVar1 = (int)sVar4;
  }
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar1);
  local_28 = L"Oodle";
  local_20 = 5;
  FUN_140bee87a(local_48,&local_38,2);
  FUN_140aa5ef8(&local_38,local_48);
  if (DAT_14cc2e3a0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  DAT_14cc2e3a0 = local_38;
  uRam000000014cc2e3a8 = uStack_30;
  local_38 = (wchar_t *)0x0;
  uStack_30 = 0;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1410f2562(&local_58);
  local_38 = local_58;
  if (local_50 == 0) {
    local_38 = L"";
  }
  if (local_38 == (wchar_t *)0x0) {
    uVar1 = 0;
  }
  else {
    sVar4 = wcslen(local_38);
    uVar1 = (int)sVar4;
  }
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar1);
  local_28 = L"Oodle";
  local_20 = 5;
  FUN_140bee87a(local_48,&local_38,2);
  FUN_140aa5ef8(&local_38,local_48);
  if (DAT_14cc2e3b0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  DAT_14cc2e3b0 = local_38;
  uRam000000014cc2e3b8 = uStack_30;
  local_38 = (wchar_t *)0x0;
  uStack_30 = 0;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14676bf30 FUN_14676bf30 body=192 status=ok
// SIG undefined FUN_14676bf30(void)

void FUN_14676bf30(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bed36b0;
  puVar1[3] = &DAT_14cc30460;
  puVar1[4] = FUN_1459d1790;
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



// FUNCTION 14676bff1 FUN_14676bff1 body=47 status=ok
// SIG undefined FUN_14676bff1(void)

longlong FUN_14676bff1(void)

{
  if (DAT_14cc30470 == 0) {
    FUN_14073dd9a(&DAT_14cc30470,&PTR_LAB_14bed2e78);
  }
  return DAT_14cc30470;
}



// FUNCTION 14676c020 FUN_14676c020 body=40 status=ok
// SIG undefined FUN_14676c020(void)

undefined8 FUN_14676c020(undefined8 param_1,int param_2)

{
  FUN_145a085c0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676c048 FUN_14676c048 body=93 status=ok
// SIG undefined FUN_14676c048(void)

void FUN_14676c048(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bed36b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14676c0a6 FUN_14676c0a6 body=29 status=ok
// SIG undefined FUN_14676c0a6(void)

undefined8 FUN_14676c0a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14676c0c3 FUN_14676c0c3 body=47 status=ok
// SIG undefined FUN_14676c0c3(void)

longlong FUN_14676c0c3(void)

{
  if (DAT_14cc30488 == 0) {
    FUN_14073dd9a(&DAT_14cc30488,&PTR_LAB_14bed38c8);
  }
  return DAT_14cc30488;
}



// FUNCTION 14676c0f2 FUN_14676c0f2 body=47 status=ok
// SIG undefined FUN_14676c0f2(void)

longlong FUN_14676c0f2(void)

{
  if (DAT_14cc304a0 == 0) {
    FUN_14073dd9a(&DAT_14cc304a0,&PTR_LAB_14bed3c58);
  }
  return DAT_14cc304a0;
}



// FUNCTION 14676c121 FUN_14676c121 body=47 status=ok
// SIG undefined FUN_14676c121(void)

longlong FUN_14676c121(void)

{
  if (DAT_14cc304b0 == 0) {
    FUN_1409ce572(&DAT_14cc304b0,&PTR_FUN_14bed3d40);
  }
  return DAT_14cc304b0;
}



// FUNCTION 14676c150 FUN_14676c150 body=47 status=ok
// SIG undefined FUN_14676c150(void)

longlong FUN_14676c150(void)

{
  if (DAT_14cc304c8 == 0) {
    FUN_1409ce572(&DAT_14cc304c8,&PTR_FUN_14bed3dd0);
  }
  return DAT_14cc304c8;
}



// FUNCTION 14676c17f FUN_14676c17f body=47 status=ok
// SIG undefined FUN_14676c17f(void)

longlong FUN_14676c17f(void)

{
  if (DAT_14cc304e8 == 0) {
    FUN_14073dd9a(&DAT_14cc304e8,&PTR_LAB_14bed4408);
  }
  return DAT_14cc304e8;
}



// FUNCTION 14676c1ae FUN_14676c1ae body=47 status=ok
// SIG undefined FUN_14676c1ae(void)

longlong FUN_14676c1ae(void)

{
  if (DAT_14cc30500 == 0) {
    FUN_14073dd9a(&DAT_14cc30500,&PTR_LAB_14bed49b8);
  }
  return DAT_14cc30500;
}



// FUNCTION 14676c1de FUN_14676c1de body=55 status=ok
// SIG undefined FUN_14676c1de(void)

void FUN_14676c1de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30518 == 0) {
    uVar1 = FUN_140f9f0a0();
    DAT_14cc30518 = FUN_140002ddd(FUN_14676c215,uVar1,L"DatasmithImportInfo");
  }
  return;
}



// FUNCTION 14676c215 FUN_14676c215 body=47 status=ok
// SIG undefined FUN_14676c215(void)

longlong FUN_14676c215(void)

{
  if (DAT_14cc30510 == 0) {
    FUN_14086a14e(&DAT_14cc30510,&PTR_FUN_14bed4a68);
  }
  return DAT_14cc30510;
}



// FUNCTION 14676c244 FUN_14676c244 body=43 status=ok
// SIG undefined FUN_14676c244(void)

void FUN_14676c244(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14bedd290;
  return;
}



// FUNCTION 14676c26f FUN_14676c26f body=35 status=ok
// SIG undefined FUN_14676c26f(void)

void FUN_14676c26f(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bed4b40;
  return;
}



// FUNCTION 14676c292 FUN_14676c292 body=49 status=ok
// SIG undefined FUN_14676c292(void)

longlong FUN_14676c292(void)

{
  if (DAT_14cc30530 == 0) {
    FUN_14073dd9a(&DAT_14cc30530,&PTR_LAB_14bed4af8);
  }
  return DAT_14cc30530;
}



// FUNCTION 14676c2c3 FUN_14676c2c3 body=35 status=ok
// SIG undefined FUN_14676c2c3(void)

void FUN_14676c2c3(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bed4e80;
  return;
}



// FUNCTION 14676c2e6 FUN_14676c2e6 body=47 status=ok
// SIG undefined FUN_14676c2e6(void)

longlong FUN_14676c2e6(void)

{
  if (DAT_14cc30548 == 0) {
    FUN_14073dd9a(&DAT_14cc30548,&PTR_LAB_14bed4e38);
  }
  return DAT_14cc30548;
}



// FUNCTION 14676c315 FUN_14676c315 body=35 status=ok
// SIG undefined FUN_14676c315(void)

void FUN_14676c315(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bed51d0;
  return;
}



// FUNCTION 14676c338 FUN_14676c338 body=47 status=ok
// SIG undefined FUN_14676c338(void)

longlong FUN_14676c338(void)

{
  if (DAT_14cc30560 == 0) {
    FUN_14073dd9a(&DAT_14cc30560,&PTR_LAB_14bed5188);
  }
  return DAT_14cc30560;
}



// FUNCTION 14676c367 FUN_14676c367 body=35 status=ok
// SIG undefined FUN_14676c367(void)

void FUN_14676c367(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bed5510;
  return;
}



// FUNCTION 14676c38a FUN_14676c38a body=49 status=ok
// SIG undefined FUN_14676c38a(void)

longlong FUN_14676c38a(void)

{
  if (DAT_14cc30578 == 0) {
    FUN_14073dd9a(&DAT_14cc30578,&PTR_LAB_14bed54c8);
  }
  return DAT_14cc30578;
}



// FUNCTION 14676c3bb FUN_14676c3bb body=35 status=ok
// SIG undefined FUN_14676c3bb(void)

void FUN_14676c3bb(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bed5860;
  return;
}



// FUNCTION 14676c3de FUN_14676c3de body=47 status=ok
// SIG undefined FUN_14676c3de(void)

longlong FUN_14676c3de(void)

{
  if (DAT_14cc30590 == 0) {
    FUN_14073dd9a(&DAT_14cc30590,&PTR_LAB_14bed5818);
  }
  return DAT_14cc30590;
}



// FUNCTION 14676c40d FUN_14676c40d body=35 status=ok
// SIG undefined FUN_14676c40d(void)

void FUN_14676c40d(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bed5ba0;
  return;
}



// FUNCTION 14676c430 FUN_14676c430 body=47 status=ok
// SIG undefined FUN_14676c430(void)

longlong FUN_14676c430(void)

{
  if (DAT_14cc305a8 == 0) {
    FUN_14073dd9a(&DAT_14cc305a8,&PTR_LAB_14bed5b58);
  }
  return DAT_14cc305a8;
}



// FUNCTION 14676c45f FUN_14676c45f body=35 status=ok
// SIG undefined FUN_14676c45f(void)

void FUN_14676c45f(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bed5ee0;
  return;
}



// FUNCTION 14676c482 FUN_14676c482 body=47 status=ok
// SIG undefined FUN_14676c482(void)

longlong FUN_14676c482(void)

{
  if (DAT_14cc305c0 == 0) {
    FUN_14073dd9a(&DAT_14cc305c0,&PTR_LAB_14bed5e98);
  }
  return DAT_14cc305c0;
}



// FUNCTION 14676c4b1 FUN_14676c4b1 body=54 status=ok
// SIG undefined FUN_14676c4b1(void)

void FUN_14676c4b1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bed6370;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}



// FUNCTION 14676c4e7 FUN_14676c4e7 body=47 status=ok
// SIG undefined FUN_14676c4e7(void)

longlong FUN_14676c4e7(void)

{
  if (DAT_14cc305d8 == 0) {
    FUN_14073dd9a(&DAT_14cc305d8,&PTR_LAB_14bed6328);
  }
  return DAT_14cc305d8;
}



// FUNCTION 14676c516 FUN_14676c516 body=42 status=ok
// SIG undefined FUN_14676c516(void)

void FUN_14676c516(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bed6710;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14676c540 FUN_14676c540 body=47 status=ok
// SIG undefined FUN_14676c540(void)

longlong FUN_14676c540(void)

{
  if (DAT_14cc305f0 == 0) {
    FUN_14073dd9a(&DAT_14cc305f0,&PTR_LAB_14bed66c8);
  }
  return DAT_14cc305f0;
}



// FUNCTION 14676c56f FUN_14676c56f body=42 status=ok
// SIG undefined FUN_14676c56f(void)

void FUN_14676c56f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bed6bb0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 14676c599 FUN_14676c599 body=47 status=ok
// SIG undefined FUN_14676c599(void)

longlong FUN_14676c599(void)

{
  if (DAT_14cc30608 == 0) {
    FUN_14073dd9a(&DAT_14cc30608,&PTR_LAB_14bed6b68);
  }
  return DAT_14cc30608;
}



// FUNCTION 14676c5c8 FUN_14676c5c8 body=35 status=ok
// SIG undefined FUN_14676c5c8(void)

void FUN_14676c5c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bed6f00;
  return;
}



// FUNCTION 14676c5eb FUN_14676c5eb body=47 status=ok
// SIG undefined FUN_14676c5eb(void)

longlong FUN_14676c5eb(void)

{
  if (DAT_14cc30620 == 0) {
    FUN_14073dd9a(&DAT_14cc30620,&PTR_LAB_14bed6eb8);
  }
  return DAT_14cc30620;
}



// FUNCTION 14676c61a FUN_14676c61a body=57 status=ok
// SIG undefined FUN_14676c61a(void)

void FUN_14676c61a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14bed75a0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  return;
}



// FUNCTION 14676c653 FUN_14676c653 body=47 status=ok
// SIG undefined FUN_14676c653(void)

longlong FUN_14676c653(void)

{
  if (DAT_14cc30638 == 0) {
    FUN_14073dd9a(&DAT_14cc30638,&PTR_LAB_14bed7558);
  }
  return DAT_14cc30638;
}



// FUNCTION 14676c682 FUN_14676c682 body=35 status=ok
// SIG undefined FUN_14676c682(void)

void FUN_14676c682(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bed78e0;
  return;
}



// FUNCTION 14676c6a5 FUN_14676c6a5 body=47 status=ok
// SIG undefined FUN_14676c6a5(void)

longlong FUN_14676c6a5(void)

{
  if (DAT_14cc30650 == 0) {
    FUN_14073dd9a(&DAT_14cc30650,&PTR_LAB_14bed7898);
  }
  return DAT_14cc30650;
}



// FUNCTION 14676c6d4 FUN_14676c6d4 body=64 status=ok
// SIG undefined FUN_14676c6d4(void)

void FUN_14676c6d4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1,param_1);
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = &PTR_FUN_14bed7fa0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  return;
}



// FUNCTION 14676c714 FUN_14676c714 body=47 status=ok
// SIG undefined FUN_14676c714(void)

longlong FUN_14676c714(void)

{
  if (DAT_14cc30668 == 0) {
    FUN_14073dd9a(&DAT_14cc30668,&PTR_LAB_14bed7f58);
  }
  return DAT_14cc30668;
}



// FUNCTION 14676c743 FUN_14676c743 body=75 status=ok
// SIG undefined FUN_14676c743(void)

void FUN_14676c743(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140198756(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bed8600;
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



// FUNCTION 14676c793 FUN_14676c793 body=47 status=ok
// SIG undefined FUN_14676c793(void)

longlong FUN_14676c793(void)

{
  if (DAT_14cc30680 == 0) {
    FUN_14073dd9a(&DAT_14cc30680,&PTR_LAB_14bed85b8);
  }
  return DAT_14cc30680;
}



// FUNCTION 14676c7c2 FUN_14676c7c2 body=55 status=ok
// SIG undefined FUN_14676c7c2(void)

void FUN_14676c7c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30698 == 0) {
    uVar1 = FUN_140f9f0a0();
    DAT_14cc30698 =
         FUN_140002ddd(FUN_14676c7f9,uVar1,L"DatasmithCameraLookatTrackingSettingsTemplate");
  }
  return;
}



// FUNCTION 14676c7f9 FUN_14676c7f9 body=47 status=ok
// SIG undefined FUN_14676c7f9(void)

longlong FUN_14676c7f9(void)

{
  if (DAT_14cc30690 == 0) {
    FUN_14086a14e(&DAT_14cc30690,&PTR_FUN_14bed8a58);
  }
  return DAT_14cc30690;
}


