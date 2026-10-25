// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1478a97c4 FUN_1478a97c4 body=156 status=ok
// SIG undefined FUN_1478a97c4(void)

void FUN_1478a97c4(undefined8 param_1,longlong param_2)

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
  FUN_147a32dda(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478a9862 FUN_1478a9862 body=156 status=ok
// SIG undefined FUN_1478a9862(void)

void FUN_1478a9862(undefined8 param_1,longlong param_2)

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
  FUN_1463bffea(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478a9900 FUN_1478a9900 body=156 status=ok
// SIG undefined FUN_1478a9900(void)

void FUN_1478a9900(undefined8 param_1,longlong param_2)

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
  FUN_147a32db0(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478a999e FUN_1478a999e body=156 status=ok
// SIG undefined FUN_1478a999e(void)

void FUN_1478a999e(undefined8 param_1,longlong param_2)

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
  FUN_147a32dbe(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478a9a6f FUN_1478a9a6f body=103 status=ok
// SIG undefined FUN_1478a9a6f(void)

void FUN_1478a9a6f(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_24);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478a9ad7 FUN_1478a9ad7 body=113 status=ok
// SIG undefined FUN_1478a9ad7(void)

void FUN_1478a9ad7(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(param_2 + 4);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478a9b49 FUN_1478a9b49 body=105 status=ok
// SIG undefined FUN_1478a9b49(void)

void FUN_1478a9b49(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478a9bc6 FUN_1478a9bc6 body=250 status=ok
// SIG undefined FUN_1478a9bc6(void)

void FUN_1478a9bc6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  FUN_147d73806(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478a9cc2 FUN_1478a9cc2 body=425 status=ok
// SIG undefined FUN_1478a9cc2(void)

void FUN_1478a9cc2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
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
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  local_68 = local_48;
  FUN_1408c9004(param_1,local_20,&local_58,local_40);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478a9e6c FUN_1478a9e6c body=425 status=ok
// SIG undefined FUN_1478a9e6c(void)

void FUN_1478a9e6c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
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
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  local_68 = local_48;
  FUN_147d738ca(param_1,local_20,&local_58,local_40);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478aa016 FUN_1478aa016 body=425 status=ok
// SIG undefined FUN_1478aa016(void)

void FUN_1478aa016(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
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
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  local_68 = local_48;
  FUN_147d7386e(param_1,local_20,&local_58,local_40);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478aa1c4 FUN_1478aa1c4 body=37 status=ok
// SIG undefined FUN_1478aa1c4(void)

void FUN_1478aa1c4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147d739a0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478aa1ea FUN_1478aa1ea body=39 status=ok
// SIG undefined FUN_1478aa1ea(void)

void FUN_1478aa1ea(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147d73932();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478aa212 FUN_1478aa212 body=39 status=ok
// SIG undefined FUN_1478aa212(void)

void FUN_1478aa212(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147d7395e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478aa23a FUN_1478aa23a body=39 status=ok
// SIG undefined FUN_1478aa23a(void)

void FUN_1478aa23a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1437421b8();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478aa262 FUN_1478aa262 body=39 status=ok
// SIG undefined FUN_1478aa262(void)

void FUN_1478aa262(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14374218e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478aa28e FUN_1478aa28e body=37 status=ok
// SIG undefined FUN_1478aa28e(void)

void FUN_1478aa28e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147d7393c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478aa2b8 FUN_1478aa2b8 body=37 status=ok
// SIG undefined FUN_1478aa2b8(void)

void FUN_1478aa2b8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147d73768();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478aa2e2 FUN_1478aa2e2 body=37 status=ok
// SIG undefined FUN_1478aa2e2(void)

void FUN_1478aa2e2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147d73946();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478aa308 FUN_1478aa308 body=267 status=ok
// SIG undefined FUN_1478aa308(void)

void FUN_1478aa308(undefined8 param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_d8 [32];
  undefined2 local_b8;
  undefined1 local_b6;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = 1;
  local_b6 = 2;
  local_b4 = 0x3f80000040a00000;
  local_28 = 0;
  local_ac = 0;
  uStack_a4 = 0;
  local_9c = 0;
  uStack_94 = 0;
  local_8c = 0;
  uStack_84 = 0;
  local_7c = 0;
  uStack_74 = 0;
  local_6c = 0;
  uStack_64 = 0;
  local_5c = 0;
  uStack_54 = 0;
  local_4c = 0;
  uStack_44 = 0;
  local_3c = 0;
  uStack_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar1 = *(undefined2 **)(param_2 + 0x38);
  if (*(undefined2 **)(param_2 + 0x38) == (undefined2 *)0x0) {
    puVar1 = &local_b8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d739aa(param_1,puVar1);
  FUN_140fbaa6a(&local_b8);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478aa456 FUN_1478aa456 body=238 status=ok
// SIG undefined FUN_1478aa456(void)

void FUN_1478aa456(undefined8 param_1,longlong param_2)

{
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
  FUN_143742206(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478aa54a FUN_1478aa54a body=158 status=ok
// SIG undefined FUN_1478aa54a(void)

void FUN_1478aa54a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d7398a(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478aa5ea FUN_1478aa5ea body=238 status=ok
// SIG undefined FUN_1478aa5ea(void)

void FUN_1478aa5ea(undefined8 param_1,longlong param_2)

{
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
  FUN_1437422ce(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478aa6de FUN_1478aa6de body=158 status=ok
// SIG undefined FUN_1478aa6de(void)

void FUN_1478aa6de(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145754008(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478aa77e FUN_1478aa77e body=156 status=ok
// SIG undefined FUN_1478aa77e(void)

void FUN_1478aa77e(undefined8 param_1,longlong param_2)

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
  FUN_147d73968(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478aa828 FUN_1478aa828 body=338 status=ok
// SIG undefined FUN_1478aa828(void)

void FUN_1478aa828(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
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
  FUN_147d73926(param_1,local_24,iVar1 != 0,local_2c != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478aa97c FUN_1478aa97c body=163 status=ok
// SIG undefined FUN_1478aa97c(void)

void FUN_1478aa97c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_145753ff0(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478aaa20 FUN_1478aaa20 body=156 status=ok
// SIG undefined FUN_1478aaa20(void)

void FUN_1478aaa20(undefined8 param_1,longlong param_2)

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
  FUN_1408c8fc2(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478aaabe FUN_1478aaabe body=152 status=ok
// SIG undefined FUN_1478aaabe(void)

void FUN_1478aaabe(undefined8 param_1,longlong param_2)

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
  FUN_1408c8a12(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478aab58 FUN_1478aab58 body=163 status=ok
// SIG undefined FUN_1478aab58(void)

void FUN_1478aab58(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_145753fe4(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478aabfc FUN_1478aabfc body=238 status=ok
// SIG undefined FUN_1478aabfc(void)

void FUN_1478aabfc(undefined8 param_1,longlong param_2)

{
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
  FUN_14374226a(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478aad0c FUN_1478aad0c body=104 status=ok
// SIG undefined FUN_1478aad0c(void)

void FUN_1478aad0c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac8d80) {
    FUN_144b3d300(&DAT_14cac8d80);
    if (DAT_14cac8d80 == -1) {
      FUN_1446f470e(&DAT_14cac8d78,L"TheTimeline",1);
      _Init_thread_footer(&DAT_14cac8d80);
      return;
    }
  }
  return;
}



// FUNCTION 1478aae10 FUN_1478aae10 body=59 status=ok
// SIG undefined FUN_1478aae10(void)

undefined8 FUN_1478aae10(longlong *param_1)

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



// FUNCTION 1478aae5c FUN_1478aae5c body=38 status=ok
// SIG undefined FUN_1478aae5c(void)

void FUN_1478aae5c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_14006ea76(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1478aaf7e FUN_1478aaf7e body=59 status=ok
// SIG undefined FUN_1478aaf7e(void)

undefined8 FUN_1478aaf7e(longlong *param_1)

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



// FUNCTION 1478ab0b4 FUN_1478ab0b4 body=59 status=ok
// SIG undefined FUN_1478ab0b4(void)

undefined8 FUN_1478ab0b4(longlong *param_1)

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



// FUNCTION 1478ab214 FUN_1478ab214 body=59 status=ok
// SIG undefined FUN_1478ab214(void)

undefined8 FUN_1478ab214(longlong *param_1)

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



// FUNCTION 1478ab386 FUN_1478ab386 body=59 status=ok
// SIG undefined FUN_1478ab386(void)

undefined8 FUN_1478ab386(longlong *param_1)

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



// FUNCTION 1478ab4dc FUN_1478ab4dc body=89 status=ok
// SIG undefined FUN_1478ab4dc(void)

undefined8 FUN_1478ab4dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
      puVar1 = (undefined4 *)(param_3 + lVar10);
      lVar2 = param_2 + 0x28 + lVar10;
      *(undefined4 *)(lVar2 + -8) = puVar1[8];
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      *(undefined4 *)(lVar2 + -0x18) = puVar1[4];
      *(undefined4 *)(lVar2 + -0x14) = uVar7;
      *(undefined4 *)(lVar2 + -0x10) = uVar8;
      *(undefined4 *)(lVar2 + -0xc) = uVar9;
      *(undefined4 *)(lVar2 + -0x28) = uVar3;
      *(undefined4 *)(lVar2 + -0x24) = uVar4;
      *(undefined4 *)(lVar2 + -0x20) = uVar5;
      *(undefined4 *)(lVar2 + -0x1c) = uVar6;
      FUN_1478836e4();
      lVar10 = lVar10 + 0x150;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478ab55e FUN_1478ab55e body=59 status=ok
// SIG undefined FUN_1478ab55e(void)

undefined8 FUN_1478ab55e(longlong *param_1)

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



// FUNCTION 1478ab5aa FUN_1478ab5aa body=39 status=ok
// SIG undefined FUN_1478ab5aa(void)

void FUN_1478ab5aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x150) == '\x01') {
    FUN_1401b97de(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x150) = 0;
  }
  return;
}



// FUNCTION 1478ab666 FUN_1478ab666 body=42 status=ok
// SIG undefined FUN_1478ab666(void)

void FUN_1478ab666(undefined8 param_1,longlong *param_2)

{
  FUN_1401fc47e(param_2 + 2);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478ab6ce FUN_1478ab6ce body=59 status=ok
// SIG undefined FUN_1478ab6ce(void)

undefined8 FUN_1478ab6ce(longlong *param_1)

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



// FUNCTION 1478ab714 FUN_1478ab714 body=46 status=ok
// SIG undefined FUN_1478ab714(void)

void FUN_1478ab714(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[0xc] == '\x01') {
    FUN_1401fc47e(param_2 + 2);
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1478ab7d0 FUN_1478ab7d0 body=63 status=ok
// SIG undefined FUN_1478ab7d0(void)

undefined1 FUN_1478ab7d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478ab8fa(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 1478ab838 FUN_1478ab838 body=59 status=ok
// SIG undefined FUN_1478ab838(void)

undefined8 FUN_1478ab838(longlong *param_1)

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



// FUNCTION 1478ab884 FUN_1478ab884 body=40 status=ok
// SIG undefined FUN_1478ab884(void)

void FUN_1478ab884(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_145cf0cc2(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1478ab8fa FUN_1478ab8fa body=69 status=ok
// SIG undefined FUN_1478ab8fa(void)

longlong FUN_1478ab8fa(longlong param_1,longlong param_2)

{
  FUN_1407ce9d0();
  FUN_1478ab940(param_1 + 0x10,param_2 + 0x10);
  FUN_1478ab99a(param_1 + 0x20,param_2 + 0x20);
  FUN_147882f80(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 1478ab940 FUN_1478ab940 body=89 status=ok
// SIG undefined FUN_1478ab940(void)

undefined8 * FUN_1478ab940(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1478ab9f0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 1478ab99a FUN_1478ab99a body=85 status=ok
// SIG undefined FUN_1478ab99a(void)

undefined8 * FUN_1478ab99a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1478aba64(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x34);
      }
    }
  }
  return param_1;
}



// FUNCTION 1478ab9f0 FUN_1478ab9f0 body=115 status=ok
// SIG undefined FUN_1478ab9f0(void)

void FUN_1478ab9f0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,4);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1478aba64 FUN_1478aba64 body=111 status=ok
// SIG undefined FUN_1478aba64(void)

void FUN_1478aba64(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x34,4);
    iVar2 = (int)(uVar1 / 0x34);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x34,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1478abb18 FUN_1478abb18 body=42 status=ok
// SIG undefined FUN_1478abb18(void)

void FUN_1478abb18(undefined8 param_1,longlong *param_2)

{
  FUN_1401fc47e(param_2 + 2);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478abb5e FUN_1478abb5e body=54 status=ok
// SIG undefined FUN_1478abb5e(void)

undefined1 FUN_1478abb5e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147bbf3d8(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 1478abbbc FUN_1478abbbc body=59 status=ok
// SIG undefined FUN_1478abbbc(void)

undefined8 FUN_1478abbbc(longlong *param_1)

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



// FUNCTION 1478abc02 FUN_1478abc02 body=46 status=ok
// SIG undefined FUN_1478abc02(void)

void FUN_1478abc02(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[0xc] == '\x01') {
    FUN_1401fc47e(param_2 + 2);
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1478abd3c FUN_1478abd3c body=68 status=ok
// SIG undefined FUN_1478abd3c(void)

undefined8 FUN_1478abd3c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x98);
      lVar1 = lVar1 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478abda8 FUN_1478abda8 body=59 status=ok
// SIG undefined FUN_1478abda8(void)

undefined8 FUN_1478abda8(longlong *param_1)

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



// FUNCTION 1478abf2c FUN_1478abf2c body=59 status=ok
// SIG undefined FUN_1478abf2c(void)

undefined8 FUN_1478abf2c(longlong *param_1)

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



// FUNCTION 1478abf72 FUN_1478abf72 body=32 status=ok
// SIG undefined FUN_1478abf72(void)

void FUN_1478abf72(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410dc120(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1478ac04a FUN_1478ac04a body=132 status=ok
// SIG undefined FUN_1478ac04a(void)

undefined8 FUN_1478ac04a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    bVar3 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar6);
      if ((bVar3 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar6);
          bVar3 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar6);
      *plVar1 = lVar2;
      lVar2 = 8;
      plVar5 = plVar1;
      plVar4 = (longlong *)(param_3 + lVar6);
      while( true ) {
        plVar4 = plVar4 + 1;
        plVar5 = plVar5 + 1;
        if (lVar2 == 0) break;
        lVar2 = lVar2 + -1;
        *plVar5 = *plVar4;
      }
      *(char *)(plVar1 + 9) = (char)((longlong *)(param_3 + lVar6))[9];
      lVar6 = lVar6 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478ac0f6 FUN_1478ac0f6 body=59 status=ok
// SIG undefined FUN_1478ac0f6(void)

undefined8 FUN_1478ac0f6(longlong *param_1)

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



// FUNCTION 1478ac20c FUN_1478ac20c body=59 status=ok
// SIG undefined FUN_1478ac20c(void)

undefined8 FUN_1478ac20c(longlong *param_1)

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



// FUNCTION 1478ac334 FUN_1478ac334 body=59 status=ok
// SIG undefined FUN_1478ac334(void)

undefined8 FUN_1478ac334(longlong *param_1)

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



// FUNCTION 1478ac41e FUN_1478ac41e body=54 status=ok
// SIG undefined FUN_1478ac41e(void)

undefined1 FUN_1478ac41e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478ac532(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1478ac47c FUN_1478ac47c body=59 status=ok
// SIG undefined FUN_1478ac47c(void)

undefined8 FUN_1478ac47c(longlong *param_1)

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



// FUNCTION 1478ac4c2 FUN_1478ac4c2 body=33 status=ok
// SIG undefined FUN_1478ac4c2(void)

void FUN_1478ac4c2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1449db362(param_2 + 0x30);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1478ac532 FUN_1478ac532 body=94 status=ok
// SIG undefined FUN_1478ac532(void)

longlong * FUN_1478ac532(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *param_2;
    }
  }
  *param_1 = lVar3;
  lVar3 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar3;
  param_1[5] = param_2[5];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(int *)(param_1 + 4) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  FUN_1478ac590(param_1 + 6,param_2 + 6);
  return param_1;
}



// FUNCTION 1478ac590 FUN_1478ac590 body=130 status=ok
// SIG undefined FUN_1478ac590(void)

void FUN_1478ac590(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ac65c FUN_1478ac65c body=54 status=ok
// SIG undefined FUN_1478ac65c(void)

undefined1 FUN_1478ac65c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478ac770(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1478ac6ba FUN_1478ac6ba body=59 status=ok
// SIG undefined FUN_1478ac6ba(void)

undefined8 FUN_1478ac6ba(longlong *param_1)

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



// FUNCTION 1478ac700 FUN_1478ac700 body=33 status=ok
// SIG undefined FUN_1478ac700(void)

void FUN_1478ac700(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1449db362(param_2 + 0x30);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1478ac770 FUN_1478ac770 body=94 status=ok
// SIG undefined FUN_1478ac770(void)

longlong * FUN_1478ac770(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *param_2;
    }
  }
  *param_1 = lVar3;
  lVar3 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar3;
  param_1[5] = param_2[5];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(int *)(param_1 + 4) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  FUN_140328a42(param_1 + 6,param_2 + 6);
  return param_1;
}



// FUNCTION 1478ac818 FUN_1478ac818 body=54 status=ok
// SIG undefined FUN_1478ac818(void)

undefined1 FUN_1478ac818(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478ac92c(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1478ac876 FUN_1478ac876 body=59 status=ok
// SIG undefined FUN_1478ac876(void)

undefined8 FUN_1478ac876(longlong *param_1)

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



// FUNCTION 1478ac8bc FUN_1478ac8bc body=33 status=ok
// SIG undefined FUN_1478ac8bc(void)

void FUN_1478ac8bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1449db362(param_2 + 0x30);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1478ac92c FUN_1478ac92c body=94 status=ok
// SIG undefined FUN_1478ac92c(void)

longlong * FUN_1478ac92c(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *param_2;
    }
  }
  *param_1 = lVar3;
  lVar3 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar3;
  param_1[5] = param_2[5];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = param_2[4];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(int *)(param_1 + 4) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  FUN_146a76aa4(param_1 + 6,param_2 + 6);
  return param_1;
}



// FUNCTION 1478aca44 FUN_1478aca44 body=63 status=ok
// SIG undefined FUN_1478aca44(void)

undefined1 FUN_1478aca44(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478acb6c(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 1478acaac FUN_1478acaac body=59 status=ok
// SIG undefined FUN_1478acaac(void)

undefined8 FUN_1478acaac(longlong *param_1)

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



// FUNCTION 1478acaf8 FUN_1478acaf8 body=38 status=ok
// SIG undefined FUN_1478acaf8(void)

void FUN_1478acaf8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_140fbaa6a(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 1478acb6c FUN_1478acb6c body=135 status=ok
// SIG undefined FUN_1478acb6c(void)

undefined4 * FUN_1478acb6c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1478acbf4(param_1 + 4,param_2 + 4);
  FUN_1478acc44(param_1 + 8,param_2 + 8);
  FUN_1478acca2(param_1 + 0xc,param_2 + 0xc);
  FUN_1478acd00(param_1 + 0x10,param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = uVar4;
  uVar1 = param_2[0x1d];
  uVar2 = param_2[0x1e];
  uVar3 = param_2[0x1f];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar1;
  param_1[0x1e] = uVar2;
  param_1[0x1f] = uVar3;
  FUN_14009d848(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  return param_1;
}



// FUNCTION 1478acbf4 FUN_1478acbf4 body=79 status=ok
// SIG undefined FUN_1478acbf4(void)

undefined8 * FUN_1478acbf4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1478acd5e(param_1,iVar1);
      FUN_1478acdd1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1478acc44 FUN_1478acc44 body=93 status=ok
// SIG undefined FUN_1478acc44(void)

undefined8 * FUN_1478acc44(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140fbab65(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1478ace08(param_1,iVar1);
      FUN_1478ace6a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1478acca2 FUN_1478acca2 body=93 status=ok
// SIG undefined FUN_1478acca2(void)

undefined8 * FUN_1478acca2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140fbab91(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1478acf16(param_1,iVar1);
      FUN_1478acf78(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1478acd00 FUN_1478acd00 body=93 status=ok
// SIG undefined FUN_1478acd00(void)

undefined8 * FUN_1478acd00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140fbab39(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1478acfac(param_1,iVar1);
      FUN_1478ad00e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1478acd5e FUN_1478acd5e body=115 status=ok
// SIG undefined FUN_1478acd5e(void)

void FUN_1478acd5e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1478acdd1 FUN_1478acdd1 body=55 status=ok
// SIG undefined FUN_1478acdd1(void)

void FUN_1478acdd1(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined4 *)(param_1 + lVar2) = *(undefined4 *)(param_2 + lVar2);
      puVar1 = (undefined8 *)(param_1 + 4 + lVar2);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(param_1 + 4 + lVar2) = *(undefined8 *)(param_2 + 4 + lVar2);
      *(undefined8 *)(param_1 + 0xc + lVar2) = *(undefined8 *)(param_2 + 0xc + lVar2);
      lVar2 = lVar2 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1478ace08 FUN_1478ace08 body=98 status=ok
// SIG undefined FUN_1478ace08(void)

void FUN_1478ace08(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1478ace6a FUN_1478ace6a body=52 status=ok
// SIG undefined FUN_1478ace6a(void)

void FUN_1478ace6a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1478ace9e(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 1478ace9e FUN_1478ace9e body=119 status=ok
// SIG undefined FUN_1478ace9e(void)

longlong * FUN_1478ace9e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar1 = param_2[4];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(int *)(param_1 + 4) = (int)lVar1;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  param_1[5] = param_2[5];
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_1478ac590(param_1 + 6,param_2 + 6);
  return param_1;
}



// FUNCTION 1478acf16 FUN_1478acf16 body=98 status=ok
// SIG undefined FUN_1478acf16(void)

void FUN_1478acf16(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1478acf78 FUN_1478acf78 body=52 status=ok
// SIG undefined FUN_1478acf78(void)

void FUN_1478acf78(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1417b0e28(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 1478acfac FUN_1478acfac body=98 status=ok
// SIG undefined FUN_1478acfac(void)

void FUN_1478acfac(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1478ad00e FUN_1478ad00e body=52 status=ok
// SIG undefined FUN_1478ad00e(void)

void FUN_1478ad00e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1478ad042(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 1478ad042 FUN_1478ad042 body=119 status=ok
// SIG undefined FUN_1478ad042(void)

longlong * FUN_1478ad042(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar1 = param_2[4];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(int *)(param_1 + 4) = (int)lVar1;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  param_1[5] = param_2[5];
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_146a76aa4(param_1 + 6,param_2 + 6);
  return param_1;
}



// FUNCTION 1478ad0ca FUN_1478ad0ca body=41 status=ok
// SIG undefined FUN_1478ad0ca(void)

void FUN_1478ad0ca(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478ad0f8 FUN_1478ad0f8 body=41 status=ok
// SIG undefined FUN_1478ad0f8(void)

void FUN_1478ad0f8(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2b8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478ad122 FUN_1478ad122 body=236 status=ok
// SIG undefined FUN_1478ad122(void)

void FUN_1478ad122(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_38,local_24);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ad210 FUN_1478ad210 body=41 status=ok
// SIG undefined FUN_1478ad210(void)

void FUN_1478ad210(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2d0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478ad25a FUN_1478ad25a body=383 status=ok
// SIG undefined FUN_1478ad25a(void)

void FUN_1478ad25a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2c0))(param_1,local_58 + 4,local_58 + 2,local_58);
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ad3e0 FUN_1478ad3e0 body=482 status=ok
// SIG undefined FUN_1478ad3e0(void)

void FUN_1478ad3e0(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_49;
  longlong local_48;
  ulonglong uStack_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  plVar2 = &local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_49 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  local_50 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_50;
  uVar1 = (**(code **)(*param_1 + 0x2e0))(param_1,local_38,plVar2,local_49);
  *param_3 = uVar1;
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ad5cc FUN_1478ad5cc body=201 status=ok
// SIG undefined FUN_1478ad5cc(void)

void FUN_1478ad5cc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_142aec8be(&local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar2 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147d774fe(plVar2);
  *param_3 = uVar1;
  FUN_140843826(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ad696 FUN_1478ad696 body=272 status=ok
// SIG undefined FUN_1478ad696(void)

void FUN_1478ad696(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
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
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d771d8(&local_38,local_20,local_28);
  FUN_147029504(param_3,&local_38);
  FUN_140843826(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ad7a8 FUN_1478ad7a8 body=278 status=ok
// SIG undefined FUN_1478ad7a8(void)

void FUN_1478ad7a8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_142aec8be(&local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar2 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = thunk_FUN_147025dfc(plVar2,local_38);
  *param_3 = uVar1;
  FUN_140843826(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ad8c0 FUN_1478ad8c0 body=278 status=ok
// SIG undefined FUN_1478ad8c0(void)

void FUN_1478ad8c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_142aec8be(&local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar2 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = thunk_FUN_147025e96(plVar2,local_38);
  *param_3 = uVar1;
  FUN_140843826(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ad9d8 FUN_1478ad9d8 body=270 status=ok
// SIG undefined FUN_1478ad9d8(void)

void FUN_1478ad9d8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_142aec8be(&local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  thunk_FUN_147025f30(plVar1,local_30);
  FUN_140843826(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478adae8 FUN_1478adae8 body=273 status=ok
// SIG undefined FUN_1478adae8(void)

void FUN_1478adae8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_142aec8be(&local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar1 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d77506(&local_40,plVar1);
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
    local_40 = 0;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  FUN_140843826(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478adbfa FUN_1478adbfa body=210 status=ok
// SIG undefined FUN_1478adbfa(void)

void FUN_1478adbfa(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_147d771f2(&local_38,local_28);
  FUN_147029504(param_3,&local_38);
  FUN_140843826(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478adce0 FUN_1478adce0 body=160 status=ok
// SIG undefined FUN_1478adce0(void)

void FUN_1478adce0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x9f8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478add96 FUN_1478add96 body=75 status=ok
// SIG undefined FUN_1478add96(void)

void FUN_1478add96(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14640bc0e(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478adde6 FUN_1478adde6 body=156 status=ok
// SIG undefined FUN_1478adde6(void)

void FUN_1478adde6(undefined8 param_1,longlong param_2)

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
  FUN_145c43dee(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ade84 FUN_1478ade84 body=156 status=ok
// SIG undefined FUN_1478ade84(void)

void FUN_1478ade84(undefined8 param_1,longlong param_2)

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
  FUN_145c43de0(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478adf22 FUN_1478adf22 body=156 status=ok
// SIG undefined FUN_1478adf22(void)

void FUN_1478adf22(undefined8 param_1,longlong param_2)

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
  FUN_145c43dfc(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478adfc0 FUN_1478adfc0 body=156 status=ok
// SIG undefined FUN_1478adfc0(void)

void FUN_1478adfc0(undefined8 param_1,longlong param_2)

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
  FUN_1414ffb2e(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ae05e FUN_1478ae05e body=156 status=ok
// SIG undefined FUN_1478ae05e(void)

void FUN_1478ae05e(undefined8 param_1,longlong param_2)

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
  FUN_145c43dd2(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ae0fc FUN_1478ae0fc body=151 status=ok
// SIG undefined FUN_1478ae0fc(void)

void FUN_1478ae0fc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145c43e0a(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ae1b0 FUN_1478ae1b0 body=75 status=ok
// SIG undefined FUN_1478ae1b0(void)

void FUN_1478ae1b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1437b157c(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ae33a FUN_1478ae33a body=75 status=ok
// SIG undefined FUN_1478ae33a(void)

void FUN_1478ae33a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1417fc2d4(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ae386 FUN_1478ae386 body=45 status=ok
// SIG undefined FUN_1478ae386(void)

longlong FUN_1478ae386(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478ae3b4 FUN_1478ae3b4 body=48 status=ok
// SIG undefined FUN_1478ae3b4(void)

longlong FUN_1478ae3b4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478ae3e4 FUN_1478ae3e4 body=48 status=ok
// SIG undefined FUN_1478ae3e4(void)

longlong FUN_1478ae3e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478ae414 FUN_1478ae414 body=48 status=ok
// SIG undefined FUN_1478ae414(void)

longlong FUN_1478ae414(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478ae444 FUN_1478ae444 body=45 status=ok
// SIG undefined FUN_1478ae444(void)

longlong FUN_1478ae444(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478ae472 FUN_1478ae472 body=45 status=ok
// SIG undefined FUN_1478ae472(void)

longlong FUN_1478ae472(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478ae4b6 FUN_1478ae4b6 body=45 status=ok
// SIG undefined FUN_1478ae4b6(void)

longlong FUN_1478ae4b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a58bac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478ae4ea FUN_1478ae4ea body=45 status=ok
// SIG undefined FUN_1478ae4ea(void)

longlong FUN_1478ae4ea(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145a58bac(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478ae5d8 FUN_1478ae5d8 body=126 status=ok
// SIG undefined FUN_1478ae5d8(void)

undefined8 FUN_1478ae5d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  undefined4 uVar17;
  longlong lVar18;
  
  if (param_4 != 0) {
    lVar18 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar18);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[4];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      uVar10 = puVar1[7];
      uVar11 = puVar1[8];
      uVar12 = puVar1[9];
      uVar13 = puVar1[10];
      uVar14 = puVar1[0xb];
      uVar15 = puVar1[0xd];
      uVar16 = puVar1[0xe];
      uVar17 = puVar1[0xf];
      lVar2 = param_2 + 0x40 + lVar18;
      *(undefined4 *)(lVar2 + -0x10) = puVar1[0xc];
      *(undefined4 *)(lVar2 + -0xc) = uVar15;
      *(undefined4 *)(lVar2 + -8) = uVar16;
      *(undefined4 *)(lVar2 + -4) = uVar17;
      *(undefined4 *)(lVar2 + -0x20) = uVar11;
      *(undefined4 *)(lVar2 + -0x1c) = uVar12;
      *(undefined4 *)(lVar2 + -0x18) = uVar13;
      *(undefined4 *)(lVar2 + -0x14) = uVar14;
      *(undefined4 *)(lVar2 + -0x30) = uVar7;
      *(undefined4 *)(lVar2 + -0x2c) = uVar8;
      *(undefined4 *)(lVar2 + -0x28) = uVar9;
      *(undefined4 *)(lVar2 + -0x24) = uVar10;
      *(undefined4 *)(lVar2 + -0x40) = uVar3;
      *(undefined4 *)(lVar2 + -0x3c) = uVar4;
      *(undefined4 *)(lVar2 + -0x38) = uVar5;
      *(undefined4 *)(lVar2 + -0x34) = uVar6;
      FUN_1404d7984(lVar2,puVar1 + 0x10);
      *(undefined4 *)(lVar2 + 0x28) = puVar1[0x1a];
      lVar18 = lVar18 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478ae67e FUN_1478ae67e body=59 status=ok
// SIG undefined FUN_1478ae67e(void)

undefined8 FUN_1478ae67e(longlong *param_1)

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



// FUNCTION 1478ae6c4 FUN_1478ae6c4 body=33 status=ok
// SIG undefined FUN_1478ae6c4(void)

void FUN_1478ae6c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_14102a02c(param_2 + 0x40);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1478ae76e FUN_1478ae76e body=46 status=ok
// SIG undefined FUN_1478ae76e(void)

void FUN_1478ae76e(undefined8 param_1,longlong param_2)

{
  FUN_1478ae8d4(*(undefined8 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x60));
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478ae7b2 FUN_1478ae7b2 body=94 status=ok
// SIG undefined FUN_1478ae7b2(void)

undefined8 FUN_1478ae7b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
    do {
      puVar2 = (undefined8 *)(param_3 + -0x58);
      puVar3 = (undefined8 *)(param_2 + -0x58);
      for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1478ae8fe(param_2,param_3);
      param_3 = param_3 + 0x68;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478ae838 FUN_1478ae838 body=59 status=ok
// SIG undefined FUN_1478ae838(void)

undefined8 FUN_1478ae838(longlong *param_1)

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



// FUNCTION 1478ae8d4 FUN_1478ae8d4 body=42 status=ok
// SIG undefined FUN_1478ae8d4(void)

void FUN_1478ae8d4(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x40;
    do {
      FUN_14102a02c(param_1);
      param_1 = param_1 + 0x70;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1478ae8fe FUN_1478ae8fe body=95 status=ok
// SIG undefined FUN_1478ae8fe(void)

undefined8 * FUN_1478ae8fe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1478ae8d4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1478ae95e(param_1,iVar1);
      FUN_1478ae9cd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1478ae95e FUN_1478ae95e body=111 status=ok
// SIG undefined FUN_1478ae95e(void)

void FUN_1478ae95e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1478ae9cd FUN_1478ae9cd body=98 status=ok
// SIG undefined FUN_1478ae9cd(void)

void FUN_1478ae9cd(longlong param_1,longlong param_2,int param_3)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
    do {
      uVar1 = *(undefined4 *)(param_2 + -0x40);
      uVar2 = *(undefined4 *)(param_2 + -0x3c);
      uVar3 = *(undefined4 *)(param_2 + -0x38);
      uVar4 = *(undefined4 *)(param_2 + -0x34);
      uVar5 = *(undefined4 *)(param_2 + -0x30);
      uVar6 = *(undefined4 *)(param_2 + -0x2c);
      uVar7 = *(undefined4 *)(param_2 + -0x28);
      uVar8 = *(undefined4 *)(param_2 + -0x24);
      uVar9 = *(undefined4 *)(param_2 + -0x20);
      uVar10 = *(undefined4 *)(param_2 + -0x1c);
      uVar11 = *(undefined4 *)(param_2 + -0x18);
      uVar12 = *(undefined4 *)(param_2 + -0x14);
      uVar13 = *(undefined4 *)(param_2 + -0xc);
      uVar14 = *(undefined4 *)(param_2 + -8);
      uVar15 = *(undefined4 *)(param_2 + -4);
      *(undefined4 *)(param_1 + -0x10) = *(undefined4 *)(param_2 + -0x10);
      *(undefined4 *)(param_1 + -0xc) = uVar13;
      *(undefined4 *)(param_1 + -8) = uVar14;
      *(undefined4 *)(param_1 + -4) = uVar15;
      *(undefined4 *)(param_1 + -0x20) = uVar9;
      *(undefined4 *)(param_1 + -0x1c) = uVar10;
      *(undefined4 *)(param_1 + -0x18) = uVar11;
      *(undefined4 *)(param_1 + -0x14) = uVar12;
      *(undefined4 *)(param_1 + -0x30) = uVar5;
      *(undefined4 *)(param_1 + -0x2c) = uVar6;
      *(undefined4 *)(param_1 + -0x28) = uVar7;
      *(undefined4 *)(param_1 + -0x24) = uVar8;
      *(undefined4 *)(param_1 + -0x40) = uVar1;
      *(undefined4 *)(param_1 + -0x3c) = uVar2;
      *(undefined4 *)(param_1 + -0x38) = uVar3;
      *(undefined4 *)(param_1 + -0x34) = uVar4;
      FUN_1427d8874(param_1,param_2);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      param_1 = param_1 + 0x70;
      param_2 = param_2 + 0x70;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1478aea30 FUN_1478aea30 body=52 status=ok
// SIG undefined FUN_1478aea30(void)

void FUN_1478aea30(longlong param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_1478ae8d4(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1478aea98 FUN_1478aea98 body=54 status=ok
// SIG undefined FUN_1478aea98(void)

undefined1 FUN_1478aea98(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1403fbf4e(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1478aeaf6 FUN_1478aeaf6 body=70 status=ok
// SIG undefined FUN_1478aeaf6(void)

void FUN_1478aeaf6(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1478aebbd(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478aeb48 FUN_1478aeb48 body=37 status=ok
// SIG undefined FUN_1478aeb48(void)

void FUN_1478aeb48(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1478aebbd FUN_1478aebbd body=174 status=ok
// SIG undefined FUN_1478aebbd(void)

undefined8 FUN_1478aebbd(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  if ((int)param_1[1] < 1) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)*param_1;
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    if ((int)param_1[1] != 1) {
      lVar3 = 1;
      lVar4 = 0x10;
      do {
        FUN_140a107dc(&local_58,&local_48,*param_1 + lVar4);
        local_48 = local_58;
        uStack_44 = uStack_54;
        uStack_40 = uStack_50;
        uStack_3c = uStack_4c;
        lVar3 = lVar3 + 1;
        lVar4 = lVar4 + 0x10;
      } while (lVar3 < (int)param_1[1]);
    }
    uVar2 = FUN_1447addd0(&local_48,0x10);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478aecd8 FUN_1478aecd8 body=75 status=ok
// SIG undefined FUN_1478aecd8(void)

void FUN_1478aecd8(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1447addd0(param_2,0x10);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478aedac FUN_1478aedac body=54 status=ok
// SIG undefined FUN_1478aedac(void)

undefined1 FUN_1478aedac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147db78c0(param_2,param_3);
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
  }
  return 1;
}



// FUNCTION 1478aee0a FUN_1478aee0a body=59 status=ok
// SIG undefined FUN_1478aee0a(void)

undefined8 FUN_1478aee0a(longlong *param_1)

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



// FUNCTION 1478aee50 FUN_1478aee50 body=32 status=ok
// SIG undefined FUN_1478aee50(void)

void FUN_1478aee50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_147db78be(param_2);
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 1478aef08 FUN_1478aef08 body=59 status=ok
// SIG undefined FUN_1478aef08(void)

undefined8 FUN_1478aef08(longlong *param_1)

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



// FUNCTION 1478aeff2 FUN_1478aeff2 body=59 status=ok
// SIG undefined FUN_1478aeff2(void)

undefined8 FUN_1478aeff2(longlong *param_1)

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



// FUNCTION 1478af0dc FUN_1478af0dc body=59 status=ok
// SIG undefined FUN_1478af0dc(void)

undefined8 FUN_1478af0dc(longlong *param_1)

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



// FUNCTION 1478af1c6 FUN_1478af1c6 body=59 status=ok
// SIG undefined FUN_1478af1c6(void)

undefined8 FUN_1478af1c6(longlong *param_1)

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



// FUNCTION 1478af2ee FUN_1478af2ee body=59 status=ok
// SIG undefined FUN_1478af2ee(void)

undefined8 FUN_1478af2ee(longlong *param_1)

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



// FUNCTION 1478af3de FUN_1478af3de body=42 status=ok
// SIG undefined FUN_1478af3de(void)

void FUN_1478af3de(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1478af548(param_2);
  return;
}



// FUNCTION 1478af41e FUN_1478af41e body=54 status=ok
// SIG undefined FUN_1478af41e(void)

undefined1 FUN_1478af41e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478af600(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1478af47c FUN_1478af47c body=59 status=ok
// SIG undefined FUN_1478af47c(void)

undefined8 FUN_1478af47c(longlong *param_1)

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



// FUNCTION 1478af4c2 FUN_1478af4c2 body=55 status=ok
// SIG undefined FUN_1478af4c2(void)

void FUN_1478af4c2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1478af548(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1478af548 FUN_1478af548 body=54 status=ok
// SIG undefined FUN_1478af548(void)

void FUN_1478af548(longlong *param_1)

{
  FUN_1478af57e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478af57e FUN_1478af57e body=128 status=ok
// SIG undefined FUN_1478af57e(void)

void FUN_1478af57e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140957390(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1478af600 FUN_1478af600 body=122 status=ok
// SIG undefined FUN_1478af600(void)

longlong FUN_1478af600(longlong param_1,longlong param_2)

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
    FUN_1478af67a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1478af67a FUN_1478af67a body=121 status=ok
// SIG undefined FUN_1478af67a(void)

undefined8 * FUN_1478af67a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1478af57e(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14055df60(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x28);
    }
  }
  return param_1;
}



// FUNCTION 1478af74e FUN_1478af74e body=42 status=ok
// SIG undefined FUN_1478af74e(void)

void FUN_1478af74e(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145a58d38(param_2);
  return;
}



// FUNCTION 1478af78e FUN_1478af78e body=76 status=ok
// SIG undefined FUN_1478af78e(void)

undefined8 FUN_1478af78e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478af8ce(param_2,param_3);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_3 + 0x50);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 1478af802 FUN_1478af802 body=59 status=ok
// SIG undefined FUN_1478af802(void)

undefined8 FUN_1478af802(longlong *param_1)

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



// FUNCTION 1478af848 FUN_1478af848 body=55 status=ok
// SIG undefined FUN_1478af848(void)

void FUN_1478af848(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_145a58d38(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1478af8ce FUN_1478af8ce body=122 status=ok
// SIG undefined FUN_1478af8ce(void)

longlong FUN_1478af8ce(longlong param_1,longlong param_2)

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
    FUN_1478af948(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1478af948 FUN_1478af948 body=320 status=ok
// SIG undefined FUN_1478af948(void)

longlong * FUN_1478af948(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_1 != param_2) {
    uVar2 = *(uint *)(param_2 + 1);
    FUN_145a58da6(param_1,(ulonglong)uVar2);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar2) {
      FUN_14488f93c(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar2) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar6 = 0;
      uVar7 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar7 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar7 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar6) = *(undefined4 *)(lVar3 + lVar6);
          *(undefined4 *)(lVar4 + 4 + lVar6) = *(undefined4 *)(lVar3 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar4 + lVar6) = *(undefined8 *)(lVar3 + lVar6);
          *(undefined8 *)(lVar4 + 0x28 + lVar6) = 0;
          *(undefined4 *)(lVar4 + 0x30 + lVar6) = 0;
          puVar1 = (undefined8 *)(lVar4 + 8 + lVar6);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar4 + 0x34 + lVar6) = 0xffffffff00000080;
          *(undefined4 *)(lVar4 + 0x3c + lVar6) = 0;
          *(undefined8 *)(lVar4 + 0x48 + lVar6) = 0;
          *(undefined4 *)(lVar4 + 0x50 + lVar6) = 0;
          FUN_1478af600(lVar4 + 8 + lVar6,lVar3 + 8 + lVar6);
          *(undefined8 *)(lVar4 + 0x58 + lVar6) = *(undefined8 *)(lVar3 + 0x58 + lVar6);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x60;
      } while (uVar2 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 1478afac4 FUN_1478afac4 body=117 status=ok
// SIG undefined FUN_1478afac4(void)

undefined1 FUN_1478afac4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined1 *)(param_2 + 8 + lVar3) = *(undefined1 *)(param_3 + 8 + lVar3);
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 + 0x10) = lVar2;
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478afb62 FUN_1478afb62 body=59 status=ok
// SIG undefined FUN_1478afb62(void)

undefined8 FUN_1478afb62(longlong *param_1)

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



// FUNCTION 1478afc50 FUN_1478afc50 body=54 status=ok
// SIG undefined FUN_1478afc50(void)

undefined1 FUN_1478afc50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478afd68(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 1478afcae FUN_1478afcae body=59 status=ok
// SIG undefined FUN_1478afcae(void)

undefined8 FUN_1478afcae(longlong *param_1)

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



// FUNCTION 1478afcf4 FUN_1478afcf4 body=38 status=ok
// SIG undefined FUN_1478afcf4(void)

void FUN_1478afcf4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1478afd68 FUN_1478afd68 body=116 status=ok
// SIG undefined FUN_1478afd68(void)

undefined8 * FUN_1478afd68(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[1];
    }
  }
  bVar1 = DAT_14c950c29;
  param_1[1] = lVar2;
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  FUN_1478afddc(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 1478afddc FUN_1478afddc body=79 status=ok
// SIG undefined FUN_1478afddc(void)

undefined8 * FUN_1478afddc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1478afe2c(param_1,iVar1);
      FUN_1478afe9f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1478afe2c FUN_1478afe2c body=115 status=ok
// SIG undefined FUN_1478afe2c(void)

void FUN_1478afe2c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1478afe9f FUN_1478afe9f body=98 status=ok
// SIG undefined FUN_1478afe9f(void)

void FUN_1478afe9f(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      *(undefined1 *)(param_1 + 8 + lVar3) = *(undefined1 *)(param_2 + 8 + lVar3);
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      lVar1 = *(longlong *)(param_2 + 0x10 + lVar3);
      *(longlong *)(param_1 + 0x10 + lVar3) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1478aff88 FUN_1478aff88 body=59 status=ok
// SIG undefined FUN_1478aff88(void)

undefined8 FUN_1478aff88(longlong *param_1)

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



// FUNCTION 1478affce FUN_1478affce body=34 status=ok
// SIG undefined FUN_1478affce(void)

void FUN_1478affce(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1478b003e(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1478b003e FUN_1478b003e body=105 status=ok
// SIG undefined FUN_1478b003e(void)

void FUN_1478b003e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478b019c FUN_1478b019c body=38 status=ok
// SIG undefined FUN_1478b019c(void)

undefined8 FUN_1478b019c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined4 *)(param_3 + lVar1);
      puVar4 = (undefined4 *)(param_2 + lVar1);
      for (lVar2 = 0x15; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x54;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478b01ea FUN_1478b01ea body=59 status=ok
// SIG undefined FUN_1478b01ea(void)

undefined8 FUN_1478b01ea(longlong *param_1)

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



// FUNCTION 1478b02dc FUN_1478b02dc body=54 status=ok
// SIG undefined FUN_1478b02dc(void)

undefined1 FUN_1478b02dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478b03da(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 1478b033a FUN_1478b033a body=59 status=ok
// SIG undefined FUN_1478b033a(void)

undefined8 FUN_1478b033a(longlong *param_1)

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



// FUNCTION 1478b03da FUN_1478b03da body=151 status=ok
// SIG undefined FUN_1478b03da(void)

longlong * FUN_1478b03da(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  
  lVar6 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_14689c22e();
      lVar6 = *param_2;
    }
  }
  bVar5 = DAT_14c950c29;
  *param_1 = lVar6;
  lVar6 = param_2[1];
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_14689c22e();
      lVar6 = param_2[1];
      bVar5 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar6;
  lVar6 = param_2[2];
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_14689c22e();
      lVar6 = param_2[2];
    }
  }
  param_1[2] = lVar6;
  lVar6 = param_2[4];
  lVar1 = param_2[5];
  lVar2 = param_2[6];
  lVar3 = param_2[7];
  lVar4 = param_2[8];
  param_1[3] = param_2[3];
  param_1[4] = lVar6;
  param_1[5] = lVar1;
  param_1[6] = lVar2;
  param_1[7] = lVar3;
  param_1[8] = lVar4;
  return param_1;
}



// FUNCTION 1478b04ba FUN_1478b04ba body=59 status=ok
// SIG undefined FUN_1478b04ba(void)

undefined8 FUN_1478b04ba(longlong *param_1)

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



// FUNCTION 1478b0604 FUN_1478b0604 body=59 status=ok
// SIG undefined FUN_1478b0604(void)

undefined8 FUN_1478b0604(longlong *param_1)

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



// FUNCTION 1478b06ba FUN_1478b06ba body=218 status=ok
// SIG undefined FUN_1478b06ba(void)

undefined8 * FUN_1478b06ba(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_14a631c50;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_1478773b6(param_1 + 0xd,param_2 + 0x68);
  uVar1 = *(undefined4 *)(param_2 + 0x7c);
  uVar2 = *(undefined4 *)(param_2 + 0x80);
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  FUN_144a787a6(param_1 + 0x11,param_2 + 0x88);
  lVar4 = *(longlong *)(param_2 + 0x98);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x98);
    }
  }
  param_1[0x13] = lVar4;
  param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 1478b0794 FUN_1478b0794 body=175 status=ok
// SIG undefined FUN_1478b0794(void)

undefined8 FUN_1478b0794(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = -1;
  local_40 = param_1;
  if ((longlong)DAT_14cacd6d0 != 0) {
    lVar4 = (longlong)DAT_14cacd6d0 << 3;
    lVar5 = 0;
    lVar3 = DAT_14cacd6c8;
    do {
      cVar1 = FUN_1403d434c(lVar3,&local_40);
      if (cVar1 != '\0') {
        lVar2 = lVar5 >> 0x20;
        break;
      }
      lVar3 = lVar3 + 8;
      lVar5 = lVar5 + 0x100000000;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  FUN_144729dda(&local_40);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(undefined8 *)(DAT_14cacd6d8 + lVar2 * 8);
}



// FUNCTION 1478b0844 FUN_1478b0844 body=403 status=ok
// SIG undefined FUN_1478b0844(void)

void FUN_1478b0844(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  void *pvVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  size_t sVar9;
  undefined8 *puVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_5c [4];
  undefined4 local_58 [2];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar4 = FUN_14045d218();
  if (cVar4 != '\0') {
    uVar5 = (**(code **)(*param_1 + 8))(param_1);
    FUN_147a3fb2e(param_1,uVar5);
    iVar6 = FUN_147a3fc6a(param_1,param_2);
    lVar2 = param_1[0xd];
    lVar8 = (longlong)iVar6;
    local_58[0] = *(undefined4 *)(lVar2 + lVar8 * 0x18);
    local_50 = (void *)0x0;
    local_48 = *(int *)(lVar2 + 0x10 + lVar8 * 0x18);
    sVar9 = (size_t)local_48;
    pvVar3 = *(void **)(lVar2 + 8 + lVar8 * 0x18);
    if (sVar9 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1447a127e(&local_50,local_48,0);
      memcpy(local_50,pvVar3,sVar9);
    }
    FUN_1478b09d8(param_1,param_2);
    local_68 = param_2;
    FUN_1478b0a42(param_1,local_5c,param_3,local_50);
    uVar5 = (**(code **)(*param_1 + 8))(param_1);
    FUN_147a3fb2e(param_1,uVar5);
    iVar7 = FUN_147a3fc6a(param_1,param_2);
    iVar6 = local_48;
    pvVar3 = local_50;
    lVar2 = param_1[0xd];
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x18);
    *puVar1 = local_58[0];
    if (puVar1 != local_58) {
      sVar9 = (size_t)local_48;
      puVar1[4] = local_48;
      if (local_48 == 0 && puVar1[5] == 0) {
        puVar1[5] = 0;
      }
      else {
        puVar10 = (undefined8 *)(lVar2 + (longlong)iVar7 * 0x18 + 8);
        FUN_1447a127e(puVar10,local_48);
        if (iVar6 != 0) {
          memcpy((void *)*puVar10,pvVar3,sVar9);
        }
      }
    }
    *puVar1 = param_3;
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b09d8 FUN_1478b09d8 body=104 status=ok
// SIG undefined FUN_1478b09d8(void)

void FUN_1478b09d8(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  uVar1 = FUN_147a3fc6a();
  FUN_1478c31de(param_1 + 0x68,uVar1);
  FUN_1478c3238(param_1 + 0x68);
  FUN_147a3fd66(param_1 + 8,&local_24);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b0a42 FUN_1478b0a42 body=298 status=ok
// SIG undefined FUN_1478b0a42(void)

undefined8 FUN_1478b0a42(longlong param_1,undefined8 param_2,float param_3,undefined8 param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  float *pfVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_78 [40];
  float local_50 [2];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_1 + 0x70);
  uVar6 = 0;
  if (0 < (int)uVar1) {
    pfVar5 = *(float **)(param_1 + 0x68);
    uVar6 = 0;
    do {
      if (param_3 < *pfVar5 || param_3 == *pfVar5) goto LAB_1478b0a8f;
      uVar6 = uVar6 + 1;
      pfVar5 = pfVar5 + 6;
    } while (uVar1 != uVar6);
    uVar6 = (ulonglong)uVar1;
  }
LAB_1478b0a8f:
  local_48 = 0;
  uStack_40 = 0;
  local_50[0] = param_3;
  lVar3 = FUN_1478b0d26((undefined8 *)(param_1 + 0x68),local_50,uVar6 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  puVar7 = (undefined8 *)(lVar3 + 8);
  plVar2 = *(longlong **)(param_1 + 0x98);
  if (plVar2 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    FUN_144a5eaa2(puVar7,-*(int *)((longlong)plVar2 + 0x5c) &
                         ((int)plVar2[0xb] + *(int *)((longlong)plVar2 + 0x5c)) - 1U,1);
    (**(code **)(*plVar2 + 0x2e8))(plVar2,*puVar7,1);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
  }
  FUN_1449b16b6(uVar4,*puVar7,param_4,1);
  FUN_1406509a6(param_1 + 8,&stack0x00000028,uVar6 & 0xffffffff);
  FUN_140da68da(param_1,param_2,uVar6 & 0xffffffff);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b0b6e FUN_1478b0b6e body=74 status=ok
// SIG undefined FUN_1478b0b6e(void)

undefined4 FUN_1478b0b6e(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_14045d218();
  uVar3 = 0;
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 8))(0);
    FUN_147a3fb2e(param_1,uVar3);
    iVar2 = FUN_147a3fc6a(param_1,param_2);
    uVar3 = *(undefined4 *)(param_1[0xd] + (longlong)iVar2 * 0x18);
  }
  return uVar3;
}



// FUNCTION 1478b0bb8 FUN_1478b0bb8 body=366 status=ok
// SIG undefined FUN_1478b0bb8(void)

void FUN_1478b0bb8(longlong param_1,longlong param_2,float param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  float *pfVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  float *pfVar9;
  float fVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (lVar1 == 0) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x70);
  uVar7 = (ulonglong)(int)uVar6;
  if (lVar1 != param_2 || (longlong)uVar7 < 1) {
    return;
  }
  pfVar4 = *(float **)(param_1 + 0x68);
  uVar5 = *(undefined8 *)(pfVar4 + 2);
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    if ((uVar6 < 2) || (param_3 <= *pfVar4)) goto LAB_1478b0d0d;
    if (pfVar4[uVar7 * 6 + -6] <= param_3) {
      pfVar4 = pfVar4 + uVar7 * 6;
    }
    else {
      uVar7 = 1;
      if (uVar6 != 2) {
        uVar6 = uVar6 - 2;
        uVar3 = 1;
        do {
          uVar8 = uVar6 >> 1;
          if (pfVar4[(ulonglong)(uVar8 + uVar3) * 6] <= param_3) {
            uVar3 = uVar3 + uVar8 + 1;
            uVar8 = uVar6 + ~uVar8;
          }
          uVar6 = uVar8;
        } while (0 < (int)uVar6);
        uVar7 = (ulonglong)uVar3;
      }
      pfVar4 = pfVar4 + uVar7 * 6;
      fVar10 = *pfVar4 - pfVar4[-6];
      if (0.0 < fVar10) {
        (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x30))
                  (*(longlong **)(param_1 + 0xa8),*(undefined8 *)(pfVar4 + -4),
                   *(undefined8 *)(pfVar4 + 2),(param_3 - pfVar4[-6]) / fVar10,param_4);
        return;
      }
    }
  }
  else {
    if ((uVar6 < 2) || (param_3 < *pfVar4)) goto LAB_1478b0d0d;
    if (param_3 < pfVar4[uVar7 * 6 + -6]) {
      uVar2 = 0;
      pfVar9 = pfVar4;
      do {
        if (param_3 < *pfVar9) {
          uVar7 = 1;
          if (1 < (int)uVar2) {
            uVar7 = uVar2 & 0xffffffff;
          }
          goto LAB_1478b0d05;
        }
        uVar2 = uVar2 + 1;
        pfVar9 = pfVar9 + 6;
      } while (uVar7 != uVar2);
      goto LAB_1478b0d0d;
    }
LAB_1478b0d05:
    pfVar4 = pfVar4 + uVar7 * 6;
  }
  uVar5 = *(undefined8 *)(pfVar4 + -4);
LAB_1478b0d0d:
  FUN_1449b16b6(lVar1,param_4,uVar5,1);
  return;
}



// FUNCTION 1478b0d26 FUN_1478b0d26 body=159 status=ok
// SIG undefined FUN_1478b0d26(void)

longlong FUN_1478b0d26(longlong *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1478c314a(param_1,iVar1);
  }
  lVar3 = (longlong)param_3 * 0x18;
  memmove((void *)(*param_1 + lVar3 + 0x18),(void *)(*param_1 + lVar3),
          (ulonglong)(uint)(iVar1 - param_3) * 0x18);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + lVar3) = *param_2;
  *(undefined8 *)(lVar2 + 8 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 8 + lVar3) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined4 *)(lVar2 + 0x10 + lVar3) = param_2[4];
  *(undefined4 *)(lVar2 + 0x14 + lVar3) = param_2[5];
  *(undefined8 *)(param_2 + 4) = 0;
  return lVar2 + lVar3;
}



// FUNCTION 1478b0dc6 FUN_1478b0dc6 body=582 status=ok
// SIG undefined FUN_1478b0dc6(void)

void FUN_1478b0dc6(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1478c3356(param_2,param_1 + 0x68);
  (**(code **)(*param_2 + 0x128))(param_2,param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x78) == 0) goto LAB_1478b0e17;
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    iVar1 = *(int *)(param_1 + 0x70);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x68);
      lVar5 = 0;
      do {
        FUN_14047320e(*(undefined8 *)(param_1 + 0x98),param_2,*(undefined8 *)(lVar4 + 8 + lVar5),0);
        lVar5 = lVar5 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar5);
    }
    goto LAB_1478b0e17;
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) goto LAB_1478b0e17;
  lVar4 = FUN_140007850(param_1 + 0x78);
  if (lVar4 == 0) {
LAB_1478b0eb7:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_1446f4bba();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_1478b0eb7;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar4);
    }
  }
  *(longlong *)(param_1 + 0x98) = lVar4;
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x70) * 0x18;
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + 8);
    do {
      plVar2 = *(longlong **)(param_1 + 0x98);
      if (plVar2 == (longlong *)0x0) {
        uVar6 = 0;
      }
      else {
        FUN_144a5eaa2(puVar7,-*(int *)((longlong)plVar2 + 0x5c) &
                             ((int)plVar2[0xb] + *(int *)((longlong)plVar2 + 0x5c)) - 1U,1);
        (**(code **)(*plVar2 + 0x2e8))(plVar2,*puVar7,1);
        uVar6 = *(undefined8 *)(param_1 + 0x98);
      }
      FUN_14047320e(uVar6,param_2,*puVar7,0);
      puVar7 = puVar7 + 3;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
    lVar4 = *(longlong *)(param_1 + 0x98);
  }
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
  }
  local_40 = 0;
  FUN_14485c47a(&local_40,lVar4);
  uVar6 = FUN_1478b0794(local_40);
  *(undefined8 *)(param_1 + 0xa8) = uVar6;
  lVar4 = *(longlong *)(param_1 + 0x98);
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
  }
  local_48 = 0;
  FUN_14485c47a(&local_48,lVar4);
  local_38 = local_48;
  if ((longlong)DAT_14cacd6f0 == 0) {
    cVar3 = '\0';
  }
  else {
    lVar4 = (longlong)DAT_14cacd6f0 * 8;
    lVar5 = DAT_14cacd6e8;
    do {
      lVar4 = lVar4 + -8;
      cVar3 = FUN_1403d434c(lVar5,&local_38);
      if (cVar3 != '\0') break;
      lVar5 = lVar5 + 8;
    } while (lVar4 != 0);
  }
  *(char *)(param_1 + 0xa0) = cVar3;
LAB_1478b0e17:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478b100e FUN_1478b100e body=57 status=ok
// SIG undefined FUN_1478b100e(void)

void FUN_1478b100e(undefined8 *param_1,int param_2)

{
  FUN_147877310(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1478c32e6(param_1,param_2);
  return;
}



// FUNCTION 1478b1048 FUN_1478b1048 body=5 status=ok
// SIG undefined FUN_1478b1048(void)

longlong FUN_1478b1048(longlong param_1)

{
  return param_1 + 0x68;
}



// FUNCTION 1478b105e FUN_1478b105e body=141 status=ok
// SIG undefined FUN_1478b105e(void)

undefined8 * FUN_1478b105e(undefined8 *param_1,uint param_2,uint param_3,uint param_4)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x31) = 0xff;
  param_1[7] = DAT_14c845dbc;
  *(undefined4 *)(param_1 + 8) = DAT_14c845dc4;
  *(short *)(param_1 + 9) = (short)param_2;
  *(short *)((longlong)param_1 + 0x4a) = (short)param_3;
  *(short *)((longlong)param_1 + 0x4c) = (short)param_4;
  if (0xffff < (param_3 | param_2 | param_4)) {
    FUN_140033559("Runtime\\Engine\\Public\\TextureResource.h",0x42,
                  L"texture mip size doesn\'t fit in 16 bits! %ux&ux%u",param_2,param_3,param_4);
  }
  return param_1;
}



// FUNCTION 1478b10ec FUN_1478b10ec body=100 status=ok
// SIG undefined FUN_1478b10ec(void)

void FUN_1478b10ec(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 2) {
    if (param_1[0x27] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1[0x27] + 0x20);
    }
    iVar1 = (**(code **)(*param_1 + 0x2e8))(param_1);
    iVar2 = iVar2 - iVar1;
  }
  else if (param_2 == 0) {
    iVar2 = FUN_1478b1150(param_1);
  }
  else if (param_1[0x27] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1[0x27] + 0x20);
  }
  FUN_1411b8dae(param_1,iVar2);
  return;
}



// FUNCTION 1478b1150 FUN_1478b1150 body=75 status=ok
// SIG undefined FUN_1478b1150(void)

undefined1 FUN_1478b1150(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1448463c0();
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      return (char)((ulonglong)*(longlong *)(param_1 + 0xc0) >> 0x28);
    }
    lVar1 = FUN_1448463c0(param_1);
    if (*(longlong **)(lVar1 + 0x10) != (longlong *)0x0) {
      lVar1 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 8))();
      return *(undefined1 *)(lVar1 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 1478b11a2 FUN_1478b11a2 body=441 status=ok
// SIG undefined FUN_1478b11a2(void)

void FUN_1478b11a2(longlong param_1,undefined8 param_2)

{
  void *_Src;
  uint uVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  FUN_140002266(&local_40,L"%dx%d*%d",0,0);
  FUN_1446ddc76(&local_68,"Dimensions",1);
  _Src = local_40;
  local_60 = local_68;
  local_58 = (void *)0x0;
  local_50 = local_38;
  if ((longlong)local_38 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_38,0);
    memcpy(local_58,_Src,(longlong)local_38 * 2);
  }
  local_48 = 3;
  FUN_1407c67d8(param_2);
  if (*(longlong *)(param_1 + 0x138) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*(byte *)(*(longlong *)(param_1 + 0x138) + 0xc);
  }
  FUN_140056680(&local_98,*(undefined8 *)((longlong)&DAT_14c873410 + (ulonglong)(uVar1 * 0x30)));
  FUN_1446ddc76(&local_a0,"Format",1);
  local_88 = local_a0;
  local_80 = local_98;
  uStack_78 = uStack_90;
  local_98 = 0;
  uStack_90 = 0;
  local_70 = 1;
  FUN_1407c67d8(param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1427dc336(local_a8,param_2);
  switchD_143c3d4dc::caseD_3d(param_1,local_a8);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b135c FUN_1478b135c body=109 status=ok
// SIG undefined FUN_1478b135c(void)

undefined8 FUN_1478b135c(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x138);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = &DAT_14c873410;
    uVar5 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    puVar2 = (undefined8 *)
             ((longlong)&DAT_14c873410 + (ulonglong)((uint)*(byte *)(puVar1 + 3) * 0x30));
    uVar3 = puVar1[2] & 0x1fffffff;
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
  }
  FUN_140002266(param_2,L"Array: %dx%d*%d [%s]",uVar4,uVar5,uVar3,*puVar2);
  return param_2;
}



// FUNCTION 1478b13ca FUN_1478b13ca body=47 status=ok
// SIG undefined FUN_1478b13ca(void)

void FUN_1478b13ca(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  switchD_143c3d4dc::caseD_38();
  uVar1 = (**(code **)(*param_1 + 0x398))(param_1,0);
  FUN_140347a44(param_2,uVar1);
  return;
}



// FUNCTION 1478b1418 FUN_1478b1418 body=103 status=ok
// SIG undefined FUN_1478b1418(void)

undefined4 * FUN_1478b1418(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  _Src = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1478c355c(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1478b1480 FUN_1478b1480 body=88 status=ok
// SIG undefined FUN_1478b1480(void)

undefined8 * FUN_1478b1480(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1478c355c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1478b14d8 FUN_1478b14d8 body=112 status=ok
// SIG undefined FUN_1478b14d8(void)

ulonglong FUN_1478b14d8(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint3 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  
  iVar1 = *param_1;
  uVar3 = (uint3)((uint)iVar1 >> 8);
  bVar6 = (char)param_1[1] == (char)param_2[1];
  uVar2 = param_1[4];
  uVar4 = (ulonglong)CONCAT31(uVar3,uVar2 == param_2[4] && (bVar6 && iVar1 == *param_2));
  if ((uVar2 != 0) && (uVar2 == param_2[4] && (bVar6 && iVar1 == *param_2))) {
    if ((int)uVar2 < 1) {
      return CONCAT71((uint7)uVar3,1);
    }
    lVar5 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 2) + lVar5 * 8);
      bVar6 = iVar1 == *(int *)(*(longlong *)(param_2 + 2) + lVar5 * 8);
      bVar7 = *(char *)(*(longlong *)(param_1 + 2) + 4 + lVar5 * 8) ==
              *(char *)(*(longlong *)(param_2 + 2) + 4 + lVar5 * 8);
      uVar4 = (ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),bVar7 && bVar6);
      if (!bVar7 || !bVar6) {
        return uVar4;
      }
      bVar6 = (ulonglong)uVar2 - 1 != lVar5;
      lVar5 = lVar5 + 1;
    } while (bVar6);
  }
  return uVar4;
}



// FUNCTION 1478b1548 FUN_1478b1548 body=99 status=ok
// SIG undefined FUN_1478b1548(void)

void FUN_1478b1548(undefined8 *param_1,double *param_2)

{
  double dVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  
  dVar1 = *param_2;
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = 0;
  *(float *)(puVar4 + 1) = (float)dVar1;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar2 = (undefined8 *)*param_1;
    *param_1 = puVar4;
    UNLOCK();
    LOCK();
    *puVar2 = puVar4;
    UNLOCK();
  }
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    return;
  }
  FUN_1478b15ac(param_1);
  return;
}



// FUNCTION 1478b15ac FUN_1478b15ac body=146 status=ok
// SIG undefined FUN_1478b15ac(void)

void FUN_1478b15ac(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = **(longlong **)(param_1 + 8);
  if (lVar3 != 0) {
    do {
      fVar1 = *(float *)(lVar3 + 8);
      lVar2 = *(longlong *)(param_1 + 8);
      *(longlong *)(param_1 + 8) = lVar3;
      *(undefined4 *)(lVar3 + 8) = 0;
      if (lVar2 != 0) {
        FUN_1400020a8();
      }
      local_38 = (double)fVar1;
      FUN_1478b16b2(param_1,&local_38);
      lVar3 = **(longlong **)(param_1 + 8);
    } while (lVar3 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b1640 FUN_1478b1640 body=38 status=ok
// SIG undefined FUN_1478b1640(void)

undefined4 FUN_1478b1640(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
    FUN_1478b15ac(param_1);
  }
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 1478b1666 FUN_1478b1666 body=38 status=ok
// SIG undefined FUN_1478b1666(void)

undefined4 FUN_1478b1666(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
    FUN_1478b15ac(param_1);
  }
  return *(undefined4 *)(param_1 + 0x1c);
}



// FUNCTION 1478b168c FUN_1478b168c body=38 status=ok
// SIG undefined FUN_1478b168c(void)

undefined4 FUN_1478b168c(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
    FUN_1478b15ac(param_1);
  }
  return *(undefined4 *)(param_1 + 0x20);
}



// FUNCTION 1478b16b2 FUN_1478b16b2 body=97 status=ok
// SIG undefined FUN_1478b16b2(void)

void FUN_1478b16b2(longlong param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = lVar1 + 1;
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (lVar2 == 0) {
    fVar3 = (float)*param_2;
  }
  else {
    fVar3 = ((float)lVar1 * *(float *)(param_1 + 0x18) + (float)*param_2) / (float)lVar2;
  }
  *(float *)(param_1 + 0x18) = fVar3;
  fVar3 = *(float *)(param_1 + 0x1c);
  if ((float)*param_2 <= *(float *)(param_1 + 0x1c)) {
    fVar3 = (float)*param_2;
  }
  *(float *)(param_1 + 0x1c) = fVar3;
  fVar3 = *(float *)(param_1 + 0x20);
  if (*(float *)(param_1 + 0x20) <= (float)*param_2) {
    fVar3 = (float)*param_2;
  }
  *(float *)(param_1 + 0x20) = fVar3;
  return;
}



// FUNCTION 1478b1714 FUN_1478b1714 body=87 status=ok
// SIG undefined FUN_1478b1714(void)

void FUN_1478b1714(undefined8 *param_1)

{
  param_1[5] = 0x40e5888000000000;
  *param_1 = 0x40b5888000000000;
  param_1[2] = 0x3fc0000000000000;
  param_1[1] = 0x405f400000000000;
  param_1[3] = 0x407e000000000000;
  param_1[4] = 0x404e000000000000;
  return;
}



// FUNCTION 1478b176c FUN_1478b176c body=91 status=ok
// SIG undefined FUN_1478b176c(void)

void FUN_1478b176c(double *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_2 / param_1[5]) * *param_1;
  dVar2 = 1.0;
  if (1.0 <= dVar1) {
    dVar2 = dVar1;
  }
  *param_1 = dVar2;
  param_1[5] = param_2;
  param_1[2] = dVar2 / param_2;
  param_1[1] = (dVar2 / param_2) * 1000.0;
  dVar2 = (param_2 * 60.0) / dVar2;
  param_1[3] = dVar2;
  param_1[4] = dVar2 * 0.125;
  return;
}



// FUNCTION 1478b17c8 FUN_1478b17c8 body=187 status=ok
// SIG undefined FUN_1478b17c8(void)

double FUN_1478b17c8(double *param_1,byte param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (0x13 < param_2) {
switchD_1478b180a_caseD_2:
    return -1.0;
  }
  dVar1 = *param_1;
  dVar2 = dVar1 * 3.0;
  dVar3 = (dVar1 * 4.0) / 3.0;
  switch(param_2) {
  default:
    return dVar1 * 32.0;
  case 1:
  case 5:
    return dVar1 * 8.0;
  case 2:
  case 0x11:
    return dVar1;
  case 3:
    return dVar1 + dVar1;
  case 4:
    return dVar1 * 4.0;
  case 6:
    return dVar1 * 16.0;
  case 8:
    break;
  case 9:
    dVar2 = dVar2 + dVar2;
    break;
  case 10:
    dVar2 = dVar2 * 4.0;
    break;
  case 0xb:
    dVar2 = dVar2 * 8.0;
    break;
  case 0xc:
    dVar2 = dVar2 * 16.0;
    break;
  case 0xd:
    return dVar3;
  case 0xe:
    return dVar3 + dVar3;
  case 0xf:
    return dVar3 * 4.0;
  case 0x10:
    return dVar3 * 8.0;
  case 0x12:
    goto switchD_1478b180a_caseD_2;
  case 0x13:
    return 0.0;
  }
  return dVar2;
}



// FUNCTION 1478b1884 FUN_1478b1884 body=192 status=ok
// SIG undefined FUN_1478b1884(void)

undefined8 *
FUN_1478b1884(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  FUN_1477cb53e(param_1 + 4,param_2 + 4);
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  uVar3 = param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1477c9896(param_1 + 8,iVar1,0);
    FUN_1477c98f8(param_1[8],uVar3,iVar1);
  }
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_4;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 1478b1944 FUN_1478b1944 body=117 status=ok
// SIG undefined FUN_1478b1944(void)

undefined8 * FUN_1478b1944(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  QueryPerformanceCounter(&local_20);
  *(LARGE_INTEGER *)(param_1 + 3) = local_20;
  *param_1 = &PTR_LAB_14a57ce60;
  *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b19ba FUN_1478b19ba body=94 status=ok
// SIG undefined FUN_1478b19ba(void)

undefined4 * FUN_1478b19ba(undefined4 *param_1,char param_2)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  if (param_2 != '\0') {
    QueryPerformanceCounter(&local_20);
    *(LARGE_INTEGER *)(param_1 + 4) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b1a1a FUN_1478b1a1a body=56 status=ok
// SIG undefined FUN_1478b1a1a(void)

void FUN_1478b1a1a(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a57ce60;
  FUN_1477c9821(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478b1a5c FUN_1478b1a5c body=224 status=ok
// SIG undefined FUN_1478b1a5c(void)

void FUN_1478b1a5c(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 *local_68 [2];
  undefined8 *local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    local_78 = *(undefined8 *)(param_2 + 8);
    local_98 = *param_2;
    uStack_94 = param_2[1];
    uStack_90 = param_2[2];
    uStack_8c = param_2[3];
    local_88 = param_2[4];
    uStack_84 = param_2[5];
    uStack_80 = param_2[6];
    uStack_7c = param_2[7];
    local_68[0] = (undefined1 *)0x0;
    local_58 = (undefined8 *)FUN_14001cc68(0x30,8);
    *local_58 = &PTR_FUN_14a78d630;
    local_58[5] = local_78;
    *(undefined4 *)(local_58 + 3) = local_88;
    *(undefined4 *)((longlong)local_58 + 0x1c) = uStack_84;
    *(undefined4 *)(local_58 + 4) = uStack_80;
    *(undefined4 *)((longlong)local_58 + 0x24) = uStack_7c;
    *(undefined4 *)(local_58 + 1) = local_98;
    *(undefined4 *)((longlong)local_58 + 0xc) = uStack_94;
    *(undefined4 *)(local_58 + 2) = uStack_90;
    *(undefined4 *)((longlong)local_58 + 0x14) = uStack_8c;
    if (local_58 + 1 != (undefined8 *)0x0) {
      local_68[0] = &LAB_1433bc032;
    }
    FUN_1478b1bce(lVar1,local_68);
    if (*(char *)(param_1 + 0x39) == '\0') {
      *(bool *)(param_1 + 0x39) = *(char *)((longlong)param_2 + 0x21) == '\x03';
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b1b3e FUN_1478b1b3e body=63 status=ok
// SIG undefined FUN_1478b1b3e(void)

void FUN_1478b1b3e(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar2 = (longlong)*(int *)(param_1 + 0x30) << 6;
    do {
      *(undefined1 *)(lVar3 + 0x38) = 1;
      uVar1 = FUN_1478b1e3e(lVar3,param_2);
      *(undefined4 *)(lVar3 + 0x3c) = uVar1;
      lVar3 = lVar3 + 0x40;
      lVar2 = lVar2 + -0x40;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1478b1b7e FUN_1478b1b7e body=79 status=ok
// SIG undefined FUN_1478b1b7e(void)

void FUN_1478b1b7e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  param_1[3] = 0;
  param_1[1] = 0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    param_1[2] = 0;
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
  *param_1 = 0;
  return;
}



// FUNCTION 1478b1bce FUN_1478b1bce body=181 status=ok
// SIG undefined FUN_1478b1bce(void)

void FUN_1478b1bce(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  lVar8 = *param_2;
  lVar9 = param_2[2];
  param_2[2] = 0;
  if (lVar8 != 0) {
    *param_2 = 0;
  }
  *puVar6 = &PTR_FUN_14a78d610;
  puVar6[2] = lVar8;
  puVar6[4] = lVar9;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar8 = param_2[5];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  lVar9 = param_2[6];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar5 = param_2[7];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(puVar6 + 6) = (int)param_2[4];
  *(undefined4 *)((longlong)puVar6 + 0x34) = uVar1;
  *(int *)(puVar6 + 7) = (int)lVar8;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar2;
  *(int *)(puVar6 + 8) = (int)lVar9;
  *(undefined4 *)((longlong)puVar6 + 0x44) = uVar3;
  *(int *)(puVar6 + 9) = (int)lVar5;
  *(undefined4 *)((longlong)puVar6 + 0x4c) = uVar4;
  plVar7 = (longlong *)FUN_14001cc68(0x10,8);
  plVar7[1] = (longlong)puVar6;
  lVar8 = *param_1;
  do {
    *plVar7 = lVar8;
    LOCK();
    lVar9 = *param_1;
    bVar10 = lVar8 == lVar9;
    if (bVar10) {
      *param_1 = (longlong)plVar7;
      lVar9 = lVar8;
    }
    UNLOCK();
    lVar8 = lVar9;
  } while (!bVar10);
  if (*param_2 == 0) {
    return;
  }
  plVar7 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar7 = (longlong *)param_2[2];
  }
                    /* WARNING: Could not recover jumptable at 0x0001478b1c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x10))(plVar7);
  return;
}



// FUNCTION 1478b1c84 FUN_1478b1c84 body=259 status=ok
// SIG undefined FUN_1478b1c84(void)

void FUN_1478b1c84(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [104];
  undefined8 local_70;
  undefined1 *local_68 [2];
  undefined8 *local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    local_f8 = *param_2;
    uStack_f4 = param_2[1];
    uStack_f0 = param_2[2];
    uStack_ec = param_2[3];
    local_e8 = param_2[4];
    uStack_e4 = param_2[5];
    uStack_e0 = param_2[6];
    uStack_dc = param_2[7];
    FUN_1477e8f36(local_d8,param_2 + 8);
    local_70 = *(undefined8 *)(param_2 + 0x22);
    local_68[0] = (undefined1 *)0x0;
    puVar2 = (undefined8 *)FUN_14001cc68(0x98,8);
    *puVar2 = &PTR_FUN_14a78d670;
    *(undefined4 *)(puVar2 + 3) = local_e8;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_e4;
    *(undefined4 *)(puVar2 + 4) = uStack_e0;
    *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_dc;
    *(undefined4 *)(puVar2 + 1) = local_f8;
    *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_f4;
    *(undefined4 *)(puVar2 + 2) = uStack_f0;
    *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_ec;
    local_58 = puVar2;
    FUN_1477e8f36(puVar2 + 5,local_d8);
    puVar2[0x12] = local_70;
    if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_68[0] = &LAB_1433bc0d6;
    }
    FUN_1478b1d88(lVar1,local_68);
    FUN_1477e8fa4(local_d8);
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b1d88 FUN_1478b1d88 body=181 status=ok
// SIG undefined FUN_1478b1d88(void)

void FUN_1478b1d88(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  lVar8 = *param_2;
  lVar9 = param_2[2];
  param_2[2] = 0;
  if (lVar8 != 0) {
    *param_2 = 0;
  }
  *puVar6 = &PTR_FUN_14a78d650;
  puVar6[2] = lVar8;
  puVar6[4] = lVar9;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar8 = param_2[5];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  lVar9 = param_2[6];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar5 = param_2[7];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(puVar6 + 6) = (int)param_2[4];
  *(undefined4 *)((longlong)puVar6 + 0x34) = uVar1;
  *(int *)(puVar6 + 7) = (int)lVar8;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar2;
  *(int *)(puVar6 + 8) = (int)lVar9;
  *(undefined4 *)((longlong)puVar6 + 0x44) = uVar3;
  *(int *)(puVar6 + 9) = (int)lVar5;
  *(undefined4 *)((longlong)puVar6 + 0x4c) = uVar4;
  plVar7 = (longlong *)FUN_14001cc68(0x10,8);
  plVar7[1] = (longlong)puVar6;
  lVar8 = *param_1;
  do {
    *plVar7 = lVar8;
    LOCK();
    lVar9 = *param_1;
    bVar10 = lVar8 == lVar9;
    if (bVar10) {
      *param_1 = (longlong)plVar7;
      lVar9 = lVar8;
    }
    UNLOCK();
    lVar8 = lVar9;
  } while (!bVar10);
  if (*param_2 == 0) {
    return;
  }
  plVar7 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar7 = (longlong *)param_2[2];
  }
                    /* WARNING: Could not recover jumptable at 0x0001478b1e2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x10))(plVar7);
  return;
}



// FUNCTION 1478b1e3e FUN_1478b1e3e body=87 status=ok
// SIG undefined FUN_1478b1e3e(void)

int FUN_1478b1e3e(double *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    dVar2 = *param_1 * 1000.0 * *(double *)(param_2 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 4) != '\x01') {
      return 0;
    }
    if (*(char *)(param_1 + 2) == '\x13') {
      return 0;
    }
    dVar1 = param_1[3];
    dVar2 = (double)FUN_1478b17c8(param_2,*(char *)(param_1 + 2));
    dVar2 = dVar2 * dVar1;
  }
  return (int)dVar2;
}



// FUNCTION 1478b1e96 FUN_1478b1e96 body=15 status=ok
// SIG undefined FUN_1478b1e96(void)

void FUN_1478b1e96(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1478b1ea6 FUN_1478b1ea6 body=16 status=ok
// SIG undefined FUN_1478b1ea6(void)

undefined8 * FUN_1478b1ea6(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 1478b1eb6 FUN_1478b1eb6 body=12 status=ok
// SIG undefined FUN_1478b1eb6(void)

void FUN_1478b1eb6(longlong param_1)

{
  FUN_145aa5646(param_1 + 0x198);
  return;
}



// FUNCTION 1478b1ec2 FUN_1478b1ec2 body=316 status=ok
// SIG undefined FUN_1478b1ec2(void)

longlong FUN_1478b1ec2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_2 == 0) {
    return param_1;
  }
  if (*(longlong *)(param_1 + 0x188) != 0) goto LAB_1478b1ee0;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a78d690;
  plVar4[2] = 0;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = 0x10;
    plVar5 = *(longlong **)(param_1 + 400);
    if (plVar5 == (longlong *)0x0) goto LAB_1478b1ee0;
    *(undefined8 *)(param_1 + 400) = 0;
LAB_1478b1f69:
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
    if (plVar4 == (longlong *)0x0) goto LAB_1478b1ee0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x188) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 400);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 400) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1478b1f69;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1478b1ee0:
  uVar3 = FUN_1477e6e94(param_2);
  FUN_1433b426a(param_1 + 0x198,param_1,uVar3);
  return param_1;
}



// FUNCTION 1478b1ffe FUN_1478b1ffe body=207 status=ok
// SIG undefined FUN_1478b1ffe(void)

ulonglong FUN_1478b1ffe(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (ulonglong)*(int *)(param_1 + 0x148);
  if ((longlong)uVar3 < 1) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x140);
    uVar4 = 0;
    do {
      if (*(int *)(lVar2 + 8) < 1) {
        local_40 = *param_2;
        local_38 = param_2[1];
        FUN_1403350f6(lVar2);
        FUN_144a7b126(lVar2,&local_29,1);
        uVar3 = uVar4 & 0xffffffff;
        goto LAB_1478b2074;
      }
      uVar4 = uVar4 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar3 != uVar4);
  }
  uVar1 = FUN_1478b20ce();
  local_40 = *param_2;
  local_38 = param_2[1];
  FUN_1403350f6(uVar1);
  FUN_144a7b126(uVar1,&local_29,1);
LAB_1478b2074:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1478b20ce FUN_1478b20ce body=63 status=ok
// SIG undefined FUN_1478b20ce(void)

longlong FUN_1478b20ce(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1478c36e6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1478c36d8(lVar2);
  return lVar2;
}



// FUNCTION 1478b210e FUN_1478b210e body=443 status=ok
// SIG undefined FUN_1478b210e(void)

void FUN_1478b210e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  LARGE_INTEGER local_40;
  undefined4 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = *(longlong **)(param_1 + 0x198);
  if (plVar4 != (longlong *)0x0) {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_1478b2178;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar7 = *(longlong *)(param_1 + 400);
    if (lVar7 != 0) {
      QueryPerformanceCounter(&local_40);
      lVar8 = CONCAT44(local_40.s.HighPart,local_40.s.LowPart);
      *(longlong *)(param_2 + 0x18) = lVar8;
      dVar10 = 0.0;
      if (0 < lVar8 && 0 < *(longlong *)(param_2 + 0x10)) {
        lVar8 = lVar8 - *(longlong *)(param_2 + 0x10);
        auVar11._8_4_ = (int)((ulonglong)lVar8 >> 0x20);
        auVar11._0_8_ = lVar8;
        auVar11._12_4_ = 0x45300000;
        dVar10 = (((double)CONCAT44(0x43300000,(int)lVar8) - 4503599627370496.0) +
                 (auVar11._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0;
      }
      local_40.s.LowPart = SUB84(dVar10,0);
      local_40.s.HighPart = (LONG)((ulonglong)dVar10 >> 0x20);
      FUN_1478b1548(lVar7);
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
LAB_1478b2178:
  lVar7 = (longlong)*(int *)(param_2 + 0x24);
  if (((-1 < lVar7) && (*(int *)(param_2 + 0x24) < *(int *)(param_1 + 0x138))) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x130) + 8 + lVar7 * 0x18))) {
    lVar7 = *(longlong *)(param_1 + 0x130) + lVar7 * 0x18;
    FUN_1446ddc76(local_48,"Quartz Event",1);
    local_40.s.LowPart._0_1_ = *(undefined1 *)(param_2 + 0x21);
    local_40.s.HighPart = local_48._0_4_;
    uStack_38 = local_48._4_4_;
    FUN_1447cd2ec(lVar7);
    cVar3 = *(char *)(param_2 + 0x21);
    if (cVar3 == '\x01') {
      LOCK();
      *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + 1;
      UNLOCK();
      cVar3 = *(char *)(param_2 + 0x21);
    }
    if ((cVar3 == '\x02') || (cVar3 == '\x04' && DAT_14c76122c != 0)) {
      LOCK();
      piVar2 = (int *)(lVar7 + 0x10);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0 || SBORROW4(iVar6,1) != *piVar2 < 0) {
        *(undefined4 *)(lVar7 + 8) = 0;
        if (*(int *)(lVar7 + 0xc) != 0) {
          FUN_1407d9874(lVar7,0);
        }
        LOCK();
        *(undefined4 *)(lVar7 + 0x10) = 0;
        UNLOCK();
      }
    }
  }
  (**(code **)(*(longlong *)(param_1 + -0x10) + 0x20))(param_1 + -0x10,param_2);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478b22ca FUN_1478b22ca body=327 status=ok
// SIG undefined FUN_1478b22ca(void)

void FUN_1478b22ca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  LARGE_INTEGER LVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  byte local_40;
  undefined8 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x1a0);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1478b2334;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x198);
    if (lVar4 != 0) {
      QueryPerformanceCounter(&local_48);
      ((LARGE_INTEGER *)(param_2 + 0x18))->QuadPart = (LONGLONG)local_48;
      LVar9.QuadPart = 0;
      if (0 < local_48.QuadPart && 0 < *(longlong *)(param_2 + 0x10)) {
        lVar7 = local_48.QuadPart - *(longlong *)(param_2 + 0x10);
        auVar10._8_4_ = (int)((ulonglong)lVar7 >> 0x20);
        auVar10._0_8_ = lVar7;
        auVar10._12_4_ = 0x45300000;
        LVar9 = (LARGE_INTEGER)
                ((((double)CONCAT44(0x43300000,(int)lVar7) - 4503599627370496.0) +
                 (auVar10._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0);
      }
      local_48 = LVar9;
      FUN_1478b1548(lVar4);
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
LAB_1478b2334:
  local_40 = *(byte *)(param_2 + 0x2c);
  local_34 = *(undefined4 *)(param_2 + 0x28);
  local_3c = *(undefined8 *)(param_2 + 0x20);
  local_48 = *(LARGE_INTEGER *)(param_2 + 0x30);
  FUN_1447cd2ec(param_1 + (ulonglong)local_40 * 0x10 + 0x18);
  (**(code **)(*(longlong *)(param_1 + -8) + 0x18))(param_1 + -8,param_2);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478b2422 FUN_1478b2422 body=69 status=ok
// SIG undefined FUN_1478b2422(void)

void FUN_1478b2422(longlong param_1)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_1;
  FUN_1478c377a(*(undefined8 *)(param_1 + 0x188));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b2468 FUN_1478b2468 body=105 status=ok
// SIG undefined FUN_1478b2468(void)

void FUN_1478b2468(longlong param_1,byte param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1 + (ulonglong)param_2 * 0x10 + 0x20;
  local_28 = *param_3;
  local_20 = param_3[1];
  FUN_1403350f6(lVar1);
  FUN_144a7b126(lVar1,&local_11,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b24e8 FUN_1478b24e8 body=88 status=ok
// SIG undefined FUN_1478b24e8(void)

void FUN_1478b24e8(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_1 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1478b2540 FUN_1478b2540 body=468 status=ok
// SIG undefined FUN_1478b2540(void)

void FUN_1478b2540(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147372d8e(param_1,param_3 + 0x40);
  *(undefined1 *)(param_1 + 0x17) = 2;
  if (*(int *)(param_3 + 0x20) != 0) {
    *(longlong *)(param_1 + 0x28) = param_3 + 0x10;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac9510) {
    FUN_144b3d300(&DAT_14cac9510);
    if (DAT_14cac9510 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.Raytracing.DebugForceRuntimeBLAS",1);
      if (plVar7 == (longlong *)0x0) {
        DAT_14cac9508 = 0;
      }
      else {
        DAT_14cac9508 = (**(code **)(*plVar7 + 0x68))(plVar7);
      }
      _Init_thread_footer(&DAT_14cac9510);
    }
  }
  lVar3 = DAT_14cac9508;
  if (DAT_14cac9508 == 0) {
LAB_1478b25de:
    if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))();
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar6 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar4 ^ 1);
    }
    if (*(int *)(lVar3 + uVar6 * 4) != 0) goto LAB_1478b25de;
  }
  (**(code **)(*DAT_14ca83900 + 0x4d8))(DAT_14ca83900,&local_28,param_2,param_1);
  plVar7 = (longlong *)(param_1 + 0x50);
  if (plVar7 != &local_28) {
    lVar3 = *plVar7;
    *plVar7 = local_28;
    local_28 = 0;
    if (lVar3 == 0) goto LAB_1478b2671;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_28 != 0) {
    LOCK();
    puVar1 = (uint *)(local_28 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1478b2671:
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)(*(longlong *)*plVar7 + 0x10))();
  }
  *(undefined1 *)(param_1 + 0x58) = uVar5;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b2716 FUN_1478b2716 body=148 status=ok
// SIG undefined FUN_1478b2716(void)

void FUN_1478b2716(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined6 uStack_60;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined1 local_52;
  undefined8 local_51;
  undefined8 uStack_49;
  undefined8 local_41;
  undefined8 uStack_39;
  undefined8 local_31;
  undefined5 uStack_29;
  undefined3 uStack_24;
  undefined5 uStack_21;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5a = 0;
  local_52 = 1;
  local_51 = 0;
  uStack_49 = 0;
  local_41 = 0;
  uStack_39 = 0;
  local_31 = 0;
  uStack_29 = 0;
  uStack_24 = 0;
  uStack_21 = 0;
  FUN_141793e86(0,&local_68);
  FUN_14005bca4(&local_68);
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b27ac FUN_1478b27ac body=1007 status=ok
// SIG undefined FUN_1478b27ac(void)

undefined8 * FUN_1478b27ac(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  undefined4 uVar8;
  
  *param_1 = &PTR_FUN_14a77e120;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0x402;
  *(undefined2 *)((longlong)param_1 + 0x19c) = 0x10;
  *(undefined1 *)((longlong)param_1 + 0x19e) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x37) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x41a00000;
  FUN_14704130e(param_1 + 0x39);
  FUN_147973bfc(param_1 + 0x3c,0x469c4000);
  FUN_147973bfc((longlong)param_1 + 0x1fc,0x3f800000);
  param_1[0x43] = 0x3f800000461c4000;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0xff7fffff;
  uVar8 = FUN_1458b9a10();
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar8;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0x3ff00000;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0x3ff00000;
  param_1[0x50] = 0x3ff0000000000000;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = &DAT_3f8000003f800000;
  param_1[0x54] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x55) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x2ac) = 1;
  uVar2 = DAT_14c8464e8._4_4_;
  uVar1 = (undefined4)DAT_14c8464e8;
  uVar8 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x56) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = uVar8;
  *(undefined4 *)(param_1 + 0x57) = uVar1;
  *(undefined4 *)((longlong)param_1 + 700) = uVar2;
  param_1[0x58] = DAT_14c8464f0;
  FUN_1458d791c(param_1 + 0x59);
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  *(undefined1 *)(param_1 + 0xd7) = 0x11;
  *(undefined8 *)((longlong)param_1 + 0x6bc) = 0x1003f800000;
  *(undefined1 *)((longlong)param_1 + 0x6c4) = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0xffffffff;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  FUN_14341387a((longlong)param_1 + 0x704);
  param_1[0xea] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x75c) = 0x469c4000;
  *(undefined4 *)(param_1 + 0xec) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x764) = 0x469c4000;
  param_1[0xed] = 0x640000000a;
  param_1[0xf2] = 0;
  *(undefined4 *)(param_1 + 0xf3) = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7a4) = 0;
  param_1[0xf6] = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  *(undefined1 *)(param_1 + 0xfa) = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  FUN_1458d7830(param_1 + 0xfd);
  *(undefined4 *)(param_1 + 0x12a) = 0xffffffff;
  iVar5 = DAT_14cac95d0 + 1;
  *(int *)((longlong)param_1 + 0x54) = DAT_14cac95d0;
  DAT_14cac95d0 = iVar5;
  if ((DAT_14cac9570 == (longlong *)0x0 || DAT_14cac9578 == 0) ||
     (cVar6 = (**(code **)(*DAT_14cac9570 + 0x30))(), cVar6 == '\0')) {
    if (DAT_14cac9578 != 2) {
      FUN_1446efa72(&DAT_14cac9570,0,2,0x10);
      DAT_14cac9578 = 2;
    }
    plVar3 = DAT_14cac9570;
    *DAT_14cac9570 = (longlong)&PTR_LAB_14a78e0f0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    plVar3[2] = lVar7;
    *plVar3 = (longlong)&PTR_FUN_14a78d920;
    plVar3[3] = (longlong)FUN_1433b4c76;
  }
  return param_1;
}



// FUNCTION 1478b2b9c FUN_1478b2b9c body=1331 status=ok
// SIG undefined FUN_1478b2b9c(void)

undefined8 * FUN_1478b2b9c(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *_Src;
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
  undefined8 uVar15;
  bool bVar16;
  byte bVar17;
  longlong lVar18;
  bool bVar19;
  
  *param_1 = &PTR_FUN_14a77e120;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  lVar18 = *(longlong *)(param_2 + 0x18);
  param_1[3] = lVar18;
  if ((lVar18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar17 = DAT_14c950c29;
  lVar18 = *(longlong *)(param_2 + 0x20);
  param_1[4] = lVar18;
  if ((lVar18 != 0 & bVar17) == 1) {
    FUN_1456cec3c();
    bVar17 = DAT_14c950c29;
  }
  lVar18 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar18;
  if ((lVar18 != 0 & bVar17) == 1) {
    FUN_1456cec3c();
  }
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  uVar6 = *(undefined4 *)(param_2 + 0x38);
  uVar7 = *(undefined4 *)(param_2 + 0x3c);
  uVar8 = *(undefined4 *)(param_2 + 0x40);
  uVar9 = *(undefined4 *)(param_2 + 0x44);
  uVar10 = *(undefined4 *)(param_2 + 0x48);
  uVar11 = *(undefined4 *)(param_2 + 0x4c);
  uVar12 = *(undefined4 *)(param_2 + 0x54);
  uVar13 = *(undefined4 *)(param_2 + 0x58);
  uVar14 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar12;
  *(undefined4 *)(param_1 + 0xb) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar14;
  *(undefined4 *)(param_1 + 8) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar9;
  *(undefined4 *)(param_1 + 9) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar11;
  *(undefined4 *)(param_1 + 6) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 7) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar7;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  FUN_1478c2984(param_1 + 0xc,param_2 + 0x60);
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  FUN_1477db3d8(param_1 + 0x16,param_2 + 0xb0);
  lVar18 = *(longlong *)(param_2 + 0x100);
  param_1[0x20] = lVar18;
  if ((lVar18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[0x21] = 0;
  iVar2 = *(int *)(param_2 + 0x110);
  uVar4 = *(undefined8 *)(param_2 + 0x108);
  *(int *)(param_1 + 0x22) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  else {
    FUN_1477ec236(param_1 + 0x21,iVar2,0);
    FUN_1477ec2ab(param_1[0x21],uVar4,iVar2);
  }
  bVar19 = false;
  lVar18 = 0;
  do {
    puVar1 = param_1 + lVar18 * 2 + 0x23;
    param_1[lVar18 * 2 + 0x23] = 0;
    iVar2 = *(int *)(param_2 + 0x120 + lVar18 * 0x10);
    uVar4 = *(undefined8 *)(param_2 + 0x118 + lVar18 * 0x10);
    *(int *)(param_1 + lVar18 * 2 + 0x24) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1477ec2f4(puVar1,iVar2,0);
      FUN_1477ec369(*puVar1,uVar4);
    }
    lVar18 = 1;
    bVar16 = !bVar19;
    bVar19 = true;
  } while (bVar16);
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_1478c2af6(param_1 + 0x27,param_2 + 0x138);
  param_1[0x31] = *(undefined8 *)(param_2 + 0x188);
  lVar18 = *(longlong *)(param_2 + 400);
  param_1[0x32] = lVar18;
  if (lVar18 != 0) {
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)((longlong)param_1 + 0x19b) = *(undefined4 *)(param_2 + 0x19b);
  *(undefined4 *)(param_1 + 0x33) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)((longlong)param_1 + 0x1a4) = *(undefined4 *)(param_2 + 0x1a4);
  memcpy(param_1 + 0x35,(void *)(param_2 + 0x1a8),0x120);
  FUN_1478b30d0(param_1 + 0x59,param_2 + 0x2c8);
  FUN_1477cb398(param_1 + 0xd3,param_2 + 0x698);
  param_1[0xde] = *(undefined8 *)(param_2 + 0x6f0);
  lVar18 = *(longlong *)(param_2 + 0x6f8);
  param_1[0xdf] = lVar18;
  if (lVar18 != 0) {
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
  }
  param_1[0xe4] = *(undefined8 *)(param_2 + 0x720);
  uVar3 = *(undefined4 *)(param_2 + 0x700);
  uVar5 = *(undefined4 *)(param_2 + 0x704);
  uVar6 = *(undefined4 *)(param_2 + 0x708);
  uVar7 = *(undefined4 *)(param_2 + 0x70c);
  uVar8 = *(undefined4 *)(param_2 + 0x714);
  uVar9 = *(undefined4 *)(param_2 + 0x718);
  uVar10 = *(undefined4 *)(param_2 + 0x71c);
  *(undefined4 *)(param_1 + 0xe2) = *(undefined4 *)(param_2 + 0x710);
  *(undefined4 *)((longlong)param_1 + 0x714) = uVar8;
  *(undefined4 *)(param_1 + 0xe3) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x71c) = uVar10;
  *(undefined4 *)(param_1 + 0xe0) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x704) = uVar5;
  *(undefined4 *)(param_1 + 0xe1) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x70c) = uVar7;
  param_1[0xe5] = 0;
  iVar2 = *(int *)(param_2 + 0x730);
  uVar4 = *(undefined8 *)(param_2 + 0x728);
  *(int *)(param_1 + 0xe6) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x734) = 0;
  }
  else {
    FUN_1478c3a1c(param_1 + 0xe5,iVar2,0);
    FUN_1478c3a8f(param_1[0xe5],uVar4,iVar2);
  }
  param_1[0xe7] = 0;
  iVar2 = *(int *)(param_2 + 0x740);
  uVar4 = *(undefined8 *)(param_2 + 0x738);
  *(int *)(param_1 + 0xe8) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x744) = 0;
  }
  else {
    FUN_1478c3a1c(param_1 + 0xe7,iVar2,0);
    FUN_1478c3a8f(param_1[0xe7],uVar4,iVar2);
  }
  param_1[0xed] = *(undefined8 *)(param_2 + 0x768);
  uVar4 = *(undefined8 *)(param_2 + 0x748);
  uVar15 = *(undefined8 *)(param_2 + 0x750);
  uVar3 = *(undefined4 *)(param_2 + 0x75c);
  uVar5 = *(undefined4 *)(param_2 + 0x760);
  uVar6 = *(undefined4 *)(param_2 + 0x764);
  *(undefined4 *)(param_1 + 0xeb) = *(undefined4 *)(param_2 + 0x758);
  *(undefined4 *)((longlong)param_1 + 0x75c) = uVar3;
  *(undefined4 *)(param_1 + 0xec) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x764) = uVar6;
  param_1[0xe9] = uVar4;
  param_1[0xea] = uVar15;
  param_1[0xf2] = 0;
  *(undefined4 *)(param_1 + 0xf3) = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7a4) = 0;
  param_1[0xf6] = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0;
  FUN_1478c2e40(param_1 + 0xee,param_2 + 0x770);
  param_1[0xf8] = 0;
  iVar2 = *(int *)(param_2 + 0x7c8);
  _Src = *(void **)(param_2 + 0x7c0);
  *(int *)(param_1 + 0xf9) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7cc) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 0xf8,iVar2,0);
    memcpy((void *)param_1[0xf8],_Src,(longlong)iVar2);
  }
  *(undefined1 *)(param_1 + 0xfa) = *(undefined1 *)(param_2 + 2000);
  param_1[0xfb] = 0;
  iVar2 = *(int *)(param_2 + 0x7e0);
  uVar4 = *(undefined8 *)(param_2 + 0x7d8);
  *(int *)(param_1 + 0xfc) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7e4) = 0;
  }
  else {
    FUN_1477d0614(param_1 + 0xfb,iVar2,0);
    FUN_1477d0687(param_1[0xfb],uVar4,iVar2);
  }
  FUN_1477cb252(param_1 + 0xfd,param_2 + 0x7e8);
  *(undefined4 *)(param_1 + 0x129) = *(undefined4 *)(param_2 + 0x948);
  *(undefined4 *)(param_1 + 0x12a) = *(undefined4 *)(param_2 + 0x950);
  return param_1;
}



// FUNCTION 1478b30d0 FUN_1478b30d0 body=455 status=ok
// SIG undefined FUN_1478b30d0(void)

undefined8 * FUN_1478b30d0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_1478c2c6c();
  *param_1 = &PTR_FUN_14a78dfa0;
  *(undefined1 *)((longlong)param_1 + 0xc2) = *(undefined1 *)(param_2 + 0xc2);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0xc0);
  lVar2 = *(longlong *)(param_2 + 200);
  param_1[0x19] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  FUN_140501b78(param_1 + 0x1b,param_2 + 0xd8);
  lVar2 = *(longlong *)(param_2 + 0x158);
  param_1[0x2b] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_140501b78(param_1 + 0x2c,param_2 + 0x160);
  lVar2 = *(longlong *)(param_2 + 0x1e0);
  param_1[0x3c] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  memcpy(param_1 + 0x3d,(void *)(param_2 + 0x1e8),0x88);
  FUN_140501b78(param_1 + 0x4e,param_2 + 0x270);
  lVar2 = *(longlong *)(param_2 + 0x2f0);
  param_1[0x5e] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[0x5f] = 0;
  iVar1 = *(int *)(param_2 + 0x300);
  uVar3 = *(undefined8 *)(param_2 + 0x2f8);
  *(int *)(param_1 + 0x60) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  }
  else {
    FUN_1477e8036(param_1 + 0x5f,iVar1,0);
    FUN_1477e80a8(param_1[0x5f],uVar3,iVar1);
  }
  FUN_140501b78(param_1 + 0x61,param_2 + 0x308);
  lVar2 = *(longlong *)(param_2 + 0x388);
  param_1[0x71] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1478c2cd6(param_1 + 0x72,param_2 + 0x390);
  return param_1;
}



// FUNCTION 1478b3298 FUN_1478b3298 body=515 status=ok
// SIG undefined FUN_1478b3298(void)

void FUN_1478b3298(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14a77e120;
  FUN_145821914(param_1 + 0xfd);
  FUN_1477d0770(param_1[0xfb],*(undefined4 *)(param_1 + 0xfc));
  if (param_1[0xfb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf8] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf7) = 0;
  if (param_1[0xf6] != 0) {
    FUN_1400020a8();
  }
  FUN_14707ed72(param_1 + 0xee);
  FUN_145bf91aa(param_1[0xe7],*(undefined4 *)(param_1 + 0xe8));
  if (param_1[0xe7] != 0) {
    FUN_1400020a8();
  }
  FUN_145bf91aa(param_1[0xe5],*(undefined4 *)(param_1 + 0xe6));
  if (param_1[0xe5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xdf];
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
  FUN_1477c9968(param_1 + 0xd3);
  FUN_1458219bc(param_1 + 0x59);
  plVar3 = (longlong *)param_1[0x32];
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
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_1478c2f34(param_1 + 0x27);
  lVar4 = 0;
  do {
    FUN_1412895b6(*(undefined8 *)((longlong)param_1 + lVar4 + 0x128),
                  *(undefined4 *)((longlong)param_1 + lVar4 + 0x130));
    if (*(longlong *)((longlong)param_1 + lVar4 + 0x128) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != -0x20);
  FUN_1458793b1(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_14587937a(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1478c2f6a(param_1 + 0xc);
  return;
}



// FUNCTION 1478b349c FUN_1478b349c body=254 status=ok
// SIG undefined FUN_1478b349c(void)

longlong FUN_1478b349c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_14001cc68(0x960,0x10);
  FUN_1478b2b9c(lVar1,param_1);
  LOCK();
  *(undefined4 *)(lVar1 + 0x1a4) = 0;
  UNLOCK();
  *(byte *)(lVar1 + 0x19b) = *(byte *)(lVar1 + 0x19b) & 0xef;
  *(byte *)(lVar1 + 0x198) = *(byte *)(lVar1 + 0x198) & 0x3f | 0x80;
  *(undefined8 *)(lVar1 + 0x58) = param_2;
  *(undefined4 *)(lVar1 + 0x1ac) = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x39) == '\x02') {
    FUN_1478c3b22(lVar1 + 0x770);
  }
  if (0.0 <= *(float *)(param_1 + 0x220)) {
    *(undefined4 *)(lVar1 + 0x220) = 0x3f800000;
  }
  FUN_1478c3caa(lVar1 + 0x60);
  FUN_1478c3e32(lVar1 + 0x138);
  local_40 = *(undefined8 *)(lVar1 + 0x30);
  local_58 = 0;
  local_48 = &PTR_LAB_14a78d990;
  local_68 = FUN_1433be7f0;
  FUN_1434130f2();
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b359c FUN_1478b359c body=1270 status=ok
// SIG undefined FUN_1478b359c(void)

void FUN_1478b359c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = param_1 + 0x148;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x160) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = (longlong *)(param_1 + 0x138);
  if (iStack_4c < *(int *)(local_58 + 0x18)) {
    do {
      lVar5 = *(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      if (lVar5 != 0) {
        FUN_14795c4d8(lVar5,param_2);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
  }
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x100,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x20,0,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_147d3494c(*(longlong *)(param_1 + 0x20),param_2);
  }
  iVar6 = 0;
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x18,0,0);
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x130), lVar5 != 0)) {
    FUN_147d3494c(lVar5,param_2);
  }
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x28,0,0);
  plVar1 = (longlong *)(param_1 + 0xb0);
  lVar5 = param_1 + 0xc0;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  local_58 = lVar5;
  if (*(int *)(param_1 + 0xd8) != 0) {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0xd8);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (local_58 != lVar5)) {
    do {
      if (*(longlong *)(*local_88 + (longlong)iStack_6c * 0x10) != 0) {
        (**(code **)(*param_2 + 0x88))(param_2,*local_88 + (longlong)iStack_6c * 0x10,0,0);
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (local_78 != lVar5 || iStack_6c != iVar6));
  }
  plVar1 = *(longlong **)(param_1 + 0x188);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_88);
    plVar1 = local_88;
    lVar5 = (longlong)(int)local_80;
    if (lVar5 != 0) {
      lVar4 = 0;
      do {
        (**(code **)(*param_2 + 0x88))(param_2,*(undefined8 *)((longlong)plVar1 + lVar4),0,0);
        lVar4 = lVar4 + 8;
      } while (lVar5 * 8 != lVar4);
    }
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8(local_88);
    }
  }
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x390,0,0);
  local_98 = 0;
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x668),*(undefined4 *)(param_1 + 0x670),0);
  local_98 = 0;
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x678),*(undefined4 *)(param_1 + 0x680),0);
  local_98 = 0;
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x688),*(undefined4 *)(param_1 + 0x690),0);
  local_98 = 0;
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x658),*(undefined4 *)(param_1 + 0x660),0);
  if ((longlong)*(int *)(param_1 + 0x730) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x728);
    lVar5 = lVar4 + (longlong)*(int *)(param_1 + 0x730) * 0x18;
    do {
      if ((longlong)*(int *)(lVar4 + 0x10) != 0) {
        lVar3 = (longlong)*(int *)(lVar4 + 0x10) * 0xb8;
        lVar2 = *(longlong *)(lVar4 + 8) + 8;
        do {
          (**(code **)(*param_2 + 0x88))(param_2,lVar2,0,0);
          lVar2 = lVar2 + 0xb8;
          lVar3 = lVar3 + -0xb8;
        } while (lVar3 != 0);
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != lVar5);
  }
  if ((longlong)*(int *)(param_1 + 0x740) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x738);
    lVar5 = lVar4 + (longlong)*(int *)(param_1 + 0x740) * 0x18;
    do {
      if ((longlong)*(int *)(lVar4 + 0x10) != 0) {
        lVar3 = (longlong)*(int *)(lVar4 + 0x10) * 0xb8;
        lVar2 = *(longlong *)(lVar4 + 8) + 8;
        do {
          (**(code **)(*param_2 + 0x88))(param_2,lVar2,0,0);
          lVar2 = lVar2 + 0xb8;
          lVar3 = lVar3 + -0xb8;
        } while (lVar3 != 0);
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != lVar5);
  }
  if ((longlong)*(int *)(param_1 + 0x7e0) != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x7e0) * 0xc0;
    lVar4 = *(longlong *)(param_1 + 0x7d8) + 0x10;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,lVar4 + 8,0,0);
      (**(code **)(*param_2 + 0x88))(param_2,lVar4);
      lVar4 = lVar4 + 0xc0;
      lVar5 = lVar5 + -0xc0;
    } while (lVar5 != 0);
  }
  FUN_1478b3a94(param_2,param_1 + 0x7f0);
  FUN_1478b3a94(param_2,param_1 + 0x848);
  FUN_1478b3a94(param_2,param_1 + 0x8a0);
  FUN_1478b3a94(param_2,param_1 + 0x8f8);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478b3a94 FUN_1478b3a94 body=262 status=ok
// SIG undefined FUN_1478b3a94(void)

void FUN_1478b3a94(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar2) || (uStack_48 != plVar1)) {
    do {
      (**(code **)(*param_1 + 0x88))(param_1,(longlong)iStack_5c * 0x10 + *local_78,0,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478b3c22 FUN_1478b3c22 body=9 status=ok
// SIG undefined FUN_1478b3c22(void)

void FUN_1478b3c22(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1bc) = param_2;
  return;
}



// FUNCTION 1478b3c2c FUN_1478b3c2c body=9 status=ok
// SIG undefined FUN_1478b3c2c(void)

void FUN_1478b3c2c(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1b8) = param_2;
  return;
}



// FUNCTION 1478b3c36 FUN_1478b3c36 body=43 status=ok
// SIG undefined FUN_1478b3c36(void)

void FUN_1478b3c36(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  FUN_14485c47a(param_1 + 8);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
  }
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



// FUNCTION 1478b3c62 FUN_1478b3c62 body=107 status=ok
// SIG undefined FUN_1478b3c62(void)

void FUN_1478b3c62(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong **)(param_1 + 0x18) = param_2;
  if (*(longlong *)(param_1 + 0x100) == 0) {
    if (param_2 == (longlong *)0x0) {
      bVar1 = 0;
    }
    else {
      cVar2 = (**(code **)(*param_2 + 0x2f0))(param_2);
      bVar1 = cVar2 << 5;
    }
  }
  else {
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x100) + 0x48) & 0x20;
  }
  *(byte *)(param_1 + 0x19a) = *(byte *)(param_1 + 0x19a) & 0xdf | bVar1;
  return;
}



// FUNCTION 1478b3cce FUN_1478b3cce body=111 status=ok
// SIG undefined FUN_1478b3cce(void)

void FUN_1478b3cce(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x100) = param_2;
    if (param_2 == 0) {
      if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
        bVar1 = 0;
      }
      else {
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x2f0))();
        bVar1 = cVar2 << 5;
      }
      goto LAB_1478b3cf9;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x100) = param_2;
  }
  bVar1 = *(byte *)(param_2 + 0x48) & 0x20;
LAB_1478b3cf9:
  *(byte *)(param_1 + 0x19a) = *(byte *)(param_1 + 0x19a) & 0xdf | bVar1;
  return;
}



// FUNCTION 1478b3d3e FUN_1478b3d3e body=40 status=ok
// SIG undefined FUN_1478b3d3e(void)

undefined8 FUN_1478b3d3e(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x58) != 0) &&
      ((*(byte *)(*(longlong *)(param_1 + 0x58) + 0x5b0) & 2) != 0)) &&
     (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001478b3d5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x2d0))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1478b3d66 FUN_1478b3d66 body=141 status=ok
// SIG undefined FUN_1478b3d66(void)

float FUN_1478b3d66(longlong param_1)

{
  char cVar1;
  float fVar2;
  
  cVar1 = FUN_1478b3df4();
  if (cVar1 == '\0') {
    cVar1 = FUN_1478b3df4(param_1);
    if (cVar1 == '\0') {
      fVar2 = *(float *)(param_1 + 0x2a4) * *(float *)(param_1 + 0x2a0);
      if (100.0 <= fVar2) {
        fVar2 = 100.0;
      }
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
    }
    else {
      fVar2 = 3.4028235e+38;
    }
    fVar2 = fVar2 * *(float *)(param_1 + 0x21c);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x2a4) * *(float *)(param_1 + 0x2a0);
    if (100.0 <= fVar2) {
      fVar2 = 100.0;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    fVar2 = fVar2 * *(float *)(param_1 + 0x21c) + 100.0 + 1.0;
  }
  return fVar2;
}


