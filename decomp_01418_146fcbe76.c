// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146fcbe76 FUN_146fcbe76 body=133 status=ok
// SIG undefined FUN_146fcbe76(void)

void FUN_146fcbe76(ushort *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406112c4(&local_28,(double)*param_1,0);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcbefc FUN_146fcbefc body=66 status=ok
// SIG undefined FUN_146fcbefc(void)

longlong FUN_146fcbefc(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    plVar1 = (longlong *)(**(code **)(lVar2 + 0x28))(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return param_4;
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 8) != 1) break;
    param_2 = (ulonglong)*(uint *)(lVar2 + 0x38);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return param_4;
  }
  return lVar2 + 0x38;
}



// FUNCTION 146fcbf3e FUN_146fcbf3e body=126 status=ok
// SIG undefined FUN_146fcbf3e(void)

void FUN_146fcbf3e(longlong param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined1 *)
             FUN_146fcc050(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_11);
  }
  else if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined1 *)(lVar1 + 0x38);
  }
  else {
    puVar2 = &local_11;
  }
  FUN_146fcbfca(puVar2,*(undefined8 *)(param_1 + 0x18));
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcbfca FUN_146fcbfca body=133 status=ok
// SIG undefined FUN_146fcbfca(void)

void FUN_146fcbfca(char *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406112c4(&local_28,(double)(int)*param_1,0);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcc050 FUN_146fcc050 body=66 status=ok
// SIG undefined FUN_146fcc050(void)

longlong FUN_146fcc050(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    plVar1 = (longlong *)(**(code **)(lVar2 + 0x28))(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return param_4;
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 8) != 1) break;
    param_2 = (ulonglong)*(uint *)(lVar2 + 0x38);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return param_4;
  }
  return lVar2 + 0x38;
}



// FUNCTION 146fcc092 FUN_146fcc092 body=126 status=ok
// SIG undefined FUN_146fcc092(void)

void FUN_146fcc092(longlong param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined1 *)
             FUN_146fcc1a4(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_11);
  }
  else if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined1 *)(lVar1 + 0x38);
  }
  else {
    puVar2 = &local_11;
  }
  FUN_146fcc11e(puVar2,*(undefined8 *)(param_1 + 0x18));
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcc11e FUN_146fcc11e body=133 status=ok
// SIG undefined FUN_146fcc11e(void)

void FUN_146fcc11e(byte *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406112c4(&local_28,(double)*param_1,0);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcc1a4 FUN_146fcc1a4 body=66 status=ok
// SIG undefined FUN_146fcc1a4(void)

longlong FUN_146fcc1a4(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    plVar1 = (longlong *)(**(code **)(lVar2 + 0x28))(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return param_4;
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 8) != 1) break;
    param_2 = (ulonglong)*(uint *)(lVar2 + 0x38);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return param_4;
  }
  return lVar2 + 0x38;
}



// FUNCTION 146fcc1e6 FUN_146fcc1e6 body=110 status=ok
// SIG undefined FUN_146fcc1e6(void)

undefined8 FUN_146fcc1e6(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  if (DAT_14c99cfec == param_1) {
    FUN_146fcc420(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    uVar1 = FUN_146fcc3b0();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcc256 FUN_146fcc256 body=129 status=ok
// SIG undefined FUN_146fcc256(void)

void FUN_146fcc256(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined8 *)
             FUN_146fcc36e(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_28);
  }
  else if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x38);
  }
  else {
    puVar2 = &local_28;
  }
  FUN_146fcc2d8(puVar2,*(undefined8 *)(param_1 + 0x18));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcc2d8 FUN_146fcc2d8 body=149 status=ok
// SIG undefined FUN_146fcc2d8(void)

void FUN_146fcc2d8(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,L"X=%3.3f Y=%3.3f",*param_1,param_1[1]);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcc36e FUN_146fcc36e body=66 status=ok
// SIG undefined FUN_146fcc36e(void)

longlong FUN_146fcc36e(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    plVar1 = (longlong *)(**(code **)(lVar2 + 0x28))(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return param_4;
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 8) != 1) break;
    param_2 = (ulonglong)*(uint *)(lVar2 + 0x38);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return param_4;
  }
  return lVar2 + 0x38;
}



// FUNCTION 146fcc3b0 FUN_146fcc3b0 body=110 status=ok
// SIG undefined FUN_146fcc3b0(void)

undefined8 FUN_146fcc3b0(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  if (DAT_14c99cff4 == param_1) {
    FUN_146fcc600(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    uVar1 = FUN_146fcc590();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcc420 FUN_146fcc420 body=138 status=ok
// SIG undefined FUN_146fcc420(void)

void FUN_146fcc420(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined8 *)
             FUN_146fcc54e(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_28);
  }
  else if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x38);
  }
  else {
    puVar2 = &local_28;
  }
  FUN_146fcc4ac(puVar2,*(undefined8 *)(param_1 + 0x18));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcc4ac FUN_146fcc4ac body=160 status=ok
// SIG undefined FUN_146fcc4ac(void)

void FUN_146fcc4ac(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_1[2];
  FUN_140002266(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f",*param_1,param_1[1]);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcc54e FUN_146fcc54e body=66 status=ok
// SIG undefined FUN_146fcc54e(void)

longlong FUN_146fcc54e(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    plVar1 = (longlong *)(**(code **)(lVar2 + 0x28))(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return param_4;
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 8) != 1) break;
    param_2 = (ulonglong)*(uint *)(lVar2 + 0x38);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return param_4;
  }
  return lVar2 + 0x38;
}



// FUNCTION 146fcc590 FUN_146fcc590 body=110 status=ok
// SIG undefined FUN_146fcc590(void)

undefined8 FUN_146fcc590(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  if (DAT_14c99cffc == param_1) {
    FUN_146fcc800(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    uVar1 = FUN_146fcc77c();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcc600 FUN_146fcc600 body=153 status=ok
// SIG undefined FUN_146fcc600(void)

void FUN_146fcc600(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0x3ff0000000000000;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined8 *)
             FUN_146fcc73a(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_38);
  }
  else if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x40);
  }
  else {
    puVar2 = &local_38;
  }
  FUN_146fcc69a(puVar2,*(undefined8 *)(param_1 + 0x18));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcc69a FUN_146fcc69a body=158 status=ok
// SIG undefined FUN_146fcc69a(void)

void FUN_146fcc69a(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_1 + 2);
  uStack_34 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_30 = *(undefined4 *)(param_1 + 3);
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_140002266(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f",*param_1,param_1[1]);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcc73a FUN_146fcc73a body=66 status=ok
// SIG undefined FUN_146fcc73a(void)

longlong FUN_146fcc73a(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    plVar1 = (longlong *)(**(code **)(lVar2 + 0x28))(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return param_4;
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 8) != 1) break;
    param_2 = (ulonglong)*(uint *)(lVar2 + 0x38);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return param_4;
  }
  return lVar2 + 0x40;
}



// FUNCTION 146fcc77c FUN_146fcc77c body=131 status=ok
// SIG undefined FUN_146fcc77c(void)

ulonglong FUN_146fcc77c(longlong param_1,undefined4 *param_2)

{
  undefined8 unaff_RBX;
  undefined7 uVar2;
  ulonglong uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  uStack_40 = param_2[6];
  uStack_3c = param_2[7];
  uVar2 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (DAT_14c99d004 == param_1) {
    FUN_146fcc95c(&local_58);
    uVar1 = CONCAT71(uVar2,1);
  }
  else {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    local_28 = param_2[4];
    uStack_24 = param_2[5];
    uStack_20 = param_2[6];
    uStack_1c = param_2[7];
    uVar1 = CONCAT71(uVar2,DAT_14c99d00c == param_1);
    if (DAT_14c99d00c == param_1) {
      FUN_146fccacc(&local_38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcc800 FUN_146fcc800 body=130 status=ok
// SIG undefined FUN_146fcc800(void)

void FUN_146fcc800(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined8 *)
             FUN_146fcc91a(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_18);
  }
  else if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x38);
  }
  else {
    puVar2 = &local_18;
  }
  FUN_146fcc884(puVar2,*(undefined8 *)(param_1 + 0x18));
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcc884 FUN_146fcc884 body=149 status=ok
// SIG undefined FUN_146fcc884(void)

void FUN_146fcc884(float *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(&local_28,L"X=%3.3f Y=%3.3f",(double)*param_1,(double)param_1[1]);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcc91a FUN_146fcc91a body=66 status=ok
// SIG undefined FUN_146fcc91a(void)

longlong FUN_146fcc91a(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    plVar1 = (longlong *)(**(code **)(lVar2 + 0x28))(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return param_4;
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 8) != 1) break;
    param_2 = (ulonglong)*(uint *)(lVar2 + 0x38);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return param_4;
  }
  return lVar2 + 0x38;
}



// FUNCTION 146fcc95c FUN_146fcc95c body=138 status=ok
// SIG undefined FUN_146fcc95c(void)

void FUN_146fcc95c(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  local_20 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined8 *)
             FUN_146fcca8a(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_20);
  }
  else if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x38);
  }
  else {
    puVar2 = &local_20;
  }
  FUN_146fcc9e8(puVar2,*(undefined8 *)(param_1 + 0x18));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcc9e8 FUN_146fcc9e8 body=160 status=ok
