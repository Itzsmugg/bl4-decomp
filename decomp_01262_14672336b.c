// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14672336b FUN_14672336b body=47 status=ok
// SIG undefined FUN_14672336b(void)

longlong FUN_14672336b(void)

{
  if (DAT_14cc0db10 == 0) {
    FUN_14000fc22(&DAT_14cc0db10,&PTR_FUN_14bc5bab0);
  }
  return DAT_14cc0db10;
}



// FUNCTION 14672339a FUN_14672339a body=47 status=ok
// SIG undefined FUN_14672339a(void)

longlong FUN_14672339a(void)

{
  if (DAT_14cc0db18 == 0) {
    FUN_14000fc22(&DAT_14cc0db18,&PTR_FUN_14bc5bb10);
  }
  return DAT_14cc0db18;
}



// FUNCTION 1467233c9 FUN_1467233c9 body=47 status=ok
// SIG undefined FUN_1467233c9(void)

longlong FUN_1467233c9(void)

{
  if (DAT_14cc0db20 == 0) {
    FUN_14000fc22(&DAT_14cc0db20,&PTR_FUN_14bc5bba8);
  }
  return DAT_14cc0db20;
}



// FUNCTION 1467233f8 FUN_1467233f8 body=47 status=ok
// SIG undefined FUN_1467233f8(void)

longlong FUN_1467233f8(void)

{
  if (DAT_14cc0db28 == 0) {
    FUN_14000fc22(&DAT_14cc0db28,&PTR_FUN_14bc5bc58);
  }
  return DAT_14cc0db28;
}



// FUNCTION 146723427 FUN_146723427 body=47 status=ok
// SIG undefined FUN_146723427(void)

longlong FUN_146723427(void)

{
  if (DAT_14cc0db30 == 0) {
    FUN_14000fc22(&DAT_14cc0db30,&PTR_FUN_14bc5bc98);
  }
  return DAT_14cc0db30;
}



// FUNCTION 146723456 FUN_146723456 body=34 status=ok
// SIG undefined FUN_146723456(void)

void FUN_146723456(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145876c0a();
  FUN_14069c8d6(uVar1,&PTR_s_AddDependency_14bc5bce0,0x12);
  return;
}



// FUNCTION 146723482 FUN_146723482 body=192 status=ok
// SIG undefined FUN_146723482(void)

void FUN_146723482(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bc5de20;
  puVar1[3] = &DAT_14cc0db80;
  puVar1[4] = FUN_1459d1032;
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



// FUNCTION 146723543 FUN_146723543 body=73 status=ok
// SIG undefined FUN_146723543(void)

void FUN_146723543(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bc5c760;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  return;
}



// FUNCTION 14672358c FUN_14672358c body=47 status=ok
// SIG undefined FUN_14672358c(void)

longlong FUN_14672358c(void)

{
  if (DAT_14cc0dba0 == 0) {
    FUN_14073dd9a(&DAT_14cc0dba0,&PTR_LAB_14bc5c718);
  }
  return DAT_14cc0dba0;
}



// FUNCTION 1467235bb FUN_1467235bb body=49 status=ok
// SIG undefined FUN_1467235bb(void)

longlong FUN_1467235bb(void)

{
  if (DAT_14cc0dc10 == 0) {
    FUN_14073dd9a(&DAT_14cc0dc10,&PTR_LAB_14bc5d470);
  }
  return DAT_14cc0dc10;
}



// FUNCTION 1467235ec FUN_1467235ec body=47 status=ok
// SIG undefined FUN_1467235ec(void)

longlong FUN_1467235ec(void)

{
  if (DAT_14cc0dbb0 == 0) {
    FUN_14000fc22(&DAT_14cc0dbb0,&PTR_FUN_14bc5ca68);
  }
  return DAT_14cc0dbb0;
}



// FUNCTION 14672361b FUN_14672361b body=47 status=ok
// SIG undefined FUN_14672361b(void)

longlong FUN_14672361b(void)

{
  if (DAT_14cc0dbb8 == 0) {
    FUN_14000fc22(&DAT_14cc0dbb8,&PTR_FUN_14bc5caf8);
  }
  return DAT_14cc0dbb8;
}



// FUNCTION 14672364a FUN_14672364a body=47 status=ok
// SIG undefined FUN_14672364a(void)

longlong FUN_14672364a(void)

{
  if (DAT_14cc0dbc0 == 0) {
    FUN_14000fc22(&DAT_14cc0dbc0,&PTR_FUN_14bc5cb80);
  }
  return DAT_14cc0dbc0;
}



// FUNCTION 146723679 FUN_146723679 body=47 status=ok
// SIG undefined FUN_146723679(void)

longlong FUN_146723679(void)

{
  if (DAT_14cc0dbc8 == 0) {
    FUN_14000fc22(&DAT_14cc0dbc8,&PTR_FUN_14bc5cc08);
  }
  return DAT_14cc0dbc8;
}



// FUNCTION 1467236a8 FUN_1467236a8 body=47 status=ok
// SIG undefined FUN_1467236a8(void)

longlong FUN_1467236a8(void)

{
  if (DAT_14cc0dbd0 == 0) {
    FUN_14000fc22(&DAT_14cc0dbd0,&PTR_FUN_14bc5cce0);
  }
  return DAT_14cc0dbd0;
}



// FUNCTION 1467236d7 FUN_1467236d7 body=47 status=ok
// SIG undefined FUN_1467236d7(void)

longlong FUN_1467236d7(void)

{
  if (DAT_14cc0dbd8 == 0) {
    FUN_14000fc22(&DAT_14cc0dbd8,&PTR_FUN_14bc5cdc8);
  }
  return DAT_14cc0dbd8;
}



// FUNCTION 146723706 FUN_146723706 body=47 status=ok
// SIG undefined FUN_146723706(void)

longlong FUN_146723706(void)

{
  if (DAT_14cc0dbe0 == 0) {
    FUN_14000fc22(&DAT_14cc0dbe0,&PTR_FUN_14bc5ce48);
  }
  return DAT_14cc0dbe0;
}



// FUNCTION 146723735 FUN_146723735 body=47 status=ok
// SIG undefined FUN_146723735(void)

longlong FUN_146723735(void)

{
  if (DAT_14cc0dbe8 == 0) {
    FUN_14000fc22(&DAT_14cc0dbe8,&PTR_FUN_14bc5cfd8);
  }
  return DAT_14cc0dbe8;
}



// FUNCTION 146723764 FUN_146723764 body=47 status=ok
// SIG undefined FUN_146723764(void)

longlong FUN_146723764(void)

{
  if (DAT_14cc0dbf0 == 0) {
    FUN_14000fc22(&DAT_14cc0dbf0,&PTR_FUN_14bc5d018);
  }
  return DAT_14cc0dbf0;
}



// FUNCTION 146723793 FUN_146723793 body=47 status=ok
// SIG undefined FUN_146723793(void)

longlong FUN_146723793(void)

{
  if (DAT_14cc0dbf8 == 0) {
    FUN_14000fc22(&DAT_14cc0dbf8,&PTR_FUN_14bc5d098);
  }
  return DAT_14cc0dbf8;
}



// FUNCTION 1467237c2 FUN_1467237c2 body=47 status=ok
// SIG undefined FUN_1467237c2(void)

longlong FUN_1467237c2(void)

{
  if (DAT_14cc0dc00 == 0) {
    FUN_14000fc22(&DAT_14cc0dc00,&PTR_FUN_14bc5d120);
  }
  return DAT_14cc0dc00;
}



// FUNCTION 1467237f2 FUN_1467237f2 body=34 status=ok
// SIG undefined FUN_1467237f2(void)

void FUN_1467237f2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145876b26();
  FUN_14069c8d6(uVar1,&PTR_s_GetDisplayText_14bc5d160,0xb);
  return;
}



// FUNCTION 14672381a FUN_14672381a body=40 status=ok
// SIG undefined FUN_14672381a(void)

undefined8 FUN_14672381a(undefined8 param_1,int param_2)

