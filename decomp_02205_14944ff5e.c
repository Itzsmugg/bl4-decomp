// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14944ff5e FUN_14944ff5e body=158 status=ok
// SIG undefined FUN_14944ff5e(void)

void FUN_14944ff5e(undefined8 param_1,longlong param_2)

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
  FUN_1494520ee(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14944fffe FUN_14944fffe body=171 status=ok
// SIG undefined FUN_14944fffe(void)

void FUN_14944fffe(undefined8 param_1,longlong param_2)

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
  FUN_1445205c8(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494500aa FUN_1494500aa body=154 status=ok
// SIG undefined FUN_1494500aa(void)

void FUN_1494500aa(undefined8 param_1,longlong param_2)

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
  FUN_149451f52(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149450146 FUN_149450146 body=169 status=ok
// SIG undefined FUN_149450146(void)

void FUN_149450146(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14945201e(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494501f4 FUN_1494501f4 body=158 status=ok
// SIG undefined FUN_1494501f4(void)

void FUN_1494501f4(undefined8 param_1,longlong param_2)

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
  FUN_149451f78(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149450294 FUN_149450294 body=154 status=ok
// SIG undefined FUN_149450294(void)

void FUN_149450294(undefined8 param_1,longlong param_2)

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
  FUN_149451ff0(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149450330 FUN_149450330 body=154 status=ok
// SIG undefined FUN_149450330(void)

void FUN_149450330(undefined8 param_1,longlong param_2)

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
  FUN_149451fb6(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494503cc FUN_1494503cc body=169 status=ok
// SIG undefined FUN_1494503cc(void)

void FUN_1494503cc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149452004(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945047a FUN_14945047a body=158 status=ok
// SIG undefined FUN_14945047a(void)

void FUN_14945047a(undefined8 param_1,longlong param_2)

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
  FUN_149451fa0(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945051a FUN_14945051a body=171 status=ok
// SIG undefined FUN_14945051a(void)

void FUN_14945051a(undefined8 param_1,longlong param_2)

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
  FUN_149451b88(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494505c6 FUN_1494505c6 body=151 status=ok
// SIG undefined FUN_1494505c6(void)

void FUN_1494505c6(undefined8 param_1,longlong param_2)

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
  FUN_149452038(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149450662 FUN_149450662 body=158 status=ok
// SIG undefined FUN_149450662(void)

void FUN_149450662(undefined8 param_1,longlong param_2)

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
  FUN_149451f8c(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149450702 FUN_149450702 body=151 status=ok
// SIG undefined FUN_149450702(void)

void FUN_149450702(undefined8 param_1,longlong param_2)

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
  FUN_149451c84(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945079a FUN_14945079a body=154 status=ok
// SIG undefined FUN_14945079a(void)

void FUN_14945079a(undefined8 param_1,longlong param_2)

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
  FUN_14945204c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149450836 FUN_149450836 body=156 status=ok
// SIG undefined FUN_149450836(void)

void FUN_149450836(undefined8 param_1,longlong param_2)

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
  FUN_14945210c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494508d4 FUN_1494508d4 body=156 status=ok
// SIG undefined FUN_1494508d4(void)

void FUN_1494508d4(undefined8 param_1,longlong param_2)

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
  FUN_149451e4a(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149450976 FUN_149450976 body=158 status=ok
// SIG undefined FUN_149450976(void)

void FUN_149450976(undefined8 param_1,longlong param_2)

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
  FUN_149451f3e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149450a5c FUN_149450a5c body=128 status=ok
// SIG undefined FUN_149450a5c(void)

undefined4 * FUN_149450a5c(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  *param_1 = 5;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_20 = param_2;
  FUN_140244552(param_1 + 2,&local_20,&local_28);
  FUN_149450ade(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149450ade FUN_149450ade body=420 status=ok
// SIG undefined FUN_149450ade(void)

void FUN_149450ade(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  uint *puVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  lVar12 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar11 = (longlong)(int)param_1[8] + 1;
    do {
      lVar10 = lVar12;
      puVar4 = param_1 + 0xe;
      if (lVar11 < lVar12) {
        lVar10 = 0;
        puVar4 = param_1 + 4;
      }
      lVar10 = *(longlong *)(*(longlong *)puVar4 + lVar10 * -8 + lVar11 * 8);
      param_1[10] = param_1[10] + 1;
      if (((lVar10 != 0) && (lVar7 = FUN_144a79cc8(lVar10), lVar7 != 0)) &&
         ((uVar1 = *param_1, (uVar1 & 1) == 0 || ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0)))) {
        if ((uVar1 & 2) != 0) {
          cVar5 = FUN_144affb44(lVar10);
          if (cVar5 == '\0') goto LAB_149450b88;
          uVar1 = *param_1;
        }
        if ((uVar1 & 4) != 0) {
          if (((*(byte *)(lVar7 + 0x240) & 0x20) == 0) ||
             (bVar6 = 1, (*(byte *)(lVar7 + 0x242) & 8) != 0)) {
            bVar6 = 1;
            if ((*(byte *)(lVar7 + 0x241) & 0x20) == 0) {
              bVar6 = (*(byte *)(lVar7 + 0x241) & 0x40) >> 6;
            }
          }
          pcVar3 = *(char **)(lVar7 + 0x2e8);
          if (*(longlong *)(lVar7 + 0xc0) == 0) {
            pcVar9 = (char *)0x0;
          }
          else {
            pcVar9 = (char *)FUN_144a8afea();
          }
          if (pcVar3 == (char *)0x0) {
            bVar13 = true;
          }
          else {
            bVar13 = *pcVar3 == '\x02';
          }
          if ((bVar6 & ((pcVar9 == (char *)0x0 || pcVar3 == pcVar9) | bVar13)) != 1)
          goto LAB_149450b88;
        }
        lVar8 = FUN_144a8afe2(lVar7);
        if (lVar8 == lVar2) {
          if (*(longlong *)(lVar2 + 0x30) == lVar7) {
LAB_149450c78:
            *(longlong *)(param_1 + 0xc) = lVar10;
            param_1[8] = (uint)lVar11;
            return;
          }
          lVar7 = FUN_14059e8cc();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_149450c78;
        }
      }
LAB_149450b88:
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x10] + lVar12);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 149450c82 FUN_149450c82 body=3 status=ok
// SIG undefined FUN_149450c82(void)

undefined8 FUN_149450c82(void)

{
  return 0;
}



// FUNCTION 149450c88 FUN_149450c88 body=67 status=ok
// SIG undefined FUN_149450c88(void)

undefined8 * FUN_149450c88(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bcd51e8;
  if (param_1[1] != 0) {
    thunk_FUN_1400020a8(param_1[1],1);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 149450d0c FUN_149450d0c body=73 status=ok
// SIG undefined FUN_149450d0c(void)

undefined1 FUN_149450d0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_144a787a6();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149450d56 FUN_149450d56 body=31 status=ok
// SIG undefined FUN_149450d56(void)

undefined1
FUN_149450d56(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_149450e78(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 149450d92 FUN_149450d92 body=102 status=ok
// SIG undefined FUN_149450d92(void)

uint FUN_149450d92(longlong *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_2 + 8);
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar4);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2 ^ uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149450e04 FUN_149450e04 body=38 status=ok
// SIG undefined FUN_149450e04(void)

void FUN_149450e04(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 149450e78 FUN_149450e78 body=65 status=ok
// SIG undefined FUN_149450e78(void)

bool FUN_149450e78(char *param_1,char *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 == *param_2) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == *(int *)(param_2 + 0x10)) {
      if (iVar1 < 2) {
        return true;
      }
      iVar1 = FUN_144a80a00(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8));
      bVar2 = iVar1 == 0;
    }
    else {
      bVar2 = *(int *)(param_2 + 0x10) + iVar1 == 1;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 149450eba FUN_149450eba body=69 status=ok
// SIG undefined FUN_149450eba(void)

void FUN_149450eba(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14062c7dc(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149450f00 FUN_149450f00 body=109 status=ok
// SIG undefined FUN_149450f00(void)

void FUN_149450f00(longlong *param_1)

{
  FUN_149450f6d(param_1[0xe],(int)param_1[0xf]);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149450f6d FUN_149450f6d body=43 status=ok
// SIG undefined FUN_149450f6d(void)

void FUN_149450f6d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 149450f98 FUN_149450f98 body=59 status=ok
// SIG undefined FUN_149450f98(void)

void FUN_149450f98(longlong *param_1)

{
  FUN_149450fd3(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149450fd3 FUN_149450fd3 body=38 status=ok
// SIG undefined FUN_149450fd3(void)

void FUN_149450fd3(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149450ffa(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 149450ffa FUN_149450ffa body=98 status=ok
// SIG undefined FUN_149450ffa(void)

void FUN_149450ffa(longlong *param_1)

{
  FUN_14945105c(param_1[7],(int)param_1[8]);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_149451087(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14945105c FUN_14945105c body=43 status=ok
// SIG undefined FUN_14945105c(void)

void FUN_14945105c(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 149451087 FUN_149451087 body=38 status=ok
// SIG undefined FUN_149451087(void)

void FUN_149451087(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1494510ae(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 1494510ae FUN_1494510ae body=65 status=ok
// SIG undefined FUN_1494510ae(void)

void FUN_1494510ae(longlong *param_1)

{
  FUN_1490d6ef8(param_1 + 5);
  FUN_1490d6ef8(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494510f0 FUN_1494510f0 body=3 status=ok
// SIG undefined FUN_1494510f0(void)

undefined8 FUN_1494510f0(void)

{
  return 0;
}



// FUNCTION 1494510f4 FUN_1494510f4 body=81 status=ok
// SIG undefined FUN_1494510f4(void)

void FUN_1494510f4(char *param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*param_1 == '\0') {
    iVar1 = DAT_14cc17290 + -1;
    if (DAT_14cc17290 == 0) {
      iVar1 = 0;
    }
    FUN_1449668a2(param_2,DAT_14cc17288,iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = 0;
  }
  FUN_1449668a2(param_2,*(undefined8 *)(param_1 + 8),iVar1);
  return;
}



// FUNCTION 149451146 FUN_149451146 body=326 status=ok
// SIG undefined FUN_149451146(void)

undefined8 * FUN_149451146(undefined1 *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 1;
  iVar1 = DAT_14cc17290 - 1;
  if (DAT_14cc17290 == 0) {
    iVar1 = 0;
  }
  iVar2 = (int)param_3[1];
  iVar3 = iVar2;
  if (iVar1 < iVar2) {
    iVar3 = iVar1;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  if (iVar1 == iVar4) {
    if (0 < iVar3 && 1 < DAT_14cc17290) {
      lVar5 = *param_3;
      iVar1 = FUN_144a54874(DAT_14cc17288,lVar5,iVar1);
      if (iVar1 != 0) goto LAB_1494511e4;
    }
    *param_1 = 0;
    iVar2 = DAT_14cc17290 - 1;
    if (DAT_14cc17290 == 0) {
      iVar2 = 0;
    }
    lVar5 = (longlong)iVar2 * 2 + *param_3;
    *param_3 = lVar5;
    iVar2 = (int)param_3[1] - iVar2;
    *(int *)(param_3 + 1) = iVar2;
  }
  else {
    lVar5 = *param_3;
  }
LAB_1494511e4:
  FUN_1402980a2(param_1 + 8,lVar5,iVar2);
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a5dc74(&local_48);
  local_38 = CONCAT35((int3)((ulonglong)local_38 >> 0x28),0x100000000);
  *param_2 = local_48;
  if (local_48 == (longlong *)0x0) {
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
    *(undefined4 *)(param_2 + 2) = 0;
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  else {
    (**(code **)(*local_48 + 8))();
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
    *(undefined4 *)(param_2 + 2) = (undefined4)local_38;
    *(undefined1 *)((longlong)param_2 + 0x14) = local_38._4_1_;
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945128e FUN_14945128e body=224 status=ok
// SIG undefined FUN_14945128e(void)

longlong * FUN_14945128e(undefined1 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_3;
  lVar2 = FUN_149451370(lVar1);
  if (lVar2 != 0) {
    FUN_149451410(lVar2,&local_40,lVar1);
    if (local_38 < 2) {
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 2;
    }
    else {
      FUN_1402980a2(param_1 + 8,local_40,local_38 + -1);
      lVar3 = FUN_144a799b0();
      if (*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) {
        bVar4 = false;
      }
      else {
        bVar4 = *(longlong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30;
      }
      *param_1 = bVar4;
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_38 < 2) goto LAB_1494512c8;
  }
  *param_2 = lVar2;
  *(undefined1 *)(param_2 + 1) = 1;
LAB_1494512c8:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149451370 FUN_149451370 body=159 status=ok
// SIG undefined FUN_149451370(void)

longlong FUN_149451370(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a6c4d8();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) {
      lVar1 = FUN_144a799b0();
      if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
        return 0;
      }
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30) {
        return 0;
      }
      param_1 = *(longlong *)(param_1 + 0xa8);
      if (param_1 == 0) {
        return 0;
      }
    }
    do {
      lVar1 = FUN_145a960f0();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        return param_1;
      }
      param_1 = FUN_144944cf2(param_1);
    } while (param_1 != 0);
  }
  return 0;
}



// FUNCTION 149451410 FUN_149451410 body=366 status=ok
// SIG undefined FUN_149451410(void)

undefined8 * FUN_149451410(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
LAB_14945149a:
    if (*(longlong *)(param_1 + 0x3b8) != 0) {
      FUN_1494496b0(*(undefined8 *)(*(longlong *)(param_1 + 0x3b8) + 0x28),&local_38,param_3);
      if (0 < local_30) {
        *param_2 = 0;
        param_2[1] = 0;
        FUN_145d37afc(local_38);
        if (local_38 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1494514ac;
      }
      FUN_145d37afc(local_38);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x4d8);
    lVar3 = FUN_144a799b0();
    lVar4 = *(longlong *)(param_3 + 0x10);
    iVar1 = *(int *)(lVar3 + 0x38);
    lVar5 = lVar4;
    if ((*(int *)(lVar4 + 0x38) < iVar1) ||
       (lVar5 = param_3,
       *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) != lVar3 + 0x30)) {
      lVar4 = FUN_144a6c4d8((longlong)iVar1,lVar5);
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30 ||
          (*(longlong *)(param_3 + 0x1c8) == 0)))) goto LAB_14945149a;
    }
    if (*(longlong *)(param_1 + 0x4d8) == 0) goto LAB_14945149a;
    lVar4 = FUN_14945190a(uVar2);
    if (lVar4 != 0) {
      *param_2 = 0;
      iVar1 = *(int *)(lVar4 + 0x48);
      _Src = *(void **)(lVar4 + 0x40);
      *(int *)(param_2 + 1) = iVar1;
      if ((longlong)iVar1 != 0) {
        FUN_1446dd670(param_2,iVar1,0);
        memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      goto LAB_1494514ac;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1494514ac:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149451584 FUN_149451584 body=39 status=ok
// SIG undefined FUN_149451584(void)

undefined8 FUN_149451584(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((*(uint *)(param_1 + 8) & 0x40) != 0) {
    lVar1 = FUN_149451370();
    uVar2 = 3000;
    if (lVar1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 1494515ab FUN_1494515ab body=174 status=ok
// SIG undefined FUN_1494515ab(void)

undefined8 FUN_1494515ab(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1458e7830();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 9;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 14945165a FUN_14945165a body=686 status=ok
// SIG undefined FUN_14945165a(void)

longlong FUN_14945165a(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  void *_Src;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = *(int *)(param_1 + 0x48);
  iVar4 = (int)param_2[1];
  if (iVar3 == iVar4) {
    if (1 < iVar3) {
      _Src = (void *)*param_2;
      lVar5 = 0;
      while( true ) {
        uVar8 = *(ushort *)(*(longlong *)(param_1 + 0x40) + lVar5);
        uVar9 = (ulonglong)uVar8;
        uVar10 = *(ushort *)((longlong)_Src + lVar5);
        if (uVar8 != uVar10) break;
        if (uVar8 == 0) goto LAB_1494516e1;
LAB_1494516ac:
        lVar5 = lVar5 + 2;
      }
      if ((uVar10 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar11 = (ulonglong)uVar10;
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_1494516ac;
      }
      if (uVar8 != uVar10) goto LAB_149451708;
    }
  }
  else if (iVar3 + iVar4 != 1) {
    _Src = (void *)*param_2;
LAB_149451708:
    local_38 = 0;
    uStack_30 = 0;
    local_48 = (undefined2 *)0x0;
    uStack_40 = 0;
    local_58 = (void *)0x0;
    local_50 = iVar4;
    if (iVar4 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,iVar4,0);
      memcpy(local_58,_Src,(longlong)iVar4 * 2);
    }
    FUN_140c540b4(&local_58,&DAT_149e065c6,1,1);
    FUN_140056680(local_68,&DAT_149e065c6);
    cVar1 = FUN_1407cdba6(&local_58,local_68,&local_48,&local_38);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 == '\0') {
      iVar3 = local_50 + -1;
      if (local_50 == 0) {
        iVar3 = 0;
      }
      FUN_1402980a2(&local_48,local_58,iVar3);
    }
    if ((int)uStack_40 < 2) {
      iVar3 = (int)uStack_30 + -1;
      if ((int)uStack_30 == 0) {
        iVar3 = 0;
      }
      FUN_1402980a2(&local_48,local_38,iVar3);
      uVar9 = uStack_30 >> 0x20;
      uStack_30 = uStack_30 & 0xffffffff00000000;
      if ((int)uVar9 != 0) {
        FUN_1446f8c06(&local_38,0);
      }
    }
    plVar7 = (longlong *)(param_1 + 0x58);
    puVar6 = local_48;
    if ((int)uStack_40 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    iVar3 = (int)uStack_40 + -1;
    if ((int)uStack_40 == 0) {
      iVar3 = 0;
    }
    uVar2 = FUN_144a49b4a(iVar3,puVar6);
    iVar3 = FUN_149453376(plVar7,uVar2,&local_48);
    if (iVar3 == -1) {
      param_1 = 0;
    }
    else {
      iVar3 = (int)uStack_30;
      puVar6 = local_48;
      if ((int)uStack_40 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      iVar4 = (int)uStack_40 + -1;
      if ((int)uStack_40 == 0) {
        iVar4 = 0;
      }
      uVar2 = FUN_144a49b4a(iVar4,puVar6);
      iVar4 = FUN_149453376(plVar7,uVar2,&local_48);
      if (iVar3 < 2) {
        if (iVar4 == -1) {
          lVar5 = 0;
        }
        else {
          lVar5 = (longlong)iVar4 * 0x20 + *plVar7;
        }
        param_1 = *(longlong *)(lVar5 + 0x10);
      }
      else {
        if (iVar4 == -1) {
          lVar5 = 0;
        }
        else {
          lVar5 = (longlong)iVar4 * 0x20 + *plVar7;
        }
        param_1 = FUN_14945165a(*(undefined8 *)(lVar5 + 0x10),&local_38);
      }
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1494516e1:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14945190a FUN_14945190a body=320 status=ok
// SIG undefined FUN_14945190a(void)

longlong FUN_14945190a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar4 = FUN_1403e9e5e(param_1 + 0x50);
  if (cVar4 == '\0') {
    plVar1 = (longlong *)(param_1 + 0x58);
    lVar2 = param_1 + 0x68;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_50 = lVar2;
    if (*(int *)(param_1 + 0x80) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      iVar6 = *(int *)(param_1 + 0x80);
    }
    uStack_60 = CONCAT44(uStack_3c,uStack_40);
    local_68 = local_48;
    uVar3 = local_68;
    local_78 = (undefined4)local_58;
    uStack_74 = local_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = plVar1;
    if ((local_68._4_4_ != iVar6) || (uStack_50 != lVar2)) {
      iVar5 = local_68._4_4_;
      local_68 = uVar3;
      do {
        param_1 = FUN_14945190a(*(undefined8 *)(*local_80 + 0x10 + (longlong)iVar5 * 0x20),param_2);
        if (param_1 != 0) goto LAB_149451938;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar3 = local_68;
      } while (local_80 != plVar1 ||
               (CONCAT44(uStack_6c,uStack_70) != lVar2 || local_68._4_4_ != iVar6));
    }
    local_68 = uVar3;
    param_1 = 0;
  }
LAB_149451938:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149451a50 FUN_149451a50 body=10 status=ok
// SIG undefined FUN_149451a50(void)

undefined8 * FUN_149451a50(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 149451a5a FUN_149451a5a body=203 status=ok
// SIG undefined FUN_149451a5a(void)

void FUN_149451a5a(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 unaff_R14;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  cVar2 = DAT_14cc17300;
  uVar1 = DAT_14c868730;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cc17300 == '\x01') {
    DAT_14c868730 = 0;
    unaff_R14 = uVar1;
  }
  FUN_1458b0bbe(local_38);
  FUN_14603997e(param_1 + 0x680,local_38);
  FUN_145d37a3e(local_38);
  FUN_1458b0bbe(local_38);
  FUN_14603997e(param_1 + 0x688,local_38);
  FUN_145d37a3e(local_38);
  FUN_1458b0bbe(local_38);
  FUN_145d37a3e(local_38);
  if (cVar2 != '\0') {
    DAT_14c868730 = unaff_R14;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149451b26 FUN_149451b26 body=98 status=ok
// SIG undefined FUN_149451b26(void)

longlong FUN_149451b26(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x4d8);
  if (lVar2 == 0) {
    FUN_1412d55ee(0);
    uVar1 = FUN_1409ffe1d();
    lVar2 = FUN_1494515ab(uVar1);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x4d8) = lVar2;
    FUN_1412d5698(0);
    lVar2 = *(longlong *)(param_1 + 0x4d8);
  }
  return lVar2;
}



// FUNCTION 149451b88 FUN_149451b88 body=251 status=ok
// SIG undefined FUN_149451b88(void)

void FUN_149451b88(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar2 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 * 2);
  }
  FUN_144520836(param_1);
  FUN_149451a5a(param_1);
  iVar1 = local_30 + -1;
  if (local_30 == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0x390,local_38,iVar1);
  FUN_144520732(param_1);
  FUN_140056680(local_48,L"Open");
  FUN_1494497cd(param_1 + 0x680,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149451c84 FUN_149451c84 body=100 status=ok
// SIG undefined FUN_149451c84(void)

void FUN_149451c84(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x3a0) != param_2) {
    *(char *)(param_1 + 0x3a0) = param_2;
    if (param_2 == '\x01') {
      FUN_144520836(param_1);
      FUN_1445209ac(param_1);
      return;
    }
    if (param_2 == '\x02') {
      FUN_144520732(param_1);
      return;
    }
    if (param_2 == '\0') {
      FUN_144520836(param_1);
      FUN_149451a5a(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 149451ce8 FUN_149451ce8 body=352 status=ok
// SIG undefined FUN_149451ce8(void)

void FUN_149451ce8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_f8 [32];
  longlong local_d8 [2];
  longlong *local_c8;
  undefined1 local_bc [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if (lVar1 != param_2) {
    if (lVar1 != 0) {
      FUN_1490c7d46(lVar1,param_1);
      FUN_14445880e(*(undefined8 *)(param_1 + 0x3c0));
    }
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x3c0) = param_2;
    local_48 = 0;
    local_40 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_3c = 0xffffffff00000080;
    local_34 = 0;
    local_28 = 0;
    local_20 = 0;
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_142746682(local_d8,&DAT_149e065c6,0);
    local_c8 = local_d8;
    FUN_149453b96(&local_b8,local_bc);
    if (local_d8[0] != 0) {
      FUN_1400020a8();
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_145d37a7c(&local_b8);
    local_20 = 0;
    FUN_145d37a7c();
  }
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149451e4a FUN_149451e4a body=89 status=ok
// SIG undefined FUN_149451e4a(void)

void FUN_149451e4a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3a8);
  if (lVar1 != param_2) {
    if (lVar1 != 0) {
      FUN_1490caeac(lVar1,param_1);
      FUN_1490cb8f8(*(undefined8 *)(param_1 + 0x3a8));
    }
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x3a8) = param_2;
  }
  return;
}



// FUNCTION 149451ea4 FUN_149451ea4 body=94 status=ok
// SIG undefined FUN_149451ea4(void)

void FUN_149451ea4(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = DAT_14c868730;
  if (*(longlong *)(param_1 + 0x3a8) == 0) {
    DAT_14c868730 = 0;
    lVar2 = FUN_1490cba0c();
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x3a8) = lVar2;
  }
  DAT_14c868730 = uVar1;
  return;
}



// FUNCTION 149451f02 FUN_149451f02 body=20 status=ok
// SIG undefined FUN_149451f02(void)

void FUN_149451f02(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x3c8) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x3c8) = param_2;
  FUN_144520732();
  return;
}



// FUNCTION 149451f16 FUN_149451f16 body=20 status=ok
// SIG undefined FUN_149451f16(void)

void FUN_149451f16(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x3c9) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x3c9) = param_2;
  FUN_144520732();
  return;
}



// FUNCTION 149451f2a FUN_149451f2a body=20 status=ok
// SIG undefined FUN_149451f2a(void)

void FUN_149451f2a(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x3ca) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x3ca) = param_2;
  FUN_144520732();
  return;
}



// FUNCTION 149451f3e FUN_149451f3e body=20 status=ok
// SIG undefined FUN_149451f3e(void)

void FUN_149451f3e(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x3cb) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x3cb) = param_2;
  FUN_144520732();
  return;
}



// FUNCTION 149451f52 FUN_149451f52 body=38 status=ok
// SIG undefined FUN_149451f52(void)

void FUN_149451f52(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 | 0xe;
  if ((param_2 & 1) == 0) {
    uVar1 = param_2;
  }
  uVar1 = param_2 * 2 & 8 | uVar1;
  if (uVar1 == *(uint *)(param_1 + 0x3cc)) {
    return;
  }
  *(uint *)(param_1 + 0x3cc) = uVar1;
  FUN_144520732();
  return;
}



// FUNCTION 149451f78 FUN_149451f78 body=20 status=ok
// SIG undefined FUN_149451f78(void)

void FUN_149451f78(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x3d0) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x3d0) = param_2;
  FUN_144520732();
  return;
}



// FUNCTION 149451f8c FUN_149451f8c body=20 status=ok
// SIG undefined FUN_149451f8c(void)

void FUN_149451f8c(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x3d1) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x3d1) = param_2;
  FUN_144520732();
  return;
}



// FUNCTION 149451fa0 FUN_149451fa0 body=20 status=ok
// SIG undefined FUN_149451fa0(void)

void FUN_149451fa0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x3d2) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x3d2) = param_2;
  FUN_144520732();
  return;
}



// FUNCTION 149451fb4 FUN_149451fb4 body=1 status=ok
// SIG undefined FUN_149451fb4(void)

void FUN_149451fb4(void)

{
  return;
}



// FUNCTION 149451fb6 FUN_149451fb6 body=58 status=ok
// SIG undefined FUN_149451fb6(void)

void FUN_149451fb6(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x3d4) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x3d4) = param_2;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    FUN_1490d6e6c();
  }
  FUN_144520732(param_1);
  return;
}



// FUNCTION 149451ff0 FUN_149451ff0 body=20 status=ok
// SIG undefined FUN_149451ff0(void)

void FUN_149451ff0(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x3d8) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x3d8) = param_2;
  FUN_144520732();
  return;
}



// FUNCTION 149452004 FUN_149452004 body=25 status=ok
// SIG undefined FUN_149452004(void)

void FUN_149452004(longlong param_1,longlong *param_2)

{
  if (*param_2 == *(longlong *)(param_1 + 0x3dc)) {
    return;
  }
  *(longlong *)(param_1 + 0x3dc) = *param_2;
  FUN_144520732();
  return;
}



// FUNCTION 14945201e FUN_14945201e body=25 status=ok
// SIG undefined FUN_14945201e(void)

void FUN_14945201e(longlong param_1,longlong *param_2)

{
  if (*param_2 == *(longlong *)(param_1 + 0x3e4)) {
    return;
  }
  *(longlong *)(param_1 + 0x3e4) = *param_2;
  FUN_144520732();
  return;
}



// FUNCTION 149452038 FUN_149452038 body=20 status=ok
// SIG undefined FUN_149452038(void)

void FUN_149452038(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x3ec) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x3ec) = param_2;
  FUN_144520732();
  return;
}



// FUNCTION 14945204c FUN_14945204c body=20 status=ok
// SIG undefined FUN_14945204c(void)

void FUN_14945204c(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x3f0) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x3f0) = param_2;
  FUN_144520732();
  return;
}



// FUNCTION 149452060 FUN_149452060 body=20 status=ok
// SIG undefined FUN_149452060(void)

void FUN_149452060(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x3f8) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x3f8) = param_2;
  FUN_144520732();
  return;
}



// FUNCTION 149452074 FUN_149452074 body=20 status=ok
// SIG undefined FUN_149452074(void)

void FUN_149452074(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x3f9) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x3f9) = param_2;
  FUN_144520732();
  return;
}



// FUNCTION 149452088 FUN_149452088 body=20 status=ok
// SIG undefined FUN_149452088(void)

void FUN_149452088(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x3fa) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x3fa) = param_2;
  FUN_144520732();
  return;
}



// FUNCTION 14945209c FUN_14945209c body=82 status=ok
// SIG undefined FUN_14945209c(void)

void FUN_14945209c(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  if (*(int *)(param_2 + 1) == *(int *)(param_1 + 0x408)) {
    cVar1 = FUN_1405d12b4(*param_2,*(undefined8 *)(param_1 + 0x400));
    if (cVar1 != '\0') {
      return;
    }
  }
  FUN_140bee9ec((undefined8 *)(param_1 + 0x400),param_2);
  FUN_144520732(param_1);
  return;
}



// FUNCTION 1494520ee FUN_1494520ee body=20 status=ok
// SIG undefined FUN_1494520ee(void)

void FUN_1494520ee(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x410) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x410) = param_2;
  FUN_144520732();
  return;
}



// FUNCTION 149452102 FUN_149452102 body=9 status=ok
// SIG undefined FUN_149452102(void)

undefined4 FUN_149452102(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x4c8);
}



// FUNCTION 14945210c FUN_14945210c body=78 status=ok
// SIG undefined FUN_14945210c(void)

void FUN_14945210c(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x4c8) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x4c8)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x4c8) = param_2;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    FUN_1490d6e6e(*(longlong *)(param_1 + 0x650),(double)param_2);
  }
  FUN_1447f69b6(param_1 + 0x4a8);
  return;
}



// FUNCTION 14945215a FUN_14945215a body=8 status=ok
// SIG undefined FUN_14945215a(void)

undefined8 FUN_14945215a(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x4d0);
}



// FUNCTION 149452162 FUN_149452162 body=10 status=ok
// SIG undefined FUN_149452162(void)

undefined8 * FUN_149452162(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14945216c FUN_14945216c body=174 status=ok
// SIG undefined FUN_14945216c(void)

undefined8 FUN_14945216c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459d9372();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0x40;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 14945221b FUN_14945221b body=174 status=ok
// SIG undefined FUN_14945221b(void)

undefined8 FUN_14945221b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459d9456();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0x48;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 1494522ca FUN_1494522ca body=699 status=ok
// SIG undefined FUN_1494522ca(void)

longlong * FUN_1494522ca(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = *(undefined8 *)(param_2 + 0x3a8);
  FUN_1445209ac(param_2);
  puVar6 = (undefined8 *)FUN_14001cc68(0x168,0x10);
  puVar6[1] = &DAT_100000001;
  *puVar6 = &PTR_LAB_14bcd6090;
  puVar1 = puVar6 + 2;
  FUN_14944989e(puVar1,param_2 + 0x680,uVar7);
  *param_1 = (longlong)puVar1;
  param_1[1] = (longlong)puVar6;
  FUN_149452f0e(param_1,puVar1);
  uVar7 = FUN_144a79cc8(param_2);
  puVar6[6] = uVar7;
  *(undefined4 *)(puVar6 + 7) = 0xb;
  *(undefined4 *)(puVar6 + 9) = *(undefined4 *)(param_2 + 0x4c8);
  *(undefined4 *)((longlong)puVar6 + 0x4c) = *(undefined4 *)(param_2 + 0x3d4);
  *(undefined4 *)(puVar6 + 0x11) = *(undefined4 *)(param_2 + 0x3d8);
  puVar6[10] = *(undefined8 *)(param_2 + 0x3dc);
  puVar6[0xb] = *(undefined8 *)(param_2 + 0x3e4);
  *(undefined1 *)(puVar6 + 0xc) = *(undefined1 *)(param_2 + 0x3ec);
  *(undefined1 *)((longlong)puVar6 + 0x61) = *(undefined1 *)(param_2 + 0x3ca);
  *(undefined4 *)((longlong)puVar6 + 100) = *(undefined4 *)(param_2 + 0x3f0);
  *(undefined1 *)((longlong)puVar6 + 0x6a) = *(undefined1 *)(param_2 + 0x3fa);
  *(undefined2 *)(puVar6 + 0xd) = *(undefined2 *)(param_2 + 0x3f8);
  FUN_140bee9ec(puVar6 + 0xe,param_2 + 0x400);
  *(undefined1 *)(puVar6 + 0x10) = *(undefined1 *)(param_2 + 0x410);
  puVar6[0x1a] = param_2 + 0x690;
  if (*(longlong *)(param_2 + 0x3b0) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(longlong *)(param_2 + 0x3b0) + 0x28);
  }
  puVar6[0x16] = uVar7;
  if (*(longlong *)(param_2 + 0x3b8) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(longlong *)(param_2 + 0x3b8) + 0x28);
  }
  puVar6[0x17] = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x650);
  lVar4 = *(longlong *)(param_2 + 0x658);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)puVar6[0x19];
  puVar6[0x18] = uVar7;
  puVar6[0x19] = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar4 = *param_1;
  *(undefined1 *)(lVar4 + 0x12e) = DAT_14c765ce9;
  *(undefined2 *)(lVar4 + 0x129) = 0x100;
  *(undefined4 *)(lVar4 + 0x120) = *(undefined4 *)(param_2 + 0x3cc);
  *(undefined1 *)(lVar4 + 0x124) = *(undefined1 *)(param_2 + 0x3cb);
  *(undefined1 *)(lVar4 + 0x125) = *(undefined1 *)(param_2 + 0x3d0);
  *(undefined1 *)(lVar4 + 0x126) = *(undefined1 *)(param_2 + 0x3d1);
  local_40 = 0;
  uVar7 = FUN_149451b26(param_2);
  FUN_1490d6e52(&local_40,local_60);
  local_58 = 0;
  uStack_50 = 0;
  lVar8 = FUN_14945165a(uVar7);
  FUN_1490d6cf4(local_60);
  if ((lVar8 == 0) && (lVar8 = *(longlong *)(param_2 + 0x4d8), lVar8 == 0)) {
    *(undefined8 *)(lVar4 + 0x30) = 0;
  }
  else {
    lVar8 = FUN_14479d2ce(lVar8 + 0x50);
    *(longlong *)(lVar4 + 0x30) = lVar8;
    if (lVar8 != 0) goto LAB_149452554;
  }
  *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(param_2 + 0x1c8);
LAB_149452554:
  FUN_1490d6cf4(&local_40);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149452586 FUN_149452586 body=77 status=ok
// SIG undefined FUN_149452586(void)

void FUN_149452586(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_1445209ac(param_1);
    if (DAT_14cc17338 == '\0') {
      DAT_14cc17338 = 1;
      FUN_1445209ac(param_1);
      DAT_14cc17338 = '\0';
    }
    FUN_144520dd8(param_1);
    return;
  }
  FUN_144520732(param_1);
  return;
}



