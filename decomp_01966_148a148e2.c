// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148a148e2 FUN_148a148e2 body=322 status=ok
// SIG undefined FUN_148a148e2(void)

void FUN_148a148e2(undefined8 param_1,longlong param_2)

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
  FUN_148a21b64(local_18,local_1c,local_20 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a14a2c FUN_148a14a2c body=322 status=ok
// SIG undefined FUN_148a14a2c(void)

void FUN_148a14a2c(undefined8 param_1,longlong param_2)

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
  FUN_146577c4a(local_18,local_1c,local_20 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a14b70 FUN_148a14b70 body=148 status=ok
// SIG undefined FUN_148a14b70(void)

void FUN_148a14b70(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a21e1c(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a14c06 FUN_148a14c06 body=230 status=ok
// SIG undefined FUN_148a14c06(void)

void FUN_148a14c06(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a21d2c(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a14cee FUN_148a14cee body=219 status=ok
// SIG undefined FUN_148a14cee(void)

void FUN_148a14cee(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
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
  FUN_148a21df0(local_18,local_19);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a14dca FUN_148a14dca body=219 status=ok
// SIG undefined FUN_148a14dca(void)

void FUN_148a14dca(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
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
  FUN_148a21e40(local_18,local_19);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a14ea6 FUN_148a14ea6 body=219 status=ok
// SIG undefined FUN_148a14ea6(void)

void FUN_148a14ea6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
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
  FUN_148a21f30(local_18,local_19);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a14f8e FUN_148a14f8e body=493 status=ok
// SIG undefined FUN_148a14f8e(void)

void FUN_148a14f8e(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_38;
  int local_34;
  undefined8 local_30;
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
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar1 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38 != 0;
  FUN_14586180c(local_20,local_21,local_30,iVar1 != 0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a15188 FUN_148a15188 body=230 status=ok
// SIG undefined FUN_148a15188(void)

void FUN_148a15188(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a21d78(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a15276 FUN_148a15276 body=232 status=ok
// SIG undefined FUN_148a15276(void)

void FUN_148a15276(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
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
  FUN_148a21dc4(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a15367 FUN_148a15367 body=65 status=ok
// SIG undefined FUN_148a15367(void)

void FUN_148a15367(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [46];
  undefined1 local_a;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_a = param_2;
  local_9 = param_3;
  FUN_1447cd2ec(param_1,&local_a);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a153ba FUN_148a153ba body=1021 status=ok
// SIG undefined FUN_148a153ba(void)

void FUN_148a153ba(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_78 = 0;
  local_70 = 0x4fc71eb4;
  local_68 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  iVar1 = local_7c;
  local_80 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_d8 = &local_98;
  local_98 = local_78;
  local_90 = local_70;
  local_88 = 0;
  local_b8 = local_50;
  uStack_b4 = uStack_4c;
  uStack_b0 = uStack_48;
  uStack_ac = uStack_44;
  local_a8 = local_40;
  local_c8 = local_80 != 0;
  local_d0 = iVar1 != 0;
  local_e0 = local_5c;
  local_e8 = local_58;
  uVar2 = FUN_148a25522(local_28,local_29,local_38);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a157be FUN_148a157be body=323 status=ok
// SIG undefined FUN_148a157be(void)

void FUN_148a157be(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_21;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
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
  uVar1 = FUN_148a25f02(local_20,local_21,local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a15908 FUN_148a15908 body=370 status=ok
// SIG undefined FUN_148a15908(void)

void FUN_148a15908(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined1 local_21;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  local_30 = DAT_14c846508;
  local_40 = (undefined4)DAT_14c8464f8;
  uStack_3c = DAT_14c8464f8._4_4_;
  uStack_38 = (undefined4)DAT_14c846500;
  uStack_34 = DAT_14c846500._4_4_;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar2 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148a25c2e(local_20,local_21,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a15a7c FUN_148a15a7c body=308 status=ok
// SIG undefined FUN_148a15a7c(void)

void FUN_148a15a7c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_21;
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
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a25d1c(&local_38,local_20,local_21);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a15bb8 FUN_148a15bb8 body=232 status=ok
// SIG undefined FUN_148a15bb8(void)

void FUN_148a15bb8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148a25a70(local_20,local_21);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a15ca2 FUN_148a15ca2 body=232 status=ok
// SIG undefined FUN_148a15ca2(void)

void FUN_148a15ca2(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148a25b4e(local_20,local_21);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a15d8c FUN_148a15d8c body=148 status=ok
// SIG undefined FUN_148a15d8c(void)

void FUN_148a15d8c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a259b0(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a15e22 FUN_148a15e22 body=148 status=ok
// SIG undefined FUN_148a15e22(void)

void FUN_148a15e22(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a258f0(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a15eb8 FUN_148a15eb8 body=219 status=ok
// SIG undefined FUN_148a15eb8(void)

void FUN_148a15eb8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
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
  FUN_148a25826(local_18,local_19);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a15f94 FUN_148a15f94 body=225 status=ok
// SIG undefined FUN_148a15f94(void)

void FUN_148a15f94(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148a2568a(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a16076 FUN_148a16076 body=316 status=ok
// SIG undefined FUN_148a16076(void)

void FUN_148a16076(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_19;
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
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
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
  FUN_148a2574c(local_18,local_19,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a161ba FUN_148a161ba body=42 status=ok
// SIG undefined FUN_148a161ba(void)

undefined8 FUN_148a161ba(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxWeapon\\Source\\GbxWeapon/Public/Behaviors/WeaponBehavior_PreUse.h"
                ,0x1b,L"Pure virtual not implemented (%s)",L"UWeaponBehavior_PreUse::IsUsing");
  return 0;
}



// FUNCTION 148a161e4 FUN_148a161e4 body=42 status=ok
// SIG undefined FUN_148a161e4(void)

undefined8 FUN_148a161e4(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxWeapon\\Source\\GbxWeapon/Public/Behaviors/WeaponBehavior_PreUse.h"
                ,0x1d,L"Pure virtual not implemented (%s)",
                L"UWeaponBehavior_PreUse::ShouldRestartAfterUse");
  return 0;
}



// FUNCTION 148a16214 FUN_148a16214 body=42 status=ok
// SIG undefined FUN_148a16214(void)

undefined8 FUN_148a16214(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxWeapon\\Source\\GbxWeapon/Public/Behaviors/WeaponBehavior_PreUse.h"
                ,0x33,L"Pure virtual not implemented (%s)",L"UWeaponBehavior_PreUse::StartUsing");
  return 0;
}



// FUNCTION 148a1623e FUN_148a1623e body=42 status=ok
// SIG undefined FUN_148a1623e(void)

undefined1 FUN_148a1623e(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxWeapon\\Source\\GbxWeapon/Public/Behaviors/WeaponBehavior_PreUse.h"
                ,0x34,L"Pure virtual not implemented (%s)",L"UWeaponBehavior_PreUse::StopUsing");
  return 1;
}



// FUNCTION 148a16268 FUN_148a16268 body=42 status=ok
// SIG undefined FUN_148a16268(void)

undefined8 FUN_148a16268(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxWeapon\\Source\\GbxWeapon/Public/Behaviors/WeaponBehavior_Reload.h"
                ,0x20,L"Pure virtual not implemented (%s)",L"UWeaponBehavior_Reload::IsReloading");
  return 0;
}



// FUNCTION 148a162a2 FUN_148a162a2 body=41 status=ok
// SIG undefined FUN_148a162a2(void)

void FUN_148a162a2(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxWeapon\\Source\\GbxWeapon/Public/Behaviors/WeaponBehavior_Reload.h"
                ,0x3a,L"Pure virtual not implemented (%s)",L"UWeaponBehavior_Reload::StartReloading"
               );
  return;
}



// FUNCTION 148a162cc FUN_148a162cc body=41 status=ok
// SIG undefined FUN_148a162cc(void)

void FUN_148a162cc(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxWeapon\\Source\\GbxWeapon/Public/Behaviors/WeaponBehavior_Reload.h"
                ,0x3b,L"Pure virtual not implemented (%s)",L"UWeaponBehavior_Reload::StopReloading")
  ;
  return;
}



// FUNCTION 148a162fa FUN_148a162fa body=42 status=ok
// SIG undefined FUN_148a162fa(void)

undefined8 FUN_148a162fa(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxWeapon\\Source\\GbxWeapon/Public/Behaviors/WeaponBehavior_StatusEffectModifier.h"
                ,0x17,L"Pure virtual not implemented (%s)",
                L"UWeaponBehavior_StatusEffectModifier::GetStatusEffectModifierData");
  return 0;
}



// FUNCTION 148a16324 FUN_148a16324 body=69 status=ok
// SIG undefined FUN_148a16324(void)

undefined8 * FUN_148a16324(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_140033559("..\\Plugins\\Gearbox\\GbxWeapon\\Source\\GbxWeapon/Public/Behaviors/WeaponBehavior_Use.h"
                ,0x28,L"Pure virtual not implemented (%s)",
                L"UWeaponBehavior_Use::GetStartTraceLocation");
  param_2[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 148a1636a FUN_148a1636a body=69 status=ok
// SIG undefined FUN_148a1636a(void)

undefined8 * FUN_148a1636a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_140033559("..\\Plugins\\Gearbox\\GbxWeapon\\Source\\GbxWeapon/Public/Behaviors/WeaponBehavior_Use.h"
                ,0x29,L"Pure virtual not implemented (%s)",
                L"UWeaponBehavior_Use::GetPhysicalStartLocation");
  param_2[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 148a163b0 FUN_148a163b0 body=92 status=ok
// SIG undefined FUN_148a163b0(void)

void FUN_148a163b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  FUN_140033559("..\\Plugins\\Gearbox\\GbxWeapon\\Source\\GbxWeapon/Public/Behaviors/WeaponBehavior_Use.h"
                ,0x2b,L"Pure virtual not implemented (%s)",
                L"UWeaponBehavior_Use::GetPhysicalStartLocationAndRotation");
  param_3[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_3 = DAT_14c8464e0;
  param_3[1] = uVar1;
  param_4[2] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  *param_4 = DAT_14c8464f8;
  param_4[1] = uVar1;
  return;
}



// FUNCTION 148a1640c FUN_148a1640c body=92 status=ok
// SIG undefined FUN_148a1640c(void)

void FUN_148a1640c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  FUN_140033559("..\\Plugins\\Gearbox\\GbxWeapon\\Source\\GbxWeapon/Public/Behaviors/WeaponBehavior_Use.h"
                ,0x2a,L"Pure virtual not implemented (%s)",
                L"UWeaponBehavior_Use::GetPhysicalStartLocationAndRotation");
  param_2[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  param_3[2] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  *param_3 = DAT_14c8464f8;
  param_3[1] = uVar1;
  return;
}



// FUNCTION 148a164aa FUN_148a164aa body=41 status=ok
// SIG undefined FUN_148a164aa(void)

void FUN_148a164aa(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxWeapon\\Source\\GbxWeapon/Public/Behaviors/WeaponBehavior_Use.h"
                ,0x78,L"Pure virtual not implemented (%s)",L"UWeaponBehavior_Use::SetUseDelay");
  return;
}



// FUNCTION 148a164e0 FUN_148a164e0 body=119 status=ok
// SIG undefined FUN_148a164e0(void)

void FUN_148a164e0(undefined8 param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0x3002;
  param_2[8] = 0;
  *param_2 = &PTR_FUN_14b4a47a0;
  *(undefined4 *)(param_2 + 9) = 1;
  param_2[10] = 0;
  *(undefined4 *)(param_2 + 0xb) = 0x4fc71eb4;
  param_2[0xc] = 0;
  FUN_1405c5fa2();
  param_2[0xe] = &DAT_14cb769e8;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = &PTR_FUN_14b0394b0;
  return;
}



// FUNCTION 148a1656e FUN_148a1656e body=63 status=ok
// SIG undefined FUN_148a1656e(void)

undefined1 FUN_148a1656e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a166e8(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148a165d6 FUN_148a165d6 body=59 status=ok
// SIG undefined FUN_148a165d6(void)

undefined8 FUN_148a165d6(longlong *param_1)

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



// FUNCTION 148a16622 FUN_148a16622 body=38 status=ok
// SIG undefined FUN_148a16622(void)

void FUN_148a16622(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_148a1668a(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148a1668a FUN_148a1668a body=94 status=ok
// SIG undefined FUN_148a1668a(void)

void FUN_148a1668a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4a47a0;
  param_1[0xd] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    FUN_140115c12(param_1 + 0xf,0);
  }
  param_1[0xe] = 0;
  if (param_1[0xf] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148a166e8 FUN_148a166e8 body=137 status=ok
// SIG undefined FUN_148a166e8(void)

longlong FUN_148a166e8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_1418443e8(param_1 + 0x18,param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x30) != *(longlong *)(param_2 + 0x30)) ||
     (*(int *)(param_1 + 0x38) != *(int *)(param_2 + 0x38))) {
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  if ((*(longlong *)(param_1 + 0x50) != *(longlong *)(param_2 + 0x50)) ||
     (*(int *)(param_1 + 0x58) != *(int *)(param_2 + 0x58))) {
    *(longlong *)(param_1 + 0x50) = *(longlong *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  FUN_140115bdc(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 148a16836 FUN_148a16836 body=63 status=ok
// SIG undefined FUN_148a16836(void)

undefined1 FUN_148a16836(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a1699a(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 148a1689e FUN_148a1689e body=59 status=ok
// SIG undefined FUN_148a1689e(void)

undefined8 FUN_148a1689e(longlong *param_1)

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



// FUNCTION 148a168ea FUN_148a168ea body=40 status=ok
// SIG undefined FUN_148a168ea(void)

void FUN_148a168ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_145a47e24(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148a16960 FUN_148a16960 body=57 status=ok
// SIG undefined FUN_148a16960(void)

void FUN_148a16960(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb94190 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb94190 = FUN_140002ddd(FUN_146575981,uVar1,L"WeaponGlobals");
  }
  return;
}



// FUNCTION 148a1699a FUN_148a1699a body=167 status=ok
// SIG undefined FUN_148a1699a(void)

longlong FUN_148a1699a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_1486162fa(param_1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x98);
  uVar3 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  FUN_144a787a6(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 148a16a60 FUN_148a16a60 body=63 status=ok
// SIG undefined FUN_148a16a60(void)

undefined1 FUN_148a16a60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a16b7c(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 148a16ac8 FUN_148a16ac8 body=59 status=ok
// SIG undefined FUN_148a16ac8(void)

undefined8 FUN_148a16ac8(longlong *param_1)

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



// FUNCTION 148a16b14 FUN_148a16b14 body=38 status=ok
// SIG undefined FUN_148a16b14(void)

void FUN_148a16b14(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_140cc23e4(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148a16b7c FUN_148a16b7c body=149 status=ok
// SIG undefined FUN_148a16b7c(void)

longlong FUN_148a16b7c(longlong param_1,longlong param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 0x38);
  uVar6 = *(undefined4 *)(param_2 + 0x3c);
  uVar7 = *(undefined4 *)(param_2 + 0x40);
  uVar8 = *(undefined4 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  *(undefined4 *)(param_1 + 0x40) = uVar7;
  *(undefined4 *)(param_1 + 0x44) = uVar8;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  uVar1 = *(undefined4 *)(param_2 + 0x7c);
  uVar2 = *(undefined4 *)(param_2 + 0x80);
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  FUN_144a787a6(param_1 + 0x88,param_2 + 0x88);
  uVar9 = *(undefined8 *)(param_2 + 0xa0);
  uVar10 = *(undefined8 *)(param_2 + 0xa5);
  uVar11 = *(undefined8 *)(param_2 + 0xad);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = uVar9;
  *(undefined8 *)(param_1 + 0xa5) = uVar10;
  *(undefined8 *)(param_1 + 0xad) = uVar11;
  return param_1;
}



// FUNCTION 148a16c96 FUN_148a16c96 body=59 status=ok
// SIG undefined FUN_148a16c96(void)

undefined8 FUN_148a16c96(longlong *param_1)

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



// FUNCTION 148a16d36 FUN_148a16d36 body=55 status=ok
// SIG undefined FUN_148a16d36(void)

void FUN_148a16d36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb941f0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb941f0 = FUN_140002ddd(FUN_146575adb,uVar1,L"WeaponStateValueResolver");
  }
  return;
}



// FUNCTION 148a16e16 FUN_148a16e16 body=59 status=ok
// SIG undefined FUN_148a16e16(void)

undefined8 FUN_148a16e16(longlong *param_1)

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



// FUNCTION 148a16eb6 FUN_148a16eb6 body=34 status=ok
// SIG undefined FUN_148a16eb6(void)

undefined8 FUN_148a16eb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 148a16eda FUN_148a16eda body=131 status=ok
// SIG undefined FUN_148a16eda(void)

void FUN_148a16eda(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x2e0);
  FUN_1487639c0(param_2);
  *param_2 = &PTR_FUN_14b4a75c0;
  param_2[0x4f] = 0;
  param_2[0x50] = 0x200000000;
  param_2[0x59] = 0;
  param_2[0x5a] = 0x100000000;
  param_2[0x51] = 0;
  param_2[0x52] = 0;
  param_2[0x53] = 0;
  param_2[0x54] = 0;
  param_2[0x55] = 0;
  param_2[0x56] = 0;
  param_2[0x57] = 0;
  return;
}



// FUNCTION 148a16f5e FUN_148a16f5e body=113 status=ok
// SIG undefined FUN_148a16f5e(void)

void FUN_148a16f5e(undefined8 param_1,undefined8 *param_2)

{
  FUN_1487639c0(param_2);
  *param_2 = &PTR_FUN_14b4a75c0;
  param_2[0x4f] = 0;
  param_2[0x50] = 0x200000000;
  param_2[0x59] = 0;
  param_2[0x5a] = 0x100000000;
  param_2[0x51] = 0;
  param_2[0x52] = 0;
  param_2[0x53] = 0;
  param_2[0x54] = 0;
  param_2[0x55] = 0;
  param_2[0x56] = 0;
  param_2[0x57] = 0;
  return;
}



// FUNCTION 148a16ff4 FUN_148a16ff4 body=63 status=ok
// SIG undefined FUN_148a16ff4(void)

undefined1 FUN_148a16ff4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a17148(param_2,param_3);
    param_3 = param_3 + 0x2e0;
    param_2 = param_2 + 0x2e0;
  }
  return 1;
}



// FUNCTION 148a1705c FUN_148a1705c body=59 status=ok
// SIG undefined FUN_148a1705c(void)

undefined8 FUN_148a1705c(longlong *param_1)

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



// FUNCTION 148a170a8 FUN_148a170a8 body=38 status=ok
// SIG undefined FUN_148a170a8(void)

void FUN_148a170a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2e0) == '\x01') {
    FUN_140943dac(param_2);
    *(undefined1 *)(param_2 + 0x2e0) = 0;
  }
  return;
}



// FUNCTION 148a1711c FUN_148a1711c body=43 status=ok
// SIG undefined FUN_148a1711c(void)

undefined8 FUN_148a1711c(undefined8 param_1,int param_2)

{
  FUN_140943dac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x2e0);
  }
  return param_1;
}



// FUNCTION 148a17148 FUN_148a17148 body=140 status=ok
// SIG undefined FUN_148a17148(void)

longlong FUN_148a17148(longlong param_1,longlong param_2)

{
  FUN_148763b7c();
  FUN_148a171d4(param_1 + 0x208,param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_2 + 0x288);
  FUN_148a17220(param_1 + 0x290,param_2 + 0x290);
  FUN_148a1727e(param_1 + 0x2a0,param_2 + 0x2a0);
  FUN_148a172dc(param_1 + 0x2b0,param_2 + 0x2b0);
  FUN_148a1733a(param_1 + 0x2c0,param_2 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_2 + 0x2d8);
  return param_1;
}



// FUNCTION 148a171d4 FUN_148a171d4 body=75 status=ok
// SIG undefined FUN_148a171d4(void)

longlong FUN_148a171d4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar1 = param_1;
    }
    FUN_140943ec3(lVar1,*(undefined4 *)(param_1 + 0x78));
    lVar1 = *(longlong *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x70) == 0) {
      lVar1 = param_2;
    }
    FUN_148a173a2(param_1,lVar1,*(undefined4 *)(param_2 + 0x78),*(undefined4 *)(param_1 + 0x7c));
  }
  return param_1;
}



// FUNCTION 148a17220 FUN_148a17220 body=93 status=ok
// SIG undefined FUN_148a17220(void)

undefined8 * FUN_148a17220(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140943f4f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a17644(param_1,iVar1);
      FUN_148a176a6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148a1727e FUN_148a1727e body=93 status=ok
// SIG undefined FUN_148a1727e(void)

undefined8 * FUN_148a1727e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140943f04(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a176f8(param_1,iVar1);
      FUN_148a1775a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148a172dc FUN_148a172dc body=93 status=ok
// SIG undefined FUN_148a172dc(void)

undefined8 * FUN_148a172dc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140943e8e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148a17788(param_1,iVar1);
      FUN_148a177fb(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148a1733a FUN_148a1733a body=104 status=ok
// SIG undefined FUN_148a1733a(void)

void * FUN_148a1733a(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 8);
    if (*(void **)((longlong)param_2 + 8) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x10);
    *(int *)((longlong)param_1 + 0x10) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x14) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 1;
    }
    else {
      FUN_1448a9f54(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 8);
        if (*(void **)((longlong)param_1 + 8) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 148a173a2 FUN_148a173a2 body=86 status=ok
// SIG undefined FUN_148a173a2(void)

void FUN_148a173a2(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x78) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 2;
    return;
  }
  FUN_148a173f8(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    lVar1 = param_1;
  }
  FUN_148a1746a(lVar1,param_2,param_3);
  return;
}



// FUNCTION 148a173f8 FUN_148a173f8 body=114 status=ok
// SIG undefined FUN_148a173f8(void)

void FUN_148a173f8(longlong param_1,uint param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 2;
    if (2 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 * 0x38,0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2 >> 3;
      iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
      iVar4 = 0x7fffffff;
      if ((int)param_2 <= iVar3) {
        iVar4 = iVar3;
      }
    }
  }
  if (param_3 < iVar4) {
    FUN_148a1749e(param_1,0,iVar4,0x38);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0x7c) = param_3;
  return;
}



// FUNCTION 148a1746a FUN_148a1746a body=52 status=ok
// SIG undefined FUN_148a1746a(void)

void FUN_148a1746a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148a17528(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 148a1749e FUN_148a1749e body=137 status=ok
// SIG undefined FUN_148a1749e(void)

void FUN_148a1749e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x70);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x70,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x70),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x70,param_2,param_3,param_4);
  return;
}



// FUNCTION 148a17528 FUN_148a17528 body=186 status=ok
// SIG undefined FUN_148a17528(void)

undefined1 * FUN_148a17528(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = *(void **)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_148a175e2(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  pvVar2 = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_148a175e2(param_1 + 0x18,iVar1,0);
    memcpy(*(void **)(param_1 + 0x18),pvVar2,(longlong)iVar1 << 3);
  }
  param_1[0x30] = param_2[0x30];
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 148a175e2 FUN_148a175e2 body=98 status=ok
// SIG undefined FUN_148a175e2(void)

void FUN_148a175e2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148a17644 FUN_148a17644 body=98 status=ok
// SIG undefined FUN_148a17644(void)

void FUN_148a17644(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148a176a6 FUN_148a176a6 body=82 status=ok
// SIG undefined FUN_148a176a6(void)

void FUN_148a176a6(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_144a8b00e(param_1,param_2);
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148a176f8 FUN_148a176f8 body=98 status=ok
// SIG undefined FUN_148a176f8(void)

void FUN_148a176f8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148a1775a FUN_148a1775a body=45 status=ok
// SIG undefined FUN_148a1775a(void)

void FUN_148a1775a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148a17788 FUN_148a17788 body=115 status=ok
// SIG undefined FUN_148a17788(void)

void FUN_148a17788(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148a177fb FUN_148a177fb body=52 status=ok
// SIG undefined FUN_148a177fb(void)

void FUN_148a177fb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148a17830(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 148a17830 FUN_148a17830 body=117 status=ok
// SIG undefined FUN_148a17830(void)

longlong FUN_148a17830(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  void *_Src;
  
  FUN_142b16116();
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  pvVar2 = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 2;
  }
  else {
    _Src = (void *)(param_2 + 8);
    if (pvVar2 != (void *)0x0) {
      _Src = pvVar2;
    }
    FUN_148a178a6((void *)(param_1 + 8),iVar1);
    pvVar2 = *(void **)(param_1 + 0x18);
    if (*(void **)(param_1 + 0x18) == (void *)0x0) {
      pvVar2 = (void *)(param_1 + 8);
    }
    memcpy(pvVar2,_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 148a178a6 FUN_148a178a6 body=96 status=ok
// SIG undefined FUN_148a178a6(void)

void FUN_148a178a6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 3) {
    iVar3 = 2;
  }
  else {
    iVar2 = 0;
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    iVar3 = (int)(uVar1 >> 3);
    if (iVar3 < (int)param_2) {
      iVar3 = 0x7fffffff;
    }
    else if (iVar3 < 1) goto LAB_148a178d7;
  }
  iVar2 = iVar3;
  FUN_148a17906(param_1,0,iVar2,8);
LAB_148a178d7:
  *(int *)(param_1 + 0x1c) = iVar2;
  return;
}



// FUNCTION 148a17906 FUN_148a17906 body=133 status=ok
// SIG undefined FUN_148a17906(void)

void FUN_148a17906(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 148a179f0 FUN_148a179f0 body=63 status=ok
// SIG undefined FUN_148a179f0(void)

undefined1 FUN_148a179f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148764dc2(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148a17a58 FUN_148a17a58 body=59 status=ok
// SIG undefined FUN_148a17a58(void)

undefined8 FUN_148a17a58(longlong *param_1)

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



// FUNCTION 148a17aa4 FUN_148a17aa4 body=38 status=ok
// SIG undefined FUN_148a17aa4(void)

void FUN_148a17aa4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_140fb6454(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148a17b92 FUN_148a17b92 body=59 status=ok
// SIG undefined FUN_148a17b92(void)

undefined8 FUN_148a17b92(longlong *param_1)

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



// FUNCTION 148a17c32 FUN_148a17c32 body=55 status=ok
// SIG undefined FUN_148a17c32(void)

void FUN_148a17c32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb943f0 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb943f0 = FUN_140002ddd(FUN_1465766e1,uVar1,L"WeaponTargetLockValueResolver");
  }
  return;
}



// FUNCTION 148a17d02 FUN_148a17d02 body=59 status=ok
// SIG undefined FUN_148a17d02(void)

undefined8 FUN_148a17d02(longlong *param_1)

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



// FUNCTION 148a17e34 FUN_148a17e34 body=59 status=ok
// SIG undefined FUN_148a17e34(void)

undefined8 FUN_148a17e34(longlong *param_1)

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



// FUNCTION 148a17f4e FUN_148a17f4e body=59 status=ok
// SIG undefined FUN_148a17f4e(void)

undefined8 FUN_148a17f4e(longlong *param_1)

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



// FUNCTION 148a18080 FUN_148a18080 body=59 status=ok
// SIG undefined FUN_148a18080(void)

undefined8 FUN_148a18080(longlong *param_1)

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



// FUNCTION 148a1818e FUN_148a1818e body=59 status=ok
// SIG undefined FUN_148a1818e(void)

undefined8 FUN_148a1818e(longlong *param_1)

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



// FUNCTION 148a1824c FUN_148a1824c body=306 status=ok
// SIG undefined FUN_148a1824c(void)

float FUN_148a1824c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  fVar8 = 0.0;
  if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
    piVar5 = (int *)(param_1 + 0x188);
    if (*(int **)(param_1 + 400) != (int *)0x0) {
      piVar5 = *(int **)(param_1 + 400);
    }
    iVar6 = *piVar5;
    if (iVar6 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x150) + (longlong)iVar6 * 0x20;
        if (*(int *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar6 * 0x20) == 0) {
          if (lVar2 != 0) {
            lVar3 = *(longlong *)(lVar2 + 8);
            plVar4 = *(longlong **)(lVar2 + 0x10);
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            if (lVar3 == 0) {
              fVar8 = 0.0;
            }
            else {
              fVar7 = (float)FUN_140acd34c(lVar3);
              fVar8 = (float)FUN_140acd622(lVar3);
              FUN_140acd522(lVar3,&local_58);
              fVar8 = (local_58 - local_54) * fVar8;
              if (fVar8 <= fVar7) {
                fVar8 = fVar7;
              }
            }
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar4 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar5 = (int *)((longlong)plVar4 + 0xc);
                *piVar5 = *piVar5 + -1;
                UNLOCK();
                if (*piVar5 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar2 + 0x18);
      } while (iVar6 != -1);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar8;
}



// FUNCTION 148a18380 FUN_148a18380 body=186 status=ok
// SIG undefined FUN_148a18380(void)

undefined8 FUN_148a18380(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  
  if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
    piVar5 = (int *)(param_1 + 0x188);
    if (*(int **)(param_1 + 400) != (int *)0x0) {
      piVar5 = *(int **)(param_1 + 400);
    }
    iVar6 = *piVar5;
    if (iVar6 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x150) + (longlong)iVar6 * 0x20;
        if (*(int *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar6 * 0x20) == 0) {
          if (lVar2 == 0) {
            return 0;
          }
          lVar3 = *(longlong *)(lVar2 + 8);
          plVar4 = *(longlong **)(lVar2 + 0x10);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          if (lVar3 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_140acd458();
          }
          if (plVar4 == (longlong *)0x0) {
            return uVar7;
          }
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return uVar7;
          }
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar5 = (int *)((longlong)plVar4 + 0xc);
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (*piVar5 != 0) {
            return uVar7;
          }
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return uVar7;
        }
        iVar6 = *(int *)(lVar2 + 0x18);
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 148a1843a FUN_148a1843a body=9 status=ok
// SIG undefined FUN_148a1843a(void)

void FUN_148a1843a(longlong param_1)

{
  FUN_14054d5aa(param_1 + 0x68);
  return;
}



// FUNCTION 148a18444 FUN_148a18444 body=104 status=ok
// SIG undefined FUN_148a18444(void)

void FUN_148a18444(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x20);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) {
      return;
    }
    cVar2 = FUN_1403ae2fa(param_1,3,0);
    if (cVar2 != '\0') {
      FUN_148a1fce0(lVar1,0,0);
      return;
    }
  }
  return;
}



// FUNCTION 148a184ac FUN_148a184ac body=95 status=ok
// SIG undefined FUN_148a184ac(void)

void FUN_148a184ac(longlong param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 0x20 + lVar4);
      if ((lVar3 != 0) && (*(char *)(lVar3 + 0xbe3) == param_2)) {
        FUN_148a21456(lVar3,param_3);
      }
      lVar4 = lVar4 + 0x170;
    } while ((longlong)iVar1 * 0x170 - lVar4 != 0);
  }
  return;
}



// FUNCTION 148a1850c FUN_148a1850c body=199 status=ok
// SIG undefined FUN_148a1850c(void)

undefined4 FUN_148a1850c(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [40];
  undefined4 local_50;
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = 0;
  local_50 = 0;
  FUN_1456bb102(local_78);
  FUN_1448729ea(param_1 + 0x1b0,local_48,local_78);
  uVar2 = FUN_1405d5f74(local_48);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_48;
    if (0x18 < local_30) {
      pppuVar3 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  FUN_144a5ac3a(local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a185dc FUN_148a185dc body=226 status=ok
// SIG undefined FUN_148a185dc(void)

undefined8 FUN_148a185dc(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = FUN_1408a1f76();
  if (((lVar4 == 0) && (*(longlong *)(param_1 + 0x60) != 0)) &&
     (cVar3 = FUN_144729dda(param_1 + 0x58), cVar3 != '\0')) {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
    cVar3 = FUN_1403ae2fa(lVar4,2,0);
    if ((cVar3 != '\0') && (0 < *(int *)(lVar4 + 0xa8))) {
      plVar2 = *(longlong **)(*(longlong *)(lVar4 + 0xa0) + 0x20);
      if ((DAT_14c950c29 == '\x01') && (plVar2 != (longlong *)0x0)) {
        FUN_1456cec3c(plVar2);
      }
      else if (plVar2 == (longlong *)0x0) {
        return 0;
      }
      cVar3 = (**(code **)(*plVar2 + 0x838))(plVar2,(char)plVar2[0x17b]);
      if (cVar3 != '\0') {
        bVar1 = *(byte *)(plVar2 + 0x17b);
        if (((int)(uint)bVar1 < (int)plVar2[0x17e]) &&
           (plVar2 = *(longlong **)
                      (plVar2[0x17d] + 0x10 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8),
           plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x328))(plVar2,param_2);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148a186be FUN_148a186be body=243 status=ok
// SIG undefined FUN_148a186be(void)

ulonglong FUN_148a186be(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 unaff_RSI;
  ulonglong uVar9;
  bool bVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  undefined7 uVar10;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    uVar9 = 0;
  }
  else {
    uVar10 = (undefined7)((ulonglong)unaff_RSI >> 8);
    uVar9 = CONCAT71(uVar10,1);
    if (((*(longlong *)(param_1 + 0x48) != 0) && (*(longlong **)(param_1 + 0x50) != (longlong *)0x0)
        ) && (lVar6 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))(), lVar6 != 0)) {
      uVar7 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x40));
      FUN_140a702f6(&local_38,uVar7);
      if (local_30 != (longlong *)0x0) {
        iVar4 = (int)local_30[1];
        do {
          if (iVar4 == 0) {
            plVar8 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar3 = (int)local_30[1];
          bVar11 = iVar4 == iVar3;
          if (bVar11) {
            *(int *)(local_30 + 1) = iVar4 + 1;
            iVar3 = iVar4;
          }
          iVar4 = iVar3;
          UNLOCK();
          plVar8 = local_30;
        } while (!bVar11);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
        if (plVar8 != (longlong *)0x0) {
          if (local_38 == 0) {
            uVar9 = CONCAT71(uVar10,1);
          }
          else {
            uVar5 = FUN_140bbb356(local_38,lVar6,*(undefined8 *)(param_1 + 0x40),0);
            uVar9 = (ulonglong)uVar5;
          }
          LOCK();
          plVar2 = plVar8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 148a187b2 FUN_148a187b2 body=251 status=ok
// SIG undefined FUN_148a187b2(void)

void FUN_148a187b2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    return;
  }
  plVar1 = *(longlong **)(param_2 + 0xa8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  uVar3 = FUN_141262f1a();
  plVar4 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar3);
  if (plVar4 == (longlong *)0x0) {
LAB_148a18812:
    lVar2 = plVar1[0x36];
    if (lVar2 == 0) {
      uVar6 = (ulonglong)(*(char *)(param_1 + 0x38) == '\0');
      goto LAB_148a18871;
    }
    uVar3 = FUN_141262f1a();
    plVar5 = (longlong *)FUN_144718840(lVar2,uVar3);
    uVar6 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(char *)(param_1 + 0x38) == '\0');
    if (plVar5 == (longlong *)0x0) goto LAB_148a18871;
  }
  else {
    uVar3 = FUN_141262f1a();
    plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
    if (plVar5 == (longlong *)0x0 || plVar4 == plVar5) goto LAB_148a18812;
    uVar6 = CONCAT71((int7)((ulonglong)plVar4 >> 8),*(char *)(param_1 + 0x38) == '\0');
  }
  if (*(char *)(param_1 + 0x44) == '\x01') {
    uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
    FUN_140e16d82(uVar3,*(undefined8 *)(param_1 + 0x3c),uVar6 & 0xffffffff,
                  (char)plVar1[0x2f] == '\x03',0);
  }
LAB_148a18871:
  if (*(char *)(param_1 + 0x45) != '\x01') {
    return;
  }
  if ((char)uVar6 != '\0') {
    FUN_1412f8dba();
    return;
  }
  FUN_1413401e6(plVar1,0,0);
  return;
}



// FUNCTION 148a188ae FUN_148a188ae body=210 status=ok
// SIG undefined FUN_148a188ae(void)

void FUN_148a188ae(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_2 == 0) {
    return;
  }
  plVar1 = *(longlong **)(param_2 + 0xa8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  uVar3 = FUN_141262f1a();
  plVar4 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar3);
  if (plVar4 == (longlong *)0x0) {
LAB_148a1890e:
    lVar2 = plVar1[0x36];
    if (lVar2 == 0) goto LAB_148a1895d;
    uVar3 = FUN_141262f1a();
    plVar5 = (longlong *)FUN_144718840(lVar2,uVar3);
    if (plVar5 == (longlong *)0x0) goto LAB_148a1895d;
  }
  else {
    uVar3 = FUN_141262f1a();
    plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
    if (plVar4 == plVar5 || plVar5 == (longlong *)0x0) goto LAB_148a1890e;
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
    FUN_140e16d82(uVar3,*(undefined8 *)(param_1 + 0x30),1,(char)plVar1[0x2f] == '\x03',0);
  }
LAB_148a1895d:
  if (*(char *)(param_1 + 0x39) != '\x01') {
    return;
  }
  FUN_143d93380(plVar1,0,0);
  return;
}



// FUNCTION 148a18980 FUN_148a18980 body=210 status=ok
// SIG undefined FUN_148a18980(void)

void FUN_148a18980(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (param_2 == 0) {
    return;
  }
  plVar1 = *(longlong **)(param_2 + 0xa8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  uVar3 = FUN_141262f1a();
  plVar4 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar3);
  if (plVar4 == (longlong *)0x0) {
LAB_148a189e0:
    lVar2 = plVar1[0x36];
    if (lVar2 == 0) goto LAB_148a18a2f;
    uVar3 = FUN_141262f1a();
    plVar5 = (longlong *)FUN_144718840(lVar2,uVar3);
    if (plVar5 == (longlong *)0x0) goto LAB_148a18a2f;
  }
  else {
    uVar3 = FUN_141262f1a();
    plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
    if (plVar4 == plVar5 || plVar5 == (longlong *)0x0) goto LAB_148a189e0;
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
    FUN_140e16d82(uVar3,*(undefined8 *)(param_1 + 0x30),0,(char)plVar1[0x2f] == '\x03',0);
  }
LAB_148a18a2f:
  if (*(char *)(param_1 + 0x39) != '\x01') {
    return;
  }
  FUN_143d932ca(plVar1,0,0);
  return;
}



// FUNCTION 148a18a52 FUN_148a18a52 body=222 status=ok
// SIG undefined FUN_148a18a52(void)

void FUN_148a18a52(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    return;
  }
  lVar5 = *(longlong *)(param_2 + 0xa8);
  if (lVar5 == 0) {
    return;
  }
  lVar2 = FUN_144a7d050();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    lVar5 = *(longlong *)(param_2 + 0xa8);
    if (lVar5 == 0) {
      return;
    }
    uVar3 = FUN_141262f1a();
    plVar4 = (longlong *)FUN_144718840(lVar5,uVar3);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(int *)(lVar5 + 0xa8) < 1) {
      return;
    }
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xa0) + 0x20);
    if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) {
      FUN_1456cec3c(lVar5);
    }
    else if (lVar5 == 0) {
      return;
    }
  }
  bVar1 = *(byte *)(lVar5 + 0xbd8);
  if (((int)(uint)bVar1 < *(int *)(lVar5 + 0xbf0)) &&
     (plVar4 = *(longlong **)
                (*(longlong *)(lVar5 + 0xbe8) + 0x20 +
                (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar4 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148a18b17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x2e0))();
    return;
  }
  return;
}



// FUNCTION 148a18b30 FUN_148a18b30 body=145 status=ok
// SIG undefined FUN_148a18b30(void)

void FUN_148a18b30(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*param_2 == 0) {
    return;
  }
  lVar3 = *(longlong *)(*param_2 + 0x38);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = FUN_141262f1a();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
    if (plVar2 != (longlong *)0x0) goto LAB_148a18b68;
    lVar3 = *(longlong *)(*param_2 + 0x38);
  }
  lVar3 = *(longlong *)(lVar3 + 0x1b0);
  if (lVar3 == 0) {
    return;
  }
  uVar1 = FUN_141262f1a();
  plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_148a18b68:
  uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
  FUN_140e16d82(uVar1,*(undefined8 *)(param_1 + 0x18),param_3,0,0);
  return;
}



// FUNCTION 148a18bd2 FUN_148a18bd2 body=216 status=ok
// SIG undefined FUN_148a18bd2(void)

void FUN_148a18bd2(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    return;
  }
  lVar6 = *(longlong *)(lVar5 + 0x38);
  if (lVar6 == 0) {
    return;
  }
  lVar2 = FUN_144a7d050();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    lVar5 = *(longlong *)(lVar5 + 0x38);
    if (lVar5 == 0) {
      return;
    }
    uVar3 = FUN_141262f1a();
    plVar4 = (longlong *)FUN_144718840(lVar5,uVar3);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(int *)(lVar5 + 0xa8) < 1) {
      return;
    }
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0xa0) + 0x20);
    if ((DAT_14c950c29 == '\x01') && (lVar6 != 0)) {
      FUN_1456cec3c(lVar6);
    }
    else if (lVar6 == 0) {
      return;
    }
  }
  bVar1 = *(byte *)(lVar6 + 0xbd8);
  if (((int)(uint)bVar1 < *(int *)(lVar6 + 0xbf0)) &&
     (plVar4 = *(longlong **)
                (*(longlong *)(lVar6 + 0xbe8) + 0x20 +
                (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar4 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148a18c91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x2e0))();
    return;
  }
  return;
}



// FUNCTION 148a18caa FUN_148a18caa body=67 status=ok
// SIG undefined FUN_148a18caa(void)

void FUN_148a18caa(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x49) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x49) = param_2;
  if (param_2 == '\x01') {
    FUN_140e8bfce(*(undefined8 *)(param_1 + 0x30),param_1);
    return;
  }
  FUN_140fa076e(param_1);
  FUN_140c6f3ae(param_1,1);
  return;
}



// FUNCTION 148a18cee FUN_148a18cee body=16 status=ok
// SIG undefined FUN_148a18cee(void)

void FUN_148a18cee(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x48) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x48) = param_2;
  FUN_140c6f3ae(param_1,1);
  return;
}



// FUNCTION 148a18cfe FUN_148a18cfe body=26 status=ok
// SIG undefined FUN_148a18cfe(void)

void FUN_148a18cfe(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x38) + 0x91);
  if (*(char *)(param_1 + 0x48) == cVar1) {
    return;
  }
  *(char *)(param_1 + 0x48) = cVar1;
  FUN_140c6f3ae(param_1,1);
  return;
}



// FUNCTION 148a18d18 FUN_148a18d18 body=123 status=ok
// SIG undefined FUN_148a18d18(void)

undefined8 FUN_148a18d18(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_1 + 0x18,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Skeletal control %s keeps ammo bones in place on reload",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148a18d9e FUN_148a18d9e body=260 status=ok
// SIG undefined FUN_148a18d9e(void)

void FUN_148a18d9e(longlong param_1,byte param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined1 param_6,char param_7)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 *local_60;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 != 0 && param_7 == '\x01') {
    lVar1 = FUN_144a7d050();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       ((longlong)*(int *)(param_1 + 200) != 0)) {
      uVar2 = 1 << (param_2 & 0x1f);
      lVar1 = (longlong)*(int *)(param_1 + 200) * 0x18;
      lVar3 = *(longlong *)(param_1 + 0xc0) + 8;
      do {
        if ((*(uint *)(lVar3 + -8) & uVar2) != 0) {
          *(uint *)(param_4 + 0x8f8) = uVar2;
          local_68 = param_6;
          local_60 = &local_49;
          FUN_140c3fc86(lVar3,param_3,param_4,param_5);
          *(undefined4 *)(param_4 + 0x8f8) = 0;
        }
        lVar3 = lVar3 + 0x18;
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a18ea4 FUN_148a18ea4 body=16 status=ok
// SIG undefined FUN_148a18ea4(void)

undefined8 FUN_148a18ea4(void)

{
  FUN_1488c4654();
  return 0;
}



// FUNCTION 148a18eb4 FUN_148a18eb4 body=66 status=ok
// SIG undefined FUN_148a18eb4(void)

uint * FUN_148a18eb4(undefined8 param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)FUN_14058c704(param_4);
  if (plVar3 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
    bVar1 = FUN_145753b2a(uVar4);
    uVar2 = (uint)bVar1;
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = uVar2;
  *(undefined1 *)(param_2 + 8) = 1;
  return param_2;
}



// FUNCTION 148a18efe FUN_148a18efe body=115 status=ok
// SIG undefined FUN_148a18efe(void)

undefined8 *
FUN_148a18efe(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_148a1c8e0(param_4);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (0 < *(int *)(lVar2 + 0xa8)) {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xa0) + 0x20);
      if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
        FUN_1456cec3c(lVar2);
      }
      goto LAB_148a18f4b;
    }
  }
  lVar2 = 0;
LAB_148a18f4b:
  *(undefined2 *)(param_2 + 3) = 8;
  *param_2 = 0;
  FUN_14485c47a(param_2,lVar2);
  *(undefined1 *)(param_2 + 4) = 7;
  return param_2;
}



// FUNCTION 148a18f7a FUN_148a18f7a body=24 status=ok
// SIG undefined FUN_148a18f7a(void)

void FUN_148a18f7a(longlong param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x490) = (char)param_2;
  FUN_140a9d838(param_1,param_1 + 0x3e0,param_2,0);
  return;
}