{
  FUN_1458f6614();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146723842 FUN_146723842 body=40 status=ok
// SIG undefined FUN_146723842(void)

undefined8 FUN_146723842(undefined8 param_1,int param_2)

{
  FUN_1458f6614();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672386a FUN_14672386a body=40 status=ok
// SIG undefined FUN_14672386a(void)

undefined8 FUN_14672386a(undefined8 param_1,int param_2)

{
  FUN_1458f6614();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146723892 FUN_146723892 body=40 status=ok
// SIG undefined FUN_146723892(void)

undefined8 FUN_146723892(undefined8 param_1,int param_2)

{
  FUN_1458f6614();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467238ba FUN_1467238ba body=40 status=ok
// SIG undefined FUN_1467238ba(void)

undefined8 FUN_1467238ba(undefined8 param_1,int param_2)

{
  FUN_1458f6614();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467238e2 FUN_1467238e2 body=40 status=ok
// SIG undefined FUN_1467238e2(void)

undefined8 FUN_1467238e2(undefined8 param_1,int param_2)

{
  FUN_1458f6614();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14672390a FUN_14672390a body=29 status=ok
// SIG undefined FUN_14672390a(void)

undefined8 FUN_14672390a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146723928 FUN_146723928 body=29 status=ok
// SIG undefined FUN_146723928(void)

undefined8 FUN_146723928(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146723946 FUN_146723946 body=29 status=ok
// SIG undefined FUN_146723946(void)

undefined8 FUN_146723946(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146723964 FUN_146723964 body=93 status=ok
// SIG undefined FUN_146723964(void)

void FUN_146723964(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bc5de20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467239c2 FUN_1467239c2 body=29 status=ok
// SIG undefined FUN_1467239c2(void)

undefined8 FUN_1467239c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467239e4 FUN_1467239e4 body=47 status=ok
// SIG undefined FUN_1467239e4(void)

longlong FUN_1467239e4(void)

{
  if (DAT_14cc0dc40 == 0) {
    FUN_14073dd9a(&DAT_14cc0dc40,&PTR_LAB_14bc5dfb8);
  }
  return DAT_14cc0dc40;
}



// FUNCTION 146723a13 FUN_146723a13 body=35 status=ok
// SIG undefined FUN_146723a13(void)

void FUN_146723a13(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bc5e400;
  return;
}



// FUNCTION 146723a36 FUN_146723a36 body=47 status=ok
// SIG undefined FUN_146723a36(void)

longlong FUN_146723a36(void)

{
  if (DAT_14cc0dc58 == 0) {
    FUN_14073dd9a(&DAT_14cc0dc58,&PTR_LAB_14bc5e3b8);
  }
  return DAT_14cc0dc58;
}



// FUNCTION 146723a65 FUN_146723a65 body=47 status=ok
// SIG undefined FUN_146723a65(void)

longlong FUN_146723a65(void)

{
  if (DAT_14cc0df40 == 0) {
    FUN_14000fc22(&DAT_14cc0df40,&PTR_FUN_14bc64488);
  }
  return DAT_14cc0df40;
}



// FUNCTION 146723a94 FUN_146723a94 body=47 status=ok
// SIG undefined FUN_146723a94(void)

longlong FUN_146723a94(void)

{
  if (DAT_14cc0df38 == 0) {
    FUN_14000fc22(&DAT_14cc0df38,&PTR_FUN_14bc64398);
  }
  return DAT_14cc0df38;
}



// FUNCTION 146723ac4 FUN_146723ac4 body=55 status=ok
// SIG undefined FUN_146723ac4(void)

void FUN_146723ac4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0dc88 == 0) {
    uVar1 = FUN_1410767f1();
    DAT_14cc0dc88 = FUN_140002ddd(FUN_146723afb,uVar1,L"InterchangeFilePickerParameters");
  }
  return;
}



// FUNCTION 146723afb FUN_146723afb body=49 status=ok
// SIG undefined FUN_146723afb(void)

longlong FUN_146723afb(void)

{
  if (DAT_14cc0dc80 == 0) {
    FUN_14086a14e(&DAT_14cc0dc80,&PTR_FUN_14bc5e970);
  }
  return DAT_14cc0dc80;
}



// FUNCTION 146723b2c FUN_146723b2c body=48 status=ok
// SIG undefined FUN_146723b2c(void)

void FUN_146723b2c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000040;
  *puVar1 = &PTR_FUN_14bc66f90;
  return;
}



// FUNCTION 146723b5c FUN_146723b5c body=47 status=ok
// SIG undefined FUN_146723b5c(void)

longlong FUN_146723b5c(void)

{
  if (DAT_14cc0dcc0 == 0) {
    FUN_14073dd9a(&DAT_14cc0dcc0,&PTR_LAB_14bc5ef50);
  }
  return DAT_14cc0dcc0;
}



// FUNCTION 146723b8b FUN_146723b8b body=47 status=ok
// SIG undefined FUN_146723b8b(void)

longlong FUN_146723b8b(void)

{
  if (DAT_14cc0dca0 == 0) {
    FUN_14000fc22(&DAT_14cc0dca0,&PTR_FUN_14bc5ec00);
  }
  return DAT_14cc0dca0;
}



// FUNCTION 146723bba FUN_146723bba body=47 status=ok
// SIG undefined FUN_146723bba(void)

longlong FUN_146723bba(void)

{
  if (DAT_14cc0dcb0 == 0) {
    FUN_14000fc22(&DAT_14cc0dcb0,&PTR_FUN_14bc5ee68);
  }
  return DAT_14cc0dcb0;
}



// FUNCTION 146723bea FUN_146723bea body=34 status=ok
// SIG undefined FUN_146723bea(void)

void FUN_146723bea(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459d90c6();
  FUN_14069c8d6(uVar1,&PTR_s_ScriptedFilePickerForTranslatorA_14bc5eeb0,2);
  return;
}



// FUNCTION 146723c0c FUN_146723c0c body=35 status=ok
// SIG undefined FUN_146723c0c(void)

void FUN_146723c0c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bc5ef90;
  return;
}



// FUNCTION 146723c34 FUN_146723c34 body=49 status=ok
// SIG undefined FUN_146723c34(void)

longlong FUN_146723c34(void)

{
  if (DAT_14cc0dcd0 == 0) {
    FUN_1409ce572(&DAT_14cc0dcd0,&PTR_FUN_14bc5f300);
  }
  return DAT_14cc0dcd0;
}



// FUNCTION 146723c66 FUN_146723c66 body=55 status=ok
// SIG undefined FUN_146723c66(void)

void FUN_146723c66(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0dcf0 == 0) {
    uVar1 = FUN_1410767f1();
    DAT_14cc0dcf0 = FUN_140002ddd(FUN_146723c9d,uVar1,L"InterchangeStackInfo");
  }
  return;
}



// FUNCTION 146723c9d FUN_146723c9d body=49 status=ok
// SIG undefined FUN_146723c9d(void)

longlong FUN_146723c9d(void)

{
  if (DAT_14cc0dce8 == 0) {
    FUN_14086a14e(&DAT_14cc0dce8,&PTR_FUN_14bc5f460);
  }
  return DAT_14cc0dce8;
}



// FUNCTION 146723cce FUN_146723cce body=48 status=ok
// SIG undefined FUN_146723cce(void)

void FUN_146723cce(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bc67200;
  return;
}



// FUNCTION 146723cfe FUN_146723cfe body=49 status=ok
// SIG undefined FUN_146723cfe(void)

longlong FUN_146723cfe(void)

{
  if (DAT_14cc0dd38 == 0) {
    FUN_14073dd9a(&DAT_14cc0dd38,&PTR_LAB_14bc5ffc0);
  }
  return DAT_14cc0dd38;
}



// FUNCTION 146723d2f FUN_146723d2f body=47 status=ok
// SIG undefined FUN_146723d2f(void)

longlong FUN_146723d2f(void)

{
  if (DAT_14cc0dd08 == 0) {
    FUN_14000fc22(&DAT_14cc0dd08,&PTR_FUN_14bc5f7c0);
  }
  return DAT_14cc0dd08;
}



// FUNCTION 146723d5e FUN_146723d5e body=47 status=ok
// SIG undefined FUN_146723d5e(void)

longlong FUN_146723d5e(void)

{
  if (DAT_14cc0dd18 == 0) {
    FUN_14000fc22(&DAT_14cc0dd18,&PTR_FUN_14bc5fb60);
  }
  return DAT_14cc0dd18;
}



// FUNCTION 146723d8d FUN_146723d8d body=47 status=ok
// SIG undefined FUN_146723d8d(void)

longlong FUN_146723d8d(void)

{
  if (DAT_14cc0dd28 == 0) {
    FUN_14000fc22(&DAT_14cc0dd28,&PTR_FUN_14bc5fea8);
  }
  return DAT_14cc0dd28;
}



// FUNCTION 146723dbc FUN_146723dbc body=34 status=ok
// SIG undefined FUN_146723dbc(void)

void FUN_146723dbc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1459d91aa();
  FUN_14069c8d6(uVar1,&PTR_s_ScriptedShowPipelineConfiguratio_14bc5fef0,3);
  return;
}



// FUNCTION 146723dde FUN_146723dde body=35 status=ok
// SIG undefined FUN_146723dde(void)

void FUN_146723dde(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bc60000;
  return;
}



// FUNCTION 146723e06 FUN_146723e06 body=55 status=ok
// SIG undefined FUN_146723e06(void)

void FUN_146723e06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0dd50 == 0) {
    uVar1 = FUN_1410767f1();
    DAT_14cc0dd50 = FUN_140002ddd(FUN_146723e3d,uVar1,L"InterchangeTranslatorPipelines");
  }
  return;
}



// FUNCTION 146723e3d FUN_146723e3d body=47 status=ok
// SIG undefined FUN_146723e3d(void)

longlong FUN_146723e3d(void)

{
  if (DAT_14cc0dd48 == 0) {
    FUN_14086a14e(&DAT_14cc0dd48,&PTR_FUN_14bc60468);
  }
  return DAT_14cc0dd48;
}



// FUNCTION 146723e6c FUN_146723e6c body=48 status=ok
// SIG undefined FUN_146723e6c(void)

void FUN_146723e6c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000038;
  *puVar1 = &PTR_FUN_14bc67360;
  return;
}



// FUNCTION 146723e9c FUN_146723e9c body=55 status=ok
// SIG undefined FUN_146723e9c(void)

void FUN_146723e9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0dd68 == 0) {
    uVar1 = FUN_1410767f1();
    DAT_14cc0dd68 = FUN_140002ddd(FUN_146723ed3,uVar1,L"InterchangePipelineStack");
  }
  return;
}



// FUNCTION 146723ed3 FUN_146723ed3 body=47 status=ok
// SIG undefined FUN_146723ed3(void)

longlong FUN_146723ed3(void)

{
  if (DAT_14cc0dd60 == 0) {
    FUN_14086a14e(&DAT_14cc0dd60,&PTR_FUN_14bc60620);
  }
  return DAT_14cc0dd60;
}



// FUNCTION 146723f02 FUN_146723f02 body=48 status=ok
// SIG undefined FUN_146723f02(void)

void FUN_146723f02(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000020;
  *puVar1 = &PTR_FUN_14bc674c0;
  return;
}



// FUNCTION 146723f32 FUN_146723f32 body=55 status=ok
// SIG undefined FUN_146723f32(void)

void FUN_146723f32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0dd80 == 0) {
    uVar1 = FUN_1410767f1();
    DAT_14cc0dd80 = FUN_140002ddd(FUN_146723f69,uVar1,L"InterchangeImportSettings");
  }
  return;
}



// FUNCTION 146723f69 FUN_146723f69 body=49 status=ok
// SIG undefined FUN_146723f69(void)

longlong FUN_146723f69(void)

{
  if (DAT_14cc0dd78 == 0) {
    FUN_14086a14e(&DAT_14cc0dd78,&PTR_FUN_14bc608b0);
  }
  return DAT_14cc0dd78;
}



// FUNCTION 146723f9a FUN_146723f9a body=48 status=ok
// SIG undefined FUN_146723f9a(void)