// FUNCTION 1494525d4 FUN_1494525d4 body=472 status=ok
// SIG undefined FUN_1494525d4(void)

void FUN_1494525d4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1402d084a();
  if ((*(byte *)((longlong)param_2 + 0x36) & 0x40) != 0) {
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x4d0);
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x4d8);
    FUN_146b7ba06(param_2,param_1 + 0x4e0);
    FUN_14945489e(param_2,param_1 + 0x530);
    FUN_149454bac(param_2,param_1 + 0x690);
    FUN_149455538(param_2,param_1 + 0x6e0);
    piVar1 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
      local_2c = (uint)*(byte *)(param_1 + 0x730);
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      if (1 < local_2c) {
        FUN_14572541c(param_2);
      }
      *(bool *)(param_1 + 0x730) = local_2c != 0;
    }
    else {
      *(bool *)(param_1 + 0x730) = *piVar1 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    if (*(longlong *)(param_1 + 0x3b0) == 0) {
      lVar2 = FUN_14945216c(param_1);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x3b0) = lVar2;
    }
    (**(code **)(*param_2 + 0x138))(param_2,(longlong *)(param_1 + 0x3b0));
    if (*(longlong *)(param_1 + 0x3b8) == 0) {
      lVar2 = FUN_14945221b(param_1);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x3b8) = lVar2;
    }
    (**(code **)(*param_2 + 0x138))(param_2,(longlong *)(param_1 + 0x3b8));
    if ((*(byte *)((longlong)param_2 + 0x36) & 0x40) != 0) {
      FUN_149450c82(param_1 + 0x670,param_2);
      FUN_14944a4f0(param_2,param_1 + 0x630);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494527ae FUN_1494527ae body=99 status=ok
// SIG undefined FUN_1494527ae(void)

void FUN_1494527ae(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_14490f2e4(0,local_28,1,0);
  FUN_1407fb560(param_1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149452818 FUN_149452818 body=34 status=ok
// SIG undefined FUN_149452818(void)

void FUN_149452818(void)

{
  FUN_1433bb58e();
  return;
}



// FUNCTION 14945283a FUN_14945283a body=136 status=ok
// SIG undefined FUN_14945283a(void)

void FUN_14945283a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140206818();
  lVar2 = FUN_1447210f0(param_1);
  if ((((lVar2 != 0) && (*(char *)(lVar2 + 0x152) != '\a')) &&
      (lVar2 = FUN_144a79cc8(param_1), lVar2 != 0)) &&
     ((lVar1 = param_1, (*(byte *)(lVar2 + 0x240) & 0x20) != 0 ||
      ((*(byte *)(lVar2 + 0x241) & 0x20) != 0)))) {
    for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
      if ((*(uint *)(lVar1 + 8) & 0x30) != 0) {
        return;
      }
    }
    if ((*(char *)(param_1 + 0x731) == '\0') && (*(char *)(param_1 + 0x732) == '\0')) {
      FUN_149455b1e(param_1);
      FUN_144520732(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1494528c7 FUN_1494528c7 body=232 status=ok
// SIG undefined FUN_1494528c7(void)

longlong * FUN_1494528c7(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14021219d();
  FUN_14021219d(param_1,param_2 + 0x18);
  FUN_14021219d(param_1,param_2 + 0x28);
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x10);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x10) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x10) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1492e94f5(param_1,param_2 + 0x38);
  FUN_1492e94f5(param_1,param_2 + 0x50);
  FUN_146db22e4(param_1,param_2 + 0x68);
  FUN_149455ef4(param_1,param_2 + 0x78);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494529b0 FUN_1494529b0 body=173 status=ok
// SIG undefined FUN_1494529b0(void)

longlong FUN_1494529b0(longlong param_1,undefined2 *param_2)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x28) & 4) == 0) goto LAB_149452a3c;
    FUN_1401211f6(&local_38,3,1);
    *(undefined1 *)(local_38 + 1) = *(undefined1 *)(param_2 + 1);
    *local_38 = *param_2;
    FUN_140077068(param_1,&local_38);
  }
  else {
    FUN_140077068(param_1,&local_38);
    *param_2 = *local_38;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(local_38 + 1);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_149452a3c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149452a5e FUN_149452a5e body=78 status=ok
// SIG undefined FUN_149452a5e(void)

undefined8 FUN_149452a5e(undefined8 param_1,longlong param_2)

{
  FUN_1494561e8();
  FUN_1494529b0(param_1,param_2 + 0x10);
  FUN_14021219d(param_1,param_2 + 0x18);
  FUN_1405d0c38(param_1,param_2 + 0x28);
  FUN_14021219d(param_1,param_2 + 0x38);
  return param_1;
}



// FUNCTION 149452aac FUN_149452aac body=81 status=ok
// SIG undefined FUN_149452aac(void)

void FUN_149452aac(longlong param_1)

{
  FUN_149452afe(param_1 + 0x28);
  FUN_149456b0d(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_149456b0d(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149452afe FUN_149452afe body=67 status=ok
// SIG undefined FUN_149452afe(void)

void FUN_149452afe(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0xc) != -1) {
    FUN_149456b0d(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = 0;
    param_1[1] = -0x100000000;
  }
  return;
}



// FUNCTION 149452b42 FUN_149452b42 body=59 status=ok
// SIG undefined FUN_149452b42(void)

void FUN_149452b42(longlong *param_1)

{
  FUN_149452fb2(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149452b7e FUN_149452b7e body=66 status=ok
// SIG undefined FUN_149452b7e(void)

void FUN_149452b7e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  switchD_143c3d4dc::caseD_21();
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 == 0) {
    return;
  }
  FUN_149456c54(param_2,lVar1 + 8);
  FUN_149456e36(lVar1 + 0x28,param_2);
  return;
}



// FUNCTION 149452bca FUN_149452bca body=29 status=ok
// SIG undefined FUN_149452bca(void)

undefined8 FUN_149452bca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149452be8 FUN_149452be8 body=330 status=ok
// SIG undefined FUN_149452be8(void)

void FUN_149452be8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_149452d32(*(undefined8 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x150));
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_149452d7c(param_1 + 0xd0);
  plVar3 = *(longlong **)(param_1 + 0xb8);
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
  plVar3 = *(longlong **)(param_1 + 0x98);
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
  if (*(longlong *)(param_1 + 0x88) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_145d37a3e(param_1 + 0x18);
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000149452d26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 149452d32 FUN_149452d32 body=73 status=ok
// SIG undefined FUN_149452d32(void)

void FUN_149452d32(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 149452d7c FUN_149452d7c body=52 status=ok
// SIG undefined FUN_149452d7c(void)

void FUN_149452d7c(longlong *param_1)

{
  FUN_149452db0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149452db0 FUN_149452db0 body=349 status=ok
// SIG undefined FUN_149452db0(void)

void FUN_149452db0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_1404dc9c0(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149452f0e FUN_149452f0e body=164 status=ok
// SIG undefined FUN_149452f0e(void)

void FUN_149452f0e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_149452f86;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_149452f86;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_149452f86:
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
                    /* WARNING: Could not recover jumptable at 0x000149452fa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 149452fb2 FUN_149452fb2 body=38 status=ok
// SIG undefined FUN_149452fb2(void)

void FUN_149452fb2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149452fd8(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 149452fd8 FUN_149452fd8 body=59 status=ok
// SIG undefined FUN_149452fd8(void)

void FUN_149452fd8(longlong *param_1)

{
  FUN_149453013(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149453013 FUN_149453013 body=38 status=ok
// SIG undefined FUN_149453013(void)

void FUN_149453013(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14945303a(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 14945303a FUN_14945303a body=98 status=ok
// SIG undefined FUN_14945303a(void)

void FUN_14945303a(longlong *param_1)

{
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_14945309c(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14945309c FUN_14945309c body=41 status=ok
// SIG undefined FUN_14945309c(void)

void FUN_14945309c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1494530c6(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 1494530c6 FUN_1494530c6 body=156 status=ok
// SIG undefined FUN_1494530c6(void)

void FUN_1494530c6(longlong *param_1)

{
  FUN_149453162(param_1[0xf],(int)param_1[0x10]);
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1492ea02b(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1492ea02b(param_1[7],(int)param_1[8]);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 149453162 FUN_149453162 body=54 status=ok
// SIG undefined FUN_149453162(void)

void FUN_149453162(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1492ea02b(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 149453198 FUN_149453198 body=476 status=ok
// SIG undefined FUN_149453198(void)

void FUN_149453198(longlong *param_1)

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



// FUNCTION 149453376 FUN_149453376 body=203 status=ok
// SIG undefined FUN_149453376(void)

int FUN_149453376(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_1494533c0:
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_149453436;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_149453436;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_149453427;
    }
  }
  return -1;
LAB_149453436:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_149453427:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1494533c0;
}



// FUNCTION 149453442 FUN_149453442 body=67 status=ok
// SIG undefined FUN_149453442(void)

void FUN_149453442(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145e3d840(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_149453198(param_1);
    return;
  }
  FUN_149453486(param_1);
  FUN_145e3d840(param_1,0);
  return;
}



// FUNCTION 149453486 FUN_149453486 body=322 status=ok
// SIG undefined FUN_149453486(void)

void FUN_149453486(longlong *param_1)

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



// FUNCTION 1494535ca FUN_1494535ca body=164 status=ok
// SIG undefined FUN_1494535ca(void)

void FUN_1494535ca(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14945364a;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14945364a:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14945366e FUN_14945366e body=29 status=ok
// SIG undefined FUN_14945366e(void)

undefined8 FUN_14945366e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494536a6 FUN_1494536a6 body=29 status=ok
// SIG undefined FUN_1494536a6(void)

bool FUN_1494536a6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1494536c4 FUN_1494536c4 body=26 status=ok
// SIG undefined FUN_1494536c4(void)

bool FUN_1494536c4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1494536de FUN_1494536de body=24 status=ok
// SIG undefined FUN_1494536de(void)

bool FUN_1494536de(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1494536f6 FUN_1494536f6 body=93 status=ok
// SIG undefined FUN_1494536f6(void)

void FUN_1494536f6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bcd60b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149453754 FUN_149453754 body=93 status=ok
// SIG undefined FUN_149453754(void)

void FUN_149453754(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bcd60b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1494537b2 FUN_1494537b2 body=126 status=ok
// SIG undefined FUN_1494537b2(void)

void FUN_1494537b2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bcd60b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149453821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149453830 FUN_149453830 body=35 status=ok
// SIG undefined FUN_149453830(void)

void FUN_149453830(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014945384f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 149453854 FUN_149453854 body=142 status=ok
// SIG undefined FUN_149453854(void)

bool FUN_149453854(longlong param_1)

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



// FUNCTION 1494538e4 FUN_1494538e4 body=29 status=ok
// SIG undefined FUN_1494538e4(void)

undefined8 FUN_1494538e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14945391c FUN_14945391c body=29 status=ok
// SIG undefined FUN_14945391c(void)

bool FUN_14945391c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14945393a FUN_14945393a body=26 status=ok
// SIG undefined FUN_14945393a(void)

bool FUN_14945393a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 149453954 FUN_149453954 body=24 status=ok
// SIG undefined FUN_149453954(void)

bool FUN_149453954(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 149453978 FUN_149453978 body=93 status=ok
// SIG undefined FUN_149453978(void)

void FUN_149453978(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bcd6190;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcd6120;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1494539d6 FUN_1494539d6 body=93 status=ok
// SIG undefined FUN_1494539d6(void)

void FUN_1494539d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bcd6190;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bcd6120;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149453a34 FUN_149453a34 body=126 status=ok
// SIG undefined FUN_149453a34(void)

void FUN_149453a34(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14bcd6190;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bcd6120;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149453aa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149453ab2 FUN_149453ab2 body=48 status=ok
// SIG undefined FUN_149453ab2(void)

void FUN_149453ab2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000149453adf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 149453ae2 FUN_149453ae2 body=163 status=ok
// SIG undefined FUN_149453ae2(void)

bool FUN_149453ae2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
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
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149453b96 FUN_149453b96 body=350 status=ok
// SIG undefined FUN_149453b96(void)

undefined4 * FUN_149453b96(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149453cf6(param_1,local_48);
  param_3 = (undefined8 *)*param_3;
  *local_40 = *param_3;
  iVar6 = 0;
  *param_3 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  FUN_149450fd3(0,0);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*local_40;
    iVar6 = *(int *)(local_40 + 1) + -1;
  }
  uVar3 = FUN_144a49b4a(iVar6,puVar7);
  cVar2 = FUN_149453ddc(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
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
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_149453f88(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149453cf6 FUN_149453cf6 body=230 status=ok
// SIG undefined FUN_149453cf6(void)

int * FUN_149453cf6(longlong *param_1,int *param_2)

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



// FUNCTION 149453ddc FUN_149453ddc body=109 status=ok
// SIG undefined FUN_149453ddc(void)

undefined8 FUN_149453ddc(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_149453e4a(), iVar9 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x28);
    FUN_149450f98(puVar1);
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    puVar1[4] = param_3[4];
    puVar1[5] = uVar6;
    puVar1[6] = uVar7;
    puVar1[7] = uVar8;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_149453f16(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 149453e4a FUN_149453e4a body=203 status=ok
// SIG undefined FUN_149453e4a(void)

int FUN_149453e4a(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_149453e94:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_149453f0a;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_149453f0a;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_149453efb;
    }
  }
  return -1;
LAB_149453f0a:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_149453efb:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_149453e94;
}



// FUNCTION 149453f16 FUN_149453f16 body=114 status=ok
// SIG undefined FUN_149453f16(void)

void FUN_149453f16(longlong *param_1,int param_2)

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



// FUNCTION 149453f88 FUN_149453f88 body=476 status=ok
// SIG undefined FUN_149453f88(void)

void FUN_149453f88(longlong *param_1)

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
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
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



// FUNCTION 149454166 FUN_149454166 body=322 status=ok
// SIG undefined FUN_149454166(void)

void FUN_149454166(longlong *param_1)

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



// FUNCTION 1494542aa FUN_1494542aa body=285 status=ok
// SIG undefined FUN_1494542aa(void)

void FUN_1494542aa(longlong *param_1)

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
      if (*(longlong *)(*local_60 + 8 + (longlong)iStack_44 * 0x20) != 0) {
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



// FUNCTION 1494543c8 FUN_1494543c8 body=329 status=ok
// SIG undefined FUN_1494543c8(void)

void FUN_1494543c8(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x9c + (longlong)iVar4 * 0xa0) * 4) =
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



// FUNCTION 149454512 FUN_149454512 body=306 status=ok
// SIG undefined FUN_149454512(void)

void FUN_149454512(longlong *param_1)

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
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
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
      plVar1 = (longlong *)(*local_68 + (longlong)iStack_4c * 0xa0);
      FUN_149450f00(plVar1 + 2);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14152de66(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149454646 FUN_149454646 body=322 status=ok
// SIG undefined FUN_149454646(void)

void FUN_149454646(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 100 + (longlong)iVar4 * 0x68) * 4) =
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



// FUNCTION 14945478a FUN_14945478a body=275 status=ok
// SIG undefined FUN_14945478a(void)

void FUN_14945478a(longlong *param_1)

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
      FUN_149450eba((longlong)iStack_44 * 0x68 + *local_60);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14059f004(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945489e FUN_14945489e body=131 status=ok
// SIG undefined FUN_14945489e(void)

longlong FUN_14945489e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_149454921();
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
      FUN_1468f9b6c(param_2);
    }
  }
  return param_1;
}



// FUNCTION 149454921 FUN_149454921 body=649 status=ok
// SIG undefined FUN_149454921(void)

longlong * FUN_149454921(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
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
        (**(code **)(*param_1 + 0x138))(param_1,lVar5 + (longlong)iVar8 * 0x20);
        FUN_14021219d(param_1,lVar5 + (longlong)iVar8 * 0x20 + 8);
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
    FUN_145d37f10(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_1468f9d6c(param_2,&local_90);
        puVar3 = local_88 + 1;
        *local_88 = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        *(undefined4 *)(local_88 + 3) = 0xffffffff;
        (**(code **)(*param_1 + 0x138))(param_1);
        FUN_14021219d(param_1,puVar3);
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



// FUNCTION 149454bac FUN_149454bac body=131 status=ok
// SIG undefined FUN_149454bac(void)

longlong FUN_149454bac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_149454c2f();
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
      FUN_149455360(param_2);
    }
  }
  return param_1;
}



// FUNCTION 149454c2f FUN_149454c2f body=751 status=ok
// SIG undefined FUN_149454c2f(void)

longlong * FUN_149454c2f(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xa0,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xa0);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar7 = local_80._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_84 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_84,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_84);
      }
    }
    else {
      local_84 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_78 = param_2 + 2;
    local_80 = &DAT_100000000;
    local_70 = 0xffffffff;
    local_68 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a8 = local_80;
    local_a0 = local_78;
    local_98 = local_70;
    uVar8 = local_98;
    local_90 = local_68;
    local_8c = local_64;
    local_98._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_b0 = param_2;
    if (local_98._4_4_ < (int)local_78[3]) {
      iVar9 = local_98._4_4_;
      local_98 = uVar8;
      do {
        lVar5 = *local_b0;
        lVar10 = (longlong)iVar9 * 0xa0;
        FUN_14021219d(param_1,lVar5 + lVar10);
        FUN_14021219d(param_1,lVar5 + lVar10 + 0x10);
        FUN_14945500e(param_1,lVar5 + lVar10 + 0x80);
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar9 = local_98._4_4_;
        uVar8 = local_98;
      } while (local_98._4_4_ < (int)local_a0[3]);
    }
  }
  else {
    local_80 = (undefined1 *)((ulonglong)local_80._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_80,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_80);
      }
    }
    else {
      local_80 = (undefined1 *)CONCAT44(uVar7,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_145d38092(param_2,(ulonglong)local_80 & 0xffffffff);
    uVar8 = local_98;
    if (0 < (int)local_80) {
      iVar9 = 0;
      do {
        FUN_149454f20(param_2);
        puVar6 = local_a8;
        puVar3 = local_a8 + 0x10;
        memset(local_a8,0,0x98);
        *(undefined8 *)(puVar6 + 0x4c) = 0xffffffff00000080;
        *(undefined8 *)(puVar6 + 0x70) = 0;
        *(undefined8 *)(puVar6 + 0x78) = 0;
        *(undefined8 *)(puVar6 + 0x80) = 0;
        *(undefined8 *)(puVar6 + 0x88) = 0;
        puVar6[0x90] = 0;
        *(undefined4 *)(puVar6 + 0x98) = 0xffffffff;
        FUN_14021219d(param_1,puVar6);
        FUN_14021219d(param_1,puVar3);
        FUN_14945500e(param_1,puVar6 + 0x80);
        iVar9 = iVar9 + 1;
        uVar8 = local_98;
      } while (iVar9 < (int)local_80);
    }
  }
  local_98 = uVar8;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149454f20 FUN_149454f20 body=238 status=ok
// SIG undefined FUN_149454f20(void)

int * FUN_149454f20(longlong *param_1,int *param_2)

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
      FUN_1413d87fe(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0xa0);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0xa0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xa0 + *param_1;
  return param_2;
}



// FUNCTION 14945500e FUN_14945500e body=357 status=ok
// SIG undefined FUN_14945500e(void)

longlong * FUN_14945500e(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
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
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_149450f6d(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_149455254(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1494551ad(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_149455174(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_149455214(param_2);
        FUN_1494551ad(param_1,uVar3);
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



// FUNCTION 149455174 FUN_149455174 body=57 status=ok
// SIG undefined FUN_149455174(void)

void FUN_149455174(undefined8 *param_1,int param_2)

{
  FUN_149450f6d(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_149455254(param_1,param_2);
  return;
}



// FUNCTION 1494551ad FUN_1494551ad body=102 status=ok
// SIG undefined FUN_1494551ad(void)

longlong * FUN_1494551ad(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_14021219d();
  puVar2 = (undefined4 *)(param_2 + 0x10);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 149455214 FUN_149455214 body=63 status=ok
// SIG undefined FUN_149455214(void)

longlong FUN_149455214(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1494552cc(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1494552c4(lVar2);
  return lVar2;
}



// FUNCTION 149455254 FUN_149455254 body=112 status=ok
// SIG undefined FUN_149455254(void)

void FUN_149455254(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1494552c4 FUN_1494552c4 body=7 status=ok
// SIG undefined FUN_1494552c4(void)

void FUN_1494552c4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1494552cc FUN_1494552cc body=147 status=ok
// SIG undefined FUN_1494552cc(void)

void FUN_1494552cc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149455360 FUN_149455360 body=470 status=ok
// SIG undefined FUN_149455360(void)

void FUN_149455360(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
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
      iVar10 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar11 = (longlong)iVar10 * 0xa0;
        puVar7 = &DAT_149dfb77a;
        if (*(int *)(lVar3 + 8 + lVar11) != 0) {
          puVar7 = *(undefined2 **)(lVar3 + lVar11);
        }
        iVar5 = FUN_144a1ccda(puVar7,0);
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar3 + 0x9c + lVar11) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x98 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar10 = local_70._4_4_;
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



// FUNCTION 149455538 FUN_149455538 body=131 status=ok
// SIG undefined FUN_149455538(void)

longlong FUN_149455538(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1494555bb();
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
      FUN_149455940(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1494555bb FUN_1494555bb body=673 status=ok
// SIG undefined FUN_1494555bb(void)

longlong * FUN_1494555bb(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x68,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x68);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_70._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_74 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_74,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_74);
      }
    }
    else {
      local_74 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_68 = param_2 + 2;
    local_70 = (undefined8 *)&DAT_100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_98 = local_70;
    local_90 = local_68;
    local_88 = local_60;
    uVar7 = local_88;
    local_80 = local_58;
    local_7c = local_54;
    local_88._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_a0 = param_2;
    if (local_88._4_4_ < (int)local_68[3]) {
      iVar8 = local_88._4_4_;
      local_88 = uVar7;
      do {
        lVar5 = *local_a0;
        FUN_14021219d(param_1,lVar5 + (longlong)iVar8 * 0x68);
        FUN_1490f3bd4(param_1,lVar5 + (longlong)iVar8 * 0x68 + 0x10);
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar8 = local_88._4_4_;
        uVar7 = local_88;
      } while (local_88._4_4_ < (int)local_90[3]);
    }
  }
  else {
    local_70 = (undefined8 *)((ulonglong)local_70._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_70,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_70);
      }
    }
    else {
      local_70 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_145d37d98(param_2,(ulonglong)local_70 & 0xffffffff);
    uVar7 = local_88;
    if (0 < (int)local_70) {
      iVar8 = 0;
      do {
        FUN_14945585e(param_2,&local_a0);
        puVar3 = local_98 + 2;
        local_98[6] = 0;
        local_98[7] = 0;
        local_98[8] = 0;
        local_98[9] = 0;
        local_98[10] = 0;
        local_98[0xb] = 0;
        local_98[4] = 0;
        local_98[5] = 0;
        local_98[2] = 0;
        local_98[3] = 0;
        *local_98 = 0;
        local_98[1] = 0;
        *(undefined4 *)((longlong)local_98 + 0x3c) = 0x80;
        *(undefined4 *)(local_98 + 8) = 0xffffffff;
        *(undefined4 *)(local_98 + 0xc) = 0xffffffff;
        FUN_14021219d(param_1);
        FUN_1490f3bd4(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_88;
      } while (iVar8 < (int)local_70);
    }
  }
  local_88 = uVar7;
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14945585e FUN_14945585e body=226 status=ok
// SIG undefined FUN_14945585e(void)

int * FUN_14945585e(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x68) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 149455940 FUN_149455940 body=476 status=ok
// SIG undefined FUN_149455940(void)

void FUN_149455940(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x68;
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
        *(int *)(lVar3 + 100 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x60 + lVar11) =
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



// FUNCTION 149455b1e FUN_149455b1e body=182 status=ok
// SIG undefined FUN_149455b1e(void)

void FUN_149455b1e(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cc17310;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar6 = false;
  DAT_14cc1731c = DAT_14cc1731c + 1;
  do {
    lVar5 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cc17308 + lVar5) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cc17308 + -8 + lVar5), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1), cVar3 != '\0'))) {
      lVar5 = lVar5 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cc1731c = DAT_14cc1731c + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_149455bad;
      }
    }
    uVar4 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  DAT_14cc1731c = DAT_14cc1731c + -1;
LAB_149455bad:
  FUN_14474d06a(&DAT_14cc17308,0);
  return;
}



// FUNCTION 149455bd4 FUN_149455bd4 body=31 status=ok
// SIG undefined FUN_149455bd4(void)

undefined8 FUN_149455bd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149455c10 FUN_149455c10 body=93 status=ok
// SIG undefined FUN_149455c10(void)

void FUN_149455c10(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bcd6300;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149455c6e FUN_149455c6e body=126 status=ok
// SIG undefined FUN_149455c6e(void)

void FUN_149455c6e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bcd6300;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149455cdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149455cec FUN_149455cec body=21 status=ok
// SIG undefined FUN_149455cec(void)

undefined8 FUN_149455cec(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149455d02 FUN_149455d02 body=161 status=ok
// SIG undefined FUN_149455d02(void)

longlong FUN_149455d02(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 local_a8 [64];
  longlong local_68;
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = (**(code **)(*param_1 + 0x48))();
  if (lVar1 == 0) {
    FUN_1411371f6(local_a8);
    uVar2 = FUN_145a960f0();
    local_b8 = local_a8;
    lVar1 = FUN_141137228(param_2,uVar2,0,0);
    if (local_68 != 0) {
      if (local_58 == (longlong *)0x0) {
        local_58 = local_48;
      }
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149455da4 FUN_149455da4 body=175 status=ok
// SIG undefined FUN_149455da4(void)

longlong FUN_149455da4(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  undefined1 local_70 [28];
  char local_54;
  longlong local_48;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1405f0e9c(local_78,param_2,5);
  if (local_54 == '\0') {
    do {
      lVar2 = local_48;
      if (local_48 != 0) {
        lVar1 = FUN_145a960f0();
        if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) goto LAB_149455dda;
      }
      FUN_14059e512(local_78);
    } while (local_54 != '\x01');
  }
  lVar2 = 0;
LAB_149455dda:
  if (local_20 == '\x01') {
    FUN_14024445c(local_70);
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 149455e54 FUN_149455e54 body=45 status=ok
// SIG undefined FUN_149455e54(void)

undefined8 * FUN_149455e54(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  if (*param_3 != 0) {
    FUN_145a960f0();
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 149455e82 FUN_149455e82 body=28 status=ok
// SIG undefined FUN_149455e82(void)

undefined8 FUN_149455e82(undefined8 param_1,undefined8 param_2)

{
  FUN_14945128e(param_2,param_1);
  return param_1;
}



// FUNCTION 149455ea4 FUN_149455ea4 body=78 status=ok
// SIG undefined FUN_149455ea4(void)

undefined8 FUN_149455ea4(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_149451146(param_2,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149455ef4 FUN_149455ef4 body=357 status=ok
// SIG undefined FUN_149455ef4(void)

longlong * FUN_149455ef4(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
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
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_149453162(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1494560d4(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1492e94f5(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_14945605a(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_149456094(param_2);
        FUN_1492e94f5(param_1,uVar3);
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



// FUNCTION 14945605a FUN_14945605a body=57 status=ok
// SIG undefined FUN_14945605a(void)

void FUN_14945605a(undefined8 *param_1,int param_2)

{
  FUN_149453162(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1494560d4(param_1,param_2);
  return;
}



// FUNCTION 149456094 FUN_149456094 body=63 status=ok
// SIG undefined FUN_149456094(void)

longlong FUN_149456094(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149456154(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_149456144(lVar2);
  return lVar2;
}



// FUNCTION 1494560d4 FUN_1494560d4 body=112 status=ok
// SIG undefined FUN_1494560d4(void)

void FUN_1494560d4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 149456144 FUN_149456144 body=15 status=ok
// SIG undefined FUN_149456144(void)

void FUN_149456144(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe) = 0;
  return;
}



// FUNCTION 149456154 FUN_149456154 body=147 status=ok
// SIG undefined FUN_149456154(void)

void FUN_149456154(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1494561e8 FUN_1494561e8 body=369 status=ok
// SIG undefined FUN_1494561e8(void)

longlong * FUN_1494561e8(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x88,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x88);
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
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_14945309c(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1494563d6(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x1e1e1 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1494528c7(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x88;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_14945635a(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_149456394(param_2);
        FUN_1494528c7(param_1,uVar3);
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



// FUNCTION 14945635a FUN_14945635a body=57 status=ok
// SIG undefined FUN_14945635a(void)

void FUN_14945635a(undefined8 *param_1,int param_2)

{
  FUN_14945309c(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1494563d6(param_1,param_2);
  return;
}



// FUNCTION 149456394 FUN_149456394 body=66 status=ok
// SIG undefined FUN_149456394(void)

longlong FUN_149456394(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149456476(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x88 + *param_1;
  FUN_149456449(lVar2);
  return lVar2;
}



// FUNCTION 1494563d6 FUN_1494563d6 body=115 status=ok
// SIG undefined FUN_1494563d6(void)

void FUN_1494563d6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x88,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x88)) {
      uVar2 = uVar1 / 0x88 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x88,8);
  }
  return;
}



// FUNCTION 149456449 FUN_149456449 body=45 status=ok
// SIG undefined FUN_149456449(void)

void FUN_149456449(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x46) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return;
}



// FUNCTION 149456476 FUN_149456476 body=150 status=ok
// SIG undefined FUN_149456476(void)

void FUN_149456476(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14945650e FUN_14945650e body=357 status=ok
// SIG undefined FUN_14945650e(void)

longlong * FUN_14945650e(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x48,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x48);
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
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_149453013(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1494566ee(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x38e38 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_149452a5e(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x48;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_149456674(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1494566ae(param_2);
        FUN_149452a5e(param_1,uVar3);
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



// FUNCTION 149456674 FUN_149456674 body=57 status=ok
// SIG undefined FUN_149456674(void)

void FUN_149456674(undefined8 *param_1,int param_2)

{
  FUN_149453013(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1494566ee(param_1,param_2);
  return;
}



// FUNCTION 1494566ae FUN_1494566ae body=63 status=ok
// SIG undefined FUN_1494566ae(void)

longlong FUN_1494566ae(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149456778(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x48 + *param_1;
  FUN_14945675e(lVar2);
  return lVar2;
}



// FUNCTION 1494566ee FUN_1494566ee body=112 status=ok
// SIG undefined FUN_1494566ee(void)

void FUN_1494566ee(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 14945675e FUN_14945675e body=26 status=ok
// SIG undefined FUN_14945675e(void)

void FUN_14945675e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0xf) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}



// FUNCTION 149456778 FUN_149456778 body=147 status=ok
// SIG undefined FUN_149456778(void)

void FUN_149456778(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14945680c FUN_14945680c body=411 status=ok
// SIG undefined FUN_14945680c(void)

longlong * FUN_14945680c(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_149452fb2(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_149456a1e(param_2,0);
      }
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x80000 < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar5 = 0x10;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      FUN_14021219d(param_1,lVar3 + lVar5 + -0x10);
      FUN_14945650e(param_1,lVar3 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1494569a8(param_2);
    if (0 < (int)local_3c) {
      iVar4 = 0;
      do {
        lVar5 = FUN_1494569e2(param_2);
        FUN_14021219d(param_1,lVar5);
        FUN_14945650e(param_1,lVar5 + 0x10);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1494569a8 FUN_1494569a8 body=57 status=ok
// SIG undefined FUN_1494569a8(void)

void FUN_1494569a8(undefined8 *param_1,int param_2)

{
  FUN_149452fb2(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_149456a1e(param_1,param_2);
  return;
}



// FUNCTION 1494569e2 FUN_1494569e2 body=59 status=ok
// SIG undefined FUN_1494569e2(void)

longlong FUN_1494569e2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149456a88(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_149456a7d(lVar2);
  return lVar2;
}



// FUNCTION 149456a1e FUN_149456a1e body=95 status=ok
// SIG undefined FUN_149456a1e(void)

void FUN_149456a1e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 149456a7d FUN_149456a7d body=11 status=ok
// SIG undefined FUN_149456a7d(void)

void FUN_149456a7d(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 149456a88 FUN_149456a88 body=132 status=ok
// SIG undefined FUN_149456a88(void)

void FUN_149456a88(longlong param_1,int param_2)

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



// FUNCTION 149456b0d FUN_149456b0d body=38 status=ok
// SIG undefined FUN_149456b0d(void)

void FUN_149456b0d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149452b42(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 149456b34 FUN_149456b34 body=57 status=ok
// SIG undefined FUN_149456b34(void)

void FUN_149456b34(undefined8 *param_1,int param_2)

{
  FUN_149456b0d(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_149456b6e(param_1,param_2);
  return;
}



// FUNCTION 149456b6e FUN_149456b6e body=95 status=ok
// SIG undefined FUN_149456b6e(void)

void FUN_149456b6e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 149456bce FUN_149456bce body=132 status=ok
// SIG undefined FUN_149456bce(void)

void FUN_149456bce(longlong param_1,int param_2)

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



// FUNCTION 149456c54 FUN_149456c54 body=411 status=ok
// SIG undefined FUN_149456c54(void)

longlong * FUN_149456c54(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_149456b0d(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_149456b6e(param_2,0);
      }
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x80000 < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar5 = 0x10;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      FUN_14021219d(param_1,lVar3 + lVar5 + -0x10);
      FUN_14945680c(param_1,lVar3 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_149456b34(param_2);
    if (0 < (int)local_3c) {
      iVar4 = 0;
      do {
        lVar5 = FUN_149456df0(param_2);
        FUN_14021219d(param_1,lVar5);
        FUN_14945680c(param_1,lVar5 + 0x10);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149456df0 FUN_149456df0 body=59 status=ok
// SIG undefined FUN_149456df0(void)

longlong FUN_149456df0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149456bce(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_149456e2b(lVar2);
  return lVar2;
}



// FUNCTION 149456e2b FUN_149456e2b body=11 status=ok
// SIG undefined FUN_149456e2b(void)

void FUN_149456e2b(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 149456e36 FUN_149456e36 body=261 status=ok
// SIG undefined FUN_149456e36(void)

void FUN_149456e36(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_1 + 0xc);
  puVar3 = (ulonglong *)param_2[1];
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_2c = (uint)(iVar2 != -1);
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      uVar5 = local_2c;
      if (1 < local_2c) {
        FUN_14572541c(param_2);
        uVar5 = local_2c;
      }
    }
    else {
      uVar5 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar5 == 0) goto LAB_149456eb2;
  }
  else {
    if ((uint *)puVar3[1] < puVar1) {
      local_2c = 0;
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      uVar5 = local_2c;
      if (1 < local_2c) {
        FUN_14572541c(param_2);
        uVar5 = local_2c;
      }
    }
    else {
      uVar5 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar5 == 0) {
      FUN_149452afe(param_1);
      goto LAB_149456eb2;
    }
    if (iVar2 == -1) {
      FUN_149456f3c(param_1);
    }
  }
  FUN_149456c54(param_2,param_1);
LAB_149456eb2:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149456f3c FUN_149456f3c body=47 status=ok
// SIG undefined FUN_149456f3c(void)

longlong * FUN_149456f3c(longlong *param_1)

{
  FUN_149456b0d(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 149456f7d FUN_149456f7d body=24 status=ok
// SIG undefined FUN_149456f7d(void)

bool FUN_149456f7d(void)

{
  return DAT_14cc17420 != 0 && 0 < DAT_14c765cec;
}



// FUNCTION 149456f96 FUN_149456f96 body=156 status=ok
// SIG undefined FUN_149456f96(void)

ulonglong FUN_149456f96(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            return puVar1[1];
          }
          return 0;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14945703c FUN_14945703c body=75 status=ok
// SIG undefined FUN_14945703c(void)

void FUN_14945703c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_145b15b04(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149457088 FUN_149457088 body=419 status=ok
// SIG undefined FUN_149457088(void)

void FUN_149457088(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14945722c(param_4,*(undefined4 *)(param_1 + 0x40));
  if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x60))) &&
      ((*param_3 == 0 ||
       (cVar1 = FUN_144a7ca96(param_3,*(undefined8 *)
                                       (*(longlong *)(param_1 + 0x58) + (ulonglong)param_2 * 8)),
       cVar1 != '\0')))) && (iVar2 = *(int *)(param_1 + 0x40), 0 < iVar2)) {
    uVar9 = 0;
    do {
      if (((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x70)) &&
         (*(uint *)(*(longlong *)(param_1 + 0x68) + uVar9 * 4) == param_2)) {
        plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x38) + uVar9 * 8);
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)(uVar9 * 8 + *param_4);
          lVar3 = 0;
        }
        else {
          if ((longlong)*(int *)(param_1 + 0x50) == 0) {
            uVar7 = 0;
            uVar4 = 0;
          }
          else {
            lVar3 = *(longlong *)(param_1 + 0x48);
            lVar5 = 0;
            uVar4 = 0;
            uVar7 = 0;
            do {
              if (uVar9 == *(uint *)(lVar3 + 8 + lVar5)) {
                uVar6 = 1L << (*(byte *)(lVar3 + 0xc + lVar5) & 0x3f);
                if (*(char *)(lVar3 + 0x10 + lVar5) == '\x01') {
                  uVar4 = uVar4 | uVar6;
                }
                else {
                  uVar7 = uVar7 | uVar6;
                }
              }
              lVar5 = lVar5 + 0x38;
            } while ((longlong)*(int *)(param_1 + 0x50) * 0x38 - lVar5 != 0);
          }
          local_50 = *param_3;
          if ((local_50 != 0 & DAT_14c950c29) == 1) {
            FUN_14689c22e();
          }
          lVar3 = (**(code **)(*plVar8 + 0x310))(plVar8,&local_50,uVar4,uVar7);
          plVar8 = (longlong *)(uVar9 * 8 + *param_4);
          if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
            FUN_14689c22e(lVar3);
          }
        }
        *plVar8 = lVar3;
        iVar2 = *(int *)(param_1 + 0x40);
      }
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < (longlong)iVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14945722c FUN_14945722c body=118 status=ok
// SIG undefined FUN_14945722c(void)

void FUN_14945722c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14945b792(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14945b818(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1494572a4 FUN_1494572a4 body=230 status=ok
// SIG undefined FUN_1494572a4(void)

void FUN_1494572a4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_14945738c(param_1,local_1c,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14945738c FUN_14945738c body=118 status=ok
// SIG undefined FUN_14945738c(void)

void FUN_14945738c(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_3);
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_149457088(*(longlong *)(param_1 + 0x110),param_2,&local_20,param_1 + 0x118);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149457460 FUN_149457460 body=26 status=ok
// SIG undefined FUN_149457460(void)

void FUN_149457460(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  if (param_2 == 0) {
    return;
  }
  FUN_149457088(param_2,param_3,param_4,param_1);
  return;
}



// FUNCTION 14945747a FUN_14945747a body=43 status=ok
// SIG undefined FUN_14945747a(void)

void FUN_14945747a(longlong param_1)

{
  FUN_144a7e84a();
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1448c6f34(param_1);
    return;
  }
  return;
}



// FUNCTION 1494574a6 FUN_1494574a6 body=154 status=ok
// SIG undefined FUN_1494574a6(void)

void FUN_1494574a6(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144b20ec4();
  uVar2 = DAT_14cad3ba0;
  local_48 = 0;
  uStack_40 = 0;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x18);
  uVar3 = FUN_144b20ea4(param_1);
  local_50 = 0;
  local_68 = uVar1;
  local_60 = &local_48;
  local_58 = param_1;
  FUN_144522064(param_1 + 0x118,*(undefined8 *)(param_1 + 0x110),uVar3,uVar2);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149457542 FUN_149457542 body=37 status=ok
// SIG undefined FUN_149457542(void)

void FUN_149457542(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_14342d3f6();
  uVar1 = FUN_144b20ea4(param_1);
  FUN_144521b5a(uVar1,param_1);
  return;
}



// FUNCTION 149457568 FUN_149457568 body=287 status=ok
// SIG undefined FUN_149457568(void)

void FUN_149457568(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,longlong *param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (uint)((ulonglong)param_2 >> 0x10);
  uVar4 = (uint)param_2 & 0xffff;
  local_48 = param_2;
  uVar2 = FUN_14945ba84(param_1 + 8,
                        (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
                        (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4));
  puVar3 = (undefined8 *)FUN_149457688(uVar2);
  *puVar3 = param_3;
  puVar3[1] = param_8;
  *(undefined1 *)(puVar3 + 2) = param_4;
  puVar3[3] = param_5;
  if (puVar3 + 4 != param_6) {
    if (puVar3[4] != 0) {
      FUN_1400020a8();
    }
    puVar3[4] = *param_6;
    *param_6 = 0;
    *(int *)(puVar3 + 5) = (int)param_6[1];
    *(undefined4 *)((longlong)puVar3 + 0x2c) = *(undefined4 *)((longlong)param_6 + 0xc);
    param_6[1] = 0;
  }
  FUN_14009d848(puVar3 + 6,param_7);
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_7);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149457688 FUN_149457688 body=59 status=ok
// SIG undefined FUN_149457688(void)

longlong FUN_149457688(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14945c058(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_14945c03d(lVar2);
  return lVar2;
}



// FUNCTION 1494576c4 FUN_1494576c4 body=534 status=ok
// SIG undefined FUN_1494576c4(void)

void FUN_1494576c4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar4 = (longlong *)(param_1 + 8);
  local_a0 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = local_a0;
  if (*(int *)(param_1 + 0x30) == 0) {
    local_a4 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    local_a4 = *(int *)(param_1 + 0x30);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_98 = param_1;
  local_90 = plVar4;
  if ((iStack_54 != local_a4) || (uStack_60 != local_a0)) {
    do {
      iVar9 = *(int *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20);
      uVar5 = (ulonglong)iVar9;
      if (0 < (longlong)uVar5) {
        lVar8 = *local_90 + (longlong)iStack_74 * 0x20;
        iVar9 = -iVar9;
        lVar7 = uVar5 << 6;
        do {
          lVar6 = lVar7 + -0x40;
          lVar1 = *(longlong *)(lVar8 + 8);
          if (*(longlong *)(lVar1 + 8 + lVar6) == param_2) {
            FUN_14945a90e((void *)(lVar1 + lVar6),1);
            uVar3 = *(uint *)(lVar8 + 0x10);
            if (uVar5 != uVar3) {
              memmove((void *)(lVar1 + lVar6),(void *)(lVar7 + lVar1),
                      (longlong)(int)(uVar3 + iVar9) << 6);
              uVar3 = *(uint *)(lVar8 + 0x10);
            }
            *(uint *)(lVar8 + 0x10) = uVar3 - 1;
          }
          iVar9 = iVar9 + 1;
          bVar2 = 1 < uVar5;
          uVar5 = uVar5 - 1;
          lVar7 = lVar6;
        } while (bVar2);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar4 ||
             (CONCAT44(uStack_7c,uStack_80) != local_a0 || iStack_74 != local_a4));
  }
  uVar5 = (ulonglong)*(int *)(local_98 + 0xb0);
  if (0 < (longlong)uVar5) {
    plVar4 = (longlong *)(local_98 + 0xa8);
    lVar8 = uVar5 * 0x60 + -0x50;
    do {
      if (*(longlong *)(*plVar4 + lVar8) == param_2) {
        FUN_14945c0de(plVar4,(int)uVar5 + -1);
        FUN_14945c152(plVar4);
      }
      lVar8 = lVar8 + -0x60;
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494578dc FUN_1494578dc body=94 status=ok
// SIG undefined FUN_1494578dc(void)

void FUN_1494578dc(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14945c316(param_1,iVar1);
    }
    FUN_14945c39b((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14945793c FUN_14945793c body=94 status=ok
// SIG undefined FUN_14945793c(void)

void FUN_14945793c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14945c290(param_1,iVar1);
    }
    FUN_14945c3ae((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14945799c FUN_14945799c body=282 status=ok
// SIG undefined FUN_14945799c(void)

undefined8 * FUN_14945799c(longlong param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  void *_Dst;
  ulonglong _Size;
  undefined8 *puVar6;
  
  iVar2 = *(int *)(param_3 + 0x3c);
  plVar1 = (longlong *)(param_1 + 0x70);
  _Size = (ulonglong)(uint)(iVar2 * param_4);
  _Dst = (void *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  uVar4 = (longlong)_Dst + _Size;
  if (*(ulonglong *)(param_1 + 0x78) < uVar4) {
    FUN_140023dd8(plVar1);
    _Dst = (void *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    uVar4 = (longlong)_Dst + _Size;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar4;
  memset(_Dst,0,_Size);
  *param_2 = _Dst;
  *(int *)(param_2 + 1) = iVar2;
  *(int *)((longlong)param_2 + 0xc) = param_4;
  uVar3 = *(undefined8 *)(param_3 + 0x48);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar5 = puVar6 + 4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0x30);
    puVar6 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar5 = puVar6 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  *puVar6 = &PTR_FUN_14bcdcec0;
  puVar6[1] = *param_2;
  *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)puVar6 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar6[3] = uVar3;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar6;
  return param_2;
}



// FUNCTION 149457ab6 FUN_149457ab6 body=290 status=ok
// SIG undefined FUN_149457ab6(void)

longlong * FUN_149457ab6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149457bda FUN_149457bda body=103 status=ok
// SIG undefined FUN_149457bda(void)

void FUN_149457bda(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar4);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_1449db362(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149457c42 FUN_149457c42 body=86 status=ok
// SIG undefined FUN_149457c42(void)

void FUN_149457c42(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14003821a(lVar1);
    FUN_1400020a8(lVar1);
    *param_1 = 0;
  }
  if (param_1[4] != 0) {
    plVar2 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[6];
    }
                    /* WARNING: Could not recover jumptable at 0x000149457c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    return;
  }
  return;
}



// FUNCTION 149457ca6 FUN_149457ca6 body=74 status=ok
// SIG undefined FUN_149457ca6(void)

int FUN_149457ca6(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar1 = FUN_1412a630a(param_1,param_3,param_2);
  iVar4 = 0;
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *param_1, pbVar3 = (byte *)(lVar2 + 0x10),
     pbVar3 != (byte *)0x0 && lVar2 != 0)) {
    iVar4 = param_4 << (*pbVar3 & 0x1f);
  }
  return iVar4;
}



// FUNCTION 149457cf0 FUN_149457cf0 body=42 status=ok
// SIG undefined FUN_149457cf0(void)

void FUN_149457cf0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149457d26 FUN_149457d26 body=85 status=ok
// SIG undefined FUN_149457d26(void)

undefined8 FUN_149457d26(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  FUN_147440c52(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(*(longlong *)(param_1 + 8) + 8),1);
  return uVar1;
}



// FUNCTION 149457d7c FUN_149457d7c body=52 status=ok
// SIG undefined FUN_149457d7c(void)

void FUN_149457d7c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149457db0 FUN_149457db0 body=213 status=ok
// SIG undefined FUN_149457db0(void)

undefined8 FUN_149457db0(int *param_1,int *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 (*pauVar7) [16];
  
  if ((*(longlong *)(param_1 + 2) == *(longlong *)(param_2 + 2)) && (*param_1 == *param_2)) {
    uVar1 = param_1[6];
    uVar5 = (ulonglong)uVar1;
    if (uVar1 == param_2[6]) {
      if (param_1[9] != param_2[9]) {
        return 0;
      }
      if (param_1[8] != param_2[8]) {
        return 0;
      }
      if ((int)uVar1 < 1) {
        return 1;
      }
      uVar2 = *(ulonglong *)(param_1 + 4);
      uVar6 = *(ulonglong *)(param_2 + 4);
      uVar3 = ((longlong)uVar6 >> 0x18) + (longlong)(param_2 + 4);
      if ((uVar6 & 1) == 0) {
        uVar3 = uVar6;
      }
      uVar6 = ((longlong)uVar2 >> 0x18) + (longlong)(param_1 + 4);
      if ((uVar2 & 1) == 0) {
        uVar6 = uVar2;
      }
      pauVar4 = (undefined1 (*) [16])(uVar3 + 0xc);
      pauVar7 = (undefined1 (*) [16])(uVar6 + 0xc);
      while (((*(longlong *)(pauVar7[-1] + 4) == *(longlong *)(pauVar4[-1] + 4) &&
              (*(int *)(pauVar7[-1] + 0xc) == *(int *)(pauVar4[-1] + 0xc))) &&
             (*(int *)pauVar4[1] == *(int *)pauVar7[1] && *pauVar4 == *pauVar7))) {
        pauVar4 = pauVar4 + 2;
        pauVar7 = pauVar7 + 2;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 149457eb0 FUN_149457eb0 body=56 status=ok
// SIG undefined FUN_149457eb0(void)

void FUN_149457eb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1 + 2);
  }
  param_1[4] = 0xfefefefefefefefe;
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 149457eec FUN_149457eec body=65 status=ok
// SIG undefined FUN_149457eec(void)

void FUN_149457eec(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0x80);
    FUN_144a886ae((longlong)param_1 + 0x60);
    FUN_14743d4c0(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xa0);
  return;
}



// FUNCTION 149457f4a FUN_149457f4a body=62 status=ok
// SIG undefined FUN_149457f4a(void)

void FUN_149457f4a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149457f88 FUN_149457f88 body=225 status=ok
// SIG undefined FUN_149457f88(void)

void FUN_149457f88(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_78 [36];
  undefined2 local_54 [2];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)FUN_1474328f2();
  plVar4 = (longlong *)*plVar4;
  if (plVar4 != (longlong *)0x0) {
    do {
      lVar2 = plVar4[2];
      if ((lVar2 != 0) && (*(int *)(lVar2 + 8) == 5)) {
        local_54[0] = (undefined2)param_2;
        local_50 = 0x100000000;
        cVar3 = FUN_144a21736(lVar2,local_54);
        if (cVar3 != '\0') {
          cVar3 = (**(code **)(*param_1 + 8))(param_1,param_2,lVar2);
          if (cVar3 != '\0') {
            iVar1 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
              FUN_14178e7bc(param_3,iVar1);
            }
            *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
          }
        }
      }
      plVar4 = (longlong *)*plVar4;
    } while (plVar4 != (longlong *)0x0);
  }
  FUN_147427785(*param_3,(int)param_3[1]);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494580a6 FUN_1494580a6 body=294 status=ok
// SIG undefined FUN_1494580a6(void)

undefined8 * FUN_1494580a6(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  longlong local_48 [2];
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_38 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_30 = param_2;
  FUN_145929ff4(local_48,L"Dummy");
  lVar3 = FUN_140b494da(local_48,0,L"Dummy");
  *param_1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x50) + 0x28);
  iVar2 = *(int *)(param_1 + 2);
  *(uint *)(param_1 + 2) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x14) < iVar2 + 1U) {
    FUN_1457752be(plVar1,iVar2);
  }
  *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar3;
  lVar3 = (longlong)(int)(uint)uStack_50;
  if (lVar3 != 0) {
    iVar2 = *(int *)(param_1 + 2);
    *(uint *)(param_1 + 2) = iVar2 + (uint)uStack_50;
    if ((uint)(*(int *)((longlong)param_1 + 0x14) - iVar2) < (uint)uStack_50) {
      FUN_1457752be(plVar1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 8 + *plVar1),local_58,lVar3 << 3);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494581ce FUN_1494581ce body=97 status=ok
// SIG undefined FUN_1494581ce(void)

void FUN_1494581ce(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(lVar3 + lVar4);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    lVar3 = *(longlong *)(param_1 + 8);
  }
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
    return;
  }
  return;
}



// FUNCTION 149458240 FUN_149458240 body=225 status=ok
// SIG undefined FUN_149458240(void)

undefined8 FUN_149458240(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_78 [40];
  undefined2 local_50 [2];
  longlong local_4c;
  undefined1 local_44;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 == 0) {
    uVar10 = 0;
    goto LAB_1494582f8;
  }
  local_44 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50[0] = 4;
  lVar7 = param_2[1];
  local_4c = param_1;
  if ((longlong)(int)lVar7 == 0) {
LAB_1494582e7:
    uVar10 = 0;
  }
  else {
    lVar3 = *param_2;
    lVar12 = 0;
    do {
      uVar8 = uStack_38;
      lVar11 = (longlong)(int)uStack_38;
      uVar9 = (int)uStack_38 + 1;
      uStack_38 = CONCAT44(uStack_38._4_4_,uVar9);
      if (uStack_38._4_4_ < uVar9) {
        FUN_1460379cc(&local_40,uVar8 & 0xffffffff);
      }
      puVar1 = (undefined4 *)(lVar3 + lVar12);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(local_40 + lVar11 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      lVar12 = lVar12 + 0x10;
    } while ((longlong)(int)lVar7 * 0x10 != lVar12);
    if ((int)uStack_38 == 0) goto LAB_1494582e7;
    uVar10 = FUN_1410a7212(local_50);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
LAB_1494582f8:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149458322 FUN_149458322 body=416 status=ok
// SIG undefined FUN_149458322(void)

longlong * FUN_149458322(char *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char *pcVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  switch(*param_1) {
  case '\0':
    pcVar2 = "bool";
    break;
  case '\x01':
    pcVar2 = "int";
    break;
  case '\x02':
    pcVar2 = "uint";
    break;
  case '\x03':
    pcVar2 = "float";
    break;
  case '\x04':
    plVar1 = (longlong *)(param_1 + 4);
    if (*param_3 != 0) {
      plVar1 = param_3;
    }
    FUN_1400021e4(plVar1,&local_30);
    goto LAB_1494583ab;
  default:
    goto switchD_14945835f_default;
  }
  FUN_1400b22c2(&local_30,pcVar2);
LAB_1494583ab:
  if (&local_30 == param_2) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_30;
    local_30 = 0;
    *(undefined4 *)(param_2 + 1) = local_28;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  }
  if (*param_1 != '\x04') {
switchD_14945835f_default:
    if (param_1[1] == '\x02') {
      FUN_1407c8b48(param_2,L"%dx%d",param_1[2],param_1[3]);
    }
    else if (param_1[1] == '\x01') {
      FUN_1407c8b48(param_2,&DAT_149e063bc,param_1[2]);
    }
  }
  if (param_1[0xc] == '\x01') {
    if ((int)param_2[1] == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    FUN_140002266(&local_30,L"StructuredBuffer<%s>",puVar3);
    if (&local_30 == param_2) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_30;
      *(undefined4 *)(param_2 + 1) = local_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494584c4 FUN_1494584c4 body=2262 status=ok
// SIG undefined FUN_1494584c4(void)

/* WARNING: Removing unreachable block (ram,0x000149458a0d) */
/* WARNING: Removing unreachable block (ram,0x000149458ba3) */

undefined8 * FUN_1494584c4(char *param_1,undefined8 *param_2,longlong *param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *_Src;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  uint local_100;
  undefined2 *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined2 *local_e0;
  int local_d8;
  undefined2 *local_d0;
  undefined8 local_c8;
  undefined2 *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined5 local_68;
  undefined3 uStack_63;
  undefined4 uStack_60;
  int iStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*param_1 != '\x04') {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
  }
  pcVar10 = param_1;
  if (param_1[0xc] == '\x01') {
    uStack_60 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 5) >> 0x18);
    iStack_5c._0_1_ = (undefined1)((ulonglong)*(undefined8 *)(param_1 + 5) >> 0x38);
    local_68 = (undefined5)*(undefined8 *)param_1;
    uStack_63 = (undefined3)((ulonglong)*(undefined8 *)param_1 >> 0x28);
    local_58 = (void *)0x0;
    local_50 = *(int *)(param_1 + 0x18);
    lVar18 = (longlong)local_50;
    _Src = *(void **)(param_1 + 0x10);
    if (lVar18 == 0) {
      local_4c = 0;
    }
    else {
      FUN_14945aff2(&local_58,local_50,0);
      memcpy(local_58,_Src,lVar18 << 4);
    }
    iStack_5c = (uint)iStack_5c._1_3_ << 8;
    pcVar10 = (char *)FUN_1410a7212(&local_68);
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1494580a6(&local_68,pcVar10);
  lVar18 = CONCAT35(uStack_63,local_68);
  iVar9 = *(int *)(lVar18 + 0x58);
  if (iVar9 != *(int *)(param_1 + 0x18)) {
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_149458742;
  }
  local_78 = 0;
  uStack_70 = 0;
  if (iVar9 < 0) {
LAB_149458d8c:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  local_e8 = param_3;
  if (iVar9 == 0) {
LAB_1494587b5:
    uStack_80 = 0;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
  }
  else {
    FUN_14481578e(&local_78);
    iVar9 = *(int *)(lVar18 + 0x58);
    local_88 = 0;
    uStack_80 = 0;
    if (iVar9 < 0) goto LAB_149458d8c;
    if (iVar9 == 0) goto LAB_1494587b5;
    FUN_14481578e(&local_88);
    uVar13 = (ulonglong)*(uint *)(lVar18 + 0x58);
    if (0 < (int)*(uint *)(lVar18 + 0x58)) {
      lVar19 = 0x14;
      lVar20 = 0;
      do {
        uVar7 = uStack_80;
        lVar20 = lVar20 + 1;
        if (lVar20 < (int)uVar13) {
          lVar17 = *(longlong *)(lVar18 + 0x50);
          iVar9 = *(int *)(lVar17 + 0x30 + lVar19);
        }
        else {
          iVar9 = *(int *)(CONCAT35(uStack_63,local_68) + 0x3c);
          lVar17 = *(longlong *)(lVar18 + 0x50);
        }
        iVar2 = *(int *)(lVar17 + lVar19);
        iVar6 = (int)uStack_80;
        uVar8 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar8);
        if (uStack_80._4_4_ < uVar8) {
          FUN_1446f48e2(&local_88,uVar7 & 0xffffffff);
        }
        uVar13 = uStack_70;
        *(int *)(local_88 + (longlong)iVar6 * 4) = iVar9 - iVar2;
        uVar3 = *(undefined4 *)(*(longlong *)(lVar18 + 0x50) + lVar19);
        lVar17 = (longlong)(int)uStack_70;
        uVar8 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
        if (uStack_70._4_4_ < uVar8) {
          FUN_1446f48e2(&local_78,uVar13 & 0xffffffff);
        }
        *(undefined4 *)(local_78 + lVar17 * 4) = uVar3;
        uVar13 = (ulonglong)*(int *)(lVar18 + 0x58);
        lVar19 = lVar19 + 0x30;
      } while (lVar20 < (longlong)uVar13);
    }
    local_98 = 0;
    uStack_90 = 0;
    if ((int)uVar13 < 0) goto LAB_149458d94;
    if ((int)uVar13 != 0) {
      FUN_14481578e(&local_98);
    }
  }
  uVar13 = (ulonglong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar19 = 8;
    lVar18 = 0;
    do {
      iVar9 = 8;
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar19) + 0xc) == '\0') {
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar19) + 0x18) < 1) {
          iVar9 = FUN_145cc73c0();
        }
        else {
          iVar9 = *(int *)(local_88 + lVar18 * 4);
        }
      }
      uVar13 = uStack_90;
      piVar1 = (int *)(local_78 + lVar18 * 4);
      *piVar1 = *piVar1 + iVar9;
      iVar2 = *(int *)(local_88 + lVar18 * 4);
      lVar20 = (longlong)(int)uStack_90;
      uVar8 = (int)uStack_90 + 1;
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
      if (uStack_90._4_4_ < uVar8) {
        FUN_1446f48e2(&local_98,uVar13 & 0xffffffff);
      }
      *(int *)(local_98 + lVar20 * 4) = iVar2 - iVar9;
      lVar18 = lVar18 + 1;
      uVar13 = (ulonglong)*(int *)(param_1 + 0x18);
      lVar19 = lVar19 + 0x10;
    } while (lVar18 < (longlong)uVar13);
  }
  plVar5 = local_e8;
  local_a8 = 0;
  uStack_a0 = 0;
  if ((int)uVar13 < 0) {
LAB_149458d94:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar13 & 0xffffffff);
  }
  if (((int)uVar13 != 0) && (FUN_1408be2c4(&local_a8), 0 < *(int *)(param_1 + 0x18))) {
    local_f0 = plVar5 + 7;
    local_f8 = (undefined2 *)&DAT_14bcdb44c;
    if (param_4 == '\0') {
      local_f8 = &DAT_149dfb77a;
    }
    lVar18 = 0;
    do {
      local_b0 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8 + lVar18 * 0x10) + 4)
      ;
      if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
        uVar8 = (uint)((ulonglong)local_b0 >> 0x10);
        uVar12 = (uint)local_b0 & 0xffff;
        plVar11 = (longlong *)plVar5[8];
        if ((longlong *)plVar5[8] == (longlong *)0x0) {
          plVar11 = local_f0;
        }
        iVar9 = *(int *)((longlong)plVar11 +
                        (ulonglong)
                        ((int)plVar5[9] - 1U &
                        (int)((ulonglong)local_b0 >> 0x20) + ((uint)local_b0 << 0x10 | uVar12) +
                        (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar12 >> 4)) * 4);
        if (iVar9 != -1) {
          do {
            plVar11 = (longlong *)(*plVar5 + (longlong)iVar9 * 0x18);
            if (*plVar11 == local_b0) {
              if (plVar11 + 1 != (longlong *)0x0 && plVar11 != (longlong *)0x0) {
                local_b0 = plVar11[1];
              }
              break;
            }
            iVar9 = (int)plVar11[2];
          } while (iVar9 != -1);
        }
      }
      lVar19 = *(longlong *)(param_1 + 0x10) + lVar18 * 0x10;
      FUN_1400021e4(lVar19,&local_d0);
      puVar15 = &DAT_149dfb77a;
      if ((int)local_c8 != 0) {
        puVar15 = local_d0;
      }
      FUN_149458322(*(undefined8 *)(lVar19 + 8),&local_e0,&local_b0);
      puVar16 = &DAT_149dfb77a;
      if (local_d8 != 0) {
        puVar16 = local_e0;
      }
      FUN_140002266(&local_c0,L"    %s %s;\n",puVar16,puVar15);
      uVar13 = uStack_a0;
      lVar20 = (longlong)(int)uStack_a0;
      uVar8 = (int)uStack_a0 + 1;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar8);
      if (uStack_a0._4_4_ < uVar8) {
        FUN_1447a1bd6(&local_a8,uVar13 & 0xffffffff);
      }
      lVar20 = lVar20 * 0x10;
      *(undefined8 *)(local_a8 + lVar20) = 0;
      *(undefined2 **)(local_a8 + lVar20) = local_c0;
      *(int *)(local_a8 + 8 + lVar20) = (int)local_b8;
      *(undefined4 *)(local_a8 + 0xc + lVar20) = local_b8._4_4_;
      local_b8 = 0;
      local_c0 = (undefined2 *)0x0;
      if (local_e0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_d0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = *(uint *)(local_98 + lVar18 * 4);
      if ((uVar8 & 3) == 0 && 0 < (int)uVar8) {
        FUN_140056680(&local_c0,local_f8);
        if (uVar8 == 4) {
          uVar3 = *(undefined4 *)(local_78 + lVar18 * 4);
          FUN_1400021e4(lVar19,&local_e0);
          puVar15 = &DAT_149dfb77a;
          if (local_d8 != 0) {
            puVar15 = local_e0;
          }
          puVar16 = &DAT_149dfb77a;
          if ((int)local_b8 != 0) {
            puVar16 = local_c0;
          }
          pwVar14 = L"    %sfloat Padding_%s_%d;\n";
          local_108 = uVar3;
        }
        else {
          uVar3 = *(undefined4 *)(local_78 + lVar18 * 4);
          FUN_1400021e4(lVar19,&local_e0);
          puVar15 = &DAT_149dfb77a;
          if (local_d8 != 0) {
            puVar15 = local_e0;
          }
          puVar16 = &DAT_149dfb77a;
          if ((int)local_b8 != 0) {
            puVar16 = local_c0;
          }
          local_100 = uVar8 >> 2;
          pwVar14 = L"    %sfloat Padding_%s_%d[%d];\n";
          local_108 = uVar3;
        }
        FUN_140002266(&local_d0,pwVar14,puVar16,puVar15);
        uVar13 = uStack_a0;
        lVar19 = (longlong)(int)uStack_a0;
        uVar8 = (int)uStack_a0 + 1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar8);
        if (uStack_a0._4_4_ < uVar8) {
          FUN_1447a1bd6(&local_a8,uVar13 & 0xffffffff);
        }
        lVar19 = lVar19 * 0x10;
        *(undefined8 *)(local_a8 + lVar19) = 0;
        *(undefined2 **)(local_a8 + lVar19) = local_d0;
        *(int *)(local_a8 + 8 + lVar19) = (int)local_c8;
        *(undefined4 *)(local_a8 + 0xc + lVar19) = local_c8._4_4_;
        local_c8 = 0;
        local_d0 = (undefined2 *)0x0;
        if (local_e0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_c0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(param_1 + 0x18));
  }
  local_e0 = *(undefined2 **)(param_1 + 4);
  if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
    uVar8 = (uint)((ulonglong)local_e0 >> 0x10);
    uVar12 = (uint)local_e0 & 0xffff;
    plVar11 = plVar5 + 7;
    if ((longlong *)plVar5[8] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar5[8];
    }
    iVar9 = *(int *)((longlong)plVar11 +
                    (ulonglong)
                    ((int)plVar5[9] - 1U &
                    (int)((ulonglong)local_e0 >> 0x20) + ((uint)local_e0 << 0x10 | uVar12) +
                    (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar12 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        puVar4 = (undefined8 *)(*plVar5 + (longlong)iVar9 * 0x18);
        if ((undefined2 *)*puVar4 == local_e0) {
          if (puVar4 + 1 != (undefined8 *)0x0 && puVar4 != (undefined8 *)0x0) {
            local_e0 = (undefined2 *)puVar4[1];
          }
          break;
        }
        iVar9 = *(int *)(puVar4 + 2);
      } while (iVar9 != -1);
    }
  }
  FUN_144a8b2a0(&local_c0,&local_a8,&DAT_149dfb77a);
  puVar15 = &DAT_149dfb77a;
  if ((int)local_b8 != 0) {
    puVar15 = local_c0;
  }
  FUN_1400021e4(&local_e0,&local_d0);
  puVar16 = &DAT_149dfb77a;
  if ((int)local_c8 != 0) {
    puVar16 = local_d0;
  }
  FUN_140002266(param_2,L"struct %s {\n%s}",puVar16,puVar15);
  if (local_d0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_c0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
LAB_149458742:
  lVar18 = CONCAT44(iStack_5c,uStack_60);
  lVar19 = (longlong)(int)local_58;
  if (lVar19 != 0) {
    lVar20 = 0;
    do {
      puVar4 = *(undefined8 **)(lVar18 + lVar20);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      lVar20 = lVar20 + 8;
    } while (lVar19 * 8 != lVar20);
    lVar18 = CONCAT44(iStack_5c,uStack_60);
  }
  if (lVar18 != 0) {
    FUN_1400020a8(lVar18);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149458d9c FUN_149458d9c body=193 status=ok
// SIG undefined FUN_149458d9c(void)

undefined8 * FUN_149458d9c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14945d454(param_2,4);
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_14452430a(&local_98,param_1,param_2);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149458e5e FUN_149458e5e body=366 status=ok
// SIG undefined FUN_149458e5e(void)

undefined8 FUN_149458e5e(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  ulonglong uStack_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48[0] = 0;
  local_48[1] = 0;
  if ((ulonglong)*param_1 < 4) {
    FUN_14020fad6(local_48,(&PTR_u_false_14bcdd0c0)[*param_1]);
  }
  bVar1 = param_1[1];
  if (bVar1 == 2) {
    uVar3 = (uint)param_1[3] * (uint)param_1[2];
  }
  else if (bVar1 == 1) {
    uVar3 = (uint)param_1[2];
  }
  else {
    uVar3 = 0;
    if (bVar1 == 0) {
      uVar3 = 1;
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_145cc3fd0(&local_58,local_48,uVar3);
  FUN_144a8b2a0(&local_68,&local_58,&DAT_149e19f34);
  puVar2 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar2 = local_68;
  }
  local_80 = 0;
  FUN_149458322(param_1,&local_78);
  puVar4 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar4 = local_78;
  }
  FUN_140002266(param_2,L"%s(%s)",puVar4,puVar2);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149458fce FUN_149458fce body=339 status=ok
// SIG undefined FUN_149458fce(void)

void FUN_149458fce(longlong *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  byte bVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  bVar3 = *(byte *)((longlong)param_1 + 0x2a);
  if (bVar3 == 3) {
    FUN_1400020e8(&local_38,&DAT_14a39522a);
    bVar3 = *(byte *)((longlong)param_1 + 0x2a);
  }
  if ((bVar3 & 0xfe) == 2) {
    puVar2 = (undefined1 *)0x0;
    lVar4 = 0;
    do {
      if ((&DAT_14cc1ab20)[lVar4] == *(char *)((longlong)param_1 + 0x2b)) {
        puVar2 = &DAT_14cc1ab20 + lVar4;
        break;
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != 0xa8);
    if (*(int *)(puVar2 + 0x10) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = *(undefined2 **)(puVar2 + 8);
    }
    FUN_1407c8b48(&local_38,&DAT_14bcdb4f6,puVar5);
  }
  local_50 = 0;
  FUN_149458322(param_1[4],&local_48);
  iVar1 = local_40 + -1;
  if (local_40 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_38,local_48,iVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((bVar3 & 0xfe) == 2) {
    FUN_140002184(&local_38,0x3e);
  }
  if (&local_38 == param_1) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_38;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_30._4_4_;
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149459122 FUN_149459122 body=57 status=ok
// SIG undefined FUN_149459122(void)

undefined8 FUN_149459122(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1,*param_2,iVar1);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14945915c FUN_14945915c body=168 status=ok
// SIG undefined FUN_14945915c(void)

longlong FUN_14945915c(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  undefined5 uStack_40;
  undefined3 local_3b;
  undefined5 uStack_38;
  undefined3 uStack_33;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_30 = 0;
  local_58[2] = 0;
  uStack_40 = 0;
  local_3b = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  uStack_38 = (undefined5)param_2;
  uStack_33 = (undefined3)((ulonglong)param_2 >> 0x28);
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  uStack_2c = param_3;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14945d6f6((longlong *)(param_1 + 0x10),iVar1);
  }
  FUN_14945b490((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x10),local_58);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149459206 FUN_149459206 body=237 status=ok
// SIG undefined FUN_149459206(void)

longlong FUN_149459206(longlong param_1,undefined4 param_2,int param_3,int param_4,
                      undefined1 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  local_58[2] = 0;
  uStack_40 = 0;
  local_3c = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_2c = param_5;
  if (param_4 < 1 || param_3 < 1) {
    if (param_3 < 1) {
      uVar2 = FUN_1457dd0f4(param_2);
    }
    else {
      uVar2 = FUN_1413622f8(param_2,param_3);
    }
  }
  else {
    uVar2 = FUN_1457dd274(param_2,param_3,param_4);
  }
  uStack_38 = (undefined4)uVar2;
  uStack_34 = (undefined4)((ulonglong)uVar2 >> 0x20);
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14945d6f6((longlong *)(param_1 + 0x10),iVar1);
  }
  FUN_14945b490((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x10),local_58);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494592f4 FUN_1494592f4 body=196 status=ok
// SIG undefined FUN_1494592f4(void)

longlong FUN_1494592f4(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x20) = 1;
  FUN_14945915c(param_1,param_2,0);
  lVar12 = (longlong)*(int *)(param_1 + 0x18);
  if (1 < lVar12) {
    uVar13 = lVar12 + 1;
    lVar12 = lVar12 * 0x30;
    do {
      lVar12 = lVar12 + -0x30;
      lVar4 = *(longlong *)(param_1 + 0x10);
      uVar5 = *(undefined8 *)(lVar4 + lVar12);
      uVar6 = ((undefined8 *)(lVar4 + lVar12))[1];
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar12);
      local_38 = *puVar1;
      uStack_30 = puVar1[1];
      puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar12);
      local_28 = *puVar1;
      uStack_20 = puVar1[1];
      puVar1 = (undefined8 *)(lVar4 + -0x30 + lVar12);
      uVar7 = puVar1[1];
      puVar2 = (undefined8 *)(lVar4 + -0x20 + lVar12);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + -0x10 + lVar12);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      *(undefined8 *)(lVar4 + lVar12) = *puVar1;
      ((undefined8 *)(lVar4 + lVar12))[1] = uVar7;
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar12);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar12);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar3 = (undefined4 *)(lVar4 + -0x30 + lVar12);
      *puVar3 = (undefined4)local_48;
      puVar3[1] = local_48._4_4_;
      puVar3[2] = (undefined4)uStack_40;
      puVar3[3] = uStack_40._4_4_;
      puVar1 = (undefined8 *)(lVar4 + -0x20 + lVar12);
      *puVar1 = local_38;
      puVar1[1] = uStack_30;
      puVar1 = (undefined8 *)(lVar4 + -0x10 + lVar12);
      *puVar1 = local_28;
      puVar1[1] = uStack_20;
      uVar13 = uVar13 - 1;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while (2 < uVar13);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494593ba FUN_1494593ba body=198 status=ok
// SIG undefined FUN_1494593ba(void)

longlong FUN_1494593ba(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x20) = 1;
  local_58 = 0;
  FUN_149459206();
  lVar12 = (longlong)*(int *)(param_1 + 0x18);
  if (1 < lVar12) {
    uVar13 = lVar12 + 1;
    lVar12 = lVar12 * 0x30;
    do {
      lVar12 = lVar12 + -0x30;
      lVar4 = *(longlong *)(param_1 + 0x10);
      uVar5 = *(undefined8 *)(lVar4 + lVar12);
      uVar6 = ((undefined8 *)(lVar4 + lVar12))[1];
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar12);
      local_38 = *puVar1;
      uStack_30 = puVar1[1];
      puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar12);
      local_28 = *puVar1;
      uStack_20 = puVar1[1];
      puVar1 = (undefined8 *)(lVar4 + -0x30 + lVar12);
      uVar7 = puVar1[1];
      puVar2 = (undefined8 *)(lVar4 + -0x20 + lVar12);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + -0x10 + lVar12);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      *(undefined8 *)(lVar4 + lVar12) = *puVar1;
      ((undefined8 *)(lVar4 + lVar12))[1] = uVar7;
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar12);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar12);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar3 = (undefined4 *)(lVar4 + -0x30 + lVar12);
      *puVar3 = (undefined4)local_48;
      puVar3[1] = local_48._4_4_;
      puVar3[2] = (undefined4)uStack_40;
      puVar3[3] = uStack_40._4_4_;
      puVar1 = (undefined8 *)(lVar4 + -0x20 + lVar12);
      *puVar1 = local_38;
      puVar1[1] = uStack_30;
      puVar1 = (undefined8 *)(lVar4 + -0x10 + lVar12);
      *puVar1 = local_28;
      puVar1[1] = uStack_20;
      uVar13 = uVar13 - 1;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while (2 < uVar13);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149459482 FUN_149459482 body=42 status=ok