// FUNCTION 148a18f92 FUN_148a18f92 body=46 status=ok
// SIG undefined FUN_148a18f92(void)

void FUN_148a18f92(longlong *param_1,char param_2)

{
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0xa0))();
                    /* WARNING: Could not recover jumptable at 0x000148a18fb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1);
    return;
  }
  return;
}



// FUNCTION 148a18fdc FUN_148a18fdc body=44 status=ok
// SIG undefined FUN_148a18fdc(void)

undefined8 FUN_148a18fdc(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_1402057ac(param_2,param_1,uVar1,0);
  return 1;
}



// FUNCTION 148a19008 FUN_148a19008 body=472 status=ok
// SIG undefined FUN_148a19008(void)

bool FUN_148a19008(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = FUN_142b159be();
  if (cVar3 == '\0') {
    if (((byte *)*param_1 == (byte *)0x0) || ((*(byte *)*param_1 & 0x6b) != 3)) {
      *(undefined4 *)(param_2 + 1) = 0;
      uVar2 = local_70;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_148a1cbc6(param_2);
        uVar2 = local_70;
      }
    }
    else {
      lVar5 = FUN_1415a93e0();
      FUN_140d71ece(param_2,*(int *)(lVar5 + 0x10) - *(int *)(lVar5 + 0x3c),1);
      plVar7 = (longlong *)FUN_1415a93e0(*param_1);
      plVar6 = plVar7 + 3;
      local_60 = 0x100000000;
      local_50 = 0xffffffff;
      uStack_48 = 0;
      uStack_58 = plVar6;
      if ((int)plVar7[6] == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_60);
        iVar8 = (int)plVar7[6];
      }
      uStack_68 = CONCAT44(uStack_44,uStack_48);
      local_70 = local_50;
      uVar2 = local_70;
      local_80 = (undefined4)local_60;
      uStack_7c = local_60._4_4_;
      uStack_78 = (undefined4)uStack_58;
      uStack_74 = uStack_58._4_4_;
      local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      local_88 = plVar7;
      if ((local_70._4_4_ != iVar8) || (uStack_58 != plVar6)) {
        lVar5 = 0;
        iVar4 = local_70._4_4_;
        do {
          local_70 = uVar2;
          FUN_148a19220(*param_2 + lVar5,*local_88 + (longlong)iVar4 * 0x40 + 0x28);
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
          FUN_1449c0562(&local_80);
          lVar5 = lVar5 + 0x14;
          uVar2 = local_70;
          iVar4 = local_70._4_4_;
        } while (local_88 != plVar7 ||
                 ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar6 || local_70._4_4_ != iVar8));
      }
    }
  }
  else {
    lVar5 = FUN_144b08404();
    iVar8 = *(int *)(lVar5 + 0x10);
    FUN_140d71ece(param_2,iVar8,1);
    uVar2 = local_70;
    if (0 < (longlong)iVar8) {
      lVar9 = 0;
      lVar5 = 0;
      do {
        lVar1 = *param_2;
        plVar6 = (longlong *)FUN_144b08404(*param_1);
        FUN_148a19220(lVar1 + lVar5,*plVar6 + lVar9);
        lVar5 = lVar5 + 0x14;
        lVar9 = lVar9 + 0x10;
        uVar2 = local_70;
      } while ((longlong)iVar8 * 0x14 != lVar5);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < (int)param_2[1];
}



// FUNCTION 148a191e2 FUN_148a191e2 body=61 status=ok
// SIG undefined FUN_148a191e2(void)

void FUN_148a191e2(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) == iVar1) {
    FUN_140d71f62(param_1,iVar1);
  }
  FUN_140d71f43((longlong)iVar1 * 0x14 + *param_1,1);
  return;
}



// FUNCTION 148a19220 FUN_148a19220 body=401 status=ok
// SIG undefined FUN_148a19220(void)

void FUN_148a19220(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = DAT_14cb948f0;
  local_58 = DAT_14cb948e8;
  FUN_1448075d0(local_48);
  uVar1 = FUN_144a06846(param_2,local_48);
  uVar2 = FUN_140b963dc(uVar1,*param_1);
  *param_1 = uVar2;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = DAT_14cb94908;
  local_58 = DAT_14cb94900;
  FUN_1448075d0(local_48);
  uVar1 = FUN_144a06846(param_2,local_48);
  uVar2 = FUN_140b963dc(uVar1,param_1[1]);
  param_1[1] = uVar2;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = DAT_14cb94920;
  local_58 = DAT_14cb94918;
  FUN_1448075d0(local_48);
  uVar1 = FUN_144a06846(param_2,local_48);
  uVar2 = FUN_140b963dc(uVar1,param_1[2]);
  param_1[2] = uVar2;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = DAT_14cb94938;
  local_58 = DAT_14cb94930;
  FUN_1448075d0(local_48);
  uVar1 = FUN_144a06846(param_2,local_48);
  uVar2 = FUN_140b963dc(uVar1,param_1[3]);
  param_1[3] = uVar2;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a193b2 FUN_148a193b2 body=127 status=ok
// SIG undefined FUN_148a193b2(void)

float * FUN_148a193b2(undefined8 param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  
  plVar3 = (longlong *)FUN_1403e5d16(param_4);
  if (plVar3 == (longlong *)0x0) {
    lVar4 = FUN_1403e5e94(param_4);
    fVar5 = 0.0;
    if (lVar4 == 0) goto LAB_148a193de;
    bVar1 = *(byte *)(lVar4 + 0xbd8);
    if ((*(int *)(lVar4 + 0xbf0) <= (int)(uint)bVar1) ||
       (plVar3 = *(longlong **)
                  (*(longlong *)(lVar4 + 0xbe8) + 0x10 +
                  (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar3 == (longlong *)0x0))
    goto LAB_148a193de;
  }
  iVar2 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
  fVar5 = (float)iVar2;
LAB_148a193de:
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = fVar5;
  *(undefined1 *)(param_2 + 8) = 3;
  return param_2;
}



// FUNCTION 148a19432 FUN_148a19432 body=146 status=ok
// SIG undefined FUN_148a19432(void)

float * FUN_148a19432(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  
  plVar2 = (longlong *)FUN_1403e5d16(param_4);
  if (plVar2 == (longlong *)0x0) {
    lVar3 = FUN_1403e5e94(param_4);
    fVar4 = 0.0;
    if (lVar3 == 0) goto LAB_148a1945b;
    bVar1 = *(byte *)(lVar3 + 0xbd8);
    if ((*(int *)(lVar3 + 0xbf0) <= (int)(uint)bVar1) ||
       (plVar2 = *(longlong **)
                  (*(longlong *)(lVar3 + 0xbe8) + 0x10 +
                  (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar2 == (longlong *)0x0))
    goto LAB_148a1945b;
  }
  fVar4 = (float)(**(code **)(*plVar2 + 0x388))(plVar2);
LAB_148a1945b:
  if (*(char *)(param_1 + 8) != '\0') {
    fVar4 = 1.0 - fVar4;
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = fVar4;
  *(undefined1 *)(param_2 + 8) = 3;
  return param_2;
}



// FUNCTION 148a194de FUN_148a194de body=134 status=ok
// SIG undefined FUN_148a194de(void)

undefined8
FUN_148a194de(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((((*(char *)(param_1 + 8) == '\x01') &&
       (plVar1 = (longlong *)FUN_1403e5cc6(param_4), plVar1 != (longlong *)0x0)) &&
      ((*(char *)(param_1 + 10) != '\x01' || ((*(byte *)((longlong)plVar1 + 0x91) & 0x10) == 0))))
     && (lVar2 = (**(code **)(*plVar1 + 1000))(plVar1), lVar2 != 0)) {
    FUN_1470b0d80(lVar2,param_2,param_5,param_6,param_7,param_8);
    return param_2;
  }
  FUN_14162be86(param_2,0);
  return param_2;
}



// FUNCTION 148a19564 FUN_148a19564 body=81 status=ok
// SIG undefined FUN_148a19564(void)

void FUN_148a19564(longlong *param_1,undefined8 param_2,float param_3)

{
  char cVar1;
  
  if ((0.0 < param_3) && ((*(byte *)(param_1 + 5) & 1) == 0)) {
    cVar1 = (**(code **)(*param_1 + 0x3d8))(param_1);
    if ((cVar1 != '\0') && ((*(byte *)(param_1 + 5) & 1) == 0)) {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
      if (param_1[6] != 0) {
        FUN_140b8222c(param_1[6],param_1,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a195b6 FUN_148a195b6 body=19 status=ok
// SIG undefined FUN_148a195b6(void)

void FUN_148a195b6(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xdc) = param_2;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  return;
}



// FUNCTION 148a195ca FUN_148a195ca body=84 status=ok
// SIG undefined FUN_148a195ca(void)

void FUN_148a195ca(longlong *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x3b8))(param_1,0);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    cVar1 = (**(code **)(*param_1 + 0x3d8))(param_1);
    if ((cVar1 != '\0') && ((*(byte *)(param_1 + 5) & 1) == 0)) {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
      if (param_1[6] != 0) {
        FUN_140b8222c(param_1[6],param_1,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a19646 FUN_148a19646 body=124 status=ok
// SIG undefined FUN_148a19646(void)

void FUN_148a19646(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x398))();
  if (cVar1 != '\0') {
    FUN_148a196c2(param_1,param_2,1);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x3d8))(param_1);
    if ((cVar1 == '\0') && ((*(byte *)(param_1 + 5) & 1) != 0)) {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
      if (param_1[6] != 0) {
        FUN_140b8233c(param_1[6] + 0xd88,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a196c2 FUN_148a196c2 body=297 status=ok
// SIG undefined FUN_148a196c2(void)

void FUN_148a196c2(longlong *param_1,float param_2,undefined1 param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  float fVar6;
  
  lVar2 = param_1[6];
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if ((double)*(float *)((longlong)param_1 + 0xdc) <= *(double *)(lVar3 + 0x6d0)) {
    if (*(longlong *)(lVar2 + 0xd60) == DAT_14cb95100) {
      bVar1 = *(byte *)(lVar2 + 0xbd8);
      if ((int)(uint)bVar1 < *(int *)(lVar2 + 0xbf0)) {
        plVar4 = *(longlong **)
                  (*(longlong *)(lVar2 + 0xbe8) + 0x10 +
                  (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
      }
      else {
        plVar4 = (longlong *)0x0;
      }
      if (plVar4 == param_1) {
        return;
      }
    }
    if ((char)param_1[0xe] == '\0') {
      FUN_140a42cb0(param_1,1);
    }
    fVar6 = param_2 * *(float *)((longlong)param_1 + 0x9c) + *(float *)(param_1 + 0x1b);
    *(float *)(param_1 + 0x1b) = fVar6;
    iVar5 = (int)ROUND(fVar6 + fVar6 + -0.5) >> 1;
    if (0 < iVar5) {
      if (*(int *)((longlong)param_1 + 0x94) == 1) {
        (**(code **)(*param_1 + 0x350))(param_1,iVar5,1);
      }
      else if (*(int *)((longlong)param_1 + 0x94) == 2) {
        (**(code **)(*param_1 + 0x370))(param_1,iVar5,0,0,param_3);
      }
      *(float *)(param_1 + 0x1b) = *(float *)(param_1 + 0x1b) - (float)iVar5;
    }
  }
  return;
}



// FUNCTION 148a197ec FUN_148a197ec body=121 status=ok
// SIG undefined FUN_148a197ec(void)

void FUN_148a197ec(longlong *param_1,char param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  plVar1 = param_1 + 0x16;
  lVar2 = param_1[0x16];
  if (param_2 == '\0') {
    FUN_1400bc8c2(plVar1,param_3);
  }
  else {
    FUN_1400bc96c(plVar1,param_3);
  }
  if (((char)lVar2 != (char)*plVar1) && ((*(byte *)(param_1 + 5) & 1) == 0)) {
    cVar3 = (**(code **)(*param_1 + 0x3d8))(param_1);
    if ((cVar3 != '\0') && ((*(byte *)(param_1 + 5) & 1) == 0)) {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
      if (param_1[6] != 0) {
        FUN_140b8222c(param_1[6],param_1,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a19880 FUN_148a19880 body=11 status=ok
// SIG undefined FUN_148a19880(void)

bool FUN_148a19880(longlong param_1)

{
  return (*(byte *)(param_1 + 0x2d0) & 3) != 0;
}



// FUNCTION 148a1988c FUN_148a1988c body=123 status=ok
// SIG undefined FUN_148a1988c(void)

void FUN_148a1988c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x2f0);
  lVar2 = FUN_14059f5ca(*(undefined8 *)(param_1 + 0x30),&local_21);
  if (lVar2 != 0) {
    local_38 = local_21;
    FUN_14059f62a(lVar2,uVar1,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a19908 FUN_148a19908 body=33 status=ok
// SIG undefined FUN_148a19908(void)

bool FUN_148a19908(longlong param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(float *)(param_1 + 0x1c4) <= 0.0) {
    bVar1 = 0.0 < *(float *)(param_1 + 0x1d0);
  }
  return bVar1;
}



// FUNCTION 148a1992a FUN_148a1992a body=67 status=ok
// SIG undefined FUN_148a1992a(void)

void FUN_148a1992a(longlong param_1)

{
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x2d8))();
  }
  if (0 < *(int *)(param_1 + 0xe8)) {
    FUN_14053d8da(param_1 + 0xe0,1);
    return;
  }
  return;
}



// FUNCTION 148a19a12 FUN_148a19a12 body=316 status=ok
// SIG undefined FUN_148a19a12(void)

undefined8 FUN_148a19a12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b4aa450;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_140d4e3a2;
  FUN_1448b6402(param_1,param_2,&local_38);
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_148a19ade;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_148a19ade:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a19b50 FUN_148a19b50 body=101 status=ok
// SIG undefined FUN_148a19b50(void)

void FUN_148a19b50(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x308) != 0) {
    uVar1 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x30));
    lVar2 = FUN_144a61814(uVar1,(undefined8 *)(param_1 + 0x308));
    if (lVar2 != 0) {
      FUN_1405a424c(uVar1,*(undefined8 *)(param_1 + 0x308));
    }
    *(undefined8 *)(param_1 + 0x308) = 0;
    FUN_140994af2(param_1);
    return;
  }
  return;
}



// FUNCTION 148a19bd4 FUN_148a19bd4 body=178 status=ok
// SIG undefined FUN_148a19bd4(void)

void FUN_148a19bd4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *(byte *)(param_1 + 0x2d1) = *(byte *)(param_1 + 0x2d1) & 0xfe;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1b0);
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x3c0), lVar4 != 0)) {
    lVar1 = FUN_144a75eb4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
         == lVar1 + 0x30 && (lVar4 = *(longlong *)(lVar4 + 0x448), lVar4 != 0)))) {
      uVar2 = FUN_1405e72a0();
      plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar4 != 0) {
          FUN_148a1e156(lVar4);
          if (*(longlong *)(param_1 + 0x310) != 0) {
            FUN_14480f766(lVar4 + 0x38);
            *(undefined8 *)(param_1 + 0x310) = 0;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 148a19c86 FUN_148a19c86 body=244 status=ok
// SIG undefined FUN_148a19c86(void)

undefined8 FUN_148a19c86(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3e9c20;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14b4aa530;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &LAB_148a19d7c;
  FUN_140ebcfd8(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a19d84 FUN_148a19d84 body=226 status=ok
// SIG undefined FUN_148a19d84(void)

longlong * FUN_148a19d84(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_144747626(&local_28,DAT_14cb949f8,param_2);
    plVar2 = local_20;
    if (local_28 != 0) {
      if (local_20 == (longlong *)0x0) {
        *param_1 = local_28;
      }
      else {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
        *param_1 = local_28;
        if ((longlong *)param_1[1] != local_20) {
          LOCK();
          *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar2;
        }
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
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a19e7c FUN_148a19e7c body=57 status=ok
// SIG undefined FUN_148a19e7c(void)

void FUN_148a19e7c(longlong *param_1)

{
  char cVar1;
  
  if ((char)param_1[0xc] == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x2b8))();
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148a19eab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2f0))(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 148a19ed2 FUN_148a19ed2 body=589 status=ok
// SIG undefined FUN_148a19ed2(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_148a19ed2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *******pppppppuVar7;
  char in_stack_00000028;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  longlong *local_b0;
  undefined4 local_90;
  undefined8 *******local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((in_stack_00000028 != '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x30) == in_stack_00000028)) {
    uVar6 = FUN_1406f3fb0(*(longlong *)(param_1 + 0xa0) + 0x32);
    local_b8 = 0;
    local_90 = 0;
    FUN_1456bb102(&local_b8,*(undefined8 *)(param_1 + 0x30));
    FUN_1448729ea(uVar6,local_88,&local_b8);
    FUN_144a7b41a(local_88,0);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar3 != (code *)0x0) {
      pppppppuVar7 = local_88;
      if (0x18 < local_70) {
        pppppppuVar7 = local_88[0];
      }
      (*pcVar3)(pppppppuVar7);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(local_88[0]);
    }
    FUN_144a5ac3a(&local_b8);
  }
  local_c0 = 0;
  local_c8 = 0;
  uVar4 = FUN_140dd024a(*(undefined8 *)(param_1 + 0x30),DAT_14cb94968);
  if ((((char)uVar4 != '\0') && ((*(byte *)(*(longlong *)(param_1 + 0xa0) + 0x31) & 0x10) != 0)) &&
     (lVar5 = FUN_1407ca824(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x1b0)), lVar5 != 0)) {
    FUN_140dc01da(lVar5,&local_b8,uVar4);
    if ((longlong *)CONCAT71(uStack_b7,local_b8) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT71(uStack_b7,local_b8) + 0x28))();
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a1a13e FUN_148a1a13e body=63 status=ok
// SIG undefined FUN_148a1a13e(void)

undefined8 FUN_148a1a13e(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x2b8))();
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x2f0))(*(longlong **)(param_1 + 0xb0),param_2)
      ;
    }
  }
  return 1;
}



// FUNCTION 148a1a188 FUN_148a1a188 body=837 status=ok
// SIG undefined FUN_148a1a188(void)

void FUN_148a1a188(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x38);
  if ((*(char *)(lVar3 + 0x93) == '\x01') && (*(char *)(lVar1 + 0xbc2) == *(char *)(lVar3 + 0xa0)))
  {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      uVar2 = FUN_1401b4c98(lVar1);
      lVar3 = FUN_144a61814(uVar2,(undefined8 *)(param_1 + 0x58));
      if (lVar3 != 0) {
        FUN_1405a424c(uVar2,*(undefined8 *)(param_1 + 0x58));
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
      lVar3 = *(longlong *)(param_1 + 0x38);
    }
    if (*(float *)(lVar3 + 0x94) <= 0.0001) {
      if (*(char *)(param_1 + 0x4a) == '\x01') {
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined1 *)(param_1 + 0x4a) = 0;
LAB_148a1a47e:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
      }
      goto LAB_148a1a346;
    }
    uVar2 = FUN_1401b4c98(lVar1);
    uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x94);
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar5 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
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
    local_b0[2] = lVar3;
    *local_b0 = &PTR_FUN_14b4aa810;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,param_1);
    puVar4 = &LAB_148a1a854;
  }
  else {
    if ((*(char *)(lVar3 + 0x98) != '\x01') || (*(char *)(lVar1 + 0xbc2) == *(char *)(lVar3 + 0xa0))
       ) goto LAB_148a1a346;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      uVar2 = FUN_1401b4c98(lVar1);
      lVar3 = FUN_144a61814(uVar2,(undefined8 *)(param_1 + 0x58));
      if (lVar3 != 0) {
        FUN_1405a424c(uVar2,*(undefined8 *)(param_1 + 0x58));
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
      lVar3 = *(longlong *)(param_1 + 0x38);
    }
    if (*(float *)(lVar3 + 0x9c) <= 0.0001) {
      if (*(char *)(param_1 + 0x4a) == '\0') {
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined1 *)(param_1 + 0x4a) = 1;
        goto LAB_148a1a47e;
      }
      goto LAB_148a1a346;
    }
    uVar2 = FUN_1401b4c98(lVar1);
    uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x9c);
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar5 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
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
    local_b0[2] = lVar3;
    *local_b0 = &PTR_FUN_14b4aa810;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,param_1);
    puVar4 = &LAB_148a1a86e;
  }
  puVar5[4] = puVar4;
  local_98 = 0;
  local_90 = 0;
  FUN_14487d8d8(&local_98,&local_b0);
  local_58 = 1;
  local_b8 = local_a0;
  local_a0[0] = 0;
  local_9c = 0xbf800000;
  FUN_1406f4044(uVar2,param_1 + 0x58,&local_98,uVar6);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
  FUN_1449db362(&local_b0);
LAB_148a1a346:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1a4ee FUN_148a1a4ee body=837 status=ok
// SIG undefined FUN_148a1a4ee(void)

void FUN_148a1a4ee(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x38);
  if ((*(char *)(lVar3 + 0x93) == '\x02') && (*(char *)(lVar1 + 0xbd8) == *(char *)(lVar3 + 0xa0)))
  {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      uVar2 = FUN_1401b4c98(lVar1);
      lVar3 = FUN_144a61814(uVar2,(undefined8 *)(param_1 + 0x58));
      if (lVar3 != 0) {
        FUN_1405a424c(uVar2,*(undefined8 *)(param_1 + 0x58));
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
      lVar3 = *(longlong *)(param_1 + 0x38);
    }
    if (*(float *)(lVar3 + 0x94) <= 0.0001) {
      if (*(char *)(param_1 + 0x4a) == '\x01') {
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined1 *)(param_1 + 0x4a) = 0;
LAB_148a1a7e4:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
      }
      goto LAB_148a1a6ac;
    }
    uVar2 = FUN_1401b4c98(lVar1);
    uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x94);
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar5 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
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
    local_b0[2] = lVar3;
    *local_b0 = &PTR_FUN_14b4aa810;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,param_1);
    puVar4 = &LAB_148a1a854;
  }
  else {
    if ((*(char *)(lVar3 + 0x98) != '\x02') || (*(char *)(lVar1 + 0xbd8) == *(char *)(lVar3 + 0xa0))
       ) goto LAB_148a1a6ac;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      uVar2 = FUN_1401b4c98(lVar1);
      lVar3 = FUN_144a61814(uVar2,(undefined8 *)(param_1 + 0x58));
      if (lVar3 != 0) {
        FUN_1405a424c(uVar2,*(undefined8 *)(param_1 + 0x58));
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
      lVar3 = *(longlong *)(param_1 + 0x38);
    }
    if (*(float *)(lVar3 + 0x9c) <= 0.0001) {
      if (*(char *)(param_1 + 0x4a) == '\0') {
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined1 *)(param_1 + 0x4a) = 1;
        goto LAB_148a1a7e4;
      }
      goto LAB_148a1a6ac;
    }
    uVar2 = FUN_1401b4c98(lVar1);
    uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x9c);
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar5 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a1c8830;
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
    local_b0[2] = lVar3;
    *local_b0 = &PTR_FUN_14b4aa810;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,param_1);
    puVar4 = &LAB_148a1a86e;
  }
  puVar5[4] = puVar4;
  local_98 = 0;
  local_90 = 0;
  FUN_14487d8d8(&local_98,&local_b0);
  local_58 = 1;
  local_b8 = local_a0;
  local_a0[0] = 0;
  local_9c = 0xbf800000;
  FUN_1406f4044(uVar2,param_1 + 0x58,&local_98,uVar6);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
  FUN_1449db362(&local_b0);
LAB_148a1a6ac:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1a9b0 FUN_148a1a9b0 body=777 status=ok
// SIG undefined FUN_148a1a9b0(void)

void FUN_148a1a9b0(longlong *param_1,longlong param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  double *pdVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  undefined1 local_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*param_4 != 0) && ((*(byte *)(param_2 + 0x89f) & 0x40) != 0)) {
    lVar1 = FUN_14058439c();
    if (lVar1 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
      plVar3 = *(longlong **)(lVar1 + 0x110);
      if (plVar3 == (longlong *)0x0) {
        FUN_140aa6c08(lVar1);
        plVar3 = *(longlong **)(lVar1 + 0x110);
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0xab8))(plVar3,*param_4,uVar2,1);
      if (plVar3 != (longlong *)0x0) {
        local_98 = param_5[4];
        uStack_90 = param_5[5];
        local_88 = param_5[6];
        FUN_144a48320(plVar3);
        local_78 = (undefined8 *)*param_5;
        uStack_70 = param_5[1];
        local_68 = *(undefined4 *)(param_5 + 2);
        uStack_64 = *(undefined4 *)((longlong)param_5 + 0x14);
        uStack_60 = *(undefined4 *)(param_5 + 3);
        uStack_5c = *(undefined4 *)((longlong)param_5 + 0x1c);
        FUN_1448052ee(&local_78,local_b0);
        FUN_144b21d44(plVar3,local_b0);
        FUN_140583e18(plVar3,1);
        local_b8 = (double)param_5[10] * *(double *)(param_2 + 0x1d8);
        local_c0 = (double)param_5[9] * *(double *)(param_2 + 0x1d0);
        local_c8 = (double)param_5[8] * *(double *)(param_2 + 0x1c8);
        pdVar4 = &local_c8;
        FUN_14084f00a(plVar3);
        uVar5 = CONCAT71((int7)((ulonglong)pdVar4 >> 8),*(undefined1 *)(param_2 + 0x2e4)) &
                0xffffffffffffff01;
        FUN_140c0573e(plVar3,uVar5);
        uVar5 = CONCAT71((int7)(uVar5 >> 8),*(undefined1 *)(param_2 + 0x2d5)) & 0xffffffffffffff02;
        uVar6 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 1);
        FUN_140c0563c(plVar3,uVar6);
        uVar5 = CONCAT71((int7)((ulonglong)uVar6 >> 8),*(undefined1 *)(param_2 + 0x2d5)) &
                0xffffffffffffff04;
        FUN_140c056bc(plVar3,CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 2));
        FUN_140357fa8(plVar3,*(undefined4 *)(param_2 + 0x5c8),0);
        FUN_140e996a4(plVar3,*(undefined8 *)(param_2 + 0x5c0));
        if (plVar3[0xb8] == 0) {
          FUN_140e996a4(plVar3,*(undefined8 *)(param_2 + 0xa8));
        }
        FUN_140b506dc(plVar3,uVar2,0);
        if (*param_6 != 0) {
          lVar1 = FUN_144a7e9aa();
          if ((*(int *)(lVar1 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
              == lVar1 + 0x30)) {
            lVar1 = *param_6;
            uVar2 = FUN_140a45cc8();
            lVar1 = FUN_140584a5e(uVar2,plVar3,lVar1);
            if (lVar1 != 0) {
              local_78 = (undefined8 *)0x0;
              uStack_70 = 1;
              FUN_1446f84a2(&local_78,0);
              *local_78 = *param_3;
              FUN_1418294be(lVar1,&local_78);
              if (local_78 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
          }
        }
        if (*(int *)(param_7 + 1) != 0) {
          local_78 = (undefined8 *)((ulonglong)local_78 & 0xffffffffffffff00);
          local_50 = 0;
          FUN_1456bb102(&local_78,param_1[6]);
          local_d8 = *param_7;
          local_d0 = *(undefined4 *)(param_7 + 1);
          FUN_140e99737(plVar3,&local_d8,&local_78);
          FUN_144a5ac3a(&local_78);
        }
        (**(code **)(*plVar3 + 0x490))(plVar3,param_2,&DAT_14cadad98,*param_3);
        (**(code **)(*plVar3 + 0xa60))(plVar3,1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1acba FUN_148a1acba body=16 status=ok
// SIG undefined FUN_148a1acba(void)

void FUN_148a1acba(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x50) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x50) = param_2;
  FUN_140c6f3ae(param_1,0);
  return;
}



// FUNCTION 148a1acca FUN_148a1acca body=38 status=ok
// SIG undefined FUN_148a1acca(void)

undefined8 FUN_148a1acca(undefined8 param_1,int param_2)

{
  FUN_140cfbb18();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a1acf0 FUN_148a1acf0 body=57 status=ok
// SIG undefined FUN_148a1acf0(void)

undefined8 * FUN_148a1acf0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b49d1f0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a1ad6e FUN_148a1ad6e body=59 status=ok
// SIG undefined FUN_148a1ad6e(void)

undefined8 FUN_148a1ad6e(longlong *param_1)

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



// FUNCTION 148a1aee2 FUN_148a1aee2 body=59 status=ok
// SIG undefined FUN_148a1aee2(void)

undefined8 FUN_148a1aee2(longlong *param_1)

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



// FUNCTION 148a1afda FUN_148a1afda body=97 status=ok
// SIG undefined FUN_148a1afda(void)

undefined1 FUN_148a1afda(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x3c);
      uVar2 = *(undefined4 *)(param_3 + -0x38);
      uVar3 = *(undefined4 *)(param_3 + -0x34);
      *(undefined4 *)(param_2 + -0x40) = *(undefined4 *)(param_3 + -0x40);
      *(undefined4 *)(param_2 + -0x3c) = uVar1;
      *(undefined4 *)(param_2 + -0x38) = uVar2;
      *(undefined4 *)(param_2 + -0x34) = uVar3;
      FUN_1418443e8(param_2 + -0x30,param_3 + -0x30);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x60;
      param_2 = param_2 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a1b064 FUN_148a1b064 body=59 status=ok
// SIG undefined FUN_148a1b064(void)

undefined8 FUN_148a1b064(longlong *param_1)

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



// FUNCTION 148a1b0aa FUN_148a1b0aa body=32 status=ok
// SIG undefined FUN_148a1b0aa(void)

void FUN_148a1b0aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_148a1b108(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148a1b108 FUN_148a1b108 body=65 status=ok
// SIG undefined FUN_148a1b108(void)

void FUN_148a1b108(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4a94f0;
  plVar3 = (longlong *)param_1[10];
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
                    /* WARNING: Could not recover jumptable at 0x000148a1b145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a1b1a2 FUN_148a1b1a2 body=171 status=ok
// SIG undefined FUN_148a1b1a2(void)

undefined8 FUN_148a1b1a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar1 = param_3 + lVar6;
      uVar3 = *(undefined4 *)(lVar1 + 0xc);
      uVar4 = *(undefined4 *)(lVar1 + 0x10);
      uVar5 = *(undefined4 *)(lVar1 + 0x14);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 8);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_1418443e8(lVar2,lVar1 + 0x18);
      uVar3 = *(undefined4 *)(lVar1 + 0x33);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x30);
      *(undefined4 *)(lVar2 + 0x1b) = uVar3;
      lVar2 = param_2 + 0x38 + lVar6;
      lVar1 = param_3 + lVar6;
      FUN_1401f3db8(lVar2,lVar1 + 0x38);
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x50);
      uVar3 = *(undefined4 *)(lVar1 + 0x5c);
      uVar4 = *(undefined4 *)(lVar1 + 0x60);
      uVar5 = *(undefined4 *)(lVar1 + 100);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x58);
      *(undefined4 *)(lVar2 + 0x24) = uVar3;
      *(undefined4 *)(lVar2 + 0x28) = uVar4;
      *(undefined4 *)(lVar2 + 0x2c) = uVar5;
      FUN_144a787a6(param_2 + lVar6 + 0x68,param_3 + lVar6 + 0x68);
      lVar6 = lVar6 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148a1b276 FUN_148a1b276 body=59 status=ok
// SIG undefined FUN_148a1b276(void)

undefined8 FUN_148a1b276(longlong *param_1)

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



// FUNCTION 148a1b2bc FUN_148a1b2bc body=32 status=ok
// SIG undefined FUN_148a1b2bc(void)

void FUN_148a1b2bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_148a1b31a(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148a1b31a FUN_148a1b31a body=84 status=ok
// SIG undefined FUN_148a1b31a(void)

void FUN_148a1b31a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4a96a0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[8];
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
                    /* WARNING: Could not recover jumptable at 0x000148a1b363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148a1b3bc FUN_148a1b3bc body=54 status=ok
// SIG undefined FUN_148a1b3bc(void)

undefined1 FUN_148a1b3bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a1b4c2(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148a1b41a FUN_148a1b41a body=59 status=ok
// SIG undefined FUN_148a1b41a(void)

undefined8 FUN_148a1b41a(longlong *param_1)

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



// FUNCTION 148a1b460 FUN_148a1b460 body=32 status=ok
// SIG undefined FUN_148a1b460(void)

void FUN_148a1b460(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_148a1b520(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148a1b4c2 FUN_148a1b4c2 body=93 status=ok
// SIG undefined FUN_148a1b4c2(void)

longlong FUN_148a1b4c2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_1418443e8(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  FUN_148760aa2(param_1 + 0x40,param_2 + 0x40);
  FUN_148760afc(param_1 + 0x50,param_2 + 0x50);
  FUN_148760afc(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 148a1b520 FUN_148a1b520 body=73 status=ok
// SIG undefined FUN_148a1b520(void)

void FUN_148a1b520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4a8e40;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148a1b5b0 FUN_148a1b5b0 body=54 status=ok
// SIG undefined FUN_148a1b5b0(void)

undefined1 FUN_148a1b5b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148a1b6c8(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148a1b60e FUN_148a1b60e body=59 status=ok
// SIG undefined FUN_148a1b60e(void)

undefined8 FUN_148a1b60e(longlong *param_1)

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



// FUNCTION 148a1b654 FUN_148a1b654 body=49 status=ok
// SIG undefined FUN_148a1b654(void)

void FUN_148a1b654(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 9) == '\x01') {
    *param_2 = &PTR_FUN_14b4a99c0;
    if ((longlong *)param_2[7] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[7] + 0x10))();
    }
    *(undefined1 *)(param_2 + 9) = 0;
  }
  return;
}



// FUNCTION 148a1b6c8 FUN_148a1b6c8 body=99 status=ok
// SIG undefined FUN_148a1b6c8(void)

longlong FUN_148a1b6c8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  FUN_1418443e8(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x38) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  return param_1;
}



// FUNCTION 148a1b744 FUN_148a1b744 body=101 status=ok
// SIG undefined FUN_148a1b744(void)

void FUN_148a1b744(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9e10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a1b7aa FUN_148a1b7aa body=134 status=ok
// SIG undefined FUN_148a1b7aa(void)

void FUN_148a1b7aa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4a9e10;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1b821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a1b840 FUN_148a1b840 body=48 status=ok
// SIG undefined FUN_148a1b840(void)

void FUN_148a1b840(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 148a1b888 FUN_148a1b888 body=93 status=ok
// SIG undefined FUN_148a1b888(void)

void FUN_148a1b888(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4aa980;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9e80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1b8e6 FUN_148a1b8e6 body=93 status=ok
// SIG undefined FUN_148a1b8e6(void)

void FUN_148a1b8e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4aa980;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9e80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1b944 FUN_148a1b944 body=126 status=ok
// SIG undefined FUN_148a1b944(void)

void FUN_148a1b944(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4aa980;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4a9e80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1b9b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a1b9ea FUN_148a1b9ea body=93 status=ok
// SIG undefined FUN_148a1b9ea(void)

void FUN_148a1b9ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4a9f60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9ef0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1ba48 FUN_148a1ba48 body=93 status=ok
// SIG undefined FUN_148a1ba48(void)

void FUN_148a1ba48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4a9f60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9ef0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1baa6 FUN_148a1baa6 body=126 status=ok
// SIG undefined FUN_148a1baa6(void)

void FUN_148a1baa6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4a9f60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4a9ef0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1bb15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a1bb44 FUN_148a1bb44 body=93 status=ok
// SIG undefined FUN_148a1bb44(void)

void FUN_148a1bb44(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab9f910;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9fd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1bba2 FUN_148a1bba2 body=93 status=ok
// SIG undefined FUN_148a1bba2(void)

void FUN_148a1bba2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab9f910;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4a9fd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1bc00 FUN_148a1bc00 body=126 status=ok
// SIG undefined FUN_148a1bc00(void)

void FUN_148a1bc00(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ab9f910;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4a9fd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1bc6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a1bc8c FUN_148a1bc8c body=31 status=ok
// SIG undefined FUN_148a1bc8c(void)

undefined8 FUN_148a1bc8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a1bcc0 FUN_148a1bcc0 body=85 status=ok
// SIG undefined FUN_148a1bcc0(void)

void FUN_148a1bcc0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa070;
  return;
}



// FUNCTION 148a1bd16 FUN_148a1bd16 body=118 status=ok
// SIG undefined FUN_148a1bd16(void)

void FUN_148a1bd16(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4aa070;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1bd7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a1bd8c FUN_148a1bd8c body=101 status=ok
// SIG undefined FUN_148a1bd8c(void)

undefined8 FUN_148a1bd8c(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14601ec6a(local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1bdf2 FUN_148a1bdf2 body=45 status=ok
// SIG undefined FUN_148a1bdf2(void)

longlong FUN_148a1bdf2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_1459bf050(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a1be26 FUN_148a1be26 body=54 status=ok
// SIG undefined FUN_148a1be26(void)

longlong FUN_148a1be26(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a1be5c FUN_148a1be5c body=133 status=ok
// SIG undefined FUN_148a1be5c(void)

void FUN_148a1be5c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 148a1befc FUN_148a1befc body=101 status=ok
// SIG undefined FUN_148a1befc(void)

void FUN_148a1befc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4aa9f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa2b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a1bf62 FUN_148a1bf62 body=101 status=ok
// SIG undefined FUN_148a1bf62(void)

void FUN_148a1bf62(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4aa9f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa2b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148a1bfc8 FUN_148a1bfc8 body=134 status=ok
// SIG undefined FUN_148a1bfc8(void)

void FUN_148a1bfc8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4aa9f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4aa2b0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1c03f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a1c04e FUN_148a1c04e body=52 status=ok
// SIG undefined FUN_148a1c04e(void)

void FUN_148a1c04e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a1c07f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148a1c084 FUN_148a1c084 body=96 status=ok
// SIG undefined FUN_148a1c084(void)

void FUN_148a1c084(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 148a1c0e4 FUN_148a1c0e4 body=623 status=ok
// SIG undefined FUN_148a1c0e4(void)

void FUN_148a1c0e4(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_14593e454(param_3,iVar2);
        }
        *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_148a1c0e4(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a1c48e FUN_148a1c48e body=741 status=ok
// SIG undefined FUN_148a1c48e(void)

void FUN_148a1c48e(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_148a1c5b2:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_148a1c5c6;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_148a1c5b2;
LAB_148a1c5c6:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_14593e454(param_3,iVar2);
          }
          *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_148a1c48e(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148a1c774 FUN_148a1c774 body=41 status=ok
// SIG undefined FUN_148a1c774(void)

void FUN_148a1c774(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0xffffffff7fffffff;
    *(undefined4 *)(param_1 + 2) = 0x3f800000;
    param_1 = (undefined8 *)((longlong)param_1 + 0x14);
  }
  return;
}



// FUNCTION 148a1c79e FUN_148a1c79e body=147 status=ok
// SIG undefined FUN_148a1c79e(void)

void FUN_148a1c79e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a1c832 FUN_148a1c832 body=62 status=ok
// SIG undefined FUN_148a1c832(void)

void FUN_148a1c832(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148a1c870(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 148a1c870 FUN_148a1c870 body=112 status=ok
// SIG undefined FUN_148a1c870(void)

ulonglong FUN_148a1c870(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x14) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148a1c8aa;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x14,4);
      param_2 = param_2 / 0x14;
    }
  }
LAB_148a1c8aa:
  return param_2 & 0xffffffff;
}



// FUNCTION 148a1c8e0 FUN_148a1c8e0 body=47 status=ok
// SIG undefined FUN_148a1c8e0(void)

undefined8 FUN_148a1c8e0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    uVar2 = FUN_141262f1a();
    uVar2 = FUN_144718840(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148a1c910 FUN_148a1c910 body=47 status=ok
// SIG undefined FUN_148a1c910(void)

undefined8 FUN_148a1c910(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    uVar2 = FUN_140e819e6();
    uVar2 = FUN_144718840(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148a1c940 FUN_148a1c940 body=114 status=ok
// SIG undefined FUN_148a1c940(void)

void FUN_148a1c940(longlong *param_1,int param_2)

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



// FUNCTION 148a1c9b2 FUN_148a1c9b2 body=147 status=ok
// SIG undefined FUN_148a1c9b2(void)

void FUN_148a1c9b2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148a1ca46 FUN_148a1ca46 body=96 status=ok
// SIG undefined FUN_148a1ca46(void)

void FUN_148a1ca46(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 148a1caa6 FUN_148a1caa6 body=114 status=ok
// SIG undefined FUN_148a1caa6(void)

void FUN_148a1caa6(longlong *param_1,int param_2)

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



// FUNCTION 148a1cb18 FUN_148a1cb18 body=62 status=ok
// SIG undefined FUN_148a1cb18(void)

void FUN_148a1cb18(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148a1cb56(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 148a1cb56 FUN_148a1cb56 body=112 status=ok
// SIG undefined FUN_148a1cb56(void)

ulonglong FUN_148a1cb56(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x14) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148a1cb90;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x14,4);
      param_2 = param_2 / 0x14;
    }
  }
LAB_148a1cb90:
  return param_2 & 0xffffffff;
}



// FUNCTION 148a1cbc6 FUN_148a1cbc6 body=48 status=ok
// SIG undefined FUN_148a1cbc6(void)

void FUN_148a1cbc6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x14,4);
  }
  return;
}



// FUNCTION 148a1cc10 FUN_148a1cc10 body=29 status=ok
// SIG undefined FUN_148a1cc10(void)

bool FUN_148a1cc10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a1cc2e FUN_148a1cc2e body=26 status=ok
// SIG undefined FUN_148a1cc2e(void)

bool FUN_148a1cc2e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a1cc48 FUN_148a1cc48 body=93 status=ok
// SIG undefined FUN_148a1cc48(void)

void FUN_148a1cc48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa350;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1cca6 FUN_148a1cca6 body=93 status=ok
// SIG undefined FUN_148a1cca6(void)

void FUN_148a1cca6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa350;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1cd04 FUN_148a1cd04 body=126 status=ok
// SIG undefined FUN_148a1cd04(void)

void FUN_148a1cd04(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4aa350;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1cd73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a1cd82 FUN_148a1cd82 body=64 status=ok
// SIG undefined FUN_148a1cd82(void)

void FUN_148a1cd82(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a1cdbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3);
  return;
}



// FUNCTION 148a1cdc2 FUN_148a1cdc2 body=174 status=ok
// SIG undefined FUN_148a1cdc2(void)

bool FUN_148a1cdc2(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1cf3a FUN_148a1cf3a body=93 status=ok
// SIG undefined FUN_148a1cf3a(void)

void FUN_148a1cf3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1cf98 FUN_148a1cf98 body=93 status=ok
// SIG undefined FUN_148a1cf98(void)

void FUN_148a1cf98(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1cff6 FUN_148a1cff6 body=126 status=ok
// SIG undefined FUN_148a1cff6(void)

void FUN_148a1cff6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4aa450;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1d065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a1d074 FUN_148a1d074 body=35 status=ok
// SIG undefined FUN_148a1d074(void)

void FUN_148a1d074(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a1d093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148a1d09e FUN_148a1d09e body=29 status=ok
// SIG undefined FUN_148a1d09e(void)

bool FUN_148a1d09e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a1d0bc FUN_148a1d0bc body=26 status=ok
// SIG undefined FUN_148a1d0bc(void)

bool FUN_148a1d0bc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a1d0d6 FUN_148a1d0d6 body=93 status=ok
// SIG undefined FUN_148a1d0d6(void)

void FUN_148a1d0d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa4c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1d134 FUN_148a1d134 body=126 status=ok
// SIG undefined FUN_148a1d134(void)

void FUN_148a1d134(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4aa4c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1d1a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a1d1b2 FUN_148a1d1b2 body=142 status=ok
// SIG undefined FUN_148a1d1b2(void)

bool FUN_148a1d1b2(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1d242 FUN_148a1d242 body=29 status=ok
// SIG undefined FUN_148a1d242(void)

undefined8 FUN_148a1d242(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a1d27a FUN_148a1d27a body=29 status=ok
// SIG undefined FUN_148a1d27a(void)

bool FUN_148a1d27a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a1d298 FUN_148a1d298 body=26 status=ok
// SIG undefined FUN_148a1d298(void)

bool FUN_148a1d298(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a1d2b2 FUN_148a1d2b2 body=24 status=ok
// SIG undefined FUN_148a1d2b2(void)

bool FUN_148a1d2b2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a1d2ca FUN_148a1d2ca body=93 status=ok
// SIG undefined FUN_148a1d2ca(void)

void FUN_148a1d2ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1d328 FUN_148a1d328 body=93 status=ok
// SIG undefined FUN_148a1d328(void)

void FUN_148a1d328(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1d386 FUN_148a1d386 body=126 status=ok
// SIG undefined FUN_148a1d386(void)

void FUN_148a1d386(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4aa530;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1d3f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a1d404 FUN_148a1d404 body=38 status=ok
// SIG undefined FUN_148a1d404(void)

void FUN_148a1d404(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a1d427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148a1d42a FUN_148a1d42a body=150 status=ok
// SIG undefined FUN_148a1d42a(void)

bool FUN_148a1d42a(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1d4c2 FUN_148a1d4c2 body=31 status=ok
// SIG undefined FUN_148a1d4c2(void)

undefined8 FUN_148a1d4c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a1d4f6 FUN_148a1d4f6 body=85 status=ok
// SIG undefined FUN_148a1d4f6(void)

void FUN_148a1d4f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa8f0;
  return;
}



// FUNCTION 148a1d54c FUN_148a1d54c body=118 status=ok
// SIG undefined FUN_148a1d54c(void)

void FUN_148a1d54c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4aa8f0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1d5b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a1d5c2 FUN_148a1d5c2 body=26 status=ok
// SIG undefined FUN_148a1d5c2(void)

undefined8 FUN_148a1d5c2(longlong param_1,undefined8 param_2)

{
  FUN_148a1d646(param_1 + 0x18);
  return param_2;
}



// FUNCTION 148a1d5dc FUN_148a1d5dc body=105 status=ok
// SIG undefined FUN_148a1d5dc(void)

undefined8 FUN_148a1d5dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148a1d646(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148a1d646 FUN_148a1d646 body=388 status=ok
// SIG undefined FUN_148a1d646(void)

longlong * FUN_148a1d646(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb949e8 != (longlong *)0x0 && DAT_14cb949f0 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb949e8 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb949e8;
    if (DAT_14cb949f0 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    plVar4 = local_30;
    lVar3 = local_38;
    goto LAB_148a1d765;
  }
  lVar3 = FUN_14001cc68(0xd0,0x10);
  FUN_148a23d46(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b4aa960;
  plVar4[2] = lVar3;
  if (lVar3 == 0) {
    lVar3 = 0;
    goto LAB_148a1d765;
  }
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_148a1d765;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_148a1d730:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_148a1d744;
    }
    plVar4 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 0x10) = lVar3;
    if (*(longlong **)(lVar3 + 0x18) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(lVar3 + 0x18);
      if (plVar5 != (longlong *)0x0) goto LAB_148a1d730;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_148a1d744:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_148a1d765:
  *param_2 = lVar3;
  param_2[1] = (longlong)plVar4;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148a1d7cc FUN_148a1d7cc body=24 status=ok
// SIG undefined FUN_148a1d7cc(void)

void FUN_148a1d7cc(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1d7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148a1d7e4 FUN_148a1d7e4 body=29 status=ok
// SIG undefined FUN_148a1d7e4(void)

undefined8 FUN_148a1d7e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a1d81c FUN_148a1d81c body=29 status=ok
// SIG undefined FUN_148a1d81c(void)

bool FUN_148a1d81c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a1d83a FUN_148a1d83a body=93 status=ok
// SIG undefined FUN_148a1d83a(void)

void FUN_148a1d83a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa5a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1d898 FUN_148a1d898 body=93 status=ok
// SIG undefined FUN_148a1d898(void)

void FUN_148a1d898(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa5a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1d8f6 FUN_148a1d8f6 body=126 status=ok
// SIG undefined FUN_148a1d8f6(void)

void FUN_148a1d8f6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4aa5a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1d965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a1d974 FUN_148a1d974 body=35 status=ok
// SIG undefined FUN_148a1d974(void)

void FUN_148a1d974(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a1d993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148a1d998 FUN_148a1d998 body=29 status=ok
// SIG undefined FUN_148a1d998(void)

undefined8 FUN_148a1d998(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148a1d9d0 FUN_148a1d9d0 body=29 status=ok
// SIG undefined FUN_148a1d9d0(void)

bool FUN_148a1d9d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148a1d9ee FUN_148a1d9ee body=26 status=ok
// SIG undefined FUN_148a1d9ee(void)

bool FUN_148a1d9ee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148a1da08 FUN_148a1da08 body=24 status=ok
// SIG undefined FUN_148a1da08(void)

bool FUN_148a1da08(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148a1da20 FUN_148a1da20 body=93 status=ok
// SIG undefined FUN_148a1da20(void)

void FUN_148a1da20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1da7e FUN_148a1da7e body=93 status=ok
// SIG undefined FUN_148a1da7e(void)

void FUN_148a1da7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4aa630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148a1dadc FUN_148a1dadc body=126 status=ok
// SIG undefined FUN_148a1dadc(void)

void FUN_148a1dadc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4aa630;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a1db4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148a1db5a FUN_148a1db5a body=35 status=ok
// SIG undefined FUN_148a1db5a(void)

void FUN_148a1db5a(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148a1db79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}