void FUN_146723f9a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000088;
  *puVar1 = &PTR_FUN_14bc67620;
  return;
}



// FUNCTION 146723fca FUN_146723fca body=55 status=ok
// SIG undefined FUN_146723fca(void)

void FUN_146723fca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0dd98 == 0) {
    uVar1 = FUN_1410767f1();
    DAT_14cc0dd98 = FUN_140002ddd(FUN_146724001,uVar1,L"InterchangePerTranslatorDialogOverride");
  }
  return;
}



// FUNCTION 146724001 FUN_146724001 body=47 status=ok
// SIG undefined FUN_146724001(void)

longlong FUN_146724001(void)

{
  if (DAT_14cc0dd90 == 0) {
    FUN_14086a14e(&DAT_14cc0dd90,&PTR_FUN_14bc609f8);
  }
  return DAT_14cc0dd90;
}



// FUNCTION 146724030 FUN_146724030 body=48 status=ok
// SIG undefined FUN_146724030(void)

void FUN_146724030(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000030;
  *puVar1 = &PTR_FUN_14bc67780;
  return;
}



// FUNCTION 146724060 FUN_146724060 body=55 status=ok
// SIG undefined FUN_146724060(void)

void FUN_146724060(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0ddb0 == 0) {
    uVar1 = FUN_1410767f1();
    DAT_14cc0ddb0 = FUN_140002ddd(FUN_146724097,uVar1,L"InterchangeDialogOverride");
  }
  return;
}



// FUNCTION 146724097 FUN_146724097 body=49 status=ok
// SIG undefined FUN_146724097(void)

longlong FUN_146724097(void)

{
  if (DAT_14cc0dda8 == 0) {
    FUN_14086a14e(&DAT_14cc0dda8,&PTR_FUN_14bc60b88);
  }
  return DAT_14cc0dda8;
}



// FUNCTION 1467240c8 FUN_1467240c8 body=48 status=ok
// SIG undefined FUN_1467240c8(void)

void FUN_1467240c8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bc678e0;
  return;
}



// FUNCTION 1467240f8 FUN_1467240f8 body=55 status=ok
// SIG undefined FUN_1467240f8(void)

void FUN_1467240f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0ddc8 == 0) {
    uVar1 = FUN_1410767f1();
    DAT_14cc0ddc8 = FUN_140002ddd(FUN_14672412f,uVar1,L"InterchangeContentImportSettings");
  }
  return;
}



// FUNCTION 14672412f FUN_14672412f body=47 status=ok
// SIG undefined FUN_14672412f(void)

longlong FUN_14672412f(void)

{
  if (DAT_14cc0ddc0 == 0) {
    FUN_14086a14e(&DAT_14cc0ddc0,&PTR_FUN_14bc60ed8);
  }
  return DAT_14cc0ddc0;
}



// FUNCTION 14672415e FUN_14672415e body=48 status=ok
// SIG undefined FUN_14672415e(void)

void FUN_14672415e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000128;
  *puVar1 = &PTR_FUN_14bc67a40;
  return;
}



// FUNCTION 14672418e FUN_14672418e body=55 status=ok
// SIG undefined FUN_14672418e(void)

void FUN_14672418e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0dde0 == 0) {
    uVar1 = FUN_1410767f1();
    DAT_14cc0dde0 = FUN_140002ddd(FUN_1467241c5,uVar1,L"InterchangeGroup");
  }
  return;
}



// FUNCTION 1467241c5 FUN_1467241c5 body=47 status=ok
// SIG undefined FUN_1467241c5(void)

longlong FUN_1467241c5(void)

{
  if (DAT_14cc0ddd8 == 0) {
    FUN_14086a14e(&DAT_14cc0ddd8,&PTR_FUN_14bc61288);
  }
  return DAT_14cc0ddd8;
}



// FUNCTION 1467241f4 FUN_1467241f4 body=48 status=ok
// SIG undefined FUN_1467241f4(void)

void FUN_1467241f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000c8;
  *puVar1 = &PTR_FUN_14bc67ba0;
  return;
}



// FUNCTION 146724224 FUN_146724224 body=47 status=ok
// SIG undefined FUN_146724224(void)

longlong FUN_146724224(void)

{
  if (DAT_14cc0ddf8 == 0) {
    FUN_14073dd9a(&DAT_14cc0ddf8,&PTR_LAB_14bc61618);
  }
  return DAT_14cc0ddf8;
}



// FUNCTION 146724253 FUN_146724253 body=49 status=ok
// SIG undefined FUN_146724253(void)

longlong FUN_146724253(void)

{
  if (DAT_14cc0de28 == 0) {
    FUN_14073dd9a(&DAT_14cc0de28,&PTR_LAB_14bc61d10);
  }
  return DAT_14cc0de28;
}



// FUNCTION 146724284 FUN_146724284 body=47 status=ok
// SIG undefined FUN_146724284(void)

longlong FUN_146724284(void)

{
  if (DAT_14cc0de08 == 0) {
    FUN_14000fc22(&DAT_14cc0de08,&PTR_FUN_14bc619b8);
  }
  return DAT_14cc0de08;
}



// FUNCTION 1467242b3 FUN_1467242b3 body=47 status=ok
// SIG undefined FUN_1467242b3(void)

longlong FUN_1467242b3(void)

{
  if (DAT_14cc0de10 == 0) {
    FUN_14000fc22(&DAT_14cc0de10,&PTR_FUN_14bc61a50);
  }
  return DAT_14cc0de10;
}



// FUNCTION 1467242e2 FUN_1467242e2 body=47 status=ok
// SIG undefined FUN_1467242e2(void)

longlong FUN_1467242e2(void)

{
  if (DAT_14cc0de18 == 0) {
    FUN_14000fc22(&DAT_14cc0de18,&PTR_FUN_14bc61af8);
  }
  return DAT_14cc0de18;
}



// FUNCTION 146724312 FUN_146724312 body=34 status=ok
// SIG undefined FUN_146724312(void)

void FUN_146724312(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a93ed4();
  FUN_14069c8d6(uVar1,&PTR_s_GetSelectableItems_14bc61b40,3);
  return;
}



// FUNCTION 146724334 FUN_146724334 body=54 status=ok
// SIG undefined FUN_146724334(void)

void FUN_146724334(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140da6ea8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bc61d50;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  return;
}



// FUNCTION 14672436a FUN_14672436a body=35 status=ok
// SIG undefined FUN_14672436a(void)

void FUN_14672436a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1412b486a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bc62220;
  return;
}



// FUNCTION 146724393 FUN_146724393 body=47 status=ok
// SIG undefined FUN_146724393(void)

longlong FUN_146724393(void)

{
  if (DAT_14cc0de40 == 0) {
    FUN_14073dd9a(&DAT_14cc0de40,&PTR_LAB_14bc621d8);
  }
  return DAT_14cc0de40;
}



// FUNCTION 1467243c2 FUN_1467243c2 body=55 status=ok
// SIG undefined FUN_1467243c2(void)

void FUN_1467243c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0de58 == 0) {
    uVar1 = FUN_1410767f1();
    DAT_14cc0de58 = FUN_140002ddd(FUN_1467243f9,uVar1,L"PropertyData");
  }
  return;
}



// FUNCTION 1467243f9 FUN_1467243f9 body=47 status=ok
// SIG undefined FUN_1467243f9(void)

longlong FUN_1467243f9(void)

{
  if (DAT_14cc0de50 == 0) {
    FUN_14086a14e(&DAT_14cc0de50,&PTR_FUN_14bc62540);
  }
  return DAT_14cc0de50;
}



// FUNCTION 146724428 FUN_146724428 body=48 status=ok
// SIG undefined FUN_146724428(void)

void FUN_146724428(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14bc67d00;
  return;
}



// FUNCTION 146724458 FUN_146724458 body=54 status=ok
// SIG undefined FUN_146724458(void)

void FUN_146724458(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bc62730;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  return;
}



// FUNCTION 14672448e FUN_14672448e body=47 status=ok
// SIG undefined FUN_14672448e(void)

longlong FUN_14672448e(void)

{
  if (DAT_14cc0de70 == 0) {
    FUN_14073dd9a(&DAT_14cc0de70,&PTR_LAB_14bc626e8);
  }
  return DAT_14cc0de70;
}



// FUNCTION 1467244bd FUN_1467244bd body=46 status=ok
// SIG undefined FUN_1467244bd(void)

void FUN_1467244bd(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bc62b00;
  puVar1[5] = &PTR_FUN_14bc62da0;
  return;
}



// FUNCTION 1467244eb FUN_1467244eb body=47 status=ok
// SIG undefined FUN_1467244eb(void)

longlong FUN_1467244eb(void)

{
  if (DAT_14cc0de88 == 0) {
    FUN_14073dd9a(&DAT_14cc0de88,&PTR_LAB_14bc62ab8);
  }
  return DAT_14cc0de88;
}



// FUNCTION 14672451a FUN_14672451a body=49 status=ok
// SIG undefined FUN_14672451a(void)

longlong FUN_14672451a(void)

{
  if (DAT_14cc0df00 == 0) {
    FUN_14073dd9a(&DAT_14cc0df00,&PTR_LAB_14bc63c10);
  }
  return DAT_14cc0df00;
}



// FUNCTION 14672454b FUN_14672454b body=47 status=ok
// SIG undefined FUN_14672454b(void)

longlong FUN_14672454b(void)

{
  if (DAT_14cc0de98 == 0) {
    FUN_14000fc22(&DAT_14cc0de98,&PTR_FUN_14bc62e68);
  }
  return DAT_14cc0de98;
}



// FUNCTION 14672457a FUN_14672457a body=47 status=ok
// SIG undefined FUN_14672457a(void)

longlong FUN_14672457a(void)

{
  if (DAT_14cc0dea0 == 0) {
    FUN_14000fc22(&DAT_14cc0dea0,&PTR_FUN_14bc62f00);
  }
  return DAT_14cc0dea0;
}



// FUNCTION 1467245a9 FUN_1467245a9 body=47 status=ok
// SIG undefined FUN_1467245a9(void)

longlong FUN_1467245a9(void)

