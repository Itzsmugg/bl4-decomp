// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1493474d0 FUN_1493474d0 body=156 status=ok
// SIG undefined FUN_1493474d0(void)

undefined4 FUN_1493474d0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetTwoSided");
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



// FUNCTION 149347578 FUN_149347578 body=172 status=ok
// SIG undefined FUN_149347578(void)

void FUN_149347578(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_149347626(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149347626 FUN_149347626 body=156 status=ok
// SIG undefined FUN_149347626(void)

undefined4 FUN_149347626(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetTwoSidedTransmission");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493476ca FUN_1493476ca body=161 status=ok
// SIG undefined FUN_1493476ca(void)

void FUN_1493476ca(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14934776c(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934776c FUN_14934776c body=158 status=ok
// SIG undefined FUN_14934776c(void)

undefined4 FUN_14934776c(longlong *param_1,undefined4 param_2)

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
  FUN_144a882a8(local_38,local_48,L".SetBlendMode");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc13f(param_1[5],param_1 + 0x18,local_38,&local_24);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149347816 FUN_149347816 body=172 status=ok
// SIG undefined FUN_149347816(void)

void FUN_149347816(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_1493478c4(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493478c4 FUN_1493478c4 body=159 status=ok
// SIG undefined FUN_1493478c4(void)

undefined4 FUN_1493478c4(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetIsAShaderFunction");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149347970 FUN_149347970 body=252 status=ok
// SIG undefined FUN_149347970(void)

void FUN_149347970(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar2 = FUN_149347a6e(param_1,puVar3,0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149347a6e FUN_149347a6e body=159 status=ok
// SIG undefined FUN_149347a6e(void)

undefined4 FUN_149347a6e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetOpacityMaskClipValue");
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



// FUNCTION 149347b18 FUN_149347b18 body=172 status=ok
// SIG undefined FUN_149347b18(void)

void FUN_149347b18(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_149347bc6(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149347bc6 FUN_149347bc6 body=159 status=ok
// SIG undefined FUN_149347bc6(void)

undefined4 FUN_149347bc6(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetScreenSpaceReflections");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x16,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149347c70 FUN_149347c70 body=172 status=ok
// SIG undefined FUN_149347c70(void)

void FUN_149347c70(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_149347d1e(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149347d1e FUN_149347d1e body=156 status=ok
// SIG undefined FUN_149347d1e(void)

undefined4 FUN_149347d1e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetTwoSided");
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



// FUNCTION 149347dc6 FUN_149347dc6 body=172 status=ok
// SIG undefined FUN_149347dc6(void)

void FUN_149347dc6(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_149347e74(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149347e74 FUN_149347e74 body=156 status=ok
// SIG undefined FUN_149347e74(void)

undefined4 FUN_149347e74(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetTwoSidedTransmission");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149347f14 FUN_149347f14 body=144 status=ok
// SIG undefined FUN_149347f14(void)

undefined4 FUN_149347f14(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 uStack_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == '\0') {
    FUN_14933bd24(&local_40);
  }
  else {
    FUN_149346170();
  }
  local_30 = local_40;
  uStack_28 = uStack_38;
  local_40 = 0;
  uStack_38 = 0;
  uVar1 = (**(code **)(*param_1 + 0x2b8))(param_1,&local_30);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149347fa6 FUN_149347fa6 body=356 status=ok
// SIG undefined FUN_149347fa6(void)

undefined8 FUN_149347fa6(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140056680(&local_48,&DAT_149e01f64);
  FUN_140056680(local_68,&DAT_149e01f64);
  FUN_144a882a8(local_58,local_68,L"Shaders");
  FUN_1401c7f3e(param_1,local_58,&local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_3 + 1) == 0) {
    FUN_1400020e8(param_1,*param_2,*(undefined4 *)(param_2 + 1));
  }
  else {
    FUN_140056680(local_68,&DAT_149e01f64);
    FUN_1427469f4(local_58,*param_3,*(undefined4 *)(param_3 + 1),local_68);
    FUN_1467acaa6(&local_48,local_58,*param_2,*(undefined4 *)(param_2 + 1));
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_1,local_48,iVar1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934810c FUN_14934810c body=302 status=ok
// SIG undefined FUN_14934810c(void)

undefined8 FUN_14934810c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_50 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = *param_3;
  uStack_60 = param_3[1];
  local_78 = *(undefined4 *)param_2;
  uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_70 = *(undefined4 *)(param_2 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_149347fa6(local_50);
  uVar1 = FUN_14934823b(param_1);
  FUN_14006620a(&local_40,*param_2,*(undefined4 *)(param_2 + 1));
  local_88 = local_40;
  uStack_84 = uStack_3c;
  uStack_80 = uStack_38;
  uStack_7c = uStack_34;
  FUN_1444ba64e(uVar1,local_50,&local_88,2);
  if (CONCAT44(uStack_84,local_88) != 0) {
    FUN_1400020a8();
  }
  FUN_1492f22b0(param_1,local_98,uVar1);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14006620a(&local_40,*param_3,*(undefined4 *)(param_3 + 1));
  local_88 = local_40;
  uStack_84 = uStack_3c;
  uStack_80 = uStack_38;
  uStack_7c = uStack_34;
  FUN_1492f3e1a(param_1,local_50,&local_88);
  if (CONCAT44(uStack_84,local_88) != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934823b FUN_14934823b body=148 status=ok
// SIG undefined FUN_14934823b(void)

undefined8 FUN_14934823b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14595e754();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493482d0 FUN_1493482d0 body=32 status=ok
// SIG undefined FUN_1493482d0(void)

undefined8 FUN_1493482d0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"ShaderNode");
  return param_2;
}



// FUNCTION 1493482f0 FUN_1493482f0 body=226 status=ok
// SIG undefined FUN_1493482f0(void)

undefined8 FUN_1493482f0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140056680(local_50,&DAT_149e01f64);
  FUN_140056680(local_70,&DAT_149e01f64);
  FUN_144a882a8(local_60,local_70,L"Shaders");
  FUN_1401c7f3e(local_40,local_60,local_50);
  FUN_1467acaa6(param_1,local_40,*param_2,*(undefined4 *)(param_2 + 1));
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493483d4 FUN_1493483d4 body=208 status=ok
// SIG undefined FUN_1493483d4(void)

undefined8 FUN_1493483d4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = *(undefined4 *)param_2;
  uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_1493482f0(local_48);
  uVar1 = FUN_1493484a5(param_1);
  FUN_14006620a(&local_38,*param_2,*(undefined4 *)(param_2 + 1));
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  FUN_1444ba64e(uVar1,local_48,&local_68,2);
  if (CONCAT44(uStack_64,local_68) != 0) {
    FUN_1400020a8();
  }
  FUN_1492f22b0(param_1,local_78,uVar1);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493484a5 FUN_1493484a5 body=148 status=ok
// SIG undefined FUN_1493484a5(void)

undefined8 FUN_1493484a5(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145a93c10();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934853a FUN_14934853a body=32 status=ok
// SIG undefined FUN_14934853a(void)

undefined8 FUN_14934853a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"ShaderGraphNode");
  return param_2;
}



// FUNCTION 14934855a FUN_14934855a body=32 status=ok
// SIG undefined FUN_14934855a(void)

undefined8 FUN_14934855a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FunctionCallShaderNode");
  return param_2;
}



// FUNCTION 149348580 FUN_149348580 body=172 status=ok
// SIG undefined FUN_149348580(void)

void FUN_149348580(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_14934862e(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934862e FUN_14934862e body=159 status=ok
// SIG undefined FUN_14934862e(void)

undefined4 FUN_14934862e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetWrapU");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493498d3(param_1[5],param_1 + 0x23,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493486d4 FUN_1493486d4 body=172 status=ok
// SIG undefined FUN_1493486d4(void)

void FUN_1493486d4(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_149348782(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149348782 FUN_149348782 body=159 status=ok
// SIG undefined FUN_149348782(void)

undefined4 FUN_149348782(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetWrapV");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1493498d3(param_1[5],param_1 + 0x25,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149348822 FUN_149348822 body=131 status=ok
// SIG undefined FUN_149348822(void)

void FUN_149348822(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149349d10(param_1 + 0xa0,local_68);
  FUN_14934a0dc(param_3,local_68);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_140926446(local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493488ac FUN_1493488ac body=172 status=ok
// SIG undefined FUN_1493488ac(void)

void FUN_1493488ac(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_14934895a(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934895a FUN_14934895a body=159 status=ok
// SIG undefined FUN_14934895a(void)

undefined4 FUN_14934895a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetWrapU");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14934a2c0(param_1[5],param_1 + 0x23,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149348a00 FUN_149348a00 body=172 status=ok
// SIG undefined FUN_149348a00(void)

void FUN_149348a00(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_149348aae(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149348aae FUN_149348aae body=159 status=ok
// SIG undefined FUN_149348aae(void)

undefined4 FUN_149348aae(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetWrapV");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14934a2c0(param_1[5],param_1 + 0x25,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149348b52 FUN_149348b52 body=107 status=ok
// SIG undefined FUN_149348b52(void)

void FUN_149348b52(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  lVar1 = FUN_144aff0e0();
  FUN_1492f069a(param_1,lVar1);
  if (((*(byte *)(lVar1 + 0x28) & 1) != 0) && (*(char *)(param_1 + 0x38) == '\x01')) {
    FUN_1444c4f2e(param_1 + 0xa0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149348bbe FUN_149348bbe body=58 status=ok
// SIG undefined FUN_149348bbe(void)

void FUN_149348bbe(longlong param_1,longlong param_2)

{
  FUN_1492f069a();
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(char *)(param_1 + 0x38) == '\x01')) {
    FUN_1444c4f2e(param_1 + 0xa0);
    return;
  }
  return;
}



// FUNCTION 149348bf8 FUN_149348bf8 body=226 status=ok
// SIG undefined FUN_149348bf8(void)

undefined8 FUN_149348bf8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140056680(local_50,&DAT_149e01f64);
  FUN_140056680(local_70,&DAT_149e01f64);
  FUN_144a882a8(local_60,local_70,L"Textures");
  FUN_1401c7f3e(local_40,local_60,local_50);
  FUN_1467acaa6(param_1,local_40,*param_2,*(undefined4 *)(param_2 + 1));
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149348cdc FUN_149348cdc body=205 status=ok
// SIG undefined FUN_149348cdc(void)

undefined8 FUN_149348cdc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_149348daa();
  local_58 = *(undefined4 *)param_2;
  uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_149348bf8(local_48);
  FUN_14006620a(&local_38,*param_2,*(undefined4 *)(param_2 + 1));
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  FUN_1444ba64e(uVar1,local_48,&local_68,2);
  if (CONCAT44(uStack_64,local_68) != 0) {
    FUN_1400020a8();
  }
  FUN_1492f22b0(param_1,local_78,uVar1);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149348daa FUN_149348daa body=148 status=ok
// SIG undefined FUN_149348daa(void)

undefined8 FUN_149348daa(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459f64c2();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149348e44 FUN_149348e44 body=9 status=ok
// SIG undefined FUN_149348e44(void)

void FUN_149348e44(longlong param_1)

{
  FUN_1492f125c(param_1 + 0x60);
  return;
}



// FUNCTION 149348e4e FUN_149348e4e body=9 status=ok
// SIG undefined FUN_149348e4e(void)

void FUN_149348e4e(longlong param_1)

{
  FUN_1492f1448(param_1 + 0x60);
  return;
}



// FUNCTION 149348e58 FUN_149348e58 body=9 status=ok
// SIG undefined FUN_149348e58(void)

void FUN_149348e58(longlong param_1)

{
  FUN_1492f5d18(param_1 + 0x60);
  return;
}



// FUNCTION 149348e62 FUN_149348e62 body=9 status=ok
// SIG undefined FUN_149348e62(void)

void FUN_149348e62(longlong param_1)

{
  FUN_1444bb06c(param_1 + 0x60);
  return;
}



// FUNCTION 149348e6c FUN_149348e6c body=9 status=ok
// SIG undefined FUN_149348e6c(void)

void FUN_149348e6c(longlong param_1)

{
  FUN_1444bb466(param_1 + 0x60);
  return;
}



// FUNCTION 149348e76 FUN_149348e76 body=156 status=ok
// SIG undefined FUN_149348e76(void)

undefined4 FUN_149348e76(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetDisplayText");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bba6a(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149348f14 FUN_149348f14 body=156 status=ok
// SIG undefined FUN_149348f14(void)

undefined4 FUN_149348f14(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetDisplayText");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbbee(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149348fb2 FUN_149348fb2 body=156 status=ok
// SIG undefined FUN_149348fb2(void)

undefined4 FUN_149348fb2(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetVariantsPayload");
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



// FUNCTION 149349050 FUN_149349050 body=156 status=ok
// SIG undefined FUN_149349050(void)

undefined4 FUN_149349050(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetVariantsPayload");
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



// FUNCTION 1493490ee FUN_1493490ee body=9 status=ok
// SIG undefined FUN_1493490ee(void)

void FUN_1493490ee(longlong param_1)

{
  FUN_1492f125c(param_1 + 0x80);
  return;
}



// FUNCTION 1493490f8 FUN_1493490f8 body=9 status=ok
// SIG undefined FUN_1493490f8(void)

void FUN_1493490f8(longlong param_1)

{
  FUN_1492f1448(param_1 + 0x80);
  return;
}



// FUNCTION 149349102 FUN_149349102 body=9 status=ok
// SIG undefined FUN_149349102(void)

void FUN_149349102(longlong param_1)

{
  FUN_1492f5d18(param_1 + 0x80);
  return;
}



// FUNCTION 14934910c FUN_14934910c body=9 status=ok
// SIG undefined FUN_14934910c(void)

void FUN_14934910c(longlong param_1)

{
  FUN_1444bb06c(param_1 + 0x80);
  return;
}



// FUNCTION 149349116 FUN_149349116 body=9 status=ok
// SIG undefined FUN_149349116(void)

void FUN_149349116(longlong param_1)

{
  FUN_1444bb466(param_1 + 0x80);
  return;
}



// FUNCTION 149349120 FUN_149349120 body=32 status=ok
// SIG undefined FUN_149349120(void)

undefined8 FUN_149349120(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Texture2DNode");
  return param_2;
}



// FUNCTION 149349140 FUN_149349140 body=32 status=ok
// SIG undefined FUN_149349140(void)

undefined8 FUN_149349140(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TextureBlurNode");
  return param_2;
}



// FUNCTION 149349160 FUN_149349160 body=93 status=ok
// SIG undefined FUN_149349160(void)

longlong FUN_149349160(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1493491be(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 1493491be FUN_1493491be body=388 status=ok
// SIG undefined FUN_1493491be(void)

longlong * FUN_1493491be(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + (longlong)iVar6 * 0x20) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149349344 FUN_149349344 body=33 status=ok
// SIG undefined FUN_149349344(void)

void FUN_149349344(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 149349366 FUN_149349366 body=33 status=ok
// SIG undefined FUN_149349366(void)

void FUN_149349366(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  *(undefined1 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 1493493ac FUN_1493493ac body=60 status=ok
// SIG undefined FUN_1493493ac(void)

undefined1 FUN_1493493ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 149349410 FUN_149349410 body=70 status=ok
// SIG undefined FUN_149349410(void)

void FUN_149349410(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1493494d7(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149349462 FUN_149349462 body=37 status=ok
// SIG undefined FUN_149349462(void)

void FUN_149349462(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1493494d7 FUN_1493494d7 body=165 status=ok
// SIG undefined FUN_1493494d7(void)

undefined4 FUN_1493494d7(longlong param_1)

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



// FUNCTION 14934957e FUN_14934957e body=52 status=ok
// SIG undefined FUN_14934957e(void)

void FUN_14934957e(longlong *param_1)

{
  FUN_1493495b2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493495b2 FUN_1493495b2 body=316 status=ok
// SIG undefined FUN_1493495b2(void)

void FUN_1493495b2(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0xa0) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140de7f60(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493496f0 FUN_1493496f0 body=93 status=ok
// SIG undefined FUN_1493496f0(void)

longlong FUN_1493496f0(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14934974e(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14934974e FUN_14934974e body=388 status=ok
// SIG undefined FUN_14934974e(void)

longlong * FUN_14934974e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + (longlong)iVar6 * 0x20) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493498d3 FUN_1493498d3 body=399 status=ok
// SIG undefined FUN_1493498d3(void)

ulonglong FUN_1493498d3(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
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
    goto LAB_149349905;
  }
  FUN_149349a64(&local_50,param_2,param_1);
  if (local_50 == 0) {
LAB_149349a18:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_50,local_48);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_50,local_48), iVar3 != 0x15))
    goto LAB_149349a18;
    uVar5 = 0x4000000;
    if (local_50 == 0) {
LAB_149349988:
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
      goto LAB_149349a18;
    }
    uVar5 = FUN_149349c4a(local_50,local_48,param_4);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((uVar5 & 1) == 0) goto LAB_149349988;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_149349905:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 149349a64 FUN_149349a64 body=485 status=ok
// SIG undefined FUN_149349a64(void)

longlong * FUN_149349a64(longlong *param_1,undefined8 param_2,longlong param_3)

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
    if (iVar4 == 0x15) goto LAB_149349bf7;
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
LAB_149349bf7:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149349c4a FUN_149349c4a body=198 status=ok
// SIG undefined FUN_149349c4a(void)

undefined8 FUN_149349c4a(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

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



// FUNCTION 149349d10 FUN_149349d10 body=539 status=ok
// SIG undefined FUN_149349d10(void)

undefined8 * FUN_149349d10(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_c8 [32];
  longlong local_a8 [3];
  undefined1 local_8c [4];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 *local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2[4] = 0;
  iVar6 = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar5);
    }
    FUN_149349f2e(param_2,uVar5);
    iVar4 = 1;
    if (3 < uVar5) {
      uVar5 = (uVar5 | 1) + 0xe;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 1 << ((byte)iVar4 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar4)) {
      *(int *)(param_2 + 9) = iVar4;
      FUN_140968080(param_2);
    }
  }
  plVar1 = param_1 + 2;
  local_60 = &DAT_100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_60);
    iVar6 = (int)param_1[5];
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = param_1;
  if ((iStack_4c != iVar6) || (local_58 != plVar1)) {
    do {
      lVar2 = *local_88 + (longlong)iStack_6c * 0x40;
      lVar3 = *(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x40);
      if (lVar3 != 0) {
        FUN_1493027c6(lVar3,lVar2 + 0x10,local_8c);
      }
      local_a8[0] = 0;
      local_a8[1] = 0;
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        FUN_1492ff8ec(*(longlong *)(lVar2 + 0x20),lVar2 + 0x28,local_a8);
      }
      local_60 = local_8c;
      local_58 = local_a8;
      FUN_147de7b58(param_2,local_3c,&local_60,0);
      if (local_a8[0] != 0) {
        FUN_1400020a8();
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != param_1 || (local_78 != plVar1 || iStack_6c != iVar6));
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149349f2e FUN_149349f2e body=428 status=ok
// SIG undefined FUN_149349f2e(void)

void FUN_149349f2e(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1446f4a44(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1447711aa(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x20 + lVar2 + -0x1c);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -8;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 14934a0dc FUN_14934a0dc body=93 status=ok
// SIG undefined FUN_14934a0dc(void)

longlong FUN_14934a0dc(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14934a13a(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 14934a13a FUN_14934a13a body=389 status=ok
// SIG undefined FUN_14934a13a(void)

longlong * FUN_14934a13a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
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
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar5 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, uStack_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 8 + (longlong)iVar6 * 0x20) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar7));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934a2c0 FUN_14934a2c0 body=263 status=ok
// SIG undefined FUN_14934a2c0(void)

ulonglong FUN_14934a2c0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
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
  uVar2 = FUN_14934a3c8(param_1,param_2,param_4,0);
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



// FUNCTION 14934a3c8 FUN_14934a3c8 body=379 status=ok
// SIG undefined FUN_14934a3c8(void)

ulonglong FUN_14934a3c8(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

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
LAB_14934a4a4:
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
    if (lVar5 == 0) goto LAB_14934a4a4;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0x15) goto LAB_14934a470;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_14934a470;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = param_4;
  uVar7 = FUN_14934a544(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_14934a470:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934a544 FUN_14934a544 body=202 status=ok
// SIG undefined FUN_14934a544(void)

undefined8 FUN_14934a544(longlong param_1,longlong *param_2,undefined1 *param_3)

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



// FUNCTION 14934a610 FUN_14934a610 body=377 status=ok
// SIG undefined FUN_14934a610(void)

void ** FUN_14934a610(longlong param_1,void **param_2,undefined4 param_3)

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
              0x110) < DAT_14cc0d7f0) {
    FUN_144b3d300(&DAT_14cc0d7f0);
    if (DAT_14cc0d7f0 == -1) {
      FUN_140056680(&DAT_14cc0d7e0,L"_KeyIndex_");
      atexit((_func_5014 *)&LAB_1444c519a);
      _Init_thread_footer(&DAT_14cc0d7f0);
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
  iVar1 = DAT_14cc0d7e8 + -1;
  if (DAT_14cc0d7e8 == 0) {
    iVar1 = 0;
  }
  FUN_1412d7f26(&local_48,iVar1 + 0x10);
  iVar1 = DAT_14cc0d7e8 + -1;
  if (DAT_14cc0d7e8 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_48,DAT_14cc0d7e0,iVar1);
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



// FUNCTION 14934a78a FUN_14934a78a body=453 status=ok
// SIG undefined FUN_14934a78a(void)

void ** FUN_14934a78a(longlong param_1,void **param_2,undefined4 *param_3)

{
  void *_Src;
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  void *local_48;
  int local_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d808) {
    FUN_144b3d300(&DAT_14cc0d808);
    if (DAT_14cc0d808 == -1) {
      FUN_140056680(&DAT_14cc0d7f8,L"_Key_");
      atexit((_func_5014 *)&LAB_1444c51ab);
      _Init_thread_footer(&DAT_14cc0d808);
    }
  }
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_1 + 0x60);
  lVar3 = (longlong)local_40;
  _Src = *(void **)(param_1 + 0x58);
  if (lVar3 == 0) {
    uStack_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar3 * 2);
  }
  FUN_140002266(&local_58,&DAT_149e063bc,*param_3);
  iVar1 = DAT_14cc0d800 + -1;
  if (DAT_14cc0d800 == 0) {
    iVar1 = 0;
  }
  iVar2 = local_50 + -1;
  if (local_50 == 0) {
    iVar2 = 0;
  }
  FUN_1412d7f26(&local_48,iVar2 + iVar1);
  iVar1 = DAT_14cc0d800 + -1;
  if (DAT_14cc0d800 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_48,DAT_14cc0d7f8,iVar1);
  iVar1 = local_50 + -1;
  if (local_50 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_48,local_58,iVar1);
  *param_2 = (void *)0x0;
  param_2[1] = (void *)0x0;
  if (&local_48 != param_2) {
    *param_2 = local_48;
    local_48 = (void *)0x0;
    *(int *)(param_2 + 1) = local_40;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_3c;
    local_40 = 0;
    uStack_3c = 0;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934a950 FUN_14934a950 body=110 status=ok
// SIG undefined FUN_14934a950(void)

void FUN_14934a950(longlong param_1,uint param_2)

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
    FUN_145977874(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_14934ab02(param_1);
    return;
  }
  FUN_14934a9be(param_1);
  FUN_145977874(param_1,param_2);
  return;
}



// FUNCTION 14934a9be FUN_14934a9be body=322 status=ok
// SIG undefined FUN_14934a9be(void)

void FUN_14934a9be(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 14934ab02 FUN_14934ab02 body=422 status=ok
// SIG undefined FUN_14934ab02(void)

void FUN_14934ab02(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14934acaa FUN_14934acaa body=375 status=ok
// SIG undefined FUN_14934acaa(void)

undefined4 *
FUN_14934acaa(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14934ae22(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  *local_48 = *(uint *)*param_3;
  *(undefined8 *)(local_48 + 2) = *puVar1;
  *(undefined8 *)(local_48 + 4) = puVar1[1];
  puVar1[1] = 0;
  local_48[6] = *(uint *)(puVar1 + 2);
  local_48[7] = *(uint *)((longlong)puVar1 + 0x14);
  puVar1[2] = 0;
  *(undefined8 *)(local_48 + 8) = puVar1[3];
  *(undefined8 *)(local_48 + 10) = puVar1[4];
  puVar1[4] = 0;
  local_48[0xc] = *(uint *)(puVar1 + 5);
  local_48[0xd] = *(uint *)((longlong)puVar1 + 0x2c);
  puVar1[5] = 0;
  local_48[0xe] = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = *local_48;
  local_68 = param_4;
  cVar2 = FUN_14934af08(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[0xf] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[0xe] =
           *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14934ab02(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934ae22 FUN_14934ae22 body=229 status=ok
// SIG undefined FUN_14934ae22(void)

int * FUN_14934ae22(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 14934af08 FUN_14934af08 body=217 status=ok
// SIG undefined FUN_14934af08(void)

void FUN_14934af08(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 uVar14;
  longlong *plVar15;
  int iVar16;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar16 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar16 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar16 * 0x40);
        if (*(int *)(*param_1 + (longlong)iVar16 * 0x40) == *param_3) {
          if (*(longlong *)(piVar1 + 10) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(piVar1 + 4) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[4];
          iVar7 = param_3[5];
          iVar8 = param_3[6];
          iVar9 = param_3[7];
          iVar10 = param_3[8];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          *(undefined8 *)(piVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
          piVar1[8] = iVar10;
          piVar1[9] = iVar11;
          piVar1[10] = iVar12;
          piVar1[0xb] = iVar13;
          piVar1[4] = iVar6;
          piVar1[5] = iVar7;
          piVar1[6] = iVar8;
          piVar1[7] = iVar9;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_14934afe2(param_1,*param_4,1);
          *param_4 = iVar16;
          uVar14 = 1;
          goto LAB_14934af79;
        }
        iVar16 = piVar1[0xe];
      } while (iVar16 != -1);
    }
  }
  uVar14 = 0;
LAB_14934af79:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar14;
  }
  return;
}



// FUNCTION 14934afe2 FUN_14934afe2 body=138 status=ok
// SIG undefined FUN_14934afe2(void)

void FUN_14934afe2(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x40 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
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
      puVar7 = puVar7 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14934b06c FUN_14934b06c body=179 status=ok
// SIG undefined FUN_14934b06c(void)

undefined8 *
FUN_14934b06c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



// FUNCTION 14934b120 FUN_14934b120 body=492 status=ok
// SIG undefined FUN_14934b120(void)

longlong * FUN_14934b120(longlong *param_1,longlong param_2)

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
  *param_1 = param_2;
  FUN_144a787a6(plVar1,&DAT_14cc0d130);
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
    if (iVar4 == 0x15) goto LAB_14934b2ba;
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
LAB_14934b2ba:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934b30e FUN_14934b30e body=198 status=ok
// SIG undefined FUN_14934b30e(void)

undefined8 FUN_14934b30e(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

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



// FUNCTION 14934b3d4 FUN_14934b3d4 body=202 status=ok
// SIG undefined FUN_14934b3d4(void)

undefined8 FUN_14934b3d4(longlong param_1,longlong *param_2,undefined1 *param_3)

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



// FUNCTION 14934b4a0 FUN_14934b4a0 body=385 status=ok
// SIG undefined FUN_14934b4a0(void)

ulonglong FUN_14934b4a0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
LAB_14934b577:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar5 = *param_1 + (longlong)local_44 * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 0xc;
    *(undefined8 *)(lVar5 + 0x18) = 4;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 4;
    if ((ulonglong)(param_1[0xc] - lVar5) < 4) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined4 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_14934b577;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0xc) goto LAB_14934b544;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_14934b544;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_14934b622(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_14934b544:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934b622 FUN_14934b622 body=200 status=ok
// SIG undefined FUN_14934b622(void)

undefined8 FUN_14934b622(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else {
    uVar1 = 0x100000;
    if (((int)param_2[2] == 0xc) && (uVar1 = 0x200000, param_2[1] == 4)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,4);
        *(undefined4 *)(param_2 + 3) = local_40;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_3c;
        *(undefined4 *)(param_2 + 4) = uStack_38;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_34;
        *(undefined4 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
        uVar1 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934b6ec FUN_14934b6ec body=485 status=ok
// SIG undefined FUN_14934b6ec(void)

longlong * FUN_14934b6ec(longlong *param_1,undefined8 param_2,longlong param_3)

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
    if (iVar4 == 0xc) goto LAB_14934b87f;
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
LAB_14934b87f:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934b8d2 FUN_14934b8d2 body=198 status=ok
// SIG undefined FUN_14934b8d2(void)

undefined8 FUN_14934b8d2(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

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
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 0xc)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 4)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined4 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 14934b998 FUN_14934b998 body=428 status=ok
// SIG undefined FUN_14934b998(void)

void FUN_14934b998(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1446f4a44(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1447711aa(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x20 + lVar2 + -0x1c);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -8;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 14934bb46 FUN_14934bb46 body=476 status=ok
// SIG undefined FUN_14934bb46(void)

void FUN_14934bb46(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
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
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
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
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
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



// FUNCTION 14934bd24 FUN_14934bd24 body=365 status=ok
// SIG undefined FUN_14934bd24(void)

undefined4 *
FUN_14934bd24(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14934be92(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined1 *)param_3[1];
  *local_48 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_48 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined1 *)(local_48 + 2) = *puVar2;
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  if (*(int *)(local_48 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*local_48;
    iVar8 = *(int *)(local_48 + 1) + -1;
  }
  uVar4 = FUN_144a49b4a(iVar8,puVar7);
  local_68 = param_4;
  cVar3 = FUN_14934bf78(param_1,uVar4,local_48,&local_54);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_48 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14934bb46(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14934be92 FUN_14934be92 body=229 status=ok
// SIG undefined FUN_14934be92(void)

int * FUN_14934be92(longlong *param_1,int *param_2)

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



// FUNCTION 14934bf78 FUN_14934bf78 body=140 status=ok
// SIG undefined FUN_14934bf78(void)

void FUN_14934bf78(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar7 = FUN_14934c004();
    if (iVar7 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
      if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_14934c0d0(param_1,*param_4,1);
      *param_4 = iVar7;
      uVar6 = 1;
      goto LAB_14934bf99;
    }
  }
  uVar6 = 0;
LAB_14934bf99:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 14934c004 FUN_14934c004 body=203 status=ok
// SIG undefined FUN_14934c004(void)

int FUN_14934c004(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_14934c04e:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14934c0c4;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14934c0c4;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14934c0b5;
    }
  }
  return -1;
LAB_14934c0c4:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14934c0b5:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14934c04e;
}



// FUNCTION 14934c0d0 FUN_14934c0d0 body=138 status=ok
// SIG undefined FUN_14934c0d0(void)

void FUN_14934c0d0(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14934c15a FUN_14934c15a body=616 status=ok
// SIG undefined FUN_14934c15a(void)

ulonglong FUN_14934c15a(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar4 = (longlong *)param_1[0xe];
  if (plVar4 == (longlong *)0x0) {
LAB_14934c1d0:
    uVar8 = 0;
    goto LAB_14934c1d2;
  }
  iVar7 = (int)plVar4[1];
  do {
    if (iVar7 == 0) goto LAB_14934c1d0;
    LOCK();
    iVar6 = (int)plVar4[1];
    bVar9 = iVar7 == iVar6;
    if (bVar9) {
      *(int *)(plVar4 + 1) = iVar7 + 1;
      iVar6 = iVar7;
    }
    iVar7 = iVar6;
    UNLOCK();
  } while (!bVar9);
  lVar5 = param_1[0xd];
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar5 != 0);
  if (lVar5 != 0) {
    iVar7 = FUN_149331a30(param_1,param_2,param_3);
    if (iVar7 != -1) {
      lVar3 = *param_1 + (longlong)iVar7 * 0x48;
      if ((lVar3 != 0) && (*param_1 + (longlong)iVar7 * 0x48 != -0x10)) {
        if (*(longlong *)(lVar3 + 0x28) != 0) {
          FUN_14934c3c4(*(longlong *)(lVar3 + 0x28),lVar3 + 0x30,param_4);
        }
        goto LAB_14934c1b1;
      }
    }
    FUN_149330f68(param_1,local_70,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
    FUN_1493310e2(param_1,local_80,param_3);
    FUN_1492f0926(lVar5,local_70,param_3,0);
    FUN_140c54a24(lVar5,local_80,param_4,0);
    FUN_1444be556(&local_c8,local_80,lVar5);
    FUN_1444be0f2(&local_e0,local_70,lVar5);
    local_88 = local_b8;
    local_58 = &local_b0;
    local_b0 = local_e0;
    local_a8 = local_d8;
    uStack_a0 = uStack_d0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = local_c8;
    uStack_94 = uStack_c4;
    uStack_90 = (undefined4)uStack_c0;
    uStack_8c = uStack_c0._4_4_;
    uStack_c0 = 0;
    local_b8 = 0;
    local_e8 = 0;
    local_60 = param_3;
    FUN_14934c434(param_1,local_4c,param_2);
    if (CONCAT44(uStack_8c,uStack_90) != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (uStack_c0 != 0) {
      FUN_1400020a8();
    }
    local_b0 = CONCAT44(local_b0._4_4_,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
    if (param_1[10] != 0) {
      FUN_149303af2(param_1[10],param_1 + 0xb,&local_b0);
    }
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_14934c1b1:
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
LAB_14934c1d2:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14934c3c4 FUN_14934c3c4 body=111 status=ok
// SIG undefined FUN_14934c3c4(void)

void FUN_14934c3c4(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar6 = 0;
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar6;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_140c4443c(param_1,uVar1,param_2);
  if (iVar2 != -1) {
    uVar6 = (longlong)iVar2 * 0x40 + *param_1;
  }
  lVar5 = uVar6 + 0x10;
  if (uVar6 == 0) {
    lVar5 = 0;
  }
  FUN_140c54c14(param_1,lVar5,param_3);
  return;
}



// FUNCTION 14934c434 FUN_14934c434 body=302 status=ok
// SIG undefined FUN_14934c434(void)

undefined4 *
FUN_14934c434(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_149331806(param_1,local_58);
  FUN_149331986(local_50,0,*param_4,param_4[1]);
  *(undefined4 *)(local_50 + 0x40) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_1493318ec(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_50 + 0x44) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x40) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_149331494(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934c564 FUN_14934c564 body=178 status=ok
// SIG undefined FUN_14934c564(void)

ulonglong FUN_14934c564(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  undefined7 uVar10;
  bool bVar11;
  byte bVar12;
  ulonglong uVar9;
  
  plVar3 = (longlong *)param_1[0xe];
  if (plVar3 == (longlong *)0x0) {
LAB_14934c5b3:
    uVar9 = 0;
    goto LAB_14934c5b5;
  }
  iVar5 = (int)plVar3[1];
  do {
    if (iVar5 == 0) goto LAB_14934c5b3;
    LOCK();
    iVar4 = (int)plVar3[1];
    bVar11 = iVar5 == iVar4;
    if (bVar11) {
      *(int *)(plVar3 + 1) = iVar5 + 1;
      iVar4 = iVar5;
    }
    iVar5 = iVar4;
    UNLOCK();
  } while (!bVar11);
  if (param_1[0xd] == 0) {
    uVar9 = 0;
  }
  else {
    lVar6 = FUN_149331a30(param_1);
    if ((int)lVar6 == -1) {
LAB_14934c5fa:
      bVar12 = (byte)lVar6;
      bVar8 = 0;
      uVar10 = 0;
    }
    else {
      lVar7 = (longlong)(int)lVar6;
      lVar6 = lVar7 * 9;
      if ((*param_1 + lVar7 * 0x48 + 0x10U & 0xffffffffffffffef) == 0) goto LAB_14934c5fa;
      lVar6 = *param_1 + lVar7 * 0x48;
      lVar7 = *(longlong *)(lVar6 + 0x28);
      uVar10 = (undefined7)((ulonglong)param_1 >> 8);
      bVar8 = 1;
      if (lVar7 == 0) {
        bVar12 = 0;
      }
      else {
        lVar6 = FUN_14930380a(lVar7,lVar6 + 0x30,param_4);
        bVar12 = lVar6 == 1;
      }
    }
    uVar9 = CONCAT71(uVar10,bVar8 & bVar12);
  }
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
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14934c5b5:
  return uVar9 & 0xffffffff;
}



// FUNCTION 14934c616 FUN_14934c616 body=485 status=ok
// SIG undefined FUN_14934c616(void)

longlong * FUN_14934c616(longlong *param_1,undefined8 param_2,longlong param_3)

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
    if (iVar4 == 0x15) goto LAB_14934c7a9;
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
LAB_14934c7a9:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934c7fc FUN_14934c7fc body=198 status=ok
// SIG undefined FUN_14934c7fc(void)

undefined8 FUN_14934c7fc(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

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



// FUNCTION 14934c8c2 FUN_14934c8c2 body=378 status=ok
// SIG undefined FUN_14934c8c2(void)

ulonglong FUN_14934c8c2(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
LAB_14934c999:
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
    if (lVar5 == 0) goto LAB_14934c999;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0x15) goto LAB_14934c966;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_14934c966;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_14934ca3e(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_14934c966:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934ca3e FUN_14934ca3e body=202 status=ok
// SIG undefined FUN_14934ca3e(void)

undefined8 FUN_14934ca3e(longlong param_1,longlong *param_2,undefined1 *param_3)

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



// FUNCTION 14934cb0a FUN_14934cb0a body=485 status=ok
// SIG undefined FUN_14934cb0a(void)

longlong * FUN_14934cb0a(longlong *param_1,undefined8 param_2,longlong param_3)

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
    if (iVar4 == 0x2a) goto LAB_14934cc9d;
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
LAB_14934cc9d:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934ccf0 FUN_14934ccf0 body=209 status=ok
// SIG undefined FUN_14934ccf0(void)

undefined8 FUN_14934ccf0(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined8 uVar10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar7 = *(int *)(param_2 + 1);
  if (iVar7 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_2;
  }
  iVar3 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar3 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar3,puVar9);
  iVar7 = FUN_140c4443c(param_1,uVar6,param_2);
  uVar10 = 0x800000;
  if (iVar7 != -1) {
    lVar8 = (longlong)iVar7 * 0x40 + *param_1;
    if ((((longlong *)(lVar8 + 0x10) != (longlong *)0x0 && lVar8 != 0) &&
        (uVar10 = 0x100000, *(int *)(lVar8 + 0x20) == 0x2a)) &&
       (uVar10 = 0x200000, *(longlong *)(lVar8 + 0x18) == 0x18)) {
      lVar8 = *(longlong *)(lVar8 + 0x10);
      uVar10 = 0x400000;
      if ((-1 < lVar8) && (lVar8 < param_1[0xb])) {
        lVar2 = param_1[10];
        *(undefined8 *)(param_3 + 4) = *(undefined8 *)(lVar2 + 0x10 + lVar8);
        puVar1 = (undefined4 *)(lVar2 + lVar8);
        uVar6 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *param_3 = *puVar1;
        param_3[1] = uVar6;
        param_3[2] = uVar4;
        param_3[3] = uVar5;
        uVar10 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar10;
}



// FUNCTION 14934cdc2 FUN_14934cdc2 body=395 status=ok
// SIG undefined FUN_14934cdc2(void)

ulonglong FUN_14934cdc2(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar5 = *(int *)(param_2 + 1);
  if (iVar5 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar3 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar3 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar3,puVar6);
  iVar5 = FUN_140c4443c(param_1,uVar4,param_2);
  if (iVar5 == -1) {
LAB_14934ce9e:
    local_58 = param_2;
    FUN_140c5653a(param_1,&local_4c,&local_58,0);
    lVar7 = *param_1 + (longlong)local_4c * 0x40;
    plVar8 = (longlong *)(lVar7 + 0x10);
    *(undefined4 *)(lVar7 + 0x20) = 0x2a;
    *(undefined8 *)(lVar7 + 0x18) = 0x18;
    lVar7 = param_1[0xb];
    param_1[0xb] = lVar7 + 0x18;
    if ((ulonglong)(param_1[0xc] - lVar7) < 0x18) {
      FUN_14112c458(param_1 + 10,lVar7);
    }
    lVar2 = param_1[10];
    puVar1 = (undefined8 *)(lVar2 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar2 + 0x10 + lVar7) = 0;
    *plVar8 = lVar7;
  }
  else {
    lVar7 = *param_1 + (longlong)iVar5 * 0x40;
    if (lVar7 == 0) goto LAB_14934ce9e;
    uVar9 = 0x100000;
    if (*(int *)(lVar7 + 0x20) != 0x2a) goto LAB_14934ce6a;
    plVar8 = (longlong *)(*param_1 + (longlong)iVar5 * 0x40 + 0x10);
    uVar9 = 0x400000;
    if ((*plVar8 < 0) || (param_1[0xb] <= *plVar8)) goto LAB_14934ce6a;
  }
  *(undefined4 *)((longlong)plVar8 + 0x14) = param_4;
  uVar9 = FUN_14934cf4e(param_1,plVar8,param_3);
  if ((uVar9 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_14934ce6a:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934cf4e FUN_14934cf4e body=211 status=ok
// SIG undefined FUN_14934cf4e(void)

undefined8 FUN_14934cf4e(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong lStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar7 = 0x800000;
  }
  else {
    uVar7 = 0x100000;
    if (((int)param_2[2] == 0x2a) && (uVar7 = 0x200000, param_2[1] == 0x18)) {
      uVar7 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,0x18);
        param_2[3] = local_40;
        param_2[4] = lStack_38;
        lVar2 = *(longlong *)(param_1 + 0x50);
        lVar3 = *param_2;
        *(undefined8 *)(lVar2 + 0x10 + lVar3) = *(undefined8 *)(param_3 + 4);
        uVar4 = param_3[1];
        uVar5 = param_3[2];
        uVar6 = param_3[3];
        puVar1 = (undefined4 *)(lVar2 + lVar3);
        *puVar1 = *param_3;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        uVar7 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934d022 FUN_14934d022 body=492 status=ok
// SIG undefined FUN_14934d022(void)

longlong * FUN_14934d022(longlong *param_1,longlong param_2)

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
  *param_1 = param_2;
  FUN_144a787a6(plVar1,&DAT_14cc0d370);
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
    if (iVar4 == 0x15) goto LAB_14934d1bc;
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
LAB_14934d1bc:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934d210 FUN_14934d210 body=198 status=ok
// SIG undefined FUN_14934d210(void)

undefined8 FUN_14934d210(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

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



// FUNCTION 14934d2d6 FUN_14934d2d6 body=202 status=ok
// SIG undefined FUN_14934d2d6(void)

undefined8 FUN_14934d2d6(longlong param_1,longlong *param_2,undefined1 *param_3)

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



// FUNCTION 14934d3a2 FUN_14934d3a2 body=485 status=ok
// SIG undefined FUN_14934d3a2(void)

longlong * FUN_14934d3a2(longlong *param_1,undefined8 param_2,longlong param_3)

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
    if (iVar4 == 0x35) goto LAB_14934d535;
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
LAB_14934d535:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934d588 FUN_14934d588 body=227 status=ok
// SIG undefined FUN_14934d588(void)

undefined8 FUN_14934d588(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined8 uVar14;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar11 = *(int *)(param_2 + 1);
  if (iVar11 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  else {
    puVar13 = (undefined2 *)*param_2;
  }
  iVar4 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar4 = 0;
  }
  uVar10 = FUN_144a49b4a(iVar4,puVar13);
  iVar11 = FUN_140c4443c(param_1,uVar10,param_2);
  uVar14 = 0x800000;
  if (iVar11 != -1) {
    lVar12 = (longlong)iVar11 * 0x40 + *param_1;
    if ((((longlong *)(lVar12 + 0x10) != (longlong *)0x0 && lVar12 != 0) &&
        (uVar14 = 0x100000, *(int *)(lVar12 + 0x20) == 0x35)) &&
       (uVar14 = 0x200000, *(longlong *)(lVar12 + 0x18) == 0x38)) {
      lVar12 = *(longlong *)(lVar12 + 0x10);
      uVar14 = 0x400000;
      if ((-1 < lVar12) && (lVar12 < param_1[0xb])) {
        lVar3 = param_1[10];
        *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(lVar3 + 0x30 + lVar12);
        puVar1 = (undefined4 *)(lVar3 + lVar12);
        uVar10 = *puVar1;
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar12);
        uVar14 = *puVar2;
        uVar8 = puVar2[1];
        puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar12);
        uVar9 = puVar2[1];
        *(undefined8 *)(param_3 + 8) = *puVar2;
        *(undefined8 *)(param_3 + 10) = uVar9;
        *(undefined8 *)(param_3 + 4) = uVar14;
        *(undefined8 *)(param_3 + 6) = uVar8;
        *param_3 = uVar10;
        param_3[1] = uVar5;
        param_3[2] = uVar6;
        param_3[3] = uVar7;
        uVar14 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar14;
}



// FUNCTION 14934d66c FUN_14934d66c body=406 status=ok
// SIG undefined FUN_14934d66c(void)

ulonglong FUN_14934d66c(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar5 = *(int *)(param_2 + 1);
  if (iVar5 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar3 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar3 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar3,puVar6);
  iVar5 = FUN_140c4443c(param_1,uVar4,param_2);
  if (iVar5 == -1) {
LAB_14934d743:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar7 = *param_1 + (longlong)local_44 * 0x40;
    plVar8 = (longlong *)(lVar7 + 0x10);
    *(undefined4 *)(lVar7 + 0x20) = 0x35;
    *(undefined8 *)(lVar7 + 0x18) = 0x38;
    lVar7 = param_1[0xb];
    param_1[0xb] = lVar7 + 0x38;
    if ((ulonglong)(param_1[0xc] - lVar7) < 0x38) {
      FUN_14112c458(param_1 + 10,lVar7);
    }
    lVar2 = param_1[10];
    puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar2 + lVar7) = 0;
    ((undefined8 *)(lVar2 + lVar7))[1] = 0;
    *(undefined8 *)(lVar2 + 0x30 + lVar7) = 0;
    *plVar8 = lVar7;
  }
  else {
    lVar7 = *param_1 + (longlong)iVar5 * 0x40;
    if (lVar7 == 0) goto LAB_14934d743;
    uVar9 = 0x100000;
    if (*(int *)(lVar7 + 0x20) != 0x35) goto LAB_14934d710;
    plVar8 = (longlong *)(*param_1 + (longlong)iVar5 * 0x40 + 0x10);
    uVar9 = 0x400000;
    if ((*plVar8 < 0) || (param_1[0xb] <= *plVar8)) goto LAB_14934d710;
  }
  *(undefined4 *)((longlong)plVar8 + 0x14) = 0;
  uVar9 = FUN_14934d804(param_1,plVar8,param_3);
  if ((uVar9 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_14934d710:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934d804 FUN_14934d804 body=229 status=ok
// SIG undefined FUN_14934d804(void)

undefined8 FUN_14934d804(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong lStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar11 = 0x800000;
  }
  else {
    uVar11 = 0x100000;
    if (((int)param_2[2] == 0x35) && (uVar11 = 0x200000, param_2[1] == 0x38)) {
      uVar11 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,0x38);
        param_2[3] = local_40;
        param_2[4] = lStack_38;
        lVar3 = *(longlong *)(param_1 + 0x50);
        lVar4 = *param_2;
        *(undefined8 *)(lVar3 + 0x30 + lVar4) = *(undefined8 *)(param_3 + 0xc);
        uVar5 = *param_3;
        uVar6 = param_3[1];
        uVar7 = param_3[2];
        uVar8 = param_3[3];
        uVar11 = *(undefined8 *)(param_3 + 4);
        uVar9 = *(undefined8 *)(param_3 + 6);
        uVar10 = *(undefined8 *)(param_3 + 10);
        puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar4);
        *puVar2 = *(undefined8 *)(param_3 + 8);
        puVar2[1] = uVar10;
        puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar4);
        *puVar2 = uVar11;
        puVar2[1] = uVar9;
        puVar1 = (undefined4 *)(lVar3 + lVar4);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        puVar1[2] = uVar7;
        puVar1[3] = uVar8;
        uVar11 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934d8ea FUN_14934d8ea body=178 status=ok
// SIG undefined FUN_14934d8ea(void)

ulonglong FUN_14934d8ea(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  undefined7 uVar10;
  bool bVar11;
  byte bVar12;
  ulonglong uVar9;
  
  plVar3 = (longlong *)param_1[0xe];
  if (plVar3 == (longlong *)0x0) {
LAB_14934d939:
    uVar9 = 0;
    goto LAB_14934d93b;
  }
  iVar5 = (int)plVar3[1];
  do {
    if (iVar5 == 0) goto LAB_14934d939;
    LOCK();
    iVar4 = (int)plVar3[1];
    bVar11 = iVar5 == iVar4;
    if (bVar11) {
      *(int *)(plVar3 + 1) = iVar5 + 1;
      iVar4 = iVar5;
    }
    iVar5 = iVar4;
    UNLOCK();
  } while (!bVar11);
  if (param_1[0xd] == 0) {
    uVar9 = 0;
  }
  else {
    lVar6 = FUN_149305be0(param_1);
    if ((int)lVar6 == -1) {
LAB_14934d980:
      bVar12 = (byte)lVar6;
      bVar8 = 0;
      uVar10 = 0;
    }
    else {
      lVar7 = (longlong)(int)lVar6;
      lVar6 = lVar7 * 9;
      if ((*param_1 + lVar7 * 0x48 + 0x10U & 0xffffffffffffffef) == 0) goto LAB_14934d980;
      lVar6 = *param_1 + lVar7 * 0x48;
      lVar7 = *(longlong *)(lVar6 + 0x28);
      uVar10 = (undefined7)((ulonglong)param_1 >> 8);
      bVar8 = 1;
      if (lVar7 == 0) {
        bVar12 = 0;
      }
      else {
        lVar6 = FUN_1492ff8ec(lVar7,lVar6 + 0x30,param_4);
        bVar12 = lVar6 == 1;
      }
    }
    uVar9 = CONCAT71(uVar10,bVar8 & bVar12);
  }
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
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14934d93b:
  return uVar9 & 0xffffffff;
}



// FUNCTION 14934d99c FUN_14934d99c body=36 status=ok
// SIG undefined FUN_14934d99c(void)

undefined8 FUN_14934d99c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14934d9dc FUN_14934d9dc body=93 status=ok
// SIG undefined FUN_14934d9dc(void)

void FUN_14934d9dc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bc56510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14934da3a FUN_14934da3a body=126 status=ok
// SIG undefined FUN_14934da3a(void)

void FUN_14934da3a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bc56510;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014934daa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14934dab8 FUN_14934dab8 body=21 status=ok
// SIG undefined FUN_14934dab8(void)

undefined8 FUN_14934dab8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14934dace FUN_14934dace body=61 status=ok
// SIG undefined FUN_14934dace(void)

void FUN_14934dace(longlong *param_1)

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



// FUNCTION 14934db0c FUN_14934db0c body=61 status=ok
// SIG undefined FUN_14934db0c(void)

void FUN_14934db0c(longlong *param_1)

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



// FUNCTION 14934db4a FUN_14934db4a body=377 status=ok
// SIG undefined FUN_14934db4a(void)

void ** FUN_14934db4a(longlong param_1,void **param_2,undefined4 param_3)

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
              0x110) < DAT_14cc0d820) {
    FUN_144b3d300(&DAT_14cc0d820);
    if (DAT_14cc0d820 == -1) {
      FUN_140056680(&DAT_14cc0d810,L"_KeyIndex_");
      atexit((_func_5014 *)&LAB_1444c51bc);
      _Init_thread_footer(&DAT_14cc0d820);
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
  iVar1 = DAT_14cc0d818 + -1;
  if (DAT_14cc0d818 == 0) {
    iVar1 = 0;
  }
  FUN_1412d7f26(&local_48,iVar1 + 0x10);
  iVar1 = DAT_14cc0d818 + -1;
  if (DAT_14cc0d818 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_48,DAT_14cc0d810,iVar1);
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



// FUNCTION 14934dcc4 FUN_14934dcc4 body=511 status=ok
// SIG undefined FUN_14934dcc4(void)

void ** FUN_14934dcc4(longlong param_1,void **param_2,undefined8 *param_3)

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
              0x110) < DAT_14cc0d838) {
    FUN_144b3d300(&DAT_14cc0d838);
    if (DAT_14cc0d838 == -1) {
      FUN_140056680(&DAT_14cc0d828);
      atexit((_func_5014 *)&LAB_1444c51cd);
      _Init_thread_footer(&DAT_14cc0d838);
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
  iVar3 = DAT_14cc0d830 + -1;
  if (DAT_14cc0d830 == 0) {
    iVar3 = 0;
  }
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  FUN_1412d7f26(&local_40,iVar5 + iVar3);
  iVar4 = DAT_14cc0d830 + -1;
  if (DAT_14cc0d830 == 0) {
    iVar4 = 0;
  }
  FUN_1400020e8(&local_40,DAT_14cc0d828,iVar4);
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



// FUNCTION 14934dec4 FUN_14934dec4 body=110 status=ok
// SIG undefined FUN_14934dec4(void)

void FUN_14934dec4(longlong param_1,uint param_2)

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
    FUN_145eca5c8(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_14934e076(param_1);
    return;
  }
  FUN_14934df32(param_1);
  FUN_145eca5c8(param_1,param_2);
  return;
}



// FUNCTION 14934df32 FUN_14934df32 body=322 status=ok
// SIG undefined FUN_14934df32(void)

void FUN_14934df32(longlong *param_1)

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



// FUNCTION 14934e076 FUN_14934e076 body=476 status=ok
// SIG undefined FUN_14934e076(void)

void FUN_14934e076(longlong *param_1)

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



// FUNCTION 14934e254 FUN_14934e254 body=485 status=ok
// SIG undefined FUN_14934e254(void)

longlong * FUN_14934e254(longlong *param_1,undefined8 param_2,longlong param_3)

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
    if (iVar4 == 0x24) goto LAB_14934e3e7;
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
LAB_14934e3e7:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934e43a FUN_14934e43a body=319 status=ok
// SIG undefined FUN_14934e43a(void)

undefined4 * FUN_14934e43a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14934e57a(param_1,local_48);
  FUN_14934e6e0(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 8) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_14934e660(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x44) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14934e076(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934e57a FUN_14934e57a body=230 status=ok
// SIG undefined FUN_14934e57a(void)

int * FUN_14934e57a(longlong *param_1,int *param_2)

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



// FUNCTION 14934e660 FUN_14934e660 body=127 status=ok
// SIG undefined FUN_14934e660(void)

undefined8 FUN_14934e660(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  int iVar17;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar17 = FUN_14934e78a(), iVar17 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar17 * 0x48);
    FUN_14934db0c(puVar1);
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
    FUN_14934e856(param_1,*param_4);
    *param_4 = iVar17;
    return 1;
  }
  return 0;
}



// FUNCTION 14934e6e0 FUN_14934e6e0 body=170 status=ok
// SIG undefined FUN_14934e6e0(void)

undefined8 * FUN_14934e6e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = *param_3;
  param_1[3] = 0;
  param_1[3] = param_3[1];
  param_3[1] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_3 + 0x14);
  param_3[2] = 0;
  param_1[5] = param_3[3];
  param_1[6] = 0;
  param_1[6] = param_3[4];
  param_3[4] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 5);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_3 + 0x2c);
  param_3[5] = 0;
  return param_1;
}



// FUNCTION 14934e78a FUN_14934e78a body=203 status=ok
// SIG undefined FUN_14934e78a(void)

int FUN_14934e78a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_14934e7d4:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x48);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x48) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14934e84a;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14934e84a;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14934e83b;
    }
  }
  return -1;
LAB_14934e84a:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14934e83b:
  iVar1 = *(int *)(lVar4 + 0x40 + lVar10 * 0x48);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14934e7d4;
}



// FUNCTION 14934e856 FUN_14934e856 body=114 status=ok
// SIG undefined FUN_14934e856(void)

void FUN_14934e856(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 14934e8c8 FUN_14934e8c8 body=179 status=ok
// SIG undefined FUN_14934e8c8(void)

undefined8 * FUN_14934e8c8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = *param_3;
  param_1[4] = 0;
  iVar1 = *(int *)(param_3 + 2);
  pvVar2 = (void *)param_3[1];
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



// FUNCTION 14934e97c FUN_14934e97c body=377 status=ok
// SIG undefined FUN_14934e97c(void)

void ** FUN_14934e97c(longlong param_1,void **param_2,undefined4 param_3)

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
              0x110) < DAT_14cc0d850) {
    FUN_144b3d300(&DAT_14cc0d850);
    if (DAT_14cc0d850 == -1) {
      FUN_140056680(&DAT_14cc0d840,L"_KeyIndex_");
      atexit((_func_5014 *)&LAB_1444c51de);
      _Init_thread_footer(&DAT_14cc0d850);
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
  iVar1 = DAT_14cc0d848 + -1;
  if (DAT_14cc0d848 == 0) {
    iVar1 = 0;
  }
  FUN_1412d7f26(&local_48,iVar1 + 0x10);
  iVar1 = DAT_14cc0d848 + -1;
  if (DAT_14cc0d848 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_48,DAT_14cc0d840,iVar1);
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



// FUNCTION 14934eaf6 FUN_14934eaf6 body=511 status=ok
// SIG undefined FUN_14934eaf6(void)

void ** FUN_14934eaf6(longlong param_1,void **param_2,undefined8 *param_3)

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
              0x110) < DAT_14cc0d868) {
    FUN_144b3d300(&DAT_14cc0d868);
    if (DAT_14cc0d868 == -1) {
      FUN_140056680(&DAT_14cc0d858);
      atexit((_func_5014 *)&LAB_1444c51ef);
      _Init_thread_footer(&DAT_14cc0d868);
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
  iVar3 = DAT_14cc0d860 + -1;
  if (DAT_14cc0d860 == 0) {
    iVar3 = 0;
  }
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  FUN_1412d7f26(&local_40,iVar5 + iVar3);
  iVar4 = DAT_14cc0d860 + -1;
  if (DAT_14cc0d860 == 0) {
    iVar4 = 0;
  }
  FUN_1400020e8(&local_40,DAT_14cc0d858,iVar4);
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



// FUNCTION 14934ecf6 FUN_14934ecf6 body=110 status=ok
// SIG undefined FUN_14934ecf6(void)

void FUN_14934ecf6(longlong param_1,uint param_2)

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
    FUN_145eca44c(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_14934eea8(param_1);
    return;
  }
  FUN_14934ed64(param_1);
  FUN_145eca44c(param_1,param_2);
  return;
}



// FUNCTION 14934ed64 FUN_14934ed64 body=322 status=ok
// SIG undefined FUN_14934ed64(void)

void FUN_14934ed64(longlong *param_1)

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



// FUNCTION 14934eea8 FUN_14934eea8 body=476 status=ok
// SIG undefined FUN_14934eea8(void)

void FUN_14934eea8(longlong *param_1)

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



// FUNCTION 14934f086 FUN_14934f086 body=319 status=ok
// SIG undefined FUN_14934f086(void)

undefined4 * FUN_14934f086(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14934f1c6(param_1,local_48);
  FUN_14934f32c(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 8) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_14934f2ac(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x44) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14934eea8(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934f1c6 FUN_14934f1c6 body=230 status=ok
// SIG undefined FUN_14934f1c6(void)

int * FUN_14934f1c6(longlong *param_1,int *param_2)

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



// FUNCTION 14934f2ac FUN_14934f2ac body=127 status=ok
// SIG undefined FUN_14934f2ac(void)

undefined8 FUN_14934f2ac(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  int iVar17;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar17 = FUN_14934f3d6(), iVar17 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar17 * 0x48);
    FUN_14934dace(puVar1);
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
    FUN_14934f4a2(param_1,*param_4);
    *param_4 = iVar17;
    return 1;
  }
  return 0;
}



// FUNCTION 14934f32c FUN_14934f32c body=170 status=ok
// SIG undefined FUN_14934f32c(void)

undefined8 * FUN_14934f32c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = *param_3;
  param_1[3] = 0;
  param_1[3] = param_3[1];
  param_3[1] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_3 + 0x14);
  param_3[2] = 0;
  param_1[5] = param_3[3];
  param_1[6] = 0;
  param_1[6] = param_3[4];
  param_3[4] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 5);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_3 + 0x2c);
  param_3[5] = 0;
  return param_1;
}



// FUNCTION 14934f3d6 FUN_14934f3d6 body=203 status=ok
// SIG undefined FUN_14934f3d6(void)

int FUN_14934f3d6(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_14934f420:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x48);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x48) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14934f496;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14934f496;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14934f487;
    }
  }
  return -1;
LAB_14934f496:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14934f487:
  iVar1 = *(int *)(lVar4 + 0x40 + lVar10 * 0x48);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14934f420;
}



// FUNCTION 14934f4a2 FUN_14934f4a2 body=114 status=ok
// SIG undefined FUN_14934f4a2(void)

void FUN_14934f4a2(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 14934f514 FUN_14934f514 body=179 status=ok
// SIG undefined FUN_14934f514(void)

undefined8 * FUN_14934f514(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = *param_3;
  param_1[4] = 0;
  iVar1 = *(int *)(param_3 + 2);
  pvVar2 = (void *)param_3[1];
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



// FUNCTION 14934f5c8 FUN_14934f5c8 body=607 status=ok
// SIG undefined FUN_14934f5c8(void)

ulonglong FUN_14934f5c8(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar4 = (longlong *)param_1[0xe];
  if (plVar4 == (longlong *)0x0) {
LAB_14934f63e:
    uVar8 = 0;
    goto LAB_14934f640;
  }
  iVar7 = (int)plVar4[1];
  do {
    if (iVar7 == 0) goto LAB_14934f63e;
    LOCK();
    iVar6 = (int)plVar4[1];
    bVar9 = iVar7 == iVar6;
    if (bVar9) {
      *(int *)(plVar4 + 1) = iVar7 + 1;
      iVar6 = iVar7;
    }
    iVar7 = iVar6;
    UNLOCK();
  } while (!bVar9);
  lVar5 = param_1[0xd];
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar5 != 0);
  if (lVar5 != 0) {
    iVar7 = FUN_14934f3d6(param_1,param_2,param_3);
    if (iVar7 != -1) {
      lVar3 = *param_1 + (longlong)iVar7 * 0x48;
      if ((lVar3 != 0) && (*param_1 + (longlong)iVar7 * 0x48 != -0x10)) {
        if (*(longlong *)(lVar3 + 0x28) != 0) {
          FUN_14934f828(*(longlong *)(lVar3 + 0x28),lVar3 + 0x30,param_4);
        }
        goto LAB_14934f61f;
      }
    }
    FUN_14934e97c(param_1,local_70,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
    FUN_14934eaf6(param_1,local_80,param_3);
    FUN_1492f0926(lVar5,local_70,param_3,0);
    FUN_14930288c(lVar5,local_80,param_4,0);
    FUN_1444bd5f8(&local_c8,local_80,lVar5);
    FUN_1444be0f2(&local_e0,local_70,lVar5);
    local_88 = local_b8;
    local_58 = &local_b0;
    local_b0 = local_e0;
    local_a8 = local_d8;
    uStack_a0 = uStack_d0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = local_c8;
    uStack_94 = uStack_c4;
    uStack_90 = (undefined4)uStack_c0;
    uStack_8c = uStack_c0._4_4_;
    uStack_c0 = 0;
    local_b8 = 0;
    local_60 = param_3;
    FUN_14934f898(param_1,local_4c,param_2);
    if (CONCAT44(uStack_8c,uStack_90) != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (uStack_c0 != 0) {
      FUN_1400020a8();
    }
    local_b0 = CONCAT44(local_b0._4_4_,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
    if (param_1[10] != 0) {
      FUN_149303af2(param_1[10],param_1 + 0xb,&local_b0);
    }
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_14934f61f:
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
LAB_14934f640:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14934f828 FUN_14934f828 body=111 status=ok
// SIG undefined FUN_14934f828(void)

void FUN_14934f828(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar6 = 0;
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar6;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_140c4443c(param_1,uVar1,param_2);
  if (iVar2 != -1) {
    uVar6 = (longlong)iVar2 * 0x40 + *param_1;
  }
  lVar5 = uVar6 + 0x10;
  if (uVar6 == 0) {
    lVar5 = 0;
  }
  FUN_149302a12(param_1,lVar5,param_3);
  return;
}



// FUNCTION 14934f898 FUN_14934f898 body=276 status=ok
// SIG undefined FUN_14934f898(void)

undefined4 * FUN_14934f898(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14934f1c6(param_1,local_48);
  FUN_14934f32c(local_40,*param_4,param_4[1]);
  *(undefined4 *)(local_40 + 0x40) = 0xffffffff;
  cVar1 = FUN_14934f2ac(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x44) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x40) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14934eea8(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14934f9ae FUN_14934f9ae body=413 status=ok
// SIG undefined FUN_14934f9ae(void)

void FUN_14934f9ae(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1446f4a44(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1447711aa(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x20 + lVar2 + -0x1c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -8;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 14934fb4c FUN_14934fb4c body=358 status=ok
// SIG undefined FUN_14934fb4c(void)

undefined4 * FUN_14934fb4c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146843698(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *local_40 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 2) = *puVar2;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*local_40;
    iVar8 = *(int *)(local_40 + 1) + -1;
  }
  uVar4 = FUN_144a49b4a(iVar8,puVar7);
  local_58 = 0;
  cVar3 = FUN_14684377e(param_1,uVar4,local_40,&local_4c);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1468439c8(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14934fcb4 FUN_14934fcb4 body=178 status=ok
// SIG undefined FUN_14934fcb4(void)

ulonglong FUN_14934fcb4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  undefined7 uVar10;
  bool bVar11;
  byte bVar12;
  ulonglong uVar9;
  
  plVar3 = (longlong *)param_1[0xe];
  if (plVar3 == (longlong *)0x0) {
LAB_14934fd03:
    uVar9 = 0;
    goto LAB_14934fd05;
  }
  iVar5 = (int)plVar3[1];
  do {
    if (iVar5 == 0) goto LAB_14934fd03;
    LOCK();
    iVar4 = (int)plVar3[1];
    bVar11 = iVar5 == iVar4;
    if (bVar11) {
      *(int *)(plVar3 + 1) = iVar5 + 1;
      iVar4 = iVar5;
    }
    iVar5 = iVar4;
    UNLOCK();
  } while (!bVar11);
  if (param_1[0xd] == 0) {
    uVar9 = 0;
  }
  else {
    lVar6 = FUN_14934e78a(param_1);
    if ((int)lVar6 == -1) {
LAB_14934fd4a:
      bVar12 = (byte)lVar6;
      bVar8 = 0;
      uVar10 = 0;
    }
    else {
      lVar7 = (longlong)(int)lVar6;
      lVar6 = lVar7 * 9;
      if ((*param_1 + lVar7 * 0x48 + 0x10U & 0xffffffffffffffef) == 0) goto LAB_14934fd4a;
      lVar6 = *param_1 + lVar7 * 0x48;
      lVar7 = *(longlong *)(lVar6 + 0x28);
      uVar10 = (undefined7)((ulonglong)param_1 >> 8);
      bVar8 = 1;
      if (lVar7 == 0) {
        bVar12 = 0;
      }
      else {
        lVar6 = FUN_14934fd66(lVar7,lVar6 + 0x30,param_4);
        bVar12 = lVar6 == 1;
      }
    }
    uVar9 = CONCAT71(uVar10,bVar8 & bVar12);
  }
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
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14934fd05:
  return uVar9 & 0xffffffff;
}



// FUNCTION 14934fd66 FUN_14934fd66 body=210 status=ok
// SIG undefined FUN_14934fd66(void)

undefined8 FUN_14934fd66(longlong *param_1,undefined8 *param_2,void *param_3)

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
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 0x24)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 0x80)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        memcpy(param_3,(void *)(lVar4 + param_1[10]),0x80);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 14934fe38 FUN_14934fe38 body=585 status=ok
// SIG undefined FUN_14934fe38(void)

void FUN_14934fe38(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar4 = (longlong *)param_1[0xe];
  if (plVar4 == (longlong *)0x0) goto LAB_14934fea8;
  iVar7 = (int)plVar4[1];
  do {
    if (iVar7 == 0) goto LAB_14934fea8;
    LOCK();
    iVar6 = (int)plVar4[1];
    bVar8 = iVar7 == iVar6;
    if (bVar8) {
      *(int *)(plVar4 + 1) = iVar7 + 1;
      iVar6 = iVar7;
    }
    iVar7 = iVar6;
    UNLOCK();
  } while (!bVar8);
  lVar5 = param_1[0xd];
  if (lVar5 != 0) {
    iVar7 = FUN_14934e78a(param_1,param_2,param_3);
    if (iVar7 != -1) {
      lVar3 = *param_1 + (longlong)iVar7 * 0x48;
      if ((lVar3 != 0) && (*param_1 + (longlong)iVar7 * 0x48 != -0x10)) {
        if (*(longlong *)(lVar3 + 0x28) != 0) {
          FUN_149350216(*(longlong *)(lVar3 + 0x28),lVar3 + 0x30,param_4);
        }
        goto LAB_14934fe8b;
      }
    }
    FUN_14934db4a(param_1,local_70,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
    FUN_14934dcc4(param_1,local_80,param_3);
    FUN_1492f0926(lVar5,local_70,param_3,0);
    FUN_149350082(lVar5,local_80,param_4);
    FUN_14934e254(&local_c8,local_80,lVar5);
    FUN_1444be0f2(&local_e0,local_70,lVar5);
    local_88 = local_b8;
    local_58 = &local_b0;
    local_b0 = local_e0;
    local_a8 = local_d8;
    uStack_a0 = uStack_d0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = local_c8;
    uStack_94 = uStack_c4;
    uStack_90 = (undefined4)uStack_c0;
    uStack_8c = uStack_c0._4_4_;
    uStack_c0 = 0;
    local_b8 = 0;
    local_60 = param_3;
    FUN_14935035c(param_1,local_4c,param_2);
    if (CONCAT44(uStack_8c,uStack_90) != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (uStack_c0 != 0) {
      FUN_1400020a8();
    }
    local_b0 = CONCAT44(local_b0._4_4_,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
    if (param_1[10] != 0) {
      FUN_149303af2(param_1[10],param_1 + 0xb,&local_b0);
    }
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_14934fe8b:
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
LAB_14934fea8:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149350082 FUN_149350082 body=402 status=ok
// SIG undefined FUN_149350082(void)

void FUN_149350082(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar5 = *(int *)(param_2 + 1);
  if (iVar5 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  iVar3 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar3 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar3,puVar7);
  iVar5 = FUN_140c4443c(param_1,uVar4,param_2);
  if (iVar5 == -1) {
LAB_149350149:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar8 = *param_1 + (longlong)local_44 * 0x40;
    plVar9 = (longlong *)(lVar8 + 0x10);
    *(undefined4 *)(lVar8 + 0x20) = 0x24;
    *(undefined8 *)(lVar8 + 0x18) = 0x80;
    lVar8 = param_1[0xb];
    param_1[0xb] = lVar8 + 0x80;
    if ((ulonglong)(param_1[0xc] - lVar8) < 0x80) {
      FUN_14112c458(param_1 + 10,lVar8);
    }
    lVar2 = param_1[10];
    puVar1 = (undefined8 *)(lVar2 + 0x70 + lVar8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x60 + lVar8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x50 + lVar8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x40 + lVar8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar8);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar2 + lVar8) = 0;
    ((undefined8 *)(lVar2 + lVar8))[1] = 0;
    *plVar9 = lVar8;
  }
  else {
    lVar8 = *param_1 + (longlong)iVar5 * 0x40;
    if (lVar8 == 0) goto LAB_149350149;
    if (*(int *)(lVar8 + 0x20) != 0x24) goto LAB_149350119;
    plVar9 = (longlong *)(*param_1 + (longlong)iVar5 * 0x40 + 0x10);
    if ((*plVar9 < 0) || (param_1[0xb] <= *plVar9)) goto LAB_149350119;
  }
  *(undefined4 *)((longlong)plVar9 + 0x14) = 0;
  uVar6 = FUN_149350286(param_1,plVar9,param_3);
  if ((uVar6 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_149350119:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149350216 FUN_149350216 body=111 status=ok
// SIG undefined FUN_149350216(void)

void FUN_149350216(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar6 = 0;
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = uVar6;
  }
  uVar1 = FUN_144a49b4a(uVar3,puVar4);
  iVar2 = FUN_140c4443c(param_1,uVar1,param_2);
  if (iVar2 != -1) {
    uVar6 = (longlong)iVar2 * 0x40 + *param_1;
  }
  lVar5 = uVar6 + 0x10;
  if (uVar6 == 0) {
    lVar5 = 0;
  }
  FUN_149350286(param_1,lVar5,param_3);
  return;
}



// FUNCTION 149350286 FUN_149350286 body=212 status=ok
// SIG undefined FUN_149350286(void)

undefined8 FUN_149350286(longlong param_1,longlong *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong lStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else {
    uVar1 = 0x100000;
    if (((int)param_2[2] == 0x24) && (uVar1 = 0x200000, param_2[1] == 0x80)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,0x80);
        param_2[3] = local_40;
        param_2[4] = lStack_38;
        memcpy((void *)(*(longlong *)(param_1 + 0x50) + *param_2),param_3,0x80);
        uVar1 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935035c FUN_14935035c body=276 status=ok
// SIG undefined FUN_14935035c(void)

undefined4 * FUN_14935035c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14934e57a(param_1,local_48);
  FUN_14934e6e0(local_40,*param_4,param_4[1]);
  *(undefined4 *)(local_40 + 0x40) = 0xffffffff;
  cVar1 = FUN_14934e660(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x44) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x40) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14934e076(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935048a FUN_14935048a body=177 status=ok
// SIG undefined FUN_14935048a(void)

void FUN_14935048a(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((longlong)local_24 < 0) || (*(int *)(param_1 + 0x38) <= local_24)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)local_24 * 8);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935053c FUN_14935053c body=259 status=ok
// SIG undefined FUN_14935053c(void)

void FUN_14935053c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_40;
  local_50 = (int)uStack_40;
  if (lVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,uStack_40 & 0xffffffff,0);
    memcpy(local_58,_Src,lVar2 * 2);
  }
  uVar1 = FUN_149350640(param_1,&local_58);
  *param_3 = uVar1;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149350640 FUN_149350640 body=435 status=ok
// SIG undefined FUN_149350640(void)

longlong FUN_149350640(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  void *_Src;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = (void *)0x0;
  local_58 = (int)param_2[1];
  lVar8 = (longlong)local_58;
  _Src = (void *)*param_2;
  if (lVar8 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_58,0);
    memcpy(local_60,_Src,lVar8 * 2);
  }
  plVar7 = *(longlong **)(param_1 + 0x30);
  if ((longlong)*(int *)(param_1 + 0x38) == 0) {
    bVar4 = 1;
  }
  else {
    plVar1 = plVar7 + *(int *)(param_1 + 0x38);
    plVar9 = plVar7;
    do {
      lVar8 = *plVar9;
      local_50 = *(longlong **)(lVar8 + 0x38);
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 8))();
      }
      local_48 = *(undefined4 *)(lVar8 + 0x40);
      plVar7 = (longlong *)FUN_1447a1f4a(&local_50);
      iVar6 = (int)plVar7[1];
      if (iVar6 == local_58) {
        bVar11 = true;
        if (1 < iVar6) {
          lVar8 = 0;
          while( true ) {
            uVar2 = *(ushort *)(*plVar7 + lVar8);
            uVar5 = (uint)uVar2;
            uVar3 = *(ushort *)((longlong)local_60 + lVar8);
            uVar10 = (uint)uVar3;
            if (uVar2 != uVar3) {
              if ((uVar3 | uVar2) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14935071f;
              }
              iVar6 = uVar5 - uVar10;
              goto LAB_14935077b;
            }
            if (uVar2 == 0) break;
LAB_14935071f:
            lVar8 = lVar8 + 2;
          }
          iVar6 = 0;
LAB_14935077b:
          bVar11 = iVar6 == 0;
        }
      }
      else {
        bVar11 = local_58 + iVar6 == 1;
      }
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 0x10))();
      }
      plVar7 = plVar9;
    } while ((!bVar11) && (plVar9 = plVar9 + 1, plVar7 = plVar1, plVar9 != plVar1));
    bVar4 = bVar11 ^ 1;
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((bool)(bVar4 | plVar7 == (longlong *)0x0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar7;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 1493507f8 FUN_1493507f8 body=103 status=ok
// SIG undefined FUN_1493507f8(void)

void FUN_1493507f8(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_190 = *(undefined8 *)(*param_2 + 8);
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  switchD_143c3d4dc::caseD_20();
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149350860 FUN_149350860 body=99 status=ok
// SIG undefined FUN_149350860(void)

void FUN_149350860(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined8 local_190;
  undefined ***local_188;
  undefined8 **local_180;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = &local_188;
  local_198 = &PTR_FUN_149e37810;
  local_188 = &local_198;
  local_190 = param_2;
  switchD_143c3d4dc::caseD_20(param_1,local_180);
  if ((local_8 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493508c4 FUN_1493508c4 body=274 status=ok
// SIG undefined FUN_1493508c4(void)

longlong * FUN_1493508c4(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((param_3 != 0) && ((longlong)*(int *)(param_3 + 0x38) != 0)) {
    plVar5 = *(longlong **)(param_3 + 0x30);
    plVar1 = plVar5 + *(int *)(param_3 + 0x38);
    do {
      lVar3 = *plVar5;
      if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x58) != 0)) {
        plVar6 = *(longlong **)(lVar3 + 0x50);
        plVar8 = plVar6 + *(int *)(lVar3 + 0x58);
        do {
          lVar3 = *plVar6;
          if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x30) != 0)) {
            lVar7 = (longlong)*(int *)(lVar3 + 0x30) * 0x58;
            lVar9 = *(longlong *)(lVar3 + 0x28) + 0x28;
            do {
              lVar4 = FUN_1493509d6(lVar9);
              if (*(char *)(lVar9 + 0x28) == '\0') {
                if (lVar4 == param_1 && param_4 == '\0') goto LAB_149350975;
              }
              else if (lVar4 == param_1) {
LAB_149350975:
                iVar2 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar2 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
                  FUN_14935906c(param_2,iVar2);
                }
                *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar3;
              }
              lVar9 = lVar9 + 0x58;
              lVar7 = lVar7 + -0x58;
            } while (lVar7 != 0);
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar8);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return param_2;
}



// FUNCTION 1493509d6 FUN_1493509d6 body=193 status=ok
// SIG undefined FUN_1493509d6(void)

longlong FUN_1493509d6(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_145876c0a();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 149350a98 FUN_149350a98 body=1168 status=ok
// SIG undefined FUN_149350a98(void)

longlong FUN_149350a98(ulonglong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_158 [32];
  ulonglong **local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong local_108 [4];
  longlong local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong *local_c8;
  longlong *local_c0;
  undefined8 local_a8;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((param_2 != (longlong *)0x0) && ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0)) {
    uVar4 = *(uint *)((longlong)param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    if ((*(uint *)(lVar12 + 8) >> 0x1c & 1) == 0) {
      uVar6 = (**(code **)(*param_2 + 0x180))(param_2);
      if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x74)) {
LAB_149350b28:
        local_d8 = 0;
      }
      else {
        uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        lVar12 = param_1 + 0x78;
        if (*(longlong *)(param_1 + 0x80) != 0) {
          lVar12 = *(longlong *)(param_1 + 0x80);
        }
        iVar5 = *(int *)(lVar12 + (ulonglong)
                                  (*(int *)(param_1 + 0x88) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
        if (iVar5 == -1) goto LAB_149350b28;
        local_d8 = 0;
        do {
          puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar5 * 0x18);
          if (*puVar2 == uVar6) {
            if (puVar2 == (ulonglong *)0x0) goto LAB_149350b28;
            local_d8 = puVar2[1];
            break;
          }
          iVar5 = (int)puVar2[2];
        } while (iVar5 != -1);
      }
      local_d0 = uVar6;
      cVar3 = FUN_144729dda();
      if (cVar3 == '\0') {
        local_e8 = 0;
        uStack_e0 = 0;
        local_108[3] = FUN_145a93cfc();
        if ((local_108[3] != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(local_108[3]);
        }
        FUN_1434f53e8(uVar6,local_108 + 3,&local_e8);
        lVar12 = local_e8;
        lVar14 = (longlong)(int)uStack_e0;
        if (lVar14 != 0) {
          lVar13 = 0;
          do {
            lVar8 = *(longlong *)(lVar12 + lVar13);
            uVar7 = FUN_144a7757c();
            uVar9 = FUN_144a78ede(lVar8,uVar7);
            if (lVar8 != 0 && uVar9 == uVar6) {
              lVar10 = FUN_145a93cfc();
              if (((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
                 (uVar9 = FUN_149350f2a(lVar8,0), uVar9 == param_1)) goto LAB_149350d66;
            }
            lVar13 = lVar13 + 8;
          } while (lVar14 * 8 != lVar13);
        }
        local_108[0] = 0;
        local_108[1] = 0;
        local_108[2] = 0;
        local_118 = 0;
        local_128 = 0;
        uStack_120 = 0;
        FUN_1411371f6(&local_c8);
        local_a8 = *(undefined8 *)(uVar6 + 0x30);
        uVar7 = FUN_145a93cfc();
        local_138 = &local_c8;
        lVar8 = FUN_141137228(uVar6,uVar7,local_108,&local_128);
        FUN_149351052(lVar8,param_1);
        if (local_88 != 0) {
          if (local_78 == (longlong *)0x0) {
            local_78 = local_68;
          }
          (**(code **)(*local_78 + 0x10))();
        }
        if (lVar8 == 0) {
          lVar12 = 0;
        }
        else {
LAB_149350d66:
          puVar2 = *(ulonglong **)(param_1 + 0x28);
          if ((puVar2 != (ulonglong *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(puVar2);
          }
          local_c8 = puVar2;
          if ((puVar2 != (ulonglong *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(puVar2);
          }
          plVar1 = (longlong *)(lVar8 + 0x3b0);
          if ((puVar2 != (ulonglong *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(puVar2);
          }
          uVar4 = ((uint)((ulonglong)puVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar2 >> 4)) *
                  -0x7a143595;
          uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
          iVar5 = FUN_14935806e(plVar1,uVar4 >> 0x10 ^ uVar4,&local_c8);
          if (((iVar5 == -1) ||
              (lVar12 = *plVar1 + (longlong)iVar5 * 0x18, plVar11 = (longlong *)(lVar12 + 8),
              plVar11 == (longlong *)0x0 || lVar12 == 0)) || (lVar12 = *plVar11, lVar12 == 0)) {
            lVar12 = FUN_1493510ed(lVar8,*(ulonglong *)(param_1 + 0x28));
            local_108[0] = lVar12;
            if ((lVar12 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(lVar12);
            }
            local_c0 = local_108;
            local_c8 = (ulonglong *)(param_1 + 0x28);
            FUN_14935813e(plVar1,&local_128);
          }
          local_c8 = (ulonglong *)0x0;
          local_c0 = (longlong *)((ulonglong)local_c0 & 0xffffffff00000000);
          FUN_1446efa72(&local_c8,0,2,0x10);
          puVar2 = local_c8;
          local_c0 = (longlong *)CONCAT44(local_c0._4_4_,2);
          *local_c8 = (ulonglong)&PTR_LAB_14bc5ddb0;
          uVar6 = FUN_144a3f946();
          puVar2[2] = uVar6;
          *puVar2 = (ulonglong)&PTR_FUN_14bc5dd40;
          puVar2[3] = param_1;
          FUN_1493586f2(lVar12 + 0x28,local_108,&local_c8);
          FUN_1449db362(&local_c8);
          local_108[0] = 0;
          FUN_14485c47a(local_108,lVar12);
          local_c8 = &local_d0;
          local_c0 = local_108;
          FUN_1493587e8((longlong *)(param_1 + 0x40),&local_128,&local_c8);
        }
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        lVar12 = FUN_14479d2ce(&local_d8);
      }
      goto LAB_149350b56;
    }
  }
  lVar12 = 0;
LAB_149350b56:
  if ((local_40 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar12;
}



// FUNCTION 149350f2a FUN_149350f2a body=294 status=ok
// SIG undefined FUN_149350f2a(void)

longlong FUN_149350f2a(longlong param_1,byte param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x390) != 0) {
    plVar4 = (longlong *)(param_1 + 0x390);
    lVar2 = FUN_140007850(plVar4);
    if (lVar2 == 0) {
LAB_149350f67:
      if (param_2 == 0) goto LAB_149350fbe;
    }
    else {
      lVar3 = FUN_145886226();
      if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) goto LAB_149350f67;
      bVar5 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30;
      if (bVar5) {
        lVar2 = 0;
      }
      if ((bVar5 & param_2) == 0) goto LAB_149350fc0;
    }
    cVar1 = (*(code *)PTR_FUN_14c75b118)();
    if (cVar1 == '\0') {
      lVar2 = FUN_140081d40(plVar4,0);
      if (lVar2 != 0) {
        lVar3 = FUN_145886226();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) goto LAB_149350fc0;
      }
    }
    else {
      local_38[2] = *plVar4;
      if (local_38[2] == 0) {
        local_38[0] = 0;
        local_38[1] = 0;
      }
      else {
        FUN_1400021e4(local_38 + 2,local_38);
      }
      FUN_1411e42ef(local_38,0);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_149350fbe:
  lVar2 = 0;
LAB_149350fc0:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 149351052 FUN_149351052 body=154 status=ok
// SIG undefined FUN_149351052(void)

void FUN_149351052(longlong param_1)

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
  FUN_1400bbfc4(&local_38);
  *(undefined4 *)(param_1 + 0x390) = local_38;
  *(undefined4 *)(param_1 + 0x394) = uStack_34;
  *(undefined4 *)(param_1 + 0x398) = uStack_30;
  *(undefined4 *)(param_1 + 0x39c) = uStack_2c;
  if ((undefined4 *)(param_1 + 0x390) == &local_38) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x3a0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x3a0) = local_28;
    *(undefined4 *)(param_1 + 0x3a8) = local_20;
    *(undefined4 *)(param_1 + 0x3ac) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493510ed FUN_1493510ed body=185 status=ok
// SIG undefined FUN_1493510ed(void)

undefined8 FUN_1493510ed(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0x40;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493511a8 FUN_1493511a8 body=395 status=ok
// SIG undefined FUN_1493511a8(void)

void FUN_1493511a8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = local_60;
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    plVar1 = (longlong *)(param_1 + 0x40);
    local_30 = param_1 + 0x50;
    local_38 = 0x100000000;
    local_28 = 0xffffffff;
    local_20 = 0;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_38);
    }
    local_60 = local_28;
    uVar2 = local_60;
    local_58 = local_20;
    local_54 = local_1c;
    local_70 = local_38;
    local_68 = local_30;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_28 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_30 + 0x18)) {
      iVar4 = local_60._4_4_;
      local_60 = uVar2;
      do {
        cVar3 = FUN_144729dda(*local_78 + (longlong)iVar4 * 0x18 + 8);
        if (cVar3 != '\0') {
          cVar3 = FUN_149351334(*local_78 + (longlong)local_60._4_4_ * 0x18 + 8,param_2);
          if (cVar3 != '\0') {
            FUN_149358d28(local_50,local_60._4_4_);
            local_40 = CONCAT11(local_40._1_1_,1);
          }
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar2 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_149358b08(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
        uVar2 = local_60;
      }
    }
  }
  local_60 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149351334 FUN_149351334 body=118 status=ok
// SIG undefined FUN_149351334(void)

ulonglong FUN_149351334(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493513b0 FUN_1493513b0 body=166 status=ok
// SIG undefined FUN_1493513b0(void)

void FUN_1493513b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_149350f2a(param_1,local_24 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149351458 FUN_149351458 body=156 status=ok
// SIG undefined FUN_149351458(void)

void FUN_149351458(undefined8 param_1,longlong param_2)

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
  FUN_149351052(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493514fc FUN_1493514fc body=236 status=ok
// SIG undefined FUN_1493514fc(void)

void FUN_1493514fc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493515ea(param_1,local_24,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493515ea FUN_1493515ea body=89 status=ok
// SIG undefined FUN_1493515ea(void)

undefined8 FUN_1493515ea(undefined8 param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_149350f2a(param_1,1);
  if ((((lVar1 == 0) || ((int)param_2 < 0)) || (*(int *)(lVar1 + 0x38) <= (int)param_2)) ||
     (((lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + (ulonglong)param_2 * 8), lVar1 == 0 ||
       ((int)param_3 < 0)) ||
      ((*(int *)(lVar1 + 0x58) <= (int)param_3 ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x50) + (ulonglong)param_3 * 8) == 0)))))) {
    uVar2 = 0;
  }
  else {
    FUN_149351a42();
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14935164a FUN_14935164a body=421 status=ok
// SIG undefined FUN_14935164a(void)

void FUN_14935164a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  ulonglong uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  pvVar1 = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_50;
  local_60 = (int)uStack_50;
  if (lVar3 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,uStack_50 & 0xffffffff,0);
    memcpy(local_68,pvVar1,lVar3 * 2);
  }
  pvVar1 = local_48;
  local_78 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_40;
  local_70 = (int)uStack_40;
  if (lVar3 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,uStack_40 & 0xffffffff,0);
    memcpy(local_78,pvVar1,lVar3 * 2);
  }
  uVar2 = FUN_1493517f0(param_1,&local_78,&local_68);
  *param_3 = uVar2;
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493517f0 FUN_1493517f0 body=590 status=ok
// SIG undefined FUN_1493517f0(void)

ulonglong FUN_1493517f0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_2;
  lVar5 = FUN_149350f2a(param_1,1);
  if ((lVar5 != 0) && ((longlong)*(int *)(lVar5 + 0x38) != 0)) {
    plVar12 = *(longlong **)(lVar5 + 0x30);
    local_60 = plVar12 + *(int *)(lVar5 + 0x38);
    do {
      lVar5 = *plVar12;
      local_58 = *(longlong **)(lVar5 + 0x38);
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 8))();
      }
      local_50 = *(undefined4 *)(lVar5 + 0x40);
      plVar6 = (longlong *)FUN_1447a1f4a(&local_58);
      iVar4 = (int)plVar6[1];
      if (iVar4 == (int)local_68[1]) {
        bVar13 = true;
        if (1 < iVar4) {
          lVar9 = 0;
          while( true ) {
            uVar1 = *(ushort *)(*plVar6 + lVar9);
            uVar3 = (uint)uVar1;
            uVar2 = *(ushort *)(*local_68 + lVar9);
            uVar10 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1493518b1;
              }
              iVar4 = uVar3 - uVar10;
              goto LAB_1493519e1;
            }
            if (uVar1 == 0) break;
LAB_1493518b1:
            lVar9 = lVar9 + 2;
          }
          iVar4 = 0;
LAB_1493519e1:
          bVar13 = iVar4 == 0;
        }
      }
      else {
        bVar13 = (int)local_68[1] + iVar4 == 1;
      }
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      if ((bVar13) && ((longlong)*(int *)(lVar5 + 0x58) != 0)) {
        plVar6 = *(longlong **)(lVar5 + 0x50);
        plVar11 = plVar6 + *(int *)(lVar5 + 0x58);
        do {
          lVar5 = *plVar6;
          local_58 = *(longlong **)(lVar5 + 0x48);
          if (local_58 != (longlong *)0x0) {
            (**(code **)(*local_58 + 8))();
          }
          local_50 = *(undefined4 *)(lVar5 + 0x50);
          plVar7 = (longlong *)FUN_1447a1f4a(&local_58);
          iVar4 = (int)plVar7[1];
          if (iVar4 == (int)param_3[1]) {
            bVar13 = true;
            if (1 < iVar4) {
              lVar9 = 0;
              while( true ) {
                uVar1 = *(ushort *)(*plVar7 + lVar9);
                uVar3 = (uint)uVar1;
                uVar2 = *(ushort *)(*param_3 + lVar9);
                uVar10 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_149351972;
                  }
                  iVar4 = uVar3 - uVar10;
                  goto LAB_1493519ca;
                }
                if (uVar1 == 0) break;
LAB_149351972:
                lVar9 = lVar9 + 2;
              }
              iVar4 = 0;
LAB_1493519ca:
              bVar13 = iVar4 == 0;
            }
          }
          else {
            bVar13 = (int)param_3[1] + iVar4 == 1;
          }
          if (local_58 != (longlong *)0x0) {
            (**(code **)(*local_58 + 0x10))();
          }
          if (bVar13) {
            FUN_149351a42(lVar5);
            uVar8 = CONCAT71((int7)((ulonglong)&local_58 >> 8),1);
            goto LAB_1493519ea;
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar11);
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != local_60);
  }
  uVar8 = 0;
LAB_1493519ea:
  if (*local_68 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 149351a42 FUN_149351a42 body=228 status=ok
// SIG undefined FUN_149351a42(void)

void FUN_149351a42(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar3 = FUN_144b00ba4();
  if (lVar3 != DAT_14c951640) {
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      lVar3 = (longlong)*(int *)(param_1 + 0x30) * 0x58;
      lVar4 = *(longlong *)(param_1 + 0x28) + 0x28;
      do {
        if ((*(char *)(lVar4 + 0x28) == '\x01') && (lVar6 = FUN_1493509d6(lVar4), lVar6 != 0)) {
          FUN_149351a42(lVar6);
        }
        lVar4 = lVar4 + 0x58;
        lVar3 = lVar3 + -0x58;
      } while (lVar3 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x60) != 0) {
      plVar5 = *(longlong **)(param_1 + 0x58);
      plVar1 = plVar5 + *(int *)(param_1 + 0x60);
      do {
        lVar3 = *plVar5;
        iVar2 = *(int *)(lVar3 + 0x78);
        if ((longlong)iVar2 != 0) {
          lVar4 = *(longlong *)(lVar3 + 0x70);
          lVar6 = 0;
          do {
            (**(code **)(**(longlong **)(lVar4 + lVar6) + 0x2c0))();
            lVar6 = lVar6 + 8;
          } while ((longlong)iVar2 * 8 != lVar6);
        }
        iVar2 = *(int *)(lVar3 + 0x88);
        if ((longlong)iVar2 != 0) {
          lVar4 = *(longlong *)(lVar3 + 0x80);
          lVar6 = 0;
          do {
            FUN_1444ca8c4(lVar3,*(undefined8 *)(lVar4 + lVar6));
            lVar6 = lVar6 + 8;
          } while ((longlong)iVar2 * 8 != lVar6);
        }
        plVar5 = plVar5 + 1;
      } while (plVar5 != plVar1);
    }
  }
  return;
}



// FUNCTION 149351b2a FUN_149351b2a body=29 status=ok
// SIG undefined FUN_149351b2a(void)

void FUN_149351b2a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a7757c();
  FUN_144a78ede(param_1,uVar1);
  return;
}



// FUNCTION 149351b68 FUN_149351b68 body=107 status=ok
// SIG undefined FUN_149351b68(void)

void FUN_149351b68(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a5dc74(local_28);
  FUN_140008f88(param_3,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149351c2a FUN_149351c2a body=196 status=ok
// SIG undefined FUN_149351c2a(void)

longlong FUN_149351c2a(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  FUN_1401a700c(&local_24,0x3b);
  lVar2 = 8;
  if (uVar1 != local_24) {
    FUN_1401a700c(&local_24,0x3c);
    if (uVar1 != local_24) {
      FUN_1401a700c(&local_24,0x45);
      if (uVar1 != local_24) {
        FUN_1401a700c(&local_24,0x39);
        if (uVar1 != local_24) {
          FUN_1401a700c(&local_24,0x36);
          lVar2 = (ulonglong)(uVar1 == local_24) << 3;
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149351cef FUN_149351cef body=96 status=ok
// SIG undefined FUN_149351cef(void)

void FUN_149351cef(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xb8) + 8);
    lVar3 = (longlong)iVar1;
    lVar2 = FUN_149351c2a();
    if (((lVar3 != 0) && (lVar2 != 0)) && (iVar1 != *(int *)(param_2 + 8))) {
      if ((int)lVar2 == 4) {
        FUN_149351e07(lVar3,param_2);
        return;
      }
      if ((int)lVar2 == 8) {
        FUN_149351d4f(lVar3,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149351d4f FUN_149351d4f body=183 status=ok
// SIG undefined FUN_149351d4f(void)

void FUN_149351d4f(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = (int)param_2[1] >> 2;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1401211f6(&local_38,param_1);
  if (0 < iVar2) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      *(double *)(local_38 + lVar3 * 8) = (double)*(float *)(lVar1 + lVar3 * 4);
      lVar3 = lVar3 + 1;
    } while (iVar2 != (int)lVar3);
  }
  if (&local_38 == param_2) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_38;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149351e07 FUN_149351e07 body=183 status=ok
// SIG undefined FUN_149351e07(void)

void FUN_149351e07(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = (int)param_2[1] >> 3;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1401211f6(&local_38,param_1);
  if (0 < iVar2) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      *(float *)(local_38 + lVar3 * 4) = (float)*(double *)(lVar1 + lVar3 * 8);
      lVar3 = lVar3 + 1;
    } while (iVar2 != (int)lVar3);
  }
  if (&local_38 == param_2) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_38;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149351ebf FUN_149351ebf body=156 status=ok
// SIG undefined FUN_149351ebf(void)

byte FUN_149351ebf(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1427e11c2(param_1,&local_28,param_2);
  cVar1 = FUN_1409671e2(param_1);
  bVar2 = 1;
  if (cVar1 != '\0') {
    FUN_1400021e4(&local_28,local_38);
    bVar2 = FUN_144a38768(local_38,L"_MAX",4,0);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    bVar2 = bVar2 ^ 1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28 != 0 & bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149351f5c FUN_149351f5c body=194 status=ok
// SIG undefined FUN_149351f5c(void)

longlong FUN_149351f5c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 == (longlong *)0x0) {
LAB_149352015:
    lVar3 = 0;
  }
  else {
    lVar3 = plVar1[1];
    lVar2 = FUN_144a7add4();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      if (!bVar4) goto LAB_149351fbd;
    }
    else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) {
LAB_149351fbd:
      lVar3 = plVar1[1];
      lVar2 = FUN_14475b26a();
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        bVar4 = lVar3 != 0;
        if (lVar3 != lVar2 && bVar4) {
          do {
            lVar3 = *(longlong *)(lVar3 + 0x30);
            bVar4 = lVar3 != 0;
            if (lVar3 == lVar2) break;
          } while (lVar3 != 0);
        }
        if (bVar4) goto LAB_149351fd5;
      }
      else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_149351fd5:
                    /* WARNING: Could not recover jumptable at 0x000149351fe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar3 = (**(code **)(*plVar1 + 0x1f0))(plVar1);
        return lVar3;
      }
      goto LAB_149352015;
    }
    lVar3 = plVar1[0xf];
  }
  return lVar3;
}



// FUNCTION 14935201e FUN_14935201e body=668 status=ok
// SIG undefined FUN_14935201e(void)

longlong FUN_14935201e(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x38);
    local_58 = *puVar1;
    uStack_54 = *(undefined4 *)(param_1 + 0x3c);
    uStack_50 = *(undefined4 *)(param_1 + 0x40);
    uStack_4c = *(undefined4 *)(param_1 + 0x44);
    local_48 = (void *)0x0;
    local_40 = *(int *)(param_1 + 0x50);
    lVar7 = (longlong)local_40;
    _Src = *(void **)(param_1 + 0x48);
    if (lVar7 == 0) {
      local_3c = 0;
    }
    else {
      FUN_1446dd670(&local_48,local_40,0);
      memcpy(local_48,_Src,lVar7 * 2);
    }
    lVar7 = FUN_140007850();
    if ((lVar7 == 0) || ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0)) {
LAB_14935213f:
      lVar5 = param_1 + 0x58;
      lVar7 = FUN_14479d2ce(lVar5);
      if (lVar7 != 0) {
LAB_149352157:
        FUN_1400bbfc4(&local_78,lVar7);
        *puVar1 = local_78;
        *(undefined4 *)(param_1 + 0x3c) = uStack_74;
        *(undefined4 *)(param_1 + 0x40) = uStack_70;
        *(undefined4 *)(param_1 + 0x44) = uStack_6c;
        if (puVar1 == &local_78) {
          if (local_68 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x48) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0x48) = local_68;
          local_68 = 0;
          *(undefined4 *)(param_1 + 0x50) = local_60;
          *(undefined4 *)(param_1 + 0x54) = local_5c;
        }
        goto LAB_1493521a5;
      }
      bVar3 = true;
      if (((*(int *)(param_1 + 100) != 0 || *(int *)(param_1 + 0x60) != 0) ||
          *(int *)(param_1 + 0x68) != 0) || *(int *)(param_1 + 0x6c) != 0) {
        lVar7 = thunk_FUN_140971090();
        cVar4 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar7 == 0) || (cVar4 == '\0')) {
          FUN_14485c47a(lVar5,lVar7);
          if (lVar7 == 0) goto LAB_149352287;
        }
        else {
          uVar2 = *(uint *)(lVar7 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar6 = 0;
          }
          if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(lVar5,lVar7);
          }
        }
        if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) goto LAB_149352157;
      }
LAB_149352287:
      lVar7 = 0;
    }
    else {
      uVar2 = *(uint *)(lVar7 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) != 0) goto LAB_14935213f;
      FUN_1468b526e(&local_78,lVar7);
      *(undefined4 *)(param_1 + 0x60) = local_78;
      *(undefined4 *)(param_1 + 100) = uStack_74;
      *(undefined4 *)(param_1 + 0x68) = uStack_70;
      *(undefined4 *)(param_1 + 0x6c) = uStack_6c;
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      if (cVar4 == '\0') {
LAB_1493522a7:
        FUN_14485c47a(param_1 + 0x58,lVar7);
      }
      else {
        uVar2 = *(uint *)(lVar7 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) goto LAB_1493522a7;
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
LAB_1493521a5:
      bVar3 = false;
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (!bVar3) goto LAB_1493521bd;
  }
  lVar7 = 0;
LAB_1493521bd:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 1493522bc FUN_1493522bc body=193 status=ok
// SIG undefined FUN_1493522bc(void)

ulonglong FUN_1493522bc(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  
  if ((*(longlong *)(param_1 + 0x68) != 0) && (lVar2 = *(longlong *)(param_1 + 0x60), lVar2 != 0)) {
    lVar4 = FUN_1446f4bba();
    uVar6 = (undefined7)((ulonglong)lVar2 >> 8);
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      uVar5 = CONCAT71(uVar6,1);
      goto LAB_149352373;
    }
    lVar2 = *(longlong *)(param_1 + 0x68);
    uVar5 = CONCAT71(uVar6,1);
    if (lVar2 == 0) goto LAB_149352373;
    if (param_1 != 0) {
      cVar3 = FUN_14282a00c(&DAT_14c9647b8,param_1);
      if (((cVar3 != '\0') && (*(longlong *)(lVar2 + 0x10) != 0)) &&
         ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
        uVar1 = *(uint *)(lVar2 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        if (((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) && ((*(uint *)(lVar2 + 8) & 0x18000) == 0))
        goto LAB_149352373;
      }
    }
  }
  uVar5 = 0;
LAB_149352373:
  return uVar5 & 0xffffffff;
}



// FUNCTION 14935237e FUN_14935237e body=3158 status=ok
// SIG undefined FUN_14935237e(void)

ulonglong FUN_14935237e(longlong param_1,longlong *param_2,longlong param_3,uint param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  void *_Src;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  undefined8 uVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  undefined7 uVar19;
  ulonglong uVar18;
  uint uVar20;
  longlong *plVar21;
  longlong *plVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auStack_c8 [39];
  byte local_a1;
  ulonglong local_a0;
  ulonglong local_98;
  longlong *local_90;
  longlong local_88;
  int local_80;
  int iStack_7c;
  uint uStack_78;
  int iStack_74;
  undefined8 local_70;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xa8) + (longlong)(int)param_4 * 0x28);
  iVar7 = 0;
  if (*(int *)(puVar1 + 2) != -1) {
    iVar7 = *(int *)(puVar1 + 2);
  }
  if (param_4 == 0) {
    *(longlong **)(param_1 + 0x60) = param_2;
    *(longlong *)(param_1 + 0x68) = param_3;
  }
  if (*(int *)(puVar1 + 1) == 0) {
    puVar14 = &DAT_149dfb77a;
  }
  else {
    puVar14 = (undefined2 *)*puVar1;
  }
  FUN_1446f470e(&local_88,puVar14,0);
  lVar9 = FUN_144a8e29b(param_2,local_88);
  if (lVar9 == 0) goto LAB_149352690;
  if (*(int *)(param_1 + 0xb0) + -1 <= (int)param_4) {
    *(longlong *)(param_1 + 0x58) = lVar9;
    *(longlong *)(param_1 + 0x78) =
         (longlong)iVar7 * (longlong)*(int *)(lVar9 + 0x34) + param_3 + *(int *)(lVar9 + 0x44);
    uVar13 = CONCAT71((uint7)(uint3)(param_4 >> 8),1);
    goto LAB_1493526a1;
  }
  lVar11 = *(longlong *)(lVar9 + 8);
  local_a0 = (ulonglong)param_4;
  lVar10 = FUN_144a810c6();
  if (*(ulonglong *)(lVar10 + 8) == 0) {
    bVar23 = lVar11 != 0;
    if (lVar11 != lVar10 && bVar23) {
      do {
        lVar11 = *(longlong *)(lVar11 + 0x30);
        bVar23 = lVar11 != 0;
        if (lVar11 == lVar10) break;
      } while (lVar11 != 0);
    }
    if (!bVar23) goto LAB_149352648;
LAB_149352449:
    lVar11 = *(longlong *)
              ((longlong)iVar7 * (longlong)*(int *)(lVar9 + 0x34) + *(int *)(lVar9 + 0x44) + param_3
              );
    if (lVar11 == 0) {
      if (param_2 != (longlong *)0x0) {
        lVar11 = FUN_14043ab18();
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
            == lVar11 + 0x30)) {
          lVar11 = param_2[0x22];
          if (lVar11 == 0) {
            (**(code **)(*param_2 + 1000))(param_2);
            lVar11 = param_2[0x22];
          }
          if (lVar11 == param_3) {
            uVar13 = param_2[0x57];
            FUN_1449b8608(&local_88,puVar1 + 3);
            bVar23 = true;
            if ((longlong)*(int *)(uVar13 + 0x40) != 0) {
              plVar21 = *(longlong **)(uVar13 + 0x38);
              plVar22 = plVar21 + *(int *)(uVar13 + 0x40);
              do {
                lVar11 = *(longlong *)(lVar9 + 0x70);
                if (lVar11 != 0) {
                  lVar10 = *plVar21;
                  if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x28) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar10 + 0x28) + 0x30) +
                       (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
                    local_50 = *(undefined8 *)(*(longlong *)(lVar10 + 0x30) + 0x18);
                    FUN_1400021e4(&local_50,&local_60);
                    uVar19 = (undefined7)(uVar13 >> 8);
                    if (local_80 == iStack_58) {
                      uVar13 = CONCAT71(uVar19,1);
                      if (1 < local_80) {
                        lVar11 = 0;
                        while( true ) {
                          uVar4 = *(ushort *)(local_88 + lVar11);
                          uVar8 = (uint)uVar4;
                          uVar5 = *(ushort *)(CONCAT44(uStack_5c,local_60) + lVar11);
                          uVar20 = (uint)uVar5;
                          if (uVar4 != uVar5) {
                            if ((uVar5 | uVar4) < 0x80) {
                              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                              uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar5];
                              if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5])
                              goto LAB_149352582;
                            }
                            iVar7 = uVar8 - uVar20;
                            goto LAB_1493525de;
                          }
                          if (uVar4 == 0) break;
LAB_149352582:
                          lVar11 = lVar11 + 2;
                        }
                        iVar7 = 0;
LAB_1493525de:
                        uVar13 = CONCAT71(uVar19,iVar7 == 0);
                      }
                    }
                    else {
                      uVar13 = CONCAT71(uVar19,iStack_58 + local_80 == 1);
                    }
                    if (CONCAT44(uStack_5c,local_60) != 0) {
                      FUN_1400020a8();
                    }
                    if ((char)uVar13 != '\0') {
                      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar10 + 0x28);
                      uVar15 = *(undefined8 *)(lVar10 + 0x30);
                      *(undefined8 *)(param_1 + 0x68) = uVar15;
                      *(undefined8 *)(param_1 + 0x70) = uVar15;
                      uVar8 = FUN_14935237e(param_1,*(undefined8 *)(lVar10 + 0x28),
                                            *(undefined8 *)(lVar10 + 0x30),(int)local_a0 + 1);
                      uVar13 = (ulonglong)uVar8;
                      bVar23 = false;
                      break;
                    }
                  }
                }
                plVar21 = plVar21 + 1;
              } while (plVar21 != plVar22);
            }
            if (local_88 != 0) {
              FUN_1400020a8();
            }
            goto joined_r0x000149352b42;
          }
        }
      }
LAB_149352690:
      uVar13 = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      goto LAB_1493526a1;
    }
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar11 + 0x10);
    *(longlong *)(param_1 + 0x68) = lVar11;
    *(longlong *)(param_1 + 0x70) = lVar11;
    iVar7 = (int)local_a0;
    uVar15 = *(undefined8 *)(lVar11 + 0x10);
  }
  else {
    if ((*(ulonglong *)(lVar11 + 0x18) & *(ulonglong *)(lVar10 + 8)) != 0) goto LAB_149352449;
LAB_149352648:
    lVar11 = *(longlong *)(lVar9 + 8);
    lVar10 = FUN_14010a2ea();
    if (*(ulonglong *)(lVar10 + 8) != 0) {
      if ((*(ulonglong *)(lVar11 + 0x18) & *(ulonglong *)(lVar10 + 8)) != 0) goto LAB_149352664;
LAB_149352706:
      lVar11 = *(longlong *)(lVar9 + 8);
      lVar10 = FUN_1446ef9c4();
      if (*(ulonglong *)(lVar10 + 8) == 0) {
        bVar23 = lVar11 != 0;
        if (lVar11 != lVar10 && bVar23) {
          do {
            lVar11 = *(longlong *)(lVar11 + 0x30);
            bVar23 = lVar11 != 0;
            if (lVar11 == lVar10) break;
          } while (lVar11 != 0);
        }
        if (bVar23) goto LAB_149352726;
LAB_149352838:
        lVar11 = *(longlong *)(lVar9 + 8);
        lVar10 = FUN_1446dcc8c();
        if (*(ulonglong *)(lVar10 + 8) == 0) {
          bVar23 = lVar11 != 0;
          if (lVar11 != lVar10 && bVar23) {
            do {
              lVar11 = *(longlong *)(lVar11 + 0x30);
              bVar23 = lVar11 != 0;
              if (lVar11 == lVar10) break;
            } while (lVar11 != 0);
          }
          if (bVar23) goto LAB_14935292d;
        }
        else if ((*(ulonglong *)(lVar11 + 0x18) & *(ulonglong *)(lVar10 + 8)) != 0) {
LAB_14935292d:
          lVar11 = (longlong)iVar7 * (longlong)*(int *)(lVar9 + 0x34) +
                   param_3 + *(int *)(lVar9 + 0x44);
          *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar9 + 0x70);
          *(longlong *)(param_1 + 0x68) = lVar11;
          iVar7 = (int)local_a0;
          uVar15 = *(undefined8 *)(lVar9 + 0x70);
          goto LAB_1493528f0;
        }
        lVar11 = *(longlong *)(lVar9 + 8);
        lVar10 = FUN_1446e6bbc();
        if (*(ulonglong *)(lVar10 + 8) == 0) {
          bVar23 = lVar11 != 0;
          if (lVar11 != lVar10 && bVar23) {
            do {
              lVar11 = *(longlong *)(lVar11 + 0x30);
              bVar23 = lVar11 != 0;
              if (lVar11 == lVar10) break;
            } while (lVar11 != 0);
          }
          if (bVar23) {
LAB_14935298d:
            FUN_14935420e(&local_88,
                          *(longlong *)(param_1 + 0xa8) + (longlong)(int)param_4 * 0x28 + 0x28);
            uVar8 = uStack_78;
            if (uStack_78 == 0xffffffff) {
              uVar8 = 0;
            }
            uVar18 = (ulonglong)*(int *)(lVar9 + 0x44);
            bVar3 = *(byte *)(lVar9 + 0x70);
            (**(code **)(**(longlong **)(lVar9 + 0x78) + 0x178))();
            if (((int)uVar8 < 0) ||
               (puVar16 = (ulonglong *)(param_3 + uVar18), (int)puVar16[1] <= (int)uVar8)) {
              bVar23 = false;
              uVar13 = 0;
              goto LAB_149352b21;
            }
            lVar11 = *(longlong *)(lVar9 + 0x78);
            uVar13 = (ulonglong)*(int *)(lVar11 + 0x34);
            if (*(int *)(param_1 + 0xb0) + -2 == (int)local_a0) {
              *(longlong *)(param_1 + 0x58) = lVar11;
              if ((int)puVar16[1] == 0) {
                lVar9 = 0;
              }
              else {
                if ((bVar3 & 1) == 0) {
                  uVar17 = *puVar16;
                }
                else {
                  uVar17 = *puVar16;
                  if ((uVar17 & 1) != 0) {
                    uVar17 = (longlong)puVar16 + ((longlong)uVar17 >> 0x18);
                  }
                }
                lVar9 = uVar13 * uVar8 + uVar17;
              }
              *(longlong *)(param_1 + 0x78) = lVar9;
LAB_149352a24:
              uVar13 = CONCAT71((int7)(uVar18 >> 8),1);
LAB_149352a27:
              bVar23 = false;
            }
            else {
              local_98 = uVar13;
              if (lVar11 != 0) {
                uVar18 = *(ulonglong *)(lVar11 + 8);
                uVar13 = FUN_1446dcc8c();
                if (*(ulonglong *)(uVar13 + 8) == 0) {
                  bVar23 = uVar18 != 0;
                  if (uVar18 != uVar13 && bVar23) {
                    do {
                      uVar18 = *(ulonglong *)(uVar18 + 0x30);
                      bVar23 = uVar18 != 0;
                      if (uVar18 == uVar13) break;
                    } while (uVar18 != 0);
                  }
                  if (bVar23) goto LAB_149352d17;
                  goto LAB_149352b78;
                }
                if ((*(ulonglong *)(uVar18 + 0x18) & *(ulonglong *)(uVar13 + 8)) == 0)
                goto LAB_149352b78;
LAB_149352d17:
                if ((int)puVar16[1] == 0) {
                  lVar9 = 0;
                }
                else {
                  if ((bVar3 & 1) == 0) {
                    uVar13 = *puVar16;
                  }
                  else {
                    uVar13 = *puVar16;
                    if ((uVar13 & 1) != 0) {
                      uVar13 = (longlong)puVar16 + ((longlong)uVar13 >> 0x18);
                    }
                  }
                  lVar9 = local_98 * uVar8 + uVar13;
                }
                *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar11 + 0x70);
                *(longlong *)(param_1 + 0x68) = lVar9;
                iVar7 = (int)local_a0;
                uVar15 = *(undefined8 *)(lVar11 + 0x70);
LAB_149352f22:
                uVar8 = FUN_14935237e(param_1,uVar15,lVar9,iVar7 + 2);
                uVar13 = (ulonglong)uVar8;
                goto LAB_149352a27;
              }
LAB_149352b78:
              plVar22 = *(longlong **)(lVar9 + 0x78);
              bVar23 = true;
              uVar13 = uVar18;
              if (plVar22 != (longlong *)0x0) {
                uVar13 = plVar22[1];
                local_90 = plVar22;
                uVar18 = FUN_144a810c6();
                local_a1 = bVar3;
                if (*(ulonglong *)(uVar18 + 8) == 0) {
                  bVar24 = uVar13 != 0;
                  if (uVar13 != uVar18 && bVar24) {
                    do {
                      uVar13 = *(ulonglong *)(uVar13 + 0x30);
                      bVar24 = uVar13 != 0;
                      if (uVar13 == uVar18) break;
                    } while (uVar13 != 0);
                  }
                  if (bVar24) goto LAB_149352bb2;
                }
                else if ((*(ulonglong *)(uVar13 + 0x18) & *(ulonglong *)(uVar18 + 8)) != 0) {
LAB_149352bb2:
                  iVar7 = (int)puVar16[1];
                  if (iStack_68 < 2) {
                    if ((int)uVar8 < iVar7) {
                      if ((bVar3 & 1) == 0) {
                        uVar18 = *puVar16;
                      }
                      else {
                        uVar18 = *puVar16;
                        if ((uVar18 & 1) != 0) {
                          uVar18 = ((longlong)uVar18 >> 0x18) + (longlong)puVar16;
                        }
                      }
                      lVar9 = (**(code **)(*local_90 + 0x210))(local_90,uVar8 * local_98 + uVar18);
                      if (lVar9 != 0) {
                        lVar10 = FUN_144a78d6a();
                        lVar11 = *(longlong *)(lVar9 + 0x10);
                        if (((*(int *)(lVar10 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
                            (*(longlong *)
                              (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                             == lVar10 + 0x30)) &&
                           (cVar6 = FUN_14935237e(param_1,lVar11,lVar9,(int)local_a0 + 2),
                           uVar18 = uVar13, cVar6 != '\0')) {
LAB_149352f67:
                          *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar9 + 0x10);
                          *(longlong *)(param_1 + 0x68) = lVar9;
                          *(longlong *)(param_1 + 0x70) = lVar9;
                          local_50 = *(undefined8 *)(lVar9 + 0x18);
                          FUN_1400021e4(&local_50,&local_60);
                          if (local_70 != (void *)0x0) {
                            FUN_1400020a8();
                          }
                          iStack_68 = iStack_58;
                          uStack_64 = uStack_54;
                          local_70 = (void *)CONCAT44(uStack_5c,local_60);
                          goto LAB_149352a24;
                        }
                      }
                      iVar7 = (int)puVar16[1];
                    }
                    uVar18 = local_98;
                    if (0 < iVar7) {
                      lVar11 = 0;
                      local_a0 = (ulonglong)((int)local_a0 + 2);
                      uVar17 = 0;
                      do {
                        if (uVar8 != uVar17) {
                          if ((local_a1 & 1) == 0) {
                            uVar13 = *puVar16;
                          }
                          else {
                            uVar13 = *puVar16;
                            if ((uVar13 & 1) != 0) {
                              uVar13 = ((longlong)uVar13 >> 0x18) + (longlong)puVar16;
                            }
                          }
                          lVar9 = (**(code **)(*local_90 + 0x210))(local_90,uVar13 + lVar11);
                          if (lVar9 != 0) {
                            lVar12 = FUN_144a78d6a();
                            lVar10 = *(longlong *)(lVar9 + 0x10);
                            if (((*(int *)(lVar12 + 0x38) <= *(int *)(lVar10 + 0x38)) &&
                                (*(longlong *)
                                  (*(longlong *)(lVar10 + 0x30) +
                                  (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) &&
                               (cVar6 = FUN_14935237e(param_1,lVar10,lVar9,local_a0), cVar6 != '\0')
                               ) goto LAB_149352f67;
                          }
                        }
                        uVar17 = uVar17 + 1;
                        lVar11 = lVar11 + uVar18;
                        uVar13 = uVar18;
                      } while ((longlong)uVar17 < (longlong)(int)puVar16[1]);
                    }
                  }
                  else if (0 < iVar7) {
                    lVar11 = 0;
                    uVar13 = local_98;
                    plVar22 = local_90;
                    do {
                      if ((bVar3 & 1) == 0) {
                        uVar18 = *puVar16;
                      }
                      else {
                        uVar18 = *puVar16;
                        if ((uVar18 & 1) != 0) {
                          uVar18 = ((longlong)uVar18 >> 0x18) + (longlong)puVar16;
                        }
                      }
                      lVar9 = (**(code **)(*plVar22 + 0x210))(plVar22,lVar11 * uVar13 + uVar18);
                      if (lVar9 != 0) {
                        lVar10 = FUN_144a78d6a();
                        if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)
                            ) && (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                                   (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
                          local_50 = *(undefined8 *)(lVar9 + 0x18);
                          FUN_1400021e4(&local_50,&local_60);
                          if (iStack_58 == iStack_68) {
                            bVar24 = true;
                            if (1 < iStack_58) {
                              lVar10 = 0;
                              while( true ) {
                                uVar4 = *(ushort *)(CONCAT44(uStack_5c,local_60) + lVar10);
                                uVar8 = (uint)uVar4;
                                uVar5 = *(ushort *)((longlong)local_70 + lVar10);
                                uVar20 = (uint)uVar5;
                                if (uVar4 != uVar5) {
                                  if ((uVar5 | uVar4) < 0x80) {
                                    uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                                    uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar5];
                                    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5])
                                    goto LAB_149352e27;
                                  }
                                  iVar7 = uVar8 - uVar20;
                                  goto LAB_149352e8d;
                                }
                                if (uVar4 == 0) break;
LAB_149352e27:
                                lVar10 = lVar10 + 2;
                              }
                              iVar7 = 0;
LAB_149352e8d:
                              bVar24 = iVar7 == 0;
                            }
                          }
                          else {
                            bVar24 = iStack_68 + iStack_58 == 1;
                          }
                          if (CONCAT44(uStack_5c,local_60) != 0) {
                            FUN_1400020a8();
                          }
                          uVar13 = local_98;
                          plVar22 = local_90;
                          if (bVar24) {
                            *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar9 + 0x10);
                            *(longlong *)(param_1 + 0x68) = lVar9;
                            *(longlong *)(param_1 + 0x70) = lVar9;
                            iVar7 = (int)local_a0;
                            uVar15 = *(undefined8 *)(lVar9 + 0x10);
                            goto LAB_149352f22;
                          }
                        }
                      }
                      lVar11 = lVar11 + 1;
                    } while (lVar11 < (int)puVar16[1]);
                  }
                }
              }
            }
LAB_149352b21:
            if (local_70 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_88 != 0) {
              FUN_1400020a8();
            }
            goto joined_r0x000149352b42;
          }
        }
        else if ((*(ulonglong *)(lVar11 + 0x18) & *(ulonglong *)(lVar10 + 8)) != 0)
        goto LAB_14935298d;
        lVar9 = *(longlong *)(lVar9 + 8);
        lVar11 = FUN_144a7e162();
        if (*(ulonglong *)(lVar11 + 8) == 0) {
          bVar23 = lVar9 != 0;
          if (lVar9 != lVar11 && bVar23) {
            do {
              lVar9 = *(longlong *)(lVar9 + 0x30);
              bVar23 = lVar9 != 0;
              if (lVar9 == lVar11) break;
            } while (lVar9 != 0);
          }
          if (!bVar23) goto LAB_149352a7b;
        }
        else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar11 + 8)) == 0) {
LAB_149352a7b:
          FUN_1446ebfd4();
        }
      }
      else {
        if ((*(ulonglong *)(lVar11 + 0x18) & *(ulonglong *)(lVar10 + 8)) == 0) goto LAB_149352838;
LAB_149352726:
        param_3 = param_3 + *(int *)(lVar9 + 0x44);
        lVar9 = (longlong)iVar7 * (longlong)*(int *)(lVar9 + 0x34);
        local_88 = *(longlong *)(lVar9 + param_3);
        piVar2 = (int *)(lVar9 + 8 + param_3);
        local_80 = *piVar2;
        iStack_7c = piVar2[1];
        uStack_78 = piVar2[2];
        iStack_74 = piVar2[3];
        local_70 = (void *)0x0;
        iStack_68 = *(int *)(lVar9 + 0x20 + param_3);
        lVar11 = (longlong)iStack_68;
        _Src = *(void **)(lVar9 + 0x18 + param_3);
        if (lVar11 == 0) {
          uStack_64 = 0;
        }
        else {
          FUN_1446dd670(&local_70,iStack_68,0);
          memcpy(local_70,_Src,lVar11 * 2);
        }
        uVar13 = local_a0;
        lVar9 = FUN_14479d2ce(&local_88);
        if ((lVar9 == 0) && (CONCAT44(iStack_7c,local_80) != 0)) {
          lVar9 = FUN_140007850();
          cVar6 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar9 == 0) || (cVar6 == '\0')) {
            FUN_14485c47a(&local_88,lVar9);
            if (lVar9 == 0) goto LAB_1493528a6;
          }
          else {
            uVar8 = *(uint *)(lVar9 + 0xc);
            if ((int)uVar8 < DAT_14c9647dc) {
              lVar11 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
            }
            else {
              lVar11 = 0;
            }
            if ((*(uint *)(lVar11 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(&local_88,lVar9);
            }
          }
          if ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0) goto LAB_149352aef;
LAB_1493528a6:
          bVar23 = true;
        }
        else {
          if (lVar9 == 0) goto LAB_1493528a6;
LAB_149352aef:
          *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar9 + 0x10);
          *(longlong *)(param_1 + 0x68) = lVar9;
          *(longlong *)(param_1 + 0x70) = lVar9;
          uVar8 = FUN_14935237e(param_1,*(undefined8 *)(lVar9 + 0x10),lVar9,(int)uVar13 + 1);
          uVar13 = (ulonglong)uVar8;
          bVar23 = false;
        }
        if (local_70 != (void *)0x0) {
          FUN_1400020a8();
        }
joined_r0x000149352b42:
        if (!bVar23) goto LAB_1493526a1;
      }
      goto LAB_149352690;
    }
    bVar23 = lVar11 != 0;
    if (lVar11 != lVar10 && bVar23) {
      do {
        lVar11 = *(longlong *)(lVar11 + 0x30);
        bVar23 = lVar11 != 0;
        if (lVar11 == lVar10) break;
      } while (lVar11 != 0);
    }
    if (!bVar23) goto LAB_149352706;
LAB_149352664:
    local_88 = *(longlong *)
                ((longlong)iVar7 * (longlong)*(int *)(lVar9 + 0x34) +
                param_3 + *(int *)(lVar9 + 0x44));
    lVar11 = FUN_14479d2ce();
    if (lVar11 == 0) goto LAB_149352690;
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar11 + 0x10);
    *(longlong *)(param_1 + 0x68) = lVar11;
    *(longlong *)(param_1 + 0x70) = lVar11;
    iVar7 = (int)local_a0;
    uVar15 = *(undefined8 *)(lVar11 + 0x10);
  }
LAB_1493528f0:
  uVar8 = FUN_14935237e(param_1,uVar15,lVar11,iVar7 + 1);
  uVar13 = (ulonglong)uVar8;
LAB_1493526a1:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar13 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149352fdc FUN_149352fdc body=191 status=ok
// SIG undefined FUN_149352fdc(void)

undefined8 * FUN_149352fdc(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  iVar3 = (**(code **)(*param_1 + 0x2e8))();
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1401211f6(param_2,iVar3,1);
  cVar2 = FUN_1493522bc(param_1);
  if (cVar2 == '\0') {
    return param_2;
  }
  lVar1 = param_1[0xb];
  if (lVar1 == 0) {
LAB_14935307d:
    memcpy((void *)*param_2,(void *)param_1[0xf],(longlong)iVar3);
  }
  else {
    lVar5 = *(longlong *)(lVar1 + 8);
    lVar4 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar4 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar4) break;
        } while (lVar5 != 0);
      }
      if (!bVar6) goto LAB_14935307d;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_14935307d;
    *(bool *)*param_2 =
         (*(byte *)(param_1[0xf] + (ulonglong)*(byte *)(lVar1 + 0x71)) & *(byte *)(lVar1 + 0x73)) !=
         0;
  }
  return param_2;
}



// FUNCTION 14935309c FUN_14935309c body=135 status=ok
// SIG undefined FUN_14935309c(void)

void FUN_14935309c(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (**(code **)(*param_1 + 0x2a0))(param_1,0);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x2b0))(param_1,&local_28);
    (**(code **)(*param_1 + 0x2f0))(param_1,local_28,local_20,0);
    FUN_1447f69b6(param_1 + 8);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149353124 FUN_149353124 body=1497 status=ok
// SIG undefined FUN_149353124(void)

void FUN_149353124(longlong *param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined2 **ppuVar4;
  char cVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  void *pvVar11;
  void *_Src;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  undefined4 uVar15;
  longlong lVar16;
  byte bVar17;
  uint uVar18;
  longlong *plVar19;
  bool bVar20;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((char)param_1[0x24] != '\x01') ||
     (cVar5 = (**(code **)(*param_1 + 0x2a0))(param_1,0), cVar5 == '\0')) goto LAB_14935325e;
  lVar16 = param_1[4];
  if (lVar16 != 0) {
    lVar6 = FUN_1459d8fe2();
    if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
          ) == lVar6 + 0x30)) && (lVar16 = FUN_14935201e(lVar16), lVar16 != 0)) {
      FUN_144757f48(lVar16,8);
    }
  }
  lVar16 = param_1[0xe];
  if (lVar16 != 0) {
    lVar6 = FUN_144a78d6a();
    lVar16 = *(longlong *)(lVar16 + 0x10);
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar16 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      FUN_144757f48(param_1[0xe],8);
    }
  }
  if (param_1[0x10] == 0) {
    lVar16 = param_1[0xb];
    if (lVar16 == 0) goto LAB_14935369a;
    lVar6 = *(longlong *)(lVar16 + 8);
    lVar8 = FUN_144a5ab96();
    if (*(ulonglong *)(lVar8 + 8) == 0) {
      bVar20 = lVar6 != 0;
      if (lVar6 != lVar8 && bVar20) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar20 = lVar6 != 0;
          if (lVar6 == lVar8) break;
        } while (lVar6 != 0);
      }
      if (!bVar20) goto LAB_149353379;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar8 + 8)) == 0) {
LAB_149353379:
      lVar16 = param_1[0xb];
      if (lVar16 == 0) goto LAB_14935369a;
      lVar6 = *(longlong *)(lVar16 + 8);
      lVar8 = FUN_144a7add4();
      if (*(ulonglong *)(lVar8 + 8) == 0) {
        bVar20 = lVar6 != 0;
        if (lVar6 != lVar8 && bVar20) {
          do {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            bVar20 = lVar6 != 0;
            if (lVar6 == lVar8) break;
          } while (lVar6 != 0);
        }
        if (bVar20) goto LAB_1493533a6;
LAB_149353461:
        if (param_1[0xb] == 0) goto LAB_14935369a;
        lVar16 = *(longlong *)(param_1[0xb] + 8);
        lVar6 = FUN_144a63fc8();
        if (*(ulonglong *)(lVar6 + 8) == 0) {
          bVar20 = lVar16 != 0;
          if (lVar16 != lVar6 && bVar20) {
            do {
              lVar16 = *(longlong *)(lVar16 + 0x30);
              bVar20 = lVar16 != 0;
              if (lVar16 == lVar6) break;
            } while (lVar16 != 0);
          }
          if (bVar20) goto LAB_149353486;
        }
        else if ((*(ulonglong *)(lVar16 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0) {
LAB_149353486:
          *(longlong *)param_1[0xf] = param_1[0x31];
          goto LAB_149353252;
        }
        if (param_1[0xb] == 0) goto LAB_14935369a;
        lVar16 = *(longlong *)(param_1[0xb] + 8);
        lVar6 = FUN_144a49f24();
        if (*(ulonglong *)(lVar6 + 8) == 0) {
          bVar20 = lVar16 != 0;
          if (lVar16 != lVar6 && bVar20) {
            do {
              lVar16 = *(longlong *)(lVar16 + 0x30);
              bVar20 = lVar16 != 0;
              if (lVar16 == lVar6) break;
            } while (lVar16 != 0);
          }
          if (bVar20) goto LAB_1493534f3;
        }
        else if ((*(ulonglong *)(lVar16 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0) {
LAB_1493534f3:
          local_48 = (undefined2 *)0x0;
          local_40 = (int)param_1[0x33];
          lVar16 = (longlong)local_40;
          pvVar11 = (void *)param_1[0x32];
          if (lVar16 == 0) {
            local_3c = 0;
          }
          else {
            FUN_1446dd670(&local_48,local_40,0);
            memcpy(local_48,pvVar11,lVar16 * 2);
          }
          iVar13 = local_40;
          puVar7 = local_48;
          ppuVar4 = (undefined2 **)param_1[0xf];
          if (ppuVar4 != &local_48) {
            lVar16 = (longlong)local_40;
            *(int *)(ppuVar4 + 1) = local_40;
            if (local_40 == 0 && *(int *)((longlong)ppuVar4 + 0xc) == 0) {
              *(undefined4 *)((longlong)ppuVar4 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(ppuVar4,local_40);
              if (iVar13 != 0) {
                memcpy(*ppuVar4,puVar7,lVar16 * 2);
              }
            }
          }
          if (local_48 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_149353252;
        }
        if (param_1[0xb] != 0) {
          lVar16 = *(longlong *)(param_1[0xb] + 8);
          lVar6 = FUN_144a4a07e();
          if (*(ulonglong *)(lVar6 + 8) == 0) {
            bVar20 = lVar16 != 0;
            if (lVar16 != lVar6 && bVar20) {
              do {
                lVar16 = *(longlong *)(lVar16 + 0x30);
                bVar20 = lVar16 != 0;
                if (lVar16 == lVar6) break;
              } while (lVar16 != 0);
            }
            if (bVar20) goto LAB_1493535f5;
          }
          else if ((*(ulonglong *)(lVar16 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0) {
LAB_1493535f5:
            plVar9 = (longlong *)param_1[0x34];
            if (plVar9 == (longlong *)0x0) {
              uVar15 = (undefined4)param_1[0x35];
              plVar19 = (longlong *)param_1[0xf];
              plVar14 = (longlong *)*plVar19;
              if (plVar14 == (longlong *)0x0) {
                *(undefined4 *)(plVar19 + 1) = uVar15;
                goto LAB_149353252;
              }
              *plVar19 = 0;
LAB_149353639:
              (**(code **)(*plVar14 + 0x10))(plVar14);
              *(undefined4 *)(plVar19 + 1) = uVar15;
              if (plVar9 == (longlong *)0x0) goto LAB_149353252;
            }
            else {
              (**(code **)(*plVar9 + 8))(plVar9);
              uVar15 = (undefined4)param_1[0x35];
              plVar19 = (longlong *)param_1[0xf];
              plVar14 = (longlong *)*plVar19;
              if (plVar14 != plVar9) {
                *plVar19 = (longlong)plVar9;
                (**(code **)(*plVar9 + 8))(plVar9);
                if (plVar14 != (longlong *)0x0) goto LAB_149353639;
              }
              *(undefined4 *)(plVar19 + 1) = uVar15;
            }
            (**(code **)(*plVar9 + 0x10))(plVar9);
            goto LAB_149353252;
          }
        }
LAB_14935369a:
        puVar10 = (undefined8 *)FUN_1444c7512(param_1);
        iVar13 = (**(code **)(*param_1 + 0x2e8))(param_1);
        _Src = (void *)*puVar10;
        pvVar11 = (void *)param_1[0xf];
      }
      else {
        if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar8 + 8)) == 0) goto LAB_149353461;
LAB_1493533a6:
        iVar13 = *(int *)(*(longlong *)(lVar16 + 0x70) + 0x34);
        FUN_144a5eaa2(param_1 + 0x27,iVar13,1);
        pvVar11 = (void *)param_1[0xf];
        _Src = (void *)param_1[0x27];
      }
      memcpy(pvVar11,_Src,(longlong)iVar13);
      goto LAB_149353252;
    }
    if (*(char *)param_1[0x27] == '\x01') {
      bVar17 = *(byte *)(lVar16 + 0x72);
    }
    else {
      bVar17 = 0;
    }
    *(byte *)(param_1[0xf] + (ulonglong)*(byte *)(lVar16 + 0x71)) =
         *(byte *)(param_1[0xf] + (ulonglong)*(byte *)(lVar16 + 0x71)) & ~*(byte *)(lVar16 + 0x73) |
         bVar17;
  }
  else {
    lVar16 = param_1[0xd];
    local_38 = *(undefined8 *)(param_1[0x10] + 0x18);
    FUN_1400021e4();
    puVar7 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar7 = local_48;
    }
    lVar6 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar7 + lVar6);
      uVar12 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)L"K2_SetRelativeRotation" + lVar6);
      uVar18 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_149353206;
        }
        iVar13 = uVar12 - uVar18;
        goto LAB_149353231;
      }
      if (uVar1 == 0) break;
LAB_149353206:
      lVar6 = lVar6 + 2;
    }
    iVar13 = 0;
LAB_149353231:
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (iVar13 == 0) {
      plVar9 = (longlong *)FUN_1444c7512(param_1);
      puVar3 = (undefined4 *)*plVar9;
      if (lVar16 != 0 && puVar3 != (undefined4 *)0x0) {
        lVar6 = FUN_144a799b0();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
          local_58 = *(undefined8 *)(puVar3 + 4);
          local_68 = *puVar3;
          uStack_64 = puVar3[1];
          uStack_60 = puVar3[2];
          uStack_5c = puVar3[3];
          local_78 = 0;
          FUN_147a0318e(lVar16,&local_68,0,0);
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x308))(param_1,lVar16);
    }
  }
LAB_149353252:
  FUN_1447f69b6(param_1 + 5);
LAB_14935325e:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149353706 FUN_149353706 body=99 status=ok
// SIG undefined FUN_149353706(void)

undefined8 FUN_149353706(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 == 0) {
LAB_149353760:
    uVar3 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_149353760;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_149353760;
    uVar3 = *(undefined8 *)(lVar1 + 0x70);
  }
  return uVar3;
}



// FUNCTION 14935376a FUN_14935376a body=99 status=ok
// SIG undefined FUN_14935376a(void)

undefined8 FUN_14935376a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 == 0) {
LAB_1493537c4:
    uVar3 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_1446f4b16();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_1493537c4;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1493537c4;
    uVar3 = *(undefined8 *)(lVar1 + 0x70);
  }
  return uVar3;
}



// FUNCTION 1493537e2 FUN_1493537e2 body=221 status=ok
// SIG undefined FUN_1493537e2(void)

ulonglong FUN_1493537e2(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  undefined7 uVar7;
  longlong lVar6;
  bool bVar8;
  
  plVar4 = *(longlong **)(param_1 + 0x58);
  if (plVar4 == (longlong *)0x0) goto LAB_1493538b1;
  lVar6 = plVar4[1];
  lVar3 = FUN_14475b26a();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar6 != 0;
    if (lVar6 != lVar3 && bVar8) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        bVar8 = lVar6 != 0;
        if (lVar6 == lVar3) break;
      } while (lVar6 != 0);
    }
    if (!bVar8) goto LAB_149353866;
  }
  else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
LAB_149353866:
    lVar6 = plVar4[1];
    in_RAX = FUN_144a7add4();
    if (*(ulonglong *)(in_RAX + 8) == 0) {
      bVar8 = lVar6 != 0;
      if (lVar6 != in_RAX && bVar8) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar8 = lVar6 != 0;
          if (lVar6 == in_RAX) break;
        } while (lVar6 != 0);
      }
      if (!bVar8) goto LAB_1493538b1;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(in_RAX + 8)) == 0) {
LAB_1493538b1:
      bVar2 = (byte)in_RAX;
      bVar5 = 0;
      uVar7 = 0;
      goto LAB_1493538b3;
    }
    plVar4 = (longlong *)plVar4[0xe];
  }
  cVar1 = (**(code **)(*plVar4 + 0x1e8))(plVar4);
  uVar7 = (undefined7)((ulonglong)lVar6 >> 8);
  bVar5 = 1;
  if (cVar1 == '\0') {
    bVar2 = 0;
  }
  else {
    bVar2 = (**(code **)(*plVar4 + 0x260))(plVar4,0xffffffffffffffff);
  }
LAB_1493538b3:
  return CONCAT71(uVar7,bVar5 & bVar2) & 0xffffffff;
}



// FUNCTION 1493538c0 FUN_1493538c0 body=223 status=ok
// SIG undefined FUN_1493538c0(void)

ulonglong FUN_1493538c0(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  undefined7 uVar7;
  longlong lVar6;
  bool bVar8;
  
  plVar4 = *(longlong **)(param_1 + 0x58);
  if (plVar4 == (longlong *)0x0) goto LAB_149353991;
  lVar6 = plVar4[1];
  lVar3 = FUN_14475b26a();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar6 != 0;
    if (lVar6 != lVar3 && bVar8) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x30);
        bVar8 = lVar6 != 0;
        if (lVar6 == lVar3) break;
      } while (lVar6 != 0);
    }
    if (!bVar8) goto LAB_149353946;
  }
  else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
LAB_149353946:
    lVar6 = plVar4[1];
    in_RAX = FUN_144a7add4();
    if (*(ulonglong *)(in_RAX + 8) == 0) {
      bVar8 = lVar6 != 0;
      if (lVar6 != in_RAX && bVar8) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar8 = lVar6 != 0;
          if (lVar6 == in_RAX) break;
        } while (lVar6 != 0);
      }
      if (!bVar8) goto LAB_149353991;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(in_RAX + 8)) == 0) {
LAB_149353991:
      bVar2 = (byte)in_RAX;
      bVar5 = 0;
      uVar7 = 0;
      goto LAB_149353993;
    }
    plVar4 = (longlong *)plVar4[0xe];
  }
  cVar1 = (**(code **)(*plVar4 + 0x1e8))(plVar4);
  uVar7 = (undefined7)((ulonglong)lVar6 >> 8);
  bVar5 = 1;
  if (cVar1 == '\0') {
    bVar2 = 0;
  }
  else {
    bVar2 = (**(code **)(*plVar4 + 0x260))(plVar4,0xffffffffffffffff);
    bVar2 = bVar2 ^ 1;
  }
LAB_149353993:
  return CONCAT71(uVar7,bVar5 & bVar2) & 0xffffffff;
}



// FUNCTION 1493539a0 FUN_1493539a0 body=1082 status=ok
// SIG undefined FUN_1493539a0(void)

void FUN_1493539a0(longlong *param_1,longlong *param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  int iVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_3 < 1) goto LAB_149353ac3;
  if (param_3 == 0x10) {
    lVar8 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar9 = FUN_144a49f24();
    if (*(ulonglong *)(lVar9 + 8) == 0) {
      bVar12 = lVar8 != 0;
      if (lVar8 != lVar9 && bVar12) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar12 = lVar8 != 0;
          if (lVar8 == lVar9) break;
        } while (lVar8 != 0);
      }
      if (bVar12) goto LAB_149353a70;
LAB_149353bb2:
      lVar8 = (**(code **)(*param_1 + 0x2c8))(param_1);
      lVar9 = FUN_144a4a07e();
      if (*(ulonglong *)(lVar9 + 8) == 0) {
        bVar12 = lVar8 != 0;
        if (lVar8 != lVar9 && bVar12) {
          do {
            lVar8 = *(longlong *)(lVar8 + 0x30);
            bVar12 = lVar8 != 0;
            if (lVar8 == lVar9) break;
          } while (lVar8 != 0);
        }
        if (bVar12) goto LAB_149353bd9;
      }
      else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar9 + 8)) != 0) {
LAB_149353bd9:
        plVar3 = (longlong *)*param_2;
        plVar4 = (longlong *)param_1[0x34];
        if (plVar4 != plVar3) {
          param_1[0x34] = (longlong)plVar3;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        *(int *)(param_1 + 0x35) = (int)param_2[1];
        if ((int)param_1[0x28] < param_4 + 0x10) {
          FUN_140393c76(param_1 + 0x27,param_4 + 0x10,1);
        }
        lVar8 = param_1[0x27];
        uVar13 = (undefined4)param_1[0x34];
        uVar14 = *(undefined4 *)((longlong)param_1 + 0x1a4);
        uVar15 = (undefined4)param_1[0x35];
        uVar16 = *(undefined4 *)((longlong)param_1 + 0x1ac);
        goto LAB_149353ab8;
      }
LAB_149353b17:
      if ((int)param_1[0x28] < (int)(param_4 + param_3)) {
        FUN_140393c76(param_1 + 0x27,param_4 + param_3,1);
      }
      memcpy((void *)((longlong)param_4 + param_1[0x27]),param_2,(ulonglong)param_3);
      *(undefined1 *)(param_1 + 0x24) = 1;
      uVar10 = (**(code **)(*param_1 + 0x2c8))(param_1);
      if (uVar10 != 0) {
        uVar11 = FUN_1446f4b16();
        if (*(ulonglong *)(uVar11 + 8) == 0) {
          if (uVar10 != uVar11) {
            do {
              uVar10 = *(ulonglong *)(uVar10 + 0x30);
              if (uVar10 == uVar11) break;
            } while (uVar10 != 0);
            goto joined_r0x000149353caa;
          }
        }
        else {
          uVar10 = *(ulonglong *)(uVar10 + 0x18) & *(ulonglong *)(uVar11 + 8);
joined_r0x000149353caa:
          if (uVar10 == 0) goto LAB_149353b63;
        }
        lVar8 = *(longlong *)param_1[0x27];
        if (lVar8 == 0) {
          param_1[0x2c] = 0;
          param_1[0x2d] = 0;
          param_1[0x2e] = 0;
          *(undefined4 *)(param_1 + 0x30) = 0;
          if (*(int *)((longlong)param_1 + 0x184) < 0) {
            FUN_1446f8c06(param_1 + 0x2f,0);
          }
          puVar5 = (undefined2 *)param_1[0x2f];
          if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
          }
        }
        else {
          FUN_1400bbfae(&local_50,lVar8);
          *(undefined4 *)(param_1 + 0x2d) = local_50;
          *(undefined4 *)((longlong)param_1 + 0x16c) = uStack_4c;
          *(undefined4 *)(param_1 + 0x2e) = uStack_48;
          *(undefined4 *)((longlong)param_1 + 0x174) = uStack_44;
          if (param_1 + 0x2d == (longlong *)&local_50) {
            if (local_40 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (param_1[0x2f] != 0) {
              FUN_1400020a8();
            }
            param_1[0x2f] = local_40;
            local_40 = 0;
            *(undefined4 *)(param_1 + 0x30) = local_38;
            *(undefined4 *)((longlong)param_1 + 0x184) = local_34;
          }
          cVar7 = (*(code *)PTR_FUN_14c758760)();
          if (cVar7 != '\0') {
            uVar2 = *(uint *)(lVar8 + 0xc);
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar9 = 0;
            }
            if ((*(uint *)(lVar9 + 8) & 0x8400000) != 0) {
              param_1[0x2c] = 0;
              goto LAB_149353b63;
            }
          }
          FUN_14485c47a(param_1 + 0x2c,lVar8);
        }
      }
LAB_149353b63:
      lVar8 = FUN_149351f5c(param_1);
      if (lVar8 != 0) {
        FUN_1444c6f9e(param_1);
      }
      goto LAB_149353ac3;
    }
    if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar9 + 8)) == 0) goto LAB_149353bb2;
LAB_149353a70:
    iVar6 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar6 = 0;
    }
    FUN_1402980a2(param_1 + 0x32,*param_2,iVar6);
    if ((int)param_1[0x28] < param_4 + 0x10) {
      FUN_140393c76(param_1 + 0x27,param_4 + 0x10,1);
    }
    lVar8 = param_1[0x27];
    uVar13 = (undefined4)param_1[0x32];
    uVar14 = *(undefined4 *)((longlong)param_1 + 0x194);
    uVar15 = (undefined4)param_1[0x33];
    uVar16 = *(undefined4 *)((longlong)param_1 + 0x19c);
LAB_149353ab8:
    puVar1 = (undefined4 *)(lVar8 + param_4);
    *puVar1 = uVar13;
    puVar1[1] = uVar14;
    puVar1[2] = uVar15;
    puVar1[3] = uVar16;
  }
  else {
    if (param_3 != 8) goto LAB_149353b17;
    lVar8 = (**(code **)(*param_1 + 0x2c8))(param_1);
    lVar9 = FUN_144a63fc8();
    if (*(ulonglong *)(lVar9 + 8) == 0) {
      bVar12 = lVar8 != 0;
      if (lVar8 != lVar9 && bVar12) {
        do {
          lVar8 = *(longlong *)(lVar8 + 0x30);
          bVar12 = lVar8 != 0;
          if (lVar8 == lVar9) break;
        } while (lVar8 != 0);
      }
      if (!bVar12) goto LAB_149353b17;
    }
    else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar9 + 8)) == 0) goto LAB_149353b17;
    lVar8 = *param_2;
    param_1[0x31] = lVar8;
    if ((int)param_1[0x28] < param_4 + 8) {
      FUN_140393c76(param_1 + 0x27,param_4 + 8,1);
      lVar8 = param_1[0x31];
    }
    *(longlong *)(param_1[0x27] + (longlong)param_4) = lVar8;
  }
  *(undefined1 *)(param_1 + 0x24) = 1;
LAB_149353ac3:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149353ddc FUN_149353ddc body=1072 status=ok
// SIG undefined FUN_149353ddc(void)

ulonglong FUN_149353ddc(longlong *param_1)

{
  void *_Src;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  wchar_t **ppwVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  double *pdVar15;
  wchar_t *pwVar16;
  size_t _Size;
  undefined7 uVar17;
  bool bVar18;
  undefined1 auStack_d8 [32];
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  wchar_t *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  double local_88;
  double dStack_80;
  double *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  _Size = 0;
  cVar5 = (**(code **)(*param_1 + 0x2a0))(param_1,0);
  if (cVar5 == '\0') goto LAB_149353ea5;
  if ((char)param_1[0x24] != '\x01') {
    _Size = 0;
    goto LAB_149353ea5;
  }
  ppwVar9 = (wchar_t **)FUN_1444c7512(param_1);
  (**(code **)(*param_1 + 0x2b0))(param_1,&local_70);
  lVar10 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if (lVar10 == 0) goto LAB_149354085;
  lVar11 = FUN_144a63fc8();
  if (*(ulonglong *)(lVar11 + 8) == 0) {
    lVar14 = lVar10;
    if (lVar10 != lVar11) {
      do {
        lVar14 = *(longlong *)(lVar14 + 0x30);
        if (lVar14 == lVar11) break;
      } while (lVar14 != 0);
      if (lVar14 == 0) goto LAB_149353f03;
    }
LAB_149353e7c:
    if ((int)param_1[0x31] == SUB84(*local_70,0)) {
      bVar18 = *(int *)((longlong)param_1 + 0x18c) == (int)((ulonglong)*local_70 >> 0x20);
LAB_149353e9a:
      _Size = CONCAT71((int7)((ulonglong)ppwVar9 >> 8),bVar18);
    }
    else {
LAB_149354121:
      _Size = 0;
    }
  }
  else {
    if ((*(ulonglong *)(lVar10 + 0x18) & *(ulonglong *)(lVar11 + 8)) != 0) goto LAB_149353e7c;
LAB_149353f03:
    lVar11 = FUN_144a49f24();
    if (*(ulonglong *)(lVar11 + 8) != 0) {
      if ((*(ulonglong *)(lVar10 + 0x18) & *(ulonglong *)(lVar11 + 8)) != 0) goto LAB_149353f1f;
LAB_149353fbf:
      lVar11 = FUN_144a4a07e();
      pdVar15 = local_70;
      if (*(ulonglong *)(lVar11 + 8) == 0) {
        if (lVar10 != lVar11) {
          do {
            lVar10 = *(longlong *)(lVar10 + 0x30);
            if (lVar10 == lVar11) break;
          } while (lVar10 != 0);
          if (lVar10 == 0) goto LAB_149354085;
        }
LAB_149353fdb:
        local_98 = (wchar_t *)*local_70;
        if (local_98 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_98 + 8))();
        }
        iStack_90 = *(int *)(pdVar15 + 1);
        uVar7 = FUN_144722c14(param_1 + 0x34,&local_98,0);
        _Size = (size_t)uVar7;
        if (local_98 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_98 + 0x10))();
        }
        goto LAB_149354128;
      }
      if ((*(ulonglong *)(lVar10 + 0x18) & *(ulonglong *)(lVar11 + 8)) != 0) goto LAB_149353fdb;
LAB_149354085:
      pdVar15 = local_70;
      cVar5 = (char)param_1[0x29];
      uVar17 = (undefined7)((ulonglong)ppwVar9 >> 8);
      if ((cVar5 != '\x02') && (cVar5 != '\b')) {
        if ((cVar5 != '\x04') ||
           (pwVar16 = *ppwVar9, local_70 == (double *)0x0 || pwVar16 == (wchar_t *)0x0)) {
          iVar6 = *(int *)(ppwVar9 + 1);
          if (iVar6 != local_68) goto LAB_149354121;
          if (iVar6 != 0) {
            iVar6 = memcmp(*ppwVar9,local_70,(longlong)iVar6);
            _Size = CONCAT71(uVar17,iVar6 == 0);
            goto LAB_149354128;
          }
          goto LAB_149354205;
        }
        ppwVar9 = &local_98;
        FUN_144a7484c(pwVar16,ppwVar9);
        uVar8 = FUN_144a7484c(pdVar15,&local_b8);
        lVar10 = -(ulonglong)
                  (9.999999747378752e-05 < ABS((double)CONCAT44(uStack_8c,iStack_90) - dStack_b0));
        auVar4._8_4_ = (int)lVar10;
        auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS((double)local_98 - local_b8));
        auVar4._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
        uVar7 = movmskpd(uVar8,auVar4);
        lVar10 = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_80 - dStack_a0));
        auVar3._8_4_ = (int)lVar10;
        auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_88 - local_a8));
        auVar3._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
        iVar6 = movmskpd((int)pdVar15,auVar3);
        uVar13 = iVar6 << 2 | uVar7;
        if (uVar13 == 0) goto LAB_149354205;
        auVar1._8_8_ = -(ulonglong)
                        (9.999999747378752e-05 <
                        ABS((double)CONCAT44(uStack_8c,iStack_90) + dStack_b0));
        auVar1._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS((double)local_98 + local_b8));
        iVar6 = movmskpd(uVar7,auVar1);
        auVar2._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dStack_80 + dStack_a0));
        auVar2._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_88 + local_a8));
        uVar7 = movmskpd(uVar13,auVar2);
        bVar18 = (uVar7 & 0x3fffffff) == 0 && iVar6 == 0;
        goto LAB_149353e9a;
      }
      pdVar15 = (double *)*ppwVar9;
      if ((ABS(*pdVar15 - *local_70) <= 9.999999747378752e-05) &&
         (ABS(pdVar15[1] - local_70[1]) <= 9.999999747378752e-05)) {
        _Size = CONCAT71(uVar17,ABS(pdVar15[2] - local_70[2]) <= 9.999999747378752e-05);
        goto LAB_149354128;
      }
      goto LAB_149354121;
    }
    lVar14 = lVar10;
    if (lVar10 != lVar11) {
      do {
        lVar14 = *(longlong *)(lVar14 + 0x30);
        if (lVar14 == lVar11) break;
      } while (lVar14 != 0);
      if (lVar14 == 0) goto LAB_149353fbf;
    }
LAB_149353f1f:
    local_98 = (wchar_t *)0x0;
    iStack_90 = *(int *)(local_70 + 1);
    lVar10 = (longlong)iStack_90;
    _Src = (void *)*local_70;
    if (lVar10 == 0) {
      uStack_8c = 0;
      iVar6 = (int)param_1[0x33];
      ppwVar9 = (wchar_t **)0x0;
      if (iVar6 == 0) {
LAB_149354205:
        _Size = CONCAT71((int7)((ulonglong)ppwVar9 >> 8),1);
        goto LAB_149354128;
      }
      iVar12 = 0;
      _Size = 0;
LAB_149354046:
      bVar18 = iVar6 + iVar12 == 1;
      pwVar16 = local_98;
LAB_14935404b:
      _Size = CONCAT71((int7)(_Size >> 8),bVar18);
    }
    else {
      FUN_1446dd670(&local_98,iStack_90,0);
      _Size = lVar10 * 2;
      memcpy(local_98,_Src,_Size);
      pwVar16 = local_98;
      iVar6 = (int)param_1[0x33];
      iVar12 = iStack_90;
      if (iVar6 != iStack_90) goto LAB_149354046;
      _Size = CONCAT71((int7)(_Size >> 8),1);
      if (1 < iStack_90) {
        iVar6 = wcscmp((wchar_t *)param_1[0x32],local_98);
        bVar18 = iVar6 == 0;
        goto LAB_14935404b;
      }
    }
    if (pwVar16 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar16);
    }
  }
LAB_149354128:
  if (local_70 != (double *)0x0) {
    FUN_1400020a8(local_70);
  }
LAB_149353ea5:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return _Size & 0xffffffff;
}



// FUNCTION 14935420e FUN_14935420e body=162 status=ok
// SIG undefined FUN_14935420e(void)

undefined8 * FUN_14935420e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
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
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
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
  return param_1;
}



// FUNCTION 1493542b4 FUN_1493542b4 body=229 status=ok
// SIG undefined FUN_1493542b4(void)

undefined8 FUN_1493542b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d9e8) {
    FUN_144b3d300(&DAT_14cc0d9e8);
    if (DAT_14cc0d9e8 == -1) {
      uVar1 = FUN_144a7a812();
      DAT_14cc0d9e0 = thunk_FUN_140277b32(uVar1,0,L"/Script/CoreUObject",0);
      _Init_thread_footer(&DAT_14cc0d9e8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0d9f8) {
    FUN_144b3d300(&DAT_14cc0d9f8);
    uVar1 = DAT_14cc0d9e0;
    if (DAT_14cc0d9f8 == -1) {
      uVar2 = FUN_1446f4bba();
      DAT_14cc0d9f0 = thunk_FUN_140277b32(uVar2,uVar1,L"LinearColor",0);
      _Init_thread_footer(&DAT_14cc0d9f8);
    }
  }
  return DAT_14cc0d9f0;
}



// FUNCTION 1493543a4 FUN_1493543a4 body=384 status=ok
// SIG undefined FUN_1493543a4(void)

ulonglong FUN_1493543a4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  longlong local_50 [3];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (lVar3 != 0) {
      lVar6 = FUN_1459d8fe2();
      if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
         (param_2 = FUN_14935201e(lVar3), param_2 != 0)) goto LAB_1493543c7;
    }
  }
  else {
LAB_1493543c7:
    if (*(int *)(param_1 + 0xb0) != 0) {
      plVar1 = (longlong *)(param_1 + 0xa8);
      FUN_149354526(plVar1,local_50);
      *(longlong *)(param_1 + 0x70) = param_2;
      cVar5 = FUN_14935237e(param_1,*(undefined8 *)(param_2 + 0x10),param_2,0);
      iVar2 = *(int *)(param_1 + 0xb0);
      *(uint *)(param_1 + 0xb0) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0xb4) < iVar2 + 1U) {
        FUN_149358df0(plVar1,iVar2);
      }
      FUN_14935420e((longlong)iVar2 * 0x28 + *plVar1,local_50);
      if (((cVar5 == '\0') || (plVar4 = *(longlong **)(param_1 + 0x68), plVar4 == (longlong *)0x0))
         || ((longlong)*(int *)(param_1 + 0xb0) < 1)) {
LAB_1493544fc:
        uVar7 = 0;
      }
      else {
        iVar2 = *(int *)(*plVar1 + -0x18 + (longlong)*(int *)(param_1 + 0xb0) * 0x28);
        (**(code **)(*plVar4 + 0x620))(plVar4,&local_60);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        if (local_58 <= iVar2 || iVar2 < 0) goto LAB_1493544fc;
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x80) = 0;
        uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_1493543d2;
    }
  }
  uVar7 = 0;
LAB_1493543d2:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 149354526 FUN_149354526 body=138 status=ok
// SIG undefined FUN_149354526(void)

undefined8 * FUN_149354526(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)(int)param_1[1];
  *param_2 = *(undefined8 *)(lVar1 + -0x28 + lVar2 * 0x28);
  *(undefined8 *)(lVar1 + -0x28 + lVar2 * 0x28) = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + -0x20 + lVar2 * 0x28);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(lVar1 + -0x1c + lVar2 * 0x28);
  *(undefined8 *)(lVar1 + -0x20 + lVar2 * 0x28) = 0;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar1 + -0x18 + lVar2 * 0x28);
  param_2[3] = *(undefined8 *)(lVar1 + -0x10 + lVar2 * 0x28);
  *(undefined8 *)(lVar1 + -0x10 + lVar2 * 0x28) = 0;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar1 + -8 + lVar2 * 0x28);
  *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)(lVar1 + -4 + lVar2 * 0x28);
  *(undefined8 *)(lVar1 + -8 + lVar2 * 0x28) = 0;
  FUN_149358eb4(param_1,(int)param_1[1] + -1);
  FUN_149358f1a(param_1);
  return param_2;
}



// FUNCTION 1493545b0 FUN_1493545b0 body=151 status=ok
// SIG undefined FUN_1493545b0(void)

bool FUN_1493545b0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cc0da28 == 0) {
    FUN_1446f470e(&local_20,L"OverrideMaterials",1);
    uVar1 = FUN_14081cebe();
    lVar2 = FUN_147a69726(uVar1,local_20,3);
    if (lVar2 != 0) {
      DAT_14cc0da28 = *(longlong *)(lVar2 + 0x78);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cc0da28 == param_2 && DAT_14cc0da28 != 0;
}



// FUNCTION 149354664 FUN_149354664 body=147 status=ok
// SIG undefined FUN_149354664(void)

undefined8 FUN_149354664(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 == 0) goto LAB_14935467e;
    lVar1 = FUN_1459d8fe2();
    if (((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
         != lVar1 + 0x30)) || (param_2 = FUN_14935201e(lVar2), param_2 == 0)) goto LAB_14935467e;
  }
  lVar2 = FUN_145a93de8();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
      == lVar2 + 0x30)) {
    uVar3 = FUN_145a93de8();
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    *(longlong *)(param_1 + 0x68) = param_2;
    return 1;
  }
LAB_14935467e:
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return 0;
}



// FUNCTION 1493546f8 FUN_1493546f8 body=144 status=ok
// SIG undefined FUN_1493546f8(void)

undefined8 * FUN_1493546f8(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = (**(code **)(*param_1 + 0x2e8))();
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1401211f6(param_2,uVar2,1);
  cVar1 = FUN_1493522bc(param_1);
  if (cVar1 != '\0') {
    local_24 = *(undefined4 *)(param_1[0xd] + 0x3b0);
    iVar3 = (**(code **)(*param_1 + 0x2e8))(param_1);
    memcpy((void *)*param_2,&local_24,(longlong)iVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935478a FUN_14935478a body=71 status=ok
// SIG undefined FUN_14935478a(void)

void FUN_14935478a(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  
  if ((char)param_1[0x24] == '\x01') {
    cVar2 = (**(code **)(*param_1 + 0x2a0))(param_1,0);
    if (cVar2 != '\0') {
      lVar1 = param_1[0xd];
      puVar3 = (undefined8 *)FUN_1444c7512(param_1);
      FUN_1493547d2(lVar1,*(undefined4 *)*puVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1493547d2 FUN_1493547d2 body=292 status=ok
// SIG undefined FUN_1493547d2(void)

void FUN_1493547d2(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int7 iVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_149354ce8(param_1,&local_48);
  if ((-1 < (int)param_2) && ((int)param_2 < local_40)) {
    uVar6 = 0;
    bVar5 = *(byte *)(*(longlong *)(param_1 + 0x1c8) + 0x1f8) >> 5;
    do {
      lVar2 = *(longlong *)(local_48 + uVar6 * 8);
      if (lVar2 != 0) {
        lVar3 = FUN_145a93de8();
        iVar1 = *(int *)(lVar3 + 0x38);
        iVar4 = (int7)(int3)((uint)iVar1 >> 8);
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
            != lVar3 + 0x30)) {
          if (*(longlong *)(lVar2 + 0x1c8) != 0) {
            FUN_14045627c(*(longlong *)(lVar2 + 0x1c8),CONCAT71(iVar4,param_2 == uVar6 & bVar5),2);
          }
        }
        else {
          FUN_14045627c(*(undefined8 *)(lVar2 + 0x1c8),CONCAT71(iVar4,param_2 == uVar6 & bVar5),2);
          FUN_1493547d2(lVar2,*(undefined4 *)(lVar2 + 0x3b0));
        }
      }
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)local_40);
    *(uint *)(param_1 + 0x3b0) = param_2;
    FUN_1401861f4(param_1 + 0x390,param_2);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493548f8 FUN_1493548f8 body=55 status=ok
// SIG undefined FUN_1493548f8(void)

undefined8 * FUN_1493548f8(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x150);
  if (*(int *)(param_1 + 0x158) == 0) {
    FUN_140393c76(puVar1,4,1);
    *(undefined4 *)*puVar1 = 0xffffffff;
  }
  return puVar1;
}



// FUNCTION 149354946 FUN_149354946 body=375 status=ok
// SIG undefined FUN_149354946(void)

void FUN_149354946(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  bool bVar6;
  
  if (((char)param_1[0x24] != '\x01') ||
     (cVar2 = (**(code **)(*param_1 + 0x2a0))(param_1,0), cVar2 == '\0')) {
    return;
  }
  lVar5 = param_1[4];
  if (lVar5 != 0) {
    lVar3 = FUN_1459d8fe2();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && (lVar5 = FUN_14935201e(lVar5), lVar5 != 0)) {
      FUN_144757f48(lVar5,8);
    }
  }
  lVar5 = param_1[0xe];
  if (lVar5 != 0) {
    lVar3 = FUN_144a78d6a();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      FUN_144757f48(param_1[0xe],8);
    }
  }
  if (param_1[0x10] == 0) {
    plVar1 = (longlong *)param_1[0xb];
    if (plVar1 != (longlong *)0x0) {
      lVar5 = plVar1[1];
      lVar3 = FUN_1446ef9c4();
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (!bVar6) goto LAB_1493549ca;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_1493549ca;
      puVar4 = (undefined8 *)FUN_1444c7512(param_1);
      if ((*(longlong *)*puVar4 != 0) || ((*(byte *)((longlong)plVar1 + 0x39) & 0x10) == 0)) {
        (**(code **)(*plVar1 + 0x1f0))(plVar1,param_1[0xf]);
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x308))(param_1,param_1[0xd]);
  }
LAB_1493549ca:
  FUN_1447f69b6(param_1 + 5);
  return;
}



// FUNCTION 149354abe FUN_149354abe body=226 status=ok
// SIG undefined FUN_149354abe(void)

undefined8 * FUN_149354abe(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = (**(code **)(*param_1 + 0x2e8))();
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1401211f6(param_2,iVar3,1);
  cVar2 = FUN_1493522bc(param_1);
  if ((cVar2 != '\0') && (plVar1 = (longlong *)param_1[0xb], plVar1 != (longlong *)0x0)) {
    lVar5 = plVar1[1];
    lVar4 = FUN_1446ef9c4();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar4 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar4) break;
        } while (lVar5 != 0);
      }
      if (!bVar6) goto LAB_149354b4c;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_149354b4c;
    local_38 = (**(code **)(*plVar1 + 0x210))(plVar1,param_1[0xf]);
    memcpy((void *)*param_2,&local_38,(longlong)iVar3);
  }
LAB_149354b4c:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149354ba2 FUN_149354ba2 body=185 status=ok
// SIG undefined FUN_149354ba2(void)

ulonglong FUN_149354ba2(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = 0;
  cVar1 = (**(code **)(*param_1 + 0x2a0))(param_1,0);
  if (cVar1 != '\0') {
    if ((char)param_1[0x24] == '\x01') {
      puVar3 = (undefined8 *)FUN_1444c7512(param_1);
      (**(code **)(*param_1 + 0x2b0))(param_1,&local_30);
      iVar2 = *(int *)(puVar3 + 1);
      bVar5 = iVar2 == local_28;
      if (iVar2 != 0 && bVar5) {
        iVar2 = memcmp((void *)*puVar3,local_30,(longlong)iVar2);
        bVar5 = iVar2 == 0;
      }
      uVar4 = CONCAT71((int7)((ulonglong)&local_30 >> 8),bVar5);
      if (local_30 != (void *)0x0) {
        FUN_1400020a8(local_30);
      }
    }
    else {
      uVar4 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 149354c5c FUN_149354c5c body=139 status=ok
// SIG undefined FUN_149354c5c(void)

void FUN_149354c5c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149354ce8(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149354ce8 FUN_149354ce8 body=1006 status=ok
// SIG undefined FUN_149354ce8(void)

longlong * FUN_149354ce8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_388 [40];
  longlong *local_360;
  int local_354;
  longlong *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14490f2e4(0,param_2,0,0);
  iVar7 = (int)param_2[1];
  if (1 < (longlong)iVar7) {
    lVar1 = *param_2;
    local_350 = param_2;
    memset(local_338,0,0x2f0);
    local_340 = lVar1 + (longlong)iVar7 * 8 + -8;
    local_348 = lVar1;
    fVar23 = logf((float)iVar7);
    local_338[0] = (int)(longlong)(fVar23 + fVar23);
    plVar20 = &local_348;
    do {
      puVar11 = (undefined8 *)*plVar20;
      puVar12 = (undefined8 *)plVar20[1];
      iVar7 = (int)plVar20[2];
      iVar5 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar11) >> 3);
      uVar18 = iVar5 + 1;
      puVar13 = puVar11;
      puVar16 = puVar12;
      local_360 = plVar20;
      if (iVar7 != 0) {
LAB_149354da6:
        plVar20 = local_360;
        if (8 < (int)uVar18) {
          uVar2 = puVar13[uVar18 >> 1];
          puVar13[uVar18 >> 1] = *puVar13;
          *puVar13 = uVar2;
          puVar19 = puVar16 + 1;
          puVar21 = puVar13;
          local_354 = iVar7;
          do {
            puVar3 = puVar21 + 1;
            puVar17 = puVar21 + 1;
            do {
              puVar21 = puVar17;
              puVar6 = puVar3;
              if (puVar16 < puVar21) break;
              cVar4 = FUN_1444cb1b0(*puVar13,*puVar21);
              puVar3 = puVar6 + 1;
              puVar17 = puVar21 + 1;
            } while (cVar4 == '\0');
            puVar3 = puVar19 + -2;
            do {
              puVar17 = puVar19;
              puVar8 = puVar3;
              puVar19 = puVar17 + -1;
              if (puVar19 <= puVar13) break;
              cVar4 = FUN_1444cb1b0(*puVar19,*puVar13);
              puVar3 = puVar8 + -1;
            } while (cVar4 == '\0');
            if (puVar19 < puVar21) goto LAB_149354e3c;
            uVar2 = *puVar21;
            *puVar21 = *puVar19;
            *puVar19 = uVar2;
          } while( true );
        }
        for (; puVar12 = puVar13, puVar11 = puVar13, puVar13 < puVar16; puVar16 = puVar16 + -1) {
          while (puVar19 = puVar12, puVar11 = puVar11 + 1, puVar11 <= puVar16) {
            cVar4 = FUN_1444cb1b0(*puVar19,*puVar11);
            puVar12 = puVar11;
            if (cVar4 == '\0') {
              puVar12 = puVar19;
            }
          }
          uVar2 = *puVar19;
          *puVar19 = *puVar16;
          *puVar16 = uVar2;
        }
        goto LAB_14935508f;
      }
LAB_149354eed:
      plVar20 = local_360;
      if (uVar18 != 0) {
        iVar7 = (iVar5 - (iVar5 + -1 >> 0x1f)) + -1 >> 1;
        iVar5 = iVar7;
joined_r0x000149354f0e:
        do {
          iVar10 = iVar7 * 2 + 1;
          if (iVar10 < (int)uVar18) {
            iVar9 = iVar7 * 2 + 2;
            if ((iVar9 < (int)uVar18) &&
               (cVar4 = FUN_1444cb1b0(puVar13[iVar9],puVar13[iVar10]), cVar4 == '\0')) {
              iVar10 = iVar9;
            }
            cVar4 = FUN_1444cb1b0(puVar13[iVar7],puVar13[iVar10]);
            if (cVar4 != '\0') {
              uVar2 = puVar13[iVar7];
              puVar13[iVar7] = puVar13[iVar10];
              puVar13[iVar10] = uVar2;
              iVar7 = iVar10;
              goto joined_r0x000149354f0e;
            }
          }
          plVar20 = local_360;
          bVar22 = iVar5 != 0;
          iVar7 = iVar5 + -1;
          iVar5 = iVar7;
        } while (bVar22);
        if (1 < (int)uVar18) {
          uVar14 = (ulonglong)uVar18;
          uVar2 = *puVar13;
          *puVar13 = puVar13[uVar14 - 1];
          puVar13[uVar14 - 1] = uVar2;
          if (uVar18 != 2) {
            do {
              uVar15 = uVar14 - 1;
              iVar7 = 0;
              iVar10 = 1;
              iVar5 = 0;
              do {
                iVar7 = iVar7 + 2;
                iVar9 = iVar10;
                if (((longlong)iVar7 < (longlong)uVar15) &&
                   (cVar4 = FUN_1444cb1b0(puVar13[iVar7],puVar13[iVar10]), cVar4 == '\0')) {
                  iVar9 = iVar7;
                }
                cVar4 = FUN_1444cb1b0(puVar13[iVar5],puVar13[iVar9]);
                if (cVar4 == '\0') break;
                uVar2 = puVar13[iVar5];
                puVar13[iVar5] = puVar13[iVar9];
                puVar13[iVar9] = uVar2;
                iVar7 = iVar9 * 2;
                iVar10 = iVar9 * 2 + 1;
                iVar5 = iVar9;
              } while ((longlong)iVar10 < (longlong)uVar15);
              uVar2 = *puVar13;
              *puVar13 = puVar13[uVar14 - 2];
              puVar13[uVar14 - 2] = uVar2;
              uVar14 = uVar15;
            } while (2 < uVar15);
          }
        }
      }
LAB_14935508f:
      plVar20 = plVar20 + -3;
      param_2 = local_350;
    } while (&local_348 <= plVar20);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_149354e3c:
  uVar2 = *puVar13;
  *puVar13 = *puVar19;
  *puVar19 = uVar2;
  iVar7 = local_354 + -1;
  puVar17 = puVar17 + -2;
  if ((longlong)puVar8 - (longlong)puVar11 < (longlong)puVar12 - (longlong)puVar6) {
    if (puVar21 < puVar16) {
      *local_360 = (longlong)puVar21;
      local_360[1] = (longlong)puVar16;
      *(int *)(local_360 + 2) = iVar7;
      local_360 = local_360 + 3;
    }
    puVar12 = puVar8;
    plVar20 = local_360;
    puVar11 = puVar13;
    if (puVar19 <= puVar13 + 1) goto LAB_14935508f;
  }
  else {
    plVar20 = local_360;
    if (puVar13 + 1 < puVar19) {
      *local_360 = (longlong)puVar13;
      local_360[1] = (longlong)puVar17;
      *(int *)(local_360 + 2) = iVar7;
      plVar20 = local_360 + 3;
    }
    puVar13 = puVar21;
    puVar12 = puVar16;
    puVar17 = puVar16;
    puVar11 = puVar6;
    if (puVar16 <= puVar21) goto LAB_14935508f;
  }
  local_360 = plVar20;
  iVar5 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar11) >> 3);
  uVar18 = iVar5 + 1;
  puVar16 = puVar17;
  if (iVar7 == 0) goto LAB_149354eed;
  goto LAB_149354da6;
}



// FUNCTION 1493550f2 FUN_1493550f2 body=154 status=ok
// SIG undefined FUN_1493550f2(void)

void FUN_1493550f2(undefined8 param_1,longlong param_2)

{
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
  FUN_1493547d2(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149355190 FUN_149355190 body=189 status=ok
// SIG undefined FUN_149355190(void)

void FUN_149355190(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401b2056();
  if (*(int *)(param_1 + 0x3b0) == -1) {
    FUN_149354ce8(param_1,&local_30);
    if (local_28 < 1) {
LAB_14935522b:
      iVar3 = -1;
    }
    else {
      iVar3 = -1;
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(local_30 + lVar4 * 8) + 0x1c8);
        if ((plVar1 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar1 + 0x4e8))(), cVar2 != '\0')
           ) {
          if (iVar3 != -1) goto LAB_14935522b;
          iVar3 = (int)lVar4;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < local_28);
    }
    *(int *)(param_1 + 0x3b0) = iVar3;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14935524e FUN_14935524e body=1033 status=ok
// SIG undefined FUN_14935524e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14935524e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_848 [32];
  undefined4 local_828;
  undefined4 local_820;
  undefined8 *local_818;
  longlong local_810;
  longlong local_808;
  undefined8 local_7fc;
  undefined1 local_7f4;
  undefined4 local_7f0;
  undefined2 local_7ec;
  undefined8 local_7e8;
  undefined4 local_7e0;
  undefined4 uStack_7dc;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  double local_7d0;
  double local_7c8;
  float local_7c0;
  float local_7bc;
  undefined1 local_7b8 [48];
  longlong local_788;
  undefined8 local_780;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined8 local_688;
  undefined8 local_678 [5];
  longlong local_650;
  double local_630;
  double local_628;
  float local_620;
  float local_61c;
  byte local_614;
  undefined8 local_5f8 [16];
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_410;
  undefined8 local_408;
  undefined ***local_400;
  undefined **local_218;
  longlong local_210;
  uint local_208;
  uint local_204;
  undefined8 local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_848;
  local_818 = param_4;
  plVar2 = (longlong *)FUN_1407635e4(DAT_14c951640);
  uVar1 = *(uint *)((longlong)plVar2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar5 = 0;
  }
  FUN_1447f71cc(lVar5,0x40000000);
  plVar2[0x29] = 0;
  plVar2[0x2a] = 0;
  *(undefined4 *)(plVar2 + 0x27) = param_5;
  plVar2[0x28] = 0x10000000100;
  *(undefined1 *)(plVar2 + 0x2c) = 2;
  *(byte *)((longlong)plVar2 + 0x15a) = *(byte *)((longlong)plVar2 + 0x15a) & 0xfe;
  (**(code **)(*plVar2 + 0x318))(plVar2);
  lVar5 = FUN_1447b4020(plVar2);
  local_788 = 0;
  local_780 = 0x8000000000;
  FUN_1401b5a8c(local_7b8,0);
  local_810 = lVar5 + 0x50;
  if (lVar5 != 0) {
    lVar5 = local_810;
  }
  local_808 = param_1;
  FUN_14031f39e(&local_698,lVar5,param_1,local_7b8);
  local_620 = (float)DAT_14c759090;
  local_630 = DAT_14c866ff8 - _DAT_14c86a9d8;
  local_614 = local_614 | 0x10;
  local_628 = local_630;
  local_61c = local_620;
  FUN_14031f528(&local_218,&local_698);
  local_218 = &PTR_FUN_14a2b3168;
  if (local_650 != 0) {
    FUN_1400020a8();
  }
  if (local_788 != 0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_14001cc68(0x18,0x10);
  FUN_14355045e(uVar3,&local_218,0x3f800000);
  local_98 = uVar3;
  FUN_144b137c8(&local_698);
  local_578 = 0;
  local_570 = 0x10000000100;
  local_410 = 0;
  local_408 = 0x10000000100;
  local_698 = *param_2;
  uStack_694 = param_2[1];
  uStack_690 = param_2[2];
  uStack_68c = param_2[3];
  local_688 = *(undefined8 *)(param_2 + 4);
  puVar7 = local_678;
  local_400 = &local_218;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *param_3;
    param_3 = param_3 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar7 = local_818;
  puVar8 = local_5f8;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar3 = FUN_14001cc68(0x30f0,0x10);
  FUN_144891fa0(uVar3,&local_698);
  uVar1 = local_208;
  lVar6 = (longlong)(int)local_208;
  local_208 = local_208 + 1;
  if (local_204 < local_208) {
    FUN_144928a2e(&local_210,uVar1);
  }
  *(undefined8 *)(local_210 + lVar6 * 8) = uVar3;
  local_828 = *(undefined4 *)(local_808 + 8);
  local_7c0 = (float)DAT_14c759090;
  local_7d0 = DAT_14c866ff8 - _DAT_14c86a9d8;
  local_820 = 0x3f800000;
  lVar6 = 0;
  local_7c8 = local_7d0;
  local_7bc = local_7c0;
  FUN_147d8ddfa(local_7b8,lVar5,0);
  FUN_14376f1d8(local_7b8,&DAT_149e1e318);
  plVar4 = (longlong *)FUN_144a7b9cd();
  (**(code **)(*plVar4 + 0x40))(plVar4,local_7b8,&local_218);
  FUN_14735b34c(param_6,0x10000,1);
  local_7e0 = 0;
  uStack_7dc = 0;
  uStack_7d8 = 0x100;
  uStack_7d4 = 0x100;
  local_7fc = 6;
  local_7f4 = 1;
  local_7f0 = 0x467a0000;
  local_7ec = 0;
  local_7e8 = 0;
  FUN_147d775b0(local_810,*param_6);
  FUN_14080c2b4();
  uVar1 = *(uint *)((longlong)plVar2 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  FUN_14482b126(lVar6,0x40000000);
  FUN_14010ad76(local_7b8);
  FUN_144891d70(&local_698);
  FUN_14005d108(&local_218);
  if ((local_60 ^ (ulonglong)auStack_848) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149355658 FUN_149355658 body=196 status=ok
// SIG undefined FUN_149355658(void)

longlong * FUN_149355658(undefined8 param_1,undefined8 param_2,void *param_3,size_t param_4)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Dst;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &local_38;
  local_38 = 0;
  uStack_30 = 0;
  plVar1 = (longlong *)FUN_1437337e4(0,param_2,2,0);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_14142e422(plVar1);
    _Dst = (void *)FUN_140fc05d0(**(longlong **)(lVar2 + 0x18) + 0x20,2);
    memcpy(_Dst,param_3,param_4);
    lVar2 = FUN_14142e422(plVar1);
    FUN_1427d8a52(**(longlong **)(lVar2 + 0x18) + 0x20);
    lVar2 = FUN_14142e422(plVar1);
    *(uint *)(lVar2 + 8) = (*(uint *)(lVar2 + 8) & 0xe0000000) + 1;
    (**(code **)(*plVar1 + 0x318))(plVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935571d FUN_14935571d body=105 status=ok
// SIG undefined FUN_14935571d(void)

undefined8 FUN_14935571d(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  
  uVar2 = FUN_1400dbadc();
  plVar3 = (longlong *)FUN_1415bdc84(uVar2);
  if ((int)param_1[1] == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_1;
  }
  cVar1 = (**(code **)(*plVar3 + 0x78))(plVar3,puVar5);
  if (cVar1 != '\0') {
    lVar4 = FUN_14352f790(param_1);
    if (lVar4 != 0) {
      uVar2 = FUN_1444c9d72(lVar4);
      goto LAB_149355766;
    }
  }
  uVar2 = 0;
LAB_149355766:
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  return uVar2;
}



// FUNCTION 14935578c FUN_14935578c body=245 status=ok
// SIG undefined FUN_14935578c(void)

void FUN_14935578c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_38 = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_88;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444ca684(param_1,puVar2);
  *param_3 = uVar1;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149355882 FUN_149355882 body=154 status=ok
// SIG undefined FUN_149355882(void)

void FUN_149355882(undefined8 param_1,longlong param_2)

{
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
  FUN_1444c53d8(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935591e FUN_14935591e body=162 status=ok
// SIG undefined FUN_14935591e(void)

void FUN_14935591e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493559c2(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493559c2 FUN_1493559c2 body=82 status=ok
// SIG undefined FUN_1493559c2(void)

longlong FUN_1493559c2(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x60))) &&
     (lVar1 = FUN_14935201e(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)param_2 * 8))
     , lVar1 != 0)) {
    lVar2 = FUN_144a6c4d8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 149355a14 FUN_149355a14 body=248 status=ok
// SIG undefined FUN_149355a14(void)

void FUN_149355a14(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar6 = (longlong)local_2c;
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1 = (undefined8 *)(lVar2 + lVar6 * 0x58);
  *param_3 = *puVar1;
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
  uVar4 = *(undefined4 *)(puVar1 + 2);
  uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar3;
  *(undefined4 *)(param_3 + 2) = uVar4;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar5;
  FUN_144a787a6(param_3 + 3,puVar1 + 3);
  param_3[5] = puVar1[5];
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0x34);
  uVar4 = *(undefined4 *)(puVar1 + 7);
  uVar5 = *(undefined4 *)((longlong)puVar1 + 0x3c);
  *(undefined4 *)(param_3 + 6) = *(undefined4 *)(puVar1 + 6);
  *(undefined4 *)((longlong)param_3 + 0x34) = uVar3;
  *(undefined4 *)(param_3 + 7) = uVar4;
  *(undefined4 *)((longlong)param_3 + 0x3c) = uVar5;
  lVar2 = lVar2 + lVar6 * 0x58;
  FUN_144a787a6(param_3 + 8,lVar2 + 0x40);
  *(undefined1 *)(param_3 + 10) = *(undefined1 *)(lVar2 + 0x50);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149355b14 FUN_149355b14 body=305 status=ok
// SIG undefined FUN_149355b14(void)

void FUN_149355b14(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1493508c4(param_1,&local_40,local_28,local_2c != 0);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149355c46 FUN_149355c46 body=128 status=ok
// SIG undefined FUN_149355c46(void)

void FUN_149355c46(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = *(longlong **)(param_1 + 0x48);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = *(undefined4 *)(param_1 + 0x50);
  FUN_140008f88(param_3,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149355cf8 FUN_149355cf8 body=80 status=ok
// SIG undefined FUN_149355cf8(void)

void FUN_149355cf8(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_145876b26();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_149355d1c;
  }
  lVar2 = 0;
LAB_149355d1c:
  *param_3 = lVar2;
  return;
}



// FUNCTION 149355d64 FUN_149355d64 body=129 status=ok
// SIG undefined FUN_149355d64(void)

void FUN_149355d64(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((longlong)*(int *)(param_1 + 0x60) == 0) {
LAB_149355dd3:
    uVar4 = 0;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x58);
    plVar1 = plVar5 + *(int *)(param_1 + 0x60);
    do {
      lVar7 = (longlong)*(int *)(*plVar5 + 0x78);
      if (lVar7 != 0) {
        lVar2 = *(longlong *)(*plVar5 + 0x70);
        lVar6 = 0;
        do {
          cVar3 = (**(code **)(**(longlong **)(lVar2 + lVar6) + 0x300))();
          if (cVar3 == '\0') goto LAB_149355dd3;
          lVar6 = lVar6 + 8;
        } while (lVar7 * 8 != lVar6);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
    uVar4 = 1;
  }
  *param_3 = uVar4;
  return;
}



// FUNCTION 149355de6 FUN_149355de6 body=333 status=ok
// SIG undefined FUN_149355de6(void)

void FUN_149355de6(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_38 = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_88;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1444ca700(param_1,local_24,puVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149355f34 FUN_149355f34 body=246 status=ok
// SIG undefined FUN_149355f34(void)

void FUN_149355f34(longlong param_1,longlong param_2)

{
  longlong **pplVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong **pplVar4;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(local_38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  pplVar1 = *(longlong ***)(param_2 + 0x38);
  pplVar4 = pplVar1;
  if (pplVar1 == (longlong **)0x0) {
    pplVar4 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = *pplVar4;
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0x48) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  pplVar4 = local_38;
  if (pplVar1 != (longlong **)0x0) {
    pplVar4 = pplVar1;
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(pplVar4 + 1);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935602c FUN_14935602c body=617 status=ok
// SIG undefined FUN_14935602c(void)

void FUN_14935602c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_8c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  local_90 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_94 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_94;
  lVar1 = FUN_1444ca112(local_28,puVar2,local_8c,local_90);
  if (lVar1 != 0) {
    FUN_14935669e(param_1,lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493562a8 FUN_1493562a8 body=249 status=ok
// SIG undefined FUN_1493562a8(void)

void FUN_1493562a8(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_1493563a2(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493563a2 FUN_1493563a2 body=177 status=ok
// SIG undefined FUN_1493563a2(void)

void FUN_1493563a2(undefined8 param_1,longlong *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (void *)0x0;
  local_38 = (int)param_2[1];
  lVar1 = (longlong)local_38;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  lVar1 = FUN_14935571d(&local_40);
  if (lVar1 != 0) {
    FUN_14935669e(param_1,lVar1);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149356454 FUN_149356454 body=156 status=ok
// SIG undefined FUN_149356454(void)

void FUN_149356454(undefined8 param_1,longlong param_2)

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
  FUN_1493564f2(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493564f2 FUN_1493564f2 body=76 status=ok
// SIG undefined FUN_1493564f2(void)

void FUN_1493564f2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    FUN_149358fc8(&DAT_14cc0db50,param_1);
    return;
  }
  lVar1 = FUN_1444c9d72(param_2);
  if (lVar1 == 0) {
    return;
  }
  FUN_14935669e(param_1,lVar1);
  return;
}



// FUNCTION 149356562 FUN_149356562 body=293 status=ok
// SIG undefined FUN_149356562(void)

void FUN_149356562(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong *local_1a8;
  undefined ***local_1a0;
  undefined ****local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1a8 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bc59450);
  iVar4 = FUN_1448332aa(param_2,&DAT_14bc59450);
  if (1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_1d8);
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    cVar3 = FUN_144a7c5f6(param_1 + 0x38);
    if (cVar3 == '\0') {
      plVar1 = *(longlong **)(param_1 + 0x38);
      plVar2 = *(longlong **)(param_1 + 0x48);
      if (plVar2 != plVar1) {
        *(longlong **)(param_1 + 0x48) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x40);
      FUN_144a5dc74(&local_1b0);
      FUN_140008f88(param_1 + 0x38,&local_1b0);
      if (local_1b0 != (undefined **)0x0) {
        (**(code **)(*local_1b0 + 0x10))();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935669e FUN_14935669e body=87 status=ok
// SIG undefined FUN_14935669e(void)

void FUN_14935669e(longlong param_1,longlong *param_2)

{
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  *(longlong **)(param_1 + 0x68) = param_2;
  (**(code **)(*param_2 + 0x170))(param_2,0,param_1,0);
  FUN_14472eae2(param_2,0x42);
  FUN_149358fc8(&DAT_14cc0db50,param_1);
  return;
}



// FUNCTION 1493566f6 FUN_1493566f6 body=141 status=ok
// SIG undefined FUN_1493566f6(void)

undefined4 FUN_1493566f6(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  uVar1 = FUN_149356784(0,param_2,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1493590f2(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149356784 FUN_149356784 body=287 status=ok
// SIG undefined FUN_149356784(void)

undefined8 FUN_149356784(ulonglong param_1,ulonglong param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_2;
  if (param_2 == param_1) {
LAB_14935687f:
    uVar5 = 0;
  }
  else {
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      plVar3 = param_3 + 7;
      if ((longlong *)param_3[8] != (longlong *)0x0) {
        plVar3 = (longlong *)param_3[8];
      }
      iVar6 = *(int *)((longlong)plVar3 +
                      (ulonglong)((int)param_3[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
      if (iVar6 != -1) {
        do {
          if (*(ulonglong *)(*param_3 + (longlong)iVar6 * 0x10) == param_2) goto LAB_14935687f;
          iVar6 = *(int *)((longlong)iVar6 * 0x10 + *param_3 + 8);
        } while (iVar6 != -1);
      }
    }
    FUN_149357b28(param_3,local_3c,&local_38);
    if ((longlong)*(int *)(param_2 + 0x30) != 0) {
      lVar8 = (longlong)*(int *)(param_2 + 0x30) * 0x58;
      lVar7 = *(longlong *)(param_2 + 0x28) + 0x28;
      do {
        lVar4 = FUN_1493509d6(lVar7);
        if (lVar4 != 0) {
          cVar1 = FUN_149356784(param_1,lVar4,param_3);
          if (cVar1 == '\0') goto LAB_14935687f;
        }
        lVar7 = lVar7 + 0x58;
        lVar8 = lVar8 + -0x58;
      } while (lVar8 != 0);
    }
    FUN_149357aa4(param_3,param_2);
    uVar5 = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493568a8 FUN_1493568a8 body=140 status=ok
// SIG undefined FUN_1493568a8(void)

void FUN_1493568a8(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar1 = *(longlong **)(*param_2 + 8);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = plVar1;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14bc59450);
  FUN_1448332aa(plVar1,&DAT_14bc59450);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149356936 FUN_149356936 body=135 status=ok
// SIG undefined FUN_149356936(void)

void FUN_149356936(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bc59450);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    FUN_1448332aa(param_2,&DAT_14bc59450);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493569be FUN_1493569be body=128 status=ok
// SIG undefined FUN_1493569be(void)

void FUN_1493569be(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = *(longlong **)(param_1 + 0x38);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = *(undefined4 *)(param_1 + 0x40);
  FUN_140008f88(param_3,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149356a58 FUN_149356a58 body=80 status=ok
// SIG undefined FUN_149356a58(void)

void FUN_149356a58(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_145886226();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_149356a7c;
  }
  lVar2 = 0;
LAB_149356a7c:
  *param_3 = lVar2;
  return;
}



// FUNCTION 149356ac0 FUN_149356ac0 body=177 status=ok
// SIG undefined FUN_149356ac0(void)

void FUN_149356ac0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((longlong)local_24 < 0) || (*(int *)(param_1 + 0x58) <= local_24)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)local_24 * 8);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149356b72 FUN_149356b72 body=259 status=ok
// SIG undefined FUN_149356b72(void)

void FUN_149356b72(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_40;
  local_50 = (int)uStack_40;
  if (lVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,uStack_40 & 0xffffffff,0);
    memcpy(local_58,_Src,lVar2 * 2);
  }
  uVar1 = FUN_149356c76(param_1,&local_58);
  *param_3 = uVar1;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


