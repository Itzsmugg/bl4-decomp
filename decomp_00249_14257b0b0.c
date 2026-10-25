// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14257b0b0 Unwind@14257b0b0 body=45 status=ok
// SIG undefined Unwind@14257b0b0(void)

void Unwind_14257b0b0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x290);
  return;
}



// FUNCTION 14257b0e0 FUN_14257b0e0 body=59 status=ok
// SIG undefined FUN_14257b0e0(void)

undefined4 FUN_14257b0e0(void)

{
  char cVar1;
  
  if (DAT_14c793828 != 2) {
    cVar1 = FUN_142501800(&DAT_14c793828);
    if (cVar1 != '\0') {
      FUN_14257af20();
      FUN_1425019c0(&DAT_14c793828);
    }
  }
  return DAT_14c709858;
}



// FUNCTION 14257b120 FUN_14257b120 body=8 status=ok
// SIG undefined FUN_14257b120(void)

undefined * FUN_14257b120(void)

{
  return &DAT_14c793824;
}



// FUNCTION 14257b130 FUN_14257b130 body=38 status=ok
// SIG undefined FUN_14257b130(void)

undefined8 FUN_14257b130(undefined8 param_1,int param_2)

{
  FUN_1424cbfc0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14257b160 FUN_14257b160 body=8 status=ok
// SIG undefined FUN_14257b160(void)

undefined * FUN_14257b160(void)

{
  return &DAT_14c793830;
}



// FUNCTION 14257b170 FUN_14257b170 body=32 status=ok
// SIG undefined FUN_14257b170(void)

undefined8 * FUN_14257b170(undefined8 *param_1)

{
  FUN_1426335d0();
  *param_1 = icu_64::CopticCalendar::vftable;
  return param_1;
}



// FUNCTION 14257b190 FUN_14257b190 body=76 status=ok
// SIG undefined FUN_14257b190(void)

undefined8 * FUN_14257b190(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x268);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142633670(puVar1,param_1);
    *puVar1 = icu_64::CopticCalendar::vftable;
  }
  return puVar1;
}



// FUNCTION 14257b1e0 Unwind@14257b1e0 body=32 status=ok
// SIG undefined Unwind@14257b1e0(void)

void Unwind_14257b1e0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14257b200 FUN_14257b200 body=8 status=ok
// SIG undefined FUN_14257b200(void)

char * FUN_14257b200(void)

{
  return "coptic";
}



// FUNCTION 14257b210 FUN_14257b210 body=110 status=ok
// SIG undefined FUN_14257b210(void)

int FUN_14257b210(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1424d15c0(param_1,0x13,1);
  if (iVar1 == 0x13) {
    iVar1 = 1;
    if (0 < *(int *)(param_1 + 0xcc)) {
      iVar1 = *(int *)(param_1 + 0x58);
    }
  }
  else if ((*(int *)(param_1 + 0x80) < 1) || (*(int *)(param_1 + 0xc) != 0)) {
    if (*(int *)(param_1 + 0x84) < 1) {
      iVar1 = 1;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x10);
    }
  }
  else {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x84)) {
      iVar1 = 1 - *(int *)(param_1 + 0x10);
    }
  }
  return iVar1;
}



// FUNCTION 14257b280 FUN_14257b280 body=198 status=ok
// SIG undefined FUN_14257b280(void)

void FUN_14257b280(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  int *local_38;
  int local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = (**(code **)(*param_1 + 0x188))();
  local_38 = &local_24;
  FUN_1426337a0(param_2,uVar2,&local_1c,&local_20);
  iVar1 = 1 - local_1c;
  if (0 < local_1c) {
    iVar1 = local_1c;
  }
  *(int *)(param_1 + 0xb) = local_1c;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7b) = 1;
  *(uint *)((longlong)param_1 + 0xc) = (uint)(0 < local_1c);
  param_1[0x10] = (longlong)&DAT_100000001;
  *(undefined2 *)(param_1 + 0xd) = 0x101;
  *(int *)(param_1 + 2) = iVar1;
  *(int *)((longlong)param_1 + 0x14) = local_20;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6a) = 1;
  *(int *)(param_1 + 4) = local_24;
  *(undefined1 **)((longlong)param_1 + 0x94) = &DAT_100000001;
  *(undefined2 *)((longlong)param_1 + 0x6d) = 0x101;
  *(int *)((longlong)param_1 + 0x24) = local_20 * 0x1e + local_24;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14257b350 FUN_14257b350 body=61 status=ok
// SIG undefined FUN_14257b350(void)

undefined8 FUN_14257b350(void)

{
  char cVar1;
  
  if (DAT_14c793834 != 2) {
    cVar1 = FUN_142501800(&DAT_14c793834);
    if (cVar1 != '\0') {
      FUN_14257b390();
      FUN_1425019c0(&DAT_14c793834);
    }
  }
  return DAT_14c709890;
}



// FUNCTION 14257b390 FUN_14257b390 body=248 status=ok
// SIG undefined FUN_14257b390(void)

void FUN_14257b390(void)

{
  undefined4 uVar1;
  undefined **local_368 [77];
  undefined1 local_100 [228];
  int local_1c [3];
  
  local_1c[1] = -2;
  local_1c[2] = -1;
  local_1c[0] = 0;
  FUN_1412ae150(local_100,"@calendar=coptic",0,0,0);
  FUN_1426335d0(local_368,local_100,local_1c);
  local_368[0] = icu_64::CopticCalendar::vftable;
  FUN_1414b3f60(local_100);
  if (local_1c[0] < 1) {
    uVar1 = thunk_FUN_1424d9690();
    FUN_1424ccf20(local_368,uVar1,local_1c);
    FUN_1424cf870(local_368,1,&DAT_ffffffb0,local_1c);
    DAT_14c709890 = FUN_1424cd180(local_368,local_1c);
    DAT_14c709898 = FUN_1424cd2e0(local_368,1,local_1c);
  }
  thunk_FUN_1424cbfc0(local_368);
  return;
}



// FUNCTION 14257b490 Unwind@14257b490 body=35 status=ok
// SIG undefined Unwind@14257b490(void)

void Unwind_14257b490(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424cbfc0(param_2 + 0x30);
  return;
}



// FUNCTION 14257b4c0 Unwind@14257b4c0 body=38 status=ok
// SIG undefined Unwind@14257b4c0(void)

void Unwind_14257b4c0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x298);
  return;
}



// FUNCTION 14257b4f0 FUN_14257b4f0 body=59 status=ok
// SIG undefined FUN_14257b4f0(void)

undefined4 FUN_14257b4f0(void)

{
  char cVar1;
  
  if (DAT_14c793834 != 2) {
    cVar1 = FUN_142501800(&DAT_14c793834);
    if (cVar1 != '\0') {
      FUN_14257b390();
      FUN_1425019c0(&DAT_14c793834);
    }
  }
  return DAT_14c709898;
}



// FUNCTION 14257b530 FUN_14257b530 body=6 status=ok
// SIG undefined FUN_14257b530(void)

undefined8 FUN_14257b530(void)

{
  return 0x1bd799;
}



// FUNCTION 14257b540 FUN_14257b540 body=38 status=ok
// SIG undefined FUN_14257b540(void)

undefined8 FUN_14257b540(undefined8 param_1,int param_2)

{
  thunk_FUN_1424cbfc0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14257b570 FUN_14257b570 body=8 status=ok
// SIG undefined FUN_14257b570(void)

undefined * FUN_14257b570(void)

{
  return &DAT_14c79383c;
}



// FUNCTION 14257b580 FUN_14257b580 body=43 status=ok
// SIG undefined FUN_14257b580(void)

undefined8 *
FUN_14257b580(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_1426335d0();
  *param_1 = icu_64::EthiopicCalendar::vftable;
  *(undefined4 *)(param_1 + 0x4d) = param_4;
  return param_1;
}



// FUNCTION 14257b5b0 FUN_14257b5b0 body=85 status=ok
// SIG undefined FUN_14257b5b0(void)

void FUN_14257b5b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x270);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142633670(puVar1,param_1);
    *puVar1 = icu_64::EthiopicCalendar::vftable;
    *(undefined4 *)(puVar1 + 0x4d) = *(undefined4 *)(param_1 + 0x268);
  }
  return;
}



// FUNCTION 14257b610 Unwind@14257b610 body=32 status=ok
// SIG undefined Unwind@14257b610(void)

void Unwind_14257b610(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14257b630 FUN_14257b630 body=26 status=ok
// SIG undefined FUN_14257b630(void)

char * FUN_14257b630(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "ethiopic";
  if (*(int *)(param_1 + 0x268) == 1) {
    pcVar1 = "ethiopic-amete-alem";
  }
  return pcVar1;
}



// FUNCTION 14257b650 FUN_14257b650 body=147 status=ok
// SIG undefined FUN_14257b650(void)

int FUN_14257b650(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1424d15c0(param_1,0x13,1);
  if (iVar1 == 0x13) {
    iVar1 = 1;
    if (0 < *(int *)(param_1 + 0xcc)) {
      iVar1 = *(int *)(param_1 + 0x58);
    }
  }
  else if (*(int *)(param_1 + 0x268) == 1) {
    iVar1 = 1;
    if (0 < *(int *)(param_1 + 0x84)) {
      iVar1 = *(int *)(param_1 + 0x10) + -0x157c;
    }
  }
  else if ((*(int *)(param_1 + 0x80) < 1) || (*(int *)(param_1 + 0xc) == 1)) {
    if (*(int *)(param_1 + 0x84) < 1) {
      iVar1 = 1;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x10);
    }
  }
  else {
    iVar1 = -0x157b;
    if (0 < *(int *)(param_1 + 0x84)) {
      iVar1 = *(int *)(param_1 + 0x10) + -0x157c;
    }
  }
  return iVar1;
}



// FUNCTION 14257b6f0 FUN_14257b6f0 body=210 status=ok
// SIG undefined FUN_14257b6f0(void)

void FUN_14257b6f0(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_58 [32];
  int *local_38;
  int local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = (**(code **)(*param_1 + 0x188))();
  local_38 = &local_24;
  FUN_1426337a0(param_2,uVar1,&local_1c,&local_20);
  iVar2 = local_1c + 0x157c;
  if ((int)param_1[0x4d] == 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)(0 < local_1c);
    if (0 < local_1c) {
      iVar2 = local_1c;
    }
  }
  *(int *)(param_1 + 0xb) = local_1c;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7b) = 1;
  *(uint *)((longlong)param_1 + 0xc) = uVar3;
  param_1[0x10] = (longlong)&DAT_100000001;
  *(undefined2 *)(param_1 + 0xd) = 0x101;
  *(int *)(param_1 + 2) = iVar2;
  *(int *)((longlong)param_1 + 0x14) = local_20;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6a) = 1;
  *(int *)(param_1 + 4) = local_24;
  *(undefined1 **)((longlong)param_1 + 0x94) = &DAT_100000001;
  *(undefined2 *)((longlong)param_1 + 0x6d) = 0x101;
  *(int *)((longlong)param_1 + 0x24) = local_20 * 0x1e + local_24;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14257b7d0 FUN_14257b7d0 body=24 status=ok
// SIG undefined FUN_14257b7d0(void)

undefined4 FUN_14257b7d0(longlong param_1,int param_2,int param_3)

{
  if ((param_2 == 0) && (*(int *)(param_1 + 0x268) == 1)) {
    return 0;
  }
  return *(undefined4 *)(&DAT_149c50510 + (longlong)param_3 * 4 + (longlong)param_2 * 0x10);
}



// FUNCTION 14257b7f0 FUN_14257b7f0 body=61 status=ok
// SIG undefined FUN_14257b7f0(void)

undefined8 FUN_14257b7f0(void)

{
  char cVar1;
  
  if (DAT_14c793840 != 2) {
    cVar1 = FUN_142501800(&DAT_14c793840);
    if (cVar1 != '\0') {
      FUN_14257b830();
      FUN_1425019c0(&DAT_14c793840);
    }
  }
  return DAT_14c7098f8;
}



// FUNCTION 14257b830 FUN_14257b830 body=273 status=ok
// SIG undefined FUN_14257b830(void)

void FUN_14257b830(void)

{
  undefined4 uVar1;
  undefined1 local_370 [224];
  undefined **local_290 [77];
  undefined4 local_28;
  int local_1c [3];
  
  local_1c[1] = -2;
  local_1c[2] = -1;
  local_1c[0] = 0;
  FUN_1412ae150(local_370,"@calendar=ethiopic",0,0,0);
  FUN_1426335d0(local_290,local_370,local_1c);
  local_290[0] = icu_64::EthiopicCalendar::vftable;
  local_28 = 0;
  FUN_1414b3f60(local_370);
  if (local_1c[0] < 1) {
    uVar1 = thunk_FUN_1424d9690();
    FUN_1424ccf20(local_290,uVar1,local_1c);
    FUN_1424cf870(local_290,1,&DAT_ffffffb0,local_1c);
    DAT_14c7098f8 = FUN_1424cd180(local_290,local_1c);
    DAT_14c709900 = FUN_1424cd2e0(local_290,1,local_1c);
  }
  thunk_FUN_1424cbfc0(local_290);
  return;
}



// FUNCTION 14257b950 Unwind@14257b950 body=38 status=ok
// SIG undefined Unwind@14257b950(void)

void Unwind_14257b950(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424cbfc0(param_2 + 0x108);
  return;
}



// FUNCTION 14257b980 Unwind@14257b980 body=35 status=ok
// SIG undefined Unwind@14257b980(void)

void Unwind_14257b980(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 14257b9b0 FUN_14257b9b0 body=80 status=ok
// SIG undefined FUN_14257b9b0(void)

int FUN_14257b9b0(longlong param_1)

{
  int iVar1;
  char cVar2;
  
  if (DAT_14c793840 != 2) {
    cVar2 = FUN_142501800(&DAT_14c793840);
    if (cVar2 != '\0') {
      FUN_14257b830();
      FUN_1425019c0(&DAT_14c793840);
    }
  }
  iVar1 = DAT_14c709900 + 0x157c;
  if (*(int *)(param_1 + 0x268) != 1) {
    iVar1 = DAT_14c709900;
  }
  return iVar1;
}



// FUNCTION 14257ba00 FUN_14257ba00 body=6 status=ok
// SIG undefined FUN_14257ba00(void)

undefined8 FUN_14257ba00(void)

{
  return 0x1a4dd0;
}



// FUNCTION 14257ba10 FUN_14257ba10 body=38 status=ok
// SIG undefined FUN_14257ba10(void)

undefined8 FUN_14257ba10(undefined8 param_1,int param_2)

{
  thunk_FUN_1424cbfc0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14257ba40 FUN_14257ba40 body=74 status=ok
// SIG undefined FUN_14257ba40(void)

undefined8 * FUN_14257ba40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = icu_64::DangiCalendar::vftable;
  uVar1 = FUN_14257ba90();
  FUN_142578a70(param_1,param_2,0xfffff6e4,uVar1,param_3);
  *param_1 = icu_64::DangiCalendar::vftable;
  return param_1;
}



// FUNCTION 14257ba90 FUN_14257ba90 body=721 status=ok
// SIG undefined FUN_14257ba90(void)

undefined8 * FUN_14257ba90(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [64];
  longlong local_50;
  int local_44;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (DAT_14c793854 != 2) {
    cVar1 = FUN_142501800(&DAT_14c793854);
    if (cVar1 != '\0') {
      local_a8 = 0xc280c00c2c600000;
      local_a0 = 0xc280854ea3000000;
      local_98 = 0xc27a9de23f800000;
      local_50 = thunk_FUN_1424da030(0x50);
      if (local_50 != 0) {
        FUN_1424a7060(local_90,1,L"GMT+8",0xffffffff);
        FUN_1425da4c0(local_50,local_90,28800000,0);
        FUN_140859a90(local_90);
      }
      puVar2 = (undefined8 *)thunk_FUN_1424da030(0x160);
      if (puVar2 != (undefined8 *)0x0) {
        local_40 = puVar2;
        FUN_1424a7060(local_90,1,L"Korean 1897",0xffffffff);
        FUN_1425dafe0(local_40,local_90,25200000,0,&local_a8,1,1);
        FUN_140859a90(local_90);
        puVar2 = local_40;
      }
      puVar3 = (undefined8 *)thunk_FUN_1424da030(0x160);
      if (puVar3 != (undefined8 *)0x0) {
        local_40 = puVar3;
        FUN_1424a7060(local_90,1,L"Korean 1898-1911",0xffffffff);
        FUN_1425dafe0(local_40,local_90,28800000,0,&local_a0,1,1);
        FUN_140859a90(local_90);
        puVar3 = local_40;
      }
      puVar4 = (undefined8 *)thunk_FUN_1424da030(0x160);
      if (puVar4 != (undefined8 *)0x0) {
        local_40 = puVar4;
        FUN_1424a7060(local_90,1,L"Korean 1912-",0xffffffff);
        FUN_1425dafe0(local_40,local_90,32400000,0,&local_98,1,1);
        FUN_140859a90(local_90);
        puVar4 = local_40;
      }
      local_44 = 0;
      puVar5 = (undefined8 *)thunk_FUN_1424da030(0x70);
      if (puVar5 != (undefined8 *)0x0) {
        local_40 = puVar5;
        FUN_1424a7060(local_90,1,L"KOREA_ZONE",0xffffffff);
        FUN_1426338a0(local_40,local_90,local_50);
        FUN_140859a90(local_90);
        puVar5 = local_40;
      }
      FUN_1426346a0(puVar5,puVar2,&local_44);
      FUN_1426346a0(puVar5,puVar3,&local_44);
      FUN_1426346a0(puVar5,puVar4,&local_44);
      FUN_142633ae0(puVar5,&local_44);
      if (0 < local_44) {
        (**(code **)*puVar5)(puVar5,1);
        puVar5 = (undefined8 *)0x0;
      }
      DAT_14c793848 = puVar5;
      FUN_14251f960(0xb,FUN_14257c010);
      FUN_1425019c0(&DAT_14c793854);
    }
  }
  return DAT_14c793848;
}



// FUNCTION 14257bd70 Unwind@14257bd70 body=47 status=ok
// SIG undefined Unwind@14257bd70(void)

void Unwind_14257bd70(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x58);
  return;
}



// FUNCTION 14257bda0 Unwind@14257bda0 body=47 status=ok
// SIG undefined Unwind@14257bda0(void)

void Unwind_14257bda0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x98));
  return;
}



// FUNCTION 14257bdd0 Unwind@14257bdd0 body=47 status=ok
// SIG undefined Unwind@14257bdd0(void)

void Unwind_14257bdd0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x58);
  return;
}



// FUNCTION 14257be00 Unwind@14257be00 body=47 status=ok
// SIG undefined Unwind@14257be00(void)

void Unwind_14257be00(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



// FUNCTION 14257be30 Unwind@14257be30 body=47 status=ok
// SIG undefined Unwind@14257be30(void)

void Unwind_14257be30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x58);
  return;
}



// FUNCTION 14257be60 Unwind@14257be60 body=47 status=ok
// SIG undefined Unwind@14257be60(void)

void Unwind_14257be60(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



// FUNCTION 14257be90 Unwind@14257be90 body=47 status=ok
// SIG undefined Unwind@14257be90(void)

void Unwind_14257be90(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x58);
  return;
}



// FUNCTION 14257bec0 Unwind@14257bec0 body=47 status=ok
// SIG undefined Unwind@14257bec0(void)

void Unwind_14257bec0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



// FUNCTION 14257bef0 Unwind@14257bef0 body=47 status=ok
// SIG undefined Unwind@14257bef0(void)

void Unwind_14257bef0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x58);
  return;
}



// FUNCTION 14257bf20 Unwind@14257bf20 body=47 status=ok
// SIG undefined Unwind@14257bf20(void)

void Unwind_14257bf20(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xa8));
  return;
}



// FUNCTION 14257bf50 FUN_14257bf50 body=76 status=ok
// SIG undefined FUN_14257bf50(void)

undefined8 * FUN_14257bf50(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x278);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142578860(puVar1,param_1);
    *puVar1 = icu_64::DangiCalendar::vftable;
  }
  return puVar1;
}



// FUNCTION 14257bfa0 Unwind@14257bfa0 body=32 status=ok
// SIG undefined Unwind@14257bfa0(void)

void Unwind_14257bfa0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14257bfc0 FUN_14257bfc0 body=8 status=ok
// SIG undefined FUN_14257bfc0(void)

char * FUN_14257bfc0(void)

{
  return "dangi";
}



// FUNCTION 14257bfd0 FUN_14257bfd0 body=8 status=ok
// SIG undefined FUN_14257bfd0(void)

undefined * FUN_14257bfd0(void)

{
  return &DAT_14c793850;
}



// FUNCTION 14257bfe0 FUN_14257bfe0 body=38 status=ok
// SIG undefined FUN_14257bfe0(void)

undefined8 FUN_14257bfe0(undefined8 param_1,int param_2)

{
  thunk_FUN_1424cbfc0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14257c010 FUN_14257c010 body=52 status=ok
// SIG undefined FUN_14257c010(void)

undefined8 FUN_14257c010(void)

{
  undefined4 uVar1;
  
  if (DAT_14c793848 != (undefined8 *)0x0) {
    (**(code **)*DAT_14c793848)(DAT_14c793848,1);
    DAT_14c793848 = (undefined8 *)0x0;
  }
  uVar1 = DAT_14c793854;
  LOCK();
  DAT_14c793854 = 0;
  UNLOCK();
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 14257c050 thunk_FUN_1424d9690 body=5 status=ok
// SIG undefined thunk_FUN_1424d9690(void)

void thunk_FUN_1424d9690(void)

{
  undefined1 auStack_48 [32];
  _FILETIME _Stack_28;
  ulonglong uStack_20;
  
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  GetSystemTimeAsFileTime(&_Stack_28);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_20 ^ (ulonglong)auStack_48,((longlong)_Stack_28 + -0x19db1ded53e8000) / 10000
               );
}



// FUNCTION 14257c060 FUN_14257c060 body=8 status=ok
// SIG undefined FUN_14257c060(void)

undefined * FUN_14257c060(void)

{
  return &DAT_14c79385c;
}



// FUNCTION 14257c070 FUN_14257c070 body=85 status=ok
// SIG undefined FUN_14257c070(void)

undefined8 *
FUN_14257c070(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  undefined8 uVar1;
  
  *param_1 = icu_64::TimeZoneTransition::vftable;
  param_1[1] = param_2;
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3);
  param_1[2] = uVar1;
  uVar1 = (**(code **)(*param_4 + 0x10))(param_4);
  param_1[3] = uVar1;
  return param_1;
}



// FUNCTION 14257c0d0 Unwind@14257c0d0 body=32 status=ok
// SIG undefined Unwind@14257c0d0(void)

void Unwind_14257c0d0(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 14257c0f0 FUN_14257c0f0 body=29 status=ok
// SIG undefined FUN_14257c0f0(void)

void FUN_14257c0f0(undefined8 *param_1)

{
  *param_1 = icu_64::TimeZoneTransition::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 14257c110 FUN_14257c110 body=69 status=ok
// SIG undefined FUN_14257c110(void)

void FUN_14257c110(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::TimeZoneTransition::vftable;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 14257c160 FUN_14257c160 body=111 status=ok
// SIG undefined FUN_14257c160(void)

longlong FUN_14257c160(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    plVar1 = *(longlong **)(param_2 + 0x10);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    plVar1 = *(longlong **)(param_2 + 0x18);
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  return param_1;
}



// FUNCTION 14257c1d0 FUN_14257c1d0 body=51 status=ok
// SIG undefined FUN_14257c1d0(void)

void FUN_14257c1d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}



// FUNCTION 14257c210 FUN_14257c210 body=51 status=ok
// SIG undefined FUN_14257c210(void)

void FUN_14257c210(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  return;
}



// FUNCTION 14257c250 FUN_14257c250 body=6 status=ok
// SIG undefined FUN_14257c250(void)

void FUN_14257c250(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 14257c260 FUN_14257c260 body=42 status=ok
// SIG undefined FUN_14257c260(void)

void FUN_14257c260(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 14257c290 FUN_14257c290 body=42 status=ok
// SIG undefined FUN_14257c290(void)

void FUN_14257c290(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 14257c2c0 FUN_14257c2c0 body=6 status=ok
// SIG undefined FUN_14257c2c0(void)

undefined8 FUN_14257c2c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 14257c2d0 FUN_14257c2d0 body=5 status=ok
// SIG undefined FUN_14257c2d0(void)

undefined8 FUN_14257c2d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 14257c2e0 FUN_14257c2e0 body=5 status=ok
// SIG undefined FUN_14257c2e0(void)

undefined8 FUN_14257c2e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 14257c2f0 FUN_14257c2f0 body=89 status=ok
// SIG undefined FUN_14257c2f0(void)

undefined8 * FUN_14257c2f0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::TimeZoneTransition::vftable;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14257c350 FUN_14257c350 body=1 status=ok
// SIG undefined FUN_14257c350(void)

void FUN_14257c350(void)

{
  return;
}



// FUNCTION 14257c360 FUN_14257c360 body=1 status=ok
// SIG undefined FUN_14257c360(void)

void FUN_14257c360(void)

{
  return;
}



// FUNCTION 14257c370 FUN_14257c370 body=42 status=ok
// SIG undefined FUN_14257c370(void)

void FUN_14257c370(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  *param_1 = icu_64::CheckedArrayByteSink::vftable;
  param_1[1] = param_2;
  iVar1 = 0;
  if (0 < param_3) {
    iVar1 = param_3;
  }
  *(int *)(param_1 + 2) = iVar1;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 14257c3a0 FUN_14257c3a0 body=16 status=ok
// SIG undefined FUN_14257c3a0(void)

longlong FUN_14257c3a0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 14257c3b0 FUN_14257c3b0 body=112 status=ok
// SIG undefined FUN_14257c3b0(void)

void FUN_14257c3b0(longlong param_1,void *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  
  if (0 < (int)param_3) {
    if ((*(uint *)(param_1 + 0x18) ^ 0x7fffffff) < param_3) {
      *(undefined4 *)(param_1 + 0x18) = 0x7fffffff;
      *(undefined1 *)(param_1 + 0x1c) = 1;
    }
    else {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) + param_3;
      iVar1 = *(int *)(param_1 + 0x14);
      uVar2 = *(int *)(param_1 + 0x10) - iVar1;
      if (((int)param_3 <= (int)uVar2) ||
         (*(undefined1 *)(param_1 + 0x1c) = 1, param_3 = uVar2, 0 < (int)uVar2)) {
        uVar2 = param_3;
        _Dst = (void *)((longlong)iVar1 + *(longlong *)(param_1 + 8));
        if (_Dst != param_2) {
          memcpy(_Dst,param_2,(ulonglong)uVar2);
          iVar1 = *(int *)(param_1 + 0x14);
        }
      }
      *(uint *)(param_1 + 0x14) = iVar1 + uVar2;
    }
  }
  return;
}



// FUNCTION 14257c420 FUN_14257c420 body=61 status=ok
// SIG undefined FUN_14257c420(void)

longlong FUN_14257c420(longlong param_1,int param_2,undefined8 param_3,longlong param_4,int param_5,
                      int *param_6)

{
  int iVar1;
  
  if (0 < param_2) {
    if (param_2 <= param_5) {
      iVar1 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14);
      if (iVar1 < param_2) {
        *param_6 = param_5;
        return param_4;
      }
      *param_6 = iVar1;
      return (longlong)*(int *)(param_1 + 0x14) + *(longlong *)(param_1 + 8);
    }
  }
  *param_6 = 0;
  return 0;
}



// FUNCTION 14257c460 FUN_14257c460 body=29 status=ok
// SIG undefined FUN_14257c460(void)

undefined8 FUN_14257c460(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14257c480 FUN_14257c480 body=28 status=ok
// SIG undefined FUN_14257c480(void)

byte FUN_14257c480(uint param_1)

{
  if (param_1 < 0xbd) {
    return (&DAT_1499f3373)[(ulonglong)param_1 * 4] & 1;
  }
  return 0;
}



// FUNCTION 14257c4a0 FUN_14257c4a0 body=1414 status=ok
// SIG undefined FUN_14257c4a0(void)

void FUN_14257c4a0(int param_1,uint param_2,longlong *param_3,longlong param_4,int param_5,
                  longlong param_6,uint param_7,longlong param_8,int *param_9)

{
  ushort uVar1;
  short sVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  uint local_b8;
  longlong local_b0;
  longlong local_a8;
  int *local_a0;
  ulonglong local_98;
  longlong *local_90;
  longlong local_88;
  int local_7c;
  longlong local_78;
  longlong local_70;
  longlong local_68 [2];
  undefined4 uStack_58;
  uint uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (0 < *param_9) goto LAB_14257ca1d;
  if ((~param_2 & 0x600) == 0) {
    *param_9 = 1;
    goto LAB_14257ca1d;
  }
  local_68[1] = 0;
  local_50 = 0;
  local_68[0] = param_6;
  _uStack_58 = (ulonglong)param_7;
  if (0 < (int)param_7) {
    lVar9 = 9;
    local_98 = 0;
    uVar14 = 0;
    local_90 = param_3;
    local_88 = param_4;
    local_7c = param_1;
LAB_14257c57f:
    uVar5 = (**(code **)(*param_3 + lVar9 * 8))(param_3);
    uVar11 = uVar5;
    if ((int)param_7 < (int)uVar5) {
      uVar11 = param_7;
    }
    if (uVar5 == 0xffffffff) {
      uVar11 = param_7;
    }
    uVar3 = local_98;
    if ((int)uVar14 < (int)uVar11) {
      uVar5 = uVar14 + 1;
      uVar1 = *(ushort *)(param_6 + (longlong)(int)uVar14 * 2);
      uVar12 = (uint)uVar1;
      if ((((uVar12 & 0xfc00) == 0xd800) && (uVar5 != uVar11)) &&
         (uVar10 = (uint)*(ushort *)(param_6 + (longlong)(int)uVar5 * 2),
         (uVar10 & 0xfc00) == 0xdc00)) {
        uVar5 = uVar14 + 2;
        uVar12 = (uint)uVar1 * 0x400 + uVar10 + 0xfca02400;
      }
      uVar10 = uVar14;
      if ((param_2 & 0x200) == 0) {
        local_78 = param_6 + (longlong)(int)uVar14 * 2;
LAB_14257c610:
        uVar15 = uVar5;
        uVar5 = uVar15;
        if ((param_2 & 0x400) == 0) {
          bVar4 = FUN_1424d86a0(uVar12);
          if ((0xf020e2eU >> (bVar4 & 0x1f) & 1) != 0) goto LAB_14257c6ae;
          if (bVar4 == 4) goto LAB_14257c636;
        }
        else {
LAB_14257c636:
          iVar6 = FUN_1424d6cf0(uVar12);
          if (iVar6 != 0) goto LAB_14257c6ae;
        }
        uVar10 = uVar11;
        uVar5 = uVar11;
        if (uVar15 == uVar11) goto LAB_14257c6ae;
        uVar5 = uVar15 + 1;
        uVar12 = (uint)*(ushort *)(param_6 + (longlong)(int)uVar15 * 2);
        uVar10 = uVar15;
        if ((((uVar12 & 0xfc00) == 0xd800) && (uVar5 != uVar11)) &&
           (uVar7 = (uint)*(ushort *)(param_6 + (longlong)(int)uVar5 * 2),
           (uVar7 & 0xfc00) == 0xdc00)) {
          uVar12 = uVar12 * 0x400 + uVar7 + 0xfca02400;
          uVar5 = uVar15 + 2;
        }
        goto LAB_14257c610;
      }
      goto LAB_14257c72e;
    }
    goto LAB_14257c572;
  }
  if (-1 < param_5) goto LAB_14257c9e5;
  goto LAB_14257c9d2;
LAB_14257c6ae:
  uVar15 = uVar10 - uVar14;
  if (uVar15 != 0 && (int)uVar14 <= (int)uVar10) {
    if (uVar15 == 0 || (int)uVar10 < (int)uVar14) {
LAB_14257c715:
      uVar14 = (uint)local_98;
    }
    else {
      if (param_8 != 0) {
        FUN_1425b00d0(param_8,uVar15);
      }
      if ((param_2 & 0x4000) != 0) goto LAB_14257c715;
      uVar7 = (uint)local_98;
      if ((uVar7 ^ 0x7fffffff) < uVar15) goto LAB_14257ca0d;
      uVar14 = uVar15 + uVar7;
      if ((int)uVar14 <= param_5) {
        FUN_142504850(local_88 + (longlong)(int)uVar7 * 2,local_78,uVar15);
      }
    }
    local_98 = (ulonglong)uVar14;
    if ((int)uVar14 < 0) {
LAB_14257ca0d:
      *param_9 = 8;
      goto LAB_14257ca1d;
    }
  }
LAB_14257c72e:
  iVar6 = local_7c;
  param_3 = local_90;
  uVar3 = local_98;
  if (uVar5 - uVar10 == 0 || (int)uVar5 < (int)uVar10) goto LAB_14257c572;
  _uStack_58 = CONCAT44(uVar10,uStack_58);
  local_50 = CONCAT44(local_50._4_4_,uVar5);
  local_c8 = CONCAT44(local_c8._4_4_,local_7c);
  uVar8 = FUN_1424d7d00(uVar12,&LAB_14257ca50,local_68,&local_70);
  local_b0 = param_8;
  local_c0 = (longlong *)CONCAT44(local_c0._4_4_,uVar5 - uVar10);
  local_c8 = local_70;
  local_b8 = param_2;
  uVar14 = FUN_14257cb60(local_88,local_98,param_5,uVar8);
  if ((int)uVar14 < 0) goto LAB_14257c9f1;
  uVar13 = (ulonglong)uVar14;
  if (((iVar6 == 5) && ((int)(uVar10 + 1) < (int)uVar11)) &&
     ((*(ushort *)(param_6 + (longlong)(int)uVar10 * 2) | 0x20) == 0x69)) {
    sVar2 = *(short *)(param_6 + (longlong)(int)(uVar10 + 1) * 2);
    if (sVar2 == 0x4a) {
      if (param_8 != 0) {
        FUN_1425b00d0(param_8,1);
      }
      if ((param_2 & 0x4000) == 0) {
        if (uVar14 == 0x7fffffff) goto LAB_14257c9f1;
        if ((int)uVar14 < param_5) {
          FUN_142504850(local_88 + (ulonglong)uVar14 * 2,param_6 + (longlong)(int)uVar10 * 2 + 2,1);
        }
        uVar13 = (ulonglong)(uVar14 + 1);
      }
    }
    else {
      if (sVar2 != 0x6a) goto LAB_14257c8a5;
      if ((int)uVar14 < param_5) {
        *(undefined2 *)(local_88 + (ulonglong)uVar14 * 2) = 0x4a;
      }
      else if (uVar14 == 0x7fffffff) goto LAB_14257c9f1;
      if (param_8 != 0) {
        FUN_1425b02e0(param_8,1,1);
      }
      uVar13 = (ulonglong)(uVar14 + 1);
    }
    uVar5 = uVar5 + 1;
  }
LAB_14257c8a5:
  param_3 = local_90;
  uVar3 = uVar13;
  if ((int)uVar5 < (int)uVar11) {
    uVar14 = (uint)uVar13;
    if ((param_2 & 0x100) == 0) {
      local_a0 = param_9;
      local_a8 = param_8;
      local_b0 = CONCAT44(local_b0._4_4_,uVar11);
      local_c0 = local_68;
      local_c8 = param_6;
      local_b8 = uVar5;
      iVar6 = FUN_14257cd60(local_7c,param_2,local_88 + uVar13 * 2,param_5 - uVar14);
      local_98 = (ulonglong)(iVar6 + uVar14);
      param_3 = local_90;
      uVar3 = local_98;
      if (*param_9 == 0xf) {
        *param_9 = 0;
      }
      else if (0 < *param_9) goto LAB_14257ca1d;
    }
    else {
      uVar12 = uVar11 - uVar5;
      if (uVar12 != 0 && (int)uVar5 <= (int)uVar11) {
        if (param_8 != 0) {
          FUN_1425b00d0(param_8,uVar12);
        }
        param_3 = local_90;
        if ((param_2 & 0x4000) == 0) {
          if ((uVar14 ^ 0x7fffffff) < uVar12) {
LAB_14257c9f1:
            *param_9 = 8;
            local_98 = 0;
            goto LAB_14257ca1d;
          }
          local_98 = (ulonglong)(uVar12 + uVar14);
          uVar3 = local_98;
          if ((int)(uVar12 + uVar14) <= param_5) {
            FUN_142504850(local_88 + uVar13 * 2,param_6 + (longlong)(int)uVar5 * 2,uVar12);
            param_3 = local_90;
            uVar3 = local_98;
          }
        }
      }
    }
  }
LAB_14257c572:
  local_98 = uVar3;
  lVar9 = 0xd;
  uVar14 = uVar11;
  if ((int)param_7 <= (int)uVar11) goto LAB_14257c9af;
  goto LAB_14257c57f;
LAB_14257c9af:
  if (0 < *param_9) goto LAB_14257ca1d;
  if ((int)local_98 <= param_5) {
LAB_14257c9e5:
    if (param_8 != 0) {
      FUN_1425b06f0();
    }
    goto LAB_14257ca1d;
  }
LAB_14257c9d2:
  *param_9 = 0xf;
LAB_14257ca1d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14257cb60 FUN_14257cb60 body=507 status=ok
// SIG undefined FUN_14257cb60(void)

ulonglong FUN_14257cb60(longlong param_1,uint param_2,int param_3,uint param_4,undefined2 *param_5,
                       uint param_6,uint param_7,longlong param_8)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ushort uVar14;
  uint uVar15;
  
  if ((int)param_4 < 0) {
    if (param_8 != 0) {
      FUN_1425b00d0(param_8,param_6);
    }
    if ((param_7 & 0x4000) != 0) {
      return (ulonglong)param_2;
    }
    uVar15 = ~param_4;
    if ((param_3 <= (int)param_2) || (param_4 < 0xffff0000)) {
      uVar10 = (ulonglong)param_6;
      goto LAB_14257cc26;
    }
LAB_14257cc51:
    uVar14 = (ushort)uVar15;
    uVar7 = param_2 + 1;
    uVar8 = param_2;
  }
  else {
    uVar15 = 0xffffffff;
    uVar7 = param_4;
    if (0x1f < param_4) {
      if (((int)param_2 < param_3) && (param_4 < 0x10000)) {
        *(short *)(param_1 + (longlong)(int)param_2 * 2) = (short)param_4;
        if (param_8 == 0) {
          return (ulonglong)(param_2 + 1);
        }
        FUN_1425b02e0(param_8,param_6,1);
        return (ulonglong)(param_2 + 1);
      }
      uVar7 = 2 - (param_4 < 0x10000);
      uVar15 = param_4;
    }
    uVar10 = (ulonglong)uVar7;
    if (param_8 != 0) {
      FUN_1425b02e0(param_8,param_6,uVar10);
    }
LAB_14257cc26:
    uVar7 = (uint)uVar10;
    if ((int)(param_2 ^ 0x7fffffff) < (int)uVar7) {
      return 0xffffffff;
    }
    if (param_3 <= (int)param_2) {
LAB_14257ccf6:
      uVar7 = uVar7 + param_2;
      goto LAB_14257ccfa;
    }
    if ((int)uVar15 < 0) {
      if (param_3 < (int)(uVar7 + param_2)) {
        return (ulonglong)(uVar7 + param_2);
      }
      if ((int)uVar7 < 1) {
        return (ulonglong)param_2;
      }
      uVar12 = (ulonglong)(int)param_2;
      if ((0xf < uVar7) && (0x1f < (param_1 + uVar12 * 2) - (longlong)param_5)) {
        uVar11 = (ulonglong)(uVar7 & 0xfffffff0);
        uVar1 = uVar11 + uVar12;
        uVar7 = uVar7 - (uVar7 & 0xfffffff0);
        lVar13 = uVar12 * 2 + param_1;
        lVar9 = 0;
        do {
          uVar4 = ((undefined8 *)((longlong)param_5 + lVar9))[1];
          puVar2 = (undefined8 *)((longlong)param_5 + lVar9 + 0x10);
          uVar5 = *puVar2;
          uVar6 = puVar2[1];
          puVar2 = (undefined8 *)(lVar13 + lVar9);
          *puVar2 = *(undefined8 *)((longlong)param_5 + lVar9);
          puVar2[1] = uVar4;
          puVar2 = (undefined8 *)(lVar13 + 0x10 + lVar9);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          lVar9 = lVar9 + 0x20;
        } while ((uVar10 >> 4) << 5 != lVar9);
        uVar12 = uVar1;
        param_5 = param_5 + uVar11;
        if (uVar11 == uVar10) {
          return uVar1;
        }
      }
      uVar7 = uVar7 + 1;
      do {
        uVar3 = *param_5;
        param_5 = param_5 + 1;
        *(undefined2 *)(param_1 + uVar12 * 2) = uVar3;
        uVar12 = uVar12 + 1;
        uVar7 = uVar7 - 1;
      } while (1 < uVar7);
      return uVar12;
    }
    if (uVar15 < 0x10000) goto LAB_14257cc51;
    if ((0x10ffff < uVar15) || (uVar8 = param_2 + 1, param_3 <= (int)uVar8)) goto LAB_14257ccf6;
    *(short *)(param_1 + (longlong)(int)param_2 * 2) = (short)(uVar15 >> 10) + -0x2840;
    uVar14 = (ushort)uVar15 & 0x3ff | 0xdc00;
    uVar7 = param_2 + 2;
  }
  *(ushort *)(param_1 + (longlong)(int)uVar8 * 2) = uVar14;
LAB_14257ccfa:
  return (ulonglong)uVar7;
}



// FUNCTION 14257cd60 FUN_14257cd60 body=1051 status=ok
// SIG undefined FUN_14257cd60(void)

void FUN_14257cd60(uint param_1,uint param_2,longlong param_3,int param_4,longlong param_5,
                  longlong param_6,uint param_7,int param_8,longlong param_9,undefined4 *param_10)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int local_90;
  uint local_88;
  longlong local_80;
  uint local_74;
  int local_70;
  uint local_6c;
  longlong local_68;
  undefined *local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = &DAT_14993ef80;
  if (param_1 != 1) {
    if ((int)param_1 < 0) {
      if ((param_2 & 7) == 0) goto LAB_14257cdc0;
    }
    else if ((param_1 & 0xfffffffe) != 2) goto LAB_14257cdc0;
    local_60 = &DAT_14993f100;
  }
LAB_14257cdc0:
  uVar8 = 0;
  local_74 = param_2;
  local_70 = param_4;
  local_6c = param_1;
  local_68 = param_3;
  local_58 = (longlong *)FUN_1424d67c0();
  uVar9 = param_7;
  do {
    do {
      if ((int)param_7 < param_8) {
        do {
          uVar2 = *(ushort *)(param_5 + (longlong)(int)param_7 * 2);
          uVar10 = (ulonglong)uVar2;
          uVar13 = param_7;
          if (uVar10 < 0x17f) {
            cVar1 = local_60[uVar10];
            uVar11 = (uint)cVar1;
            if (cVar1 == -0x80) break;
            if (cVar1 != '\0') {
LAB_14257ce90:
              uVar14 = ~uVar9 + param_7 + 1;
              uVar13 = uVar8;
              if (0 < (int)uVar14) {
                if (param_9 != 0) {
                  FUN_1425b00d0(param_9,uVar14);
                }
                if ((local_74 & 0x4000) == 0) {
                  uVar4 = local_98;
                  uVar5 = local_88;
                  if ((uVar8 ^ 0x7fffffff) < uVar14) goto LAB_14257d17a;
                  uVar13 = uVar8 + uVar14;
                  if ((int)uVar13 <= local_70) {
                    FUN_142504850(local_68 + (longlong)(int)uVar8 * 2,
                                  param_5 + (longlong)(int)uVar9 * 2,uVar14);
                  }
                }
              }
              uVar4 = local_98;
              uVar5 = local_88;
              if ((int)uVar13 < 0) goto LAB_14257d17a;
              uVar10 = (ulonglong)(uVar11 + uVar2);
              if ((int)uVar13 < local_70) {
                *(short *)(local_68 + (ulonglong)uVar13 * 2) = (short)(uVar11 + uVar2);
LAB_14257cf4f:
                uVar8 = uVar13 + 1;
              }
              else {
                uVar8 = 0xffffffff;
                if (uVar13 != 0x7fffffff) goto LAB_14257cf4f;
              }
              if (param_9 != 0) {
                FUN_1425b02e0(param_9,1,1);
              }
              uVar9 = param_7 + 1;
              uVar4 = local_98;
              uVar5 = local_88;
              if ((int)uVar8 < 0) goto LAB_14257d17a;
            }
          }
          else {
            if ((0xd7ff < uVar2) ||
               (uVar3 = *(ushort *)
                         (*local_58 +
                         ((ulonglong)(uVar2 & 0x1f) +
                         (ulonglong)*(ushort *)(*local_58 + (ulonglong)(uVar2 >> 5) * 2) * 4) * 2),
               (uVar3 & 8) != 0)) break;
            if (((uVar3 & 2) != 0) && (0x7f < uVar3)) {
              uVar11 = (uint)(int)(short)uVar3 >> 7;
              goto LAB_14257ce90;
            }
          }
          param_7 = param_7 + 1;
          uVar13 = param_7;
        } while ((int)param_7 < param_8);
      }
      else {
        uVar10 = 0;
        uVar13 = param_7;
      }
      if (param_8 <= (int)uVar13) {
        uVar14 = uVar13 - uVar9;
        uVar11 = uVar8;
        if (uVar14 != 0 && (int)uVar9 <= (int)uVar13) {
          if (param_9 != 0) {
            FUN_1425b00d0(param_9,uVar14);
          }
          if ((local_74 & 0x4000) == 0) {
            uVar4 = local_98;
            uVar5 = local_88;
            if ((uVar8 ^ 0x7fffffff) < uVar14) goto LAB_14257d17a;
            uVar11 = uVar8 + uVar14;
            if ((int)uVar11 <= local_70) {
              FUN_142504850(local_68 + (longlong)(int)uVar8 * 2,param_5 + (longlong)(int)uVar9 * 2,
                            uVar14);
            }
          }
        }
        uVar4 = local_98;
        uVar5 = local_88;
        if (-1 < (int)uVar11) goto LAB_14257d18a;
        goto LAB_14257d17a;
      }
      param_7 = uVar13 + 1;
      uVar10 = uVar10 & 0xffff;
      if (((uint)uVar10 & 0xfc00) == 0xd800) {
        if ((int)param_7 < param_8) {
          uVar11 = (uint)*(ushort *)(param_5 + (longlong)(int)param_7 * 2);
          if ((uVar11 & 0xfc00) != 0xdc00) goto LAB_14257cff4;
          uVar10 = (ulonglong)((uint)uVar10 * 0x400 + uVar11 + 0xfca02400);
          param_7 = uVar13 + 2;
        }
        if ((int)local_6c < 0) goto LAB_14257d028;
LAB_14257cff8:
        *(uint *)(param_6 + 0x14) = uVar13;
        *(uint *)(param_6 + 0x18) = param_7;
        local_98 = CONCAT44(local_98._4_4_,local_6c);
        iVar7 = FUN_1424d6f50(uVar10,&LAB_14257ca50,param_6,&local_50);
      }
      else {
LAB_14257cff4:
        if (-1 < (int)local_6c) goto LAB_14257cff8;
LAB_14257d028:
        iVar7 = FUN_1424d7ef0(uVar10,&local_50,local_74);
      }
    } while (iVar7 < 0);
    uVar12 = uVar13 - uVar9;
    uVar4 = local_98;
    uVar5 = local_88;
    uVar14 = local_74;
    uVar6 = local_50;
    uVar11 = uVar8;
    if (uVar12 != 0 && (int)uVar9 <= (int)uVar13) {
      if (param_9 != 0) {
        FUN_1425b00d0(param_9,uVar12);
      }
      uVar4 = local_98;
      uVar5 = local_88;
      uVar14 = local_74;
      uVar6 = local_50;
      if ((local_74 & 0x4000) == 0) {
        if ((uVar8 ^ 0x7fffffff) < uVar12) break;
        uVar11 = uVar12 + uVar8;
        uVar14 = local_74;
        uVar6 = local_50;
        if ((int)uVar11 <= local_70) {
          FUN_142504850(local_68 + (longlong)(int)uVar8 * 2,param_5 + (longlong)(int)uVar9 * 2,
                        uVar12);
          uVar4 = local_98;
          uVar5 = local_88;
          uVar14 = local_74;
          uVar6 = local_50;
        }
      }
    }
    local_98 = uVar6;
    local_88 = uVar14;
    local_74 = local_88;
    if ((int)uVar11 < 0) break;
    local_90 = param_7 - uVar13;
    local_80 = param_9;
    local_50 = local_98;
    uVar8 = FUN_14257cb60(local_68,uVar11,local_70,iVar7);
    uVar9 = param_7;
    uVar4 = local_98;
    uVar5 = local_88;
  } while (-1 < (int)uVar8);
LAB_14257d17a:
  local_88 = uVar5;
  local_98 = uVar4;
  *param_10 = 8;
LAB_14257d18a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14257d1c0 FUN_14257d1c0 body=60 status=ok
// SIG undefined FUN_14257d1c0(void)

undefined8 FUN_14257d1c0(undefined4 param_1)

{
  switch(param_1) {
  case 0x300:
  case 0x301:
  case 0x302:
  case 0x303:
  case 0x311:
  case 0x342:
    return 0x4000;
  case 0x304:
  case 0x306:
  case 0x313:
  case 0x314:
  case 0x343:
    return 0x20000;
  default:
    return 0;
  case 0x308:
    return 0x10000;
  case 0x344:
    return 0x14000;
  case 0x345:
    return 0x2000;
  }
}



// FUNCTION 14257d200 FUN_14257d200 body=1426 status=ok
// SIG undefined FUN_14257d200(void)

void FUN_14257d200(uint param_1,longlong param_2,int param_3,longlong param_4,uint param_5,
                  longlong param_6,undefined4 *param_7)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  undefined2 *puVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int local_a0;
  uint local_98;
  longlong local_90;
  uint local_88;
  char local_81;
  int local_80;
  uint local_7c;
  longlong local_78;
  longlong local_70;
  uint local_64;
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = param_4;
  local_70 = param_2;
  if (0 < (int)param_5) {
    local_81 = (param_1 & 0x4000) == 0 && param_6 == 0;
    local_58 = (ulonglong)param_5;
    uVar13 = 0;
    local_7c = 0;
    uVar9 = 0;
    local_80 = param_3;
    local_64 = param_1;
    do {
      iVar3 = (int)uVar9;
      uVar12 = iVar3 + 1;
      local_60 = (longlong)iVar3;
      uVar1 = *(ushort *)(local_78 + local_60 * 2);
      uVar16 = (uint)uVar1;
      uVar5 = uVar12;
      if ((((uVar16 & 0xfc00) == 0xd800) && (uVar12 != param_5)) &&
         (uVar11 = (uint)*(ushort *)(local_78 + (longlong)(int)uVar12 * 2),
         (uVar11 & 0xfc00) == 0xdc00)) {
        uVar16 = (uint)uVar1 * 0x400 + uVar11 + 0xfca02400;
        uVar5 = iVar3 + 2;
      }
      uVar15 = (ulonglong)uVar5;
      uVar4 = FUN_1424d6d80(uVar16);
      uVar10 = local_7c & 1;
      uVar11 = (uint)(uVar4 != 0);
      if ((uVar4 & 4) != 0) {
        uVar11 = uVar10;
      }
      if ((uVar16 - 0x2127 < 0xffffe249) || (uVar16 - 0x400 < 0x1b00)) {
LAB_14257d4e0:
        local_a8 = CONCAT44(local_a8._4_4_,4);
        FUN_1424d78e0(uVar16,0,0,&local_50);
        local_a0 = uVar5 - iVar3;
        local_90 = param_6;
        local_98 = local_64;
        local_a8 = local_50;
        uVar13 = FUN_14257cb60(local_70);
        uVar5 = local_7c;
joined_r0x00014257d53b:
        local_7c = uVar11;
        if ((int)uVar13 < 0) {
LAB_14257d787:
          local_7c = uVar5;
          *param_7 = 8;
          break;
        }
      }
      else {
        if (uVar16 < 0x400) {
          puVar6 = (ushort *)(&DAT_1499f3670 + (ulonglong)(uVar16 - 0x370) * 2);
LAB_14257d381:
          uVar4 = (uint)*puVar6;
          if (*puVar6 == 0) goto LAB_14257d4e0;
        }
        else {
          if (uVar16 < 0x2000) {
            puVar6 = (ushort *)((longlong)&PTR_FUN_1499ef990 + (longlong)(int)uVar16 * 2);
            goto LAB_14257d381;
          }
          uVar4 = 0x13a9;
          if (uVar16 != 0x2126) goto LAB_14257d4e0;
        }
        local_88 = uVar4 & 0x3ff;
        if ((((uVar4 & 0x1000) != 0) && (local_7c = local_7c & 2, local_7c != 0)) &&
           ((local_88 == 0x3a5 || (local_88 == 0x399)))) {
          uVar4 = uVar4 | 0x8000;
        }
        uVar16 = uVar4 >> 0xd & 1;
        if ((int)uVar5 < (int)param_5) {
          uVar15 = (ulonglong)(int)uVar5;
          do {
            uVar5 = FUN_14257d1c0(*(undefined2 *)(local_78 + uVar15 * 2));
            if (uVar5 == 0) goto LAB_14257d413;
            uVar4 = uVar4 | uVar5;
            uVar16 = uVar16 + ((uVar5 >> 0xd & 1) != 0);
            uVar15 = uVar15 + 1;
          } while (local_58 != uVar15);
          uVar15 = (ulonglong)param_5;
        }
LAB_14257d413:
        local_7c = uVar11 + 2;
        if ((uVar4 & 0xd000) != 0x5000) {
          local_7c = uVar11;
        }
        iVar14 = (int)uVar15;
        if ((((local_88 == 0x397) && ((uVar4 & 0x4000) != 0)) && (uVar16 == 0)) && (uVar10 == 0)) {
          uVar9 = uVar15 & 0xffffffff;
          do {
            iVar8 = (int)uVar9;
            if ((int)param_5 <= iVar8) goto LAB_14257d592;
            uVar11 = iVar8 + 1;
            uVar9 = (ulonglong)uVar11;
            uVar1 = *(ushort *)(local_78 + (longlong)iVar8 * 2);
            uVar5 = (uint)uVar1;
            if ((((uVar1 & 0xfc00) == 0xd800) && (uVar11 != param_5)) &&
               (uVar11 = (uint)*(ushort *)(local_78 + (longlong)(int)uVar11 * 2),
               (uVar11 & 0xfc00) == 0xdc00)) {
              uVar5 = (uint)uVar1 * 0x400 + uVar11 + 0xfca02400;
              uVar9 = (ulonglong)(iVar8 + 2);
            }
            uVar5 = FUN_1424d6d80(uVar5);
          } while ((uVar5 & 4) != 0);
          if (uVar5 != 0) goto LAB_14257d560;
LAB_14257d592:
          bVar19 = iVar14 == iVar3;
          bVar2 = !bVar19;
          local_88 = 0x397;
          if (bVar19) {
            local_88 = 0x389;
          }
        }
        else {
LAB_14257d560:
          bVar19 = true;
          if ((short)uVar4 < 0) {
            bVar2 = false;
            if (local_88 == 0x3a5) {
              local_88 = 0x3ab;
              uVar4 = 0;
            }
            else {
              bVar2 = false;
              if (local_88 == 0x399) {
                local_88 = 0x3aa;
                uVar4 = 0;
                bVar2 = false;
              }
            }
          }
          else {
            bVar2 = false;
          }
        }
        iVar8 = local_80;
        if (local_81 == '\0') {
          bVar17 = *(ushort *)(local_78 + local_60 * 2) != local_88 || uVar16 != 0;
          if ((uVar4 & 0x18000) != 0) {
            bVar18 = true;
            if ((int)uVar12 < iVar14) {
              bVar18 = *(short *)(local_78 + (longlong)(int)uVar12 * 2) != 0x308;
            }
            bVar17 = (bool)(bVar17 | bVar18);
            uVar12 = iVar3 + 2;
          }
          if (!bVar19) {
            bVar19 = true;
            if ((int)uVar12 < iVar14) {
              bVar19 = *(short *)(local_78 + (longlong)(int)uVar12 * 2) != 0x301;
            }
            bVar17 = (bool)(bVar17 | bVar19);
            uVar12 = uVar12 + 1;
          }
          if ((bVar17) || (iVar14 - iVar3 != (uVar12 - iVar3) + uVar16)) {
            if (param_6 != 0) {
              FUN_1425b02e0(param_6);
            }
            goto LAB_14257d6a0;
          }
          if (param_6 != 0) {
            FUN_1425b00d0();
          }
          if ((local_64 & 0x4000) == 0) goto LAB_14257d6a0;
        }
        else {
LAB_14257d6a0:
          uVar5 = local_7c;
          if (iVar8 <= (int)uVar13) {
            if (uVar13 != 0x7fffffff) goto LAB_14257d6c4;
            goto LAB_14257d787;
          }
          *(short *)(local_70 + (longlong)(int)uVar13 * 2) = (short)local_88;
LAB_14257d6c4:
          uVar12 = uVar13 + 1;
          if ((-2 < (int)uVar13) && ((uVar4 & 0x18000) != 0)) {
            if ((int)uVar12 < iVar8) {
              *(undefined2 *)(local_70 + (ulonglong)uVar12 * 2) = 0x308;
            }
            else if (uVar12 == 0x7fffffff) goto LAB_14257d787;
            uVar12 = uVar13 + 2;
          }
          uVar13 = uVar12;
          if (!(bool)(bVar2 ^ 1) && -1 < (int)uVar13) {
            if ((int)uVar13 < iVar8) {
              *(undefined2 *)(local_70 + (ulonglong)uVar13 * 2) = 0x301;
            }
            else if (uVar13 == 0x7fffffff) goto LAB_14257d787;
            uVar13 = uVar13 + 1;
          }
          uVar11 = local_7c;
          if (((int)uVar13 < 0) || ((int)uVar16 < 1)) goto joined_r0x00014257d53b;
          puVar7 = (undefined2 *)(local_70 + (ulonglong)uVar13 * 2);
          uVar16 = uVar16 + 1;
          do {
            if ((int)uVar13 < iVar8) {
              *puVar7 = 0x399;
            }
            else if (uVar13 == 0x7fffffff) goto LAB_14257d787;
            uVar13 = uVar13 + 1;
            puVar7 = puVar7 + 1;
            uVar16 = uVar16 - 1;
          } while (1 < uVar16);
        }
      }
      uVar9 = uVar15 & 0xffffffff;
    } while ((int)uVar15 < (int)param_5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
}



// FUNCTION 14257d7c0 FUN_14257d7c0 body=183 status=ok
// SIG undefined FUN_14257d7c0(void)

void FUN_14257d7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,uint param_7,longlong param_8,int *param_9)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  uint local_60;
  longlong local_58;
  int *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = 0;
  local_30 = 0;
  local_48 = param_6;
  uStack_38 = (ulonglong)param_7;
  local_50 = param_9;
  local_58 = param_8;
  local_60 = param_7;
  local_70 = &local_48;
  local_78 = param_6;
  local_68 = 0;
  iVar1 = FUN_14257cd60(0,param_2,param_4,param_5);
  if (*param_9 < 1) {
    if (param_5 < iVar1) {
      *param_9 = 0xf;
    }
    else if (param_8 != 0) {
      FUN_1425b06f0(param_8,param_9);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
}



// FUNCTION 14257d890 FUN_14257d890 body=1235 status=ok
// SIG undefined FUN_14257d890(void)

void FUN_14257d890(int param_1,uint param_2,undefined8 param_3,longlong param_4,int param_5,
                  longlong param_6,uint param_7,longlong param_8,int *param_9)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  uint local_94;
  longlong local_90;
  int local_84;
  longlong *local_80;
  undefined *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 == 4) {
    local_a8 = param_9;
    local_b0 = param_8;
    local_b8 = CONCAT44(local_b8._4_4_,param_7);
    uVar6 = FUN_14257d200(param_2,param_4,param_5,param_6);
  }
  else {
    local_68 = 0;
    local_58 = 0;
    local_70 = param_6;
    uStack_60 = (ulonglong)param_7;
    local_78 = &DAT_14993f280;
    if (param_1 == 2) {
      local_78 = &DAT_14993f400;
    }
    uVar6 = 0;
    local_94 = param_2;
    local_90 = param_4;
    local_84 = param_1;
    local_80 = (longlong *)FUN_1424d67c0();
    uVar8 = 0;
    uVar13 = 0;
    do {
      do {
        if ((int)uVar6 < (int)param_7) {
          do {
            uVar2 = *(ushort *)(param_6 + (longlong)(int)uVar6 * 2);
            uVar12 = (ulonglong)uVar2;
            uVar9 = uVar6;
            if (uVar12 < 0x17f) {
              cVar1 = local_78[uVar12];
              uVar10 = (uint)cVar1;
              if (cVar1 == -0x80) break;
              if (cVar1 != '\0') {
LAB_14257da25:
                uVar11 = ~uVar13 + uVar6 + 1;
                uVar9 = uVar8;
                if (0 < (int)uVar11) {
                  if (param_8 != 0) {
                    FUN_1425b00d0(param_8,uVar11);
                  }
                  if ((local_94 & 0x4000) == 0) {
                    uVar4 = local_b8;
                    if ((uVar8 ^ 0x7fffffff) < uVar11) goto LAB_14257dc8b;
                    uVar9 = uVar11 + uVar8;
                    if ((int)uVar9 <= param_5) {
                      FUN_142504850(local_90 + (longlong)(int)uVar8 * 2,
                                    param_6 + (longlong)(int)uVar13 * 2,uVar11);
                    }
                  }
                }
                uVar4 = local_b8;
                if ((int)uVar9 < 0) goto LAB_14257dc8b;
                uVar12 = (ulonglong)(uVar10 + uVar2);
                if ((int)uVar9 < param_5) {
                  *(short *)(local_90 + (ulonglong)uVar9 * 2) = (short)(uVar10 + uVar2);
LAB_14257dafe:
                  uVar8 = uVar9 + 1;
                }
                else {
                  uVar8 = 0xffffffff;
                  if (uVar9 != 0x7fffffff) goto LAB_14257dafe;
                }
                if (param_8 != 0) {
                  FUN_1425b02e0(param_8,1,1);
                }
                uVar4 = local_b8;
                uVar13 = uVar6 + 1;
                if ((int)uVar8 < 0) goto LAB_14257dc8b;
              }
            }
            else {
              if ((0xd7ff < uVar2) ||
                 (uVar3 = *(ushort *)
                           (*local_80 +
                           ((ulonglong)(uVar2 & 0x1f) +
                           (ulonglong)*(ushort *)(*local_80 + (ulonglong)(uVar2 >> 5) * 2) * 4) * 2)
                 , (uVar3 & 8) != 0)) break;
              if ((0x7f < uVar3) && ((uVar3 & 3) == 1)) {
                uVar10 = (uint)(int)(short)uVar3 >> 7;
                goto LAB_14257da25;
              }
            }
            uVar6 = uVar6 + 1;
            uVar9 = uVar6;
          } while ((int)uVar6 < (int)param_7);
        }
        else {
          uVar12 = 0;
          uVar9 = uVar6;
        }
        if ((int)param_7 <= (int)uVar9) {
          uVar10 = uVar9 - uVar13;
          uVar6 = uVar8;
          if (uVar10 == 0 || (int)uVar9 < (int)uVar13) {
joined_r0x00014257dd5a:
            if (-1 < (int)uVar6) goto LAB_14257dca3;
          }
          else {
            if (param_8 != 0) {
              FUN_1425b00d0(param_8,uVar10);
            }
            if ((local_94 & 0x4000) != 0) goto joined_r0x00014257dd5a;
            if (uVar10 <= (uVar8 ^ 0x7fffffff)) {
              uVar6 = uVar10 + uVar8;
              if ((int)uVar6 <= param_5) {
                FUN_142504850(local_90 + (longlong)(int)uVar8 * 2,
                              param_6 + (longlong)(int)uVar13 * 2,uVar10);
              }
              goto joined_r0x00014257dd5a;
            }
          }
          *param_9 = 8;
          uVar6 = 0;
          goto LAB_14257dca3;
        }
        uVar6 = uVar9 + 1;
        uStack_60 = CONCAT44(uVar9,(undefined4)uStack_60);
        uVar12 = uVar12 & 0xffff;
        if (((((uint)uVar12 & 0xfc00) == 0xd800) && ((int)uVar6 < (int)param_7)) &&
           (uVar10 = (uint)*(ushort *)(param_6 + (longlong)(int)uVar6 * 2),
           (uVar10 & 0xfc00) == 0xdc00)) {
          uVar12 = (ulonglong)((uint)uVar12 * 0x400 + uVar10 + 0xfca02400);
          uVar6 = uVar9 + 2;
        }
        local_58 = CONCAT44(local_58._4_4_,uVar6);
        local_b8 = CONCAT44(local_b8._4_4_,local_84);
        iVar7 = FUN_1424d78e0(uVar12,&LAB_14257ca50,&local_70,&local_50);
      } while (iVar7 < 0);
      uVar11 = uVar9 - uVar13;
      uVar4 = local_b8;
      uVar5 = local_50;
      uVar10 = uVar8;
      if (uVar11 != 0 && (int)uVar13 <= (int)uVar9) {
        if (param_8 != 0) {
          FUN_1425b00d0(param_8,uVar11);
        }
        uVar4 = local_b8;
        uVar5 = local_50;
        if ((local_94 & 0x4000) == 0) {
          if ((uVar8 ^ 0x7fffffff) < uVar11) break;
          uVar10 = uVar8 + uVar11;
          uVar5 = local_50;
          if ((int)uVar10 <= param_5) {
            FUN_142504850(local_90 + (longlong)(int)uVar8 * 2,param_6 + (longlong)(int)uVar13 * 2,
                          uVar11);
            uVar4 = local_b8;
            uVar5 = local_50;
          }
        }
      }
      local_b8 = uVar5;
      if ((int)uVar10 < 0) break;
      local_a0 = param_8;
      uVar12 = (ulonglong)local_a8 >> 0x20;
      local_a8 = (int *)CONCAT44((int)uVar12,local_94);
      uVar12 = (ulonglong)local_b0 >> 0x20;
      local_b0 = CONCAT44((int)uVar12,uVar6 - uVar9);
      local_50 = local_b8;
      uVar8 = FUN_14257cb60(local_90,uVar10,param_5,iVar7);
      uVar4 = local_b8;
      uVar13 = uVar6;
    } while (-1 < (int)uVar8);
LAB_14257dc8b:
    local_b8 = uVar4;
    *param_9 = 8;
    uVar6 = 0;
  }
LAB_14257dca3:
  if (*param_9 < 1) {
    if (param_5 < (int)uVar6) {
      *param_9 = 0xf;
    }
    else if (param_8 != 0) {
      FUN_1425b06f0(param_8,param_9);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 14257dda0 FUN_14257dda0 body=144 status=ok
// SIG undefined FUN_14257dda0(void)

int FUN_14257dda0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5,undefined8 param_6,undefined4 param_7,longlong param_8,int *param_9)

{
  int iVar1;
  
  iVar1 = FUN_14257cd60(0xffffffff,param_2,param_4,param_5,param_6,0,0,param_7,param_8,param_9);
  if (*param_9 < 1) {
    if (param_5 < iVar1) {
      *param_9 = 0xf;
    }
    else if (param_8 != 0) {
      FUN_1425b06f0(param_8,param_9);
    }
  }
  return iVar1;
}



// FUNCTION 14257de30 FUN_14257de30 body=459 status=ok
// SIG undefined FUN_14257de30(void)

void FUN_14257de30(undefined4 param_1,undefined4 param_2,undefined8 param_3,wchar_t *param_4,
                  uint param_5,wchar_t *param_6,int param_7,code *param_8,int *param_9)

{
  int iVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  undefined1 auStack_2f8 [32];
  uint local_2d8;
  wchar_t *local_2d0;
  int local_2c8;
  undefined8 local_2c0;
  int *local_2b8;
  wchar_t local_2a8 [304];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if (*param_9 < 1) {
    if (((((int)param_5 < 0) || (param_4 == (wchar_t *)0x0 && param_5 != 0)) ||
        (param_6 == (wchar_t *)0x0)) || (param_7 < -1)) {
      *param_9 = 1;
    }
    else {
      if (param_7 == -1) {
        sVar2 = wcslen(param_6);
        param_7 = (int)sVar2;
      }
      if ((param_4 == (wchar_t *)0x0) ||
         (((param_6 < param_4 || (param_4 + param_5 <= param_6)) &&
          ((param_4 < param_6 || (param_6 + param_7 <= param_4)))))) {
        local_2b8 = param_9;
        local_2d0 = param_6;
        local_2d8 = param_5;
        local_2c0 = 0;
        local_2c8 = param_7;
        iVar1 = (*param_8)(param_1,param_2,param_3,param_4);
      }
      else {
        if (param_5 < 0x12d) {
          pwVar3 = local_2a8;
        }
        else {
          pwVar3 = (wchar_t *)FUN_1424da030(param_5 * 2);
          if (pwVar3 == (wchar_t *)0x0) {
            *param_9 = 7;
            goto LAB_14257dfe3;
          }
        }
        local_2b8 = param_9;
        local_2d0 = param_6;
        local_2d8 = param_5;
        local_2c0 = 0;
        local_2c8 = param_7;
        iVar1 = (*param_8)(param_1,param_2,param_3,pwVar3);
        if (pwVar3 != param_4) {
          if (((iVar1 <= (int)param_5) && (0 < iVar1)) && (*param_9 < 1)) {
            FUN_142504880(param_4,pwVar3,iVar1);
          }
          if (pwVar3 != local_2a8) {
            FUN_1424da110(pwVar3);
          }
        }
      }
      FUN_142504cc0(param_4,param_5,iVar1,param_9);
    }
  }
LAB_14257dfe3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_2f8);
}



// FUNCTION 14257e020 FUN_14257e020 body=385 status=ok
// SIG undefined FUN_14257e020(void)

void FUN_14257e020(wchar_t *param_1,uint param_2,wchar_t *param_3,int param_4,undefined4 param_5,
                  int *param_6)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  undefined1 auStack_2e8 [32];
  wchar_t *local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  int local_2b0;
  undefined8 local_2a8;
  int *local_2a0;
  wchar_t local_298 [304];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (*param_6 < 1) {
    uVar5 = (ulonglong)param_2;
    if (((((int)param_2 < 0) || (param_1 == (wchar_t *)0x0 && param_2 != 0)) ||
        (param_3 == (wchar_t *)0x0)) || (param_4 < -1)) {
      *param_6 = 1;
    }
    else {
      if (param_4 == -1) {
        sVar3 = wcslen(param_3);
        param_4 = (int)sVar3;
      }
      if (param_1 == (wchar_t *)0x0) {
        pwVar4 = (wchar_t *)0x0;
      }
      else if (((param_1 <= param_3) && (param_3 < param_1 + uVar5)) ||
              ((pwVar4 = param_1, param_3 <= param_1 && (param_1 < param_3 + param_4)))) {
        if (param_2 < 0x12d) {
          pwVar4 = local_298;
        }
        else {
          pwVar4 = (wchar_t *)FUN_1424da030(param_2 * 2);
          if (pwVar4 == (wchar_t *)0x0) {
            *param_6 = 7;
            goto LAB_14257e186;
          }
        }
      }
      local_2a0 = param_6;
      local_2a8 = 0;
      local_2b8 = 0;
      local_2c0 = 0;
      local_2c8 = param_3;
      local_2b0 = param_4;
      iVar1 = FUN_14257cd60(0xffffffff,param_5,pwVar4,uVar5);
      iVar2 = *param_6;
      if (((int)param_2 < iVar1) && (iVar2 < 1)) {
        *param_6 = 0xf;
        iVar2 = 0xf;
      }
      if (pwVar4 != param_1) {
        if (((iVar1 <= (int)param_2) && (0 < iVar1)) && (iVar2 < 1)) {
          FUN_142504880(param_1,pwVar4,iVar1);
        }
        if (pwVar4 != local_298) {
          FUN_1424da110(pwVar4);
        }
      }
      FUN_142504cc0(param_1,uVar5,iVar1,param_6);
    }
  }
LAB_14257e186:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_2e8);
}



// FUNCTION 14257e1c0 FUN_14257e1c0 body=41 status=ok
// SIG undefined FUN_14257e1c0(void)

void FUN_14257e1c0(void)

{
  FUN_14257e1f0();
  return;
}



// FUNCTION 14257e1f0 FUN_14257e1f0 body=1800 status=ok
// SIG undefined FUN_14257e1f0(void)

void FUN_14257e1f0(ushort *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                  undefined4 *param_6,undefined4 *param_7,int *param_8)

{
  ushort **ppuVar1;
  uint uVar2;
  uint uVar3;
  ushort **ppuVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  uint uVar14;
  ushort *puVar15;
  uint uVar16;
  undefined1 auStack_1a8 [32];
  ushort *local_188;
  ushort *local_180;
  ushort *local_178;
  ushort *local_170;
  ushort *local_168;
  ushort *local_160;
  uint local_154;
  ushort *local_150;
  ushort *local_148;
  ushort *local_140;
  ushort *local_138;
  undefined8 local_130;
  ushort local_128 [32];
  ushort local_e8 [32];
  ushort *local_a8;
  ushort *local_a0;
  ushort *local_98 [4];
  ushort *local_78;
  ushort *local_70;
  ushort *local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (0 < *param_8) {
LAB_14257e8f4:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1a8);
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
    *param_7 = 0;
  }
  puVar15 = (ushort *)0x0;
  puVar7 = param_1 + param_2;
  if (param_2 == -1) {
    puVar7 = puVar15;
  }
  puVar12 = param_3 + param_4;
  if (param_4 == -1) {
    puVar12 = puVar15;
  }
  iVar9 = 0;
  puVar11 = param_1;
  puVar13 = param_3;
  local_188 = param_1;
  local_180 = param_3;
  local_170 = param_3;
  local_168 = param_1;
LAB_14257e2af:
  uVar8 = 0xffffffff;
LAB_14257e2b4:
  uVar14 = 0xffffffff;
  do {
    if ((int)uVar14 < 0) {
      while( true ) {
        if (param_1 != puVar7) {
          uVar14 = (uint)*param_1;
          if ((*param_1 != 0) || ((param_5 & 0x1000) == 0 && puVar7 != (ushort *)0x0)) {
            param_1 = param_1 + 1;
            goto joined_r0x00014257e373;
          }
        }
        if ((int)puVar15 == 0) break;
        ppuVar1 = local_68 + (longlong)(int)puVar15 * 3;
        do {
          ppuVar4 = ppuVar1;
          puVar11 = ppuVar4[-5];
          puVar15 = (ushort *)(ulonglong)((int)puVar15 - 1);
          ppuVar1 = ppuVar4 + -3;
        } while (puVar11 == (ushort *)0x0);
        param_1 = ppuVar4[-4];
        puVar7 = ppuVar4[-3];
      }
      uVar14 = 0xffffffff;
      puVar15 = (ushort *)0x0;
    }
joined_r0x00014257e373:
    if ((int)uVar8 < 0) {
      while( true ) {
        if (param_3 != puVar12) {
          uVar8 = (uint)*param_3;
          if ((*param_3 != 0) || ((param_5 & 0x1000) == 0 && puVar12 != (ushort *)0x0)) {
            param_3 = param_3 + 1;
            goto LAB_14257e3e0;
          }
        }
        if (iVar9 == 0) break;
        ppuVar1 = local_98 + (longlong)iVar9 * 3;
        do {
          ppuVar4 = ppuVar1;
          puVar13 = ppuVar4[-5];
          iVar9 = iVar9 + -1;
          ppuVar1 = ppuVar4 + -3;
        } while (puVar13 == (ushort *)0x0);
        param_3 = ppuVar4[-4];
        puVar12 = ppuVar4[-3];
      }
      uVar8 = 0xffffffff;
      iVar9 = 0;
    }
LAB_14257e3e0:
    local_178 = param_1;
    if (uVar14 == uVar8) {
      if ((int)uVar14 < 0) {
joined_r0x00014257e8cf:
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = (int)((ulonglong)((longlong)local_168 - (longlong)local_188) >> 1);
          *param_7 = (int)((ulonglong)((longlong)local_170 - (longlong)local_180) >> 1);
        }
        goto LAB_14257e8f4;
      }
      puVar5 = param_1;
      if ((((int)puVar15 == 0) || (puVar5 = local_148, param_1 == puVar7)) &&
         (puVar5 != (ushort *)0x0)) {
        puVar6 = (ushort *)0x0;
        if (param_3 == puVar12) {
          puVar6 = local_138;
        }
        if (iVar9 == 0) {
          puVar6 = param_3;
        }
        if (puVar6 != (ushort *)0x0) {
          local_170 = puVar6;
          local_168 = puVar5;
        }
      }
      goto LAB_14257e2af;
    }
    if (((int)uVar14 < 0) || ((int)uVar8 < 0)) goto joined_r0x00014257e8cf;
    local_154 = uVar14 & 0xfffff800;
    uVar3 = uVar14;
    if (local_154 == 0xd800) {
      if ((uVar14 & 0x400) == 0) {
        if ((param_1 != puVar7) && ((*param_1 & 0xfc00) == 0xdc00)) {
          uVar3 = uVar14 * 0x400 + (uint)*param_1 + 0xfca02400;
        }
      }
      else if ((puVar11 <= param_1 + -2) &&
              (uVar16 = (uint)param_1[-2], (uVar16 & 0xfc00) == 0xd800)) {
        uVar3 = uVar16 * 0x400 + uVar14 + 0xfca02400;
      }
    }
    uVar16 = uVar8;
    if ((uVar8 & 0xfffff800) == 0xd800) {
      if ((uVar8 & 0x400) == 0) {
        if ((param_3 != puVar12) && ((*param_3 & 0xfc00) == 0xdc00)) {
          uVar16 = uVar8 * 0x400 + (uint)*param_3 + 0xfca02400;
        }
      }
      else if ((puVar13 <= param_3 + -2) && (uVar2 = (uint)param_3[-2], (uVar2 & 0xfc00) == 0xd800))
      {
        uVar16 = uVar8 + uVar2 * 0x400 + 0xfca02400;
      }
    }
    local_160 = puVar7;
    if (((int)puVar15 == 0) &&
       (local_150 = puVar12, local_140 = param_3, uVar3 = FUN_1424d7ef0(uVar3,&local_130,param_5),
       puVar12 = local_150, param_3 = local_140, -1 < (int)uVar3)) break;
    if ((iVar9 != 0) || (uVar3 = FUN_1424d7ef0(uVar16,&local_130,param_5), (int)uVar3 < 0))
    goto joined_r0x00014257e8cf;
    uVar10 = (ulonglong)uVar3;
    param_1 = local_178;
    if ((uVar8 & 0xfffff800) == 0xd800) {
      if ((uVar8 & 0x400) == 0) {
        param_3 = param_3 + 1;
      }
      else {
        local_170 = local_170 + -1;
        uVar14 = (uint)local_178[-2];
        param_1 = local_178 + -1;
      }
    }
    local_a8 = puVar13;
    local_a0 = param_3;
    local_98[0] = puVar12;
    local_138 = param_3;
    if (uVar3 < 0x20) {
      FUN_142504850(local_128,local_130,uVar10);
    }
    else if (uVar3 < 0x10000) {
      local_128[0] = (ushort)uVar3;
      uVar10 = 1;
    }
    else {
      local_128[0] = (short)(uVar3 >> 10) + 0xd7c0;
      local_128[1] = (ushort)uVar3 & 0x3ff | 0xdc00;
      uVar10 = 2;
    }
    param_3 = local_128;
    puVar12 = local_128 + uVar10;
    uVar8 = 0xffffffff;
    iVar9 = 1;
    puVar7 = local_160;
    puVar13 = param_3;
  } while( true );
  local_148 = local_178;
  if (local_154 == 0xd800) {
    if ((uVar14 & 0x400) == 0) {
      local_148 = local_178 + 1;
    }
    else {
      local_170 = local_170 + -1;
      uVar8 = (uint)local_140[-2];
      param_3 = local_140 + -1;
    }
  }
  local_78 = puVar11;
  local_70 = local_148;
  local_68[0] = local_160;
  if (uVar3 < 0x20) {
    uVar10 = (ulonglong)uVar3;
    FUN_142504850(local_e8,local_130,uVar3);
  }
  else if (uVar3 < 0x10000) {
    local_e8[0] = (ushort)uVar3;
    uVar10 = 1;
  }
  else {
    local_e8[0] = (short)(uVar3 >> 10) + 0xd7c0;
    local_e8[1] = (ushort)uVar3 & 0x3ff | 0xdc00;
    uVar10 = 2;
  }
  param_1 = local_e8;
  puVar7 = local_e8 + uVar10;
  puVar15 = (ushort *)&DAT_00000001;
  puVar11 = param_1;
  puVar12 = local_150;
  goto LAB_14257e2b4;
}



// FUNCTION 14257e940 thunk_FUN_14257e1f0 body=5 status=ok
// SIG undefined thunk_FUN_14257e1f0(void)

void thunk_FUN_14257e1f0(ushort *param_1,int param_2,ushort *param_3,int param_4,uint param_5,
                        undefined4 *param_6,undefined4 *param_7,int *param_8)

{
  ushort **ppuVar1;
  uint uVar2;
  uint uVar3;
  ushort **ppuVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  uint uVar14;
  ushort *puVar15;
  uint uVar16;
  undefined1 auStack_1a8 [32];
  ushort *puStack_188;
  ushort *puStack_180;
  ushort *puStack_178;
  ushort *puStack_170;
  ushort *puStack_168;
  ushort *puStack_160;
  uint uStack_154;
  ushort *puStack_150;
  ushort *puStack_148;
  ushort *puStack_140;
  ushort *puStack_138;
  undefined8 uStack_130;
  ushort auStack_128 [32];
  ushort auStack_e8 [32];
  ushort *puStack_a8;
  ushort *puStack_a0;
  ushort *apuStack_98 [4];
  ushort *puStack_78;
  ushort *puStack_70;
  ushort *apuStack_68 [4];
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (0 < *param_8) {
LAB_14257e8f4:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uStack_48 ^ (ulonglong)auStack_1a8);
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
    *param_7 = 0;
  }
  puVar15 = (ushort *)0x0;
  puVar7 = param_1 + param_2;
  if (param_2 == -1) {
    puVar7 = puVar15;
  }
  puVar12 = param_3 + param_4;
  if (param_4 == -1) {
    puVar12 = puVar15;
  }
  iVar9 = 0;
  puVar11 = param_1;
  puVar13 = param_3;
  puStack_188 = param_1;
  puStack_180 = param_3;
  puStack_170 = param_3;
  puStack_168 = param_1;
LAB_14257e2af:
  uVar8 = 0xffffffff;
LAB_14257e2b4:
  uVar14 = 0xffffffff;
  do {
    if ((int)uVar14 < 0) {
      while( true ) {
        if (param_1 != puVar7) {
          uVar14 = (uint)*param_1;
          if ((*param_1 != 0) || ((param_5 & 0x1000) == 0 && puVar7 != (ushort *)0x0)) {
            param_1 = param_1 + 1;
            goto joined_r0x00014257e373;
          }
        }
        if ((int)puVar15 == 0) break;
        ppuVar1 = apuStack_68 + (longlong)(int)puVar15 * 3;
        do {
          ppuVar4 = ppuVar1;
          puVar11 = ppuVar4[-5];
          puVar15 = (ushort *)(ulonglong)((int)puVar15 - 1);
          ppuVar1 = ppuVar4 + -3;
        } while (puVar11 == (ushort *)0x0);
        param_1 = ppuVar4[-4];
        puVar7 = ppuVar4[-3];
      }
      uVar14 = 0xffffffff;
      puVar15 = (ushort *)0x0;
    }
joined_r0x00014257e373:
    if ((int)uVar8 < 0) {
      while( true ) {
        if (param_3 != puVar12) {
          uVar8 = (uint)*param_3;
          if ((*param_3 != 0) || ((param_5 & 0x1000) == 0 && puVar12 != (ushort *)0x0)) {
            param_3 = param_3 + 1;
            goto LAB_14257e3e0;
          }
        }
        if (iVar9 == 0) break;
        ppuVar1 = apuStack_98 + (longlong)iVar9 * 3;
        do {
          ppuVar4 = ppuVar1;
          puVar13 = ppuVar4[-5];
          iVar9 = iVar9 + -1;
          ppuVar1 = ppuVar4 + -3;
        } while (puVar13 == (ushort *)0x0);
        param_3 = ppuVar4[-4];
        puVar12 = ppuVar4[-3];
      }
      uVar8 = 0xffffffff;
      iVar9 = 0;
    }
LAB_14257e3e0:
    puStack_178 = param_1;
    if (uVar14 == uVar8) {
      if ((int)uVar14 < 0) {
joined_r0x00014257e8cf:
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = (int)((ulonglong)((longlong)puStack_168 - (longlong)puStack_188) >> 1);
          *param_7 = (int)((ulonglong)((longlong)puStack_170 - (longlong)puStack_180) >> 1);
        }
        goto LAB_14257e8f4;
      }
      puVar5 = param_1;
      if ((((int)puVar15 == 0) || (puVar5 = puStack_148, param_1 == puVar7)) &&
         (puVar5 != (ushort *)0x0)) {
        puVar6 = (ushort *)0x0;
        if (param_3 == puVar12) {
          puVar6 = puStack_138;
        }
        if (iVar9 == 0) {
          puVar6 = param_3;
        }
        if (puVar6 != (ushort *)0x0) {
          puStack_170 = puVar6;
          puStack_168 = puVar5;
        }
      }
      goto LAB_14257e2af;
    }
    if (((int)uVar14 < 0) || ((int)uVar8 < 0)) goto joined_r0x00014257e8cf;
    uStack_154 = uVar14 & 0xfffff800;
    uVar3 = uVar14;
    if (uStack_154 == 0xd800) {
      if ((uVar14 & 0x400) == 0) {
        if ((param_1 != puVar7) && ((*param_1 & 0xfc00) == 0xdc00)) {
          uVar3 = uVar14 * 0x400 + (uint)*param_1 + 0xfca02400;
        }
      }
      else if ((puVar11 <= param_1 + -2) &&
              (uVar16 = (uint)param_1[-2], (uVar16 & 0xfc00) == 0xd800)) {
        uVar3 = uVar16 * 0x400 + uVar14 + 0xfca02400;
      }
    }
    uVar16 = uVar8;
    if ((uVar8 & 0xfffff800) == 0xd800) {
      if ((uVar8 & 0x400) == 0) {
        if ((param_3 != puVar12) && ((*param_3 & 0xfc00) == 0xdc00)) {
          uVar16 = uVar8 * 0x400 + (uint)*param_3 + 0xfca02400;
        }
      }
      else if ((puVar13 <= param_3 + -2) && (uVar2 = (uint)param_3[-2], (uVar2 & 0xfc00) == 0xd800))
      {
        uVar16 = uVar8 + uVar2 * 0x400 + 0xfca02400;
      }
    }
    puStack_160 = puVar7;
    if (((int)puVar15 == 0) &&
       (puStack_150 = puVar12, puStack_140 = param_3,
       uVar3 = FUN_1424d7ef0(uVar3,&uStack_130,param_5), puVar12 = puStack_150,
       param_3 = puStack_140, -1 < (int)uVar3)) break;
    if ((iVar9 != 0) || (uVar3 = FUN_1424d7ef0(uVar16,&uStack_130,param_5), (int)uVar3 < 0))
    goto joined_r0x00014257e8cf;
    uVar10 = (ulonglong)uVar3;
    param_1 = puStack_178;
    if ((uVar8 & 0xfffff800) == 0xd800) {
      if ((uVar8 & 0x400) == 0) {
        param_3 = param_3 + 1;
      }
      else {
        puStack_170 = puStack_170 + -1;
        uVar14 = (uint)puStack_178[-2];
        param_1 = puStack_178 + -1;
      }
    }
    puStack_a8 = puVar13;
    puStack_a0 = param_3;
    apuStack_98[0] = puVar12;
    puStack_138 = param_3;
    if (uVar3 < 0x20) {
      FUN_142504850(auStack_128,uStack_130,uVar10);
    }
    else if (uVar3 < 0x10000) {
      auStack_128[0] = (ushort)uVar3;
      uVar10 = 1;
    }
    else {
      auStack_128[0] = (short)(uVar3 >> 10) + 0xd7c0;
      auStack_128[1] = (ushort)uVar3 & 0x3ff | 0xdc00;
      uVar10 = 2;
    }
    param_3 = auStack_128;
    puVar12 = auStack_128 + uVar10;
    uVar8 = 0xffffffff;
    iVar9 = 1;
    puVar7 = puStack_160;
    puVar13 = param_3;
  } while( true );
  puStack_148 = puStack_178;
  if (uStack_154 == 0xd800) {
    if ((uVar14 & 0x400) == 0) {
      puStack_148 = puStack_178 + 1;
    }
    else {
      puStack_170 = puStack_170 + -1;
      uVar8 = (uint)puStack_140[-2];
      param_3 = puStack_140 + -1;
    }
  }
  puStack_78 = puVar11;
  puStack_70 = puStack_148;
  apuStack_68[0] = puStack_160;
  if (uVar3 < 0x20) {
    uVar10 = (ulonglong)uVar3;
    FUN_142504850(auStack_e8,uStack_130,uVar3);
  }
  else if (uVar3 < 0x10000) {
    auStack_e8[0] = (ushort)uVar3;
    uVar10 = 1;
  }
  else {
    auStack_e8[0] = (short)(uVar3 >> 10) + 0xd7c0;
    auStack_e8[1] = (ushort)uVar3 & 0x3ff | 0xdc00;
    uVar10 = 2;
  }
  param_1 = auStack_e8;
  puVar7 = auStack_e8 + uVar10;
  puVar15 = (ushort *)&DAT_00000001;
  puVar11 = param_1;
  puVar12 = puStack_150;
  goto LAB_14257e2b4;
}



// FUNCTION 14257e950 FUN_14257e950 body=270 status=ok
// SIG undefined FUN_14257e950(void)

void FUN_14257e950(longlong param_1,int param_2,int param_3,longlong param_4,int param_5,int param_6
                  ,uint param_7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  uint local_38;
  undefined4 *local_30;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) != 0) goto LAB_14257ea51;
  if ((short)uVar1 < 0) {
    iVar3 = *(int *)(param_1 + 0xc);
    if (param_2 < 0) goto LAB_14257e9a5;
LAB_14257e987:
    iVar2 = iVar3;
    if (iVar3 < param_2) goto LAB_14257e9a8;
    if (param_3 < 0) goto LAB_14257e9af;
LAB_14257e992:
    iVar2 = iVar3 - param_2;
    if (iVar3 - param_2 < param_3) goto LAB_14257e9b1;
  }
  else {
    iVar3 = (int)(short)uVar1 >> 5;
    if (-1 < param_2) goto LAB_14257e987;
LAB_14257e9a5:
    iVar2 = 0;
LAB_14257e9a8:
    param_2 = iVar2;
    if (-1 < param_3) goto LAB_14257e992;
LAB_14257e9af:
    iVar2 = 0;
LAB_14257e9b1:
    param_3 = iVar2;
  }
  if ((uVar1 & 2) == 0) {
    param_1 = *(longlong *)(param_1 + 0x18);
  }
  else {
    param_1 = param_1 + 10;
  }
  lVar4 = (longlong)param_5;
  if (param_4 == 0) {
    param_6 = 0;
  }
  param_1 = param_1 + (longlong)param_2 * 2;
  if (param_4 == 0) {
    lVar4 = 0;
  }
  param_4 = param_4 + lVar4 * 2;
  if (param_1 == param_4) {
    if (param_6 < 0) {
      wcslen((wchar_t *)(param_1 + lVar4 * 2));
    }
  }
  else {
    local_1c = 0;
    local_38 = param_7 | 0x10000;
    local_30 = &local_1c;
    FUN_14257e1c0(param_1,param_3,param_4,param_6);
  }
LAB_14257ea51:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14257ea70 FUN_14257ea70 body=1249 status=ok
// SIG undefined FUN_14257ea70(void)

longlong FUN_14257ea70(longlong param_1,undefined4 param_2,uint param_3,longlong *param_4,
                      code *param_5)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined8 in_stack_fffffffffffffc18;
  undefined8 uVar10;
  ulonglong in_stack_fffffffffffffc20;
  undefined1 *puVar11;
  longlong local_3b8 [50];
  undefined1 local_228 [120];
  undefined1 *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  undefined1 local_194 [204];
  undefined1 local_c8 [20];
  undefined1 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined **local_98;
  undefined2 local_90;
  uint local_54;
  undefined4 local_50;
  int local_4c [3];
  
  uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffc18 >> 0x20);
  local_4c[1] = -2;
  local_4c[2] = -1;
  uVar1 = *(ushort *)(param_1 + 8);
  if (uVar1 < 0x20) {
    return param_1;
  }
  if ((uVar1 & 0x11) != 0) {
    return param_1;
  }
  if ((short)uVar1 < 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    if ((uVar1 & 0x19) != 0) goto LAB_14257eae8;
LAB_14257eb01:
    if (((uVar1 & 4) != 0) && (iVar9 = FUN_1424a6c00(param_1), iVar9 != 1)) goto LAB_14257eae8;
    if (iVar5 < 0x37) {
      bVar2 = false;
      goto LAB_14257eb5e;
    }
LAB_14257ebcd:
    local_4c[0] = 0;
    local_90 = 2;
    local_98 = &PTR_FUN_149e18960;
    if ((*(ushort *)(param_1 + 8) & 2) == 0) {
      puVar8 = *(undefined1 **)(param_1 + 0x18);
    }
    else {
      puVar8 = (undefined1 *)(param_1 + 10);
    }
    local_1b0 = local_194;
    local_1a8 = 100;
    local_1a4 = 0;
    uStack_19c = 0;
    if (param_4 != (longlong *)0x0) {
      FUN_1424a8f10(&local_98,0,puVar8,iVar5);
      (**(code **)(*param_4 + 0x38))(param_4,&local_98);
    }
    uVar10 = CONCAT44(uVar4,200);
    puVar11 = puVar8;
    (*param_5)(param_2,param_3 | 0x4000,param_4,local_3b8,uVar10,puVar8,iVar5,&local_1b0,local_4c);
    if (local_4c[0] < 1) {
      if (0 < local_1a4._4_4_) {
        puVar11 = (undefined1 *)((ulonglong)puVar11 & 0xffffffffffffff00);
        uVar10 = 0;
        cVar3 = FUN_1424a7300(param_1,local_1a4._4_4_ + iVar5,local_1a4._4_4_ + iVar5,1,0,puVar11);
        if (cVar3 == '\0') goto LAB_14257ee84;
      }
      uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      FUN_1425b0710(local_c8,local_1b0,local_1a4 & 0xffffffff,1,uVar10);
      while( true ) {
        uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
        uVar6 = (undefined4)((ulonglong)puVar11 >> 0x20);
        cVar3 = FUN_1425b0750(local_c8,local_b4,local_4c);
        if (cVar3 == '\0') break;
        puVar11 = (undefined1 *)CONCAT44(uVar6,local_ac);
        uVar10 = CONCAT44(uVar4,local_a4);
        FUN_1424a9130(param_1,local_a0,local_b0,local_3b8,uVar10,puVar11);
      }
      if (0 < local_4c[0]) {
        FUN_1424a7130(param_1);
      }
    }
    else {
      if (local_4c[0] == 0xf) {
        iVar9 = local_1a4._4_4_ + iVar5;
        local_54 = param_3;
        local_50 = param_2;
        FUN_1425b00b0(&local_1b0);
        goto LAB_14257ed48;
      }
      FUN_1424a7130(param_1);
    }
LAB_14257ee84:
    FUN_1425b00b0(&local_1b0);
  }
  else {
    iVar5 = (int)(short)uVar1 >> 5;
    if ((uVar1 & 0x19) == 0) goto LAB_14257eb01;
LAB_14257eae8:
    bVar2 = true;
    if (0x1a < iVar5) goto LAB_14257ebcd;
LAB_14257eb5e:
    local_4c[0] = 0;
    local_90 = 2;
    local_98 = &PTR_FUN_149e18960;
    lVar7 = param_1 + 10;
    if ((*(ushort *)(param_1 + 8) & 2) == 0) {
      lVar7 = *(longlong *)(param_1 + 0x18);
    }
    puVar8 = local_228;
    local_54 = param_3;
    local_50 = param_2;
    FUN_142504850(puVar8,lVar7,iVar5);
    if (bVar2) {
      uVar4 = 0;
      uVar6 = 0x1b;
      cVar3 = FUN_1424a7300(param_1,0x1b,0x1b,0,0,in_stack_fffffffffffffc20 & 0xffffffffffffff00);
      lVar7 = param_1 + 10;
      if (cVar3 == '\0') goto LAB_14257ef2e;
    }
    else {
      uVar6 = 0x1b;
      if ((*(byte *)(param_1 + 8) & 2) == 0) {
        uVar6 = *(undefined4 *)(param_1 + 0x10);
      }
    }
    if (param_4 != (longlong *)0x0) {
      FUN_1424a8f10(&local_98,0,local_228,iVar5);
      (**(code **)(*param_4 + 0x38))(param_4,&local_98);
    }
    iVar9 = (*param_5)(local_50,local_54,param_4,lVar7,CONCAT44(uVar4,uVar6),puVar8,iVar5,0,local_4c
                      );
    if (local_4c[0] < 1) {
      if (iVar9 < 0x400) {
        *(ushort *)(param_1 + 8) = (ushort)(iVar9 << 5) | *(ushort *)(param_1 + 8) & 0x1f;
      }
      else {
        *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 0xffe0;
        *(int *)(param_1 + 0xc) = iVar9;
      }
      goto LAB_14257ef2e;
    }
    if (local_4c[0] != 0xf) {
      FUN_1424a7130(param_1);
      goto LAB_14257ef2e;
    }
LAB_14257ed48:
    local_3b8[0] = 0;
    cVar3 = FUN_1424a7300(param_1,iVar9,iVar9,0,local_3b8,1);
    if (cVar3 != '\0') {
      local_4c[0] = 0;
      if ((*(ushort *)(param_1 + 8) & 2) == 0) {
        uVar4 = *(undefined4 *)(param_1 + 0x10);
        lVar7 = *(longlong *)(param_1 + 0x18);
      }
      else {
        lVar7 = param_1 + 10;
        uVar4 = 0x1b;
      }
      iVar5 = (*param_5)(local_50,local_54,param_4,lVar7,uVar4,puVar8,iVar5,0,local_4c);
      if (local_3b8[0] != 0) {
        FUN_1424da110();
      }
      if (local_4c[0] < 1) {
        if (iVar5 < 0x400) {
          *(ushort *)(param_1 + 8) = (ushort)(iVar5 << 5) | *(ushort *)(param_1 + 8) & 0x1f;
        }
        else {
          *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 0xffe0;
          *(int *)(param_1 + 0xc) = iVar5;
        }
      }
      else {
        FUN_1424a7130(param_1);
      }
    }
  }
LAB_14257ef2e:
  FUN_140859a90(&local_98);
  return param_1;
}



// FUNCTION 14257ef60 Unwind@14257ef60 body=58 status=ok
// SIG undefined Unwind@14257ef60(void)

void Unwind_14257ef60(undefined8 param_1,longlong param_2)

{
  FUN_1425b00b0(param_2 + 600);
  return;
}



// FUNCTION 14257efa0 Unwind@14257efa0 body=58 status=ok
// SIG undefined Unwind@14257efa0(void)

void Unwind_14257efa0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x370);
  return;
}



// FUNCTION 14257efe0 FUN_14257efe0 body=1114 status=ok
// SIG undefined FUN_14257efe0(void)

longlong FUN_14257efe0(longlong param_1,uint param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined8 in_stack_fffffffffffffc28;
  undefined8 uVar10;
  ulonglong in_stack_fffffffffffffc30;
  undefined1 *puVar11;
  undefined1 local_3a8 [112];
  longlong local_338 [50];
  undefined1 *local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined8 uStack_194;
  undefined1 local_18c [204];
  undefined **local_c0;
  undefined2 local_b8;
  undefined1 local_80 [20];
  undefined1 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  int local_4c [3];
  
  uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffc28 >> 0x20);
  local_4c[1] = -2;
  local_4c[2] = -1;
  uVar1 = *(ushort *)(param_1 + 8);
  if (uVar1 < 0x20) {
    return param_1;
  }
  if ((uVar1 & 0x11) != 0) {
    return param_1;
  }
  if ((short)uVar1 < 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    if ((uVar1 & 0x19) != 0) goto LAB_14257f050;
LAB_14257f067:
    if (((uVar1 & 4) != 0) && (iVar9 = FUN_1424a6c00(param_1), iVar9 != 1)) goto LAB_14257f050;
    if (iVar5 < 0x37) {
      bVar2 = false;
      goto LAB_14257f0c4;
    }
LAB_14257f124:
    local_4c[0] = 0;
    local_b8 = 2;
    local_c0 = &PTR_FUN_149e18960;
    if ((*(ushort *)(param_1 + 8) & 2) == 0) {
      puVar8 = *(undefined1 **)(param_1 + 0x18);
    }
    else {
      puVar8 = (undefined1 *)(param_1 + 10);
    }
    local_1a8 = local_18c;
    local_1a0 = 100;
    local_19c = 0;
    uStack_194 = 0;
    uVar10 = CONCAT44(uVar4,200);
    puVar11 = puVar8;
    FUN_14257dda0(1,param_2 | 0x4000,0,local_338,uVar10,puVar8,iVar5,&local_1a8,local_4c);
    if (local_4c[0] < 1) {
      if (0 < local_19c._4_4_) {
        puVar11 = (undefined1 *)((ulonglong)puVar11 & 0xffffffffffffff00);
        uVar10 = 0;
        cVar3 = FUN_1424a7300(param_1,local_19c._4_4_ + iVar5,local_19c._4_4_ + iVar5,1,0,puVar11);
        if (cVar3 == '\0') goto LAB_14257f374;
      }
      uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
      FUN_1425b0710(local_80,local_1a8,local_19c & 0xffffffff,1,uVar10);
      while( true ) {
        uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
        uVar7 = (undefined4)((ulonglong)puVar11 >> 0x20);
        cVar3 = FUN_1425b0750(local_80,local_6c,local_4c);
        if (cVar3 == '\0') break;
        puVar11 = (undefined1 *)CONCAT44(uVar7,local_64);
        uVar10 = CONCAT44(uVar4,local_5c);
        FUN_1424a9130(param_1,local_58,local_68,local_338,uVar10,puVar11);
      }
      if (0 < local_4c[0]) {
        FUN_1424a7130(param_1);
      }
    }
    else {
      if (local_4c[0] == 0xf) {
        iVar9 = local_19c._4_4_ + iVar5;
        FUN_1425b00b0(&local_1a8);
        goto LAB_14257f22f;
      }
      FUN_1424a7130(param_1);
    }
LAB_14257f374:
    FUN_1425b00b0(&local_1a8);
  }
  else {
    iVar5 = (int)(short)uVar1 >> 5;
    if ((uVar1 & 0x19) == 0) goto LAB_14257f067;
LAB_14257f050:
    bVar2 = true;
    if (0x1a < iVar5) goto LAB_14257f124;
LAB_14257f0c4:
    local_4c[0] = 0;
    local_b8 = 2;
    local_c0 = &PTR_FUN_149e18960;
    lVar6 = param_1 + 10;
    if ((*(ushort *)(param_1 + 8) & 2) == 0) {
      lVar6 = *(longlong *)(param_1 + 0x18);
    }
    puVar8 = local_3a8;
    FUN_142504850(puVar8,lVar6,iVar5);
    if (bVar2) {
      uVar4 = 0;
      uVar7 = 0x1b;
      cVar3 = FUN_1424a7300(param_1,0x1b,0x1b,0,0,in_stack_fffffffffffffc30 & 0xffffffffffffff00);
      lVar6 = param_1 + 10;
      if (cVar3 == '\0') goto LAB_14257f417;
    }
    else {
      uVar7 = 0x1b;
      if ((*(byte *)(param_1 + 8) & 2) == 0) {
        uVar7 = *(undefined4 *)(param_1 + 0x10);
      }
    }
    iVar9 = FUN_14257dda0(1,param_2,0,lVar6,CONCAT44(uVar4,uVar7),puVar8,iVar5,0,local_4c);
    if (local_4c[0] < 1) {
      if (iVar9 < 0x400) {
        *(ushort *)(param_1 + 8) = (ushort)(iVar9 << 5) | *(ushort *)(param_1 + 8) & 0x1f;
      }
      else {
        *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 0xffe0;
        *(int *)(param_1 + 0xc) = iVar9;
      }
      goto LAB_14257f417;
    }
    if (local_4c[0] != 0xf) {
      FUN_1424a7130(param_1);
      goto LAB_14257f417;
    }
LAB_14257f22f:
    local_338[0] = 0;
    cVar3 = FUN_1424a7300(param_1,iVar9,iVar9,0,local_338,1);
    if (cVar3 != '\0') {
      local_4c[0] = 0;
      if ((*(ushort *)(param_1 + 8) & 2) == 0) {
        uVar4 = *(undefined4 *)(param_1 + 0x10);
        lVar6 = *(longlong *)(param_1 + 0x18);
      }
      else {
        lVar6 = param_1 + 10;
        uVar4 = 0x1b;
      }
      iVar5 = FUN_14257dda0(1,param_2,0,lVar6,uVar4,puVar8,iVar5,0,local_4c);
      if (local_338[0] != 0) {
        FUN_1424da110();
      }
      if (local_4c[0] < 1) {
        if (iVar5 < 0x400) {
          *(ushort *)(param_1 + 8) = (ushort)(iVar5 << 5) | *(ushort *)(param_1 + 8) & 0x1f;
        }
        else {
          *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 0xffe0;
          *(int *)(param_1 + 0xc) = iVar5;
        }
      }
      else {
        FUN_1424a7130(param_1);
      }
    }
  }
LAB_14257f417:
  FUN_140859a90(&local_c0);
  return param_1;
}



// FUNCTION 14257f440 Unwind@14257f440 body=58 status=ok
// SIG undefined Unwind@14257f440(void)

void Unwind_14257f440(undefined8 param_1,longlong param_2)

{
  FUN_1425b00b0(param_2 + 0x250);
  return;
}



// FUNCTION 14257f480 Unwind@14257f480 body=58 status=ok
// SIG undefined Unwind@14257f480(void)

void Unwind_14257f480(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x338);
  return;
}



// FUNCTION 14257f4c0 FUN_14257f4c0 body=82 status=ok
// SIG undefined FUN_14257f4c0(void)

undefined4 FUN_14257f4c0(longlong param_1)

{
  undefined4 uVar1;
  undefined1 local_58 [64];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1424a6be0(local_58,param_1);
    FUN_14257efe0(local_58,0);
    uVar1 = FUN_1424a9a40(local_58);
    FUN_140859a90(local_58);
  }
  return uVar1;
}



// FUNCTION 14257f520 Unwind@14257f520 body=32 status=ok
// SIG undefined Unwind@14257f520(void)

void Unwind_14257f520(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 14257f540 FUN_14257f540 body=159 status=ok
// SIG undefined FUN_14257f540(void)

bool FUN_14257f540(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 == param_2) {
    return true;
  }
  if (param_1 == 0) {
    return false;
  }
  if (param_2 == 0) {
    return false;
  }
  uVar1 = *(ushort *)(param_2 + 8);
  uVar2 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) != 0) {
    cVar3 = (uVar2 & 1) == 0;
    goto LAB_14257f5d5;
  }
  if ((short)uVar2 < 0) {
    iVar6 = *(int *)(param_1 + 0xc);
    if ((short)uVar1 < 0) goto LAB_14257f598;
LAB_14257f577:
    uVar4 = (int)(short)uVar1 >> 5;
  }
  else {
    iVar6 = (int)(short)uVar2 >> 5;
    if (-1 < (short)uVar1) goto LAB_14257f577;
LAB_14257f598:
    uVar4 = *(uint *)(param_2 + 0xc);
  }
  uVar5 = uVar4;
  if ((int)uVar4 < 1) {
    uVar5 = 0;
  }
  if ((uVar1 & 2) == 0) {
    param_2 = *(longlong *)(param_2 + 0x18);
  }
  else {
    param_2 = param_2 + 10;
  }
  cVar3 = FUN_14257e950(param_1,0,iVar6,param_2,(int)uVar4 >> 0x1f & uVar4,uVar5,0);
LAB_14257f5d5:
  return cVar3 == '\0';
}



// FUNCTION 14257f5e0 FUN_14257f5e0 body=57 status=ok
// SIG undefined FUN_14257f5e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_14257f5e0(void)

{
  _DAT_14c793860 = 0;
  _DAT_14c793870 = 0;
  _DAT_14c793878 = 0;
  _DAT_14c793880 = 0xffffffff;
  _DAT_14c793868 = 0;
  return 1;
}



// FUNCTION 14257f620 FUN_14257f620 body=404 status=ok
// SIG undefined FUN_14257f620(void)

uint FUN_14257f620(longlong *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (param_1[1] == 0) {
    if (param_1[2] == 0) {
      if (0x10ffff < param_2) {
        return *(uint *)(param_1 + 5);
      }
      lVar4 = param_1[9];
      if ((int)param_2 < *(int *)(lVar4 + 0x23328)) {
        if ((param_2 & 0xfffffc00) == 0xd800) {
          iVar3 = (param_2 >> 5) + 0x140;
        }
        else {
          iVar3 = (param_2 >> 5 & 0x3f) + *(int *)(lVar4 + (ulonglong)(param_2 >> 0xb) * 4);
        }
        iVar3 = (param_2 & 0x1f) + *(int *)(lVar4 + 0x880 + (longlong)iVar3 * 4);
      }
      else {
        iVar3 = *(int *)(lVar4 + 0x23318) + -4;
      }
      return *(uint *)(*(longlong *)(lVar4 + 0x23300) + (longlong)iVar3 * 4);
    }
    if (param_2 < 0xd800) {
      uVar1 = *(ushort *)(*param_1 + (ulonglong)(param_2 >> 5) * 2);
    }
    else {
      if (param_2 < 0x10000) {
        uVar2 = (param_2 >> 5) + 0x140;
        if (0xdbff < param_2) {
          uVar2 = param_2 >> 5;
        }
        uVar5 = (ulonglong)uVar2;
        lVar4 = *param_1;
      }
      else {
        iVar3 = 0x80;
        if (0x10ffff < param_2) goto LAB_14257f766;
        if (*(int *)((longlong)param_1 + 0x2c) <= (int)param_2) {
          iVar3 = (int)param_1[6];
          goto LAB_14257f766;
        }
        lVar4 = *param_1;
        uVar5 = (ulonglong)(param_2 >> 5 & 0x3f) +
                (ulonglong)*(ushort *)(lVar4 + 0x1040 + (ulonglong)(param_2 >> 0xb) * 2);
      }
      uVar1 = *(ushort *)(lVar4 + uVar5 * 2);
    }
    iVar3 = (param_2 & 0x1f) + (uint)uVar1 * 4;
LAB_14257f766:
    return *(uint *)(param_1[2] + (longlong)iVar3 * 4);
  }
  lVar4 = *param_1;
  if (param_2 < 0xd800) {
    uVar1 = *(ushort *)(lVar4 + (ulonglong)(param_2 >> 5) * 2);
  }
  else {
    if (param_2 < 0x10000) {
      uVar5 = (ulonglong)((param_2 >> 5) + 0x140);
      if (0xdbff < param_2) {
        uVar5 = (ulonglong)(param_2 >> 5);
      }
    }
    else {
      if (0x10ffff < param_2) {
        iVar3 = (int)param_1[3] + 0x80;
        goto LAB_14257f68b;
      }
      if (*(int *)((longlong)param_1 + 0x2c) <= (int)param_2) {
        iVar3 = (int)param_1[6];
        goto LAB_14257f68b;
      }
      uVar5 = (ulonglong)(param_2 >> 5 & 0x3f) +
              (ulonglong)*(ushort *)(lVar4 + 0x1040 + (ulonglong)(param_2 >> 0xb) * 2);
    }
    uVar1 = *(ushort *)(lVar4 + uVar5 * 2);
  }
  iVar3 = (param_2 & 0x1f) + (uint)uVar1 * 4;
LAB_14257f68b:
  return (uint)*(ushort *)(lVar4 + (longlong)iVar3 * 2);
}



// FUNCTION 14257f7c0 FUN_14257f7c0 body=383 status=ok
// SIG undefined FUN_14257f7c0(void)

longlong * FUN_14257f7c0(uint param_1,int *param_2,uint param_3,uint *param_4,int *param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  
  if (*param_5 < 1) {
    if ((((int)param_3 < 1) || (1 < param_1)) || (((ulonglong)param_2 & 3) != 0)) {
      *param_5 = 1;
    }
    else {
      if (((0xf < param_3) && (*param_2 == 0x54726932)) &&
         ((*(ushort *)(param_2 + 1) & 0xf) == param_1)) {
        uVar8 = (uint)*(ushort *)((longlong)param_2 + 6);
        uVar5 = (uint)*(ushort *)(param_2 + 2);
        iVar7 = -4;
        if (param_1 == 0) {
          iVar7 = *(ushort *)((longlong)param_2 + 6) - 4;
        }
        uVar3 = (uVar5 << (4U - (param_1 == 0) & 0x1f)) + uVar8 * 2 + 0x10;
        if (uVar3 <= param_3) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 10);
          uVar1 = *(ushort *)((longlong)param_2 + 0xe);
          plVar4 = (longlong *)FUN_1424da030(0x50);
          if (plVar4 == (longlong *)0x0) {
            *param_5 = 7;
            return (longlong *)0x0;
          }
          plVar4[1] = 0;
          plVar4[2] = 0;
          *(uint *)(plVar4 + 3) = uVar8;
          *(uint *)((longlong)plVar4 + 0x1c) = uVar5 << 2;
          *(undefined4 *)(plVar4 + 4) = uVar2;
          *(undefined8 *)((longlong)plVar4 + 0x24) = 0;
          *(uint *)((longlong)plVar4 + 0x2c) = (uint)uVar1 << 0xb;
          *(uint *)(plVar4 + 6) = iVar7 + uVar5 * 4;
          *(undefined8 *)((longlong)plVar4 + 0x34) = 0;
          *(undefined8 *)((longlong)plVar4 + 0x3c) = 0;
          plVar4[8] = 0;
          plVar4[9] = 0;
          plVar4[7] = (longlong)param_2;
          *(uint *)(plVar4 + 8) = uVar3;
          *plVar4 = (longlong)(param_2 + 4);
          lVar6 = (longlong)param_2 + (ulonglong)uVar8 * 2 + 0x10;
          uVar1 = (ushort)((uint)uVar2 >> 0x10);
          if (param_1 == 1) {
            plVar4[2] = lVar6;
            *(undefined4 *)((longlong)plVar4 + 0x24) = *(undefined4 *)(lVar6 + (ulonglong)uVar1 * 4)
            ;
            uVar5 = *(uint *)((longlong)param_2 + (ulonglong)uVar8 * 2 + 0x210);
LAB_14257f92b:
            *(uint *)(plVar4 + 5) = uVar5;
            if (param_4 != (uint *)0x0) {
              *param_4 = uVar3;
              return plVar4;
            }
            return plVar4;
          }
          if (param_1 == 0) {
            plVar4[1] = lVar6;
            *(uint *)((longlong)plVar4 + 0x24) =
                 (uint)*(ushort *)((longlong)(param_2 + 4) + (ulonglong)uVar1 * 2);
            uVar5 = (uint)*(ushort *)((longlong)param_2 + (ulonglong)uVar8 * 2 + 0x110);
            goto LAB_14257f92b;
          }
        }
      }
      *param_5 = 3;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14257f940 FUN_14257f940 body=78 status=ok
// SIG undefined FUN_14257f940(void)

void FUN_14257f940(longlong param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x44) != '\0') {
      FUN_1424da110(*(undefined8 *)(param_1 + 0x38));
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_1424da110(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x23300));
      FUN_1424da110(*(undefined8 *)(param_1 + 0x48));
    }
    FUN_1424da110(param_1);
    return;
  }
  return;
}



// FUNCTION 14257f990 FUN_14257f990 body=9 status=ok
// SIG undefined FUN_14257f990(void)

bool FUN_14257f990(longlong param_1)

{
  return *(longlong *)(param_1 + 0x48) == 0;
}



// FUNCTION 14257f9a0 FUN_14257f9a0 body=39 status=ok
// SIG undefined FUN_14257f9a0(void)

void FUN_14257f9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14257f9d0(param_1,0,0x110000,param_2,param_3,param_4);
  return;
}



// FUNCTION 14257f9d0 FUN_14257f9d0 body=1149 status=ok
// SIG undefined FUN_14257f9d0(void)

void FUN_14257f9d0(longlong *param_1,uint param_2,uint param_3,code *param_4,
                  code *UNRECOVERED_JUMPTABLE,undefined8 param_6)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint local_a8;
  uint local_a0;
  uint local_9c;
  longlong local_88;
  
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  uVar13 = (ulonglong)param_2;
  pcVar9 = (code *)&LAB_14257fef0;
  if (param_4 != (code *)0x0) {
    pcVar9 = param_4;
  }
  lVar1 = param_1[9];
  if (lVar1 == 0) {
    local_88 = *param_1;
    plVar10 = param_1 + 2;
    local_a8 = (uint)*(ushort *)(param_1 + 4);
    local_9c = (uint)*(ushort *)((longlong)param_1 + 0x22);
  }
  else {
    plVar10 = (longlong *)(lVar1 + 0x23300);
    local_a8 = *(uint *)(lVar1 + 0x23320);
    local_9c = *(uint *)(lVar1 + 0x23324);
    local_88 = 0;
  }
  lVar1 = *plVar10;
  iVar17 = *(int *)((longlong)param_1 + 0x2c);
  iVar5 = (*pcVar9)(param_6,*(undefined4 *)((longlong)param_1 + 0x24));
  iVar23 = 0;
  bVar2 = (int)param_2 < (int)param_3;
  uVar11 = param_2;
  if (((int)param_2 < (int)param_3) && ((int)param_2 < iVar17)) {
    iVar23 = 0;
    uVar12 = 0xffffffff;
    uVar22 = 0xffffffff;
    uVar15 = uVar13;
    do {
      uVar11 = (uint)uVar13;
      param_2 = uVar11 + 0x800;
      uVar6 = param_3;
      if ((int)param_2 < (int)param_3) {
        uVar6 = param_2;
      }
      uVar14 = uVar15;
      iVar3 = iVar23;
      if ((int)uVar11 < 0x10000) {
        if ((uVar11 & 0xfffff800) == 0xd800) {
          uVar21 = 0x6c0;
          if ((uVar13 & 0x400) == 0) {
            uVar21 = 0x800;
          }
          uVar6 = (uVar11 & 0x400) + 0xdc00;
          if ((int)param_3 <= (int)uVar6) {
            uVar6 = param_3;
          }
        }
        else {
          uVar21 = (int)uVar11 >> 5;
        }
LAB_14257fb90:
        if (uVar21 == local_a8) {
          iVar3 = iVar5;
          uVar22 = local_a8;
          if (((iVar23 != iVar5) && (uVar14 = uVar13, uVar12 = local_9c, (int)uVar15 < (int)uVar11))
             && (cVar4 = (*UNRECOVERED_JUMPTABLE)(param_6,uVar15,uVar11 - 1,iVar23), cVar4 == '\0'))
          {
            return;
          }
        }
        else {
          uVar16 = (uint)(uVar13 >> 5) & 0x3f;
          uVar18 = (ulonglong)uVar16;
          uVar7 = uVar6 >> 5 & 0x3f;
          if (0x7ff < (uVar6 ^ uVar11)) {
            uVar7 = 0x40;
          }
          param_2 = uVar11;
          uVar22 = uVar21;
          if (uVar16 < uVar7) {
            do {
              uVar6 = (uint)uVar13;
              uVar11 = (uint)uVar15;
              if (local_88 == 0) {
                uVar16 = *(uint *)(param_1[9] + 0x880 + ((longlong)(int)uVar21 + uVar18) * 4);
                if (uVar16 == uVar12) goto LAB_14257fc4a;
LAB_14257fc53:
                if (uVar16 == local_9c) {
                  if (((iVar23 != iVar5) &&
                      (bVar2 = (int)uVar11 < (int)uVar6, uVar11 = uVar6, bVar2)) &&
                     (cVar4 = (*UNRECOVERED_JUMPTABLE)(param_6,uVar15,uVar6 - 1,iVar23),
                     cVar4 == '\0')) {
                    return;
                  }
                  uVar13 = (ulonglong)(uVar6 + 0x20);
                  uVar15 = (ulonglong)uVar11;
                  iVar23 = iVar5;
                  uVar12 = local_9c;
                }
                else {
                  lVar20 = 0;
                  uVar14 = uVar15;
                  do {
                    if (lVar1 == 0) {
                      uVar11 = (uint)*(ushort *)(local_88 + (longlong)(int)uVar16 * 2 + lVar20);
                    }
                    else {
                      uVar11 = *(uint *)(lVar1 + (longlong)(int)uVar16 * 4 + lVar20 * 2);
                    }
                    iVar8 = (*pcVar9)(param_6,uVar11);
                    iVar19 = (int)uVar13;
                    uVar15 = uVar14;
                    iVar3 = iVar23;
                    if (((iVar8 != iVar23) && (uVar15 = uVar13, iVar3 = iVar8, (int)uVar14 < iVar19)
                        ) && (cVar4 = (*UNRECOVERED_JUMPTABLE)(param_6,uVar14,iVar19 + -1,iVar23),
                             cVar4 == '\0')) {
                      return;
                    }
                    iVar23 = iVar3;
                    uVar13 = (ulonglong)(iVar19 + 1);
                    lVar20 = lVar20 + 2;
                    uVar14 = uVar15;
                    uVar12 = uVar16;
                  } while (lVar20 != 0x40);
                }
              }
              else {
                uVar16 = (uint)*(ushort *)(local_88 + ((longlong)(int)uVar21 + uVar18) * 2) << 2;
                if (uVar16 != uVar12) goto LAB_14257fc53;
LAB_14257fc4a:
                if ((int)(uVar6 - uVar11) < 0x20) goto LAB_14257fc53;
                uVar13 = (ulonglong)(uVar6 + 0x20);
              }
              param_2 = (uint)uVar13;
              uVar18 = uVar18 + 1;
              uVar14 = uVar15;
              iVar3 = iVar23;
            } while (uVar18 != uVar7);
          }
        }
      }
      else {
        if (local_88 == 0) {
          uVar21 = *(uint *)(param_1[9] + (uVar13 >> 0xb) * 4);
          if (uVar21 == uVar22) goto LAB_14257fb77;
          goto LAB_14257fb90;
        }
        uVar21 = (uint)*(ushort *)(local_88 + 0x1040 + (uVar13 >> 0xb) * 2);
        if (uVar21 != uVar22) goto LAB_14257fb90;
LAB_14257fb77:
        if ((int)(uVar11 - (int)uVar15) < 0x800) goto LAB_14257fb90;
      }
      iVar23 = iVar3;
      uVar11 = (uint)uVar14;
      bVar2 = (int)param_2 < (int)param_3;
    } while (((int)param_2 < (int)param_3) &&
            (uVar13 = (ulonglong)param_2, uVar15 = uVar14, (int)param_2 < iVar17));
  }
  local_a0 = param_3;
  if ((int)param_2 < (int)param_3) {
    local_a0 = param_2;
  }
  uVar22 = uVar11;
  iVar17 = iVar23;
  if (bVar2) {
    if (local_88 == 0) {
      uVar12 = *(uint *)(*(longlong *)(param_1[9] + 0x23300) + -0x10 +
                        (longlong)*(int *)(param_1[9] + 0x23318) * 4);
    }
    else if (lVar1 == 0) {
      uVar12 = (uint)*(ushort *)(local_88 + (longlong)(int)param_1[6] * 2);
    }
    else {
      uVar12 = *(uint *)(lVar1 + (longlong)(int)param_1[6] * 4);
    }
    iVar5 = (*pcVar9)(param_6,uVar12);
    local_a0 = param_3;
    if (((iVar5 != iVar23) && (uVar22 = param_2, iVar17 = iVar5, (int)uVar11 < (int)param_2)) &&
       (cVar4 = (*UNRECOVERED_JUMPTABLE)(param_6,uVar11,param_2 - 1,iVar23), cVar4 == '\0')) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014257fe6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_6,uVar22,local_a0 - 1,iVar17);
  return;
}



// FUNCTION 14257fea0 FUN_14257fea0 body=71 status=ok
// SIG undefined FUN_14257fea0(void)

void FUN_14257fea0(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if ((param_2 & 0xfffffc00) == 0xd800) {
    FUN_14257f9d0(param_1,param_2 * 0x400 + -0x35f0000,param_2 * 0x400 + -0x35efc00,param_3,param_4,
                  param_5);
  }
  return;
}



// FUNCTION 14257ff00 FUN_14257ff00 body=266 status=ok
// SIG undefined FUN_14257ff00(void)

void FUN_14257ff00(byte *param_1,byte *param_2)

{
  bool bVar1;
  bool bVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  
  bVar4 = *param_2;
  if (bVar4 == 0) {
LAB_14258001a:
    *param_1 = 0;
    return;
  }
  bVar1 = false;
LAB_14257ff4e:
  pbVar3 = param_2 + 1;
  if (-1 < (char)bVar4) {
    bVar5 = (&DAT_1499f3d10)[bVar4];
    bVar2 = true;
    if (bVar5 != 2) {
      if (bVar5 == 1) {
        if (!bVar1) {
          bVar5 = *pbVar3;
          if ((-1 < (char)bVar5) && ((byte)((&DAT_1499f3d10)[bVar5] - 1) < 2)) goto LAB_14257ff75;
          bVar2 = false;
        }
      }
      else {
        if (bVar5 == 0) goto LAB_14257ff71;
LAB_14257ff30:
        bVar4 = bVar5;
        bVar2 = false;
      }
    }
    goto LAB_14257ff35;
  }
LAB_14257ff71:
  bVar5 = *pbVar3;
LAB_14257ff75:
  if (bVar5 != 0) {
    pbVar3 = param_2 + 2;
    bVar4 = bVar5;
    do {
      if (((char)bVar4 < '\0') || (bVar5 = (&DAT_1499f3d10)[bVar4], bVar5 == 0)) {
        bVar5 = *pbVar3;
      }
      else {
        if (bVar5 != 1) {
          bVar2 = true;
          if (bVar5 == 2) goto LAB_14257ff35;
          goto LAB_14257ff30;
        }
        bVar5 = *pbVar3;
        if (((char)bVar5 < '\0') || (1 < (byte)((&DAT_1499f3d10)[bVar5] - 1))) goto LAB_14257ffcf;
      }
      bVar4 = bVar5;
      pbVar3 = pbVar3 + 1;
      if (bVar4 == 0) break;
    } while( true );
  }
  goto LAB_14258001a;
LAB_14257ffcf:
  bVar2 = false;
LAB_14257ff35:
  bVar1 = bVar2;
  param_2 = pbVar3;
  *param_1 = bVar4;
  param_1 = param_1 + 1;
  bVar4 = *param_2;
  if (bVar4 == 0) goto LAB_14258001a;
  goto LAB_14257ff4e;
}



// FUNCTION 142580030 FUN_142580030 body=529 status=ok
// SIG undefined FUN_142580030(void)

int FUN_142580030(byte *param_1,byte *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  
  bVar1 = false;
  bVar2 = false;
  do {
    pbVar4 = param_1 + 1;
    bVar8 = *param_1;
    uVar9 = (uint)bVar8;
    if ((ulonglong)bVar8 == 0) {
      uVar9 = 0;
      goto LAB_142580130;
    }
    if ((char)bVar8 < '\0') {
LAB_142580081:
      bVar8 = *pbVar4;
LAB_142580084:
      pbVar4 = param_1 + 2;
      while (bVar8 != 0) {
        uVar9 = (uint)bVar8;
        if (((char)bVar8 < '\0') || (bVar8 = (&DAT_1499f3d10)[bVar8], bVar8 == 0)) {
          bVar8 = *pbVar4;
        }
        else {
          if (bVar8 != 1) {
            bVar1 = true;
            if (bVar8 == 2) goto LAB_142580130;
            goto LAB_14258011b;
          }
          bVar8 = *pbVar4;
          if (((char)bVar8 < '\0') || (1 < (byte)((&DAT_1499f3d10)[bVar8] - 1))) {
            bVar1 = false;
            goto LAB_142580130;
          }
        }
        pbVar4 = pbVar4 + 1;
      }
      uVar9 = 0;
      bVar1 = false;
    }
    else {
      bVar8 = (&DAT_1499f3d10)[bVar8];
      if (bVar8 != 2) {
        if (bVar8 != 1) {
          if (bVar8 == 0) goto LAB_142580081;
LAB_14258011b:
          bVar1 = false;
          uVar9 = (uint)bVar8;
          goto LAB_142580130;
        }
        if (!bVar1) {
          bVar8 = *pbVar4;
          if (((char)bVar8 < '\0') || (1 < (byte)((&DAT_1499f3d10)[bVar8] - 1))) {
            bVar1 = false;
            goto LAB_142580130;
          }
          goto LAB_142580084;
        }
      }
      bVar1 = true;
    }
LAB_142580130:
    pbVar5 = param_2 + 1;
    bVar8 = *param_2;
    uVar7 = (uint)bVar8;
    iVar3 = 0;
    if ((ulonglong)bVar8 == 0) {
      uVar7 = 0;
      goto LAB_1425801f0;
    }
    if ((char)bVar8 < '\0') {
LAB_14258015a:
      bVar8 = *pbVar5;
LAB_14258015d:
      uVar6 = (ulonglong)bVar8;
      pbVar5 = param_2 + 2;
      while (bVar8 != 0) {
        uVar7 = (uint)uVar6;
        if (((char)uVar6 < '\0') || (bVar8 = (&DAT_1499f3d10)[uVar6], bVar8 == 0)) {
          uVar6 = (ulonglong)*pbVar5;
        }
        else {
          if (bVar8 != 1) {
            bVar2 = true;
            if (bVar8 == 2) goto LAB_1425801f0;
            goto LAB_1425801e5;
          }
          uVar6 = (ulonglong)*pbVar5;
          if (((char)*pbVar5 < '\0') || (1 < (byte)((&DAT_1499f3d10)[uVar6] - 1))) {
            bVar2 = false;
            goto LAB_1425801f0;
          }
        }
        pbVar5 = pbVar5 + 1;
        bVar8 = (byte)uVar6;
      }
      uVar7 = 0;
      bVar2 = false;
    }
    else {
      bVar8 = (&DAT_1499f3d10)[bVar8];
      if (bVar8 != 2) {
        if (bVar8 != 1) {
          if (bVar8 == 0) goto LAB_14258015a;
LAB_1425801e5:
          bVar2 = false;
          uVar7 = (uint)bVar8;
          goto LAB_1425801f0;
        }
        if (!bVar2) {
          bVar8 = *pbVar5;
          if (((char)bVar8 < '\0') || (1 < (byte)((&DAT_1499f3d10)[bVar8] - 1))) {
            bVar2 = false;
            goto LAB_1425801f0;
          }
          goto LAB_14258015d;
        }
      }
      bVar2 = true;
    }
LAB_1425801f0:
    if (((char)uVar7 == '\0' && (char)uVar9 == '\0') ||
       (iVar3 = uVar9 - uVar7, param_1 = pbVar4, param_2 = pbVar5, iVar3 != 0)) {
      return iVar3;
    }
  } while( true );
}



// FUNCTION 142580260 FUN_142580260 body=157 status=ok
// SIG undefined FUN_142580260(void)

longlong FUN_142580260(char *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_142580300(param_3);
  if (cVar1 != '\0') {
    if (param_1 == (char *)0x0) {
      *param_3 = 1;
    }
    else if ((*param_1 != '\0') &&
            ((uVar2 = FUN_142580500(param_1,param_2,param_3), uVar2 < DAT_14c7938d0 ||
             ((((*param_1 == 'x' && (param_1[1] == '-')) &&
               (cVar1 = FUN_142580300(param_3), cVar1 != '\0')) &&
              ((param_1[2] != '\0' &&
               (uVar2 = FUN_142580500(param_1 + 2,param_2,param_3), uVar2 < DAT_14c7938d0)))))))) {
      return (ulonglong)*(ushort *)(DAT_14c793888 + (ulonglong)uVar2 * 2) * 2 + DAT_14c7938c0;
    }
  }
  return 0;
}



// FUNCTION 142580300 FUN_142580300 body=507 status=ok
// SIG undefined FUN_142580300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_142580300(int *param_1)

{
  ushort uVar1;
  char cVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint uVar5;
  
  if (0 < *param_1) goto LAB_1425804e8;
  if ((DAT_14c793900 == 2) || (cVar2 = FUN_142501800(&DAT_14c793900), cVar2 == '\0')) {
    if (0 < DAT_14c793904) {
      *param_1 = DAT_14c793904;
    }
    goto LAB_1425804e8;
  }
  FUN_1424d6720(0x11,FUN_1425807c0);
  uVar3 = FUN_1424e51c0(0,&DAT_1499f3e89,"cnvalias",&LAB_142580830,0,param_1);
  if (*param_1 < 1) {
    puVar4 = (uint *)FUN_142532380(uVar3);
    uVar5 = *puVar4;
    if (uVar5 < 8) {
      *param_1 = 3;
      FUN_142532330(uVar3);
    }
    else {
      DAT_14c7938d0 = puVar4[1];
      _DAT_14c7938d4 = puVar4[2];
      _DAT_14c7938d8 = puVar4[3];
      DAT_14c7938dc = puVar4[4];
      _DAT_14c7938e0 = puVar4[5];
      _DAT_14c7938e4 = puVar4[6];
      _DAT_14c7938e8 = puVar4[7];
      _DAT_14c7938ec = puVar4[8];
      if (uVar5 != 8) {
        _DAT_14c7938f0 = puVar4[9];
      }
      DAT_14c793888 = (longlong)puVar4 + (ulonglong)(uVar5 * 2 + 2) * 2;
      uVar5 = DAT_14c7938d0 + uVar5 * 2 + 2;
      _DAT_14c793890 = (longlong)puVar4 + (ulonglong)uVar5 * 2;
      uVar5 = _DAT_14c7938d4 + uVar5;
      DAT_14c793898 = (longlong)puVar4 + (ulonglong)uVar5 * 2;
      uVar5 = _DAT_14c7938d8 + uVar5;
      DAT_14c7938a0 = (longlong)puVar4 + (ulonglong)uVar5 * 2;
      uVar5 = DAT_14c7938dc + uVar5;
      _DAT_14c7938a8 = (longlong)puVar4 + (ulonglong)uVar5 * 2;
      uVar5 = _DAT_14c7938e0 + uVar5;
      DAT_14c7938b0 = (longlong)puVar4 + (ulonglong)uVar5 * 2;
      uVar5 = _DAT_14c7938e4 + uVar5;
      DAT_14c7938f8 = uVar3;
      if (_DAT_14c7938e8 != 0) {
        uVar1 = *(ushort *)((longlong)puVar4 + (ulonglong)uVar5 * 2);
        if (uVar1 < 2) {
          DAT_14c7938b8 = (undefined *)((longlong)puVar4 + (ulonglong)uVar5 * 2);
          DAT_14c7938c0 = (longlong)puVar4 + (ulonglong)(_DAT_14c7938e8 + uVar5) * 2;
          DAT_14c7938c8 = DAT_14c7938c0;
          if (uVar1 != 0) {
            DAT_14c7938c8 =
                 (longlong)puVar4 + (ulonglong)(_DAT_14c7938ec + _DAT_14c7938e8 + uVar5) * 2;
          }
          goto LAB_1425804d4;
        }
      }
      DAT_14c7938b8 = &DAT_1499f3e8e;
      DAT_14c7938c0 = (longlong)puVar4 + (ulonglong)(_DAT_14c7938e8 + uVar5) * 2;
      DAT_14c7938c8 = DAT_14c7938c0;
    }
  }
LAB_1425804d4:
  DAT_14c793904 = *param_1;
  FUN_1425019c0(&DAT_14c793900);
LAB_1425804e8:
  return *param_1 < 1;
}



// FUNCTION 142580500 FUN_142580500 body=613 status=ok
// SIG undefined FUN_142580500(void)

void FUN_142580500(byte *param_1,undefined1 *param_2,undefined4 *param_3)

{
  byte bVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  size_t sVar10;
  byte *pbVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  byte *pbVar16;
  ulonglong uVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_c8 [40];
  byte *local_a0;
  undefined4 *local_98;
  undefined1 *local_90;
  byte local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  sVar2 = *DAT_14c7938b8;
  pbVar11 = param_1;
  if (sVar2 != 0) {
    sVar10 = strlen((char *)param_1);
    if (0x3b < sVar10) {
      *param_3 = 0xf;
      goto LAB_14258076e;
    }
    bVar15 = *param_1;
    pbVar11 = local_88;
    if (bVar15 != 0) {
      bVar19 = false;
LAB_1425805b1:
      pbVar16 = param_1 + 1;
      if (-1 < (char)bVar15) {
        bVar1 = (&DAT_1499f3d10)[bVar15];
        bVar7 = true;
        if (bVar1 != 2) {
          if (bVar1 == 1) {
            if (!bVar19) {
              bVar1 = *pbVar16;
              if ((-1 < (char)bVar1) && ((byte)((&DAT_1499f3d10)[bVar1] - 1) < 2))
              goto LAB_1425805db;
              bVar7 = false;
            }
          }
          else {
            if (bVar1 == 0) goto LAB_1425805d7;
LAB_142580592:
            bVar15 = bVar1;
            bVar7 = false;
          }
        }
        goto LAB_142580598;
      }
LAB_1425805d7:
      bVar1 = *pbVar16;
LAB_1425805db:
      if (bVar1 != 0) {
        pbVar16 = param_1 + 2;
        bVar15 = bVar1;
        do {
          if (((char)bVar15 < '\0') || (bVar1 = (&DAT_1499f3d10)[bVar15], bVar1 == 0)) {
            bVar1 = *pbVar16;
          }
          else {
            if (bVar1 != 1) {
              bVar7 = true;
              if (bVar1 == 2) goto LAB_142580598;
              goto LAB_142580592;
            }
            bVar1 = *pbVar16;
            if (((char)bVar1 < '\0') || (1 < (byte)((&DAT_1499f3d10)[bVar1] - 1)))
            goto LAB_142580637;
          }
          pbVar16 = pbVar16 + 1;
          bVar15 = bVar1;
          if (bVar1 == 0) break;
        } while( true );
      }
    }
LAB_142580687:
    *pbVar11 = 0;
    pbVar11 = local_88;
  }
  local_a0 = pbVar11;
  lVar6 = DAT_14c7938c8;
  lVar5 = DAT_14c7938c0;
  lVar3 = DAT_14c793898;
  uVar14 = 0;
  uVar13 = DAT_14c7938dc;
  uVar18 = DAT_14c7938dc >> 1;
  local_98 = param_3;
  local_90 = param_2;
  do {
    uVar17 = (ulonglong)uVar18;
    uVar12 = (ulonglong)*(ushort *)(lVar3 + uVar17 * 2);
    if (sVar2 == 0) {
      iVar9 = FUN_142580030(local_a0,lVar5 + uVar12 * 2);
    }
    else {
      iVar9 = strcmp((char *)local_a0,(char *)(lVar6 + uVar12 * 2));
    }
    lVar4 = DAT_14c7938a0;
    uVar8 = uVar18;
    if ((-1 < iVar9) && (uVar8 = uVar13, uVar14 = uVar18, iVar9 == 0)) {
      if (*(short *)(DAT_14c7938a0 + uVar17 * 2) < 0) {
        *local_98 = 0xffffff86;
      }
      if (local_90 != (undefined1 *)0x0) {
        if (((char)DAT_14c7938b8[1] == '\0') ||
           (bVar19 = true, (*(byte *)(lVar4 + 1 + uVar17 * 2) & 0x40) == 0)) {
          bVar19 = (char)DAT_14c7938b8[1] == '\0';
        }
        *local_90 = bVar19;
      }
      break;
    }
    uVar13 = uVar8;
    uVar8 = uVar13 + uVar14 >> 1;
    bVar19 = uVar18 != uVar8;
    uVar18 = uVar8;
  } while (bVar19);
LAB_14258076e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
LAB_142580637:
  bVar7 = false;
LAB_142580598:
  bVar19 = bVar7;
  *pbVar11 = bVar15;
  pbVar11 = pbVar11 + 1;
  bVar15 = *pbVar16;
  param_1 = pbVar16;
  if (bVar15 == 0) goto LAB_142580687;
  goto LAB_1425805b1;
}



// FUNCTION 1425807a0 FUN_1425807a0 body=29 status=ok
// SIG undefined FUN_1425807a0(void)

undefined2 FUN_1425807a0(void)

{
  char cVar1;
  undefined2 uVar2;
  
  cVar1 = FUN_142580300();
  uVar2 = (undefined2)DAT_14c7938d0;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1425807c0 FUN_1425807c0 body=99 status=ok
// SIG undefined FUN_1425807c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1425807c0(void)

{
  undefined4 uVar1;
  
  if (DAT_14c7938f8 != 0) {
    FUN_142532330();
    DAT_14c7938f8 = 0;
  }
  uVar1 = DAT_14c793900;
  LOCK();
  DAT_14c793900 = 0;
  UNLOCK();
  _DAT_14c7938e8 = 0;
  _DAT_14c7938f0 = 0;
  _DAT_14c7938d8 = 0;
  _DAT_14c7938e0 = 0;
  DAT_14c7938c8 = 0;
  _DAT_14c7938d0 = 0;
  DAT_14c7938b8 = 0;
  DAT_14c7938c0 = 0;
  _DAT_14c7938a8 = 0;
  DAT_14c7938b0 = 0;
  DAT_14c793898 = 0;
  DAT_14c7938a0 = 0;
  DAT_14c793888 = 0;
  _DAT_14c793890 = 0;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 142580870 FUN_142580870 body=30 status=ok
// SIG undefined FUN_142580870(void)

void FUN_142580870(longlong param_1)

{
  FUN_1424da110(*(undefined8 *)(param_1 + 8));
  FUN_1424da110(param_1);
  return;
}



// FUNCTION 1425808b0 FUN_1425808b0 body=107 status=ok
// SIG undefined FUN_1425808b0(void)

char * FUN_1425808b0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar7;
  char *_Str;
  size_t sVar6;
  
  lVar4 = DAT_14c7938c0;
  puVar3 = *(uint **)(param_1 + 8);
  uVar7 = (ulonglong)*puVar3;
  if (uVar7 != 0) {
    uVar2 = puVar3[1];
    if (uVar2 < *(ushort *)(DAT_14c7938b0 + uVar7 * 2)) {
      lVar1 = DAT_14c7938b0 + uVar7 * 2;
      puVar3[1] = uVar2 + 1;
      _Str = (char *)(lVar4 + (ulonglong)*(ushort *)(lVar1 + 2 + (ulonglong)uVar2 * 2) * 2);
      if (param_2 == (undefined4 *)0x0) {
        return _Str;
      }
      sVar6 = strlen(_Str);
      uVar5 = (undefined4)sVar6;
      goto LAB_14258090f;
    }
  }
  uVar5 = 0;
  _Str = (char *)0x0;
  if (param_2 == (undefined4 *)0x0) {
    return (char *)0x0;
  }
LAB_14258090f:
  *param_2 = uVar5;
  return _Str;
}



// FUNCTION 142580940 FUN_142580940 body=94 status=ok
// SIG undefined FUN_142580940(void)

char * FUN_142580940(longlong param_1,undefined4 *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  char *_Str;
  size_t sVar5;
  
  lVar3 = DAT_14c7938c0;
  lVar2 = DAT_14c793888;
  uVar1 = **(ushort **)(param_1 + 8);
  if (uVar1 < DAT_14c7938d0) {
    **(ushort **)(param_1 + 8) = uVar1 + 1;
    _Str = (char *)(lVar3 + (ulonglong)*(ushort *)(lVar2 + (ulonglong)uVar1 * 2) * 2);
    if (param_2 == (undefined4 *)0x0) {
      return _Str;
    }
    sVar5 = strlen(_Str);
    uVar4 = (undefined4)sVar5;
  }
  else {
    uVar4 = 0;
    _Str = (char *)0x0;
    if (param_2 == (undefined4 *)0x0) {
      return (char *)0x0;
    }
  }
  *param_2 = uVar4;
  return _Str;
}



// FUNCTION 1425809b0 FUN_1425809b0 body=719 status=ok
// SIG undefined FUN_1425809b0(void)

undefined8 FUN_1425809b0(void)

{
  ushort uVar1;
  char cVar2;
  DWORD DVar3;
  GEOID Location;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  _TIME_DYNAMIC_ZONE_INFORMATION local_3d0;
  undefined1 local_220 [200];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_4c [4];
  undefined4 local_48;
  undefined2 local_44;
  longlong local_40;
  undefined2 local_38;
  undefined1 local_36;
  int local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_34 = 0;
  local_44 = 0;
  local_48 = 0;
  local_36 = 0;
  local_38 = 0;
  memset(&local_3d0,0,0x1b0);
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  DVar3 = GetDynamicTimeZoneInformation(&local_3d0);
  if (DVar3 == 0xffffffff) {
    return 0;
  }
  Location = GetUserGeoID(0x10);
  iVar4 = GetGeoInfoW(Location,4,(LPWSTR)&local_48,3,0);
  FUN_1424db4d0(&local_38,3,0,&local_48,3,&local_34);
  lVar5 = FUN_1424edad0(0,"windowsZones",&local_34);
  FUN_1424ecc30(lVar5,"mapTimezones",lVar5,&local_34);
  FUN_1424db4d0(&local_158,0x80,0,local_3d0.TimeZoneKeyName,0xffffffff,&local_34);
  if ((local_34 < 1) && (local_3d0.TimeZoneKeyName[0] != L'\0')) {
    local_40 = lVar5;
    FUN_1424ea920(local_220);
    lVar5 = local_40;
    FUN_1424ecc30(local_40,&local_158,local_220,&local_34);
    if (local_34 < 1) {
      if ((iVar4 == 0) ||
         (lVar6 = FUN_1424ecf00(local_220,&local_38,local_4c,&local_34), lVar6 == 0)) {
        local_34 = 0;
        lVar6 = FUN_1424ecf00(local_220,&DAT_149939ac3,local_4c,&local_34);
      }
      if (local_34 < 1) {
        uVar8 = 0;
        while (uVar1 = *(ushort *)(lVar6 + uVar8 * 2), (uVar1 & 0xffdf) != 0) {
          *(char *)((longlong)&local_d8 + uVar8) = (char)uVar1;
          uVar8 = uVar8 + 1;
        }
        *(undefined1 *)((longlong)&local_d8 + (uVar8 & 0xffffffff)) = 0;
        cVar2 = (char)local_d8;
        FUN_1424ea970(local_220);
        if (cVar2 != '\0') {
          uVar7 = FUN_142503b70(&local_d8);
          goto joined_r0x000142580c0b;
        }
        goto LAB_142580c08;
      }
    }
    FUN_1424ea970(local_220);
  }
LAB_142580c08:
  uVar7 = 0;
joined_r0x000142580c0b:
  if (lVar5 != 0) {
    FUN_1424ea9f0(lVar5);
  }
  return uVar7;
}



// FUNCTION 142580c80 Unwind@142580c80 body=56 status=ok
// SIG undefined Unwind@142580c80(void)

void Unwind_142580c80(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x3c8) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x3c8));
  }
  return;
}



// FUNCTION 142580cc0 FUN_142580cc0 body=571 status=ok
// SIG undefined FUN_142580cc0(void)

uint FUN_142580cc0(longlong param_1,uint *param_2,uint param_3,uint param_4,char param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar1 = *param_2;
  uVar7 = (ulonglong)uVar1;
  if (((int)param_4 < 0xf5) && (uVar7 = (ulonglong)uVar1, uVar1 != param_3)) {
    lVar8 = (longlong)(int)uVar1;
    if (0xef < (int)param_4) {
      uVar7 = (ulonglong)uVar1;
      if (((byte)(&DAT_14bd49f97)[*(byte *)(param_1 + lVar8) >> 4] >> (param_4 & 7) & 1) != 0) {
        uVar7 = lVar8 + 1;
        if ((uint)uVar7 == param_3) {
          uVar7 = (ulonglong)param_3;
        }
        else {
          uVar3 = *(byte *)(param_1 + uVar7) ^ 0x80;
          if ((byte)uVar3 < 0x40) {
            uVar9 = lVar8 + 2;
            uVar7 = (ulonglong)param_3;
            if ((uint)uVar9 != param_3) {
              uVar4 = *(byte *)(param_1 + uVar9) ^ 0x80;
              uVar7 = uVar9 & 0xffffffff;
              if ((byte)uVar4 < 0x40) {
                uVar6 = uVar1 + 3;
                uVar4 = uVar3 << 6 |
                        (*(byte *)(param_1 + lVar8) & 0x3f) << 0xc | (param_4 & 7) << 0x12 | uVar4;
                if ((param_5 < '\x01') || (uVar4 < 0xfdd0)) goto LAB_142580ef5;
                if (0xfdef < uVar4) {
                  if (0x10ffff < uVar4) goto LAB_142580ef5;
                  uVar3 = uVar4 & 0xfffe;
                  goto LAB_142580e8a;
                }
                goto LAB_142580e9c;
              }
            }
          }
        }
      }
      goto LAB_142580e94;
    }
    if ((int)param_4 < 0xe0) {
      uVar7 = (ulonglong)uVar1;
      if (0xc1 < (int)param_4) {
        uVar3 = *(byte *)(param_1 + lVar8) ^ 0x80;
        uVar7 = (ulonglong)uVar1;
        if ((byte)uVar3 < 0x40) {
          *param_2 = uVar1 + 1;
          uVar4 = param_4 * 0x40 - 0x3000;
LAB_142580d9d:
          return uVar4 | uVar3;
        }
      }
      goto LAB_142580e94;
    }
    param_4 = param_4 & 0xf;
    bVar2 = *(byte *)(param_1 + lVar8);
    if (param_5 == -2) {
      bVar2 = bVar2 + 0x80;
      uVar6 = uVar1;
      if ((bVar2 < 0x40) && ((param_4 != 0 || (0x1f < bVar2)))) {
        uVar3 = (uint)(lVar8 + 1);
        uVar6 = param_3;
        if ((uVar3 != param_3) &&
           (uVar4 = *(byte *)(param_1 + lVar8 + 1) ^ 0x80, uVar6 = uVar3, (byte)uVar4 < 0x40)) {
          *param_2 = uVar1 + 2;
          uVar3 = (uint)bVar2 << 6;
          uVar4 = param_4 << 0xc | uVar4;
          goto LAB_142580d9d;
        }
      }
      goto LAB_142580ee2;
    }
    uVar7 = (ulonglong)uVar1;
    if (((byte)(&DAT_14bd49f86)[param_4] >> (bVar2 >> 5) & 1) == 0) goto LAB_142580e94;
    uVar9 = lVar8 + 1;
    uVar7 = (ulonglong)param_3;
    if ((uint)uVar9 == param_3) goto LAB_142580e94;
    uVar5 = *(byte *)(param_1 + uVar9) ^ 0x80;
    uVar7 = uVar9 & 0xffffffff;
    if (0x3f < (byte)uVar5) goto LAB_142580e94;
    uVar6 = uVar1 + 2;
    uVar3 = (bVar2 & 0x3f) << 6 | param_4 << 0xc;
    uVar4 = uVar3 | uVar5;
    if ((param_5 < '\x01') || (uVar4 < 0xfdd0)) goto LAB_142580ef5;
    if (0xfdef < uVar4) {
      uVar3 = uVar3 | uVar5 & 0xfffffffe;
LAB_142580e8a:
      if (uVar3 != 0xfffe) goto LAB_142580ef5;
    }
  }
  else {
LAB_142580e94:
    uVar6 = (uint)uVar7;
    if (param_5 < '\0') {
LAB_142580ee2:
      uVar4 = -(uint)(param_5 != -3) | 0xfffd;
      goto LAB_142580ef5;
    }
  }
LAB_142580e9c:
  uVar4 = (&DAT_1499f3fa0)[(int)(uVar6 - uVar1)];
LAB_142580ef5:
  *param_2 = uVar6;
  return uVar4;
}



// FUNCTION 142580f00 FUN_142580f00 body=586 status=ok
// SIG undefined FUN_142580f00(void)

uint FUN_142580f00(longlong param_1,int param_2,int *param_3,uint param_4,char param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  
  if (((char)(byte)param_4 < -0x40) && (iVar3 = *param_3, param_2 < iVar3)) {
    lVar6 = (longlong)iVar3;
    iVar8 = iVar3 + -1;
    bVar1 = *(byte *)(param_1 + -1 + lVar6);
    uVar4 = (uint)bVar1;
    if (0x32 < (byte)(bVar1 + 0x3e)) {
      if ((param_2 < iVar8) && ((char)bVar1 < -0x40)) {
        param_4 = param_4 & 0x3f;
        iVar8 = iVar3 + -2;
        bVar2 = *(byte *)(param_1 + -2 + lVar6);
        uVar9 = (uint)bVar2;
        if ((byte)(bVar2 + 0x20) < 0x15) {
          if (bVar2 < 0xf0) {
            uVar9 = uVar9 & 0xf;
            if (param_5 == -2) {
              if ((0x1f < (byte)(uVar4 ^ 0x80)) || ((char)uVar9 != '\0')) {
                *param_3 = iVar8;
                return (uVar4 ^ 0x80) << 6 | uVar9 << 0xc | param_4;
              }
              goto LAB_142581136;
            }
            if (((byte)(&DAT_14bd49f86)[uVar9] >> (bVar1 >> 5) & 1) != 0) {
              *param_3 = iVar8;
              param_4 = (uVar4 & 0x3f) << 6 | uVar9 << 0xc | param_4;
              if (param_5 < '\x01') {
                return param_4;
              }
              if (param_4 < 0xfdd0) {
                return param_4;
              }
              uVar4 = param_4;
              if ((~param_4 & 0xfffe) == 0) {
                uVar4 = 0xffff;
              }
              if (0xfdef < param_4) {
                return uVar4;
              }
              return 0xffff;
            }
          }
          else if (((byte)(&DAT_14bd49f97)[bVar1 >> 4] >> (uVar9 & 7) & 1) != 0) {
            *param_3 = iVar8;
            uVar4 = 0xffff;
            goto LAB_142581131;
          }
        }
        else if ((((param_2 < iVar8) && ((char)bVar2 < -0x40)) &&
                 (bVar1 = *(byte *)(param_1 + -3 + lVar6), (byte)(bVar1 + 0x10) < 5)) &&
                (uVar5 = bVar1 & 7, ((byte)(&DAT_14bd49f97)[bVar2 >> 4] >> uVar5 & 1) != 0)) {
          *param_3 = iVar3 + -3;
          param_4 = (uVar4 & 0x3f) << 6 | (uVar9 & 0x3f) << 0xc | uVar5 << 0x12 | param_4;
          if (param_5 < '\x01') {
            return param_4;
          }
          if (param_4 < 0xfdd0) {
            return param_4;
          }
          if (0xfdef < param_4) {
            if (0x10ffff < param_4) {
              return param_4;
            }
            if ((param_4 & 0xfffe) != 0xfffe) {
              return param_4;
            }
          }
          return 0x10ffff;
        }
      }
      goto LAB_14258112c;
    }
    if (bVar1 < 0xe0) {
      *param_3 = iVar8;
      return (uVar4 * 0x40 + (param_4 & 0x3f)) - 0x3000;
    }
    pbVar7 = &DAT_14bd49f86 + (uVar4 & 0xf);
    if (0xef < bVar1) {
      pbVar7 = &DAT_14bd49f97 + (param_4 >> 4 & 0xf);
    }
    uVar9 = (uint)(byte)((byte)param_4 >> 5);
    if (0xef < bVar1) {
      uVar9 = uVar4;
    }
    if ((*pbVar7 >> (uVar9 & 7) & 1) == 0) goto LAB_14258112c;
    *param_3 = iVar8;
    uVar4 = 0x9f;
  }
  else {
LAB_14258112c:
    uVar4 = 0x15;
  }
LAB_142581131:
  if (-1 < param_5) {
    return uVar4;
  }
LAB_142581136:
  return -(uint)(param_5 != -3) | 0xfffd;
}



// FUNCTION 142581150 FUN_142581150 body=280 status=ok
// SIG undefined FUN_142581150(void)

ulonglong FUN_142581150(longlong param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar5 = (ulonglong)param_3;
  if ((int)param_3 <= param_2) {
    return uVar5;
  }
  lVar9 = (longlong)(int)param_3;
  bVar1 = *(byte *)(param_1 + lVar9);
  if (-0x41 < (char)bVar1) {
    return uVar5;
  }
  uVar8 = lVar9 - 1;
  bVar2 = *(byte *)(param_1 + -1 + lVar9);
  if ((byte)(bVar2 + 0x3e) < 0x33) {
    if (bVar2 < 0xe0) goto LAB_142581229;
    if (bVar2 < 0xf0) {
      pbVar7 = &DAT_14bd49f86 + (bVar2 & 0xf);
      uVar6 = (uint)(bVar1 >> 5);
    }
    else {
      pbVar7 = &DAT_14bd49f97 + (bVar1 >> 4);
      uVar6 = bVar2 & 7;
    }
    bVar3 = *pbVar7;
  }
  else {
    if ((int)uVar8 <= param_2) {
      return uVar5;
    }
    if (-0x41 < (char)bVar2) {
      return uVar5;
    }
    uVar8 = lVar9 - 2;
    bVar1 = *(byte *)(param_1 + -2 + lVar9);
    if (0x14 < (byte)(bVar1 + 0x20)) {
      if ((int)uVar8 <= param_2) {
        return uVar5;
      }
      if (-0x41 < (char)bVar1) {
        return uVar5;
      }
      bVar2 = *(byte *)(param_1 + -3 + lVar9);
      if (4 < (byte)(bVar2 + 0x10)) {
        return uVar5;
      }
      if (((byte)(&DAT_14bd49f97)[bVar1 >> 4] >> (bVar2 & 7) & 1) == 0) {
        return uVar5;
      }
      uVar8 = lVar9 - 3U & 0xffffffff;
      goto LAB_142581229;
    }
    pbVar7 = &DAT_14bd49f86 + (bVar1 & 0xf);
    if (0xef < bVar1) {
      pbVar7 = &DAT_14bd49f97 + (bVar2 >> 4);
    }
    bVar3 = *pbVar7;
    bVar4 = bVar1 & 7;
    if (0xef >= bVar1) {
      bVar4 = bVar2 >> 5;
    }
    uVar6 = (uint)bVar4;
  }
  if ((bVar3 >> uVar6 & 1) == 0) {
    return uVar5;
  }
LAB_142581229:
  return uVar8 & 0xffffffff;
}



// FUNCTION 142581270 FUN_142581270 body=240 status=ok
// SIG undefined FUN_142581270(void)

void FUN_142581270(undefined8 *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  
  if (*param_2 < 1) {
    lVar4 = 0;
    FUN_14257f9a0(&PTR_DAT_1499f3fe8,0,FUN_142581380,param_1);
    do {
      uVar3 = *(uint *)((longlong)&DAT_1499f4080 + lVar4) & 0x1fffff;
      (*(code *)param_1[2])(*param_1,uVar3,uVar3 + 1);
      lVar4 = lVar4 + 4;
    } while (lVar4 != 0xa0);
    lVar4 = 0;
    cVar2 = '\0';
    do {
      cVar1 = (&DAT_1499f4120)[lVar4];
      if (cVar1 != cVar2) {
        (*(code *)param_1[1])(*param_1,lVar4 + 0x620);
        cVar2 = cVar1;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x2a0);
    if (cVar2 != '\0') {
      (*(code *)param_1[1])(*param_1,0x8c0);
    }
    lVar4 = 0;
    cVar2 = '\0';
    do {
      cVar1 = (&DAT_1499f43c0)[lVar4];
      if (cVar1 != cVar2) {
        (*(code *)param_1[1])(*param_1,lVar4 + 0x10ac0);
        cVar2 = cVar1;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x264);
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142581372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_1[1])(*param_1,0x10d24);
      return;
    }
  }
  return;
}



// FUNCTION 142581380 FUN_142581380 body=20 status=ok
// SIG undefined FUN_142581380(void)

undefined8 FUN_142581380(undefined8 *param_1)

{
  (*(code *)param_1[1])(*param_1);
  return 1;
}



// FUNCTION 1425813e0 FUN_1425813e0 body=123 status=ok
// SIG undefined FUN_1425813e0(void)

ushort FUN_1425813e0(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0xe70;
    if (0x10ffff < param_1) goto LAB_14258144c;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_1499f5670 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_1499f4630 + (ulonglong)uVar1 * 2) * 4;
LAB_14258144c:
  return *(ushort *)(&DAT_1499f4630 + lVar2 * 2) & 0x1f;
}



// FUNCTION 142581460 FUN_142581460 body=125 status=ok
// SIG undefined FUN_142581460(void)

ushort FUN_142581460(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0xe70;
    if (0x10ffff < param_1) goto LAB_1425814cc;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_1499f5670 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_1499f4630 + (ulonglong)uVar1 * 2) * 4;
LAB_1425814cc:
  return *(ushort *)(&DAT_1499f4630 + lVar2 * 2) >> 0xc & 0xff01;
}



// FUNCTION 1425814e0 FUN_1425814e0 body=125 status=ok
// SIG undefined FUN_1425814e0(void)

ushort FUN_1425814e0(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0xe70;
    if (0x10ffff < param_1) goto LAB_14258154c;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_1499f5670 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_1499f4630 + (ulonglong)uVar1 * 2) * 4;
LAB_14258154c:
  return *(ushort *)(&DAT_1499f4630 + lVar2 * 2) >> 0xb & 0xff01;
}



// FUNCTION 142581560 FUN_142581560 body=125 status=ok
// SIG undefined FUN_142581560(void)

ushort FUN_142581560(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0xe70;
    if (0x10ffff < param_1) goto LAB_1425815cc;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_1499f5670 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_1499f4630 + (ulonglong)uVar1 * 2) * 4;
LAB_1425815cc:
  return *(ushort *)(&DAT_1499f4630 + lVar2 * 2) >> 10 & 0xff01;
}



// FUNCTION 1425815e0 FUN_1425815e0 body=126 status=ok
// SIG undefined FUN_1425815e0(void)

ushort FUN_1425815e0(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0xe70;
    if (0x10ffff < param_1) goto LAB_14258164c;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_1499f5670 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_1499f4630 + (ulonglong)uVar1 * 2) * 4;
LAB_14258164c:
  return *(ushort *)(&DAT_1499f4630 + lVar2 * 2) >> 5 & 7;
}



// FUNCTION 142581660 FUN_142581660 body=54 status=ok
// SIG undefined FUN_142581660(void)

undefined1 FUN_142581660(int param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  
  uVar1 = param_1 - 0x620;
  if (uVar1 < 0x2a0) {
    puVar2 = &DAT_1499f4120;
  }
  else {
    uVar1 = param_1 - 0x10ac0;
    if (0x263 < uVar1) {
      return 0;
    }
    puVar2 = &DAT_1499f43c0;
  }
  return puVar2[uVar1];
}



// FUNCTION 1425816a0 FUN_1425816a0 body=124 status=ok
// SIG undefined FUN_1425816a0(void)

byte FUN_1425816a0(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0xe70;
    if (0x10ffff < param_1) goto LAB_14258170c;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_1499f5670 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_1499f4630 + (ulonglong)uVar1 * 2) * 4;
LAB_14258170c:
  return (&DAT_1499f4631)[lVar2 * 2] & 3;
}



// FUNCTION 142581720 FUN_142581720 body=123 status=ok
// SIG undefined FUN_142581720(void)

ushort FUN_142581720(uint param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 < 0xd800) {
    uVar1 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar1 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar1 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0xe70;
    if (0x10ffff < param_1) goto LAB_14258178c;
    uVar1 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_1499f5670 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_1499f4630 + (ulonglong)uVar1 * 2) * 4;
LAB_14258178c:
  return *(ushort *)(&DAT_1499f4630 + lVar2 * 2) & 0x1f;
}



// FUNCTION 1425817a0 FUN_1425817a0 body=202 status=ok
// SIG undefined FUN_1425817a0(void)

uint FUN_1425817a0(uint param_1)

{
  short sVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_1 < 0xd800) {
    uVar3 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar3 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar3 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0xe70;
    if (0x10ffff < param_1) goto LAB_14258180d;
    uVar3 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_1499f5670 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_1499f4630 + (ulonglong)uVar3 * 2) * 4;
LAB_14258180d:
  sVar1 = (short)((uint)(int)*(short *)(&DAT_1499f4630 + lVar2 * 2) >> 0xd);
  if (sVar1 != -4) {
    return param_1 + (int)sVar1;
  }
  lVar2 = 0;
  do {
    uVar3 = *(uint *)((longlong)&DAT_1499f4080 + lVar2) & 0x1fffff;
    if (uVar3 == param_1) {
      return (&DAT_1499f4080)[*(uint *)((longlong)&DAT_1499f4080 + lVar2) >> 0x15] & 0x1fffff;
    }
  } while (((int)uVar3 < (int)param_1) && (bVar4 = lVar2 != 0x9c, lVar2 = lVar2 + 4, bVar4));
  return param_1;
}



// FUNCTION 142581870 FUN_142581870 body=218 status=ok
// SIG undefined FUN_142581870(void)

uint FUN_142581870(uint param_1)

{
  short sVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_1 < 0xd800) {
    uVar3 = param_1 >> 5;
  }
  else if (param_1 < 0x10000) {
    uVar3 = (param_1 >> 5) + 0x140;
    if (0xdbff < param_1) {
      uVar3 = param_1 >> 5;
    }
  }
  else {
    lVar2 = 0xe70;
    if (0x10ffff < param_1) goto LAB_1425818dd;
    uVar3 = (param_1 >> 5 & 0x3f) +
            (uint)*(ushort *)(&DAT_1499f5670 + (ulonglong)(param_1 >> 0xb) * 2);
  }
  lVar2 = (ulonglong)(param_1 & 0x1f) +
          (ulonglong)*(ushort *)(&DAT_1499f4630 + (ulonglong)uVar3 * 2) * 4;
LAB_1425818dd:
  if ((*(ushort *)(&DAT_1499f4630 + lVar2 * 2) & 0x300) != 0) {
    sVar1 = (short)((uint)(int)(short)*(ushort *)(&DAT_1499f4630 + lVar2 * 2) >> 0xd);
    if (sVar1 != -4) {
      return param_1 + (int)sVar1;
    }
    lVar2 = 0;
    do {
      uVar3 = *(uint *)((longlong)&DAT_1499f4080 + lVar2) & 0x1fffff;
      if (uVar3 == param_1) {
        return (&DAT_1499f4080)[*(uint *)((longlong)&DAT_1499f4080 + lVar2) >> 0x15] & 0x1fffff;
      }
    } while (((int)uVar3 < (int)param_1) && (bVar4 = lVar2 != 0x9c, lVar2 = lVar2 + 4, bVar4));
  }
  return param_1;
}



// FUNCTION 142581950 FUN_142581950 body=1933 status=ok
// SIG undefined FUN_142581950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142581950(ushort *param_1,uint param_2,ushort *param_3,int param_4,ushort param_5,
                       undefined4 *param_6)

{
  ushort *puVar1;
  ushort uVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  byte bVar15;
  ulonglong uVar16;
  ushort *puVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  ulonglong uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  uVar16 = (ulonglong)param_2;
  uVar27 = uVar16;
  if ((param_5 & 0xb) == 1) {
    uVar28 = uVar16;
    if ((int)param_2 <= param_4) {
LAB_142581b31:
      do {
        iVar18 = (int)uVar27;
        uVar29 = iVar18 - 1;
        uVar27 = (ulonglong)uVar29;
        uVar2 = param_1[(longlong)iVar18 + -1];
        uVar22 = (uint)uVar2;
        if ((iVar18 < 2) || ((uVar2 & 0xfc00) != 0xdc00)) {
          uVar27 = (ulonglong)uVar29;
          uVar25 = uVar27;
          if ((int)uVar29 < 1) goto LAB_142581b88;
LAB_142581b23:
          bVar15 = FUN_1424d86a0(uVar22);
          if ((0x1c0U >> (bVar15 & 0x1f) & 1) != 0) goto LAB_142581b31;
          bVar12 = true;
        }
        else {
          uVar25 = (ulonglong)(iVar18 - 2U);
          if (((param_1[uVar25] & 0xfc00) != 0xd800) ||
             (uVar22 = (uint)uVar2 + (uint)param_1[uVar25] * 0x400 + 0xfca02400, uVar27 = uVar25,
             0 < (int)(iVar18 - 2U))) goto LAB_142581b23;
LAB_142581b88:
          bVar12 = false;
          uVar27 = uVar25;
        }
        lVar20 = (longlong)(int)uVar27;
        lVar21 = (longlong)(int)uVar28;
        lVar19 = lVar20 + 1;
        if (lVar20 + 1 <= lVar21) {
          lVar19 = lVar21;
        }
        uVar28 = lVar19 - lVar20;
        if ((uVar28 < 0x10) ||
           ((ulonglong)((longlong)param_3 - (longlong)(param_1 + lVar20)) < 0x20)) {
LAB_142581c30:
          do {
            lVar19 = lVar20 + 1;
            *param_3 = param_1[lVar20];
            puVar17 = param_3 + 1;
            lVar20 = lVar19;
            param_3 = puVar17;
          } while (lVar19 < lVar21);
        }
        else {
          uVar25 = uVar28 & 0xfffffffffffffff0;
          puVar17 = param_3 + uVar25;
          uVar23 = 0;
          do {
            uVar9 = *(undefined8 *)(param_1 + lVar20 + uVar23 + 4);
            uVar10 = *(undefined8 *)(param_1 + lVar20 + uVar23 + 8);
            uVar11 = *(undefined8 *)(param_1 + lVar20 + uVar23 + 8 + 4);
            *(undefined8 *)(param_3 + uVar23) = *(undefined8 *)(param_1 + lVar20 + uVar23);
            *(undefined8 *)(param_3 + uVar23 + 4) = uVar9;
            *(undefined8 *)(param_3 + uVar23 + 8) = uVar10;
            *(undefined8 *)(param_3 + uVar23 + 8 + 4) = uVar11;
            uVar23 = uVar23 + 0x10;
          } while (uVar25 != uVar23);
          lVar20 = lVar20 + uVar25;
          param_3 = puVar17;
          if (uVar28 != uVar25) goto LAB_142581c30;
        }
        uVar28 = uVar27;
        param_3 = puVar17;
        if (!bVar12) {
          return uVar16;
        }
      } while( true );
    }
    goto LAB_1425820cf;
  }
  if ((param_5 & 0xb) == 0) {
    if ((int)param_2 <= param_4) {
      do {
        iVar18 = (int)uVar27;
        uVar27 = (ulonglong)(iVar18 - 1);
        lVar20 = (longlong)iVar18;
        uVar28 = lVar20 - 1;
        if (((1 < iVar18) && ((param_1[lVar20 + -1] & 0xfc00) == 0xdc00)) &&
           (uVar28 = uVar27, (param_1[iVar18 - 2U] & 0xfc00) == 0xd800)) {
          uVar28 = (ulonglong)(iVar18 - 2U);
          uVar27 = uVar28;
        }
        lVar19 = uVar28 + 1;
        if ((longlong)(uVar28 + 1) <= lVar20) {
          lVar19 = lVar20;
        }
        uVar25 = lVar19 - uVar28;
        if ((uVar25 < 0x10) ||
           ((ulonglong)((longlong)param_3 - (longlong)(param_1 + uVar28)) < 0x20)) {
LAB_142581ad0:
          do {
            uVar25 = uVar28 + 1;
            *param_3 = param_1[uVar28];
            param_3 = param_3 + 1;
            uVar28 = uVar25;
          } while ((longlong)uVar25 < lVar20);
        }
        else {
          uVar23 = uVar25 & 0xfffffffffffffff0;
          puVar17 = param_3 + uVar23;
          uVar30 = 0;
          do {
            uVar9 = *(undefined8 *)(param_1 + uVar28 + uVar30 + 4);
            uVar10 = *(undefined8 *)(param_1 + uVar28 + uVar30 + 8);
            uVar11 = *(undefined8 *)(param_1 + uVar28 + uVar30 + 8 + 4);
            *(undefined8 *)(param_3 + uVar30) = *(undefined8 *)(param_1 + uVar28 + uVar30);
            *(undefined8 *)(param_3 + uVar30 + 4) = uVar9;
            *(undefined8 *)(param_3 + uVar30 + 8) = uVar10;
            *(undefined8 *)(param_3 + uVar30 + 8 + 4) = uVar11;
            uVar30 = uVar30 + 0x10;
          } while (uVar23 != uVar30);
          uVar28 = uVar28 + uVar23;
          param_3 = puVar17;
          if (uVar25 != uVar23) goto LAB_142581ad0;
        }
        if ((int)uVar27 < 1) {
          return uVar16;
        }
      } while( true );
    }
    goto LAB_1425820cf;
  }
  if ((param_5 & 8) != 0) {
    uVar29 = 1;
    if ((int)param_2 < 1) {
      uVar29 = param_2;
    }
    uVar27 = 0;
    puVar17 = param_1;
    uVar22 = param_2;
    if (param_2 - uVar29 < 7) {
LAB_14258206b:
      iVar18 = uVar22 + 1;
      do {
        uVar2 = *puVar17;
        puVar17 = puVar17 + 1;
        uVar27 = (ulonglong)
                 ((int)uVar27 +
                 (uint)(uVar2 - 0x206a < 0xfffffffc &&
                       (uVar2 - 0x202f < 0xfffffffb && (uVar2 & 0xfffffffc) != 0x200c)));
        iVar18 = iVar18 + -1;
      } while (1 < iVar18);
    }
    else {
      uVar28 = (ulonglong)(param_2 - uVar29) + 1;
      uVar25 = uVar28 & 0xfffffffffffffff8;
      puVar17 = param_1 + uVar25;
      uVar27 = 0;
      iVar34 = 0;
      iVar35 = 0;
      iVar36 = 0;
      iVar37 = 0;
      iVar18 = 0;
      iVar31 = 0;
      iVar32 = 0;
      iVar33 = 0;
      do {
        uVar23 = *(ulonglong *)(param_1 + uVar27);
        uVar30 = *(ulonglong *)(param_1 + uVar27 + 4);
        auVar3._8_4_ = 0;
        auVar3._0_8_ = uVar23;
        auVar3._12_2_ = (short)(uVar23 >> 0x30);
        auVar5._8_2_ = (short)(uVar23 >> 0x20);
        auVar5._0_8_ = uVar23;
        auVar5._10_4_ = auVar3._10_4_;
        auVar13._6_8_ = 0;
        auVar13._0_6_ = auVar5._8_6_;
        auVar7._4_2_ = (short)(uVar23 >> 0x10);
        auVar7._0_4_ = (uint)uVar23;
        auVar7._6_8_ = SUB148(auVar13 << 0x40,6);
        auVar39._0_4_ = (uint)uVar23 & 0xffff;
        auVar39._4_10_ = auVar7._4_10_;
        auVar39._14_2_ = 0;
        auVar4._8_4_ = 0;
        auVar4._0_8_ = uVar30;
        auVar4._12_2_ = (short)(uVar30 >> 0x30);
        auVar6._8_2_ = (short)(uVar30 >> 0x20);
        auVar6._0_8_ = uVar30;
        auVar6._10_4_ = auVar4._10_4_;
        auVar14._6_8_ = 0;
        auVar14._0_6_ = auVar6._8_6_;
        auVar8._4_2_ = (short)(uVar30 >> 0x10);
        auVar8._0_4_ = (uint)uVar30;
        auVar8._6_8_ = SUB148(auVar14 << 0x40,6);
        auVar38._0_4_ = (uint)uVar30 & 0xffff;
        auVar38._4_10_ = auVar8._4_10_;
        auVar38._14_2_ = 0;
        auVar40 = auVar39 & _DAT_1499675f0;
        uVar29 = auVar3._10_4_ >> 0x10;
        uVar22 = auVar4._10_4_ >> 0x10;
        auVar41 = auVar38 & _DAT_1499675f0;
        iVar34 = iVar34 - (-(uint)((int)(auVar39._0_4_ - 0x206a ^ 0x80000000) < 0x7ffffffc) &
                          ~-(uint)(auVar40._0_4_ == 0x200c) &
                          -(uint)((int)(auVar39._0_4_ - 0x202f ^ 0x80000000) < 0x7ffffffb));
        iVar35 = iVar35 - (-(uint)((int)(auVar7._4_4_ - 0x206aU ^ 0x80000000) < 0x7ffffffc) &
                          ~-(uint)(auVar40._4_4_ == 0x200c) &
                          -(uint)((int)(auVar7._4_4_ - 0x202fU ^ 0x80000000) < 0x7ffffffb));
        iVar36 = iVar36 - (-(uint)((int)(auVar5._8_4_ - 0x206aU ^ 0x80000000) < 0x7ffffffc) &
                          ~-(uint)(auVar40._8_4_ == 0x200c) &
                          -(uint)((int)(auVar5._8_4_ - 0x202fU ^ 0x80000000) < 0x7ffffffb));
        iVar37 = iVar37 - (-(uint)((int)(uVar29 - 0x206a ^ 0x80000000) < 0x7ffffffc) &
                          ~-(uint)(auVar40._12_4_ == 0x200c) &
                          -(uint)((int)(uVar29 - 0x202f ^ 0x80000000) < 0x7ffffffb));
        iVar18 = iVar18 - (-(uint)((int)(auVar38._0_4_ - 0x206a ^ 0x80000000) < 0x7ffffffc) &
                          ~-(uint)(auVar41._0_4_ == 0x200c) &
                          -(uint)((int)(auVar38._0_4_ - 0x202f ^ 0x80000000) < 0x7ffffffb));
        iVar31 = iVar31 - (-(uint)((int)(auVar8._4_4_ - 0x206aU ^ 0x80000000) < 0x7ffffffc) &
                          ~-(uint)(auVar41._4_4_ == 0x200c) &
                          -(uint)((int)(auVar8._4_4_ - 0x202fU ^ 0x80000000) < 0x7ffffffb));
        iVar32 = iVar32 - (-(uint)((int)(auVar6._8_4_ - 0x206aU ^ 0x80000000) < 0x7ffffffc) &
                          ~-(uint)(auVar41._8_4_ == 0x200c) &
                          -(uint)((int)(auVar6._8_4_ - 0x202fU ^ 0x80000000) < 0x7ffffffb));
        iVar33 = iVar33 - (-(uint)((int)(uVar22 - 0x206a ^ 0x80000000) < 0x7ffffffc) &
                          ~-(uint)(auVar41._12_4_ == 0x200c) &
                          -(uint)((int)(uVar22 - 0x202f ^ 0x80000000) < 0x7ffffffb));
        uVar27 = uVar27 + 8;
      } while (uVar25 != uVar27);
      uVar27 = (ulonglong)
               (uint)(iVar33 + iVar37 + iVar31 + iVar35 + iVar32 + iVar36 + iVar18 + iVar34);
      uVar22 = param_2 - (int)uVar25;
      if (uVar28 != uVar25) goto LAB_14258206b;
    }
    param_1 = puVar17 + -(longlong)(int)param_2;
    param_2 = (uint)uVar27;
  }
  if ((int)param_2 <= param_4) {
    do {
      iVar18 = (int)uVar16;
      uVar28 = (ulonglong)iVar18;
      uVar29 = (uint)param_1[uVar28 - 1];
      if ((iVar18 < 2) || ((uVar29 & 0xfc00) != 0xdc00)) {
LAB_142581ce0:
        uVar16 = (ulonglong)(iVar18 - 1);
      }
      else {
        uVar16 = (ulonglong)(iVar18 - 2);
        if ((param_1[uVar16] & 0xfc00) != 0xd800) goto LAB_142581ce0;
        uVar29 = (uint)param_1[uVar28 - 1] + (uint)param_1[uVar16] * 0x400 + 0xfca02400;
      }
      if (((param_5 & 1) != 0) && (0 < (int)uVar16)) {
        do {
          while( true ) {
            bVar15 = FUN_1424d86a0(uVar29);
            if ((0x1c0U >> (bVar15 & 0x1f) & 1) == 0) goto LAB_142581d52;
            iVar31 = (int)uVar16;
            uVar16 = (ulonglong)(iVar31 - 1U);
            uVar29 = (uint)param_1[uVar16];
            if ((uVar29 & 0xfc00) == 0xdc00) break;
LAB_142581cf0:
            if ((int)(iVar31 - 1U) < 1) goto LAB_142581d50;
          }
          if (iVar31 < 2) break;
          uVar22 = iVar31 - 2;
          if ((param_1[uVar22] & 0xfc00) != 0xd800) goto LAB_142581cf0;
          uVar29 = uVar29 + (uint)param_1[uVar22] * 0x400 + 0xfca02400;
          uVar16 = (ulonglong)uVar22;
        } while (0 < (int)uVar22);
LAB_142581d50:
        uVar16 = 0;
      }
LAB_142581d52:
      iVar31 = (int)uVar16;
      if (((param_5 & 8) == 0) ||
         ((((uVar29 & 0xfffffffc) != 0x200c && (4 < uVar29 - 0x202a)) && (3 < uVar29 - 0x2066)))) {
        iVar32 = iVar31;
        if ((param_5 & 2) != 0) {
          uVar25 = FUN_1425817a0(uVar29);
          if ((uint)uVar25 < 0x10000) {
            lVar20 = 1;
          }
          else {
            param_3[1] = (ushort)uVar25 & 0x3ff | 0xdc00;
            lVar20 = 2;
            uVar25 = (ulonglong)(((uint)(uVar25 >> 10) & 0x3fffff) - 0x2840);
          }
          *param_3 = (ushort)uVar25;
          param_3 = param_3 + lVar20;
          iVar32 = (int)lVar20 + iVar31;
        }
        if (iVar32 < iVar18) {
          uVar23 = (ulonglong)iVar32;
          uVar30 = uVar28 - uVar23;
          puVar17 = param_3;
          uVar25 = uVar23;
          if ((0xf < uVar30) &&
             (0x1f < (ulonglong)((longlong)param_3 - (longlong)(param_1 + uVar23)))) {
            uVar24 = uVar30 & 0xfffffffffffffff0;
            uVar25 = uVar23 + uVar24;
            puVar17 = param_3 + uVar24;
            uVar26 = 0;
            do {
              uVar9 = *(undefined8 *)(param_1 + uVar23 + uVar26 + 4);
              uVar10 = *(undefined8 *)(param_1 + uVar23 + uVar26 + 8);
              uVar11 = *(undefined8 *)(param_1 + uVar23 + uVar26 + 8 + 4);
              *(undefined8 *)(param_3 + uVar26) = *(undefined8 *)(param_1 + uVar23 + uVar26);
              *(undefined8 *)(param_3 + uVar26 + 4) = uVar9;
              *(undefined8 *)(param_3 + uVar26 + 8) = uVar10;
              *(undefined8 *)(param_3 + uVar26 + 8 + 4) = uVar11;
              uVar26 = uVar26 + 0x10;
            } while (uVar24 != uVar26);
            param_3 = puVar17;
            if (uVar30 == uVar24) goto LAB_142581c83;
          }
          uVar29 = iVar18 - (int)uVar25 & 7;
          uVar30 = (ulonglong)uVar29;
          param_3 = puVar17;
          uVar23 = uVar25;
          if (uVar29 != 0) {
            do {
              puVar1 = param_1 + uVar23;
              uVar23 = uVar23 + 1;
              *puVar17 = *puVar1;
              puVar17 = puVar17 + 1;
              uVar30 = uVar30 - 1;
              param_3 = puVar17;
            } while (uVar30 != 0);
          }
          if (6 < ~uVar25 + uVar28) {
            do {
              *param_3 = param_1[uVar23];
              param_3[1] = param_1[uVar23 + 1];
              param_3[2] = param_1[uVar23 + 2];
              param_3[3] = param_1[uVar23 + 3];
              param_3[4] = param_1[uVar23 + 4];
              param_3[5] = param_1[uVar23 + 5];
              param_3[6] = param_1[uVar23 + 6];
              lVar20 = uVar23 + 7;
              uVar23 = uVar23 + 8;
              param_3[7] = param_1[lVar20];
              param_3 = param_3 + 8;
            } while (uVar28 != uVar23);
          }
        }
      }
LAB_142581c83:
      if (iVar31 < 1) {
        return uVar27;
      }
    } while( true );
  }
LAB_1425820cf:
  *param_6 = 0xf;
                    /* WARNING: Read-only address (ram,0x0001499675f0) is written */
  return uVar27;
}



// FUNCTION 142582140 FUN_142582140 body=1545 status=ok
// SIG undefined FUN_142582140(void)

void FUN_142582140(longlong param_1,undefined2 *param_2,uint param_3,uint param_4,int *param_5)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined2 local_98;
  int *local_90;
  uint local_80;
  uint local_7c;
  longlong local_78;
  longlong local_70;
  undefined2 *local_68;
  undefined2 *local_60;
  ulonglong local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_5 != (int *)0x0) && (*param_5 < 1)) {
    if ((((param_1 == 0) ||
         ((puVar6 = *(undefined2 **)(param_1 + 8), puVar6 == (undefined2 *)0x0 ||
          ((int)(*(uint *)(param_1 + 0x14) | param_3) < 0)))) ||
        ((param_2 == (undefined2 *)0x0 && (0 < (int)param_3)))) ||
       ((param_2 != (undefined2 *)0x0 &&
        (((param_2 <= puVar6 && (puVar6 < param_2 + param_3)) ||
         ((puVar6 <= param_2 && (param_2 < puVar6 + *(int *)(param_1 + 0x10))))))))) {
      *param_5 = 1;
    }
    else {
      if (*(uint *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
      }
      uVar2 = FUN_1424dfd80(param_1,param_5);
      if (*param_5 < 1) {
        uVar7 = (param_4 & 0xfffffff3) + 4;
        if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
          uVar7 = param_4;
        }
        uVar8 = param_4 & 0xfffffff3 | 8;
        if ((*(uint *)(param_1 + 0x88) & 2) == 0) {
          uVar8 = uVar7;
        }
        local_7c = uVar8 & 0xfffffffb;
        if (*(int *)(param_1 + 0x84) - 3U < 4) {
          local_7c = uVar8;
        }
        local_80 = local_7c & 0xffff;
        uVar7 = param_3;
        local_60 = puVar6;
        if ((local_7c & 0x10) == 0) {
          if ((local_7c & 4) == 0) {
            if (0 < (int)uVar2) {
              local_80 = local_7c & 0xfffd;
              uVar8 = 0;
              puVar6 = param_2;
              do {
                iVar3 = FUN_1424e05e0(param_1,uVar8,&local_4c,&local_50);
                if (iVar3 == 0) {
                  local_90 = param_5;
                  local_98 = (undefined2)local_80;
                  local_50 = FUN_142582780(local_60 + local_4c,local_50,puVar6,uVar7);
                }
                else {
                  local_90 = param_5;
                  local_98 = (undefined2)local_7c;
                  local_50 = FUN_142581950(local_60 + local_4c,local_50,puVar6,uVar7);
                }
                if (puVar6 != (undefined2 *)0x0) {
                  puVar6 = puVar6 + local_50;
                }
                uVar7 = uVar7 - local_50;
                uVar8 = uVar8 + 1;
              } while (uVar2 != uVar8);
            }
          }
          else if (0 < (int)uVar2) {
            local_70 = *(longlong *)(param_1 + 0x70);
            local_80 = local_7c & 0xfffd;
            local_58 = (ulonglong)uVar2;
            lVar9 = 8;
            uVar5 = 0;
            puVar6 = param_2;
            do {
              local_68 = puVar6;
              iVar3 = FUN_1424e05e0(param_1,uVar5 & 0xffffffff,&local_4c,&local_50);
              uVar2 = *(uint *)(*(longlong *)(param_1 + 0x130) + lVar9);
              if ((int)uVar2 < 1) {
                uVar2 = 0;
              }
              local_78 = lVar9;
              if (iVar3 == 0) {
                if (*(char *)(param_1 + 0x80) != '\0') {
                  uVar2 = uVar2 | *(char *)(local_70 + local_4c) != '\0';
                }
                uVar1 = 0x200e;
                puVar4 = local_68;
                if (((uVar2 & 1) != 0) || (uVar1 = 0x200f, (uVar2 & 4) != 0)) {
                  if (0 < (int)uVar7) {
                    *local_68 = uVar1;
                    puVar4 = local_68 + 1;
                  }
                  uVar7 = uVar7 - 1;
                }
                local_98 = (undefined2)local_80;
                local_90 = param_5;
                local_50 = FUN_142582780(local_60 + local_4c,local_50,puVar4,uVar7);
                puVar6 = puVar4 + local_50;
                if (puVar4 == (undefined2 *)0x0) {
                  puVar6 = puVar4;
                }
                if ((*(char *)(param_1 + 0x80) != '\0') &&
                   (*(char *)(local_70 + (local_4c + local_50 + -1)) != '\0')) {
                  uVar2 = uVar2 | 2;
                }
                uVar7 = uVar7 - local_50;
              }
              else {
                if ((*(char *)(param_1 + 0x80) != '\0') &&
                   ((0x2002U >> (*(byte *)(local_70 + (local_50 + local_4c + -1)) & 0x1f) & 1) == 0)
                   ) {
                  uVar2 = uVar2 | 4;
                }
                uVar1 = 0x200e;
                puVar4 = local_68;
                if (((uVar2 & 1) != 0) || (uVar1 = 0x200f, (uVar2 & 4) != 0)) {
                  if (0 < (int)uVar7) {
                    *local_68 = uVar1;
                    puVar4 = local_68 + 1;
                  }
                  uVar7 = uVar7 - 1;
                }
                local_90 = param_5;
                local_98 = (undefined2)local_7c;
                local_50 = FUN_142581950(local_60 + local_4c,local_50,puVar4,uVar7);
                puVar6 = puVar4 + local_50;
                if (puVar4 == (undefined2 *)0x0) {
                  puVar6 = puVar4;
                }
                if ((*(char *)(param_1 + 0x80) != '\0') &&
                   ((0x2002U >> (*(byte *)(local_70 + local_4c) & 0x1f) & 1) == 0)) {
                  uVar2 = uVar2 | 8;
                }
                uVar7 = uVar7 - local_50;
              }
              uVar1 = 0x200e;
              if (((uVar2 & 2) != 0) || (uVar1 = 0x200f, (uVar2 & 8) != 0)) {
                if (0 < (int)uVar7) {
                  *puVar6 = uVar1;
                  puVar6 = puVar6 + 1;
                }
                uVar7 = uVar7 - 1;
              }
              uVar5 = uVar5 + 1;
              lVar9 = local_78 + 0xc;
            } while (local_58 != uVar5);
          }
        }
        else if ((local_7c & 4) == 0) {
          if (0 < (int)uVar2) {
            local_80 = local_7c & 0xfffd;
            uVar2 = uVar2 + 1;
            puVar6 = param_2;
            do {
              iVar3 = FUN_1424e05e0(param_1,uVar2 - 2,&local_4c,&local_50);
              if (iVar3 == 0) {
                local_90 = param_5;
                local_98 = (undefined2)local_80;
                local_50 = FUN_142581950(local_60 + local_4c,local_50,puVar6,uVar7);
              }
              else {
                local_90 = param_5;
                local_98 = (undefined2)local_7c;
                local_50 = FUN_142582780(local_60 + local_4c,local_50,puVar6,uVar7);
              }
              if (puVar6 != (undefined2 *)0x0) {
                puVar6 = puVar6 + local_50;
              }
              uVar7 = uVar7 - local_50;
              uVar2 = uVar2 - 1;
            } while (1 < uVar2);
          }
        }
        else if (0 < (int)uVar2) {
          local_78 = *(longlong *)(param_1 + 0x70);
          local_80 = local_7c & 0xfffd;
          uVar2 = uVar2 + 1;
          puVar6 = param_2;
          do {
            lVar9 = local_78;
            iVar3 = FUN_1424e05e0(param_1,uVar2 - 2,&local_4c,&local_50);
            if (iVar3 == 0) {
              if (*(char *)(lVar9 + (local_4c + local_50 + -1)) != '\0') {
                if (0 < (int)uVar7) {
                  *puVar6 = 0x200e;
                  puVar6 = puVar6 + 1;
                }
                uVar7 = uVar7 - 1;
              }
              local_98 = (undefined2)local_80;
              local_90 = param_5;
              local_50 = FUN_142581950(local_60 + local_4c,local_50,puVar6,uVar7);
              puVar4 = puVar6 + local_50;
              if (puVar6 == (undefined2 *)0x0) {
                puVar4 = puVar6;
              }
              uVar7 = uVar7 - local_50;
              if (*(char *)(local_78 + local_4c) != '\0') {
                if (0 < (int)uVar7) {
                  *puVar4 = 0x200e;
                  goto LAB_142582757;
                }
                goto LAB_14258275b;
              }
            }
            else {
              if ((0x2002U >> (*(byte *)(lVar9 + local_4c) & 0x1f) & 1) == 0) {
                if (0 < (int)uVar7) {
                  *puVar6 = 0x200f;
                  puVar6 = puVar6 + 1;
                }
                uVar7 = uVar7 - 1;
              }
              local_90 = param_5;
              local_98 = (undefined2)local_7c;
              local_50 = FUN_142582780(local_60 + local_4c,local_50,puVar6,uVar7);
              puVar4 = puVar6 + local_50;
              if (puVar6 == (undefined2 *)0x0) {
                puVar4 = puVar6;
              }
              uVar7 = uVar7 - local_50;
              if ((0x2002U >> (*(byte *)(local_78 + (local_50 + local_4c + -1)) & 0x1f) & 1) == 0) {
                if (0 < (int)uVar7) {
                  *puVar4 = 0x200f;
LAB_142582757:
                  puVar4 = puVar4 + 1;
                }
LAB_14258275b:
                uVar7 = uVar7 - 1;
              }
            }
            uVar2 = uVar2 - 1;
            puVar6 = puVar4;
          } while (1 < uVar2);
        }
        FUN_142504cc0(param_2,param_3,param_3 - uVar7,param_5);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}



// FUNCTION 142582780 FUN_142582780 body=1794 status=ok
// SIG undefined FUN_142582780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_142582780(ushort *param_1,int param_2,ushort *param_3,int param_4,ushort param_5,
                 undefined4 *param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ushort uVar3;
  bool bVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  uint uVar13;
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  ushort *puVar28;
  longlong lVar29;
  ulonglong uVar30;
  uint uVar31;
  ulonglong uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  if ((param_5 & 10) == 0) {
    if (param_2 <= param_4) {
      iVar33 = 1;
      if (param_2 < 1) {
        iVar33 = param_2;
      }
      iVar25 = param_2;
      if ((0xe < (uint)(param_2 - iVar33)) &&
         (0x1f < (ulonglong)((longlong)param_3 - (longlong)param_1))) {
        uVar27 = (ulonglong)(uint)(param_2 - iVar33) + 1;
        uVar30 = uVar27 & 0x1fffffff0;
        uVar32 = 0;
        do {
          uVar18 = *(undefined8 *)(param_1 + uVar32 + 4);
          uVar19 = *(undefined8 *)(param_1 + uVar32 + 8);
          uVar20 = *(undefined8 *)(param_1 + uVar32 + 8 + 4);
          *(undefined8 *)(param_3 + uVar32) = *(undefined8 *)(param_1 + uVar32);
          *(undefined8 *)(param_3 + uVar32 + 4) = uVar18;
          *(undefined8 *)(param_3 + uVar32 + 8) = uVar19;
          *(undefined8 *)(param_3 + uVar32 + 8 + 4) = uVar20;
          uVar32 = uVar32 + 0x10;
        } while (uVar30 != uVar32);
        param_1 = param_1 + uVar30;
        param_3 = param_3 + uVar30;
        iVar25 = param_2 - (int)uVar30;
        if (uVar27 == uVar30) {
          return param_2;
        }
      }
      iVar25 = iVar25 + 1;
      lVar29 = 0;
      do {
        *(undefined2 *)((longlong)param_3 + lVar29) = *(undefined2 *)((longlong)param_1 + lVar29);
        lVar29 = lVar29 + 2;
        iVar25 = iVar25 + -1;
      } while (1 < iVar25);
      return param_2;
    }
  }
  else {
    if ((param_5 & 10) != 2) {
      if ((param_5 & 10) == 8) {
        uVar31 = param_2 - 2;
        iVar33 = param_4;
        do {
          puVar28 = param_1 + 1;
          uVar26 = (uint)*param_1;
          iVar25 = iVar33;
          if ((((uVar26 & 0xfffffffc) != 0x200c) && (4 < uVar26 - 0x202a)) && (3 < uVar26 - 0x2066))
          {
            iVar25 = iVar33 + -1;
            if (iVar33 < 1) {
              *param_6 = 0xf;
              if (1 < param_2) {
                if (param_2 - 2U < 7) goto LAB_142582c3a;
                uVar27 = (ulonglong)(param_2 - 2U) + 1;
                uVar30 = uVar27 & 0xfffffffffffffff8;
                puVar28 = puVar28 + uVar30;
                param_2 = param_2 - (int)uVar30;
                iVar33 = 0;
                iVar34 = 0;
                iVar35 = 0;
                uVar32 = 0;
                iVar36 = 0;
                iVar37 = 0;
                iVar38 = 0;
                iVar39 = 0;
                do {
                  uVar1 = *(ulonglong *)(param_1 + uVar32 + 1);
                  uVar2 = *(ulonglong *)(param_1 + uVar32 + 5);
                  auVar5._8_4_ = 0;
                  auVar5._0_8_ = uVar1;
                  auVar5._12_2_ = (short)(uVar1 >> 0x30);
                  auVar9._8_2_ = (short)(uVar1 >> 0x20);
                  auVar9._0_8_ = uVar1;
                  auVar9._10_4_ = auVar5._10_4_;
                  auVar21._6_8_ = 0;
                  auVar21._0_6_ = auVar9._8_6_;
                  auVar14._4_2_ = (short)(uVar1 >> 0x10);
                  auVar14._0_4_ = (uint)uVar1;
                  auVar14._6_8_ = SUB148(auVar21 << 0x40,6);
                  auVar44._0_4_ = (uint)uVar1 & 0xffff;
                  auVar44._4_10_ = auVar14._4_10_;
                  auVar44._14_2_ = 0;
                  auVar6._8_4_ = 0;
                  auVar6._0_8_ = uVar2;
                  auVar6._12_2_ = (short)(uVar2 >> 0x30);
                  auVar10._8_2_ = (short)(uVar2 >> 0x20);
                  auVar10._0_8_ = uVar2;
                  auVar10._10_4_ = auVar6._10_4_;
                  auVar22._6_8_ = 0;
                  auVar22._0_6_ = auVar10._8_6_;
                  auVar15._4_2_ = (short)(uVar2 >> 0x10);
                  auVar15._0_4_ = (uint)uVar2;
                  auVar15._6_8_ = SUB148(auVar22 << 0x40,6);
                  auVar42._0_4_ = (uint)uVar2 & 0xffff;
                  auVar42._4_10_ = auVar15._4_10_;
                  auVar42._14_2_ = 0;
                  auVar41 = auVar44 & _DAT_1499675f0;
                  uVar26 = auVar5._10_4_ >> 0x10;
                  uVar13 = auVar6._10_4_ >> 0x10;
                  auVar43 = auVar42 & _DAT_1499675f0;
                  iVar25 = iVar25 + (-(uint)((int)(auVar44._0_4_ - 0x206a ^ 0x80000000) < 0x7ffffffc
                                            ) &
                                    ~-(uint)(auVar41._0_4_ == 0x200c) &
                                    -(uint)((int)(auVar44._0_4_ - 0x202f ^ 0x80000000) < 0x7ffffffb)
                                    );
                  iVar33 = iVar33 + (-(uint)((int)(auVar14._4_4_ - 0x206aU ^ 0x80000000) <
                                            0x7ffffffc) &
                                    ~-(uint)(auVar41._4_4_ == 0x200c) &
                                    -(uint)((int)(auVar14._4_4_ - 0x202fU ^ 0x80000000) < 0x7ffffffb
                                           ));
                  iVar34 = iVar34 + (-(uint)((int)(auVar9._8_4_ - 0x206aU ^ 0x80000000) < 0x7ffffffc
                                            ) &
                                    ~-(uint)(auVar41._8_4_ == 0x200c) &
                                    -(uint)((int)(auVar9._8_4_ - 0x202fU ^ 0x80000000) < 0x7ffffffb)
                                    );
                  iVar35 = iVar35 + (-(uint)((int)(uVar26 - 0x206a ^ 0x80000000) < 0x7ffffffc) &
                                    ~-(uint)(auVar41._12_4_ == 0x200c) &
                                    -(uint)((int)(uVar26 - 0x202f ^ 0x80000000) < 0x7ffffffb));
                  iVar36 = iVar36 + (-(uint)((int)(auVar42._0_4_ - 0x206a ^ 0x80000000) < 0x7ffffffc
                                            ) &
                                    ~-(uint)(auVar43._0_4_ == 0x200c) &
                                    -(uint)((int)(auVar42._0_4_ - 0x202f ^ 0x80000000) < 0x7ffffffb)
                                    );
                  iVar37 = iVar37 + (-(uint)((int)(auVar15._4_4_ - 0x206aU ^ 0x80000000) <
                                            0x7ffffffc) &
                                    ~-(uint)(auVar43._4_4_ == 0x200c) &
                                    -(uint)((int)(auVar15._4_4_ - 0x202fU ^ 0x80000000) < 0x7ffffffb
                                           ));
                  iVar38 = iVar38 + (-(uint)((int)(auVar10._8_4_ - 0x206aU ^ 0x80000000) <
                                            0x7ffffffc) &
                                    ~-(uint)(auVar43._8_4_ == 0x200c) &
                                    -(uint)((int)(auVar10._8_4_ - 0x202fU ^ 0x80000000) < 0x7ffffffb
                                           ));
                  iVar39 = iVar39 + (-(uint)((int)(uVar13 - 0x206a ^ 0x80000000) < 0x7ffffffc) &
                                    ~-(uint)(auVar43._12_4_ == 0x200c) &
                                    -(uint)((int)(uVar13 - 0x202f ^ 0x80000000) < 0x7ffffffb));
                  uVar32 = uVar32 + 8;
                } while (((ulonglong)uVar31 + 1 & 0xfffffffffffffff8) != uVar32);
                iVar25 = iVar39 + iVar35 + iVar37 + iVar33 + iVar38 + iVar34 + iVar36 + iVar25;
                if (uVar27 != uVar30) {
LAB_142582c3a:
                  uVar31 = param_2 + 1;
                  do {
                    uVar3 = *puVar28;
                    puVar28 = puVar28 + 1;
                    iVar25 = iVar25 - (uint)(uVar3 - 0x206a < 0xfffffffc &&
                                            (uVar3 - 0x202f < 0xfffffffb &&
                                            (uVar3 & 0xfffffffc) != 0x200c));
                    uVar31 = uVar31 - 1;
                  } while (2 < uVar31);
                }
              }
              break;
            }
            *param_3 = *param_1;
            param_3 = param_3 + 1;
          }
          uVar31 = uVar31 - 1;
          bVar4 = 1 < param_2;
          param_1 = puVar28;
          param_2 = param_2 + -1;
          iVar33 = iVar25;
        } while (bVar4);
        return param_4 - iVar25;
      }
      iVar25 = 0;
      iVar33 = param_4;
      do {
        uVar3 = *param_1;
        uVar31 = (uint)uVar3;
        lVar29 = 1;
        if ((((uVar3 & 0xfc00) == 0xd800) && (param_2 != 1)) && ((param_1[1] & 0xfc00) == 0xdc00)) {
          uVar31 = (uint)uVar3 * 0x400 + (uint)param_1[1] + 0xfca02400;
          lVar29 = 2;
        }
        uVar26 = (uint)lVar29;
        puVar28 = param_1 + lVar29;
        iVar34 = param_2 - uVar26;
        if ((((uVar31 & 0xfffffffc) != 0x200c) && (4 < uVar31 - 0x202a)) && (3 < uVar31 - 0x2066)) {
          iVar33 = iVar33 - uVar26;
          if (iVar33 < 0) {
            *param_6 = 0xf;
            if (iVar34 < 1) goto LAB_142582e2c;
            if (param_2 + ~uVar26 < 7) goto LAB_142582de9;
            uVar27 = (ulonglong)(param_2 + ~uVar26) + 1;
            uVar30 = uVar27 & 0xfffffffffffffff8;
            puVar28 = puVar28 + uVar30;
            iVar34 = iVar34 - (int)uVar30;
            iVar25 = 0;
            iVar35 = 0;
            iVar36 = 0;
            uVar32 = 0;
            iVar37 = 0;
            iVar38 = 0;
            iVar39 = 0;
            iVar40 = 0;
            do {
              uVar1 = *(ulonglong *)(param_1 + lVar29 + uVar32);
              uVar2 = *(ulonglong *)(param_1 + lVar29 + uVar32 + 4);
              auVar7._8_4_ = 0;
              auVar7._0_8_ = uVar1;
              auVar7._12_2_ = (short)(uVar1 >> 0x30);
              auVar11._8_2_ = (short)(uVar1 >> 0x20);
              auVar11._0_8_ = uVar1;
              auVar11._10_4_ = auVar7._10_4_;
              auVar23._6_8_ = 0;
              auVar23._0_6_ = auVar11._8_6_;
              auVar16._4_2_ = (short)(uVar1 >> 0x10);
              auVar16._0_4_ = (uint)uVar1;
              auVar16._6_8_ = SUB148(auVar23 << 0x40,6);
              auVar43._0_4_ = (uint)uVar1 & 0xffff;
              auVar43._4_10_ = auVar16._4_10_;
              auVar43._14_2_ = 0;
              auVar8._8_4_ = 0;
              auVar8._0_8_ = uVar2;
              auVar8._12_2_ = (short)(uVar2 >> 0x30);
              auVar12._8_2_ = (short)(uVar2 >> 0x20);
              auVar12._0_8_ = uVar2;
              auVar12._10_4_ = auVar8._10_4_;
              auVar24._6_8_ = 0;
              auVar24._0_6_ = auVar12._8_6_;
              auVar17._4_2_ = (short)(uVar2 >> 0x10);
              auVar17._0_4_ = (uint)uVar2;
              auVar17._6_8_ = SUB148(auVar24 << 0x40,6);
              auVar41._0_4_ = (uint)uVar2 & 0xffff;
              auVar41._4_10_ = auVar17._4_10_;
              auVar41._14_2_ = 0;
              auVar42 = auVar43 & _DAT_1499675f0;
              uVar31 = auVar7._10_4_ >> 0x10;
              uVar26 = auVar8._10_4_ >> 0x10;
              auVar44 = auVar41 & _DAT_1499675f0;
              iVar33 = iVar33 + (-(uint)((int)(auVar43._0_4_ - 0x206a ^ 0x80000000) < 0x7ffffffc) &
                                ~-(uint)(auVar42._0_4_ == 0x200c) &
                                -(uint)((int)(auVar43._0_4_ - 0x202f ^ 0x80000000) < 0x7ffffffb));
              iVar25 = iVar25 + (-(uint)((int)(auVar16._4_4_ - 0x206aU ^ 0x80000000) < 0x7ffffffc) &
                                ~-(uint)(auVar42._4_4_ == 0x200c) &
                                -(uint)((int)(auVar16._4_4_ - 0x202fU ^ 0x80000000) < 0x7ffffffb));
              iVar35 = iVar35 + (-(uint)((int)(auVar11._8_4_ - 0x206aU ^ 0x80000000) < 0x7ffffffc) &
                                ~-(uint)(auVar42._8_4_ == 0x200c) &
                                -(uint)((int)(auVar11._8_4_ - 0x202fU ^ 0x80000000) < 0x7ffffffb));
              iVar36 = iVar36 + (-(uint)((int)(uVar31 - 0x206a ^ 0x80000000) < 0x7ffffffc) &
                                ~-(uint)(auVar42._12_4_ == 0x200c) &
                                -(uint)((int)(uVar31 - 0x202f ^ 0x80000000) < 0x7ffffffb));
              iVar37 = iVar37 + (-(uint)((int)(auVar41._0_4_ - 0x206a ^ 0x80000000) < 0x7ffffffc) &
                                ~-(uint)(auVar44._0_4_ == 0x200c) &
                                -(uint)((int)(auVar41._0_4_ - 0x202f ^ 0x80000000) < 0x7ffffffb));
              iVar38 = iVar38 + (-(uint)((int)(auVar17._4_4_ - 0x206aU ^ 0x80000000) < 0x7ffffffc) &
                                ~-(uint)(auVar44._4_4_ == 0x200c) &
                                -(uint)((int)(auVar17._4_4_ - 0x202fU ^ 0x80000000) < 0x7ffffffb));
              iVar39 = iVar39 + (-(uint)((int)(auVar12._8_4_ - 0x206aU ^ 0x80000000) < 0x7ffffffc) &
                                ~-(uint)(auVar44._8_4_ == 0x200c) &
                                -(uint)((int)(auVar12._8_4_ - 0x202fU ^ 0x80000000) < 0x7ffffffb));
              iVar40 = iVar40 + (-(uint)((int)(uVar26 - 0x206a ^ 0x80000000) < 0x7ffffffc) &
                                ~-(uint)(auVar44._12_4_ == 0x200c) &
                                -(uint)((int)(uVar26 - 0x202f ^ 0x80000000) < 0x7ffffffb));
              uVar32 = uVar32 + 8;
            } while (uVar30 != uVar32);
            iVar33 = iVar40 + iVar36 + iVar38 + iVar25 + iVar39 + iVar35 + iVar37 + iVar33;
            if (uVar27 != uVar30) {
LAB_142582de9:
              uVar31 = iVar34 + 1;
              do {
                uVar3 = *puVar28;
                puVar28 = puVar28 + 1;
                iVar33 = iVar33 - (uint)(uVar3 - 0x206a < 0xfffffffc &&
                                        (uVar3 - 0x202f < 0xfffffffb &&
                                        (uVar3 & 0xfffffffc) != 0x200c));
                uVar31 = uVar31 - 1;
              } while (1 < uVar31);
            }
LAB_142582e2c:
            return param_4 - iVar33;
          }
          uVar27 = FUN_1425817a0();
          if ((uint)uVar27 < 0x10000) {
            iVar36 = 1;
            iVar35 = iVar25;
          }
          else {
            iVar35 = iVar25 + 1;
            param_3[iVar25] = (short)(uVar27 >> 10) + 0xd7c0;
            uVar27 = (ulonglong)((uint)uVar27 & 0x3ff | 0xdc00);
            iVar36 = 2;
          }
          iVar25 = iVar25 + iVar36;
          param_3[iVar35] = (ushort)uVar27;
        }
        param_1 = puVar28;
        param_2 = iVar34;
        if (iVar34 < 1) {
          return iVar25;
        }
      } while( true );
    }
    if (param_2 <= param_4) {
      uVar31 = 0;
      iVar33 = 0;
      do {
        iVar25 = iVar33 + 1;
        uVar3 = param_1[iVar33];
        uVar26 = (uint)uVar3;
        if ((((uVar3 & 0xfc00) == 0xd800) && (iVar25 != param_2)) &&
           (lVar29 = (longlong)iVar25, (param_1[lVar29] & 0xfc00) == 0xdc00)) {
          iVar25 = iVar33 + 2;
          uVar26 = (uint)uVar3 * 0x400 + (uint)param_1[lVar29] + 0xfca02400;
        }
        uVar27 = FUN_1425817a0(uVar26);
        if ((uint)uVar27 < 0x10000) {
          iVar33 = 1;
          uVar26 = uVar31;
        }
        else {
          uVar26 = uVar31 + 1;
          param_3[uVar31] = (short)(uVar27 >> 10) + 0xd7c0;
          uVar27 = (ulonglong)((uint)uVar27 & 0x3ff | 0xdc00);
          iVar33 = 2;
        }
        uVar31 = uVar31 + iVar33;
        param_3[(int)uVar26] = (ushort)uVar27;
        iVar33 = iVar25;
      } while (iVar25 < param_2);
      return param_2;
    }
  }
  *param_6 = 0xf;
                    /* WARNING: Read-only address (ram,0x0001499675f0) is written */
  return param_2;
}



// FUNCTION 142583010 FUN_142583010 body=908 status=ok
// SIG undefined FUN_142583010(void)

void FUN_142583010(longlong param_1,undefined8 *param_2,int param_3,uint param_4,undefined4 *param_5
                  )

{
  byte *pbVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  longlong lVar14;
  ushort *puVar15;
  
  lVar4 = *(longlong *)(param_1 + 0x58);
  lVar5 = *(longlong *)(param_1 + 0xe8);
  uVar7 = (*(byte *)(param_1 + 0xfd) & 1) << 10 | 0x40;
  cVar2 = *(char *)(param_1 + 0xfc);
  if (cVar2 == '\0') {
    uVar12 = 0x800;
    if (param_3 == 0) {
      uVar12 = 0xf00;
    }
    uVar9 = 0;
    uVar10 = 0;
    do {
      uVar3 = *(ushort *)(lVar4 + uVar9 * 2);
      if (uVar7 < uVar3) {
        lVar14 = 0;
        do {
          uVar8 = (ulonglong)*(ushort *)(lVar4 + (ulonglong)uVar3 * 2 + lVar14 * 2);
          if (uVar8 == 0) {
            uVar10 = uVar10 + 0x10;
          }
          else {
            puVar15 = (ushort *)(lVar5 + uVar8 * 2);
            do {
              if (uVar12 <= *puVar15) {
                (*(code *)param_2[1])(*param_2,uVar10);
              }
              puVar15 = puVar15 + 1;
              uVar10 = uVar10 + 1;
            } while ((uVar10 & 0xf) != 0);
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x40);
      }
      else {
        uVar10 = uVar10 + 0x400;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar7);
  }
  else {
    uVar10 = 3;
    if ((cVar2 != '\x02') && (cVar2 != '\t')) {
      if (cVar2 == '\x03') {
        uVar10 = 4;
      }
      else {
        uVar10 = 2;
      }
    }
    uVar8 = (ulonglong)uVar10;
    uVar9 = 0;
    uVar11 = 0;
    do {
      uVar12 = *(ushort *)(lVar4 + uVar9 * 2);
      if (uVar7 >> 1 < (uint)uVar12) {
        lVar14 = 0;
        do {
          uVar13 = *(uint *)(lVar4 + (ulonglong)uVar12 * 4 + lVar14 * 4);
          if (uVar13 == 0) {
            uVar11 = uVar11 + 0x10;
          }
          else {
            if (5 < param_4) {
              *param_5 = 5;
              return;
            }
            puVar15 = (ushort *)((ulonglong)(ushort)uVar13 * uVar8 * 0x10 + lVar5);
            uVar13 = uVar13 >> 0x10;
            switch(param_4) {
            case 0:
              do {
                if ((uVar13 & 1) == 0) {
                  if (param_3 == 1) {
                    bVar6 = 0;
                    if (uVar8 != 2) {
                      if (uVar10 != 3) {
                        if (uVar10 != 4) goto LAB_14258335b;
                        bVar6 = (byte)*puVar15;
                        puVar15 = (ushort *)((longlong)puVar15 + 1);
                      }
                      bVar6 = bVar6 | (byte)*puVar15;
                      puVar15 = (ushort *)((longlong)puVar15 + 1);
                    }
                    uVar3 = *puVar15;
                    pbVar1 = (byte *)((longlong)puVar15 + 1);
                    puVar15 = puVar15 + 1;
                    if ((bVar6 != 0 || (byte)uVar3 != 0) || *pbVar1 != 0) {
                      (*(code *)param_2[1])(*param_2,uVar11);
                    }
                  }
                }
                else {
                  (*(code *)param_2[1])(*param_2,uVar11);
                  puVar15 = (ushort *)((longlong)puVar15 + uVar8);
                }
LAB_14258335b:
                uVar13 = uVar13 >> 1;
                uVar11 = uVar11 + 1;
              } while ((uVar11 & 0xf) != 0);
              break;
            case 1:
              do {
                if (((param_3 == 1) || ((uVar13 & 1) != 0)) && (0xff < *puVar15)) {
                  (*(code *)param_2[1])(*param_2,uVar11);
                }
                uVar13 = uVar13 >> 1;
                puVar15 = puVar15 + 1;
                uVar11 = uVar11 + 1;
              } while ((uVar11 & 0xf) != 0);
              break;
            case 2:
              do {
                if (((param_3 == 1) || ((uVar13 & 1) != 0)) && ((byte)((byte)*puVar15 + 0x7f) < 2))
                {
                  (*(code *)param_2[1])(*param_2,uVar11);
                }
                uVar13 = uVar13 >> 1;
                puVar15 = (ushort *)((longlong)puVar15 + 3);
                uVar11 = uVar11 + 1;
              } while ((uVar11 & 0xf) != 0);
              break;
            case 3:
              do {
                if (((param_3 == 1) || ((uVar13 & 1) != 0)) &&
                   ((ushort)(*puVar15 + 0x7ec0) < 0x6ebd)) {
                  (*(code *)param_2[1])(*param_2,uVar11);
                }
                uVar13 = uVar13 >> 1;
                puVar15 = puVar15 + 1;
                uVar11 = uVar11 + 1;
              } while ((uVar11 & 0xf) != 0);
              break;
            case 4:
              do {
                if (((param_3 == 1) || ((uVar13 & 1) != 0)) &&
                   (((ushort)(*puVar15 + 0x5e5f) < 0x5d5e && ((*puVar15 + 0x5f & 0xfe) < 0x5e)))) {
                  (*(code *)param_2[1])(*param_2,uVar11);
                }
                uVar13 = uVar13 >> 1;
                puVar15 = puVar15 + 1;
                uVar11 = uVar11 + 1;
              } while ((uVar11 & 0xf) != 0);
              break;
            case 5:
              do {
                if ((((param_3 == 1) || ((uVar13 & 1) != 0)) &&
                    ((ushort)(*puVar15 + 0x5e5f) < 0x5c5e)) && ((*puVar15 + 0x5f & 0xfe) < 0x5e)) {
                  (*(code *)param_2[1])(*param_2,uVar11);
                }
                uVar13 = uVar13 >> 1;
                puVar15 = puVar15 + 1;
                uVar11 = uVar11 + 1;
              } while ((uVar11 & 0xf) != 0);
            }
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x40);
      }
      else {
        uVar11 = uVar11 + 0x400;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar7);
  }
  FUN_142637290(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1425833f0 FUN_1425833f0 body=35 status=ok
// SIG undefined FUN_1425833f0(void)

void FUN_1425833f0(void)

{
  FUN_142583010();
  return;
}



// FUNCTION 142583420 FUN_142583420 body=5746 status=ok
// SIG undefined FUN_142583420(void)

void FUN_142583420(longlong param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ushort *puVar14;
  char cVar15;
  undefined1 uVar16;
  ushort uVar17;
  int **ppiVar18;
  ushort *puVar19;
  int **ppiVar20;
  int **ppiVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  int *piVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  byte bVar31;
  byte bVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  byte bVar36;
  byte *_Src;
  bool bVar37;
  bool bVar38;
  undefined1 auStack_d8 [32];
  int **local_b8;
  ushort **local_b0;
  ushort *local_a8;
  int **local_a0;
  int local_98;
  undefined1 local_90;
  ushort *local_88;
  longlong local_80;
  ushort *local_78;
  longlong local_70;
  ulonglong local_68;
  int *local_60;
  ushort *local_58;
  int **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar12 = *(longlong *)(param_1 + 8);
  if (('\0' < *(char *)(lVar12 + 0x11a)) &&
     ((FUN_1426365f0(lVar12,param_1,0xffffffff,param_2), 0 < *(int *)param_2 ||
      (*(char *)(lVar12 + 0x11a) < '\0')))) goto LAB_142584a1a;
  lVar13 = *(longlong *)(lVar12 + 0x30);
  local_70 = param_1;
  if (*(char *)(lVar13 + 0x30) == '\x01') {
    if ((*(byte *)(lVar13 + 0xfd) & 1) == 0) {
      lVar12 = *(longlong *)(param_1 + 8);
      local_50 = *(int ***)(param_1 + 0x10);
      ppiVar21 = *(int ***)(param_1 + 0x18);
      local_58 = *(ushort **)(param_1 + 0x20);
      local_60 = *(int **)(param_1 + 0x30);
      uVar29 = (ulonglong)(*(longlong *)(param_1 + 0x28) - (longlong)local_58) >> 1;
      lVar13 = *(longlong *)
                (*(longlong *)(lVar12 + 0x30) + 0x38 +
                (ulonglong)((*(byte *)(lVar12 + 0x38) & 0x10) >> 4) * 8);
      uVar22 = (int)ppiVar21 - (int)local_50;
      uVar25 = (ulonglong)uVar22;
      if ((int)uVar29 <= (int)uVar22) {
        uVar25 = uVar29 & 0xffffffff;
      }
      iVar33 = 0;
      iVar27 = (int)uVar25;
      ppiVar18 = local_50;
      do {
        if (0xf < iVar27) {
          uVar29 = uVar25 >> 4;
          iVar27 = (int)uVar29;
          do {
            iVar34 = (int)uVar29;
            uVar22 = *(uint *)(lVar13 + (ulonglong)*(byte *)local_50 * 4);
            *local_58 = (ushort)uVar22;
            uVar35 = *(uint *)(lVar13 + (ulonglong)*(byte *)((longlong)local_50 + 1) * 4);
            local_58[1] = (ushort)uVar35;
            uVar24 = *(uint *)(lVar13 + (ulonglong)*(byte *)((longlong)local_50 + 2) * 4);
            local_58[2] = (ushort)uVar24;
            uVar23 = *(uint *)(lVar13 + (ulonglong)*(byte *)((longlong)local_50 + 3) * 4);
            local_58[3] = (ushort)uVar23;
            uVar28 = *(uint *)(lVar13 + (ulonglong)*(byte *)((longlong)local_50 + 4) * 4);
            local_58[4] = (ushort)uVar28;
            uVar1 = *(uint *)(lVar13 + (ulonglong)*(byte *)((longlong)local_50 + 5) * 4);
            local_58[5] = (ushort)uVar1;
            uVar2 = *(uint *)(lVar13 + (ulonglong)*(byte *)((longlong)local_50 + 6) * 4);
            local_58[6] = (ushort)uVar2;
            uVar3 = *(uint *)(lVar13 + (ulonglong)*(byte *)((longlong)local_50 + 7) * 4);
            local_58[7] = (ushort)uVar3;
            uVar4 = *(uint *)(lVar13 + (ulonglong)*(byte *)(local_50 + 1) * 4);
            local_58[8] = (ushort)uVar4;
            uVar5 = *(uint *)(lVar13 + (ulonglong)*(byte *)((longlong)local_50 + 9) * 4);
            local_58[9] = (ushort)uVar5;
            uVar6 = *(uint *)(lVar13 + (ulonglong)*(byte *)((longlong)local_50 + 10) * 4);
            local_58[10] = (ushort)uVar6;
            uVar7 = *(uint *)(lVar13 + (ulonglong)*(byte *)((longlong)local_50 + 0xb) * 4);
            local_58[0xb] = (ushort)uVar7;
            uVar8 = *(uint *)(lVar13 + (ulonglong)*(byte *)((longlong)local_50 + 0xc) * 4);
            local_58[0xc] = (ushort)uVar8;
            uVar9 = *(uint *)(lVar13 + (ulonglong)*(byte *)((longlong)local_50 + 0xd) * 4);
            local_58[0xd] = (ushort)uVar9;
            uVar10 = *(uint *)(lVar13 + (ulonglong)*(byte *)((longlong)local_50 + 0xe) * 4);
            local_58[0xe] = (ushort)uVar10;
            ppiVar20 = local_50 + 2;
            uVar11 = *(uint *)(lVar13 + (ulonglong)*(byte *)((longlong)local_50 + 0xf) * 4);
            puVar14 = local_58 + 0x10;
            local_58[0xf] = (ushort)uVar11;
            if (-0x7ff00001 <
                (int)(uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
                     uVar3 | uVar4 | uVar5 | uVar6 |
                     uVar28 | uVar1 | uVar2 | uVar24 | uVar23 | uVar22 | uVar35))
            goto LAB_1425838c9;
            uVar29 = (ulonglong)(iVar34 - 1);
            local_58 = puVar14;
            local_50 = ppiVar20;
          } while (1 < iVar34);
          iVar34 = 0;
LAB_1425838c9:
          iVar27 = iVar27 - iVar34;
          uVar25 = (ulonglong)(uint)((int)uVar25 + iVar27 * -0x10);
          param_1 = local_70;
          if ((local_60 != (int *)0x0) &&
             (ppiVar18 = (int **)((longlong)ppiVar18 + (longlong)(iVar27 * 0x10)), 0 < iVar27)) {
            uVar22 = iVar27 + 1;
            iVar27 = iVar33;
            do {
              *local_60 = iVar27;
              local_60[1] = iVar27 + 1;
              local_60[2] = iVar27 + 2;
              local_60[3] = iVar27 + 3;
              local_60[4] = iVar27 + 4;
              local_60[5] = iVar27 + 5;
              local_60[6] = iVar27 + 6;
              local_60[7] = iVar27 + 7;
              local_60[8] = iVar27 + 8;
              local_60[9] = iVar27 + 9;
              local_60[10] = iVar27 + 10;
              local_60[0xb] = iVar27 + 0xb;
              local_60[0xc] = iVar27 + 0xc;
              local_60[0xd] = iVar27 + 0xd;
              piVar26 = local_60 + 0xf;
              local_60[0xe] = iVar27 + 0xe;
              iVar33 = iVar27 + 0x10;
              local_60 = local_60 + 0x10;
              *piVar26 = iVar27 + 0xf;
              uVar22 = uVar22 - 1;
              iVar27 = iVar33;
            } while (1 < uVar22);
          }
        }
        ppiVar20 = local_50;
        if ((int)uVar25 < 1) goto LAB_142584844;
LAB_142583a86:
        iVar27 = (int)local_50 - (int)ppiVar18;
        while( true ) {
          ppiVar20 = local_50;
          if (ppiVar21 <= local_50) goto LAB_142584844;
          ppiVar20 = (int **)((longlong)local_50 + 1);
          uVar22 = *(uint *)(lVar13 + (ulonglong)*(byte *)local_50 * 4);
          if ((int)uVar22 < -0x7ff00000) goto LAB_142583ad8;
          uVar35 = uVar22 >> 0x14 & 0xf;
          if (uVar35 == 7) break;
          if (uVar35 == 6) goto LAB_142583b10;
          iVar27 = iVar27 + 1;
          local_50 = ppiVar20;
          if (uVar35 == 2) goto LAB_142583ad8;
        }
        param_2[0] = 0xc;
        param_2[1] = 0;
LAB_142583b10:
        if ((local_60 != (int *)0x0) && (1 < iVar27 + 1)) {
          uVar22 = iVar27 + 2;
          do {
            piVar26 = local_60 + 1;
            *local_60 = iVar33;
            iVar33 = iVar33 + 1;
            uVar22 = uVar22 - 1;
            local_60 = piVar26;
          } while (2 < uVar22);
        }
        if (0 < *(int *)param_2) goto LAB_142584844;
        *(byte *)(lVar12 + 0x41) = *(byte *)local_50;
        lVar30 = *(longlong *)(*(longlong *)(lVar12 + 0x30) + 0x120);
        local_50 = ppiVar20;
        if (lVar30 == 0) {
LAB_142583bc9:
          param_2[0] = 10;
          param_2[1] = 0;
          uVar16 = 1;
        }
        else {
          local_a8 = *(ushort **)(param_1 + 0x28);
          local_90 = *(undefined1 *)(param_1 + 2);
          local_a0 = &local_60;
          local_b0 = &local_58;
          local_b8 = ppiVar21;
          local_98 = iVar33;
          local_88 = param_2;
          cVar15 = FUN_142635f70(lVar12,lVar30,1,&local_50);
          if (cVar15 == '\0') goto LAB_142583bc9;
          uVar16 = 0;
        }
        *(undefined1 *)(lVar12 + 0x40) = uVar16;
        iVar33 = iVar33 + ((int)local_50 - (int)ppiVar20) + 1;
        ppiVar18 = ppiVar20;
        ppiVar20 = local_50;
        if (0 < *(int *)param_2) goto LAB_142584844;
        uVar29 = (ulonglong)(*(longlong *)(param_1 + 0x28) - (longlong)local_58) >> 1;
        uVar22 = (int)ppiVar21 - (int)local_50;
        uVar25 = (ulonglong)uVar22;
        if ((int)uVar29 <= (int)uVar22) {
          uVar25 = uVar29 & 0xffffffff;
        }
        iVar27 = (int)uVar25;
      } while( true );
    }
    lVar12 = *(longlong *)(param_1 + 8);
    ppiVar21 = *(int ***)(param_1 + 0x10);
    ppiVar18 = *(int ***)(param_1 + 0x18);
    local_58 = *(ushort **)(param_1 + 0x20);
    puVar14 = *(ushort **)(param_1 + 0x28);
    local_60 = *(int **)(param_1 + 0x30);
    if (ppiVar21 < ppiVar18) {
      lVar13 = *(longlong *)
                (*(longlong *)(lVar12 + 0x30) + 0x38 +
                (ulonglong)((*(byte *)(lVar12 + 0x38) & 0x10) >> 4) * 8);
      iVar33 = 0;
      ppiVar20 = ppiVar21;
      local_78 = param_2;
      do {
        if (puVar14 <= local_58) {
          local_78[0] = 0xf;
          local_78[1] = 0;
          ppiVar21 = ppiVar20;
          break;
        }
        local_50 = (int **)((longlong)ppiVar20 + 1);
        uVar22 = *(uint *)(lVar13 + (ulonglong)*(byte *)ppiVar20 * 4);
        if ((int)uVar22 < -0x7ff00000) {
LAB_1425846d0:
          puVar19 = local_58 + 1;
          *local_58 = (ushort)uVar22;
          local_58 = puVar19;
          if (local_60 != (int *)0x0) {
            *local_60 = iVar33;
            local_60 = local_60 + 1;
          }
        }
        else {
          ppiVar21 = local_50;
          if ((uVar22 & 0xd00000) == 0x100000) {
            puVar19 = local_58 + 1;
            *local_58 = (ushort)(uVar22 >> 10) & 0x3ff | 0xd800;
            if (local_60 != (int *)0x0) {
              *local_60 = iVar33;
              local_60 = local_60 + 1;
            }
            uVar22 = uVar22 & 0x3ff | 0xdc00;
            local_58 = puVar19;
            if (puVar19 < puVar14) goto LAB_1425846d0;
            *(short *)(lVar12 + 0x90) = (short)uVar22;
            *(undefined1 *)(lVar12 + 0x5d) = 1;
            local_78[0] = 0xf;
            local_78[1] = 0;
            break;
          }
          uVar35 = uVar22 >> 0x14 & 0xf;
          if (uVar35 == 2) goto LAB_1425846d0;
          if (uVar35 == 6) {
            if (0 < *(int *)local_78) break;
            *(int ***)(local_70 + 0x10) = local_50;
            *(byte *)(lVar12 + 0x41) = *(byte *)ppiVar20;
            lVar30 = *(longlong *)(*(longlong *)(lVar12 + 0x30) + 0x120);
            if (lVar30 == 0) {
LAB_14258478a:
              local_78[0] = 10;
              local_78[1] = 0;
              uVar16 = 1;
            }
            else {
              local_90 = *(undefined1 *)(local_70 + 2);
              local_88 = local_78;
              local_b8 = ppiVar18;
              local_b0 = &local_58;
              local_a8 = puVar14;
              local_a0 = &local_60;
              local_98 = iVar33;
              cVar15 = FUN_142635f70(lVar12,lVar30,1,&local_50);
              if (cVar15 == '\0') goto LAB_14258478a;
              uVar16 = 0;
            }
            *(undefined1 *)(lVar12 + 0x40) = uVar16;
            ppiVar21 = local_50;
            if (0 < *(int *)local_78) break;
            iVar33 = iVar33 + ((int)local_50 - *(int *)(local_70 + 0x10));
          }
          else if (uVar35 == 7) {
            local_78[0] = 0xc;
            local_78[1] = 0;
            break;
          }
        }
        iVar33 = iVar33 + 1;
        ppiVar20 = local_50;
        ppiVar21 = local_50;
      } while (local_50 < ppiVar18);
    }
    *(int ***)(local_70 + 0x10) = ppiVar21;
    *(ushort **)(local_70 + 0x20) = local_58;
    *(int **)(local_70 + 0x30) = local_60;
    goto LAB_142584a1a;
  }
  local_50 = *(int ***)(param_1 + 0x10);
  ppiVar21 = *(int ***)(param_1 + 0x18);
  local_58 = *(ushort **)(param_1 + 0x20);
  puVar14 = *(ushort **)(param_1 + 0x28);
  local_60 = *(int **)(param_1 + 0x30);
  uVar25 = (ulonglong)*(uint *)(lVar12 + 0x4c);
  if ((char)*(uint *)(lVar12 + 0x4c) == '\0') {
    uVar25 = (ulonglong)*(byte *)(lVar13 + 0x31);
  }
  uVar35 = (uint)uVar25;
  bVar32 = *(byte *)(lVar12 + 0x40);
  uVar22 = *(uint *)(lVar12 + 0x48);
  if (local_50 < ppiVar21) {
    lVar30 = *(longlong *)(lVar13 + 0x38 + (ulonglong)((*(byte *)(lVar12 + 0x38) & 0x10) >> 4) * 8);
    local_68 = *(ulonglong *)(lVar13 + 0x48);
    iVar33 = 0;
    local_80 = CONCAT44(local_80._4_4_,-(uint)(bVar32 != 0));
    local_78 = param_2;
LAB_142583cc5:
    uVar24 = (uint)uVar25;
    uVar35 = uVar24;
    if (puVar14 <= local_58) goto LAB_1425847be;
    if (bVar32 != 0) {
      bVar31 = *(byte *)local_50;
      *(byte *)(lVar12 + 0x41 + (longlong)(char)bVar32) = bVar31;
      uVar23 = *(uint *)((uVar25 & 0xff) * 0x400 + lVar30 + (ulonglong)bVar31 * 4);
      bVar31 = bVar32;
      goto LAB_142583fa9;
    }
    iVar27 = (int)local_80;
    if (local_60 == (int *)0x0) {
      do {
        uVar35 = (uint)uVar25;
        uVar23 = *(uint *)((uVar25 & 0xff) * 0x400 + lVar30 + (ulonglong)*(byte *)local_50 * 4);
        if ((int)uVar23 < 0) {
          if (0x800fffff < uVar23) goto LAB_1425841b7;
          local_50 = (int **)((longlong)local_50 + 1);
          *local_58 = (ushort)uVar23;
          uVar25 = 0;
        }
        else {
          uVar35 = uVar23 >> 0x18;
          uVar22 = uVar23 & 0xffffff;
          ppiVar18 = (int **)((longlong)local_50 + 1);
          ppiVar20 = local_50;
          if (((ppiVar21 <= ppiVar18) ||
              (uVar23 = *(uint *)((ulonglong)uVar35 * 0x400 + lVar30 +
                                 (ulonglong)*(byte *)ppiVar18 * 4),
              (uVar23 & 0x80f00000) != 0x80400000)) ||
             (uVar17 = *(ushort *)
                        (local_68 + ((ulonglong)(uVar23 & 0xffff) + (ulonglong)uVar22) * 2),
             0xfffd < uVar17)) goto LAB_142583f6e;
          local_50 = (int **)((longlong)local_50 + 2);
          *local_58 = uVar17;
          uVar25 = (ulonglong)((byte)(uVar23 >> 0x18) & 0x7f);
          uVar22 = 0;
        }
        local_58 = local_58 + 1;
        uVar35 = (uint)uVar25;
        bVar32 = 0;
      } while ((local_50 < ppiVar21) && (bVar32 = 0, local_58 < puVar14));
    }
    else {
      do {
        uVar35 = (uint)uVar25;
        uVar23 = *(uint *)((uVar25 & 0xff) * 0x400 + lVar30 + (ulonglong)*(byte *)local_50 * 4);
        if (-1 < (int)uVar23) {
          uVar35 = uVar23 >> 0x18;
          uVar22 = uVar23 & 0xffffff;
          ppiVar18 = (int **)((longlong)local_50 + 1);
          if (((ppiVar18 < ppiVar21) &&
              (uVar23 = *(uint *)((ulonglong)uVar35 * 0x400 + lVar30 +
                                 (ulonglong)*(byte *)ppiVar18 * 4),
              (uVar23 & 0x80f00000) == 0x80400000)) &&
             (uVar17 = *(ushort *)
                        (local_68 + ((ulonglong)(uVar23 & 0xffff) + (ulonglong)uVar22) * 2),
             uVar17 < 0xfffe)) {
            local_50 = (int **)((longlong)local_50 + 2);
            *local_58 = uVar17;
            if (local_60 != (int *)0x0) {
              *local_60 = iVar27;
              iVar27 = iVar33 + 2;
              iVar33 = iVar27;
              local_60 = local_60 + 1;
            }
            uVar25 = (ulonglong)((byte)(uVar23 >> 0x18) & 0x7f);
            uVar22 = 0;
            goto LAB_142583e40;
          }
          iVar33 = iVar33 + 1;
          ppiVar20 = local_50;
LAB_142583f6e:
          local_50 = ppiVar18;
          *(byte *)(lVar12 + 0x41) = *(byte *)ppiVar20;
          bVar32 = 1;
          break;
        }
        if (0x800fffff < uVar23) goto LAB_1425841b7;
        local_50 = (int **)((longlong)local_50 + 1);
        *local_58 = (ushort)uVar23;
        if (local_60 == (int *)0x0) {
          uVar25 = 0;
        }
        else {
          *local_60 = iVar27;
          iVar27 = iVar33 + 1;
          uVar25 = 0;
          iVar33 = iVar27;
          local_60 = local_60 + 1;
        }
LAB_142583e40:
        local_58 = local_58 + 1;
        uVar35 = (uint)uVar25;
        bVar32 = 0;
      } while ((local_50 < ppiVar21) && (local_58 < puVar14));
    }
    uVar24 = uVar35;
    bVar31 = bVar32;
    if (local_50 < ppiVar21) goto LAB_142583f83;
  }
  goto LAB_1425847ce;
LAB_142583ad8:
  puVar14 = local_58 + 1;
  *local_58 = (ushort)uVar22;
  iVar27 = (int)uVar25;
  uVar25 = (ulonglong)(iVar27 - 1);
  local_58 = puVar14;
  local_50 = ppiVar20;
  if (iVar27 < 2) goto LAB_142584844;
  goto LAB_142583a86;
LAB_142584844:
  local_50 = ppiVar20;
  if (((*(int *)param_2 < 1) && (local_50 < ppiVar21)) && (*(ushort **)(param_1 + 0x28) <= local_58)
     ) {
    param_2[0] = 0xf;
    param_2[1] = 0;
  }
  if ((local_60 != (int *)0x0) && (uVar25 = (longlong)local_50 - (longlong)ppiVar18, uVar25 != 0)) {
    if ((uVar25 & 3) != 0) {
      uVar29 = 0;
      do {
        piVar26 = local_60 + 1;
        *local_60 = iVar33 + (int)uVar29;
        uVar29 = uVar29 + 1;
        local_60 = piVar26;
      } while ((uVar25 & 3) != uVar29);
      uVar25 = uVar25 - uVar29;
      iVar33 = iVar33 + (int)uVar29;
    }
    if ((byte *)0x2 < (byte *)((longlong)local_50 + ~(ulonglong)ppiVar18)) {
      do {
        *local_60 = iVar33;
        local_60[1] = iVar33 + 1;
        piVar26 = local_60 + 3;
        local_60[2] = iVar33 + 2;
        local_60 = local_60 + 4;
        *piVar26 = iVar33 + 3;
        iVar33 = iVar33 + 4;
        uVar25 = uVar25 - 4;
      } while (uVar25 != 0);
    }
  }
  *(int ***)(param_1 + 0x10) = local_50;
  *(ushort **)(param_1 + 0x20) = local_58;
  *(int **)(param_1 + 0x30) = local_60;
  goto LAB_142584a1a;
LAB_1425841b7:
  bVar31 = 0;
  bVar32 = 0;
  uVar24 = uVar35;
  if (ppiVar21 <= local_50) goto LAB_1425847ce;
LAB_142583f83:
  uVar35 = uVar24;
  bVar32 = bVar31;
  if (puVar14 <= local_58) {
LAB_1425847be:
    local_78[0] = 0xf;
    local_78[1] = 0;
    goto LAB_1425847ce;
  }
  local_80 = CONCAT44(local_80._4_4_,iVar27);
  *(byte *)(lVar12 + 0x41 + (ulonglong)bVar31) = *(byte *)local_50;
LAB_142583fa9:
  local_50 = (int **)((longlong)local_50 + 1);
  bVar32 = bVar31 + 1;
  iVar33 = iVar33 + 1;
  if (-1 < (int)uVar23) {
    uVar25 = (ulonglong)(uVar23 >> 0x18);
    uVar22 = uVar22 + (uVar23 & 0xffffff);
    goto LAB_142583caf;
  }
  *(uint *)(lVar12 + 0x4c) = uVar24 & 0xff;
  bVar36 = (byte)(uVar23 >> 0x18) & 0x7f;
  uVar25 = (ulonglong)bVar36;
  uVar35 = (uint)bVar36;
  uVar28 = uVar23 >> 0x14 & 0xf;
  if (uVar28 == 0) {
switchD_142584174_caseD_2:
    puVar19 = local_58;
LAB_14258417e:
    *puVar19 = (ushort)uVar23;
    local_58 = puVar19 + 1;
LAB_14258418d:
    if (local_60 != (int *)0x0) {
      *local_60 = (int)local_80;
      local_60 = local_60 + 1;
    }
  }
  else {
    puVar19 = local_58;
    if (uVar28 == 5) {
      uVar17 = *(ushort *)(local_68 + (ulonglong)(uVar22 + (uVar23 & 0xffff)) * 2);
      if (uVar17 < 0xd800) {
        *local_58 = uVar17;
        local_58 = local_58 + 1;
      }
      else {
        uVar22 = (uVar23 & 0xffff) + uVar22 + 1;
        if (uVar17 < 0xe000) {
          *local_58 = uVar17 & 0xdbff;
          if (local_60 != (int *)0x0) {
            *local_60 = (int)local_80;
            local_60 = local_60 + 1;
          }
          uVar17 = *(ushort *)(local_68 + (ulonglong)uVar22 * 2);
          puVar19 = local_58 + 1;
          if (puVar14 <= local_58 + 1) {
            *(ushort *)(lVar12 + 0x90) = uVar17;
            goto LAB_142584a51;
          }
        }
        else {
          if ((uVar17 & 0xfffe) != 0xe000) {
            uVar24 = (uint)bVar36;
            if (uVar17 == 0xffff) goto LAB_1425841ca;
            goto switchD_142584174_caseD_6;
          }
          uVar17 = *(ushort *)(local_68 + (ulonglong)uVar22 * 2);
        }
LAB_142584147:
        *puVar19 = uVar17;
        local_58 = puVar19 + 1;
      }
      goto LAB_14258418d;
    }
    if (uVar28 == 4) {
      uVar22 = uVar22 + (uVar23 & 0xffff);
      uVar17 = *(ushort *)(local_68 + (ulonglong)uVar22 * 2);
      if (uVar17 < 0xfffe) goto LAB_142584147;
      if (uVar17 != 0xfffe) goto switchD_142584174_caseD_7;
      uVar35 = *(uint *)(*(longlong *)(lVar12 + 0x30) + 0x34);
      if (uVar35 != 0) {
        lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x30) + 0x50);
        if (uVar35 == 1) {
          uVar24 = 0;
        }
        else {
          uVar24 = 0;
          do {
            uVar28 = uVar24 + uVar35 >> 1;
            uVar23 = uVar28;
            if (uVar22 < *(uint *)(lVar13 + (ulonglong)uVar28 * 8)) {
              uVar23 = uVar24;
              uVar35 = uVar28;
            }
            uVar24 = uVar23;
          } while (uVar24 < uVar35 - 1);
        }
        if ((*(uint *)(lVar13 + (ulonglong)uVar24 * 8) == uVar22) &&
           (iVar27 = *(int *)(lVar13 + 4 + (ulonglong)uVar24 * 8), iVar27 != 0xfffe)) {
          *local_58 = (ushort)iVar27;
          local_58 = local_58 + 1;
          goto LAB_14258418d;
        }
      }
switchD_142584174_caseD_6:
      uVar35 = (uint)uVar25;
      if (bVar32 != 0) {
        if (0 < *(int *)local_78) {
          uVar22 = 0;
          if ('\x01' < (char)bVar32) {
            local_78 = (ushort *)
                       CONCAT71(local_78._1_7_,*(undefined1 *)(*(longlong *)(lVar12 + 0x30) + 0x31))
            ;
            local_80 = (uVar25 & 0xff) * 0x400 + lVar30;
            local_68 = (ulonglong)bVar32;
            _Src = (byte *)(lVar12 + 0x42);
            uVar25 = 1;
            goto LAB_142584999;
          }
          goto LAB_1425847ce;
        }
        *(int ***)(local_70 + 0x10) = local_50;
        lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x30) + 0x120);
        if (lVar13 == 0) {
LAB_14258426e:
          puVar19 = local_78;
          if ((bVar32 == 4) && ((*(byte *)(lVar12 + 0x39) & 0x80) != 0)) {
            uVar22 = (uint)*(byte *)(lVar12 + 0x44) +
                     ((uint)*(byte *)(lVar12 + 0x43) * 5 +
                     ((uint)*(byte *)(lVar12 + 0x42) +
                     ((uint)*(byte *)(lVar12 + 0x41) + (uint)*(byte *)(lVar12 + 0x41) * 4) * 2) *
                     0x276) * 2;
            if (uVar22 < 0x1ca0fa) {
              if (uVar22 < 0x1a0915) {
                if (uVar22 < 0x19c1e6) goto LAB_14258427f;
                iVar27 = -0x19c1e6;
                piVar26 = &DAT_1499faa30;
                if (0x19dbd2 < uVar22) {
                  if (uVar22 == 0x19dbd3) goto LAB_14258427f;
                  iVar27 = -0x19dbd4;
                  piVar26 = &DAT_1499faa40;
                  if (0x19dda3 < uVar22) {
                    if (uVar22 < 0x19e2b5) goto LAB_14258427f;
                    iVar27 = -0x19e2b5;
                    piVar26 = &DAT_1499faa60;
                    if (0x19eaf2 < uVar22) {
                      if (uVar22 < 0x19f81c) {
                        iVar27 = -0x19f15f;
                        piVar26 = &DAT_1499faa90;
                        bVar37 = uVar22 - 0x19f45c < 0xfffffd03;
LAB_1425843d1:
                        if (bVar37) goto LAB_14258427f;
                      }
                      else {
                        iVar27 = -0x19f81c;
                        piVar26 = &DAT_1499faa80;
                        if (0x19fb90 < uVar22) {
                          if (uVar22 < 0x1a04db) {
                            if (uVar22 < 0x19fc99) goto LAB_14258427f;
                            iVar27 = -0x19fc99;
                            piVar26 = &DAT_1499faab0;
                            if (uVar22 < 0x19fe70) goto LAB_1425844bc;
                            if (uVar22 < 0x1a02bc) {
                              iVar27 = -0x1a000b;
                              piVar26 = (int *)&DAT_1499faad0;
                              bVar37 = uVar22 - 0x1a0180 < 0xfffffe8b;
                              goto LAB_1425843d1;
                            }
                            iVar27 = -0x1a02bc;
                            piVar26 = &DAT_1499faac0;
                            bVar37 = uVar22 < 0x1a0474;
                            bVar38 = uVar22 == 0x1a0474;
                          }
                          else {
                            iVar27 = -0x1a04db;
                            piVar26 = (int *)&DAT_1499faaa0;
                            bVar37 = uVar22 < 0x1a0799;
                            bVar38 = uVar22 == 0x1a0799;
                          }
                          if (!bVar37 && !bVar38) goto LAB_14258427f;
                        }
                      }
                    }
                  }
                }
              }
              else {
                iVar27 = -0x1a0915;
                piVar26 = &DAT_1499faa20;
                if (0x1a416e < uVar22) {
                  if (uVar22 < 0x1a41c0) goto LAB_14258427f;
                  iVar27 = -0x1a41c0;
                  piVar26 = &DAT_1499faa50;
                  if (0x1a5286 < uVar22) {
                    if (uVar22 < 0x1a5370) goto LAB_14258427f;
                    iVar27 = -0x1a5370;
                    piVar26 = &DAT_1499faa70;
                    if (0x1a5775 < uVar22) {
                      iVar27 = -0x1a5894;
                      piVar26 = &DAT_1499faae0;
                      if (uVar22 - 0x1a58ae < 0xffffffe6) goto LAB_14258427f;
                    }
                  }
                }
              }
LAB_1425844bc:
              local_78[0] = 0;
              local_78[1] = 0;
              local_a8 = local_78;
              local_b0 = (ushort **)CONCAT44(local_b0._4_4_,(int)local_80);
              local_b8 = &local_60;
              FUN_142637be0(lVar12,iVar27 + uVar22 + *piVar26,&local_58,puVar14);
              bVar32 = 0;
              goto LAB_14258428a;
            }
            iVar27 = -0x1ca0fa;
            piVar26 = &DAT_1499faa10;
            if (uVar22 < 0x2ca0fa) goto LAB_1425844bc;
          }
LAB_14258427f:
          local_78[0] = 10;
          local_78[1] = 0;
        }
        else {
          local_90 = *(undefined1 *)(local_70 + 2);
          local_88 = local_78;
          local_98 = (int)local_80;
          local_a0 = &local_60;
          local_b0 = &local_58;
          local_b8 = ppiVar21;
          local_a8 = puVar14;
          cVar15 = FUN_142635f70(lVar12,lVar13,(int)(char)bVar32,&local_50);
          if (cVar15 == '\0') goto LAB_14258426e;
          bVar32 = 0;
          puVar19 = local_78;
        }
LAB_14258428a:
        uVar22 = 0;
        if (0 < *(int *)puVar19) goto LAB_1425847ce;
        iVar33 = iVar33 + ((int)local_50 - *(int *)(local_70 + 0x10));
        local_80 = CONCAT44(local_80._4_4_,iVar33);
        uVar22 = 0;
        goto LAB_142583caf;
      }
    }
    else {
      if ((uVar23 & 0xd00000) == 0x100000) {
        *local_58 = (ushort)(uVar23 >> 10) & 0x3ff | 0xd800;
        if (local_60 != (int *)0x0) {
          *local_60 = (int)local_80;
          local_60 = local_60 + 1;
        }
        uVar23 = uVar23 & 0x3ff | 0xdc00;
        puVar19 = local_58 + 1;
        if (puVar14 <= local_58 + 1) {
          *(short *)(lVar12 + 0x90) = (short)uVar23;
LAB_142584a51:
          local_58 = local_58 + 1;
          *(undefined1 *)(lVar12 + 0x5d) = 1;
          local_78[0] = 0xf;
          local_78[1] = 0;
          bVar32 = 0;
          uVar22 = 0;
          goto LAB_1425847ce;
        }
        goto LAB_14258417e;
      }
      uVar22 = 0;
      switch(uVar28) {
      case 2:
        goto switchD_142584174_caseD_2;
      default:
        local_80 = CONCAT44(local_80._4_4_,iVar33);
        bVar32 = 0;
        goto LAB_142583caf;
      case 6:
        goto switchD_142584174_caseD_6;
      case 7:
switchD_142584174_caseD_7:
        uVar24 = (uint)bVar36;
LAB_1425841ca:
        local_78[0] = 0xc;
        local_78[1] = 0;
        uVar25 = (ulonglong)uVar24;
        goto switchD_142584174_caseD_6;
      case 8:
        if (*(char *)(*(longlong *)(lVar12 + 0x30) + 0x31) != '\0') goto LAB_1425841ca;
      }
    }
  }
  bVar32 = 0;
  local_80 = CONCAT44(local_80._4_4_,iVar33);
  uVar22 = 0;
LAB_142583caf:
  uVar35 = (uint)uVar25;
  if (ppiVar21 <= local_50) goto LAB_1425847ce;
  goto LAB_142583cc5;
  while( true ) {
    uVar25 = uVar25 + 1;
    _Src = _Src + 1;
    bVar31 = bVar31 - 1;
    if (local_68 == uVar25) break;
LAB_142584999:
    uVar24 = *(uint *)(local_80 + (ulonglong)*_Src * 4);
    if ((int)uVar24 < 0) {
      uVar24 = uVar24 >> 0x14 & 0xf;
      cVar15 = uVar24 != 7 && (uVar24 != 8 || (char)local_78 == '\0');
    }
    else {
      cVar15 = FUN_142589e80(lVar30,uVar24 >> 0x18);
    }
    lVar13 = local_70;
    if (cVar15 != '\0') {
      lVar30 = (longlong)local_50 - *(longlong *)(local_70 + 0x10);
      if ((int)lVar30 < (int)(char)bVar31) {
        cVar15 = (char)lVar30 - bVar31;
        *(char *)(lVar12 + 0x11a) = cVar15;
        memcpy((void *)(lVar12 + 0xfa),_Src,-(longlong)cVar15);
        local_50 = *(int ***)(lVar13 + 0x10);
      }
      else {
        local_50 = (int **)((longlong)local_50 - (longlong)(char)bVar31);
      }
      bVar32 = (byte)uVar25;
      break;
    }
  }
LAB_1425847ce:
  *(uint *)(lVar12 + 0x48) = uVar22;
  *(uint *)(lVar12 + 0x4c) = uVar35 & 0xff;
  *(byte *)(lVar12 + 0x40) = bVar32;
  *(int ***)(local_70 + 0x10) = local_50;
  *(ushort **)(local_70 + 0x20) = local_58;
  *(int **)(local_70 + 0x30) = local_60;
LAB_142584a1a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
}



// FUNCTION 142584ad0 FUN_142584ad0 body=80 status=ok
// SIG undefined FUN_142584ad0(void)

uint FUN_142584ad0(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(uint *)(param_1 + 4);
  uVar2 = 0xfffe;
  if (uVar5 != 0) {
    puVar1 = *(uint **)(param_1 + 0x20);
    uVar3 = 0;
    uVar4 = uVar3;
    if (uVar5 == 1) {
      uVar5 = *puVar1;
    }
    else {
      do {
        uVar6 = uVar5 + (int)uVar4 >> 1;
        uVar3 = (ulonglong)uVar6;
        if (param_2 < puVar1[uVar3 * 2]) {
          uVar3 = uVar4;
          uVar5 = uVar6;
        }
        uVar4 = uVar3;
      } while ((uint)uVar3 < uVar5 - 1);
      uVar5 = puVar1[uVar3 * 2];
    }
    if (uVar5 == param_2) {
      uVar2 = puVar1[uVar3 * 2 + 1];
    }
  }
  return uVar2;
}



// FUNCTION 142584b30 FUN_142584b30 body=401 status=ok
// SIG undefined FUN_142584b30(void)

ulonglong FUN_142584b30(longlong param_1,longlong param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (0 < (int)param_3) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    uVar4 = (ulonglong)*(byte *)(param_1 + 0x31);
    uVar7 = 0;
    iVar6 = 0;
    do {
      uVar5 = *(uint *)(uVar4 * 0x400 + *(longlong *)(param_1 + 0x38) +
                       (ulonglong)*(byte *)(param_2 + uVar7) * 4);
      if ((int)uVar5 < 0) {
        uVar3 = 0xfffe;
        switch(uVar5 >> 0x14 & 0xf) {
        case 0:
        case 2:
          uVar3 = uVar5 & 0xffff;
          break;
        case 1:
        case 3:
          uVar3 = (uVar5 & 0xfffff) + 0x10000;
          break;
        case 4:
          uVar1 = *(ushort *)(lVar2 + (ulonglong)((uVar5 & 0xffff) + iVar6) * 2);
          uVar3 = (uint)uVar1;
          if (uVar1 == 0xfffe) {
            uVar3 = FUN_142584ad0(param_1 + 0x30);
          }
          break;
        case 5:
          uVar1 = *(ushort *)(lVar2 + (ulonglong)((uVar5 & 0xffff) + iVar6) * 2);
          uVar3 = (uint)uVar1;
          if (0xd7ff < uVar1) {
            uVar5 = (uVar5 & 0xffff) + iVar6 + 1;
            if (uVar1 < 0xe000) {
              uVar3 = (uint)*(ushort *)(lVar2 + (ulonglong)uVar5 * 2) + (uVar1 & 0x3ff) * 0x400 +
                      0x2400;
            }
            else if ((uVar3 & 0xfffffffe) == 0xe000) {
              uVar3 = (uint)*(ushort *)(lVar2 + (ulonglong)uVar5 * 2);
            }
            else {
              bVar8 = uVar3 == 0xffff;
              uVar3 = 0xfffe;
              if (bVar8) {
                return 0xffff;
              }
            }
          }
          break;
        case 6:
          break;
        default:
          return 0xffff;
        }
        if (param_3 - 1 != (int)uVar7) {
          return 0xffff;
        }
        if (uVar3 != 0xfffe) {
          return (ulonglong)uVar3;
        }
        if (*(longlong *)(param_1 + 0x120) == 0) {
          return 0xfffe;
        }
        uVar4 = FUN_142636560(*(longlong *)(param_1 + 0x120),param_2,(ulonglong)param_3,param_4);
        return uVar4;
      }
      uVar7 = uVar7 + 1;
      uVar4 = (ulonglong)(uVar5 >> 0x18);
      iVar6 = iVar6 + (uVar5 & 0xffffff);
    } while (param_3 != uVar7);
  }
  return 0xffff;
}



// FUNCTION 142584cd0 FUN_142584cd0 body=7640 status=ok
// SIG undefined FUN_142584cd0(void)

void FUN_142584cd0(longlong param_1,int *param_2)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  uint uVar13;
  int iVar14;
  ushort *puVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  uint uVar18;
  int iVar19;
  undefined1 uVar22;
  ulonglong uVar20;
  int *piVar21;
  longlong lVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint7 uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ushort *puVar31;
  int iVar32;
  int iVar33;
  ushort *puVar34;
  uint uVar35;
  bool bVar36;
  undefined1 auStack_128 [32];
  ushort *local_108;
  undefined1 **local_100;
  undefined1 *local_f8;
  int **local_f0;
  int local_e8;
  undefined1 local_e0;
  int *local_d8;
  int *local_d0;
  longlong local_c8;
  uint local_bc;
  ulonglong local_b8;
  int local_ac;
  uint local_a8;
  int local_a4;
  longlong local_a0;
  ushort *local_98;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  uint local_80;
  int local_7c;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  int *local_60;
  undefined1 *local_58;
  ushort *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar30 = *(longlong *)(param_1 + 8);
  local_c8 = param_1;
  if ((-1 < *(int *)(lVar30 + 0xd0)) &&
     ((FUN_142636f90(lVar30,param_1,0xffffffff,param_2), 0 < *param_2 ||
      (*(char *)(lVar30 + 0x119) < '\0')))) goto LAB_142586ab3;
  lVar7 = *(longlong *)(lVar30 + 0x30);
  bVar2 = *(byte *)(lVar7 + 0xfc);
  uVar20 = (ulonglong)bVar2;
  bVar3 = *(byte *)(lVar7 + 0xfd);
  local_84 = (uint)bVar3;
  local_d0 = param_2;
  if (bVar2 == 1) {
    if (*(char *)(lVar7 + 0xfe) == '\0') goto LAB_142584ee0;
    lVar23 = *(longlong *)(local_c8 + 8);
    local_50 = *(ushort **)(local_c8 + 0x10);
    lVar30 = *(longlong *)(lVar23 + 0x30);
    bVar2 = *(byte *)(lVar30 + 0xfd);
    puVar15 = *(ushort **)(local_c8 + 0x18);
    local_58 = *(undefined1 **)(local_c8 + 0x20);
    uVar35 = *(int *)(local_c8 + 0x28) - (int)local_58;
    local_60 = *(int **)(local_c8 + 0x30);
    uVar18 = *(uint *)(lVar23 + 0x54);
    uVar20 = (ulonglong)uVar18;
    iVar19 = -(uint)(uVar18 != 0);
    iVar24 = 0;
    lVar7 = *(longlong *)(lVar30 + 0x58);
    local_98 = *(ushort **)(lVar30 + 0x60);
    lVar8 = *(longlong *)(lVar30 + 0xe8 + (ulonglong)((*(byte *)(lVar23 + 0x38) & 0x10) >> 4) * 8);
    uVar10 = *(uint *)(lVar30 + 0x104);
    iVar25 = iVar24;
    if (uVar18 == 0) goto LAB_142585c79;
    iVar25 = 0;
    iVar27 = iVar19;
    if ((int)uVar35 < 1) goto LAB_142585c79;
joined_r0x000142584ed5:
    if (local_50 < puVar15) {
      uVar18 = (uint)uVar20;
      uVar5 = *local_50;
      if ((uVar5 & 0xfc00) == 0xdc00) {
        local_50 = local_50 + 1;
        iVar19 = iVar24 + 1;
        uVar20 = (ulonglong)(uVar18 * 0x400 + (uint)uVar5 + 0xfca02400);
        if ((bVar2 & 1) == 0) goto LAB_142585f21;
LAB_142585d80:
        uVar13 = (uint)uVar20;
        uVar18 = *(uint *)(lVar7 + ((ulonglong)((uint)(uVar20 >> 4) & 0x3f) +
                                   (ulonglong)*(ushort *)(lVar7 + (longlong)((int)uVar13 >> 10) * 2)
                                   ) * 4);
        uVar26 = (uint)*(ushort *)(lVar8 + (ulonglong)(uVar13 & 0xf | (uVar18 & 0xffff) << 4) * 2);
        if ((uVar18 >> ((byte)((byte)uVar20 | 0x10) & 0x1f) & 1) != 0) goto LAB_142585ee2;
        if (*(char *)(lVar23 + 0x3f) != '\0') goto LAB_142585edd;
        if (uVar13 - 0xe000 < 0x1900) goto LAB_142585edd;
        if (uVar13 - 0xf0000 < 0x20000) goto LAB_142585edd;
LAB_142585f21:
        piVar21 = local_d0;
        *(ushort **)(local_c8 + 0x10) = local_50;
        local_e0 = *(undefined1 *)(local_c8 + 2);
        local_f8 = local_58 + uVar35;
        local_d8 = local_d0;
        local_f0 = &local_60;
        local_100 = &local_58;
        local_108 = puVar15;
        local_e8 = iVar27;
        uVar20 = FUN_142586ae0(lVar23,*(undefined8 *)(lVar23 + 0x30),uVar20,&local_50);
        uVar18 = (uint)uVar20;
        if (*piVar21 < 1) {
          iVar19 = iVar19 + (int)((ulonglong)((longlong)local_50 - *(longlong *)(local_c8 + 0x10))
                                 >> 1);
          uVar35 = *(int *)(local_c8 + 0x28) - (int)local_58;
          iVar25 = iVar19;
LAB_142585c79:
          do {
            uVar18 = (uint)uVar20;
            if (puVar15 <= local_50) break;
            if ((int)uVar35 < 1) {
LAB_142585e98:
              *local_d0 = 0xf;
              break;
            }
            puVar31 = local_50 + 1;
            uVar5 = *local_50;
            uVar20 = (ulonglong)uVar5;
            iVar24 = iVar25 + 1;
            iVar27 = iVar19;
            if (uVar5 < 0x80) {
              local_50 = puVar31;
              if ((uVar10 >> (uVar5 >> 2 & 0x1f) & 1) != 0) {
                puVar12 = local_58 + 1;
                *local_58 = (char)uVar5;
                if (local_60 != (int *)0x0) {
                  *local_60 = iVar19;
                  iVar19 = iVar24;
                  local_60 = local_60 + 1;
                }
                local_58 = puVar12;
                if (puVar15 <= puVar31) {
LAB_142585e8f:
                  uVar18 = 0;
                  break;
                }
                iVar24 = iVar25 + 2;
                while( true ) {
                  if ((int)uVar35 < 2) {
                    uVar18 = 0;
                    goto LAB_142585e98;
                  }
                  puVar31 = local_50 + 1;
                  uVar5 = *local_50;
                  uVar20 = (ulonglong)uVar5;
                  iVar27 = iVar19;
                  if (0x7f < uVar5) {
                    uVar35 = uVar35 - 1;
                    goto LAB_142585cee;
                  }
                  local_50 = puVar31;
                  if ((uVar10 >> (uVar5 >> 2 & 0x1f) & 1) == 0) break;
                  puVar12 = local_58 + 1;
                  *local_58 = (char)uVar5;
                  if (local_60 != (int *)0x0) {
                    *local_60 = iVar19;
                    iVar19 = iVar24;
                    local_60 = local_60 + 1;
                  }
                  iVar24 = iVar24 + 1;
                  uVar35 = uVar35 - 1;
                  local_58 = puVar12;
                  if (puVar15 <= puVar31) goto LAB_142585e8f;
                }
                uVar35 = uVar35 - 1;
              }
            }
            else {
LAB_142585cee:
              uVar18 = (uint)uVar20;
              local_50 = puVar31;
              if (0xd7ff < uVar18) {
                iVar19 = iVar24;
                if (((uVar18 & 0xf800) != 0xd800) || ((bVar2 & 2) != 0)) goto LAB_142585d80;
                if ((uVar20 & 0x400) == 0) goto joined_r0x000142584ed5;
                *local_d0 = 0xc;
                break;
              }
            }
            iVar19 = iVar24;
            uVar26 = (uint)*(ushort *)
                            (lVar8 + ((ulonglong)((uint)uVar20 & 0x3f) +
                                     (ulonglong)local_98[uVar20 >> 6]) * 2);
LAB_142585edd:
            if ((short)uVar26 == 0) goto LAB_142585f21;
LAB_142585ee2:
            uVar16 = (undefined1)uVar26;
            if (uVar26 < 0x100) {
              puVar12 = local_58 + 1;
              *local_58 = uVar16;
              iVar24 = -1;
              piVar21 = local_60;
              iVar25 = -1;
              local_58 = puVar12;
              if (local_60 != (int *)0x0) {
LAB_14258601d:
                iVar24 = iVar25;
                local_60 = piVar21 + 1;
                *piVar21 = iVar27;
              }
            }
            else {
              puVar12 = local_58 + 1;
              *local_58 = (char)(uVar26 >> 8);
              if (uVar35 < 2) {
                if (local_60 != (int *)0x0) {
                  *local_60 = iVar27;
                  local_60 = local_60 + 1;
                }
                *(undefined1 *)(lVar23 + 0x68) = uVar16;
                *(undefined1 *)(lVar23 + 0x5b) = 1;
                *local_d0 = 0xf;
                uVar18 = 0;
                local_58 = puVar12;
                break;
              }
              local_58 = local_58 + 2;
              *puVar12 = uVar16;
              iVar24 = -2;
              if (local_60 != (int *)0x0) {
                piVar21 = local_60 + 1;
                *local_60 = iVar27;
                iVar25 = -2;
                goto LAB_14258601d;
              }
            }
            uVar35 = uVar35 + iVar24;
            uVar20 = 0;
            iVar25 = iVar19;
          } while( true );
        }
      }
      else {
        *local_d0 = 0xc;
      }
    }
LAB_142585c68:
    *(uint *)(lVar23 + 0x54) = uVar18;
    *(ushort **)(local_c8 + 0x10) = local_50;
  }
  else {
    if ((bVar2 == 0) && ((bVar3 & 2) == 0)) {
      if ((bVar3 & 1) == 0) {
        local_98 = *(ushort **)(local_c8 + 8);
        puVar15 = *(ushort **)(local_c8 + 0x10);
        puVar31 = *(ushort **)(local_c8 + 0x18);
        local_58 = *(undefined1 **)(local_c8 + 0x20);
        uVar18 = *(int *)(local_c8 + 0x28) - (int)local_58;
        local_60 = *(int **)(local_c8 + 0x30);
        uVar10 = *(uint *)(local_98 + 0x2a);
        iVar24 = -(uint)(uVar10 != 0);
        uVar29 = (ulonglong)((longlong)puVar31 - (longlong)puVar15) >> 1;
        uVar20 = (ulonglong)uVar18;
        if ((int)uVar29 < (int)uVar18) {
          uVar20 = uVar29 & 0xffffffff;
        }
        lVar30 = *(longlong *)(local_98 + 0x18);
        lVar7 = *(longlong *)(lVar30 + 0x58);
        lVar8 = *(longlong *)(lVar30 + 0xe8 + (ulonglong)(((byte)local_98[0x1c] & 0x10) >> 4) * 8);
        uVar18 = *(uint *)(lVar30 + 0x104);
        local_80 = CONCAT31(local_80._1_3_,*(undefined1 *)((longlong)local_98 + 0x3f));
        local_50 = puVar15;
        if ((uVar10 != 0) && (puVar34 = puVar15, 0 < (int)uVar20)) goto LAB_1425853cf;
LAB_14258519e:
        puVar15 = local_50;
        if (0 < (int)uVar20) {
          iVar19 = (int)uVar20 + 1;
          do {
            puVar34 = local_50 + 1;
            uVar5 = *local_50;
            uVar10 = (uint)uVar5;
            local_50 = puVar34;
            if ((uVar10 < 0x80) && ((uVar18 >> (uVar5 >> 2 & 0x1f) & 1) != 0)) {
              *local_58 = (char)uVar5;
            }
            else {
              uVar6 = *(ushort *)
                       (lVar8 + ((ulonglong)(uVar10 & 0xf) +
                                (ulonglong)
                                *(ushort *)
                                 (lVar7 + ((ulonglong)(uVar5 >> 4 & 0x3f) +
                                          (ulonglong)
                                          *(ushort *)(lVar7 + (ulonglong)(uVar5 >> 10) * 2)) * 2)) *
                                2);
              if (uVar6 < (ushort)(((char)local_80 == '\0' | 2) << 10)) goto LAB_1425853b4;
              *local_58 = (char)uVar6;
            }
            local_58 = local_58 + 1;
            iVar19 = iVar19 + -1;
            if (iVar19 < 2) {
              uVar10 = 0;
              break;
            }
          } while( true );
        }
        goto LAB_142585277;
      }
      lVar23 = *(longlong *)(local_c8 + 8);
      puVar15 = *(ushort **)(local_c8 + 0x10);
      puVar31 = *(ushort **)(local_c8 + 0x18);
      local_58 = *(undefined1 **)(local_c8 + 0x20);
      uVar10 = *(int *)(local_c8 + 0x28) - (int)local_58;
      local_60 = *(int **)(local_c8 + 0x30);
      cVar4 = *(char *)(lVar23 + 0x3f);
      uVar18 = *(uint *)(lVar23 + 0x54);
      iVar25 = -(uint)(uVar18 != 0);
      iVar19 = 0;
      lVar30 = *(longlong *)(lVar23 + 0x30);
      lVar7 = *(longlong *)(lVar30 + 0x58);
      lVar8 = *(longlong *)(lVar30 + 0xe8 + (ulonglong)((*(byte *)(lVar23 + 0x38) & 0x10) >> 4) * 8)
      ;
      bVar2 = *(byte *)(lVar30 + 0xfd);
      iVar24 = iVar19;
      local_50 = puVar15;
      if ((uVar18 != 0) && (iVar24 = 0, uVar35 = uVar18, 0 < (int)uVar10)) goto LAB_142585653;
LAB_142585612:
      if (local_50 < puVar31) {
        if ((int)uVar10 < 1) {
          iVar24 = 0xf;
        }
        else {
          puVar15 = local_50 + 1;
          uVar5 = *local_50;
          uVar20 = (ulonglong)uVar5;
          uVar18 = (uint)uVar5;
          iVar19 = iVar24 + 1;
          iVar24 = iVar25;
          if ((uVar5 & 0xf800) != 0xd800) {
LAB_1425856ac:
            iVar25 = iVar19;
            uVar18 = (uint)uVar20;
            uVar5 = *(ushort *)
                     (lVar8 + ((ulonglong)(uVar18 & 0xf) +
                              (ulonglong)
                              *(ushort *)
                               (lVar7 + ((ulonglong)((uint)(uVar20 >> 4) & 0x3f) +
                                        (ulonglong)
                                        *(ushort *)(lVar7 + (longlong)((int)uVar18 >> 10) * 2)) * 2)
                              ) * 2);
            iVar19 = iVar25;
            local_50 = puVar15;
            if (uVar5 < (ushort)((cVar4 == '\0' | 2) << 10)) {
LAB_1425856e3:
              piVar21 = local_d0;
              *(ushort **)(local_c8 + 0x10) = local_50;
              local_e0 = *(undefined1 *)(local_c8 + 2);
              local_f8 = local_58 + uVar10;
              local_d8 = local_d0;
              local_f0 = &local_60;
              local_100 = &local_58;
              local_108 = puVar31;
              local_e8 = iVar24;
              uVar18 = FUN_142586ae0(lVar23,*(undefined8 *)(lVar23 + 0x30),uVar18,&local_50);
              if (0 < *piVar21) goto LAB_142585c68;
              iVar25 = iVar19 + (int)((ulonglong)
                                      ((longlong)local_50 - *(longlong *)(local_c8 + 0x10)) >> 1);
              uVar10 = *(int *)(local_c8 + 0x28) - (int)local_58;
              iVar24 = iVar25;
            }
            else {
              *local_58 = (char)uVar5;
              if (local_60 != (int *)0x0) {
                *local_60 = iVar24;
                local_60 = local_60 + 1;
              }
              uVar10 = uVar10 - 1;
              uVar18 = 0;
              iVar24 = iVar25;
              local_58 = local_58 + 1;
            }
            goto LAB_142585612;
          }
          uVar35 = (uint)uVar5;
          if ((uVar5 & 0x400) == 0) {
LAB_142585653:
            uVar18 = uVar35;
            local_50 = puVar15;
            if (puVar15 < puVar31) {
              uVar5 = *puVar15;
              if ((uVar5 & 0xfc00) == 0xdc00) {
                puVar15 = puVar15 + 1;
                iVar19 = iVar19 + 1;
                uVar18 = uVar18 * 0x400 + (uint)uVar5 + 0xfca02400;
                uVar20 = (ulonglong)uVar18;
                iVar24 = iVar25;
                local_50 = puVar15;
                if ((bVar2 & 1) != 0) goto LAB_1425856ac;
                goto LAB_1425856e3;
              }
              iVar24 = 0xc;
              goto LAB_1425857d2;
            }
            goto LAB_142585c68;
          }
          iVar24 = 0xc;
          local_50 = puVar15;
        }
LAB_1425857d2:
        *local_d0 = iVar24;
      }
      goto LAB_142585c68;
    }
LAB_142584ee0:
    local_50 = *(ushort **)(local_c8 + 0x10);
    local_98 = *(ushort **)(local_c8 + 0x18);
    local_58 = *(undefined1 **)(local_c8 + 0x20);
    local_60 = *(int **)(local_c8 + 0x30);
    uVar29 = 0;
    if (*(char *)(lVar7 + 0xfe) == '\0') {
      local_70 = 0;
    }
    else {
      local_70 = *(longlong *)(lVar7 + 0x60);
    }
    uVar10 = *(uint *)(lVar30 + 0x38);
    uVar18 = *(uint *)(lVar30 + 0x54);
    uVar11 = (ulonglong)uVar18;
    if (bVar2 == 0xc) {
      uVar29 = (ulonglong)(*(int *)(lVar30 + 0x50) + (uint)(*(int *)(lVar30 + 0x50) == 0));
    }
    iVar24 = 0;
    iVar25 = 0;
    iVar19 = -(uint)(uVar18 != 0);
    local_8c = 2;
    uVar28 = (uint7)(uint3)(-uVar18 >> 8);
    if ((uVar10 & 0x1000) == 0) {
      local_90 = 0;
      if ((uVar10 & 0x2000) == 0) {
        uVar35 = uVar10 & 0x4000;
        local_a4 = (uVar35 != 0) + 1;
        local_a8 = 0x71;
        if (uVar35 == 0) {
          local_a8 = 0;
        }
        local_bc = 0xf;
        local_88 = local_a4;
        if (uVar35 != 0) {
          local_bc = 0x1a;
          local_ac = 0x1a;
          local_90 = 0x700000;
        }
        else {
          local_ac = 0xe;
          local_8c = 1;
        }
      }
      else {
        local_ac = 0x28;
        local_bc = (uint)CONCAT71(uVar28,0x29);
        local_88 = (int)CONCAT71(uVar28,1);
        local_a4 = 1;
        local_a8 = 0;
        local_8c = 1;
      }
    }
    else {
      local_ac = 10;
      local_90 = 0x420000;
      local_a8 = (uint)CONCAT71(uVar28,0x41);
      local_bc = (uint)CONCAT71(uVar28,10);
      local_88 = (int)CONCAT71(uVar28,2);
      local_a4 = 2;
    }
    uVar35 = *(int *)(local_c8 + 0x28) - (int)local_58;
    local_68 = *(longlong *)(lVar7 + 0x58);
    local_a0 = *(longlong *)(lVar7 + 0xe8 + (ulonglong)((uVar10 & 0x10) >> 4) * 8);
    local_80 = *(uint *)(lVar7 + 0x104);
    iVar33 = -1;
    iVar27 = iVar19;
    local_b8 = uVar20;
    if (uVar18 == 0) {
      uVar10 = 0;
      goto LAB_1425860a0;
    }
    uVar10 = 0;
    iVar25 = iVar24;
    if ((int)uVar35 < 1) goto LAB_1425860a0;
    uVar10 = 0;
    if (local_50 < local_98) {
LAB_1425857df:
      uVar18 = (uint)uVar11;
      uVar5 = *local_50;
      if ((uVar5 & 0xfc00) != 0xdc00) {
LAB_142586539:
        iVar32 = 0xc;
        uVar13 = uVar35;
        goto LAB_14258696c;
      }
      local_50 = local_50 + 1;
      iVar24 = iVar24 + 1;
      uVar18 = uVar18 * 0x400 + (uint)uVar5 + 0xfca02400;
      uVar11 = (ulonglong)uVar18;
      iVar25 = 0;
      if ((local_84 & 1) == 0) {
        *(int *)(lVar30 + 0x50) = (int)uVar29;
        iVar25 = 6;
      }
      if (iVar25 == 6) goto LAB_1425863c4;
      if (iVar25 == 0) goto LAB_142585837;
      goto LAB_142586ab3;
    }
LAB_142586480:
    iVar14 = (int)local_b8;
LAB_142586977:
    iVar24 = (int)uVar29;
    if (((((iVar14 == 0xc) && (*param_2 < 1)) && (iVar24 == 2)) &&
        ((iVar24 = 2, *(char *)(local_c8 + 2) != '\0' && (local_98 <= local_50)))) && (uVar18 == 0))
    {
      uVar16 = (undefined1)local_a8;
      if ((int)uVar35 < 1) {
        *(char *)(lVar30 + 0x68) = (char)local_bc;
        if (local_a4 == 2) {
          *(undefined1 *)(lVar30 + 0x69) = uVar16;
        }
        *(char *)(lVar30 + 0x5b) = (char)local_88;
        *param_2 = 0xf;
        iVar24 = 1;
      }
      else {
        puVar12 = local_58 + 1;
        *local_58 = (char)local_bc;
        if (local_a4 == 2) {
          if (uVar35 < 2) {
            *(undefined1 *)(lVar30 + 0x68) = uVar16;
            *(undefined1 *)(lVar30 + 0x5b) = 1;
            *param_2 = 0xf;
          }
          else {
            *puVar12 = uVar16;
            puVar12 = local_58 + 2;
          }
        }
        local_58 = puVar12;
        iVar24 = 1;
        if (local_60 != (int *)0x0) {
          *local_60 = iVar33;
          local_60 = local_60 + 1;
        }
      }
    }
    *(uint *)(lVar30 + 0x54) = uVar18;
    *(int *)(lVar30 + 0x50) = iVar24;
    *(ushort **)(local_c8 + 0x10) = local_50;
  }
  *(undefined1 **)(local_c8 + 0x20) = local_58;
  *(int **)(local_c8 + 0x30) = local_60;
LAB_142586ab3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
LAB_142585837:
  uVar18 = (uint)uVar11;
  uVar13 = *(uint *)(local_68 +
                    ((ulonglong)((uint)(uVar11 >> 4) & 0x3f) +
                    (ulonglong)*(ushort *)(local_68 + (longlong)((int)uVar18 >> 10) * 2)) * 4);
  switch((int)local_b8) {
  case 1:
    uVar5 = *(ushort *)(local_a0 + (ulonglong)((uVar13 & 0xffff) << 4 | uVar18 & 0xf) * 2);
    uVar20 = (ulonglong)uVar5;
    uVar10 = 2 - (uVar5 < 0x100);
    break;
  case 2:
    lVar7 = (ulonglong)((uVar13 & 0xffff) << 4 | uVar18 & 0xf) * 3;
    uVar26 = (uint)*(byte *)(local_a0 + 2 + lVar7) |
             (uint)*(byte *)(local_a0 + 1 + lVar7) << 8 | (uint)*(byte *)(local_a0 + lVar7) << 0x10;
    uVar20 = (ulonglong)uVar26;
    uVar10 = 1;
    param_2 = local_d0;
    if (0xff < uVar26) {
      uVar10 = 3 - (uVar26 < 0x10000);
    }
    break;
  case 3:
    uVar26 = *(uint *)(local_a0 + (ulonglong)((uVar13 & 0xffff) << 4 | uVar18 & 0xf) * 4);
    uVar20 = (ulonglong)uVar26;
    uVar10 = 1;
    if ((0xff < uVar26) && (uVar10 = 2, 0xffff < uVar26)) {
      uVar10 = 4 - (uVar26 < 0x1000000);
    }
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xb:
switchD_142585878_caseD_4:
    uVar13 = 0;
LAB_1425858f5:
    uVar20 = 0;
    uVar10 = 0;
    break;
  case 8:
    uVar5 = *(ushort *)(local_a0 + (ulonglong)((uVar13 & 0xffff) << 4 | uVar18 & 0xf) * 2);
    uVar20 = (ulonglong)uVar5;
    uVar10 = 1;
    if (0xff < uVar5) {
      if ((short)uVar5 < 0) {
        bVar36 = -1 < (char)uVar5;
        uVar10 = (uint)uVar5;
        if (bVar36) {
          uVar10 = uVar5 | 0x8f0080;
        }
        uVar20 = (ulonglong)uVar10;
        uVar10 = bVar36 | 2;
      }
      else {
        uVar20 = (ulonglong)(uVar5 | 0x8e8000);
        uVar10 = 3;
      }
    }
    break;
  case 9:
    lVar7 = (ulonglong)((uVar13 & 0xffff) << 4 | uVar18 & 0xf) * 3;
    bVar2 = *(byte *)(local_a0 + 1 + lVar7);
    uVar26 = (uint)*(byte *)(local_a0 + 2 + lVar7) | (uint)*(byte *)(local_a0 + lVar7) << 0x10 |
             (uint)bVar2 << 8;
    uVar20 = (ulonglong)uVar26;
    uVar10 = 1;
    param_2 = local_d0;
    local_7c = iVar33;
    local_78 = uVar29;
    if ((0xff < uVar26) && (uVar10 = 2, 0xffff < uVar26)) {
      if ((char)*(byte *)(local_a0 + lVar7) < '\0') {
        if (-1 < (char)bVar2) {
          uVar20 = (ulonglong)(uVar26 | 0x8f008000);
        }
        uVar10 = (-1 < (char)bVar2) + 3;
      }
      else {
        uVar20 = (ulonglong)(uVar26 | 0x8e800000);
        uVar10 = 4;
      }
    }
    break;
  case 0xc:
    iVar25 = (int)uVar29;
    *(int *)(lVar30 + 0x50) = iVar25;
    uVar5 = *(ushort *)(local_a0 + (ulonglong)((uVar13 & 0xffff) << 4 | uVar18 & 0xf) * 2);
    uVar20 = (ulonglong)uVar5;
    if (uVar5 < 0x100) {
      if ((uVar5 != 0) || ((uVar13 >> (uVar18 & 0xf) + 0x10 & 1) != 0)) {
        if (iVar25 < 2) {
          uVar10 = 1;
        }
        else {
          uVar29 = 1;
          if (local_a4 == 2) {
            uVar20 = (ulonglong)((uint)uVar5 | (local_bc & 0xff) << 0x10 | (local_a8 & 0xff) << 8);
            uVar29 = 1;
            uVar10 = 3;
          }
          else if (local_a4 == 1) {
            uVar20 = (ulonglong)((uint)uVar5 | (local_bc & 0xff) << 8);
            uVar10 = 2;
          }
        }
        break;
      }
      goto LAB_1425858f5;
    }
    if (iVar25 == 2) {
      uVar10 = 2;
      uVar29 = 2;
    }
    else {
      if (local_8c == 2) {
        uVar20 = (ulonglong)((uint)uVar5 | local_ac * 0x1000000 + local_90);
        uVar10 = 4;
      }
      else if (local_8c == 1) {
        uVar20 = (ulonglong)((uint)uVar5 | local_ac << 0x10);
        uVar10 = 3;
        uVar29 = 2;
        break;
      }
      uVar29 = 2;
    }
    break;
  default:
    if ((int)local_b8 != 0xdb) goto switchD_142585878_caseD_4;
    uVar5 = *(ushort *)(local_a0 + (ulonglong)((uVar13 & 0xffff) << 4 | uVar18 & 0xf) * 2);
    uVar20 = (ulonglong)uVar5;
    uVar10 = 0;
    if (uVar5 < 0x100) {
      uVar13 = 0;
      uVar20 = 0;
    }
    else {
      uVar10 = 2;
    }
  }
  uVar26 = uVar10;
  if ((uVar13 >> ((byte)uVar11 & 0xf | 0x10) & 1) == 0) {
    if (((*(char *)(lVar30 + 0x3f) == '\0') && (0x18ff < uVar18 - 0xe000)) &&
       (0x1ffff < uVar18 - 0xf0000)) goto LAB_1425863c4;
    uVar13 = (uint)uVar20;
    goto joined_r0x000142585c0b;
  }
LAB_1425866ed:
  uVar10 = uVar26;
  iVar25 = uVar10 - uVar35;
  uVar17 = (undefined1)uVar20;
  uVar22 = (undefined1)(uVar20 >> 8);
  uVar16 = (undefined1)(uVar20 >> 0x10);
  if (iVar25 == 0 || (int)uVar10 < (int)uVar35) {
    uVar9 = (undefined1)(uVar20 >> 0x18);
    if (local_60 == (int *)0x0) {
      switch(uVar10) {
      case 4:
        *local_58 = uVar9;
        local_58 = local_58 + 1;
      case 3:
        *local_58 = uVar16;
        local_58 = local_58 + 1;
      case 2:
        *local_58 = uVar22;
        local_58 = local_58 + 1;
      case 1:
        *local_58 = uVar17;
        local_58 = local_58 + 1;
      }
    }
    else {
      switch(uVar10) {
      case 4:
        *local_58 = uVar9;
        *local_60 = iVar19;
        local_60 = local_60 + 1;
        local_58 = local_58 + 1;
      case 3:
        *local_58 = uVar16;
        *local_60 = iVar19;
        local_60 = local_60 + 1;
        local_58 = local_58 + 1;
      case 2:
        *local_58 = uVar22;
        *local_60 = iVar19;
        local_60 = local_60 + 1;
        local_58 = local_58 + 1;
      case 1:
        *local_58 = uVar17;
        *local_60 = iVar19;
        local_60 = local_60 + 1;
        local_58 = local_58 + 1;
      }
    }
    uVar35 = uVar35 - uVar10;
    iVar27 = iVar19;
    if (local_60 != (int *)0x0) {
      iVar27 = iVar24;
      iVar33 = iVar19;
    }
    uVar11 = 0;
    iVar25 = iVar24;
LAB_1425860a0:
    do {
      uVar18 = (uint)uVar11;
      if (local_98 <= local_50) goto LAB_142586480;
      iVar32 = 0xf;
      uVar13 = 0;
      if ((int)uVar35 < 0) {
        uVar13 = uVar35;
      }
      if ((int)uVar35 < 1) goto LAB_14258696c;
      puVar15 = local_50 + 1;
      uVar5 = *local_50;
      uVar11 = (ulonglong)uVar5;
      iVar24 = iVar25 + 1;
      iVar14 = (int)local_b8;
      iVar19 = iVar27;
      local_50 = puVar15;
      if ((uVar5 < 0x80) && ((local_80 >> (uVar5 >> 2 & 0x1f) & 1) != 0)) {
        *local_58 = (char)uVar5;
        if (local_60 != (int *)0x0) {
          *local_60 = iVar27;
          iVar19 = iVar24;
          iVar33 = iVar27;
          local_60 = local_60 + 1;
        }
        uVar35 = uVar35 - 1;
        if (local_98 <= puVar15) {
          uVar18 = 0;
          local_58 = local_58 + 1;
          goto LAB_142586977;
        }
        iVar24 = iVar25 + 2;
        local_58 = local_58 + 1;
        while( true ) {
          if ((int)uVar35 < 1) {
            uVar18 = 0;
            goto LAB_14258696c;
          }
          puVar15 = local_50 + 1;
          uVar5 = *local_50;
          uVar11 = (ulonglong)uVar5;
          local_50 = puVar15;
          if ((0x7f < uVar5) || ((local_80 >> (uVar5 >> 2 & 0x1f) & 1) == 0)) break;
          puVar12 = local_58 + 1;
          *local_58 = (char)uVar5;
          iVar25 = iVar19;
          if (local_60 != (int *)0x0) {
            *local_60 = iVar19;
            iVar25 = iVar24;
            iVar33 = iVar19;
            local_60 = local_60 + 1;
          }
          iVar19 = iVar25;
          uVar35 = uVar35 - 1;
          iVar24 = iVar24 + 1;
          local_58 = puVar12;
          if (local_98 <= puVar15) {
            uVar18 = 0;
            goto LAB_142586977;
          }
        }
      }
      uVar18 = (uint)uVar11;
      if ((0xd7ff < uVar18) || (local_70 == 0)) {
        if (((uVar18 & 0xf800) != 0xd800) || ((local_84 & 2) != 0)) goto LAB_142585837;
        if ((uVar11 & 0x400) != 0) goto LAB_142586539;
        if (local_50 < local_98) goto LAB_1425857df;
        goto LAB_142586480;
      }
      uVar11 = (ulonglong)*(ushort *)(local_70 + (uVar11 >> 6) * 2);
      uVar20 = 0;
      switch(iVar14) {
      case 1:
        uVar5 = *(ushort *)(local_a0 + ((uVar18 & 0x3f) + uVar11) * 2);
        uVar20 = (ulonglong)uVar5;
        if (0xff < uVar5) {
          param_2 = local_d0;
          uVar26 = 2;
          goto LAB_1425866ed;
        }
        break;
      case 2:
        lVar7 = ((uVar18 & 0x3f) + uVar11) * 3;
        uVar13 = (uint)*(byte *)(local_a0 + 2 + lVar7) |
                 (uint)*(byte *)(local_a0 + 1 + lVar7) << 8 |
                 (uint)*(byte *)(local_a0 + lVar7) << 0x10;
        uVar20 = (ulonglong)uVar13;
        if (0xff < uVar13) {
          param_2 = local_d0;
          uVar26 = 3 - (uVar13 < 0x10000);
          goto LAB_1425866ed;
        }
        break;
      case 3:
        uVar13 = *(uint *)(local_a0 + ((uVar18 & 0x3f) + uVar11) * 4);
        uVar20 = (ulonglong)uVar13;
        if (0xff < uVar13) {
          param_2 = local_d0;
          uVar26 = 2;
          if (0xffff < uVar13) {
            uVar26 = 4 - (uVar13 < 0x1000000);
          }
          goto LAB_1425866ed;
        }
        break;
      case 4:
      case 5:
      case 6:
      case 7:
      case 10:
      case 0xb:
        param_2 = local_d0;
        uVar26 = 0;
        goto LAB_1425866ed;
      case 8:
        uVar5 = *(ushort *)(local_a0 + ((uVar18 & 0x3f) + uVar11) * 2);
        uVar20 = (ulonglong)uVar5;
        if (0xff < uVar5) {
          if ((short)uVar5 < 0) {
            bVar36 = -1 < (char)uVar5;
            uVar10 = (uint)uVar5;
            if (bVar36) {
              uVar10 = uVar5 | 0x8f0080;
            }
            uVar20 = (ulonglong)uVar10;
            param_2 = local_d0;
            uVar26 = bVar36 | 2;
          }
          else {
            uVar20 = (ulonglong)(uVar5 | 0x8e8000);
            param_2 = local_d0;
            uVar26 = 3;
          }
          goto LAB_1425866ed;
        }
        break;
      case 9:
        lVar7 = ((uVar18 & 0x3f) + uVar11) * 3;
        bVar2 = *(byte *)(local_a0 + 1 + lVar7);
        uVar13 = (uint)*(byte *)(local_a0 + 2 + lVar7) | (uint)*(byte *)(local_a0 + lVar7) << 0x10 |
                 (uint)bVar2 << 8;
        uVar20 = (ulonglong)uVar13;
        if (uVar13 < 0x100) {
          uVar26 = 1;
          param_2 = local_d0;
joined_r0x000142585c0b:
          if (uVar13 == 0) goto LAB_1425863c4;
        }
        else {
          param_2 = local_d0;
          uVar26 = 2;
          if (0xffff < uVar13) {
            if ((char)*(byte *)(local_a0 + lVar7) < '\0') {
              if (-1 < (char)bVar2) {
                uVar13 = uVar13 | 0x8f008000;
              }
              uVar20 = (ulonglong)uVar13;
              uVar26 = (-1 < (char)bVar2) + 3;
            }
            else {
              uVar20 = (ulonglong)(uVar13 | 0x8e800000);
              uVar26 = 4;
            }
          }
        }
        goto LAB_1425866ed;
      case 0xc:
        iVar25 = (int)uVar29;
        *(int *)(lVar30 + 0x50) = iVar25;
        uVar5 = *(ushort *)(local_a0 + ((uVar18 & 0x3f) + uVar11) * 2);
        uVar20 = (ulonglong)uVar5;
        if (uVar5 < 0x100) {
          param_2 = local_d0;
          if (uVar5 == 0) goto LAB_1425863c4;
          if (iVar25 < 2) {
            uVar26 = 1;
          }
          else {
            uVar29 = 1;
            if (local_a4 == 2) {
              uVar20 = (ulonglong)((uint)uVar5 | (local_bc & 0xff) << 0x10 | (local_a8 & 0xff) << 8)
              ;
              uVar26 = 3;
            }
            else {
              uVar26 = uVar10;
              if (local_a4 == 1) {
                uVar20 = (ulonglong)((uint)uVar5 | (local_bc & 0xff) << 8);
                uVar26 = 2;
              }
            }
          }
          goto LAB_1425866ed;
        }
        if (iVar25 == 2) {
          uVar29 = 2;
          param_2 = local_d0;
          uVar26 = 2;
          goto LAB_1425866ed;
        }
        if (local_8c == 2) {
          uVar20 = (ulonglong)((uint)uVar5 | local_ac * 0x1000000 + local_90);
          uVar10 = 4;
        }
        else if (local_8c == 1) {
          uVar20 = (ulonglong)((uint)uVar5 | local_ac << 0x10);
          uVar29 = 2;
          param_2 = local_d0;
          uVar26 = 3;
          goto LAB_1425866ed;
        }
        uVar29 = 2;
        param_2 = local_d0;
        uVar26 = uVar10;
        goto LAB_1425866ed;
      default:
        if (iVar14 == 0xdb) {
          uVar5 = *(ushort *)(local_a0 + ((uVar18 & 0x3f) + uVar11) * 2);
          uVar20 = (ulonglong)uVar5;
          if (uVar5 < 0x100) goto LAB_1425863c4;
          uVar26 = 2;
        }
        else {
          uVar26 = 0;
        }
        goto LAB_1425866ed;
      }
      param_2 = local_d0;
      uVar26 = 1;
      if ((int)uVar20 != 0) goto LAB_1425866ed;
LAB_1425863c4:
      *(ushort **)(local_c8 + 0x10) = local_50;
      local_e0 = *(undefined1 *)(local_c8 + 2);
      local_f8 = local_58 + uVar35;
      local_f0 = &local_60;
      local_100 = &local_58;
      local_108 = local_98;
      local_e8 = iVar19;
      local_d8 = param_2;
      uVar11 = FUN_142586ae0(lVar30,*(undefined8 *)(lVar30 + 0x30),uVar18,&local_50);
      uVar18 = (uint)uVar11;
      uVar29 = (ulonglong)*(uint *)(lVar30 + 0x50);
      if (0 < *param_2) goto LAB_142586480;
      iVar25 = iVar24 + (int)((ulonglong)((longlong)local_50 - *(longlong *)(local_c8 + 0x10)) >> 1)
      ;
      uVar35 = *(int *)(local_c8 + 0x28) - (int)local_58;
      iVar27 = iVar19;
      if (local_60 != (int *)0x0) {
        iVar27 = iVar25;
        iVar33 = iVar19;
      }
    } while( true );
  }
  puVar12 = (undefined1 *)(lVar30 + 0x68);
  if (iVar25 == 1) {
LAB_1425868a9:
    *puVar12 = uVar17;
  }
  else {
    if (iVar25 == 2) {
LAB_1425868a4:
      *puVar12 = uVar22;
      puVar12 = puVar12 + 1;
      goto LAB_1425868a9;
    }
    if (iVar25 == 3) {
      puVar12 = (undefined1 *)(lVar30 + 0x69);
      *(undefined1 *)(lVar30 + 0x68) = uVar16;
      goto LAB_1425868a4;
    }
  }
  *(char *)(lVar30 + 0x5b) = (char)iVar25;
  uVar10 = (uint)uVar20 >> ((char)iVar25 * '\b' & 0x1fU);
  uVar18 = 0;
  iVar32 = 0xf;
  if (uVar35 != 1) {
    if (uVar35 != 2) {
      if (uVar35 != 3) goto LAB_14258696a;
      puVar12 = local_58 + 1;
      *local_58 = (char)(uVar10 >> 0x10);
      local_58 = puVar12;
      if (local_60 != (int *)0x0) {
        *local_60 = iVar19;
        local_60 = local_60 + 1;
      }
    }
    puVar12 = local_58 + 1;
    *local_58 = (char)(uVar10 >> 8);
    local_58 = puVar12;
    if (local_60 != (int *)0x0) {
      *local_60 = iVar19;
      local_60 = local_60 + 1;
    }
  }
  puVar12 = local_58 + 1;
  *local_58 = (char)uVar10;
  local_58 = puVar12;
  if (local_60 != (int *)0x0) {
    *local_60 = iVar19;
    local_60 = local_60 + 1;
  }
LAB_14258696a:
  uVar13 = 0;
LAB_14258696c:
  uVar35 = uVar13;
  iVar14 = (int)local_b8;
  *param_2 = iVar32;
  goto LAB_142586977;
LAB_1425853b4:
  if ((uVar10 & 0xf800) == 0xd800) {
    if ((uVar5 & 0x400) != 0) {
LAB_1425855e1:
      *local_d0 = 0xc;
LAB_142585277:
      iVar19 = *local_d0;
      if (((iVar19 < 1) && (local_50 < puVar31)) && (*(undefined1 **)(local_c8 + 0x28) <= local_58))
      {
        *local_d0 = 0xf;
        iVar19 = 0xf;
      }
      if (local_60 == (int *)0x0) {
        piVar21 = (int *)0x0;
      }
      else {
        piVar21 = local_60;
        if ((longlong)local_50 - (longlong)puVar15 != 0) {
          lVar30 = (longlong)local_50 - (longlong)puVar15 >> 1;
          uVar20 = lVar30 - (ulonglong)(iVar19 == 0xb);
          if (uVar20 != 0) {
            if ((uVar20 & 3) != 0) {
              uVar29 = 0;
              do {
                piVar21 = local_60 + 1;
                *local_60 = iVar24 + (int)uVar29;
                uVar29 = uVar29 + 1;
                local_60 = piVar21;
              } while ((uVar20 & 3) != uVar29);
              uVar20 = uVar20 - uVar29;
              iVar24 = iVar24 + (int)uVar29;
            }
            piVar21 = local_60;
            if (2 < (lVar30 - (ulonglong)(iVar19 == 0xb)) - 1) {
              do {
                *local_60 = iVar24;
                local_60[1] = iVar24 + 1;
                local_60[2] = iVar24 + 2;
                piVar21 = local_60 + 4;
                local_60[3] = iVar24 + 3;
                iVar24 = iVar24 + 4;
                uVar20 = uVar20 - 4;
                local_60 = piVar21;
              } while (uVar20 != 0);
            }
          }
        }
      }
      *(uint *)(local_98 + 0x2a) = uVar10;
      *(ushort **)(local_c8 + 0x10) = local_50;
      *(undefined1 **)(local_c8 + 0x20) = local_58;
      *(int **)(local_c8 + 0x30) = piVar21;
      goto LAB_142586ab3;
    }
LAB_1425853cf:
    local_50 = puVar34;
    if (puVar31 <= puVar34) {
      if (*(char *)(local_c8 + 2) != '\0') {
        *local_d0 = 0xb;
      }
      goto LAB_142585277;
    }
    uVar5 = *puVar34;
    if ((uVar5 & 0xfc00) != 0xdc00) goto LAB_1425855e1;
    puVar34 = puVar34 + 1;
    uVar10 = uVar10 * 0x400 + (uint)uVar5 + 0xfca02400;
  }
  piVar21 = local_d0;
  uVar35 = 2 - (uVar10 < 0x10000);
  if (local_60 != (int *)0x0) {
    iVar19 = (int)((ulonglong)((longlong)puVar34 - (longlong)puVar15) >> 1);
    uVar13 = iVar19 - uVar35;
    if (uVar13 != 0 && (int)uVar35 <= iVar19) {
      if ((uVar13 & 3) != 0) {
        uVar26 = 0;
        do {
          piVar1 = local_60 + 1;
          *local_60 = iVar24 + uVar26;
          uVar26 = uVar26 + 1;
          local_60 = piVar1;
        } while ((uVar13 & 3) != uVar26);
        uVar13 = uVar13 - uVar26;
        iVar24 = iVar24 + uVar26;
      }
      if (2 < ~uVar35 + iVar19) {
        uVar13 = uVar13 - 1;
        iVar19 = iVar24;
        do {
          *local_60 = iVar19;
          local_60[1] = iVar19 + 1;
          piVar1 = local_60 + 3;
          local_60[2] = iVar19 + 2;
          iVar24 = iVar19 + 4;
          local_60 = local_60 + 4;
          *piVar1 = iVar19 + 3;
          uVar13 = uVar13 - 4;
          iVar19 = iVar24;
        } while (uVar13 < 0xfffffffe);
      }
    }
  }
  local_e0 = *(undefined1 *)(local_c8 + 2);
  local_f8 = *(undefined1 **)(local_c8 + 0x28);
  local_d8 = local_d0;
  local_f0 = &local_60;
  local_100 = &local_58;
  local_108 = puVar31;
  local_e8 = iVar24;
  local_50 = puVar34;
  uVar10 = FUN_142586ae0(local_98,*(undefined8 *)(local_98 + 0x18),uVar10,&local_50);
  iVar24 = (int)((ulonglong)((longlong)local_50 - (longlong)puVar34) >> 1) + iVar24 + uVar35;
  puVar15 = local_50;
  if (0 < *piVar21) goto LAB_142585277;
  uVar35 = *(int *)(local_c8 + 0x28) - (int)local_58;
  uVar29 = (ulonglong)((longlong)puVar31 - (longlong)local_50) >> 1;
  uVar20 = (ulonglong)uVar35;
  if ((int)uVar29 < (int)uVar35) {
    uVar20 = uVar29 & 0xffffffff;
  }
  goto LAB_14258519e;
}



// FUNCTION 142586ae0 FUN_142586ae0 body=857 status=ok
// SIG undefined FUN_142586ae0(void)

void FUN_142586ae0(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6,undefined8 param_7,undefined4 *param_8,
                  undefined4 param_9,undefined1 param_10,undefined4 *param_11)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined4 *local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined4 *local_58;
  char local_4c;
  byte local_4b;
  char local_4a;
  byte local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  if (*(longlong *)(param_2 + 0x120) != 0) {
    local_58 = param_11;
    local_60 = param_10;
    local_68 = param_9;
    local_70 = param_8;
    local_78 = param_7;
    local_80 = param_6;
    local_88 = param_5;
    cVar2 = FUN_1426368e0(param_1,*(longlong *)(param_2 + 0x120),param_3);
    if (cVar2 != '\0') goto LAB_142586dd7;
  }
  if ((*(byte *)(param_1 + 0x39) & 0x80) != 0) {
    if (param_3 < 0x10000) {
      if (param_3 < 0x9fa6) {
        if (param_3 < 0x452) goto LAB_142586b8a;
        if (param_3 < 0x1e3f) {
          iVar3 = -0x452;
          puVar5 = &DAT_1499faa30;
        }
        else {
          if (param_3 == 0x1e3f) goto LAB_142586b8a;
          if (0x200f < param_3) goto LAB_142586bfc;
          iVar3 = -0x1e40;
          puVar5 = &DAT_1499faa40;
        }
      }
      else if (param_3 < 0xd800) {
        iVar3 = -0x9fa6;
        puVar5 = &DAT_1499faa20;
      }
      else {
LAB_142586bfc:
        if (param_3 - 0xf92c < 0xffffef39) {
          if (param_3 < 0x2643) goto LAB_142586b8a;
          if (param_3 < 0x2e81) {
            iVar3 = -0x2643;
            puVar5 = &DAT_1499faa60;
          }
          else if (param_3 - 0xfe30 < 0xfffffbfa) {
            if (param_3 - 0x4056 < 0xfffffc8b) {
              if (param_3 < 0x361b) goto LAB_142586b8a;
              if (param_3 < 0x3918) {
                iVar3 = -0x361b;
                puVar5 = &DAT_1499faa90;
              }
              else if (param_3 - 0x4c77 < 0xfffffd41) {
                if (param_3 < 0x4160) goto LAB_142586b8a;
                if (param_3 < 0x4337) {
                  iVar3 = -0x4160;
                  puVar5 = &DAT_1499faab0;
                }
                else if (param_3 - 0x4947 < 0xfffffe47) {
                  if (param_3 < 0x44d7) goto LAB_142586b8a;
                  if (param_3 < 0x464c) {
                    iVar3 = -0x44d7;
                    puVar5 = (undefined4 *)&DAT_1499faad0;
                  }
                  else {
                    if (param_3 - 0x10000 < 0xffffffe6) goto LAB_142586b8a;
                    iVar3 = -0xffe6;
                    puVar5 = &DAT_1499faae0;
                  }
                }
                else {
                  iVar3 = -0x478e;
                  puVar5 = &DAT_1499faac0;
                }
              }
              else {
                iVar3 = -0x49b8;
                puVar5 = (undefined4 *)&DAT_1499faaa0;
              }
            }
            else {
              iVar3 = -0x3ce1;
              puVar5 = &DAT_1499faa80;
            }
          }
          else {
            iVar3 = -0xfa2a;
            puVar5 = &DAT_1499faa70;
          }
        }
        else {
          iVar3 = -0xe865;
          puVar5 = &DAT_1499faa50;
        }
      }
LAB_142586d20:
      uVar4 = (iVar3 + param_3 + puVar5[2]) - 0x19beb2;
      local_49 = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
      uVar1 = ((ulonglong)uVar4 / 10) / 0x7e;
      local_4a = (((char)uVar1 + (char)(((ulonglong)uVar4 / 10) / 0x7e)) - (char)((int)uVar1 << 7))
                 + (char)(uVar4 / 10) + -0x7f;
      local_4b = (char)((uVar4 >> 2) / 0x13b) +
                 (char)(((ulonglong)(uVar4 >> 2) / 0x13b) * 0x1999999a >> 0x20) * -10 | 0x30;
      local_4c = (char)((ulonglong)(uVar4 >> 3) / 0x627) + -0x7f;
      local_70 = param_11;
      local_78 = CONCAT44(local_78._4_4_,param_9);
      local_80 = param_8;
      local_88 = param_7;
      FUN_142637760(param_1,&local_4c,4,param_6);
      goto LAB_142586dd7;
    }
    if (param_3 < 0x110000) {
      iVar3 = -0x10000;
      puVar5 = &DAT_1499faa10;
      goto LAB_142586d20;
    }
  }
LAB_142586b8a:
  *param_11 = 10;
LAB_142586dd7:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 142586e50 FUN_142586e50 body=326 status=ok
// SIG undefined FUN_142586e50(void)

int FUN_142586e50(longlong param_1,uint param_2,uint *param_3,char param_4)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (((int)param_2 < 0x10000) || ((*(byte *)(param_1 + 0xfd) & 1) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x58);
    if (*(char *)(param_1 + 0xfc) == '\x01') {
      uVar2 = *(uint *)(lVar3 + ((ulonglong)*(ushort *)(lVar3 + (longlong)((int)param_2 >> 10) * 2)
                                + (ulonglong)(param_2 >> 4 & 0x3f)) * 4);
      uVar1 = *(ushort *)
               (*(longlong *)(param_1 + 0xe8) +
               (ulonglong)(param_2 & 0xf | (uVar2 & 0xffff) << 4) * 2);
      if (((uVar2 >> ((byte)((byte)param_2 | 0x10) & 0x1f) & 1) != 0) ||
         ((((param_4 != '\0' || (param_2 - 0xe000 < 0x1900)) || (param_2 - 0xf0000 < 0x20000)) &&
          (uVar1 != 0)))) {
        *param_3 = (uint)uVar1;
        return 2 - (uint)(uVar1 < 0x100);
      }
    }
    else {
      if (*(char *)(param_1 + 0xfc) != '\0') {
        return -1;
      }
      uVar1 = *(ushort *)
               (*(longlong *)(param_1 + 0xe8) +
               ((ulonglong)(param_2 & 0xf) +
               (ulonglong)
               *(ushort *)
                (lVar3 + ((ulonglong)(param_2 >> 4 & 0x3f) +
                         (ulonglong)*(ushort *)(lVar3 + (longlong)((int)param_2 >> 10) * 2)) * 2)) *
               2);
      if (param_4 == '\0') {
        if (0xbff < uVar1) goto LAB_142586f34;
      }
      else if (0x7ff < uVar1) {
LAB_142586f34:
        *param_3 = (uint)(byte)uVar1;
        return 1;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x120) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_142636f00();
    if (-1 < -iVar4) {
      iVar4 = -iVar4;
    }
  }
  return iVar4;
}



// FUNCTION 142586fa0 FUN_142586fa0 body=15 status=ok
// SIG undefined FUN_142586fa0(void)

undefined8 FUN_142586fa0(longlong param_1,byte param_2)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x38) >> 8),
                  -1 < *(int *)(*(longlong *)(param_1 + 0x38) + (ulonglong)param_2 * 4));
}



// FUNCTION 142586fb0 FUN_142586fb0 body=2879 status=ok
// SIG undefined FUN_142586fb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142586fb0(longlong param_1,longlong param_2,char *param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong lVar11;
  void *pvVar12;
  longlong lVar13;
  ulonglong uVar14;
  char cVar15;
  char *pcVar16;
  longlong lVar17;
  int iVar18;
  byte *_Dst;
  int iVar19;
  uint uVar20;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_198 [32];
  undefined4 local_178;
  byte *local_170;
  byte *local_168;
  char *local_160;
  ulonglong local_158;
  undefined2 local_14c;
  byte local_140;
  char local_13f;
  char local_138 [8];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*param_3 == '\x05') {
    if ((2 < (byte)param_3[1]) && (uVar20 = *(uint *)(param_3 + 0x20), (uVar20 & 0xff80) == 0)) {
      uVar10 = (ulonglong)(uVar20 & 0x3f);
      uVar22 = *(uint *)(param_3 + 0x18);
      bVar9 = (byte)uVar22;
      *(byte *)(param_1 + 0xfc) = bVar9;
      cVar15 = (char)((uVar20 & 0x40) >> 6);
      if (((uVar20 & 0x40) == 0) || ((uVar22 & 0xff) != 0)) goto LAB_14258704e;
    }
  }
  else if (*param_3 == '\x04') {
    bVar9 = param_3[0x18];
    *(byte *)(param_1 + 0xfc) = bVar9;
    uVar10 = 8;
    cVar15 = '\0';
LAB_14258704e:
    pcVar16 = (char *)(param_1 + 0xfc);
    if (0xff < *(uint *)(param_3 + 0x18)) {
      *(char **)(param_1 + 0x120) = param_3 + (*(uint *)(param_3 + 0x18) >> 8);
    }
    if (bVar9 < 0xf) {
      _Dst = (byte *)(param_1 + 0x30);
      if ((0x130fU >> (bVar9 & 0x1f) & 1) != 0) {
        if (*(char *)(param_2 + 8) != '\0') goto LAB_1425872d9;
        *(char *)(param_1 + 0x30) = param_3[4];
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_3 + 8);
        *(char **)(param_1 + 0x38) = param_3 + uVar10 * 4;
        *(char **)(param_1 + 0x50) =
             param_3 + uVar10 * 4 + (ulonglong)*(uint *)(param_3 + 4) * 0x400;
        *(char **)(param_1 + 0x48) = param_3 + *(uint *)(param_3 + 0xc);
        *(char **)(param_1 + 0x58) = param_3 + *(uint *)(param_3 + 0x10);
        *(char **)(param_1 + 0xe8) = param_3 + *(uint *)(param_3 + 0x14);
        *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_3 + 0x1c);
        local_14c = 0x14;
        FUN_1424e51f0();
        if ((local_140 < 7) && ((local_140 != 6 || (local_13f == '\0')))) {
          *(undefined1 *)(param_1 + 0xfd) = 3;
        }
        else {
          bVar9 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0x4f) & 3;
          *(byte *)(param_1 + 0xfd) = bVar9;
          if ((2 < (byte)param_3[1]) && (bVar9 < 2)) {
            if (*_Dst == 1) {
              if (0xe < (byte)param_3[2]) {
                *(undefined1 *)(param_1 + 0xfe) = 1;
                lVar13 = *(longlong *)(param_1 + 0x58);
                uVar20 = 4;
                uVar10 = 0;
                do {
                  uVar14 = uVar10 >> 4 & 0xfffffff;
                  *(undefined2 *)(param_1 + 0x68 + uVar10 * 2) =
                       *(undefined2 *)
                        (lVar13 + ((ulonglong)(uVar20 - 4 & 0x38) +
                                  (ulonglong)*(ushort *)(lVar13 + uVar14 * 2)) * 2);
                  *(undefined2 *)(param_1 + 0x6a + uVar10 * 2) =
                       *(undefined2 *)
                        (lVar13 + ((ulonglong)(uVar20 & 0x3c) +
                                  (ulonglong)*(ushort *)(lVar13 + uVar14 * 2)) * 2);
                  uVar10 = uVar10 + 2;
                  uVar20 = uVar20 + 8;
                } while (uVar10 != 0x40);
                *(undefined2 *)(param_1 + 0x100) = 0xfff;
              }
            }
            else if (0xd6 < (byte)param_3[2]) {
              *(undefined1 *)(param_1 + 0xfe) = 1;
              if (cVar15 == '\0') {
                uVar10 = (ulonglong)*(uint *)(param_1 + 0xf8);
              }
              else {
                uVar10 = 0;
              }
              *(ulonglong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0xe8) + uVar10;
              *(ushort *)(param_1 + 0x100) = (ushort)(byte)param_3[2] << 8 | 0xff;
            }
          }
        }
        uVar20 = 0;
        uVar22 = 1;
        uVar23 = 2;
        uVar24 = 3;
        auVar25._8_4_ = 0xffffffff;
        auVar25._0_8_ = 0xffffffffffffffff;
        auVar25._12_4_ = 0xffffffff;
        lVar13 = 0;
        auVar27._8_4_ = 0xffffffff;
        auVar27._0_8_ = 0xffffffffffffffff;
        auVar27._12_4_ = 0xffffffff;
        auVar26._8_4_ = 0xffffffff;
        auVar26._0_8_ = 0xffffffffffffffff;
        auVar26._12_4_ = 0xffffffff;
        do {
          uVar28 = uVar20 + (int)DAT_149931510;
          uVar30 = uVar22 + DAT_149931510._4_4_;
          uVar31 = uVar23 + DAT_149931510._8_4_;
          uVar32 = uVar24 + DAT_149931510._12_4_;
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x38) + lVar13 * 4);
          puVar3 = (uint *)(*(longlong *)(param_1 + 0x38) + 0x10 + lVar13 * 4);
          auVar35._0_4_ = -(uint)((uVar20 | 0x80000000) == *puVar1);
          auVar35._4_4_ = -(uint)((uVar22 | 0x80000000) == puVar1[1]);
          auVar35._8_4_ = -(uint)((uVar23 | 0x80000000) == puVar1[2]);
          auVar35._12_4_ = -(uint)((uVar24 | 0x80000000) == puVar1[3]);
          auVar33._0_4_ = -(uint)((uVar28 | 0x80000000) == *puVar3);
          auVar33._4_4_ = -(uint)((uVar30 | 0x80000000) == puVar3[1]);
          auVar33._8_4_ = -(uint)((uVar31 | 0x80000000) == puVar3[2]);
          auVar33._12_4_ = -(uint)((uVar32 | 0x80000000) == puVar3[3]);
          auVar34._0_4_ = (int)(float)((uVar20 >> 2) * 0x800000 + 0x3f800000);
          auVar34._4_4_ = (int)(float)((uVar22 >> 2) * 0x800000 + 0x3f800000);
          auVar34._8_4_ = (int)(float)((uVar23 >> 2) * 0x800000 + 0x3f800000);
          auVar34._12_4_ = (int)(float)((uVar24 >> 2) * 0x800000 + 0x3f800000);
          auVar29._0_4_ = (int)(float)((uVar28 >> 2) * 0x800000 + 0x3f800000);
          auVar29._4_4_ = (int)(float)((uVar30 >> 2) * 0x800000 + 0x3f800000);
          auVar29._8_4_ = (int)(float)((uVar31 >> 2) * 0x800000 + 0x3f800000);
          auVar29._12_4_ = (int)(float)((uVar32 >> 2) * 0x800000 + 0x3f800000);
          auVar27 = auVar27 & (auVar34 ^ auVar25 | auVar35);
          auVar26 = auVar26 & (auVar29 ^ auVar25 | auVar33);
          lVar13 = lVar13 + 8;
          uVar20 = uVar20 + 8;
          uVar22 = uVar22 + 8;
          uVar23 = uVar23 + 8;
          uVar24 = uVar24 + 8;
        } while (lVar13 != 0x80);
        auVar26 = auVar26 & auVar27;
        auVar21._0_8_ = auVar26._8_8_;
        auVar21._8_4_ = auVar26._8_4_;
        auVar21._12_4_ = auVar26._12_4_;
        *(uint *)(param_1 + 0x104) = SUB164(auVar21 & auVar26,4) & SUB164(auVar21 & auVar26,0);
        if (cVar15 != '\0') {
          uVar23 = *(byte *)(param_1 + 0xfd) & 1;
          iVar18 = *(int *)(param_3 + 0x10);
          iVar19 = *(int *)(param_3 + 0x14);
          uVar22 = *(uint *)(param_3 + 0x24);
          uVar20 = uVar23 * 0x800 + 0x80;
          uVar10 = (ulonglong)(uVar20 + uVar22 * 4 + *(int *)(param_1 + 0xf8));
          local_168 = _Dst;
          local_160 = pcVar16;
          pvVar12 = (void *)FUN_1424da030(uVar10);
          *(void **)(param_1 + 0x108) = pvVar12;
          if (pvVar12 == (void *)0x0) {
            *param_4 = 7;
            pcVar16 = local_160;
            _Dst = local_168;
          }
          else {
            uVar24 = uVar23 << 10 | 0x40;
            uVar23 = uVar24 >> 1;
            iVar19 = ((uint)(iVar19 - iVar18) >> 2) - uVar23;
            iVar18 = 0;
            local_158 = (ulonglong)uVar22;
            memset(pvVar12,0,uVar10);
            pvVar12 = *(void **)(param_1 + 0x108);
            memcpy(pvVar12,*(void **)(param_1 + 0x58),(ulonglong)uVar20);
            uVar10 = local_158;
            uVar14 = (ulonglong)uVar24;
            memcpy((void *)((longlong)pvVar12 +
                           (ulonglong)(uint)((int)local_158 - iVar19) * 4 + uVar14 * 2),
                   (void *)(uVar14 * 2 + *(longlong *)(param_1 + 0x58)),
                   (ulonglong)(uint)(iVar19 * 4));
            *(void **)(param_1 + 0x58) = pvVar12;
            *(ulonglong *)(param_1 + 0xe8) = (longlong)pvVar12 + uVar10 * 4 + uVar14 * 2;
            uVar5 = *(ushort *)(param_1 + 0x100);
            if (0x3e < uVar5) {
              lVar13 = 0;
              do {
                uVar6 = *(ushort *)((longlong)pvVar12 + lVar13 * 2);
                if (uVar23 != uVar6) {
                  lVar11 = (ulonglong)uVar6 * 4;
                  lVar17 = 0;
                  do {
                    uVar6 = *(ushort *)
                             (lVar17 + *(longlong *)(param_1 + 0x60) + (longlong)iVar18 * 2);
                    if (uVar6 != 0) {
                      uVar20 = (uint)(uVar6 >> 4);
                      *(uint *)((longlong)pvVar12 + lVar17 * 8 + lVar11) = uVar20;
                      *(uint *)((longlong)pvVar12 + lVar17 * 8 + lVar11 + 4) = uVar20 + 1;
                      *(uint *)((longlong)pvVar12 + lVar17 * 8 + lVar11 + 8) = uVar20 + 2;
                      *(uint *)((longlong)pvVar12 + lVar17 * 8 + lVar11 + 0xc) = uVar20 + 3;
                    }
                    lVar17 = lVar17 + 2;
                  } while ((int)lVar17 != 0x20);
                }
                iVar18 = iVar18 + 0x10;
                lVar13 = lVar13 + 1;
              } while (iVar18 < (int)(uVar5 + 1 >> 6));
            }
            local_c8 = 0xffffffff;
            uStack_c4 = 0xffffffff;
            uStack_c0 = 0xffffffff;
            uStack_bc = 0xffffffff;
            local_d8 = 0xffffffff;
            uStack_d4 = 0xffffffff;
            uStack_d0 = 0xffffffff;
            uStack_cc = 0xffffffff;
            local_e8 = 0xffffffff;
            uStack_e4 = 0xffffffff;
            uStack_e0 = 0xffffffff;
            uStack_dc = 0xffffffff;
            local_f8 = 0xffffffff;
            uStack_f4 = 0xffffffff;
            uStack_f0 = 0xffffffff;
            uStack_ec = 0xffffffff;
            local_108 = 0xffffffff;
            uStack_104 = 0xffffffff;
            uStack_100 = 0xffffffff;
            uStack_fc = 0xffffffff;
            auStack_120._8_4_ = 0xffffffff;
            auStack_120._12_4_ = 0xffffffff;
            uStack_110 = 0xffffffff;
            uStack_10c = 0xffffffff;
            auStack_130._8_4_ = 0xffffffff;
            auStack_130._12_4_ = 0xffffffff;
            auStack_120._0_8_ = 0xffffffffffffffff;
            local_138[0] = -1;
            local_138[1] = -1;
            local_138[2] = -1;
            local_138[3] = -1;
            local_138[4] = -1;
            local_138[5] = -1;
            local_138[6] = -1;
            local_138[7] = -1;
            auStack_130._0_8_ = 0xffffffffffffffff;
            FUN_142588930(*(undefined8 *)(param_1 + 0x38),local_138,0);
            pcVar16 = local_160;
            _Dst = local_168;
            bVar9 = *(byte *)(param_1 + 0x30);
            if (bVar9 != 0) {
              uVar10 = 0;
              do {
                if ('?' < (char)auStack_130[uVar10 - 8]) {
                  local_170 = _Dst;
                  local_178 = 0;
                  FUN_142588ac0(_Dst,local_138,uVar10 & 0xffffffff,0);
                  bVar9 = *_Dst;
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < bVar9);
            }
          }
        }
        if (*(char *)(param_1 + 0xfe) == '\0') {
LAB_142587632:
          cVar15 = *pcVar16;
        }
        else {
LAB_142587620:
          if (*_Dst == 1) {
            *(undefined **)(param_1 + 0x20) = &DAT_1499fa8c8;
            goto LAB_142587632;
          }
          cVar15 = *pcVar16;
          if (cVar15 == '\x01') {
            *(undefined **)(param_1 + 0x20) = &DAT_1499fa958;
            goto LAB_1425872d9;
          }
        }
        if ((cVar15 == -0x25) || (cVar15 == '\f')) {
          *(undefined4 *)(param_1 + 0x104) = 0;
        }
        goto LAB_1425872d9;
      }
      if (bVar9 == 0xe) {
        auStack_120 = (undefined1  [16])0x0;
        auStack_130 = (undefined1  [16])0x0;
        lVar13 = *(longlong *)(param_1 + 0x120);
        if (lVar13 != 0) {
          if (*(int *)(param_2 + 4) != 1) {
            *param_4 = 0xe;
            goto LAB_1425872d9;
          }
          iVar18 = strcmp(param_3 + uVar10 * 4,(char *)(*(longlong *)(param_1 + 0x10) + 4));
          if (iVar18 != 0) {
            local_138[0] = '(';
            local_138[1] = '\0';
            local_138[2] = '\0';
            local_138[3] = '\0';
            local_138[4] = '\x02';
            local_138[5] = '\0';
            local_138[6] = '\0';
            local_138[7] = '\0';
            auStack_130[0] = *(undefined1 *)(param_2 + 8);
            auStack_130._2_2_ = *(undefined2 *)(param_2 + 10);
            auStack_130._4_4_ = *(undefined4 *)(param_2 + 0xc);
            auStack_130._8_8_ = *(undefined8 *)(param_2 + 0x10);
            auStack_120._0_8_ = param_3 + uVar10 * 4;
            lVar11 = FUN_14250b0d0(local_138,param_4);
            if (0 < *param_4) goto LAB_1425872d9;
            if ((*(char *)(*(longlong *)(lVar11 + 0x10) + 0x45) == '\x02') &&
               (*(longlong *)(lVar11 + 0x118) == 0)) {
              if (*(char *)(param_2 + 8) != '\0') {
                FUN_14250b370(lVar11);
                goto LAB_1425872d9;
              }
              memcpy(_Dst,(void *)(lVar11 + 0x30),0xd8);
              *(longlong *)(param_1 + 0x118) = lVar11;
              *(longlong *)(param_1 + 0x120) = lVar13;
              *(undefined8 *)(param_1 + 0x40) = 0;
              *(undefined8 *)(param_1 + 0xf0) = 0;
              *(undefined1 (*) [16])(param_1 + 0x108) = (undefined1  [16])0x0;
              cVar15 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x45);
              if ((cVar15 == '\x01') ||
                 ((cVar15 == '\x02' && ('\x01' < *(char *)(*(longlong *)(param_1 + 0x10) + 0x46)))))
              {
                if (*(char *)(lVar11 + 0xfc) == '\f') {
                  uVar20 = *(uint *)(*(longlong *)(param_1 + 0x38) + 0x38);
                  if (((uVar20 & 0x80f00000) == 0x80800000) &&
                     (uVar20 = uVar20 >> 0x18 & 0x7f, uVar20 != 0)) {
                    *(char *)(param_1 + 0x31) = (char)uVar20;
LAB_142587793:
                    *pcVar16 = -0x25;
                  }
                }
                else {
                  lVar13 = *(longlong *)(lVar11 + 0x10);
                  if (((*(char *)(lVar13 + 0x45) == '\x02') && (*(char *)(lVar13 + 0x46) == '\x01'))
                     && (*(char *)(lVar13 + 0x47) == '\x02')) {
                    bVar9 = *_Dst;
                    if (-1 < (char)bVar9) {
                      lVar13 = (ulonglong)bVar9 + 1;
                      pvVar12 = (void *)FUN_1424da030(lVar13 * 0x400);
                      if (pvVar12 == (void *)0x0) {
                        FUN_14250b370(lVar11);
                        *param_4 = 7;
                        goto LAB_1425872d9;
                      }
                      memcpy(pvVar12,*(void **)(param_1 + 0x38),(ulonglong)bVar9 << 10);
                      iVar18 = (uint)bVar9 << 0x18;
                      lVar11 = 0;
                      do {
                        piVar2 = (int *)((longlong)pvVar12 + lVar11 * 4);
                        iVar19 = piVar2[1];
                        iVar7 = piVar2[2];
                        iVar8 = piVar2[3];
                        if (*piVar2 < 0) {
                          *(int *)((longlong)pvVar12 + lVar11 * 4) = iVar18;
                        }
                        if (iVar19 < 0) {
                          *(int *)((longlong)pvVar12 + lVar11 * 4 + 4) = iVar18;
                        }
                        if (iVar7 < 0) {
                          *(int *)((longlong)pvVar12 + lVar11 * 4 + 8) = iVar18;
                        }
                        if (iVar8 < SUB124(SUB1612((undefined1  [16])0x0,4),8)) {
                          *(int *)((longlong)pvVar12 + lVar11 * 4 + 0xc) = iVar18;
                        }
                        piVar2 = (int *)((longlong)pvVar12 + lVar11 * 4 + 0x10);
                        iVar19 = piVar2[1];
                        iVar7 = piVar2[2];
                        iVar8 = piVar2[3];
                        if (*piVar2 < 0) {
                          *(int *)((longlong)pvVar12 + lVar11 * 4 + 0x10) = iVar18;
                        }
                        if (iVar19 < 0) {
                          *(int *)((longlong)pvVar12 + lVar11 * 4 + 0x14) = iVar18;
                        }
                        if (iVar7 < 0) {
                          *(int *)((longlong)pvVar12 + lVar11 * 4 + 0x18) = iVar18;
                        }
                        if (iVar8 < SUB124(SUB1612((undefined1  [16])0x0,4),8)) {
                          *(int *)((longlong)pvVar12 + lVar11 * 4 + 0x1c) = iVar18;
                        }
                        lVar11 = lVar11 + 8;
                      } while (lVar11 != 0x100);
                      lVar11 = (ulonglong)bVar9 * 0x400;
                      *(undefined8 *)((longlong)pvVar12 + lVar11) = 0x8070000080700000;
                      ((undefined8 *)((longlong)pvVar12 + lVar11))[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x10);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x20);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x30);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x40);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x50);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x60);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x70);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x80);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x90);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0xa0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0xb0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0xc0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0xd0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0xe0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0xf0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x100);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x110);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x120);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x130);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x140);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x150);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x160);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x170);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x180);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 400);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x1a0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x1b0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x1c0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x1d0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x1e0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x1f0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x200);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x210);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x220);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x230);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x240);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x250);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x260);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x270);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x280);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x290);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x2a0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x2b0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x2c0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x2d0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x2e0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x2f0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x300);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x310);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 800);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x330);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x340);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x350);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x360);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x370);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x380);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x390);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x3a0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x3b0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x3c0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x3d0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x3e0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      puVar4 = (undefined8 *)((longlong)pvVar12 + lVar11 + 0x3f0);
                      *puVar4 = 0x8070000080700000;
                      puVar4[1] = 0x8070000080700000;
                      *(void **)(param_1 + 0x38) = pvVar12;
                      *(char *)(param_1 + 0x30) = (char)lVar13;
                      *(undefined1 *)(param_1 + 0x32) = 1;
                      goto LAB_142587793;
                    }
                  }
                }
              }
              if (*(char *)(param_1 + 0xfe) != '\0') goto LAB_142587620;
              goto LAB_142587632;
            }
            FUN_14250b370(lVar11);
          }
        }
      }
    }
  }
  *param_4 = 0xd;
LAB_1425872d9:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_198);
}



// FUNCTION 142587b50 FUN_142587b50 body=83 status=ok
// SIG undefined FUN_142587b50(void)

void FUN_142587b50(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1424da110();
  }
  if (*(char *)(param_1 + 0x32) != '\0') {
    FUN_1424da110(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_14250b370();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1424da110();
    return;
  }
  return;
}



// FUNCTION 142587bb0 FUN_142587bb0 body=971 status=ok
// SIG undefined FUN_142587bb0(void)

void FUN_142587bb0(longlong param_1,longlong param_2,int *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  void *_Src;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  ulonglong uVar8;
  void *_Dst;
  void *_Dst_00;
  ulonglong uVar9;
  size_t sVar10;
  char cVar11;
  undefined2 uVar12;
  
  if (*(char *)(param_2 + 8) != '\0') {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  cVar11 = *(char *)(lVar2 + 0xfc);
  if (cVar11 == -0x25) {
    uVar5 = *(uint *)(param_2 + 0xc) & 0xffffffef;
    *(uint *)(param_2 + 0xc) = uVar5;
    *(uint *)(param_1 + 0x38) = uVar5;
  }
  if ((*(byte *)(param_2 + 0xc) & 0x10) != 0) {
    FUN_142501320(0);
    lVar3 = *(longlong *)(lVar2 + 0x40);
    FUN_142501400(0);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      puVar4 = *(ushort **)(lVar3 + 0x58);
      _Src = *(void **)(lVar3 + 0xe8);
      cVar1 = *(char *)(lVar3 + 0xfc);
      if ((((cVar1 == '\f') || (cVar1 == '\0')) &&
          (*(int *)(*(longlong *)(lVar3 + 0x38) + 0x94) == -0x7ffffff6)) &&
         (*(int *)(*(longlong *)(lVar3 + 0x38) + 0x54) == -0x7fffff7b)) {
        uVar8 = (ulonglong)*puVar4;
        if (cVar1 == '\0') {
          if ((*(short *)((longlong)_Src + (ulonglong)puVar4[uVar8] * 2 + 0x14) == 0xf25) &&
             (*(short *)((longlong)_Src + (ulonglong)puVar4[uVar8 + 8] * 2 + 10) == 0xf15))
          goto LAB_142587ddf;
        }
        else if ((((*(uint *)(puVar4 + uVar8 * 2) & 0x4000000) != 0) &&
                 ((*(short *)((longlong)_Src +
                             (ulonglong)((*(uint *)(puVar4 + uVar8 * 2) & 0xffff) << 4) * 2 + 0x14)
                   == 0x25 && ((*(uint *)(puVar4 + uVar8 * 2 + 0x10) & 0x200000) != 0)))) &&
                (*(short *)((longlong)_Src +
                           (ulonglong)((*(uint *)(puVar4 + uVar8 * 2 + 0x10) & 0xffff) << 4) * 2 +
                           10) == 0x15)) {
LAB_142587ddf:
          uVar8 = (ulonglong)*(uint *)(lVar3 + 0xf8);
          if (uVar8 == 0) {
            *param_3 = 3;
            return;
          }
          _Dst = (void *)FUN_1424da030(*(uint *)(lVar3 + 0xf8) +
                                       (uint)*(byte *)(lVar3 + 0x30) * 0x400 + 0x50);
          if (_Dst == (void *)0x0) {
            *param_3 = 7;
            return;
          }
          memcpy(_Dst,*(void **)(lVar3 + 0x38),(ulonglong)*(byte *)(lVar3 + 0x30) << 10);
          *(undefined4 *)((longlong)_Dst + 0x94) = 0x80000085;
          *(undefined4 *)((longlong)_Dst + 0x54) = 0x8000000a;
          _Dst_00 = (void *)((ulonglong)*(byte *)(lVar3 + 0x30) * 0x400 + (longlong)_Dst);
          memcpy(_Dst_00,_Src,uVar8);
          if (*(char *)(lVar3 + 0xfc) == '\0') {
            *(undefined2 *)((longlong)_Dst_00 + (ulonglong)puVar4[*puVar4] * 2 + 0x14) = 0xf15;
            uVar9 = (ulonglong)puVar4[(ulonglong)*puVar4 + 8] + 5;
            uVar12 = 0xf25;
          }
          else {
            *(undefined2 *)
             ((longlong)_Dst_00 +
             (ulonglong)((*(uint *)(puVar4 + (ulonglong)*puVar4 * 2) & 0xffff) << 4) * 2 + 0x14) =
                 0x15;
            uVar9 = (ulonglong)((*(uint *)(puVar4 + (ulonglong)*puVar4 * 2 + 0x10) & 0xffff) << 4) |
                    5;
            uVar12 = 0x25;
          }
          *(undefined2 *)((longlong)_Dst_00 + uVar9 * 2) = uVar12;
          pcVar7 = (char *)(uVar8 + (longlong)_Dst_00);
          strcpy(pcVar7,(char *)(*(longlong *)(lVar3 + 0x10) + 4));
          sVar10 = strlen(pcVar7);
          builtin_strncpy(pcVar7 + sVar10,",swaplfnl",10);
          FUN_142501320(0);
          if (*(longlong *)(lVar3 + 0x40) == 0) {
            *(void **)(lVar3 + 0x40) = _Dst;
            *(void **)(lVar3 + 0xf0) = _Dst_00;
            *(char **)(lVar3 + 0x110) = pcVar7;
            FUN_142501400(0);
          }
          else {
            FUN_142501400(0);
            FUN_1424da110(_Dst);
          }
          goto LAB_142587c1f;
        }
      }
      if (0 < *param_3) {
        return;
      }
      uVar5 = *(uint *)(param_2 + 0xc) & 0xffffffef;
      *(uint *)(param_2 + 0xc) = uVar5;
      *(uint *)(param_1 + 0x38) = uVar5;
    }
  }
LAB_142587c1f:
  pcVar7 = *(char **)(param_2 + 0x18);
  pcVar6 = strstr(pcVar7,"18030");
  if (pcVar6 == (char *)0x0) {
    pcVar6 = strstr(pcVar7,"KEIS");
    uVar5 = 0x1000;
    if ((pcVar6 == (char *)0x0) && (pcVar6 = strstr(pcVar7,"keis"), pcVar6 == (char *)0x0)) {
      pcVar6 = strstr(pcVar7,"JEF");
      uVar5 = 0x2000;
      if ((pcVar6 == (char *)0x0) && (pcVar6 = strstr(pcVar7,"jef"), pcVar6 == (char *)0x0)) {
        pcVar6 = strstr(pcVar7,"JIPS");
        uVar5 = 0x4000;
        if (pcVar6 == (char *)0x0) {
          pcVar6 = "jips";
          goto LAB_142587c5b;
        }
      }
    }
  }
  else {
    pcVar6 = strstr(pcVar7,"gb18030");
    uVar5 = 0x8000;
    if (pcVar6 == (char *)0x0) {
      pcVar6 = "GB18030";
      uVar5 = 0x8000;
LAB_142587c5b:
      pcVar7 = strstr(pcVar7,pcVar6);
      if (pcVar7 == (char *)0x0) goto LAB_142587ce4;
    }
  }
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | uVar5;
LAB_142587ce4:
  if (cVar11 == '\f') {
    *(undefined1 *)(param_1 + 0x58) = 3;
  }
  if ((*(longlong *)(lVar2 + 0x120) != 0) &&
     (cVar11 = (cVar11 == '\f') + *(char *)(*(longlong *)(lVar2 + 0x120) + 0x44),
     *(char *)(param_1 + 0x58) < cVar11)) {
    *(char *)(param_1 + 0x58) = cVar11;
  }
  return;
}



// FUNCTION 142587f80 FUN_142587f80 body=1543 status=ok
// SIG undefined FUN_142587f80(void)

uint FUN_142587f80(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  char cVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  byte *pbVar24;
  uint uVar25;
  ulonglong uVar26;
  int iVar27;
  byte bVar28;
  uint uVar29;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if ('\0' < *(char *)(lVar4 + 0x11a)) {
    return 0xfffffff7;
  }
  lVar22 = *(longlong *)(lVar4 + 0x30);
  if ((*(byte *)(lVar22 + 0xfd) & 2) != 0) {
    return 0xfffffff7;
  }
  pbVar5 = *(byte **)(param_1 + 0x18);
  if (*(char *)(lVar22 + 0x30) != '\x01') {
    uVar18 = (ulonglong)*(uint *)(lVar4 + 0x4c);
    if ((char)*(uint *)(lVar4 + 0x4c) == '\0') {
      uVar18 = (ulonglong)*(byte *)(lVar22 + 0x31);
    }
    lVar6 = *(longlong *)(lVar22 + 0x38 + (ulonglong)((*(byte *)(lVar4 + 0x38) & 0x10) >> 4) * 8);
    lVar7 = *(longlong *)(lVar22 + 0x48);
    iVar27 = *(int *)(lVar4 + 0x48);
    uVar19 = 0xffffffff;
    pbVar14 = *(byte **)(param_1 + 0x10);
switchD_1425881c8_caseD_3:
    pbVar24 = pbVar14;
    if (pbVar5 <= pbVar24) {
      lVar21 = 0;
      goto LAB_1425881e3;
    }
    lVar21 = 1;
    pbVar15 = pbVar24;
    while( true ) {
      pbVar14 = pbVar15 + 1;
      uVar25 = (uint)uVar18;
      uVar23 = *(uint *)((uVar18 & 0xff) * 0x400 + lVar6 + (ulonglong)*pbVar15 * 4);
      if ((int)uVar23 < 0) break;
      uVar18 = (ulonglong)(uVar23 >> 0x18);
      iVar27 = (uVar23 & 0xffffff) + iVar27;
      uVar25 = uVar19;
      if ((pbVar14 < pbVar5) &&
         (uVar17 = *(uint *)(uVar18 * 0x400 + lVar6 + (ulonglong)*pbVar14 * 4),
         (uVar17 & 0x80f00000) == 0x80400000)) {
        uVar3 = *(ushort *)(lVar7 + (ulonglong)((uVar17 & 0xffff) + iVar27) * 2);
        uVar19 = (uint)uVar3;
        uVar25 = (uint)uVar3;
        if (uVar3 < 0xfffe) {
          pbVar14 = pbVar15 + 2;
          uVar29 = (uint)((byte)(uVar17 >> 0x18) & 0x7f);
          goto LAB_142588264;
        }
      }
      uVar19 = uVar25;
      lVar11 = lVar21 - (longlong)pbVar5;
      lVar21 = lVar21 + 1;
      pbVar15 = pbVar14;
      if (pbVar24 + lVar11 == (byte *)0x0) {
        uVar18 = (ulonglong)(uVar23 >> 0x18);
        lVar21 = (longlong)pbVar5 - (longlong)pbVar24;
        goto LAB_1425881e3;
      }
    }
    *(int *)(lVar4 + 0x4c) = (int)(uVar18 & 0xff);
    bVar28 = (byte)(uVar23 >> 0x18) & 0x7f;
    uVar18 = (ulonglong)bVar28;
    uVar29 = (uint)bVar28;
    uVar17 = uVar23 >> 0x14 & 0xf;
    if (uVar17 == 5) {
      uVar3 = *(ushort *)(lVar7 + (ulonglong)((uVar23 & 0xffff) + iVar27) * 2);
      uVar19 = (uint)uVar3;
      if (0xd7ff < uVar3) {
        uVar19 = (uVar23 & 0xffff) + iVar27 + 1;
        if (uVar3 < 0xe000) {
          uVar19 = (uVar3 & 0x3ff) * 0x400 + (uint)*(ushort *)(lVar7 + (ulonglong)uVar19 * 2) +
                   0x2400;
        }
        else if ((uVar3 & 0xfffe) == 0xe000) {
          uVar19 = (uint)*(ushort *)(lVar7 + (ulonglong)uVar19 * 2);
        }
        else {
          uVar12 = (uint)uVar3;
          if (uVar3 != 0xffff) goto switchD_1425881c8_caseD_6;
LAB_142588578:
          *param_2 = 0xc;
          uVar19 = 0xffff;
        }
      }
      goto LAB_142588264;
    }
    if (uVar17 == 4) {
      uVar3 = *(ushort *)(lVar7 + (ulonglong)((uVar23 & 0xffff) + iVar27) * 2);
      uVar19 = (uint)uVar3;
      if (0xfffd < uVar3) {
        if (uVar3 != 0xfffe) goto LAB_142588578;
        uVar19 = FUN_142584ad0(lVar22 + 0x30);
        uVar12 = 0xfffe;
        if (uVar19 == 0xfffe) goto switchD_1425881c8_caseD_6;
        goto LAB_1425881e3;
      }
      goto LAB_142588264;
    }
    if (uVar17 != 0) {
      if ((uVar23 & 0xd00000) != 0x100000) goto code_r0x0001425881ab;
      uVar19 = (uVar23 & 0xfffff) + 0x10000;
      goto LAB_142588264;
    }
    goto switchD_1425881c8_caseD_2;
  }
  lVar4 = *(longlong *)(lVar22 + 0x38 + (ulonglong)((*(byte *)(lVar4 + 0x38) & 0x10) >> 4) * 8);
  pbVar14 = *(byte **)(param_1 + 0x10);
  do {
    if (pbVar5 <= pbVar14) {
LAB_142588282:
      *param_2 = 8;
      return 0xffff;
    }
    uVar19 = *(uint *)(lVar4 + (ulonglong)*pbVar14 * 4);
    *(byte **)(param_1 + 0x10) = pbVar14 + 1;
    if ((int)uVar19 < -0x7ff00000) break;
    if ((uVar19 & 0xd00000) == 0x100000) {
      return (uVar19 & 0xfffff) + 0x10000;
    }
    uVar23 = uVar19 >> 0x14 & 0xf;
    if (uVar23 == 7) goto LAB_142588282;
    if (uVar23 == 6) {
      if (*param_2 < 1) {
        *(byte **)(param_1 + 0x10) = pbVar14;
        return 0xfffffff7;
      }
      goto LAB_142588282;
    }
    pbVar14 = pbVar14 + 1;
  } while (uVar23 != 2);
  return uVar19 & 0xffff;
code_r0x0001425881ab:
  iVar27 = 0;
  uVar12 = uVar19;
  switch(uVar17) {
  case 2:
    goto switchD_1425881c8_caseD_2;
  default:
    goto switchD_1425881c8_caseD_3;
  case 7:
    uVar25 = (uint)bVar28;
LAB_142588500:
    *param_2 = 0xc;
    uVar18 = (ulonglong)uVar25;
    break;
  case 8:
    if (*(char *)(lVar22 + 0x31) != '\0') goto LAB_142588500;
  case 6:
switchD_1425881c8_caseD_6:
    uVar19 = uVar12;
    if (*param_2 < 1) {
      *(undefined4 *)(lVar4 + 0x48) = 0;
      *(uint *)(lVar4 + 0x4c) = uVar23 >> 0x18 & 0x7f;
      *(byte **)(param_1 + 0x10) = pbVar24;
      return 0xfffffff7;
    }
  }
LAB_1425881e3:
  uVar29 = (uint)uVar18;
  pbVar14 = pbVar24 + lVar21;
  if (-1 < (int)uVar19) goto LAB_142588264;
  if (((0 < *param_2) || (pbVar14 != pbVar5)) || (lVar21 < 1)) {
    if (*param_2 < 1) {
      *param_2 = 8;
    }
    else {
      cVar2 = *(char *)(*(longlong *)(lVar4 + 0x30) + 0x31);
      *(byte *)(lVar4 + 0x41) = *pbVar24;
      if (lVar21 != 1) {
        pbVar24 = pbVar24 + 1;
        cVar13 = '\x01';
        if (lVar21 < 2) goto LAB_142588384;
        lVar22 = 0;
        goto LAB_142588328;
      }
      *(undefined1 *)(lVar4 + 0x40) = 1;
    }
    uVar19 = 0xffff;
    goto LAB_142588264;
  }
  pbVar14 = pbVar24 + 1;
  if (pbVar24 + 1 < pbVar5) {
    pbVar14 = pbVar5;
  }
  pbVar15 = (byte *)(lVar4 + 0x41);
  *(char *)(lVar4 + 0x40) = (char)lVar21;
  uVar18 = (longlong)pbVar14 - (longlong)pbVar24;
  pbVar14 = pbVar24;
  pbVar16 = pbVar15;
  if ((uVar18 < 8) || ((lVar4 - (longlong)pbVar24) + 0x41U < 0x20)) goto LAB_1425884d0;
  if (uVar18 < 0x20) {
    uVar20 = 0;
    goto LAB_142588498;
  }
  uVar20 = uVar18 & 0xffffffffffffffe0;
  uVar26 = 0;
  do {
    uVar8 = *(undefined8 *)(pbVar24 + uVar26 + 8);
    uVar9 = *(undefined8 *)(pbVar24 + uVar26 + 0x10);
    uVar10 = *(undefined8 *)(pbVar24 + uVar26 + 0x10 + 8);
    puVar1 = (undefined8 *)(lVar4 + 0x41 + uVar26);
    *puVar1 = *(undefined8 *)(pbVar24 + uVar26);
    puVar1[1] = uVar8;
    puVar1 = (undefined8 *)(lVar4 + 0x51 + uVar26);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    uVar26 = uVar26 + 0x20;
  } while (uVar20 != uVar26);
  if (uVar18 != uVar20) {
    if ((uVar18 & 0x18) == 0) {
      pbVar16 = pbVar15 + uVar20;
      pbVar14 = pbVar24 + uVar20;
    }
    else {
LAB_142588498:
      uVar26 = uVar18 & 0xfffffffffffffff8;
      pbVar14 = pbVar24 + uVar26;
      pbVar16 = pbVar15 + uVar26;
      do {
        *(undefined8 *)(pbVar15 + uVar20) = *(undefined8 *)(pbVar24 + uVar20);
        uVar20 = uVar20 + 8;
      } while (uVar26 != uVar20);
      if (uVar18 == uVar26) goto LAB_1425884e2;
    }
LAB_1425884d0:
    do {
      pbVar24 = pbVar14 + 1;
      *pbVar16 = *pbVar14;
      pbVar14 = pbVar24;
      pbVar16 = pbVar16 + 1;
    } while (pbVar24 < pbVar5);
  }
LAB_1425884e2:
  *param_2 = 0xb;
  uVar19 = 0xffff;
  pbVar14 = pbVar5;
  goto LAB_142588264;
switchD_1425881c8_caseD_2:
  uVar19 = uVar23 & 0xffff;
  goto LAB_142588264;
  while( true ) {
    *(byte *)(lVar4 + 0x42 + lVar22) = bVar28;
    lVar7 = lVar22 + 1;
    lVar22 = lVar22 + 1;
    if (pbVar14 <= pbVar24 + lVar7) break;
LAB_142588328:
    bVar28 = pbVar24[lVar22];
    uVar19 = *(uint *)((uVar18 & 0xff) * 0x400 + lVar6 + (ulonglong)bVar28 * 4);
    if ((int)uVar19 < 0) {
      uVar19 = uVar19 >> 0x14 & 0xf;
      cVar13 = uVar19 != 7 && (uVar19 != 8 || cVar2 == '\0');
    }
    else {
      cVar13 = FUN_142589e80(lVar6,uVar19 >> 0x18);
    }
    if (cVar13 != '\0') break;
  }
  cVar13 = (char)lVar22 + '\x01';
  pbVar24 = pbVar24 + lVar22;
LAB_142588384:
  *(char *)(lVar4 + 0x40) = cVar13;
  uVar19 = 0xffff;
  pbVar14 = pbVar24;
LAB_142588264:
  *(undefined4 *)(lVar4 + 0x48) = 0;
  *(uint *)(lVar4 + 0x4c) = uVar29 & 0xff;
  *(byte **)(param_1 + 0x10) = pbVar14;
  return uVar19;
}



// FUNCTION 1425886c0 FUN_1425886c0 body=258 status=ok
// SIG undefined FUN_1425886c0(void)

void FUN_1425886c0(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_38 [32];
  undefined4 *local_18;
  undefined1 local_c;
  undefined1 local_b [3];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x5e) == '\0') {
LAB_14258871a:
    puVar4 = *(undefined1 **)(lVar1 + 0x28);
    iVar2 = (int)*(char *)(lVar1 + 0x59);
  }
  else {
    if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x120) == 0) {
      if (0xff < *(ushort *)(lVar1 + 0x8c)) goto LAB_14258871a;
    }
    else if (*(char *)(lVar1 + 0x5f) == '\0') goto LAB_14258871a;
    puVar4 = (undefined1 *)(lVar1 + 0x5e);
    iVar2 = 1;
  }
  *(undefined1 *)(lVar1 + 0x5f) = 0;
  if (*(char *)(*(longlong *)(lVar1 + 0x30) + 0xfc) == '\f') {
    if (iVar2 == 2) {
      if (*(uint *)(lVar1 + 0x50) < 2) {
        *(undefined4 *)(lVar1 + 0x50) = 2;
        puVar3 = local_b;
        local_c = 0xe;
      }
      else {
        puVar3 = &local_c;
      }
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      iVar2 = (int)puVar3 + 2;
    }
    else {
      if (iVar2 != 1) {
        *param_3 = 1;
        goto LAB_1425887b5;
      }
      if (*(int *)(lVar1 + 0x50) == 2) {
        *(undefined4 *)(lVar1 + 0x50) = 1;
        puVar3 = local_b;
        local_c = 0xf;
      }
      else {
        puVar3 = &local_c;
      }
      *puVar3 = *puVar4;
      iVar2 = (int)puVar3 + 1;
    }
    puVar4 = &local_c;
    iVar2 = iVar2 - (int)puVar4;
  }
  local_18 = param_3;
  FUN_142635c30(param_1,puVar4,iVar2,param_2);
LAB_1425887b5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1425887d0 FUN_1425887d0 body=93 status=ok
// SIG undefined FUN_1425887d0(void)

void FUN_1425887d0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(byte *)(param_1 + 0x39) & 0x80) == 0) {
    FUN_142583010(*(longlong *)(param_1 + 0x30),param_2,param_3,
                  *(char *)(*(longlong *)(param_1 + 0x30) + 0xfc) == -0x25,param_4);
    return;
  }
  (*(code *)param_2[2])(*param_2,0,0xd7ff);
                    /* WARNING: Could not recover jumptable at 0x00014258882a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2[2])(*param_2,0xe000,0x10ffff);
  return;
}



// FUNCTION 142588830 FUN_142588830 body=244 status=ok
// SIG undefined FUN_142588830(void)

undefined8 FUN_142588830(longlong param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  if (*(char *)(param_1 + 0xcc) == '\t') {
    if (0xffffff < param_2) {
      if (param_2 < 0x8f000000) {
        param_2 = param_2 & 0x7fffff;
      }
      else {
        param_2 = param_2 & 0xff7fff;
      }
    }
  }
  else if ((*(char *)(param_1 + 0xcc) == '\b') && (0xffff < param_2)) {
    if (param_2 < 0x8f0000) {
      param_2 = param_2 & 0x7fff;
    }
    else {
      param_2 = param_2 & 0xff7f;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  lVar6 = *(longlong *)(param_1 + 0xb8);
  lVar10 = 0;
  do {
    uVar4 = *(uint *)(param_3 + lVar10);
    if (-1 < (int)uVar4) {
      lVar2 = lVar5 + (ulonglong)*(ushort *)(lVar5 + (ulonglong)(uVar4 >> 10) * 2) * 4;
      uVar9 = (ulonglong)(uVar4 >> 4 & 0x3f);
      uVar8 = (ulonglong)((*(uint *)(lVar2 + uVar9 * 4) & 0xffff) << 4 | uVar4 & 0xf);
      cVar3 = *(char *)(param_1 + 0xcc);
      if (cVar3 == '\t') {
LAB_1425888a0:
        lVar7 = uVar8 * 3;
        *(char *)(lVar6 + lVar7) = (char)(param_2 >> 0x10);
        *(char *)(lVar6 + 1 + lVar7) = (char)(param_2 >> 8);
        *(char *)(lVar6 + 2 + lVar7) = (char)param_2;
      }
      else if (cVar3 == '\x03') {
        *(uint *)(lVar6 + uVar8 * 4) = param_2;
      }
      else {
        if (cVar3 == '\x02') goto LAB_1425888a0;
        *(short *)(lVar6 + uVar8 * 2) = (short)param_2;
      }
      puVar1 = (uint *)(lVar2 + uVar9 * 4);
      *puVar1 = *puVar1 | 1 << ((byte)(uVar4 & 0xf) | 0x10);
    }
    param_2 = param_2 + 1;
    lVar10 = lVar10 + 4;
    if (lVar10 == 0x80) {
      return 1;
    }
  } while( true );
}



// FUNCTION 142588930 FUN_142588930 body=369 status=ok
// SIG undefined FUN_142588930(void)

void FUN_142588930(longlong param_1,longlong param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  uVar8 = (ulonglong)param_3;
  lVar9 = uVar8 * 0x400 + param_1;
  *(undefined1 *)(param_2 + uVar8) = 0;
  uVar6 = 0;
  do {
    uVar5 = *(uint *)(lVar9 + uVar6 * 4);
    uVar3 = uVar5 >> 0x18 & 0x7f;
    if (*(char *)(param_2 + (ulonglong)uVar3) == -1) {
      FUN_142588930(param_1,param_2,uVar3);
      if ((int)uVar5 < 0) goto LAB_142588992;
LAB_142588976:
      if (-1 < *(char *)(param_2 + (ulonglong)uVar3)) goto LAB_1425889b2;
    }
    else {
      if (-1 < (int)uVar5) goto LAB_142588976;
LAB_142588992:
      if ((uVar5 & 0xe00000) < 0x600000) {
LAB_1425889b2:
        uVar5 = (uint)uVar6;
        bVar2 = (byte)(uVar6 >> 2) & 0xf8 | *(byte *)(param_2 + uVar8);
        *(byte *)(param_2 + uVar8) = bVar2;
        uVar7 = 0xff;
        if (0xfe < uVar5) goto LAB_142588a39;
        uVar7 = 0xff;
        break;
      }
    }
    if (uVar6 == 0xff) {
      *(undefined1 *)(param_2 + uVar8) = 0xc0;
      return;
    }
    uVar6 = uVar6 + 1;
  } while( true );
  do {
    uVar3 = *(uint *)(lVar9 + uVar7 * 4);
    uVar4 = uVar3 >> 0x18 & 0x7f;
    if (*(char *)(param_2 + (ulonglong)uVar4) == -1) {
      FUN_142588930(param_1,param_2,uVar4);
      if (-1 < (int)uVar3) goto LAB_142588a22;
LAB_1425889e0:
      if ((uVar3 & 0xe00000) < 0x600000) goto LAB_142588a34;
    }
    else {
      if ((int)uVar3 < 0) goto LAB_1425889e0;
LAB_142588a22:
      if (-1 < *(char *)(param_2 + (ulonglong)uVar4)) goto LAB_142588a34;
    }
    uVar7 = uVar7 - 1;
  } while (uVar6 < uVar7);
  uVar7 = uVar6 & 0xffffffff;
LAB_142588a34:
  bVar2 = *(byte *)(param_2 + uVar8);
LAB_142588a39:
  *(byte *)(param_2 + uVar8) = (byte)(uVar7 >> 5) | bVar2;
  if ((int)uVar5 <= (int)uVar7) {
    if ((int)uVar7 <= (int)uVar5) {
      uVar7 = uVar6;
    }
    do {
      uVar5 = *(uint *)(lVar9 + uVar6 * 4);
      uVar3 = uVar5 >> 0x18 & 0x7f;
      if (*(char *)(param_2 + (ulonglong)uVar3) == -1) {
        FUN_142588930(param_1,param_2,uVar3);
      }
      if (((int)uVar5 < 0) &&
         (pbVar1 = (byte *)(param_2 + (ulonglong)uVar3), *pbVar1 = *pbVar1 | 0x40,
         (uVar5 & 0xc00000) == 0)) {
        *(byte *)(param_2 + uVar8) = *(byte *)(param_2 + uVar8) | 0x40;
      }
      uVar6 = uVar6 + 1;
    } while ((uVar7 & 0xffffffff) + 1 != uVar6);
  }
  return;
}



// FUNCTION 142588ac0 FUN_142588ac0 body=575 status=ok
// SIG undefined FUN_142588ac0(void)

void FUN_142588ac0(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,
                  undefined8 param_6)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_108 [32];
  uint local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong local_d0;
  uint local_c8 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar4 = *(longlong *)(param_1 + 8);
  bVar1 = *(byte *)(param_2 + param_3);
  local_d8 = *(longlong *)(param_1 + 0x18);
  uVar8 = (uint)bVar1 * 4 & 0xe0;
  local_d0 = param_1;
  if (uVar8 == 0) {
    if ('?' < (char)bVar1) {
      local_c8[0] = 0xffffffff;
      uVar8 = 1;
      goto LAB_142588b2b;
    }
    uVar6 = (bVar1 & 7) * 0x20 + 0x20;
    uVar8 = 0;
  }
  else {
LAB_142588b2b:
    uVar6 = (uint)(byte)((bVar1 & 7) + 1) << 5;
    if (uVar6 <= uVar8) goto LAB_142588d01;
  }
  uVar11 = (ulonglong)uVar8;
  uVar8 = 0xffffffff;
  do {
    uVar3 = *(uint *)((longlong)param_3 * 0x400 + lVar4 + uVar11 * 4);
    uVar10 = (uint)uVar11;
    if ((int)uVar3 < 0) {
      uVar7 = 0xffffffff;
      switch(uVar3 >> 0x14 & 0xf) {
      case 0:
        uVar7 = uVar3 & 0xffff;
        break;
      case 1:
        uVar7 = (uVar3 & 0xfffff) + 0x10000;
        break;
      case 4:
        uVar7 = (uint)*(ushort *)(local_d8 + (longlong)(int)((uVar3 & 0xffff) + param_4) * 2);
        if (0xfffd < uVar7) {
          uVar7 = 0xffffffff;
        }
        break;
      case 5:
        uVar2 = *(ushort *)(local_d8 + (longlong)(int)((uVar3 & 0xffff) + param_4) * 2);
        uVar7 = (uint)uVar2;
        if (0xd7ff < uVar2) {
          iVar9 = (uVar3 & 0xffff) + param_4 + 1;
          if (uVar2 < 0xdc00) {
            uVar7 = (uint)*(ushort *)(local_d8 + (longlong)iVar9 * 2) + (uVar7 & 0x3ff) * 0x400 +
                    0x2400;
          }
          else {
            bVar12 = uVar7 == 0xe000;
            uVar7 = 0xffffffff;
            if (bVar12) {
              uVar7 = (uint)*(ushort *)(local_d8 + (longlong)iVar9 * 2);
            }
          }
        }
      }
      local_c8[uVar10 & 0x1f] = uVar7;
      uVar8 = uVar8 & uVar7;
    }
    else {
      if (-1 < *(char *)(param_2 + (ulonglong)(uVar3 >> 0x18))) {
        local_e8 = param_5 << 8 | uVar10;
        local_e0 = param_6;
        cVar5 = FUN_142588ac0(local_d0,param_2,(ulonglong)(uVar3 >> 0x18),
                              (uVar3 & 0xffffff) + param_4);
        if (cVar5 == '\0') break;
      }
      local_c8[uVar10 & 0x1f] = 0xffffffff;
    }
    uVar11 = uVar11 + 1;
    if (((uVar11 & 0x1f) == 0) && (-1 < (int)uVar8)) {
      cVar5 = FUN_142588830(param_6,uVar10 - 0x1f | param_5 << 8,local_c8);
      uVar8 = 0xffffffff;
      if (cVar5 == '\0') break;
    }
  } while (uVar11 < uVar6);
LAB_142588d01:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 142588d30 FUN_142588d30 body=2083 status=ok
// SIG undefined FUN_142588d30(void)

void FUN_142588d30(longlong param_1,longlong param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  ushort uVar12;
  int iVar13;
  byte *pbVar14;
  undefined *puVar15;
  ushort uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  char cVar20;
  uint uVar21;
  byte *pbVar22;
  byte bVar23;
  char cVar24;
  byte *pbVar25;
  byte bVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  byte *pbVar31;
  byte bVar32;
  ulonglong uVar33;
  bool bVar34;
  undefined1 auStack_108 [32];
  undefined *local_e8;
  byte **local_e0;
  byte *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  int *local_b8;
  byte local_a9;
  longlong local_a8;
  int *local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_84;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined *local_58;
  byte *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = *(longlong *)(param_2 + 8);
  pbVar22 = *(byte **)(param_2 + 0x10);
  local_70 = *(longlong *)(param_1 + 8);
  local_50 = *(byte **)(param_1 + 0x20);
  pbVar14 = *(byte **)(param_2 + 0x18);
  uVar33 = (ulonglong)*(byte *)(local_a8 + 0x40);
  if ((char)*(byte *)(local_a8 + 0x40) < '\x01') {
    bVar26 = 0;
    uVar21 = 0;
    uVar33 = 0;
  }
  else {
    bVar26 = *(byte *)(local_a8 + 0x4c);
    uVar21 = *(uint *)(local_a8 + 0x48);
  }
  lVar28 = *(longlong *)(local_70 + 0x30);
  uVar18 = ((int)uVar33 - (int)(char)bVar26) + ((int)pbVar14 - (int)pbVar22);
  if ((0 < (int)uVar18) && (bVar23 = pbVar14[-1], (char)bVar23 < '\0')) {
    if ((uVar18 < 2) || (0xbf < bVar23)) {
      if ((byte)(bVar23 + 0x3e) < 0x2e) {
        pbVar14 = pbVar14 + -1;
      }
    }
    else if (((pbVar14[-2] & 0xf0) == 0xe0) &&
            (((byte)(&DAT_14bd49f86)[pbVar14[-2] & 0xf] >> (bVar23 >> 5) & 1) != 0)) {
      pbVar14 = pbVar14 + -2;
    }
  }
  uVar9 = *(int *)(param_1 + 0x28) - (int)local_50;
  local_60 = *(longlong *)(lVar28 + 0x58);
  local_78 = *(longlong *)
              (lVar28 + 0xe8 + (ulonglong)((*(byte *)(local_70 + 0x38) & 0x10) >> 4) * 8);
  uVar18 = *(uint *)(lVar28 + 0x104);
  uVar16 = (*(char *)(local_70 + 0x3f) == '\0' | 2) << 10;
  local_a9 = *(byte *)(lVar28 + 0xfd);
  local_a0 = param_3;
  local_98 = param_1;
  local_90 = param_2;
  local_80 = lVar28;
  if (uVar21 == 0) goto LAB_142588eaa;
  if ((int)uVar9 < 1) goto LAB_142588eaa;
  *(undefined4 *)(local_a8 + 0x48) = 0;
  *(undefined1 *)(local_a8 + 0x40) = 0;
  uVar17 = uVar33;
LAB_142589049:
  bVar23 = (byte)uVar17;
  local_84 = (undefined4)uVar33;
  cVar20 = (char)uVar33;
  pbVar25 = pbVar22;
  uVar19 = uVar17;
  if ((char)bVar23 < (char)bVar26) {
    uVar33 = uVar17 - uVar33;
    do {
      bVar23 = (byte)uVar19;
      local_68 = uVar17;
      if (*(byte **)(local_90 + 0x18) <= pbVar25) {
        pbVar25 = pbVar25 + -uVar33;
        if ((char)bVar23 <= cVar20) goto LAB_142589354;
        uVar29 = (ulonglong)cVar20;
        if ((uVar33 < 0x20) || (local_a8 + (uVar17 - (longlong)pbVar22) + 0x41 < 0x20))
        goto LAB_142589340;
        uVar27 = uVar33 & 0xffffffffffffffe0;
        pbVar25 = pbVar25 + uVar27;
        uVar30 = 0;
        do {
          pbVar14 = pbVar22 + uVar30 + (uVar29 - uVar17);
          uVar10 = *(undefined4 *)(pbVar14 + 4);
          uVar4 = *(undefined4 *)(pbVar14 + 8);
          uVar5 = *(undefined4 *)(pbVar14 + 0xc);
          uVar6 = *(undefined8 *)(pbVar22 + uVar30 + (uVar29 - uVar17) + 0x10);
          uVar7 = *(undefined8 *)(pbVar22 + uVar30 + (uVar29 - uVar17) + 0x10 + 8);
          puVar2 = (undefined4 *)(uVar29 + local_a8 + 0x41 + uVar30);
          *puVar2 = *(undefined4 *)pbVar14;
          puVar2[1] = uVar10;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
          puVar1 = (undefined8 *)(uVar29 + local_a8 + 0x51 + uVar30);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          uVar30 = uVar30 + 0x20;
        } while (uVar27 != uVar30);
        uVar29 = uVar27 + uVar29;
        if (uVar33 != uVar27) {
LAB_142589340:
          do {
            bVar3 = *pbVar25;
            pbVar25 = pbVar25 + 1;
            *(byte *)(local_a8 + 0x41 + uVar29) = bVar3;
            uVar29 = uVar29 + 1;
          } while (uVar29 < uVar19);
        }
LAB_142589354:
        *(uint *)(local_a8 + 0x48) = uVar21;
        *(byte *)(local_a8 + 0x40) = bVar23;
        *(int *)(local_a8 + 0x4c) = (int)(char)bVar26;
        *(byte **)(local_90 + 0x10) = pbVar25;
        *(byte **)(local_98 + 0x20) = local_50;
        goto LAB_142589429;
      }
      bVar3 = *pbVar25;
      if (((char)bVar26 < '\x03') || (1 < bVar23)) {
        param_1 = local_98;
        if (-0x41 < (char)bVar3) goto joined_r0x000142589155;
      }
      else {
        if (bVar26 == 3) {
          bVar32 = '\x01' << (bVar3 >> 5);
          uVar29 = (ulonglong)(uVar21 & 0xf);
          puVar15 = &DAT_14bd49f86;
        }
        else {
          bVar32 = (byte)(1 << ((byte)uVar21 & 7));
          uVar29 = (ulonglong)(bVar3 >> 4);
          puVar15 = &DAT_14bd49f97;
        }
        param_1 = local_98;
        if ((bVar32 & puVar15[uVar29]) == 0) goto joined_r0x000142589155;
      }
      pbVar25 = pbVar25 + 1;
      uVar21 = uVar21 * 0x40 + (uint)bVar3;
      uVar33 = uVar33 + 1;
      uVar19 = uVar19 + 1;
    } while ((char)uVar19 < (char)bVar26);
  }
  else {
joined_r0x000142589155:
    if (bVar23 != bVar26) {
      cVar24 = (char)uVar19;
      lVar11 = (longlong)cVar24;
      lVar28 = (longlong)cVar20;
      pbVar22 = pbVar25 + (lVar28 - lVar11);
      if (cVar24 <= cVar20) goto LAB_142589554;
      uVar33 = lVar11 - lVar28;
      if ((uVar33 < 0x10) || (local_a8 + (lVar11 - (longlong)pbVar25) + 0x41U < 8))
      goto LAB_142589540;
      uVar17 = uVar33 & 0xfffffffffffffff8;
      pbVar14 = pbVar22 + uVar17;
      uVar19 = 0;
      do {
        *(undefined8 *)(lVar28 + local_a8 + 0x41 + uVar19) = *(undefined8 *)(pbVar22 + uVar19);
        uVar19 = uVar19 + 8;
      } while (uVar17 != uVar19);
      pbVar22 = pbVar14;
      lVar28 = uVar17 + lVar28;
      if (uVar33 != uVar17) {
LAB_142589540:
        do {
          pbVar14 = pbVar22 + 1;
          *(byte *)(local_a8 + 0x41 + lVar28) = *pbVar22;
          lVar28 = lVar28 + 1;
          pbVar22 = pbVar14;
        } while (lVar28 < lVar11);
      }
LAB_142589554:
      *(char *)(local_a8 + 0x40) = cVar24;
      *(byte **)(local_90 + 0x10) = pbVar22;
      *(byte **)(param_1 + 0x20) = local_50;
      *local_a0 = 0xc;
LAB_142589429:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
    }
  }
  pbVar22 = pbVar25;
  uVar21 = uVar21 - *(int *)(&DAT_1499fa9f0 + (longlong)(char)bVar26 * 4);
  lVar28 = local_80;
  if (((char)bVar26 < '\x04') || (uVar12 = 0, param_1 = local_98, (local_a9 & 1) != 0)) {
    uVar12 = *(ushort *)
              (local_78 +
              ((ulonglong)(uVar21 & 0xf) +
              (ulonglong)
              *(ushort *)
               (local_60 +
               ((ulonglong)(uVar21 >> 4 & 0x3f) +
               (ulonglong)*(ushort *)(local_60 + (longlong)((int)uVar21 >> 10) * 2)) * 2)) * 2);
    param_1 = local_98;
  }
LAB_1425891c1:
  lVar11 = local_70;
  piVar8 = local_a0;
  if (uVar12 < uVar16) {
    local_58 = &DAT_1499faa04;
    local_c0 = *(undefined1 *)(param_1 + 2);
    local_d8 = local_50 + uVar9;
    local_b8 = local_a0;
    local_e0 = &local_50;
    local_e8 = &DAT_1499faa04;
    local_c8 = 0xffffffff;
    local_d0 = 0;
    uVar10 = FUN_142586ae0(local_70,*(undefined8 *)(local_70 + 0x30),uVar21,&local_58);
    if (*piVar8 < 1) {
      if (*(int *)(lVar11 + 0xd0) < 0) {
        uVar9 = *(int *)(param_1 + 0x28) - (int)local_50;
        lVar28 = local_80;
        goto LAB_142588eaa;
      }
      *local_a0 = -0x7f;
    }
    else {
      *(undefined4 *)(lVar11 + 0x54) = uVar10;
    }
  }
  else {
    *local_50 = (byte)uVar12;
    uVar9 = uVar9 - 1;
    local_50 = local_50 + 1;
LAB_142588eaa:
    pbVar25 = pbVar22;
    if (pbVar22 < pbVar14) {
      do {
        if ((int)uVar9 < 1) {
          *local_a0 = 0xf;
          pbVar22 = pbVar25;
          goto LAB_142589414;
        }
        pbVar22 = pbVar25 + 1;
        bVar23 = *pbVar25;
        uVar21 = (uint)bVar23;
        if ((char)bVar23 < '\0') {
          if (bVar23 < 0xe0) {
            if (0xc1 < bVar23) {
              uVar17 = (ulonglong)*pbVar22 ^ 0x80;
              if (0x3f < (byte)uVar17) goto LAB_142589010;
              uVar21 = bVar23 & 0x1f;
              pbVar22 = pbVar25 + 2;
              uVar12 = *(ushort *)
                        (local_78 +
                        (*(ushort *)(lVar28 + 0x68 + (ulonglong)uVar21 * 2) + uVar17) * 2);
              if (uVar12 < uVar16) goto LAB_142588fd5;
LAB_142588ec0:
              *local_50 = (byte)uVar12;
              goto LAB_142588ed9;
            }
            bVar26 = 0;
          }
          else {
            if (bVar23 == 0xe0) {
              uVar33 = (ulonglong)*pbVar22 ^ 0x80;
              if ((((byte)uVar33 & 0xe0) == 0x20) &&
                 (uVar17 = (ulonglong)pbVar25[2] ^ 0x80, (byte)uVar17 < 0x40)) {
                pbVar22 = pbVar25 + 3;
                uVar12 = *(ushort *)
                          (local_78 + (*(ushort *)(lVar28 + 0x68 + uVar33 * 2) + uVar17) * 2);
                if (uVar16 <= uVar12) goto LAB_142588ec0;
                uVar21 = (uint)uVar33;
LAB_142588fd5:
                uVar21 = uVar21 << 6 | (uint)uVar17;
                goto LAB_1425891c1;
              }
LAB_142589010:
              bVar34 = 0xdf < bVar23;
              bVar26 = 2;
            }
            else {
              bVar26 = 0;
              if (0x32 < (byte)(bVar23 + 0x3e)) goto LAB_142589047;
              bVar26 = 0xef < bVar23 | 2;
              bVar34 = true;
            }
            bVar26 = bVar34 + bVar26;
          }
LAB_142589047:
          uVar17 = 1;
          uVar33 = 0;
          goto LAB_142589049;
        }
        if ((uVar18 >> (bVar23 >> 2 & 0x1f) & 1) == 0) goto LAB_142588ff1;
        *local_50 = bVar23;
LAB_142588ed9:
        local_50 = local_50 + 1;
        uVar9 = uVar9 - 1;
        pbVar25 = pbVar22;
        if (pbVar14 <= pbVar22) break;
      } while( true );
    }
  }
  if (((*local_a0 < 1) && (*(int *)(local_70 + 0xd0) < 0)) &&
     (pbVar14 = *(byte **)(local_90 + 0x18), pbVar22 < pbVar14)) {
    bVar26 = *pbVar22;
    uVar21 = (uint)bVar26;
    *(byte *)(local_a8 + 0x41) = bVar26;
    iVar13 = 1;
    if (((char)bVar26 < '\0') && (iVar13 = 0, (byte)(bVar26 + 0x3e) < 0x33)) {
      iVar13 = ((uint)(0xdf < bVar26) - (uint)(bVar26 < 0xf0)) + 3;
    }
    pbVar25 = pbVar22 + 1;
    cVar20 = '\x01';
    pbVar31 = pbVar25;
    if (pbVar25 < pbVar14) {
      if (pbVar14 + -2 == pbVar22) {
        cVar20 = '\x01';
      }
      else {
        uVar33 = 0;
        do {
          bVar26 = pbVar25[uVar33];
          *(byte *)(local_a8 + 0x41 + (longlong)(char)((char)uVar33 + '\x01')) = bVar26;
          bVar23 = pbVar22[uVar33 + 2];
          uVar33 = uVar33 + 2;
          *(byte *)(local_a8 + 0x41 + (longlong)(char)uVar33) = bVar23;
          uVar21 = uVar21 * 0x1000 + (uint)bVar23 + (uint)bVar26 * 0x40;
        } while (((ulonglong)(pbVar14 + ~(ulonglong)pbVar22) & 0xfffffffffffffffe) != uVar33);
        pbVar25 = pbVar25 + uVar33;
        cVar20 = (char)uVar33 + '\x01';
      }
      pbVar31 = pbVar14;
      if (((ulonglong)(pbVar14 + ~(ulonglong)pbVar22) & 1) != 0) {
        bVar26 = *pbVar25;
        lVar28 = (longlong)cVar20;
        cVar20 = cVar20 + '\x01';
        *(byte *)(local_a8 + 0x41 + lVar28) = bVar26;
        uVar21 = uVar21 * 0x40 + (uint)bVar26;
      }
    }
    *(uint *)(local_a8 + 0x48) = uVar21;
    *(char *)(local_a8 + 0x40) = cVar20;
    *(int *)(local_a8 + 0x4c) = iVar13;
    pbVar22 = pbVar31;
  }
LAB_142589414:
  *(byte **)(local_90 + 0x10) = pbVar22;
  *(byte **)(param_1 + 0x20) = local_50;
  goto LAB_142589429;
LAB_142588ff1:
  uVar12 = *(ushort *)(local_78 + ((ulonglong)bVar23 + (ulonglong)*(ushort *)(lVar28 + 0x68)) * 2);
  goto LAB_1425891c1;
}



// FUNCTION 142589580 FUN_142589580 body=2273 status=ok
// SIG undefined FUN_142589580(void)

void FUN_142589580(longlong param_1,longlong param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  byte *pbVar15;
  byte bVar16;
  char cVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  char cVar24;
  uint uVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte bVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  byte *pbVar34;
  byte bVar35;
  undefined *puVar36;
  undefined1 auStack_108 [32];
  undefined *local_e8;
  byte **local_e0;
  byte *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  int *local_b8;
  byte local_a1;
  longlong local_a0;
  int *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_74;
  ushort *local_70;
  longlong local_68;
  longlong local_60;
  undefined *local_58;
  byte *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a0 = *(longlong *)(param_2 + 8);
  pbVar26 = *(byte **)(param_2 + 0x10);
  local_90 = *(longlong *)(param_1 + 8);
  local_50 = *(byte **)(param_1 + 0x20);
  pbVar15 = *(byte **)(param_2 + 0x18);
  uVar29 = (ulonglong)*(byte *)(local_a0 + 0x40);
  if ((char)*(byte *)(local_a0 + 0x40) < '\x01') {
    bVar28 = 0;
    uVar23 = 0;
    uVar29 = 0;
  }
  else {
    bVar28 = *(byte *)(local_a0 + 0x4c);
    uVar23 = (ulonglong)*(uint *)(local_a0 + 0x48);
  }
  lVar31 = *(longlong *)(local_90 + 0x30);
  uVar21 = ((int)uVar29 - (int)(char)bVar28) + ((int)pbVar15 - (int)pbVar26);
  if ((0 < (int)uVar21) && (bVar16 = pbVar15[-1], (char)bVar16 < '\0')) {
    if ((uVar21 < 2) || (0xbf < bVar16)) {
      if ((byte)(bVar16 + 0x3e) < 0x2e) {
        pbVar15 = pbVar15 + -1;
      }
    }
    else if (((pbVar15[-2] & 0xf0) == 0xe0) &&
            (((byte)(&DAT_14bd49f86)[pbVar15[-2] & 0xf] >> (bVar16 >> 5) & 1) != 0)) {
      pbVar15 = pbVar15 + -2;
    }
  }
  uVar10 = *(int *)(param_1 + 0x28) - (int)local_50;
  local_60 = *(longlong *)(lVar31 + 0x58);
  local_70 = *(ushort **)(lVar31 + 0x60);
  lVar12 = *(longlong *)(lVar31 + 0xe8 + (ulonglong)((*(byte *)(local_90 + 0x38) & 0x10) >> 4) * 8);
  uVar21 = *(uint *)(lVar31 + 0x104);
  local_a1 = *(byte *)(lVar31 + 0xfd);
  pbVar34 = pbVar26;
  lVar31 = local_90;
  local_98 = param_3;
  local_88 = param_1;
  local_80 = param_2;
  if ((int)uVar23 == 0) goto joined_r0x0001425896e4;
  if ((int)uVar10 < 1) goto joined_r0x0001425896e4;
  *(undefined4 *)(local_a0 + 0x48) = 0;
  *(undefined1 *)(local_a0 + 0x40) = 0;
  uVar22 = uVar29;
LAB_14258987f:
  uVar25 = (uint)uVar23;
  bVar16 = (byte)uVar29;
  local_74 = (undefined4)uVar22;
  cVar24 = (char)uVar22;
  uVar20 = uVar29;
  pbVar34 = pbVar26;
  local_68 = lVar12;
  if ((char)bVar16 < (char)bVar28) {
    uVar22 = uVar29 - uVar22;
    do {
      uVar25 = (uint)uVar23;
      bVar16 = (byte)uVar20;
      if (*(byte **)(local_80 + 0x18) <= pbVar34) {
        pbVar34 = pbVar34 + -uVar22;
        if ((char)bVar16 <= cVar24) goto LAB_142589cd5;
        uVar32 = (ulonglong)cVar24;
        uVar23 = uVar32;
        if ((uVar22 < 0x20) || (local_a0 + (uVar29 - (longlong)pbVar26) + 0x41 < 0x20))
        goto LAB_142589cc0;
        uVar30 = uVar22 & 0xffffffffffffffe0;
        uVar23 = uVar30 + uVar32;
        pbVar34 = pbVar34 + uVar30;
        uVar33 = 0;
        do {
          pbVar15 = pbVar26 + uVar33 + (uVar32 - uVar29);
          uVar11 = *(undefined4 *)(pbVar15 + 4);
          uVar5 = *(undefined4 *)(pbVar15 + 8);
          uVar6 = *(undefined4 *)(pbVar15 + 0xc);
          uVar7 = *(undefined8 *)(pbVar26 + uVar33 + (uVar32 - uVar29) + 0x10);
          uVar8 = *(undefined8 *)(pbVar26 + uVar33 + (uVar32 - uVar29) + 0x10 + 8);
          puVar2 = (undefined4 *)(uVar32 + local_a0 + 0x41 + uVar33);
          *puVar2 = *(undefined4 *)pbVar15;
          puVar2[1] = uVar11;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          puVar1 = (undefined8 *)(uVar32 + local_a0 + 0x51 + uVar33);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          uVar33 = uVar33 + 0x20;
        } while (uVar30 != uVar33);
        if (uVar22 != uVar30) {
LAB_142589cc0:
          do {
            bVar3 = *pbVar34;
            pbVar34 = pbVar34 + 1;
            *(byte *)(local_a0 + 0x41 + uVar23) = bVar3;
            uVar23 = uVar23 + 1;
          } while (uVar23 < uVar20);
        }
LAB_142589cd5:
        *(uint *)(local_a0 + 0x48) = uVar25;
        *(byte *)(local_a0 + 0x40) = bVar16;
        *(int *)(local_a0 + 0x4c) = (int)(char)bVar28;
        *(byte **)(local_80 + 0x10) = pbVar34;
        *(byte **)(local_88 + 0x20) = local_50;
        goto LAB_142589dbd;
      }
      bVar3 = *pbVar34;
      if (((char)bVar28 < '\x03') || (1 < bVar16)) {
        param_1 = local_88;
        if (-0x41 < (char)bVar3) goto joined_r0x000142589957;
      }
      else {
        if (bVar28 == 3) {
          bVar35 = '\x01' << (bVar3 >> 5);
          uVar23 = (ulonglong)(uVar25 & 0xf);
          puVar36 = &DAT_14bd49f86;
        }
        else {
          bVar35 = (byte)(1 << ((byte)uVar23 & 7));
          uVar23 = (ulonglong)(bVar3 >> 4);
          puVar36 = &DAT_14bd49f97;
        }
        param_1 = local_88;
        if ((bVar35 & puVar36[uVar23]) == 0) goto joined_r0x000142589957;
      }
      pbVar34 = pbVar34 + 1;
      uVar25 = uVar25 * 0x40 + (uint)bVar3;
      uVar23 = (ulonglong)uVar25;
      uVar22 = uVar22 + 1;
      uVar20 = uVar20 + 1;
    } while ((char)uVar20 < (char)bVar28);
  }
  else {
joined_r0x000142589957:
    if (bVar16 != bVar28) {
      cVar17 = (char)uVar20;
      lVar12 = (longlong)cVar17;
      lVar31 = (longlong)cVar24;
      pbVar26 = pbVar34 + (lVar31 - lVar12);
      if (cVar17 <= cVar24) goto LAB_142589e54;
      uVar29 = lVar12 - lVar31;
      if ((uVar29 < 0x10) || (local_a0 + (lVar12 - (longlong)pbVar34) + 0x41U < 8))
      goto LAB_142589e40;
      uVar23 = uVar29 & 0xfffffffffffffff8;
      pbVar15 = pbVar26 + uVar23;
      uVar22 = 0;
      do {
        *(undefined8 *)(lVar31 + local_a0 + 0x41 + uVar22) = *(undefined8 *)(pbVar26 + uVar22);
        uVar22 = uVar22 + 8;
      } while (uVar23 != uVar22);
      pbVar26 = pbVar15;
      lVar31 = uVar23 + lVar31;
      if (uVar29 != uVar23) {
LAB_142589e40:
        do {
          pbVar15 = pbVar26 + 1;
          *(byte *)(local_a0 + 0x41 + lVar31) = *pbVar26;
          lVar31 = lVar31 + 1;
          pbVar26 = pbVar15;
        } while (lVar31 < lVar12);
      }
LAB_142589e54:
      *(char *)(local_a0 + 0x40) = cVar17;
      *(byte **)(local_80 + 0x10) = pbVar26;
      *(byte **)(param_1 + 0x20) = local_50;
      *local_98 = 0xc;
      goto LAB_142589dbd;
    }
  }
  uVar25 = uVar25 - *(int *)(&DAT_1499fa9f0 + (longlong)(char)bVar28 * 4);
  uVar23 = (ulonglong)uVar25;
  if (((char)bVar28 < '\x04') || (uVar13 = 0, (local_a1 & 1) != 0)) {
    uVar13 = *(uint *)(local_60 +
                      ((ulonglong)(uVar25 >> 4 & 0x3f) +
                      (ulonglong)*(ushort *)(local_60 + (longlong)((int)uVar25 >> 10) * 2)) * 4);
  }
  uVar18 = (uint)*(ushort *)(lVar12 + (ulonglong)(uVar25 & 0xf | (uVar13 & 0xffff) << 4) * 2);
  lVar31 = local_90;
  param_1 = local_88;
  if ((uVar13 >> ((byte)((byte)uVar25 | 0x10) & 0x1f) & 1) != 0) goto LAB_142589a45;
  if (((*(char *)(local_90 + 0x3f) == '\0') && (0x18ff < uVar25 - 0xe000)) &&
     (0x1ffff < uVar25 - 0xf0000)) goto LAB_142589ab7;
LAB_142589a40:
  if ((short)uVar18 == 0) goto LAB_142589ab7;
LAB_142589a45:
  bVar28 = (byte)uVar18;
  if (uVar18 < 0x100) {
    *local_50 = bVar28;
    iVar19 = -1;
    local_50 = local_50 + 1;
LAB_142589aa7:
    uVar10 = uVar10 + iVar19;
joined_r0x0001425896e4:
    pbVar26 = pbVar34;
    if (pbVar34 < pbVar15) {
      do {
        lVar14 = 0;
        while( true ) {
          if ((int)uVar10 < 1) {
            *local_98 = 0xf;
            pbVar34 = pbVar34 + lVar14;
            goto LAB_142589da5;
          }
          bVar16 = pbVar34[lVar14];
          uVar23 = (ulonglong)bVar16;
          if ((char)bVar16 < '\0') break;
          if ((uVar21 >> (bVar16 >> 2 & 0x1f) & 1) == 0) {
            uVar18 = (uint)*(ushort *)(lVar12 + (*local_70 + uVar23) * 2);
            pbVar34 = pbVar34 + lVar14 + 1;
            goto LAB_142589a40;
          }
          pbVar27 = local_50 + 1;
          *local_50 = bVar16;
          uVar10 = uVar10 - 1;
          lVar14 = lVar14 + 1;
          pbVar26 = pbVar15;
          local_50 = pbVar27;
          if ((longlong)pbVar15 - (longlong)pbVar34 == lVar14) goto LAB_142589bd0;
        }
        pbVar26 = pbVar34 + lVar14 + 1;
        if (0xdf < bVar16) {
          if (bVar16 < 0xee) {
            if ((((byte)(&DAT_14bd49f86)[bVar16 & 0xf] >> (*pbVar26 >> 5) & 1) != 0) &&
               (uVar29 = (ulonglong)pbVar34[lVar14 + 2] ^ 0x80, (byte)uVar29 < 0x40)) {
              uVar23 = (ulonglong)(*pbVar26 & 0x3f) | (ulonglong)(bVar16 & 0xf) << 6;
              pbVar34 = pbVar34 + lVar14 + 3;
              uVar4 = *(ushort *)(lVar12 + (local_70[uVar23] + uVar29) * 2);
              uVar18 = (uint)uVar4;
              if (uVar4 == 0) {
                uVar23 = (ulonglong)((int)uVar23 << 6 | (uint)uVar29);
                goto LAB_142589ab7;
              }
              goto LAB_142589a45;
            }
          }
          else {
            bVar28 = 0;
            if (0x32 < (byte)(bVar16 + 0x3e)) goto LAB_14258987d;
          }
LAB_142589867:
          bVar28 = ((0xdf < bVar16) - (bVar16 < 0xf0)) + 3;
LAB_14258987d:
          uVar29 = 1;
          uVar22 = 0;
          goto LAB_14258987f;
        }
        bVar28 = 0;
        if (bVar16 < 0xc2) goto LAB_14258987d;
        uVar29 = (ulonglong)*pbVar26 ^ 0x80;
        if (0x3f < (byte)uVar29) goto LAB_142589867;
        pbVar34 = pbVar34 + lVar14 + 2;
        uVar4 = *(ushort *)(lVar12 + (local_70[bVar16 & 0x1f] + uVar29) * 2);
        uVar18 = (uint)uVar4;
        if (uVar4 != 0) goto LAB_142589a45;
        uVar23 = (ulonglong)((bVar16 & 0x1f) << 6 | (uint)uVar29);
LAB_142589ab7:
        piVar9 = local_98;
        local_58 = &DAT_1499faa06;
        local_c0 = *(undefined1 *)(param_1 + 2);
        local_d8 = local_50 + uVar10;
        local_b8 = local_98;
        local_e0 = &local_50;
        local_e8 = &DAT_1499faa06;
        local_c8 = 0xffffffff;
        local_d0 = 0;
        uVar11 = FUN_142586ae0(lVar31,*(undefined8 *)(lVar31 + 0x30),uVar23,&local_58);
        pbVar26 = pbVar34;
        if (0 < *piVar9) {
          *(undefined4 *)(lVar31 + 0x54) = uVar11;
          break;
        }
        if (-1 < *(int *)(lVar31 + 0xd0)) {
          *local_98 = -0x7f;
          break;
        }
        uVar10 = *(int *)(param_1 + 0x28) - (int)local_50;
        if (pbVar15 <= pbVar34) break;
      } while( true );
    }
LAB_142589bd0:
    pbVar34 = pbVar26;
    if (((*local_98 < 1) && (*(int *)(lVar31 + 0xd0) < 0)) &&
       (pbVar15 = *(byte **)(local_80 + 0x18), pbVar26 < pbVar15)) {
      bVar28 = *pbVar26;
      uVar21 = (uint)bVar28;
      *(byte *)(local_a0 + 0x41) = bVar28;
      iVar19 = 1;
      if (((char)bVar28 < '\0') && (iVar19 = 0, (byte)(bVar28 + 0x3e) < 0x33)) {
        iVar19 = ((uint)(0xdf < bVar28) - (uint)(bVar28 < 0xf0)) + 3;
      }
      pbVar34 = pbVar26 + 1;
      cVar24 = '\x01';
      if (pbVar34 < pbVar15) {
        if (pbVar15 + -2 == pbVar26) {
          cVar24 = '\x01';
          pbVar27 = pbVar34;
        }
        else {
          uVar29 = 0;
          do {
            bVar28 = pbVar34[uVar29];
            *(byte *)(local_a0 + 0x41 + (longlong)(char)((char)uVar29 + '\x01')) = bVar28;
            bVar16 = pbVar26[uVar29 + 2];
            uVar29 = uVar29 + 2;
            *(byte *)(local_a0 + 0x41 + (longlong)(char)uVar29) = bVar16;
            uVar21 = uVar21 * 0x1000 + (uint)bVar16 + (uint)bVar28 * 0x40;
          } while (((ulonglong)(pbVar15 + ~(ulonglong)pbVar26) & 0xfffffffffffffffe) != uVar29);
          pbVar27 = pbVar34 + uVar29;
          cVar24 = (char)uVar29 + '\x01';
        }
        pbVar34 = pbVar15;
        if (((ulonglong)(pbVar15 + ~(ulonglong)pbVar26) & 1) != 0) {
          bVar28 = *pbVar27;
          lVar31 = (longlong)cVar24;
          cVar24 = cVar24 + '\x01';
          *(byte *)(local_a0 + 0x41 + lVar31) = bVar28;
          uVar21 = uVar21 * 0x40 + (uint)bVar28;
        }
      }
      *(uint *)(local_a0 + 0x48) = uVar21;
      *(char *)(local_a0 + 0x40) = cVar24;
      *(int *)(local_a0 + 0x4c) = iVar19;
    }
    goto LAB_142589da5;
  }
  pbVar26 = local_50 + 1;
  *local_50 = (byte)(uVar18 >> 8);
  if (1 < (int)uVar10) {
    local_50 = local_50 + 2;
    *pbVar26 = bVar28;
    iVar19 = -2;
    goto LAB_142589aa7;
  }
  *(byte *)(lVar31 + 0x68) = bVar28;
  *(undefined1 *)(lVar31 + 0x5b) = 1;
  *local_98 = 0xf;
  local_50 = pbVar26;
LAB_142589da5:
  *(byte **)(local_80 + 0x10) = pbVar34;
  *(byte **)(param_1 + 0x20) = local_50;
LAB_142589dbd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 142589e80 FUN_142589e80 body=204 status=ok
// SIG undefined FUN_142589e80(void)

ulonglong FUN_142589e80(longlong param_1,byte param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  
  lVar3 = (ulonglong)param_2 * 0x400;
  uVar1 = *(uint *)(param_1 + 0x284 + lVar3);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((-1 < (int)uVar1) || ((uVar1 & 0xf00000) == 0x700000)) {
    uVar1 = *(uint *)(param_1 + lVar3 + 0x104);
    if ((-1 < (int)uVar1) || ((uVar1 & 0xf00000) == 0x700000)) {
      lVar4 = 0;
      do {
        uVar1 = *(uint *)(lVar3 + param_1 + lVar4 * 4);
        if ((((int)uVar1 < 0) && ((uVar1 & 0xf00000) != 0x700000)) ||
           ((uVar1 = *(uint *)(lVar3 + param_1 + 4 + lVar4 * 4), (int)uVar1 < 0 &&
            ((uVar1 & 0xf00000) != 0x700000)))) goto LAB_142589f47;
        lVar4 = lVar4 + 2;
      } while (lVar4 != 0x100);
      lVar4 = 0;
      do {
        uVar1 = *(uint *)(param_1 + lVar3 + lVar4 * 4);
        if ((-1 < (int)uVar1) && (cVar2 = FUN_142589e80(param_1,uVar1 >> 0x18), cVar2 != '\0'))
        goto LAB_142589f47;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x100);
      uVar5 = 0;
    }
  }
LAB_142589f47:
  return uVar5 & 0xffffffff;
}



// FUNCTION 142589f60 FUN_142589f60 body=303 status=ok
// SIG undefined FUN_142589f60(void)

void FUN_142589f60(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = icu_64::CollationTailoring::vftable;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 6) = 2;
  FUN_1412ae150(param_1 + 0xd,&DAT_149e02088,0,0,0);
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  if (param_2 == 0) {
    puVar1 = (undefined8 *)thunk_FUN_1424da030(0x358);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = icu_64::CollationSettings::vftable;
      *(undefined4 *)(puVar1 + 3) = 0x2010;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      *(undefined4 *)(puVar1 + 10) = 0xffffffff;
    }
    param_1[4] = puVar1;
  }
  else {
    puVar1 = (undefined8 *)param_1[4];
  }
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142537c90();
  }
  FUN_1424a8e50();
  *(undefined4 *)(param_1 + 0x29) = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0x31) = 0;
  UNLOCK();
  return;
}



// FUNCTION 14258a090 Unwind@14258a090 body=43 status=ok
// SIG undefined Unwind@14258a090(void)

void Unwind_14258a090(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14258a0c0 Unwind@14258a0c0 body=52 status=ok
// SIG undefined Unwind@14258a0c0(void)

void Unwind_14258a0c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 14258a100 FUN_14258a100 body=211 status=ok
// SIG undefined FUN_14258a100(void)

void FUN_14258a100(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = icu_64::CollationTailoring::vftable;
  if (param_1[4] != 0) {
    FUN_142537ca0();
    param_1[4] = 0;
  }
  if (param_1[0x2a] != 0) {
    FUN_1401773f0();
  }
  puVar1 = (undefined8 *)param_1[0x2b];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_142532330(param_1[0x2c]);
  FUN_1424ea9f0(param_1[0x2d]);
  FUN_14257f940(param_1[0x2e]);
  lVar2 = param_1[0x2f];
  if (lVar2 != 0) {
    FUN_1425121d0(lVar2);
    FUN_1401773f0(lVar2);
  }
  FUN_142502220(param_1[0x30]);
  LOCK();
  *(undefined4 *)(param_1 + 0x31) = 0;
  UNLOCK();
  FUN_1414b3f60(param_1 + 0xd);
  FUN_140859a90(param_1 + 5);
  thunk_FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 14258a1e0 Unwind@14258a1e0 body=21 status=ok
// SIG undefined Unwind@14258a1e0(void)

void Unwind_14258a1e0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14258a200 FUN_14258a200 body=172 status=ok
// SIG undefined FUN_14258a200(void)

undefined8 FUN_14258a200(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*param_2 < 1) {
    puVar2 = *(undefined8 **)(param_1 + 0x150);
    if (puVar2 != (undefined8 *)0x0) {
LAB_14258a21f:
      *(undefined8 **)(param_1 + 0x18) = puVar2;
      return 1;
    }
    uVar1 = FUN_1425ce690(param_2);
    if (*param_2 < 1) {
      puVar2 = (undefined8 *)thunk_FUN_1424da030(0x90);
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[6] = uVar1;
        *(undefined4 *)(puVar2 + 7) = 0x12000000;
        puVar2[0x10] = 0;
        *(undefined4 *)(puVar2 + 0x11) = 0;
        *(undefined8 *)((longlong)puVar2 + 0x3c) = 0;
        *(undefined8 *)((longlong)puVar2 + 0x44) = 0;
        *(undefined8 *)((longlong)puVar2 + 0x4c) = 0;
        *(undefined8 *)((longlong)puVar2 + 0x54) = 0;
        *(undefined8 *)((longlong)puVar2 + 0x5c) = 0;
        *(undefined8 *)((longlong)puVar2 + 100) = 0;
        *(undefined8 *)((longlong)puVar2 + 0x6c) = 0;
        *(undefined8 *)((longlong)puVar2 + 0x74) = 0;
        *(undefined8 **)(param_1 + 0x150) = puVar2;
        goto LAB_14258a21f;
      }
      *(undefined8 *)(param_1 + 0x150) = 0;
      *param_2 = 7;
    }
  }
  return 0;
}



// FUNCTION 14258a2b0 FUN_14258a2b0 body=90 status=ok
// SIG undefined FUN_14258a2b0(void)

void FUN_14258a2b0(longlong param_1,longlong param_2,byte *param_3)

{
  *(undefined1 *)(param_1 + 0x148) = 9;
  *(undefined1 *)(param_1 + 0x149) = *(undefined1 *)(param_2 + 1);
  *(byte *)(param_1 + 0x14a) = (*param_3 >> 6) + *param_3 & 0x3f | *(byte *)(param_2 + 2) & 0xc0;
  *(byte *)(param_1 + 0x14b) =
       (param_3[3] >> 4) + param_3[3] * '\x10' + (param_3[1] << 3 | param_3[1] >> 5) + param_3[2];
  return;
}



// FUNCTION 14258a310 FUN_14258a310 body=23 status=ok
// SIG undefined FUN_14258a310(void)

uint FUN_14258a310(longlong param_1)

{
  return (uint)(*(byte *)(param_1 + 0x14a) >> 6) | (uint)*(byte *)(param_1 + 0x149) << 4;
}



// FUNCTION 14258a330 FUN_14258a330 body=83 status=ok
// SIG undefined FUN_14258a330(void)

void FUN_14258a330(undefined8 *param_1)

{
  *param_1 = icu_64::CollationCacheEntry::vftable;
  if (param_1[0x1f] != 0) {
    FUN_142537ca0();
    param_1[0x1f] = 0;
  }
  FUN_1414b3f60(param_1 + 3);
  thunk_FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 14258a390 Unwind@14258a390 body=20 status=ok
// SIG undefined Unwind@14258a390(void)

void Unwind_14258a390(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14258a3b0 FUN_14258a3b0 body=38 status=ok
// SIG undefined FUN_14258a3b0(void)

undefined8 FUN_14258a3b0(undefined8 param_1,int param_2)

{
  FUN_14258a100();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14258a3e0 FUN_14258a3e0 body=38 status=ok
// SIG undefined FUN_14258a3e0(void)

undefined8 FUN_14258a3e0(undefined8 param_1,int param_2)

{
  FUN_142612e70();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 14258a410 FUN_14258a410 body=2448 status=ok
// SIG undefined FUN_14258a410(void)

void FUN_14258a410(longlong param_1,uint *param_2,undefined8 param_3,longlong param_4,int *param_5)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 local_388 [768];
  void *local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  void *local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_5) {
    return;
  }
  uVar13 = (uint)param_3;
  if (param_1 == 0) {
    if (param_2 == (uint *)0x0) goto LAB_14258a4c7;
LAB_14258a4bb:
    bVar15 = -1 < (int)uVar13;
    if (uVar13 < 8) {
LAB_14258a4c7:
      *param_5 = 1;
      return;
    }
  }
  else {
    if ((param_2 == (uint *)0x0) || (uVar13 < 0x18)) goto LAB_14258a4c7;
    if ((*(char *)((longlong)param_2 + 2) != -0x26) ||
       ((*(char *)((longlong)param_2 + 3) != '\'' ||
        (cVar3 = FUN_14258ade0(param_4 + 0x148,param_2,param_3,param_2 + 1), cVar3 == '\0'))))
    goto LAB_14258a51e;
    iVar4 = FUN_14258a310(param_1);
    iVar5 = FUN_14258a310(param_4);
    if (iVar4 != iVar5) {
      *param_5 = 0x1c;
      return;
    }
    uVar12 = *param_2;
    param_2 = (uint *)((longlong)param_2 + (ulonglong)(ushort)uVar12);
    if (-1 < (int)uVar13) {
      uVar13 = uVar13 - (ushort)uVar12;
      goto LAB_14258a4bb;
    }
    bVar15 = false;
  }
  uVar12 = *param_2;
  if (((int)uVar12 < 2) || ((bool)((int)uVar13 < (int)(uVar12 * 4) & bVar15))) goto LAB_14258a51e;
  uVar10 = 0x13;
  if (uVar12 < 0x14) {
    uVar8 = 0;
    if (5 < uVar12) {
      uVar10 = (ulonglong)(uVar12 - 1);
      goto LAB_14258a50f;
    }
  }
  else {
LAB_14258a50f:
    uVar8 = param_2[uVar10];
  }
  if ((bool)(bVar15 & (int)uVar13 < (int)uVar8)) goto LAB_14258a51e;
  if (param_1 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = *(longlong *)(param_1 + 0x18);
  }
  uVar13 = 0xffffffff;
  uVar8 = 0;
  if (uVar12 < 6) {
    bVar15 = false;
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = param_2[5];
    if (uVar12 == 6) {
      bVar15 = false;
    }
    else {
      uVar13 = param_2[6];
      bVar15 = true;
    }
  }
  if ((int)(uVar13 - uVar9) < 4) {
    local_88 = (void *)0x0;
    local_60 = 0;
    local_70 = (void *)0x0;
  }
  else {
    if (local_58 == 0) goto LAB_14258a51e;
    local_70 = (void *)((longlong)param_2 + (longlong)(int)uVar9);
    uVar13 = uVar13 - uVar9 >> 2;
    local_60 = (ulonglong)uVar13;
    lVar14 = 0;
    do {
      if (*(uint *)((longlong)param_2 + lVar14 * 4 + (longlong)(int)uVar9 + local_60 * 4 + -4) <
          0x10000) {
        if ((int)lVar14 == 0) {
          uVar8 = 0;
          local_88 = (void *)0x0;
          goto LAB_14258a5d2;
        }
        uVar8 = -(int)lVar14;
        break;
      }
      lVar14 = lVar14 + -1;
      uVar8 = uVar13;
    } while (-lVar14 != local_60);
    local_60 = (ulonglong)(uVar13 - uVar8);
    local_88 = (void *)((longlong)local_70 + (longlong)(int)(uVar13 - uVar8) * 4);
  }
LAB_14258a5d2:
  uVar9 = 0xffffffff;
  uVar13 = 0xffffffff;
  if (bVar15) {
    uVar13 = param_2[6];
  }
  if (7 < (int)uVar12) {
    uVar9 = param_2[7];
  }
  if ((int)(uVar9 - uVar13) < 0x100) {
    local_80 = 0;
  }
  else {
    if ((int)local_60 == 0) goto LAB_14258a51e;
    local_80 = (longlong)(int)uVar13 + (longlong)param_2;
  }
  if ((local_58 != 0) &&
     (*(int *)(local_58 + 0x38) != (uint)*(byte *)((longlong)param_2 + 7) << 0x18))
  goto LAB_14258a51e;
  uVar13 = 0xffffffff;
  if ((int)uVar12 < 8) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = param_2[7];
    if (uVar12 != 8) {
      uVar13 = param_2[8];
    }
  }
  if ((int)(uVar13 - uVar9) < 8) {
    if (local_58 == 0) goto LAB_14258a51e;
    *(longlong *)(param_4 + 0x18) = local_58;
    local_50 = (undefined8 *)0x0;
  }
  else {
    cVar3 = FUN_14258a200(param_4,param_5);
    if (cVar3 == '\0') {
      return;
    }
    local_50 = *(undefined8 **)(param_4 + 0x150);
    local_50[4] = local_58;
    *(uint *)(local_50 + 7) = (uint)*(byte *)((longlong)param_2 + 7) << 0x18;
    uVar7 = FUN_14257f7c0(1,(longlong)(int)uVar9 + (longlong)param_2,uVar13 - uVar9,0,param_5);
    *(undefined8 *)(param_4 + 0x170) = uVar7;
    *local_50 = uVar7;
    if (0 < *param_5) {
      return;
    }
  }
  uVar13 = 0xffffffff;
  if ((int)uVar12 < 10) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = param_2[9];
    if (uVar12 != 10) {
      uVar13 = param_2[10];
    }
  }
  if (7 < (int)(uVar13 - uVar9)) {
    if (local_50 == (undefined8 *)0x0) goto LAB_14258a51e;
    local_50[2] = (longlong)(int)uVar9 + (longlong)param_2;
    *(uint *)(local_50 + 8) = uVar13 - uVar9 >> 3;
  }
  uVar13 = 0xffffffff;
  if ((int)uVar12 < 0xc) {
    bVar15 = false;
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = param_2[0xb];
    if (uVar12 == 0xc) {
      bVar15 = false;
    }
    else {
      uVar13 = param_2[0xc];
      bVar15 = true;
    }
  }
  if (3 < (int)(uVar13 - uVar9)) {
    if (local_50 == (undefined8 *)0x0) goto LAB_14258a51e;
    local_50[1] = (longlong)(int)uVar9 + (longlong)param_2;
    *(uint *)((longlong)local_50 + 0x3c) = uVar13 - uVar9 >> 2;
  }
  if (((int)uVar12 < 5) || ((int)param_2[4] < 0)) {
    if (local_50 != (undefined8 *)0x0) {
      if (local_58 == 0) goto LAB_14258a51e;
      lVar14 = *(longlong *)(local_58 + 0x28);
      goto LAB_14258a7d1;
    }
  }
  else {
    if ((local_50 == (undefined8 *)0x0) || (local_50[1] == 0)) goto LAB_14258a51e;
    lVar14 = local_50[1] + (ulonglong)param_2[4] * 4;
LAB_14258a7d1:
    local_50[5] = lVar14;
  }
  uVar9 = 0xffffffff;
  uVar13 = 0xffffffff;
  if (bVar15) {
    uVar13 = param_2[0xc];
  }
  if (0xd < (int)uVar12) {
    uVar9 = param_2[0xd];
  }
  uVar9 = uVar9 - uVar13;
  if (3 < (int)uVar9) {
    if ((local_50 == (undefined8 *)0x0) || (uVar9 < 0x14)) goto LAB_14258a51e;
    lVar14 = (longlong)param_2 + (longlong)(int)uVar13;
    local_50[0x10] = lVar14;
    *(uint *)(local_50 + 0x11) = uVar9 >> 2;
    if ((*(int *)((longlong)param_2 + (longlong)(int)uVar13 + 0xc) != 0x5000500) ||
       (*(uint *)(lVar14 + 0x10) < 0x45000000)) goto LAB_14258a51e;
  }
  uVar13 = 0xffffffff;
  if ((int)uVar12 < 0xe) {
    bVar15 = false;
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = param_2[0xd];
    if (uVar12 == 0xe) {
      bVar15 = false;
    }
    else {
      uVar13 = param_2[0xe];
      bVar15 = true;
    }
  }
  if (1 < (int)(uVar13 - uVar9)) {
    if (local_50 == (undefined8 *)0x0) goto LAB_14258a51e;
    local_50[3] = (longlong)(int)uVar9 + (longlong)param_2;
    *(uint *)((longlong)local_50 + 0x44) = uVar13 - uVar9 >> 1;
  }
  uVar9 = 0xffffffff;
  uVar13 = 0xffffffff;
  if (bVar15) {
    uVar13 = param_2[0xe];
  }
  if (0xf < (int)uVar12) {
    uVar9 = param_2[0xf];
  }
  if ((int)(uVar9 - uVar13) < 2) {
    if (local_50 != (undefined8 *)0x0) {
      if (local_58 == 0) goto LAB_14258a51e;
      uVar7 = *(undefined8 *)(local_58 + 0x50);
      goto LAB_14258aa34;
    }
    bVar15 = false;
  }
  else {
    if (local_50 == (undefined8 *)0x0) goto LAB_14258a51e;
    if (local_58 == 0) {
      local_68 = thunk_FUN_1424da030(200);
      if (local_68 == 0) {
        *(undefined8 *)(param_4 + 0x178) = 0;
        *param_5 = 7;
        return;
      }
      FUN_142514810(local_68,&DAT_1499fad70,0x352,0,param_5);
      *(longlong *)(param_4 + 0x178) = local_68;
      if (0 < *param_5) {
        return;
      }
    }
    else {
      lVar14 = FUN_1425125a0(*(undefined8 *)(local_58 + 0x50));
      *(longlong *)(param_4 + 0x178) = lVar14;
      if (lVar14 == 0) goto LAB_14258ad7f;
    }
    cVar3 = FUN_142637cd0(local_388,(longlong)(int)uVar13 + (longlong)param_2,uVar9 - uVar13 >> 1);
    if (cVar3 == '\0') goto LAB_14258a51e;
    iVar4 = FUN_142637d40(local_388);
    if (0 < iVar4) {
      iVar5 = 0;
      do {
        FUN_142637d70(local_388,iVar5,&local_78,&local_74);
        FUN_142511a00(*(undefined8 *)(param_4 + 0x178),local_78,local_74);
        iVar5 = iVar5 + 1;
      } while (iVar4 != iVar5);
    }
    iVar4 = 0x10000;
    iVar5 = 0xd800;
    do {
      cVar3 = FUN_142512dc0(*(undefined8 *)(param_4 + 0x178),iVar4,iVar4 + 0x3ff);
      if (cVar3 == '\0') {
        FUN_142513960(*(undefined8 *)(param_4 + 0x178),iVar5);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x400;
    } while (iVar5 != 0xdc00);
    FUN_1425151b0(*(undefined8 *)(param_4 + 0x178));
    uVar7 = *(undefined8 *)(param_4 + 0x178);
LAB_14258aa34:
    local_50[10] = uVar7;
    local_50[0xb] = 0;
    *(undefined4 *)(local_50 + 0xc) = 0;
    bVar15 = true;
    if (*(char *)((longlong)param_2 + 6) == '\x02') {
      uVar13 = 0xffffffff;
      if ((int)uVar12 < 0x10) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = param_2[0xf];
        if (uVar12 != 0x10) {
          uVar13 = param_2[0x10];
        }
      }
      if ((int)(uVar13 - uVar9) < 2) {
        if (local_58 != 0) {
          local_50[0xb] = *(undefined8 *)(local_58 + 0x58);
          *(undefined4 *)(local_50 + 0xc) = *(undefined4 *)(local_58 + 0x60);
        }
      }
      else {
        local_50[0xb] = (longlong)param_2 + (longlong)(int)uVar9;
        *(uint *)(local_50 + 0xc) = uVar13 - uVar9 >> 1;
        if (*(char *)((longlong)param_2 + (longlong)(int)uVar9 + 1) != '\x02') goto LAB_14258a51e;
      }
    }
  }
  uVar13 = 0xffffffff;
  if ((int)uVar12 < 0x11) {
    bVar2 = false;
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = param_2[0x10];
    if (uVar12 == 0x11) {
      bVar2 = false;
    }
    else {
      uVar13 = param_2[0x11];
      bVar2 = true;
    }
  }
  if ((int)(uVar13 - uVar9) < 2) {
    if (bVar15 && local_58 != 0) {
      *(undefined4 *)((longlong)local_50 + 100) = *(undefined4 *)(local_58 + 100);
      local_50[0xd] = *(undefined8 *)(local_58 + 0x68);
      local_50[0xe] = *(undefined8 *)(local_58 + 0x70);
      *(undefined4 *)(local_50 + 0xf) = *(undefined4 *)(local_58 + 0x78);
    }
  }
  else {
    if (local_50 == (undefined8 *)0x0) goto LAB_14258a51e;
    lVar14 = (longlong)(int)uVar9;
    uVar1 = *(ushort *)((longlong)param_2 + lVar14);
    uVar10 = (ulonglong)uVar1;
    *(uint *)((longlong)local_50 + 100) = (uint)uVar1;
    iVar4 = (uVar13 - uVar9 >> 1) - (uint)uVar1;
    *(int *)(local_50 + 0xf) = iVar4 + -0x11;
    if (iVar4 - 0x112U < 0xffffff02) goto LAB_14258a51e;
    local_50[0xd] = (longlong)param_2 + lVar14 + 2;
    lVar11 = (longlong)param_2 + uVar10 * 2 + lVar14 + 0x22;
    local_50[0xe] = lVar11;
    if (((*(short *)((longlong)param_2 + uVar10 * 2 + lVar14 + 0x22) != 0) ||
        (*(short *)((longlong)param_2 + uVar10 * 2 + lVar14 + 0x24) != 0x300)) ||
       (*(short *)(lVar11 + (ulonglong)(iVar4 - 0x12) * 2) != -0x100)) goto LAB_14258a51e;
  }
  uVar9 = 0xffffffff;
  uVar13 = 0xffffffff;
  if (bVar2) {
    uVar13 = param_2[0x11];
  }
  if (0x12 < (int)uVar12) {
    uVar9 = param_2[0x12];
  }
  if ((int)(uVar9 - uVar13) < 0x100) {
    if (local_50 != (undefined8 *)0x0) {
      if (local_58 == 0) goto LAB_14258a51e;
      lVar14 = *(longlong *)(local_58 + 0x48);
      goto LAB_14258ac35;
    }
  }
  else {
    if (local_50 == (undefined8 *)0x0) goto LAB_14258a51e;
    lVar14 = (longlong)(int)uVar13 + (longlong)param_2;
LAB_14258ac35:
    local_50[9] = lVar14;
  }
  lVar14 = *(longlong *)(param_4 + 0x20);
  uVar13 = param_2[1];
  uVar12 = uVar13 & 0xffff;
  iVar4 = FUN_142615670(*(undefined8 *)(param_4 + 0x18),lVar14,local_388,0x180);
  if ((((uVar12 == *(uint *)(lVar14 + 0x18)) && (*(int *)(lVar14 + 0x1c) != 0)) &&
      ((iVar5 = (int)local_60, iVar5 == *(int *)(lVar14 + 0x48) &&
       ((iVar5 == 0 ||
        (iVar5 = memcmp(local_70,*(void **)(lVar14 + 0x40),(longlong)(iVar5 * 4)), iVar5 == 0))))))
     && (iVar4 == *(int *)(lVar14 + 0x50))) {
    if (iVar4 < 0) {
      return;
    }
    iVar4 = memcmp(local_388,(void *)(lVar14 + 0x54),0x300);
    if (iVar4 == 0) {
      return;
    }
  }
  lVar14 = FUN_14255e3b0(param_4 + 0x20);
  if (lVar14 == 0) {
LAB_14258ad7f:
    *param_5 = 7;
    return;
  }
  *(uint *)(lVar14 + 0x18) = uVar12;
  iVar4 = FUN_142563c10(*(undefined8 *)(param_4 + 0x18),uVar13 >> 4 & 7 | 0x1000);
  *(int *)(lVar14 + 0x1c) = iVar4;
  if (iVar4 != 0) {
    if ((int)local_60 != 0) {
      FUN_142612fd0(lVar14,local_58,local_70,local_60,local_88,uVar8,local_80,param_5);
    }
    uVar6 = FUN_142615670(*(undefined8 *)(param_4 + 0x18),lVar14,lVar14 + 0x54,0x180);
    *(undefined4 *)(lVar14 + 0x50) = uVar6;
    return;
  }
LAB_14258a51e:
  *param_5 = 3;
  return;
}



// FUNCTION 14258ada0 Unwind@14258ada0 body=58 status=ok
// SIG undefined Unwind@14258ada0(void)

void Unwind_14258ada0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x360));
  return;
}



// FUNCTION 14258ade0 FUN_14258ade0 body=73 status=ok
// SIG undefined FUN_14258ade0(void)

undefined8 FUN_14258ade0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,ushort *param_4)

{
  if (((((0x13 < *param_4) && ((char)param_4[2] == '\0')) &&
       (*(char *)((longlong)param_4 + 5) == '\0')) &&
      (((char)param_4[4] == 'U' && (*(char *)((longlong)param_4 + 9) == 'C')))) &&
     (((char)param_4[5] == 'o' &&
      ((*(char *)((longlong)param_4 + 0xb) == 'l' && ((char)param_4[6] == '\x05')))))) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *(undefined4 *)(param_4 + 8);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 14258ae30 FUN_14258ae30 body=106 status=ok
// SIG undefined FUN_14258ae30(void)

void FUN_14258ae30(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    puVar3 = *(undefined8 **)(lVar1 + 8);
    while (puVar3 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)puVar3[1];
      if (*(char *)(puVar3 + 3) != '\0') {
        FUN_1424da110(*puVar3);
      }
      FUN_1424da110(puVar3);
      puVar3 = puVar2;
    }
    FUN_1424da110(lVar1);
  }
  FUN_1424da110(param_1);
  return;
}



// FUNCTION 14258aec0 FUN_14258aec0 body=76 status=ok
// SIG undefined FUN_14258aec0(void)

char * FUN_14258aec0(longlong param_1,undefined4 *param_2,int *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  size_t sVar3;
  char *_Str;
  
  if (((*param_3 < 1) && (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) &&
     (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0)) {
    *plVar1 = puVar2[1];
    _Str = (char *)*puVar2;
    if ((param_2 != (undefined4 *)0x0) && (_Str != (char *)0x0)) {
      sVar3 = strlen(_Str);
      *param_2 = (int)sVar3;
    }
  }
  else {
    _Str = (char *)0x0;
  }
  return _Str;
}



// FUNCTION 14258af30 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 14258af40 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 14258afa0 FUN_14258afa0 body=426 status=ok
// SIG undefined FUN_14258afa0(void)

void FUN_14258afa0(longlong *param_1,byte *param_2,uint *param_3,ulonglong param_4,
                  undefined4 *param_5)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  param_1[1] = (longlong)param_3;
  uVar2 = *param_3;
  *(uint *)(param_1 + 4) = uVar2;
  param_1[2] = (longlong)&DAT_1499fb440;
  uVar4 = (uint)param_4;
  if (-1 < (int)uVar4) {
    uVar6 = 6;
    if (*param_2 == 1) {
      uVar6 = (uint)(param_2[1] != 0) * 5 + 1;
    }
    if (((uint)(param_4 >> 2) & 0x3fffffff) < uVar6) goto LAB_14258b116;
  }
  if (((uVar2 & 0xf0000000) == 0x20000000) || ((uVar2 & 0xe0000000) == 0x40000000)) {
    bVar5 = *param_2;
    if ((bVar5 == 1) && (param_2[1] == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0x10000;
LAB_14258b0d8:
      *(undefined1 *)((longlong)param_1 + 0x3b) = 1;
      return;
    }
    bVar1 = (byte)param_3[1];
    if ((4 < bVar1) &&
       (((int)uVar4 < 0 ||
        (((uint)bVar1 * 4 + 4 <= uVar4 && ((int)(param_3[4] << 2) <= (int)uVar4)))))) {
      if ((int)(bVar1 + 1) < (int)param_3[2]) {
        *(uint *)((longlong)param_1 + 0x24) = param_3[2] << 2;
        bVar5 = *param_2;
      }
      if (2 < bVar5) {
        *(uint *)(param_1 + 6) = param_3[1] >> 8;
      }
      if (5 < bVar1) {
        uVar2 = param_3[6];
        bVar5 = (byte)uVar2;
        *(byte *)(param_1 + 7) = bVar5 & 1;
        bVar3 = bVar5 >> 2 & 1;
        *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | (uVar2 & 0xf000) << 0xc;
        bVar5 = bVar5 >> 1 & 1;
        *(byte *)((longlong)param_1 + 0x39) = bVar5;
        *(byte *)((longlong)param_1 + 0x3a) = bVar3;
        *(uint *)((longlong)param_1 + 0x34) = uVar2 >> 0x10;
        if (bVar5 == 0) {
          if ((bVar1 < 8) && (bVar3 != 0)) goto LAB_14258b116;
          if (bVar1 < 7) goto LAB_14258b0d8;
        }
        else if (bVar1 < 8) goto LAB_14258b116;
        if ((int)param_3[2] < (int)param_3[7]) {
          param_1[2] = (longlong)(param_3 + (int)param_3[2]);
        }
        goto LAB_14258b0d8;
      }
      if ((*(char *)((longlong)param_1 + 0x39) == '\0') &&
         (*(char *)((longlong)param_1 + 0x3a) == '\0')) goto LAB_14258b0d8;
    }
  }
LAB_14258b116:
  *param_5 = 3;
  if (*param_1 != 0) {
    FUN_142532330();
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14258b150 FUN_14258b150 body=141 status=ok
// SIG undefined FUN_14258b150(void)

void FUN_14258b150(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  int *local_38;
  int *local_30;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_38 = &local_1c;
  local_30 = param_4;
  uVar1 = FUN_1424e51c0(param_2,&DAT_149967acd,param_3,&LAB_14258af50);
  *param_1 = uVar1;
  if (*param_4 < 1) {
    uVar1 = FUN_142532380(uVar1);
    local_38 = param_4;
    FUN_14258afa0(param_1,&local_1c,uVar1,0xffffffff);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14258b1f0 FUN_14258b1f0 body=34 status=ok
// SIG undefined FUN_14258b1f0(void)

void FUN_14258b1f0(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_142532330();
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14258b220 FUN_14258b220 body=15 status=ok
// SIG undefined FUN_14258b220(void)

int FUN_14258b220(uint param_1)

{
  return (int)(char)(&DAT_1499fb420)[param_1 >> 0x1c];
}



// FUNCTION 14258b230 FUN_14258b230 body=233 status=ok
// SIG undefined FUN_14258b230(void)

wchar_t * FUN_14258b230(longlong param_1,uint param_2,uint *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  longlong *plVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  
  if ((param_2 & 0xf0000000) == 0x60000000) {
    plVar5 = (longlong *)(param_1 + 0x28);
    iVar2 = 0;
    if (*(int *)(param_1 + 0x30) <= (int)(param_2 & 0xfffffff)) {
      plVar5 = (longlong *)(param_1 + 0x10);
      iVar2 = *(int *)(param_1 + 0x30);
    }
    uVar6 = (ulonglong)((param_2 & 0xfffffff) - iVar2);
    _Str = (wchar_t *)(*plVar5 + uVar6 * 2);
    uVar1 = *(ushort *)(*plVar5 + uVar6 * 2);
    if ((uVar1 & 0xfc00) != 0xdc00) {
      sVar4 = wcslen(_Str);
      uVar3 = (uint)sVar4;
      goto joined_r0x00014258b2bd;
    }
    if (uVar1 < 0xdfef) {
      uVar3 = uVar1 & 0x3ff;
      _Str = _Str + 1;
      goto joined_r0x00014258b2bd;
    }
    if (0xdffe < uVar1) {
      uVar3 = CONCAT22(_Str[1],_Str[2]);
      _Str = _Str + 3;
      goto joined_r0x00014258b2bd;
    }
    uVar3 = (uint)uVar1 * 0x10000 + (uint)(ushort)_Str[1] + 0x20110000;
  }
  else {
    if (0xfffffff < param_2) {
      uVar3 = 0;
      _Str = (wchar_t *)0x0;
      goto joined_r0x00014258b2bd;
    }
    if (param_2 == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)((ulonglong)param_2 * 4 + *(longlong *)(param_1 + 8));
    }
    uVar3 = *(uint *)_Str;
  }
  _Str = _Str + 2;
joined_r0x00014258b2bd:
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar3;
  }
  return _Str;
}



// FUNCTION 14258b320 FUN_14258b320 body=67 status=ok
// SIG undefined FUN_14258b320(void)

undefined4 * FUN_14258b320(longlong param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((param_2 & 0xf0000000) == 0x30000000) {
    if ((param_2 & 0xfffffff) == 0) {
      puVar1 = &DAT_1499fb430;
    }
    else {
      puVar1 = (undefined4 *)((ulonglong)(param_2 & 0xfffffff) * 4 + *(longlong *)(param_1 + 8));
    }
    uVar2 = *puVar1;
    puVar1 = puVar1 + 1;
  }
  else {
    uVar2 = 0;
    puVar1 = (undefined4 *)0x0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar2;
  }
  return puVar1;
}



// FUNCTION 14258b370 FUN_14258b370 body=67 status=ok
// SIG undefined FUN_14258b370(void)

undefined4 * FUN_14258b370(longlong param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((param_2 & 0xf0000000) == 0x10000000) {
    if ((param_2 & 0xfffffff) == 0) {
      puVar1 = &DAT_1499fb438;
    }
    else {
      puVar1 = (undefined4 *)((ulonglong)(param_2 & 0xfffffff) * 4 + *(longlong *)(param_1 + 8));
    }
    uVar2 = *puVar1;
    puVar1 = puVar1 + 1;
  }
  else {
    uVar2 = 0;
    puVar1 = (undefined4 *)0x0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar2;
  }
  return puVar1;
}



// FUNCTION 14258b3c0 FUN_14258b3c0 body=67 status=ok
// SIG undefined FUN_14258b3c0(void)

undefined4 * FUN_14258b3c0(longlong param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((param_2 & 0xf0000000) == 0xe0000000) {
    if ((param_2 & 0xfffffff) == 0) {
      puVar1 = &DAT_1499fb438;
    }
    else {
      puVar1 = (undefined4 *)((ulonglong)(param_2 & 0xfffffff) * 4 + *(longlong *)(param_1 + 8));
    }
    uVar2 = *puVar1;
    puVar1 = puVar1 + 1;
  }
  else {
    puVar1 = (undefined4 *)0x0;
    uVar2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar2;
  }
  return puVar1;
}



// FUNCTION 14258b410 FUN_14258b410 body=85 status=ok
// SIG undefined FUN_14258b410(void)

uint FUN_14258b410(longlong param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 >> 0x1c < 0xf) {
    uVar1 = param_2 & 0xfffffff;
    switch(param_2 >> 0x1c) {
    default:
      return 1;
    case 2:
      if (uVar1 != 0) {
        return (uint)*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 4);
      }
      break;
    case 4:
    case 8:
      if (uVar1 != 0) {
        return *(uint *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 4);
      }
      break;
    case 5:
    case 9:
      return (uint)*(ushort *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar1 * 2);
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      break;
    }
  }
  return 0;
}



// FUNCTION 14258b470 thunk_FUN_1424b70d0 body=5 status=ok
// SIG undefined thunk_FUN_1424b70d0(void)

void thunk_FUN_1424b70d0(void)

{
  return;
}



// FUNCTION 14258b480 FUN_14258b480 body=18 status=ok
// SIG undefined FUN_14258b480(void)

int FUN_14258b480(longlong param_1)

{
  return (int)(char)(&DAT_1499fb420)[*(uint *)(param_1 + 0x10) >> 0x1c];
}



// FUNCTION 14258b4a0 FUN_14258b4a0 body=254 status=ok
// SIG undefined FUN_14258b4a0(void)

wchar_t * FUN_14258b4a0(longlong param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  size_t sVar7;
  longlong *plVar8;
  
  if (*param_3 < 1) {
    uVar4 = *(uint *)(param_1 + 0x10);
    lVar2 = *(longlong *)(param_1 + 8);
    if ((uVar4 & 0xf0000000) == 0x60000000) {
      plVar8 = (longlong *)(lVar2 + 0x28);
      iVar3 = 0;
      if (*(int *)(lVar2 + 0x30) <= (int)(uVar4 & 0xfffffff)) {
        plVar8 = (longlong *)(lVar2 + 0x10);
        iVar3 = *(int *)(lVar2 + 0x30);
      }
      uVar5 = (ulonglong)((uVar4 & 0xfffffff) - iVar3);
      pwVar6 = (wchar_t *)(*plVar8 + uVar5 * 2);
      uVar1 = *(ushort *)(*plVar8 + uVar5 * 2);
      if ((uVar1 & 0xfc00) != 0xdc00) {
        sVar7 = wcslen(pwVar6);
        *param_2 = (uint)sVar7;
        return pwVar6;
      }
      if (uVar1 < 0xdfef) {
        *param_2 = uVar1 & 0x3ff;
        return pwVar6 + 1;
      }
      if (0xdffe < uVar1) {
        *param_2 = CONCAT22(pwVar6[1],pwVar6[2]);
        return pwVar6 + 3;
      }
      uVar4 = (uint)uVar1 * 0x10000 + (uint)(ushort)pwVar6[1] + 0x20110000;
    }
    else {
      if (0xfffffff < uVar4) {
        *param_2 = 0;
        *param_3 = 0x11;
        goto LAB_14258b4ac;
      }
      if ((ulonglong)uVar4 == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)((ulonglong)uVar4 * 4 + *(longlong *)(lVar2 + 8));
      }
      uVar4 = *(uint *)pwVar6;
    }
    pwVar6 = pwVar6 + 2;
    *param_2 = uVar4;
  }
  else {
LAB_14258b4ac:
    pwVar6 = (wchar_t *)0x0;
  }
  return pwVar6;
}



// FUNCTION 14258b5a0 FUN_14258b5a0 body=86 status=ok
// SIG undefined FUN_14258b5a0(void)

undefined4 * FUN_14258b5a0(longlong param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (0 < *param_3) {
    return (undefined4 *)0x0;
  }
  if ((*(uint *)(param_1 + 0x10) & 0xf0000000) == 0x30000000) {
    uVar1 = *(uint *)(param_1 + 0x10) & 0xfffffff;
    if (uVar1 == 0) {
      puVar2 = &DAT_1499fb430;
    }
    else {
      puVar2 = (undefined4 *)((ulonglong)uVar1 * 4 + *(longlong *)(*(longlong *)(param_1 + 8) + 8));
    }
    *param_2 = *puVar2;
    return puVar2 + 1;
  }
  *param_2 = 0;
  *param_3 = 0x11;
  return (undefined4 *)0x0;
}



// FUNCTION 14258b600 FUN_14258b600 body=46 status=ok
// SIG undefined FUN_14258b600(void)

int FUN_14258b600(longlong param_1,int *param_2)

{
  uint uVar1;
  
  if (0 < *param_2) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf0000000) != 0x70000000) {
    *param_2 = 0x11;
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  return (int)(uVar1 << 4) >> 4;
}



// FUNCTION 14258b630 FUN_14258b630 body=45 status=ok
// SIG undefined FUN_14258b630(void)

uint FUN_14258b630(longlong param_1,int *param_2)

{
  uint uVar1;
  
  if (0 < *param_2) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf0000000) != 0x70000000) {
    *param_2 = 0x11;
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  return uVar1 & 0xfffffff;
}



// FUNCTION 14258b660 FUN_14258b660 body=86 status=ok
// SIG undefined FUN_14258b660(void)

undefined4 * FUN_14258b660(longlong param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (0 < *param_3) {
    return (undefined4 *)0x0;
  }
  if ((*(uint *)(param_1 + 0x10) & 0xf0000000) == 0xe0000000) {
    uVar1 = *(uint *)(param_1 + 0x10) & 0xfffffff;
    if (uVar1 == 0) {
      puVar2 = &DAT_1499fb438;
    }
    else {
      puVar2 = (undefined4 *)((ulonglong)uVar1 * 4 + *(longlong *)(*(longlong *)(param_1 + 8) + 8));
    }
    *param_2 = *puVar2;
    return puVar2 + 1;
  }
  *param_2 = 0;
  *param_3 = 0x11;
  return (undefined4 *)0x0;
}



// FUNCTION 14258b6c0 FUN_14258b6c0 body=86 status=ok
// SIG undefined FUN_14258b6c0(void)

undefined4 * FUN_14258b6c0(longlong param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (0 < *param_3) {
    return (undefined4 *)0x0;
  }
  if ((*(uint *)(param_1 + 0x10) & 0xf0000000) == 0x10000000) {
    uVar1 = *(uint *)(param_1 + 0x10) & 0xfffffff;
    if (uVar1 == 0) {
      puVar2 = &DAT_1499fb438;
    }
    else {
      puVar2 = (undefined4 *)((ulonglong)uVar1 * 4 + *(longlong *)(*(longlong *)(param_1 + 8) + 8));
    }
    *param_2 = *puVar2;
    return puVar2 + 1;
  }
  *param_2 = 0;
  *param_3 = 0x11;
  return (undefined4 *)0x0;
}



// FUNCTION 14258b720 FUN_14258b720 body=136 status=ok
// SIG undefined FUN_14258b720(void)

longlong * FUN_14258b720(longlong param_1,longlong *param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (0 < *param_3) {
LAB_14258b726:
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    return param_2;
  }
  uVar4 = *(uint *)(param_1 + 0x10) & 0xfffffff;
  uVar5 = (ulonglong)uVar4;
  uVar1 = *(uint *)(param_1 + 0x10) >> 0x1c;
  if (uVar1 == 9) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    lVar3 = lVar2 + uVar5 * 2 + 2;
    uVar1 = (uint)*(ushort *)(lVar2 + uVar5 * 2);
    lVar2 = 0;
  }
  else {
    if (uVar1 != 8) {
      *param_3 = 0x11;
      goto LAB_14258b726;
    }
    if (uVar4 == 0) {
      lVar2 = 0;
      lVar3 = 0;
      uVar1 = 0;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
      lVar2 = lVar3 + uVar5 * 4 + 4;
      uVar1 = *(uint *)(lVar3 + uVar5 * 4);
      lVar3 = 0;
    }
  }
  *param_2 = lVar3;
  param_2[1] = lVar2;
  *(uint *)(param_2 + 2) = uVar1;
  return param_2;
}



// FUNCTION 14258b7b0 FUN_14258b7b0 body=256 status=ok
// SIG undefined FUN_14258b7b0(void)

void FUN_14258b7b0(longlong param_1,longlong *param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar3;
  
  if (0 < *param_3) {
LAB_14258b7b9:
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x10) & 0xfffffff;
  uVar3 = (ulonglong)uVar2;
  uVar6 = *(uint *)(param_1 + 0x10) >> 0x1c;
  if (uVar6 == 5) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    lVar5 = lVar8 + uVar3 * 2 + 2;
    uVar1 = *(ushort *)(lVar8 + uVar3 * 2);
    uVar2 = (uint)uVar1;
    lVar7 = lVar8 + uVar3 * 2 + (ulonglong)uVar1 * 2 + 2;
    lVar4 = 0;
    lVar8 = 0;
  }
  else {
    if (uVar6 == 4) {
      if (uVar2 != 0) {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
        lVar4 = lVar8 + uVar3 * 4 + 4;
        uVar2 = *(uint *)(lVar8 + uVar3 * 4);
        lVar8 = lVar8 + uVar3 * 4 + (longlong)(int)uVar2 * 4 + 4;
        lVar7 = 0;
        lVar5 = 0;
        goto LAB_14258b89d;
      }
    }
    else {
      if (uVar6 != 2) {
        *param_3 = 0x11;
        goto LAB_14258b7b9;
      }
      if (uVar2 != 0) {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
        lVar5 = lVar8 + uVar3 * 4 + 2;
        uVar1 = *(ushort *)(lVar8 + uVar3 * 4);
        uVar2 = (uint)uVar1;
        lVar8 = lVar8 + uVar3 * 4 + (ulonglong)uVar1 * 2 + 2 + (ulonglong)(~(uint)uVar1 & 1) * 2;
        lVar4 = 0;
        lVar7 = 0;
        goto LAB_14258b89d;
      }
    }
    lVar4 = 0;
    lVar7 = 0;
    lVar8 = 0;
    lVar5 = 0;
    uVar2 = 0;
  }
LAB_14258b89d:
  *param_2 = lVar5;
  param_2[1] = lVar4;
  param_2[2] = lVar7;
  param_2[3] = lVar8;
  *(uint *)(param_2 + 4) = uVar2;
  return;
}



// FUNCTION 14258b8b0 FUN_14258b8b0 body=232 status=ok
// SIG undefined FUN_14258b8b0(void)

undefined8 FUN_14258b8b0(longlong param_1)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  short *psVar6;
  longlong *plVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar8 = uVar2 & 0xfffffff;
  if (uVar8 == 0) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if (uVar2 < 0x10000000) {
    if (*(int *)(*(longlong *)(lVar3 + 8) + (ulonglong)uVar2 * 4) != 3) {
      return 0;
    }
    lVar3 = *(longlong *)(lVar3 + 8) + (ulonglong)uVar2 * 4;
    if (*(short *)(lVar3 + 4) != 0x2205) {
      return 0;
    }
    if (*(short *)(lVar3 + 6) != 0x2205) {
      return 0;
    }
    psVar6 = (short *)(lVar3 + 8);
  }
  else {
    iVar4 = 0;
    if ((uVar2 & 0xf0000000) != 0x60000000) {
      return 0;
    }
    plVar7 = (longlong *)(lVar3 + 0x28);
    if (*(int *)(lVar3 + 0x30) <= (int)uVar8) {
      plVar7 = (longlong *)(lVar3 + 0x10);
      iVar4 = *(int *)(lVar3 + 0x30);
    }
    lVar3 = *plVar7 + (ulonglong)(uVar8 - iVar4) * 2;
    sVar1 = *(short *)(*plVar7 + (ulonglong)(uVar8 - iVar4) * 2);
    if (sVar1 != -0x23fd) {
      if (sVar1 != 0x2205) {
        return 0;
      }
      if (*(short *)(lVar3 + 2) != 0x2205) {
        return 0;
      }
      if (*(short *)(lVar3 + 4) != 0x2205) {
        return 0;
      }
      psVar6 = (short *)(lVar3 + 6);
      uVar5 = 0;
      goto LAB_14258b98e;
    }
    if (*(short *)(lVar3 + 2) != 0x2205) {
      return 0;
    }
    if (*(short *)(lVar3 + 4) != 0x2205) {
      return 0;
    }
    psVar6 = (short *)(lVar3 + 6);
  }
  uVar5 = 0x2205;
LAB_14258b98e:
  return CONCAT71((int7)((ulonglong)uVar5 >> 8),*psVar6 == (short)uVar5);
}



// FUNCTION 14258b9a0 FUN_14258b9a0 body=93 status=ok
// SIG undefined FUN_14258b9a0(void)

void FUN_14258b9a0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x48))(param_1,local_48,param_4);
  local_58 = param_4;
  FUN_14258ba10(param_1[1],local_48,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 14258ba10 FUN_14258ba10 body=448 status=ok
// SIG undefined FUN_14258ba10(void)

ulonglong FUN_14258ba10(longlong param_1,longlong *param_2,longlong param_3,int param_4,int *param_5
                       )

{
  ushort uVar1;
  size_t sVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  wchar_t *_Str;
  
  if (0 < *param_5) {
    return 0;
  }
  if (param_3 == 0) {
    if (param_4 == 0) goto LAB_14258ba4f;
  }
  else if (-1 < param_4) {
LAB_14258ba4f:
    uVar4 = *(uint *)(param_2 + 2);
    uVar7 = (ulonglong)uVar4;
    if (uVar7 == 0) {
      return 0;
    }
    iVar5 = 0xf;
    if ((int)uVar4 <= param_4) {
      if ((int)uVar4 < 1) {
        return uVar7;
      }
      uVar8 = 0;
      do {
        if (*param_2 == 0) {
          uVar4 = *(uint *)(param_2[1] + uVar8 * 4);
        }
        else {
          uVar1 = *(ushort *)(*param_2 + uVar8 * 2);
          uVar4 = (uint)uVar1;
          if (*(int *)(param_1 + 0x34) <= (int)(uint)uVar1) {
            uVar4 = ((uint)uVar1 - *(int *)(param_1 + 0x34)) + *(int *)(param_1 + 0x30);
          }
          uVar4 = uVar4 | 0x60000000;
        }
        if ((uVar4 & 0xf0000000) == 0x60000000) {
          iVar5 = *(int *)(param_1 + 0x30);
          plVar6 = (longlong *)(param_1 + 0x10);
          if ((int)(uVar4 & 0xfffffff) < iVar5) {
            iVar5 = 0;
            plVar6 = (longlong *)(param_1 + 0x28);
          }
          uVar3 = (ulonglong)((uVar4 & 0xfffffff) - iVar5);
          _Str = (wchar_t *)(*plVar6 + uVar3 * 2);
          uVar1 = *(ushort *)(*plVar6 + uVar3 * 2);
          uVar4 = (uint)uVar1;
          if ((uVar4 & 0xfc00) == 0xdc00) {
            if (uVar1 < 0xdfef) {
              uVar3 = (ulonglong)(uVar4 & 0x3ff);
              _Str = _Str + 1;
            }
            else {
              if (uVar4 < 0xdfff) {
                uVar4 = uVar4 * 0x10000 + (uint)(ushort)_Str[1] + 0x20110000;
                goto LAB_14258bb74;
              }
              uVar3 = (ulonglong)CONCAT22(_Str[1],_Str[2]);
              _Str = _Str + 3;
            }
          }
          else {
            sVar2 = wcslen(_Str);
            uVar3 = sVar2 & 0xffffffff;
          }
        }
        else {
          if (0xfffffff < uVar4) {
            uVar7 = 0;
            iVar5 = 0x11;
            break;
          }
          _Str = L"";
          if (uVar4 != 0) {
            _Str = (wchar_t *)((ulonglong)uVar4 * 4 + *(longlong *)(param_1 + 8));
          }
          uVar4 = *(uint *)_Str;
LAB_14258bb74:
          uVar3 = (ulonglong)uVar4;
          _Str = _Str + 2;
        }
        FUN_1424a8f10(param_3,1,_Str,uVar3);
        uVar8 = uVar8 + 1;
        param_3 = param_3 + 0x40;
        if (uVar7 == uVar8) {
          return uVar7;
        }
      } while( true );
    }
    goto LAB_14258bbc5;
  }
  uVar7 = 0;
  iVar5 = 1;
LAB_14258bbc5:
  *param_5 = iVar5;
  return uVar7;
}



// FUNCTION 14258bbf0 FUN_14258bbf0 body=384 status=ok
// SIG undefined FUN_14258bbf0(void)

void FUN_14258bbf0(longlong *param_1,longlong param_2,int param_3,int *param_4)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  wchar_t *_Str;
  size_t sVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = *(uint *)(param_1 + 2);
  if ((uVar7 & 0xfffffffe) == 8) {
    (**(code **)(*param_1 + 0x48))(param_1,local_48,param_4);
    local_58 = param_4;
    FUN_14258ba10(param_1[1],local_48,param_2,param_3);
    goto LAB_14258bd4e;
  }
  if (0 < *param_4) goto LAB_14258bd4e;
  if (param_2 == 0) {
    if (param_3 != 0) goto LAB_14258bcd3;
  }
  else {
    if (param_3 < 0) {
LAB_14258bcd3:
      *param_4 = 1;
      goto LAB_14258bd4e;
    }
    if (param_3 != 0) {
      lVar2 = param_1[1];
      if ((uVar7 & 0xf0000000) == 0x60000000) {
        plVar6 = (longlong *)(lVar2 + 0x28);
        iVar3 = 0;
        if (*(int *)(lVar2 + 0x30) <= (int)(uVar7 & 0xfffffff)) {
          plVar6 = (longlong *)(lVar2 + 0x10);
          iVar3 = *(int *)(lVar2 + 0x30);
        }
        uVar4 = (ulonglong)((uVar7 & 0xfffffff) - iVar3);
        _Str = (wchar_t *)(*plVar6 + uVar4 * 2);
        uVar1 = *(ushort *)(*plVar6 + uVar4 * 2);
        uVar7 = (uint)uVar1;
        if ((uVar7 & 0xfc00) == 0xdc00) {
          if (uVar1 < 0xdfef) {
            uVar4 = (ulonglong)(uVar7 & 0x3ff);
            _Str = _Str + 1;
          }
          else {
            if (uVar7 < 0xdfff) {
              uVar7 = uVar7 * 0x10000 + (uint)(ushort)_Str[1] + 0x20110000;
              goto LAB_14258bd38;
            }
            uVar4 = (ulonglong)CONCAT22(_Str[1],_Str[2]);
            _Str = _Str + 3;
          }
        }
        else {
          sVar5 = wcslen(_Str);
          uVar4 = sVar5 & 0xffffffff;
        }
      }
      else {
        if (0xfffffff < uVar7) {
          *param_4 = 0x11;
          goto LAB_14258bd4e;
        }
        if ((ulonglong)uVar7 == 0) {
          _Str = L"";
        }
        else {
          _Str = (wchar_t *)((ulonglong)uVar7 * 4 + *(longlong *)(lVar2 + 8));
        }
        uVar7 = *(uint *)_Str;
LAB_14258bd38:
        uVar4 = (ulonglong)uVar7;
        _Str = _Str + 2;
      }
      FUN_1424a8f10(param_2,1,_Str,uVar4);
      goto LAB_14258bd4e;
    }
  }
  *param_4 = 0xf;
LAB_14258bd4e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 14258bd80 FUN_14258bd80 body=605 status=ok
// SIG undefined FUN_14258bd80(void)

undefined8 * FUN_14258bd80(longlong *param_1,undefined8 *param_2,int *param_3)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  longlong *plVar7;
  uint uVar8;
  ushort *local_48;
  uint *local_40;
  int local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  *param_2 = &PTR_FUN_149e18960;
  *(undefined2 *)(param_2 + 1) = 2;
  if (0 < *param_3) {
    return param_2;
  }
  uVar8 = *(uint *)(param_1 + 2);
  lVar2 = param_1[1];
  local_30 = param_2;
  if ((uVar8 & 0xf0000000) == 0x60000000) {
    plVar7 = (longlong *)(lVar2 + 0x28);
    iVar3 = 0;
    if (*(int *)(lVar2 + 0x30) <= (int)(uVar8 & 0xfffffff)) {
      plVar7 = (longlong *)(lVar2 + 0x10);
      iVar3 = *(int *)(lVar2 + 0x30);
    }
    uVar4 = (ulonglong)((uVar8 & 0xfffffff) - iVar3);
    pwVar5 = (wchar_t *)(*plVar7 + uVar4 * 2);
    uVar1 = *(ushort *)(*plVar7 + uVar4 * 2);
    uVar8 = (uint)uVar1;
    if ((uVar8 & 0xfc00) != 0xdc00) {
      sVar6 = wcslen(pwVar5);
      uVar4 = sVar6 & 0xffffffff;
      goto LAB_14258bec1;
    }
    if (uVar1 < 0xdfef) {
      uVar4 = (ulonglong)(uVar8 & 0x3ff);
      pwVar5 = pwVar5 + 1;
      goto LAB_14258bec1;
    }
    if (0xdffe < uVar8) {
      uVar4 = (ulonglong)CONCAT22(pwVar5[1],pwVar5[2]);
      pwVar5 = pwVar5 + 3;
      goto LAB_14258bec1;
    }
    uVar8 = uVar8 * 0x10000 + (uint)(ushort)pwVar5[1] + 0x20110000;
  }
  else {
    if (0xfffffff < uVar8) {
      (**(code **)(*param_1 + 0x48))(param_1,&local_48);
      if (0 < *param_3) {
        return local_30;
      }
      if (local_38 < 1) {
LAB_14258bf70:
        *param_3 = 0x11;
        return local_30;
      }
      lVar2 = param_1[1];
      if (local_48 == (ushort *)0x0) {
        uVar8 = *local_40;
      }
      else {
        uVar1 = *local_48;
        uVar8 = (uint)uVar1;
        if (*(int *)(lVar2 + 0x34) <= (int)(uint)uVar1) {
          uVar8 = ((uint)uVar1 - *(int *)(lVar2 + 0x34)) + *(int *)(lVar2 + 0x30);
        }
        uVar8 = uVar8 | 0x60000000;
      }
      if ((uVar8 & 0xf0000000) == 0x60000000) {
        plVar7 = (longlong *)(lVar2 + 0x28);
        iVar3 = 0;
        if (*(int *)(lVar2 + 0x30) <= (int)(uVar8 & 0xfffffff)) {
          plVar7 = (longlong *)(lVar2 + 0x10);
          iVar3 = *(int *)(lVar2 + 0x30);
        }
        uVar4 = (ulonglong)((uVar8 & 0xfffffff) - iVar3);
        pwVar5 = (wchar_t *)(*plVar7 + uVar4 * 2);
        uVar1 = *(ushort *)(*plVar7 + uVar4 * 2);
        uVar8 = (uint)uVar1;
        if ((uVar8 & 0xfc00) != 0xdc00) {
          sVar6 = wcslen(pwVar5);
          uVar4 = sVar6 & 0xffffffff;
          goto LAB_14258bfb9;
        }
        if (uVar1 < 0xdfef) {
          uVar4 = (ulonglong)(uVar8 & 0x3ff);
          pwVar5 = pwVar5 + 1;
          goto LAB_14258bfb9;
        }
        if (0xdffe < uVar8) {
          uVar4 = (ulonglong)CONCAT22(pwVar5[1],pwVar5[2]);
          pwVar5 = pwVar5 + 3;
          goto LAB_14258bfb9;
        }
        uVar8 = uVar8 * 0x10000 + (uint)(ushort)pwVar5[1] + 0x20110000;
      }
      else {
        if (0xfffffff < uVar8) goto LAB_14258bf70;
        if (uVar8 == 0) {
          pwVar5 = L"";
        }
        else {
          pwVar5 = (wchar_t *)((ulonglong)uVar8 * 4 + *(longlong *)(lVar2 + 8));
        }
        uVar8 = *(uint *)pwVar5;
      }
      uVar4 = (ulonglong)uVar8;
      pwVar5 = pwVar5 + 2;
LAB_14258bfb9:
      FUN_1424a8f10(param_2,1,pwVar5,uVar4);
      return local_30;
    }
    if (uVar8 == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)((ulonglong)uVar8 * 4 + *(longlong *)(lVar2 + 8));
    }
    uVar8 = *(uint *)pwVar5;
  }
  uVar4 = (ulonglong)uVar8;
  pwVar5 = pwVar5 + 2;
LAB_14258bec1:
  FUN_1424a8f10(param_2,1,pwVar5,uVar4);
  return local_30;
}



// FUNCTION 14258bfe0 Unwind@14258bfe0 body=36 status=ok
// SIG undefined Unwind@14258bfe0(void)

void Unwind_14258bfe0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 14258c010 FUN_14258c010 body=788 status=ok
// SIG undefined FUN_14258c010(void)

uint FUN_14258c010(longlong param_1,uint param_2,uint *param_3,undefined8 *param_4)

{
  ushort uVar1;
  ushort uVar2;
  char *_Str1;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  if (param_4 == (undefined8 *)0x0) {
    return 0xffffffff;
  }
  _Str1 = (char *)*param_4;
  if (_Str1 == (char *)0x0) {
    return 0xffffffff;
  }
  uVar11 = param_2 & 0xfffffff;
  param_2 = param_2 >> 0x1c;
  if (param_2 == 5) {
    uVar7 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar11 * 2);
    if (uVar7 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x10) + (ulonglong)uVar11 * 2 + 2;
      iVar9 = *(int *)(param_1 + 0x24);
      iVar13 = 0;
      uVar11 = uVar7;
      do {
        uVar15 = (int)(iVar13 + uVar11) / 2;
        uVar1 = *(ushort *)(lVar5 + (longlong)(int)uVar15 * 2);
        if ((int)(uint)uVar1 < iVar9) {
          pcVar12 = (char *)((ulonglong)uVar1 + *(longlong *)(param_1 + 8));
        }
        else {
          pcVar12 = (char *)(((ulonglong)uVar1 + *(longlong *)(param_1 + 0x18)) - (longlong)iVar9);
        }
        iVar14 = strcmp(_Str1,pcVar12);
        if (-1 < iVar14) {
          if (iVar14 == 0) {
            *param_4 = pcVar12;
            *param_3 = uVar15;
            if ((int)(iVar13 + uVar11) < -1) {
              return 0xffffffff;
            }
            uVar1 = *(ushort *)(lVar5 + (longlong)(int)(uVar15 + uVar7) * 2);
            uVar11 = (uint)uVar1;
            if (*(int *)(param_1 + 0x34) <= (int)(uint)uVar1) {
              uVar11 = ((uint)uVar1 - *(int *)(param_1 + 0x34)) + *(int *)(param_1 + 0x30);
            }
            return uVar11 | 0x60000000;
          }
          iVar13 = uVar15 + 1;
          uVar15 = uVar11;
        }
        uVar11 = uVar15;
      } while (iVar13 < (int)uVar11);
    }
  }
  else if (param_2 == 4) {
    if (uVar11 == 0) {
      return 0xffffffff;
    }
    uVar7 = *(uint *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar11 * 4);
    if (0 < (int)uVar7) {
      lVar5 = *(longlong *)(param_1 + 8) + (ulonglong)uVar11 * 4 + 4;
      iVar9 = 0;
      uVar11 = uVar7;
      do {
        uVar8 = (int)(iVar9 + uVar11) / 2;
        uVar15 = *(uint *)(lVar5 + (longlong)(int)uVar8 * 4);
        plVar6 = (longlong *)(param_1 + 8);
        if ((int)uVar15 < 0) {
          plVar6 = (longlong *)(param_1 + 0x18);
        }
        pcVar12 = (char *)((ulonglong)(uVar15 & 0x7fffffff) + *plVar6);
        iVar13 = strcmp(_Str1,pcVar12);
        if (-1 < iVar13) {
          if (iVar13 == 0) {
            *param_4 = pcVar12;
            *param_3 = uVar8;
            if ((int)(iVar9 + uVar11) < -1) {
              return 0xffffffff;
            }
            return *(uint *)(lVar5 + (longlong)(int)(uVar8 + uVar7) * 4);
          }
          iVar9 = uVar8 + 1;
          uVar8 = uVar11;
        }
        uVar11 = uVar8;
      } while (iVar9 < (int)uVar11);
    }
  }
  else {
    if (param_2 != 2) {
      return 0xffffffff;
    }
    if (uVar11 == 0) {
      return 0xffffffff;
    }
    lVar5 = *(longlong *)(param_1 + 8);
    uVar1 = *(ushort *)(lVar5 + (ulonglong)uVar11 * 4);
    if (uVar1 != 0) {
      lVar4 = lVar5 + (ulonglong)uVar11 * 4 + 2;
      iVar9 = *(int *)(param_1 + 0x24);
      iVar13 = 0;
      uVar10 = (ulonglong)uVar1;
      do {
        while( true ) {
          iVar14 = (int)uVar10 + iVar13;
          uVar11 = iVar14 / 2;
          uVar2 = *(ushort *)(lVar4 + (longlong)(int)uVar11 * 2);
          if ((int)(uint)uVar2 < iVar9) {
            pcVar12 = (char *)((ulonglong)uVar2 + lVar5);
          }
          else {
            pcVar12 = (char *)(((ulonglong)uVar2 + *(longlong *)(param_1 + 0x18)) - (longlong)iVar9)
            ;
          }
          iVar3 = strcmp(_Str1,pcVar12);
          if (iVar3 < 0) break;
          if (iVar3 == 0) {
            *param_4 = pcVar12;
            *param_3 = uVar11;
            if (iVar14 < -1) {
              return 0xffffffff;
            }
            return *(uint *)(lVar4 + (ulonglong)uVar1 * 2 + (ulonglong)(~(uint)uVar1 & 1) * 2 +
                            (ulonglong)uVar11 * 4);
          }
          iVar13 = uVar11 + 1;
          if ((int)uVar10 <= iVar13) goto LAB_14258c27f;
        }
        uVar10 = (ulonglong)uVar11;
      } while (iVar13 < (int)uVar11);
    }
  }
LAB_14258c27f:
  *param_3 = 0xffffffff;
  return 0xffffffff;
}



// FUNCTION 14258c350 FUN_14258c350 body=329 status=ok
// SIG undefined FUN_14258c350(void)

uint FUN_14258c350(longlong param_1,uint param_2,uint param_3,longlong *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0xffffffff;
  if (-1 < (int)param_3) {
    uVar6 = param_2 & 0xfffffff;
    param_2 = param_2 >> 0x1c;
    if (param_2 == 5) {
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar6 * 2);
      if (param_3 < uVar1) {
        lVar4 = *(longlong *)(param_1 + 0x10) + (ulonglong)uVar6 * 2 + 2;
        if (param_4 != (longlong *)0x0) {
          uVar2 = *(ushort *)(lVar4 + (ulonglong)param_3 * 2);
          if ((int)(uint)uVar2 < *(int *)(param_1 + 0x24)) {
            lVar5 = (ulonglong)uVar2 + *(longlong *)(param_1 + 8);
          }
          else {
            lVar5 = ((ulonglong)uVar2 + *(longlong *)(param_1 + 0x18)) -
                    (longlong)*(int *)(param_1 + 0x24);
          }
          *param_4 = lVar5;
        }
        uVar1 = *(ushort *)(lVar4 + ((ulonglong)uVar1 + (ulonglong)param_3) * 2);
        uVar7 = (uint)uVar1;
        if (*(int *)(param_1 + 0x34) <= (int)(uint)uVar1) {
          uVar7 = ((uint)uVar1 - *(int *)(param_1 + 0x34)) + *(int *)(param_1 + 0x30);
        }
        return uVar7 | 0x60000000;
      }
    }
    else if (param_2 == 4) {
      if (uVar6 != 0) {
        lVar4 = *(longlong *)(param_1 + 8);
        iVar3 = *(int *)(lVar4 + (ulonglong)uVar6 * 4);
        if ((int)param_3 < iVar3) {
          lVar5 = lVar4 + (ulonglong)uVar6 * 4 + 4;
          if (param_4 != (longlong *)0x0) {
            uVar7 = *(uint *)(lVar5 + (ulonglong)param_3 * 4);
            if ((int)uVar7 < 0) {
              lVar4 = *(longlong *)(param_1 + 0x18);
              uVar7 = uVar7 & 0x7fffffff;
            }
            *param_4 = (ulonglong)uVar7 + lVar4;
          }
          uVar7 = *(uint *)(lVar5 + (longlong)(int)(iVar3 + param_3) * 4);
        }
      }
    }
    else if ((param_2 == 2) && (uVar6 != 0)) {
      lVar4 = *(longlong *)(param_1 + 8);
      uVar1 = *(ushort *)(lVar4 + (ulonglong)uVar6 * 4);
      if (param_3 < uVar1) {
        lVar5 = lVar4 + (ulonglong)uVar6 * 4 + 2;
        if (param_4 != (longlong *)0x0) {
          uVar2 = *(ushort *)(lVar5 + (ulonglong)param_3 * 2);
          if ((int)(uint)uVar2 < *(int *)(param_1 + 0x24)) {
            lVar4 = lVar4 + (ulonglong)uVar2;
          }
          else {
            lVar4 = (*(longlong *)(param_1 + 0x18) + (ulonglong)uVar2) -
                    (longlong)*(int *)(param_1 + 0x24);
          }
          *param_4 = lVar4;
        }
        return *(uint *)(lVar5 + (ulonglong)(uint)uVar1 * 2 + (ulonglong)(~(uint)uVar1 & 1) * 2 +
                        (ulonglong)param_3 * 4);
      }
    }
  }
  return uVar7;
}



// FUNCTION 14258c4a0 FUN_14258c4a0 body=58 status=ok
// SIG undefined FUN_14258c4a0(void)

void FUN_14258c4a0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_2;
  FUN_14258c010(param_1,*(undefined4 *)(param_1 + 0x20),local_1c,&local_18);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 14258c4f0 FUN_14258c4f0 body=132 status=ok
// SIG undefined FUN_14258c4f0(void)

undefined8 FUN_14258c4f0(longlong *param_1,uint param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  if ((int)param_1[4] <= (int)param_2) {
    return 0;
  }
  uVar3 = (ulonglong)param_2;
  if (*param_1 == 0) {
    uVar4 = *(uint *)(param_1[1] + uVar3 * 4);
    uVar5 = (ulonglong)uVar4;
    lVar6 = *(longlong *)(param_4 + 8);
    if ((int)uVar4 < 0) {
      lVar6 = (ulonglong)(uVar4 & 0x7fffffff) + *(longlong *)(lVar6 + 0x18);
      goto LAB_14258c53f;
    }
  }
  else {
    uVar2 = *(ushort *)(*param_1 + uVar3 * 2);
    uVar5 = (ulonglong)uVar2;
    lVar6 = *(longlong *)(param_4 + 8);
    if (*(int *)(lVar6 + 0x24) <= (int)(uint)uVar2) {
      lVar6 = (uVar5 + *(longlong *)(lVar6 + 0x18)) - (longlong)*(int *)(lVar6 + 0x24);
      goto LAB_14258c53f;
    }
  }
  lVar6 = uVar5 + *(longlong *)(lVar6 + 8);
LAB_14258c53f:
  *param_3 = lVar6;
  if (param_1[2] == 0) {
    uVar4 = *(uint *)(param_1[3] + uVar3 * 4);
  }
  else {
    uVar2 = *(ushort *)(param_1[2] + uVar3 * 2);
    uVar4 = (uint)uVar2;
    piVar1 = (int *)(*(longlong *)(param_4 + 8) + 0x34);
    if (*piVar1 <= (int)(uint)uVar2) {
      uVar4 = ((uint)uVar2 - *piVar1) + *(int *)(*(longlong *)(param_4 + 8) + 0x30);
    }
    uVar4 = uVar4 | 0x60000000;
  }
  *(uint *)(param_4 + 0x10) = uVar4;
  return CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
}



// FUNCTION 14258c580 FUN_14258c580 body=110 status=ok
// SIG undefined FUN_14258c580(void)

uint FUN_14258c580(longlong param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0xffffffff;
  if (-1 < (int)param_3) {
    uVar3 = param_2 & 0xfffffff;
    if (param_2 >> 0x1c == 9) {
      if (param_3 < *(ushort *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 2)) {
        uVar1 = *(ushort *)
                 (*(longlong *)(param_1 + 0x10) + (ulonglong)uVar3 * 2 + 2 + (ulonglong)param_3 * 2)
        ;
        uVar2 = (uint)uVar1;
        if (*(int *)(param_1 + 0x34) <= (int)(uint)uVar1) {
          uVar2 = ((uint)uVar1 - *(int *)(param_1 + 0x34)) + *(int *)(param_1 + 0x30);
        }
        uVar2 = uVar2 | 0x60000000;
      }
    }
    else if ((param_2 >> 0x1c == 8) && (uVar3 != 0)) {
      if ((int)param_3 < *(int *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar3 * 4)) {
        return *(uint *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar3 * 4 + 4 +
                        (ulonglong)param_3 * 4);
      }
    }
  }
  return uVar2;
}



// FUNCTION 14258c5f0 FUN_14258c5f0 body=64 status=ok
// SIG undefined FUN_14258c5f0(void)

undefined8 FUN_14258c5f0(longlong *param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[2])) {
    if (*param_1 == 0) {
      uVar4 = *(uint *)(param_1[1] + (ulonglong)param_2 * 4);
    }
    else {
      uVar2 = *(ushort *)(*param_1 + (ulonglong)param_2 * 2);
      uVar4 = (uint)uVar2;
      piVar1 = (int *)(*(longlong *)(param_3 + 8) + 0x34);
      if (*piVar1 <= (int)(uint)uVar2) {
        uVar4 = ((uint)uVar2 - *piVar1) + *(int *)(*(longlong *)(param_3 + 8) + 0x30);
      }
      uVar4 = uVar4 | 0x60000000;
    }
    *(uint *)(param_3 + 0x10) = uVar4;
    uVar3 = CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 14258c630 FUN_14258c630 body=614 status=ok
// SIG undefined FUN_14258c630(void)

void FUN_14258c630(longlong param_1,uint param_2,longlong *param_3,undefined8 *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  size_t sVar6;
  char *pcVar7;
  uint uVar8;
  char *_Str;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 local_54 [4];
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _Str = (char *)*param_3;
  local_50 = (char *)0x0;
  local_60 = param_1;
  if ((*_Str != '\0') &&
     (((uVar2 = param_2 >> 0x1c, uVar2 == 2 || ((param_2 & 0xe0000000) == 0x40000000)) ||
      ((param_2 & 0xe0000000) == 0x80000000)))) {
    do {
      if ((*_Str == '\0') || (param_2 == 0xffffffff)) break;
      uVar8 = uVar2 & 0xe;
      if ((uVar2 != 2) && ((uVar8 != 8 && (uVar8 != 4)))) break;
      pcVar5 = strchr(_Str,0x2f);
      if (pcVar5 == (char *)0x0) {
        sVar6 = strlen(_Str);
        pcVar7 = _Str + sVar6;
      }
      else {
        if (pcVar5 == _Str) break;
        *pcVar5 = '\0';
        pcVar7 = pcVar5 + 1;
      }
      *param_3 = (longlong)pcVar7;
      if (uVar2 == 2 || uVar8 == 4) {
        *param_4 = _Str;
        uVar3 = FUN_14258c010(local_60,param_2,local_54,param_4);
        if (uVar3 == 0xffffffff) {
          lVar4 = strtol(_Str,&local_50,10);
          uVar3 = 0xffffffff;
          if ((-1 < lVar4) && (*local_50 == '\0')) {
            uVar3 = FUN_14258c350(local_60,param_2,lVar4,param_4);
          }
        }
      }
      else {
        uVar3 = 0xffffffff;
        if (uVar8 == 8) {
          uVar2 = strtol(_Str,&local_50,10);
          uVar3 = 0xffffffff;
          if ((-1 < (int)uVar2) && (*local_50 == '\0')) {
            uVar8 = param_2 & 0xfffffff;
            if (param_2 >> 0x1c == 9) {
              if (uVar2 < *(ushort *)(*(longlong *)(local_60 + 0x10) + (ulonglong)uVar8 * 2)) {
                uVar1 = *(ushort *)
                         (*(longlong *)(local_60 + 0x10) + (ulonglong)uVar8 * 2 + 2 +
                         (ulonglong)uVar2 * 2);
                uVar3 = (uint)uVar1;
                if (*(int *)(local_60 + 0x34) <= (int)(uint)uVar1) {
                  uVar3 = ((uint)uVar1 - *(int *)(local_60 + 0x34)) + *(int *)(local_60 + 0x30);
                }
                uVar3 = uVar3 | 0x60000000;
              }
            }
            else if ((param_2 >> 0x1c == 8) && ((param_2 & 0xfffffff) != 0)) {
              if ((int)uVar2 < *(int *)(*(longlong *)(local_60 + 8) + (ulonglong)uVar8 * 4)) {
                uVar3 = *(uint *)(*(longlong *)(local_60 + 8) + (ulonglong)uVar8 * 4 + 4 +
                                 (ulonglong)uVar2 * 4);
              }
            }
          }
          *param_4 = 0;
        }
      }
      uVar2 = uVar3 >> 0x1c;
      _Str = (char *)*param_3;
      param_2 = uVar3;
    } while (pcVar5 != (char *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 14258c8c0 FUN_14258c8c0 body=25 status=ok
// SIG undefined FUN_14258c8c0(void)

ushort FUN_14258c8c0(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  if (param_1 != (ushort *)0x0) {
    uVar1 = *param_1;
    uVar2 = uVar1 << 8 | uVar1 >> 8;
    if ((char)param_1[4] == '\0') {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 14258c8e0 FUN_14258c8e0 body=25 status=ok
// SIG undefined FUN_14258c8e0(void)

ushort FUN_14258c8e0(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  if (param_1 != (ushort *)0x0) {
    uVar1 = *param_1;
    uVar2 = uVar1 << 8 | uVar1 >> 8;
    if ((char)param_1[2] == '\0') {
      uVar2 = uVar1;
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 14258c900 FUN_14258c900 body=184 status=ok
// SIG undefined FUN_14258c900(void)

void FUN_14258c900(undefined8 *param_1,int *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined **ppuVar4;
  
  if (*param_2 < 1) {
    if ((((param_1 == (undefined8 *)0x0) || (puVar2 = (ushort *)param_1[1], puVar2 == (ushort *)0x0)
         ) || ((char)puVar2[1] != -0x26)) ||
       (((*(char *)((longlong)puVar2 + 3) != '\'' || ((char)puVar2[4] != '\0')) ||
        (*(char *)((longlong)puVar2 + 9) != '\0')))) {
LAB_14258c92c:
      *param_2 = 3;
      FUN_142532330();
      return;
    }
    if ((char)puVar2[6] == 'T') {
      if (((*(char *)((longlong)puVar2 + 0xd) != 'o') || ((char)puVar2[7] != 'C')) ||
         ((*(char *)((longlong)puVar2 + 0xf) != 'P' || ((char)puVar2[8] != '\x01'))))
      goto LAB_14258c92c;
      ppuVar4 = &PTR_FUN_1499fb4c0;
    }
    else {
      if (((((char)puVar2[6] != 'C') || (*(char *)((longlong)puVar2 + 0xd) != 'm')) ||
          ((char)puVar2[7] != 'n')) ||
         ((*(char *)((longlong)puVar2 + 0xf) != 'D' || ((char)puVar2[8] != '\x01'))))
      goto LAB_14258c92c;
      ppuVar4 = &PTR_FUN_1499fb4b0;
    }
    *param_1 = ppuVar4;
    uVar1 = *puVar2;
    uVar3 = uVar1 << 8 | uVar1 >> 8;
    if ((char)puVar2[4] == '\0') {
      uVar3 = uVar1;
    }
    param_1[2] = (longlong)puVar2 + (ulonglong)uVar3;
    if (0 < *param_2) {
      if (param_1 != (undefined8 *)0x0) {
        FUN_1424d9ff0();
        if (*(char *)(param_1 + 3) != '\0') {
          FUN_1424da110(param_1);
          return;
        }
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[6] = 0;
        *(undefined4 *)(param_1 + 6) = 0xffffffff;
      }
      return;
    }
  }
  return;
}



// FUNCTION 14258c9c0 FUN_14258c9c0 body=355 status=ok
// SIG undefined FUN_14258c9c0(void)

longlong FUN_14258c9c0(longlong param_1,longlong param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  
  piVar6 = *(int **)(param_1 + 0x10);
  if (piVar6 == (int *)0x0) {
    return *(longlong *)(param_1 + 8);
  }
  iVar5 = *piVar6;
  if ((longlong)iVar5 != 0) {
    uVar14 = 0;
    do {
      uVar9 = uVar14;
      cVar1 = *(char *)(param_2 + uVar9);
      cVar2 = *(char *)((longlong)piVar6 + uVar9 + (uint)piVar6[1]);
      if (cVar1 == '\0') break;
      uVar14 = uVar9 + 1;
    } while (cVar1 == cVar2);
    uVar10 = 0;
    if (cVar1 == cVar2) {
LAB_14258ca40:
      uVar14 = (ulonglong)uVar10;
      iVar7 = -1;
      if ((int)(uVar10 + 1) < iVar5) {
        iVar7 = piVar6[uVar14 * 2 + 4] - piVar6[uVar14 * 2 + 2];
      }
      *param_3 = iVar7;
      return (ulonglong)(uint)piVar6[uVar14 * 2 + 2] + (longlong)piVar6;
    }
    uVar10 = iVar5 - 1;
    uVar14 = 0;
    do {
      uVar8 = uVar14;
      cVar1 = *(char *)(param_2 + uVar8);
      cVar2 = *(char *)((longlong)piVar6 + uVar8 + (uint)piVar6[(longlong)iVar5 * 2 + -1]);
      if (cVar1 == '\0') break;
      uVar14 = uVar8 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
joined_r0x00014258cb0e:
      if (-1 < (int)uVar10) goto LAB_14258ca40;
    }
    else if (2 < iVar5) {
      iVar7 = 1;
      uVar11 = uVar10;
LAB_14258ca9a:
      do {
        uVar10 = (int)(uVar11 + iVar7) / 2;
        iVar13 = (int)uVar8;
        if ((int)uVar9 < (int)uVar8) {
          iVar13 = (int)uVar9;
        }
        lVar12 = 0;
        do {
          bVar3 = *(byte *)(param_2 + iVar13 + lVar12);
          bVar4 = *(byte *)((longlong)piVar6 +
                           lVar12 + (ulonglong)(uint)piVar6[(longlong)(int)uVar10 * 2 + 1] +
                                    (longlong)iVar13);
          lVar12 = lVar12 + 1;
          if (bVar3 == 0) break;
        } while (bVar3 == bVar4);
        uVar14 = (ulonglong)(iVar13 - 1) + lVar12;
        if (bVar4 <= bVar3) {
          if (bVar3 == bVar4) goto joined_r0x00014258cb0e;
          iVar7 = uVar10 + 1;
          uVar9 = uVar14 & 0xffffffff;
          if ((int)uVar11 <= iVar7) {
            return 0;
          }
          goto LAB_14258ca9a;
        }
        uVar8 = uVar14 & 0xffffffff;
        uVar11 = uVar10;
        if ((int)uVar10 <= iVar7) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 14258cb40 FUN_14258cb40 body=378 status=ok
// SIG undefined FUN_14258cb40(void)

undefined8 FUN_14258cb40(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int *piVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  piVar5 = *(int **)(param_1 + 0x10);
  if (piVar5 == (int *)0x0) {
    uVar6 = *(undefined8 *)(param_1 + 8);
  }
  else {
    iVar9 = *piVar5;
    if ((longlong)iVar9 != 0) {
      plVar1 = (longlong *)(piVar5 + 2);
      uVar11 = 0;
      do {
        uVar10 = uVar11;
        cVar2 = *(char *)(param_2 + uVar10);
        if (cVar2 == '\0') break;
        uVar11 = uVar10 + 1;
      } while (cVar2 == *(char *)(*plVar1 + uVar10));
      uVar11 = 0;
      if (cVar2 == *(char *)(*plVar1 + uVar10)) {
LAB_14258cbe0:
        *param_3 = 0xffffffff;
        uVar6 = FUN_1425322e0(*(undefined8 *)(piVar5 + (uVar11 & 0xffffffff) * 4 + 4));
        return uVar6;
      }
      uVar11 = (longlong)iVar9 - 1;
      uVar13 = 0;
      do {
        uVar8 = uVar13;
        cVar2 = *(char *)(param_2 + uVar8);
        if (cVar2 == '\0') break;
        uVar13 = uVar8 + 1;
      } while (cVar2 == *(char *)(plVar1[uVar11 * 2] + uVar8));
      if (cVar2 == *(char *)(plVar1[uVar11 * 2] + uVar8)) {
        uVar7 = (uint)uVar11;
joined_r0x00014258ccab:
        if (-1 < (int)uVar7) goto LAB_14258cbe0;
      }
      else if (2 < iVar9) {
        iVar9 = 1;
LAB_14258cc3a:
        do {
          uVar7 = ((int)uVar11 + iVar9) / 2;
          iVar12 = (int)uVar8;
          if ((int)uVar10 < (int)uVar8) {
            iVar12 = (int)uVar10;
          }
          lVar14 = 0;
          do {
            bVar3 = *(byte *)(param_2 + iVar12 + lVar14);
            bVar4 = *(byte *)((longlong)iVar12 + plVar1[(longlong)(int)uVar7 * 2] + lVar14);
            lVar14 = lVar14 + 1;
            if (bVar3 == 0) break;
          } while (bVar3 == bVar4);
          uVar13 = (ulonglong)(iVar12 - 1) + lVar14;
          if (bVar3 < bVar4) {
            uVar8 = uVar13 & 0xffffffff;
            uVar11 = (ulonglong)uVar7;
            if ((int)uVar7 <= iVar9) {
              return 0;
            }
            goto LAB_14258cc3a;
          }
          if (bVar3 == bVar4) {
            uVar11 = (ulonglong)uVar7;
            goto joined_r0x00014258ccab;
          }
          iVar9 = uVar7 + 1;
          uVar10 = uVar13 & 0xffffffff;
          if ((int)uVar11 <= iVar9) {
            return 0;
          }
        } while( true );
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 14258cce0 FUN_14258cce0 body=400 status=ok
// SIG undefined FUN_14258cce0(void)

void FUN_14258cce0(longlong param_1,uint param_2,uint param_3,undefined1 *param_4,
                  undefined1 *param_5,char param_6,int *param_7)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 auStack_218 [32];
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  undefined1 *local_1e0;
  undefined1 local_1d8 [408];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if ((param_7 == (int *)0x0) || (0 < *param_7)) goto LAB_14258cdac;
  if ((param_4 == (undefined1 *)0x0) ||
     (((uVar2 = (ulonglong)param_3, (int)param_3 < 1 || ((int)param_2 < 0)) ||
      (param_1 == 0 && 0 < (int)param_2)))) {
    *param_7 = 1;
    goto LAB_14258cdac;
  }
  if (param_2 < 2) goto LAB_14258cdac;
  if ((param_2 < 9) || (param_6 != '\0')) {
    if (param_3 < 0xc9) {
      local_1f0 = local_1d8;
      local_1f8 = param_5;
      FUN_14258ce90(param_1,param_2,uVar2,param_4);
      goto LAB_14258cdac;
    }
    puVar1 = (undefined1 *)FUN_1424da030(uVar2);
    if (puVar1 == (undefined1 *)0x0) goto LAB_14258ce77;
    local_1f8 = param_5;
    local_1f0 = puVar1;
    FUN_14258ce90(param_1,param_2,uVar2,param_4);
  }
  else {
    if (param_3 < 0xc9) {
      local_1e0 = local_1d8 + uVar2;
      local_1e8 = local_1d8;
      local_1f0 = param_5;
      local_1f8 = param_4;
      FUN_14258d080(param_1,0,param_2,uVar2);
      goto LAB_14258cdac;
    }
    puVar1 = (undefined1 *)FUN_1424da030(param_3 * 2);
    if (puVar1 == (undefined1 *)0x0) {
LAB_14258ce77:
      *param_7 = 7;
      goto LAB_14258cdac;
    }
    local_1e0 = puVar1 + param_3;
    local_1f0 = param_5;
    local_1f8 = param_4;
    local_1e8 = puVar1;
    FUN_14258d080(param_1,0,param_2,uVar2);
    if (puVar1 == local_1d8) goto LAB_14258cdac;
  }
  FUN_1424da110(puVar1);
LAB_14258cdac:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_218);
}



// FUNCTION 14258ce90 FUN_14258ce90 body=466 status=ok
// SIG undefined FUN_14258ce90(void)

void FUN_14258ce90(longlong param_1,uint param_2,uint param_3,code *param_4,undefined8 param_5,
                  void *param_6)

{
  bool bVar1;
  int iVar2;
  ulonglong _Size;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  void *_Src_00;
  
  if (1 < (int)param_2) {
    lVar4 = (longlong)(int)param_3;
    _Size = (ulonglong)param_3;
    uVar7 = 1;
    do {
      _Src = (void *)(uVar7 * lVar4 + param_1);
      uVar6 = 0;
      if (uVar7 < 9) {
        bVar1 = false;
        uVar9 = uVar7;
LAB_14258cfa3:
        lVar3 = (int)uVar6 * lVar4 + param_1;
        uVar5 = uVar6;
        do {
          uVar6 = uVar5;
          iVar2 = (*param_4)(param_5,_Src,lVar3);
          if (iVar2 == 0) {
            bVar1 = true;
          }
          else if (iVar2 < 0) break;
          uVar5 = uVar6 + 1;
          lVar3 = lVar3 + lVar4;
          uVar6 = (uint)uVar9;
        } while (uVar6 != uVar5);
      }
      else {
        uVar6 = 0;
        bVar1 = false;
        uVar8 = uVar7;
        do {
          uVar5 = (int)(uVar6 + (int)uVar8) / 2;
          iVar2 = (*param_4)(param_5,_Src,(int)(uVar5 * param_3) + param_1);
          if (-1 < iVar2) {
            uVar6 = uVar5;
          }
          uVar9 = (ulonglong)uVar5;
          if (-1 < iVar2) {
            uVar9 = uVar8 & 0xffffffff;
          }
          if (iVar2 == 0) {
            bVar1 = true;
            uVar9 = uVar8 & 0xffffffff;
            uVar6 = uVar5 + 1;
          }
          uVar8 = uVar9;
        } while (8 < (int)((int)uVar9 - uVar6));
        if ((int)uVar6 < (int)uVar9) goto LAB_14258cfa3;
      }
      uVar5 = ~uVar6;
      if (bVar1) {
        uVar5 = uVar6 - 1;
      }
      uVar6 = ~uVar5;
      if (-1 < (int)uVar5) {
        uVar6 = uVar5 + 1;
      }
      lVar3 = uVar7 - (longlong)(int)uVar6;
      if (lVar3 != 0 && (longlong)(int)uVar6 <= (longlong)uVar7) {
        _Src_00 = (void *)((int)(uVar6 * param_3) + param_1);
        memcpy(param_6,_Src,_Size);
        memmove((void *)((longlong)_Src_00 + _Size),_Src_00,lVar3 * _Size);
        memcpy(_Src_00,param_6,_Size);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_2);
  }
  return;
}



// FUNCTION 14258d080 FUN_14258d080 body=732 status=ok
// SIG undefined FUN_14258d080(void)

void FUN_14258d080(longlong param_1,int param_2,int param_3,uint param_4,code *param_5,
                  undefined8 param_6,void *param_7,void *param_8)

{
  int iVar1;
  int iVar2;
  ulonglong _Size;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *_Src;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  void *_Src_00;
  int iVar10;
  
  _Size = (ulonglong)param_4;
  lVar8 = (longlong)(int)param_4;
  do {
    if (param_3 <= param_2 + 9) {
      FUN_14258ce90(param_1 + (int)(param_2 * param_4),param_3 - param_2,param_4,param_5,param_6,
                    param_7);
      return;
    }
    memcpy(param_7,(void *)((longlong)((param_3 + param_2) / 2) * _Size + param_1),_Size);
    iVar7 = param_3;
    iVar2 = param_2;
    do {
      lVar9 = ((longlong)iVar2 << 0x20) + -0x100000000;
      lVar5 = lVar8 * iVar2 + param_1;
      do {
        iVar3 = iVar2;
        lVar9 = lVar9 + 0x100000000;
        iVar1 = (*param_5)(param_6,lVar5,param_7);
        iVar4 = iVar3 + 1;
        lVar5 = lVar5 + lVar8;
        iVar2 = iVar4;
      } while (iVar1 < 0);
      lVar5 = (longlong)iVar7 << 0x20;
      lVar6 = ((longlong)iVar7 + -1) * lVar8 + param_1;
      do {
        iVar1 = iVar7;
        iVar2 = (*param_5)(param_6,param_7,lVar6);
        iVar10 = iVar1 + -1;
        lVar5 = lVar5 + -0x100000000;
        lVar6 = lVar6 - lVar8;
        iVar7 = iVar10;
      } while (iVar2 < 0);
      iVar7 = iVar1;
      iVar2 = iVar3;
      if ((iVar3 < iVar1) && (iVar7 = iVar10, iVar2 = iVar4, iVar3 < iVar10)) {
        _Src_00 = (void *)((lVar9 >> 0x20) * _Size + param_1);
        memcpy(param_8,_Src_00,_Size);
        _Src = (void *)((lVar5 >> 0x20) * _Size + param_1);
        memcpy(_Src_00,_Src,_Size);
        memcpy(_Src,param_8,_Size);
      }
    } while (iVar2 < iVar7);
    if (iVar7 - param_2 < param_3 - iVar2) {
      iVar1 = iVar2;
      iVar3 = param_3;
      if (param_2 < iVar7 + -1) {
        FUN_14258d080(param_1,param_2,iVar7,param_4,param_5,param_6,param_7,param_8);
      }
    }
    else {
      iVar1 = param_2;
      iVar3 = iVar7;
      if (iVar2 < param_3 + -1) {
        FUN_14258d080(param_1,iVar2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
    }
    param_3 = iVar3;
    param_2 = iVar1;
  } while (iVar1 < param_3 + -1);
  return;
}



// FUNCTION 14258d380 FUN_14258d380 body=778 status=ok
// SIG undefined FUN_14258d380(void)

void FUN_14258d380(uint param_1,void *param_2,int param_3,int *param_4)

{
  short sVar1;
  WCHAR WVar2;
  char *_Str;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  uint *puVar6;
  size_t sVar7;
  size_t sVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined **ppuVar12;
  uint *puVar13;
  char *_Str_00;
  uint uVar14;
  int iVar15;
  undefined1 auStack_168 [30];
  short sStack_14a;
  WCHAR local_148 [87];
  undefined1 uStack_99;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_4b = 0;
  uStack_48 = 0;
  uVar14 = param_1 & 0x3ff;
  if (uVar14 != 0x92) {
    local_148[0x50] = 0;
    local_148[0x51] = L'\0';
    local_148[0x52] = L'\0';
    local_148[0x53] = L'\0';
    local_148[0x54] = L'\0';
    local_148[0x48] = L'\0';
    local_148[0x49] = L'\0';
    local_148[0x4a] = L'\0';
    local_148[0x4b] = L'\0';
    local_148[0x4c] = 0;
    local_148[0x4d] = L'\0';
    local_148[0x4e] = L'\0';
    local_148[0x4f] = L'\0';
    local_148[0x40] = L'\0';
    local_148[0x41] = L'\0';
    local_148[0x42] = L'\0';
    local_148[0x43] = L'\0';
    local_148[0x44] = L'\0';
    local_148[0x45] = L'\0';
    local_148[0x46] = L'\0';
    local_148[0x47] = L'\0';
    local_148[0x38] = L'\0';
    local_148[0x39] = L'\0';
    local_148[0x3a] = L'\0';
    local_148[0x3b] = L'\0';
    local_148[0x3c] = L'\0';
    local_148[0x3d] = L'\0';
    local_148[0x3e] = L'\0';
    local_148[0x3f] = L'\0';
    local_148[0x30] = L'\0';
    local_148[0x31] = L'\0';
    local_148[0x32] = L'\0';
    local_148[0x33] = L'\0';
    local_148[0x34] = L'\0';
    local_148[0x35] = L'\0';
    local_148[0x36] = L'\0';
    local_148[0x37] = L'\0';
    local_148[0x28] = L'\0';
    local_148[0x29] = L'\0';
    local_148[0x2a] = L'\0';
    local_148[0x2b] = L'\0';
    local_148[0x2c] = L'\0';
    local_148[0x2d] = L'\0';
    local_148[0x2e] = L'\0';
    local_148[0x2f] = L'\0';
    local_148[0x20] = L'\0';
    local_148[0x21] = L'\0';
    local_148[0x22] = L'\0';
    local_148[0x23] = L'\0';
    local_148[0x24] = L'\0';
    local_148[0x25] = L'\0';
    local_148[0x26] = L'\0';
    local_148[0x27] = L'\0';
    local_148[0x18] = L'\0';
    local_148[0x19] = L'\0';
    local_148[0x1a] = L'\0';
    local_148[0x1b] = L'\0';
    local_148[0x1c] = L'\0';
    local_148[0x1d] = L'\0';
    local_148[0x1e] = L'\0';
    local_148[0x1f] = L'\0';
    local_148[0x10] = L'\0';
    local_148[0x11] = L'\0';
    local_148[0x12] = L'\0';
    local_148[0x13] = L'\0';
    local_148[0x14] = L'\0';
    local_148[0x15] = L'\0';
    local_148[0x16] = L'\0';
    local_148[0x17] = L'\0';
    local_148[8] = L'\0';
    local_148[9] = L'\0';
    local_148[10] = L'\0';
    local_148[0xb] = L'\0';
    local_148[0xc] = L'\0';
    local_148[0xd] = L'\0';
    local_148[0xe] = L'\0';
    local_148[0xf] = L'\0';
    local_148[0] = L'\0';
    local_148[1] = L'\0';
    local_148[2] = L'\0';
    local_148[3] = L'\0';
    local_148[4] = L'\0';
    local_148[5] = L'\0';
    local_148[6] = L'\0';
    local_148[7] = L'\0';
    iVar5 = LCIDToLocaleName(param_1,local_148,0x55,0x8000000);
    if (1 < iVar5) {
      lVar9 = 1;
      do {
        sVar1 = (&sStack_14a)[lVar9];
        (&uStack_99)[lVar9] = (char)sVar1;
        bVar3 = true;
        if (sVar1 == 0x2d) {
          (&uStack_99)[lVar9] = 0x5f;
        }
        else {
          if (sVar1 == 0) goto LAB_14258d5cc;
          if (sVar1 == 0x5f) {
            puVar4 = (undefined8 *)&uStack_99;
            lVar11 = lVar9 + -1;
            goto LAB_14258d5c4;
          }
        }
        if (lVar9 == 0x55) goto LAB_14258d5cc;
        WVar2 = local_148[lVar9];
        *(char *)((longlong)&local_98 + lVar9) = (char)WVar2;
        if (WVar2 == L'-') {
          *(undefined1 *)((longlong)&local_98 + lVar9) = 0x5f;
        }
        else {
          if (WVar2 == L'\0') goto LAB_14258d5cc;
          if (WVar2 == L'_') goto code_r0x00014258d4e0;
        }
        lVar9 = lVar9 + 2;
      } while( true );
    }
  }
  _Str_00 = (char *)0x0;
LAB_14258d4f2:
  lVar9 = 2;
  ppuVar12 = &PTR_DAT_1499fb538;
  do {
    puVar6 = (uint *)ppuVar12[-4];
    if (uVar14 == *puVar6) {
      lVar9 = lVar9 + -2;
LAB_14258d536:
      if ((ulonglong)(uint)(&DAT_1499fb510)[lVar9 * 4] == 0) goto LAB_14258d561;
      uVar10 = 0;
      puVar13 = puVar6;
      goto LAB_14258d550;
    }
    puVar6 = (uint *)ppuVar12[-2];
    if (uVar14 == *puVar6) {
      lVar9 = lVar9 + -1;
      goto LAB_14258d536;
    }
    puVar6 = (uint *)*ppuVar12;
    if (uVar14 == *puVar6) goto LAB_14258d536;
    lVar9 = lVar9 + 3;
    ppuVar12 = ppuVar12 + 6;
  } while (lVar9 != 0x8f);
LAB_14258d59a:
  if (_Str_00 == (char *)0x0) {
    iVar5 = 1;
  }
  else {
LAB_14258d63d:
    sVar8 = strlen(_Str_00);
    iVar15 = (int)sVar8;
    iVar5 = param_3;
    if (iVar15 < param_3) {
      iVar5 = iVar15;
    }
    memcpy(param_2,_Str_00,(longlong)iVar5);
    if (iVar15 < param_3) {
      *(undefined1 *)((longlong)param_2 + (longlong)iVar15) = 0;
      iVar5 = 0;
      if (*param_4 != -0x7c) goto LAB_14258d683;
    }
    else {
      iVar5 = 0xf;
      if (iVar15 == param_3) {
        iVar5 = -0x7c;
      }
    }
  }
  *param_4 = iVar5;
LAB_14258d683:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_168);
code_r0x00014258d4e0:
  puVar4 = &local_98;
  lVar11 = lVar9;
LAB_14258d5c4:
  *(undefined1 *)((longlong)puVar4 + lVar9) = 0;
  bVar3 = false;
  iVar5 = (int)lVar11;
LAB_14258d5cc:
  if (2 < iVar5) {
    if ((((char)local_98 != 'q') || (local_98._1_1_ != 'u')) || (local_98._2_1_ != 'z')) {
      if ((((char)local_98 != 'p') || (local_98._1_1_ != 'r')) || (local_98._2_1_ != 's'))
      goto LAB_14258d62c;
      local_98 = CONCAT62(local_98._2_6_,0x6166);
    }
    local_98._0_3_ = (uint3)(ushort)local_98;
    strcat((char *)&local_98,(char *)((longlong)&local_98 + 3));
  }
LAB_14258d62c:
  _Str_00 = (char *)&local_98;
  if (bVar3) goto LAB_14258d63d;
  goto LAB_14258d4f2;
  while( true ) {
    uVar10 = uVar10 + 1;
    puVar13 = puVar13 + 4;
    if ((uint)(&DAT_1499fb510)[lVar9 * 4] == uVar10) break;
LAB_14258d550:
    if (*puVar13 == param_1) goto LAB_14258d563;
  }
LAB_14258d561:
  uVar10 = 0;
LAB_14258d563:
  _Str = *(char **)(puVar6 + uVar10 * 4 + 2);
  if (_Str == (char *)0x0) goto LAB_14258d59a;
  if (_Str_00 != (char *)0x0) {
    sVar8 = strlen(_Str);
    sVar7 = strlen(_Str_00);
    if (sVar8 <= sVar7) goto LAB_14258d63d;
  }
  _Str_00 = _Str;
  goto LAB_14258d63d;
}



// FUNCTION 14258d6b0 FUN_14258d6b0 body=646 status=ok
// SIG undefined FUN_14258d6b0(void)

void FUN_14258d6b0(char *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined1 auStack_278 [32];
  int *local_258;
  short asStack_24e [3];
  WCHAR local_248;
  short asStack_246 [2];
  WCHAR aWStack_242 [83];
  char acStack_19b [3];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined5 uStack_150;
  undefined3 uStack_14b;
  undefined5 uStack_148;
  char local_138 [160];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (*param_2 < 1) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_138[0x90] = '\0';
    local_138[0x91] = '\0';
    local_138[0x92] = '\0';
    local_138[0x93] = '\0';
    local_138[0x94] = '\0';
    local_138[0x95] = '\0';
    local_138[0x96] = '\0';
    local_138[0x97] = '\0';
    local_138[0x98] = '\0';
    local_138[0x99] = '\0';
    local_138[0x9a] = '\0';
    local_138[0x9b] = '\0';
    local_138[0x9c] = '\0';
    local_138[0x80] = '\0';
    local_138[0x81] = '\0';
    local_138[0x82] = '\0';
    local_138[0x83] = '\0';
    local_138[0x84] = '\0';
    local_138[0x85] = '\0';
    local_138[0x86] = '\0';
    local_138[0x87] = '\0';
    local_138[0x88] = '\0';
    local_138[0x89] = '\0';
    local_138[0x8a] = '\0';
    local_138[0x8b] = '\0';
    local_138[0x8c] = '\0';
    local_138[0x8d] = '\0';
    local_138[0x8e] = '\0';
    local_138[0x8f] = '\0';
    local_138[0x70] = '\0';
    local_138[0x71] = '\0';
    local_138[0x72] = '\0';
    local_138[0x73] = '\0';
    local_138[0x74] = '\0';
    local_138[0x75] = '\0';
    local_138[0x76] = '\0';
    local_138[0x77] = '\0';
    local_138[0x78] = '\0';
    local_138[0x79] = '\0';
    local_138[0x7a] = '\0';
    local_138[0x7b] = '\0';
    local_138[0x7c] = '\0';
    local_138[0x7d] = '\0';
    local_138[0x7e] = '\0';
    local_138[0x7f] = '\0';
    local_138[0x60] = '\0';
    local_138[0x61] = '\0';
    local_138[0x62] = '\0';
    local_138[99] = '\0';
    local_138[100] = '\0';
    local_138[0x65] = '\0';
    local_138[0x66] = '\0';
    local_138[0x67] = '\0';
    local_138[0x68] = '\0';
    local_138[0x69] = '\0';
    local_138[0x6a] = '\0';
    local_138[0x6b] = '\0';
    local_138[0x6c] = '\0';
    local_138[0x6d] = '\0';
    local_138[0x6e] = '\0';
    local_138[0x6f] = '\0';
    local_138[0x50] = '\0';
    local_138[0x51] = '\0';
    local_138[0x52] = '\0';
    local_138[0x53] = '\0';
    local_138[0x54] = '\0';
    local_138[0x55] = '\0';
    local_138[0x56] = '\0';
    local_138[0x57] = '\0';
    local_138[0x58] = '\0';
    local_138[0x59] = '\0';
    local_138[0x5a] = '\0';
    local_138[0x5b] = '\0';
    local_138[0x5c] = '\0';
    local_138[0x5d] = '\0';
    local_138[0x5e] = '\0';
    local_138[0x5f] = '\0';
    local_138[0x40] = '\0';
    local_138[0x41] = '\0';
    local_138[0x42] = '\0';
    local_138[0x43] = '\0';
    local_138[0x44] = '\0';
    local_138[0x45] = '\0';
    local_138[0x46] = '\0';
    local_138[0x47] = '\0';
    local_138[0x48] = '\0';
    local_138[0x49] = '\0';
    local_138[0x4a] = '\0';
    local_138[0x4b] = '\0';
    local_138[0x4c] = '\0';
    local_138[0x4d] = '\0';
    local_138[0x4e] = '\0';
    local_138[0x4f] = '\0';
    local_138[0x30] = '\0';
    local_138[0x31] = '\0';
    local_138[0x32] = '\0';
    local_138[0x33] = '\0';
    local_138[0x34] = '\0';
    local_138[0x35] = '\0';
    local_138[0x36] = '\0';
    local_138[0x37] = '\0';
    local_138[0x38] = '\0';
    local_138[0x39] = '\0';
    local_138[0x3a] = '\0';
    local_138[0x3b] = '\0';
    local_138[0x3c] = '\0';
    local_138[0x3d] = '\0';
    local_138[0x3e] = '\0';
    local_138[0x3f] = '\0';
    local_138[0x20] = '\0';
    local_138[0x21] = '\0';
    local_138[0x22] = '\0';
    local_138[0x23] = '\0';
    local_138[0x24] = '\0';
    local_138[0x25] = '\0';
    local_138[0x26] = '\0';
    local_138[0x27] = '\0';
    local_138[0x28] = '\0';
    local_138[0x29] = '\0';
    local_138[0x2a] = '\0';
    local_138[0x2b] = '\0';
    local_138[0x2c] = '\0';
    local_138[0x2d] = '\0';
    local_138[0x2e] = '\0';
    local_138[0x2f] = '\0';
    local_138[0x10] = '\0';
    local_138[0x11] = '\0';
    local_138[0x12] = '\0';
    local_138[0x13] = '\0';
    local_138[0x14] = '\0';
    local_138[0x15] = '\0';
    local_138[0x16] = '\0';
    local_138[0x17] = '\0';
    local_138[0x18] = '\0';
    local_138[0x19] = '\0';
    local_138[0x1a] = '\0';
    local_138[0x1b] = '\0';
    local_138[0x1c] = '\0';
    local_138[0x1d] = '\0';
    local_138[0x1e] = '\0';
    local_138[0x1f] = '\0';
    local_138[0] = '\0';
    local_138[1] = '\0';
    local_138[2] = '\0';
    local_138[3] = '\0';
    local_138[4] = '\0';
    local_138[5] = '\0';
    local_138[6] = '\0';
    local_138[7] = '\0';
    local_138[8] = '\0';
    local_138[9] = '\0';
    local_138[10] = '\0';
    local_138[0xb] = '\0';
    local_138[0xc] = '\0';
    local_138[0xd] = '\0';
    local_138[0xe] = '\0';
    local_138[0xf] = '\0';
    pcVar3 = strchr(param_1,0x40);
    if (pcVar3 != (char *)0x0) {
      local_258 = param_2;
      iVar1 = FUN_1424e74e0(param_1,"collation",&local_98,0x5f);
      if ((*param_2 < 1) && (0 < iVar1)) goto LAB_14258d833;
      uVar2 = FUN_1424ea1d0(param_1,local_138,0x9c,param_2);
      if ((*param_2 < 1) && (0 < (int)uVar2)) {
        local_138[uVar2] = '\0';
        param_1 = local_138;
      }
    }
    local_158 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_198 = 0;
    uStack_190 = 0;
    uStack_14b = 0;
    uStack_148 = 0;
    local_258 = param_2;
    FUN_142505a90(param_1,&local_198,0x55,0);
    if (*param_2 < 1) {
      aWStack_242[0x4d] = 0;
      aWStack_242[0x4e] = L'\0';
      aWStack_242[0x4f] = L'\0';
      aWStack_242[0x50] = L'\0';
      aWStack_242[0x51] = L'\0';
      aWStack_242[0x45] = L'\0';
      aWStack_242[0x46] = L'\0';
      aWStack_242[0x47] = L'\0';
      aWStack_242[0x48] = L'\0';
      aWStack_242[0x49] = 0;
      aWStack_242[0x4a] = L'\0';
      aWStack_242[0x4b] = L'\0';
      aWStack_242[0x4c] = L'\0';
      aWStack_242[0x3d] = L'\0';
      aWStack_242[0x3e] = L'\0';
      aWStack_242[0x3f] = L'\0';
      aWStack_242[0x40] = L'\0';
      aWStack_242[0x41] = L'\0';
      aWStack_242[0x42] = L'\0';
      aWStack_242[0x43] = L'\0';
      aWStack_242[0x44] = L'\0';
      aWStack_242[0x35] = L'\0';
      aWStack_242[0x36] = L'\0';
      aWStack_242[0x37] = L'\0';
      aWStack_242[0x38] = L'\0';
      aWStack_242[0x39] = L'\0';
      aWStack_242[0x3a] = L'\0';
      aWStack_242[0x3b] = L'\0';
      aWStack_242[0x3c] = L'\0';
      aWStack_242[0x2d] = L'\0';
      aWStack_242[0x2e] = L'\0';
      aWStack_242[0x2f] = L'\0';
      aWStack_242[0x30] = L'\0';
      aWStack_242[0x31] = L'\0';
      aWStack_242[0x32] = L'\0';
      aWStack_242[0x33] = L'\0';
      aWStack_242[0x34] = L'\0';
      aWStack_242[0x25] = L'\0';
      aWStack_242[0x26] = L'\0';
      aWStack_242[0x27] = L'\0';
      aWStack_242[0x28] = L'\0';
      aWStack_242[0x29] = L'\0';
      aWStack_242[0x2a] = L'\0';
      aWStack_242[0x2b] = L'\0';
      aWStack_242[0x2c] = L'\0';
      aWStack_242[0x1d] = L'\0';
      aWStack_242[0x1e] = L'\0';
      aWStack_242[0x1f] = L'\0';
      aWStack_242[0x20] = L'\0';
      aWStack_242[0x21] = L'\0';
      aWStack_242[0x22] = L'\0';
      aWStack_242[0x23] = L'\0';
      aWStack_242[0x24] = L'\0';
      aWStack_242[0x15] = L'\0';
      aWStack_242[0x16] = L'\0';
      aWStack_242[0x17] = L'\0';
      aWStack_242[0x18] = L'\0';
      aWStack_242[0x19] = L'\0';
      aWStack_242[0x1a] = L'\0';
      aWStack_242[0x1b] = L'\0';
      aWStack_242[0x1c] = L'\0';
      aWStack_242[0xd] = L'\0';
      aWStack_242[0xe] = L'\0';
      aWStack_242[0xf] = L'\0';
      aWStack_242[0x10] = L'\0';
      aWStack_242[0x11] = L'\0';
      aWStack_242[0x12] = L'\0';
      aWStack_242[0x13] = L'\0';
      aWStack_242[0x14] = L'\0';
      aWStack_242[5] = L'\0';
      aWStack_242[6] = L'\0';
      aWStack_242[7] = L'\0';
      aWStack_242[8] = L'\0';
      aWStack_242[9] = L'\0';
      aWStack_242[10] = L'\0';
      aWStack_242[0xb] = L'\0';
      aWStack_242[0xc] = L'\0';
      _local_248 = 0;
      aWStack_242[1] = L'\0';
      aWStack_242[2] = L'\0';
      aWStack_242[3] = L'\0';
      aWStack_242[4] = L'\0';
      for (uVar4 = 3; acStack_19b[uVar4] != '\0'; uVar4 = uVar4 + 4) {
        asStack_24e[uVar4] = (short)acStack_19b[uVar4];
        if (uVar4 == 0x57) goto LAB_14258d833;
        if (acStack_19b[uVar4 + 1] == '\0') {
          uVar4 = uVar4 - 2;
          goto LAB_14258d917;
        }
        asStack_24e[uVar4 + 1] = (short)acStack_19b[uVar4 + 1];
        if (acStack_19b[uVar4 + 2] == '\0') {
          uVar4 = uVar4 - 1;
          goto LAB_14258d917;
        }
        asStack_24e[uVar4 + 2] = (short)acStack_19b[uVar4 + 2];
        if (*(char *)((longlong)&local_198 + uVar4) == '\0') goto LAB_14258d917;
        (&local_248)[uVar4] = (short)*(char *)((longlong)&local_198 + uVar4);
      }
      uVar4 = uVar4 - 3;
LAB_14258d917:
      if ((uint)uVar4 < 0x54) {
        (&local_248)[uVar4 & 0xffffffff] = L'\0';
        LocaleNameToLCID(&local_248,0x8000000);
      }
    }
  }
LAB_14258d833:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_278);
}



// FUNCTION 14258d950 FUN_14258d950 body=515 status=ok
// SIG undefined FUN_14258d950(void)

ulonglong FUN_14258d950(char *param_1,char *param_2,undefined4 *param_3)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  size_t sVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint local_54;
  uint local_48;
  
  uVar9 = 0;
  local_54 = 0;
  if ((((param_1 != (char *)0x0) && (local_54 = uVar9, param_2 != (char *)0x0)) &&
      (sVar5 = strlen(param_1), 1 < sVar5)) && (sVar5 = strlen(param_2), 1 < sVar5)) {
    uVar11 = 0;
    uVar9 = 0;
    uVar13 = 0x8d;
    do {
      uVar10 = uVar11 + uVar13 >> 1;
      if (uVar10 == uVar9) break;
      iVar4 = strcmp(param_1,*(char **)((&PTR_DAT_1499fb518)[(ulonglong)uVar10 * 2] + 8));
      uVar8 = uVar10;
      if ((-1 < iVar4) && (uVar8 = uVar13, uVar11 = uVar10, iVar4 == 0)) {
        uVar6 = FUN_14258db70(&DAT_1499fb510 + (ulonglong)uVar10 * 4,param_2,param_3);
        return uVar6;
      }
      uVar9 = uVar10;
      uVar13 = uVar8;
    } while (uVar11 < uVar8);
    local_54 = 0xffffffff;
    lVar7 = 0;
    do {
      uVar9 = 0;
      iVar4 = 0;
      if ((ulonglong)(uint)(&DAT_1499fb510)[lVar7 * 4] != 0) {
        uVar6 = 0;
        iVar4 = 0;
        uVar9 = 0;
        do {
          pcVar1 = *(char **)((&PTR_DAT_1499fb518)[lVar7 * 2] + uVar6 * 0x10 + 8);
          uVar12 = 0;
          if ((*param_2 != '\0') && (uVar12 = 0, *param_2 == *pcVar1)) {
            uVar14 = 0;
            do {
              lVar2 = uVar14 + 1;
              uVar12 = uVar14 + 1;
              if (param_2[lVar2] == '\0') break;
              lVar3 = uVar14 + 1;
              uVar14 = uVar12;
            } while (param_2[lVar2] == pcVar1[lVar3]);
          }
          uVar11 = (uint)uVar12;
          if (((int)uVar9 < (int)uVar11) && (pcVar1[uVar12 & 0xffffffff] == '\0')) {
            iVar4 = (int)uVar6;
            local_48 = (uint)sVar5;
            uVar9 = uVar11;
            if (uVar11 == local_48) {
              local_54 = *(uint *)((&PTR_DAT_1499fb518)[lVar7 * 2] + uVar6 * 0x10);
              goto LAB_14258db32;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != (uint)(&DAT_1499fb510)[lVar7 * 4]);
      }
      if ((param_2[uVar9] == '_') || (param_2[uVar9] == '@')) {
        if (*(char *)(*(longlong *)((&PTR_DAT_1499fb518)[lVar7 * 2] + (longlong)iVar4 * 0x10 + 8) +
                     (ulonglong)uVar9) == '\0') {
          local_54 = *(uint *)((&PTR_DAT_1499fb518)[lVar7 * 2] + (longlong)iVar4 * 0x10);
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x8d);
    if (local_54 == 0xffffffff) {
      *param_3 = 1;
      local_54 = 0;
    }
    else {
      *param_3 = 0xffffff80;
    }
  }
LAB_14258db32:
  return (ulonglong)local_54;
}



// FUNCTION 14258db70 FUN_14258db70 body=248 status=ok
// SIG undefined FUN_14258db70(void)

undefined4 FUN_14258db70(uint *param_1,char *param_2,undefined4 *param_3)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  size_t sVar4;
  undefined4 *puVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  sVar4 = strlen(param_2);
  if ((ulonglong)*param_1 == 0) {
    uVar9 = 0;
    iVar6 = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    uVar9 = 0;
    do {
      pcVar1 = *(char **)(*(longlong *)(param_1 + 2) + 8 + uVar8 * 0x10);
      uVar12 = 0;
      if ((*param_2 != '\0') && (uVar12 = 0, *param_2 == *pcVar1)) {
        uVar10 = 0;
        do {
          lVar2 = uVar10 + 1;
          uVar12 = uVar10 + 1;
          if (param_2[lVar2] == '\0') break;
          lVar3 = uVar10 + 1;
          uVar10 = uVar12;
        } while (param_2[lVar2] == pcVar1[lVar3]);
      }
      uVar11 = (uint)uVar12;
      if (((int)uVar9 < (int)uVar11) && (pcVar1[uVar12 & 0xffffffff] == '\0')) {
        uVar7 = uVar8 & 0xffffffff;
        uVar9 = uVar11;
        if (uVar11 == (uint)sVar4) {
          puVar5 = (undefined4 *)(*(longlong *)(param_1 + 2) + uVar8 * 0x10);
          goto LAB_14258dc5a;
        }
      }
      iVar6 = (int)uVar7;
      uVar8 = uVar8 + 1;
    } while (uVar8 != *param_1);
  }
  if (((param_2[uVar9] == '_') || (param_2[uVar9] == '@')) &&
     (*(char *)(*(longlong *)(*(longlong *)(param_1 + 2) + 8 + (longlong)iVar6 * 0x10) +
               (ulonglong)uVar9) == '\0')) {
    *param_3 = 0xffffff80;
    puVar5 = (undefined4 *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 2));
  }
  else {
    *param_3 = 1;
    puVar5 = *(undefined4 **)(param_1 + 2);
  }
LAB_14258dc5a:
  return *puVar5;
}



// FUNCTION 14258dc70 FUN_14258dc70 body=51 status=ok
// SIG undefined FUN_14258dc70(void)

undefined8 FUN_14258dc70(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_14258dcb0();
  if ((cVar1 != '\0') && (lVar2 = FUN_142502620(DAT_14c793908,param_1), lVar2 != 0)) {
    return *(undefined8 *)(lVar2 + 8);
  }
  return 0;
}



// FUNCTION 14258dcb0 FUN_14258dcb0 body=4907 status=ok
// SIG undefined FUN_14258dcb0(void)

/* WARNING: Removing unreachable block (ram,0x00014258eb86) */
/* WARNING: Removing unreachable block (ram,0x00014258e57f) */
/* WARNING: Removing unreachable block (ram,0x00014258e5a8) */
/* WARNING: Removing unreachable block (ram,0x00014258e575) */
/* WARNING: Removing unreachable block (ram,0x00014258e31e) */
/* WARNING: Removing unreachable block (ram,0x00014258e30e) */
/* WARNING: Removing unreachable block (ram,0x00014258e924) */
/* WARNING: Removing unreachable block (ram,0x00014258eb7c) */
/* WARNING: Removing unreachable block (ram,0x00014258e337) */
/* WARNING: Removing unreachable block (ram,0x00014258ebaf) */
/* WARNING: Removing unreachable block (ram,0x00014258e934) */
/* WARNING: Removing unreachable block (ram,0x00014258e347) */
/* WARNING: Removing unreachable block (ram,0x00014258e359) */
/* WARNING: Removing unreachable block (ram,0x00014258e94d) */
/* WARNING: Removing unreachable block (ram,0x00014258e95d) */
/* WARNING: Removing unreachable block (ram,0x00014258e369) */
/* WARNING: Removing unreachable block (ram,0x00014258e37b) */
/* WARNING: Removing unreachable block (ram,0x00014258ea43) */
/* WARNING: Removing unreachable block (ram,0x00014258e42d) */
/* WARNING: Removing unreachable block (ram,0x00014258e43d) */
/* WARNING: Removing unreachable block (ram,0x00014258ea53) */
/* WARNING: Removing unreachable block (ram,0x00014258e44f) */
/* WARNING: Removing unreachable block (ram,0x00014258e45f) */
/* WARNING: Removing unreachable block (ram,0x00014258ea65) */
/* WARNING: Removing unreachable block (ram,0x00014258e471) */
/* WARNING: Removing unreachable block (ram,0x00014258e481) */
/* WARNING: Removing unreachable block (ram,0x00014258ea87) */
/* WARNING: Removing unreachable block (ram,0x00014258e493) */
/* WARNING: Removing unreachable block (ram,0x00014258e96f) */
/* WARNING: Removing unreachable block (ram,0x00014258e97f) */
/* WARNING: Removing unreachable block (ram,0x00014258e991) */
/* WARNING: Removing unreachable block (ram,0x00014258ea75) */
/* WARNING: Removing unreachable block (ram,0x00014258ea97) */
/* WARNING: Removing unreachable block (ram,0x00014258eaa9) */

bool FUN_14258dcb0(void)

{
  ulonglong uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  undefined1 auVar11 [16];
  char cVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  char *pcVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  char **ppcVar21;
  char *pcVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  byte bVar27;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined1 auVar29 [12];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined **local_1b0;
  ushort local_1a8;
  undefined **local_170;
  ushort local_168;
  char *local_130;
  undefined8 *local_128;
  undefined4 local_11c;
  char *local_118;
  char *local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong local_e0;
  int local_d4;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  char *local_b8;
  char *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  uint local_90;
  int local_8c;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  uint local_84;
  undefined8 local_80;
  undefined1 auVar28 [12];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  local_80 = 0xfffffffffffffffe;
  local_84 = 0;
  if ((DAT_14c793928 == 2) || (cVar12 = FUN_142501800(&DAT_14c793928), cVar12 == '\0')) {
    if (0 < (int)DAT_14c79392c) {
      local_84 = DAT_14c79392c;
    }
  }
  else {
    FUN_1424d6720(5,FUN_14258f7f0);
    DAT_14c793908 = FUN_142501e10(FUN_1425031f0,FUN_1425032b0,0,&local_84);
    lVar15 = FUN_1424edad0(0,"keyTypeData",&local_84);
    local_108 = FUN_1424ecc30(lVar15,"keyMap",0,&local_84);
    lVar16 = FUN_1424ecc30(lVar15,"typeMap",0,&local_84);
    if ((int)local_84 < 1) {
      local_8c = 0;
      local_100 = lVar16;
      local_f8 = FUN_1424ecc30(lVar15,"typeAlias",0,&local_8c);
      local_8c = 0;
      lVar16 = FUN_1424ecc30(lVar15,"bcpTypeAlias",0,&local_8c);
      DAT_14c793910 = (undefined4 *)thunk_FUN_1424da030(0x58);
      if (DAT_14c793910 == (undefined4 *)0x0) {
        DAT_14c793910 = (undefined4 *)0x0;
        local_84 = 7;
      }
      else {
        *DAT_14c793910 = 0;
        *(undefined4 **)(DAT_14c793910 + 2) = DAT_14c793910 + 6;
        DAT_14c793910[4] = 8;
        *(undefined1 *)(DAT_14c793910 + 5) = 0;
        DAT_14c793918 = (undefined4 *)thunk_FUN_1424da030(0x58);
        if (DAT_14c793918 == (undefined4 *)0x0) {
          DAT_14c793918 = (undefined4 *)0x0;
          local_84 = 7;
        }
        else {
          *DAT_14c793918 = 0;
          *(undefined4 **)(DAT_14c793918 + 2) = DAT_14c793918 + 6;
          DAT_14c793918[4] = 8;
          *(undefined1 *)(DAT_14c793918 + 5) = 0;
          DAT_14c793920 = (undefined4 *)thunk_FUN_1424da030(0x58);
          if (DAT_14c793920 == (undefined4 *)0x0) {
            DAT_14c793920 = (undefined4 *)0x0;
            local_84 = 7;
          }
          else {
            *DAT_14c793920 = 0;
            *(undefined4 **)(DAT_14c793920 + 2) = DAT_14c793920 + 6;
            DAT_14c793920[4] = 8;
            *(undefined1 *)(DAT_14c793920 + 5) = 0;
            local_c8 = 0;
            local_e8 = lVar16;
            local_98 = lVar15;
            do {
              lVar16 = local_108;
              cVar12 = FUN_1424eaf90(local_108);
              if ((cVar12 == '\0') ||
                 (lVar16 = FUN_1424eb190(lVar16,local_c8,&local_84), local_c8 = lVar16,
                 0 < (int)local_84)) break;
              pcVar17 = (char *)FUN_1424eaf60(lVar16);
              local_1b0 = &PTR_FUN_149e18960;
              local_1a8 = 2;
              local_170 = (undefined **)((ulonglong)local_170 & 0xffffffff00000000);
              uVar18 = FUN_1424eae00(lVar16,&local_170,&local_84);
              if ((int)local_84 < 1) {
                FUN_1424a8f10(&local_1b0,1,uVar18,(ulonglong)local_170 & 0xffffffff);
              }
              else {
                FUN_1424a7130(&local_1b0);
              }
              lVar15 = local_98;
              if (0 < (int)local_84) {
LAB_14258ef4d:
                FUN_140859a90(&local_1b0);
                break;
              }
              pcVar22 = pcVar17;
              if (0x1f < local_1a8) {
                puVar19 = (undefined8 *)FUN_14258f970(DAT_14c793910);
                if (puVar19 == (undefined8 *)0x0) {
                  local_84 = 7;
                  lVar15 = local_98;
                }
                else {
                  FUN_142503780(puVar19,&local_1b0,&local_84);
                  lVar15 = local_98;
                  if ((int)local_84 < 1) {
                    pcVar22 = (char *)*puVar19;
                    goto LAB_14258dfec;
                  }
                }
                goto LAB_14258ef4d;
              }
LAB_14258dfec:
              lVar15 = local_98;
              local_d4 = strcmp(pcVar17,"timezone");
              uVar18 = FUN_142501e10(FUN_1425031f0,FUN_1425032b0,0,&local_84);
              if (0 < (int)local_84) goto LAB_14258ef4d;
              local_130 = pcVar17;
              local_118 = pcVar22;
              local_f0 = uVar18;
              if (local_f8 == 0) {
                lVar15 = 0;
              }
              else {
                local_8c = 0;
                lVar15 = FUN_1424ecc30(local_f8,pcVar17,0,&local_8c);
                if (0 < local_8c) {
                  lVar15 = 0;
                }
              }
              if (local_e8 == 0) {
                local_a0 = 0;
              }
              else {
                local_8c = 0;
                local_a0 = FUN_1424ecc30(local_e8,local_118,0,&local_8c);
                if (0 < local_8c) {
                  local_a0 = 0;
                }
              }
              local_8c = 0;
              lVar16 = FUN_1424ecc30(local_100,local_130,0,&local_8c);
              if (0 < local_8c) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              local_85 = lVar15 == 0;
              uVar26 = 0;
              lVar20 = 0;
              local_c0 = lVar15;
              local_a8 = lVar16;
              do {
                lVar16 = local_a8;
                cVar12 = FUN_1424eaf90(local_a8);
                if ((cVar12 == '\0') ||
                   (lVar20 = FUN_1424eb190(lVar16,lVar20,&local_84), 0 < (int)local_84)) break;
                pcVar17 = (char *)FUN_1424eaf60(lVar20);
                local_b8 = pcVar17;
                iVar13 = strcmp(pcVar17,"CODEPOINTS");
                local_d0 = lVar20;
                if (iVar13 == 0) {
                  uVar26 = uVar26 | 1;
LAB_14258e104:
                  iVar13 = 4;
                }
                else {
                  iVar13 = strcmp(pcVar17,"REORDER_CODE");
                  if (iVar13 == 0) {
                    uVar26 = uVar26 | 2;
                    goto LAB_14258e104;
                  }
                  iVar13 = strcmp(pcVar17,"RG_KEY_VALUE");
                  if (iVar13 == 0) {
                    uVar26 = uVar26 | 4;
                    goto LAB_14258e104;
                  }
                  if ((local_d4 == 0) && (pcVar17 = strchr(pcVar17,0x3a), pcVar17 != (char *)0x0)) {
                    local_87 = local_85;
                    puVar19 = (undefined8 *)FUN_14258fa50(DAT_14c793910,&local_b8);
                    lVar16 = local_a8;
                    lVar20 = local_d0;
                    if (puVar19 == (undefined8 *)0x0) {
                      local_84 = 7;
                      break;
                    }
                    if (0 < (int)local_84) break;
                    local_b8 = (char *)*puVar19;
                    uVar2 = *(uint *)(puVar19 + 7);
                    uVar23 = (ulonglong)(int)uVar2;
                    if (uVar23 == 0) goto LAB_14258e5db;
                    pcVar17 = local_b8;
                    if (uVar2 < 8) {
LAB_14258ec70:
                      do {
                        if (*pcVar17 == ':') {
                          *pcVar17 = '/';
                        }
                        pcVar17 = pcVar17 + 1;
                      } while (pcVar17 != local_b8 + uVar23);
                    }
                    else if (uVar2 < 0x20) {
                      uVar24 = 0;
LAB_14258e4c4:
                      uVar25 = uVar23 & 0xfffffffffffffff8;
                      pcVar17 = local_b8 + uVar25;
                      do {
                        uVar1 = *(ulonglong *)(local_b8 + uVar24);
                        auVar35._8_8_ = 0;
                        auVar35._0_8_ = uVar1;
                        bVar27 = -((char)uVar1 == ':');
                        bVar32 = -((char)(uVar1 >> 8) == ':');
                        auVar37[1] = bVar32;
                        auVar37[0] = bVar27;
                        auVar37[2] = -((char)(uVar1 >> 0x10) == ':');
                        bVar33 = -((char)(uVar1 >> 0x28) == ':');
                        bVar34 = -((char)(uVar1 >> 0x30) == ':');
                        bVar3 = (char)(uVar1 >> 0x38) == ':';
                        uVar2 = CONCAT13(-bVar3,CONCAT12(bVar34,CONCAT11(bVar33,-((char)(uVar1 >> 
                                                  0x20) == ':'))));
                        auVar28._0_8_ = (ulonglong)uVar2 << 0x20;
                        auVar28[8] = 0xff;
                        auVar28[9] = 0xff;
                        auVar28[10] = 0xff;
                        auVar28[0xb] = 0xff;
                        auVar30[0xc] = 0xff;
                        auVar30._0_12_ = auVar28;
                        auVar30[0xd] = 0xff;
                        auVar30[0xe] = 0xff;
                        auVar30[0xf] = 0xff;
                        if ((bVar27 & 1) != 0) {
                          local_b8[uVar24] = '/';
                        }
                        auVar37._3_4_ = uVar2 << 8;
                        auVar37._7_4_ = auVar28._8_4_ << 8;
                        auVar37._11_4_ = auVar30._12_4_ << 8;
                        auVar37[0xf] = 0;
                        if ((bVar32 & 1) != 0) {
                          local_b8[uVar24 + 1] = '/';
                        }
                        auVar37 = pshuflw(auVar37 << 8,auVar35,0x55);
                        if (auVar37[4] == ':') {
                          local_b8[uVar24 + 2] = '/';
                        }
                        if ((char)(uVar1 >> 0x18) == ':') {
                          local_b8[uVar24 + 3] = '/';
                        }
                        if ((bVar33 & 1) != 0) {
                          local_b8[uVar24 + 5] = '/';
                        }
                        if ((bVar34 & 1) != 0) {
                          local_b8[uVar24 + 6] = '/';
                        }
                        if (bVar3) {
                          local_b8[uVar24 + 7] = '/';
                        }
                        uVar24 = uVar24 + 8;
                      } while (uVar25 != uVar24);
                      if (uVar25 != uVar23) goto LAB_14258ec70;
                    }
                    else {
                      uVar24 = uVar23 & 0xffffffffffffffe0;
                      uVar25 = 0;
                      do {
                        pcVar17 = local_b8 + uVar25;
                        cVar12 = pcVar17[1];
                        cVar4 = pcVar17[2];
                        cVar5 = pcVar17[3];
                        cVar6 = pcVar17[4];
                        cVar7 = pcVar17[5];
                        cVar8 = pcVar17[6];
                        cVar9 = pcVar17[7];
                        if (*pcVar17 == ':') {
                          local_b8[uVar25] = '/';
                        }
                        if (cVar12 == ':') {
                          local_b8[uVar25 + 1] = '/';
                        }
                        if (cVar4 == ':') {
                          local_b8[uVar25 + 2] = '/';
                        }
                        if (cVar5 == ':') {
                          local_b8[uVar25 + 3] = '/';
                        }
                        if (cVar6 == ':') {
                          local_b8[uVar25 + 4] = '/';
                        }
                        if (cVar7 == ':') {
                          local_b8[uVar25 + 5] = '/';
                        }
                        if (cVar8 == ':') {
                          local_b8[uVar25 + 6] = '/';
                        }
                        if (cVar9 == ':') {
                          local_b8[uVar25 + 7] = '/';
                        }
                        pcVar17 = local_b8 + uVar25 + 0x10;
                        cVar12 = pcVar17[1];
                        cVar4 = pcVar17[2];
                        cVar5 = pcVar17[3];
                        cVar6 = pcVar17[4];
                        cVar7 = pcVar17[5];
                        cVar8 = pcVar17[6];
                        cVar10 = pcVar17[7];
                        if (cVar9 == ':') {
                          local_b8[uVar25 + 0xf] = '/';
                        }
                        if (*pcVar17 == ':') {
                          local_b8[uVar25 + 0x10] = '/';
                        }
                        if (cVar12 == ':') {
                          local_b8[uVar25 + 0x11] = '/';
                        }
                        if (cVar4 == ':') {
                          local_b8[uVar25 + 0x12] = '/';
                        }
                        if (cVar5 == ':') {
                          local_b8[uVar25 + 0x13] = '/';
                        }
                        if (cVar6 == ':') {
                          local_b8[uVar25 + 0x14] = '/';
                        }
                        if (cVar7 == ':') {
                          local_b8[uVar25 + 0x15] = '/';
                        }
                        if (cVar8 == ':') {
                          local_b8[uVar25 + 0x16] = '/';
                        }
                        if (cVar10 == ':') {
                          local_b8[uVar25 + 0x17] = '/';
                          local_b8[uVar25 + 0x1f] = '/';
                        }
                        uVar25 = uVar25 + 0x20;
                      } while (uVar24 != uVar25);
                      if (uVar24 != uVar23) {
                        if ((uVar23 & 0x18) == 0) {
                          pcVar17 = local_b8 + uVar24;
                          goto LAB_14258ec70;
                        }
                        goto LAB_14258e4c4;
                      }
                    }
                    local_b8 = (char *)*puVar19;
                  }
LAB_14258e5db:
                  local_170 = &PTR_FUN_149e18960;
                  local_168 = 2;
                  local_b0 = (char *)((ulonglong)local_b0 & 0xffffffff00000000);
                  uVar18 = FUN_1424eae00(lVar20,&local_b0,&local_84);
                  if ((int)local_84 < 1) {
                    FUN_1424a8f10(&local_170,1,uVar18,(ulonglong)local_b0 & 0xffffffff);
                  }
                  else {
                    FUN_1424a7130(&local_170);
                  }
                  iVar13 = 5;
                  if (0 < (int)local_84) goto LAB_14258ec4d;
                  local_90 = uVar26;
                  ppcVar21 = &local_b8;
                  if (local_168 < 0x20) {
LAB_14258e6a0:
                    local_110 = *ppcVar21;
                    local_86 = local_85;
                    puVar19 = (undefined8 *)FUN_14258fbe0(DAT_14c793920);
                    uVar18 = local_f0;
                    pcVar17 = local_110;
                    if (puVar19 == (undefined8 *)0x0) goto LAB_14258ec39;
                    puVar19[1] = local_110;
                    *puVar19 = local_b8;
                    FUN_142502aa0(local_f0,local_b8,puVar19,&local_84);
                    if (pcVar17 != local_b8) {
                      FUN_142502aa0(uVar18,local_110,puVar19,&local_84);
                    }
                    uVar26 = local_90;
                    lVar15 = local_c0;
                    local_128 = puVar19;
                    if ((int)local_84 < 1) {
                      if (local_c0 != 0) {
                        FUN_1424eaf80(local_c0);
                        cVar12 = FUN_1424eaf90(lVar15);
                        uVar2 = local_84;
                        if ((cVar12 != '\0') && ((int)local_84 < 1)) {
                          lVar15 = 0;
                          while( true ) {
                            lVar15 = FUN_1424eb190(local_c0,lVar15,&local_84);
                            uVar18 = FUN_1424eae00(lVar15,&local_11c,&local_84);
                            if (0 < (int)local_84) break;
                            iVar14 = FUN_14250af20(0,local_b8,0xffffffff,uVar18,local_11c);
                            if (iVar14 == 0) {
                              pcVar17 = (char *)FUN_1424eaf60(lVar15);
                              local_b0 = pcVar17;
                              if ((local_d4 == 0) &&
                                 (pcVar22 = strchr(pcVar17,0x3a), pcVar22 != (char *)0x0)) {
                                local_e0 = lVar15;
                                puVar19 = (undefined8 *)
                                          FUN_14258fa50(DAT_14c793910,&local_b0,&local_84);
                                lVar15 = local_e0;
                                if (puVar19 == (undefined8 *)0x0) {
                                  local_84 = 7;
                                  break;
                                }
                                if (0 < (int)local_84) break;
                                pcVar17 = (char *)*puVar19;
                                uVar2 = *(uint *)(puVar19 + 7);
                                uVar23 = (ulonglong)(int)uVar2;
                                local_b0 = pcVar17;
                                if (uVar23 == 0) goto LAB_14258ebde;
                                pcVar22 = pcVar17;
                                if (uVar2 < 8) {
LAB_14258ec20:
                                  do {
                                    if (*pcVar22 == ':') {
                                      *pcVar22 = '/';
                                    }
                                    pcVar22 = pcVar22 + 1;
                                  } while (pcVar22 != pcVar17 + uVar23);
                                }
                                else if (uVar2 < 0x20) {
                                  uVar24 = 0;
LAB_14258eada:
                                  uVar25 = uVar23 & 0xfffffffffffffff8;
                                  pcVar22 = pcVar17 + uVar25;
                                  do {
                                    uVar1 = *(ulonglong *)(pcVar17 + uVar24);
                                    auVar36._8_8_ = 0;
                                    auVar36._0_8_ = uVar1;
                                    bVar27 = -((char)uVar1 == ':');
                                    bVar32 = -((char)(uVar1 >> 8) == ':');
                                    auVar11[1] = bVar32;
                                    auVar11[0] = bVar27;
                                    auVar11[2] = -((char)(uVar1 >> 0x10) == ':');
                                    bVar33 = -((char)(uVar1 >> 0x28) == ':');
                                    bVar34 = -((char)(uVar1 >> 0x30) == ':');
                                    bVar3 = (char)(uVar1 >> 0x38) == ':';
                                    uVar2 = CONCAT13(-bVar3,CONCAT12(bVar34,CONCAT11(bVar33,-((char)
                                                  (uVar1 >> 0x20) == ':'))));
                                    auVar29._0_8_ = (ulonglong)uVar2 << 0x20;
                                    auVar29[8] = 0xff;
                                    auVar29[9] = 0xff;
                                    auVar29[10] = 0xff;
                                    auVar29[0xb] = 0xff;
                                    auVar31[0xc] = 0xff;
                                    auVar31._0_12_ = auVar29;
                                    auVar31[0xd] = 0xff;
                                    auVar31[0xe] = 0xff;
                                    auVar31[0xf] = 0xff;
                                    if ((bVar27 & 1) != 0) {
                                      pcVar17[uVar24] = '/';
                                    }
                                    auVar11._3_4_ = uVar2 << 8;
                                    auVar11._7_4_ = auVar29._8_4_ << 8;
                                    auVar11._11_4_ = auVar31._12_4_ << 8;
                                    auVar11[0xf] = 0;
                                    if ((bVar32 & 1) != 0) {
                                      pcVar17[uVar24 + 1] = '/';
                                    }
                                    auVar37 = pshuflw(auVar11 << 8,auVar36,0x55);
                                    if (auVar37[4] == ':') {
                                      pcVar17[uVar24 + 2] = '/';
                                    }
                                    if ((char)(uVar1 >> 0x18) == ':') {
                                      pcVar17[uVar24 + 3] = '/';
                                    }
                                    if ((bVar33 & 1) != 0) {
                                      pcVar17[uVar24 + 5] = '/';
                                    }
                                    if ((bVar34 & 1) != 0) {
                                      pcVar17[uVar24 + 6] = '/';
                                    }
                                    if (bVar3) {
                                      pcVar17[uVar24 + 7] = '/';
                                    }
                                    uVar24 = uVar24 + 8;
                                  } while (uVar25 != uVar24);
                                  if (uVar25 != uVar23) goto LAB_14258ec20;
                                }
                                else {
                                  uVar24 = uVar23 & 0xffffffffffffffe0;
                                  uVar25 = 0;
                                  do {
                                    pcVar22 = pcVar17 + uVar25;
                                    cVar12 = pcVar22[1];
                                    cVar4 = pcVar22[2];
                                    cVar5 = pcVar22[3];
                                    cVar6 = pcVar22[4];
                                    cVar7 = pcVar22[5];
                                    cVar8 = pcVar22[6];
                                    cVar9 = pcVar22[7];
                                    if (*pcVar22 == ':') {
                                      pcVar17[uVar25] = '/';
                                    }
                                    if (cVar12 == ':') {
                                      pcVar17[uVar25 + 1] = '/';
                                    }
                                    if (cVar4 == ':') {
                                      pcVar17[uVar25 + 2] = '/';
                                    }
                                    if (cVar5 == ':') {
                                      pcVar17[uVar25 + 3] = '/';
                                    }
                                    if (cVar6 == ':') {
                                      pcVar17[uVar25 + 4] = '/';
                                    }
                                    if (cVar7 == ':') {
                                      pcVar17[uVar25 + 5] = '/';
                                    }
                                    if (cVar8 == ':') {
                                      pcVar17[uVar25 + 6] = '/';
                                    }
                                    if (cVar9 == ':') {
                                      pcVar17[uVar25 + 7] = '/';
                                    }
                                    pcVar22 = pcVar17 + uVar25 + 0x10;
                                    cVar12 = pcVar22[1];
                                    cVar4 = pcVar22[2];
                                    cVar5 = pcVar22[3];
                                    cVar6 = pcVar22[4];
                                    cVar7 = pcVar22[5];
                                    cVar8 = pcVar22[6];
                                    cVar10 = pcVar22[7];
                                    if (cVar9 == ':') {
                                      pcVar17[uVar25 + 0xf] = '/';
                                    }
                                    if (*pcVar22 == ':') {
                                      pcVar17[uVar25 + 0x10] = '/';
                                    }
                                    if (cVar12 == ':') {
                                      pcVar17[uVar25 + 0x11] = '/';
                                    }
                                    if (cVar4 == ':') {
                                      pcVar17[uVar25 + 0x12] = '/';
                                    }
                                    if (cVar5 == ':') {
                                      pcVar17[uVar25 + 0x13] = '/';
                                    }
                                    if (cVar6 == ':') {
                                      pcVar17[uVar25 + 0x14] = '/';
                                    }
                                    if (cVar7 == ':') {
                                      pcVar17[uVar25 + 0x15] = '/';
                                    }
                                    if (cVar8 == ':') {
                                      pcVar17[uVar25 + 0x16] = '/';
                                    }
                                    if (cVar10 == ':') {
                                      pcVar17[uVar25 + 0x17] = '/';
                                      pcVar17[uVar25 + 0x1f] = '/';
                                    }
                                    uVar25 = uVar25 + 0x20;
                                  } while (uVar24 != uVar25);
                                  if (uVar24 != uVar23) {
                                    if ((uVar23 & 0x18) == 0) {
                                      pcVar22 = pcVar17 + uVar24;
                                      goto LAB_14258ec20;
                                    }
                                    goto LAB_14258eada;
                                  }
                                }
                                pcVar17 = (char *)*puVar19;
                                local_b0 = pcVar17;
                              }
LAB_14258ebde:
                              FUN_142502aa0(local_f0,pcVar17,local_128,&local_84);
                            }
                            cVar12 = FUN_1424eaf90(local_c0);
                            if ((cVar12 == '\0') || (0 < (int)local_84)) break;
                          }
                          uVar2 = local_84;
                          if (lVar15 != 0) {
                            FUN_1424ea9f0(lVar15);
                          }
                        }
                        if (0 < (int)uVar2) goto LAB_14258ec4d;
                      }
                      lVar15 = local_a0;
                      if (local_a0 != 0) {
                        FUN_1424eaf80(local_a0);
                        cVar12 = FUN_1424eaf90(lVar15);
                        uVar2 = local_84;
                        if ((cVar12 != '\0') && ((int)local_84 < 1)) {
                          lVar15 = 0;
                          while( true ) {
                            lVar15 = FUN_1424eb190(local_a0,lVar15,&local_84);
                            uVar18 = FUN_1424eae00(lVar15,&local_b0,&local_84);
                            if (0 < (int)local_84) break;
                            iVar14 = FUN_14250af20(0,local_110,0xffffffff,uVar18,local_b0._0_4_);
                            if (iVar14 == 0) {
                              uVar18 = FUN_1424eaf60(lVar15);
                              FUN_142502aa0(local_f0,uVar18,local_128,&local_84);
                            }
                            cVar12 = FUN_1424eaf90(local_a0);
                            if ((cVar12 == '\0') || (0 < (int)local_84)) break;
                          }
                          uVar2 = local_84;
                          if (lVar15 != 0) {
                            FUN_1424ea9f0(lVar15);
                          }
                        }
                        if (0 < (int)uVar2) goto LAB_14258ec4d;
                      }
                      iVar13 = 0;
                    }
                  }
                  else {
                    local_86 = local_85;
                    ppcVar21 = (char **)FUN_14258f970(DAT_14c793910);
                    if (ppcVar21 != (char **)0x0) {
                      local_86 = local_85;
                      FUN_142503780(ppcVar21,&local_170,&local_84);
                      uVar26 = local_90;
                      if (0 < (int)local_84) goto LAB_14258ec4d;
                      goto LAB_14258e6a0;
                    }
LAB_14258ec39:
                    local_84 = 7;
                    uVar26 = local_90;
                  }
LAB_14258ec4d:
                  FUN_140859a90(&local_170);
                }
                lVar20 = local_d0;
                lVar16 = local_a8;
              } while (iVar13 != 5);
              if (lVar20 != 0) {
                FUN_1424ea9f0(lVar20);
              }
              cVar12 = '\x03';
              lVar15 = local_98;
              if ((int)local_84 < 1) {
                local_88 = local_85;
                puVar19 = (undefined8 *)FUN_14258fca0(DAT_14c793918);
                pcVar17 = local_130;
                if (puVar19 == (undefined8 *)0x0) {
                  local_84 = 7;
                  lVar15 = local_98;
                  lVar16 = local_a8;
                  cVar12 = '\x03';
                }
                else {
                  puVar19[1] = local_118;
                  *puVar19 = local_130;
                  *(uint *)(puVar19 + 3) = uVar26;
                  if (puVar19[2] != 0) {
                    FUN_142502220();
                  }
                  puVar19[2] = local_f0;
                  FUN_142502aa0(DAT_14c793908,pcVar17,puVar19,&local_84);
                  lVar15 = local_98;
                  if (pcVar17 != local_118) {
                    FUN_142502aa0(DAT_14c793908,local_118,puVar19,&local_84);
                  }
                  lVar16 = local_a8;
                  cVar12 = (0 < (int)local_84) * '\x03';
                }
              }
              if (lVar16 != 0) {
                FUN_1424ea9f0(lVar16);
              }
              if (local_a0 != 0) {
                FUN_1424ea9f0();
              }
              if (local_c0 != 0) {
                FUN_1424ea9f0();
              }
              FUN_140859a90(&local_1b0);
            } while (cVar12 == '\0');
            lVar16 = local_e8;
            if (local_c8 != 0) {
              FUN_1424ea9f0();
            }
          }
        }
      }
      if (lVar16 != 0) {
        FUN_1424ea9f0(lVar16);
      }
      lVar16 = local_100;
      if (local_f8 != 0) {
        FUN_1424ea9f0();
        lVar16 = local_100;
      }
    }
    if (lVar16 != 0) {
      FUN_1424ea9f0(lVar16);
    }
    if (local_108 != 0) {
      FUN_1424ea9f0();
    }
    if (lVar15 != 0) {
      FUN_1424ea9f0(lVar15);
    }
    DAT_14c79392c = local_84;
    FUN_1425019c0(&DAT_14c793928);
  }
  return (int)local_84 < 1;
}



// FUNCTION 14258f010 Unwind@14258f010 body=106 status=ok
// SIG undefined Unwind@14258f010(void)

void Unwind_14258f010(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xf8) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0xf8));
  }
  *(undefined1 *)(param_2 + 0x152) = 0;
  return;
}



// FUNCTION 14258f080 Unwind@14258f080 body=89 status=ok
// SIG undefined Unwind@14258f080(void)

void Unwind_14258f080(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14258f0e0 Unwind@14258f0e0 body=105 status=ok
// SIG undefined Unwind@14258f0e0(void)

void Unwind_14258f0e0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x152);
  FUN_140859a90(param_2 + 0x68);
  *(undefined1 *)(param_2 + 0x151) = uVar1;
  return;
}



// FUNCTION 14258f150 Unwind@14258f150 body=105 status=ok
// SIG undefined Unwind@14258f150(void)

void Unwind_14258f150(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  *(undefined1 *)(param_2 + 0x151) = *(undefined1 *)(param_2 + 0x153);
  return;
}



// FUNCTION 14258f1c0 Unwind@14258f1c0 body=121 status=ok
// SIG undefined Unwind@14258f1c0(void)

void Unwind_14258f1c0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x151);
  if (*(longlong *)(param_2 + 0x108) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x108));
  }
  *(byte *)(param_2 + 0x150) = bVar1 & 1;
  return;
}



// FUNCTION 14258f240 Unwind@14258f240 body=168 status=ok
// SIG undefined Unwind@14258f240(void)

void Unwind_14258f240(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(param_2 + 0x150);
  if (*(longlong *)(param_2 + 0x130) == 0) {
    lVar2 = *(longlong *)(param_2 + 0x138);
  }
  else {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x130));
    lVar2 = *(longlong *)(param_2 + 0x138);
  }
  if (lVar2 != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x138));
  }
  if ((bVar1 & 1) == 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x118));
  }
  return;
}



// FUNCTION 14258f2f0 Unwind@14258f2f0 body=89 status=ok
// SIG undefined Unwind@14258f2f0(void)

void Unwind_14258f2f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 14258f350 Unwind@14258f350 body=185 status=ok
// SIG undefined Unwind@14258f350(void)

void Unwind_14258f350(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x110) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x110));
  }
  if (*(longlong *)(param_2 + 0xf0) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0xf0));
  }
  if (*(longlong *)(param_2 + 0xe0) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0xe0));
  }
  if (*(longlong *)(param_2 + 0xd8) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0xd8));
  }
  if (*(longlong *)(param_2 + 0xd0) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0xd0));
  }
  if (*(longlong *)(param_2 + 0x140) != 0) {
    FUN_1424ea9f0(*(undefined8 *)(param_2 + 0x140));
  }
  return;
}



// FUNCTION 14258f410 FUN_14258f410 body=50 status=ok
// SIG undefined FUN_14258f410(void)

undefined8 FUN_14258f410(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = FUN_14258dcb0();
  if ((cVar1 != '\0') &&
     (puVar2 = (undefined8 *)FUN_142502620(DAT_14c793908,param_1), puVar2 != (undefined8 *)0x0)) {
    return *puVar2;
  }
  return 0;
}



// FUNCTION 14258f450 FUN_14258f450 body=426 status=ok
// SIG undefined FUN_14258f450(void)

byte * FUN_14258f450(undefined8 param_1,byte *param_2,undefined1 *param_3,undefined1 *param_4)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  cVar2 = FUN_14258dcb0();
  if ((cVar2 != '\0') && (lVar3 = FUN_142502620(DAT_14c793908,param_1), lVar3 != 0)) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    lVar4 = FUN_142502620(*(undefined8 *)(lVar3 + 0x10),param_2);
    if (lVar4 != 0) {
      return *(byte **)(lVar4 + 8);
    }
    uVar5 = *(uint *)(lVar3 + 0x18);
    if (uVar5 != 0) {
      if ((uVar5 & 1) != 0) {
        iVar6 = 0;
        pbVar8 = param_2;
        do {
          bVar1 = *pbVar8;
          if (bVar1 == 0x2d) {
            uVar7 = iVar6 - 7;
            iVar6 = 0;
            if (uVar7 < 0xfffffffd) break;
          }
          else {
            if (bVar1 == 0) {
              if (0xfffffffc < iVar6 - 7U) goto LAB_14258f60f;
              break;
            }
            if ((9 < (byte)(bVar1 - 0x30)) &&
               ((uVar7 = bVar1 - 0x41, 0x25 < uVar7 ||
                ((0x3f0000003fU >> ((ulonglong)uVar7 & 0x3f) & 1) == 0)))) break;
            iVar6 = iVar6 + 1;
          }
          pbVar8 = pbVar8 + 1;
        } while( true );
      }
      if ((uVar5 & 2) != 0) {
        iVar6 = 0;
        pbVar8 = param_2;
        do {
          if (*pbVar8 == 0x2d) {
            uVar5 = iVar6 - 9;
            iVar6 = 0;
            if (uVar5 < 0xfffffffa) break;
          }
          else {
            if (*pbVar8 == 0) {
              if (0xfffffff9 < iVar6 - 9U) goto LAB_14258f60f;
              break;
            }
            cVar2 = FUN_1425038e0();
            if (cVar2 == '\0') break;
            iVar6 = iVar6 + 1;
          }
          pbVar8 = pbVar8 + 1;
        } while( true );
      }
      if (((((*(byte *)(lVar3 + 0x18) & 4) != 0) && (*param_2 != 0)) &&
          (cVar2 = FUN_1425038e0(), cVar2 != '\0')) &&
         (((param_2[1] != 0 && (cVar2 = FUN_1425038e0(), cVar2 != '\0')) &&
          (bVar1 = param_2[2], bVar1 != 0)))) {
        lVar3 = 3;
        do {
          if ((bVar1 | 0x20) != 0x7a) {
            return (byte *)0x0;
          }
          bVar1 = param_2[lVar3];
          lVar3 = lVar3 + 1;
        } while (bVar1 != 0);
        pbVar8 = (byte *)0x0;
        if ((int)lVar3 == 7) {
          pbVar8 = param_2;
        }
        if (param_4 == (undefined1 *)0x0) {
          return pbVar8;
        }
        if ((int)lVar3 != 7) {
          return pbVar8;
        }
        goto LAB_14258f614;
      }
    }
  }
  return (byte *)0x0;
LAB_14258f60f:
  if (param_4 == (undefined1 *)0x0) {
    return param_2;
  }
LAB_14258f614:
  *param_4 = 1;
  return param_2;
}



// FUNCTION 14258f620 FUN_14258f620 body=425 status=ok
// SIG undefined FUN_14258f620(void)

byte * FUN_14258f620(undefined8 param_1,byte *param_2,undefined1 *param_3,undefined1 *param_4)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  cVar2 = FUN_14258dcb0();
  if ((cVar2 != '\0') && (lVar3 = FUN_142502620(DAT_14c793908,param_1), lVar3 != 0)) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar4 = (undefined8 *)FUN_142502620(*(undefined8 *)(lVar3 + 0x10),param_2);
    if (puVar4 != (undefined8 *)0x0) {
      return (byte *)*puVar4;
    }
    uVar5 = *(uint *)(lVar3 + 0x18);
    if (uVar5 != 0) {
      if ((uVar5 & 1) != 0) {
        iVar6 = 0;
        pbVar8 = param_2;
        do {
          bVar1 = *pbVar8;
          if (bVar1 == 0x2d) {
            uVar7 = iVar6 - 7;
            iVar6 = 0;
            if (uVar7 < 0xfffffffd) break;
          }
          else {
            if (bVar1 == 0) {
              if (0xfffffffc < iVar6 - 7U) goto LAB_14258f7df;
              break;
            }
            if ((9 < (byte)(bVar1 - 0x30)) &&
               ((uVar7 = bVar1 - 0x41, 0x25 < uVar7 ||
                ((0x3f0000003fU >> ((ulonglong)uVar7 & 0x3f) & 1) == 0)))) break;
            iVar6 = iVar6 + 1;
          }
          pbVar8 = pbVar8 + 1;
        } while( true );
      }
      if ((uVar5 & 2) != 0) {
        iVar6 = 0;
        pbVar8 = param_2;
        do {
          if (*pbVar8 == 0x2d) {
            uVar5 = iVar6 - 9;
            iVar6 = 0;
            if (uVar5 < 0xfffffffa) break;
          }
          else {
            if (*pbVar8 == 0) {
              if (0xfffffff9 < iVar6 - 9U) goto LAB_14258f7df;
              break;
            }
            cVar2 = FUN_1425038e0();
            if (cVar2 == '\0') break;
            iVar6 = iVar6 + 1;
          }
          pbVar8 = pbVar8 + 1;
        } while( true );
      }
      if (((((*(byte *)(lVar3 + 0x18) & 4) != 0) && (*param_2 != 0)) &&
          (cVar2 = FUN_1425038e0(), cVar2 != '\0')) &&
         (((param_2[1] != 0 && (cVar2 = FUN_1425038e0(), cVar2 != '\0')) &&
          (bVar1 = param_2[2], bVar1 != 0)))) {
        lVar3 = 3;
        do {
          if ((bVar1 | 0x20) != 0x7a) {
            return (byte *)0x0;
          }
          bVar1 = param_2[lVar3];
          lVar3 = lVar3 + 1;
        } while (bVar1 != 0);
        pbVar8 = (byte *)0x0;
        if ((int)lVar3 == 7) {
          pbVar8 = param_2;
        }
        if (param_4 == (undefined1 *)0x0) {
          return pbVar8;
        }
        if ((int)lVar3 != 7) {
          return pbVar8;
        }
        goto LAB_14258f7e4;
      }
    }
  }
  return (byte *)0x0;
LAB_14258f7df:
  if (param_4 == (undefined1 *)0x0) {
    return param_2;
  }
LAB_14258f7e4:
  *param_4 = 1;
  return param_2;
}



// FUNCTION 14258f7f0 FUN_14258f7f0 body=354 status=ok
// SIG undefined FUN_14258f7f0(void)

undefined8 FUN_14258f7f0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  
  if (DAT_14c793908 != 0) {
    FUN_142502220();
    DAT_14c793908 = 0;
  }
  piVar3 = DAT_14c793918;
  if (DAT_14c793918 != (int *)0x0) {
    iVar5 = *DAT_14c793918;
    if (0 < iVar5) {
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(piVar3 + 2) + lVar6 * 8);
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 0x10) != 0) {
            FUN_142502220();
          }
          FUN_1401773f0(lVar1);
          iVar5 = *piVar3;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar5);
    }
    if ((char)piVar3[5] != '\0') {
      FUN_1424da110(*(undefined8 *)(piVar3 + 2));
    }
    FUN_1401773f0(piVar3);
  }
  piVar3 = DAT_14c793920;
  DAT_14c793918 = (int *)0x0;
  if (DAT_14c793920 != (int *)0x0) {
    iVar5 = *DAT_14c793920;
    if (0 < iVar5) {
      lVar6 = 0;
      do {
        if (*(longlong *)(*(longlong *)(piVar3 + 2) + lVar6 * 8) != 0) {
          FUN_1401773f0();
          iVar5 = *piVar3;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar5);
    }
    if ((char)piVar3[5] != '\0') {
      FUN_1424da110(*(undefined8 *)(piVar3 + 2));
    }
    FUN_1401773f0(piVar3);
  }
  piVar3 = DAT_14c793910;
  DAT_14c793920 = (int *)0x0;
  if (DAT_14c793910 != (int *)0x0) {
    iVar5 = *DAT_14c793910;
    if (0 < iVar5) {
      lVar6 = 0;
      do {
        puVar2 = *(undefined8 **)(*(longlong *)(piVar3 + 2) + lVar6 * 8);
        if (puVar2 != (undefined8 *)0x0) {
          if (*(char *)((longlong)puVar2 + 0xc) != '\0') {
            FUN_1424da110(*puVar2);
          }
          FUN_1401773f0(puVar2);
          iVar5 = *piVar3;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar5);
    }
    if ((char)piVar3[5] != '\0') {
      FUN_1424da110(*(undefined8 *)(piVar3 + 2));
    }
    FUN_1401773f0(piVar3);
  }
  uVar4 = DAT_14c793928;
  DAT_14c793910 = (int *)0x0;
  LOCK();
  DAT_14c793928 = 0;
  UNLOCK();
  return CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
}



// FUNCTION 14258f970 FUN_14258f970 body=210 status=ok
// SIG undefined FUN_14258f970(void)

longlong * FUN_14258f970(uint *param_1)

{
  void *_Dst;
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1[4];
  if (*param_1 == uVar3) {
    uVar2 = 0x20;
    if (uVar3 != 8) {
      uVar2 = uVar3 * 2;
    }
    if (0 < (int)uVar2) {
      _Dst = (void *)FUN_1424da030((ulonglong)uVar2 << 3);
      if (_Dst != (void *)0x0) {
        if (0 < (int)uVar3) {
          if ((int)param_1[4] < (int)uVar3) {
            uVar3 = param_1[4];
          }
          if ((int)uVar2 <= (int)uVar3) {
            uVar3 = uVar2;
          }
          memcpy(_Dst,*(void **)(param_1 + 2),(longlong)(int)uVar3 << 3);
        }
        if ((char)param_1[5] != '\0') {
          FUN_1424da110(*(undefined8 *)(param_1 + 2));
        }
        *(void **)(param_1 + 2) = _Dst;
        param_1[4] = uVar2;
        *(undefined1 *)(param_1 + 5) = 1;
        goto LAB_14258f9f7;
      }
    }
    plVar1 = (longlong *)0x0;
  }
  else {
LAB_14258f9f7:
    plVar1 = (longlong *)thunk_FUN_1424da030(0x40);
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = (longlong)plVar1 + 0xd;
      *(undefined4 *)(plVar1 + 1) = 0x28;
      *(undefined2 *)((longlong)plVar1 + 0xc) = 0;
      *(undefined4 *)(plVar1 + 7) = 0;
    }
    uVar3 = *param_1;
    *param_1 = uVar3 + 1;
    *(longlong **)(*(longlong *)(param_1 + 2) + (longlong)(int)uVar3 * 8) = plVar1;
  }
  return plVar1;
}



// FUNCTION 14258fa50 FUN_14258fa50 body=287 status=ok
// SIG undefined FUN_14258fa50(void)

longlong * FUN_14258fa50(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Dst;
  uint uVar1;
  uint uVar2;
  undefined8 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar1 = param_1[4];
  if (*param_1 == uVar1) {
    uVar2 = 0x20;
    if (uVar1 != 8) {
      uVar2 = uVar1 * 2;
    }
    if (0 < (int)uVar2) {
      _Dst = (void *)FUN_1424da030((ulonglong)uVar2 << 3);
      if (_Dst != (void *)0x0) {
        if (0 < (int)uVar1) {
          if ((int)param_1[4] < (int)uVar1) {
            uVar1 = param_1[4];
          }
          if ((int)uVar2 <= (int)uVar1) {
            uVar1 = uVar2;
          }
          memcpy(_Dst,*(void **)(param_1 + 2),(longlong)(int)uVar1 << 3);
        }
        if ((char)param_1[5] != '\0') {
          FUN_1424da110(*(undefined8 *)(param_1 + 2));
        }
        *(void **)(param_1 + 2) = _Dst;
        param_1[4] = uVar2;
        *(undefined1 *)(param_1 + 5) = 1;
        goto LAB_14258faf4;
      }
    }
    local_48 = (longlong *)0x0;
  }
  else {
LAB_14258faf4:
    local_48 = (longlong *)thunk_FUN_1424da030(0x40);
    if (local_48 != (longlong *)0x0) {
      FUN_1425038b0(&local_58,*param_2);
      *local_48 = (longlong)local_48 + 0xd;
      *(undefined4 *)(local_48 + 1) = 0x28;
      *(undefined2 *)((longlong)local_48 + 0xc) = 0;
      *(undefined4 *)(local_48 + 7) = 0;
      FUN_142503520(local_48,local_58,local_50,param_3);
    }
    uVar1 = *param_1;
    *param_1 = uVar1 + 1;
    *(longlong **)(*(longlong *)(param_1 + 2) + (longlong)(int)uVar1 * 8) = local_48;
  }
  return local_48;
}



// FUNCTION 14258fb70 Unwind@14258fb70 body=61 status=ok
// SIG undefined Unwind@14258fb70(void)

void Unwind_14258fb70(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0x30) + 0xc) != '\0') {
    FUN_1424da110(**(undefined8 **)(param_2 + 0x30));
  }
  return;
}



// FUNCTION 14258fbb0 Unwind@14258fbb0 body=48 status=ok
// SIG undefined Unwind@14258fbb0(void)

void Unwind_14258fbb0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 14258fbe0 FUN_14258fbe0 body=178 status=ok
// SIG undefined FUN_14258fbe0(void)

undefined8 * FUN_14258fbe0(uint *param_1)

{
  void *_Dst;
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1[4];
  if (*param_1 == uVar3) {
    uVar2 = 0x20;
    if (uVar3 != 8) {
      uVar2 = uVar3 * 2;
    }
    if (0 < (int)uVar2) {
      _Dst = (void *)FUN_1424da030((ulonglong)uVar2 << 3);
      if (_Dst != (void *)0x0) {
        if (0 < (int)uVar3) {
          if ((int)param_1[4] < (int)uVar3) {
            uVar3 = param_1[4];
          }
          if ((int)uVar2 <= (int)uVar3) {
            uVar3 = uVar2;
          }
          memcpy(_Dst,*(void **)(param_1 + 2),(longlong)(int)uVar3 << 3);
        }
        if ((char)param_1[5] != '\0') {
          FUN_1424da110(*(undefined8 *)(param_1 + 2));
        }
        *(void **)(param_1 + 2) = _Dst;
        param_1[4] = uVar2;
        *(undefined1 *)(param_1 + 5) = 1;
        goto LAB_14258fc5f;
      }
    }
    puVar1 = (undefined8 *)0x0;
  }
  else {
LAB_14258fc5f:
    puVar1 = (undefined8 *)thunk_FUN_1424da030(0x10);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    uVar3 = *param_1;
    *param_1 = uVar3 + 1;
    *(undefined8 **)(*(longlong *)(param_1 + 2) + (longlong)(int)uVar3 * 8) = puVar1;
  }
  return puVar1;
}



// FUNCTION 14258fca0 FUN_14258fca0 body=186 status=ok
// SIG undefined FUN_14258fca0(void)

undefined8 * FUN_14258fca0(uint *param_1)

{
  void *_Dst;
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1[4];
  if (*param_1 == uVar3) {
    uVar2 = 0x20;
    if (uVar3 != 8) {
      uVar2 = uVar3 * 2;
    }
    if (0 < (int)uVar2) {
      _Dst = (void *)FUN_1424da030((ulonglong)uVar2 << 3);
      if (_Dst != (void *)0x0) {
        if (0 < (int)uVar3) {
          if ((int)param_1[4] < (int)uVar3) {
            uVar3 = param_1[4];
          }
          if ((int)uVar2 <= (int)uVar3) {
            uVar3 = uVar2;
          }
          memcpy(_Dst,*(void **)(param_1 + 2),(longlong)(int)uVar3 << 3);
        }
        if ((char)param_1[5] != '\0') {
          FUN_1424da110(*(undefined8 *)(param_1 + 2));
        }
        *(void **)(param_1 + 2) = _Dst;
        param_1[4] = uVar2;
        *(undefined1 *)(param_1 + 5) = 1;
        goto LAB_14258fd23;
      }
    }
    puVar1 = (undefined8 *)0x0;
  }
  else {
LAB_14258fd23:
    puVar1 = (undefined8 *)thunk_FUN_1424da030(0x20);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    uVar3 = *param_1;
    *param_1 = uVar3 + 1;
    *(undefined8 **)(*(longlong *)(param_1 + 2) + (longlong)(int)uVar3 * 8) = puVar1;
  }
  return puVar1;
}



// FUNCTION 14258fd60 FUN_14258fd60 body=104 status=ok
// SIG undefined FUN_14258fd60(void)

longlong FUN_14258fd60(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 in_RAX;
  uint uVar3;
  
  uVar1 = rdtsc();
  uVar3 = (uint)((ulonglong)uVar1 >> 0x20);
  uVar2 = rdtsc();
  return ((uVar2 & 0xffffffff) + (CONCAT44(uVar3,(int)(uVar2 >> 0x20)) << 0x20)) -
         (CONCAT44((int)((ulonglong)in_RAX >> 0x20),(int)uVar1) + ((ulonglong)uVar3 << 0x20));
}



// FUNCTION 14258fdd0 png_get_uint_31 body=31 status=ok
// SIG undefined png_get_uint_31(void)

void png_get_uint_31(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  
                    /* 0x258fdd0  707  png_get_uint_31 */
  uVar1 = *param_2;
  if (-1 < (int)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)) {
    return;
  }
  png_error(param_1,"PNG unsigned integer out of range");
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



// FUNCTION 14258fdf0 png_get_uint_32 body=5 status=ok
// SIG undefined png_get_uint_32(void)

uint png_get_uint_32(uint *param_1)

{
  uint uVar1;
  
                    /* 0x258fdf0  708  png_get_uint_32 */
  uVar1 = *param_1;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}



// FUNCTION 14258fe00 png_get_int_32 body=5 status=ok
// SIG undefined png_get_int_32(void)

uint png_get_int_32(uint *param_1)

{
  uint uVar1;
  
                    /* 0x258fe00  677  png_get_int_32 */
  uVar1 = *param_1;
  return uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
}



// FUNCTION 14258fe10 png_get_uint_16 body=8 status=ok
// SIG undefined png_get_uint_16(void)

ushort png_get_uint_16(ushort *param_1)

{
                    /* 0x258fe10  706  png_get_uint_16 */
  return *param_1 << 8 | *param_1 >> 8;
}



// FUNCTION 14258fe20 FUN_14258fe20 body=168 status=ok
// SIG undefined FUN_14258fe20(void)

void FUN_14258fe20(longlong param_1,longlong param_2)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  bVar1 = *(byte *)(param_1 + 0x264);
  uVar5 = (ulonglong)bVar1;
  if (7 < uVar5) {
    return;
  }
  lVar6 = -uVar5 + 8;
  *(undefined4 *)(param_1 + 0x4a8) = 0x11;
  FUN_1424ff2c0(param_1,param_2 + uVar5 + 0x2c,lVar6);
  *(undefined1 *)(param_1 + 0x264) = 8;
  iVar3 = png_sig_cmp(param_2 + 0x2c,uVar5,lVar6);
  if (iVar3 != 0) {
    if ((bVar1 < 4) && (iVar3 = png_sig_cmp(param_2 + 0x2c,uVar5,-uVar5 + 4), iVar3 != 0)) {
      pcVar4 = "Not a PNG file";
    }
    else {
      pcVar4 = "PNG file corrupted by ASCII conversion";
    }
    png_error(param_1,pcVar4);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (2 < bVar1) {
    return;
  }
  *(byte *)(param_1 + 0x155) = *(byte *)(param_1 + 0x155) | 0x10;
  return;
}



// FUNCTION 14258fed0 FUN_14258fed0 body=244 status=ok
// SIG undefined FUN_14258fed0(void)

void FUN_14258fed0(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  uint local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x4a8) = 0x21;
  FUN_1424ff2c0(param_1,&local_28,8);
  if ((int)(local_28 >> 0x18 | (local_28 & 0xff0000) >> 8 | (local_28 & 0xff00) << 8 |
           local_28 << 0x18) < 0) {
    png_error(param_1,"PNG unsigned integer out of range");
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *(undefined4 *)(param_1 + 0x254) = local_24;
  FUN_1424ef7e0(param_1);
  FUN_1424ef800(param_1,param_1 + 0x254,4);
  if ((((((byte)(*(char *)(param_1 + 0x254) + 0xbfU) < 0x3a) &&
        (5 < (byte)(*(char *)(param_1 + 0x254) + 0xa5U))) &&
       ((byte)(*(char *)(param_1 + 0x255) + 0xbfU) < 0x3a)) &&
      ((5 < (byte)(*(char *)(param_1 + 0x255) + 0xa5U) &&
       ((byte)(*(char *)(param_1 + 0x256) + 0xbfU) < 0x3a)))) &&
     ((5 < (byte)(*(char *)(param_1 + 0x256) + 0xa5U) &&
      (((byte)(*(char *)(param_1 + 599) + 0xbfU) < 0x3a &&
       (5 < (byte)(*(char *)(param_1 + 599) + 0xa5U))))))) {
    *(undefined4 *)(param_1 + 0x4a8) = 0x41;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  png_chunk_error(param_1,"invalid chunk type");
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 14258ffd0 FUN_14258ffd0 body=56 status=ok
// SIG undefined FUN_14258ffd0(void)

void FUN_14258ffd0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    FUN_1424ff2c0();
    FUN_1424ef800(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 142590010 FUN_142590010 body=371 status=ok
// SIG undefined FUN_142590010(void)

void FUN_142590010(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x1c0);
  uVar4 = (ulonglong)param_2;
  if (*(uint *)(param_1 + 0x1c0) < param_2) {
    uVar2 = *(undefined8 *)(param_1 + 0x1b8);
    FUN_1424ff2c0(param_1,uVar2,uVar5);
    uVar3 = uVar5;
    while( true ) {
      FUN_1424ef800(param_1,uVar2,uVar3);
      uVar4 = uVar4 - uVar5;
      if (uVar4 <= uVar5) break;
      uVar3 = (ulonglong)*(uint *)(param_1 + 0x1c0);
      uVar2 = *(undefined8 *)(param_1 + 0x1b8);
      FUN_1424ff2c0(param_1,uVar2,uVar3);
    }
  }
  if (uVar4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x1b8);
    FUN_1424ff2c0(param_1,uVar2,uVar4);
    FUN_1424ef800(param_1,uVar2,uVar4);
  }
  uVar1 = *(uint *)(param_1 + 0x158);
  if ((*(byte *)(param_1 + 0x254) & 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x4a8) = 0x81;
    FUN_1424ff2c0(param_1,&local_3c,4);
    if ((uVar1 & 0x800) != 0) goto LAB_142590179;
  }
  else {
    *(undefined4 *)(param_1 + 0x4a8) = 0x81;
    FUN_1424ff2c0(param_1,&local_3c,4);
    if ((uVar1 & 0x300) == 0x300) goto LAB_142590179;
  }
  if ((local_3c >> 0x18 | (local_3c & 0xff0000) >> 8 | (local_3c & 0xff00) << 8 | local_3c << 0x18)
      == *(uint *)(param_1 + 0x244)) goto LAB_142590179;
  if ((*(byte *)(param_1 + 0x254) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 0x158) & 0x400) == 0) {
LAB_14259016a:
      png_chunk_benign_error(param_1,"CRC error");
      goto LAB_142590179;
    }
  }
  else if ((*(uint *)(param_1 + 0x158) & 0x200) != 0) goto LAB_14259016a;
  png_chunk_warning(param_1,"CRC error");
LAB_142590179:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 1425901a0 FUN_1425901a0 body=463 status=ok
// SIG undefined FUN_1425901a0(void)

void FUN_1425901a0(longlong param_1,int param_2,ulonglong param_3,ulonglong param_4,size_t *param_5)

{
  void *pvVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  size_t sVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  char local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 < param_4) {
    png_warning(param_1,"invalid chunklength");
    sVar6 = 0;
    goto LAB_142590217;
  }
  sVar6 = param_4;
  if (param_2 == 0) {
    local_98 = 0;
    lVar3 = FUN_142590390(param_1,*(longlong *)(param_1 + 0x4a0) + param_4,param_3 - param_4,0);
    if ((*(longlong *)(param_1 + 0x468) != 0) &&
       (*(longlong *)(param_1 + 0x468) - 1U <= lVar3 + param_4)) {
      pcVar5 = "Exceeded size limit while expanding chunk";
      goto LAB_142590212;
    }
    if (lVar3 != 0) {
      pvVar2 = (void *)png_malloc_warn(param_1,lVar3 + param_4 + 1);
      if (pvVar2 == (void *)0x0) {
        pcVar5 = "Not enough memory to decompress chunk";
        goto LAB_142590212;
      }
      sVar6 = lVar3 + param_4;
      pvVar1 = *(void **)(param_1 + 0x4a0);
      memcpy(pvVar2,pvVar1,param_4);
      local_98 = lVar3;
      lVar4 = FUN_142590390(param_1,(longlong)pvVar1 + param_4,param_3 - param_4,
                            (longlong)pvVar2 + param_4);
      *(undefined1 *)((longlong)pvVar2 + sVar6) = 0;
      if (lVar4 == lVar3) {
        png_free(param_1,*(undefined8 *)(param_1 + 0x4a0));
        *(void **)(param_1 + 0x4a0) = pvVar2;
        goto LAB_14259025d;
      }
      png_warning(param_1,"png_inflate logic error");
      png_free(param_1,pvVar2);
      sVar6 = param_4;
    }
  }
  else {
    pcVar5 = local_88;
    FUN_1424ef650(pcVar5,0x32,"Unknown zTXt compression type %d");
LAB_142590212:
    png_warning(param_1,pcVar5);
  }
LAB_142590217:
  pvVar2 = (void *)png_malloc_warn(param_1,sVar6 + 1);
  if (pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)(param_1 + 0x4a0);
    if (sVar6 != 0) {
      memcpy(pvVar2,pvVar1,sVar6);
    }
    png_free(param_1,pvVar1);
    *(void **)(param_1 + 0x4a0) = pvVar2;
    *(undefined1 *)((longlong)pvVar2 + sVar6) = 0;
  }
LAB_14259025d:
  *param_5 = sVar6;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
}