// SIG undefined FUN_146fcc9e8(void)

void FUN_146fcc9e8(float *param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  double local_38;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (double)param_1[2];
  FUN_140002266(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f",(double)*param_1,(double)param_1[1]);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcca8a FUN_146fcca8a body=66 status=ok
// SIG undefined FUN_146fcca8a(void)

longlong FUN_146fcca8a(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    plVar1 = (longlong *)(**(code **)(lVar2 + 0x28))(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return param_4;
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 8) != 1) break;
    param_2 = (ulonglong)*(uint *)(lVar2 + 0x38);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return param_4;
  }
  return lVar2 + 0x38;
}



// FUNCTION 146fccacc FUN_146fccacc body=133 status=ok
// SIG undefined FUN_146fccacc(void)

void FUN_146fccacc(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0x3f800000;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined4 *)
             FUN_146fccbfe(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_28);
  }
  else if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined4 *)(lVar1 + 0x40);
  }
  else {
    puVar2 = &local_28;
  }
  FUN_146fccb52(puVar2,*(undefined8 *)(param_1 + 0x18));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fccb52 FUN_146fccb52 body=171 status=ok
// SIG undefined FUN_146fccb52(void)

void FUN_146fccb52(float *param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (double)param_1[3];
  local_38 = (double)param_1[2];
  FUN_140002266(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f",(double)*param_1,(double)param_1[1]);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fccbfe FUN_146fccbfe body=66 status=ok
// SIG undefined FUN_146fccbfe(void)

longlong FUN_146fccbfe(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    plVar1 = (longlong *)(**(code **)(lVar2 + 0x28))(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return param_4;
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 8) != 1) break;
    param_2 = (ulonglong)*(uint *)(lVar2 + 0x38);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return param_4;
  }
  return lVar2 + 0x40;
}



// FUNCTION 146fccc40 FUN_146fccc40 body=144 status=ok
// SIG undefined FUN_146fccc40(void)

void FUN_146fccc40(char *param_1,longlong *param_2)

{
  char *pcVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = "False";
  if (*param_1 != '\0') {
    pcVar1 = "True";
  }
  FUN_1400b22c2(&local_28,pcVar1);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcccd2 FUN_146fcccd2 body=48 status=ok
// SIG undefined FUN_146fcccd2(void)

void FUN_146fcccd2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 146fccd02 FUN_146fccd02 body=322 status=ok
// SIG undefined FUN_146fccd02(void)

void FUN_146fccd02(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fcce46 FUN_146fcce46 body=307 status=ok
// SIG undefined FUN_146fcce46(void)

void FUN_146fcce46(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54 * 0x20;
      FUN_145dd1dbf(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
      if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fccf7a FUN_146fccf7a body=95 status=ok
// SIG undefined FUN_146fccf7a(void)

void FUN_146fccf7a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 6,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,4);
  }
  return;
}



// FUNCTION 146fccfda FUN_146fccfda body=62 status=ok
// SIG undefined FUN_146fccfda(void)

void FUN_146fccfda(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146fcd0ca(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,4);
  }
  return;
}



// FUNCTION 146fcd018 FUN_146fcd018 body=177 status=ok
// SIG undefined FUN_146fcd018(void)

undefined4 FUN_146fcd018(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((((param_1[4] == param_2[4]) && (param_1[5] == param_2[5])) && (param_1[6] == param_2[6])) &&
      ((((uVar1 = 0, param_1[7] == param_2[7] && (uVar1 = 0, *param_1 == *param_2)) &&
        ((param_1[1] == param_2[1] && ((param_1[2] == param_2[2] && (param_1[3] == param_2[3]))))))
       && (uVar1 = 0, param_1[0xc] == param_2[0xc])))) &&
     (((param_1[0xd] == param_2[0xd] && (param_1[0xe] == param_2[0xe])) &&
      (param_1[0xf] == param_2[0xf])))) {
    uVar1 = CONCAT31((int3)((uint)(param_1[8] ^ param_2[8]) >> 8),
                     param_1[0xb] == param_2[0xb] &&
                     (param_1[10] == param_2[10] &&
                     (param_1[9] == param_2[9] && (param_1[8] ^ param_2[8]) == 0)));
  }
  return uVar1;
}



// FUNCTION 146fcd0ca FUN_146fcd0ca body=93 status=ok
// SIG undefined FUN_146fcd0ca(void)

ulonglong FUN_146fcd0ca(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,4);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 146fcd128 FUN_146fcd128 body=132 status=ok
// SIG undefined FUN_146fcd128(void)

