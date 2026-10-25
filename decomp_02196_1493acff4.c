// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1493acff4 FUN_1493acff4 body=172 status=ok
// SIG undefined FUN_1493acff4(void)

void FUN_1493acff4(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493ad0a2(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ad0a2 FUN_1493ad0a2 body=159 status=ok
// SIG undefined FUN_1493ad0a2(void)

undefined4 FUN_1493ad0a2(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetCompositeTextureMode");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493971bd(param_1[5],param_1 + 0x76,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ad14c FUN_1493ad14c body=172 status=ok
// SIG undefined FUN_1493ad14c(void)

void FUN_1493ad14c(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493ad1fa(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ad1fa FUN_1493ad1fa body=159 status=ok
// SIG undefined FUN_1493ad1fa(void)

undefined4 FUN_1493ad1fa(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetCompressionNoAlpha");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x46,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ad2a0 FUN_1493ad2a0 body=172 status=ok
// SIG undefined FUN_1493ad2a0(void)

void FUN_1493ad2a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493ad34e(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ad34e FUN_1493ad34e body=159 status=ok
// SIG undefined FUN_1493ad34e(void)

undefined4 FUN_1493ad34e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetCompressionQuality");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493971bd(param_1[5],param_1 + 0x4e,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ad3f4 FUN_1493ad3f4 body=172 status=ok
// SIG undefined FUN_1493ad3f4(void)

void FUN_1493ad3f4(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493ad4a2(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ad4a2 FUN_1493ad4a2 body=159 status=ok
// SIG undefined FUN_1493ad4a2(void)

undefined4 FUN_1493ad4a2(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetCompressionSettings");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493971bd(param_1[5],param_1 + 0x50,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ad54c FUN_1493ad54c body=172 status=ok
// SIG undefined FUN_1493ad54c(void)

void FUN_1493ad54c(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493ad5fa(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ad5fa FUN_1493ad5fa body=159 status=ok
// SIG undefined FUN_1493ad5fa(void)

undefined4 FUN_1493ad5fa(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetDeferCompression");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x48,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ad6a0 FUN_1493ad6a0 body=175 status=ok
// SIG undefined FUN_1493ad6a0(void)

void FUN_1493ad6a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493ab0bc(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ad756 FUN_1493ad756 body=172 status=ok
// SIG undefined FUN_1493ad756(void)

void FUN_1493ad756(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493ad804(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ad804 FUN_1493ad804 body=159 status=ok
// SIG undefined FUN_1493ad804(void)

undefined4 FUN_1493ad804(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetDownscaleOptions");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493971bd(param_1[5],param_1 + 0x74,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ad8aa FUN_1493ad8aa body=172 status=ok
// SIG undefined FUN_1493ad8aa(void)

void FUN_1493ad8aa(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493ad958(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ad958 FUN_1493ad958 body=159 status=ok
// SIG undefined FUN_1493ad958(void)

undefined4 FUN_1493ad958(longlong *param_1,undefined8 param_2)

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
  uVar1 = FUN_1493971bd(param_1[5],param_1 + 0x5e,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ad9fe FUN_1493ad9fe body=175 status=ok
// SIG undefined FUN_1493ad9fe(void)

void FUN_1493ad9fe(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493adaae(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493adaae FUN_1493adaae body=159 status=ok
// SIG undefined FUN_1493adaae(void)

undefined4 FUN_1493adaae(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetLODBias");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 0x6e,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493adb54 FUN_1493adb54 body=172 status=ok
// SIG undefined FUN_1493adb54(void)

void FUN_1493adb54(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493adc02(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493adc02 FUN_1493adc02 body=159 status=ok
// SIG undefined FUN_1493adc02(void)

undefined4 FUN_1493adc02(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetLODGroup");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493971bd(param_1[5],param_1 + 0x70,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493adca8 FUN_1493adca8 body=172 status=ok
// SIG undefined FUN_1493adca8(void)

void FUN_1493adca8(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493add56(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493add56 FUN_1493add56 body=159 status=ok
// SIG undefined FUN_1493add56(void)

undefined4 FUN_1493add56(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetLossyCompressionAmount");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493971bd(param_1[5],param_1 + 0x4a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493addfc FUN_1493addfc body=175 status=ok
// SIG undefined FUN_1493addfc(void)

void FUN_1493addfc(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493adeac(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493adeac FUN_1493adeac body=159 status=ok
// SIG undefined FUN_1493adeac(void)

undefined4 FUN_1493adeac(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetMaxTextureSize");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 0x4c,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493adf52 FUN_1493adf52 body=172 status=ok
// SIG undefined FUN_1493adf52(void)

void FUN_1493adf52(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493ae000(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ae000 FUN_1493ae000 body=159 status=ok
// SIG undefined FUN_1493ae000(void)

undefined4 FUN_1493ae000(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetMipGenSettings");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493971bd(param_1[5],param_1 + 0x6c,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ae0a6 FUN_1493ae0a6 body=172 status=ok
// SIG undefined FUN_1493ae0a6(void)

void FUN_1493ae0a6(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493ae154(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ae154 FUN_1493ae154 body=159 status=ok
// SIG undefined FUN_1493ae154(void)

undefined4 FUN_1493ae154(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetMipLoadOptions");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493971bd(param_1[5],param_1 + 0x60,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ae1fa FUN_1493ae1fa body=167 status=ok
// SIG undefined FUN_1493ae1fa(void)

void FUN_1493ae1fa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  puVar2 = local_24;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493ae2a2(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ae2a2 FUN_1493ae2a2 body=159 status=ok
// SIG undefined FUN_1493ae2a2(void)

undefined4 FUN_1493ae2a2(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetPaddingColor");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149381a82(param_1[5],param_1 + 0x5c,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ae348 FUN_1493ae348 body=172 status=ok
// SIG undefined FUN_1493ae348(void)

void FUN_1493ae348(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493ae3f6(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ae3f6 FUN_1493ae3f6 body=159 status=ok
// SIG undefined FUN_1493ae3f6(void)

undefined4 FUN_1493ae3f6(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetPowerOfTwoMode");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493971bd(param_1[5],param_1 + 0x5a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ae4a0 FUN_1493ae4a0 body=172 status=ok
// SIG undefined FUN_1493ae4a0(void)

void FUN_1493ae4a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493ae54e(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ae54e FUN_1493ae54e body=159 status=ok
// SIG undefined FUN_1493ae54e(void)

undefined4 FUN_1493ae54e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetPreferCompressedSourceData");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x7c,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ae5f8 FUN_1493ae5f8 body=172 status=ok
// SIG undefined FUN_1493ae5f8(void)

void FUN_1493ae5f8(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493ae6a6(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ae6a6 FUN_1493ae6a6 body=159 status=ok
// SIG undefined FUN_1493ae6a6(void)

undefined4 FUN_1493ae6a6(longlong *param_1,undefined8 param_2)

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
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x62,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ae74c FUN_1493ae74c body=189 status=ok
// SIG undefined FUN_1493ae74c(void)

void FUN_1493ae74c(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493ae80a(param_1,plVar2);
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



// FUNCTION 1493ae80a FUN_1493ae80a body=159 status=ok
// SIG undefined FUN_1493ae80a(void)

undefined4 FUN_1493ae80a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetTranslatedTextureNodeUid");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bba6a(param_1[5],param_1 + 0x2e,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ae8b4 FUN_1493ae8b4 body=172 status=ok
// SIG undefined FUN_1493ae8b4(void)

void FUN_1493ae8b4(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493ae962(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ae962 FUN_1493ae962 body=159 status=ok
// SIG undefined FUN_1493ae962(void)

undefined4 FUN_1493ae962(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetVirtualTextureStreaming");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x66,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493aea02 FUN_1493aea02 body=42 status=ok
// SIG undefined FUN_1493aea02(void)

void FUN_1493aea02(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2e8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1493aea2c FUN_1493aea2c body=351 status=ok
// SIG undefined FUN_1493aea2c(void)

void FUN_1493aea2c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48 [7];
  
  local_48[6] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[4] = 0;
  local_48[5] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 4);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1493aeb8c(param_1,local_48 + 4,local_48 + 2,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[6] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493aeb8c FUN_1493aeb8c body=162 status=ok
// SIG undefined FUN_1493aeb8c(void)

void FUN_1493aeb8c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1444ba64e();
  (**(code **)(*param_1 + 0x2a0))(param_1,local_40);
  FUN_144a882a8(local_30,local_40,L".SetAssetName");
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1444bbbee(param_1[5],param_1 + 0x2c,local_30,param_4);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493aec3c FUN_1493aec3c body=249 status=ok
// SIG undefined FUN_1493aec3c(void)

void FUN_1493aec3c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_2c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1493aed36(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493aed36 FUN_1493aed36 body=159 status=ok
// SIG undefined FUN_1493aed36(void)

undefined4 FUN_1493aed36(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAdjustBrightness");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x30,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493aede2 FUN_1493aede2 body=249 status=ok
// SIG undefined FUN_1493aede2(void)

void FUN_1493aede2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_2c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1493aeedc(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493aeedc FUN_1493aeedc body=159 status=ok
// SIG undefined FUN_1493aeedc(void)

undefined4 FUN_1493aeedc(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAdjustBrightnessCurve");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x32,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493aef88 FUN_1493aef88 body=249 status=ok
// SIG undefined FUN_1493aef88(void)

void FUN_1493aef88(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_2c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1493af082(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493af082 FUN_1493af082 body=159 status=ok
// SIG undefined FUN_1493af082(void)

undefined4 FUN_1493af082(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAdjustHue");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x3a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493af12e FUN_1493af12e body=249 status=ok
// SIG undefined FUN_1493af12e(void)

void FUN_1493af12e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_2c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1493af228(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493af228 FUN_1493af228 body=159 status=ok
// SIG undefined FUN_1493af228(void)

undefined4 FUN_1493af228(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAdjustMaxAlpha");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x3e,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493af2d4 FUN_1493af2d4 body=249 status=ok
// SIG undefined FUN_1493af2d4(void)

void FUN_1493af2d4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_2c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1493af3ce(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493af3ce FUN_1493af3ce body=159 status=ok
// SIG undefined FUN_1493af3ce(void)

undefined4 FUN_1493af3ce(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAdjustMinAlpha");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x3c,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493af47a FUN_1493af47a body=249 status=ok
// SIG undefined FUN_1493af47a(void)

void FUN_1493af47a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_2c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1493af574(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493af574 FUN_1493af574 body=159 status=ok
// SIG undefined FUN_1493af574(void)

undefined4 FUN_1493af574(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAdjustRGBCurve");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x38,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493af620 FUN_1493af620 body=249 status=ok
// SIG undefined FUN_1493af620(void)

void FUN_1493af620(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_2c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1493af71a(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493af71a FUN_1493af71a body=159 status=ok
// SIG undefined FUN_1493af71a(void)

undefined4 FUN_1493af71a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAdjustSaturation");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x36,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493af7c6 FUN_1493af7c6 body=249 status=ok
// SIG undefined FUN_1493af7c6(void)

void FUN_1493af7c6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_2c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1493af8c0(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493af8c0 FUN_1493af8c0 body=159 status=ok
// SIG undefined FUN_1493af8c0(void)

undefined4 FUN_1493af8c0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAdjustVibrance");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x34,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493af96a FUN_1493af96a body=172 status=ok
// SIG undefined FUN_1493af96a(void)

void FUN_1493af96a(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493afa18(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493afa18 FUN_1493afa18 body=159 status=ok
// SIG undefined FUN_1493afa18(void)

undefined4 FUN_1493afa18(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAllowNonPowerOfTwo");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x7a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493afac4 FUN_1493afac4 body=270 status=ok
// SIG undefined FUN_1493afac4(void)

void FUN_1493afac4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar3 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1493afbd4(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493afbd4 FUN_1493afbd4 body=159 status=ok
// SIG undefined FUN_1493afbd4(void)

undefined4 FUN_1493afbd4(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAlphaCoverageThresholds");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493b3163(param_1[5],param_1 + 0x54,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493afc84 FUN_1493afc84 body=246 status=ok
// SIG undefined FUN_1493afc84(void)

void FUN_1493afc84(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
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
  uVar2 = FUN_1493afd7c(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493afd7c FUN_1493afd7c body=159 status=ok
// SIG undefined FUN_1493afd7c(void)

undefined4 FUN_1493afd7c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetbChromaKeyTexture");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x40,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493afe2c FUN_1493afe2c body=246 status=ok
// SIG undefined FUN_1493afe2c(void)

void FUN_1493afe2c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
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
  uVar2 = FUN_1493aff24(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493aff24 FUN_1493aff24 body=159 status=ok
// SIG undefined FUN_1493aff24(void)

undefined4 FUN_1493aff24(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetbDoScaleMipsForAlphaCoverage");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x52,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493affd4 FUN_1493affd4 body=255 status=ok
// SIG undefined FUN_1493affd4(void)

void FUN_1493affd4(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar2 = FUN_1493b00d4(param_1,puVar3,local_30 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b00d4 FUN_1493b00d4 body=159 status=ok
// SIG undefined FUN_1493b00d4(void)

undefined4 FUN_1493b00d4(longlong *param_1,undefined8 param_2)

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
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x56,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b0184 FUN_1493b0184 body=246 status=ok
// SIG undefined FUN_1493b0184(void)

void FUN_1493b0184(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
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
  uVar2 = FUN_1493b027c(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b027c FUN_1493b027c body=159 status=ok
// SIG undefined FUN_1493b027c(void)

undefined4 FUN_1493b027c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetbPreserveBorder");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x6a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b032c FUN_1493b032c body=246 status=ok
// SIG undefined FUN_1493b032c(void)

void FUN_1493b032c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
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
  uVar2 = FUN_1493b0424(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b0424 FUN_1493b0424 body=159 status=ok
// SIG undefined FUN_1493b0424(void)

undefined4 FUN_1493b0424(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetbUseLegacyGamma");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 100,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b04d0 FUN_1493b04d0 body=241 status=ok
// SIG undefined FUN_1493b04d0(void)

void FUN_1493b04d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
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
  puVar3 = local_2c;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1493b05c2(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b05c2 FUN_1493b05c2 body=159 status=ok
// SIG undefined FUN_1493b05c2(void)

undefined4 FUN_1493b05c2(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetChromaKeyColor");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149381cf2(param_1[5],param_1 + 0x44,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b066e FUN_1493b066e body=249 status=ok
// SIG undefined FUN_1493b066e(void)

void FUN_1493b066e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_2c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1493b0768(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b0768 FUN_1493b0768 body=159 status=ok
// SIG undefined FUN_1493b0768(void)

undefined4 FUN_1493b0768(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetChromaKeyThreshold");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x42,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b0814 FUN_1493b0814 body=231 status=ok
// SIG undefined FUN_1493b0814(void)

void FUN_1493b0814(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  FUN_144a7add4();
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
  uVar1 = FUN_1493b08fc(param_1,local_21,0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b08fc FUN_1493b08fc body=158 status=ok
// SIG undefined FUN_1493b08fc(void)

undefined4 FUN_1493b08fc(longlong *param_1,undefined1 param_2)

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
  FUN_144a882a8(local_38,local_48,L".SetColorSpace");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493b2ecb(param_1[5],param_1 + 0x68,local_38,&local_21);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b09a8 FUN_1493b09a8 body=249 status=ok
// SIG undefined FUN_1493b09a8(void)

void FUN_1493b09a8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_2c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1493b0aa2(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b0aa2 FUN_1493b0aa2 body=159 status=ok
// SIG undefined FUN_1493b0aa2(void)

undefined4 FUN_1493b0aa2(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetCompositePower");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331d89(param_1[5],param_1 + 0x78,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b0b4e FUN_1493b0b4e body=246 status=ok
// SIG undefined FUN_1493b0b4e(void)

void FUN_1493b0b4e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
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
  uVar2 = FUN_1493b0c46(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b0c46 FUN_1493b0c46 body=159 status=ok
// SIG undefined FUN_1493b0c46(void)

undefined4 FUN_1493b0c46(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetCompositeTextureMode");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14939734d(param_1[5],param_1 + 0x76,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b0cf6 FUN_1493b0cf6 body=246 status=ok
// SIG undefined FUN_1493b0cf6(void)

void FUN_1493b0cf6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
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
  uVar2 = FUN_1493b0dee(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b0dee FUN_1493b0dee body=159 status=ok
// SIG undefined FUN_1493b0dee(void)

undefined4 FUN_1493b0dee(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetCompressionNoAlpha");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x46,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b0e9a FUN_1493b0e9a body=246 status=ok
// SIG undefined FUN_1493b0e9a(void)

void FUN_1493b0e9a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
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
  uVar2 = FUN_1493b0f92(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b0f92 FUN_1493b0f92 body=159 status=ok
// SIG undefined FUN_1493b0f92(void)

undefined4 FUN_1493b0f92(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetCompressionQuality");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14939734d(param_1[5],param_1 + 0x4e,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b103e FUN_1493b103e body=255 status=ok
// SIG undefined FUN_1493b103e(void)

void FUN_1493b103e(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar2 = FUN_1493b113e(param_1,puVar3,local_30 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b113e FUN_1493b113e body=223 status=ok
// SIG undefined FUN_1493b113e(void)

undefined4 FUN_1493b113e(longlong *param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetCompressionSettings");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14939734d(param_1[5],param_1 + 0x50,local_38,param_2);
  if ((param_3 & (byte)uVar1) == 1) {
    FUN_1446f470e(local_48,L"CompressionSettings",1);
    uVar2 = FUN_144a7937e();
    FUN_1492fe21a(param_1,param_1 + 0x50,uVar2,local_48[0]);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b122e FUN_1493b122e body=246 status=ok
// SIG undefined FUN_1493b122e(void)

void FUN_1493b122e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
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
  uVar2 = FUN_1493b1326(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b1326 FUN_1493b1326 body=159 status=ok
// SIG undefined FUN_1493b1326(void)

undefined4 FUN_1493b1326(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetDeferCompression");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x48,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b13d2 FUN_1493b13d2 body=258 status=ok
// SIG undefined FUN_1493b13d2(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1493b13d2(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar2 = FUN_1493ab3d8(param_1,piVar3,local_30[0] != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b14e2 FUN_1493b14e2 body=255 status=ok
// SIG undefined FUN_1493b14e2(void)

void FUN_1493b14e2(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar2 = FUN_1493b15e2(param_1,puVar3,local_30 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b15e2 FUN_1493b15e2 body=223 status=ok
// SIG undefined FUN_1493b15e2(void)

undefined4 FUN_1493b15e2(longlong *param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetDownscaleOptions");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14939734d(param_1[5],param_1 + 0x74,local_38,param_2);
  if ((param_3 & (byte)uVar1) == 1) {
    FUN_1446f470e(local_48,L"DownscaleOptions",1);
    uVar2 = FUN_144a7937e();
    FUN_1492fe21a(param_1,param_1 + 0x74,uVar2,local_48[0]);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b16ce FUN_1493b16ce body=255 status=ok
// SIG undefined FUN_1493b16ce(void)

void FUN_1493b16ce(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar2 = FUN_1493b17ce(param_1,puVar3,local_30 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b17ce FUN_1493b17ce body=223 status=ok
// SIG undefined FUN_1493b17ce(void)

undefined4 FUN_1493b17ce(longlong *param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
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
  uVar1 = FUN_14939734d(param_1[5],param_1 + 0x5e,local_38,param_2);
  if ((param_3 & (byte)uVar1) == 1) {
    FUN_1446f470e(local_48,L"Filter",1);
    uVar2 = FUN_144a7937e();
    FUN_1492fe21a(param_1,param_1 + 0x5e,uVar2,local_48[0]);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b18ba FUN_1493b18ba body=258 status=ok
// SIG undefined FUN_1493b18ba(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1493b18ba(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar2 = FUN_1493b19be(param_1,piVar3,local_30[0] != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b19be FUN_1493b19be body=223 status=ok
// SIG undefined FUN_1493b19be(void)

undefined4 FUN_1493b19be(longlong *param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetLODBias");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc13f(param_1[5],param_1 + 0x6e,local_38,param_2);
  if ((param_3 & (byte)uVar1) == 1) {
    FUN_1446f470e(local_48,L"LODBias",1);
    uVar2 = FUN_144a7937e();
    FUN_1492fdf66(param_1,param_1 + 0x6e,uVar2,local_48[0]);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b1aaa FUN_1493b1aaa body=255 status=ok
// SIG undefined FUN_1493b1aaa(void)

void FUN_1493b1aaa(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar2 = FUN_1493b1baa(param_1,puVar3,local_30 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b1baa FUN_1493b1baa body=223 status=ok
// SIG undefined FUN_1493b1baa(void)

undefined4 FUN_1493b1baa(longlong *param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetLODGroup");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14939734d(param_1[5],param_1 + 0x70,local_38,param_2);
  if ((param_3 & (byte)uVar1) == 1) {
    FUN_1446f470e(local_48,L"LODGroup",1);
    uVar2 = FUN_144a7937e();
    FUN_1492fe21a(param_1,param_1 + 0x70,uVar2,local_48[0]);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b1c96 FUN_1493b1c96 body=246 status=ok
// SIG undefined FUN_1493b1c96(void)

void FUN_1493b1c96(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
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
  uVar2 = FUN_1493b1d8e(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b1d8e FUN_1493b1d8e body=159 status=ok
// SIG undefined FUN_1493b1d8e(void)

undefined4 FUN_1493b1d8e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetLossyCompressionAmount");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14939734d(param_1[5],param_1 + 0x4a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b1e3a FUN_1493b1e3a body=249 status=ok
// SIG undefined FUN_1493b1e3a(void)

void FUN_1493b1e3a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_2c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1493b1f34(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b1f34 FUN_1493b1f34 body=159 status=ok
// SIG undefined FUN_1493b1f34(void)

undefined4 FUN_1493b1f34(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetMaxTextureSize");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc13f(param_1[5],param_1 + 0x4c,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b1fe0 FUN_1493b1fe0 body=246 status=ok
// SIG undefined FUN_1493b1fe0(void)

void FUN_1493b1fe0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
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
  uVar2 = FUN_1493b20d8(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b20d8 FUN_1493b20d8 body=159 status=ok
// SIG undefined FUN_1493b20d8(void)

undefined4 FUN_1493b20d8(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetMipGenSettings");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14939734d(param_1[5],param_1 + 0x6c,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b2184 FUN_1493b2184 body=255 status=ok
// SIG undefined FUN_1493b2184(void)

void FUN_1493b2184(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar2 = FUN_1493b2284(param_1,puVar3,local_30 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b2284 FUN_1493b2284 body=223 status=ok
// SIG undefined FUN_1493b2284(void)

undefined4 FUN_1493b2284(longlong *param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetMipLoadOptions");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14939734d(param_1[5],param_1 + 0x60,local_38,param_2);
  if ((param_3 & (byte)uVar1) == 1) {
    FUN_1446f470e(local_48,L"MipLoadOptions",1);
    uVar2 = FUN_144a7937e();
    FUN_1492fe21a(param_1,param_1 + 0x60,uVar2,local_48[0]);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b2370 FUN_1493b2370 body=241 status=ok
// SIG undefined FUN_1493b2370(void)

void FUN_1493b2370(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
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
  puVar3 = local_2c;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1493b2462(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b2462 FUN_1493b2462 body=159 status=ok
// SIG undefined FUN_1493b2462(void)

undefined4 FUN_1493b2462(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetPaddingColor");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149381cf2(param_1[5],param_1 + 0x5c,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b250e FUN_1493b250e body=246 status=ok
// SIG undefined FUN_1493b250e(void)

void FUN_1493b250e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
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
  uVar2 = FUN_1493b2606(param_1,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b2606 FUN_1493b2606 body=159 status=ok
// SIG undefined FUN_1493b2606(void)

undefined4 FUN_1493b2606(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetPowerOfTwoMode");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14939734d(param_1[5],param_1 + 0x5a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b26b0 FUN_1493b26b0 body=172 status=ok
// SIG undefined FUN_1493b26b0(void)

void FUN_1493b26b0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493b275e(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b275e FUN_1493b275e body=159 status=ok
// SIG undefined FUN_1493b275e(void)

undefined4 FUN_1493b275e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetPreferCompressedSourceData");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x7c,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b280e FUN_1493b280e body=255 status=ok
// SIG undefined FUN_1493b280e(void)

void FUN_1493b280e(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar2 = FUN_1493b290e(param_1,puVar3,local_30 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b290e FUN_1493b290e body=223 status=ok
// SIG undefined FUN_1493b290e(void)

undefined4 FUN_1493b290e(longlong *param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
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
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x62,local_38,param_2);
  if ((param_3 & (byte)uVar1) == 1) {
    FUN_1446f470e(local_48,L"SRGB",1);
    uVar2 = FUN_144a7937e();
    FUN_1492fdcb2(param_1,param_1 + 0x62,uVar2,local_48[0]);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b29f4 FUN_1493b29f4 body=178 status=ok
// SIG undefined FUN_1493b29f4(void)

void FUN_1493b29f4(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493b2aa8(param_1,local_38);
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



// FUNCTION 1493b2aa8 FUN_1493b2aa8 body=159 status=ok
// SIG undefined FUN_1493b2aa8(void)

undefined4 FUN_1493b2aa8(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetTranslatedTextureNodeUid");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbbee(param_1[5],param_1 + 0x2e,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b2b58 FUN_1493b2b58 body=255 status=ok
// SIG undefined FUN_1493b2b58(void)

void FUN_1493b2b58(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar2 = FUN_1493b2c58(param_1,puVar3,local_30 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b2c58 FUN_1493b2c58 body=223 status=ok
// SIG undefined FUN_1493b2c58(void)

undefined4 FUN_1493b2c58(longlong *param_1,undefined8 param_2,byte param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetVirtualTextureStreaming");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x66,local_38,param_2);
  if ((param_3 & (byte)uVar1) == 1) {
    FUN_1446f470e(local_48,L"VirtualTextureStreaming",1);
    uVar2 = FUN_144a7937e();
    FUN_1492fdcb2(param_1,param_1 + 0x66,uVar2,local_48[0]);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b2d3b FUN_1493b2d3b body=399 status=ok
// SIG undefined FUN_1493b2d3b(void)

ulonglong FUN_1493b2d3b(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
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
    goto LAB_1493b2d6d;
  }
  FUN_1493b326c(&local_50,param_2,param_1);
  if (local_50 == 0) {
LAB_1493b2e80:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_50,local_48);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_50,local_48), iVar3 != 0x15))
    goto LAB_1493b2e80;
    uVar5 = 0x4000000;
    if (local_50 == 0) {
LAB_1493b2df0:
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
      goto LAB_1493b2e80;
    }
    uVar5 = FUN_1493b3452(local_50,local_48,param_4);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((uVar5 & 1) == 0) goto LAB_1493b2df0;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_1493b2d6d:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1493b2ecb FUN_1493b2ecb body=260 status=ok
// SIG undefined FUN_1493b2ecb(void)

ulonglong FUN_1493b2ecb(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
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
  uVar2 = FUN_1493b3518(param_1,param_2,param_4);
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



// FUNCTION 1493b2fd3 FUN_1493b2fd3 body=399 status=ok
// SIG undefined FUN_1493b2fd3(void)

ulonglong FUN_1493b2fd3(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
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
    goto LAB_1493b3005;
  }
  FUN_1444c127c(&local_50,param_2,param_1);
  if (local_50 == 0) {
LAB_1493b3118:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_50,local_48);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_50,local_48), iVar3 != 0x31))
    goto LAB_1493b3118;
    uVar5 = 0x4000000;
    if (local_50 == 0) {
LAB_1493b3088:
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
      goto LAB_1493b3118;
    }
    uVar5 = FUN_14930cd2a(local_50,local_48,param_4);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((uVar5 & 1) == 0) goto LAB_1493b3088;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_1493b3005:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1493b3163 FUN_1493b3163 body=263 status=ok
// SIG undefined FUN_1493b3163(void)

ulonglong FUN_1493b3163(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
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
  uVar2 = FUN_149308a8a(param_1,param_2,param_4,0);
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



// FUNCTION 1493b326c FUN_1493b326c body=485 status=ok
// SIG undefined FUN_1493b326c(void)

longlong * FUN_1493b326c(longlong *param_1,undefined8 param_2,longlong param_3)

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
    if (iVar4 == 0x15) goto LAB_1493b33ff;
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
LAB_1493b33ff:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b3452 FUN_1493b3452 body=198 status=ok
// SIG undefined FUN_1493b3452(void)

undefined8 FUN_1493b3452(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

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



// FUNCTION 1493b3518 FUN_1493b3518 body=378 status=ok
// SIG undefined FUN_1493b3518(void)

ulonglong FUN_1493b3518(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
LAB_1493b35ef:
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
    if (lVar5 == 0) goto LAB_1493b35ef;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0x15) goto LAB_1493b35bc;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_1493b35bc;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_1493b3694(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_1493b35bc:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b3694 FUN_1493b3694 body=202 status=ok
// SIG undefined FUN_1493b3694(void)

undefined8 FUN_1493b3694(longlong param_1,longlong *param_2,undefined1 *param_3)

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



// FUNCTION 1493b3780 FUN_1493b3780 body=322 status=ok
// SIG undefined FUN_1493b3780(void)

undefined8 FUN_1493b3780(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  longlong *local_98 [2];
  longlong local_88 [2];
  longlong **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_58 [4];
  longlong *local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140056680(local_88,L"MeshName");
  FUN_140009b9a(local_98,param_1 + 0x70);
  local_58[0] = 4;
  FUN_14023423e(&local_48,local_98);
  local_78 = &local_38;
  local_30 = local_58;
  local_70 = &local_28;
  local_38 = local_88;
  FUN_1493b38c4(&local_68);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
    local_48 = (longlong *)0x0;
    local_40 = 0;
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14023409e(local_a8,param_1 + 0x80,1);
  FUN_140233c04(param_2,local_a8,&local_68);
  FUN_14010f8af(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b38c4 FUN_1493b38c4 body=105 status=ok
// SIG undefined FUN_1493b38c4(void)

undefined8 * FUN_1493b38c4(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar3 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)param_2[1];
  uVar2 = (ulonglong)((longlong)puVar4 - (longlong)puVar3) >> 4;
  iVar1 = (int)uVar2;
  if (-1 < iVar1) {
    if (iVar1 != 0) {
      FUN_14598e1ac(param_1);
      puVar3 = (undefined8 *)*param_2;
      puVar4 = (undefined8 *)param_2[1];
    }
    for (; puVar3 != puVar4; puVar3 = puVar3 + 2) {
      FUN_14705906e(param_1,*puVar3,puVar3[1]);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar2 & 0xffffffff);
}



// FUNCTION 1493b392e FUN_1493b392e body=322 status=ok
// SIG undefined FUN_1493b392e(void)

undefined8 FUN_1493b392e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  longlong *local_98 [2];
  longlong local_88 [2];
  longlong **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_58 [4];
  longlong *local_48;
  undefined4 local_40;
  longlong *local_38;
  undefined4 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140056680(local_88,L"MeshName");
  FUN_140009b9a(local_98,param_1 + 0x70);
  local_58[0] = 4;
  FUN_14023423e(&local_48,local_98);
  local_78 = &local_38;
  local_30 = local_58;
  local_70 = &local_28;
  local_38 = local_88;
  FUN_1493b38c4(&local_68);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
    local_48 = (longlong *)0x0;
    local_40 = 0;
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14023409e(local_a8,param_1 + 0x80,1);
  FUN_140233c04(param_2,local_a8,&local_68);
  FUN_14010f8af(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b3a72 FUN_1493b3a72 body=547 status=ok
// SIG undefined FUN_1493b3a72(void)

undefined8 FUN_1493b3a72(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [16];
  longlong local_d8 [2];
  longlong *local_c8 [2];
  longlong local_b8 [2];
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_88 [2];
  longlong local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_68 [4];
  longlong *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 *local_40;
  longlong *local_38;
  undefined4 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_140056680(local_b8,L"MeshName");
  FUN_140009b9a(local_c8,param_1 + 0x70);
  local_68[0] = 4;
  FUN_14023423e(&local_58,local_c8);
  local_40 = local_68;
  local_48 = (wchar_t *)local_b8;
  FUN_140056680(local_d8,L"ExcessUVs");
  local_80 = (longlong)*(int *)(param_1 + 0x80);
  local_30 = local_88;
  local_88[0] = 0;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  local_a0 = &local_28;
  local_a8 = &local_48;
  local_38 = local_d8;
  FUN_1493b38c4(&local_98);
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
    local_58 = (longlong *)0x0;
    local_50 = 0;
  }
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  local_48 = L"TooManyUVs";
  local_40._0_4_ = 10;
  FUN_1446e940c(local_68,&local_48);
  local_48 = L"InterchangeFbxMessages";
  local_40 = (undefined4 *)CONCAT44(local_40._4_4_,0x16);
  FUN_1446e940c(local_88,&local_48);
  FUN_140208bae(&local_48,local_88,local_68,
                L"Reached the maximum number of UV Channels for mesh \'{MeshName}\' - discarding {ExcessUVs} {ExcessUVs}|plural(one=channel,other=channels)."
               );
  FUN_14023409e(local_e8,&local_48,1);
  FUN_140233c04(param_2,local_e8,&local_98);
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
  FUN_14010f8af(local_98,local_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b3c96 FUN_1493b3c96 body=757 status=ok
// SIG undefined FUN_1493b3c96(void)

undefined8 FUN_1493b3c96(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_138 [32];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  longlong *local_f8 [2];
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong local_c8 [2];
  wchar_t **local_b8;
  ulonglong *local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_98 [4];
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_78 [4];
  longlong *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 *local_50;
  longlong *local_48;
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_140056680(local_c8,L"TextureName");
  FUN_140009b9a(local_d8,param_1 + 0x80);
  local_78[0] = 4;
  FUN_14023423e(&local_68,local_d8);
  local_50 = local_78;
  local_58 = (wchar_t *)local_c8;
  FUN_140056680(local_e8,L"MaterialName");
  FUN_140009b9a(local_f8,param_1 + 0x90);
  local_98[0] = 4;
  FUN_14023423e(&local_88,local_f8);
  local_40 = local_98;
  local_b0 = &local_38;
  local_b8 = &local_58;
  local_48 = local_e8;
  FUN_1493b38c4(&local_a8);
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
    local_88 = (longlong *)0x0;
    local_80 = 0;
  }
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
    local_68 = (longlong *)0x0;
    local_60 = 0;
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x98) < 2) {
    local_58 = L"TextureFileCannotBeOpened";
    local_50._0_4_ = 0x19;
    FUN_1446e940c(local_78,&local_58);
    local_58 = L"InterchangeFbxMessages";
    local_50 = (undefined4 *)CONCAT44(local_50._4_4_,0x16);
    FUN_1446e940c(local_98,&local_58);
    FUN_140208bae(&local_58,local_98,local_78,L"Cannot open texture file \'{TextureName}\'.");
    puVar1 = local_108;
  }
  else {
    local_58 = L"CannotOpenTextureFileOnImport";
    local_50._0_4_ = 0x1d;
    FUN_1446e940c(local_78,&local_58);
    local_58 = L"InterchangeFbxMessages";
    local_50 = (undefined4 *)CONCAT44(local_50._4_4_,0x16);
    FUN_1446e940c(local_98,&local_58);
    FUN_140208bae(&local_58,local_98,local_78,
                  L"Cannot open texture file \'{TextureName}\' when importing material \'{MaterialName}\'."
                 );
    puVar1 = local_118;
  }
  FUN_14023409e(puVar1,&local_58,1);
  FUN_140233c04(param_2,puVar1,&local_a8);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  FUN_14010f8af(local_a8,local_a0);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b3f8c FUN_1493b3f8c body=36 status=ok
// SIG undefined FUN_1493b3f8c(void)

undefined8 FUN_1493b3f8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1493b3fcc FUN_1493b3fcc body=93 status=ok
// SIG undefined FUN_1493b3fcc(void)

void FUN_1493b3fcc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bc9de60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493b402a FUN_1493b402a body=123 status=ok
// SIG undefined FUN_1493b402a(void)

void FUN_1493b402a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc9de60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493b40a6 FUN_1493b40a6 body=21 status=ok
// SIG undefined FUN_1493b40a6(void)

undefined8 FUN_1493b40a6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1493b40bb FUN_1493b40bb body=610 status=ok
// SIG undefined FUN_1493b40bb(void)

longlong * FUN_1493b40bb(longlong *param_1,undefined1 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined **ppuVar4;
  
  switch(param_2) {
  case 1:
    plVar2 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar2[1] = (longlong)&DAT_100000001;
    *plVar2 = (longlong)&PTR_LAB_14bc9e2d0;
    plVar3 = plVar2 + 2;
    ppuVar4 = &PTR_FUN_14bc9e2f0;
    break;
  case 2:
    plVar2 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar2[1] = (longlong)&DAT_100000001;
    *plVar2 = (longlong)&PTR_LAB_14bc9e290;
    plVar3 = plVar2 + 2;
    ppuVar4 = &PTR_FUN_14bc9e2b0;
    goto LAB_1493b4261;
  case 3:
    plVar2 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar2[1] = (longlong)&DAT_100000001;
    *plVar2 = (longlong)&PTR_LAB_14bc9e310;
    plVar3 = plVar2 + 2;
    ppuVar4 = &PTR_FUN_14bc9e270;
    goto LAB_1493b4261;
  case 4:
    plVar2 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar2[1] = (longlong)&DAT_100000001;
    *plVar2 = (longlong)&PTR_LAB_14bc9e330;
    plVar3 = plVar2 + 2;
    plVar2[5] = 0xffffffff;
    ppuVar4 = &PTR_FUN_14bc9e230;
    break;
  case 5:
    plVar2 = (longlong *)FUN_14001cc68(0x48,0x10);
    plVar2[1] = (longlong)&DAT_100000001;
    *plVar2 = (longlong)&PTR_LAB_14bc9e350;
    plVar3 = plVar2 + 2;
    plVar2[7] = 0;
    plVar2[8] = 0;
    plVar2[5] = 0;
    plVar2[6] = 0;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[2] = (longlong)&PTR_FUN_14bc9e370;
    plVar2[6] = 0;
    plVar2[7] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    *(undefined4 *)(plVar2 + 8) = 0xffffffff;
    goto LAB_1493b42de;
  case 6:
    plVar2 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar2[1] = (longlong)&DAT_100000001;
    *plVar2 = (longlong)&PTR_LAB_14bc9e390;
    plVar3 = plVar2 + 2;
    ppuVar4 = &PTR_FUN_14bc9df10;
    break;
  case 7:
    plVar2 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar2[1] = (longlong)&DAT_100000001;
    *plVar2 = (longlong)&PTR_LAB_14bc9e3b0;
    plVar3 = plVar2 + 2;
    ppuVar4 = &PTR_FUN_14bc9e3d0;
    break;
  case 8:
    plVar2 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar2[1] = (longlong)&DAT_100000001;
    *plVar2 = (longlong)&PTR_FUN_14bc9e3f0;
    plVar3 = plVar2 + 2;
    ppuVar4 = &PTR_FUN_14bc9e250;
LAB_1493b4261:
    plVar2[2] = (longlong)ppuVar4;
    goto LAB_1493b42de;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  plVar2[2] = (longlong)ppuVar4;
  plVar2[3] = 0;
  plVar2[4] = 0;
LAB_1493b42de:
  *param_1 = (longlong)plVar3;
  param_1[1] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  return param_1;
}



// FUNCTION 1493b431d FUN_1493b431d body=236 status=ok
// SIG undefined FUN_1493b431d(void)

void FUN_1493b431d(longlong *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_f8 [39];
  undefined1 local_d1;
  undefined **local_d0;
  ulonglong *local_c8;
  byte local_a8;
  byte local_a7;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  memset(&local_d0,0,0x90);
  FUN_144869430(&local_d0);
  local_40 = 0;
  local_30 = 0;
  local_a8 = local_a8 | 4;
  local_a7 = local_a7 & 0xfe;
  local_d0 = &PTR_FUN_149e1e330;
  local_38 = param_2;
  local_d1 = (**(code **)(*param_1 + 8))(param_1);
  puVar1 = (undefined1 *)*local_c8 + 1;
  if ((undefined1 *)local_c8[1] < puVar1) {
    (*(code *)local_d0[0x2e])(&local_d0,&local_d1,1);
  }
  else {
    local_d1 = *(undefined1 *)*local_c8;
    *local_c8 = (ulonglong)puVar1;
  }
  (**(code **)(*param_1 + 0x10))(param_1,&local_d0);
  FUN_144a7fc42(&local_d0);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b440a FUN_1493b440a body=383 status=ok
// SIG undefined FUN_1493b440a(void)

undefined8 * FUN_1493b440a(undefined8 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  longlong *local_d8;
  undefined1 local_c9;
  undefined **local_c8;
  ulonglong *local_c0;
  byte local_a0;
  byte local_9f;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  memset(&local_c8,0,0x90);
  FUN_144869430(&local_c8);
  local_38 = 0;
  local_c8 = &PTR_FUN_149e1e050;
  local_28 = 0x7fffffffffffffff;
  local_a0 = local_a0 | 1;
  local_9f = local_9f & 0xfe;
  local_c9 = 0;
  puVar1 = (undefined1 *)*local_c0 + 1;
  local_30 = param_2;
  if ((undefined1 *)local_c0[1] < puVar1) {
    FUN_14004e24c(&local_c8,&local_c9,1);
  }
  else {
    local_c9 = *(undefined1 *)*local_c0;
    *local_c0 = (ulonglong)puVar1;
  }
  FUN_1493b40bb(&local_e0,local_c9);
  if (local_e0 == (longlong *)0x0) {
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_d8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar3 = (int *)((longlong)local_d8 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
        }
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    (**(code **)(*local_e0 + 0x10))(local_e0,&local_c8);
    if ((local_9f & 2) == 0) {
      *param_1 = local_e0;
      param_1[1] = local_d8;
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
        UNLOCK();
      }
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_d8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar3 = (int *)((longlong)local_d8 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
        }
      }
    }
  }
  FUN_144a7fc42(&local_c8);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b459a FUN_1493b459a body=118 status=ok
// SIG undefined FUN_1493b459a(void)

void FUN_1493b459a(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_14021219d(param_2,param_1 + 8);
  puVar2 = (undefined4 *)(param_1 + 0x18);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001493b45e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
    return;
  }
  thunk_FUN_14572512c(param_2,puVar2);
  return;
}



// FUNCTION 1493b4610 FUN_1493b4610 body=203 status=ok
// SIG undefined FUN_1493b4610(void)

void FUN_1493b4610(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 8),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1405d0c38(param_2,param_1 + 0x20);
  FUN_14021219d(param_2,param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x30);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001493b46aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
      return;
    }
    thunk_FUN_14572512c(param_2,puVar2);
    return;
  }
  *puVar2 = *puVar1;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  return;
}



// FUNCTION 1493b46eb FUN_1493b46eb body=244 status=ok
// SIG undefined FUN_1493b46eb(void)

longlong * FUN_1493b46eb(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 2;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1493b47f0 FUN_1493b47f0 body=126 status=ok
// SIG undefined FUN_1493b47f0(void)

LPCRITICAL_SECTION FUN_1493b47f0(LPCRITICAL_SECTION param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  param_1[1].OwningThread = (HANDLE)0x0;
  param_1[1].LockSemaphore = (HANDLE)0x0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)&param_1[1].SpinCount = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)&param_1[1].SpinCount + 4) = 0;
  }
  else {
    FUN_1446dd670(&param_1[1].LockSemaphore,iVar1,0);
    memcpy(param_1[1].LockSemaphore,_Src,(longlong)iVar1 * 2);
  }
  param_1[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[2].LockCount = 0;
  param_1[2].RecursionCount = 0;
  param_1[2].OwningThread = (HANDLE)0x0;
  return param_1;
}



// FUNCTION 1493b486e FUN_1493b486e body=197 status=ok
// SIG undefined FUN_1493b486e(void)

int FUN_1493b486e(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = -1;
  if (*(int *)((longlong)param_1[2].OwningThread + 0xd8) != 3) {
    EnterCriticalSection(param_1);
    iVar4 = param_1[1].LockCount;
    param_1[1].LockCount = iVar4 + 1U;
    if ((uint)param_1[1].RecursionCount < iVar4 + 1U) {
      FUN_1493b9376(param_1 + 1,iVar4);
    }
    p_Var2 = param_1[1].DebugInfo;
    lVar3 = (longlong)iVar4 * 0x50;
    *(undefined8 *)((longlong)p_Var2 + lVar3) = 0;
    ((undefined8 *)((longlong)p_Var2 + lVar3))[1] = 0;
    *(undefined4 *)((longlong)p_Var2 + lVar3 + 0x10) = 0xffffffff;
    *(undefined8 *)((longlong)p_Var2 + lVar3 + 0x48) = 0;
    puVar1 = (undefined8 *)((longlong)p_Var2 + lVar3 + 0x14);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)p_Var2 + lVar3 + 0x24);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)p_Var2 + lVar3 + 0x34);
    *puVar1 = 0;
    puVar1[1] = 0;
    FUN_144a787a6((longlong)p_Var2 + lVar3,param_2);
    *(undefined4 *)((longlong)p_Var2 + lVar3 + 0x14) = 2;
    *(int *)((longlong)param_1[1].DebugInfo + lVar3 + 0x10) = iVar4;
    if (param_1 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_1);
    }
  }
  return iVar4;
}



// FUNCTION 1493b4934 FUN_1493b4934 body=73 status=ok
// SIG undefined FUN_1493b4934(void)

int FUN_1493b4934(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1493b486e();
  if (iVar1 != -1) {
    FUN_140146ccc((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x28) + 0x38,param_3);
  }
  FUN_1449db362(param_3);
  return iVar1;
}



// FUNCTION 1493b497e FUN_1493b497e body=263 status=ok
// SIG undefined FUN_1493b497e(void)

longlong FUN_1493b497e(LPCRITICAL_SECTION param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection(param_1);
  uVar1 = *(uint *)&param_1[1].OwningThread;
  uVar5 = (ulonglong)uVar1;
  if ((-1 < (int)uVar1) && ((int)uVar1 < param_1[1].LockCount)) {
    piVar4 = (int *)((longlong)param_1[1].DebugInfo + uVar5 * 0x50 + 0x14);
    do {
      if (*piVar4 == 2) {
        *(undefined4 *)((longlong)param_1[1].DebugInfo + (uVar5 & 0xffffffff) * 0x50 + 0x14) = 1;
        QueryPerformanceCounter(&local_28);
        *(double *)
         ((longlong)param_1[1].DebugInfo + (longlong)*(int *)&param_1[1].OwningThread * 0x50 + 0x48)
             = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
        iVar2 = *(int *)&param_1[1].OwningThread;
        *(int *)&param_1[1].OwningThread = iVar2 + 1;
        FUN_1493b945c(param_2,(longlong)iVar2 * 0x50 + (longlong)param_1[1].DebugInfo);
        uVar3 = 1;
        goto LAB_1493b49e3;
      }
      iVar2 = (int)uVar5;
      uVar5 = uVar5 + 1;
      *(int *)&param_1[1].OwningThread = iVar2 + 1;
      piVar4 = piVar4 + 0x14;
    } while ((int)uVar5 < param_1[1].LockCount);
  }
  uVar3 = 0;
LAB_1493b49e3:
  *(undefined1 *)(param_2 + 0x50) = uVar3;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b4a86 FUN_1493b4a86 body=97 status=ok
// SIG undefined FUN_1493b4a86(void)

void FUN_1493b4a86(LPCRITICAL_SECTION param_1,uint param_2,undefined4 *param_3,undefined8 *param_4)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_1);
  if ((-1 < (int)param_2) && ((int)param_2 < param_1[1].LockCount)) {
    p_Var1 = param_1[1].DebugInfo;
    *param_3 = *(undefined4 *)((longlong)p_Var1 + (ulonglong)param_2 * 0x50 + 0x14);
    *param_4 = *(undefined8 *)((longlong)p_Var1 + (ulonglong)param_2 * 0x50 + 0x48);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493b4ad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1493b4ae8 FUN_1493b4ae8 body=153 status=ok
// SIG undefined FUN_1493b4ae8(void)

void FUN_1493b4ae8(LPCRITICAL_SECTION param_1,uint param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  int iVar3;
  
  EnterCriticalSection(param_1);
  if ((-1 < (int)param_2) && ((int)param_2 < param_1[1].LockCount)) {
    p_Var2 = param_1[1].DebugInfo;
    *param_3 = *(undefined4 *)((longlong)p_Var2 + (ulonglong)param_2 * 0x50 + 0x14);
    iVar1 = *(int *)((longlong)p_Var2 + (ulonglong)param_2 * 0x50 + 0x20);
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    FUN_1402980a2(param_4,*(undefined8 *)((longlong)p_Var2 + (ulonglong)param_2 * 0x50 + 0x18),iVar3
                 );
    FUN_140bee9ec(param_5,(longlong)p_Var2 + (ulonglong)param_2 * 0x50 + 0x28);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493b4b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1493b4b82 thunk_FUN_1493b4b88 body=5 status=ok
// SIG undefined thunk_FUN_1493b4b88(void)

void thunk_FUN_1493b4b88(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined1 auStack_40 [8];
  undefined8 *puStack_38;
  undefined4 uStack_30;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_14001cc68(0x140,0x10);
  FUN_1493b8320(uVar3,param_1,param_1 + 0x40);
  lVar1 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  if (lVar1 != 0) {
    FUN_1493b8626(lVar1);
    FUN_1400020a8(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
  }
  puStack_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_1446efa72(&puStack_38,0,2,0x10);
  puVar2 = puStack_38;
  uStack_30 = 2;
  *puStack_38 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar2[2] = uVar4;
  *puVar2 = &PTR_FUN_14bc9e410;
  puVar2[3] = param_1;
  FUN_1448b6402(uVar3,auStack_40,&puStack_38);
  FUN_1449db362(&puStack_38);
  if ((uStack_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b4b88 FUN_1493b4b88 body=245 status=ok
// SIG undefined FUN_1493b4b88(void)

void FUN_1493b4b88(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_14001cc68(0x140,0x10);
  FUN_1493b8320(uVar3,param_1,param_1 + 0x40);
  lVar1 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  if (lVar1 != 0) {
    FUN_1493b8626(lVar1);
    FUN_1400020a8(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x60);
  }
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar2 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar2[2] = uVar4;
  *puVar2 = &PTR_FUN_14bc9e410;
  puVar2[3] = param_1;
  FUN_1448b6402(uVar3,local_40,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b4c7e FUN_1493b4c7e body=85 status=ok
// SIG undefined FUN_1493b4c7e(void)

void FUN_1493b4c7e(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x60) != 0) && (*(int *)(*(longlong *)(param_1 + 0x60) + 0xd8) != 3))
  {
    lVar2 = *(longlong *)(param_1 + 0x60);
    *(undefined1 *)(lVar2 + 0x128) = 1;
    if (param_2 != '\0') {
      lVar2 = lVar2 + 0xb0;
      cVar1 = FUN_1467c2814(lVar2);
      if (cVar1 != '\0') {
        FUN_140f14a8a(lVar2);
      }
    }
  }
  FUN_1493b4cd4(param_1);
  return;
}



// FUNCTION 1493b4cd4 FUN_1493b4cd4 body=271 status=ok
// SIG undefined FUN_1493b4cd4(void)

void FUN_1493b4cd4(undefined8 param_1)

{
  undefined1 auStack_138 [32];
  longlong *local_118;
  longlong local_108;
  ulonglong uStack_100;
  longlong local_f8 [10];
  char local_a8;
  undefined1 local_98 [16];
  undefined4 local_88;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1493b497e(param_1,local_98);
  if (local_48 == '\x01') {
    do {
      local_108 = 0;
      uStack_100 = 0;
      local_f8[0] = 0;
      local_f8[1] = 0;
      local_118 = &local_108;
      FUN_1444df970(param_1,local_88,4,local_f8);
      if (local_f8[0] != 0) {
        FUN_1400020a8();
      }
      FUN_1493b497e(param_1,local_f8);
      FUN_1493b4f58(local_98,local_f8);
      if (local_a8 == '\x01') {
        FUN_1493b940a(local_f8);
      }
      FUN_1447a1747(local_108,uStack_100 & 0xffffffff);
      if (local_108 != 0) {
        FUN_1400020a8();
      }
    } while (local_48 != '\0');
  }
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493b4de4 FUN_1493b4de4 body=99 status=ok
// SIG undefined FUN_1493b4de4(void)

void FUN_1493b4de4(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  
  plVar2 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_1 + 0x48) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0x40);
  }
  cVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,puVar3);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14054d1d4();
    if (*(int *)(param_1 + 0x48) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = *(undefined2 **)(param_1 + 0x40);
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,puVar3,0,1);
  }
  FUN_1493b4e48(param_1);
  return;
}



// FUNCTION 1493b4e48 FUN_1493b4e48 body=94 status=ok
// SIG undefined FUN_1493b4e48(void)

void FUN_1493b4e48(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x60) != 0) && (*(int *)(*(longlong *)(param_1 + 0x60) + 0xd8) != 3))
  {
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0x128) = 1;
  }
  FUN_1493b4cd4(param_1);
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_1493b8626(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1493b4ea6 FUN_1493b4ea6 body=176 status=ok
// SIG undefined FUN_1493b4ea6(void)

ulonglong FUN_1493b4ea6(longlong param_1)

{
  void *_Src;
  size_t _Size;
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x60) == 0) || (*(int *)(*(longlong *)(param_1 + 0x60) + 0xd8) == 3))
  {
    uVar2 = 0;
  }
  else {
    FUN_1444dfaca();
    local_30 = (void *)0x0;
    local_28 = *(int *)(param_1 + 0x58);
    lVar1 = (longlong)local_28;
    _Src = *(void **)(param_1 + 0x50);
    if (lVar1 == 0) {
      uVar2 = CONCAT71((int7)(int3)((uint)local_28 >> 8),1);
    }
    else {
      FUN_1446dd670(&local_30,local_28,0);
      _Size = lVar1 * 2;
      memcpy(local_30,_Src,_Size);
      uVar2 = CONCAT71((int7)(_Size >> 8),local_28 < 2);
      if (local_30 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b4f58 FUN_1493b4f58 body=82 status=ok
// SIG undefined FUN_1493b4f58(void)

longlong FUN_1493b4f58(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x50) == '\x01') {
      if (*(char *)(param_1 + 0x50) != '\0') {
        FUN_1493b940a(param_1);
      }
      FUN_1493b9606(param_1,param_2);
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x50) == '\0') {
        return param_1;
      }
      FUN_1493b940a(param_1);
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x50) = uVar1;
  }
  return param_1;
}



// FUNCTION 1493b4fac FUN_1493b4fac body=62 status=ok
// SIG undefined FUN_1493b4fac(void)

void FUN_1493b4fac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc9df58;
  FUN_1493b4fea(param_1 + 1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493b4fea FUN_1493b4fea body=98 status=ok
// SIG undefined FUN_1493b4fea(void)

void FUN_1493b4fea(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    local_20 = 0;
    plVar1 = (longlong *)FUN_140272950();
    (**(code **)(*plVar1 + 0x38))(plVar1,*param_1);
    *param_1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b504d FUN_1493b504d body=190 status=ok
// SIG undefined FUN_1493b504d(void)

void FUN_1493b504d(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  wchar_t *pwVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pwVar2 = L"";
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    pwVar2 = L"guard";
  }
  FUN_140056680(local_30,pwVar2);
  FUN_14021219d(param_1,local_30);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b510c FUN_1493b510c body=270 status=ok
// SIG undefined FUN_1493b510c(void)

bool FUN_1493b510c(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  LARGE_INTEGER local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1493b4fea(param_1 + 8);
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x98))(*(longlong **)(param_1 + 0x60),1);
  QueryPerformanceCounter(&local_68);
  dVar1 = (double)local_68.QuadPart * DAT_14c83f420;
  do {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x48))
                      (*(longlong **)(param_1 + 0x60),&DAT_14cc107d8);
    *(longlong *)(param_1 + 8) = lVar2;
    if (lVar2 != 0) break;
    FUN_14000f986(0x3dcccccd);
    QueryPerformanceCounter(&local_68);
  } while ((double)local_68.QuadPart * DAT_14c83f420 + 16777216.0 < dVar1 + 16777216.0 + 3.0);
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b521c FUN_1493b521c body=180 status=ok
// SIG undefined FUN_1493b521c(void)

undefined8 * FUN_1493b521c(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  do {
    cVar4 = FUN_1493b52d2(param_1,param_3);
    param_3 = 0;
  } while (cVar4 != '\0');
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  cVar4 = FUN_1493b5400(param_1);
  plVar3 = plStack_40;
  if (cVar4 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = local_48;
    param_2[1] = plStack_40;
    if (plStack_40 == (longlong *)0x0) goto LAB_1493b52ab;
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_1493b52ab:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b52d2 FUN_1493b52d2 body=300 status=ok
// SIG undefined FUN_1493b52d2(void)

ulonglong FUN_1493b52d2(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  if (param_1[2] == 0) {
    uVar6 = 0;
    goto LAB_1493b531d;
  }
  cVar4 = FUN_1444dfdd8(param_1[2],local_28,param_2);
  if (cVar4 == '\0') {
LAB_1493b530c:
    uVar6 = 0;
  }
  else {
    FUN_1493b440a(&local_38,local_28);
    if (local_38 == 0) {
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
      goto LAB_1493b530c;
    }
    puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar5 = 0;
    puVar5[1] = local_38;
    puVar5[2] = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    if (puVar5 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*param_1;
      *param_1 = puVar5;
      *puVar3 = puVar5;
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    uVar6 = CONCAT71((int7)((ulonglong)local_30 >> 8),1);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
LAB_1493b531d:
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b5400 FUN_1493b5400 body=236 status=ok
// SIG undefined FUN_1493b5400(void)

bool FUN_1493b5400(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = **(longlong **)(param_1 + 8);
  if (lVar2 != 0) {
    if ((undefined8 *)(lVar2 + 8) != param_2) {
      *param_2 = *(undefined8 *)(lVar2 + 8);
      *(undefined8 *)(lVar2 + 8) = 0;
      plVar3 = *(longlong **)(lVar2 + 0x10);
      plVar4 = (longlong *)param_2[1];
      if (plVar3 != plVar4) {
        *(undefined8 *)(lVar2 + 0x10) = 0;
        param_2[1] = plVar3;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
    }
    lVar5 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar2 + 0x10) = 0;
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (lVar5 != 0) {
      plVar3 = *(longlong **)(lVar5 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      FUN_1400020a8(lVar5);
    }
  }
  return lVar2 != 0;
}



// FUNCTION 1493b54ec FUN_1493b54ec body=131 status=ok
// SIG undefined FUN_1493b54ec(void)

undefined4 FUN_1493b54ec(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_1493b431d(param_2);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1444dfb6a(*(longlong *)(param_1 + 0x10),local_38,param_3);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b5570 FUN_1493b5570 body=1121 status=ok
// SIG undefined FUN_1493b5570(void)

longlong * FUN_1493b5570(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  void **unaff_RBP;
  undefined7 uVar13;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  void *local_88;
  undefined8 uStack_80;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar8 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149e441a0;
  plVar8[6] = 0;
  plVar8[7] = 0;
  plVar8[8] = 0;
  plVar8[9] = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  *(undefined4 *)((longlong)plVar8 + 0x3c) = 0x80;
  *(undefined4 *)(plVar8 + 8) = 0xffffffff;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar1 = plVar8 + 2;
  plVar9 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_149e441a0;
  local_70 = plVar9 + 2;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  *(undefined4 *)((longlong)plVar9 + 0x3c) = 0x80;
  *(undefined4 *)(plVar9 + 8) = 0xffffffff;
  local_68 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  (**(code **)(*param_1 + 8))(param_1,&local_88);
  FUN_1493b59d2(&local_98);
  FUN_145964f10(plVar1,&local_98,&local_88);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x10))(param_1,&local_88);
  FUN_1493b5a92(&local_98);
  FUN_145964f10(plVar1,&local_98,&local_88);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar9 = local_70;
  local_88 = (void *)0x0;
  uVar5 = *(uint *)(param_1 + 5);
  pvVar10 = (void *)param_1[4];
  uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
  if ((longlong)(int)uVar5 == 0) {
    uStack_80 = (ulonglong)uVar5;
  }
  else {
    unaff_RBP = &local_88;
    FUN_1446dd670(unaff_RBP,uVar5,0);
    memcpy(local_88,pvVar10,(longlong)(int)uVar5 * 2);
  }
  FUN_1493b5b52(&local_98);
  FUN_145964f10(plVar9,&local_98,&local_88);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  lVar6 = param_1[6];
  uVar13 = (undefined7)((ulonglong)unaff_RBP >> 8);
  FUN_1493b5c12(&local_88);
  FUN_14626ec84(plVar9,&local_88,CONCAT71(uVar13,(char)lVar6) & 0xffffffff);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined1 *)((longlong)param_1 + 0x31);
  FUN_1493b5cd2(&local_88);
  FUN_14626ec84(plVar9,&local_88,CONCAT71(uVar13,uVar4) & 0xffffffff);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined1 *)((longlong)param_1 + 0x32);
  FUN_1493b5d92(&local_88);
  FUN_14626ec84(plVar9,&local_88,CONCAT71(uVar13,uVar4) & 0xffffffff);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined1 *)((longlong)param_1 + 0x33);
  FUN_1493b5e52(&local_88);
  FUN_14626ec84(plVar9,&local_88,CONCAT71(uVar13,uVar4) & 0xffffffff);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1493b5f12(&local_88);
  FUN_1468399f8(plVar1,&local_88,&local_70);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_88 = (void *)0x0;
  uStack_80 = 0;
  FUN_14619f8aa(&local_98,&local_88,0);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_a8 = plVar1;
  local_a0 = plVar8;
  cVar7 = FUN_145d35994();
  plVar1 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_a0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_a0)();
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))();
      }
    }
  }
  pvVar10 = local_88;
  if (cVar7 == '\0') {
    pvVar10 = (void *)0x0;
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    local_88 = (void *)0x0;
    uVar11 = (undefined4)uStack_80;
    uVar12 = uStack_80._4_4_;
    uStack_80 = 0;
  }
  *param_2 = (longlong)pvVar10;
  *(undefined4 *)(param_2 + 1) = uVar11;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar12;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))(local_90);
      }
    }
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_68 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b59d2 FUN_1493b59d2 body=191 status=ok
// SIG undefined FUN_1493b59d2(void)

undefined8 * FUN_1493b59d2(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc10800) {
    FUN_144b3d300(&DAT_14cc10800);
    if (DAT_14cc10800 == -1) {
      FUN_140056680(&DAT_14cc107f0,L"CmdID");
      atexit((_func_5014 *)&LAB_1444e0637);
      _Init_thread_footer(&DAT_14cc10800);
    }
  }
  *param_1 = 0;
  iVar1 = DAT_14cc107f8;
  _Src = DAT_14cc107f0;
  lVar2 = (longlong)DAT_14cc107f8;
  *(int *)(param_1 + 1) = DAT_14cc107f8;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  return param_1;
}



// FUNCTION 1493b5a92 FUN_1493b5a92 body=191 status=ok
// SIG undefined FUN_1493b5a92(void)

undefined8 * FUN_1493b5a92(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc10818) {
    FUN_144b3d300(&DAT_14cc10818);
    if (DAT_14cc10818 == -1) {
      FUN_140056680(&DAT_14cc10808,L"TranslatorID");
      atexit((_func_5014 *)&LAB_1444e0648);
      _Init_thread_footer(&DAT_14cc10818);
    }
  }
  *param_1 = 0;
  iVar1 = DAT_14cc10810;
  _Src = DAT_14cc10808;
  lVar2 = (longlong)DAT_14cc10810;
  *(int *)(param_1 + 1) = DAT_14cc10810;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  return param_1;
}



// FUNCTION 1493b5b52 FUN_1493b5b52 body=191 status=ok
// SIG undefined FUN_1493b5b52(void)

undefined8 * FUN_1493b5b52(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc10830) {
    FUN_144b3d300(&DAT_14cc10830);
    if (DAT_14cc10830 == -1) {
      FUN_140056680(&DAT_14cc10820,L"SourceFile");
      atexit((_func_5014 *)&LAB_1444e0659);
      _Init_thread_footer(&DAT_14cc10830);
    }
  }
  *param_1 = 0;
  iVar1 = DAT_14cc10828;
  _Src = DAT_14cc10820;
  lVar2 = (longlong)DAT_14cc10828;
  *(int *)(param_1 + 1) = DAT_14cc10828;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  return param_1;
}



// FUNCTION 1493b5c12 FUN_1493b5c12 body=191 status=ok
// SIG undefined FUN_1493b5c12(void)

undefined8 * FUN_1493b5c12(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc10848) {
    FUN_144b3d300(&DAT_14cc10848);
    if (DAT_14cc10848 == -1) {
      FUN_140056680(&DAT_14cc10838,L"ConvertScene");
      atexit((_func_5014 *)&LAB_1444e066a);
      _Init_thread_footer(&DAT_14cc10848);
    }
  }
  *param_1 = 0;
  iVar1 = DAT_14cc10840;
  _Src = DAT_14cc10838;
  lVar2 = (longlong)DAT_14cc10840;
  *(int *)(param_1 + 1) = DAT_14cc10840;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  return param_1;
}



// FUNCTION 1493b5cd2 FUN_1493b5cd2 body=191 status=ok
// SIG undefined FUN_1493b5cd2(void)

undefined8 * FUN_1493b5cd2(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc10860) {
    FUN_144b3d300(&DAT_14cc10860);
    if (DAT_14cc10860 == -1) {
      FUN_140056680(&DAT_14cc10850,L"ForceFrontXAxis");
      atexit((_func_5014 *)&LAB_1444e067b);
      _Init_thread_footer(&DAT_14cc10860);
    }
  }
  *param_1 = 0;
  iVar1 = DAT_14cc10858;
  _Src = DAT_14cc10850;
  lVar2 = (longlong)DAT_14cc10858;
  *(int *)(param_1 + 1) = DAT_14cc10858;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  return param_1;
}



// FUNCTION 1493b5d92 FUN_1493b5d92 body=191 status=ok
// SIG undefined FUN_1493b5d92(void)

undefined8 * FUN_1493b5d92(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc10878) {
    FUN_144b3d300(&DAT_14cc10878);
    if (DAT_14cc10878 == -1) {
      FUN_140056680(&DAT_14cc10868,L"ConvertSceneUnit");
      atexit((_func_5014 *)&LAB_1444e068c);
      _Init_thread_footer(&DAT_14cc10878);
    }
  }
  *param_1 = 0;
  iVar1 = DAT_14cc10870;
  _Src = DAT_14cc10868;
  lVar2 = (longlong)DAT_14cc10870;
  *(int *)(param_1 + 1) = DAT_14cc10870;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  return param_1;
}



// FUNCTION 1493b5e52 FUN_1493b5e52 body=191 status=ok
// SIG undefined FUN_1493b5e52(void)

undefined8 * FUN_1493b5e52(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc10890) {
    FUN_144b3d300(&DAT_14cc10890);
    if (DAT_14cc10890 == -1) {
      FUN_140056680(&DAT_14cc10880,L"KeepFbxNamespace");
      atexit((_func_5014 *)&LAB_1444e069d);
      _Init_thread_footer(&DAT_14cc10890);
    }
  }
  *param_1 = 0;
  iVar1 = DAT_14cc10888;
  _Src = DAT_14cc10880;
  lVar2 = (longlong)DAT_14cc10888;
  *(int *)(param_1 + 1) = DAT_14cc10888;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  return param_1;
}



// FUNCTION 1493b5f12 FUN_1493b5f12 body=191 status=ok
// SIG undefined FUN_1493b5f12(void)

undefined8 * FUN_1493b5f12(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc108a8) {
    FUN_144b3d300(&DAT_14cc108a8);
    if (DAT_14cc108a8 == -1) {
      FUN_140056680(&DAT_14cc10898,L"CmdData");
      atexit((_func_5014 *)&LAB_1444e06ae);
      _Init_thread_footer(&DAT_14cc108a8);
    }
  }
  *param_1 = 0;
  iVar1 = DAT_14cc108a0;
  _Src = DAT_14cc10898;
  lVar2 = (longlong)DAT_14cc108a0;
  *(int *)(param_1 + 1) = DAT_14cc108a0;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  return param_1;
}



// FUNCTION 1493b5fd2 FUN_1493b5fd2 body=1249 status=ok
// SIG undefined FUN_1493b5fd2(void)

undefined8 FUN_1493b5fd2(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_138 [40];
  wchar_t *local_110;
  int local_108;
  wchar_t *local_100;
  int local_f8;
  wchar_t *local_f0;
  int local_e8;
  wchar_t *local_e0;
  int local_d8;
  wchar_t *local_d0;
  int local_c8;
  wchar_t *local_c0;
  int local_b8;
  undefined8 *local_b0;
  wchar_t *local_a8;
  int local_a0;
  wchar_t *local_98;
  int local_90;
  wchar_t *local_88;
  int local_80;
  wchar_t *local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong *plStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar9 = FUN_14001cc68(0x88,0x10);
  FUN_14047b06c(lVar9,param_2);
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_149e44a40;
  plVar10[2] = lVar9;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  uVar11 = 0;
  bVar5 = FUN_14047b282(lVar9,&local_68,0);
  lVar9 = local_68;
  if ((local_68 != 0 & bVar5) != 1) goto LAB_1493b60a7;
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  FUN_1493b59d2(&local_98);
  local_88 = local_98;
  local_80 = local_90 + -1;
  if (local_90 == 0) {
    local_80 = 0;
  }
  cVar6 = FUN_14047fa10(lVar9,&local_88,&local_78);
  if (local_98 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (cVar6 == '\0') {
LAB_1493b6497:
    uVar11 = 0;
  }
  else {
    (**(code **)(*param_1 + 8))(param_1,&local_98);
    pwVar4 = local_98;
    if ((int)uStack_70 == local_90) {
      bVar12 = true;
      if (1 < (int)uStack_70) {
        iVar7 = wcscmp(local_78,local_98);
        bVar12 = iVar7 == 0;
      }
    }
    else {
      bVar12 = local_90 + (int)uStack_70 == 1;
    }
    if (pwVar4 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar4);
    }
    lVar9 = local_68;
    uVar11 = 0;
    if (bVar12) {
      FUN_1493b5a92(&local_98);
      local_a8 = local_98;
      local_a0 = local_90 + -1;
      if (local_90 == 0) {
        local_a0 = 0;
      }
      cVar6 = FUN_14047fa10(lVar9,&local_a8,param_1 + 2);
      if (local_98 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      lVar9 = local_68;
      uVar11 = 0;
      if (cVar6 != '\0') {
        local_b0 = (undefined8 *)0x0;
        FUN_1493b5f12(&local_98);
        local_c0 = local_98;
        local_b8 = local_90 + -1;
        if (local_90 == 0) {
          local_b8 = 0;
        }
        cVar6 = FUN_146839966(lVar9,&local_c0,&local_b0);
        if (local_98 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        uVar11 = 0;
        if (cVar6 != '\0') {
          uVar11 = *local_b0;
          FUN_1493b5b52(&local_98);
          local_d0 = local_98;
          local_c8 = local_90 + -1;
          if (local_90 == 0) {
            local_c8 = 0;
          }
          cVar6 = FUN_14047fa10(uVar11,&local_d0,param_1 + 4);
          if (local_98 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          uVar11 = 0;
          if (cVar6 != '\0') {
            uVar11 = *local_b0;
            FUN_1493b5c12(&local_98);
            local_e0 = local_98;
            local_d8 = local_90 + -1;
            if (local_90 == 0) {
              local_d8 = 0;
            }
            cVar6 = FUN_14047f976(uVar11,&local_e0,param_1 + 6);
            if (local_98 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            uVar11 = 0;
            if (cVar6 != '\0') {
              uVar11 = *local_b0;
              FUN_1493b5cd2(&local_98);
              local_f0 = local_98;
              local_e8 = local_90 + -1;
              if (local_90 == 0) {
                local_e8 = 0;
              }
              cVar6 = FUN_14047f976(uVar11,&local_f0,(longlong)param_1 + 0x31);
              if (local_98 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
              uVar11 = 0;
              if (cVar6 != '\0') {
                uVar11 = *local_b0;
                FUN_1493b5d92(&local_98);
                local_100 = local_98;
                local_f8 = local_90 + -1;
                if (local_90 == 0) {
                  local_f8 = 0;
                }
                cVar6 = FUN_14047f976(uVar11,&local_100,(longlong)param_1 + 0x32);
                if (local_98 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
                uVar11 = 0;
                if (cVar6 != '\0') {
                  uVar11 = *local_b0;
                  FUN_1493b5e52(&local_98);
                  local_110 = local_98;
                  local_108 = local_90 + -1;
                  if (local_90 == 0) {
                    local_108 = 0;
                  }
                  uVar8 = FUN_14047f976(uVar11,&local_110,(longlong)param_1 + 0x33);
                  if (local_98 != (wchar_t *)0x0) {
                    FUN_1400020a8();
                  }
                  if ((char)uVar8 == '\0') goto LAB_1493b6497;
                  *(undefined1 *)(param_1 + 1) = 1;
                  uVar11 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
                }
              }
            }
          }
        }
      }
    }
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1493b60a7:
  plVar1 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1493b64b4 FUN_1493b64b4 body=364 status=ok
// SIG undefined FUN_1493b64b4(void)

undefined4 FUN_1493b64b4(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = FUN_14001cc68(0x88,0x10);
  FUN_14047b06c(lVar6,param_2);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149e44a40;
  plVar7[2] = lVar6;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  uVar5 = 0;
  cVar4 = FUN_14047b282(lVar6,&local_48,0);
  lVar6 = local_48;
  if (cVar4 != '\0') {
    uVar5 = 0;
    if (local_48 != 0) {
      FUN_140056680(&local_68,L"ResultFile");
      local_58 = local_68;
      local_50 = local_60 + -1;
      if (local_60 == 0) {
        local_50 = 0;
      }
      uVar5 = FUN_14047fa10(lVar6,&local_58,param_1);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
  }
  plVar1 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b6622 FUN_1493b6622 body=939 status=ok
// SIG undefined FUN_1493b6622(void)

longlong * FUN_1493b6622(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  void *local_78;
  undefined8 uStack_70;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar6 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149e441a0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  *(undefined4 *)((longlong)plVar6 + 0x3c) = 0x80;
  *(undefined4 *)(plVar6 + 8) = 0xffffffff;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar1 = plVar6 + 2;
  plVar7 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149e441a0;
  local_60 = plVar7 + 2;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  *(undefined4 *)((longlong)plVar7 + 0x3c) = 0x80;
  *(undefined4 *)(plVar7 + 8) = 0xffffffff;
  local_58 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  (**(code **)(*param_1 + 8))(param_1,&local_78);
  FUN_1493b59d2(&local_88);
  FUN_145964f10(plVar1,&local_88,&local_78);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x10))(param_1,&local_78);
  FUN_1493b5a92(&local_88);
  FUN_145964f10(plVar1,&local_88,&local_78);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar7 = local_60;
  local_78 = (void *)0x0;
  uVar4 = *(uint *)(param_1 + 5);
  pvVar8 = (void *)param_1[4];
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
  if ((longlong)(int)uVar4 == 0) {
    uStack_70 = (ulonglong)uVar4;
  }
  else {
    FUN_1446dd670(&local_78,uVar4,0);
    memcpy(local_78,pvVar8,(longlong)(int)uVar4 * 2);
  }
  FUN_1493b69ce(&local_88);
  FUN_145964f10(plVar7,&local_88,&local_78);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1493b5f12(&local_78);
  FUN_1468399f8(plVar1,&local_78,&local_60);
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_78 = (void *)0x0;
  uStack_70 = 0;
  FUN_14619f8aa(&local_88,&local_78,0);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_98 = plVar1;
  local_90 = plVar6;
  cVar5 = FUN_145d35994();
  plVar1 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_90 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_90)();
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))();
      }
    }
  }
  pvVar8 = local_78;
  if (cVar5 == '\0') {
    pvVar8 = (void *)0x0;
    uVar9 = 0;
    uVar10 = 0;
  }
  else {
    local_78 = (void *)0x0;
    uVar9 = (undefined4)uStack_70;
    uVar10 = uStack_70._4_4_;
    uStack_70 = 0;
  }
  *param_2 = (longlong)pvVar8;
  *(undefined4 *)(param_2 + 1) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar10;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_58 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b69ce FUN_1493b69ce body=191 status=ok
// SIG undefined FUN_1493b69ce(void)

undefined8 * FUN_1493b69ce(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc108c0) {
    FUN_144b3d300(&DAT_14cc108c0);
    if (DAT_14cc108c0 == -1) {
      FUN_140056680(&DAT_14cc108b0,L"PayloadKey");
      atexit((_func_5014 *)&LAB_1444e06bf);
      _Init_thread_footer(&DAT_14cc108c0);
    }
  }
  *param_1 = 0;
  iVar1 = DAT_14cc108b8;
  _Src = DAT_14cc108b0;
  lVar2 = (longlong)DAT_14cc108b8;
  *(int *)(param_1 + 1) = DAT_14cc108b8;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  return param_1;
}



// FUNCTION 1493b6a8e FUN_1493b6a8e body=836 status=ok
// SIG undefined FUN_1493b6a8e(void)

undefined8 FUN_1493b6a8e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_f8 [40];
  wchar_t *local_d0;
  int local_c8;
  wchar_t *local_c0;
  int local_b8;
  undefined8 *local_b0;
  wchar_t *local_a8;
  int local_a0;
  wchar_t *local_98;
  int local_90;
  wchar_t *local_88;
  int local_80;
  wchar_t *local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong *plStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar9 = FUN_14001cc68(0x88,0x10);
  FUN_14047b06c(lVar9,param_2);
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_149e44a40;
  plVar10[2] = lVar9;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  uVar11 = 0;
  bVar5 = FUN_14047b282(lVar9,&local_68,0);
  lVar9 = local_68;
  if ((local_68 != 0 & bVar5) != 1) goto LAB_1493b6b63;
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  FUN_1493b59d2(&local_98);
  local_88 = local_98;
  local_80 = local_90 + -1;
  if (local_90 == 0) {
    local_80 = 0;
  }
  cVar6 = FUN_14047fa10(lVar9,&local_88,&local_78);
  if (local_98 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (cVar6 == '\0') {
LAB_1493b6db6:
    uVar11 = 0;
  }
  else {
    (**(code **)(*param_1 + 8))(param_1,&local_98);
    pwVar4 = local_98;
    if ((int)uStack_70 == local_90) {
      bVar12 = true;
      if (1 < (int)uStack_70) {
        iVar7 = wcscmp(local_78,local_98);
        bVar12 = iVar7 == 0;
      }
    }
    else {
      bVar12 = local_90 + (int)uStack_70 == 1;
    }
    if (pwVar4 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar4);
    }
    lVar9 = local_68;
    uVar11 = 0;
    if (bVar12) {
      FUN_1493b5a92(&local_98);
      local_a8 = local_98;
      local_a0 = local_90 + -1;
      if (local_90 == 0) {
        local_a0 = 0;
      }
      cVar6 = FUN_14047fa10(lVar9,&local_a8,param_1 + 2);
      if (local_98 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      lVar9 = local_68;
      uVar11 = 0;
      if (cVar6 != '\0') {
        local_b0 = (undefined8 *)0x0;
        FUN_1493b5f12(&local_98);
        local_c0 = local_98;
        local_b8 = local_90 + -1;
        if (local_90 == 0) {
          local_b8 = 0;
        }
        cVar6 = FUN_146839966(lVar9,&local_c0,&local_b0);
        if (local_98 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        uVar11 = 0;
        if (cVar6 != '\0') {
          uVar11 = *local_b0;
          FUN_1493b69ce(&local_98);
          local_d0 = local_98;
          local_c8 = local_90 + -1;
          if (local_90 == 0) {
            local_c8 = 0;
          }
          uVar8 = FUN_14047fa10(uVar11,&local_d0,param_1 + 4);
          if (local_98 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          if ((char)uVar8 == '\0') goto LAB_1493b6db6;
          *(undefined1 *)(param_1 + 1) = 1;
          uVar11 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
        }
      }
    }
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1493b6b63:
  plVar1 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1493b6dd4 FUN_1493b6dd4 body=364 status=ok
// SIG undefined FUN_1493b6dd4(void)

undefined4 FUN_1493b6dd4(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = FUN_14001cc68(0x88,0x10);
  FUN_14047b06c(lVar6,param_2);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149e44a40;
  plVar7[2] = lVar6;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  uVar5 = 0;
  cVar4 = FUN_14047b282(lVar6,&local_48,0);
  lVar6 = local_48;
  if (cVar4 != '\0') {
    uVar5 = 0;
    if (local_48 != 0) {
      FUN_140056680(&local_68,L"ResultFile");
      local_58 = local_68;
      local_50 = local_60 + -1;
      if (local_60 == 0) {
        local_50 = 0;
      }
      uVar5 = FUN_14047fa10(lVar6,&local_58,param_1);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
  }
  plVar1 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b6f42 FUN_1493b6f42 body=1076 status=ok
// SIG undefined FUN_1493b6f42(void)

longlong * FUN_1493b6f42(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  void *pvVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong *plVar11;
  void **ppvVar12;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong *local_f0;
  void *local_e8;
  undefined8 uStack_e0;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149e441a0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  *(undefined4 *)((longlong)plVar5 + 0x3c) = 0x80;
  *(undefined4 *)(plVar5 + 8) = 0xffffffff;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar1 = plVar5 + 2;
  plVar6 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149e441a0;
  local_70 = plVar6 + 2;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  *(undefined4 *)((longlong)plVar6 + 0x3c) = 0x80;
  *(undefined4 *)(plVar6 + 8) = 0xffffffff;
  local_68 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar6 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  (**(code **)(*param_1 + 8))(param_1,&local_e8);
  FUN_1493b59d2(&local_80);
  FUN_145964f10(plVar1,&local_80,&local_e8);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x10))(param_1,&local_e8);
  FUN_1493b5a92(&local_80);
  FUN_145964f10(plVar1,&local_80,&local_e8);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar6 = local_70;
  local_e8 = (void *)0x0;
  uVar3 = *(uint *)(param_1 + 5);
  pvVar7 = (void *)param_1[4];
  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar3);
  if ((longlong)(int)uVar3 == 0) {
    uStack_e0 = (ulonglong)uVar3;
  }
  else {
    FUN_1446dd670(&local_e8,uVar3,0);
    memcpy(local_e8,pvVar7,(longlong)(int)uVar3 * 2);
  }
  FUN_1493b69ce(&local_80);
  FUN_145964f10(plVar6,&local_80,&local_e8);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar11 = param_1 + 6;
  ppvVar12 = &local_e8;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *ppvVar12 = (void *)*plVar11;
    plVar11 = plVar11 + 1;
    ppvVar12 = ppvVar12 + 1;
  }
  FUN_1467f64aa(&local_e8,&local_80);
  FUN_1493b7378(&local_f8);
  FUN_145964f10(plVar6,&local_f8,&local_80);
  if (local_f8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  FUN_1493b5f12(&local_e8);
  FUN_1468399f8(plVar1,&local_e8,&local_70);
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_e8 = (void *)0x0;
  uStack_e0 = 0;
  FUN_14619f8aa(&local_80,&local_e8,0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_f8 = plVar1;
  local_f0 = plVar5;
  cVar4 = FUN_145d35994();
  plVar1 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_f0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_f0)();
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))();
      }
    }
  }
  pvVar7 = local_e8;
  if (cVar4 == '\0') {
    pvVar7 = (void *)0x0;
    uVar8 = 0;
    uVar10 = 0;
  }
  else {
    local_e8 = (void *)0x0;
    uVar8 = (undefined4)uStack_e0;
    uVar10 = uStack_e0._4_4_;
    uStack_e0 = 0;
  }
  *param_2 = (longlong)pvVar7;
  *(undefined4 *)(param_2 + 1) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar10;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_68 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b7378 FUN_1493b7378 body=191 status=ok
// SIG undefined FUN_1493b7378(void)

undefined8 * FUN_1493b7378(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc108d8) {
    FUN_144b3d300(&DAT_14cc108d8);
    if (DAT_14cc108d8 == -1) {
      FUN_140056680(&DAT_14cc108c8,L"GlobalMeshTransform");
      atexit((_func_5014 *)&LAB_1444e06d0);
      _Init_thread_footer(&DAT_14cc108d8);
    }
  }
  *param_1 = 0;
  iVar1 = DAT_14cc108d0;
  _Src = DAT_14cc108c8;
  lVar2 = (longlong)DAT_14cc108d0;
  *(int *)(param_1 + 1) = DAT_14cc108d0;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  return param_1;
}



// FUNCTION 1493b7438 FUN_1493b7438 body=1006 status=ok
// SIG undefined FUN_1493b7438(void)

undefined8 FUN_1493b7438(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_118 [40];
  longlong local_f0;
  int local_e8;
  longlong local_e0;
  int local_d8;
  wchar_t *local_d0;
  int local_c8;
  wchar_t *local_c0;
  int local_b8;
  undefined8 *local_b0;
  wchar_t *local_a8;
  int local_a0;
  wchar_t *local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  int local_80;
  wchar_t *local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong *plStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar9 = FUN_14001cc68(0x88,0x10);
  FUN_14047b06c(lVar9,param_2);
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_149e44a40;
  plVar10[2] = lVar9;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  uVar11 = 0;
  bVar5 = FUN_14047b282(lVar9,&local_68,0);
  lVar9 = local_68;
  if ((local_68 != 0 & bVar5) == 1) {
    local_78 = (wchar_t *)0x0;
    uStack_70 = 0;
    FUN_1493b59d2(&local_98);
    local_88 = local_98;
    local_80 = (int)uStack_90 + -1;
    if ((int)uStack_90 == 0) {
      local_80 = 0;
    }
    cVar6 = FUN_14047fa10(lVar9,&local_88,&local_78);
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (cVar6 == '\0') {
      uVar11 = 0;
    }
    else {
      (**(code **)(*param_1 + 8))(param_1,&local_98);
      pwVar4 = local_98;
      if ((int)uStack_70 == (int)uStack_90) {
        bVar12 = true;
        if (1 < (int)uStack_70) {
          iVar7 = wcscmp(local_78,local_98);
          bVar12 = iVar7 == 0;
        }
      }
      else {
        bVar12 = (int)uStack_90 + (int)uStack_70 == 1;
      }
      if (pwVar4 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar4);
      }
      lVar9 = local_68;
      uVar11 = 0;
      if (bVar12) {
        FUN_1493b5a92(&local_98);
        local_a8 = local_98;
        local_a0 = (int)uStack_90 + -1;
        if ((int)uStack_90 == 0) {
          local_a0 = 0;
        }
        cVar6 = FUN_14047fa10(lVar9,&local_a8,param_1 + 2);
        if (local_98 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        lVar9 = local_68;
        uVar11 = 0;
        if (cVar6 != '\0') {
          local_b0 = (undefined8 *)0x0;
          FUN_1493b5f12(&local_98);
          local_c0 = local_98;
          local_b8 = (int)uStack_90 + -1;
          if ((int)uStack_90 == 0) {
            local_b8 = 0;
          }
          cVar6 = FUN_146839966(lVar9,&local_c0,&local_b0);
          if (local_98 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          uVar11 = 0;
          if (cVar6 != '\0') {
            uVar11 = *local_b0;
            FUN_1493b69ce(&local_98);
            local_d0 = local_98;
            local_c8 = (int)uStack_90 + -1;
            if ((int)uStack_90 == 0) {
              local_c8 = 0;
            }
            cVar6 = FUN_14047fa10(uVar11,&local_d0,param_1 + 4);
            if (local_98 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            uVar11 = 0;
            if (cVar6 != '\0') {
              local_98 = (wchar_t *)0x0;
              uStack_90 = 0;
              uVar11 = *local_b0;
              FUN_1493b7378(&local_f0);
              local_e0 = local_f0;
              local_d8 = local_e8 + -1;
              if (local_e8 == 0) {
                local_d8 = 0;
              }
              uVar8 = FUN_14047fa10(uVar11,&local_e0,&local_98);
              if (local_f0 != 0) {
                FUN_1400020a8();
              }
              if (((char)uVar8 == '\0') ||
                 (cVar6 = FUN_1467f657a(param_1 + 6,&local_98), cVar6 == '\0')) {
                uVar11 = 0;
              }
              else {
                *(undefined1 *)(param_1 + 1) = 1;
                uVar11 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
              }
              if (local_98 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
            }
          }
        }
      }
    }
    if (local_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar1 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1493b7828 FUN_1493b7828 body=987 status=ok
// SIG undefined FUN_1493b7828(void)

longlong * FUN_1493b7828(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  void *pvVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  void *local_88;
  undefined8 uStack_80;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar6 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149e441a0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  *(undefined4 *)((longlong)plVar6 + 0x3c) = 0x80;
  *(undefined4 *)(plVar6 + 8) = 0xffffffff;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar1 = plVar6 + 2;
  plVar7 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149e441a0;
  local_70 = plVar7 + 2;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  *(undefined4 *)((longlong)plVar7 + 0x3c) = 0x80;
  *(undefined4 *)(plVar7 + 8) = 0xffffffff;
  local_68 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  (**(code **)(*param_1 + 8))(param_1,&local_88);
  FUN_1493b59d2(&local_98);
  FUN_145964f10(plVar1,&local_98,&local_88);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x10))(param_1,&local_88);
  FUN_1493b5a92(&local_98);
  FUN_145964f10(plVar1,&local_98,&local_88);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar7 = local_70;
  local_88 = (void *)0x0;
  uVar4 = *(uint *)(param_1 + 5);
  pvVar8 = (void *)param_1[4];
  uStack_80 = CONCAT44(uStack_80._4_4_,uVar4);
  if ((longlong)(int)uVar4 == 0) {
    uStack_80 = (ulonglong)uVar4;
  }
  else {
    FUN_1446dd670(&local_88,uVar4,0);
    memcpy(local_88,pvVar8,(longlong)(int)uVar4 * 2);
  }
  FUN_1493b69ce(&local_98);
  FUN_145964f10(plVar7,&local_98,&local_88);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1493b7c04(&local_88);
  FUN_145964e64(plVar7,&local_88,param_1 + 6);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1493b5f12(&local_88);
  FUN_1468399f8(plVar1,&local_88,&local_70);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_88 = (void *)0x0;
  uStack_80 = 0;
  FUN_14619f8aa(&local_98,&local_88,0);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_a8 = plVar1;
  local_a0 = plVar6;
  cVar5 = FUN_145d35994();
  plVar1 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_a0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_a0)();
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))();
      }
    }
  }
  pvVar8 = local_88;
  if (cVar5 == '\0') {
    pvVar8 = (void *)0x0;
    uVar9 = 0;
    uVar10 = 0;
  }
  else {
    local_88 = (void *)0x0;
    uVar9 = (undefined4)uStack_80;
    uVar10 = uStack_80._4_4_;
    uStack_80 = 0;
  }
  *param_2 = (longlong)pvVar8;
  *(undefined4 *)(param_2 + 1) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar10;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))(local_90);
      }
    }
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_68 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b7c04 FUN_1493b7c04 body=191 status=ok
// SIG undefined FUN_1493b7c04(void)

undefined8 * FUN_1493b7c04(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc108f0) {
    FUN_144b3d300(&DAT_14cc108f0);
    if (DAT_14cc108f0 == -1) {
      FUN_140056680(&DAT_14cc108e0,L"QueriesJsonString");
      atexit((_func_5014 *)&LAB_1444e06e1);
      _Init_thread_footer(&DAT_14cc108f0);
    }
  }
  *param_1 = 0;
  iVar1 = DAT_14cc108e8;
  _Src = DAT_14cc108e0;
  lVar2 = (longlong)DAT_14cc108e8;
  *(int *)(param_1 + 1) = DAT_14cc108e8;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  return param_1;
}



// FUNCTION 1493b7cc4 FUN_1493b7cc4 body=928 status=ok
// SIG undefined FUN_1493b7cc4(void)

undefined8 FUN_1493b7cc4(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_108 [40];
  wchar_t *local_e0;
  int local_d8;
  wchar_t *local_d0;
  int local_c8;
  wchar_t *local_c0;
  int local_b8;
  undefined8 *local_b0;
  wchar_t *local_a8;
  int local_a0;
  wchar_t *local_98;
  int local_90;
  wchar_t *local_88;
  int local_80;
  wchar_t *local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong *plStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar9 = FUN_14001cc68(0x88,0x10);
  FUN_14047b06c(lVar9,param_2);
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_149e44a40;
  plVar10[2] = lVar9;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  uVar11 = 0;
  bVar5 = FUN_14047b282(lVar9,&local_68,0);
  lVar9 = local_68;
  if ((local_68 != 0 & bVar5) != 1) goto LAB_1493b7d99;
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  FUN_1493b59d2(&local_98);
  local_88 = local_98;
  local_80 = local_90 + -1;
  if (local_90 == 0) {
    local_80 = 0;
  }
  cVar6 = FUN_14047fa10(lVar9,&local_88,&local_78);
  if (local_98 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (cVar6 == '\0') {
LAB_1493b8048:
    uVar11 = 0;
  }
  else {
    (**(code **)(*param_1 + 8))(param_1,&local_98);
    pwVar4 = local_98;
    if ((int)uStack_70 == local_90) {
      bVar12 = true;
      if (1 < (int)uStack_70) {
        iVar7 = wcscmp(local_78,local_98);
        bVar12 = iVar7 == 0;
      }
    }
    else {
      bVar12 = local_90 + (int)uStack_70 == 1;
    }
    if (pwVar4 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar4);
    }
    lVar9 = local_68;
    uVar11 = 0;
    if (bVar12) {
      FUN_1493b5a92(&local_98);
      local_a8 = local_98;
      local_a0 = local_90 + -1;
      if (local_90 == 0) {
        local_a0 = 0;
      }
      cVar6 = FUN_14047fa10(lVar9,&local_a8,param_1 + 2);
      if (local_98 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      lVar9 = local_68;
      uVar11 = 0;
      if (cVar6 != '\0') {
        local_b0 = (undefined8 *)0x0;
        FUN_1493b5f12(&local_98);
        local_c0 = local_98;
        local_b8 = local_90 + -1;
        if (local_90 == 0) {
          local_b8 = 0;
        }
        cVar6 = FUN_146839966(lVar9,&local_c0,&local_b0);
        if (local_98 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        uVar11 = 0;
        if (cVar6 != '\0') {
          uVar11 = *local_b0;
          FUN_1493b69ce(&local_98);
          local_d0 = local_98;
          local_c8 = local_90 + -1;
          if (local_90 == 0) {
            local_c8 = 0;
          }
          cVar6 = FUN_14047fa10(uVar11,&local_d0,param_1 + 4);
          if (local_98 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          uVar11 = 0;
          if (cVar6 != '\0') {
            uVar11 = *local_b0;
            FUN_1493b7c04(&local_98);
            local_e0 = local_98;
            local_d8 = local_90 + -1;
            if (local_90 == 0) {
              local_d8 = 0;
            }
            uVar8 = FUN_14047fa10(uVar11,&local_e0,param_1 + 6);
            if (local_98 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if ((char)uVar8 == '\0') goto LAB_1493b8048;
            *(undefined1 *)(param_1 + 1) = 1;
            uVar11 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
          }
        }
      }
    }
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1493b7d99:
  plVar1 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1493b8066 FUN_1493b8066 body=696 status=ok
// SIG undefined FUN_1493b8066(void)

ulonglong FUN_1493b8066(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [40];
  longlong local_c0 [2];
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  longlong *plStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14587c83e(param_1,0);
  lVar8 = FUN_14001cc68(0x88,0x10);
  FUN_14047b06c(lVar8,param_2);
  plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_149e44a40;
  plVar9[2] = lVar8;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  local_88 = (longlong *)0x0;
  plStack_80 = (longlong *)0x0;
  uVar11 = 0;
  cVar5 = FUN_14047b282(lVar8,&local_88,0);
  if (cVar5 != '\0') {
    if (local_88 == (longlong *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (longlong)(int)local_88[1] - (longlong)*(int *)((longlong)local_88 + 0x34);
      uVar10 = (uint)uVar11;
      if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34)) < uVar10) {
        if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b(uVar11);
        }
        FUN_140b80270(param_1,uVar11 & 0xffffffff);
        iVar6 = 1;
        if (3 < uVar10) {
          uVar10 = (uVar10 | 1) + 0xe;
          iVar6 = 0x1f;
          if (uVar10 != 0) {
            for (; uVar10 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          iVar6 = 1 << ((byte)iVar6 & 0x1f);
        }
        if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar6)) {
          *(int *)(param_1 + 0x48) = iVar6;
          FUN_140b7fdd8(param_1);
        }
      }
      plVar3 = local_88;
      plVar1 = local_88 + 2;
      local_70 = 0x100000000;
      local_60 = 0xffffffff;
      uStack_58 = 0;
      uStack_68 = plVar1;
      if ((int)local_88[5] == 0) {
        iVar6 = 0;
      }
      else {
        FUN_1449c0562(&local_70);
        iVar6 = (int)plVar3[5];
      }
      uStack_90 = CONCAT44(uStack_54,uStack_58);
      local_98 = local_60;
      uVar4 = local_98;
      local_a8 = (undefined4)local_70;
      uStack_a4 = local_70._4_4_;
      uStack_a0 = (undefined4)uStack_68;
      uStack_9c = uStack_68._4_4_;
      local_b0 = plVar3;
      local_98._4_4_ = (int)((ulonglong)local_60 >> 0x20);
      iVar7 = local_98._4_4_;
      if ((local_98._4_4_ != iVar6) || (local_98 = uVar4, uStack_68 != plVar1)) {
        do {
          local_98 = uVar4;
          lVar8 = *local_b0 + (longlong)iVar7 * 0x28;
          FUN_14047e026(*(undefined8 *)(lVar8 + 0x10),local_c0);
          local_70 = lVar8;
          uStack_68 = local_c0;
          FUN_140dbdf0c(param_1,local_4c,&local_70,0);
          if (local_c0[0] != 0) {
            FUN_1400020a8();
          }
          local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~uStack_a4);
          FUN_1449c0562(&local_a8);
          iVar7 = local_98._4_4_;
          uVar4 = local_98;
        } while (local_b0 != plVar3 ||
                 ((longlong *)CONCAT44(uStack_9c,uStack_a0) != plVar1 || local_98._4_4_ != iVar6));
      }
      uVar11 = CONCAT71((int7)((ulonglong)&local_a8 >> 8),1);
    }
  }
  plVar1 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_80 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b8320 FUN_1493b8320 body=772 status=ok
// SIG undefined FUN_1493b8320(void)

undefined8 * FUN_1493b8320(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  LARGE_INTEGER *pLVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined2 *puVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8 [2];
  longlong local_98 [2];
  LARGE_INTEGER local_88;
  undefined8 local_80;
  undefined ***local_78;
  undefined **local_68;
  undefined8 *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 2;
  param_1[3] = param_2;
  FUN_1444e0328(param_1 + 4);
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  param_1[0x13] = puVar3;
  param_1[0x12] = puVar3;
  param_1[0x14] = 0;
  pLVar1 = (LARGE_INTEGER *)(param_1 + 0x18);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1c] = 0;
  iVar2 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 0x1d) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1c,iVar2,0);
    memcpy((void *)param_1[0x1c],_Src,(longlong)iVar2 * 2);
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1e),4000);
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  QueryPerformanceCounter(&local_88);
  local_98[0] = 0;
  local_98[1] = 0;
  FUN_144a83b10(local_98,local_88.s.LowPart & 0xefffffff);
  FUN_140056680(local_a8,L"InterchangeWorkerHandler_");
  FUN_1401c7f3e(&local_88,local_a8,local_98);
  if (pLVar1 == &local_88) {
    if (local_88.QuadPart != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (pLVar1->QuadPart != 0) {
      FUN_1400020a8();
    }
    ((LARGE_INTEGER *)(param_1 + 0x18))->s = (_struct_19)local_88;
    local_88.QuadPart = 0;
    *(undefined4 *)(param_1 + 0x19) = (undefined4)local_80;
    *(undefined4 *)((longlong)param_1 + 0xcc) = local_80._4_4_;
    local_80 = 0;
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  local_b0 = 0;
  local_b8 = 0xffffffffffffffff;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14bc9e530;
  local_88.QuadPart = (LONGLONG)FUN_1444e089e;
  if (*(int *)(param_1 + 0x19) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)pLVar1->QuadPart;
  }
  local_d0 = &local_b8;
  local_c8 = 1;
  local_d8 = 0;
  local_60 = param_1;
  FUN_1411b0d90(local_98,puVar5,&local_88,0);
  FUN_14582e8cc(param_1 + 0x16,local_98);
  FUN_1411ee6a8(local_98);
  if ((code *)local_88.QuadPart != (code *)0x0) {
    pppuVar4 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar4 = &local_68;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  QueryPerformanceCounter(&local_88);
  param_1[0x26] = (double)local_88.QuadPart * DAT_14c83f420 + 16777216.0;
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b8626 FUN_1493b8626 body=199 status=ok
// SIG undefined FUN_1493b8626(void)

void FUN_1493b8626(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  *(undefined1 *)(param_1 + 0x25) = 1;
  plVar1 = param_1 + 0x16;
  cVar2 = FUN_1467c2814(plVar1);
  if (cVar2 != '\0') {
    FUN_140f14a8a(plVar1);
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1411ee6a8(plVar1);
  FUN_1493b8d76(param_1 + 0x12);
  param_1[4] = (longlong)&PTR_FUN_14bc9df60;
  FUN_1493b4fea(param_1 + 0x10);
  FUN_1493b4fac(param_1 + 4);
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493b86ee FUN_1493b86ee body=606 status=ok
// SIG undefined FUN_1493b86ee(void)

undefined8 * FUN_1493b86ee(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined1 auStack_108 [32];
  longlong local_e8 [4];
  longlong local_c8 [4];
  longlong local_a8 [2];
  longlong local_98 [4];
  longlong local_78 [2];
  longlong local_68 [3];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc10920) {
    FUN_144b3d300(&DAT_14cc10920);
    if (DAT_14cc10920 == -1) {
      local_68[0] = 0;
      local_68[1] = 0;
      FUN_144a83b10(local_68,0);
      local_98[0] = 0;
      local_98[1] = 0;
      FUN_144a83b10(local_98,0);
      local_c8[0] = 0;
      local_c8[1] = 0;
      FUN_144a83b10(local_c8,0);
      local_e8[0] = 0;
      local_e8[1] = 0;
      FUN_144a83b10(local_e8,0x14);
      FUN_144a882a8(local_e8 + 2,local_e8,&DAT_149e0635c);
      FUN_1401c7f3e(local_c8 + 2,local_e8 + 2,local_c8);
      FUN_144a882a8(local_a8,local_c8 + 2,&DAT_149e0635c);
      FUN_1401c7f3e(local_98 + 2,local_a8,local_98);
      FUN_144a882a8(local_78,local_98 + 2,&DAT_149e0635c);
      FUN_1401c7f3e(&DAT_14cc10910,local_78,local_68);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      if (local_98[2] != 0) {
        FUN_1400020a8();
      }
      if (local_a8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_c8[2] != 0) {
        FUN_1400020a8();
      }
      if (local_e8[2] != 0) {
        FUN_1400020a8();
      }
      if (local_e8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_c8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444e0703);
      _Init_thread_footer(&DAT_14cc10920);
    }
  }
  *param_1 = 0;
  iVar1 = DAT_14cc10918;
  _Src = DAT_14cc10910;
  lVar2 = (longlong)DAT_14cc10918;
  *(int *)(param_1 + 1) = DAT_14cc10918;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b894e FUN_1493b894e body=271 status=ok
// SIG undefined FUN_1493b894e(void)

void FUN_1493b894e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_78 [5];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  iVar1 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
    lVar3 = 0;
    do {
      local_78[2] = 0;
      local_78[3] = 0;
      local_78[0] = 0;
      local_78[1] = 0;
      local_88 = local_78 + 2;
      FUN_1444df970(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(lVar2 + lVar3),4,local_78);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(local_78[2],local_78[3] & 0xffffffff);
      if (local_78[2] != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 4;
    } while ((longlong)iVar1 * 4 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_14481578e(param_1 + 0x118,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b8a5e FUN_1493b8a5e body=170 status=ok
// SIG undefined FUN_1493b8a5e(void)

void FUN_1493b8a5e(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  switch(uVar1) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  case 2:
    *(undefined1 *)(param_1 + 0x138) = 1;
    local_20 = &PTR_FUN_14bc9e270;
    FUN_1493b54ec(param_1 + 0x90,&local_20,0);
    break;
  case 5:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  case 7:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b8b3c FUN_1493b8b3c body=136 status=ok
// SIG undefined FUN_1493b8b3c(void)

void FUN_1493b8b3c(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  local_28 = param_2 + 0x30;
  FUN_144a9d2f8(param_1 + 0x118);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  local_38 = param_2 + 0x20;
  FUN_1444df970(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_2 + 0x30),
                *(undefined4 *)(param_2 + 8),param_2 + 0x10);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b8bc6 FUN_1493b8bc6 body=268 status=ok
// SIG undefined FUN_1493b8bc6(void)

void FUN_1493b8bc6(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88 [3];
  undefined1 local_70 [12];
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar1 = *(int *)(param_2 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    lVar3 = 0;
    do {
      if ((*(int *)(lVar2 + 4 + lVar3) != 1) &&
         (FUN_1493b4a86(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(lVar2 + lVar3),&local_64,
                        local_70), local_64 == 1)) {
        local_88[0] = 0;
        local_88[1] = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = &local_98;
        FUN_1444df970(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(lVar2 + lVar3),4,local_88);
        FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_88[0] != 0) {
          FUN_1400020a8();
        }
      }
      lVar3 = lVar3 + 0xc;
    } while ((longlong)iVar1 * 0xc != lVar3);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493b8cd4 FUN_1493b8cd4 body=57 status=ok
// SIG undefined FUN_1493b8cd4(void)

undefined8 * FUN_1493b8cd4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc9df10;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b8d12 FUN_1493b8d12 body=38 status=ok
// SIG undefined FUN_1493b8d12(void)

undefined8 FUN_1493b8d12(undefined8 param_1,int param_2)

{
  FUN_1493b4fac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b8d38 FUN_1493b8d38 body=60 status=ok
// SIG undefined FUN_1493b8d38(void)

undefined8 * FUN_1493b8d38(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc9df60;
  FUN_1493b4fea(param_1 + 0xc);
  FUN_1493b4fac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b8d76 FUN_1493b8d76 body=89 status=ok
// SIG undefined FUN_1493b8d76(void)

void FUN_1493b8d76(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  while (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar3;
    plVar4 = (longlong *)puVar3[2];
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
    FUN_1400020a8(puVar3);
    puVar3 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1493b8dd0 FUN_1493b8dd0 body=57 status=ok
// SIG undefined FUN_1493b8dd0(void)

undefined8 * FUN_1493b8dd0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc9e230;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b8e0e FUN_1493b8e0e body=29 status=ok
// SIG undefined FUN_1493b8e0e(void)

undefined8 FUN_1493b8e0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b8e30 FUN_1493b8e30 body=29 status=ok
// SIG undefined FUN_1493b8e30(void)

undefined8 FUN_1493b8e30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b8e54 FUN_1493b8e54 body=29 status=ok
// SIG undefined FUN_1493b8e54(void)

undefined8 FUN_1493b8e54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b8e72 FUN_1493b8e72 body=29 status=ok
// SIG undefined FUN_1493b8e72(void)

undefined8 FUN_1493b8e72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b8eae FUN_1493b8eae body=29 status=ok
// SIG undefined FUN_1493b8eae(void)

undefined8 FUN_1493b8eae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b8ecc FUN_1493b8ecc body=57 status=ok
// SIG undefined FUN_1493b8ecc(void)

undefined8 * FUN_1493b8ecc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc9e2f0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b8f0c FUN_1493b8f0c body=29 status=ok
// SIG undefined FUN_1493b8f0c(void)

undefined8 FUN_1493b8f0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b8f44 FUN_1493b8f44 body=29 status=ok
// SIG undefined FUN_1493b8f44(void)

undefined8 FUN_1493b8f44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b8f6c FUN_1493b8f6c body=29 status=ok
// SIG undefined FUN_1493b8f6c(void)

undefined8 FUN_1493b8f6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b8f8a FUN_1493b8f8a body=38 status=ok
// SIG undefined FUN_1493b8f8a(void)

undefined8 FUN_1493b8f8a(undefined8 param_1,int param_2)

{
  FUN_1493b8fb4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b8fb4 FUN_1493b8fb4 body=70 status=ok
// SIG undefined FUN_1493b8fb4(void)

void FUN_1493b8fb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc9e370;
  FUN_1447a1747(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493b9014 FUN_1493b9014 body=29 status=ok
// SIG undefined FUN_1493b9014(void)

undefined8 FUN_1493b9014(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b904c FUN_1493b904c body=29 status=ok
// SIG undefined FUN_1493b904c(void)

undefined8 FUN_1493b904c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b906a FUN_1493b906a body=57 status=ok
// SIG undefined FUN_1493b906a(void)

undefined8 * FUN_1493b906a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc9e3d0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b90a8 FUN_1493b90a8 body=1 status=ok
// SIG undefined FUN_1493b90a8(void)

void FUN_1493b90a8(void)

{
  return;
}



// FUNCTION 1493b90aa FUN_1493b90aa body=29 status=ok
// SIG undefined FUN_1493b90aa(void)

undefined8 FUN_1493b90aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b90c8 FUN_1493b90c8 body=370 status=ok
// SIG undefined FUN_1493b90c8(void)

longlong * FUN_1493b90c8(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1493b9272(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1493b46eb(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1493b9272(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1493b923c(param_2);
        FUN_1493b46eb(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1493b923c FUN_1493b923c body=54 status=ok
// SIG undefined FUN_1493b923c(void)

longlong FUN_1493b923c(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1493b92e2(param_1,iVar1);
  }
  return (longlong)iVar1 * 0xc + *param_1;
}



// FUNCTION 1493b9272 FUN_1493b9272 body=112 status=ok
// SIG undefined FUN_1493b9272(void)

void FUN_1493b9272(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 1493b92e2 FUN_1493b92e2 body=147 status=ok
// SIG undefined FUN_1493b92e2(void)

void FUN_1493b92e2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1493b9376 FUN_1493b9376 body=147 status=ok
// SIG undefined FUN_1493b9376(void)

void FUN_1493b9376(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1493b940a FUN_1493b940a body=82 status=ok
// SIG undefined FUN_1493b940a(void)

void FUN_1493b940a(longlong *param_1)

{
  FUN_1449db362(param_1 + 7);
  FUN_1447a1747(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
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



// FUNCTION 1493b945c FUN_1493b945c body=279 status=ok
// SIG undefined FUN_1493b945c(void)

undefined8 * FUN_1493b945c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = param_2[2];
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  uVar3 = param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_140b856de(param_1 + 5,iVar1,0);
    FUN_140b8566a(param_1[5],uVar3,iVar1);
  }
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_140146ccc(param_1 + 7,param_2 + 7);
  param_1[9] = param_2[9];
  return param_1;
}



// FUNCTION 1493b9574 FUN_1493b9574 body=107 status=ok
// SIG undefined FUN_1493b9574(void)

void FUN_1493b9574(LPCRITICAL_SECTION param_1)

{
  HANDLE pvVar1;
  
  FUN_1493b4de4();
  pvVar1 = param_1[2].OwningThread;
  if (pvVar1 != (HANDLE)0x0) {
    FUN_1493b8626(pvVar1);
    FUN_1400020a8(pvVar1);
  }
  if (param_1[2].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
  if (param_1[1].LockSemaphore != (HANDLE)0x0) {
    FUN_1400020a8();
  }
  FUN_1493b95df(param_1[1].DebugInfo,param_1[1].LockCount);
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 1493b95df FUN_1493b95df body=38 status=ok
// SIG undefined FUN_1493b95df(void)

void FUN_1493b95df(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1493b940a(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 1493b9606 FUN_1493b9606 body=158 status=ok
// SIG undefined FUN_1493b9606(void)

void FUN_1493b9606(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = param_2[2];
  param_1[3] = 0;
  param_1[3] = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[4] = 0;
  param_1[5] = 0;
  param_1[5] = param_2[5];
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[7] = param_2[7];
  param_2[7] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  param_1[9] = param_2[9];
  return;
}



// FUNCTION 1493b96a4 FUN_1493b96a4 body=31 status=ok
// SIG undefined FUN_1493b96a4(void)

undefined8 FUN_1493b96a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493b96e0 FUN_1493b96e0 body=93 status=ok
// SIG undefined FUN_1493b96e0(void)

void FUN_1493b96e0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bc9e480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493b973e FUN_1493b973e body=126 status=ok
// SIG undefined FUN_1493b973e(void)

void FUN_1493b973e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc9e480;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493b97ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493b97bc FUN_1493b97bc body=21 status=ok
// SIG undefined FUN_1493b97bc(void)

undefined8 FUN_1493b97bc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1493b97d2 FUN_1493b97d2 body=36 status=ok
// SIG undefined FUN_1493b97d2(void)

undefined8 FUN_1493b97d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1493b9812 FUN_1493b9812 body=93 status=ok
// SIG undefined FUN_1493b9812(void)

void FUN_1493b9812(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bc9ee50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493b9870 FUN_1493b9870 body=123 status=ok
// SIG undefined FUN_1493b9870(void)

void FUN_1493b9870(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc9ee50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493b98ec FUN_1493b98ec body=21 status=ok
// SIG undefined FUN_1493b98ec(void)

undefined8 FUN_1493b98ec(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1493b9901 FUN_1493b9901 body=366 status=ok
// SIG undefined FUN_1493b9901(void)

undefined8 * FUN_1493b9901(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_1d8 [40];
  uint local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined **local_1a0 [18];
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  ulonglong uStack_f0;
  uint local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  uint local_d8;
  undefined1 local_c8 [136];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_144893a1c(&local_f8);
  memset(local_1a0,0,0x90);
  FUN_144869430(local_1a0);
  local_110 = 0;
  local_1a0[0] = &PTR_FUN_149e1e590;
  local_100 = 0;
  local_108 = &local_f8;
  FUN_144a69558(local_1a0,1);
  (*(code *)local_1a0[0][0x1e])(local_1a0,1);
  local_1a0[0] = &PTR_FUN_149e1e330;
  FUN_14021219d(local_1a0,param_2);
  FUN_1427879d8(local_c8);
  FUN_140c54e34(local_c8,local_f8,uStack_f0 & 0xffffffff);
  FUN_140c54d7a(local_c8);
  FUN_142787a10(local_c8,&local_e8);
  local_1b0 = local_d8 ^ local_e8;
  local_1ac = local_e4;
  local_1a4 = local_dc;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1407c869a(&local_1b0,param_1,9);
  FUN_1427879f6(local_c8);
  FUN_144a7fc42(local_1a0);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b9a70 FUN_1493b9a70 body=257 status=ok
// SIG undefined FUN_1493b9a70(void)

void FUN_1493b9a70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_2[1];
  if ((undefined8 *)((longlong *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined8 *)(param_1 + 0x50),8);
    }
    else {
      thunk_FUN_146821949(param_2);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x50) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
  puVar1 = *(undefined8 **)param_2[1];
  if ((undefined8 *)((longlong *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined8 *)(param_1 + 0x58),8);
    }
    else {
      thunk_FUN_146821949(param_2);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x58) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
  puVar1 = *(undefined8 **)param_2[1];
  if ((undefined8 *)((longlong *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined8 *)(param_1 + 0x60),8);
    }
    else {
      thunk_FUN_146821949(param_2);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x60) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
  }
  FUN_1400f4d04(param_2,param_1 + 0x68);
  return;
}



// FUNCTION 1493b9b72 FUN_1493b9b72 body=68 status=ok
// SIG undefined FUN_1493b9b72(void)

longlong FUN_1493b9b72(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1493bb040(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x60 + *param_1;
  FUN_1493baff5(lVar2,1);
  return lVar2;
}



// FUNCTION 1493b9bb6 FUN_1493b9bb6 body=373 status=ok
// SIG undefined FUN_1493b9bb6(void)

undefined8 * FUN_1493b9bb6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x4c) == -1) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = FUN_144a78877((int)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20) * 0x17 +
                          (int)*(undefined8 *)(param_1 + 0x28),
                          (int)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20) * 0x17 +
                          (int)*(undefined8 *)(param_1 + 0x30));
    uVar3 = FUN_144a78877(uVar3,(int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2);
    local_48 = 0;
    uStack_40 = 0;
    FUN_144a83b10(&local_48,uVar3);
    FUN_1407ec8fc(local_38,param_1 + 0x10,&local_48);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_1493b9901(&local_48,local_38);
    if (&local_48 == (longlong *)(param_1 + 0x40)) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x40) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x48) = (undefined4)uStack_40;
      *(undefined4 *)(param_1 + 0x4c) = uStack_40._4_4_;
    }
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x48);
  _Src = *(void **)(param_1 + 0x40);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493b9d2c FUN_1493b9d2c body=760 status=ok
// SIG undefined FUN_1493b9d2c(void)

longlong * FUN_1493b9d2c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar7 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149e441a0;
  plVar1 = plVar7 + 2;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  *(undefined4 *)((longlong)plVar7 + 0x3c) = 0x80;
  *(undefined4 *)(plVar7 + 8) = 0xffffffff;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_140056680(&local_68,L"SceneNodeUniqueID");
  FUN_145964e64(plVar1,&local_68,param_1);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_68,L"PayloadKey.UniqueID");
  FUN_145964e64(plVar1,&local_68,param_1 + 0x10);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  bVar5 = *(byte *)(param_1 + 0x20);
  FUN_140056680(&local_68,L"PayloadKey.Type");
  FUN_14626eb76(plVar1,&local_68,(double)bVar5);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  FUN_140056680(&local_68,L"TimeDescription.BakeFrequency");
  FUN_14626eb76(plVar1,&local_68,uVar4);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  FUN_140056680(&local_68,L"TimeDescription.RangeStartSecond");
  FUN_14626eb76(plVar1,&local_68,uVar4);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  FUN_140056680(&local_68,L"TimeDescription.RangeStopSecond");
  FUN_14626eb76(plVar1,&local_68,uVar4);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  uStack_60 = 0;
  FUN_14619f8aa(local_78,&local_68,0);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_88 = plVar1;
  local_80 = plVar7;
  cVar6 = FUN_145d35994();
  plVar1 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_80 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_80)();
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))();
      }
    }
  }
  lVar8 = local_68;
  if (cVar6 == '\0') {
    lVar8 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
  else {
    local_68 = 0;
    uVar9 = (undefined4)uStack_60;
    uVar10 = uStack_60._4_4_;
    uStack_60 = 0;
  }
  *param_2 = lVar8;
  *(undefined4 *)(param_2 + 1) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar10;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar3 = (int *)((longlong)local_70 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ba026 FUN_1493ba026 body=541 status=ok
// SIG undefined FUN_1493ba026(void)

longlong * FUN_1493ba026(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_a0 = param_1;
  if ((longlong)(int)param_2[1] != 0) {
    lVar9 = *param_2;
    lVar11 = (longlong)(int)param_2[1] * 0x50;
    do {
      FUN_1493b9d2c(lVar9,&local_88);
      plVar6 = (longlong *)FUN_14001cc68(0x30,0x10);
      uVar3 = uStack_70;
      plVar6[1] = (longlong)&DAT_100000001;
      *plVar6 = (longlong)&PTR_FUN_149e43e60;
      plVar6[2] = (longlong)&PTR_FUN_149e43e80;
      plVar6[4] = local_88;
      local_88 = 0;
      *(undefined4 *)(plVar6 + 5) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)plVar6 + 0x2c) = uStack_80._4_4_;
      uStack_80 = 0;
      *(undefined4 *)(plVar6 + 3) = 2;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      lVar10 = (longlong)(int)uStack_70;
      uVar5 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
      if (uStack_70._4_4_ < uVar5) {
        FUN_14047d050(&local_78,uVar3 & 0xffffffff);
      }
      *(longlong **)(local_78 + lVar10 * 0x10) = plVar6 + 2;
      *(longlong **)(local_78 + 8 + lVar10 * 0x10) = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      lVar9 = lVar9 + 0x50;
      lVar11 = lVar11 + -0x50;
    } while (lVar11 != 0);
  }
  local_88 = 0;
  uStack_80 = 0;
  uVar8 = 0;
  FUN_14619f8aa(&local_98,&local_88,0);
  cVar4 = FUN_14683ccb2(&local_78,local_98,1);
  lVar9 = local_88;
  plVar6 = local_a0;
  if (cVar4 == '\0') {
    lVar9 = 0;
    uVar7 = 0;
  }
  else {
    local_88 = 0;
    uVar8 = (undefined4)uStack_80;
    uVar7 = uStack_80._4_4_;
    uStack_80 = 0;
  }
  *local_a0 = lVar9;
  *(undefined4 *)(local_a0 + 1) = uVar8;
  *(undefined4 *)((longlong)local_a0 + 0xc) = uVar7;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))(local_90);
      }
    }
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_14047c710(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ba244 FUN_1493ba244 body=89 status=ok
// SIG undefined FUN_1493ba244(void)

void FUN_1493ba244(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0x4c) != -1) {
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1[8] = 0;
    param_1[9] = -0x100000000;
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493ba29e FUN_1493ba29e body=108 status=ok
// SIG undefined FUN_1493ba29e(void)

void FUN_1493ba29e(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  
  *(undefined4 *)(param_2 + 4) = param_1[1];
  *(undefined4 *)(param_2 + 8) = param_1[2];
  bVar1 = (byte)*param_1;
  if (2 < bVar1) {
    bVar1 = 3;
  }
  *param_2 = bVar1;
  bVar1 = 3;
  if (*(byte *)((longlong)param_1 + 1) < 3) {
    bVar1 = *(byte *)((longlong)param_1 + 1);
  }
  param_2[1] = bVar1;
  bVar1 = 0;
  if (*(byte *)((longlong)param_1 + 2) < 4) {
    bVar1 = *(byte *)((longlong)param_1 + 2);
  }
  param_2[2] = bVar1;
  *(undefined4 *)(param_2 + 0xc) = param_1[3];
  *(undefined4 *)(param_2 + 0x10) = param_1[4];
  *(undefined4 *)(param_2 + 0x14) = param_1[5];
  *(undefined4 *)(param_2 + 0x18) = param_1[6];
  return;
}



// FUNCTION 1493ba30a FUN_1493ba30a body=641 status=ok
// SIG undefined FUN_1493ba30a(void)

void FUN_1493ba30a(undefined1 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,1);
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,1);
  }
  else {
    param_1[2] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 4,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 8,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0xc,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x10,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x14,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = (undefined4 *)(param_1 + 0x18);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001493ba523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,puVar3,4);
      return;
    }
    thunk_FUN_14572512c(param_2,puVar3);
    return;
  }
  *puVar3 = *puVar2;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  return;
}



// FUNCTION 1493ba58c FUN_1493ba58c body=219 status=ok
// SIG undefined FUN_1493ba58c(void)

void FUN_1493ba58c(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = (int)param_1[1];
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)(param_2 + 0x7c) < iVar2) {
    FUN_14093d050(param_2 + 0x70);
    iVar2 = (int)param_1[1];
  }
  if (iVar2 != 0) {
    lVar3 = *param_1;
    lVar4 = (longlong)iVar2 * 0x1c;
    do {
      FUN_14045d416(&local_38);
      local_40 = local_38;
      local_48 = 0;
      FUN_1406507bc(param_2,&local_34,*(undefined4 *)(lVar3 + 4),*(undefined4 *)(lVar3 + 8));
      uVar1 = FUN_14045d1a0(param_2,local_34);
      FUN_1493ba29e(lVar3,uVar1);
      lVar3 = lVar3 + 0x1c;
      lVar4 = lVar4 + -0x1c;
    } while (lVar4 != 0);
  }
  FUN_14045d2f8(param_2,0);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493ba66a FUN_1493ba66a body=14 status=ok
// SIG undefined FUN_1493ba66a(void)

void FUN_1493ba66a(undefined8 param_1,undefined8 param_2)

{
  FUN_1493bb2a4(param_2,param_1);
  return;
}



// FUNCTION 1493ba678 FUN_1493ba678 body=92 status=ok
// SIG undefined FUN_1493ba678(void)

void FUN_1493ba678(longlong param_1,undefined8 param_2)

{
  FUN_146db24e8(param_2,param_1);
  FUN_1493bb592(param_1 + 0x10,param_2);
  FUN_1493bb6c0(param_1 + 0x30,param_2);
  FUN_1493bb7f0(param_1 + 0x20,param_2);
  FUN_1493bb91e(param_1 + 0x40,param_2);
  FUN_1493bba4e(param_1 + 0x50,param_2);
  return;
}



// FUNCTION 1493ba76e FUN_1493ba76e body=59 status=ok
// SIG undefined FUN_1493ba76e(void)

undefined8 FUN_1493ba76e(longlong *param_1)

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



// FUNCTION 1493ba844 FUN_1493ba844 body=54 status=ok
// SIG undefined FUN_1493ba844(void)

undefined1 FUN_1493ba844(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1493ba95c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1493ba8a2 FUN_1493ba8a2 body=59 status=ok
// SIG undefined FUN_1493ba8a2(void)

undefined8 FUN_1493ba8a2(longlong *param_1)

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



// FUNCTION 1493ba8e8 FUN_1493ba8e8 body=37 status=ok
// SIG undefined FUN_1493ba8e8(void)

void FUN_1493ba8e8(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1493ba95c FUN_1493ba95c body=92 status=ok
// SIG undefined FUN_1493ba95c(void)

undefined8 * FUN_1493ba95c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1493ba9b8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
      }
    }
  }
  return param_1;
}



// FUNCTION 1493ba9b8 FUN_1493ba9b8 body=121 status=ok
// SIG undefined FUN_1493ba9b8(void)

void FUN_1493ba9b8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1c,4);
    iVar2 = (int)(uVar1 / 0x1c);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x1c,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}