{
  if (DAT_14cc0dea8 == 0) {
    FUN_14000fc22(&DAT_14cc0dea8,&PTR_FUN_14bc62fe0);
  }
  return DAT_14cc0dea8;
}



// FUNCTION 1467245d8 FUN_1467245d8 body=47 status=ok
// SIG undefined FUN_1467245d8(void)

longlong FUN_1467245d8(void)

{
  if (DAT_14cc0deb0 == 0) {
    FUN_14000fc22(&DAT_14cc0deb0,&PTR_FUN_14bc630d8);
  }
  return DAT_14cc0deb0;
}



// FUNCTION 146724607 FUN_146724607 body=47 status=ok
// SIG undefined FUN_146724607(void)

longlong FUN_146724607(void)

{
  if (DAT_14cc0deb8 == 0) {
    FUN_14000fc22(&DAT_14cc0deb8,&PTR_FUN_14bc631b0);
  }
  return DAT_14cc0deb8;
}



// FUNCTION 146724636 FUN_146724636 body=47 status=ok
// SIG undefined FUN_146724636(void)

longlong FUN_146724636(void)

{
  if (DAT_14cc0dec0 == 0) {
    FUN_14000fc22(&DAT_14cc0dec0,&PTR_FUN_14bc63250);
  }
  return DAT_14cc0dec0;
}



// FUNCTION 146724665 FUN_146724665 body=47 status=ok
// SIG undefined FUN_146724665(void)

longlong FUN_146724665(void)

{
  if (DAT_14cc0dec8 == 0) {
    FUN_14000fc22(&DAT_14cc0dec8,&PTR_FUN_14bc63330);
  }
  return DAT_14cc0dec8;
}



// FUNCTION 146724694 FUN_146724694 body=47 status=ok
// SIG undefined FUN_146724694(void)

longlong FUN_146724694(void)

{
  if (DAT_14cc0ded0 == 0) {
    FUN_14000fc22(&DAT_14cc0ded0,&PTR_FUN_14bc63408);
  }
  return DAT_14cc0ded0;
}



// FUNCTION 1467246c3 FUN_1467246c3 body=47 status=ok
// SIG undefined FUN_1467246c3(void)

longlong FUN_1467246c3(void)

{
  if (DAT_14cc0ded8 == 0) {
    FUN_14000fc22(&DAT_14cc0ded8,&PTR_FUN_14bc634a0);
  }
  return DAT_14cc0ded8;
}



// FUNCTION 1467246f2 FUN_1467246f2 body=47 status=ok
// SIG undefined FUN_1467246f2(void)

longlong FUN_1467246f2(void)

{
  if (DAT_14cc0dee0 == 0) {
    FUN_14000fc22(&DAT_14cc0dee0,&PTR_FUN_14bc63550);
  }
  return DAT_14cc0dee0;
}



// FUNCTION 146724721 FUN_146724721 body=47 status=ok
// SIG undefined FUN_146724721(void)

longlong FUN_146724721(void)

{
  if (DAT_14cc0dee8 == 0) {
    FUN_14000fc22(&DAT_14cc0dee8,&PTR_FUN_14bc63640);
  }
  return DAT_14cc0dee8;
}



// FUNCTION 146724750 FUN_146724750 body=47 status=ok
// SIG undefined FUN_146724750(void)

longlong FUN_146724750(void)

{
  if (DAT_14cc0def0 == 0) {
    FUN_14000fc22(&DAT_14cc0def0,&PTR_FUN_14bc636f8);
  }
  return DAT_14cc0def0;
}



// FUNCTION 146724780 FUN_146724780 body=34 status=ok
// SIG undefined FUN_146724780(void)

void FUN_146724780(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a93fc0();
  FUN_14069c8d6(uVar1,&PTR_s_GetNodeContainer_14bc63740,0xc);
  return;
}



// FUNCTION 1467247a2 FUN_1467247a2 body=54 status=ok
// SIG undefined FUN_1467247a2(void)

void FUN_1467247a2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108e542(puVar1);
  *puVar1 = &PTR_FUN_14bc63c50;
  memset(puVar1 + 5,0,0xb0);
  return;
}



// FUNCTION 1467247d8 FUN_1467247d8 body=35 status=ok
// SIG undefined FUN_1467247d8(void)

void FUN_1467247d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bc63fb0;
  return;
}



// FUNCTION 146724800 FUN_146724800 body=47 status=ok
// SIG undefined FUN_146724800(void)

longlong FUN_146724800(void)

{
  if (DAT_14cc0df18 == 0) {
    FUN_14073dd9a(&DAT_14cc0df18,&PTR_LAB_14bc63f68);
  }
  return DAT_14cc0df18;
}



// FUNCTION 146724830 FUN_146724830 body=192 status=ok
// SIG undefined FUN_146724830(void)

void FUN_146724830(undefined4 *param_1)

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
  *puVar1 = &PTR_FUN_14bc680c0;
  puVar1[3] = &DAT_14cc0df28;
  puVar1[4] = FUN_149365f18;
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



// FUNCTION 1467248f1 FUN_1467248f1 body=49 status=ok
// SIG undefined FUN_1467248f1(void)

longlong FUN_1467248f1(void)

{
  if (DAT_14cc0df68 == 0) {
    FUN_14073dd9a(&DAT_14cc0df68,&PTR_LAB_14bc64810);
  }
  return DAT_14cc0df68;
}



// FUNCTION 146724922 FUN_146724922 body=47 status=ok
// SIG undefined FUN_146724922(void)

longlong FUN_146724922(void)

{
  if (DAT_14cc0df48 == 0) {
    FUN_14000fc22(&DAT_14cc0df48,&PTR_FUN_14bc64538);
  }
  return DAT_14cc0df48;
}



// FUNCTION 146724951 FUN_146724951 body=47 status=ok
// SIG undefined FUN_146724951(void)

longlong FUN_146724951(void)

{
  if (DAT_14cc0df50 == 0) {
    FUN_14000fc22(&DAT_14cc0df50,&PTR_FUN_14bc645d0);
  }
  return DAT_14cc0df50;
}



// FUNCTION 146724980 FUN_146724980 body=47 status=ok
// SIG undefined FUN_146724980(void)

longlong FUN_146724980(void)

{
  if (DAT_14cc0df58 == 0) {
    FUN_14000fc22(&DAT_14cc0df58,&PTR_FUN_14bc64670);
  }
  return DAT_14cc0df58;
}



// FUNCTION 1467249b0 FUN_1467249b0 body=34 status=ok
// SIG undefined FUN_1467249b0(void)

void FUN_1467249b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a5755a();
  FUN_14069c8d6(uVar1,&PTR_s_AddBlueprintPipeline_14bc646b0,3);
  return;
}



// FUNCTION 1467249d2 FUN_1467249d2 body=42 status=ok
// SIG undefined FUN_1467249d2(void)

void FUN_1467249d2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bc64850;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 1467249fc FUN_1467249fc body=55 status=ok
// SIG undefined FUN_1467249fc(void)

void FUN_1467249fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0df80 == 0) {
    uVar1 = FUN_1410767f1();
    DAT_14cc0df80 = FUN_140002ddd(FUN_146724a33,uVar1,L"ImportAssetParameters");
  }
  return;
}



// FUNCTION 146724a33 FUN_146724a33 body=49 status=ok
// SIG undefined FUN_146724a33(void)

longlong FUN_146724a33(void)

{
  if (DAT_14cc0df78 == 0) {
    FUN_14086a14e(&DAT_14cc0df78,&PTR_FUN_14bc64fd8);
  }
  return DAT_14cc0df78;
}



// FUNCTION 146724a64 FUN_146724a64 body=48 status=ok
// SIG undefined FUN_146724a64(void)

void FUN_146724a64(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000c8;
  *puVar1 = &PTR_FUN_14bc67e60;
  return;
}



// FUNCTION 146724a94 FUN_146724a94 body=49 status=ok
// SIG undefined FUN_146724a94(void)

longlong FUN_146724a94(void)

{
  if (DAT_14cc0dfe0 == 0) {
    FUN_14073dd9a(&DAT_14cc0dfe0,&PTR_LAB_14bc66100);
  }
  return DAT_14cc0dfe0;
}



// FUNCTION 146724ac5 FUN_146724ac5 body=47 status=ok
// SIG undefined FUN_146724ac5(void)

longlong FUN_146724ac5(void)

{
  if (DAT_14cc0df90 == 0) {
    FUN_14000fc22(&DAT_14cc0df90,&PTR_FUN_14bc650c8);
  }
  return DAT_14cc0df90;
}



// FUNCTION 146724af4 FUN_146724af4 body=47 status=ok
// SIG undefined FUN_146724af4(void)

longlong FUN_146724af4(void)

{
  if (DAT_14cc0df98 == 0) {
    FUN_14000fc22(&DAT_14cc0df98,&PTR_FUN_14bc651f8);
  }
  return DAT_14cc0df98;
}



// FUNCTION 146724b23 FUN_146724b23 body=47 status=ok
// SIG undefined FUN_146724b23(void)

longlong FUN_146724b23(void)

{
  if (DAT_14cc0dfa0 == 0) {
    FUN_14000fc22(&DAT_14cc0dfa0,&PTR_FUN_14bc65328);
  }
  return DAT_14cc0dfa0;
}



// FUNCTION 146724b57 FUN_146724b57 body=47 status=ok
// SIG undefined FUN_146724b57(void)

longlong FUN_146724b57(void)

{
  if (DAT_14cc0dfa8 == 0) {
    FUN_14000fc22(&DAT_14cc0dfa8,&PTR_FUN_14bc653d0);
  }
  return DAT_14cc0dfa8;
}



// FUNCTION 146724b86 FUN_146724b86 body=47 status=ok
// SIG undefined FUN_146724b86(void)

longlong FUN_146724b86(void)

{
  if (DAT_14cc0dfb0 == 0) {
    FUN_14000fc22(&DAT_14cc0dfb0,&PTR_FUN_14bc654e0);
  }
  return DAT_14cc0dfb0;
}



// FUNCTION 146724bb5 FUN_146724bb5 body=47 status=ok
// SIG undefined FUN_146724bb5(void)