void FUN_146fcd128(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146fcd1ae FUN_146fcd1ae body=489 status=ok
// SIG undefined FUN_146fcd1ae(void)

longlong * FUN_146fcd1ae(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  local_44 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_44 = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
    }
    else {
      FUN_14572512c(param_1,&local_44);
    }
  }
  else {
    local_44 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_44 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146fccf7a(param_2,0);
    }
  }
  else if ((((int)local_44 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x40000 < local_44 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_44;
    lVar6 = 0x30;
    lVar7 = 0;
    do {
      lVar3 = *param_2;
      uVar4 = FUN_1402ac1b3(param_1,lVar3 + lVar6 + -0x30);
      uVar4 = FUN_1402ac1b3(uVar4,lVar3 + lVar6 + -0x10);
      uVar4 = FUN_1402ac1b3(uVar4,lVar3 + lVar6 + -0x20);
      FUN_1402ac1b3(uVar4,lVar3 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x40;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_44) ||
       (FUN_146fccf7a(param_2), 0 < (int)local_44)) {
      iVar5 = 0;
      do {
        lVar6 = FUN_146fcd398(param_2);
        uVar4 = FUN_1402ac1b3(param_1,lVar6);
        uVar4 = FUN_1402ac1b3(uVar4,lVar6 + 0x20);
        uVar4 = FUN_1402ac1b3(uVar4,lVar6 + 0x10);
        FUN_1402ac1b3(uVar4,lVar6 + 0x30);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_44);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146fcd398 FUN_146fcd398 body=59 status=ok
// SIG undefined FUN_146fcd398(void)

longlong FUN_146fcd398(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146fcd128(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_146fcd3d3(lVar2);
  return lVar2;
}



// FUNCTION 146fcd3d3 FUN_146fcd3d3 body=19 status=ok
// SIG undefined FUN_146fcd3d3(void)

void FUN_146fcd3d3(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 146fcd3e6 FUN_146fcd3e6 body=115 status=ok
// SIG undefined FUN_146fcd3e6(void)

int FUN_146fcd3e6(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x28) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x28) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x28) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146fcd45a FUN_146fcd45a body=323 status=ok
// SIG undefined FUN_146fcd45a(void)

undefined4 * FUN_146fcd45a(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146fcd59e(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  lVar11 = puVar2[1];
  *(longlong *)(local_40 + 6) = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_146fcd684(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[9] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[8] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_146fcd788(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcd59e FUN_146fcd59e body=230 status=ok
// SIG undefined FUN_146fcd59e(void)

int * FUN_146fcd59e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 146fcd684 FUN_146fcd684 body=145 status=ok
// SIG undefined FUN_146fcd684(void)

undefined8 FUN_146fcd684(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar12 = FUN_146fcd3e6(), iVar12 != -1)) {
    puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
    plVar4 = *(longlong **)(puVar3 + 6);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar9 = param_3[5];
    uVar10 = param_3[6];
    uVar11 = param_3[7];
    puVar3[4] = param_3[4];
    puVar3[5] = uVar9;
    puVar3[6] = uVar10;
    puVar3[7] = uVar11;
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    FUN_146fcd716(param_1,*param_4);
    *param_4 = iVar12;
    return 1;
  }
  return 0;
}



// FUNCTION 146fcd716 FUN_146fcd716 body=114 status=ok
// SIG undefined FUN_146fcd716(void)

void FUN_146fcd716(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 146fcd788 FUN_146fcd788 body=443 status=ok
// SIG undefined FUN_146fcd788(void)

void FUN_146fcd788(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1447addd0(lVar2,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fcd944 FUN_146fcd944 body=23 status=ok
// SIG undefined FUN_146fcd944(void)

void FUN_146fcd944(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 146fcd95b FUN_146fcd95b body=23 status=ok
// SIG undefined FUN_146fcd95b(void)

void FUN_146fcd95b(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 146fcd972 FUN_146fcd972 body=115 status=ok
// SIG undefined FUN_146fcd972(void)

int FUN_146fcd972(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 146fcd9e6 FUN_146fcd9e6 body=305 status=ok
// SIG undefined FUN_146fcd9e6(void)

undefined4 * FUN_146fcd9e6(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146fcdb18(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_146fcdbfe(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[7] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_146fcdcce(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcdb18 FUN_146fcdb18 body=229 status=ok
// SIG undefined FUN_146fcdb18(void)

int * FUN_146fcdb18(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 146fcdbfe FUN_146fcdbfe body=93 status=ok
// SIG undefined FUN_146fcdbfe(void)

undefined8 FUN_146fcdbfe(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_146fcd972(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_146fcdc5c(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 146fcdc5c FUN_146fcdc5c body=114 status=ok
// SIG undefined FUN_146fcdc5c(void)

void FUN_146fcdc5c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 146fcdcce FUN_146fcdcce body=449 status=ok
// SIG undefined FUN_146fcdcce(void)

void FUN_146fcdcce(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x20;
        iVar6 = FUN_1447addd0(lVar3 + lVar10,0x10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146fcde90 FUN_146fcde90 body=305 status=ok
// SIG undefined FUN_146fcde90(void)

undefined4 * FUN_146fcde90(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146fcdb18(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  cVar6 = FUN_146fcdbfe(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[7] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_146fcdcce(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcdfc2 FUN_146fcdfc2 body=132 status=ok
// SIG undefined FUN_146fcdfc2(void)

void FUN_146fcdfc2(longlong param_1,int param_2)

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



// FUNCTION 146fce048 FUN_146fce048 body=125 status=ok
// SIG undefined FUN_146fce048(void)

void FUN_146fce048(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 << 3,8);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 >> 3)) {
    uVar3 = uVar2 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,0,uVar3,8,8);
  return;
}



// FUNCTION 146fce0c6 FUN_146fce0c6 body=86 status=ok
// SIG undefined FUN_146fce0c6(void)

void FUN_146fce0c6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 146fce11c FUN_146fce11c body=132 status=ok
// SIG undefined FUN_146fce11c(void)

void FUN_146fce11c(longlong param_1,int param_2)

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



// FUNCTION 146fce1a2 FUN_146fce1a2 body=95 status=ok
// SIG undefined FUN_146fce1a2(void)

void FUN_146fce1a2(longlong param_1,uint param_2)

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



// FUNCTION 146fce202 FUN_146fce202 body=132 status=ok
// SIG undefined FUN_146fce202(void)

void FUN_146fce202(longlong param_1,int param_2)

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



// FUNCTION 146fce288 FUN_146fce288 body=62 status=ok
// SIG undefined FUN_146fce288(void)

void FUN_146fce288(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146fce2c6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146fce2c6 FUN_146fce2c6 body=93 status=ok
// SIG undefined FUN_146fce2c6(void)

ulonglong FUN_146fce2c6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146fce324 FUN_146fce324 body=22 status=ok
// SIG undefined FUN_146fce324(void)

undefined8 FUN_146fce324(undefined8 param_1)

{
  FUN_146fce33a();
  return param_1;
}



// FUNCTION 146fce33a FUN_146fce33a body=193 status=ok
// SIG undefined FUN_146fce33a(void)

undefined8 * FUN_146fce33a(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb0920;
  plVar1[0x35] = 0;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fce3fc FUN_146fce3fc body=25 status=ok
// SIG undefined FUN_146fce3fc(void)

undefined8 FUN_146fce3fc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fce434 FUN_146fce434 body=22 status=ok
// SIG undefined FUN_146fce434(void)

undefined8 FUN_146fce434(undefined8 param_1)

{
  FUN_146fce44a();
  return param_1;
}



// FUNCTION 146fce44a FUN_146fce44a body=193 status=ok
// SIG undefined FUN_146fce44a(void)

undefined8 * FUN_146fce44a(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  plVar1[0x35] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fafba0;
  FUN_146fb66d6(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fce50c FUN_146fce50c body=25 status=ok
// SIG undefined FUN_146fce50c(void)

undefined8 FUN_146fce50c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fce544 FUN_146fce544 body=22 status=ok
// SIG undefined FUN_146fce544(void)

undefined8 FUN_146fce544(undefined8 param_1)

{
  FUN_146fce55a();
  return param_1;
}



// FUNCTION 146fce55a FUN_146fce55a body=182 status=ok
// SIG undefined FUN_146fce55a(void)

undefined8 * FUN_146fce55a(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb0b60;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fce612 FUN_146fce612 body=25 status=ok
// SIG undefined FUN_146fce612(void)

undefined8 FUN_146fce612(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fce64a FUN_146fce64a body=22 status=ok
// SIG undefined FUN_146fce64a(void)

undefined8 FUN_146fce64a(undefined8 param_1)

{
  FUN_146fce660();
  return param_1;
}



// FUNCTION 146fce660 FUN_146fce660 body=153 status=ok
// SIG undefined FUN_146fce660(void)

undefined8 * FUN_146fce660(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb6f72(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fce6fa FUN_146fce6fa body=25 status=ok
// SIG undefined FUN_146fce6fa(void)

undefined8 FUN_146fce6fa(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fce732 FUN_146fce732 body=22 status=ok
// SIG undefined FUN_146fce732(void)

undefined8 FUN_146fce732(undefined8 param_1)

{
  FUN_146fce748();
  return param_1;
}



// FUNCTION 146fce748 FUN_146fce748 body=182 status=ok
// SIG undefined FUN_146fce748(void)

undefined8 * FUN_146fce748(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb04a0;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fce800 FUN_146fce800 body=25 status=ok
// SIG undefined FUN_146fce800(void)

undefined8 FUN_146fce800(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fce838 FUN_146fce838 body=22 status=ok
// SIG undefined FUN_146fce838(void)

undefined8 FUN_146fce838(undefined8 param_1)

{
  FUN_146fce84e();
  return param_1;
}



// FUNCTION 146fce84e FUN_146fce84e body=153 status=ok
// SIG undefined FUN_146fce84e(void)

undefined8 * FUN_146fce84e(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb6906(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fce8e8 FUN_146fce8e8 body=25 status=ok
// SIG undefined FUN_146fce8e8(void)

undefined8 FUN_146fce8e8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fce920 FUN_146fce920 body=22 status=ok
// SIG undefined FUN_146fce920(void)

undefined8 FUN_146fce920(undefined8 param_1)

{
  FUN_146fce936();
  return param_1;
}



// FUNCTION 146fce936 FUN_146fce936 body=182 status=ok
// SIG undefined FUN_146fce936(void)

undefined8 * FUN_146fce936(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb1340;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fce9ee FUN_146fce9ee body=25 status=ok
// SIG undefined FUN_146fce9ee(void)

undefined8 FUN_146fce9ee(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcea26 FUN_146fcea26 body=22 status=ok
// SIG undefined FUN_146fcea26(void)

undefined8 FUN_146fcea26(undefined8 param_1)

{
  FUN_146fcea3c();
  return param_1;
}



// FUNCTION 146fcea3c FUN_146fcea3c body=182 status=ok
// SIG undefined FUN_146fcea3c(void)

undefined8 * FUN_146fcea3c(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb0a40;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fceaf4 FUN_146fceaf4 body=25 status=ok
// SIG undefined FUN_146fceaf4(void)

undefined8 FUN_146fceaf4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fceb2c FUN_146fceb2c body=22 status=ok
// SIG undefined FUN_146fceb2c(void)

undefined8 FUN_146fceb2c(undefined8 param_1)

{
  FUN_146fceb42();
  return param_1;
}



// FUNCTION 146fceb42 FUN_146fceb42 body=182 status=ok
// SIG undefined FUN_146fceb42(void)

undefined8 * FUN_146fceb42(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb0ec0;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcebfa FUN_146fcebfa body=25 status=ok
// SIG undefined FUN_146fcebfa(void)

undefined8 FUN_146fcebfa(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcec32 FUN_146fcec32 body=22 status=ok
// SIG undefined FUN_146fcec32(void)

undefined8 FUN_146fcec32(undefined8 param_1)

{
  FUN_146fcec48();
  return param_1;
}



// FUNCTION 146fcec48 FUN_146fcec48 body=153 status=ok
// SIG undefined FUN_146fcec48(void)

undefined8 * FUN_146fcec48(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb6bea(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcece2 FUN_146fcece2 body=25 status=ok
// SIG undefined FUN_146fcece2(void)

undefined8 FUN_146fcece2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fced1a FUN_146fced1a body=22 status=ok
// SIG undefined FUN_146fced1a(void)

undefined8 FUN_146fced1a(undefined8 param_1)

{
  FUN_146fced30();
  return param_1;
}



// FUNCTION 146fced30 FUN_146fced30 body=182 status=ok
// SIG undefined FUN_146fced30(void)

undefined8 * FUN_146fced30(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb1220;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcede8 FUN_146fcede8 body=25 status=ok
// SIG undefined FUN_146fcede8(void)

undefined8 FUN_146fcede8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcee20 FUN_146fcee20 body=22 status=ok
// SIG undefined FUN_146fcee20(void)

undefined8 FUN_146fcee20(undefined8 param_1)

{
  FUN_146fcee36();
  return param_1;
}



// FUNCTION 146fcee36 FUN_146fcee36 body=153 status=ok
// SIG undefined FUN_146fcee36(void)

undefined8 * FUN_146fcee36(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb6da6(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fceed0 FUN_146fceed0 body=25 status=ok
// SIG undefined FUN_146fceed0(void)

undefined8 FUN_146fceed0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcef08 FUN_146fcef08 body=22 status=ok
// SIG undefined FUN_146fcef08(void)

undefined8 FUN_146fcef08(undefined8 param_1)

{
  FUN_146fcef1e();
  return param_1;
}



// FUNCTION 146fcef1e FUN_146fcef1e body=193 status=ok
// SIG undefined FUN_146fcef1e(void)

undefined8 * FUN_146fcef1e(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  plVar1[0x35] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb0140;
  FUN_146fb66d6(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcefe0 FUN_146fcefe0 body=25 status=ok
// SIG undefined FUN_146fcefe0(void)

undefined8 FUN_146fcefe0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcf018 FUN_146fcf018 body=22 status=ok
// SIG undefined FUN_146fcf018(void)

undefined8 FUN_146fcf018(undefined8 param_1)

{
  FUN_146fcf02e();
  return param_1;
}



// FUNCTION 146fcf02e FUN_146fcf02e body=193 status=ok
// SIG undefined FUN_146fcf02e(void)

undefined8 * FUN_146fcf02e(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  plVar1[0x35] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb0020;
  FUN_146fb66d6(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcf0f0 FUN_146fcf0f0 body=25 status=ok
// SIG undefined FUN_146fcf0f0(void)

undefined8 FUN_146fcf0f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcf128 FUN_146fcf128 body=22 status=ok
// SIG undefined FUN_146fcf128(void)

undefined8 FUN_146fcf128(undefined8 param_1)

{
  FUN_146fcf13e();
  return param_1;
}



// FUNCTION 146fcf13e FUN_146fcf13e body=193 status=ok
// SIG undefined FUN_146fcf13e(void)

undefined8 * FUN_146fcf13e(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  plVar1[0x35] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fafde0;
  FUN_146fb66d6(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcf200 FUN_146fcf200 body=25 status=ok
// SIG undefined FUN_146fcf200(void)

undefined8 FUN_146fcf200(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcf238 FUN_146fcf238 body=22 status=ok
// SIG undefined FUN_146fcf238(void)

undefined8 FUN_146fcf238(undefined8 param_1)

{
  FUN_146fcf24e();
  return param_1;
}



// FUNCTION 146fcf24e FUN_146fcf24e body=193 status=ok
// SIG undefined FUN_146fcf24e(void)

undefined8 * FUN_146fcf24e(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb0800;
  plVar1[0x35] = 0;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcf310 FUN_146fcf310 body=25 status=ok
// SIG undefined FUN_146fcf310(void)

undefined8 FUN_146fcf310(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcf348 FUN_146fcf348 body=22 status=ok
// SIG undefined FUN_146fcf348(void)

undefined8 FUN_146fcf348(undefined8 param_1)

{
  FUN_146fcf35e();
  return param_1;
}



// FUNCTION 146fcf35e FUN_146fcf35e body=182 status=ok
// SIG undefined FUN_146fcf35e(void)

undefined8 * FUN_146fcf35e(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb1580;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcf416 FUN_146fcf416 body=25 status=ok
// SIG undefined FUN_146fcf416(void)

undefined8 FUN_146fcf416(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcf44e FUN_146fcf44e body=22 status=ok
// SIG undefined FUN_146fcf44e(void)

undefined8 FUN_146fcf44e(undefined8 param_1)

{
  FUN_146fcf464();
  return param_1;
}



// FUNCTION 146fcf464 FUN_146fcf464 body=193 status=ok
// SIG undefined FUN_146fcf464(void)

undefined8 * FUN_146fcf464(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  plVar1[0x35] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb0fe0;
  FUN_146fb66d6(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcf526 FUN_146fcf526 body=25 status=ok
// SIG undefined FUN_146fcf526(void)

undefined8 FUN_146fcf526(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcf55e FUN_146fcf55e body=22 status=ok
// SIG undefined FUN_146fcf55e(void)

undefined8 FUN_146fcf55e(undefined8 param_1)

{
  FUN_146fcf574();
  return param_1;
}



// FUNCTION 146fcf574 FUN_146fcf574 body=153 status=ok
// SIG undefined FUN_146fcf574(void)

undefined8 * FUN_146fcf574(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb6a68(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcf60e FUN_146fcf60e body=25 status=ok
// SIG undefined FUN_146fcf60e(void)

undefined8 FUN_146fcf60e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcf646 FUN_146fcf646 body=22 status=ok
// SIG undefined FUN_146fcf646(void)

undefined8 FUN_146fcf646(undefined8 param_1)

{
  FUN_146fcf65c();
  return param_1;
}



// FUNCTION 146fcf65c FUN_146fcf65c body=182 status=ok
// SIG undefined FUN_146fcf65c(void)

undefined8 * FUN_146fcf65c(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb0c80;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcf714 FUN_146fcf714 body=25 status=ok
// SIG undefined FUN_146fcf714(void)

undefined8 FUN_146fcf714(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcf74c FUN_146fcf74c body=22 status=ok
// SIG undefined FUN_146fcf74c(void)

undefined8 FUN_146fcf74c(undefined8 param_1)

{
  FUN_146fcf762();
  return param_1;
}



// FUNCTION 146fcf762 FUN_146fcf762 body=182 status=ok
// SIG undefined FUN_146fcf762(void)

undefined8 * FUN_146fcf762(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb1460;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcf81a FUN_146fcf81a body=25 status=ok
// SIG undefined FUN_146fcf81a(void)

undefined8 FUN_146fcf81a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcf852 FUN_146fcf852 body=22 status=ok
// SIG undefined FUN_146fcf852(void)

undefined8 FUN_146fcf852(undefined8 param_1)

{
  FUN_146fcf868();
  return param_1;
}



// FUNCTION 146fcf868 FUN_146fcf868 body=182 status=ok
// SIG undefined FUN_146fcf868(void)

undefined8 * FUN_146fcf868(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb0380;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcf920 FUN_146fcf920 body=25 status=ok
// SIG undefined FUN_146fcf920(void)

undefined8 FUN_146fcf920(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcf958 FUN_146fcf958 body=22 status=ok
// SIG undefined FUN_146fcf958(void)

undefined8 FUN_146fcf958(undefined8 param_1)

{
  FUN_146fcf96e();
  return param_1;
}



// FUNCTION 146fcf96e FUN_146fcf96e body=182 status=ok
// SIG undefined FUN_146fcf96e(void)

undefined8 * FUN_146fcf96e(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb05c0;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcfa26 FUN_146fcfa26 body=25 status=ok
// SIG undefined FUN_146fcfa26(void)

undefined8 FUN_146fcfa26(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcfa5e FUN_146fcfa5e body=22 status=ok
// SIG undefined FUN_146fcfa5e(void)

undefined8 FUN_146fcfa5e(undefined8 param_1)

{
  FUN_146fcfa74();
  return param_1;
}



// FUNCTION 146fcfa74 FUN_146fcfa74 body=193 status=ok
// SIG undefined FUN_146fcfa74(void)

undefined8 * FUN_146fcfa74(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  plVar1[0x35] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fafcc0;
  FUN_146fb66d6(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcfb36 FUN_146fcfb36 body=25 status=ok
// SIG undefined FUN_146fcfb36(void)

undefined8 FUN_146fcfb36(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcfb6e FUN_146fcfb6e body=22 status=ok
// SIG undefined FUN_146fcfb6e(void)

undefined8 FUN_146fcfb6e(undefined8 param_1)

{
  FUN_146fcfb84();
  return param_1;
}



// FUNCTION 146fcfb84 FUN_146fcfb84 body=182 status=ok
// SIG undefined FUN_146fcfb84(void)

undefined8 * FUN_146fcfb84(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb0da0;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcfc3c FUN_146fcfc3c body=25 status=ok
// SIG undefined FUN_146fcfc3c(void)

undefined8 FUN_146fcfc3c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcfc74 FUN_146fcfc74 body=22 status=ok
// SIG undefined FUN_146fcfc74(void)

undefined8 FUN_146fcfc74(undefined8 param_1)

{
  FUN_146fcfc8a();
  return param_1;
}



// FUNCTION 146fcfc8a FUN_146fcfc8a body=182 status=ok
// SIG undefined FUN_146fcfc8a(void)

undefined8 * FUN_146fcfc8a(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb18d0;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcfd42 FUN_146fcfd42 body=25 status=ok
// SIG undefined FUN_146fcfd42(void)

undefined8 FUN_146fcfd42(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcfd7a FUN_146fcfd7a body=22 status=ok
// SIG undefined FUN_146fcfd7a(void)

undefined8 FUN_146fcfd7a(undefined8 param_1)

{
  FUN_146fcfd90();
  return param_1;
}



// FUNCTION 146fcfd90 FUN_146fcfd90 body=182 status=ok
// SIG undefined FUN_146fcfd90(void)

undefined8 * FUN_146fcfd90(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb17b0;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcfe48 FUN_146fcfe48 body=25 status=ok
// SIG undefined FUN_146fcfe48(void)

undefined8 FUN_146fcfe48(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcfe80 FUN_146fcfe80 body=22 status=ok
// SIG undefined FUN_146fcfe80(void)

undefined8 FUN_146fcfe80(undefined8 param_1)

{
  FUN_146fcfe96();
  return param_1;
}



// FUNCTION 146fcfe96 FUN_146fcfe96 body=182 status=ok
// SIG undefined FUN_146fcfe96(void)

undefined8 * FUN_146fcfe96(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb19f0;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcff4e FUN_146fcff4e body=25 status=ok
// SIG undefined FUN_146fcff4e(void)

undefined8 FUN_146fcff4e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fcff86 FUN_146fcff86 body=22 status=ok
// SIG undefined FUN_146fcff86(void)

undefined8 FUN_146fcff86(undefined8 param_1)

{
  FUN_146fcff9c();
  return param_1;
}



// FUNCTION 146fcff9c FUN_146fcff9c body=182 status=ok
// SIG undefined FUN_146fcff9c(void)

undefined8 * FUN_146fcff9c(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb1c30;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd0054 FUN_146fd0054 body=25 status=ok
// SIG undefined FUN_146fd0054(void)

undefined8 FUN_146fd0054(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fd008c FUN_146fd008c body=22 status=ok
// SIG undefined FUN_146fd008c(void)

undefined8 FUN_146fd008c(undefined8 param_1)

{
  FUN_146fd00a2();
  return param_1;
}



// FUNCTION 146fd00a2 FUN_146fd00a2 body=182 status=ok
// SIG undefined FUN_146fd00a2(void)

undefined8 * FUN_146fd00a2(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb1b10;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd015a FUN_146fd015a body=25 status=ok
// SIG undefined FUN_146fd015a(void)

undefined8 FUN_146fd015a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fd0192 FUN_146fd0192 body=22 status=ok
// SIG undefined FUN_146fd0192(void)

undefined8 FUN_146fd0192(undefined8 param_1)

{
  FUN_146fd01a8();
  return param_1;
}



// FUNCTION 146fd01a8 FUN_146fd01a8 body=182 status=ok
// SIG undefined FUN_146fd01a8(void)

undefined8 * FUN_146fd01a8(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb1d50;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd0260 FUN_146fd0260 body=25 status=ok
// SIG undefined FUN_146fd0260(void)

undefined8 FUN_146fd0260(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fd0298 FUN_146fd0298 body=22 status=ok
// SIG undefined FUN_146fd0298(void)

undefined8 FUN_146fd0298(undefined8 param_1)

{
  FUN_146fd02ae();
  return param_1;
}



// FUNCTION 146fd02ae FUN_146fd02ae body=193 status=ok
// SIG undefined FUN_146fd02ae(void)

undefined8 * FUN_146fd02ae(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  plVar1[0x35] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb1e70;
  FUN_146fb66d6(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd0370 FUN_146fd0370 body=25 status=ok
// SIG undefined FUN_146fd0370(void)

undefined8 FUN_146fd0370(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fd03a8 FUN_146fd03a8 body=22 status=ok
// SIG undefined FUN_146fd03a8(void)

undefined8 FUN_146fd03a8(undefined8 param_1)

{
  FUN_146fd03be();
  return param_1;
}



// FUNCTION 146fd03be FUN_146fd03be body=182 status=ok
// SIG undefined FUN_146fd03be(void)

undefined8 * FUN_146fd03be(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb1f90;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd0476 FUN_146fd0476 body=25 status=ok
// SIG undefined FUN_146fd0476(void)

undefined8 FUN_146fd0476(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fd04ae FUN_146fd04ae body=22 status=ok
// SIG undefined FUN_146fd04ae(void)

undefined8 FUN_146fd04ae(undefined8 param_1)

{
  FUN_146fd04c4();
  return param_1;
}



// FUNCTION 146fd04c4 FUN_146fd04c4 body=182 status=ok
// SIG undefined FUN_146fd04c4(void)

undefined8 * FUN_146fd04c4(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb38ca(plVar1,&local_48);
  plVar1[0x33] = 0;
  plVar1[0x34] = 0;
  *plVar1 = (longlong)&PTR_FUN_149fb20b0;
  FUN_146fb64ae(plVar1);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd057c FUN_146fd057c body=25 status=ok
// SIG undefined FUN_146fd057c(void)

undefined8 FUN_146fd057c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fd05d2 FUN_146fd05d2 body=105 status=ok
// SIG undefined FUN_146fd05d2(void)

longlong FUN_146fd05d2(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_146fb8a66(param_1,param_2,param_4);
  if (*(longlong *)(lVar3 + 0x38) == 0) {
    *(undefined ***)(lVar3 + 0x38) = &PTR_PTR_14c75f4b0;
  }
  if (*param_3 != 0) {
    plVar4 = (longlong *)FUN_146fb461c(*(undefined8 *)(lVar3 + 0x18),param_3);
    uVar1 = (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    *(int *)(lVar3 + 0x5c) = (int)plVar4[8];
    *(undefined4 *)(lVar3 + 0x60) = uVar2;
    *(undefined4 *)(lVar3 + 100) = uVar1;
  }
  return lVar3;
}



// FUNCTION 146fd063c FUN_146fd063c body=196 status=ok
// SIG undefined FUN_146fd063c(void)

undefined8 FUN_146fd063c(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong **local_50;
  undefined8 *local_48;
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = *param_3;
  uVar4 = (undefined4)local_38;
  uVar5 = (undefined4)((ulonglong)local_38 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar2 = FUN_146fb5b98(lVar1);
    if (cVar2 != '\0') {
      uVar3 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_40 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar3);
      if ((local_40 != (longlong *)0x0) && (*local_40 != 0)) {
        local_50 = &local_40;
        local_48 = &local_38;
        local_60 = param_1;
        local_58 = param_2;
        FUN_146fd0702(*(undefined8 *)(param_1 + 8));
        uVar4 = (undefined4)local_38;
        uVar5 = (undefined4)((ulonglong)local_38 >> 0x20);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT44(uVar5,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd0702 FUN_146fd0702 body=125 status=ok
// SIG undefined FUN_146fd0702(void)

undefined8 FUN_146fd0702(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  if (DAT_14c99cf94 == param_1) {
    local_10 = &PTR_LAB_149fba0a8;
    FUN_146fd07fe(&local_38);
    uVar1 = 1;
  }
  else {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_44 = param_2[5];
    uStack_40 = param_2[6];
    uStack_3c = param_2[7];
    uVar1 = FUN_146fd0780();
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd0780 FUN_146fd0780 body=125 status=ok
// SIG undefined FUN_146fd0780(void)

undefined8 FUN_146fd0780(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  if (DAT_14c99cf9c == param_1) {
    local_10 = &PTR_LAB_149fba0b0;
    FUN_146fd08fc(&local_38);
    uVar1 = 1;
  }
  else {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_44 = param_2[5];
    uStack_40 = param_2[6];
    uStack_3c = param_2[7];
    uVar1 = FUN_146fd087e();
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd07fe FUN_146fd07fe body=127 status=ok
// SIG undefined FUN_146fd07fe(void)

void FUN_146fd07fe(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x38);
  }
  else if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined8 *)
             FUN_146fcb2b8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_18);
  }
  else {
    puVar2 = &local_18;
  }
  **(undefined8 **)(param_1 + 0x18) = *puVar2;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd087e FUN_146fd087e body=125 status=ok
// SIG undefined FUN_146fd087e(void)

undefined8 FUN_146fd087e(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  if (DAT_14c99cfa4 == param_1) {
    local_10 = &PTR_LAB_149fba0b8;
    FUN_146fd09fa(&local_38);
    uVar1 = 1;
  }
  else {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_44 = param_2[5];
    uStack_40 = param_2[6];
    uStack_3c = param_2[7];
    uVar1 = FUN_146fd097c();
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd08fc FUN_146fd08fc body=126 status=ok
// SIG undefined FUN_146fd08fc(void)

void FUN_146fd08fc(longlong param_1)

{
  longlong lVar1;
  float *pfVar2;
  undefined1 auStack_38 [36];
  float local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0.0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 0) {
    pfVar2 = (float *)(lVar1 + 0x38);
  }
  else if (*(int *)(lVar1 + 8) == 1) {
    pfVar2 = (float *)FUN_146fcb47c(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,
                                    &local_14);
  }
  else {
    pfVar2 = &local_14;
  }
  **(double **)(param_1 + 0x18) = (double)*pfVar2;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd097c FUN_146fd097c body=125 status=ok
// SIG undefined FUN_146fd097c(void)

undefined8 FUN_146fd097c(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  if (DAT_14c99cfac == param_1) {
    local_10 = &PTR_LAB_149fba0c0;
    FUN_146fd0b1e(&local_38);
    uVar1 = 1;
  }
  else {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_44 = param_2[5];
    uStack_40 = param_2[6];
    uStack_3c = param_2[7];
    uVar1 = FUN_146fd0a7c();
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd09fa FUN_146fd09fa body=128 status=ok
// SIG undefined FUN_146fd09fa(void)

void FUN_146fd09fa(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 0) {
    plVar2 = (longlong *)(lVar1 + 0x38);
  }
  else if (*(int *)(lVar1 + 8) == 1) {
    plVar2 = (longlong *)
             FUN_146fcb68c(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_18);
  }
  else {
    plVar2 = &local_18;
  }
  **(double **)(param_1 + 0x18) = (double)*plVar2;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd0a7c FUN_146fd0a7c body=161 status=ok
// SIG undefined FUN_146fd0a7c(void)

undefined8 FUN_146fd0a7c(longlong param_1,undefined4 *param_2)

{
  double *pdVar1;
  longlong *plVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c99cfb4 == param_1) {
    pdVar1 = *(double **)(param_2 + 6);
    plVar2 = *(longlong **)(param_2 + 2);
    plVar4 = (longlong *)**(undefined8 **)(param_2 + 4);
    do {
      lVar5 = *plVar4;
      dVar3 = 0.0;
      if (*(int *)(lVar5 + 8) != 1) {
        if (*(int *)(lVar5 + 8) == 0) {
          dVar3 = (double)*(int *)(lVar5 + 0x38);
        }
        goto LAB_146fd0adb;
      }
      plVar4 = (longlong *)(**(code **)(*plVar2 + 0x28))(plVar2,*(undefined4 *)(lVar5 + 0x38));
    } while (plVar4 != (longlong *)0x0);
    lVar5 = 0;
    dVar3 = 0.0;
LAB_146fd0adb:
    *pdVar1 = dVar3;
    uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
  }
  else {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_44 = param_2[5];
    uStack_40 = param_2[6];
    uStack_3c = param_2[7];
    uVar6 = FUN_146fd0bb2();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd0b1e FUN_146fd0b1e body=146 status=ok
// SIG undefined FUN_146fd0b1e(void)

void FUN_146fd0b1e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x38);
  }
  else if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined8 *)
             FUN_146fcb7f4(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_18);
  }
  else {
    puVar2 = &local_18;
  }
  **(double **)(param_1 + 0x18) =
       ((double)CONCAT44(0x43300000,(int)*puVar2) - 4503599627370496.0) +
       ((double)CONCAT44(0x45300000,(int)((ulonglong)*puVar2 >> 0x20)) - 1.9342813113834067e+25);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd0bb2 FUN_146fd0bb2 body=125 status=ok
// SIG undefined FUN_146fd0bb2(void)

undefined8 FUN_146fd0bb2(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  if (DAT_14c99cfbc == param_1) {
    local_10 = &PTR_LAB_149fba0d0;
    FUN_146fd0cae(&local_38);
    uVar1 = 1;
  }
  else {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_44 = param_2[5];
    uStack_40 = param_2[6];
    uStack_3c = param_2[7];
    uVar1 = FUN_146fd0c30();
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd0c30 FUN_146fd0c30 body=125 status=ok
// SIG undefined FUN_146fd0c30(void)

undefined8 FUN_146fd0c30(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  if (DAT_14c99cfc4 == param_1) {
    local_10 = &PTR_LAB_149fba0d8;
    FUN_146fd0dae(&local_38);
    uVar1 = 1;
  }
  else {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_44 = param_2[5];
    uStack_40 = param_2[6];
    uStack_3c = param_2[7];
    uVar1 = FUN_146fd0d30();
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd0cae FUN_146fd0cae body=129 status=ok
// SIG undefined FUN_146fd0cae(void)

void FUN_146fd0cae(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  undefined1 auStack_38 [36];
  uint local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (uint *)(lVar1 + 0x38);
  }
  else if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (uint *)FUN_146fcbb5c(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,
                                   &local_14);
  }
  else {
    puVar2 = &local_14;
  }
  **(double **)(param_1 + 0x18) = (double)*puVar2;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd0d30 FUN_146fd0d30 body=125 status=ok
// SIG undefined FUN_146fd0d30(void)

undefined8 FUN_146fd0d30(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  if (DAT_14c99cfcc == param_1) {
    local_10 = &PTR_LAB_149fba0e0;
    FUN_146fd0ed2(&local_38);
    uVar1 = 1;
  }
  else {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_44 = param_2[5];
    uStack_40 = param_2[6];
    uStack_3c = param_2[7];
    uVar1 = FUN_146fd0e30();
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd0dae FUN_146fd0dae body=128 status=ok
// SIG undefined FUN_146fd0dae(void)

void FUN_146fd0dae(longlong param_1)

{
  longlong lVar1;
  short *psVar2;
  undefined1 auStack_38 [38];
  short local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_12 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 0) {
    psVar2 = (short *)(lVar1 + 0x38);
  }
  else if (*(int *)(lVar1 + 8) == 1) {
    psVar2 = (short *)FUN_146fcbd22(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,
                                    &local_12);
  }
  else {
    psVar2 = &local_12;
  }
  **(double **)(param_1 + 0x18) = (double)(int)*psVar2;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd0e30 FUN_146fd0e30 body=161 status=ok
// SIG undefined FUN_146fd0e30(void)

ulonglong FUN_146fd0e30(longlong param_1,undefined8 *param_2)

{
  undefined8 unaff_RBX;
  undefined7 uVar2;
  ulonglong uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined **local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *(undefined4 *)param_2;
  uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_48 = *(undefined4 *)(param_2 + 2);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_40 = *(undefined4 *)(param_2 + 3);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar2 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (DAT_14c99cfd4 == param_1) {
    local_38 = &PTR_LAB_149fba0e8;
    FUN_146fd0f54(&local_58);
    uVar1 = CONCAT71(uVar2,1);
  }
  else {
    local_38 = (undefined **)*param_2;
    uStack_30 = *(undefined4 *)(param_2 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_28 = *(undefined4 *)(param_2 + 2);
    uStack_24 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_20 = *(undefined4 *)(param_2 + 3);
    uStack_1c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar1 = CONCAT71(uVar2,DAT_14c99cfdc == param_1);
    if (DAT_14c99cfdc == param_1) {
      local_18 = &PTR_LAB_149fba0f0;
      FUN_146fd0fd4(&local_38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd0ed2 FUN_146fd0ed2 body=128 status=ok
// SIG undefined FUN_146fd0ed2(void)

void FUN_146fd0ed2(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  undefined1 auStack_38 [38];
  ushort local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_12 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (ushort *)(lVar1 + 0x38);
  }
  else if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (ushort *)
             FUN_146fcbefc(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_12);
  }
  else {
    puVar2 = &local_12;
  }
  **(double **)(param_1 + 0x18) = (double)*puVar2;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd0f54 FUN_146fd0f54 body=126 status=ok
// SIG undefined FUN_146fd0f54(void)

void FUN_146fd0f54(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 auStack_38 [39];
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = '\0';
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 0) {
    pcVar2 = (char *)(lVar1 + 0x38);
  }
  else if (*(int *)(lVar1 + 8) == 1) {
    pcVar2 = (char *)FUN_146fcc050(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,
                                   &local_11);
  }
  else {
    pcVar2 = &local_11;
  }
  **(double **)(param_1 + 0x18) = (double)(int)*pcVar2;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd0fd4 FUN_146fd0fd4 body=126 status=ok
// SIG undefined FUN_146fd0fd4(void)

void FUN_146fd0fd4(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  undefined1 auStack_38 [39];
  byte local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 0) {
    pbVar2 = (byte *)(lVar1 + 0x38);
  }
  else if (*(int *)(lVar1 + 8) == 1) {
    pbVar2 = (byte *)FUN_146fcc1a4(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,
                                   &local_11);
  }
  else {
    pbVar2 = &local_11;
  }
  **(double **)(param_1 + 0x18) = (double)*pbVar2;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd1054 FUN_146fd1054 body=128 status=ok
// SIG undefined FUN_146fd1054(void)

undefined8 FUN_146fd1054(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  if (DAT_14c99cf94 == param_1) {
    local_10 = &PTR_LAB_149fba0a8;
    FUN_146fd1158(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = *(undefined8 *)(param_2 + 4);
    uVar1 = FUN_146fd10d6(local_48,&local_48);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd10d6 FUN_146fd10d6 body=128 status=ok
// SIG undefined FUN_146fd10d6(void)

undefined8 FUN_146fd10d6(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  if (DAT_14c99cf9c == param_1) {
    local_10 = &PTR_LAB_149fba0b0;
    FUN_146fd147c(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = *(undefined8 *)(param_2 + 4);
    uVar1 = FUN_146fd13fa(local_48,&local_48);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd1158 FUN_146fd1158 body=202 status=ok
// SIG undefined FUN_146fd1158(void)

void FUN_146fd1158(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  local_30 = *(undefined8 *)param_1[2];
  lVar2 = param_1[1];
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    local_38 = DAT_14c99d1d8;
    local_60 = 0;
  }
  else {
    local_38 = *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x20);
    local_60 = FUN_146fb332c();
    lVar4 = *(longlong *)(lVar1 + 0x18);
    if (lVar4 != 0) {
      local_48 = *(undefined4 *)(lVar4 + 8);
      uStack_44 = *(undefined4 *)(lVar4 + 0xc);
      uStack_40 = *(undefined4 *)(lVar4 + 0x10);
      uStack_3c = *(undefined4 *)(lVar4 + 0x14);
      goto LAB_146fd119f;
    }
  }
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
LAB_146fd119f:
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
  local_58 = &local_38;
  local_68 = &local_48;
  FUN_146fd1224(lVar2,uVar5,uVar3,&local_30);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd1224 FUN_146fd1224 body=204 status=ok
// SIG undefined FUN_146fd1224(void)

void FUN_146fd1224(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  *(undefined8 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined8 *)((longlong)local_48 + 0x14) = uVar2;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_149fba0f8;
  local_48[7] = *param_4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd12f2 FUN_146fd12f2 body=29 status=ok
// SIG undefined FUN_146fd12f2(void)

undefined8 FUN_146fd12f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd1310 FUN_146fd1310 body=101 status=ok
// SIG undefined FUN_146fd1310(void)

undefined8 * FUN_146fd1310(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba108;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd1376 FUN_146fd1376 body=29 status=ok
// SIG undefined FUN_146fd1376(void)

undefined8 FUN_146fd1376(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd1394 FUN_146fd1394 body=101 status=ok
// SIG undefined FUN_146fd1394(void)

undefined8 * FUN_146fd1394(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba108;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd13fa FUN_146fd13fa body=128 status=ok
// SIG undefined FUN_146fd13fa(void)

undefined8 FUN_146fd13fa(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  if (DAT_14c99cfa4 == param_1) {
    local_10 = &PTR_LAB_149fba0b8;
    FUN_146fd17a0(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = *(undefined8 *)(param_2 + 4);
    uVar1 = FUN_146fd171e(local_48,&local_48);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd147c FUN_146fd147c body=202 status=ok
// SIG undefined FUN_146fd147c(void)

void FUN_146fd147c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  local_2c = (float)*(double *)param_1[2];
  lVar2 = param_1[1];
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    local_38 = DAT_14c99d1d8;
    local_60 = 0;
  }
  else {
    local_38 = *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x20);
    local_60 = FUN_146fb332c();
    lVar4 = *(longlong *)(lVar1 + 0x18);
    if (lVar4 != 0) {
      local_48 = *(undefined4 *)(lVar4 + 8);
      uStack_44 = *(undefined4 *)(lVar4 + 0xc);
      uStack_40 = *(undefined4 *)(lVar4 + 0x10);
      uStack_3c = *(undefined4 *)(lVar4 + 0x14);
      goto LAB_146fd14c3;
    }
  }
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
LAB_146fd14c3:
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
  local_58 = &local_38;
  local_68 = &local_48;
  FUN_146fd1548(lVar2,uVar5,uVar3,&local_2c);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd1548 FUN_146fd1548 body=204 status=ok
// SIG undefined FUN_146fd1548(void)

void FUN_146fd1548(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  *(undefined8 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined8 *)((longlong)local_48 + 0x14) = uVar2;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_149fba118;
  *(undefined4 *)(local_48 + 7) = *param_4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd1616 FUN_146fd1616 body=29 status=ok
// SIG undefined FUN_146fd1616(void)

undefined8 FUN_146fd1616(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd1634 FUN_146fd1634 body=101 status=ok
// SIG undefined FUN_146fd1634(void)

undefined8 * FUN_146fd1634(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba128;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd169a FUN_146fd169a body=29 status=ok
// SIG undefined FUN_146fd169a(void)

undefined8 FUN_146fd169a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd16b8 FUN_146fd16b8 body=101 status=ok
// SIG undefined FUN_146fd16b8(void)

undefined8 * FUN_146fd16b8(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba128;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd171e FUN_146fd171e body=128 status=ok
// SIG undefined FUN_146fd171e(void)

undefined8 FUN_146fd171e(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  if (DAT_14c99cfac == param_1) {
    local_10 = &PTR_LAB_149fba0c0;
    FUN_146fd1ac2(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = *(undefined8 *)(param_2 + 4);
    uVar1 = FUN_146fd1a40(local_48,&local_48);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd17a0 FUN_146fd17a0 body=202 status=ok
// SIG undefined FUN_146fd17a0(void)

void FUN_146fd17a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  local_30 = (longlong)*(double *)param_1[2];
  lVar2 = param_1[1];
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    local_38 = DAT_14c99d1d8;
    local_60 = 0;
  }
  else {
    local_38 = *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x20);
    local_60 = FUN_146fb332c();
    lVar4 = *(longlong *)(lVar1 + 0x18);
    if (lVar4 != 0) {
      local_48 = *(undefined4 *)(lVar4 + 8);
      uStack_44 = *(undefined4 *)(lVar4 + 0xc);
      uStack_40 = *(undefined4 *)(lVar4 + 0x10);
      uStack_3c = *(undefined4 *)(lVar4 + 0x14);
      goto LAB_146fd17e7;
    }
  }
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
LAB_146fd17e7:
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
  local_58 = &local_38;
  local_68 = &local_48;
  FUN_146fd186c(lVar2,uVar5,uVar3,&local_30);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd186c FUN_146fd186c body=202 status=ok
// SIG undefined FUN_146fd186c(void)

void FUN_146fd186c(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_149fba138;
  local_48[7] = *param_4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd1938 FUN_146fd1938 body=29 status=ok
// SIG undefined FUN_146fd1938(void)

undefined8 FUN_146fd1938(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd1956 FUN_146fd1956 body=101 status=ok
// SIG undefined FUN_146fd1956(void)

undefined8 * FUN_146fd1956(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba148;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd19bc FUN_146fd19bc body=29 status=ok
// SIG undefined FUN_146fd19bc(void)

undefined8 FUN_146fd19bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd19da FUN_146fd19da body=101 status=ok
// SIG undefined FUN_146fd19da(void)

undefined8 * FUN_146fd19da(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba148;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd1a40 FUN_146fd1a40 body=128 status=ok
// SIG undefined FUN_146fd1a40(void)

undefined8 FUN_146fd1a40(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  if (DAT_14c99cfb4 == param_1) {
    local_10 = &PTR_LAB_149fba0c8;
    FUN_146fd1e04(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = *(undefined8 *)(param_2 + 4);
    uVar1 = FUN_146fd1d82(local_48,&local_48);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd1ac2 FUN_146fd1ac2 body=235 status=ok
// SIG undefined FUN_146fd1ac2(void)

void FUN_146fd1ac2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  local_30 = (ulonglong)*(double *)param_1[2];
  local_30 = (longlong)(*(double *)param_1[2] - 9.223372036854776e+18) & (longlong)local_30 >> 0x3f
             | local_30;
  lVar2 = param_1[1];
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    local_38 = DAT_14c99d1d8;
    local_60 = 0;
  }
  else {
    local_38 = *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x20);
    local_60 = FUN_146fb332c();
    lVar4 = *(longlong *)(lVar1 + 0x18);
    if (lVar4 != 0) {
      local_48 = *(undefined8 *)(lVar4 + 8);
      uStack_40 = *(undefined8 *)(lVar4 + 0x10);
      goto LAB_146fd1b28;
    }
  }
  local_48 = 0;
  uStack_40 = 0;
LAB_146fd1b28:
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
  local_58 = &local_38;
  local_68 = &local_48;
  FUN_146fd1bae(lVar2,uVar5,uVar3,&local_30);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd1bae FUN_146fd1bae body=202 status=ok
// SIG undefined FUN_146fd1bae(void)

void FUN_146fd1bae(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_149fba158;
  local_48[7] = *param_4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd1c7a FUN_146fd1c7a body=29 status=ok
// SIG undefined FUN_146fd1c7a(void)

undefined8 FUN_146fd1c7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd1c98 FUN_146fd1c98 body=101 status=ok
// SIG undefined FUN_146fd1c98(void)

undefined8 * FUN_146fd1c98(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba168;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd1cfe FUN_146fd1cfe body=29 status=ok
// SIG undefined FUN_146fd1cfe(void)

undefined8 FUN_146fd1cfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd1d1c FUN_146fd1d1c body=101 status=ok
// SIG undefined FUN_146fd1d1c(void)

undefined8 * FUN_146fd1d1c(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba168;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd1d82 FUN_146fd1d82 body=128 status=ok
// SIG undefined FUN_146fd1d82(void)

undefined8 FUN_146fd1d82(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  if (DAT_14c99cfbc == param_1) {
    local_10 = &PTR_LAB_149fba0d0;
    FUN_146fd2122(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = *(undefined8 *)(param_2 + 4);
    uVar1 = FUN_146fd20a0(local_48,&local_48);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd1e04 FUN_146fd1e04 body=200 status=ok
// SIG undefined FUN_146fd1e04(void)

void FUN_146fd1e04(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  local_2c = (int)*(double *)param_1[2];
  lVar2 = param_1[1];
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    local_38 = DAT_14c99d1d8;
    local_60 = 0;
  }
  else {
    local_38 = *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x20);
    local_60 = FUN_146fb332c();
    lVar4 = *(longlong *)(lVar1 + 0x18);
    if (lVar4 != 0) {
      local_48 = *(undefined4 *)(lVar4 + 8);
      uStack_44 = *(undefined4 *)(lVar4 + 0xc);
      uStack_40 = *(undefined4 *)(lVar4 + 0x10);
      uStack_3c = *(undefined4 *)(lVar4 + 0x14);
      goto LAB_146fd1e49;
    }
  }
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
LAB_146fd1e49:
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
  local_58 = &local_38;
  local_68 = &local_48;
  FUN_146fd1ece(lVar2,uVar5,uVar3,&local_2c);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd1ece FUN_146fd1ece body=200 status=ok
// SIG undefined FUN_146fd1ece(void)

void FUN_146fd1ece(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_149fba178;
  *(undefined4 *)(local_48 + 7) = *param_4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd1f98 FUN_146fd1f98 body=29 status=ok
// SIG undefined FUN_146fd1f98(void)

undefined8 FUN_146fd1f98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd1fb6 FUN_146fd1fb6 body=101 status=ok
// SIG undefined FUN_146fd1fb6(void)

undefined8 * FUN_146fd1fb6(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba188;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd201c FUN_146fd201c body=29 status=ok
// SIG undefined FUN_146fd201c(void)

undefined8 FUN_146fd201c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd203a FUN_146fd203a body=101 status=ok
// SIG undefined FUN_146fd203a(void)

undefined8 * FUN_146fd203a(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba188;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd20a0 FUN_146fd20a0 body=128 status=ok
// SIG undefined FUN_146fd20a0(void)

undefined8 FUN_146fd20a0(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  if (DAT_14c99cfc4 == param_1) {
    local_10 = &PTR_LAB_149fba0d8;
    FUN_146fd2440(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = *(undefined8 *)(param_2 + 4);
    uVar1 = FUN_146fd23be(local_48,&local_48);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd2122 FUN_146fd2122 body=201 status=ok
// SIG undefined FUN_146fd2122(void)

void FUN_146fd2122(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  local_2c = (undefined4)(longlong)*(double *)param_1[2];
  lVar2 = param_1[1];
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    local_38 = DAT_14c99d1d8;
    local_60 = 0;
  }
  else {
    local_38 = *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x20);
    local_60 = FUN_146fb332c();
    lVar4 = *(longlong *)(lVar1 + 0x18);
    if (lVar4 != 0) {
      local_48 = *(undefined4 *)(lVar4 + 8);
      uStack_44 = *(undefined4 *)(lVar4 + 0xc);
      uStack_40 = *(undefined4 *)(lVar4 + 0x10);
      uStack_3c = *(undefined4 *)(lVar4 + 0x14);
      goto LAB_146fd2168;
    }
  }
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
LAB_146fd2168:
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
  local_58 = &local_38;
  local_68 = &local_48;
  FUN_146fd21ec(lVar2,uVar5,uVar3,&local_2c);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd21ec FUN_146fd21ec body=200 status=ok
// SIG undefined FUN_146fd21ec(void)

void FUN_146fd21ec(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_149fba198;
  *(undefined4 *)(local_48 + 7) = *param_4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd22b6 FUN_146fd22b6 body=29 status=ok
// SIG undefined FUN_146fd22b6(void)

undefined8 FUN_146fd22b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd22d4 FUN_146fd22d4 body=101 status=ok
// SIG undefined FUN_146fd22d4(void)

undefined8 * FUN_146fd22d4(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba1a8;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd233a FUN_146fd233a body=29 status=ok
// SIG undefined FUN_146fd233a(void)

undefined8 FUN_146fd233a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd2358 FUN_146fd2358 body=101 status=ok
// SIG undefined FUN_146fd2358(void)

undefined8 * FUN_146fd2358(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba1a8;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd23be FUN_146fd23be body=128 status=ok
// SIG undefined FUN_146fd23be(void)

undefined8 FUN_146fd23be(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  if (DAT_14c99cfcc == param_1) {
    local_10 = &PTR_LAB_149fba0e0;
    FUN_146fd2780(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = *(undefined8 *)(param_2 + 4);
    uVar1 = FUN_146fd26de(local_48,&local_48);
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd2440 FUN_146fd2440 body=201 status=ok
// SIG undefined FUN_146fd2440(void)

void FUN_146fd2440(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  local_2a = (undefined2)(int)*(double *)param_1[2];
  lVar2 = param_1[1];
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    local_38 = DAT_14c99d1d8;
    local_60 = 0;
  }
  else {
    local_38 = *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x20);
    local_60 = FUN_146fb332c();
    lVar4 = *(longlong *)(lVar1 + 0x18);
    if (lVar4 != 0) {
      local_48 = *(undefined4 *)(lVar4 + 8);
      uStack_44 = *(undefined4 *)(lVar4 + 0xc);
      uStack_40 = *(undefined4 *)(lVar4 + 0x10);
      uStack_3c = *(undefined4 *)(lVar4 + 0x14);
      goto LAB_146fd2486;
    }
  }
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
LAB_146fd2486:
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
  local_58 = &local_38;
  local_68 = &local_48;
  FUN_146fd250a(lVar2,uVar5,uVar3,&local_2a);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd250a FUN_146fd250a body=202 status=ok
// SIG undefined FUN_146fd250a(void)

void FUN_146fd250a(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined2 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_149fba1b8;
  *(undefined2 *)(local_48 + 7) = *param_4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd25d6 FUN_146fd25d6 body=29 status=ok
// SIG undefined FUN_146fd25d6(void)

undefined8 FUN_146fd25d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd25f4 FUN_146fd25f4 body=101 status=ok
// SIG undefined FUN_146fd25f4(void)

undefined8 * FUN_146fd25f4(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba1c8;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd265a FUN_146fd265a body=29 status=ok
// SIG undefined FUN_146fd265a(void)

undefined8 FUN_146fd265a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd2678 FUN_146fd2678 body=101 status=ok
// SIG undefined FUN_146fd2678(void)

undefined8 * FUN_146fd2678(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba1c8;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd26de FUN_146fd26de body=161 status=ok
// SIG undefined FUN_146fd26de(void)

ulonglong FUN_146fd26de(longlong param_1,undefined8 *param_2)

{
  undefined8 unaff_RBX;
  undefined7 uVar2;
  ulonglong uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined **local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *(undefined4 *)param_2;
  uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_48 = param_2[2];
  uVar2 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (DAT_14c99cfd4 == param_1) {
    local_38 = &PTR_LAB_149fba0e8;
    FUN_146fd2a1e(&local_58);
    uVar1 = CONCAT71(uVar2,1);
  }
  else {
    local_28 = param_2[2];
    local_38 = (undefined **)*param_2;
    uStack_30 = *(undefined4 *)(param_2 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar1 = CONCAT71(uVar2,DAT_14c99cfdc == param_1);
    if (DAT_14c99cfdc == param_1) {
      local_18 = &PTR_LAB_149fba0f0;
      FUN_146fd2cba(&local_38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd2780 FUN_146fd2780 body=201 status=ok
// SIG undefined FUN_146fd2780(void)

void FUN_146fd2780(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  local_2a = (undefined2)(int)*(double *)param_1[2];
  lVar2 = param_1[1];
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    local_38 = DAT_14c99d1d8;
    local_60 = 0;
  }
  else {
    local_38 = *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x20);
    local_60 = FUN_146fb332c();
    lVar4 = *(longlong *)(lVar1 + 0x18);
    if (lVar4 != 0) {
      local_48 = *(undefined4 *)(lVar4 + 8);
      uStack_44 = *(undefined4 *)(lVar4 + 0xc);
      uStack_40 = *(undefined4 *)(lVar4 + 0x10);
      uStack_3c = *(undefined4 *)(lVar4 + 0x14);
      goto LAB_146fd27c6;
    }
  }
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
LAB_146fd27c6:
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
  local_58 = &local_38;
  local_68 = &local_48;
  FUN_146fd284a(lVar2,uVar5,uVar3,&local_2a);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd284a FUN_146fd284a body=202 status=ok
// SIG undefined FUN_146fd284a(void)

void FUN_146fd284a(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined2 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_149fba1d8;
  *(undefined2 *)(local_48 + 7) = *param_4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd2916 FUN_146fd2916 body=29 status=ok
// SIG undefined FUN_146fd2916(void)

undefined8 FUN_146fd2916(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd2934 FUN_146fd2934 body=101 status=ok
// SIG undefined FUN_146fd2934(void)

undefined8 * FUN_146fd2934(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba1e8;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd299a FUN_146fd299a body=29 status=ok
// SIG undefined FUN_146fd299a(void)

undefined8 FUN_146fd299a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd29b8 FUN_146fd29b8 body=101 status=ok
// SIG undefined FUN_146fd29b8(void)

undefined8 * FUN_146fd29b8(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba1e8;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd2a1e FUN_146fd2a1e body=200 status=ok
// SIG undefined FUN_146fd2a1e(void)

void FUN_146fd2a1e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  local_29 = (undefined1)(int)*(double *)param_1[2];
  lVar2 = param_1[1];
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    local_38 = DAT_14c99d1d8;
    local_60 = 0;
  }
  else {
    local_38 = *(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x20);
    local_60 = FUN_146fb332c();
    lVar4 = *(longlong *)(lVar1 + 0x18);
    if (lVar4 != 0) {
      local_48 = *(undefined4 *)(lVar4 + 8);
      uStack_44 = *(undefined4 *)(lVar4 + 0xc);
      uStack_40 = *(undefined4 *)(lVar4 + 0x10);
      uStack_3c = *(undefined4 *)(lVar4 + 0x14);
      goto LAB_146fd2a63;
    }
  }
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
LAB_146fd2a63:
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
  local_58 = &local_38;
  local_68 = &local_48;
  FUN_146fd2ae8(lVar2,uVar5,uVar3,&local_29);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd2ae8 FUN_146fd2ae8 body=200 status=ok
// SIG undefined FUN_146fd2ae8(void)

void FUN_146fd2ae8(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_149fba1f8;
  *(undefined1 *)(local_48 + 7) = *param_4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fd2bb2 FUN_146fd2bb2 body=29 status=ok
// SIG undefined FUN_146fd2bb2(void)

undefined8 FUN_146fd2bb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd2bd0 FUN_146fd2bd0 body=101 status=ok
// SIG undefined FUN_146fd2bd0(void)

undefined8 * FUN_146fd2bd0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba208;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fd2c36 FUN_146fd2c36 body=29 status=ok
// SIG undefined FUN_146fd2c36(void)

undefined8 FUN_146fd2c36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fd2c54 FUN_146fd2c54 body=101 status=ok
// SIG undefined FUN_146fd2c54(void)

undefined8 * FUN_146fd2c54(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fba208;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}


