// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148a0c252 FUN_148a0c252 body=40 status=ok
// SIG undefined FUN_148a0c252(void)

void FUN_148a0c252(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x910) == '\x01') {
    FUN_145a1dbf6(param_2);
    *(undefined1 *)(param_2 + 0x910) = 0;
  }
  return;
}



// FUNCTION 148a0c2c8 FUN_148a0c2c8 body=161 status=ok
// SIG undefined FUN_148a0c2c8(void)

longlong FUN_148a0c2c8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_147f23058(param_1 + 0x80,param_2 + 0x80);
  FUN_144983130(param_1 + 0x198,param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  FUN_14054d68c(param_1 + 0x1d8,param_2 + 0x1d8);
  FUN_140ffb226(param_1 + 0x450,param_2 + 0x450);
  return param_1;
}



// FUNCTION 148a0c39a FUN_148a0c39a body=63 status=ok
// SIG undefined FUN_148a0c39a(void)

undefined1 FUN_148a0c39a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a0c4c2(param_2,param_3);
    param_3 = param_3 + 0x1340;
    param_2 = param_2 + 0x1340;
  }
  return 1;
}



// FUNCTION 148a0c402 FUN_148a0c402 body=59 status=ok
// SIG undefined FUN_148a0c402(void)

undefined8 FUN_148a0c402(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0c44e FUN_148a0c44e body=38 status=ok
// SIG undefined FUN_148a0c44e(void)

void FUN_148a0c44e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1340) == '\x01') {
    FUN_141241080(param_2);
    *(undefined1 *)(param_2 + 0x1340) = 0;
  }
  return;
}



// FUNCTION 148a0c4c2 FUN_148a0c4c2 body=463 status=ok
// SIG undefined FUN_148a0c4c2(void)

longlong FUN_148a0c4c2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1470d00c2(param_1 + 0x28,param_2 + 0x28);
  FUN_144983130(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_147f23058(param_1 + 0x80,param_2 + 0x80);
  FUN_140ffb226(param_1 + 0x198,param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x658) = *(undefined8 *)(param_2 + 0x658);
  *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(param_2 + 0x660);
  FUN_144983130(param_1 + 0x668,param_2 + 0x668);
  FUN_144983130(param_1 + 0x6a0,param_2 + 0x6a0);
  FUN_144983130(param_1 + 0x6d8,param_2 + 0x6d8);
  FUN_144983130(param_1 + 0x710,param_2 + 0x710);
  FUN_144983130(param_1 + 0x748,param_2 + 0x748);
  FUN_144983130(param_1 + 0x780,param_2 + 0x780);
  *(undefined1 *)(param_1 + 0x7b8) = *(undefined1 *)(param_2 + 0x7b8);
  FUN_141689bc8(param_1 + 0x7c0,param_2 + 0x7c0);
  *(undefined2 *)(param_1 + 0x878) = *(undefined2 *)(param_2 + 0x878);
  *(undefined1 *)(param_1 + 0x87a) = *(undefined1 *)(param_2 + 0x87a);
  FUN_140e7790a(param_1 + 0x880,param_2 + 0x880);
  FUN_140e7790a(param_1 + 0x898,param_2 + 0x898);
  *(undefined1 *)(param_1 + 0x8b0) = *(undefined1 *)(param_2 + 0x8b0);
  FUN_144983130(param_1 + 0x8b8,param_2 + 0x8b8);
  FUN_144983130(param_1 + 0x8f0,param_2 + 0x8f0);
  FUN_144983130(param_1 + 0x928,param_2 + 0x928);
  FUN_14054d68c(param_1 + 0x960,param_2 + 0x960);
  FUN_14054d68c(param_1 + 0xbd8,param_2 + 0xbd8);
  FUN_14054d68c(param_1 + 0xe50,param_2 + 0xe50);
  FUN_14054d68c(param_1 + 0x10c8,param_2 + 0x10c8);
  return param_1;
}



// FUNCTION 148a0c720 FUN_148a0c720 body=59 status=ok
// SIG undefined FUN_148a0c720(void)

undefined8 FUN_148a0c720(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0c7c0 FUN_148a0c7c0 body=34 status=ok
// SIG undefined FUN_148a0c7c0(void)

undefined8 FUN_148a0c7c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 148a0c7e2 FUN_148a0c7e2 body=55 status=ok
// SIG undefined FUN_148a0c7e2(void)

void FUN_148a0c7e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb934a8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb934a8 = FUN_140002ddd(FUN_1465710ef,uVar1,L"GbxCondition_CanReloadWeapon");
  }
  return;
}



// FUNCTION 148a0c8b4 FUN_148a0c8b4 body=59 status=ok
// SIG undefined FUN_148a0c8b4(void)

undefined8 FUN_148a0c8b4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0c954 FUN_148a0c954 body=34 status=ok
// SIG undefined FUN_148a0c954(void)

undefined8 FUN_148a0c954(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 148a0c976 FUN_148a0c976 body=55 status=ok
// SIG undefined FUN_148a0c976(void)

void FUN_148a0c976(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb934c0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb934c0 = FUN_140002ddd(FUN_146571185,uVar1,L"GbxCondition_WeaponActiveSlot");
  }
  return;
}



// FUNCTION 148a0ca4c FUN_148a0ca4c body=59 status=ok
// SIG undefined FUN_148a0ca4c(void)

undefined8 FUN_148a0ca4c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0caec FUN_148a0caec body=55 status=ok
// SIG undefined FUN_148a0caec(void)

void FUN_148a0caec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb934d8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb934d8 = FUN_140002ddd(FUN_14657121b,uVar1,L"GbxCondition_WeaponAmmoCount");
  }
  return;
}



// FUNCTION 148a0cbb0 FUN_148a0cbb0 body=59 status=ok
// SIG undefined FUN_148a0cbb0(void)

undefined8 FUN_148a0cbb0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0ccdc FUN_148a0ccdc body=59 status=ok
// SIG undefined FUN_148a0ccdc(void)

undefined8 FUN_148a0ccdc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0cd7c FUN_148a0cd7c body=55 status=ok
// SIG undefined FUN_148a0cd7c(void)

void FUN_148a0cd7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93508 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93508 = FUN_140002ddd(FUN_146571347,uVar1,L"GbxCondition_WeaponUseMode");
  }
  return;
}



// FUNCTION 148a0ce48 FUN_148a0ce48 body=59 status=ok
// SIG undefined FUN_148a0ce48(void)

undefined8 FUN_148a0ce48(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0cee8 FUN_148a0cee8 body=55 status=ok
// SIG undefined FUN_148a0cee8(void)

void FUN_148a0cee8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93520 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93520 = FUN_140002ddd(FUN_1465713dd,uVar1,L"GbxCondition_WeaponZoom");
  }
  return;
}



// FUNCTION 148a0cf71 FUN_148a0cf71 body=66 status=ok
// SIG undefined FUN_148a0cf71(void)