longlong FUN_146724bb5(void)

{
  if (DAT_14cc0dfb8 == 0) {
    FUN_14000fc22(&DAT_14cc0dfb8,&PTR_FUN_14bc656f0);
  }
  return DAT_14cc0dfb8;
}



// FUNCTION 146724be4 FUN_146724be4 body=47 status=ok
// SIG undefined FUN_146724be4(void)

longlong FUN_146724be4(void)

{
  if (DAT_14cc0dfc0 == 0) {
    FUN_14000fc22(&DAT_14cc0dfc0,&PTR_FUN_14bc65860);
  }
  return DAT_14cc0dfc0;
}



// FUNCTION 146724c13 FUN_146724c13 body=47 status=ok
// SIG undefined FUN_146724c13(void)

longlong FUN_146724c13(void)

{
  if (DAT_14cc0dfc8 == 0) {
    FUN_14000fc22(&DAT_14cc0dfc8,&PTR_FUN_14bc659e0);
  }
  return DAT_14cc0dfc8;
}



// FUNCTION 146724c42 FUN_146724c42 body=47 status=ok
// SIG undefined FUN_146724c42(void)

longlong FUN_146724c42(void)

{
  if (DAT_14cc0dfd0 == 0) {
    FUN_14000fc22(&DAT_14cc0dfd0,&PTR_FUN_14bc65b60);
  }
  return DAT_14cc0dfd0;
}



// FUNCTION 146724c72 FUN_146724c72 body=34 status=ok
// SIG undefined FUN_146724c72(void)

void FUN_146724c72(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14594cbfc();
  FUN_14069c8d6(uVar1,&PTR_s_CreateSourceData_14bc65ba0,9);
  return;
}



// FUNCTION 146724c94 FUN_146724c94 body=47 status=ok
// SIG undefined FUN_146724c94(void)

longlong FUN_146724c94(void)

{
  if (DAT_14cc0e038 == 0) {
    FUN_14073dd9a(&DAT_14cc0e038,&PTR_LAB_14bc66c50);
  }
  return DAT_14cc0e038;
}



// FUNCTION 146724cc3 FUN_146724cc3 body=47 status=ok
// SIG undefined FUN_146724cc3(void)

longlong FUN_146724cc3(void)

{
  if (DAT_14cc0e028 == 0) {
    FUN_14000fc22(&DAT_14cc0e028,&PTR_FUN_14bc66b88);
  }
  return DAT_14cc0e028;
}



// FUNCTION 146724cf2 FUN_146724cf2 body=34 status=ok
// SIG undefined FUN_146724cf2(void)

void FUN_146724cf2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a5763e();
  FUN_14069c8d6(uVar1,&PTR_s_ScriptedImportMorphTarget_14bc66bd0,1);
  return;
}



// FUNCTION 146724d14 FUN_146724d14 body=35 status=ok
// SIG undefined FUN_146724d14(void)

void FUN_146724d14(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bc66c90;
  return;
}



// FUNCTION 146724d38 FUN_146724d38 body=40 status=ok
// SIG undefined FUN_146724d38(void)

undefined8 FUN_146724d38(undefined8 param_1,int param_2)