// SIG undefined FUN_149459482(void)

undefined8 FUN_149459482(void)

{
  FUN_140033559("..\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework/Public/ComputeFramework/ComputeDataInterface.h"
                ,0x1b,L"Pure virtual not implemented (%s)",L"UComputeDataInterface::GetClassName");
  return 0;
}



// FUNCTION 1494594ce FUN_1494594ce body=54 status=ok
// SIG undefined FUN_1494594ce(void)

undefined8 * FUN_1494594ce(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework/Public/ComputeFramework/ComputeKernelSource.h"
                ,0x16,L"Pure virtual not implemented (%s)",L"UComputeKernelSource::GetSource");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14945950e FUN_14945950e body=122 status=ok
// SIG undefined FUN_14945950e(void)

undefined8 FUN_14945950e(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14010318a(param_1,&local_28,0);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"/Engine/Generated/%s.ush",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494595c6 FUN_1494595c6 body=48 status=ok
// SIG undefined FUN_1494595c6(void)

void FUN_1494595c6(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14945960c FUN_14945960c body=99 status=ok
// SIG undefined FUN_14945960c(void)

undefined1 FUN_14945960c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined1 *)(lVar2 + -8) = *(undefined1 *)(puVar1 + 4);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      FUN_144a787a6();
      FUN_144a787a6(param_2 + lVar6 + 0x28,param_3 + lVar6 + 0x28);
      lVar6 = lVar6 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149459698 FUN_149459698 body=59 status=ok
// SIG undefined FUN_149459698(void)

undefined8 FUN_149459698(longlong *param_1)

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



// FUNCTION 149459736 FUN_149459736 body=52 status=ok
// SIG undefined FUN_149459736(void)

void FUN_149459736(longlong param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1494597aa FUN_1494597aa body=60 status=ok
// SIG undefined FUN_1494597aa(void)

undefined1 FUN_1494597aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1494598c8(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}