void FUN_148a0cf71(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0cfb8 FUN_148a0cfb8 body=61 status=ok
// SIG undefined FUN_148a0cfb8(void)

void FUN_148a0cfb8(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0cff6 FUN_148a0cff6 body=93 status=ok
// SIG undefined FUN_148a0cff6(void)

void FUN_148a0cff6(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb937f8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0d054 FUN_148a0d054 body=160 status=ok
// SIG undefined FUN_148a0d054(void)

void FUN_148a0d054(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x6f0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0d140 FUN_148a0d140 body=47 status=ok
// SIG undefined FUN_148a0d140(void)

void FUN_148a0d140(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb93848);
                    /* WARNING: Could not recover jumptable at 0x000148a0d16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148a0d1a8 FUN_148a0d1a8 body=37 status=ok
// SIG undefined FUN_148a0d1a8(void)

void FUN_148a0d1a8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143ecac8c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148a0d1d4 FUN_148a0d1d4 body=241 status=ok
// SIG undefined FUN_148a0d1d4(void)

void FUN_148a0d1d4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  thunk_FUN_1408bd596(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0d2dc FUN_148a0d2dc body=151 status=ok
// SIG undefined FUN_148a0d2dc(void)

void FUN_148a0d2dc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a1ff1a(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0d3bc FUN_148a0d3bc body=91 status=ok
// SIG undefined FUN_148a0d3bc(void)

void FUN_148a0d3bc(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb938d8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0d418 FUN_148a0d418 body=195 status=ok
// SIG undefined FUN_148a0d418(void)

void FUN_148a0d418(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 2000))(param_1,local_1c);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerInterruptReloadToUse_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x7d8))(param_1,local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0d4dc FUN_148a0d4dc body=93 status=ok
// SIG undefined FUN_148a0d4dc(void)

void FUN_148a0d4dc(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cb938e8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0d53a FUN_148a0d53a body=199 status=ok
// SIG undefined FUN_148a0d53a(void)

void FUN_148a0d53a(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x6e0))(param_1,local_1c);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerLock_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x6e8))(param_1,local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0d602 FUN_148a0d602 body=95 status=ok
// SIG undefined FUN_148a0d602(void)

void FUN_148a0d602(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1a = param_2;
  local_19 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cb93948);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1a);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0d662 FUN_148a0d662 body=280 status=ok
// SIG undefined FUN_148a0d662(void)

void FUN_148a0d662(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_1a = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x760))(param_1,local_19,local_1a);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerStopModeSwitch_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x768))(param_1,local_19,local_1a);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0d782 FUN_148a0d782 body=109 status=ok
// SIG undefined FUN_148a0d782(void)

void FUN_148a0d782(longlong *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_48 [44];
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_5;
  local_1c = param_2;
  local_1b = param_3;
  local_1a = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cb93968);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0d7f6 FUN_148a0d7f6 body=467 status=ok
// SIG undefined FUN_148a0d7f6(void)

void FUN_148a0d7f6(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_29;
  int local_28;
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  local_22 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_22);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_22);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  iVar1 = local_28;
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_29;
  cVar2 = (**(code **)(*param_1 + 0x770))(param_1,local_21,local_22,iVar1 != 0);
  if (cVar2 == '\0') {
    FUN_1468998ea(L"ServerSwitchMode_Validate");
  }
  else {
    local_38 = local_29;
    (**(code **)(*param_1 + 0x778))(param_1,local_21,local_22,iVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0d9ca FUN_148a0d9ca body=47 status=ok
// SIG undefined FUN_148a0d9ca(void)

void FUN_148a0d9ca(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cb93978);
                    /* WARNING: Could not recover jumptable at 0x000148a0d9f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 148a0d9fa FUN_148a0d9fa body=72 status=ok
// SIG undefined FUN_148a0d9fa(void)

void FUN_148a0d9fa(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x6c8))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148a0da2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6d0))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerUnlock_Validate");
  return;
}



// FUNCTION 148a0da48 FUN_148a0da48 body=328 status=ok
// SIG undefined FUN_148a0da48(void)

void FUN_148a0da48(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  int local_28;
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140994e4c(param_1,local_20,local_21,local_28 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0dc16 FUN_148a0dc16 body=55 status=ok
// SIG undefined FUN_148a0dc16(void)

void FUN_148a0dc16(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93758 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93758 = FUN_140002ddd(FUN_14657223f,uVar1,L"WeaponClassData");
  }
  return;
}



// FUNCTION 148a0dc70 FUN_148a0dc70 body=48 status=ok
// SIG undefined FUN_148a0dc70(void)

longlong FUN_148a0dc70(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140ef6ab0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0dca8 FUN_148a0dca8 body=48 status=ok
// SIG undefined FUN_148a0dca8(void)

longlong FUN_148a0dca8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140ef6ab0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0dce0 FUN_148a0dce0 body=48 status=ok
// SIG undefined FUN_148a0dce0(void)

longlong FUN_148a0dce0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140ef6ab0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0dd28 FUN_148a0dd28 body=48 status=ok
// SIG undefined FUN_148a0dd28(void)

longlong FUN_148a0dd28(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x530;
  FUN_140ef6ab0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0dd60 FUN_148a0dd60 body=48 status=ok
// SIG undefined FUN_148a0dd60(void)

longlong FUN_148a0dd60(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x538;
  FUN_140ef6ab0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0dd98 FUN_148a0dd98 body=48 status=ok
// SIG undefined FUN_148a0dd98(void)

longlong FUN_148a0dd98(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x540;
  FUN_140ef6ab0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0ddd0 FUN_148a0ddd0 body=48 status=ok
// SIG undefined FUN_148a0ddd0(void)

longlong FUN_148a0ddd0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c0;
  FUN_140ef6ab0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0de08 FUN_148a0de08 body=48 status=ok
// SIG undefined FUN_148a0de08(void)

longlong FUN_148a0de08(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c8;
  FUN_140ef6ab0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0de40 FUN_148a0de40 body=48 status=ok
// SIG undefined FUN_148a0de40(void)

longlong FUN_148a0de40(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8d0;
  FUN_140ef6ab0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0de78 FUN_148a0de78 body=48 status=ok
// SIG undefined FUN_148a0de78(void)

longlong FUN_148a0de78(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8d8;
  FUN_140ef6ab0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0deb0 FUN_148a0deb0 body=48 status=ok
// SIG undefined FUN_148a0deb0(void)

longlong FUN_148a0deb0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8e0;
  FUN_140ef6ab0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0dee0 FUN_148a0dee0 body=48 status=ok
// SIG undefined FUN_148a0dee0(void)

longlong FUN_148a0dee0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8e8;
  FUN_140ef6ab0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0dfa6 FUN_148a0dfa6 body=84 status=ok
// SIG undefined FUN_148a0dfa6(void)

undefined8 FUN_148a0dfa6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a0e022 FUN_148a0e022 body=59 status=ok
// SIG undefined FUN_148a0e022(void)

undefined8 FUN_148a0e022(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0e068 FUN_148a0e068 body=32 status=ok
// SIG undefined FUN_148a0e068(void)

void FUN_148a0e068(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148a0e0da FUN_148a0e0da body=149 status=ok
// SIG undefined FUN_148a0e0da(void)

void FUN_148a0e0da(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x760);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3dc) = 0x10;
  param_2[0x7d] = 0;
  param_2[0x7e] = 0;
  param_2[0x7f] = 0;
  param_2[0x80] = 0;
  param_2[0x81] = 0xffffffff00000000;
  *param_2 = &PTR_FUN_14b48fb90;
  param_2[0xf3] = 0;
  param_2[0xf4] = 0x1000000000;
  return;
}



// FUNCTION 148a0e21a FUN_148a0e21a body=85 status=ok
// SIG undefined FUN_148a0e21a(void)

undefined1 FUN_148a0e21a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    FUN_147f2f87a(param_2 + 0x418,param_3 + 0x418);
    param_2 = param_2 + 0x7a8;
    param_3 = param_3 + 0x7a8;
  }
  return 1;
}



// FUNCTION 148a0e298 FUN_148a0e298 body=59 status=ok
// SIG undefined FUN_148a0e298(void)

undefined8 FUN_148a0e298(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0e2e4 FUN_148a0e2e4 body=60 status=ok
// SIG undefined FUN_148a0e2e4(void)

void FUN_148a0e2e4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf5) == '\x01') {
    *param_2 = &PTR_FUN_14b48fb90;
    FUN_1405f0bde(param_2 + 0x83);
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0xf5) = 0;
  }
  return;
}



// FUNCTION 148a0e42a FUN_148a0e42a body=92 status=ok
// SIG undefined FUN_148a0e42a(void)

undefined8 FUN_148a0e42a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x20);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0xc);
      uVar6 = *(undefined4 *)(param_3 + -8);
      uVar7 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar5;
      *(undefined4 *)(param_2 + -8) = uVar6;
      *(undefined4 *)(param_2 + -4) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      FUN_1470d00c2(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(param_3 + 0x18);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a0e4ae FUN_148a0e4ae body=59 status=ok
// SIG undefined FUN_148a0e4ae(void)

undefined8 FUN_148a0e4ae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0e4f4 FUN_148a0e4f4 body=32 status=ok
// SIG undefined FUN_148a0e4f4(void)

void FUN_148a0e4f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148a0e562 FUN_148a0e562 body=38 status=ok
// SIG undefined FUN_148a0e562(void)

undefined8 FUN_148a0e562(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0e588 FUN_148a0e588 body=55 status=ok
// SIG undefined FUN_148a0e588(void)

void FUN_148a0e588(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93600 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93600 = FUN_140002ddd(FUN_146571d73,uVar1,L"GpsGeneratorSettings_WeaponTargetLocks");
  }
  return;
}



// FUNCTION 148a0e5c4 FUN_148a0e5c4 body=149 status=ok
// SIG undefined FUN_148a0e5c4(void)

void FUN_148a0e5c4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 7,0,0x760);
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3dc) = 0x10;
  param_2[0x7d] = 0;
  param_2[0x7e] = 0;
  param_2[0x7f] = 0;
  param_2[0x80] = 0;
  param_2[0x81] = 0xffffffff00000000;
  *param_2 = &PTR_FUN_14b48ffe0;
  param_2[0xf3] = 0;
  param_2[0xf4] = 0x1000000000;
  return;
}



// FUNCTION 148a0e704 FUN_148a0e704 body=85 status=ok
// SIG undefined FUN_148a0e704(void)

undefined1 FUN_148a0e704(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f2f73c(param_2,param_3);
    FUN_147f2f87a(param_2 + 0x418,param_3 + 0x418);
    param_2 = param_2 + 0x7a8;
    param_3 = param_3 + 0x7a8;
  }
  return 1;
}



// FUNCTION 148a0e782 FUN_148a0e782 body=59 status=ok
// SIG undefined FUN_148a0e782(void)

undefined8 FUN_148a0e782(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0e7ce FUN_148a0e7ce body=60 status=ok
// SIG undefined FUN_148a0e7ce(void)

void FUN_148a0e7ce(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf5) == '\x01') {
    *param_2 = &PTR_FUN_14b48ffe0;
    FUN_1405f0bde(param_2 + 0x83);
    FUN_1405f0b44(param_2);
    *(undefined1 *)(param_2 + 0xf5) = 0;
  }
  return;
}



// FUNCTION 148a0e858 FUN_148a0e858 body=63 status=ok
// SIG undefined FUN_148a0e858(void)

undefined8 * FUN_148a0e858(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b48ffe0;
  FUN_1405f0bde(param_1 + 0x83);
  FUN_1405f0b44(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0e898 FUN_148a0e898 body=55 status=ok
// SIG undefined FUN_148a0e898(void)

void FUN_148a0e898(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93618 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93618 = FUN_140002ddd(FUN_146571e09,uVar1,L"GpsGenerator_WeaponTargetLocks");
  }
  return;
}



// FUNCTION 148a0e8d0 FUN_148a0e8d0 body=67 status=ok
// SIG undefined FUN_148a0e8d0(void)

void FUN_148a0e8d0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x88);
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14b490240;
  *(undefined4 *)(param_2 + 0x10) = 0x3f000000;
  *(undefined2 *)((longlong)param_2 + 0x84) = 0;
  return;
}



// FUNCTION 148a0e914 FUN_148a0e914 body=51 status=ok
// SIG undefined FUN_148a0e914(void)

void FUN_148a0e914(undefined8 param_1,undefined8 *param_2)

{
  FUN_140d710e4(param_2);
  *param_2 = &PTR_FUN_14b490240;
  *(undefined4 *)(param_2 + 0x10) = 0x3f000000;
  *(undefined2 *)((longlong)param_2 + 0x84) = 0;
  return;
}



// FUNCTION 148a0e98c FUN_148a0e98c body=219 status=ok
// SIG undefined FUN_148a0e98c(void)

undefined8 FUN_148a0e98c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 8 + lVar10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_1470d00c2(param_2 + 0x28 + lVar10,param_3 + 0x28 + lVar10);
      *(undefined8 *)(param_2 + 0x40 + lVar10) = *(undefined8 *)(param_3 + 0x40 + lVar10);
      *(undefined1 *)(param_2 + 0x48 + lVar10) = *(undefined1 *)(param_3 + 0x48 + lVar10);
      *(undefined2 *)(param_2 + 0x50 + lVar10) = *(undefined2 *)(param_3 + 0x50 + lVar10);
      *(undefined1 *)(param_2 + 0x68 + lVar10) = *(undefined1 *)(param_3 + 0x68 + lVar10);
      *(undefined8 *)(param_2 + 0x60 + lVar10) = *(undefined8 *)(param_3 + 0x60 + lVar10);
      *(undefined4 *)(param_2 + 0x70 + lVar10) = *(undefined4 *)(param_3 + 0x70 + lVar10);
      *(undefined8 *)(param_2 + 0x78 + lVar10) = *(undefined8 *)(param_3 + 0x78 + lVar10);
      *(undefined4 *)(param_2 + 0x80 + lVar10) = *(undefined4 *)(param_3 + 0x80 + lVar10);
      *(undefined2 *)(param_2 + 0x84 + lVar10) = *(undefined2 *)(param_3 + 0x84 + lVar10);
      lVar10 = lVar10 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a0ea90 FUN_148a0ea90 body=59 status=ok
// SIG undefined FUN_148a0ea90(void)

undefined8 FUN_148a0ea90(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0eadc FUN_148a0eadc body=38 status=ok
// SIG undefined FUN_148a0eadc(void)

void FUN_148a0eadc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148a0eb50 FUN_148a0eb50 body=38 status=ok
// SIG undefined FUN_148a0eb50(void)

undefined8 FUN_148a0eb50(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0eb76 FUN_148a0eb76 body=55 status=ok
// SIG undefined FUN_148a0eb76(void)

void FUN_148a0eb76(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93630 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93630 =
         FUN_140002ddd(FUN_146571e9f,uVar1,L"GpsTestSettings_WeaponTargetLockScoringBoost");
  }
  return;
}



// FUNCTION 148a0ec48 FUN_148a0ec48 body=118 status=ok
// SIG undefined FUN_148a0ec48(void)

undefined8 FUN_148a0ec48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_1470d03b0(param_2 + 8,param_3 + 8);
      FUN_1470d03b0(param_2 + 0x20,param_3 + 0x20);
    }
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    uVar1 = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = uVar1;
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined2 *)(param_2 + 0x54) = *(undefined2 *)(param_3 + 0x54);
    *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148a0ece6 FUN_148a0ece6 body=59 status=ok
// SIG undefined FUN_148a0ece6(void)

undefined8 FUN_148a0ece6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0ed2c FUN_148a0ed2c body=32 status=ok
// SIG undefined FUN_148a0ed2c(void)

void FUN_148a0ed2c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_140f9d4d6(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148a0ed9a FUN_148a0ed9a body=38 status=ok
// SIG undefined FUN_148a0ed9a(void)

undefined8 FUN_148a0ed9a(undefined8 param_1,int param_2)

{
  FUN_140f9d4d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0edc0 FUN_148a0edc0 body=55 status=ok
// SIG undefined FUN_148a0edc0(void)

void FUN_148a0edc0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93648 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93648 = FUN_140002ddd(FUN_146571f35,uVar1,L"GpsTest_WeaponTargetLockScoringBoost");
  }
  return;
}



// FUNCTION 148a0ee16 FUN_148a0ee16 body=63 status=ok
// SIG undefined FUN_148a0ee16(void)

undefined1 FUN_148a0ee16(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a0ef6a(param_2,param_3);
    param_3 = param_3 + 0x218;
    param_2 = param_2 + 0x218;
  }
  return 1;
}



// FUNCTION 148a0ee7e FUN_148a0ee7e body=59 status=ok
// SIG undefined FUN_148a0ee7e(void)

undefined8 FUN_148a0ee7e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0eeca FUN_148a0eeca body=38 status=ok
// SIG undefined FUN_148a0eeca(void)

void FUN_148a0eeca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x218) == '\x01') {
    FUN_140e02a86(param_2);
    *(undefined1 *)(param_2 + 0x218) = 0;
  }
  return;
}



// FUNCTION 148a0ef32 FUN_148a0ef32 body=55 status=ok
// SIG undefined FUN_148a0ef32(void)

void FUN_148a0ef32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93698 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93698 = FUN_140002ddd(FUN_146572029,uVar1,L"ShotModifierData");
  }
  return;
}



// FUNCTION 148a0ef6a FUN_148a0ef6a body=307 status=ok
// SIG undefined FUN_148a0ef6a(void)

longlong FUN_148a0ef6a(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  FUN_140d02432(param_1 + 0x10,param_2 + 0x10);
  *(undefined1 *)(param_1 + 100) = *(undefined1 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  if ((*(longlong *)(param_1 + 0x68) != *(longlong *)(param_2 + 0x68)) ||
     (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70))) {
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_14118c70e(param_1 + 0x88,param_2 + 0x88);
  FUN_140115bdc(param_1 + 200,param_2 + 200);
  FUN_148a0f09e(param_1 + 0xe8,param_2 + 0xe8);
  FUN_140d02432(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
  FUN_140d02432(param_1 + 0x150,param_2 + 0x150);
  *(undefined1 *)(param_1 + 0x1a0) = *(undefined1 *)(param_2 + 0x1a0);
  FUN_140d02432(param_1 + 0x1a8,param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x1f8) = *(undefined1 *)(param_2 + 0x1f8);
  if ((*(longlong *)(param_1 + 0x200) != *(longlong *)(param_2 + 0x200)) ||
     (*(int *)(param_1 + 0x208) != *(int *)(param_2 + 0x208))) {
    *(longlong *)(param_1 + 0x200) = *(longlong *)(param_2 + 0x200);
    *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  return param_1;
}



// FUNCTION 148a0f09e FUN_148a0f09e body=93 status=ok
// SIG undefined FUN_148a0f09e(void)

undefined8 * FUN_148a0f09e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e02b28(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a0f0fc(param_1,iVar1);
      FUN_148a0f16f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148a0f0fc FUN_148a0f0fc body=115 status=ok
// SIG undefined FUN_148a0f0fc(void)

void FUN_148a0f0fc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148a0f16f FUN_148a0f16f body=52 status=ok
// SIG undefined FUN_148a0f16f(void)

void FUN_148a0f16f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1401f3da4(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148a0f1da FUN_148a0f1da body=75 status=ok
// SIG undefined FUN_148a0f1da(void)

undefined1 FUN_148a0f1da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_141289ada(param_2 + -0x10,param_3 + -0x10);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a0f24e FUN_148a0f24e body=59 status=ok
// SIG undefined FUN_148a0f24e(void)

undefined8 FUN_148a0f24e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0f294 FUN_148a0f294 body=32 status=ok
// SIG undefined FUN_148a0f294(void)

void FUN_148a0f294(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_140f8fcea(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148a0f340 FUN_148a0f340 body=59 status=ok
// SIG undefined FUN_148a0f340(void)

undefined8 FUN_148a0f340(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0f3e2 FUN_148a0f3e2 body=37 status=ok
// SIG undefined FUN_148a0f3e2(void)

void FUN_148a0f3e2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x150);
  FUN_143ec0ece(param_2);
  return;
}



// FUNCTION 148a0f434 FUN_148a0f434 body=63 status=ok
// SIG undefined FUN_148a0f434(void)

undefined1 FUN_148a0f434(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a0f5e4(param_2,param_3);
    param_3 = param_3 + 0x150;
    param_2 = param_2 + 0x150;
  }
  return 1;
}



// FUNCTION 148a0f49c FUN_148a0f49c body=59 status=ok
// SIG undefined FUN_148a0f49c(void)

undefined8 FUN_148a0f49c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0f4e8 FUN_148a0f4e8 body=57 status=ok
// SIG undefined FUN_148a0f4e8(void)

void FUN_148a0f4e8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2a) == '\x01') {
    *param_2 = &PTR_FUN_14b490d30;
    if (param_2[0x28] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x2a) = 0;
  }
  return;
}



// FUNCTION 148a0f570 FUN_148a0f570 body=60 status=ok
// SIG undefined FUN_148a0f570(void)

undefined8 * FUN_148a0f570(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b490d30;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a0f5ac FUN_148a0f5ac body=55 status=ok
// SIG undefined FUN_148a0f5ac(void)

void FUN_148a0f5ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93758 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93758 = FUN_140002ddd(FUN_14657223f,uVar1,L"WeaponClassData");
  }
  return;
}



// FUNCTION 148a0f5e4 FUN_148a0f5e4 body=209 status=ok
// SIG undefined FUN_148a0f5e4(void)

longlong FUN_148a0f5e4(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_140d02432(param_1 + 0x10,param_2 + 0x10);
  FUN_140d02432(param_1 + 0x60,param_2 + 0x60);
  FUN_140d02432(param_1 + 0xb0,param_2 + 0xb0);
  uVar1 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x105) = *(undefined8 *)(param_2 + 0x105);
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  if ((*(longlong *)(param_1 + 0x110) != *(longlong *)(param_2 + 0x110)) ||
     (*(int *)(param_1 + 0x118) != *(int *)(param_2 + 0x118))) {
    *(longlong *)(param_1 + 0x110) = *(longlong *)(param_2 + 0x110);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  uVar2 = *(undefined4 *)(param_2 + 0x134);
  uVar3 = *(undefined4 *)(param_2 + 0x138);
  uVar4 = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = uVar2;
  *(undefined4 *)(param_1 + 0x138) = uVar3;
  *(undefined4 *)(param_1 + 0x13c) = uVar4;
  FUN_144a787a6(param_1 + 0x140,param_2 + 0x140);
  return param_1;
}



// FUNCTION 148a0f722 FUN_148a0f722 body=59 status=ok
// SIG undefined FUN_148a0f722(void)

undefined8 FUN_148a0f722(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0f7e2 FUN_148a0f7e2 body=141 status=ok
// SIG undefined FUN_148a0f7e2(void)

undefined8 FUN_148a0f7e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_141289ada(lVar1 + 8,lVar2 + 8);
      uVar3 = *(undefined4 *)(lVar2 + 0x1c);
      uVar4 = *(undefined4 *)(lVar2 + 0x20);
      uVar5 = *(undefined4 *)(lVar2 + 0x24);
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined4 *)(lVar1 + 0x1c) = uVar3;
      *(undefined4 *)(lVar1 + 0x20) = uVar4;
      *(undefined4 *)(lVar1 + 0x24) = uVar5;
      *(undefined8 *)(lVar1 + 0x25) = *(undefined8 *)(lVar2 + 0x25);
      FUN_1401f3db8(param_2 + lVar6 + 0x30,param_3 + lVar6 + 0x30);
      FUN_1406fa324(param_2 + lVar6 + 0x48,param_3 + lVar6 + 0x48);
      lVar6 = lVar6 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a0f898 FUN_148a0f898 body=59 status=ok
// SIG undefined FUN_148a0f898(void)

undefined8 FUN_148a0f898(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0f8de FUN_148a0f8de body=56 status=ok
// SIG undefined FUN_148a0f8de(void)

void FUN_148a0f8de(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xb) == '\x01') {
    *param_2 = &PTR_FUN_14b492490;
    if (param_2[9] != 0) {
      FUN_1400020a8();
    }
    FUN_1458ad4f2(param_2);
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  return;
}



// FUNCTION 148a0f966 FUN_148a0f966 body=57 status=ok
// SIG undefined FUN_148a0f966(void)

void FUN_148a0f966(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93a68 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93a68 = FUN_140002ddd(FUN_146573093,uVar1,L"WeaponAmmoChamberBoneControl");
  }
  return;
}



// FUNCTION 148a0f9d0 FUN_148a0f9d0 body=84 status=ok
// SIG undefined FUN_148a0f9d0(void)

undefined8 FUN_148a0f9d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a0fa4c FUN_148a0fa4c body=59 status=ok
// SIG undefined FUN_148a0fa4c(void)

undefined8 FUN_148a0fa4c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0fa92 FUN_148a0fa92 body=48 status=ok
// SIG undefined FUN_148a0fa92(void)

void FUN_148a0fa92(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_FUN_14b4911c0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 148a0fb2a FUN_148a0fb2a body=73 status=ok
// SIG undefined FUN_148a0fb2a(void)

undefined8 FUN_148a0fb2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_1459a0a08();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a0fb9c FUN_148a0fb9c body=59 status=ok
// SIG undefined FUN_148a0fb9c(void)

undefined8 FUN_148a0fb9c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0fbe2 FUN_148a0fbe2 body=38 status=ok
// SIG undefined FUN_148a0fbe2(void)

void FUN_148a0fbe2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148a0fc4c FUN_148a0fc4c body=42 status=ok
// SIG undefined FUN_148a0fc4c(void)

void FUN_148a0fc4c(undefined8 param_1,undefined8 *param_2)

{
  FUN_141433862(param_2);
  *param_2 = &PTR_FUN_14b4914a0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  return;
}



// FUNCTION 148a0fc8c FUN_148a0fc8c body=63 status=ok
// SIG undefined FUN_148a0fc8c(void)

undefined1 FUN_148a0fc8c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a0fdb0(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 148a0fcf4 FUN_148a0fcf4 body=59 status=ok
// SIG undefined FUN_148a0fcf4(void)

undefined8 FUN_148a0fcf4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a0fd40 FUN_148a0fd40 body=38 status=ok
// SIG undefined FUN_148a0fd40(void)

void FUN_148a0fd40(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_1458dc9ea(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 148a0fdb0 FUN_148a0fdb0 body=109 status=ok
// SIG undefined FUN_148a0fdb0(void)

longlong FUN_148a0fdb0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1418443e8(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x35);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x35) = uVar1;
  FUN_1470c5506(param_1 + 0x40,param_2 + 0x40);
  FUN_1459a0a08(param_1 + 0xb0,param_2 + 0xb0);
  FUN_148a0fe1e(param_1 + 0xc0,param_2 + 0xc0);
  return param_1;
}



// FUNCTION 148a0fe1e FUN_148a0fe1e body=93 status=ok
// SIG undefined FUN_148a0fe1e(void)

undefined8 * FUN_148a0fe1e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140659899(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a0fe7c(param_1,iVar1);
      FUN_148a0feef(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148a0fe7c FUN_148a0fe7c body=115 status=ok
// SIG undefined FUN_148a0fe7c(void)

void FUN_148a0fe7c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148a0feef FUN_148a0feef body=52 status=ok
// SIG undefined FUN_148a0feef(void)

void FUN_148a0feef(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148a0ff24(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148a0ff24 FUN_148a0ff24 body=91 status=ok
// SIG undefined FUN_148a0ff24(void)

undefined4 * FUN_148a0ff24(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  uVar2 = *(undefined8 *)(param_2 + 2);
  param_1[4] = iVar1;
  if (iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_14141afca(param_1 + 2,iVar1,0);
    FUN_14115008a(*(undefined8 *)(param_1 + 2),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148a0ff80 FUN_148a0ff80 body=37 status=ok
// SIG undefined FUN_148a0ff80(void)

void FUN_148a0ff80(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1c8);
  FUN_143ec113e(param_2);
  return;
}



// FUNCTION 148a0ffd2 FUN_148a0ffd2 body=63 status=ok
// SIG undefined FUN_148a0ffd2(void)

undefined1 FUN_148a0ffd2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a10158(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 148a1003a FUN_148a1003a body=59 status=ok
// SIG undefined FUN_148a1003a(void)

undefined8 FUN_148a1003a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a10086 FUN_148a10086 body=38 status=ok
// SIG undefined FUN_148a10086(void)

void FUN_148a10086(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_1405b06a2(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 148a100fa FUN_148a100fa body=38 status=ok
// SIG undefined FUN_148a100fa(void)

undefined8 FUN_148a100fa(undefined8 param_1,int param_2)

{
  FUN_1405b06a2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a10120 FUN_148a10120 body=55 status=ok
// SIG undefined FUN_148a10120(void)

void FUN_148a10120(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93ac8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93ac8 = FUN_140002ddd(FUN_1465733fd,uVar1,L"WeaponAudioAspect");
  }
  return;
}



// FUNCTION 148a10158 FUN_148a10158 body=377 status=ok
// SIG undefined FUN_148a10158(void)

longlong FUN_148a10158(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1418443e8(param_1 + 0x18,param_2 + 0x18);
  FUN_140c2104c(param_1 + 0x30,param_2 + 0x30);
  FUN_140c2104c(param_1 + 0x40,param_2 + 0x40);
  FUN_140c2104c(param_1 + 0x50,param_2 + 0x50);
  FUN_140c2104c(param_1 + 0x60,param_2 + 0x60);
  FUN_140c2104c(param_1 + 0x70,param_2 + 0x70);
  FUN_140c2104c(param_1 + 0x80,param_2 + 0x80);
  FUN_140c2104c(param_1 + 0x90,param_2 + 0x90);
  FUN_140c2104c(param_1 + 0xa0,param_2 + 0xa0);
  FUN_140c212b6(param_1 + 0xb0,param_2 + 0xb0);
  FUN_145eff776(param_1 + 0xc0,param_2 + 0xc0);
  FUN_140c21306(param_1 + 0x110,param_2 + 0x110);
  FUN_144a7bb84(param_1 + 0x120,param_2 + 0x120);
  uVar2 = *(undefined4 *)(param_2 + 0x13c);
  uVar3 = *(undefined4 *)(param_2 + 0x140);
  uVar4 = *(undefined4 *)(param_2 + 0x144);
  uVar5 = *(undefined4 *)(param_2 + 0x148);
  uVar6 = *(undefined4 *)(param_2 + 0x14c);
  uVar7 = *(undefined4 *)(param_2 + 0x150);
  uVar8 = *(undefined4 *)(param_2 + 0x154);
  uVar9 = *(undefined4 *)(param_2 + 0x158);
  uVar10 = *(undefined4 *)(param_2 + 0x15c);
  uVar11 = *(undefined4 *)(param_2 + 0x160);
  uVar12 = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = uVar2;
  *(undefined4 *)(param_1 + 0x140) = uVar3;
  *(undefined4 *)(param_1 + 0x144) = uVar4;
  *(undefined4 *)(param_1 + 0x148) = uVar5;
  *(undefined4 *)(param_1 + 0x14c) = uVar6;
  *(undefined4 *)(param_1 + 0x150) = uVar7;
  *(undefined4 *)(param_1 + 0x154) = uVar8;
  *(undefined4 *)(param_1 + 0x158) = uVar9;
  *(undefined4 *)(param_1 + 0x15c) = uVar10;
  *(undefined4 *)(param_1 + 0x160) = uVar11;
  *(undefined4 *)(param_1 + 0x164) = uVar12;
  *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(param_2 + 0x168);
  FUN_144a7bb84(param_1 + 0x170,param_2 + 0x170);
  *(undefined2 *)(param_1 + 0x188) = *(undefined2 *)(param_2 + 0x188);
  FUN_144a7bb84(param_1 + 400,param_2 + 400);
  uVar1 = *(undefined8 *)(param_2 + 0x1ae);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1ae) = uVar1;
  FUN_147f745ac(param_1 + 0x1b8,param_2 + 0x1b8);
  return param_1;
}



// FUNCTION 148a102d2 FUN_148a102d2 body=115 status=ok
// SIG undefined FUN_148a102d2(void)

void FUN_148a102d2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148a10345 FUN_148a10345 body=60 status=ok
// SIG undefined FUN_148a10345(void)

void FUN_148a10345(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_141818f7a(param_1,param_2);
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
    uVar2 = *(undefined4 *)(param_2 + 0x20);
    uVar3 = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 148a10382 FUN_148a10382 body=111 status=ok
// SIG undefined FUN_148a10382(void)

void FUN_148a10382(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148a103f1 FUN_148a103f1 body=52 status=ok
// SIG undefined FUN_148a103f1(void)

void FUN_148a103f1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1418ba9ee(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 148a10426 FUN_148a10426 body=37 status=ok
// SIG undefined FUN_148a10426(void)

void FUN_148a10426(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x840);
  FUN_140fe591a(param_2);
  return;
}



// FUNCTION 148a10478 FUN_148a10478 body=63 status=ok
// SIG undefined FUN_148a10478(void)

undefined1 FUN_148a10478(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a105fe(param_2,param_3);
    param_3 = param_3 + 0x840;
    param_2 = param_2 + 0x840;
  }
  return 1;
}



// FUNCTION 148a104e0 FUN_148a104e0 body=59 status=ok
// SIG undefined FUN_148a104e0(void)

undefined8 FUN_148a104e0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1052c FUN_148a1052c body=38 status=ok
// SIG undefined FUN_148a1052c(void)

void FUN_148a1052c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x840) == '\x01') {
    FUN_140adf366(param_2);
    *(undefined1 *)(param_2 + 0x840) = 0;
  }
  return;
}



// FUNCTION 148a105a0 FUN_148a105a0 body=38 status=ok
// SIG undefined FUN_148a105a0(void)

undefined8 FUN_148a105a0(undefined8 param_1,int param_2)

{
  FUN_140adf366();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a105c6 FUN_148a105c6 body=55 status=ok
// SIG undefined FUN_148a105c6(void)

void FUN_148a105c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93ae0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93ae0 = FUN_140002ddd(FUN_14657351c,uVar1,L"WeaponAudioProvider");
  }
  return;
}



// FUNCTION 148a105fe FUN_148a105fe body=690 status=ok
// SIG undefined FUN_148a105fe(void)

longlong FUN_148a105fe(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  FUN_147f74370();
  FUN_148a1090e(param_1 + 0x300,param_2 + 0x300);
  FUN_140c2104c(param_1 + 0x350,param_2 + 0x350);
  FUN_140c2104c(param_1 + 0x360,param_2 + 0x360);
  FUN_140c2104c(param_1 + 0x370,param_2 + 0x370);
  FUN_140c2104c(param_1 + 0x380,param_2 + 0x380);
  FUN_140c2104c(param_1 + 0x390,param_2 + 0x390);
  FUN_140c2104c(param_1 + 0x3a0,param_2 + 0x3a0);
  FUN_140c2104c(param_1 + 0x3b0,param_2 + 0x3b0);
  FUN_140c2104c(param_1 + 0x3c0,param_2 + 0x3c0);
  FUN_140c212b6(param_1 + 0x3d0,param_2 + 0x3d0);
  FUN_148a108b0(param_1 + 0x3e0,param_2 + 0x3e0);
  FUN_148a108b0(param_1 + 0x3f0,param_2 + 0x3f0);
  FUN_148a108b0(param_1 + 0x400,param_2 + 0x400);
  FUN_148a108b0(param_1 + 0x410,param_2 + 0x410);
  FUN_148a108b0(param_1 + 0x420,param_2 + 0x420);
  FUN_148a108b0(param_1 + 0x430,param_2 + 0x430);
  FUN_148a108b0(param_1 + 0x440,param_2 + 0x440);
  FUN_148a108b0(param_1 + 0x450,param_2 + 0x450);
  uVar2 = *(undefined4 *)(param_2 + 0x464);
  uVar3 = *(undefined4 *)(param_2 + 0x468);
  uVar4 = *(undefined4 *)(param_2 + 0x46c);
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_2 + 0x460);
  *(undefined4 *)(param_1 + 0x464) = uVar2;
  *(undefined4 *)(param_1 + 0x468) = uVar3;
  *(undefined4 *)(param_1 + 0x46c) = uVar4;
  *(undefined8 *)(param_1 + 0x470) = *(undefined8 *)(param_2 + 0x470);
  FUN_1447cd5a6(param_1 + 0x478,param_2 + 0x478);
  *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)(param_2 + 0x488);
  *(undefined1 *)(param_1 + 0x490) = *(undefined1 *)(param_2 + 0x490);
  FUN_148a10c8a(param_1 + 0x498,param_2 + 0x498);
  uVar2 = *(undefined4 *)(param_2 + 0x4ec);
  uVar3 = *(undefined4 *)(param_2 + 0x4f0);
  uVar4 = *(undefined4 *)(param_2 + 0x4f4);
  *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4ec) = uVar2;
  *(undefined4 *)(param_1 + 0x4f0) = uVar3;
  *(undefined4 *)(param_1 + 0x4f4) = uVar4;
  FUN_140c21364(param_1 + 0x4f8,param_2 + 0x4f8);
  lVar14 = param_1 + 0x660;
  lVar13 = param_2 + 0x660;
  lVar15 = 2;
  do {
    FUN_144a7bb84(lVar14,lVar13);
    uVar2 = *(undefined4 *)(lVar13 + 0x1c);
    uVar3 = *(undefined4 *)(lVar13 + 0x20);
    uVar4 = *(undefined4 *)(lVar13 + 0x24);
    uVar5 = *(undefined4 *)(lVar13 + 0x28);
    uVar6 = *(undefined4 *)(lVar13 + 0x2c);
    uVar7 = *(undefined4 *)(lVar13 + 0x30);
    uVar8 = *(undefined4 *)(lVar13 + 0x34);
    uVar9 = *(undefined4 *)(lVar13 + 0x38);
    uVar10 = *(undefined4 *)(lVar13 + 0x3c);
    uVar11 = *(undefined4 *)(lVar13 + 0x40);
    uVar12 = *(undefined4 *)(lVar13 + 0x44);
    *(undefined4 *)(lVar14 + 0x18) = *(undefined4 *)(lVar13 + 0x18);
    *(undefined4 *)(lVar14 + 0x1c) = uVar2;
    *(undefined4 *)(lVar14 + 0x20) = uVar3;
    *(undefined4 *)(lVar14 + 0x24) = uVar4;
    *(undefined4 *)(lVar14 + 0x28) = uVar5;
    *(undefined4 *)(lVar14 + 0x2c) = uVar6;
    *(undefined4 *)(lVar14 + 0x30) = uVar7;
    *(undefined4 *)(lVar14 + 0x34) = uVar8;
    *(undefined4 *)(lVar14 + 0x38) = uVar9;
    *(undefined4 *)(lVar14 + 0x3c) = uVar10;
    *(undefined4 *)(lVar14 + 0x40) = uVar11;
    *(undefined4 *)(lVar14 + 0x44) = uVar12;
    *(undefined1 *)(lVar14 + 0x48) = *(undefined1 *)(lVar13 + 0x48);
    lVar13 = lVar13 + 0x50;
    lVar14 = lVar14 + 0x50;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  FUN_144a7bb84(param_1 + 0x700,param_2 + 0x700);
  *(undefined2 *)(param_1 + 0x718) = *(undefined2 *)(param_2 + 0x718);
  FUN_144a7bb84(param_1 + 0x720,param_2 + 0x720);
  uVar1 = *(undefined8 *)(param_2 + 0x73e);
  *(undefined8 *)(param_1 + 0x738) = *(undefined8 *)(param_2 + 0x738);
  *(undefined8 *)(param_1 + 0x73e) = uVar1;
  FUN_140c21306(param_1 + 0x748,param_2 + 0x748);
  uVar2 = *(undefined4 *)(param_2 + 0x75c);
  uVar3 = *(undefined4 *)(param_2 + 0x760);
  uVar4 = *(undefined4 *)(param_2 + 0x764);
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_2 + 0x758);
  *(undefined4 *)(param_1 + 0x75c) = uVar2;
  *(undefined4 *)(param_1 + 0x760) = uVar3;
  *(undefined4 *)(param_1 + 0x764) = uVar4;
  *(undefined8 *)(param_1 + 0x768) = *(undefined8 *)(param_2 + 0x768);
  FUN_140ca9024(param_1 + 0x770,param_2 + 0x770);
  uVar1 = *(undefined8 *)(param_2 + 0x838);
  *(undefined8 *)(param_1 + 0x830) = *(undefined8 *)(param_2 + 0x830);
  *(undefined8 *)(param_1 + 0x838) = uVar1;
  return param_1;
}



// FUNCTION 148a108b0 FUN_148a108b0 body=93 status=ok
// SIG undefined FUN_148a108b0(void)

undefined8 * FUN_148a108b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140adf6d2(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a10a88(param_1,iVar1);
      FUN_148a10aea(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148a1090e FUN_148a1090e body=122 status=ok
// SIG undefined FUN_148a1090e(void)

longlong FUN_148a1090e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_148a10988(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148a10988 FUN_148a10988 body=256 status=ok
// SIG undefined FUN_148a10988(void)

longlong * FUN_148a10988(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140adfa0c(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar2 + 4 + lVar7);
        }
        else {
          *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(lVar2 + lVar7);
          lVar3 = *(longlong *)(lVar2 + 8 + lVar7);
          *(longlong *)(lVar4 + 8 + lVar7) = lVar3;
          if ((lVar3 != 0) && ((DAT_14cb26569 & 1) != 0)) {
            FUN_14036e5a4(*(undefined8 *)(lVar3 + 0x50));
          }
          *(undefined1 *)(lVar4 + 0x10 + lVar7) = *(undefined1 *)(lVar2 + 0x10 + lVar7);
          *(undefined8 *)(lVar4 + 0x18 + lVar7) = *(undefined8 *)(lVar2 + 0x18 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x20;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 148a10a88 FUN_148a10a88 body=98 status=ok
// SIG undefined FUN_148a10a88(void)

void FUN_148a10a88(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148a10aea FUN_148a10aea body=109 status=ok
// SIG undefined FUN_148a10aea(void)

void FUN_148a10aea(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    piVar3 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar3;
      uVar2 = *(undefined8 *)(piVar3 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_148a10b58(param_1,iVar1,0);
        FUN_148a10bba(*param_1,uVar2);
      }
      param_1 = param_1 + 2;
      piVar3 = piVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148a10b58 FUN_148a10b58 body=98 status=ok
// SIG undefined FUN_148a10b58(void)

void FUN_148a10b58(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148a10bba FUN_148a10bba body=52 status=ok
// SIG undefined FUN_148a10bba(void)

void FUN_148a10bba(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148a10bee(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 148a10bee FUN_148a10bee body=156 status=ok
// SIG undefined FUN_148a10bee(void)

longlong * FUN_148a10bee(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14cb26569) == 1) {
    FUN_14036e5a4(*(undefined8 *)(lVar1 + 0x50));
  }
  bVar2 = DAT_14cb26569;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
    FUN_14036e5a4(*(undefined8 *)(lVar1 + 0x50));
  }
  param_1[2] = param_2[2];
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x108) = *(int *)(lVar1 + 0x108) + 1;
  }
  param_1[4] = param_2[4];
  lVar1 = param_2[5];
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = param_2[6];
  *(undefined8 *)((longlong)param_1 + 0x37) = *(undefined8 *)((longlong)param_2 + 0x37);
  param_1[6] = lVar1;
  return param_1;
}



// FUNCTION 148a10c8a FUN_148a10c8a body=122 status=ok
// SIG undefined FUN_148a10c8a(void)

longlong FUN_148a10c8a(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_148a10d04(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148a10d04 FUN_148a10d04 body=221 status=ok
// SIG undefined FUN_148a10d04(void)

longlong * FUN_148a10d04(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140adf894(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 8 + lVar5);
          *(longlong *)(lVar4 + 8 + lVar5) = lVar3;
          if (lVar3 != 0) {
            *(int *)(lVar3 + 0x108) = *(int *)(lVar3 + 0x108) + 1;
          }
          *(undefined8 *)(lVar4 + 0x10 + lVar5) = *(undefined8 *)(lVar2 + 0x10 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x18;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 148a10e22 FUN_148a10e22 body=60 status=ok
// SIG undefined FUN_148a10e22(void)

undefined1 FUN_148a10e22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447a122a(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 148a10e86 FUN_148a10e86 body=59 status=ok
// SIG undefined FUN_148a10e86(void)

undefined8 FUN_148a10e86(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a10ecc FUN_148a10ecc body=37 status=ok
// SIG undefined FUN_148a10ecc(void)

void FUN_148a10ecc(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148a10fa2 FUN_148a10fa2 body=63 status=ok
// SIG undefined FUN_148a10fa2(void)

undefined1 FUN_148a10fa2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a110c4(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 148a1100a FUN_148a1100a body=59 status=ok
// SIG undefined FUN_148a1100a(void)

undefined8 FUN_148a1100a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a11056 FUN_148a11056 body=44 status=ok
// SIG undefined FUN_148a11056(void)

void FUN_148a11056(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    if (*(longlong *)(param_2 + 0x70) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 148a110c4 FUN_148a110c4 body=121 status=ok
// SIG undefined FUN_148a110c4(void)

undefined4 * FUN_148a110c4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined8 *)((longlong)param_1 + 0xe) = *(undefined8 *)((longlong)param_2 + 0xe);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_144a7bb84(param_1 + 6,param_2 + 6);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  FUN_144a7bb84(param_1 + 0xe,param_2 + 0xe);
  uVar1 = param_2[0x15];
  uVar2 = param_2[0x16];
  uVar3 = param_2[0x17];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x5a);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x5e);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x62);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x66);
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar2;
  param_1[0x17] = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x5a) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x5e) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x62) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x66) = uVar7;
  FUN_1447a122a(param_1 + 0x1c,param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  return param_1;
}



// FUNCTION 148a1117e FUN_148a1117e body=62 status=ok
// SIG undefined FUN_148a1117e(void)

undefined1 FUN_148a1117e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14123c256(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x1c);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    uVar3 = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 0x20) = uVar2;
    *(undefined4 *)(param_2 + 0x24) = uVar3;
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 148a111e4 FUN_148a111e4 body=59 status=ok
// SIG undefined FUN_148a111e4(void)

undefined8 FUN_148a111e4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a112ac FUN_148a112ac body=63 status=ok
// SIG undefined FUN_148a112ac(void)

undefined1 FUN_148a112ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140c21364(param_2,param_3);
    param_3 = param_3 + 0x168;
    param_2 = param_2 + 0x168;
  }
  return 1;
}



// FUNCTION 148a11314 FUN_148a11314 body=59 status=ok
// SIG undefined FUN_148a11314(void)

undefined8 FUN_148a11314(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a113fe FUN_148a113fe body=54 status=ok
// SIG undefined FUN_148a113fe(void)

undefined1 FUN_148a113fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a11512(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148a1145c FUN_148a1145c body=59 status=ok
// SIG undefined FUN_148a1145c(void)

undefined8 FUN_148a1145c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a114a2 FUN_148a114a2 body=45 status=ok
// SIG undefined FUN_148a114a2(void)

void FUN_148a114a2(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 0x70) == '\x01') {
    plVar2 = *(longlong **)(param_2 + 0x58);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148a11512 FUN_148a11512 body=122 status=ok
// SIG undefined FUN_148a11512(void)

undefined8 * FUN_148a11512(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *param_1 = *param_2;
  FUN_144a7bb84(param_1 + 1,param_2 + 1);
  FUN_144a7bb84(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar6 = *(undefined4 *)(param_2 + 8);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  *(undefined4 *)(param_1 + 8) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar7;
  uVar2 = param_2[10];
  lVar3 = param_2[0xb];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[0xb];
  param_1[10] = uVar2;
  param_1[0xb] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar2 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar2;
  return param_1;
}



// FUNCTION 148a115dc FUN_148a115dc body=84 status=ok
// SIG undefined FUN_148a115dc(void)

undefined1 FUN_148a115dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a7bb84(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x1c);
    uVar2 = *(undefined4 *)(param_3 + 0x20);
    uVar3 = *(undefined4 *)(param_3 + 0x24);
    uVar4 = *(undefined4 *)(param_3 + 0x28);
    uVar5 = *(undefined4 *)(param_3 + 0x2c);
    uVar6 = *(undefined4 *)(param_3 + 0x30);
    uVar7 = *(undefined4 *)(param_3 + 0x34);
    uVar8 = *(undefined4 *)(param_3 + 0x38);
    uVar9 = *(undefined4 *)(param_3 + 0x3c);
    uVar10 = *(undefined4 *)(param_3 + 0x40);
    uVar11 = *(undefined4 *)(param_3 + 0x44);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 0x20) = uVar2;
    *(undefined4 *)(param_2 + 0x24) = uVar3;
    *(undefined4 *)(param_2 + 0x28) = uVar4;
    *(undefined4 *)(param_2 + 0x2c) = uVar5;
    *(undefined4 *)(param_2 + 0x30) = uVar6;
    *(undefined4 *)(param_2 + 0x34) = uVar7;
    *(undefined4 *)(param_2 + 0x38) = uVar8;
    *(undefined4 *)(param_2 + 0x3c) = uVar9;
    *(undefined4 *)(param_2 + 0x40) = uVar10;
    *(undefined4 *)(param_2 + 0x44) = uVar11;
    *(undefined1 *)(param_2 + 0x48) = *(undefined1 *)(param_3 + 0x48);
    param_2 = param_2 + 0x50;
    param_3 = param_3 + 0x50;
  }
  return 1;
}



// FUNCTION 148a11658 FUN_148a11658 body=59 status=ok
// SIG undefined FUN_148a11658(void)

undefined8 FUN_148a11658(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a11744 FUN_148a11744 body=91 status=ok
// SIG undefined FUN_148a11744(void)

undefined8 FUN_148a11744(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a7bb84(param_2,param_3);
    *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(param_3 + 0x18);
    FUN_144a7bb84(param_2 + 0x20,param_3 + 0x20);
    uVar1 = *(undefined8 *)(param_3 + 0x3e);
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_3 + 0x38);
    *(undefined8 *)(param_2 + 0x3e) = uVar1;
    param_2 = param_2 + 0x48;
    param_3 = param_3 + 0x48;
  }
  return 1;
}



// FUNCTION 148a117c8 FUN_148a117c8 body=59 status=ok
// SIG undefined FUN_148a117c8(void)

undefined8 FUN_148a117c8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a11866 FUN_148a11866 body=37 status=ok
// SIG undefined FUN_148a11866(void)

void FUN_148a11866(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x410);
  FUN_143ec13e8(param_2);
  return;
}



// FUNCTION 148a118b8 FUN_148a118b8 body=63 status=ok
// SIG undefined FUN_148a118b8(void)

undefined1 FUN_148a118b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a11a3e(param_2,param_3);
    param_3 = param_3 + 0x410;
    param_2 = param_2 + 0x410;
  }
  return 1;
}



// FUNCTION 148a11920 FUN_148a11920 body=59 status=ok
// SIG undefined FUN_148a11920(void)

undefined8 FUN_148a11920(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1196c FUN_148a1196c body=38 status=ok
// SIG undefined FUN_148a1196c(void)

void FUN_148a1196c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x410) == '\x01') {
    FUN_140f1443c(param_2);
    *(undefined1 *)(param_2 + 0x410) = 0;
  }
  return;
}



// FUNCTION 148a119e0 FUN_148a119e0 body=38 status=ok
// SIG undefined FUN_148a119e0(void)

undefined8 FUN_148a119e0(undefined8 param_1,int param_2)

{
  FUN_140f1443c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a11a06 FUN_148a11a06 body=55 status=ok
// SIG undefined FUN_148a11a06(void)

void FUN_148a11a06(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93bb8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93bb8 = FUN_140002ddd(FUN_146573917,uVar1,L"WeaponAudioProviderDef");
  }
  return;
}



// FUNCTION 148a11a3e FUN_148a11a3e body=234 status=ok
// SIG undefined FUN_148a11a3e(void)

longlong FUN_148a11a3e(longlong param_1,longlong param_2)

{
  FUN_147f75384();
  FUN_140c2104c(param_1 + 0x148,param_2 + 0x148);
  FUN_140c2104c(param_1 + 0x158,param_2 + 0x158);
  FUN_140c2104c(param_1 + 0x168,param_2 + 0x168);
  FUN_140c2104c(param_1 + 0x178,param_2 + 0x178);
  FUN_140c2104c(param_1 + 0x188,param_2 + 0x188);
  FUN_140c2104c(param_1 + 0x198,param_2 + 0x198);
  FUN_140c2104c(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_140c2104c(param_1 + 0x1b8,param_2 + 0x1b8);
  FUN_140c212b6(param_1 + 0x1c8,param_2 + 0x1c8);
  FUN_140c21364(param_1 + 0x1d8,param_2 + 0x1d8);
  FUN_140c21306(param_1 + 0x340,param_2 + 0x340);
  FUN_140ca9024(param_1 + 0x350,param_2 + 0x350);
  return param_1;
}



// FUNCTION 148a11c42 FUN_148a11c42 body=56 status=ok
// SIG undefined FUN_148a11c42(void)

void FUN_148a11c42(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148a11c6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a11d46 FUN_148a11d46 body=78 status=ok
// SIG undefined FUN_148a11d46(void)

undefined8 FUN_148a11d46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a11dbc FUN_148a11dbc body=59 status=ok
// SIG undefined FUN_148a11dbc(void)

undefined8 FUN_148a11dbc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a11e02 FUN_148a11e02 body=48 status=ok
// SIG undefined FUN_148a11e02(void)

void FUN_148a11e02(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14b49d1f0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 148a11e80 FUN_148a11e80 body=62 status=ok
// SIG undefined FUN_148a11e80(void)

undefined8 * FUN_148a11e80(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b49d1f0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148a11ebe FUN_148a11ebe body=55 status=ok
// SIG undefined FUN_148a11ebe(void)

void FUN_148a11ebe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93bf8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93bf8 = FUN_140002ddd(FUN_146573dd6,uVar1,L"WeaponBehaviorDef");
  }
  return;
}



// FUNCTION 148a11f2c FUN_148a11f2c body=63 status=ok
// SIG undefined FUN_148a11f2c(void)

undefined1 FUN_148a11f2c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a12064(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 148a11f94 FUN_148a11f94 body=59 status=ok
// SIG undefined FUN_148a11f94(void)

undefined8 FUN_148a11f94(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a11fe0 FUN_148a11fe0 body=54 status=ok
// SIG undefined FUN_148a11fe0(void)

void FUN_148a11fe0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    *param_2 = &PTR_FUN_14b49d1f0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 148a12064 FUN_148a12064 body=101 status=ok
// SIG undefined FUN_148a12064(void)

longlong FUN_148a12064(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  FUN_140d02432(param_1 + 0x38,param_2 + 0x38);
  FUN_140d02432(param_1 + 0x88,param_2 + 0x88);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  return param_1;
}



// FUNCTION 148a12128 FUN_148a12128 body=101 status=ok
// SIG undefined FUN_148a12128(void)

undefined8 FUN_148a12128(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      FUN_14861620a(param_2 + 0x18,param_3 + 0x18);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a121b6 FUN_148a121b6 body=59 status=ok
// SIG undefined FUN_148a121b6(void)

undefined8 FUN_148a121b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a121fc FUN_148a121fc body=34 status=ok
// SIG undefined FUN_148a121fc(void)

void FUN_148a121fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1458d2d0e(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148a122a2 FUN_148a122a2 body=63 status=ok
// SIG undefined FUN_148a122a2(void)

undefined1 FUN_148a122a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a123ca(param_2,param_3);
    param_3 = param_3 + 0x2d8;
    param_2 = param_2 + 0x2d8;
  }
  return 1;
}



// FUNCTION 148a1230a FUN_148a1230a body=59 status=ok
// SIG undefined FUN_148a1230a(void)

undefined8 FUN_148a1230a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a12356 FUN_148a12356 body=38 status=ok
// SIG undefined FUN_148a12356(void)

void FUN_148a12356(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2d8) == '\x01') {
    FUN_140ad8262(param_2);
    *(undefined1 *)(param_2 + 0x2d8) = 0;
  }
  return;
}



// FUNCTION 148a123ca FUN_148a123ca body=825 status=ok
// SIG undefined FUN_148a123ca(void)

longlong FUN_148a123ca(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_148a12704();
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  FUN_1406fa324(param_1 + 0x98,param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  uVar1 = *(undefined4 *)(param_2 + 0xbc);
  uVar2 = *(undefined4 *)(param_2 + 0xc0);
  uVar3 = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  FUN_144a787a6(param_1 + 200,param_2 + 200);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  if ((*(longlong *)(param_1 + 0xe8) != *(longlong *)(param_2 + 0xe8)) ||
     (*(int *)(param_1 + 0xf0) != *(int *)(param_2 + 0xf0))) {
    *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  FUN_14118c70e(param_1 + 0x100,param_2 + 0x100);
  FUN_140115bdc(param_1 + 0x140,param_2 + 0x140);
  if ((*(longlong *)(param_1 + 0x160) != *(longlong *)(param_2 + 0x160)) ||
     (*(int *)(param_1 + 0x168) != *(int *)(param_2 + 0x168))) {
    *(longlong *)(param_1 + 0x160) = *(longlong *)(param_2 + 0x160);
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
  if ((*(longlong *)(param_1 + 0x188) != *(longlong *)(param_2 + 0x188)) ||
     (*(int *)(param_1 + 400) != *(int *)(param_2 + 400))) {
    *(longlong *)(param_1 + 0x188) = *(longlong *)(param_2 + 0x188);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x1a0);
  uVar5 = *(undefined8 *)(param_2 + 0x1a8);
  uVar1 = *(undefined4 *)(param_2 + 0x1b4);
  uVar2 = *(undefined4 *)(param_2 + 0x1b8);
  uVar3 = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = uVar1;
  *(undefined4 *)(param_1 + 0x1b8) = uVar2;
  *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  *(undefined8 *)(param_1 + 0x1a0) = uVar4;
  *(undefined8 *)(param_1 + 0x1a8) = uVar5;
  if ((*(longlong *)(param_1 + 0x1c0) != *(longlong *)(param_2 + 0x1c0)) ||
     (*(int *)(param_1 + 0x1c8) != *(int *)(param_2 + 0x1c8))) {
    *(longlong *)(param_1 + 0x1c0) = *(longlong *)(param_2 + 0x1c0);
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
  uVar1 = *(undefined4 *)(param_2 + 0x1e4);
  uVar2 = *(undefined4 *)(param_2 + 0x1e8);
  uVar3 = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1e4) = uVar1;
  *(undefined4 *)(param_1 + 0x1e8) = uVar2;
  *(undefined4 *)(param_1 + 0x1ec) = uVar3;
  FUN_144a787a6(param_1 + 0x1f0,param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  uVar1 = *(undefined4 *)(param_2 + 0x20c);
  uVar2 = *(undefined4 *)(param_2 + 0x210);
  uVar3 = *(undefined4 *)(param_2 + 0x214);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x20c) = uVar1;
  *(undefined4 *)(param_1 + 0x210) = uVar2;
  *(undefined4 *)(param_1 + 0x214) = uVar3;
  FUN_144a787a6(param_1 + 0x218,param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  uVar1 = *(undefined4 *)(param_2 + 0x234);
  uVar2 = *(undefined4 *)(param_2 + 0x238);
  uVar3 = *(undefined4 *)(param_2 + 0x23c);
  *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x230);
  *(undefined4 *)(param_1 + 0x234) = uVar1;
  *(undefined4 *)(param_1 + 0x238) = uVar2;
  *(undefined4 *)(param_1 + 0x23c) = uVar3;
  FUN_144a787a6(param_1 + 0x240,param_2 + 0x240);
  if ((*(longlong *)(param_1 + 0x250) != *(longlong *)(param_2 + 0x250)) ||
     (*(int *)(param_1 + 600) != *(int *)(param_2 + 600))) {
    *(longlong *)(param_1 + 0x250) = *(longlong *)(param_2 + 0x250);
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
    *(undefined8 *)(param_1 + 0x260) = 0;
  }
  if ((*(longlong *)(param_1 + 0x268) != *(longlong *)(param_2 + 0x268)) ||
     (*(int *)(param_1 + 0x270) != *(int *)(param_2 + 0x270))) {
    *(longlong *)(param_1 + 0x268) = *(longlong *)(param_2 + 0x268);
    *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_2 + 0x270);
    *(undefined8 *)(param_1 + 0x278) = 0;
  }
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_2 + 0x280);
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_2 + 0x288);
  uVar1 = *(undefined4 *)(param_2 + 0x294);
  uVar2 = *(undefined4 *)(param_2 + 0x298);
  uVar3 = *(undefined4 *)(param_2 + 0x29c);
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_2 + 0x290);
  *(undefined4 *)(param_1 + 0x294) = uVar1;
  *(undefined4 *)(param_1 + 0x298) = uVar2;
  *(undefined4 *)(param_1 + 0x29c) = uVar3;
  FUN_144a787a6(param_1 + 0x2a0,param_2 + 0x2a0);
  uVar4 = *(undefined8 *)(param_2 + 0x2b8);
  uVar5 = *(undefined8 *)(param_2 + 0x2c0);
  uVar6 = *(undefined8 *)(param_2 + 0x2c8);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_2 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2b8) = uVar4;
  *(undefined8 *)(param_1 + 0x2c0) = uVar5;
  *(undefined8 *)(param_1 + 0x2c8) = uVar6;
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_2 + 0x2d0);
  return param_1;
}



// FUNCTION 148a12704 FUN_148a12704 body=204 status=ok
// SIG undefined FUN_148a12704(void)

longlong FUN_148a12704(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 0x38);
  uVar6 = *(undefined4 *)(param_2 + 0x3c);
  uVar7 = *(undefined4 *)(param_2 + 0x40);
  uVar8 = *(undefined4 *)(param_2 + 0x44);
  uVar9 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = uVar7;
  *(undefined4 *)(param_1 + 0x44) = uVar8;
  *(undefined4 *)(param_1 + 0x48) = uVar9;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  if ((*(longlong *)(param_1 + 0x50) != *(longlong *)(param_2 + 0x50)) ||
     (*(int *)(param_1 + 0x58) != *(int *)(param_2 + 0x58))) {
    *(longlong *)(param_1 + 0x50) = *(longlong *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if ((*(longlong *)(param_1 + 0x68) != *(longlong *)(param_2 + 0x68)) ||
     (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70))) {
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  plVar1 = *(longlong **)(param_2 + 0x80);
  plVar2 = *(longlong **)(param_1 + 0x80);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x80) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  return param_1;
}



// FUNCTION 148a127d2 FUN_148a127d2 body=43 status=ok
// SIG undefined FUN_148a127d2(void)

undefined8 FUN_148a127d2(undefined8 param_1,int param_2)

{
  FUN_140ad8262();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x2d8);
  }
  return param_1;
}



// FUNCTION 148a127fe FUN_148a127fe body=55 status=ok
// SIG undefined FUN_148a127fe(void)

void FUN_148a127fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93cc0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93cc0 = FUN_140002ddd(FUN_146574089,uVar1,L"WeaponBehaviorDef_Fire");
  }
  return;
}



// FUNCTION 148a12836 FUN_148a12836 body=43 status=ok
// SIG undefined FUN_148a12836(void)

undefined8 FUN_148a12836(undefined8 param_1,int param_2)

{
  FUN_140ad8370();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 148a12862 FUN_148a12862 body=55 status=ok
// SIG undefined FUN_148a12862(void)

void FUN_148a12862(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93d80 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93d80 = FUN_140002ddd(FUN_1465740b8,uVar1,L"WeaponBehaviorDef_Use");
  }
  return;
}



// FUNCTION 148a128b8 FUN_148a128b8 body=63 status=ok
// SIG undefined FUN_148a128b8(void)

undefined1 FUN_148a128b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a129d4(param_2,param_3);
    param_3 = param_3 + 0x1e0;
    param_2 = param_2 + 0x1e0;
  }
  return 1;
}



// FUNCTION 148a12920 FUN_148a12920 body=59 status=ok
// SIG undefined FUN_148a12920(void)

undefined8 FUN_148a12920(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1296c FUN_148a1296c body=38 status=ok
// SIG undefined FUN_148a1296c(void)

void FUN_148a1296c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_140c373a8(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 148a129d4 FUN_148a129d4 body=229 status=ok
// SIG undefined FUN_148a129d4(void)

longlong FUN_148a129d4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_140d02432(param_1 + 0x30,param_2 + 0x30);
  FUN_140d02432(param_1 + 0x80,param_2 + 0x80);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  FUN_140d02432(param_1 + 0xd8,param_2 + 0xd8);
  FUN_140d02432(param_1 + 0x128,param_2 + 0x128);
  FUN_140115bdc(param_1 + 0x178,param_2 + 0x178);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  uVar1 = *(undefined4 *)(param_2 + 0x1ac);
  uVar2 = *(undefined4 *)(param_2 + 0x1b0);
  uVar3 = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1ac) = uVar1;
  *(undefined4 *)(param_1 + 0x1b0) = uVar2;
  *(undefined4 *)(param_1 + 0x1b4) = uVar3;
  FUN_144a787a6(param_1 + 0x1b8,param_2 + 0x1b8);
  uVar4 = *(undefined8 *)(param_2 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1d0) = uVar4;
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  return param_1;
}



// FUNCTION 148a12b1a FUN_148a12b1a body=78 status=ok
// SIG undefined FUN_148a12b1a(void)

undefined8 FUN_148a12b1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a12b90 FUN_148a12b90 body=59 status=ok
// SIG undefined FUN_148a12b90(void)

undefined8 FUN_148a12b90(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a12bd6 FUN_148a12bd6 body=48 status=ok
// SIG undefined FUN_148a12bd6(void)

void FUN_148a12bd6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14b49d1f0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 148a12c54 FUN_148a12c54 body=62 status=ok
// SIG undefined FUN_148a12c54(void)

undefined8 * FUN_148a12c54(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b49d1f0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148a12c92 FUN_148a12c92 body=55 status=ok
// SIG undefined FUN_148a12c92(void)

void FUN_148a12c92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93d08 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93d08 = FUN_140002ddd(FUN_1465741de,uVar1,L"WeaponBehaviorDef_PreUse");
  }
  return;
}



// FUNCTION 148a12d2a FUN_148a12d2a body=78 status=ok
// SIG undefined FUN_148a12d2a(void)

undefined8 FUN_148a12d2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a12da0 FUN_148a12da0 body=59 status=ok
// SIG undefined FUN_148a12da0(void)

undefined8 FUN_148a12da0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a12de6 FUN_148a12de6 body=48 status=ok
// SIG undefined FUN_148a12de6(void)

void FUN_148a12de6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14b49d1f0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 148a12e64 FUN_148a12e64 body=62 status=ok
// SIG undefined FUN_148a12e64(void)

undefined8 * FUN_148a12e64(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b49d1f0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148a12ea2 FUN_148a12ea2 body=55 status=ok
// SIG undefined FUN_148a12ea2(void)

void FUN_148a12ea2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93d20 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93d20 = FUN_140002ddd(FUN_146574275,uVar1,L"WeaponBehaviorDef_StatusEffectModifier");
  }
  return;
}



// FUNCTION 148a12ef8 FUN_148a12ef8 body=110 status=ok
// SIG undefined FUN_148a12ef8(void)

undefined8 FUN_148a12ef8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      uVar9 = *(undefined8 *)(param_3 + 0x18);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      uVar2 = *(undefined4 *)(param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 0x28);
      uVar4 = *(undefined4 *)(param_3 + 0x2c);
      uVar5 = *(undefined4 *)(param_3 + 0x30);
      uVar6 = *(undefined4 *)(param_3 + 0x34);
      uVar7 = *(undefined4 *)(param_3 + 0x38);
      uVar8 = *(undefined4 *)(param_3 + 0x3c);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar9;
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      *(undefined4 *)(param_2 + 0x24) = uVar2;
      *(undefined4 *)(param_2 + 0x28) = uVar3;
      *(undefined4 *)(param_2 + 0x2c) = uVar4;
      *(undefined4 *)(param_2 + 0x30) = uVar5;
      *(undefined4 *)(param_2 + 0x34) = uVar6;
      *(undefined4 *)(param_2 + 0x38) = uVar7;
      *(undefined4 *)(param_2 + 0x3c) = uVar8;
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_3 + 0x40);
      param_3 = param_3 + 0x68;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a12f8e FUN_148a12f8e body=59 status=ok
// SIG undefined FUN_148a12f8e(void)

undefined8 FUN_148a12f8e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a12fd4 FUN_148a12fd4 body=48 status=ok
// SIG undefined FUN_148a12fd4(void)

void FUN_148a12fd4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xd) == '\x01') {
    *param_2 = &PTR_FUN_14b49d1f0;
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xd) = 0;
  }
  return;
}



// FUNCTION 148a130c8 FUN_148a130c8 body=63 status=ok
// SIG undefined FUN_148a130c8(void)

undefined1 FUN_148a130c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a12704(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 148a13130 FUN_148a13130 body=59 status=ok
// SIG undefined FUN_148a13130(void)

undefined8 FUN_148a13130(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1317c FUN_148a1317c body=38 status=ok
// SIG undefined FUN_148a1317c(void)

void FUN_148a1317c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_140ad8370(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 148a1326a FUN_148a1326a body=63 status=ok
// SIG undefined FUN_148a1326a(void)

undefined1 FUN_148a1326a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a13368(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 148a132d2 FUN_148a132d2 body=59 status=ok
// SIG undefined FUN_148a132d2(void)

undefined8 FUN_148a132d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a13368 FUN_148a13368 body=140 status=ok
// SIG undefined FUN_148a13368(void)

undefined8 * FUN_148a13368(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  if ((param_1[5] != param_2[5]) || (*(int *)(param_1 + 6) != *(int *)(param_2 + 6))) {
    param_1[5] = param_2[5];
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    param_1[7] = 0;
  }
  puVar5 = param_2 + 8;
  puVar6 = param_1 + 8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_14065c7a4(param_1 + 0x14,param_2 + 0x14);
  param_1[0x16] = param_2[0x16];
  return param_1;
}



// FUNCTION 148a133f6 FUN_148a133f6 body=61 status=ok
// SIG undefined FUN_148a133f6(void)

void FUN_148a133f6(longlong param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 148a13452 FUN_148a13452 body=63 status=ok
// SIG undefined FUN_148a13452(void)

undefined1 FUN_148a13452(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a1356e(param_2,param_3);
    param_3 = param_3 + 0x230;
    param_2 = param_2 + 0x230;
  }
  return 1;
}



// FUNCTION 148a134ba FUN_148a134ba body=59 status=ok
// SIG undefined FUN_148a134ba(void)

undefined8 FUN_148a134ba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a13506 FUN_148a13506 body=38 status=ok
// SIG undefined FUN_148a13506(void)

void FUN_148a13506(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x230) == '\x01') {
    FUN_140dbfe46(param_2);
    *(undefined1 *)(param_2 + 0x230) = 0;
  }
  return;
}



// FUNCTION 148a1356e FUN_148a1356e body=140 status=ok
// SIG undefined FUN_148a1356e(void)

longlong FUN_148a1356e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_1406fa324(param_1 + 0x30,param_2 + 0x30);
  FUN_140d02432(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x98);
  uVar3 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 0xa0);
  FUN_148a13368(param_1 + 0xb0,param_2 + 0xb0);
  FUN_148a13368(param_1 + 0x170,param_2 + 0x170);
  return param_1;
}



// FUNCTION 148a13672 FUN_148a13672 body=59 status=ok
// SIG undefined FUN_148a13672(void)

undefined8 FUN_148a13672(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1373c FUN_148a1373c body=63 status=ok
// SIG undefined FUN_148a1373c(void)

undefined1 FUN_148a1373c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a1386e(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 148a137a4 FUN_148a137a4 body=59 status=ok
// SIG undefined FUN_148a137a4(void)

undefined8 FUN_148a137a4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a137f0 FUN_148a137f0 body=38 status=ok
// SIG undefined FUN_148a137f0(void)

void FUN_148a137f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_140cf001e(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 148a1386e FUN_148a1386e body=212 status=ok
// SIG undefined FUN_148a1386e(void)

longlong FUN_148a1386e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_148a13942(param_1 + 0x30,param_2 + 0x30);
  puVar5 = (undefined8 *)(param_2 + 0x40);
  puVar6 = (undefined8 *)(param_1 + 0x40);
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  FUN_1459a0a08(param_1 + 0x98,param_2 + 0x98);
  FUN_1459a0a08(param_1 + 0xa8,param_2 + 0xa8);
  if ((*(longlong *)(param_1 + 0xb8) != *(longlong *)(param_2 + 0xb8)) ||
     (*(int *)(param_1 + 0xc0) != *(int *)(param_2 + 0xc0))) {
    *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_2 + 0xb8);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined8 *)(param_1 + 200) = 0;
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  return param_1;
}



// FUNCTION 148a13942 FUN_148a13942 body=89 status=ok
// SIG undefined FUN_148a13942(void)

undefined8 * FUN_148a13942(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a1399c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 148a1399c FUN_148a1399c body=115 status=ok
// SIG undefined FUN_148a1399c(void)

void FUN_148a1399c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148a13a10 FUN_148a13a10 body=43 status=ok
// SIG undefined FUN_148a13a10(void)

undefined8 FUN_148a13a10(undefined8 param_1,int param_2)

{
  FUN_140cf001e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 148a13a3c FUN_148a13a3c body=55 status=ok
// SIG undefined FUN_148a13a3c(void)

void FUN_148a13a3c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93e58 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93e58 = FUN_140002ddd(FUN_14657471f,uVar1,L"WeaponBehaviorDef_Zoom");
  }
  return;
}



// FUNCTION 148a13ace FUN_148a13ace body=59 status=ok
// SIG undefined FUN_148a13ace(void)

undefined8 FUN_148a13ace(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a13b6e FUN_148a13b6e body=55 status=ok
// SIG undefined FUN_148a13b6e(void)

void FUN_148a13b6e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93ea0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93ea0 = FUN_140002ddd(FUN_1465748bb,uVar1,L"WeaponConsumedLoadedAmmoValueResolver");
  }
  return;
}



// FUNCTION 148a13c3a FUN_148a13c3a body=59 status=ok
// SIG undefined FUN_148a13c3a(void)

undefined8 FUN_148a13c3a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a13cda FUN_148a13cda body=55 status=ok
// SIG undefined FUN_148a13cda(void)

void FUN_148a13cda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93eb8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93eb8 = FUN_140002ddd(FUN_146574951,uVar1,L"WeaponLoadedAmmoPercentValueResolver");
  }
  return;
}



// FUNCTION 148a13da2 FUN_148a13da2 body=59 status=ok
// SIG undefined FUN_148a13da2(void)

undefined8 FUN_148a13da2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a13e3e FUN_148a13e3e body=55 status=ok
// SIG undefined FUN_148a13e3e(void)

void FUN_148a13e3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93ee8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93ee8 = FUN_140002ddd(FUN_146574a17,uVar1,L"WeaponAmmoValueResolver");
  }
  return;
}



// FUNCTION 148a13ee0 FUN_148a13ee0 body=59 status=ok
// SIG undefined FUN_148a13ee0(void)

undefined8 FUN_148a13ee0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a13f80 FUN_148a13f80 body=55 status=ok
// SIG undefined FUN_148a13f80(void)

void FUN_148a13f80(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93fe0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93fe0 = FUN_140002ddd(FUN_146574feb,uVar1,L"WeaponFireRateAccelerationValueResolver");
  }
  return;
}



// FUNCTION 148a1404a FUN_148a1404a body=322 status=ok
// SIG undefined FUN_148a1404a(void)

void FUN_148a1404a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a21b84(local_18,local_1c,local_20 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1418e FUN_148a1418e body=201 status=ok
// SIG undefined FUN_148a1418e(void)

void FUN_148a1418e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_148a21d02(&local_38,local_20);
  if ((*param_3 != local_38) || ((int)param_3[1] != local_30)) {
    *param_3 = local_38;
    *(int *)(param_3 + 1) = local_30;
    param_3[2] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a14258 FUN_148a14258 body=284 status=ok
// SIG undefined FUN_148a14258(void)

void FUN_148a14258(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1458dc048(&local_40,local_20,local_21);
  if ((*param_3 != local_40) || ((int)param_3[1] != local_38)) {
    *param_3 = local_40;
    *(int *)(param_3 + 1) = local_38;
    param_3[2] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a14376 FUN_148a14376 body=172 status=ok
// SIG undefined FUN_148a14376(void)

void FUN_148a14376(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_28;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a2203e(plVar1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a14424 FUN_148a14424 body=234 status=ok
// SIG undefined FUN_148a14424(void)

void FUN_148a14424(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148a21c86(local_20,local_21);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a14510 FUN_148a14510 body=232 status=ok
// SIG undefined FUN_148a14510(void)

void FUN_148a14510(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148a21c4e(local_20,local_21);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a145fa FUN_148a145fa body=295 status=ok
// SIG undefined FUN_148a145fa(void)

void FUN_148a145fa(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [12];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a21e6c(local_88,local_20,local_28);
  puVar2 = local_88;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a14734 FUN_148a14734 body=237 status=ok
// SIG undefined FUN_148a14734(void)

void FUN_148a14734(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148a21f70(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a14840 FUN_148a14840 body=155 status=ok
// SIG undefined FUN_148a14840(void)

void FUN_148a14840(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_148a21b50(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


