// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14932ee8e FUN_14932ee8e body=178 status=ok
// SIG undefined FUN_14932ee8e(void)

void FUN_14932ee8e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493387bc(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932ef44 FUN_14932ef44 body=75 status=ok
// SIG undefined FUN_14932ef44(void)

void FUN_14932ef44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14932ef90(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932ef90 FUN_14932ef90 body=94 status=ok
// SIG undefined FUN_14932ef90(void)

void FUN_14932ef90(longlong param_1,longlong param_2)

{
  FUN_1492f069a();
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(char *)(param_1 + 0x38) == '\x01')) {
    FUN_1444bea9a(param_1 + 0xb0);
    FUN_1444c4752(param_1 + 0x128);
    FUN_1444bea9a(param_1 + 0x1a0);
    FUN_1444c4752(param_1 + 0x218);
    return;
  }
  return;
}



// FUNCTION 14932eff8 FUN_14932eff8 body=172 status=ok
// SIG undefined FUN_14932eff8(void)

void FUN_14932eff8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14932f0a6(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932f0a6 FUN_14932f0a6 body=159 status=ok
// SIG undefined FUN_14932f0a6(void)

undefined4 FUN_14932f0a6(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetEnableDepthOfField");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932f14c FUN_14932f14c body=175 status=ok
// SIG undefined FUN_14932f14c(void)

void FUN_14932f14c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14932f1fc(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932f1fc FUN_14932f1fc body=156 status=ok
// SIG undefined FUN_14932f1fc(void)

undefined4 FUN_14932f1fc(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetFocalLength");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932f2a0 FUN_14932f2a0 body=175 status=ok
// SIG undefined FUN_14932f2a0(void)

void FUN_14932f2a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14932f350(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932f350 FUN_14932f350 body=156 status=ok
// SIG undefined FUN_14932f350(void)

undefined4 FUN_14932f350(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetSensorHeight");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932f3f4 FUN_14932f3f4 body=175 status=ok
// SIG undefined FUN_14932f3f4(void)

void FUN_14932f3f4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14932f4a4(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932f4a4 FUN_14932f4a4 body=156 status=ok
// SIG undefined FUN_14932f4a4(void)

undefined4 FUN_14932f4a4(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetSensorWidth");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932f54c FUN_14932f54c body=172 status=ok
// SIG undefined FUN_14932f54c(void)

void FUN_14932f54c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14932f5fa(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932f5fa FUN_14932f5fa body=159 status=ok
// SIG undefined FUN_14932f5fa(void)

undefined4 FUN_14932f5fa(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetEnableDepthOfField");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932f6a0 FUN_14932f6a0 body=175 status=ok
// SIG undefined FUN_14932f6a0(void)

void FUN_14932f6a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14932f750(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932f750 FUN_14932f750 body=156 status=ok
// SIG undefined FUN_14932f750(void)

undefined4 FUN_14932f750(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetFocalLength");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932f7f4 FUN_14932f7f4 body=175 status=ok
// SIG undefined FUN_14932f7f4(void)

void FUN_14932f7f4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14932f8a4(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932f8a4 FUN_14932f8a4 body=156 status=ok
// SIG undefined FUN_14932f8a4(void)

undefined4 FUN_14932f8a4(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetSensorHeight");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932f948 FUN_14932f948 body=175 status=ok
// SIG undefined FUN_14932f948(void)

void FUN_14932f948(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14932f9f8(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932f9f8 FUN_14932f9f8 body=156 status=ok
// SIG undefined FUN_14932f9f8(void)

undefined4 FUN_14932f9f8(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetSensorWidth");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932fa9e FUN_14932fa9e body=175 status=ok
// SIG undefined FUN_14932fa9e(void)

void FUN_14932fa9e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14932fb4e(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932fb4e FUN_14932fb4e body=159 status=ok
// SIG undefined FUN_14932fb4e(void)

undefined4 FUN_14932fb4e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAspectRatio");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932fbf4 FUN_14932fbf4 body=175 status=ok
// SIG undefined FUN_14932fbf4(void)

void FUN_14932fbf4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14932fca4(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932fca4 FUN_14932fca4 body=159 status=ok
// SIG undefined FUN_14932fca4(void)

undefined4 FUN_14932fca4(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetFarClipPlane");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932fd4a FUN_14932fd4a body=175 status=ok
// SIG undefined FUN_14932fd4a(void)

void FUN_14932fd4a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14932fdfa(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932fdfa FUN_14932fdfa body=159 status=ok
// SIG undefined FUN_14932fdfa(void)

undefined4 FUN_14932fdfa(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetFieldOfView");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x16,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932fea0 FUN_14932fea0 body=175 status=ok
// SIG undefined FUN_14932fea0(void)

void FUN_14932fea0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14932ff50(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932ff50 FUN_14932ff50 body=156 status=ok
// SIG undefined FUN_14932ff50(void)

undefined4 FUN_14932ff50(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetNearClipPlane");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14932fff4 FUN_14932fff4 body=172 status=ok
// SIG undefined FUN_14932fff4(void)

void FUN_14932fff4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493300a2(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493300a2 FUN_1493300a2 body=156 status=ok
// SIG undefined FUN_1493300a2(void)

undefined4 FUN_1493300a2(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetProjectionMode");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331e91(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149330146 FUN_149330146 body=175 status=ok
// SIG undefined FUN_149330146(void)

void FUN_149330146(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493301f6(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493301f6 FUN_1493301f6 body=156 status=ok
// SIG undefined FUN_1493301f6(void)

undefined4 FUN_1493301f6(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetWidth");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933029a FUN_14933029a body=175 status=ok
// SIG undefined FUN_14933029a(void)

void FUN_14933029a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933034a(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933034a FUN_14933034a body=159 status=ok
// SIG undefined FUN_14933034a(void)

undefined4 FUN_14933034a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAspectRatio");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493303f0 FUN_1493303f0 body=175 status=ok
// SIG undefined FUN_1493303f0(void)

void FUN_1493303f0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493304a0(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493304a0 FUN_1493304a0 body=159 status=ok
// SIG undefined FUN_1493304a0(void)

undefined4 FUN_1493304a0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetFarClipPlane");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149330546 FUN_149330546 body=175 status=ok
// SIG undefined FUN_149330546(void)

void FUN_149330546(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493305f6(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493305f6 FUN_1493305f6 body=159 status=ok
// SIG undefined FUN_1493305f6(void)

undefined4 FUN_1493305f6(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetFieldOfView");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x16,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933069c FUN_14933069c body=175 status=ok
// SIG undefined FUN_14933069c(void)

void FUN_14933069c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933074c(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933074c FUN_14933074c body=156 status=ok
// SIG undefined FUN_14933074c(void)

undefined4 FUN_14933074c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetNearClipPlane");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493307f0 FUN_1493307f0 body=172 status=ok
// SIG undefined FUN_1493307f0(void)

void FUN_1493307f0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933089e(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933089e FUN_14933089e body=156 status=ok
// SIG undefined FUN_14933089e(void)

undefined4 FUN_14933089e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetProjectionMode");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493322ce(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149330942 FUN_149330942 body=175 status=ok
// SIG undefined FUN_149330942(void)

void FUN_149330942(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493309f2(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493309f2 FUN_1493309f2 body=156 status=ok
// SIG undefined FUN_1493309f2(void)

undefined4 FUN_1493309f2(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetWidth");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149330a92 FUN_149330a92 body=32 status=ok
// SIG undefined FUN_149330a92(void)

undefined8 FUN_149330a92(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"AnimationTrackSetNode");
  return param_2;
}



// FUNCTION 149330ab2 FUN_149330ab2 body=32 status=ok
// SIG undefined FUN_149330ab2(void)

undefined8 FUN_149330ab2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"AnimationTrackBaseNode");
  return param_2;
}



// FUNCTION 149330ad2 FUN_149330ad2 body=32 status=ok
// SIG undefined FUN_149330ad2(void)

undefined8 FUN_149330ad2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"AnimationTrackSetInstanceNode");
  return param_2;
}



// FUNCTION 149330af2 FUN_149330af2 body=32 status=ok
// SIG undefined FUN_149330af2(void)

undefined8 FUN_149330af2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"AnimationTrackNode");
  return param_2;
}



// FUNCTION 149330b12 FUN_149330b12 body=32 status=ok
// SIG undefined FUN_149330b12(void)

undefined8 FUN_149330b12(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TransformAnimationTrackNode");
  return param_2;
}



// FUNCTION 149330b32 FUN_149330b32 body=32 status=ok
// SIG undefined FUN_149330b32(void)

undefined8 FUN_149330b32(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SkeletalAnimationTrack");
  return param_2;
}



// FUNCTION 149330b52 FUN_149330b52 body=32 status=ok
// SIG undefined FUN_149330b52(void)

undefined8 FUN_149330b52(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"PhysicalCameraNode");
  return param_2;
}



// FUNCTION 149330b72 FUN_149330b72 body=32 status=ok
// SIG undefined FUN_149330b72(void)

undefined8 FUN_149330b72(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"StandardCameraNode");
  return param_2;
}



// FUNCTION 149330b92 FUN_149330b92 body=33 status=ok
// SIG undefined FUN_149330b92(void)

void FUN_149330b92(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 149330bb4 FUN_149330bb4 body=33 status=ok
// SIG undefined FUN_149330bb4(void)

void FUN_149330bb4(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 149330bfa FUN_149330bfa body=60 status=ok
// SIG undefined FUN_149330bfa(void)

undefined1 FUN_149330bfa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 149330c5e FUN_149330c5e body=70 status=ok
// SIG undefined FUN_149330c5e(void)

void FUN_149330c5e(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_149330d25(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149330cb0 FUN_149330cb0 body=37 status=ok
// SIG undefined FUN_149330cb0(void)

void FUN_149330cb0(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 149330d25 FUN_149330d25 body=165 status=ok
// SIG undefined FUN_149330d25(void)

undefined4 FUN_149330d25(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a83b10(local_48,*(undefined1 *)(param_1 + 0x10));
  FUN_1407ec8fc(&local_30,param_1,local_48);
  puVar3 = local_30;
  if (local_28 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar3);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 149330dcc FUN_149330dcc body=54 status=ok
// SIG undefined FUN_149330dcc(void)

void FUN_149330dcc(longlong *param_1)

{
  FUN_149330e02(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149330e02 FUN_149330e02 body=355 status=ok
// SIG undefined FUN_149330e02(void)

void FUN_149330e02(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
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
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 149330f68 FUN_149330f68 body=377 status=ok
// SIG undefined FUN_149330f68(void)

void ** FUN_149330f68(longlong param_1,void **param_2,undefined4 param_3)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0cce8) {
    FUN_144b3d300(&DAT_14cc0cce8);
    if (DAT_14cc0cce8 == -1) {
      FUN_140056680(&DAT_14cc0ccd8,L"_KeyIndex_");
      atexit((_func_5014 *)&LAB_1444c49f8);
      _Init_thread_footer(&DAT_14cc0cce8);
    }
  }
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_1 + 0x60);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 0x58);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
  }
  iVar1 = DAT_14cc0cce0 + -1;
  if (DAT_14cc0cce0 == 0) {
    iVar1 = 0;
  }
  FUN_1412d7f26(&local_48,iVar1 + 0x10);
  iVar1 = DAT_14cc0cce0 + -1;
  if (DAT_14cc0cce0 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_48,DAT_14cc0ccd8,iVar1);
  FUN_144a83b10(&local_48,param_3);
  *param_2 = (void *)0x0;
  param_2[1] = (void *)0x0;
  if (&local_48 == param_2) {
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_2 = local_48;
    *(int *)(param_2 + 1) = local_40;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_3c;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493310e2 FUN_1493310e2 body=511 status=ok
// SIG undefined FUN_1493310e2(void)

void ** FUN_1493310e2(longlong param_1,void **param_2,undefined8 *param_3)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0cd00) {
    FUN_144b3d300(&DAT_14cc0cd00);
    if (DAT_14cc0cd00 == -1) {
      FUN_140056680(&DAT_14cc0ccf0);
      atexit((_func_5014 *)&LAB_1444c4a09);
      _Init_thread_footer(&DAT_14cc0cd00);
    }
  }
  local_40 = (void *)0x0;
  uVar1 = *(uint *)(param_1 + 0x60);
  pvVar2 = *(void **)(param_1 + 0x58);
  local_38 = CONCAT44(local_38._4_4_,uVar1);
  if ((longlong)(int)uVar1 == 0) {
    local_38 = (ulonglong)uVar1;
  }
  else {
    FUN_1446dd670(&local_40,uVar1,0);
    memcpy(local_40,pvVar2,(longlong)(int)uVar1 * 2);
  }
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_3 + 1);
  lVar6 = (longlong)local_48;
  pvVar2 = (void *)*param_3;
  if (lVar6 == 0) {
    local_44 = 0;
    iVar4 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,pvVar2,lVar6 * 2);
    iVar4 = local_48;
  }
  iVar3 = DAT_14cc0ccf8 + -1;
  if (DAT_14cc0ccf8 == 0) {
    iVar3 = 0;
  }
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  FUN_1412d7f26(&local_40,iVar5 + iVar3);
  iVar4 = DAT_14cc0ccf8 + -1;
  if (DAT_14cc0ccf8 == 0) {
    iVar4 = 0;
  }
  FUN_1400020e8(&local_40,DAT_14cc0ccf0,iVar4);
  iVar4 = local_48 + -1;
  if (local_48 == 0) {
    iVar4 = 0;
  }
  FUN_1400020e8(&local_40,local_50,iVar4);
  *param_2 = (void *)0x0;
  param_2[1] = (void *)0x0;
  if (&local_40 != param_2) {
    *param_2 = local_40;
    local_40 = (void *)0x0;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_38;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_38._4_4_;
    local_38 = 0;
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493312e2 FUN_1493312e2 body=110 status=ok
// SIG undefined FUN_1493312e2(void)

void FUN_1493312e2(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_145a5e19e(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_149331494(param_1);
    return;
  }
  FUN_149331350(param_1);
  FUN_145a5e19e(param_1,param_2);
  return;
}



// FUNCTION 149331350 FUN_149331350 body=322 status=ok
// SIG undefined FUN_149331350(void)

void FUN_149331350(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x44 + (longlong)iVar4 * 0x48) * 4) =
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



// FUNCTION 149331494 FUN_149331494 body=476 status=ok
// SIG undefined FUN_149331494(void)

void FUN_149331494(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x48);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x48);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x44 + lVar7 * 0x48) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x40 + lVar7 * 0x48) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149331672 FUN_149331672 body=61 status=ok
// SIG undefined FUN_149331672(void)

void FUN_149331672(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493316b0 FUN_1493316b0 body=341 status=ok
// SIG undefined FUN_1493316b0(void)

undefined4 *
FUN_1493316b0(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_149331806(param_1,local_50);
  iVar6 = 0;
  FUN_149331986(local_48,0,*param_3,param_3[1]);
  *(undefined4 *)(local_48 + 8) = 0xffffffff;
  local_54 = local_50[0];
  if (*(int *)(local_48 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*local_48;
    iVar6 = *(int *)(local_48 + 1) + -1;
  }
  uVar2 = FUN_144a49b4a(iVar6,puVar5);
  local_68 = param_4;
  cVar1 = FUN_1493318ec(param_1,uVar2,local_48,&local_54);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0x44) = uVar2;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 8) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_149331494(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149331806 FUN_149331806 body=230 status=ok
// SIG undefined FUN_149331806(void)

int * FUN_149331806(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x48);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 1493318ec FUN_1493318ec body=153 status=ok
// SIG undefined FUN_1493318ec(void)

void FUN_1493318ec(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
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
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 uVar17;
  int iVar18;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar18 = FUN_149331a30();
    if (iVar18 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar18 * 0x48);
      FUN_149331672(puVar1);
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[4];
      uVar7 = param_3[5];
      uVar8 = param_3[6];
      uVar9 = param_3[7];
      uVar10 = param_3[8];
      uVar11 = param_3[9];
      uVar12 = param_3[10];
      uVar13 = param_3[0xb];
      uVar14 = param_3[0xd];
      uVar15 = param_3[0xe];
      uVar16 = param_3[0xf];
      puVar1[0xc] = param_3[0xc];
      puVar1[0xd] = uVar14;
      puVar1[0xe] = uVar15;
      puVar1[0xf] = uVar16;
      puVar1[8] = uVar10;
      puVar1[9] = uVar11;
      puVar1[10] = uVar12;
      puVar1[0xb] = uVar13;
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar1[6] = uVar8;
      puVar1[7] = uVar9;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_149331abc(param_1,*param_4,1);
      *param_4 = iVar18;
      uVar17 = 1;
      goto LAB_14933190d;
    }
  }
  uVar17 = 0;
LAB_14933190d:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar17;
  }
  return;
}



// FUNCTION 149331986 FUN_149331986 body=170 status=ok
// SIG undefined FUN_149331986(void)

undefined8 *
FUN_149331986(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = *param_4;
  param_1[3] = 0;
  param_1[3] = param_4[1];
  param_4[1] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 2);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_4 + 0x14);
  param_4[2] = 0;
  param_1[5] = param_4[3];
  param_1[6] = 0;
  param_1[6] = param_4[4];
  param_4[4] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_4 + 5);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_4 + 0x2c);
  param_4[5] = 0;
  return param_1;
}



// FUNCTION 149331a30 FUN_149331a30 body=140 status=ok
// SIG undefined FUN_149331a30(void)

int FUN_149331a30(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar5 = (longlong)iVar1;
        iVar2 = *(int *)(lVar4 + 8 + lVar5 * 0x48);
        if (iVar2 == *(int *)(param_3 + 1)) {
          if (iVar2 < 2) {
            return iVar1;
          }
          iVar2 = FUN_144a80a00(*(undefined8 *)(lVar4 + lVar5 * 0x48),*param_3);
          if (iVar2 == 0) {
            return iVar1;
          }
          lVar4 = *param_1;
        }
        else if (*(int *)(param_3 + 1) + iVar2 == 1) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + 0x40 + lVar5 * 0x48);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 149331abc FUN_149331abc body=138 status=ok
// SIG undefined FUN_149331abc(void)

void FUN_149331abc(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x48 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x48) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 149331b46 FUN_149331b46 body=179 status=ok
// SIG undefined FUN_149331b46(void)

undefined8 *
FUN_149331b46(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_3;
  param_1[1] = 0;
  iVar1 = *(int *)(param_3 + 2);
  pvVar2 = (void *)param_3[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = *param_4;
  param_1[4] = 0;
  iVar1 = *(int *)(param_4 + 2);
  pvVar2 = (void *)param_4[1];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 149331bf9 FUN_149331bf9 body=399 status=ok
// SIG undefined FUN_149331bf9(void)

ulonglong FUN_149331bf9(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_149331c2b;
  }
  FUN_1444bd5f8(&local_50,param_2,param_1);
  if (local_50 == 0) {
LAB_149331d3e:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_50,local_48);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_50,local_48), iVar3 != 8))
    goto LAB_149331d3e;
    uVar5 = 0x4000000;
    if (local_50 == 0) {
LAB_149331cae:
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_2 + 1);
      lVar6 = (longlong)local_58;
      pvVar1 = (void *)*param_2;
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar1,lVar6 * 2);
      }
      local_70 = (void *)0x0;
      local_68 = *(int *)(param_3 + 1);
      lVar6 = (longlong)local_68;
      pvVar1 = (void *)*param_3;
      if (lVar6 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,local_68,0);
        memcpy(local_70,pvVar1,lVar6 * 2);
      }
      FUN_1444ba954(uVar5,&local_70,&local_60);
      goto LAB_149331d3e;
    }
    uVar5 = FUN_149302adc(local_50,local_48,param_4);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((uVar5 & 1) == 0) goto LAB_149331cae;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_149331c2b:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 149331d89 FUN_149331d89 body=263 status=ok
// SIG undefined FUN_149331d89(void)

ulonglong FUN_149331d89(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_14930288c(param_1,param_2,param_4,0);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
    }
    FUN_1444ba954(uVar2,&local_50,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149331e91 FUN_149331e91 body=399 status=ok
// SIG undefined FUN_149331e91(void)

ulonglong FUN_149331e91(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_149331ec3;
  }
  FUN_149332022(&local_50,param_2,param_1);
  if (local_50 == 0) {
LAB_149331fd6:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_50,local_48);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_50,local_48), iVar3 != 0x15))
    goto LAB_149331fd6;
    uVar5 = 0x4000000;
    if (local_50 == 0) {
LAB_149331f46:
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_2 + 1);
      lVar6 = (longlong)local_58;
      pvVar1 = (void *)*param_2;
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar1,lVar6 * 2);
      }
      local_70 = (void *)0x0;
      local_68 = *(int *)(param_3 + 1);
      lVar6 = (longlong)local_68;
      pvVar1 = (void *)*param_3;
      if (lVar6 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,local_68,0);
        memcpy(local_70,pvVar1,lVar6 * 2);
      }
      FUN_1444ba954(uVar5,&local_70,&local_60);
      goto LAB_149331fd6;
    }
    uVar5 = FUN_149332208(local_50,local_48,param_4);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((uVar5 & 1) == 0) goto LAB_149331f46;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_149331ec3:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 149332022 FUN_149332022 body=485 status=ok
// SIG undefined FUN_149332022(void)

longlong * FUN_149332022(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  void **ppvVar8;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  FUN_144a787a6(plVar1);
  if (*param_1 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar6 = (longlong)local_38;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar2,lVar6 * 2);
    }
    puVar7 = local_50;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_40;
    uVar5 = 0x4000000;
  }
  else {
    cVar3 = FUN_140c44378(*param_1,plVar1);
    if (cVar3 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar6 = (longlong)local_58;
      pvVar2 = (void *)param_1[1];
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar2,lVar6 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      FUN_1444ba954(0x800000,local_70,&local_60);
    }
    iVar4 = FUN_1419073b0(*param_1,plVar1);
    if (iVar4 == 0x15) goto LAB_1493321b5;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar6 = (longlong)local_78;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar2,lVar6 * 2);
    }
    puVar7 = local_90;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_80;
    uVar5 = 0x100000;
  }
  FUN_1444ba954(uVar5,puVar7,ppvVar8);
LAB_1493321b5:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149332208 FUN_149332208 body=198 status=ok
// SIG undefined FUN_149332208(void)

undefined8 FUN_149332208(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 0x15)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 1)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined1 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 1493322ce FUN_1493322ce body=263 status=ok
// SIG undefined FUN_1493322ce(void)

ulonglong FUN_1493322ce(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_1493323d6(param_1,param_2,param_4,0);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
    }
    FUN_1444ba954(uVar2,&local_50,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493323d6 FUN_1493323d6 body=379 status=ok
// SIG undefined FUN_1493323d6(void)

ulonglong FUN_1493323d6(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  if (iVar3 == -1) {
LAB_1493324b2:
    local_58 = param_2;
    FUN_140c5653a(param_1,&local_4c,&local_58,0);
    lVar5 = *param_1 + (longlong)local_4c * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 0x15;
    *(undefined8 *)(lVar5 + 0x18) = 1;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 1;
    if (param_1[0xc] == lVar5) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined1 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_1493324b2;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0x15) goto LAB_14933247e;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_14933247e;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = param_4;
  uVar7 = FUN_149332552(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_14933247e:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149332552 FUN_149332552 body=202 status=ok
// SIG undefined FUN_149332552(void)

undefined8 FUN_149332552(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else {
    uVar1 = 0x100000;
    if (((int)param_2[2] == 0x15) && (uVar1 = 0x200000, param_2[1] == 1)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        uVar1 = 1;
        FUN_140c54cf0(&local_48,param_3,1);
        *(undefined4 *)(param_2 + 3) = local_48;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_44;
        *(undefined4 *)(param_2 + 4) = uStack_40;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_3c;
        *(undefined1 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149332628 FUN_149332628 body=189 status=ok
// SIG undefined FUN_149332628(void)

void FUN_149332628(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493326e6(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493326e6 FUN_1493326e6 body=156 status=ok
// SIG undefined FUN_1493326e6(void)

undefined4 FUN_1493326e6(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetDecalMaterialPathName");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bba6a(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933278a FUN_14933278a body=167 status=ok
// SIG undefined FUN_14933278a(void)

void FUN_14933278a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149332832(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149332832 FUN_149332832 body=156 status=ok
// SIG undefined FUN_149332832(void)

undefined4 FUN_149332832(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetDecalSize");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149335ede(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493328d6 FUN_1493328d6 body=175 status=ok
// SIG undefined FUN_1493328d6(void)

void FUN_1493328d6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149332986(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149332986 FUN_149332986 body=156 status=ok
// SIG undefined FUN_149332986(void)

undefined4 FUN_149332986(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetSortOrder");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149332a2a FUN_149332a2a body=178 status=ok
// SIG undefined FUN_149332a2a(void)

void FUN_149332a2a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149332ade(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149332ade FUN_149332ade body=156 status=ok
// SIG undefined FUN_149332ade(void)

undefined4 FUN_149332ade(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetDecalMaterialPathName");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbbee(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149332b82 FUN_149332b82 body=167 status=ok
// SIG undefined FUN_149332b82(void)

void FUN_149332b82(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149332c2a(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149332c2a FUN_149332c2a body=156 status=ok
// SIG undefined FUN_149332c2a(void)

undefined4 FUN_149332c2a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetDecalSize");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14933606e(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149332cce FUN_149332cce body=175 status=ok
// SIG undefined FUN_149332cce(void)

void FUN_149332cce(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149332d7e(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149332d7e FUN_149332d7e body=156 status=ok
// SIG undefined FUN_149332d7e(void)

undefined4 FUN_149332d7e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetSortOrder");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc13f(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149332e24 FUN_149332e24 body=175 status=ok
// SIG undefined FUN_149332e24(void)

void FUN_149332e24(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493395cc(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149332eda FUN_149332eda body=167 status=ok
// SIG undefined FUN_149332eda(void)

void FUN_149332eda(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar2 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493391f8(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149332f88 FUN_149332f88 body=175 status=ok
// SIG undefined FUN_149332f88(void)

void FUN_149332f88(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149339708(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149333042 FUN_149333042 body=172 status=ok
// SIG undefined FUN_149333042(void)

void FUN_149333042(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149339844(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493330f6 FUN_1493330f6 body=163 status=ok
// SIG undefined FUN_1493330f6(void)

void FUN_1493330f6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933966a(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493331a0 FUN_1493331a0 body=167 status=ok
// SIG undefined FUN_1493331a0(void)

void FUN_1493331a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar2 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149339426(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933324e FUN_14933324e body=163 status=ok
// SIG undefined FUN_14933324e(void)

void FUN_14933324e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493397a6(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493332fc FUN_1493332fc body=165 status=ok
// SIG undefined FUN_1493332fc(void)

void FUN_1493332fc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1493398e4(param_1,local_24 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493333ac FUN_1493333ac body=175 status=ok
// SIG undefined FUN_1493333ac(void)

void FUN_1493333ac(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149339d7a(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149333462 FUN_149333462 body=175 status=ok
// SIG undefined FUN_149333462(void)

void FUN_149333462(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933a13c(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149333518 FUN_149333518 body=189 status=ok
// SIG undefined FUN_149333518(void)

void FUN_149333518(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149339ebc(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493335dc FUN_1493335dc body=172 status=ok
// SIG undefined FUN_1493335dc(void)

void FUN_1493335dc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493399a4(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149333690 FUN_149333690 body=167 status=ok
// SIG undefined FUN_149333690(void)

void FUN_149333690(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933a27c(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149333742 FUN_149333742 body=172 status=ok
// SIG undefined FUN_149333742(void)

void FUN_149333742(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149339ffc(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493337f6 FUN_1493337f6 body=163 status=ok
// SIG undefined FUN_1493337f6(void)

void FUN_1493337f6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149339e1a(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493338a6 FUN_1493338a6 body=272 status=ok
// SIG undefined FUN_1493338a6(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1493338a6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30 + 1);
  }
  piVar1 = *(int **)(param_2 + 0x38);
  local_30[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  piVar3 = local_30 + 1;
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14933a1dc(param_1,piVar3,local_30[0] != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493339be FUN_1493339be body=178 status=ok
// SIG undefined FUN_1493339be(void)

void FUN_1493339be(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149339f5c(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149333a78 FUN_149333a78 body=172 status=ok
// SIG undefined FUN_149333a78(void)

void FUN_149333a78(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149339bd4(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149333b32 FUN_149333b32 body=264 status=ok
// SIG undefined FUN_149333b32(void)

void FUN_149333b32(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [36];
  int local_44;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14933a4ac(param_1,puVar3,local_44 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149333c4c FUN_149333c4c body=269 status=ok
// SIG undefined FUN_149333c4c(void)

void FUN_149333c4c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  int local_30;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_29;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14933a09c(param_1,puVar3,local_30 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149333d64 FUN_149333d64 body=175 status=ok
// SIG undefined FUN_149333d64(void)

void FUN_149333d64(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933a7b4(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149333e1e FUN_149333e1e body=172 status=ok
// SIG undefined FUN_149333e1e(void)

void FUN_149333e1e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933a674(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149333ed2 FUN_149333ed2 body=163 status=ok
// SIG undefined FUN_149333ed2(void)

void FUN_149333ed2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933a854(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149333f80 FUN_149333f80 body=165 status=ok
// SIG undefined FUN_149333f80(void)

void FUN_149333f80(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_14933a714(param_1,local_24 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149334030 FUN_149334030 body=175 status=ok
// SIG undefined FUN_149334030(void)

void FUN_149334030(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933a916(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493340e6 FUN_1493340e6 body=175 status=ok
// SIG undefined FUN_1493340e6(void)

void FUN_1493340e6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933aa58(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933419c FUN_14933419c body=163 status=ok
// SIG undefined FUN_14933419c(void)

void FUN_14933419c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933a9b6(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149334246 FUN_149334246 body=163 status=ok
// SIG undefined FUN_149334246(void)

void FUN_149334246(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933aaf8(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493342f4 FUN_1493342f4 body=175 status=ok
// SIG undefined FUN_1493342f4(void)

void FUN_1493342f4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933acfc(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493343aa FUN_1493343aa body=175 status=ok
// SIG undefined FUN_1493343aa(void)

void FUN_1493343aa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933abba(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149334460 FUN_149334460 body=163 status=ok
// SIG undefined FUN_149334460(void)

void FUN_149334460(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933ad9c(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933450a FUN_14933450a body=163 status=ok
// SIG undefined FUN_14933450a(void)

void FUN_14933450a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933ac5a(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493345d0 FUN_1493345d0 body=172 status=ok
// SIG undefined FUN_1493345d0(void)

void FUN_1493345d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14933467e(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933467e FUN_14933467e body=156 status=ok
// SIG undefined FUN_14933467e(void)

undefined4 FUN_14933467e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetbFlipGreenChannel");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149334722 FUN_149334722 body=172 status=ok
// SIG undefined FUN_149334722(void)

void FUN_149334722(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493347d0(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493347d0 FUN_1493347d0 body=159 status=ok
// SIG undefined FUN_1493347d0(void)

undefined4 FUN_1493347d0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetColorSpace");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149336176(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149334876 FUN_149334876 body=172 status=ok
// SIG undefined FUN_149334876(void)

void FUN_149334876(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149334924(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149334924 FUN_149334924 body=156 status=ok
// SIG undefined FUN_149334924(void)

undefined4 FUN_149334924(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetFilter");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493365b2(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493349cc FUN_1493349cc body=172 status=ok
// SIG undefined FUN_1493349cc(void)

void FUN_1493349cc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149334a7a(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149334a7a FUN_149334a7a body=156 status=ok
// SIG undefined FUN_149334a7a(void)

undefined4 FUN_149334a7a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetSRGB");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149334b22 FUN_149334b22 body=172 status=ok
// SIG undefined FUN_149334b22(void)

void FUN_149334b22(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149334bd0(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149334bd0 FUN_149334bd0 body=156 status=ok
// SIG undefined FUN_149334bd0(void)

undefined4 FUN_149334bd0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetbFlipGreenChannel");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149334c74 FUN_149334c74 body=172 status=ok
// SIG undefined FUN_149334c74(void)

void FUN_149334c74(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149334d22(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149334d22 FUN_149334d22 body=159 status=ok
// SIG undefined FUN_149334d22(void)

undefined4 FUN_149334d22(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetColorSpace");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493369ee(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149334dc8 FUN_149334dc8 body=172 status=ok
// SIG undefined FUN_149334dc8(void)

void FUN_149334dc8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149334e76(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149334e76 FUN_149334e76 body=156 status=ok
// SIG undefined FUN_149334e76(void)

undefined4 FUN_149334e76(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetFilter");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149336d3b(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149334f1e FUN_149334f1e body=172 status=ok
// SIG undefined FUN_149334f1e(void)

void FUN_149334f1e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149334fcc(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149334fcc FUN_149334fcc body=156 status=ok
// SIG undefined FUN_149334fcc(void)

undefined4 FUN_149334fcc(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetSRGB");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933506a FUN_14933506a body=175 status=ok
// SIG undefined FUN_14933506a(void)

void FUN_14933506a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2f0))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149335124 FUN_149335124 body=178 status=ok
// SIG undefined FUN_149335124(void)

void FUN_149335124(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14934910c(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493351d8 FUN_1493351d8 body=268 status=ok
// SIG undefined FUN_1493351d8(void)

void FUN_1493351d8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149349102(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493352e6 FUN_1493352e6 body=37 status=ok
// SIG undefined FUN_1493352e6(void)

void FUN_1493352e6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493490ee();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14933530c FUN_14933530c body=191 status=ok
// SIG undefined FUN_14933530c(void)

void FUN_14933530c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1493490f8(param_1,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493353d2 FUN_1493353d2 body=189 status=ok
// SIG undefined FUN_1493353d2(void)

void FUN_1493353d2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149348e76(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149335496 FUN_149335496 body=189 status=ok
// SIG undefined FUN_149335496(void)

void FUN_149335496(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149348fb2(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933555a FUN_14933555a body=178 status=ok
// SIG undefined FUN_14933555a(void)

void FUN_14933555a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149349116(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149335614 FUN_149335614 body=178 status=ok
// SIG undefined FUN_149335614(void)

void FUN_149335614(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149348f14(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493356ce FUN_1493356ce body=178 status=ok
// SIG undefined FUN_1493356ce(void)

void FUN_1493356ce(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149349050(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933578a FUN_14933578a body=178 status=ok
// SIG undefined FUN_14933578a(void)

void FUN_14933578a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149348e62(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933583e FUN_14933583e body=268 status=ok
// SIG undefined FUN_14933583e(void)

void FUN_14933583e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149348e58(param_1,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933594c FUN_14933594c body=37 status=ok
// SIG undefined FUN_14933594c(void)

void FUN_14933594c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149348e44();
  *param_3 = uVar1;
  return;
}



// FUNCTION 149335972 FUN_149335972 body=191 status=ok
// SIG undefined FUN_149335972(void)

void FUN_149335972(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149348e4e(param_1,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149335a38 FUN_149335a38 body=178 status=ok
// SIG undefined FUN_149335a38(void)

void FUN_149335a38(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149348e6c(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149335af2 FUN_149335af2 body=32 status=ok
// SIG undefined FUN_149335af2(void)

undefined8 FUN_149335af2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Texture2DArrayNode");
  return param_2;
}



// FUNCTION 149335b12 FUN_149335b12 body=26 status=ok
// SIG undefined FUN_149335b12(void)

undefined8 FUN_149335b12(longlong param_1,undefined8 param_2)

{
  FUN_1492f0c36(*(undefined8 *)(param_1 + 0x28));
  return param_2;
}



// FUNCTION 149335b2c FUN_149335b2c body=509 status=ok
// SIG undefined FUN_149335b2c(void)

undefined8 * FUN_149335b2c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  ulonglong uStack_50;
  longlong local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = FUN_14933708c();
  cVar3 = FUN_140c44378(uVar1,uVar5);
  if (cVar3 == '\0') {
    *param_2 = 0;
    param_2[1] = 0xffffffff00000000;
    goto LAB_149335b79;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = FUN_14933708c();
  FUN_1444be0f2(&local_48,uVar5,uVar1);
  if (local_48 == 0) {
LAB_149335c66:
    *param_2 = 0;
    param_2[1] = 0xffffffff00000000;
  }
  else {
    cVar3 = FUN_140c44378(local_48,local_40);
    if (cVar3 == '\0') goto LAB_149335c66;
    iVar4 = FUN_1419073b0(local_48,local_40);
    if (iVar4 != 0x12) goto LAB_149335c66;
    local_58 = (void *)0x0;
    uStack_50 = 0;
    if (local_48 == 0) {
      uVar6 = 0x4000000;
LAB_149335ca1:
      puVar7 = (undefined8 *)FUN_14933708c();
      local_68 = (void *)0x0;
      local_60 = *(int *)(puVar7 + 1);
      lVar8 = (longlong)local_60;
      pvVar2 = (void *)*puVar7;
      if (lVar8 == 0) {
        local_5c = 0;
      }
      else {
        FUN_1446dd670(&local_68,local_60,0);
        memcpy(local_68,pvVar2,lVar8 * 2);
      }
      FUN_140056680(local_78,L"UInterchangeTextureNode.GetPayLoadKey");
      FUN_1444ba954(uVar6,local_78,&local_68);
      *param_2 = 0;
      param_2[1] = 0xffffffff00000000;
    }
    else {
      uVar6 = FUN_1492ff8ec(local_48,local_40,&local_58);
      pvVar2 = local_58;
      if ((uVar6 & 1) == 0) goto LAB_149335ca1;
      *param_2 = 0;
      lVar8 = (longlong)(int)uStack_50;
      *(int *)(param_2 + 1) = (int)uStack_50;
      if (lVar8 == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_2,uStack_50 & 0xffffffff,0);
        memcpy((void *)*param_2,pvVar2,lVar8 * 2);
      }
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
LAB_149335b79:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149335d2a FUN_149335d2a body=210 status=ok
// SIG undefined FUN_149335d2a(void)

void FUN_149335d2a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *_Src;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = FUN_14933708c();
  uVar3 = FUN_1492f0926(uVar1,uVar2,param_2,0);
  if ((uVar3 & 1) == 0) {
    puVar4 = (undefined8 *)FUN_14933708c();
    local_38 = (void *)0x0;
    local_30 = *(int *)(puVar4 + 1);
    lVar5 = (longlong)local_30;
    _Src = (void *)*puVar4;
    if (lVar5 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar5 * 2);
    }
    FUN_140056680(local_48,L"UInterchangeTextureNode.SetPayLoadKey");
    FUN_1444ba954(uVar3,local_48,&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149335dfe FUN_149335dfe body=32 status=ok
// SIG undefined FUN_149335dfe(void)

undefined8 FUN_149335dfe(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TextureCubeArrayNode");
  return param_2;
}



// FUNCTION 149335e1e FUN_149335e1e body=32 status=ok
// SIG undefined FUN_149335e1e(void)

undefined8 FUN_149335e1e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TextureCubeNode");
  return param_2;
}



// FUNCTION 149335e3e FUN_149335e3e body=32 status=ok
// SIG undefined FUN_149335e3e(void)

undefined8 FUN_149335e3e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TextureLightProfileNode");
  return param_2;
}



// FUNCTION 149335e5e FUN_149335e5e body=32 status=ok
// SIG undefined FUN_149335e5e(void)

undefined8 FUN_149335e5e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TextureNode");
  return param_2;
}



// FUNCTION 149335e7e FUN_149335e7e body=32 status=ok
// SIG undefined FUN_149335e7e(void)

undefined8 FUN_149335e7e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"VariantSetNode");
  return param_2;
}



// FUNCTION 149335e9e FUN_149335e9e body=32 status=ok
// SIG undefined FUN_149335e9e(void)

undefined8 FUN_149335e9e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SceneVariantSetNode");
  return param_2;
}



// FUNCTION 149335ebe FUN_149335ebe body=32 status=ok
// SIG undefined FUN_149335ebe(void)

undefined8 FUN_149335ebe(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"VolumeTextureNode");
  return param_2;
}



// FUNCTION 149335ede FUN_149335ede body=399 status=ok
// SIG undefined FUN_149335ede(void)

ulonglong FUN_149335ede(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_149335f10;
  }
  FUN_1444c0f4c(&local_50,param_2,param_1);
  if (local_50 == 0) {
LAB_149336023:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_50,local_48);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_50,local_48), iVar3 != 0x2e))
    goto LAB_149336023;
    uVar5 = 0x4000000;
    if (local_50 == 0) {
LAB_149335f93:
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_2 + 1);
      lVar6 = (longlong)local_58;
      pvVar1 = (void *)*param_2;
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar1,lVar6 * 2);
      }
      local_70 = (void *)0x0;
      local_68 = *(int *)(param_3 + 1);
      lVar6 = (longlong)local_68;
      pvVar1 = (void *)*param_3;
      if (lVar6 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,local_68,0);
        memcpy(local_70,pvVar1,lVar6 * 2);
      }
      FUN_1444ba954(uVar5,&local_70,&local_60);
      goto LAB_149336023;
    }
    uVar5 = FUN_14930c94e(local_50,local_48,param_4);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((uVar5 & 1) == 0) goto LAB_149335f93;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_149335f10:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14933606e FUN_14933606e body=263 status=ok
// SIG undefined FUN_14933606e(void)

ulonglong FUN_14933606e(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_149308824(param_1,param_2,param_4,0);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
    }
    FUN_1444ba954(uVar2,&local_50,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149336176 FUN_149336176 body=399 status=ok
// SIG undefined FUN_149336176(void)

ulonglong FUN_149336176(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_1493361a8;
  }
  FUN_149336306(&local_50,param_2,param_1);
  if (local_50 == 0) {
LAB_1493362bb:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_50,local_48);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_50,local_48), iVar3 != 0x15))
    goto LAB_1493362bb;
    uVar5 = 0x4000000;
    if (local_50 == 0) {
LAB_14933622b:
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_2 + 1);
      lVar6 = (longlong)local_58;
      pvVar1 = (void *)*param_2;
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar1,lVar6 * 2);
      }
      local_70 = (void *)0x0;
      local_68 = *(int *)(param_3 + 1);
      lVar6 = (longlong)local_68;
      pvVar1 = (void *)*param_3;
      if (lVar6 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,local_68,0);
        memcpy(local_70,pvVar1,lVar6 * 2);
      }
      FUN_1444ba954(uVar5,&local_70,&local_60);
      goto LAB_1493362bb;
    }
    uVar5 = FUN_1493364ec(local_50,local_48,param_4);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((uVar5 & 1) == 0) goto LAB_14933622b;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_1493361a8:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 149336306 FUN_149336306 body=485 status=ok
// SIG undefined FUN_149336306(void)

longlong * FUN_149336306(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  void **ppvVar8;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  FUN_144a787a6(plVar1);
  if (*param_1 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar6 = (longlong)local_38;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar2,lVar6 * 2);
    }
    puVar7 = local_50;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_40;
    uVar5 = 0x4000000;
  }
  else {
    cVar3 = FUN_140c44378(*param_1,plVar1);
    if (cVar3 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar6 = (longlong)local_58;
      pvVar2 = (void *)param_1[1];
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar2,lVar6 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      FUN_1444ba954(0x800000,local_70,&local_60);
    }
    iVar4 = FUN_1419073b0(*param_1,plVar1);
    if (iVar4 == 0x15) goto LAB_149336499;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar6 = (longlong)local_78;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar2,lVar6 * 2);
    }
    puVar7 = local_90;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_80;
    uVar5 = 0x100000;
  }
  FUN_1444ba954(uVar5,puVar7,ppvVar8);
LAB_149336499:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493364ec FUN_1493364ec body=198 status=ok
// SIG undefined FUN_1493364ec(void)

undefined8 FUN_1493364ec(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 0x15)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 1)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined1 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 1493365b2 FUN_1493365b2 body=399 status=ok
// SIG undefined FUN_1493365b2(void)

ulonglong FUN_1493365b2(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_1493365e4;
  }
  FUN_149336742(&local_50,param_2,param_1);
  if (local_50 == 0) {
LAB_1493366f7:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_50,local_48);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_50,local_48), iVar3 != 0x15))
    goto LAB_1493366f7;
    uVar5 = 0x4000000;
    if (local_50 == 0) {
LAB_149336667:
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_2 + 1);
      lVar6 = (longlong)local_58;
      pvVar1 = (void *)*param_2;
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar1,lVar6 * 2);
      }
      local_70 = (void *)0x0;
      local_68 = *(int *)(param_3 + 1);
      lVar6 = (longlong)local_68;
      pvVar1 = (void *)*param_3;
      if (lVar6 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,local_68,0);
        memcpy(local_70,pvVar1,lVar6 * 2);
      }
      FUN_1444ba954(uVar5,&local_70,&local_60);
      goto LAB_1493366f7;
    }
    uVar5 = FUN_149336928(local_50,local_48,param_4);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((uVar5 & 1) == 0) goto LAB_149336667;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_1493365e4:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 149336742 FUN_149336742 body=485 status=ok
// SIG undefined FUN_149336742(void)

longlong * FUN_149336742(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  void **ppvVar8;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  FUN_144a787a6(plVar1);
  if (*param_1 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar6 = (longlong)local_38;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar2,lVar6 * 2);
    }
    puVar7 = local_50;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_40;
    uVar5 = 0x4000000;
  }
  else {
    cVar3 = FUN_140c44378(*param_1,plVar1);
    if (cVar3 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar6 = (longlong)local_58;
      pvVar2 = (void *)param_1[1];
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar2,lVar6 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      FUN_1444ba954(0x800000,local_70,&local_60);
    }
    iVar4 = FUN_1419073b0(*param_1,plVar1);
    if (iVar4 == 0x15) goto LAB_1493368d5;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar6 = (longlong)local_78;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar2,lVar6 * 2);
    }
    puVar7 = local_90;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_80;
    uVar5 = 0x100000;
  }
  FUN_1444ba954(uVar5,puVar7,ppvVar8);
LAB_1493368d5:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149336928 FUN_149336928 body=198 status=ok
// SIG undefined FUN_149336928(void)

undefined8 FUN_149336928(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 0x15)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 1)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined1 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 1493369ee FUN_1493369ee body=260 status=ok
// SIG undefined FUN_1493369ee(void)

ulonglong FUN_1493369ee(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_149336af4(param_1,param_2,param_4);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
    }
    FUN_1444ba954(uVar2,&local_50,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149336af4 FUN_149336af4 body=378 status=ok
// SIG undefined FUN_149336af4(void)

ulonglong FUN_149336af4(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  if (iVar3 == -1) {
LAB_149336bcb:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar5 = *param_1 + (longlong)local_44 * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 0x15;
    *(undefined8 *)(lVar5 + 0x18) = 1;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 1;
    if (param_1[0xc] == lVar5) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined1 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_149336bcb;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0x15) goto LAB_149336b98;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_149336b98;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_149336c70(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_149336b98:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149336c70 FUN_149336c70 body=202 status=ok
// SIG undefined FUN_149336c70(void)

undefined8 FUN_149336c70(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else {
    uVar1 = 0x100000;
    if (((int)param_2[2] == 0x15) && (uVar1 = 0x200000, param_2[1] == 1)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        uVar1 = 1;
        FUN_140c54cf0(&local_48,param_3,1);
        *(undefined4 *)(param_2 + 3) = local_48;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_44;
        *(undefined4 *)(param_2 + 4) = uStack_40;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_3c;
        *(undefined1 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149336d3b FUN_149336d3b body=263 status=ok
// SIG undefined FUN_149336d3b(void)

ulonglong FUN_149336d3b(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_149336e44(param_1,param_2,param_4,0);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
    }
    FUN_1444ba954(uVar2,&local_50,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149336e44 FUN_149336e44 body=379 status=ok
// SIG undefined FUN_149336e44(void)

ulonglong FUN_149336e44(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  if (iVar3 == -1) {
LAB_149336f20:
    local_58 = param_2;
    FUN_140c5653a(param_1,&local_4c,&local_58,0);
    lVar5 = *param_1 + (longlong)local_4c * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 0x15;
    *(undefined8 *)(lVar5 + 0x18) = 1;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 1;
    if (param_1[0xc] == lVar5) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined1 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_149336f20;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0x15) goto LAB_149336eec;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_149336eec;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = param_4;
  uVar7 = FUN_149336fc0(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_149336eec:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149336fc0 FUN_149336fc0 body=202 status=ok
// SIG undefined FUN_149336fc0(void)

undefined8 FUN_149336fc0(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else {
    uVar1 = 0x100000;
    if (((int)param_2[2] == 0x15) && (uVar1 = 0x200000, param_2[1] == 1)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        uVar1 = 1;
        FUN_140c54cf0(&local_48,param_3,1);
        *(undefined4 *)(param_2 + 3) = local_48;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_44;
        *(undefined4 *)(param_2 + 4) = uStack_40;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_3c;
        *(undefined1 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933708c FUN_14933708c body=125 status=ok
// SIG undefined FUN_14933708c(void)

undefined8 * FUN_14933708c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d110) {
    FUN_144b3d300(&DAT_14cc0d110);
    if (DAT_14cc0d110 == -1) {
      DAT_14cc0d100 = 0;
      uRam000000014cc0d108 = 0;
      FUN_14020fad6(&DAT_14cc0d100,L"__PayloadSourceFile__");
      atexit((_func_5014 *)&LAB_1444c4bcf);
      _Init_thread_footer(&DAT_14cc0d110);
    }
  }
  return &DAT_14cc0d100;
}



// FUNCTION 14933710a FUN_14933710a body=120 status=ok
// SIG undefined FUN_14933710a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14933710a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d128) {
    FUN_144b3d300(&DAT_14cc0d128);
    if (DAT_14cc0d128 == -1) {
      DAT_14cc0d118 = 0;
      _DAT_14cc0d120 = 0;
      FUN_14020fad6(&DAT_14cc0d118,L"__AnimationPayloadUidKey__");
      atexit((_func_5014 *)&LAB_1444c4d94);
      _Init_thread_footer(&DAT_14cc0d128);
      return;
    }
  }
  return;
}



// FUNCTION 149337182 FUN_149337182 body=120 status=ok
// SIG undefined FUN_149337182(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149337182(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d140) {
    FUN_144b3d300(&DAT_14cc0d140);
    if (DAT_14cc0d140 == -1) {
      DAT_14cc0d130 = 0;
      _DAT_14cc0d138 = 0;
      FUN_14020fad6(&DAT_14cc0d130,L"__AnimationPayloadTypeKey__");
      atexit((_func_5014 *)&LAB_1444c4da5);
      _Init_thread_footer(&DAT_14cc0d140);
      return;
    }
  }
  return;
}



// FUNCTION 1493371fa FUN_1493371fa body=9 status=ok
// SIG undefined FUN_1493371fa(void)

void FUN_1493371fa(longlong param_1)

{
  FUN_1492f125c(param_1 + 0x70);
  return;
}



// FUNCTION 149337204 FUN_149337204 body=9 status=ok
// SIG undefined FUN_149337204(void)

void FUN_149337204(longlong param_1)

{
  FUN_1492f1448(param_1 + 0x70);
  return;
}



// FUNCTION 14933720e FUN_14933720e body=9 status=ok
// SIG undefined FUN_14933720e(void)

void FUN_14933720e(longlong param_1)

{
  FUN_1492f5d18(param_1 + 0x70);
  return;
}



// FUNCTION 149337218 FUN_149337218 body=9 status=ok
// SIG undefined FUN_149337218(void)

void FUN_149337218(longlong param_1)

{
  FUN_1444bb06c(param_1 + 0x70);
  return;
}



// FUNCTION 149337222 FUN_149337222 body=9 status=ok
// SIG undefined FUN_149337222(void)

void FUN_149337222(longlong param_1)

{
  FUN_1444bb466(param_1 + 0x70);
  return;
}



// FUNCTION 14933722c FUN_14933722c body=156 status=ok
// SIG undefined FUN_14933722c(void)

undefined4 FUN_14933722c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetFrameRate");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493372ca FUN_1493372ca body=156 status=ok
// SIG undefined FUN_1493372ca(void)

undefined4 FUN_1493372ca(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetFrameRate");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149337368 FUN_149337368 body=156 status=ok
// SIG undefined FUN_149337368(void)

undefined4 FUN_149337368(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetCompletionMode");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149337406 FUN_149337406 body=156 status=ok
// SIG undefined FUN_149337406(void)

undefined4 FUN_149337406(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetCompletionMode");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc13f(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493374a4 FUN_1493374a4 body=156 status=ok
// SIG undefined FUN_1493374a4(void)

undefined4 FUN_1493374a4(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetActorDependency");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bba6a(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149337542 FUN_149337542 body=156 status=ok
// SIG undefined FUN_149337542(void)

undefined4 FUN_149337542(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetActorDependency");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbbee(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493375e0 FUN_1493375e0 body=750 status=ok
// SIG undefined FUN_1493375e0(void)

ulonglong FUN_1493375e0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  void **ppvVar8;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  longlong local_50 [2];
  undefined1 local_39;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  uStack_30 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_14933710a();
  cVar3 = FUN_140c44378(uVar1,&DAT_14cc0d118);
  if (cVar3 != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    FUN_14933710a();
    FUN_1444be0f2(&local_58,&DAT_14cc0d118,uVar1);
    if (local_58 != 0) {
      cVar3 = FUN_140c44378(local_58,local_50);
      if (cVar3 != '\0') {
        iVar4 = FUN_1419073b0(local_58,local_50);
        if (iVar4 == 0x12) {
          uVar5 = 0x4000000;
          if (local_58 == 0) {
LAB_1493376f2:
            FUN_14933710a();
            pvVar2 = DAT_14cc0d118;
            local_68 = (void *)0x0;
            lVar6 = (longlong)DAT_14cc0d120;
            local_60 = DAT_14cc0d120;
            if (lVar6 == 0) {
              local_5c = 0;
            }
            else {
              FUN_1446dd670(&local_68,DAT_14cc0d120,0);
              memcpy(local_68,pvVar2,lVar6 * 2);
            }
            puVar7 = local_78;
            FUN_140056680(puVar7,L"UInterchangeMeshNode.GetPayLoadKey");
            ppvVar8 = &local_68;
          }
          else {
            uVar5 = FUN_1492ff8ec(local_58,local_50,&local_38);
            if ((uVar5 & 1) == 0) goto LAB_1493376f2;
            if (local_50[0] != 0) {
              FUN_1400020a8();
            }
            uVar1 = *(undefined8 *)(param_1 + 0x28);
            FUN_149337182();
            cVar3 = FUN_140c44378(uVar1,&DAT_14cc0d130);
            if (cVar3 == '\0') goto LAB_14933762b;
            uVar1 = *(undefined8 *)(param_1 + 0x28);
            FUN_149337182();
            FUN_14934b120(&local_58,uVar1);
            if (local_58 == 0) goto LAB_1493376b3;
            cVar3 = FUN_140c44378(local_58,local_50);
            if (cVar3 == '\0') goto LAB_1493376b3;
            iVar4 = FUN_1419073b0(local_58,local_50);
            if (iVar4 != 0x15) goto LAB_1493376b3;
            uVar5 = 0x4000000;
            if (local_58 != 0) {
              uVar5 = FUN_14934b30e(local_58,local_50,&local_39);
              if ((uVar5 & 1) != 0) {
                if (local_50[0] != 0) {
                  FUN_1400020a8();
                }
                iVar4 = (int)uStack_30 + -1;
                if ((int)uStack_30 == 0) {
                  iVar4 = 0;
                }
                FUN_1402980a2(param_2,local_38,iVar4);
                *(undefined1 *)(param_2 + 0x10) = local_39;
                uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
                goto LAB_14933762d;
              }
            }
            FUN_149337182();
            pvVar2 = DAT_14cc0d130;
            local_88 = (void *)0x0;
            lVar6 = (longlong)DAT_14cc0d138;
            local_80 = DAT_14cc0d138;
            if (lVar6 == 0) {
              local_7c = 0;
            }
            else {
              FUN_1446dd670(&local_88,DAT_14cc0d138,0);
              memcpy(local_88,pvVar2,lVar6 * 2);
            }
            puVar7 = local_98;
            FUN_140056680(puVar7,L"UInterchangeMeshNode.GetPayLoadTypeKey");
            ppvVar8 = &local_88;
          }
          FUN_1444ba954(uVar5,puVar7,ppvVar8);
        }
      }
    }
LAB_1493376b3:
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_14933762b:
  uVar5 = 0;
LAB_14933762d:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493378d0 FUN_1493378d0 body=382 status=ok
// SIG undefined FUN_1493378d0(void)

undefined8 FUN_1493378d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  void **ppvVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  FUN_14933710a();
  uVar2 = FUN_1492f0926(uVar3,&DAT_14cc0d118,param_2,0);
  if ((uVar2 & 1) == 0) {
    FUN_14933710a();
    pvVar1 = DAT_14cc0d118;
    local_38 = (void *)0x0;
    lVar4 = (longlong)DAT_14cc0d120;
    local_30 = DAT_14cc0d120;
    if (lVar4 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,DAT_14cc0d120,0);
      memcpy(local_38,pvVar1,lVar4 * 2);
    }
    puVar5 = local_48;
    FUN_140056680(puVar5,L"UInterchangeAnimationTrackNode.SetPayLoadKey");
    ppvVar6 = &local_38;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    FUN_149337182();
    uVar2 = FUN_149337a50(uVar3,param_3);
    uVar3 = 1;
    if ((uVar2 & 1) != 0) goto LAB_14933798e;
    FUN_149337182();
    pvVar1 = DAT_14cc0d130;
    local_58 = (void *)0x0;
    lVar4 = (longlong)DAT_14cc0d138;
    local_50 = DAT_14cc0d138;
    if (lVar4 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,DAT_14cc0d138,0);
      memcpy(local_58,pvVar1,lVar4 * 2);
    }
    puVar5 = local_68;
    FUN_140056680(puVar5,L"UInterchangeAnimationTrackNode.SetPayLoadTypeKey");
    ppvVar6 = &local_58;
  }
  FUN_1444ba954(uVar2,puVar5,ppvVar6);
  uVar3 = 0;
LAB_14933798e:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149337a50 FUN_149337a50 body=384 status=ok
// SIG undefined FUN_149337a50(void)

ulonglong FUN_149337a50(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  puVar3 = DAT_14cc0d130;
  if (DAT_14cc0d138 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar2 = DAT_14cc0d138 + -1;
  if (DAT_14cc0d138 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar3);
  iVar2 = FUN_140c4443c(param_1,uVar1,&DAT_14cc0d130);
  if (iVar2 == -1) {
LAB_149337b2d:
    local_48 = &DAT_14cc0d130;
    FUN_140c5653a(param_1,&local_3c,&local_48,0);
    lVar4 = *param_1 + (longlong)local_3c * 0x40;
    plVar6 = (longlong *)(lVar4 + 0x10);
    *(undefined4 *)(lVar4 + 0x20) = 0x15;
    *(undefined8 *)(lVar4 + 0x18) = 1;
    lVar4 = param_1[0xb];
    param_1[0xb] = lVar4 + 1;
    if (param_1[0xc] == lVar4) {
      FUN_14112c458(param_1 + 10,lVar4);
    }
    *(undefined1 *)(param_1[10] + lVar4) = 0;
    *plVar6 = lVar4;
  }
  else {
    lVar4 = *param_1 + (longlong)iVar2 * 0x40;
    if (lVar4 == 0) goto LAB_149337b2d;
    uVar5 = 0x100000;
    if (*(int *)(lVar4 + 0x20) != 0x15) goto LAB_149337afc;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar2 * 0x40 + 0x10);
    uVar5 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_149337afc;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar5 = FUN_14934b3d4(param_1,plVar6,param_2);
  if ((uVar5 & 1) == 0) {
    FUN_1492f0b5e(param_1,&DAT_14cc0d130);
  }
LAB_149337afc:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 149337bd2 FUN_149337bd2 body=159 status=ok
// SIG undefined FUN_149337bd2(void)

undefined4 FUN_149337bd2(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetFrameCount");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149337c72 FUN_149337c72 body=159 status=ok
// SIG undefined FUN_149337c72(void)

undefined4 FUN_149337c72(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetFrameCount");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc13f(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149337d12 FUN_149337d12 body=158 status=ok
// SIG undefined FUN_149337d12(void)

undefined4 FUN_149337d12(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = param_2;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetPropertyTrack");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149337db1(param_1[5],param_1 + 0x18,local_38,&local_24);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149337db1 FUN_149337db1 body=260 status=ok
// SIG undefined FUN_149337db1(void)

ulonglong FUN_149337db1(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_14934b4a0(param_1,param_2,param_4);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
    }
    FUN_1444ba954(uVar2,&local_50,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149337eb6 FUN_149337eb6 body=159 status=ok
// SIG undefined FUN_149337eb6(void)

undefined4 FUN_149337eb6(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetPropertyTrack");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149337f56(param_1[5],param_1 + 0x18,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149337f56 FUN_149337f56 body=399 status=ok
// SIG undefined FUN_149337f56(void)

ulonglong FUN_149337f56(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_149337f88;
  }
  FUN_14934b6ec(&local_50,param_2,param_1);
  if (local_50 == 0) {
LAB_14933809b:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_50,local_48);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_50,local_48), iVar3 != 0xc))
    goto LAB_14933809b;
    uVar5 = 0x4000000;
    if (local_50 == 0) {
LAB_14933800b:
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_2 + 1);
      lVar6 = (longlong)local_58;
      pvVar1 = (void *)*param_2;
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar1,lVar6 * 2);
      }
      local_70 = (void *)0x0;
      local_68 = *(int *)(param_3 + 1);
      lVar6 = (longlong)local_68;
      pvVar1 = (void *)*param_3;
      if (lVar6 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,local_68,0);
        memcpy(local_70,pvVar1,lVar6 * 2);
      }
      FUN_1444ba954(uVar5,&local_70,&local_60);
      goto LAB_14933809b;
    }
    uVar5 = FUN_14934b8d2(local_50,local_48,param_4);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((uVar5 & 1) == 0) goto LAB_14933800b;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_149337f88:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1493380e6 FUN_1493380e6 body=159 status=ok
// SIG undefined FUN_1493380e6(void)

undefined4 FUN_1493380e6(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetTimeScale");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149338186 FUN_149338186 body=159 status=ok
// SIG undefined FUN_149338186(void)

undefined4 FUN_149338186(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetTimeScale");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149338226 FUN_149338226 body=156 status=ok
// SIG undefined FUN_149338226(void)

undefined4 FUN_149338226(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetDuration");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc13f(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493382c4 FUN_1493382c4 body=156 status=ok
// SIG undefined FUN_1493382c4(void)

undefined4 FUN_1493382c4(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetDuration");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149338362 FUN_149338362 body=156 status=ok
// SIG undefined FUN_149338362(void)

undefined4 FUN_149338362(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetStartFrame");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc13f(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149338400 FUN_149338400 body=156 status=ok
// SIG undefined FUN_149338400(void)

undefined4 FUN_149338400(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetStartFrame");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933849e FUN_14933849e body=159 status=ok
// SIG undefined FUN_14933849e(void)

undefined4 FUN_14933849e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetTrackSetDependencyUid");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbbee(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933853e FUN_14933853e body=159 status=ok
// SIG undefined FUN_14933853e(void)

undefined4 FUN_14933853e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetTrackSetDependencyUid");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bba6a(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493385de FUN_1493385de body=159 status=ok
// SIG undefined FUN_1493385de(void)

undefined4 FUN_1493385de(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetUsedChannels");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc13f(param_1[5],param_1 + 0x1a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933867e FUN_14933867e body=159 status=ok
// SIG undefined FUN_14933867e(void)

undefined4 FUN_14933867e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetUsedChannels");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 0x1a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933871e FUN_14933871e body=156 status=ok
// SIG undefined FUN_14933871e(void)

undefined4 FUN_14933871e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetSkeletonNodeUid");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bba6a(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493387bc FUN_1493387bc body=156 status=ok
// SIG undefined FUN_1493387bc(void)

undefined4 FUN_1493387bc(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetSkeletonNodeUid");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbbee(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933885a FUN_14933885a body=156 status=ok
// SIG undefined FUN_14933885a(void)

undefined4 FUN_14933885a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAnimationSampleRate");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc24a(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493388f8 FUN_1493388f8 body=156 status=ok
// SIG undefined FUN_1493388f8(void)

undefined4 FUN_1493388f8(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAnimationSampleRate");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc3ce(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149338996 FUN_149338996 body=159 status=ok
// SIG undefined FUN_149338996(void)

undefined4 FUN_149338996(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAnimationStartTime");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc24a(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149338a36 FUN_149338a36 body=159 status=ok
// SIG undefined FUN_149338a36(void)

undefined4 FUN_149338a36(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAnimationStartTime");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc3ce(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149338ad6 FUN_149338ad6 body=159 status=ok
// SIG undefined FUN_149338ad6(void)

undefined4 FUN_149338ad6(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAnimationStopTime");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc24a(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149338b76 FUN_149338b76 body=159 status=ok
// SIG undefined FUN_149338b76(void)

undefined4 FUN_149338b76(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAnimationStopTime");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc3ce(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149338c16 FUN_149338c16 body=193 status=ok
// SIG undefined FUN_149338c16(void)

void FUN_149338c16(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1492f8238(param_1 + 0xb0,local_78);
  FUN_146b4993e(param_2,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  FUN_149338cd8(param_1 + 0x128,local_78);
  FUN_149349160(param_3,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_149330dcc(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149338cd8 FUN_149338cd8 body=538 status=ok
// SIG undefined FUN_149338cd8(void)

undefined8 * FUN_149338cd8(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_c8 [47];
  undefined1 local_99;
  longlong local_98 [2];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2[4] = 0;
  iVar5 = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_14934b998(param_2,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar3)) {
      *(int *)(param_2 + 9) = iVar3;
      FUN_14934bb46(param_2);
    }
  }
  plVar1 = param_1 + 2;
  local_60 = (longlong *)&DAT_100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_60);
    iVar5 = (int)param_1[5];
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = param_1;
  if ((iStack_4c != iVar5) || (local_58 != plVar1)) {
    do {
      lVar2 = *local_88 + (longlong)iStack_6c * 0x48;
      local_98[0] = 0;
      local_98[1] = 0;
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        FUN_1492ff8ec(*(longlong *)(lVar2 + 0x10),lVar2 + 0x18,local_98);
      }
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        FUN_14930380a(*(longlong *)(lVar2 + 0x28),lVar2 + 0x30,&local_99);
      }
      local_60 = local_98;
      local_58 = (longlong *)&local_99;
      FUN_14934bd24(param_2,local_3c,&local_60,0);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_1 || (local_78 != plVar1 || iStack_6c != iVar5));
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149338ef4 FUN_149338ef4 body=204 status=ok
// SIG undefined FUN_149338ef4(void)

byte FUN_149338ef4(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_2 + 1);
  puVar7 = &DAT_149dfb77a;
  puVar6 = &DAT_149dfb77a;
  if (iVar1 != 0) {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar8 = 0;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = iVar8;
  }
  uVar4 = FUN_144a49b4a(iVar5,puVar6);
  bVar2 = FUN_149305dea(param_1 + 0xb0,uVar4,param_2,param_3);
  local_49 = *param_4;
  if (*(int *)(param_2 + 1) != 0) {
    puVar7 = (undefined2 *)*param_2;
    iVar8 = *(int *)(param_2 + 1) + -1;
  }
  uVar4 = FUN_144a49b4a(iVar8,puVar7);
  bVar3 = FUN_14934c15a(param_1 + 0x128,uVar4,param_2,&local_49);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar2 & bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149338fc2 FUN_149338fc2 body=193 status=ok
// SIG undefined FUN_149338fc2(void)

void FUN_149338fc2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1492f8238(param_1 + 0x1a0,local_78);
  FUN_146b4993e(param_2,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_78);
  FUN_149338cd8(param_1 + 0x218,local_78);
  FUN_149349160(param_3,local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_149330dcc(local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149339084 FUN_149339084 body=204 status=ok
// SIG undefined FUN_149339084(void)

byte FUN_149339084(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_2 + 1);
  puVar7 = &DAT_149dfb77a;
  puVar6 = &DAT_149dfb77a;
  if (iVar1 != 0) {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar8 = 0;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = iVar8;
  }
  uVar4 = FUN_144a49b4a(iVar5,puVar6);
  bVar2 = FUN_149305dea(param_1 + 0x1a0,uVar4,param_2,param_3);
  local_49 = *param_4;
  if (*(int *)(param_2 + 1) != 0) {
    puVar7 = (undefined2 *)*param_2;
    iVar8 = *(int *)(param_2 + 1) + -1;
  }
  uVar4 = FUN_144a49b4a(iVar8,puVar7);
  bVar3 = FUN_14934c15a(param_1 + 0x218,uVar4,param_2,&local_49);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar2 & bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149339152 FUN_149339152 body=133 status=ok
// SIG undefined FUN_149339152(void)

byte FUN_149339152(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = '\0';
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar2,puVar5);
  bVar3 = FUN_14934c564(param_1 + 0x128,uVar4,param_2,&local_21);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_21 == '\x04' & bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493391d8 FUN_1493391d8 body=32 status=ok
// SIG undefined FUN_1493391d8(void)

undefined8 FUN_1493391d8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"BaseLightNode");
  return param_2;
}



// FUNCTION 1493391f8 FUN_1493391f8 body=156 status=ok
// SIG undefined FUN_1493391f8(void)

undefined4 FUN_1493391f8(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetLightColor");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149339295(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149339295 FUN_149339295 body=399 status=ok
// SIG undefined FUN_149339295(void)

ulonglong FUN_149339295(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_1493392c7;
  }
  FUN_1444bdc8e(&local_50,param_2,param_1);
  if (local_50 == 0) {
LAB_1493393da:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_50,local_48);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_50,local_48), iVar3 != 0xf))
    goto LAB_1493393da;
    uVar5 = 0x4000000;
    if (local_50 == 0) {
LAB_14933934a:
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_2 + 1);
      lVar6 = (longlong)local_58;
      pvVar1 = (void *)*param_2;
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar1,lVar6 * 2);
      }
      local_70 = (void *)0x0;
      local_68 = *(int *)(param_3 + 1);
      lVar6 = (longlong)local_68;
      pvVar1 = (void *)*param_3;
      if (lVar6 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,local_68,0);
        memcpy(local_70,pvVar1,lVar6 * 2);
      }
      FUN_1444ba954(uVar5,&local_70,&local_60);
      goto LAB_1493393da;
    }
    uVar5 = FUN_149303428(local_50,local_48,param_4);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((uVar5 & 1) == 0) goto LAB_14933934a;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_1493392c7:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 149339426 FUN_149339426 body=156 status=ok
// SIG undefined FUN_149339426(void)

undefined4 FUN_149339426(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetLightColor");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493394c3(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493394c3 FUN_1493394c3 body=263 status=ok
// SIG undefined FUN_1493394c3(void)

ulonglong FUN_1493394c3(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_1493031d6(param_1,param_2,param_4,0);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
    }
    FUN_1444ba954(uVar2,&local_50,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493395cc FUN_1493395cc body=156 status=ok
// SIG undefined FUN_1493395cc(void)

undefined4 FUN_1493395cc(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetLightIntensity");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933966a FUN_14933966a body=157 status=ok
// SIG undefined FUN_14933966a(void)

undefined4 FUN_14933966a(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = param_2;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetLightIntensity");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0xe,local_38,&local_24);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149339708 FUN_149339708 body=156 status=ok
// SIG undefined FUN_149339708(void)

undefined4 FUN_149339708(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetTemperature");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493397a6 FUN_1493397a6 body=157 status=ok
// SIG undefined FUN_1493397a6(void)

undefined4 FUN_1493397a6(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = param_2;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetTemperature");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x10,local_38,&local_24);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149339844 FUN_149339844 body=159 status=ok
// SIG undefined FUN_149339844(void)

undefined4 FUN_149339844(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetUseTemperature");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493398e4 FUN_1493398e4 body=158 status=ok
// SIG undefined FUN_1493398e4(void)

undefined4 FUN_1493398e4(longlong *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_21 = param_2;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetUseTemperature");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x12,local_38,&local_21);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149339984 FUN_149339984 body=32 status=ok
// SIG undefined FUN_149339984(void)

undefined8 FUN_149339984(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"LightNode");
  return param_2;
}



// FUNCTION 1493399a4 FUN_1493399a4 body=159 status=ok
// SIG undefined FUN_1493399a4(void)

undefined4 FUN_1493399a4(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetIntensityUnits");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149339a44(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149339a44 FUN_149339a44 body=399 status=ok
// SIG undefined FUN_149339a44(void)

ulonglong FUN_149339a44(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_149339a76;
  }
  FUN_14934c616(&local_50,param_2,param_1);
  if (local_50 == 0) {
LAB_149339b89:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_50,local_48);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_50,local_48), iVar3 != 0x15))
    goto LAB_149339b89;
    uVar5 = 0x4000000;
    if (local_50 == 0) {
LAB_149339af9:
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_2 + 1);
      lVar6 = (longlong)local_58;
      pvVar1 = (void *)*param_2;
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar1,lVar6 * 2);
      }
      local_70 = (void *)0x0;
      local_68 = *(int *)(param_3 + 1);
      lVar6 = (longlong)local_68;
      pvVar1 = (void *)*param_3;
      if (lVar6 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,local_68,0);
        memcpy(local_70,pvVar1,lVar6 * 2);
      }
      FUN_1444ba954(uVar5,&local_70,&local_60);
      goto LAB_149339b89;
    }
    uVar5 = FUN_14934c7fc(local_50,local_48,param_4);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((uVar5 & 1) == 0) goto LAB_149339af9;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_149339a76:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 149339bd4 FUN_149339bd4 body=159 status=ok
// SIG undefined FUN_149339bd4(void)

undefined4 FUN_149339bd4(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetIntensityUnits");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149339c74(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149339c74 FUN_149339c74 body=260 status=ok
// SIG undefined FUN_149339c74(void)

ulonglong FUN_149339c74(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_14934c8c2(param_1,param_2,param_4);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
    }
    FUN_1444ba954(uVar2,&local_50,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149339d7a FUN_149339d7a body=159 status=ok
// SIG undefined FUN_149339d7a(void)

undefined4 FUN_149339d7a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAttenuationRadius");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x16,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149339e1a FUN_149339e1a body=160 status=ok
// SIG undefined FUN_149339e1a(void)

undefined4 FUN_149339e1a(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = param_2;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAttenuationRadius");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x16,local_38,&local_24);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149339ebc FUN_149339ebc body=159 status=ok
// SIG undefined FUN_149339ebc(void)

undefined4 FUN_149339ebc(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetIESTexture");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bba6a(param_1[5],param_1 + 0x18,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149339f5c FUN_149339f5c body=159 status=ok
// SIG undefined FUN_149339f5c(void)

undefined4 FUN_149339f5c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetIESTexture");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbbee(param_1[5],param_1 + 0x18,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149339ffc FUN_149339ffc body=159 status=ok
// SIG undefined FUN_149339ffc(void)

undefined4 FUN_149339ffc(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetUseIESBrightness");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x1a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933a09c FUN_14933a09c body=159 status=ok
// SIG undefined FUN_14933a09c(void)

undefined4 FUN_14933a09c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetUseIESBrightness");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x1a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14933a13c FUN_14933a13c body=159 status=ok
// SIG undefined FUN_14933a13c(void)

undefined4 FUN_14933a13c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetIESBrightnessScale");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x1c,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


