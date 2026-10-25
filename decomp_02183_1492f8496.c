// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1492f8496 FUN_1492f8496 body=507 status=ok
// SIG undefined FUN_1492f8496(void)

void FUN_1492f8496(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  int local_5c;
  longlong local_58 [3];
  undefined1 local_39;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
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
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar2 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_5c != 0;
  uVar1 = FUN_1492f8692(local_38[2],local_38,puVar2,local_58);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f8692 FUN_1492f8692 body=179 status=ok
// SIG undefined FUN_1492f8692(void)

undefined4
FUN_1492f8692(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  undefined8 local_38;
  int iStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0xffffffff00000000;
  if ((&local_40 != param_4) && (1 < (int)param_4[1])) {
    FUN_14034a368(&local_40,param_4);
  }
  local_48 = param_5;
  uVar1 = FUN_1492fac6a(param_1,param_2,param_3,&local_40);
  if ((iStack_34 != -1) && (local_40 != 0)) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f8752 FUN_1492f8752 body=511 status=ok
// SIG undefined FUN_1492f8752(void)

void FUN_1492f8752(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  int local_5c;
  longlong local_58 [3];
  undefined8 local_40;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
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
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_5c != 0;
  uVar1 = FUN_1492f8952(local_38[2],local_38,puVar2,local_58);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f8952 FUN_1492f8952 body=179 status=ok
// SIG undefined FUN_1492f8952(void)

undefined4
FUN_1492f8952(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  undefined8 local_38;
  int iStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0xffffffff00000000;
  if ((&local_40 != param_4) && (1 < (int)param_4[1])) {
    FUN_14034a368(&local_40,param_4);
  }
  local_48 = param_5;
  uVar1 = FUN_1492faf2a(param_1,param_2,param_3,&local_40);
  if ((iStack_34 != -1) && (local_40 != 0)) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f8a12 FUN_1492f8a12 body=510 status=ok
// SIG undefined FUN_1492f8a12(void)

void FUN_1492f8a12(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  int local_5c;
  longlong local_58 [3];
  undefined4 local_3c;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
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
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = &local_3c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_5c != 0;
  uVar1 = FUN_1492f8c12(local_38[2],local_38,puVar2,local_58);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f8c12 FUN_1492f8c12 body=179 status=ok
// SIG undefined FUN_1492f8c12(void)

undefined4
FUN_1492f8c12(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  undefined8 local_38;
  int iStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0xffffffff00000000;
  if ((&local_40 != param_4) && (1 < (int)param_4[1])) {
    FUN_14034a368(&local_40,param_4);
  }
  local_48 = param_5;
  uVar1 = FUN_1492fadca(param_1,param_2,param_3,&local_40);
  if ((iStack_34 != -1) && (local_40 != 0)) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f8cd2 FUN_1492f8cd2 body=507 status=ok
// SIG undefined FUN_1492f8cd2(void)

void FUN_1492f8cd2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  int local_5c;
  longlong local_58 [7];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_58[4] = 0;
  local_58[5] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 4);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_5c != 0;
  uVar1 = FUN_1492f8ece(local_20,local_58 + 4,local_58 + 2,local_58);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (local_58[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f8ece FUN_1492f8ece body=179 status=ok
// SIG undefined FUN_1492f8ece(void)

undefined4
FUN_1492f8ece(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  undefined8 local_38;
  int iStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0xffffffff00000000;
  if ((&local_40 != param_4) && (1 < (int)param_4[1])) {
    FUN_14034a368(&local_40,param_4);
  }
  local_48 = param_5;
  uVar1 = FUN_1492fb1ea(param_1,param_2,param_3,&local_40);
  if ((iStack_34 != -1) && (local_40 != 0)) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f8f8e FUN_1492f8f8e body=510 status=ok
// SIG undefined FUN_1492f8f8e(void)

void FUN_1492f8f8e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  int local_5c;
  longlong local_58 [3];
  undefined4 local_3c;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
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
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = &local_3c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_5c != 0;
  uVar1 = FUN_1492f918e(local_38[2],local_38,puVar2,local_58);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f918e FUN_1492f918e body=179 status=ok
// SIG undefined FUN_1492f918e(void)

undefined4
FUN_1492f918e(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  undefined8 local_38;
  int iStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0xffffffff00000000;
  if ((&local_40 != param_4) && (1 < (int)param_4[1])) {
    FUN_14034a368(&local_40,param_4);
  }
  local_48 = param_5;
  uVar1 = FUN_1492fb08a(param_1,param_2,param_3,&local_40);
  if ((iStack_34 != -1) && (local_40 != 0)) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f9248 FUN_1492f9248 body=303 status=ok
// SIG undefined FUN_1492f9248(void)

void FUN_1492f9248(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
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
  FUN_1492f9378(local_18,local_20,local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f9378 FUN_1492f9378 body=2429 status=ok
// SIG undefined FUN_1492f9378(void)

void FUN_1492f9378(longlong *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  void *pvVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_138 [32];
  char local_118;
  undefined8 local_108;
  char local_fe;
  char local_fd;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  undefined8 local_f0;
  void *local_e8;
  undefined8 uStack_e0;
  longlong local_c8 [2];
  void *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  void *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 *local_88;
  ulonglong uStack_80;
  longlong local_70;
  undefined8 local_68;
  int iStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_108 = param_2;
  local_fe = param_3;
  FUN_1492f0b28(param_1[5]);
  uVar4 = 0;
  uVar9 = 0;
  local_f4 = DAT_14cc0c3a0 - 1;
  if (DAT_14cc0c3a0 == 0) {
    local_f4 = uVar9;
  }
  local_f8 = DAT_14cc0c3c0 - 1;
  if (DAT_14cc0c3c0 == 0) {
    local_f8 = uVar9;
  }
  local_fc = DAT_14cc0c3b0 - 1;
  if (DAT_14cc0c3b0 == 0) {
    local_fc = uVar9;
  }
  if ((longlong)(int)uStack_80 != 0) {
    lVar11 = (longlong)(int)uStack_80 << 4;
    puVar12 = local_88;
    do {
      local_98 = (void *)0x0;
      local_90 = *(int *)(puVar12 + 1);
      lVar7 = (longlong)local_90;
      pvVar5 = (void *)*puVar12;
      if (lVar7 == 0) {
        local_8c = 0;
      }
      else {
        FUN_1446dd670(&local_98,local_90,0);
        memcpy(local_98,pvVar5,lVar7 * 2);
      }
      iVar10 = DAT_14cc0c3a0 + -1;
      if (DAT_14cc0c3a0 == 0) {
        iVar10 = 0;
      }
      puVar6 = &DAT_149dfb77a;
      if (DAT_14cc0c3a0 != 0) {
        puVar6 = DAT_14cc0c398;
      }
      cVar1 = FUN_144a791f8(&local_98,puVar6,iVar10,1);
      if (cVar1 != '\0') {
        iVar10 = DAT_14cc0c3c0 + -1;
        if (DAT_14cc0c3c0 == 0) {
          iVar10 = 0;
        }
        puVar6 = &DAT_149dfb77a;
        if (DAT_14cc0c3c0 != 0) {
          puVar6 = DAT_14cc0c3b8;
        }
        cVar1 = FUN_144a38768(&local_98,puVar6,iVar10,1);
        if (cVar1 != '\0') {
          FUN_144a49bb4(&local_98,&local_e8,local_f4);
          uVar9 = (int)uStack_e0 - 1;
          if ((int)uStack_e0 == 0) {
            uVar9 = 0;
          }
          uVar3 = uVar9 - local_f8;
          if ((int)uVar9 <= (int)(uVar9 - local_f8)) {
            uVar3 = uVar9;
          }
          uVar4 = (ulonglong)uVar3;
          if ((int)uVar3 < 1) {
            uVar4 = 0;
          }
          uVar9 = uVar9 - (int)uVar4;
          if ((int)local_f8 < (int)uVar9) {
            uVar9 = local_f8;
          }
          iVar10 = (int)uStack_e0;
          if (0 < (int)uVar9) {
            iVar10 = (int)uStack_e0 - (uVar9 + (int)uVar4);
            if (iVar10 != 0) {
              pvVar5 = (void *)(uVar4 * 2 + (longlong)local_e8);
              memmove(pvVar5,(void *)((longlong)pvVar5 + (ulonglong)uVar9 * 2),(longlong)iVar10 * 2)
              ;
            }
            iVar10 = (int)uStack_e0 - uVar9;
          }
          local_a8 = local_e8;
          uStack_9c = uStack_e0._4_4_;
          uVar9 = DAT_14cc0c3b0 - 1;
          if (DAT_14cc0c3b0 == 0) {
            uVar9 = 0;
          }
          puVar6 = &DAT_149dfb77a;
          if (DAT_14cc0c3b0 != 0) {
            puVar6 = DAT_14cc0c3a8;
          }
          iStack_a0 = iVar10;
          cVar1 = FUN_144a791f8(&local_a8,puVar6,uVar9,1);
          if (cVar1 != '\0') {
            FUN_144a49bb4(&local_a8,&local_e8,local_fc);
            if (local_a8 != (void *)0x0) {
              FUN_1400020a8();
            }
            local_a8 = local_e8;
            iStack_a0 = (int)uStack_e0;
            uStack_9c = uStack_e0._4_4_;
          }
          local_fd = cVar1;
          local_f0 = (**(code **)(*param_1 + 0x2b8))(param_1,puVar12);
          pvVar5 = local_a8;
          local_b8 = (void *)0x0;
          lVar7 = (longlong)iStack_a0;
          iStack_b0 = iStack_a0;
          if (lVar7 == 0) {
            uStack_ac = 0;
          }
          else {
            FUN_1446dd670(&local_b8,iStack_a0,0);
            memcpy(local_b8,pvVar5,lVar7 * 2);
          }
          plVar8 = param_1;
          if (local_fe != '\0') {
            FUN_1492ee7cc(param_1,&local_70);
            plVar8 = local_c8;
            FUN_144a882a8(plVar8,&local_70,&DAT_149e0635c);
            FUN_144a7dea0(&local_e8,plVar8,&local_a8);
            if (local_b8 != (void *)0x0) {
              FUN_1400020a8();
            }
            local_b8 = local_e8;
            iStack_b0 = (int)uStack_e0;
            uStack_ac = uStack_e0._4_4_;
            local_e8 = (void *)0x0;
            uStack_e0 = 0;
            if (local_c8[0] != 0) {
              FUN_1400020a8();
            }
            if (local_70 != 0) {
              FUN_1400020a8();
            }
          }
          cVar1 = local_fd;
          local_e8 = local_a8;
          iVar10 = iStack_a0 + -1;
          if (iStack_a0 == 0) {
            iVar10 = 0;
          }
          uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar10);
          FUN_1492fea36(local_c8,&local_e8,
                        CONCAT71((int7)((ulonglong)plVar8 >> 8),local_fd) & 0xffffffff,1);
          local_70 = 0;
          local_68 = 0xffffffff00000000;
          cVar2 = (**(code **)(*param_1 + 0x2b0))(param_1,local_c8);
          if (cVar2 != '\0') {
            local_e8 = (void *)0x0;
            uStack_e0 = 0;
            FUN_1492ef716(param_1,local_c8);
            FUN_14034a368(&local_70,&local_e8);
            if (local_e8 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
          switch((int)local_f0) {
          case 6:
            FUN_1492fd5ee(param_1,puVar12);
            local_e8 = (void *)0x0;
            local_118 = cVar1;
            FUN_1492faf2a(local_108,&local_b8,&local_e8,&local_70);
            break;
          case 7:
          case 9:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x13:
          case 0x14:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
            break;
          case 8:
            FUN_1492fcdce(param_1,puVar12);
            local_e8 = (void *)((ulonglong)local_e8 & 0xffffffff00000000);
            local_118 = cVar1;
            FUN_1492fadca(local_108,&local_b8,&local_e8,&local_70);
            break;
          case 10:
            FUN_1492fc1de(param_1,puVar12);
            local_e8 = (void *)((ulonglong)local_e8 & 0xffffffffffffff00);
            local_118 = cVar1;
            FUN_1492fc07e(local_108,&local_b8,&local_e8,&local_70);
            break;
          case 0xb:
            FUN_1492fc3b4(param_1,puVar12);
            local_e8 = (void *)((ulonglong)local_e8 & 0xffffffffffff0000);
            local_118 = cVar1;
            FUN_1492fc254(local_108,&local_b8,&local_e8,&local_70);
            break;
          case 0xc:
            FUN_1492fc42a(param_1,puVar12);
            local_e8 = (void *)((ulonglong)local_e8 & 0xffffffff00000000);
            local_118 = cVar1;
            FUN_1492fb08a(local_108,&local_b8,&local_e8,&local_70);
            break;
          case 0xd:
            FUN_1492fc600(param_1,puVar12);
            local_e8 = (void *)0x0;
            local_118 = cVar1;
            FUN_1492fc4a0(local_108,&local_b8,&local_e8,&local_70);
            break;
          case 0x12:
            FUN_1492fdc2e(param_1,&local_e8,puVar12);
            local_118 = cVar1;
            FUN_1492fb1ea(local_108,&local_b8,&local_e8,&local_70);
            if (local_e8 != (void *)0x0) {
              FUN_1400020a8();
            }
            break;
          case 0x15:
            FUN_1492fc7d6(param_1,puVar12);
            local_e8 = (void *)((ulonglong)local_e8 & 0xffffffffffffff00);
            local_118 = cVar1;
            FUN_1492fc676(local_108,&local_b8,&local_e8,&local_70);
            break;
          case 0x16:
            FUN_1492fc9ac(param_1,puVar12);
            local_e8 = (void *)((ulonglong)local_e8 & 0xffffffffffff0000);
            local_118 = cVar1;
            FUN_1492fc84c(local_108,&local_b8,&local_e8,&local_70);
            break;
          case 0x17:
            FUN_1492fcb82(param_1,puVar12);
            local_e8 = (void *)((ulonglong)local_e8 & 0xffffffff00000000);
            local_118 = cVar1;
            FUN_1492fca22(local_108,&local_b8,&local_e8,&local_70);
            break;
          case 0x18:
            FUN_1492fcd58(param_1,puVar12);
            local_e8 = (void *)0x0;
            local_118 = cVar1;
            FUN_1492fcbf8(local_108,&local_b8,&local_e8,&local_70);
            break;
          case 0x19:
            FUN_1492fd7c4(param_1,&local_e8,puVar12);
            local_118 = cVar1;
            FUN_1492fd664(local_108,&local_b8,&local_e8,&local_70);
            break;
          case 0x1d:
            FUN_1492fcfa4(param_1,&local_e8,puVar12);
            local_118 = cVar1;
            FUN_1492fce44(local_108,&local_b8,&local_e8,&local_70);
            break;
          case 0x2d:
            FUN_1492fd372(param_1,&local_e8,puVar12);
            local_118 = cVar1;
            FUN_1492fd212(local_108,&local_b8,&local_e8,&local_70);
            break;
          case 0x2e:
            FUN_1492fd9a8(param_1,&local_e8,puVar12);
            local_118 = cVar1;
            FUN_1492fd848(local_108,&local_b8,&local_e8,&local_70);
            break;
          case 0x2f:
            FUN_1492fd18a(param_1,&local_e8,puVar12);
            local_118 = cVar1;
            FUN_1492fd02a(local_108,&local_b8,&local_e8,&local_70);
            break;
          case 0x30:
            FUN_1492fd562(param_1,&local_e8,puVar12);
            local_118 = cVar1;
            FUN_1492fd402(local_108,&local_b8,&local_e8,&local_70);
            break;
          case 0x31:
            FUN_1492fdb94(param_1,&local_e8,puVar12);
            local_118 = cVar1;
            FUN_1492fda34(local_108,&local_b8,&local_e8,&local_70);
            break;
          default:
            if ((int)local_f0 == 1) {
              FUN_1492fc008(param_1,puVar12);
              local_e8 = (void *)((ulonglong)local_e8 & 0xffffffffffffff00);
              local_118 = cVar1;
              FUN_1492fac6a(local_108,&local_b8,&local_e8,&local_70);
            }
          }
          if (iStack_64 != -1) {
            if (local_70 != 0) {
              FUN_1400020a8();
            }
            local_70 = 0;
          }
          if (local_c8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_b8 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_a8 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_98 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar12 = puVar12 + 2;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
    uVar4 = uStack_80 & 0xffffffff;
  }
  FUN_149307011(local_88,uVar4);
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f9d02 FUN_1492f9d02 body=441 status=ok
// SIG undefined FUN_1492f9d02(void)

void FUN_1492f9d02(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  undefined1 local_49;
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar2 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f9ebc(local_30,local_48,puVar2,plVar3);
  *param_3 = uVar1;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f9ebc FUN_1492f9ebc body=149 status=ok
// SIG undefined FUN_1492f9ebc(void)

undefined4 FUN_1492f9ebc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 in_R9;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0xffffffff00000000;
  uVar2 = FUN_1492fb4ae();
  if (local_28._4_4_ != -1) {
    iVar1 = (int)local_28 + -1;
    if ((int)local_28 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(in_R9,local_30,iVar1);
    if ((local_28._4_4_ != -1) && (local_30 != 0)) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f9f58 FUN_1492f9f58 body=445 status=ok
// SIG undefined FUN_1492f9f58(void)

void FUN_1492f9f58(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  undefined8 local_50;
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar2 = &local_50;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492fa116(local_30,local_48,puVar2,plVar3);
  *param_3 = uVar1;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fa116 FUN_1492fa116 body=149 status=ok
// SIG undefined FUN_1492fa116(void)

undefined4 FUN_1492fa116(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 in_R9;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0xffffffff00000000;
  uVar2 = FUN_1492fb7d2();
  if (local_28._4_4_ != -1) {
    iVar1 = (int)local_28 + -1;
    if ((int)local_28 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(in_R9,local_30,iVar1);
    if ((local_28._4_4_ != -1) && (local_30 != 0)) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fa1b2 FUN_1492fa1b2 body=444 status=ok
// SIG undefined FUN_1492fa1b2(void)

void FUN_1492fa1b2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  undefined4 local_4c;
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  local_4c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = &local_4c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492fa370(local_30,local_48,puVar2,plVar3);
  *param_3 = uVar1;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fa370 FUN_1492fa370 body=149 status=ok
// SIG undefined FUN_1492fa370(void)

undefined4 FUN_1492fa370(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 in_R9;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0xffffffff00000000;
  uVar2 = FUN_1492fb640();
  if (local_28._4_4_ != -1) {
    iVar1 = (int)local_28 + -1;
    if ((int)local_28 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(in_R9,local_30,iVar1);
    if ((local_28._4_4_ != -1) && (local_30 != 0)) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fa40c FUN_1492fa40c body=456 status=ok
// SIG undefined FUN_1492fa40c(void)

void FUN_1492fa40c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [7];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_68[4] = 0;
  local_68[5] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 4);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  plVar2 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492fa5d6(local_30,local_68 + 4,plVar2,plVar3);
  *param_3 = uVar1;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fa5d6 FUN_1492fa5d6 body=149 status=ok
// SIG undefined FUN_1492fa5d6(void)

undefined4 FUN_1492fa5d6(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 in_R9;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0xffffffff00000000;
  uVar2 = FUN_1492fbaf6();
  if (local_28._4_4_ != -1) {
    iVar1 = (int)local_28 + -1;
    if ((int)local_28 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(in_R9,local_30,iVar1);
    if ((local_28._4_4_ != -1) && (local_30 != 0)) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fa672 FUN_1492fa672 body=444 status=ok
// SIG undefined FUN_1492fa672(void)

void FUN_1492fa672(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  undefined4 local_4c;
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  local_4c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar2 = &local_4c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492fa830(local_30,local_48,puVar2,plVar3);
  *param_3 = uVar1;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fa830 FUN_1492fa830 body=149 status=ok
// SIG undefined FUN_1492fa830(void)

undefined4 FUN_1492fa830(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 in_R9;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0xffffffff00000000;
  uVar2 = FUN_1492fb964();
  if (local_28._4_4_ != -1) {
    iVar1 = (int)local_28 + -1;
    if ((int)local_28 == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(in_R9,local_30,iVar1);
    if ((local_28._4_4_ != -1) && (local_30 != 0)) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fa8c6 FUN_1492fa8c6 body=259 status=ok
// SIG undefined FUN_1492fa8c6(void)

void FUN_1492fa8c6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
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
  FUN_1492fa9ca(local_20,plVar1);
  FUN_149306a38(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fa9ca FUN_1492fa9ca body=104 status=ok
// SIG undefined FUN_1492fa9ca(void)

void FUN_1492fa9ca(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1492fbc88(&local_28,param_1);
  FUN_1492fbfb8(param_2,&local_28);
  FUN_149306a38(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492faa3a FUN_1492faa3a body=246 status=ok
// SIG undefined FUN_1492faa3a(void)

void FUN_1492faa3a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
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
  uVar1 = FUN_1492fab32(local_20,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fab32 FUN_1492fab32 body=308 status=ok
// SIG undefined FUN_1492fab32(void)

undefined8 FUN_1492fab32(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58 [2];
  undefined1 local_41;
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_41);
  uVar2 = 1;
  if (cVar1 == '\0') goto LAB_1492fab68;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_41);
  local_40 = *param_2;
  local_38 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_38 = 0;
  }
  FUN_1492fea36(local_58,&local_40,uVar3 & 0xffffffff,0);
  cVar1 = FUN_1492eff98(param_1,local_58);
  if (cVar1 == '\0') {
LAB_1492fabc7:
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    uVar2 = 0;
  }
  else {
    local_40 = *param_2;
    local_38 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_38 = 0;
    }
    FUN_1492fea36(local_68,&local_40,uVar3 & 0xffffffff,1);
    cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_68);
    if (cVar1 != '\0') {
      cVar1 = FUN_1492eff98(param_1,local_68);
      if (cVar1 == '\0') {
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        goto LAB_1492fabc7;
      }
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    uVar2 = 1;
  }
LAB_1492fab68:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fac6a FUN_1492fac6a body=351 status=ok
// SIG undefined FUN_1492fac6a(void)

uint FUN_1492fac6a(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  uVar2 = 0;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar3 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar3 & 0xffffffff,1);
    uVar2 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if ((char)uVar2 == '\0') {
      FUN_14108389e(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    uVar2 = uVar2 ^ 1;
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fadca FUN_1492fadca body=351 status=ok
// SIG undefined FUN_1492fadca(void)

uint FUN_1492fadca(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  uVar2 = 0;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar3 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar3 & 0xffffffff,1);
    uVar2 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if ((char)uVar2 == '\0') {
      FUN_1444baa80(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    uVar2 = uVar2 ^ 1;
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492faf2a FUN_1492faf2a body=351 status=ok
// SIG undefined FUN_1492faf2a(void)

uint FUN_1492faf2a(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  uVar2 = 0;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar3 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar3 & 0xffffffff,1);
    uVar2 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if ((char)uVar2 == '\0') {
      FUN_1444bab7e(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    uVar2 = uVar2 ^ 1;
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fb08a FUN_1492fb08a body=351 status=ok
// SIG undefined FUN_1492fb08a(void)

uint FUN_1492fb08a(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  uVar2 = 0;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar3 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar3 & 0xffffffff,1);
    uVar2 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if ((char)uVar2 == '\0') {
      FUN_1444ba982(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    uVar2 = uVar2 ^ 1;
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fb1ea FUN_1492fb1ea body=351 status=ok
// SIG undefined FUN_1492fb1ea(void)

uint FUN_1492fb1ea(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  uVar2 = 0;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar3 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar3 & 0xffffffff,1);
    uVar2 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if ((char)uVar2 == '\0') {
      FUN_1444bac7c(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    uVar2 = uVar2 ^ 1;
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fb34a FUN_1492fb34a body=261 status=ok
// SIG undefined FUN_1492fb34a(void)

ulonglong FUN_1492fb34a(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined1 *param_4
                       )

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68 [2];
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = *param_2;
  local_50 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_50 = 0;
  }
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  FUN_1492fea36(local_68,&local_58,1,param_3);
  local_58 = *param_2;
  local_50 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_50 = 0;
  }
  FUN_1492fea36(local_78,&local_58,0,param_3);
  *param_4 = 1;
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_68);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_78);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      *param_4 = 0;
    }
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fb450 FUN_1492fb450 body=93 status=ok
// SIG undefined FUN_1492fb450(void)

undefined8 FUN_1492fb450(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_18 = 0;
  }
  FUN_1492fea36(param_1,&local_20,param_3,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fb4ae FUN_1492fb4ae body=400 status=ok
// SIG undefined FUN_1492fb4ae(void)

undefined8 FUN_1492fb4ae(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60 [2];
  undefined1 local_49;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_49);
  if (cVar1 != '\0') {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_49);
    local_48 = *param_2;
    iVar2 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar2 = 0;
    }
    uStack_40 = CONCAT44(uStack_40._4_4_,iVar2);
    FUN_1492fea36(local_60,&local_48,uVar3 & 0xffffffff,0);
    cVar1 = FUN_149306a5e(param_1,local_60,param_3);
    uVar4 = 0;
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      local_48 = *param_2;
      iVar2 = (int)param_2[1] + -1;
      if ((int)param_2[1] == 0) {
        iVar2 = 0;
      }
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar2);
      uVar4 = 1;
      FUN_1492fea36(local_70,&local_48,uVar3 & 0xffffffff,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
      if (cVar1 != '\0') {
        local_48 = 0;
        uStack_40 = 0;
        cVar1 = FUN_149306b82(param_1,local_70,&local_48);
        if (cVar1 == '\0') {
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          uVar4 = 0;
        }
        else {
          if (&local_48 != param_4) {
            FUN_14034a368(param_4,&local_48);
          }
          if (local_48 != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fb640 FUN_1492fb640 body=400 status=ok
// SIG undefined FUN_1492fb640(void)

undefined8 FUN_1492fb640(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60 [2];
  undefined1 local_49;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_49);
  if (cVar1 != '\0') {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_49);
    local_48 = *param_2;
    iVar2 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar2 = 0;
    }
    uStack_40 = CONCAT44(uStack_40._4_4_,iVar2);
    FUN_1492fea36(local_60,&local_48,uVar3 & 0xffffffff,0);
    cVar1 = FUN_149306ca6(param_1,local_60,param_3);
    uVar4 = 0;
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      local_48 = *param_2;
      iVar2 = (int)param_2[1] + -1;
      if ((int)param_2[1] == 0) {
        iVar2 = 0;
      }
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar2);
      uVar4 = 1;
      FUN_1492fea36(local_70,&local_48,uVar3 & 0xffffffff,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
      if (cVar1 != '\0') {
        local_48 = 0;
        uStack_40 = 0;
        cVar1 = FUN_149306b82(param_1,local_70,&local_48);
        if (cVar1 == '\0') {
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          uVar4 = 0;
        }
        else {
          if (&local_48 != param_4) {
            FUN_14034a368(param_4,&local_48);
          }
          if (local_48 != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fb7d2 FUN_1492fb7d2 body=400 status=ok
// SIG undefined FUN_1492fb7d2(void)

undefined8 FUN_1492fb7d2(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60 [2];
  undefined1 local_49;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_49);
  if (cVar1 != '\0') {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_49);
    local_48 = *param_2;
    iVar2 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar2 = 0;
    }
    uStack_40 = CONCAT44(uStack_40._4_4_,iVar2);
    FUN_1492fea36(local_60,&local_48,uVar3 & 0xffffffff,0);
    cVar1 = FUN_149306dca(param_1,local_60,param_3);
    uVar4 = 0;
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      local_48 = *param_2;
      iVar2 = (int)param_2[1] + -1;
      if ((int)param_2[1] == 0) {
        iVar2 = 0;
      }
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar2);
      uVar4 = 1;
      FUN_1492fea36(local_70,&local_48,uVar3 & 0xffffffff,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
      if (cVar1 != '\0') {
        local_48 = 0;
        uStack_40 = 0;
        cVar1 = FUN_149306b82(param_1,local_70,&local_48);
        if (cVar1 == '\0') {
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          uVar4 = 0;
        }
        else {
          if (&local_48 != param_4) {
            FUN_14034a368(param_4,&local_48);
          }
          if (local_48 != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fb964 FUN_1492fb964 body=400 status=ok
// SIG undefined FUN_1492fb964(void)

undefined8 FUN_1492fb964(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60 [2];
  undefined1 local_49;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_49);
  if (cVar1 != '\0') {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_49);
    local_48 = *param_2;
    iVar2 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar2 = 0;
    }
    uStack_40 = CONCAT44(uStack_40._4_4_,iVar2);
    FUN_1492fea36(local_60,&local_48,uVar3 & 0xffffffff,0);
    cVar1 = FUN_149306eee(param_1,local_60,param_3);
    uVar4 = 0;
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      local_48 = *param_2;
      iVar2 = (int)param_2[1] + -1;
      if ((int)param_2[1] == 0) {
        iVar2 = 0;
      }
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar2);
      uVar4 = 1;
      FUN_1492fea36(local_70,&local_48,uVar3 & 0xffffffff,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
      if (cVar1 != '\0') {
        local_48 = 0;
        uStack_40 = 0;
        cVar1 = FUN_149306b82(param_1,local_70,&local_48);
        if (cVar1 == '\0') {
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          uVar4 = 0;
        }
        else {
          if (&local_48 != param_4) {
            FUN_14034a368(param_4,&local_48);
          }
          if (local_48 != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fbaf6 FUN_1492fbaf6 body=400 status=ok
// SIG undefined FUN_1492fbaf6(void)

undefined8 FUN_1492fbaf6(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 unaff_RBP;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60 [2];
  undefined1 local_49;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = 0;
  cVar1 = FUN_1492fb34a(param_1,param_2,0,&local_49);
  if (cVar1 != '\0') {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_49);
    local_48 = *param_2;
    iVar2 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar2 = 0;
    }
    uStack_40 = CONCAT44(uStack_40._4_4_,iVar2);
    FUN_1492fea36(local_60,&local_48,uVar3 & 0xffffffff,0);
    cVar1 = FUN_149306b82(param_1,local_60,param_3);
    uVar4 = 0;
    if (cVar1 != '\0') {
      if (*(int *)((longlong)param_4 + 0xc) != -1) {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = 0;
        param_4[1] = -0x100000000;
      }
      local_48 = *param_2;
      iVar2 = (int)param_2[1] + -1;
      if ((int)param_2[1] == 0) {
        iVar2 = 0;
      }
      uStack_40 = CONCAT44(uStack_40._4_4_,iVar2);
      uVar4 = 1;
      FUN_1492fea36(local_70,&local_48,uVar3 & 0xffffffff,1);
      cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
      if (cVar1 != '\0') {
        local_48 = 0;
        uStack_40 = 0;
        cVar1 = FUN_149306b82(param_1,local_70,&local_48);
        if (cVar1 == '\0') {
          if (local_48 != 0) {
            FUN_1400020a8();
          }
          uVar4 = 0;
        }
        else {
          if (&local_48 != param_4) {
            FUN_14034a368(param_4,&local_48);
          }
          if (local_48 != 0) {
            FUN_1400020a8();
          }
        }
      }
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fbc88 FUN_1492fbc88 body=751 status=ok
// SIG undefined FUN_1492fbc88(void)

undefined8 * FUN_1492fbc88(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_f8 [36];
  undefined4 local_d4;
  longlong local_d0;
  int local_c8;
  int local_c4;
  longlong *local_c0;
  undefined8 *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98 [2];
  longlong *local_88;
  ulonglong uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  local_c0 = param_2;
  FUN_1492f0b28(param_2[5]);
  uVar7 = 0;
  iVar10 = DAT_14cc0c3b0 - 1;
  if (DAT_14cc0c3b0 == 0) {
    iVar10 = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  local_b8 = param_1;
  if ((longlong)(int)uStack_80 != 0) {
    local_c4 = DAT_14cc0c3c0 + -1;
    if (DAT_14cc0c3c0 == 0) {
      local_c4 = 0;
    }
    iVar3 = DAT_14cc0c3a0 + -1;
    if (DAT_14cc0c3a0 == 0) {
      iVar3 = 0;
    }
    local_b0 = (longlong)iVar10;
    local_c4 = local_c4 + iVar3;
    lVar11 = (longlong)(int)uStack_80 << 4;
    local_a0 = (longlong)iVar3 * 2;
    plVar9 = local_88;
    local_c8 = iVar10;
    do {
      iVar10 = DAT_14cc0c3a0 + -1;
      if (DAT_14cc0c3a0 == 0) {
        iVar10 = 0;
      }
      puVar8 = &DAT_149dfb77a;
      if (DAT_14cc0c3a0 != 0) {
        puVar8 = DAT_14cc0c398;
      }
      cVar2 = FUN_144a791f8(plVar9,puVar8,iVar10,1);
      if (cVar2 != '\0') {
        iVar10 = DAT_14cc0c3c0 + -1;
        if (DAT_14cc0c3c0 == 0) {
          iVar10 = 0;
        }
        puVar8 = &DAT_149dfb77a;
        if (DAT_14cc0c3c0 != 0) {
          puVar8 = DAT_14cc0c3b8;
        }
        cVar2 = FUN_144a38768(plVar9,puVar8,iVar10,1);
        if (cVar2 != '\0') {
          iVar10 = (int)plVar9[1] + -1;
          if ((int)plVar9[1] == 0) {
            iVar10 = 0;
          }
          lVar13 = *plVar9 + local_a0;
          iVar10 = iVar10 - local_c4;
          iVar3 = DAT_14cc0c3b0 - 1;
          if (DAT_14cc0c3b0 == 0) {
            iVar3 = 0;
          }
          iVar6 = iVar10;
          if (iVar3 < iVar10) {
            iVar6 = iVar3;
          }
          iVar12 = 0;
          if (0 < iVar6) {
            iVar12 = iVar6;
          }
          if (iVar3 == iVar12) {
            if ((1 < DAT_14cc0c3b0) && (0 < iVar6)) {
              iVar3 = FUN_144a54874(DAT_14cc0c3a8,lVar13,iVar3);
              if (iVar3 != 0) goto LAB_1492fbe26;
            }
            local_d4 = (undefined4)CONCAT71((int7)((ulonglong)local_b0 >> 8),1);
            iVar3 = local_c8;
            local_d0 = lVar13 + local_b0 * 2;
          }
          else {
LAB_1492fbe26:
            iVar3 = 0;
            local_d4 = 0;
            local_d0 = lVar13;
          }
          lVar5 = FUN_1492fbf78(local_b8);
          plVar1 = local_c0;
          uVar4 = (**(code **)(*local_c0 + 0x2b8))(local_c0,plVar9);
          lVar13 = local_d0;
          *(undefined4 *)(lVar5 + 0x10) = uVar4;
          FUN_1402980a2(lVar5,local_d0,iVar10 - iVar3);
          *(char *)(lVar5 + 0x28) = (char)local_d4;
          local_78 = lVar13;
          uStack_70 = CONCAT44(uStack_70._4_4_,iVar10 - iVar3);
          local_a8 = lVar5;
          FUN_1492fea36(local_98,&local_78,local_d4,1);
          cVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1,local_98);
          if (cVar2 != '\0') {
            local_78 = 0;
            uStack_70 = 0;
            FUN_1492ef716(local_c0,local_98,&local_78);
            if (&local_78 != (longlong *)(local_a8 + 0x18)) {
              FUN_14034a368((longlong *)(local_a8 + 0x18),&local_78);
            }
            if (local_78 != 0) {
              FUN_1400020a8();
            }
          }
          if (local_98[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
      plVar9 = plVar9 + 2;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
    uVar7 = uStack_80 & 0xffffffff;
  }
  FUN_149307011(local_88,uVar7);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return local_b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fbf78 FUN_1492fbf78 body=63 status=ok
// SIG undefined FUN_1492fbf78(void)

longlong FUN_1492fbf78(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14930705a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_14930703c(lVar2);
  return lVar2;
}



// FUNCTION 1492fbfb8 FUN_1492fbfb8 body=80 status=ok
// SIG undefined FUN_1492fbfb8(void)

longlong * FUN_1492fbfb8(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_149306a38(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1492fc008 FUN_1492fc008 body=117 status=ok
// SIG undefined FUN_1492fc008(void)

void FUN_1492fc008(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444be324(local_30,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fc07e FUN_1492fc07e body=350 status=ok
// SIG undefined FUN_1492fc07e(void)

void FUN_1492fc07e(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar2 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar2 & 0xffffffff,1);
    cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if (cVar1 == '\0') {
      FUN_1444bf1c6(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fc1de FUN_1492fc1de body=117 status=ok
// SIG undefined FUN_1492fc1de(void)

void FUN_1492fc1de(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444bef94(local_30,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fc254 FUN_1492fc254 body=350 status=ok
// SIG undefined FUN_1492fc254(void)

void FUN_1492fc254(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar2 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar2 & 0xffffffff,1);
    cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if (cVar1 == '\0') {
      FUN_1444bf4f2(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fc3b4 FUN_1492fc3b4 body=117 status=ok
// SIG undefined FUN_1492fc3b4(void)

void FUN_1492fc3b4(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444bf2c0(local_30,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fc42a FUN_1492fc42a body=117 status=ok
// SIG undefined FUN_1492fc42a(void)

void FUN_1492fc42a(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444bd3c6(local_30,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fc4a0 FUN_1492fc4a0 body=350 status=ok
// SIG undefined FUN_1492fc4a0(void)

void FUN_1492fc4a0(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar2 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar2 & 0xffffffff,1);
    cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if (cVar1 == '\0') {
      FUN_1444bf81e(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fc600 FUN_1492fc600 body=117 status=ok
// SIG undefined FUN_1492fc600(void)

void FUN_1492fc600(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444bf5ec(local_30,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fc676 FUN_1492fc676 body=350 status=ok
// SIG undefined FUN_1492fc676(void)

void FUN_1492fc676(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar2 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar2 & 0xffffffff,1);
    cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if (cVar1 == '\0') {
      FUN_1410837a0(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fc7d6 FUN_1492fc7d6 body=117 status=ok
// SIG undefined FUN_1492fc7d6(void)

void FUN_1492fc7d6(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444be556(local_30,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fc84c FUN_1492fc84c body=350 status=ok
// SIG undefined FUN_1492fc84c(void)

void FUN_1492fc84c(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar2 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar2 & 0xffffffff,1);
    cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if (cVar1 == '\0') {
      FUN_1444bfb4a(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fc9ac FUN_1492fc9ac body=117 status=ok
// SIG undefined FUN_1492fc9ac(void)

void FUN_1492fc9ac(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444bf918(local_30,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fca22 FUN_1492fca22 body=350 status=ok
// SIG undefined FUN_1492fca22(void)

void FUN_1492fca22(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar2 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar2 & 0xffffffff,1);
    cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if (cVar1 == '\0') {
      FUN_1444bfe76(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fcb82 FUN_1492fcb82 body=117 status=ok
// SIG undefined FUN_1492fcb82(void)

void FUN_1492fcb82(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444bfc44(local_30,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fcbf8 FUN_1492fcbf8 body=350 status=ok
// SIG undefined FUN_1492fcbf8(void)

void FUN_1492fcbf8(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar2 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar2 & 0xffffffff,1);
    cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if (cVar1 == '\0') {
      FUN_1444c01a2(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fcd58 FUN_1492fcd58 body=117 status=ok
// SIG undefined FUN_1492fcd58(void)

void FUN_1492fcd58(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444bff70(local_30,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fcdce FUN_1492fcdce body=117 status=ok
// SIG undefined FUN_1492fcdce(void)

void FUN_1492fcdce(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444bd5f8(local_30,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fce44 FUN_1492fce44 body=350 status=ok
// SIG undefined FUN_1492fce44(void)

void FUN_1492fce44(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar2 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar2 & 0xffffffff,1);
    cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if (cVar1 == '\0') {
      FUN_1444c04ce(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fcfa4 FUN_1492fcfa4 body=133 status=ok
// SIG undefined FUN_1492fcfa4(void)

undefined2 * FUN_1492fcfa4(longlong param_1,undefined2 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48,param_3);
  FUN_1444c029c(local_38,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fd02a FUN_1492fd02a body=350 status=ok
// SIG undefined FUN_1492fd02a(void)

void FUN_1492fd02a(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar2 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar2 & 0xffffffff,1);
    cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if (cVar1 == '\0') {
      FUN_1444baf72(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fd18a FUN_1492fd18a body=135 status=ok
// SIG undefined FUN_1492fd18a(void)

undefined8 * FUN_1492fd18a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48,param_3);
  FUN_1444bdec0(local_38,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fd212 FUN_1492fd212 body=350 status=ok
// SIG undefined FUN_1492fd212(void)

void FUN_1492fd212(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar2 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar2 & 0xffffffff,1);
    cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if (cVar1 == '\0') {
      FUN_1444c07fa(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fd372 FUN_1492fd372 body=142 status=ok
// SIG undefined FUN_1492fd372(void)

undefined8 * FUN_1492fd372(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48,param_3);
  FUN_1444c05c8(local_38,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fd402 FUN_1492fd402 body=350 status=ok
// SIG undefined FUN_1492fd402(void)

void FUN_1492fd402(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar2 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar2 & 0xffffffff,1);
    cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if (cVar1 == '\0') {
      FUN_1444c0b26(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fd562 FUN_1492fd562 body=138 status=ok
// SIG undefined FUN_1492fd562(void)

undefined8 * FUN_1492fd562(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0x3f80000000000000;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48,param_3);
  FUN_1444c08f4(local_38,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fd5ee FUN_1492fd5ee body=117 status=ok
// SIG undefined FUN_1492fd5ee(void)

void FUN_1492fd5ee(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444bd82a(local_30,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fd664 FUN_1492fd664 body=350 status=ok
// SIG undefined FUN_1492fd664(void)

void FUN_1492fd664(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar2 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar2 & 0xffffffff,1);
    cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if (cVar1 == '\0') {
      FUN_1444c0e52(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fd7c4 FUN_1492fd7c4 body=131 status=ok
// SIG undefined FUN_1492fd7c4(void)

undefined8 * FUN_1492fd7c4(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48,param_3);
  FUN_1444c0c20(local_38,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fd848 FUN_1492fd848 body=350 status=ok
// SIG undefined FUN_1492fd848(void)

void FUN_1492fd848(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar2 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar2 & 0xffffffff,1);
    cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if (cVar1 == '\0') {
      FUN_1444c117e(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fd9a8 FUN_1492fd9a8 body=139 status=ok
// SIG undefined FUN_1492fd9a8(void)

undefined8 * FUN_1492fd9a8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48,param_3);
  FUN_1444c0f4c(local_38,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fda34 FUN_1492fda34 body=350 status=ok
// SIG undefined FUN_1492fda34(void)

void FUN_1492fda34(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  char cVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  longlong local_98;
  undefined1 local_88 [8];
  longlong local_80;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = *param_2;
  local_48 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_48 = 0;
  }
  FUN_1492fea36(local_60,&local_50,uVar2 & 0xffffffff,0);
  cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_60);
  if (cVar1 == '\0') {
    local_50 = *param_2;
    local_48 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1492fea36(local_70,&local_50,uVar2 & 0xffffffff,1);
    cVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,local_70);
    if (cVar1 == '\0') {
      FUN_1444c14ae(param_1,local_88,local_60,param_3);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_4 + 0xc) != -1) {
        FUN_1444bac7c(param_1,local_a0,local_70,param_4);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fdb94 FUN_1492fdb94 body=153 status=ok
// SIG undefined FUN_1492fdb94(void)

undefined8 * FUN_1492fdb94(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x3ff0000000000000;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48,param_3);
  FUN_1444c127c(local_38,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fdc2e FUN_1492fdc2e body=131 status=ok
// SIG undefined FUN_1492fdc2e(void)

undefined8 * FUN_1492fdc2e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48,param_3);
  FUN_1444be0f2(local_38,local_48,*(undefined8 *)(param_1 + 0x28));
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fdcb2 FUN_1492fdcb2 body=690 status=ok
// SIG undefined FUN_1492fdcb2(void)

void FUN_1492fdcb2(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  local_48 = param_3;
  plVar3 = (longlong *)FUN_149308cea(param_1 + 0x80,uVar4 >> 0x10 ^ uVar4,&local_48);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_70;
  pvVar2 = (void *)*param_2;
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar2,lVar5 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  FUN_1493092f4(local_58,&local_78);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_14930926e(plVar3,iVar1);
  }
  lVar5 = *plVar3;
  lVar6 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar5 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = local_50;
  local_50 = 0;
  FUN_1449db362();
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  plVar3 = (longlong *)FUN_149308cea(param_1 + 0xd0,uVar4 >> 0x10 ^ uVar4);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_70;
  pvVar2 = (void *)*param_2;
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar2,lVar5 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  FUN_1493096a2(local_58,&local_78);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_14930926e(plVar3,iVar1);
  }
  lVar5 = *plVar3;
  lVar6 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar5 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = local_50;
  local_50 = 0;
  FUN_1449db362();
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fdf66 FUN_1492fdf66 body=690 status=ok
// SIG undefined FUN_1492fdf66(void)

void FUN_1492fdf66(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  local_48 = param_3;
  plVar3 = (longlong *)FUN_149308cea(param_1 + 0x80,uVar4 >> 0x10 ^ uVar4,&local_48);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_70;
  pvVar2 = (void *)*param_2;
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar2,lVar5 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  FUN_149309eca(local_58,&local_78);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_14930926e(plVar3,iVar1);
  }
  lVar5 = *plVar3;
  lVar6 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar5 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = local_50;
  local_50 = 0;
  FUN_1449db362();
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  plVar3 = (longlong *)FUN_149308cea(param_1 + 0xd0,uVar4 >> 0x10 ^ uVar4);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_70;
  pvVar2 = (void *)*param_2;
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar2,lVar5 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  FUN_14930a20c(local_58,&local_78);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_14930926e(plVar3,iVar1);
  }
  lVar5 = *plVar3;
  lVar6 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar5 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = local_50;
  local_50 = 0;
  FUN_1449db362();
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fe21a FUN_1492fe21a body=690 status=ok
// SIG undefined FUN_1492fe21a(void)

void FUN_1492fe21a(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  local_48 = param_3;
  plVar3 = (longlong *)FUN_149308cea(param_1 + 0x80,uVar4 >> 0x10 ^ uVar4,&local_48);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_70;
  pvVar2 = (void *)*param_2;
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar2,lVar5 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  FUN_14930a852(local_58,&local_78);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_14930926e(plVar3,iVar1);
  }
  lVar5 = *plVar3;
  lVar6 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar5 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = local_50;
  local_50 = 0;
  FUN_1449db362();
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  plVar3 = (longlong *)FUN_149308cea(param_1 + 0xd0,uVar4 >> 0x10 ^ uVar4);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_70;
  pvVar2 = (void *)*param_2;
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar2,lVar5 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  FUN_14930acb8(local_58,&local_78);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_14930926e(plVar3,iVar1);
  }
  lVar5 = *plVar3;
  lVar6 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar5 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = local_50;
  local_50 = 0;
  FUN_1449db362();
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fe4ce FUN_1492fe4ce body=690 status=ok
// SIG undefined FUN_1492fe4ce(void)

void FUN_1492fe4ce(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  local_48 = param_3;
  plVar3 = (longlong *)FUN_149308cea(param_1 + 0x80,uVar4 >> 0x10 ^ uVar4,&local_48);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_70;
  pvVar2 = (void *)*param_2;
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar2,lVar5 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  FUN_14930b6d4(local_58,&local_78);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_14930926e(plVar3,iVar1);
  }
  lVar5 = *plVar3;
  lVar6 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar5 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = local_50;
  local_50 = 0;
  FUN_1449db362();
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  plVar3 = (longlong *)FUN_149308cea(param_1 + 0xd0,uVar4 >> 0x10 ^ uVar4);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_70;
  pvVar2 = (void *)*param_2;
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar2,lVar5 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  FUN_14930ba1a(local_58,&local_78);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_14930926e(plVar3,iVar1);
  }
  lVar5 = *plVar3;
  lVar6 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar5 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = local_50;
  local_50 = 0;
  FUN_1449db362();
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fe782 FUN_1492fe782 body=690 status=ok
// SIG undefined FUN_1492fe782(void)

void FUN_1492fe782(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  local_48 = param_3;
  plVar3 = (longlong *)FUN_149308cea(param_1 + 0x80,uVar4 >> 0x10 ^ uVar4,&local_48);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_70;
  pvVar2 = (void *)*param_2;
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar2,lVar5 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  FUN_14930cdfc(local_58,&local_78);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_14930926e(plVar3,iVar1);
  }
  lVar5 = *plVar3;
  lVar6 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar5 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = local_50;
  local_50 = 0;
  FUN_1449db362();
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  plVar3 = (longlong *)FUN_149308cea(param_1 + 0xd0,uVar4 >> 0x10 ^ uVar4);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_70;
  pvVar2 = (void *)*param_2;
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar2,lVar5 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  FUN_14930d22a(local_58,&local_78);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_14930926e(plVar3,iVar1);
  }
  lVar5 = *plVar3;
  lVar6 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar5 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = local_50;
  local_50 = 0;
  FUN_1449db362();
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492fea36 FUN_1492fea36 body=299 status=ok
// SIG undefined FUN_1492fea36(void)

undefined8 * FUN_1492fea36(undefined8 *param_1,undefined8 *param_2,char param_3,char param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 *local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &DAT_14c8731a0;
  local_48 = &DAT_14c8731a0;
  local_40 = &DAT_14c8731a2;
  local_38 = '\0';
  iVar4 = 0;
  iVar3 = DAT_14cc0c3a0 + -1;
  if (DAT_14cc0c3a0 == 0) {
    iVar3 = iVar4;
  }
  FUN_1449668a2(&local_50,DAT_14cc0c398,iVar3);
  if (param_3 != '\0') {
    iVar3 = DAT_14cc0c3b0 + -1;
    if (DAT_14cc0c3b0 == 0) {
      iVar3 = iVar4;
    }
    FUN_1449668a2(&local_50,DAT_14cc0c3a8,iVar3);
  }
  FUN_1449668a2(&local_50,*param_2,*(undefined4 *)(param_2 + 1));
  puVar1 = &DAT_14cc0c3b8;
  if (param_4 != '\0') {
    puVar1 = &DAT_14cc0c3c8;
  }
  piVar2 = &DAT_14cc0c3c0;
  if (param_4 != '\0') {
    piVar2 = &DAT_14cc0c3d0;
  }
  iVar3 = *piVar2 + -1;
  if (*piVar2 == 0) {
    iVar3 = iVar4;
  }
  FUN_1449668a2(&local_50,*puVar1,iVar3);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1402980a2(param_1,local_50,(ulonglong)((longlong)local_48 - (longlong)local_50) >> 1);
  if (local_38 == '\x01') {
    FUN_1400020a8(local_50);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492feb62 FUN_1492feb62 body=90 status=ok
// SIG undefined FUN_1492feb62(void)

undefined8 FUN_1492feb62(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_18 = 0;
  }
  FUN_1492fea36(param_1,&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492febbd FUN_1492febbd body=49 status=ok
// SIG undefined FUN_1492febbd(void)

undefined8 * FUN_1492febbd(undefined8 *param_1,uint param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 < 0x3a) {
    FUN_14020fad6(param_1,(&PTR_DAT_14bc2fe78)[param_2]);
  }
  return param_1;
}



// FUNCTION 1492febee FUN_1492febee body=2557 status=ok
// SIG undefined FUN_1492febee(void)

void FUN_1492febee(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong **pplVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong *plVar24;
  int iVar25;
  int iVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong *plVar29;
  longlong lVar30;
  longlong lVar31;
  longlong *plVar33;
  longlong lVar34;
  bool bVar35;
  float fVar36;
  undefined1 auStack_3c8 [40];
  longlong local_3a0;
  longlong *local_398;
  longlong *local_390;
  longlong *local_388;
  undefined8 local_380;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 local_370;
  ulonglong uStack_368;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  longlong lVar32;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  if ((10 < (ulonglong)param_1[0xd]) &&
     ((float)param_1[0xb] * *(float *)(param_1 + 0xe) <= (float)(ulonglong)param_1[0xd])) {
    if (*(int *)((longlong)param_1 + 0x34) < (int)param_1[1]) {
      FUN_14930e814(param_1);
      uVar17 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
      if (1 < (int)uVar17) {
        plVar23 = (longlong *)*param_1;
        memset(&uStack_378,0,0x2f0);
        local_380 = plVar23 + (ulonglong)uVar17 * 8 + -8;
        local_388 = plVar23;
        fVar36 = logf((float)(int)uVar17);
        uStack_378 = (int)(longlong)(fVar36 + fVar36);
        pplVar13 = &local_388;
        do {
          plVar14 = *pplVar13;
          plVar21 = pplVar13[1];
          iVar25 = *(int *)(pplVar13 + 2);
          iVar15 = (int)((ulonglong)((longlong)plVar21 - (longlong)plVar14) >> 6);
          uVar17 = iVar15 + 1;
          plVar16 = plVar14;
          plVar20 = plVar14;
          plVar23 = plVar21;
          if (iVar25 != 0) {
LAB_1492feee9:
            if (8 < (int)uVar17) {
              uVar22 = (ulonglong)(uVar17 >> 1);
              lVar28 = plVar20[uVar22 * 8];
              lVar2 = (plVar20 + uVar22 * 8)[1];
              lVar19 = plVar20[uVar22 * 8 + 2];
              lVar30 = (plVar20 + uVar22 * 8 + 2)[1];
              lVar31 = plVar20[uVar22 * 8 + 4];
              lVar32 = (plVar20 + uVar22 * 8 + 4)[1];
              lVar12 = plVar20[uVar22 * 8 + 6];
              lVar34 = (plVar20 + uVar22 * 8 + 6)[1];
              lVar3 = *plVar20;
              lVar4 = plVar20[1];
              lVar5 = plVar20[2];
              lVar6 = plVar20[3];
              lVar7 = plVar20[4];
              lVar8 = plVar20[5];
              lVar9 = plVar20[7];
              plVar20[uVar22 * 8 + 6] = plVar20[6];
              (plVar20 + uVar22 * 8 + 6)[1] = lVar9;
              plVar20[uVar22 * 8 + 4] = lVar7;
              (plVar20 + uVar22 * 8 + 4)[1] = lVar8;
              plVar20[uVar22 * 8 + 2] = lVar5;
              (plVar20 + uVar22 * 8 + 2)[1] = lVar6;
              plVar20[uVar22 * 8] = lVar3;
              (plVar20 + uVar22 * 8)[1] = lVar4;
              plVar20[6] = lVar12;
              plVar20[7] = lVar34;
              plVar20[4] = lVar31;
              plVar20[5] = lVar32;
              plVar20[2] = lVar19;
              plVar20[3] = lVar30;
              *plVar20 = lVar28;
              plVar20[1] = lVar2;
              plVar27 = plVar23 + 8;
              plVar14 = plVar20;
              do {
                plVar11 = plVar14 + 8;
                plVar24 = plVar14 + 8;
                do {
                  plVar14 = plVar24;
                  plVar33 = plVar11;
                  if (plVar23 < plVar14) break;
                  plVar11 = plVar33 + 8;
                  plVar24 = plVar14 + 8;
                } while ((ulonglong)plVar14[2] <= (ulonglong)plVar20[2]);
                plVar11 = plVar27 + -0x10;
                do {
                  plVar24 = plVar27;
                  plVar29 = plVar11;
                  plVar27 = plVar24 + -8;
                  if (plVar27 <= plVar20) break;
                  plVar11 = plVar29 + -8;
                } while ((ulonglong)plVar20[2] <= (ulonglong)plVar24[-6]);
                if (plVar27 < plVar14) goto LAB_1492ff076;
                lVar28 = *plVar14;
                lVar2 = plVar14[1];
                lVar19 = plVar14[2];
                lVar30 = plVar14[3];
                lVar31 = plVar14[4];
                lVar32 = plVar14[5];
                lVar12 = plVar14[6];
                lVar34 = plVar14[7];
                lVar3 = *plVar27;
                lVar4 = plVar24[-7];
                lVar5 = plVar24[-6];
                lVar6 = plVar24[-5];
                lVar7 = plVar24[-4];
                lVar8 = plVar24[-3];
                lVar9 = plVar24[-1];
                plVar14[6] = plVar24[-2];
                plVar14[7] = lVar9;
                plVar14[4] = lVar7;
                plVar14[5] = lVar8;
                plVar14[2] = lVar5;
                plVar14[3] = lVar6;
                *plVar14 = lVar3;
                plVar14[1] = lVar4;
                plVar24[-2] = lVar12;
                plVar24[-1] = lVar34;
                plVar24[-4] = lVar31;
                plVar24[-3] = lVar32;
                plVar24[-6] = lVar19;
                plVar24[-5] = lVar30;
                *plVar27 = lVar28;
                plVar24[-7] = lVar2;
              } while( true );
            }
            for (; plVar21 = plVar20, plVar14 = plVar20, plVar20 < plVar23; plVar23 = plVar23 + -8)
            {
              while (plVar16 = plVar21, plVar14 = plVar14 + 8, plVar14 <= plVar23) {
                plVar21 = plVar14;
                if ((ulonglong)plVar14[2] <= (ulonglong)plVar16[2]) {
                  plVar21 = plVar16;
                }
              }
              local_88 = (longlong *)*plVar16;
              uStack_80 = (longlong *)plVar16[1];
              local_78 = plVar16[2];
              uStack_70 = plVar16[3];
              local_68 = plVar16[4];
              lStack_60 = plVar16[5];
              local_58 = plVar16[6];
              lStack_50 = plVar16[7];
              plVar14 = local_88;
              plVar21 = uStack_80;
              lVar28 = *plVar23;
              lVar2 = plVar23[1];
              lVar19 = plVar23[2];
              lVar30 = plVar23[3];
              lVar31 = plVar23[4];
              lVar32 = plVar23[5];
              lVar12 = plVar23[7];
              plVar16[6] = plVar23[6];
              plVar16[7] = lVar12;
              plVar16[4] = lVar31;
              plVar16[5] = lVar32;
              plVar16[2] = lVar19;
              plVar16[3] = lVar30;
              *plVar16 = lVar28;
              plVar16[1] = lVar2;
              local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
              uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
              plVar23[6] = local_58;
              plVar23[7] = lStack_50;
              plVar23[4] = local_68;
              plVar23[5] = lStack_60;
              plVar23[2] = local_78;
              plVar23[3] = uStack_70;
              *(undefined4 *)plVar23 = (undefined4)local_88;
              *(undefined4 *)((longlong)plVar23 + 4) = local_88._4_4_;
              *(undefined4 *)(plVar23 + 1) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)plVar23 + 0xc) = uStack_80._4_4_;
              local_88 = plVar14;
              uStack_80 = plVar21;
            }
            goto LAB_1492ff5da;
          }
LAB_1492ff18c:
          if (uVar17 != 0) {
            iVar25 = (iVar15 - (iVar15 + -1 >> 0x1f)) + -1 >> 1;
            iVar15 = iVar25;
joined_r0x0001492ff1b3:
            do {
              iVar26 = iVar25 * 2 + 1;
              if (iVar26 < (int)uVar17) {
                iVar18 = iVar25 * 2 + 2;
                if ((iVar18 < (int)uVar17) &&
                   ((ulonglong)plVar14[(longlong)iVar26 * 8 + 2] <=
                    (ulonglong)plVar14[(longlong)iVar18 * 8 + 2])) {
                  iVar26 = iVar18;
                }
                if ((ulonglong)plVar14[(longlong)iVar25 * 8 + 2] <
                    (ulonglong)plVar14[(longlong)iVar26 * 8 + 2]) {
                  plVar16 = plVar14 + (longlong)iVar25 * 8;
                  plVar20 = plVar14 + (longlong)iVar26 * 8;
                  local_88 = (longlong *)*plVar16;
                  uStack_80 = (longlong *)plVar16[1];
                  local_78 = plVar16[2];
                  uStack_70 = plVar16[3];
                  local_68 = plVar16[4];
                  lStack_60 = plVar16[5];
                  local_58 = plVar16[6];
                  lStack_50 = plVar16[7];
                  plVar23 = local_88;
                  plVar21 = uStack_80;
                  lVar28 = *plVar20;
                  lVar2 = plVar20[1];
                  lVar19 = plVar20[2];
                  lVar30 = plVar20[3];
                  lVar31 = plVar20[4];
                  lVar32 = plVar20[5];
                  lVar12 = plVar20[7];
                  plVar16[6] = plVar20[6];
                  plVar16[7] = lVar12;
                  plVar16[4] = lVar31;
                  plVar16[5] = lVar32;
                  plVar16[2] = lVar19;
                  plVar16[3] = lVar30;
                  *plVar16 = lVar28;
                  plVar16[1] = lVar2;
                  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                  plVar20[6] = local_58;
                  plVar20[7] = lStack_50;
                  plVar20[4] = local_68;
                  plVar20[5] = lStack_60;
                  plVar20[2] = local_78;
                  plVar20[3] = uStack_70;
                  *(undefined4 *)plVar20 = (undefined4)local_88;
                  *(undefined4 *)((longlong)plVar20 + 4) = local_88._4_4_;
                  *(undefined4 *)(plVar20 + 1) = (undefined4)uStack_80;
                  *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_80._4_4_;
                  iVar25 = iVar26;
                  local_88 = plVar23;
                  uStack_80 = plVar21;
                  goto joined_r0x0001492ff1b3;
                }
              }
              bVar35 = iVar15 != 0;
              iVar25 = iVar15 + -1;
              iVar15 = iVar25;
            } while (bVar35);
            if (1 < (int)uVar17) {
              uVar22 = (ulonglong)uVar17 - 1;
              local_88 = (longlong *)*plVar14;
              uStack_80 = (longlong *)plVar14[1];
              local_78 = plVar14[2];
              uStack_70 = plVar14[3];
              local_68 = plVar14[4];
              lStack_60 = plVar14[5];
              local_58 = plVar14[6];
              lStack_50 = plVar14[7];
              plVar21 = local_88;
              plVar16 = uStack_80;
              lVar28 = plVar14[uVar22 * 8];
              lVar2 = (plVar14 + uVar22 * 8)[1];
              lVar19 = plVar14[uVar22 * 8 + 2];
              lVar30 = (plVar14 + uVar22 * 8 + 2)[1];
              lVar31 = plVar14[uVar22 * 8 + 4];
              lVar32 = (plVar14 + uVar22 * 8 + 4)[1];
              lVar12 = (plVar14 + uVar22 * 8 + 6)[1];
              plVar14[6] = plVar14[uVar22 * 8 + 6];
              plVar14[7] = lVar12;
              plVar14[4] = lVar31;
              plVar14[5] = lVar32;
              plVar14[2] = lVar19;
              plVar14[3] = lVar30;
              *plVar14 = lVar28;
              plVar14[1] = lVar2;
              local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
              uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
              plVar14[uVar22 * 8 + 6] = local_58;
              (plVar14 + uVar22 * 8 + 6)[1] = lStack_50;
              plVar14[uVar22 * 8 + 4] = local_68;
              (plVar14 + uVar22 * 8 + 4)[1] = lStack_60;
              plVar14[uVar22 * 8 + 2] = local_78;
              (plVar14 + uVar22 * 8 + 2)[1] = uStack_70;
              plVar23 = plVar14 + uVar22 * 8;
              *(undefined4 *)plVar23 = (undefined4)local_88;
              *(undefined4 *)((longlong)plVar23 + 4) = local_88._4_4_;
              *(undefined4 *)(plVar23 + 1) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)plVar23 + 0xc) = uStack_80._4_4_;
              local_88 = plVar21;
              uStack_80 = plVar16;
              if (uVar17 != 2) {
                do {
                  iVar25 = 0;
                  iVar26 = 1;
                  iVar15 = 0;
                  do {
                    iVar25 = iVar25 + 2;
                    iVar18 = iVar26;
                    if (((longlong)iVar25 < (longlong)uVar22) &&
                       ((ulonglong)plVar14[(longlong)iVar26 * 8 + 2] <=
                        (ulonglong)plVar14[(longlong)iVar25 * 8 + 2])) {
                      iVar18 = iVar25;
                    }
                    if ((ulonglong)plVar14[(longlong)iVar18 * 8 + 2] <=
                        (ulonglong)plVar14[(longlong)iVar15 * 8 + 2]) break;
                    plVar21 = plVar14 + (longlong)iVar15 * 8;
                    plVar23 = plVar14 + (longlong)iVar18 * 8;
                    lVar28 = *plVar21;
                    lVar2 = plVar21[1];
                    lVar19 = plVar21[2];
                    lVar30 = plVar21[3];
                    lVar31 = plVar21[4];
                    lVar32 = plVar21[5];
                    lVar12 = plVar21[6];
                    lVar34 = plVar21[7];
                    lVar3 = *plVar23;
                    lVar4 = plVar23[1];
                    lVar5 = plVar23[2];
                    lVar6 = plVar23[3];
                    lVar7 = plVar23[4];
                    lVar8 = plVar23[5];
                    lVar9 = plVar23[7];
                    plVar21[6] = plVar23[6];
                    plVar21[7] = lVar9;
                    plVar21[4] = lVar7;
                    plVar21[5] = lVar8;
                    plVar21[2] = lVar5;
                    plVar21[3] = lVar6;
                    *plVar21 = lVar3;
                    plVar21[1] = lVar4;
                    plVar23[6] = lVar12;
                    plVar23[7] = lVar34;
                    plVar23[4] = lVar31;
                    plVar23[5] = lVar32;
                    plVar23[2] = lVar19;
                    plVar23[3] = lVar30;
                    *plVar23 = lVar28;
                    plVar23[1] = lVar2;
                    iVar25 = iVar18 * 2;
                    iVar26 = iVar18 * 2 + 1;
                    iVar15 = iVar18;
                  } while ((longlong)iVar26 < (longlong)uVar22);
                  uVar1 = uVar22 - 1;
                  local_88 = (longlong *)*plVar14;
                  uStack_80 = (longlong *)plVar14[1];
                  local_78 = plVar14[2];
                  uStack_70 = plVar14[3];
                  local_68 = plVar14[4];
                  lStack_60 = plVar14[5];
                  local_58 = plVar14[6];
                  lStack_50 = plVar14[7];
                  plVar21 = local_88;
                  plVar16 = uStack_80;
                  lVar28 = plVar14[uVar1 * 8];
                  lVar2 = (plVar14 + uVar1 * 8)[1];
                  lVar19 = plVar14[uVar1 * 8 + 2];
                  lVar30 = (plVar14 + uVar1 * 8 + 2)[1];
                  lVar31 = plVar14[uVar1 * 8 + 4];
                  lVar32 = (plVar14 + uVar1 * 8 + 4)[1];
                  lVar12 = (plVar14 + uVar1 * 8 + 6)[1];
                  plVar14[6] = plVar14[uVar1 * 8 + 6];
                  plVar14[7] = lVar12;
                  plVar14[4] = lVar31;
                  plVar14[5] = lVar32;
                  plVar14[2] = lVar19;
                  plVar14[3] = lVar30;
                  *plVar14 = lVar28;
                  plVar14[1] = lVar2;
                  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
                  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
                  plVar14[uVar1 * 8 + 6] = local_58;
                  (plVar14 + uVar1 * 8 + 6)[1] = lStack_50;
                  plVar14[uVar1 * 8 + 4] = local_68;
                  (plVar14 + uVar1 * 8 + 4)[1] = lStack_60;
                  plVar14[uVar1 * 8 + 2] = local_78;
                  (plVar14 + uVar1 * 8 + 2)[1] = uStack_70;
                  plVar23 = plVar14 + uVar1 * 8;
                  *(undefined4 *)plVar23 = (undefined4)local_88;
                  *(undefined4 *)((longlong)plVar23 + 4) = local_88._4_4_;
                  *(undefined4 *)(plVar23 + 1) = (undefined4)uStack_80;
                  *(undefined4 *)((longlong)plVar23 + 0xc) = uStack_80._4_4_;
                  bVar35 = 2 < uVar22;
                  uVar22 = uVar1;
                  local_88 = plVar21;
                  uStack_80 = plVar16;
                } while (bVar35);
              }
            }
          }
LAB_1492ff5da:
          pplVar13 = pplVar13 + -3;
        } while (&local_388 <= pplVar13);
      }
    }
    FUN_140c569d0(param_1);
    lVar28 = param_1[1];
    iVar25 = *(int *)((longlong)param_1 + 0x34);
    local_3a0 = param_1[10];
    local_398 = param_1 + 2;
    local_88 = (longlong *)&DAT_100000000;
    local_78 = 0xffffffff;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    uStack_80 = local_398;
    if ((int)param_1[5] == 0) {
      iVar15 = 0;
    }
    else {
      FUN_1449c0562(&local_88);
      iVar15 = (int)param_1[5];
    }
    local_370 = local_78;
    lVar2 = local_370;
    uStack_368 = uStack_70;
    local_380 = local_88;
    uStack_378 = (undefined4)uStack_80;
    uStack_374 = uStack_80._4_4_;
    local_370._4_4_ = (int)((ulonglong)local_78 >> 0x20);
    local_388 = param_1;
    if ((local_370._4_4_ != iVar15) || (uStack_80 != local_398)) {
      local_390 = param_1 + 10;
      lVar30 = ~(longlong)iVar25 + (longlong)(int)lVar28;
      lVar19 = 0;
      bVar35 = false;
      lVar31 = 0;
      lVar28 = 0;
      iVar25 = local_370._4_4_;
      local_370 = lVar2;
      do {
        lVar2 = *local_388 + (longlong)iVar25 * 0x40;
        lVar32 = *(longlong *)(*local_388 + 0x10 + (longlong)iVar25 * 0x40);
        if (lVar32 == lVar19) {
          lVar19 = lVar19 + *(longlong *)(lVar2 + 0x18);
          lVar34 = lVar28;
        }
        else {
          lVar12 = lVar19;
          lVar34 = lVar32;
          if (bVar35) {
            if (lVar32 == lVar31) {
              lVar12 = (lVar19 - lVar28) + lVar31;
              lVar32 = lVar31;
              lVar34 = lVar28;
            }
            else {
              memmove((void *)(local_3a0 + lVar19),(void *)(lVar28 + local_3a0),lVar31 - lVar28);
              lVar19 = (lVar31 - lVar28) + lVar19;
              lVar32 = *(longlong *)(lVar2 + 0x10);
              lVar12 = lVar19;
              lVar34 = lVar32;
            }
          }
          lVar31 = lVar32 + *(longlong *)(lVar2 + 0x18);
          *(longlong *)(lVar2 + 0x10) = lVar12;
          bVar35 = true;
          if (lVar30 == 0) {
            memmove((void *)(local_3a0 + lVar19),(void *)(local_3a0 + lVar34),lVar31 - lVar34);
            lVar28 = (lVar31 - lVar34) + lVar19;
            if (param_1[0xb] != lVar28) {
              param_1[0xb] = lVar28;
              FUN_1467af034(local_390);
            }
          }
        }
        local_370 = CONCAT44(local_370._4_4_,(uint)local_370 & ~local_380._4_4_);
        FUN_1449c0562(&local_380);
        lVar30 = lVar30 + -1;
        lVar28 = lVar34;
        iVar25 = local_370._4_4_;
        lVar2 = local_370;
      } while (local_388 != param_1 ||
               ((longlong *)CONCAT44(uStack_374,uStack_378) != local_398 ||
               local_370._4_4_ != iVar15));
    }
    local_370 = lVar2;
    param_1[0xd] = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1492ff076:
  local_88 = (longlong *)*plVar20;
  uStack_80 = (longlong *)plVar20[1];
  local_78 = plVar20[2];
  uStack_70 = plVar20[3];
  local_68 = plVar20[4];
  lStack_60 = plVar20[5];
  local_58 = plVar20[6];
  lStack_50 = plVar20[7];
  plVar11 = local_88;
  plVar10 = uStack_80;
  lVar28 = *plVar27;
  lVar2 = plVar24[-7];
  lVar19 = plVar24[-6];
  lVar30 = plVar24[-5];
  lVar31 = plVar24[-4];
  lVar32 = plVar24[-3];
  lVar12 = plVar24[-1];
  plVar20[6] = plVar24[-2];
  plVar20[7] = lVar12;
  plVar20[4] = lVar31;
  plVar20[5] = lVar32;
  plVar20[2] = lVar19;
  plVar20[3] = lVar30;
  *plVar20 = lVar28;
  plVar20[1] = lVar2;
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  plVar24[-2] = local_58;
  plVar24[-1] = lStack_50;
  plVar24[-4] = local_68;
  plVar24[-3] = lStack_60;
  plVar24[-6] = local_78;
  plVar24[-5] = uStack_70;
  *(undefined4 *)plVar27 = (undefined4)local_88;
  *(undefined4 *)((longlong)plVar24 + -0x3c) = local_88._4_4_;
  *(undefined4 *)(plVar24 + -7) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)plVar24 + -0x34) = uStack_80._4_4_;
  iVar25 = iVar25 + -1;
  plVar24 = plVar24 + -0x10;
  local_88 = plVar11;
  uStack_80 = plVar10;
  if ((longlong)plVar29 - (longlong)plVar16 < (longlong)plVar21 - (longlong)plVar33) {
    if (plVar14 < plVar23) {
      *pplVar13 = plVar14;
      pplVar13[1] = plVar23;
      *(int *)(pplVar13 + 2) = iVar25;
      pplVar13 = pplVar13 + 3;
    }
    plVar14 = plVar20;
    plVar21 = plVar29;
    if (plVar27 <= plVar20 + 8) goto LAB_1492ff5da;
  }
  else {
    if (plVar20 + 8 < plVar27) {
      *pplVar13 = plVar20;
      pplVar13[1] = plVar24;
      *(int *)(pplVar13 + 2) = iVar25;
      pplVar13 = pplVar13 + 3;
    }
    plVar20 = plVar33;
    plVar24 = plVar23;
    plVar21 = plVar23;
    if (plVar23 <= plVar14) goto LAB_1492ff5da;
  }
  iVar15 = (int)((ulonglong)((longlong)plVar21 - (longlong)plVar20) >> 6);
  uVar17 = iVar15 + 1;
  plVar16 = plVar20;
  plVar20 = plVar14;
  plVar23 = plVar24;
  if (iVar25 == 0) goto LAB_1492ff18c;
  goto LAB_1492feee9;
}



// FUNCTION 1492ff5ec FUN_1492ff5ec body=766 status=ok
// SIG undefined FUN_1492ff5ec(void)

void FUN_1492ff5ec(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar6 = *(int *)((longlong)param_2 + 0xc);
  FUN_149307011(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar6 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_14930d8a4(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar8 != 0) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar8);
    }
    FUN_14930d904(&local_98,uVar8);
    iVar6 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar6)) {
      local_50 = iVar6;
      FUN_14930daa0();
    }
  }
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (-1 < iVar6) {
    if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
      FUN_14930d8a4(param_2);
    }
    local_b0 = param_1 + 2;
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    iStack_a4 = 0;
    local_a0 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_b8);
    }
    local_c8 = local_a8;
    iStack_c4 = iStack_a4;
    local_c0 = local_a0;
    local_bc = local_9c;
    local_d8 = local_b8;
    local_d0 = local_b0;
    local_e0 = param_1;
    if (iStack_a4 < (int)local_b0[3]) {
      do {
        lVar2 = *local_e0;
        lVar4 = (longlong)iStack_c4 * 0x40;
        iVar6 = *(int *)(lVar2 + 8 + lVar4);
        puVar7 = &DAT_149dfb77a;
        if (iVar6 != 0) {
          puVar7 = *(undefined2 **)(lVar2 + lVar4);
        }
        iVar5 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar5 = 0;
        }
        uVar3 = FUN_144a49b4a(iVar5,puVar7);
        iVar6 = FUN_14930dc7e(&local_98,uVar3,lVar2 + lVar4);
        if (iVar6 == -1) {
          puVar9 = (undefined8 *)((longlong)iStack_c4 * 0x40 + *local_e0);
          iVar6 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
            FUN_14930e78e(param_2,iVar6);
          }
          lVar2 = *param_2;
          lVar4 = (longlong)iVar6 * 0x10;
          puVar1 = (undefined8 *)(lVar2 + lVar4);
          *(undefined8 *)(lVar2 + lVar4) = 0;
          iVar6 = *(int *)(puVar9 + 1);
          _Src = (void *)*puVar9;
          *(int *)(lVar2 + 8 + lVar4) = iVar6;
          if ((longlong)iVar6 == 0) {
            *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar6,0);
            memcpy((void *)*puVar1,_Src,(longlong)iVar6 * 2);
          }
          FUN_14930dd18(&local_98,&local_b8,(longlong)iStack_c4 * 0x40 + *local_e0);
        }
        local_c8 = local_c8 & ~local_d8._4_4_;
        FUN_1449c0562(&local_d8);
      } while (iStack_c4 < (int)local_d0[3]);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14930e064(&local_98);
    if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar6);
}



// FUNCTION 1492ff8ec FUN_1492ff8ec body=234 status=ok
// SIG undefined FUN_1492ff8ec(void)

undefined8 FUN_1492ff8ec(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar6);
  iVar4 = FUN_140c4443c(param_1,uVar3,param_2);
  uVar8 = 0x800000;
  if (iVar4 != -1) {
    lVar5 = (longlong)iVar4 * 0x40 + *param_1;
    if (((longlong *)(lVar5 + 0x10) != (longlong *)0x0 && lVar5 != 0) &&
       (uVar8 = 0x100000, *(int *)(lVar5 + 0x20) == 0x12)) {
      lVar7 = *(longlong *)(lVar5 + 0x10);
      uVar8 = 0x400000;
      if ((-1 < lVar7) && (lVar7 < param_1[0xb])) {
        uVar1 = *(ulonglong *)(lVar5 + 0x18);
        if (uVar1 < 3) {
          FUN_14020fad6(param_3,&DAT_149dfb77a);
        }
        else {
          if (uVar1 == 3) {
            lVar7 = 0;
            iVar4 = 0;
          }
          else {
            lVar7 = lVar7 + param_1[10];
            iVar4 = (int)(uVar1 >> 1) + -1;
          }
          FUN_1402980a2(param_3,lVar7,iVar4);
        }
        uVar8 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar8;
}



// FUNCTION 1492ff9d6 FUN_1492ff9d6 body=271 status=ok
// SIG undefined FUN_1492ff9d6(void)

undefined8 FUN_1492ff9d6(longlong *param_1,undefined8 *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar6);
  iVar4 = FUN_140c4443c(param_1,uVar3,param_2);
  uVar9 = 0x800000;
  if (iVar4 != -1) {
    lVar5 = (longlong)iVar4 * 0x40 + *param_1;
    if (((longlong *)(lVar5 + 0x10) != (longlong *)0x0 && lVar5 != 0) &&
       (uVar9 = 0x100000, *(int *)(lVar5 + 0x20) == 0x10)) {
      lVar8 = *(longlong *)(lVar5 + 0x10);
      uVar9 = 0x400000;
      if ((-1 < lVar8) && (lVar8 < param_1[0xb])) {
        uVar1 = *(ulonglong *)(lVar5 + 0x18);
        uVar7 = 0;
        if (uVar1 != 0) {
          if (uVar1 < 4) {
            lVar8 = 0;
          }
          else {
            lVar8 = lVar8 + param_1[10];
            uVar7 = (ulonglong)((int)(uVar1 >> 1) - 1);
          }
          FUN_1446f82e2(&local_30,uVar7,lVar8,1);
          uVar7 = local_30;
        }
        *param_3 = uVar7;
        uVar9 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ffae6 FUN_1492ffae6 body=411 status=ok
// SIG undefined FUN_1492ffae6(void)

undefined8 FUN_1492ffae6(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  uVar8 = 0x800000;
  if (iVar5 != -1) {
    lVar6 = (longlong)iVar5 * 0x40 + *param_1;
    if (((longlong *)(lVar6 + 0x10) != (longlong *)0x0 && lVar6 != 0) &&
       (uVar8 = 0x100000, *(int *)(lVar6 + 0x20) == 0x22)) {
      lVar1 = *(longlong *)(lVar6 + 0x10);
      uVar8 = 0x400000;
      if ((-1 < lVar1) && (lVar1 < param_1[0xb])) {
        uVar2 = *(ulonglong *)(lVar6 + 0x18);
        if (uVar2 == 0) {
          local_58 = &DAT_149dfb77a;
          uStack_50 = uStack_50 & 0xffffffff00000000;
          FUN_14475bf92(param_3);
        }
        else {
          if (uVar2 < 4) {
            local_38 = 0;
            local_30 = 0;
          }
          else {
            local_38 = lVar1 + param_1[10];
            local_30 = (int)(uVar2 >> 1) + -1;
          }
          local_58 = (undefined2 *)0x0;
          uStack_50 = 0;
          local_48 = 0;
          uStack_40 = 0;
          local_2c = 0;
          FUN_14475bf92(&local_58);
          *(undefined4 *)param_3 = (undefined4)local_58;
          *(undefined4 *)((longlong)param_3 + 4) = local_58._4_4_;
          *(undefined4 *)(param_3 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)param_3 + 0xc) = uStack_50._4_4_;
          if (&local_58 == param_3) {
            if (local_48 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (param_3[2] != 0) {
              FUN_1400020a8();
            }
            param_3[2] = local_48;
            local_48 = 0;
            *(undefined4 *)(param_3 + 3) = (undefined4)uStack_40;
            *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_40._4_4_;
          }
        }
        uVar8 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ffc82 FUN_1492ffc82 body=15 status=ok
// SIG undefined FUN_1492ffc82(void)

longlong FUN_1492ffc82(longlong param_1)

{
  return (longlong)(int)(*(int *)(param_1 + 8) + (uint)(*(int *)(param_1 + 8) == 0)) * 2;
}



// FUNCTION 1492ffca0 FUN_1492ffca0 body=36 status=ok
// SIG undefined FUN_1492ffca0(void)

undefined1 * FUN_1492ffca0(longlong *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  uVar1 = (**(code **)(*param_1 + 0x2b0))(param_1,param_3);
  *(undefined8 *)(param_2 + 8) = uVar1;
  return param_2;
}



// FUNCTION 1492ffcc4 FUN_1492ffcc4 body=121 status=ok
// SIG undefined FUN_1492ffcc4(void)

undefined8 FUN_1492ffcc4(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_2 + 0x18) != 0) {
    cVar1 = FUN_1492f4b30(*(longlong *)(param_2 + 0x18),&local_38);
    if (cVar1 != '\0') {
      uVar2 = FUN_140081d40(&local_38,0);
      goto LAB_1492ffcf0;
    }
  }
  uVar2 = 0;
LAB_1492ffcf0:
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ffd3e FUN_1492ffd3e body=36 status=ok
// SIG undefined FUN_1492ffd3e(void)

undefined1 * FUN_1492ffd3e(longlong *param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1,param_3);
  *(undefined8 *)(param_2 + 8) = uVar1;
  return param_2;
}



// FUNCTION 1492ffd62 FUN_1492ffd62 body=134 status=ok
// SIG undefined FUN_1492ffd62(void)

undefined1 * FUN_1492ffd62(undefined8 param_1,undefined1 *param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  if (*(longlong *)(param_3 + 0x18) != 0) {
    cVar1 = FUN_1492f4b30(*(longlong *)(param_3 + 0x18),&local_38);
    if (cVar1 != '\0') {
      uVar2 = FUN_140081d40(&local_38,0);
      *(undefined8 *)(param_2 + 8) = uVar2;
    }
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ffe1e FUN_1492ffe1e body=152 status=ok
// SIG undefined FUN_1492ffe1e(void)

undefined8 * FUN_1492ffe1e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_1410abb6d(*(undefined8 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x140));
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(int *)(param_1 + 0x144) == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    FUN_14930e98c(param_1 + 0x138,0);
    iVar1 = *(int *)(param_1 + 0x140);
    *param_2 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x138);
    *(int *)(param_2 + 1) = iVar1;
    if (iVar1 != 0) {
      FUN_14930ea00(param_2,iVar1,0);
      FUN_14930ea76(*param_2,uVar2,iVar1);
      return param_2;
    }
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  return param_2;
}



// FUNCTION 1492ffecc FUN_1492ffecc body=25 status=ok
// SIG undefined FUN_1492ffecc(void)

undefined8 FUN_1492ffecc(undefined8 param_1,undefined8 param_2)

{
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 1492ffeea FUN_1492ffeea body=25 status=ok
// SIG undefined FUN_1492ffeea(void)

undefined8 FUN_1492ffeea(undefined8 param_1,undefined8 param_2)

{
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 1492fff10 FUN_1492fff10 body=46 status=ok
// SIG undefined FUN_1492fff10(void)

longlong * FUN_1492fff10(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x70);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x78);
  return param_2;
}



// FUNCTION 1492fff3e FUN_1492fff3e body=46 status=ok
// SIG undefined FUN_1492fff3e(void)

longlong * FUN_1492fff3e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x70);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x78);
  return param_2;
}



// FUNCTION 1492fff6c FUN_1492fff6c body=152 status=ok
// SIG undefined FUN_1492fff6c(void)

undefined8 FUN_1492fff6c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"UInterchangeResultError_ReimportFail_GetText";
  local_28 = 0x2c;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"InterchangeResultNS";
  local_28 = 0x13;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Re-import Fail, see log for more detail.");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149300006 FUN_149300006 body=46 status=ok
// SIG undefined FUN_149300006(void)

longlong * FUN_149300006(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x70);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x78);
  return param_2;
}



// FUNCTION 14930003c FUN_14930003c body=42 status=ok
// SIG undefined FUN_14930003c(void)

undefined8 FUN_14930003c(void)

{
  FUN_140033559("Runtime\\Interchange\\Core\\Public\\InterchangeTranslatorBase.h",0x4f,
                L"Pure virtual not implemented (%s)",
                L"UInterchangeTranslatorBase::GetSupportedAssetTypes");
  return 0;
}



// FUNCTION 149300066 FUN_149300066 body=54 status=ok
// SIG undefined FUN_149300066(void)

undefined8 * FUN_149300066(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Interchange\\Core\\Public\\InterchangeTranslatorBase.h",0x52,
                L"Pure virtual not implemented (%s)",
                L"UInterchangeTranslatorBase::GetSupportedExtensions");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1493000f8 FUN_1493000f8 body=119 status=ok
// SIG undefined FUN_1493000f8(void)

undefined1 FUN_1493000f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      puVar2 = (undefined4 *)(param_3 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar1 = (undefined4 *)(param_2 + lVar8);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      lVar7 = *(longlong *)(param_3 + 0x10 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_14689c22e();
          lVar7 = *(longlong *)(param_3 + 0x10 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8 + 0x10) = lVar7;
      *(undefined8 *)(param_2 + lVar8 + 0x18) = *(undefined8 *)(param_3 + 0x18 + lVar8);
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149300198 FUN_149300198 body=59 status=ok
// SIG undefined FUN_149300198(void)

undefined8 FUN_149300198(longlong *param_1)

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



// FUNCTION 14930029e FUN_14930029e body=59 status=ok
// SIG undefined FUN_14930029e(void)

undefined8 FUN_14930029e(longlong *param_1)

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



// FUNCTION 1493003bc FUN_1493003bc body=59 status=ok
// SIG undefined FUN_1493003bc(void)

undefined8 FUN_1493003bc(longlong *param_1)

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



// FUNCTION 14930045e FUN_14930045e body=122 status=ok
// SIG undefined FUN_14930045e(void)

longlong FUN_14930045e(longlong param_1,longlong param_2)

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
    FUN_1493004d8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1493004d8 FUN_1493004d8 body=119 status=ok
// SIG undefined FUN_1493004d8(void)

undefined8 * FUN_1493004d8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1410abb98(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403951a8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 149300550 FUN_149300550 body=98 status=ok
// SIG undefined FUN_149300550(void)

void FUN_149300550(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1493005b2 FUN_1493005b2 body=130 status=ok
// SIG undefined FUN_1493005b2(void)

longlong * FUN_1493005b2(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xa0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bc2f000;
  FUN_1405d89e4(plVar3 + 2,param_2);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  }
  return param_1;
}



// FUNCTION 149300634 FUN_149300634 body=15 status=ok
// SIG undefined FUN_149300634(void)

void FUN_149300634(longlong param_1)

{
  FUN_140788a7e(param_1 + 0x10);
  return;
}



// FUNCTION 149300644 FUN_149300644 body=29 status=ok
// SIG undefined FUN_149300644(void)

undefined8 FUN_149300644(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149300662 FUN_149300662 body=136 status=ok
// SIG undefined FUN_149300662(void)

void FUN_149300662(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = param_1 + 0x1a;
  if ((longlong *)param_1[0x18] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[0x18];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar3 = (*pcVar2)(uVar3);
  *(undefined8 *)(param_1[0x1e] + 0x80) = uVar3;
  FUN_140b576f0();
  FUN_1493006ea(param_1 + 0x16);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001493006de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1493006ea FUN_1493006ea body=92 status=ok
// SIG undefined FUN_1493006ea(void)

void FUN_1493006ea(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[9];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*param_1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014930073a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    return;
  }
  return;
}



// FUNCTION 149300746 FUN_149300746 body=96 status=ok
// SIG undefined FUN_149300746(void)

undefined8 * FUN_149300746(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
  }
  return param_1;
}



// FUNCTION 1493007a6 FUN_1493007a6 body=129 status=ok
// SIG undefined FUN_1493007a6(void)

longlong FUN_1493007a6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_149300827();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_140c569d0(param_2);
    }
  }
  return param_1;
}



// FUNCTION 149300827 FUN_149300827 body=652 status=ok
// SIG undefined FUN_149300827(void)

longlong * FUN_149300827(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        FUN_14021219d(param_1,lVar5 + (longlong)iVar8 * 0x40);
        FUN_149300ab4(param_1,lVar5 + (longlong)iVar8 * 0x40 + 0x10);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_140fed96e(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_140c567f4(param_2,&local_90);
        puVar3 = local_88 + 2;
        local_88[4] = 0;
        local_88[5] = 0;
        local_88[2] = 0;
        local_88[3] = 0;
        *local_88 = 0;
        local_88[1] = 0;
        local_88[6] = 0;
        *(undefined4 *)(local_88 + 7) = 0xffffffff;
        FUN_14021219d(param_1);
        FUN_149300ab4(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149300ab4 FUN_149300ab4 body=337 status=ok
// SIG undefined FUN_149300ab4(void)

longlong * FUN_149300ab4(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,8);
    }
    else {
      thunk_FUN_146821949(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 2) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)((longlong)param_2 + 0x14),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)((longlong)param_2 + 0x14) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1402ac1b3(param_1,param_2 + 3);
  return param_1;
}



// FUNCTION 149300c06 FUN_149300c06 body=118 status=ok
// SIG undefined FUN_149300c06(void)

undefined8 * FUN_149300c06(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
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
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  return param_1;
}



// FUNCTION 149300c7c FUN_149300c7c body=54 status=ok
// SIG undefined FUN_149300c7c(void)

void FUN_149300c7c(longlong *param_1)

{
  FUN_149300cb2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149300cb2 FUN_149300cb2 body=355 status=ok
// SIG undefined FUN_149300cb2(void)

void FUN_149300cb2(longlong *param_1,int param_2)

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



// FUNCTION 149300e17 FUN_149300e17 body=38 status=ok
// SIG undefined FUN_149300e17(void)

void FUN_149300e17(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 149300e90 FUN_149300e90 body=79 status=ok
// SIG undefined FUN_149300e90(void)

undefined8 FUN_149300e90(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    FUN_14054da5a(param_2 + 0x18,param_3 + 0x18);
    *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_3 + 0x28);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 149300f08 FUN_149300f08 body=59 status=ok
// SIG undefined FUN_149300f08(void)

undefined8 FUN_149300f08(longlong *param_1)

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



// FUNCTION 149300f4e FUN_149300f4e body=34 status=ok
// SIG undefined FUN_149300f4e(void)

void FUN_149300f4e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_149300fbe(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 149300fbe FUN_149300fbe body=75 status=ok
// SIG undefined FUN_149300fbe(void)

void FUN_149300fbe(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = 0;
    param_1[4] = -0x100000000;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14930100a FUN_14930100a body=122 status=ok
// SIG undefined FUN_14930100a(void)

longlong FUN_14930100a(longlong param_1,longlong param_2)

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
    FUN_149301084(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 149301084 FUN_149301084 body=308 status=ok
// SIG undefined FUN_149301084(void)

undefined8 * FUN_149301084(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140fed96e(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406cd6a8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar11 = (undefined8 *)*param_1;
      puVar9 = (undefined8 *)*param_2;
      uVar10 = 0;
      do {
        puVar8 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar8 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar8 + (uVar10 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar10 & 0x1f) &
            1) == 0) {
          *(undefined4 *)puVar11 = *(undefined4 *)puVar9;
          *(undefined4 *)((longlong)puVar11 + 4) = *(undefined4 *)((longlong)puVar9 + 4);
        }
        else {
          *puVar11 = 0;
          iVar2 = *(int *)(puVar9 + 1);
          _Src = (void *)*puVar9;
          *(int *)(puVar11 + 1) = iVar2;
          if ((longlong)iVar2 == 0) {
            *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar11,iVar2,0);
            memcpy((void *)*puVar11,_Src,(longlong)iVar2 * 2);
          }
          puVar11[6] = puVar9[6];
          uVar3 = *(undefined4 *)(puVar9 + 2);
          uVar4 = *(undefined4 *)((longlong)puVar9 + 0x14);
          uVar5 = *(undefined4 *)(puVar9 + 3);
          uVar6 = *(undefined4 *)((longlong)puVar9 + 0x1c);
          uVar7 = puVar9[5];
          puVar11[4] = puVar9[4];
          puVar11[5] = uVar7;
          *(undefined4 *)(puVar11 + 2) = uVar3;
          *(undefined4 *)((longlong)puVar11 + 0x14) = uVar4;
          *(undefined4 *)(puVar11 + 3) = uVar5;
          *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar6;
          puVar11[7] = puVar9[7];
        }
        uVar10 = uVar10 + 1;
        puVar9 = puVar9 + 8;
        puVar11 = puVar11 + 8;
      } while (uVar1 != uVar10);
    }
  }
  return param_1;
}



// FUNCTION 1493011b8 FUN_1493011b8 body=322 status=ok
// SIG undefined FUN_1493011b8(void)

void FUN_1493011b8(longlong *param_1)

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



// FUNCTION 1493012fc FUN_1493012fc body=284 status=ok
// SIG undefined FUN_1493012fc(void)

void FUN_1493012fc(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + (longlong)iStack_44 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930141a FUN_14930141a body=34 status=ok
// SIG undefined FUN_14930141a(void)

void FUN_14930141a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bc2f650;
  return;
}



// FUNCTION 14930143c FUN_14930143c body=31 status=ok
// SIG undefined FUN_14930143c(void)

undefined8 FUN_14930143c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149301478 FUN_149301478 body=93 status=ok
// SIG undefined FUN_149301478(void)

void FUN_149301478(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bc2f5e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493014d6 FUN_1493014d6 body=126 status=ok
// SIG undefined FUN_1493014d6(void)

void FUN_1493014d6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bc2f5e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149301545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149301560 FUN_149301560 body=21 status=ok
// SIG undefined FUN_149301560(void)

undefined8 FUN_149301560(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149301576 FUN_149301576 body=29 status=ok
// SIG undefined FUN_149301576(void)

undefined8 FUN_149301576(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14930159c FUN_14930159c body=98 status=ok
// SIG undefined FUN_14930159c(void)

void FUN_14930159c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1493015fe FUN_1493015fe body=86 status=ok
// SIG undefined FUN_1493015fe(void)

void FUN_1493015fe(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140a119f4(param_1 + 7);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149301654 FUN_149301654 body=180 status=ok
// SIG undefined FUN_149301654(void)

longlong * FUN_149301654(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1493016eb;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14930170a(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_1493016eb:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 14930170a FUN_14930170a body=281 status=ok
// SIG undefined FUN_14930170a(void)

undefined4 * FUN_14930170a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_149301824(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  *(undefined4 *)(local_40 + 1) = 0x1010000;
  *(undefined1 *)((longlong)local_40 + 0xc) = 1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_14930190a(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1493019fc(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149301824 FUN_149301824 body=230 status=ok
// SIG undefined FUN_149301824(void)

int * FUN_149301824(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14930190a FUN_14930190a body=128 status=ok
// SIG undefined FUN_14930190a(void)

undefined8 FUN_14930190a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_14930198a((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14930198a FUN_14930198a body=114 status=ok
// SIG undefined FUN_14930198a(void)

void FUN_14930198a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 1493019fc FUN_1493019fc body=473 status=ok
// SIG undefined FUN_1493019fc(void)

void FUN_1493019fc(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 149301bd6 FUN_149301bd6 body=7 status=ok
// SIG undefined FUN_149301bd6(void)

void FUN_149301bd6(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 149301bde FUN_149301bde body=132 status=ok
// SIG undefined FUN_149301bde(void)

void FUN_149301bde(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149301c63 FUN_149301c63 body=43 status=ok
// SIG undefined FUN_149301c63(void)

void FUN_149301c63(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 149301c8e FUN_149301c8e body=132 status=ok
// SIG undefined FUN_149301c8e(void)

void FUN_149301c8e(longlong param_1,int param_2)

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



// FUNCTION 149301d14 FUN_149301d14 body=335 status=ok
// SIG undefined FUN_149301d14(void)

undefined4 *
FUN_149301d14(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149301e64(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(undefined8 *)*param_3;
  *local_40 = uVar5;
  local_40[1] = *puVar1;
  lVar8 = puVar1[1];
  local_40[2] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
    uVar5 = *local_40;
  }
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar5 >> 0x20) * 0x17 + (int)uVar5;
  local_58 = param_4;
  cVar3 = FUN_149301f4a(param_1,uVar9,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x1c) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_149302094(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149301e64 FUN_149301e64 body=229 status=ok
// SIG undefined FUN_149301e64(void)

int * FUN_149301e64(longlong *param_1,int *param_2)

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



// FUNCTION 149301f4a FUN_149301f4a body=215 status=ok
// SIG undefined FUN_149301f4a(void)

void FUN_149301f4a(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x20) == *param_3) {
          plVar9 = *(longlong **)(puVar3 + 4);
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_149302022(param_1,*param_4);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_149301fc0;
        }
        iVar10 = puVar3[6];
      } while (iVar10 != -1);
    }
  }
  uVar8 = 0;
LAB_149301fc0:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 149302022 FUN_149302022 body=114 status=ok
// SIG undefined FUN_149302022(void)

void FUN_149302022(longlong *param_1,int param_2)

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



// FUNCTION 149302094 FUN_149302094 body=450 status=ok
// SIG undefined FUN_149302094(void)

void FUN_149302094(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 149302258 FUN_149302258 body=102 status=ok
// SIG undefined FUN_149302258(void)

void FUN_149302258(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1493022be(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1493022be FUN_1493022be body=90 status=ok
// SIG undefined FUN_1493022be(void)

void FUN_1493022be(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_149302318();
  return;
}



// FUNCTION 149302318 FUN_149302318 body=78 status=ok
// SIG undefined FUN_149302318(void)

void FUN_149302318(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_149302022(param_1,param_2);
  return;
}



// FUNCTION 149302366 FUN_149302366 body=538 status=ok
// SIG undefined FUN_149302366(void)

ulonglong FUN_149302366(longlong *param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *_Src;
  ulonglong _Size;
  void *_Src_00;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  longlong *local_78;
  longlong local_70;
  void *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  void **local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  uVar5 = 0x800000;
  if ((param_2 != (longlong *)0x0) && (uVar5 = 0x100000, (int)param_2[2] == 0x12)) {
    iVar1 = *(int *)(param_3 + 8);
    _Src_00 = (void *)(*(code *)*param_4)(param_4[1]);
    if (_Src_00 == (void *)0x0) {
      uVar5 = 0x8000000;
    }
    else {
      lVar6 = (longlong)(int)(iVar1 + (uint)(iVar1 == 0));
      _Size = lVar6 * 2;
      if ((ulonglong)param_2[1] < _Size) {
        puVar3 = (undefined8 *)FUN_149302582(param_1,param_2);
        uVar5 = 0x800000;
        if (puVar3 == (undefined8 *)0x0) goto LAB_14930241d;
        local_68 = (void *)0x0;
        iStack_60 = *(int *)(puVar3 + 1);
        lVar6 = (longlong)iStack_60;
        _Src = (void *)*puVar3;
        if (lVar6 == 0) {
          uStack_5c = 0;
        }
        else {
          FUN_1446dd670(&local_68,iStack_60,0);
          memcpy(local_68,_Src,lVar6 * 2);
        }
        uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
        uVar5 = FUN_1492f0b5e(param_1,&local_68);
        if ((uVar5 & 1) != 0) {
          local_7c = uVar2;
          local_58 = &local_68;
          FUN_140c5653a(param_1,&local_4c,&local_58,0);
          local_70 = *param_1;
          lVar6 = local_70 + (longlong)local_4c * 0x40;
          param_2 = (longlong *)(lVar6 + 0x10);
          *(undefined4 *)(lVar6 + 0x20) = 0x12;
          lVar6 = param_1[0xb];
          param_1[0xb] = _Size + lVar6;
          plVar4 = param_1 + 10;
          if ((ulonglong)(param_1[0xc] - lVar6) < _Size) {
            local_78 = param_1 + 10;
            FUN_14112c458();
            plVar4 = local_78;
          }
          memset((void *)(*plVar4 + lVar6),0,_Size);
          *param_2 = lVar6;
          *(undefined4 *)(local_70 + 0x24 + (longlong)local_4c * 0x40) = local_7c;
        }
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
        if ((uVar5 & 1) == 0) goto LAB_14930241d;
      }
      else {
        param_1[0xd] = param_1[0xd] + param_2[1] + lVar6 * -2;
      }
      param_2[1] = _Size;
      FUN_140c54cf0(&local_68,_Src_00,_Size);
      param_2[3] = (longlong)local_68;
      param_2[4] = CONCAT44(uStack_5c,iStack_60);
      memcpy((void *)(param_1[10] + *param_2),_Src_00,_Size);
      uVar5 = 1;
    }
  }
LAB_14930241d:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 149302582 FUN_149302582 body=279 status=ok
// SIG undefined FUN_149302582(void)

longlong FUN_149302582(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    lVar2 = 0;
    do {
      cVar1 = FUN_14930269a(*local_68 + (longlong)iStack_4c * 0x40 + 0x10,param_2);
      if (cVar1 != '\0') {
        lVar2 = (longlong)iStack_4c * 0x40 + *local_68;
        break;
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  else {
    lVar2 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14930269a FUN_14930269a body=79 status=ok
// SIG undefined FUN_14930269a(void)

undefined4 FUN_14930269a(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
      ((int)param_1[2] == (int)param_2[2])) &&
     (*(int *)((longlong)param_1 + 0x14) == *(int *)((longlong)param_2 + 0x14))) {
    uVar1 = CONCAT31((int3)((*(uint *)(param_1 + 3) ^ *(uint *)(param_2 + 3)) >> 8),
                     *(int *)((longlong)param_1 + 0x24) == *(int *)((longlong)param_2 + 0x24) &&
                     ((int)param_1[4] == (int)param_2[4] &&
                     (*(int *)((longlong)param_1 + 0x1c) == *(int *)((longlong)param_2 + 0x1c) &&
                     (*(uint *)(param_1 + 3) ^ *(uint *)(param_2 + 3)) == 0)));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 149302700 FUN_149302700 body=198 status=ok
// SIG undefined FUN_149302700(void)

undefined8 FUN_149302700(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

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
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 1)) &&
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



// FUNCTION 1493027c6 FUN_1493027c6 body=198 status=ok
// SIG undefined FUN_1493027c6(void)

undefined8 FUN_1493027c6(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

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



// FUNCTION 14930288c FUN_14930288c body=389 status=ok
// SIG undefined FUN_14930288c(void)

ulonglong FUN_14930288c(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

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
LAB_14930293e:
    local_58 = param_2;
    FUN_140c5653a(param_1,&local_4c,&local_58,0);
    lVar5 = *param_1 + (longlong)local_4c * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 8;
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
    if (lVar5 == 0) goto LAB_14930293e;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 8) goto LAB_1493029d1;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_1493029d1;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = param_4;
  uVar7 = FUN_149302a12(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_1493029d1:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 149302a12 FUN_149302a12 body=200 status=ok
// SIG undefined FUN_149302a12(void)

undefined8 FUN_149302a12(longlong param_1,longlong *param_2,undefined4 *param_3)

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
    if (((int)param_2[2] == 8) && (uVar1 = 0x200000, param_2[1] == 4)) {
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



// FUNCTION 149302adc FUN_149302adc body=198 status=ok
// SIG undefined FUN_149302adc(void)

undefined8 FUN_149302adc(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

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
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 8)) &&
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



// FUNCTION 149302ba2 FUN_149302ba2 body=389 status=ok
// SIG undefined FUN_149302ba2(void)

ulonglong FUN_149302ba2(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

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
LAB_149302c54:
    local_58 = param_2;
    FUN_140c5653a(param_1,&local_4c,&local_58,0);
    lVar5 = *param_1 + (longlong)local_4c * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 6;
    *(undefined8 *)(lVar5 + 0x18) = 8;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 8;
    if ((ulonglong)(param_1[0xc] - lVar5) < 8) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined8 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_149302c54;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 6) goto LAB_149302ce7;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_149302ce7;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = param_4;
  uVar7 = FUN_149302d28(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_149302ce7:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 149302d28 FUN_149302d28 body=202 status=ok
// SIG undefined FUN_149302d28(void)

undefined8 FUN_149302d28(longlong param_1,longlong *param_2,undefined8 *param_3)

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
    if (((int)param_2[2] == 6) && (uVar1 = 0x200000, param_2[1] == 8)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,8);
        *(undefined4 *)(param_2 + 3) = local_40;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_3c;
        *(undefined4 *)(param_2 + 4) = uStack_38;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_34;
        *(undefined8 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
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



// FUNCTION 149302df4 FUN_149302df4 body=200 status=ok
// SIG undefined FUN_149302df4(void)

undefined8 FUN_149302df4(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

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
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 6)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 8)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined8 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 149302ebc FUN_149302ebc body=388 status=ok
// SIG undefined FUN_149302ebc(void)

ulonglong FUN_149302ebc(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar5);
  iVar4 = FUN_140c4443c(param_1,uVar3,param_2);
  if (iVar4 == -1) {
LAB_149302f6a:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar6 = *param_1 + (longlong)local_44 * 0x40;
    plVar7 = (longlong *)(lVar6 + 0x10);
    *(undefined4 *)(lVar6 + 0x20) = 9;
    *(undefined8 *)(lVar6 + 0x18) = 0x10;
    lVar6 = param_1[0xb];
    param_1[0xb] = lVar6 + 0x10;
    if ((ulonglong)(param_1[0xc] - lVar6) < 0x10) {
      FUN_14112c458(param_1 + 10,lVar6);
    }
    puVar1 = (undefined8 *)(param_1[10] + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    *plVar7 = lVar6;
  }
  else {
    lVar6 = *param_1 + (longlong)iVar4 * 0x40;
    if (lVar6 == 0) goto LAB_149302f6a;
    uVar8 = 0x100000;
    if (*(int *)(lVar6 + 0x20) != 9) goto LAB_149303001;
    plVar7 = (longlong *)(*param_1 + (longlong)iVar4 * 0x40 + 0x10);
    uVar8 = 0x400000;
    if ((*plVar7 < 0) || (param_1[0xb] <= *plVar7)) goto LAB_149303001;
  }
  *(undefined4 *)((longlong)plVar7 + 0x14) = 0;
  uVar8 = FUN_149303042(param_1,plVar7,param_3);
  if ((uVar8 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_149303001:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 149303042 FUN_149303042 body=202 status=ok
// SIG undefined FUN_149303042(void)

undefined8 FUN_149303042(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong lStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar5 = 0x800000;
  }
  else {
    uVar5 = 0x100000;
    if (((int)param_2[2] == 9) && (uVar5 = 0x200000, param_2[1] == 0x10)) {
      uVar5 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,0x10);
        param_2[3] = local_40;
        param_2[4] = lStack_38;
        uVar2 = param_3[1];
        uVar3 = param_3[2];
        uVar4 = param_3[3];
        puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x50) + *param_2);
        *puVar1 = *param_3;
        puVar1[1] = uVar2;
        puVar1[2] = uVar3;
        puVar1[3] = uVar4;
        uVar5 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14930310e FUN_14930310e body=200 status=ok
// SIG undefined FUN_14930310e(void)

undefined8 FUN_14930310e(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar6 = *(int *)(param_2 + 1);
  if (iVar6 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  iVar2 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar2 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar2,puVar8);
  iVar6 = FUN_140c4443c(param_1,uVar5,param_2);
  uVar9 = 0x800000;
  if (iVar6 != -1) {
    lVar7 = (longlong)iVar6 * 0x40 + *param_1;
    if ((((longlong *)(lVar7 + 0x10) != (longlong *)0x0 && lVar7 != 0) &&
        (uVar9 = 0x100000, *(int *)(lVar7 + 0x20) == 9)) &&
       (uVar9 = 0x200000, *(longlong *)(lVar7 + 0x18) == 0x10)) {
      lVar7 = *(longlong *)(lVar7 + 0x10);
      uVar9 = 0x400000;
      if ((-1 < lVar7) && (lVar7 < param_1[0xb])) {
        puVar1 = (undefined4 *)(param_1[10] + lVar7);
        uVar5 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *param_3 = *puVar1;
        param_3[1] = uVar5;
        param_3[2] = uVar3;
        param_3[3] = uVar4;
        uVar9 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar9;
}



// FUNCTION 1493031d6 FUN_1493031d6 body=389 status=ok
// SIG undefined FUN_1493031d6(void)

ulonglong FUN_1493031d6(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar5);
  iVar4 = FUN_140c4443c(param_1,uVar3,param_2);
  if (iVar4 == -1) {
LAB_149303288:
    local_58 = param_2;
    FUN_140c5653a(param_1,&local_4c,&local_58,0);
    lVar6 = *param_1 + (longlong)local_4c * 0x40;
    plVar7 = (longlong *)(lVar6 + 0x10);
    *(undefined4 *)(lVar6 + 0x20) = 0xf;
    *(undefined8 *)(lVar6 + 0x18) = 0x10;
    lVar6 = param_1[0xb];
    param_1[0xb] = lVar6 + 0x10;
    if ((ulonglong)(param_1[0xc] - lVar6) < 0x10) {
      FUN_14112c458(param_1 + 10,lVar6);
    }
    puVar1 = (undefined8 *)(param_1[10] + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    *plVar7 = lVar6;
  }
  else {
    lVar6 = *param_1 + (longlong)iVar4 * 0x40;
    if (lVar6 == 0) goto LAB_149303288;
    uVar8 = 0x100000;
    if (*(int *)(lVar6 + 0x20) != 0xf) goto LAB_14930331b;
    plVar7 = (longlong *)(*param_1 + (longlong)iVar4 * 0x40 + 0x10);
    uVar8 = 0x400000;
    if ((*plVar7 < 0) || (param_1[0xb] <= *plVar7)) goto LAB_14930331b;
  }
  *(undefined4 *)((longlong)plVar7 + 0x14) = param_4;
  uVar8 = FUN_14930335c(param_1,plVar7,param_3);
  if ((uVar8 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_14930331b:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14930335c FUN_14930335c body=202 status=ok
// SIG undefined FUN_14930335c(void)

undefined8 FUN_14930335c(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong lStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar5 = 0x800000;
  }
  else {
    uVar5 = 0x100000;
    if (((int)param_2[2] == 0xf) && (uVar5 = 0x200000, param_2[1] == 0x10)) {
      uVar5 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,0x10);
        param_2[3] = local_40;
        param_2[4] = lStack_38;
        uVar2 = param_3[1];
        uVar3 = param_3[2];
        uVar4 = param_3[3];
        puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x50) + *param_2);
        *puVar1 = *param_3;
        puVar1[1] = uVar2;
        puVar1[2] = uVar3;
        puVar1[3] = uVar4;
        uVar5 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149303428 FUN_149303428 body=200 status=ok
// SIG undefined FUN_149303428(void)

undefined8 FUN_149303428(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar6 = *(int *)(param_2 + 1);
  if (iVar6 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  iVar2 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar2 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar2,puVar8);
  iVar6 = FUN_140c4443c(param_1,uVar5,param_2);
  uVar9 = 0x800000;
  if (iVar6 != -1) {
    lVar7 = (longlong)iVar6 * 0x40 + *param_1;
    if ((((longlong *)(lVar7 + 0x10) != (longlong *)0x0 && lVar7 != 0) &&
        (uVar9 = 0x100000, *(int *)(lVar7 + 0x20) == 0xf)) &&
       (uVar9 = 0x200000, *(longlong *)(lVar7 + 0x18) == 0x10)) {
      lVar7 = *(longlong *)(lVar7 + 0x10);
      uVar9 = 0x400000;
      if ((-1 < lVar7) && (lVar7 < param_1[0xb])) {
        puVar1 = (undefined4 *)(param_1[10] + lVar7);
        uVar5 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *param_3 = *puVar1;
        param_3[1] = uVar5;
        param_3[2] = uVar3;
        param_3[3] = uVar4;
        uVar9 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar9;
}



// FUNCTION 1493034f0 FUN_1493034f0 body=388 status=ok
// SIG undefined FUN_1493034f0(void)

ulonglong FUN_1493034f0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
LAB_14930359e:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar5 = *param_1 + (longlong)local_44 * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 0x2f;
    *(undefined8 *)(lVar5 + 0x18) = 8;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 8;
    if ((ulonglong)(param_1[0xc] - lVar5) < 8) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined8 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_14930359e;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0x2f) goto LAB_149303635;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_149303635;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_149303676(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_149303635:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 149303676 FUN_149303676 body=202 status=ok
// SIG undefined FUN_149303676(void)

undefined8 FUN_149303676(longlong param_1,longlong *param_2,undefined8 *param_3)

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
    if (((int)param_2[2] == 0x2f) && (uVar1 = 0x200000, param_2[1] == 8)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,8);
        *(undefined4 *)(param_2 + 3) = local_40;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_3c;
        *(undefined4 *)(param_2 + 4) = uStack_38;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_34;
        *(undefined8 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
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



// FUNCTION 149303742 FUN_149303742 body=200 status=ok
// SIG undefined FUN_149303742(void)

undefined8 FUN_149303742(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

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
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 0x2f)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 8)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined8 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 14930380a FUN_14930380a body=198 status=ok
// SIG undefined FUN_14930380a(void)

undefined8 FUN_14930380a(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

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



// FUNCTION 1493038d0 FUN_1493038d0 body=429 status=ok
// SIG undefined FUN_1493038d0(void)

void ** FUN_1493038d0(longlong param_1,void **param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68 [2];
  longlong local_58 [3];
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a83b10(local_58,param_3);
  uVar2 = FUN_149303a7e();
  local_88 = (void *)0x0;
  local_80 = *(int *)(param_1 + 0x18);
  lVar3 = (longlong)local_80;
  pvVar1 = *(void **)(param_1 + 0x10);
  if (lVar3 == 0) {
    local_7c = 0;
    local_70 = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_80,0);
    memcpy(local_88,pvVar1,lVar3 * 2);
    pvVar1 = local_88;
    lVar3 = (longlong)local_80;
    local_78 = (void *)0x0;
    local_70 = local_80;
    if (lVar3 != 0) {
      FUN_1446dd670(&local_78,local_80,0);
      memcpy(local_78,pvVar1,lVar3 * 2);
      goto LAB_1493039a4;
    }
  }
  local_78 = (void *)0x0;
  local_6c = 0;
LAB_1493039a4:
  FUN_144a7dea0(local_68,&local_78,uVar2);
  FUN_1401c7f3e(&local_40,local_68,local_58);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  pvVar1 = local_40;
  *param_2 = (void *)0x0;
  param_2[1] = (void *)0x0;
  if (&local_40 != param_2) {
    *(int *)(param_2 + 1) = local_38;
    if ((longlong)local_38 != 0) {
      FUN_1446dd670(param_2,local_38,0);
      memcpy(*param_2,pvVar1,(longlong)local_38 * 2);
    }
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149303a7e FUN_149303a7e body=115 status=ok
// SIG undefined FUN_149303a7e(void)

undefined8 * FUN_149303a7e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c3e8) {
    FUN_144b3d300(&DAT_14cc0c3e8);
    if (DAT_14cc0c3e8 == -1) {
      FUN_140056680(&DAT_14cc0c3d8,L"_NameIndex_");
      atexit((_func_5014 *)&LAB_1444be787);
      _Init_thread_footer(&DAT_14cc0c3e8);
    }
  }
  return &DAT_14cc0c3d8;
}



// FUNCTION 149303af2 FUN_149303af2 body=111 status=ok
// SIG undefined FUN_149303af2(void)

void FUN_149303af2(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
  FUN_1413f0a58(param_1,lVar5,param_3);
  return;
}



// FUNCTION 149303b64 FUN_149303b64 body=203 status=ok
// SIG undefined FUN_149303b64(void)

int FUN_149303b64(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_149303bae:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_149303c24;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_149303c24;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_149303c15;
    }
  }
  return -1;
LAB_149303c24:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_149303c15:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_149303bae;
}



// FUNCTION 149303c30 FUN_149303c30 body=333 status=ok
// SIG undefined FUN_149303c30(void)

undefined4 *
FUN_149303c30(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

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
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_149303d7e(param_1,local_50);
  FUN_149303eea(local_48,*param_3,param_3[1]);
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  iVar7 = *(int *)(local_48 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_48;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  local_68 = param_4;
  cVar3 = FUN_149303e64(param_1,uVar4,local_48,&local_54);
  uVar2 = local_54;
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
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_149303fd2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149303d7e FUN_149303d7e body=229 status=ok
// SIG undefined FUN_149303d7e(void)

int * FUN_149303d7e(longlong *param_1,int *param_2)

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



// FUNCTION 149303e64 FUN_149303e64 body=134 status=ok
// SIG undefined FUN_149303e64(void)

void FUN_149303e64(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
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
    iVar7 = FUN_149303b64();
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
      FUN_149303f60(param_1,*param_4);
      *param_4 = iVar7;
      uVar6 = 1;
      goto LAB_149303e85;
    }
  }
  uVar6 = 0;
LAB_149303e85:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 149303eea FUN_149303eea body=117 status=ok
// SIG undefined FUN_149303eea(void)

undefined8 * FUN_149303eea(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
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
  lVar2 = *param_3;
  param_1[2] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  return param_1;
}



// FUNCTION 149303f60 FUN_149303f60 body=114 status=ok
// SIG undefined FUN_149303f60(void)

void FUN_149303f60(longlong *param_1,int param_2)

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



// FUNCTION 149303fd2 FUN_149303fd2 body=476 status=ok
// SIG undefined FUN_149303fd2(void)

void FUN_149303fd2(longlong *param_1)

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



// FUNCTION 1493041b0 FUN_1493041b0 body=253 status=ok
// SIG undefined FUN_1493041b0(void)

void FUN_1493041b0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_149304226:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x20);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x20);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_149304295;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_149304295;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_14930429b;
      }
      if (iVar2 + iVar1 == 1) goto LAB_14930429b;
      goto LAB_149304287;
    }
  }
  return;
LAB_149304295:
  if (uVar7 == uVar6) {
LAB_14930429b:
    FUN_1493042ae(param_1);
    return;
  }
LAB_149304287:
  iVar2 = (int)plVar3[3];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_149304226;
}



// FUNCTION 1493042ae FUN_1493042ae body=90 status=ok
// SIG undefined FUN_1493042ae(void)

void FUN_1493042ae(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_149304308();
  return;
}



// FUNCTION 149304308 FUN_149304308 body=51 status=ok
// SIG undefined FUN_149304308(void)

void FUN_149304308(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_149303f60(param_1,param_2);
  return;
}



// FUNCTION 14930433c FUN_14930433c body=323 status=ok
// SIG undefined FUN_14930433c(void)

undefined4 * FUN_14930433c(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140d08188(param_1,local_48);
  FUN_140e10812(param_3,local_40);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_58 = 0;
  cVar2 = FUN_140d08036(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x24) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140d0836e(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149304480 FUN_149304480 body=367 status=ok
// SIG undefined FUN_149304480(void)

undefined4 *
FUN_149304480(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
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
  FUN_1493045f0(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_48 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_48 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_48[2] = *puVar2;
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
  cVar3 = FUN_1493046d6(param_1,uVar4,local_48,&local_54);
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
      FUN_1493048b8(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1493045f0 FUN_1493045f0 body=229 status=ok
// SIG undefined FUN_1493045f0(void)

int * FUN_1493045f0(longlong *param_1,int *param_2)

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



// FUNCTION 1493046d6 FUN_1493046d6 body=140 status=ok
// SIG undefined FUN_1493046d6(void)

void FUN_1493046d6(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
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
    iVar7 = FUN_149304762();
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
      FUN_14930482e(param_1,*param_4,1);
      *param_4 = iVar7;
      uVar6 = 1;
      goto LAB_1493046f7;
    }
  }
  uVar6 = 0;
LAB_1493046f7:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 149304762 FUN_149304762 body=203 status=ok
// SIG undefined FUN_149304762(void)

int FUN_149304762(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_1493047ac:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_149304822;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_149304822;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_149304813;
    }
  }
  return -1;
LAB_149304822:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_149304813:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1493047ac;
}



// FUNCTION 14930482e FUN_14930482e body=138 status=ok
// SIG undefined FUN_14930482e(void)

void FUN_14930482e(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1493048b8 FUN_1493048b8 body=476 status=ok
// SIG undefined FUN_1493048b8(void)

void FUN_1493048b8(longlong *param_1)

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



// FUNCTION 149304a96 FUN_149304a96 body=407 status=ok
// SIG undefined FUN_149304a96(void)

ulonglong FUN_149304a96(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  size_t _Size;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  _Size = FUN_149304c2e(param_3);
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
  if (iVar3 == -1) {
LAB_149304b53:
    local_58 = param_2;
    FUN_140c5653a(param_1,&local_4c,&local_58,0);
    lVar6 = *param_1 + (longlong)local_4c * 0x40;
    plVar7 = (longlong *)(lVar6 + 0x10);
    *(undefined4 *)(lVar6 + 0x20) = 0x22;
    *(size_t *)(lVar6 + 0x18) = _Size;
    lVar6 = param_1[0xb];
    param_1[0xb] = _Size + lVar6;
    plVar4 = param_1 + 10;
    if ((ulonglong)(param_1[0xc] - lVar6) < _Size) {
      local_60 = param_1 + 10;
      FUN_14112c458();
      plVar4 = local_60;
    }
    memset((void *)(*plVar4 + lVar6),0,_Size);
    *plVar7 = lVar6;
  }
  else {
    lVar6 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar6 == 0) goto LAB_149304b53;
    uVar8 = 0x100000;
    if (*(int *)(lVar6 + 0x20) != 0x22) goto LAB_149304bed;
    plVar7 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar8 = 0x400000;
    if ((*plVar7 < 0) || (param_1[0xb] <= *plVar7)) goto LAB_149304bed;
  }
  *(undefined4 *)((longlong)plVar7 + 0x14) = param_4;
  uVar8 = FUN_149304c8a(param_1,plVar7,param_3);
  if ((uVar8 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_149304bed:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 149304c2e FUN_149304c2e body=91 status=ok
// SIG undefined FUN_149304c2e(void)

longlong FUN_149304c2e(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14475cc44(param_1,&local_28);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (longlong)(int)(local_20 + (uint)(local_20 == 0)) * 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149304c8a FUN_149304c8a body=141 status=ok
// SIG undefined FUN_149304c8a(void)

undefined8 FUN_149304c8a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined1 *local_48;
  undefined8 **local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14475cc44(param_3,local_38);
  local_40 = &local_50;
  local_48 = &LAB_149304f4a;
  local_50 = local_38;
  uVar1 = FUN_149304d18(param_1,param_2,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149304d18 FUN_149304d18 body=561 status=ok
// SIG undefined FUN_149304d18(void)

ulonglong FUN_149304d18(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  void *_Src;
  size_t _Size;
  void *_Src_00;
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  longlong *local_78;
  longlong local_70;
  void *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  void **local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  uVar2 = 0x800000;
  if ((param_2 != (longlong *)0x0) && (uVar2 = 0x100000, (int)param_2[2] == 0x22)) {
    _Size = FUN_149304c2e(param_3);
    _Src_00 = (void *)(*(code *)*param_4)(param_4[1]);
    uVar2 = 0x8000000;
    if (_Size == 0 || _Src_00 != (void *)0x0) {
      if ((ulonglong)param_2[1] < _Size) {
        puVar1 = (undefined8 *)FUN_149302582(param_1,param_2);
        uVar2 = 0x800000;
        if (puVar1 == (undefined8 *)0x0) goto LAB_149304d67;
        local_68 = (void *)0x0;
        iStack_60 = *(int *)(puVar1 + 1);
        lVar3 = (longlong)iStack_60;
        _Src = (void *)*puVar1;
        if (lVar3 == 0) {
          uStack_5c = 0;
        }
        else {
          FUN_1446dd670(&local_68,iStack_60,0);
          memcpy(local_68,_Src,lVar3 * 2);
        }
        local_7c = *(undefined4 *)((longlong)param_2 + 0x14);
        uVar2 = FUN_1492f0b5e(param_1,&local_68);
        if ((uVar2 & 1) != 0) {
          local_58 = &local_68;
          FUN_140c5653a(param_1,&local_4c,&local_58,0);
          local_70 = *param_1;
          lVar3 = local_70 + (longlong)local_4c * 0x40;
          param_2 = (longlong *)(lVar3 + 0x10);
          *(undefined4 *)(lVar3 + 0x20) = 0x22;
          local_78 = param_1 + 10;
          lVar3 = param_1[0xb];
          param_1[0xb] = _Size + lVar3;
          if ((ulonglong)(param_1[0xc] - lVar3) < _Size) {
            FUN_14112c458(local_78);
          }
          memset((void *)(*local_78 + lVar3),0,_Size);
          *param_2 = lVar3;
          *(undefined4 *)(local_70 + 0x24 + (longlong)local_4c * 0x40) = local_7c;
        }
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
        if ((uVar2 & 1) == 0) goto LAB_149304d67;
      }
      else {
        param_1[0xd] = param_1[0xd] + (param_2[1] - _Size);
      }
      param_2[1] = _Size;
      FUN_140c54cf0(&local_68,_Src_00,_Size);
      param_2[3] = (longlong)local_68;
      param_2[4] = CONCAT44(uStack_5c,iStack_60);
      uVar2 = 1;
      if (_Size != 0) {
        memcpy((void *)(param_1[10] + *param_2),_Src_00,_Size);
      }
    }
  }
LAB_149304d67:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 149304f60 FUN_149304f60 body=132 status=ok
// SIG undefined FUN_149304f60(void)

void FUN_149304f60(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_149304fe4(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 149304fe4 FUN_149304fe4 body=90 status=ok
// SIG undefined FUN_149304fe4(void)

void FUN_149304fe4(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14930503e();
  return;
}



// FUNCTION 14930503e FUN_14930503e body=79 status=ok
// SIG undefined FUN_14930503e(void)

void FUN_14930503e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x20;
  FUN_149300e17(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
  if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_14930508e(param_1,param_2,1);
  return;
}



// FUNCTION 14930508e FUN_14930508e body=138 status=ok
// SIG undefined FUN_14930508e(void)

void FUN_14930508e(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 149305118 FUN_149305118 body=61 status=ok
// SIG undefined FUN_149305118(void)

void FUN_149305118(longlong *param_1)

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



// FUNCTION 149305156 FUN_149305156 body=377 status=ok
// SIG undefined FUN_149305156(void)

void ** FUN_149305156(longlong param_1,void **param_2,undefined4 param_3)

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
              0x110) < DAT_14cc0c400) {
    FUN_144b3d300(&DAT_14cc0c400);
    if (DAT_14cc0c400 == -1) {
      FUN_140056680(&DAT_14cc0c3f0,L"_KeyIndex_");
      atexit((_func_5014 *)&LAB_1444bed40);
      _Init_thread_footer(&DAT_14cc0c400);
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
  iVar1 = DAT_14cc0c3f8 + -1;
  if (DAT_14cc0c3f8 == 0) {
    iVar1 = 0;
  }
  FUN_1412d7f26(&local_48,iVar1 + 0x10);
  iVar1 = DAT_14cc0c3f8 + -1;
  if (DAT_14cc0c3f8 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_48,DAT_14cc0c3f0,iVar1);
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



// FUNCTION 1493052d0 FUN_1493052d0 body=511 status=ok
// SIG undefined FUN_1493052d0(void)

void ** FUN_1493052d0(longlong param_1,void **param_2,undefined8 *param_3)

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
              0x110) < DAT_14cc0c418) {
    FUN_144b3d300(&DAT_14cc0c418);
    if (DAT_14cc0c418 == -1) {
      FUN_140056680(&DAT_14cc0c408);
      atexit((_func_5014 *)&LAB_1444bed51);
      _Init_thread_footer(&DAT_14cc0c418);
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
  iVar3 = DAT_14cc0c410 + -1;
  if (DAT_14cc0c410 == 0) {
    iVar3 = 0;
  }
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  FUN_1412d7f26(&local_40,iVar5 + iVar3);
  iVar4 = DAT_14cc0c410 + -1;
  if (DAT_14cc0c410 == 0) {
    iVar4 = 0;
  }
  FUN_1400020e8(&local_40,DAT_14cc0c408,iVar4);
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



// FUNCTION 1493054d0 FUN_1493054d0 body=110 status=ok
// SIG undefined FUN_1493054d0(void)

void FUN_1493054d0(longlong param_1,uint param_2)

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
    FUN_145936ad8(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_149305682(param_1);
    return;
  }
  FUN_14930553e(param_1);
  FUN_145936ad8(param_1,param_2);
  return;
}



// FUNCTION 14930553e FUN_14930553e body=322 status=ok
// SIG undefined FUN_14930553e(void)

void FUN_14930553e(longlong *param_1)

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



// FUNCTION 149305682 FUN_149305682 body=476 status=ok
// SIG undefined FUN_149305682(void)

void FUN_149305682(longlong *param_1)

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



// FUNCTION 149305860 FUN_149305860 body=341 status=ok
// SIG undefined FUN_149305860(void)

undefined4 *
FUN_149305860(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_1493059b6(param_1,local_50);
  iVar6 = 0;
  FUN_149305b36(local_48,0,*param_3,param_3[1]);
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
  cVar1 = FUN_149305a9c(param_1,uVar2,local_48,&local_54);
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
      FUN_149305682(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1493059b6 FUN_1493059b6 body=230 status=ok
// SIG undefined FUN_1493059b6(void)

int * FUN_1493059b6(longlong *param_1,int *param_2)

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



// FUNCTION 149305a9c FUN_149305a9c body=153 status=ok
// SIG undefined FUN_149305a9c(void)

void FUN_149305a9c(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
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
    iVar18 = FUN_149305be0();
    if (iVar18 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar18 * 0x48);
      FUN_149305118(puVar1);
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
      FUN_149305cac(param_1,*param_4,1);
      *param_4 = iVar18;
      uVar17 = 1;
      goto LAB_149305abd;
    }
  }
  uVar17 = 0;
LAB_149305abd:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar17;
  }
  return;
}



// FUNCTION 149305b36 FUN_149305b36 body=170 status=ok
// SIG undefined FUN_149305b36(void)

undefined8 *
FUN_149305b36(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



// FUNCTION 149305be0 FUN_149305be0 body=203 status=ok
// SIG undefined FUN_149305be0(void)

int FUN_149305be0(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_149305c2a:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_149305ca0;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_149305ca0;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_149305c91;
    }
  }
  return -1;
LAB_149305ca0:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_149305c91:
  iVar1 = *(int *)(lVar4 + 0x40 + lVar10 * 0x48);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_149305c2a;
}



// FUNCTION 149305cac FUN_149305cac body=138 status=ok
// SIG undefined FUN_149305cac(void)

void FUN_149305cac(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 149305d36 FUN_149305d36 body=179 status=ok
// SIG undefined FUN_149305d36(void)

undefined8 *
FUN_149305d36(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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



// FUNCTION 149305dea FUN_149305dea body=616 status=ok
// SIG undefined FUN_149305dea(void)

ulonglong FUN_149305dea(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

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
LAB_149305e60:
    uVar8 = 0;
    goto LAB_149305e62;
  }
  iVar7 = (int)plVar4[1];
  do {
    if (iVar7 == 0) goto LAB_149305e60;
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
    iVar7 = FUN_149305be0(param_1,param_2,param_3);
    if (iVar7 != -1) {
      lVar3 = *param_1 + (longlong)iVar7 * 0x48;
      if ((lVar3 != 0) && (*param_1 + (longlong)iVar7 * 0x48 != -0x10)) {
        if (*(longlong *)(lVar3 + 0x28) != 0) {
          FUN_149306054(*(longlong *)(lVar3 + 0x28),lVar3 + 0x30,param_4);
        }
        goto LAB_149305e41;
      }
    }
    FUN_149305156(param_1,local_70,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
    FUN_1493052d0(param_1,local_80,param_3);
    FUN_1492f0926(lVar5,local_70,param_3,0);
    FUN_1492f0926(lVar5,local_80,param_4,0);
    FUN_1444be0f2(&local_c8,local_80,lVar5);
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
    FUN_149306106(param_1,local_4c,param_2);
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
LAB_149305e41:
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
LAB_149305e62:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 149306054 FUN_149306054 body=176 status=ok
// SIG undefined FUN_149306054(void)

void FUN_149306054(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_30 = &local_40;
  local_38 = &LAB_1493026ea;
  local_40 = param_3;
  FUN_149302366(param_1,lVar5,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149306106 FUN_149306106 body=302 status=ok
// SIG undefined FUN_149306106(void)

undefined4 *
FUN_149306106(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
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
  FUN_1493059b6(param_1,local_58);
  FUN_149305b36(local_50,0,*param_4,param_4[1]);
  *(undefined4 *)(local_50 + 0x40) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_149305a9c(param_1,param_3,local_50,local_58);
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
      FUN_149305682(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149306236 FUN_149306236 body=173 status=ok
// SIG undefined FUN_149306236(void)

ulonglong FUN_149306236(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  undefined7 uVar11;
  bool bVar12;
  ulonglong uVar10;
  
  plVar4 = (longlong *)param_1[0xe];
  if (plVar4 == (longlong *)0x0) {
LAB_149306289:
    uVar10 = 0;
  }
  else {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_149306289;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar12 = iVar7 == iVar5;
      if (bVar12) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar12);
    if (param_1[0xd] == 0) {
      uVar10 = 0;
    }
    else {
      uVar8 = FUN_149305be0(param_1,param_2,param_3);
      if ((uVar8 == 0xffffffff) ||
         (lVar3 = *param_1 + (longlong)(int)uVar8 * 0x48, uVar8 = (uint)(lVar3 != 0),
         lVar3 == -0x10 || lVar3 == 0)) {
        bVar6 = (byte)uVar8;
        bVar9 = 0;
        uVar11 = 0;
      }
      else {
        bVar6 = FUN_1493062e4(param_1,param_2,param_3);
        uVar11 = (undefined7)((ulonglong)param_3 >> 8);
        bVar9 = 1;
      }
      uVar10 = CONCAT71(uVar11,bVar9 & bVar6);
    }
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
  return uVar10 & 0xffffffff;
}



// FUNCTION 1493062e4 FUN_1493062e4 body=466 status=ok
// SIG undefined FUN_1493062e4(void)

ulonglong FUN_1493062e4(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  undefined8 unaff_RSI;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_a8 [44];
  int local_7c;
  undefined2 *local_78;
  undefined8 uStack_70;
  longlong local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = (longlong *)param_1[0xe];
  if (plVar3 == (longlong *)0x0) {
LAB_149306354:
    uVar10 = 0;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_149306354;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar12 = iVar7 == iVar5;
      if (bVar12) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar12);
    lVar4 = param_1[0xd];
    uVar10 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      FUN_1493064b8(param_1,&local_60);
      local_78 = (undefined2 *)0x0;
      uStack_70 = 0;
      uVar11 = 0;
      if (local_60 == 0) {
        uStack_70._0_4_ = 0;
        puVar9 = &DAT_149dfb77a;
      }
      else {
        FUN_1492ff8ec(local_60,local_58,&local_78);
        puVar9 = local_78;
        if ((int)uStack_70 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
      }
      uVar8 = (ulonglong)((int)uStack_70 - 1);
      if ((int)uStack_70 == 0) {
        uVar8 = uVar11;
      }
      uVar6 = FUN_144a49b4a(uVar8,puVar9);
      iVar7 = FUN_149305be0(param_1,uVar6,&local_78);
      if (iVar7 != -1) {
        uVar11 = (longlong)iVar7 * 0x48 + *param_1;
      }
      *(longlong *)(uVar11 + 0x10) = *param_4;
      FUN_144a787a6(uVar11 + 0x18,param_4 + 1);
      if (*param_4 != 0) {
        FUN_149306054(*param_4,param_4 + 1,&local_78);
      }
      FUN_1492f0b5e(lVar4,local_58);
      FUN_1492f0b5e(lVar4,param_4 + 4);
      FUN_14930659c(param_1,param_2,param_3);
      local_7c = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
      if (param_1[10] != 0) {
        FUN_149303af2(param_1[10],param_1 + 0xb,&local_7c);
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
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
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 1493064b8 FUN_1493064b8 body=227 status=ok
// SIG undefined FUN_1493064b8(void)

undefined8 * FUN_1493064b8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x70);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    while (iVar6 != 0) {
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      if (bVar7) {
        lVar4 = *(longlong *)(param_1 + 0x68);
        if (lVar4 == 0) {
          *param_2 = 0;
          param_2[1] = 0;
          param_2[2] = 0;
        }
        else {
          FUN_149305156(param_1,local_38,~*(uint *)(param_1 + 0x34) + *(int *)(param_1 + 8));
          FUN_1444be0f2(param_2,local_38,lVar4);
          if (local_38[0] != 0) {
            FUN_1400020a8();
          }
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
        if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 14930659c FUN_14930659c body=217 status=ok
// SIG undefined FUN_14930659c(void)

undefined8 FUN_14930659c(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar7 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      iVar2 = (int)param_3[1];
LAB_1493065f0:
      plVar7 = (longlong *)(*param_1 + (longlong)iVar1 * 0x48);
      if ((int)plVar7[1] == iVar2) {
        if (1 < iVar2) {
          lVar3 = 0;
          do {
            uVar5 = *(ushort *)(*plVar7 + lVar3);
            uVar6 = (ulonglong)uVar5;
            uVar4 = *(ushort *)(*param_3 + lVar3);
            if (uVar5 == uVar4) {
              if (uVar5 == 0) break;
            }
            else {
              if (0x7f < (uVar4 | uVar5)) goto LAB_14930665a;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
              uVar8 = (ulonglong)uVar4;
              uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar8]) goto LAB_14930665a;
            }
            lVar3 = lVar3 + 2;
          } while( true );
        }
        goto LAB_149306660;
      }
      if ((int)plVar7[1] + iVar2 == 1) goto LAB_149306660;
      goto LAB_14930664e;
    }
  }
  return 0;
LAB_14930665a:
  if (uVar5 == uVar4) {
LAB_149306660:
    FUN_149306676();
    return 1;
  }
LAB_14930664e:
  iVar1 = (int)plVar7[8];
  if (iVar1 == -1) {
    return 0;
  }
  goto LAB_1493065f0;
}



// FUNCTION 149306676 FUN_149306676 body=123 status=ok
// SIG undefined FUN_149306676(void)

void FUN_149306676(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x48;
  lVar6 = (longlong)*(int *)(lVar1 + 0x44);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x40 + lVar6 * 0x48);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x48 + 0x40);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x40);
  FUN_149305118((longlong)param_2 * 0x48 + *param_1);
  FUN_149305cac(param_1,param_2,1);
  return;
}



// FUNCTION 1493066f2 FUN_1493066f2 body=207 status=ok
// SIG undefined FUN_1493066f2(void)

undefined8 FUN_1493066f2(longlong *param_1,undefined8 *param_2,void *param_3)

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
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 0x2c)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 0x60)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        memcpy(param_3,(void *)(lVar4 + param_1[10]),0x60);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 1493067c2 FUN_1493067c2 body=418 status=ok
// SIG undefined FUN_1493067c2(void)

ulonglong FUN_1493067c2(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
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
LAB_149306876:
    local_58 = param_2;
    FUN_140c5653a(param_1,&local_4c,&local_58,0);
    lVar7 = *param_1 + (longlong)local_4c * 0x40;
    plVar9 = (longlong *)(lVar7 + 0x10);
    *(undefined4 *)(lVar7 + 0x20) = 0x2c;
    *(undefined8 *)(lVar7 + 0x18) = 0x60;
    lVar7 = param_1[0xb];
    param_1[0xb] = lVar7 + 0x60;
    if ((ulonglong)(param_1[0xc] - lVar7) < 0x60) {
      FUN_14112c458(param_1 + 10,lVar7);
    }
    lVar2 = param_1[10];
    puVar1 = (undefined8 *)(lVar2 + 0x50 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x40 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar2 + lVar7) = 0;
    ((undefined8 *)(lVar2 + lVar7))[1] = 0;
    *plVar9 = lVar7;
  }
  else {
    lVar7 = *param_1 + (longlong)iVar5 * 0x40;
    if (lVar7 == 0) goto LAB_149306876;
    uVar8 = 0x100000;
    if (*(int *)(lVar7 + 0x20) != 0x2c) goto LAB_149306924;
    plVar9 = (longlong *)(*param_1 + (longlong)iVar5 * 0x40 + 0x10);
    uVar8 = 0x400000;
    if ((*plVar9 < 0) || (param_1[0xb] <= *plVar9)) goto LAB_149306924;
  }
  *(undefined4 *)((longlong)plVar9 + 0x14) = param_4;
  uVar8 = FUN_149306966(param_1,plVar9,param_3);
  if ((uVar8 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_149306924:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 149306966 FUN_149306966 body=209 status=ok
// SIG undefined FUN_149306966(void)

undefined8 FUN_149306966(longlong param_1,longlong *param_2,void *param_3)

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
    if (((int)param_2[2] == 0x2c) && (uVar1 = 0x200000, param_2[1] == 0x60)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,0x60);
        param_2[3] = local_40;
        param_2[4] = lStack_38;
        memcpy((void *)(*(longlong *)(param_1 + 0x50) + *param_2),param_3,0x60);
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



// FUNCTION 149306a38 FUN_149306a38 body=38 status=ok
// SIG undefined FUN_149306a38(void)

void FUN_149306a38(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149300fbe(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 149306a5e FUN_149306a5e body=290 status=ok
// SIG undefined FUN_149306a5e(void)

ulonglong FUN_149306a5e(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444be324(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_149306b2d:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_149306b2d;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 1) goto LAB_149306b2d;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_149302700(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_149306b44;
  }
  param_3 = 0;
LAB_149306b44:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149306b82 FUN_149306b82 body=290 status=ok
// SIG undefined FUN_149306b82(void)

ulonglong FUN_149306b82(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444be0f2(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_149306c51:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_149306c51;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0x12) goto LAB_149306c51;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_1492ff8ec(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_149306c68;
  }
  param_3 = 0;
LAB_149306c68:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149306ca6 FUN_149306ca6 body=290 status=ok
// SIG undefined FUN_149306ca6(void)

ulonglong FUN_149306ca6(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444bd5f8(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_149306d75:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_149306d75;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 8) goto LAB_149306d75;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_149302adc(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_149306d8c;
  }
  param_3 = 0;
LAB_149306d8c:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149306dca FUN_149306dca body=290 status=ok
// SIG undefined FUN_149306dca(void)

ulonglong FUN_149306dca(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444bd82a(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_149306e99:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_149306e99;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 6) goto LAB_149306e99;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_149302df4(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_149306eb0;
  }
  param_3 = 0;
LAB_149306eb0:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149306eee FUN_149306eee body=290 status=ok
// SIG undefined FUN_149306eee(void)

ulonglong FUN_149306eee(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444bd3c6(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_149306fbd:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_149306fbd;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0xc) goto LAB_149306fbd;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_1493027c6(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_149306fd4;
  }
  param_3 = 0;
LAB_149306fd4:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149307011 FUN_149307011 body=43 status=ok
// SIG undefined FUN_149307011(void)

void FUN_149307011(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14930703c FUN_14930703c body=29 status=ok
// SIG undefined FUN_14930703c(void)

void FUN_14930703c(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0xffffffff00000000;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14930705a FUN_14930705a body=147 status=ok
// SIG undefined FUN_14930705a(void)

void FUN_14930705a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1493070ee FUN_1493070ee body=381 status=ok
// SIG undefined FUN_1493070ee(void)

ulonglong FUN_1493070ee(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
LAB_14930719c:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar5 = *param_1 + (longlong)local_44 * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 10;
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
    if (lVar5 == 0) goto LAB_14930719c;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 10) goto LAB_14930722c;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_14930722c;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_14930726c(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_14930722c:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14930726c FUN_14930726c body=202 status=ok
// SIG undefined FUN_14930726c(void)

undefined8 FUN_14930726c(longlong param_1,longlong *param_2,undefined1 *param_3)

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
    if (((int)param_2[2] == 10) && (uVar1 = 0x200000, param_2[1] == 1)) {
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



// FUNCTION 149307338 FUN_149307338 body=387 status=ok
// SIG undefined FUN_149307338(void)

ulonglong FUN_149307338(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
LAB_1493073e6:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar5 = *param_1 + (longlong)local_44 * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 0xb;
    *(undefined8 *)(lVar5 + 0x18) = 2;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 2;
    if ((ulonglong)(param_1[0xc] - lVar5) < 2) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined2 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_1493073e6;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0xb) goto LAB_14930747c;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_14930747c;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_1493074bc(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_14930747c:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1493074bc FUN_1493074bc body=202 status=ok
// SIG undefined FUN_1493074bc(void)

undefined8 FUN_1493074bc(longlong param_1,longlong *param_2,undefined2 *param_3)

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
    if (((int)param_2[2] == 0xb) && (uVar1 = 0x200000, param_2[1] == 2)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,2);
        *(undefined4 *)(param_2 + 3) = local_40;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_3c;
        *(undefined4 *)(param_2 + 4) = uStack_38;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_34;
        *(undefined2 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
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



// FUNCTION 149307588 FUN_149307588 body=388 status=ok
// SIG undefined FUN_149307588(void)

ulonglong FUN_149307588(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
LAB_149307636:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar5 = *param_1 + (longlong)local_44 * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 0xd;
    *(undefined8 *)(lVar5 + 0x18) = 8;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 8;
    if ((ulonglong)(param_1[0xc] - lVar5) < 8) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined8 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_149307636;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0xd) goto LAB_1493076cd;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_1493076cd;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_14930770e(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_1493076cd:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14930770e FUN_14930770e body=202 status=ok
// SIG undefined FUN_14930770e(void)

undefined8 FUN_14930770e(longlong param_1,longlong *param_2,undefined8 *param_3)

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
    if (((int)param_2[2] == 0xd) && (uVar1 = 0x200000, param_2[1] == 8)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,8);
        *(undefined4 *)(param_2 + 3) = local_40;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_3c;
        *(undefined4 *)(param_2 + 4) = uStack_38;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_34;
        *(undefined8 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
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



// FUNCTION 1493077da FUN_1493077da body=387 status=ok
// SIG undefined FUN_1493077da(void)

ulonglong FUN_1493077da(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
LAB_149307888:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar5 = *param_1 + (longlong)local_44 * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 0x16;
    *(undefined8 *)(lVar5 + 0x18) = 2;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 2;
    if ((ulonglong)(param_1[0xc] - lVar5) < 2) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined2 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_149307888;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0x16) goto LAB_14930791e;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_14930791e;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_14930795e(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_14930791e:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14930795e FUN_14930795e body=202 status=ok
// SIG undefined FUN_14930795e(void)

undefined8 FUN_14930795e(longlong param_1,longlong *param_2,undefined2 *param_3)

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
    if (((int)param_2[2] == 0x16) && (uVar1 = 0x200000, param_2[1] == 2)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,2);
        *(undefined4 *)(param_2 + 3) = local_40;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_3c;
        *(undefined4 *)(param_2 + 4) = uStack_38;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_34;
        *(undefined2 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
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



// FUNCTION 149307a2a FUN_149307a2a body=388 status=ok
// SIG undefined FUN_149307a2a(void)

ulonglong FUN_149307a2a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
LAB_149307ad8:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar5 = *param_1 + (longlong)local_44 * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 0x17;
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
    if (lVar5 == 0) goto LAB_149307ad8;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0x17) goto LAB_149307b6f;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_149307b6f;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_149307bb0(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_149307b6f:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 149307bb0 FUN_149307bb0 body=200 status=ok
// SIG undefined FUN_149307bb0(void)

undefined8 FUN_149307bb0(longlong param_1,longlong *param_2,undefined4 *param_3)

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
    if (((int)param_2[2] == 0x17) && (uVar1 = 0x200000, param_2[1] == 4)) {
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



// FUNCTION 149307c7a FUN_149307c7a body=388 status=ok
// SIG undefined FUN_149307c7a(void)

ulonglong FUN_149307c7a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
LAB_149307d28:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar5 = *param_1 + (longlong)local_44 * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 0x18;
    *(undefined8 *)(lVar5 + 0x18) = 8;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 8;
    if ((ulonglong)(param_1[0xc] - lVar5) < 8) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined8 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_149307d28;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0x18) goto LAB_149307dbf;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_149307dbf;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_149307e00(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_149307dbf:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 149307e00 FUN_149307e00 body=202 status=ok
// SIG undefined FUN_149307e00(void)

undefined8 FUN_149307e00(longlong param_1,longlong *param_2,undefined8 *param_3)

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
    if (((int)param_2[2] == 0x18) && (uVar1 = 0x200000, param_2[1] == 8)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,8);
        *(undefined4 *)(param_2 + 3) = local_40;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_3c;
        *(undefined4 *)(param_2 + 4) = uStack_38;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_34;
        *(undefined8 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
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



// FUNCTION 149307ecc FUN_149307ecc body=387 status=ok
// SIG undefined FUN_149307ecc(void)

ulonglong FUN_149307ecc(longlong *param_1,undefined8 *param_2,undefined8 param_3)

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
LAB_149307f7a:
    local_50 = param_2;
    FUN_140c5653a(param_1,&local_44,&local_50,0);
    lVar5 = *param_1 + (longlong)local_44 * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 0x1d;
    *(undefined8 *)(lVar5 + 0x18) = 2;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 2;
    if ((ulonglong)(param_1[0xc] - lVar5) < 2) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined2 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_149307f7a;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 0x1d) goto LAB_149308010;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_149308010;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = 0;
  uVar7 = FUN_149308050(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_149308010:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}