{
  FUN_145898044();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724d60 FUN_146724d60 body=40 status=ok
// SIG undefined FUN_146724d60(void)

undefined8 FUN_146724d60(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724d88 FUN_146724d88 body=40 status=ok
// SIG undefined FUN_146724d88(void)

undefined8 FUN_146724d88(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724db0 FUN_146724db0 body=40 status=ok
// SIG undefined FUN_146724db0(void)

undefined8 FUN_146724db0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724dd8 FUN_146724dd8 body=40 status=ok
// SIG undefined FUN_146724dd8(void)

undefined8 FUN_146724dd8(undefined8 param_1,int param_2)

{
  thunk_FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724e00 FUN_146724e00 body=40 status=ok
// SIG undefined FUN_146724e00(void)

undefined8 FUN_146724e00(undefined8 param_1,int param_2)

{
  FUN_1410aba6a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724e28 FUN_146724e28 body=40 status=ok
// SIG undefined FUN_146724e28(void)

undefined8 FUN_146724e28(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724e50 FUN_146724e50 body=40 status=ok
// SIG undefined FUN_146724e50(void)

undefined8 FUN_146724e50(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724e78 FUN_146724e78 body=29 status=ok
// SIG undefined FUN_146724e78(void)

undefined8 FUN_146724e78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724e96 FUN_146724e96 body=29 status=ok
// SIG undefined FUN_146724e96(void)

undefined8 FUN_146724e96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724eb4 FUN_146724eb4 body=29 status=ok
// SIG undefined FUN_146724eb4(void)

undefined8 FUN_146724eb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724ed2 FUN_146724ed2 body=29 status=ok
// SIG undefined FUN_146724ed2(void)

undefined8 FUN_146724ed2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724ef0 FUN_146724ef0 body=29 status=ok
// SIG undefined FUN_146724ef0(void)

undefined8 FUN_146724ef0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724f0e FUN_146724f0e body=29 status=ok
// SIG undefined FUN_146724f0e(void)

undefined8 FUN_146724f0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724f2c FUN_146724f2c body=29 status=ok
// SIG undefined FUN_146724f2c(void)

undefined8 FUN_146724f2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724f4a FUN_146724f4a body=29 status=ok
// SIG undefined FUN_146724f4a(void)

undefined8 FUN_146724f4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724f68 FUN_146724f68 body=29 status=ok
// SIG undefined FUN_146724f68(void)

undefined8 FUN_146724f68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724f86 FUN_146724f86 body=29 status=ok
// SIG undefined FUN_146724f86(void)

undefined8 FUN_146724f86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724fa4 FUN_146724fa4 body=29 status=ok
// SIG undefined FUN_146724fa4(void)

undefined8 FUN_146724fa4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146724fc2 FUN_146724fc2 body=93 status=ok
// SIG undefined FUN_146724fc2(void)

void FUN_146724fc2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bc680c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14672501f FUN_14672501f body=49 status=ok
// SIG undefined FUN_14672501f(void)

longlong FUN_14672501f(void)

{
  if (DAT_14cc0e180 == 0) {
    FUN_14073dd9a(&DAT_14cc0e180,&PTR_LAB_14bc69eb0);
  }
  return DAT_14cc0e180;
}



// FUNCTION 146725050 FUN_146725050 body=47 status=ok
// SIG undefined FUN_146725050(void)

longlong FUN_146725050(void)

{
  if (DAT_14cc0e138 == 0) {
    FUN_14000fc22(&DAT_14cc0e138,&PTR_FUN_14bc69570);
  }
  return DAT_14cc0e138;
}



// FUNCTION 14672507f FUN_14672507f body=47 status=ok
// SIG undefined FUN_14672507f(void)

longlong FUN_14672507f(void)

{
  if (DAT_14cc0e140 == 0) {
    FUN_14000fc22(&DAT_14cc0e140,&PTR_FUN_14bc696a0);
  }
  return DAT_14cc0e140;
}



// FUNCTION 1467250ae FUN_1467250ae body=47 status=ok
// SIG undefined FUN_1467250ae(void)

longlong FUN_1467250ae(void)

{
  if (DAT_14cc0e148 == 0) {
    FUN_14000fc22(&DAT_14cc0e148,&PTR_FUN_14bc69770);
  }
  return DAT_14cc0e148;
}



// FUNCTION 1467250dd FUN_1467250dd body=47 status=ok
// SIG undefined FUN_1467250dd(void)

longlong FUN_1467250dd(void)

{
  if (DAT_14cc0e150 == 0) {
    FUN_14000fc22(&DAT_14cc0e150,&PTR_FUN_14bc69840);
  }
  return DAT_14cc0e150;
}



// FUNCTION 14672510c FUN_14672510c body=47 status=ok
// SIG undefined FUN_14672510c(void)

longlong FUN_14672510c(void)

{
  if (DAT_14cc0e158 == 0) {
    FUN_14000fc22(&DAT_14cc0e158,&PTR_FUN_14bc69958);
  }
  return DAT_14cc0e158;
}



// FUNCTION 14672513b FUN_14672513b body=47 status=ok
// SIG undefined FUN_14672513b(void)

longlong FUN_14672513b(void)

{
  if (DAT_14cc0e160 == 0) {
    FUN_14000fc22(&DAT_14cc0e160,&PTR_FUN_14bc69ad8);
  }
  return DAT_14cc0e160;
}



// FUNCTION 14672516a FUN_14672516a body=47 status=ok
// SIG undefined FUN_14672516a(void)

longlong FUN_14672516a(void)

{
  if (DAT_14cc0e168 == 0) {
    FUN_14000fc22(&DAT_14cc0e168,&PTR_FUN_14bc69be8);
  }
  return DAT_14cc0e168;
}



// FUNCTION 146725199 FUN_146725199 body=47 status=ok
// SIG undefined FUN_146725199(void)

longlong FUN_146725199(void)

{
  if (DAT_14cc0e170 == 0) {
    FUN_14000fc22(&DAT_14cc0e170,&PTR_FUN_14bc69cf8);
  }
  return DAT_14cc0e170;
}



// FUNCTION 1467251c8 FUN_1467251c8 body=34 status=ok
// SIG undefined FUN_1467251c8(void)

void FUN_1467251c8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a940ac();
  FUN_14069c8d6(uVar1,&PTR_s_GetCustomFocalLength_14bc69d40,8);
  return;
}



// FUNCTION 1467251ea FUN_1467251ea body=49 status=ok
// SIG undefined FUN_1467251ea(void)

longlong FUN_1467251ea(void)

{
  if (DAT_14cc0e1f8 == 0) {
    FUN_14073dd9a(&DAT_14cc0e1f8,&PTR_LAB_14bc6af50);
  }
  return DAT_14cc0e1f8;
}



// FUNCTION 14672521b FUN_14672521b body=47 status=ok
// SIG undefined FUN_14672521b(void)

longlong FUN_14672521b(void)

{
  if (DAT_14cc0e190 == 0) {
    FUN_14000fc22(&DAT_14cc0e190,&PTR_FUN_14bc6a290);
  }
  return DAT_14cc0e190;
}



// FUNCTION 14672524a FUN_14672524a body=47 status=ok
// SIG undefined FUN_14672524a(void)

longlong FUN_14672524a(void)

{
  if (DAT_14cc0e198 == 0) {
    FUN_14000fc22(&DAT_14cc0e198,&PTR_FUN_14bc6a360);
  }
  return DAT_14cc0e198;
}



// FUNCTION 146725279 FUN_146725279 body=47 status=ok
// SIG undefined FUN_146725279(void)

longlong FUN_146725279(void)

{
  if (DAT_14cc0e1a0 == 0) {
    FUN_14000fc22(&DAT_14cc0e1a0,&PTR_FUN_14bc6a430);
  }
  return DAT_14cc0e1a0;
}



// FUNCTION 1467252a8 FUN_1467252a8 body=47 status=ok
// SIG undefined FUN_1467252a8(void)

longlong FUN_1467252a8(void)

{
  if (DAT_14cc0e1a8 == 0) {
    FUN_14000fc22(&DAT_14cc0e1a8,&PTR_FUN_14bc6a500);
  }
  return DAT_14cc0e1a8;
}



// FUNCTION 1467252d7 FUN_1467252d7 body=47 status=ok
// SIG undefined FUN_1467252d7(void)

longlong FUN_1467252d7(void)

{
  if (DAT_14cc0e1b0 == 0) {
    FUN_14000fc22(&DAT_14cc0e1b0,&PTR_FUN_14bc6a5d0);
  }
  return DAT_14cc0e1b0;
}



// FUNCTION 146725306 FUN_146725306 body=47 status=ok
// SIG undefined FUN_146725306(void)

longlong FUN_146725306(void)

{
  if (DAT_14cc0e1b8 == 0) {
    FUN_14000fc22(&DAT_14cc0e1b8,&PTR_FUN_14bc6a6a0);
  }
  return DAT_14cc0e1b8;
}



// FUNCTION 146725335 FUN_146725335 body=47 status=ok
// SIG undefined FUN_146725335(void)

longlong FUN_146725335(void)

{
  if (DAT_14cc0e1c0 == 0) {
    FUN_14000fc22(&DAT_14cc0e1c0,&PTR_FUN_14bc6a7b8);
  }
  return DAT_14cc0e1c0;
}



// FUNCTION 146725364 FUN_146725364 body=47 status=ok
// SIG undefined FUN_146725364(void)

longlong FUN_146725364(void)

{
  if (DAT_14cc0e1c8 == 0) {
    FUN_14000fc22(&DAT_14cc0e1c8,&PTR_FUN_14bc6a8c8);
  }
  return DAT_14cc0e1c8;
}



// FUNCTION 146725393 FUN_146725393 body=47 status=ok
// SIG undefined FUN_146725393(void)

longlong FUN_146725393(void)

{
  if (DAT_14cc0e1d0 == 0) {
    FUN_14000fc22(&DAT_14cc0e1d0,&PTR_FUN_14bc6a9d8);
  }
  return DAT_14cc0e1d0;
}



// FUNCTION 1467253c2 FUN_1467253c2 body=47 status=ok
// SIG undefined FUN_1467253c2(void)

longlong FUN_1467253c2(void)

{
  if (DAT_14cc0e1d8 == 0) {
    FUN_14000fc22(&DAT_14cc0e1d8,&PTR_FUN_14bc6aae8);
  }
  return DAT_14cc0e1d8;
}



// FUNCTION 1467253f1 FUN_1467253f1 body=47 status=ok
// SIG undefined FUN_1467253f1(void)

longlong FUN_1467253f1(void)

{
  if (DAT_14cc0e1e0 == 0) {
    FUN_14000fc22(&DAT_14cc0e1e0,&PTR_FUN_14bc6ac08);
  }
  return DAT_14cc0e1e0;
}



// FUNCTION 146725420 FUN_146725420 body=47 status=ok
// SIG undefined FUN_146725420(void)

longlong FUN_146725420(void)

{
  if (DAT_14cc0e1e8 == 0) {
    FUN_14000fc22(&DAT_14cc0e1e8,&PTR_FUN_14bc6ad18);
  }
  return DAT_14cc0e1e8;
}



// FUNCTION 146725450 FUN_146725450 body=34 status=ok
// SIG undefined FUN_146725450(void)

void FUN_146725450(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a94198();
  FUN_14069c8d6(uVar1,&PTR_s_GetCustomAspectRatio_14bc6ad60,0xc);
  return;
}



// FUNCTION 146725472 FUN_146725472 body=49 status=ok
// SIG undefined FUN_146725472(void)

longlong FUN_146725472(void)

{
  if (DAT_14cc0e248 == 0) {
    FUN_14073dd9a(&DAT_14cc0e248,&PTR_LAB_14bc6ba70);
  }
  return DAT_14cc0e248;
}



// FUNCTION 1467254a3 FUN_1467254a3 body=47 status=ok
// SIG undefined FUN_1467254a3(void)

longlong FUN_1467254a3(void)

{
  if (DAT_14cc0e208 == 0) {
    FUN_14000fc22(&DAT_14cc0e208,&PTR_FUN_14bc6b3b0);
  }
  return DAT_14cc0e208;
}



// FUNCTION 1467254d2 FUN_1467254d2 body=47 status=ok
// SIG undefined FUN_1467254d2(void)

longlong FUN_1467254d2(void)

{
  if (DAT_14cc0e210 == 0) {
    FUN_14000fc22(&DAT_14cc0e210,&PTR_FUN_14bc6b480);
  }
  return DAT_14cc0e210;
}



// FUNCTION 146725501 FUN_146725501 body=47 status=ok
// SIG undefined FUN_146725501(void)

longlong FUN_146725501(void)

{
  if (DAT_14cc0e218 == 0) {
    FUN_14000fc22(&DAT_14cc0e218,&PTR_FUN_14bc6b550);
  }
  return DAT_14cc0e218;
}



// FUNCTION 146725530 FUN_146725530 body=47 status=ok
// SIG undefined FUN_146725530(void)

longlong FUN_146725530(void)

{
  if (DAT_14cc0e220 == 0) {
    FUN_14000fc22(&DAT_14cc0e220,&PTR_FUN_14bc6b5e0);
  }
  return DAT_14cc0e220;
}



// FUNCTION 14672555f FUN_14672555f body=47 status=ok
// SIG undefined FUN_14672555f(void)

longlong FUN_14672555f(void)

{
  if (DAT_14cc0e228 == 0) {
    FUN_14000fc22(&DAT_14cc0e228,&PTR_FUN_14bc6b6b0);
  }
  return DAT_14cc0e228;
}



// FUNCTION 14672558e FUN_14672558e body=47 status=ok
// SIG undefined FUN_14672558e(void)

longlong FUN_14672558e(void)

{
  if (DAT_14cc0e230 == 0) {
    FUN_14000fc22(&DAT_14cc0e230,&PTR_FUN_14bc6b7c8);
  }
  return DAT_14cc0e230;
}



// FUNCTION 1467255bd FUN_1467255bd body=47 status=ok
// SIG undefined FUN_1467255bd(void)

longlong FUN_1467255bd(void)

{
  if (DAT_14cc0e238 == 0) {
    FUN_14000fc22(&DAT_14cc0e238,&PTR_FUN_14bc6b8d8);
  }
  return DAT_14cc0e238;
}



// FUNCTION 1467255ec FUN_1467255ec body=34 status=ok
// SIG undefined FUN_1467255ec(void)

void FUN_1467255ec(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a94284();
  FUN_14069c8d6(uVar1,&PTR_s_GetCustomDecalMaterialPathName_14bc6b920,7);
  return;
}



// FUNCTION 14672560e FUN_14672560e body=49 status=ok
// SIG undefined FUN_14672560e(void)

longlong FUN_14672560e(void)

{
  if (DAT_14cc0eaa8 == 0) {
    FUN_14073dd9a(&DAT_14cc0eaa8,&PTR_LAB_14bc6d2f0);
  }
  return DAT_14cc0eaa8;
}



// FUNCTION 14672563f FUN_14672563f body=47 status=ok
// SIG undefined FUN_14672563f(void)

longlong FUN_14672563f(void)

{
  if (DAT_14cc0ea78 == 0) {
    FUN_14000fc22(&DAT_14cc0ea78,&PTR_FUN_14bc6ce40);
  }
  return DAT_14cc0ea78;
}



// FUNCTION 14672566e FUN_14672566e body=47 status=ok
// SIG undefined FUN_14672566e(void)

longlong FUN_14672566e(void)

{
  if (DAT_14cc0ea80 == 0) {
    FUN_14000fc22(&DAT_14cc0ea80,&PTR_FUN_14bc6cf30);
  }
  return DAT_14cc0ea80;
}



// FUNCTION 14672569d FUN_14672569d body=47 status=ok
// SIG undefined FUN_14672569d(void)

longlong FUN_14672569d(void)

{
  if (DAT_14cc0ea88 == 0) {
    FUN_14000fc22(&DAT_14cc0ea88,&PTR_FUN_14bc6cfc0);
  }
  return DAT_14cc0ea88;
}



// FUNCTION 1467256cc FUN_1467256cc body=47 status=ok
// SIG undefined FUN_1467256cc(void)

longlong FUN_1467256cc(void)

{
  if (DAT_14cc0ea90 == 0) {
    FUN_14000fc22(&DAT_14cc0ea90,&PTR_FUN_14bc6d0b0);
  }
  return DAT_14cc0ea90;
}



// FUNCTION 1467256fb FUN_1467256fb body=47 status=ok
// SIG undefined FUN_1467256fb(void)

longlong FUN_1467256fb(void)

{
  if (DAT_14cc0ea98 == 0) {
    FUN_14000fc22(&DAT_14cc0ea98,&PTR_FUN_14bc6d1a0);
  }
  return DAT_14cc0ea98;
}



// FUNCTION 14672572a FUN_14672572a body=34 status=ok
// SIG undefined FUN_14672572a(void)

void FUN_14672572a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a94370();
  FUN_14069c8d6(uVar1,&PTR_s_GetCustomDiffuseTexturePath_14bc6d1e0,5);
  return;
}



// FUNCTION 14672574c FUN_14672574c body=49 status=ok
// SIG undefined FUN_14672574c(void)

longlong FUN_14672574c(void)

{
  if (DAT_14cc0eb38 == 0) {
    FUN_14073dd9a(&DAT_14cc0eb38,&PTR_LAB_14bc6e360);
  }
  return DAT_14cc0eb38;
}



// FUNCTION 14672577d FUN_14672577d body=47 status=ok
// SIG undefined FUN_14672577d(void)

longlong FUN_14672577d(void)

{
  if (DAT_14cc0ead0 == 0) {
    FUN_14000fc22(&DAT_14cc0ead0,&PTR_FUN_14bc6d760);
  }
  return DAT_14cc0ead0;
}



// FUNCTION 1467257ac FUN_1467257ac body=47 status=ok
// SIG undefined FUN_1467257ac(void)

longlong FUN_1467257ac(void)

{
  if (DAT_14cc0ead8 == 0) {
    FUN_14000fc22(&DAT_14cc0ead8,&PTR_FUN_14bc6d860);
  }
  return DAT_14cc0ead8;
}



// FUNCTION 1467257db FUN_1467257db body=47 status=ok
// SIG undefined FUN_1467257db(void)

longlong FUN_1467257db(void)

{
  if (DAT_14cc0eae0 == 0) {
    FUN_14000fc22(&DAT_14cc0eae0,&PTR_FUN_14bc6d908);
  }
  return DAT_14cc0eae0;
}



// FUNCTION 14672580a FUN_14672580a body=47 status=ok
// SIG undefined FUN_14672580a(void)

longlong FUN_14672580a(void)

{
  if (DAT_14cc0eae8 == 0) {
    FUN_14000fc22(&DAT_14cc0eae8,&PTR_FUN_14bc6da00);
  }
  return DAT_14cc0eae8;
}



// FUNCTION 146725839 FUN_146725839 body=47 status=ok
// SIG undefined FUN_146725839(void)

longlong FUN_146725839(void)

{
  if (DAT_14cc0eaf0 == 0) {
    FUN_14000fc22(&DAT_14cc0eaf0,&PTR_FUN_14bc6daf8);
  }
  return DAT_14cc0eaf0;
}



// FUNCTION 146725868 FUN_146725868 body=47 status=ok
// SIG undefined FUN_146725868(void)

longlong FUN_146725868(void)

{
  if (DAT_14cc0eaf8 == 0) {
    FUN_14000fc22(&DAT_14cc0eaf8,&PTR_FUN_14bc6dbe8);
  }
  return DAT_14cc0eaf8;
}



// FUNCTION 146725897 FUN_146725897 body=47 status=ok
// SIG undefined FUN_146725897(void)

longlong FUN_146725897(void)

{
  if (DAT_14cc0eb00 == 0) {
    FUN_14000fc22(&DAT_14cc0eb00,&PTR_FUN_14bc6dce0);
  }
  return DAT_14cc0eb00;
}



// FUNCTION 1467258c6 FUN_1467258c6 body=47 status=ok
// SIG undefined FUN_1467258c6(void)

longlong FUN_1467258c6(void)

{
  if (DAT_14cc0eb08 == 0) {
    FUN_14000fc22(&DAT_14cc0eb08,&PTR_FUN_14bc6dd70);
  }
  return DAT_14cc0eb08;
}



// FUNCTION 1467258f5 FUN_1467258f5 body=47 status=ok
// SIG undefined FUN_1467258f5(void)

longlong FUN_1467258f5(void)

{
  if (DAT_14cc0eb10 == 0) {
    FUN_14000fc22(&DAT_14cc0eb10,&PTR_FUN_14bc6de60);
  }
  return DAT_14cc0eb10;
}



// FUNCTION 146725924 FUN_146725924 body=47 status=ok
// SIG undefined FUN_146725924(void)

longlong FUN_146725924(void)

{
  if (DAT_14cc0eb18 == 0) {
    FUN_14000fc22(&DAT_14cc0eb18,&PTR_FUN_14bc6df58);
  }
  return DAT_14cc0eb18;
}



// FUNCTION 146725953 FUN_146725953 body=47 status=ok
// SIG undefined FUN_146725953(void)

longlong FUN_146725953(void)

{
  if (DAT_14cc0eb20 == 0) {
    FUN_14000fc22(&DAT_14cc0eb20,&PTR_FUN_14bc6e048);
  }
  return DAT_14cc0eb20;
}



// FUNCTION 146725982 FUN_146725982 body=47 status=ok
// SIG undefined FUN_146725982(void)

longlong FUN_146725982(void)

{
  if (DAT_14cc0eb28 == 0) {
    FUN_14000fc22(&DAT_14cc0eb28,&PTR_FUN_14bc6e140);
  }
  return DAT_14cc0eb28;
}



// FUNCTION 1467259b2 FUN_1467259b2 body=34 status=ok
// SIG undefined FUN_1467259b2(void)

void FUN_1467259b2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a9445c();
  FUN_14069c8d6(uVar1,&PTR_s_AddCustomActorFactoryNodeUid_14bc6e180,0xc);
  return;
}



// FUNCTION 1467259d4 FUN_1467259d4 body=47 status=ok
// SIG undefined FUN_1467259d4(void)

longlong FUN_1467259d4(void)

{
  if (DAT_14cc0eb60 == 0) {
    FUN_14073dd9a(&DAT_14cc0eb60,&PTR_LAB_14bc6ea10);
  }
  return DAT_14cc0eb60;
}



// FUNCTION 146725a03 FUN_146725a03 body=47 status=ok
// SIG undefined FUN_146725a03(void)

longlong FUN_146725a03(void)

{
  if (DAT_14cc0eb48 == 0) {
    FUN_14000fc22(&DAT_14cc0eb48,&PTR_FUN_14bc6e828);
  }
  return DAT_14cc0eb48;
}



// FUNCTION 146725a32 FUN_146725a32 body=47 status=ok
// SIG undefined FUN_146725a32(void)

longlong FUN_146725a32(void)

{
  if (DAT_14cc0eb50 == 0) {
    FUN_14000fc22(&DAT_14cc0eb50,&PTR_FUN_14bc6e908);
  }
  return DAT_14cc0eb50;
}



// FUNCTION 146725a62 FUN_146725a62 body=34 status=ok
// SIG undefined FUN_146725a62(void)

void FUN_146725a62(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a94548();
  FUN_14069c8d6(uVar1,&PTR_s_GetCustomLevelReference_14bc6e950,2);
  return;
}



// FUNCTION 146725a84 FUN_146725a84 body=49 status=ok
// SIG undefined FUN_146725a84(void)

longlong FUN_146725a84(void)

{
  if (DAT_14cc0ebb8 == 0) {
    FUN_14073dd9a(&DAT_14cc0ebb8,&PTR_LAB_14bc6f4f0);
  }
  return DAT_14cc0ebb8;
}



// FUNCTION 146725ab5 FUN_146725ab5 body=47 status=ok
// SIG undefined FUN_146725ab5(void)

longlong FUN_146725ab5(void)

{
  if (DAT_14cc0eb70 == 0) {
    FUN_14000fc22(&DAT_14cc0eb70,&PTR_FUN_14bc6ee40);
  }
  return DAT_14cc0eb70;
}



// FUNCTION 146725ae4 FUN_146725ae4 body=47 status=ok
// SIG undefined FUN_146725ae4(void)

longlong FUN_146725ae4(void)

{
  if (DAT_14cc0eb78 == 0) {
    FUN_14000fc22(&DAT_14cc0eb78,&PTR_FUN_14bc6ef00);
  }
  return DAT_14cc0eb78;
}



// FUNCTION 146725b13 FUN_146725b13 body=47 status=ok
// SIG undefined FUN_146725b13(void)

longlong FUN_146725b13(void)

{
  if (DAT_14cc0eb80 == 0) {
    FUN_14000fc22(&DAT_14cc0eb80,&PTR_FUN_14bc6ef80);
  }
  return DAT_14cc0eb80;
}



// FUNCTION 146725b42 FUN_146725b42 body=47 status=ok
// SIG undefined FUN_146725b42(void)

longlong FUN_146725b42(void)

{
  if (DAT_14cc0eb88 == 0) {
    FUN_14000fc22(&DAT_14cc0eb88,&PTR_FUN_14bc6f040);
  }
  return DAT_14cc0eb88;
}



// FUNCTION 146725b71 FUN_146725b71 body=47 status=ok
// SIG undefined FUN_146725b71(void)

longlong FUN_146725b71(void)

{
  if (DAT_14cc0eb90 == 0) {
    FUN_14000fc22(&DAT_14cc0eb90,&PTR_FUN_14bc6f110);
  }
  return DAT_14cc0eb90;
}



// FUNCTION 146725ba0 FUN_146725ba0 body=47 status=ok
// SIG undefined FUN_146725ba0(void)

longlong FUN_146725ba0(void)

{
  if (DAT_14cc0eb98 == 0) {
    FUN_14000fc22(&DAT_14cc0eb98,&PTR_FUN_14bc6f1a0);
  }
  return DAT_14cc0eb98;
}



// FUNCTION 146725bcf FUN_146725bcf body=47 status=ok
// SIG undefined FUN_146725bcf(void)

longlong FUN_146725bcf(void)

{
  if (DAT_14cc0eba0 == 0) {
    FUN_14000fc22(&DAT_14cc0eba0,&PTR_FUN_14bc6f270);
  }
  return DAT_14cc0eba0;
}



// FUNCTION 146725bfe FUN_146725bfe body=47 status=ok
// SIG undefined FUN_146725bfe(void)

longlong FUN_146725bfe(void)

{
  if (DAT_14cc0eba8 == 0) {
    FUN_14000fc22(&DAT_14cc0eba8,&PTR_FUN_14bc6f340);
  }
  return DAT_14cc0eba8;
}



// FUNCTION 146725c2e FUN_146725c2e body=34 status=ok
// SIG undefined FUN_146725c2e(void)

void FUN_146725c2e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a94634();
  FUN_14069c8d6(uVar1,&PTR_s_AddCustomAnimationTrackUid_14bc6f380,8);
  return;
}



// FUNCTION 146725c50 FUN_146725c50 body=49 status=ok
// SIG undefined FUN_146725c50(void)

longlong FUN_146725c50(void)

{
  if (DAT_14cc0ec10 == 0) {
    FUN_14073dd9a(&DAT_14cc0ec10,&PTR_LAB_14bc70170);
  }
  return DAT_14cc0ec10;
}



// FUNCTION 146725c81 FUN_146725c81 body=47 status=ok
// SIG undefined FUN_146725c81(void)

longlong FUN_146725c81(void)

{
  if (DAT_14cc0ebc8 == 0) {
    FUN_14000fc22(&DAT_14cc0ebc8,&PTR_FUN_14bc6f8e0);
  }
  return DAT_14cc0ebc8;
}



// FUNCTION 146725cb0 FUN_146725cb0 body=47 status=ok
// SIG undefined FUN_146725cb0(void)

longlong FUN_146725cb0(void)

{
  if (DAT_14cc0ebd0 == 0) {
    FUN_14000fc22(&DAT_14cc0ebd0,&PTR_FUN_14bc6f9b0);
  }
  return DAT_14cc0ebd0;
}



// FUNCTION 146725cdf FUN_146725cdf body=47 status=ok
// SIG undefined FUN_146725cdf(void)

longlong FUN_146725cdf(void)

{
  if (DAT_14cc0ebd8 == 0) {
    FUN_14000fc22(&DAT_14cc0ebd8,&PTR_FUN_14bc6fa80);
  }
  return DAT_14cc0ebd8;
}



// FUNCTION 146725d0e FUN_146725d0e body=47 status=ok
// SIG undefined FUN_146725d0e(void)

longlong FUN_146725d0e(void)

{
  if (DAT_14cc0ebe0 == 0) {
    FUN_14000fc22(&DAT_14cc0ebe0,&PTR_FUN_14bc6fb50);
  }
  return DAT_14cc0ebe0;
}



// FUNCTION 146725d3d FUN_146725d3d body=47 status=ok
// SIG undefined FUN_146725d3d(void)

longlong FUN_146725d3d(void)

{
  if (DAT_14cc0ebe8 == 0) {
    FUN_14000fc22(&DAT_14cc0ebe8,&PTR_FUN_14bc6fc68);
  }
  return DAT_14cc0ebe8;
}



// FUNCTION 146725d6c FUN_146725d6c body=47 status=ok
// SIG undefined FUN_146725d6c(void)

longlong FUN_146725d6c(void)

{
  if (DAT_14cc0ebf0 == 0) {
    FUN_14000fc22(&DAT_14cc0ebf0,&PTR_FUN_14bc6fd88);
  }
  return DAT_14cc0ebf0;
}



// FUNCTION 146725d9b FUN_146725d9b body=47 status=ok
// SIG undefined FUN_146725d9b(void)

longlong FUN_146725d9b(void)

{
  if (DAT_14cc0ebf8 == 0) {
    FUN_14000fc22(&DAT_14cc0ebf8,&PTR_FUN_14bc6fe98);
  }
  return DAT_14cc0ebf8;
}



// FUNCTION 146725dca FUN_146725dca body=47 status=ok
// SIG undefined FUN_146725dca(void)

longlong FUN_146725dca(void)

{
  if (DAT_14cc0ec00 == 0) {
    FUN_14000fc22(&DAT_14cc0ec00,&PTR_FUN_14bc6ffb8);
  }
  return DAT_14cc0ec00;
}



// FUNCTION 146725dfa FUN_146725dfa body=34 status=ok
// SIG undefined FUN_146725dfa(void)

void FUN_146725dfa(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14599b3fe();
  FUN_14069c8d6(uVar1,&PTR_s_GetCustomIntensity_14bc70000,8);
  return;
}



// FUNCTION 146725e24 FUN_146725e24 body=32 status=ok
// SIG undefined FUN_146725e24(void)

void FUN_146725e24(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_1457ededc(param_1);
  *param_1 = &PTR_FUN_14bc70560;
  return;
}



// FUNCTION 146725e44 FUN_146725e44 body=47 status=ok
// SIG undefined FUN_146725e44(void)

longlong FUN_146725e44(void)

{
  if (DAT_14cc0ec28 == 0) {
    FUN_14073dd9a(&DAT_14cc0ec28,&PTR_LAB_14bc70518);
  }
  return DAT_14cc0ec28;
}



// FUNCTION 146725e73 FUN_146725e73 body=49 status=ok
// SIG undefined FUN_146725e73(void)

longlong FUN_146725e73(void)

{
  if (DAT_14cc0eca0 == 0) {
    FUN_14073dd9a(&DAT_14cc0eca0,&PTR_LAB_14bc71600);
  }
  return DAT_14cc0eca0;
}



// FUNCTION 146725ea4 FUN_146725ea4 body=47 status=ok
// SIG undefined FUN_146725ea4(void)

longlong FUN_146725ea4(void)

{
  if (DAT_14cc0ec38 == 0) {
    FUN_14000fc22(&DAT_14cc0ec38,&PTR_FUN_14bc708f0);
  }
  return DAT_14cc0ec38;
}



// FUNCTION 146725ed3 FUN_146725ed3 body=47 status=ok
// SIG undefined FUN_146725ed3(void)

longlong FUN_146725ed3(void)

{
  if (DAT_14cc0ec40 == 0) {
    FUN_14000fc22(&DAT_14cc0ec40,&PTR_FUN_14bc709c0);
  }
  return DAT_14cc0ec40;
}



// FUNCTION 146725f02 FUN_146725f02 body=47 status=ok
// SIG undefined FUN_146725f02(void)

longlong FUN_146725f02(void)

{
  if (DAT_14cc0ec48 == 0) {
    FUN_14000fc22(&DAT_14cc0ec48,&PTR_FUN_14bc70a90);
  }
  return DAT_14cc0ec48;
}



// FUNCTION 146725f31 FUN_146725f31 body=47 status=ok
// SIG undefined FUN_146725f31(void)

longlong FUN_146725f31(void)

{
  if (DAT_14cc0ec50 == 0) {
    FUN_14000fc22(&DAT_14cc0ec50,&PTR_FUN_14bc70ba8);
  }
  return DAT_14cc0ec50;
}



// FUNCTION 146725f60 FUN_146725f60 body=47 status=ok
// SIG undefined FUN_146725f60(void)

longlong FUN_146725f60(void)

{
  if (DAT_14cc0ec58 == 0) {
    FUN_14000fc22(&DAT_14cc0ec58,&PTR_FUN_14bc70c80);
  }
  return DAT_14cc0ec58;
}



// FUNCTION 146725f8f FUN_146725f8f body=47 status=ok
// SIG undefined FUN_146725f8f(void)

longlong FUN_146725f8f(void)

{
  if (DAT_14cc0ec60 == 0) {
    FUN_14000fc22(&DAT_14cc0ec60,&PTR_FUN_14bc70d50);
  }
  return DAT_14cc0ec60;
}



// FUNCTION 146725fbe FUN_146725fbe body=47 status=ok
// SIG undefined FUN_146725fbe(void)

longlong FUN_146725fbe(void)

{
  if (DAT_14cc0ec68 == 0) {
    FUN_14000fc22(&DAT_14cc0ec68,&PTR_FUN_14bc70e68);
  }
  return DAT_14cc0ec68;
}



// FUNCTION 146725fed FUN_146725fed body=47 status=ok
// SIG undefined FUN_146725fed(void)

longlong FUN_146725fed(void)

{
  if (DAT_14cc0ec70 == 0) {
    FUN_14000fc22(&DAT_14cc0ec70,&PTR_FUN_14bc70f78);
  }
  return DAT_14cc0ec70;
}



// FUNCTION 14672601c FUN_14672601c body=47 status=ok
// SIG undefined FUN_14672601c(void)

longlong FUN_14672601c(void)

{
  if (DAT_14cc0ec78 == 0) {
    FUN_14000fc22(&DAT_14cc0ec78,&PTR_FUN_14bc71040);
  }
  return DAT_14cc0ec78;
}



// FUNCTION 14672604b FUN_14672604b body=47 status=ok
// SIG undefined FUN_14672604b(void)

longlong FUN_14672604b(void)

{
  if (DAT_14cc0ec80 == 0) {
    FUN_14000fc22(&DAT_14cc0ec80,&PTR_FUN_14bc711a0);
  }
  return DAT_14cc0ec80;
}



// FUNCTION 14672607a FUN_14672607a body=47 status=ok
// SIG undefined FUN_14672607a(void)

longlong FUN_14672607a(void)

{
  if (DAT_14cc0ec88 == 0) {
    FUN_14000fc22(&DAT_14cc0ec88,&PTR_FUN_14bc712b8);
  }
  return DAT_14cc0ec88;
}



// FUNCTION 1467260a9 FUN_1467260a9 body=47 status=ok
// SIG undefined FUN_1467260a9(void)

longlong FUN_1467260a9(void)

{
  if (DAT_14cc0ec90 == 0) {
    FUN_14000fc22(&DAT_14cc0ec90,&PTR_FUN_14bc713d8);
  }
  return DAT_14cc0ec90;
}



// FUNCTION 1467260d8 FUN_1467260d8 body=34 status=ok
// SIG undefined FUN_1467260d8(void)

void FUN_1467260d8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14599b4ea();
  FUN_14069c8d6(uVar1,&PTR_s_GetCustomAttenuationRadius_14bc71420,0xc);
  return;
}



// FUNCTION 146726102 FUN_146726102 body=49 status=ok
// SIG undefined FUN_146726102(void)

longlong FUN_146726102(void)

{
  if (DAT_14cc0ecd8 == 0) {
    FUN_14073dd9a(&DAT_14cc0ecd8,&PTR_LAB_14bc71e00);
  }
  return DAT_14cc0ecd8;
}


