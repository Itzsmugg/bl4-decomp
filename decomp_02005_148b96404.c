// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148b96404 FUN_148b96404 body=32 status=ok
// SIG undefined FUN_148b96404(void)

void FUN_148b96404(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_140ef0956(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148b96466 FUN_148b96466 body=158 status=ok
// SIG undefined FUN_148b96466(void)

longlong FUN_148b96466(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  plVar1 = *(longlong **)(param_2 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x18) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  plVar1 = *(longlong **)(param_2 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x28) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  FUN_148b96504(param_1 + 0x38,param_2 + 0x38);
  return param_1;
}



// FUNCTION 148b96504 FUN_148b96504 body=93 status=ok
// SIG undefined FUN_148b96504(void)

undefined8 * FUN_148b96504(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ef0a08(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b96562(param_1,iVar1);
      FUN_148b965d5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b96562 FUN_148b96562 body=115 status=ok
// SIG undefined FUN_148b96562(void)

void FUN_148b96562(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148b965d5 FUN_148b965d5 body=52 status=ok
// SIG undefined FUN_148b965d5(void)

void FUN_148b965d5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148b9660a(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148b9660a FUN_148b9660a body=103 status=ok
// SIG undefined FUN_148b9660a(void)

undefined8 * FUN_148b9660a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14615cd8e(param_1,iVar1,0);
    FUN_14615cd59(*param_1,uVar2,iVar1);
  }
  FUN_14875e4ae(param_1 + 2,param_2 + 2);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 148b96672 FUN_148b96672 body=33 status=ok
// SIG undefined FUN_148b96672(void)

void FUN_148b96672(undefined8 param_1,longlong param_2)

{
  FUN_1447a97f4(param_2,&DAT_14c9485f0);
  *(undefined1 *)(param_2 + 0x28) = 0;
  return;
}



// FUNCTION 148b966b8 FUN_148b966b8 body=60 status=ok
// SIG undefined FUN_148b966b8(void)

undefined1 FUN_148b966b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1447715ec(param_2,param_3);
    *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_3 + 0x28);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148b9671c FUN_148b9671c body=59 status=ok
// SIG undefined FUN_148b9671c(void)

undefined8 FUN_148b9671c(longlong *param_1)

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



// FUNCTION 148b96762 FUN_148b96762 body=40 status=ok
// SIG undefined FUN_148b96762(void)

void FUN_148b96762(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148b96844 FUN_148b96844 body=59 status=ok
// SIG undefined FUN_148b96844(void)

undefined8 FUN_148b96844(longlong *param_1)

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



// FUNCTION 148b9688a FUN_148b9688a body=32 status=ok
// SIG undefined FUN_148b9688a(void)

void FUN_148b9688a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_140971a38(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148b968fa FUN_148b968fa body=32 status=ok
// SIG undefined FUN_148b968fa(void)

void FUN_148b968fa(undefined8 param_1,undefined8 *param_2)

{
  FUN_1409e6ae2(param_2);
  *param_2 = &PTR_FUN_14b600490;
  return;
}



// FUNCTION 148b96930 FUN_148b96930 body=63 status=ok
// SIG undefined FUN_148b96930(void)

undefined1 FUN_148b96930(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b897b2(param_2,param_3);
    param_3 = param_3 + 0x458;
    param_2 = param_2 + 0x458;
  }
  return 1;
}



// FUNCTION 148b96998 FUN_148b96998 body=59 status=ok
// SIG undefined FUN_148b96998(void)

undefined8 FUN_148b96998(longlong *param_1)

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



// FUNCTION 148b969e4 FUN_148b969e4 body=38 status=ok
// SIG undefined FUN_148b969e4(void)

void FUN_148b969e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x458) == '\x01') {
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x458) = 0;
  }
  return;
}



// FUNCTION 148b96a58 FUN_148b96a58 body=59 status=ok
// SIG undefined FUN_148b96a58(void)

void FUN_148b96a58(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x210);
  FUN_1487639c0(param_2);
  *param_2 = &PTR_FUN_14b603ff0;
  param_2[0x41] = 0;
  return;
}



// FUNCTION 148b96a94 FUN_148b96a94 body=43 status=ok
// SIG undefined FUN_148b96a94(void)

void FUN_148b96a94(undefined8 param_1,undefined8 *param_2)

{
  FUN_1487639c0(param_2);
  *param_2 = &PTR_FUN_14b603ff0;
  param_2[0x41] = 0;
  return;
}



// FUNCTION 148b96ae4 FUN_148b96ae4 body=76 status=ok
// SIG undefined FUN_148b96ae4(void)

undefined8 FUN_148b96ae4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148763b7c(param_2,param_3);
    *(undefined8 *)(param_2 + 0x208) = *(undefined8 *)(param_3 + 0x208);
    param_2 = param_2 + 0x210;
    param_3 = param_3 + 0x210;
  }
  return 1;
}



// FUNCTION 148b96b58 FUN_148b96b58 body=59 status=ok
// SIG undefined FUN_148b96b58(void)

undefined8 FUN_148b96b58(longlong *param_1)

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



// FUNCTION 148b96ba4 FUN_148b96ba4 body=38 status=ok
// SIG undefined FUN_148b96ba4(void)

void FUN_148b96ba4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_140944000(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 148b96c18 FUN_148b96c18 body=43 status=ok
// SIG undefined FUN_148b96c18(void)

undefined8 FUN_148b96c18(undefined8 param_1,int param_2)

{
  FUN_140944000();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 148b96ca8 FUN_148b96ca8 body=63 status=ok
// SIG undefined FUN_148b96ca8(void)

undefined1 FUN_148b96ca8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148764dc2(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148b96d10 FUN_148b96d10 body=59 status=ok
// SIG undefined FUN_148b96d10(void)

undefined8 FUN_148b96d10(longlong *param_1)

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



// FUNCTION 148b96d5c FUN_148b96d5c body=38 status=ok
// SIG undefined FUN_148b96d5c(void)

void FUN_148b96d5c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_140fb6454(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148b96e0e FUN_148b96e0e body=83 status=ok
// SIG undefined FUN_148b96e0e(void)

undefined1 FUN_148b96e0e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_1418443e8(param_2,param_3);
      FUN_145885470(param_2 + 0x18,param_3 + 0x18);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b96e8a FUN_148b96e8a body=59 status=ok
// SIG undefined FUN_148b96e8a(void)

undefined8 FUN_148b96e8a(longlong *param_1)

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



// FUNCTION 148b96f64 FUN_148b96f64 body=54 status=ok
// SIG undefined FUN_148b96f64(void)

undefined1 FUN_148b96f64(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b97078(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148b96fc2 FUN_148b96fc2 body=59 status=ok
// SIG undefined FUN_148b96fc2(void)

undefined8 FUN_148b96fc2(longlong *param_1)

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



// FUNCTION 148b97008 FUN_148b97008 body=34 status=ok
// SIG undefined FUN_148b97008(void)

void FUN_148b97008(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1465ac9aa(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148b97078 FUN_148b97078 body=95 status=ok
// SIG undefined FUN_148b97078(void)

longlong FUN_148b97078(longlong param_1,longlong param_2)

{
  FUN_14117bcd8();
  FUN_14117bcd8(param_1 + 0xc,param_2 + 0xc);
  FUN_14117bcd8(param_1 + 0x18,param_2 + 0x18);
  FUN_14117bcd8(param_1 + 0x24,param_2 + 0x24);
  FUN_14117bcd8(param_1 + 0x30,param_2 + 0x30);
  FUN_14117bcd8(param_1 + 0x3c,param_2 + 0x3c);
  return param_1;
}



// FUNCTION 148b9716a FUN_148b9716a body=59 status=ok
// SIG undefined FUN_148b9716a(void)

undefined8 FUN_148b9716a(longlong *param_1)

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



// FUNCTION 148b9720a FUN_148b9720a body=34 status=ok
// SIG undefined FUN_148b9720a(void)

undefined8 FUN_148b9720a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 148b9722c FUN_148b9722c body=55 status=ok
// SIG undefined FUN_148b9722c(void)

void FUN_148b9722c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0bc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0bc0 = FUN_140002ddd(FUN_1465abcaf,uVar1,L"GameResourcePoolCurrentValueResolverEx");
  }
  return;
}



// FUNCTION 148b972b4 FUN_148b972b4 body=54 status=ok
// SIG undefined FUN_148b972b4(void)

undefined1 FUN_148b972b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1418c41de(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 148b97312 FUN_148b97312 body=59 status=ok
// SIG undefined FUN_148b97312(void)

undefined8 FUN_148b97312(longlong *param_1)

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



// FUNCTION 148b9740a FUN_148b9740a body=80 status=ok
// SIG undefined FUN_148b9740a(void)

undefined1 FUN_148b9740a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1403de7ba(param_2,param_3);
    FUN_148b97576(param_2 + 0x20,param_3 + 0x20);
    FUN_148b975c6(param_2 + 0x30,param_3 + 0x30);
    param_2 = param_2 + 0x48;
    param_3 = param_3 + 0x48;
  }
  return 1;
}



// FUNCTION 148b97482 FUN_148b97482 body=59 status=ok
// SIG undefined FUN_148b97482(void)

undefined8 FUN_148b97482(longlong *param_1)

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



// FUNCTION 148b974c8 FUN_148b974c8 body=34 status=ok
// SIG undefined FUN_148b974c8(void)

void FUN_148b974c8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_148b97538(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148b97538 FUN_148b97538 body=61 status=ok
// SIG undefined FUN_148b97538(void)

void FUN_148b97538(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
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



// FUNCTION 148b97576 FUN_148b97576 body=79 status=ok
// SIG undefined FUN_148b97576(void)

undefined8 * FUN_148b97576(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148b9761a(param_1,iVar1);
      FUN_148b9768d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b975c6 FUN_148b975c6 body=84 status=ok
// SIG undefined FUN_148b975c6(void)

longlong * FUN_148b975c6(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148b9761a FUN_148b9761a body=115 status=ok
// SIG undefined FUN_148b9761a(void)

void FUN_148b9761a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148b9768d FUN_148b9768d body=52 status=ok
// SIG undefined FUN_148b9768d(void)

void FUN_148b9768d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148b976c2(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148b976c2 FUN_148b976c2 body=71 status=ok
// SIG undefined FUN_148b976c2(void)

undefined8 * FUN_148b976c2(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148b9770a FUN_148b9770a body=60 status=ok
// SIG undefined FUN_148b9770a(void)

void FUN_148b9770a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b6011d0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 148b9775c FUN_148b9775c body=108 status=ok
// SIG undefined FUN_148b9775c(void)

undefined1 FUN_148b9775c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650a5e(param_2,param_3);
    FUN_1418c41de(param_2 + 0x88,param_3 + 0x88);
    FUN_148b978de(param_2 + 0xa0,param_3 + 0xa0);
    param_2 = param_2 + 0xb0;
    param_3 = param_3 + 0xb0;
  }
  return 1;
}



// FUNCTION 148b977f0 FUN_148b977f0 body=59 status=ok
// SIG undefined FUN_148b977f0(void)

undefined8 FUN_148b977f0(longlong *param_1)

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



// FUNCTION 148b9783c FUN_148b9783c body=38 status=ok
// SIG undefined FUN_148b9783c(void)

void FUN_148b9783c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_148b9789a(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148b9789a FUN_148b9789a body=68 status=ok
// SIG undefined FUN_148b9789a(void)

void FUN_148b9789a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6011d0;
  FUN_140e9b0f5(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  return;
}



// FUNCTION 148b978de FUN_148b978de body=93 status=ok
// SIG undefined FUN_148b978de(void)

undefined8 * FUN_148b978de(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e9b0f5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b9793c(param_1,iVar1);
      FUN_148b979af(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b9793c FUN_148b9793c body=115 status=ok
// SIG undefined FUN_148b9793c(void)

void FUN_148b9793c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148b979af FUN_148b979af body=52 status=ok
// SIG undefined FUN_148b979af(void)

void FUN_148b979af(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148b979e4(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 148b979e4 FUN_148b979e4 body=125 status=ok
// SIG undefined FUN_148b979e4(void)

undefined8 * FUN_148b979e4(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1403de7ba();
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_148b9761a(param_1 + 4,iVar1,0);
    FUN_148b9768d(param_1[4],uVar2,iVar1);
  }
  FUN_1457066e8(param_1 + 6,param_2 + 0x30);
  return param_1;
}



// FUNCTION 148b97a9a FUN_148b97a9a body=67 status=ok
// SIG undefined FUN_148b97a9a(void)

undefined1 FUN_148b97a9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14863e21c(param_2,param_3);
    FUN_1409e3b3c(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148b97b06 FUN_148b97b06 body=59 status=ok
// SIG undefined FUN_148b97b06(void)

undefined8 FUN_148b97b06(longlong *param_1)

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



// FUNCTION 148b97ba8 FUN_148b97ba8 body=60 status=ok
// SIG undefined FUN_148b97ba8(void)

void FUN_148b97ba8(undefined8 param_1,undefined8 *param_2)

{
  FUN_1406dfcd4(param_2);
  *param_2 = &PTR_FUN_14b601530;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  return;
}



// FUNCTION 148b97bfa FUN_148b97bfa body=108 status=ok
// SIG undefined FUN_148b97bfa(void)

undefined1 FUN_148b97bfa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148650a5e(param_2,param_3);
    FUN_1409e3b3c(param_2 + 0x88,param_3 + 0x88);
    FUN_148b97da6(param_2 + 0xa0,param_3 + 0xa0);
    param_2 = param_2 + 0xb0;
    param_3 = param_3 + 0xb0;
  }
  return 1;
}



// FUNCTION 148b97c8e FUN_148b97c8e body=59 status=ok
// SIG undefined FUN_148b97c8e(void)

undefined8 FUN_148b97c8e(longlong *param_1)

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



// FUNCTION 148b97cda FUN_148b97cda body=65 status=ok
// SIG undefined FUN_148b97cda(void)

void FUN_148b97cda(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x16) == '\x01') {
    *param_2 = &PTR_FUN_14b601530;
    if (param_2[0x14] != 0) {
      FUN_1400020a8();
    }
    FUN_1403d767a(param_2);
    *(undefined1 *)(param_2 + 0x16) = 0;
  }
  return;
}



// FUNCTION 148b97d6c FUN_148b97d6c body=57 status=ok
// SIG undefined FUN_148b97d6c(void)

void FUN_148b97d6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0c38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0c38 = FUN_140002ddd(FUN_1465abf51,uVar1,L"GbxActorPartDef_Region");
  }
  return;
}



// FUNCTION 148b97da6 FUN_148b97da6 body=79 status=ok
// SIG undefined FUN_148b97da6(void)

undefined8 * FUN_148b97da6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148b97df6(param_1,iVar1);
      FUN_148b97e69(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b97df6 FUN_148b97df6 body=115 status=ok
// SIG undefined FUN_148b97df6(void)

void FUN_148b97df6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148b97e69 FUN_148b97e69 body=65 status=ok
// SIG undefined FUN_148b97e69(void)

void FUN_148b97e69(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1464dd002(param_1,param_2);
    FUN_141845010(param_1 + 0x18,param_2 + 0x18);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148b97eac FUN_148b97eac body=76 status=ok
// SIG undefined FUN_148b97eac(void)

void FUN_148b97eac(undefined8 param_1,undefined8 *param_2)

{
  FUN_141333e36(param_2);
  *param_2 = &PTR_FUN_14ac43f80;
  FUN_140785382(param_2 + 0x3d,10);
  *param_2 = &PTR_FUN_14b601720;
  param_2[0x44] = 0;
  *(undefined2 *)(param_2 + 0x45) = 0x101;
  return;
}



// FUNCTION 148b97f3c FUN_148b97f3c body=63 status=ok
// SIG undefined FUN_148b97f3c(void)

undefined1 FUN_148b97f3c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b980b4(param_2,param_3);
    param_3 = param_3 + 0x230;
    param_2 = param_2 + 0x230;
  }
  return 1;
}



// FUNCTION 148b97fa4 FUN_148b97fa4 body=59 status=ok
// SIG undefined FUN_148b97fa4(void)

undefined8 FUN_148b97fa4(longlong *param_1)

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



// FUNCTION 148b97ff0 FUN_148b97ff0 body=60 status=ok
// SIG undefined FUN_148b97ff0(void)

void FUN_148b97ff0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x46) == '\x01') {
    *param_2 = &PTR_FUN_14ac43f80;
    FUN_144a2da94(param_2 + 0x3d);
    FUN_140d29fd0(param_2);
    *(undefined1 *)(param_2 + 0x46) = 0;
  }
  return;
}



// FUNCTION 148b9807a FUN_148b9807a body=57 status=ok
// SIG undefined FUN_148b9807a(void)

void FUN_148b9807a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0c50 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0c50 = FUN_140002ddd(FUN_1465abfab,uVar1,L"GbxBrainAspectSettings_Charge");
  }
  return;
}



// FUNCTION 148b980b4 FUN_148b980b4 body=102 status=ok
// SIG undefined FUN_148b980b4(void)

longlong FUN_148b980b4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147f1ef36();
  FUN_144983130(param_1 + 0x1e8,param_2 + 0x1e8);
  lVar1 = *(longlong *)(param_2 + 0x220);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x220);
    }
  }
  *(longlong *)(param_1 + 0x220) = lVar1;
  *(undefined2 *)(param_1 + 0x228) = *(undefined2 *)(param_2 + 0x228);
  return param_1;
}



// FUNCTION 148b98148 FUN_148b98148 body=63 status=ok
// SIG undefined FUN_148b98148(void)

undefined1 FUN_148b98148(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b982aa(param_2,param_3);
    param_3 = param_3 + 0x398;
    param_2 = param_2 + 0x398;
  }
  return 1;
}



// FUNCTION 148b981b0 FUN_148b981b0 body=59 status=ok
// SIG undefined FUN_148b981b0(void)

undefined8 FUN_148b981b0(longlong *param_1)

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



// FUNCTION 148b981fc FUN_148b981fc body=38 status=ok
// SIG undefined FUN_148b981fc(void)

void FUN_148b981fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x398) == '\x01') {
    FUN_141318aa6(param_2);
    *(undefined1 *)(param_2 + 0x398) = 0;
  }
  return;
}



// FUNCTION 148b98270 FUN_148b98270 body=57 status=ok
// SIG undefined FUN_148b98270(void)

void FUN_148b98270(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0c68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0c68 = FUN_140002ddd(FUN_1465ac005,uVar1,L"GbxBrainAspect_Charge");
  }
  return;
}



// FUNCTION 148b982aa FUN_148b982aa body=558 status=ok
// SIG undefined FUN_148b982aa(void)

longlong FUN_148b982aa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 uVar17;
  
  FUN_147f1f36a();
  uVar6 = *(undefined4 *)(param_2 + 0x124);
  uVar7 = *(undefined4 *)(param_2 + 0x128);
  uVar8 = *(undefined4 *)(param_2 + 300);
  uVar9 = *(undefined4 *)(param_2 + 0x130);
  uVar10 = *(undefined4 *)(param_2 + 0x134);
  uVar11 = *(undefined4 *)(param_2 + 0x138);
  uVar12 = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x124) = uVar6;
  *(undefined4 *)(param_1 + 0x128) = uVar7;
  *(undefined4 *)(param_1 + 300) = uVar8;
  *(undefined4 *)(param_1 + 0x130) = uVar9;
  *(undefined4 *)(param_1 + 0x134) = uVar10;
  *(undefined4 *)(param_1 + 0x138) = uVar11;
  *(undefined4 *)(param_1 + 0x13c) = uVar12;
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x144) == '\x01') {
      *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
      uVar17 = 1;
LAB_148b98300:
      *(undefined1 *)(param_1 + 0x144) = uVar17;
    }
    else if (*(char *)(param_1 + 0x144) == '\x01') {
      uVar17 = 0;
      goto LAB_148b98300;
    }
    if (*(char *)(param_2 + 0x160) == '\x01') {
      *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
      uVar6 = *(undefined4 *)(param_2 + 0x14c);
      uVar7 = *(undefined4 *)(param_2 + 0x150);
      uVar8 = *(undefined4 *)(param_2 + 0x154);
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
      *(undefined4 *)(param_1 + 0x14c) = uVar6;
      *(undefined4 *)(param_1 + 0x150) = uVar7;
      *(undefined4 *)(param_1 + 0x154) = uVar8;
      *(undefined1 *)(param_1 + 0x160) = 1;
    }
    else if (*(char *)(param_1 + 0x160) == '\x01') {
      *(undefined1 *)(param_1 + 0x160) = 0;
    }
    if (*(char *)(param_2 + 0x180) == '\x01') {
      *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_2 + 0x178);
      uVar6 = *(undefined4 *)(param_2 + 0x16c);
      uVar7 = *(undefined4 *)(param_2 + 0x170);
      uVar8 = *(undefined4 *)(param_2 + 0x174);
      *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
      *(undefined4 *)(param_1 + 0x16c) = uVar6;
      *(undefined4 *)(param_1 + 0x170) = uVar7;
      *(undefined4 *)(param_1 + 0x174) = uVar8;
      *(undefined1 *)(param_1 + 0x180) = 1;
    }
    else if (*(char *)(param_1 + 0x180) == '\x01') {
      *(undefined1 *)(param_1 + 0x180) = 0;
    }
  }
  FUN_1437fe5b8(param_1 + 0x188,param_2 + 0x188);
  FUN_144955a78(param_1 + 0x2a0,param_2 + 0x2a0);
  uVar3 = *(undefined8 *)(param_2 + 800);
  lVar4 = *(longlong *)(param_2 + 0x328);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x328);
  *(undefined8 *)(param_1 + 800) = uVar3;
  *(longlong *)(param_1 + 0x328) = lVar4;
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
  FUN_140bf093e(param_1 + 0x330,param_2 + 0x330);
  uVar3 = *(undefined8 *)(param_2 + 0x348);
  uVar13 = *(undefined8 *)(param_2 + 0x350);
  uVar14 = *(undefined8 *)(param_2 + 0x358);
  uVar15 = *(undefined8 *)(param_2 + 0x360);
  uVar16 = *(undefined8 *)(param_2 + 0x368);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_2 + 0x340);
  *(undefined8 *)(param_1 + 0x348) = uVar3;
  *(undefined8 *)(param_1 + 0x350) = uVar13;
  *(undefined8 *)(param_1 + 0x358) = uVar14;
  *(undefined8 *)(param_1 + 0x360) = uVar15;
  *(undefined8 *)(param_1 + 0x368) = uVar16;
  if (param_2 == param_1) {
    return param_1;
  }
  if (*(char *)(param_2 + 0x388) == '\x01') {
    *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(param_2 + 0x380);
    uVar3 = *(undefined8 *)(param_2 + 0x378);
    *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_2 + 0x370);
    *(undefined8 *)(param_1 + 0x378) = uVar3;
    uVar17 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x388) != '\x01') goto LAB_148b98445;
    uVar17 = 0;
  }
  *(undefined1 *)(param_1 + 0x388) = uVar17;
LAB_148b98445:
  if (*(char *)(param_2 + 0x394) == '\x01') {
    *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_2 + 0x390);
    *(undefined1 *)(param_1 + 0x394) = 1;
  }
  else if (*(char *)(param_1 + 0x394) == '\x01') {
    *(undefined1 *)(param_1 + 0x394) = 0;
  }
  return param_1;
}



// FUNCTION 148b984da FUN_148b984da body=68 status=ok
// SIG undefined FUN_148b984da(void)

void FUN_148b984da(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e48d86(param_2);
  *param_2 = &PTR_FUN_14b601a80;
  *(undefined2 *)(param_2 + 0x10) = 0x100;
  *(undefined1 *)(param_2 + 0x14) = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  *(undefined4 *)(param_2 + 0x13) = 0;
  return;
}



// FUNCTION 148b98562 FUN_148b98562 body=63 status=ok
// SIG undefined FUN_148b98562(void)

undefined1 FUN_148b98562(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b986d8(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 148b985ca FUN_148b985ca body=59 status=ok
// SIG undefined FUN_148b985ca(void)

undefined8 FUN_148b985ca(longlong *param_1)

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



// FUNCTION 148b98616 FUN_148b98616 body=57 status=ok
// SIG undefined FUN_148b98616(void)

void FUN_148b98616(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x15) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x15) = 0;
  }
  return;
}



// FUNCTION 148b9869e FUN_148b9869e body=57 status=ok
// SIG undefined FUN_148b9869e(void)

void FUN_148b9869e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0c80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0c80 = FUN_140002ddd(FUN_1465ac05f,uVar1,L"GbxBrainAspectSettings_Cloak");
  }
  return;
}



// FUNCTION 148b986d8 FUN_148b986d8 body=180 status=ok
// SIG undefined FUN_148b986d8(void)

longlong FUN_148b986d8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_2 + 0x80);
  lVar8 = *(longlong *)(param_2 + 0x88);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x88);
    }
  }
  *(longlong *)(param_1 + 0x88) = lVar8;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 148b9878e FUN_148b9878e body=67 status=ok
// SIG undefined FUN_148b9878e(void)

void FUN_148b9878e(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b601c80;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  return;
}



// FUNCTION 148b987f6 FUN_148b987f6 body=127 status=ok
// SIG undefined FUN_148b987f6(void)

undefined8 FUN_148b987f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    uVar4 = *(undefined8 *)(param_3 + 0xe0);
    *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_3 + 0xd8);
    *(undefined8 *)(param_2 + 0xe0) = uVar4;
    *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(param_3 + 0xe8);
    uVar1 = *(undefined4 *)(param_3 + 0xf4);
    uVar2 = *(undefined4 *)(param_3 + 0xf8);
    uVar3 = *(undefined4 *)(param_3 + 0xfc);
    *(undefined4 *)(param_2 + 0xf0) = *(undefined4 *)(param_3 + 0xf0);
    *(undefined4 *)(param_2 + 0xf4) = uVar1;
    *(undefined4 *)(param_2 + 0xf8) = uVar2;
    *(undefined4 *)(param_2 + 0xfc) = uVar3;
    FUN_144a787a6(param_2 + 0x100,param_3 + 0x100);
    param_2 = param_2 + 0x110;
    param_3 = param_3 + 0x110;
  }
  return 1;
}



// FUNCTION 148b9889e FUN_148b9889e body=59 status=ok
// SIG undefined FUN_148b9889e(void)

undefined8 FUN_148b9889e(longlong *param_1)

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



// FUNCTION 148b988ea FUN_148b988ea body=65 status=ok
// SIG undefined FUN_148b988ea(void)

void FUN_148b988ea(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x22) == '\x01') {
    *param_2 = &PTR_FUN_14b601c80;
    if (param_2[0x20] != 0) {
      FUN_1400020a8();
    }
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0x22) = 0;
  }
  return;
}



// FUNCTION 148b9897a FUN_148b9897a body=57 status=ok
// SIG undefined FUN_148b9897a(void)

void FUN_148b9897a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0c98 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0c98 = FUN_140002ddd(FUN_1465ac0b9,uVar1,L"GbxBrainAspect_Cloak");
  }
  return;
}



// FUNCTION 148b989e4 FUN_148b989e4 body=63 status=ok
// SIG undefined FUN_148b989e4(void)

undefined1 FUN_148b989e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b98aee(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 148b98a4c FUN_148b98a4c body=59 status=ok
// SIG undefined FUN_148b98a4c(void)

undefined8 FUN_148b98a4c(longlong *param_1)

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



// FUNCTION 148b98aee FUN_148b98aee body=139 status=ok
// SIG undefined FUN_148b98aee(void)

longlong FUN_148b98aee(longlong param_1,longlong param_2)

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
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  FUN_144983130(param_1 + 0x88,param_2 + 0x88);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xc2) = *(undefined1 *)(param_2 + 0xc2);
  return param_1;
}



// FUNCTION 148b98b7a FUN_148b98b7a body=79 status=ok
// SIG undefined FUN_148b98b7a(void)

void FUN_148b98b7a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *param_1 = &PTR_FUN_14b603b20;
    FUN_144a2da94(param_1 + 0x11);
    *param_1 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_1 + 7);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  return;
}



// FUNCTION 148b98bca FUN_148b98bca body=32 status=ok
// SIG undefined FUN_148b98bca(void)

void FUN_148b98bca(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b6020f0;
  return;
}



// FUNCTION 148b98c0e FUN_148b98c0e body=63 status=ok
// SIG undefined FUN_148b98c0e(void)

undefined1 FUN_148b98c0e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 148b98c76 FUN_148b98c76 body=59 status=ok
// SIG undefined FUN_148b98c76(void)

undefined8 FUN_148b98c76(longlong *param_1)

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



// FUNCTION 148b98cc2 FUN_148b98cc2 body=38 status=ok
// SIG undefined FUN_148b98cc2(void)

void FUN_148b98cc2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 148b98d36 FUN_148b98d36 body=57 status=ok
// SIG undefined FUN_148b98d36(void)

void FUN_148b98d36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0ce0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0ce0 = FUN_140002ddd(FUN_1465ac1d3,uVar1,L"GbxBrainAspect_Cloaked");
  }
  return;
}



// FUNCTION 148b98da0 FUN_148b98da0 body=63 status=ok
// SIG undefined FUN_148b98da0(void)

undefined1 FUN_148b98da0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b98ec8(param_2,param_3);
    param_3 = param_3 + 0x118;
    param_2 = param_2 + 0x118;
  }
  return 1;
}



// FUNCTION 148b98e08 FUN_148b98e08 body=59 status=ok
// SIG undefined FUN_148b98e08(void)

undefined8 FUN_148b98e08(longlong *param_1)

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



// FUNCTION 148b98e54 FUN_148b98e54 body=38 status=ok
// SIG undefined FUN_148b98e54(void)

void FUN_148b98e54(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_148b98fce(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 148b98ec8 FUN_148b98ec8 body=260 status=ok
// SIG undefined FUN_148b98ec8(void)

longlong FUN_148b98ec8(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x98);
  uVar3 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  FUN_144a787a6(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined2 *)(param_1 + 0xb0) = *(undefined2 *)(param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0xb2) = *(undefined1 *)(param_2 + 0xb2);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  uVar1 = *(undefined4 *)(param_2 + 0xc4);
  uVar2 = *(undefined4 *)(param_2 + 200);
  uVar3 = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  *(undefined4 *)(param_1 + 200) = uVar2;
  *(undefined4 *)(param_1 + 0xcc) = uVar3;
  FUN_144a787a6(param_1 + 0xd0,param_2 + 0xd0);
  uVar1 = *(undefined4 *)(param_2 + 0xe4);
  uVar2 = *(undefined4 *)(param_2 + 0xe8);
  uVar3 = *(undefined4 *)(param_2 + 0xec);
  uVar4 = *(undefined4 *)(param_2 + 0xeb);
  uVar5 = *(undefined4 *)(param_2 + 0xef);
  uVar6 = *(undefined4 *)(param_2 + 0xf3);
  uVar7 = *(undefined4 *)(param_2 + 0xf7);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  *(undefined4 *)(param_1 + 0xec) = uVar3;
  *(undefined4 *)(param_1 + 0xeb) = uVar4;
  *(undefined4 *)(param_1 + 0xef) = uVar5;
  *(undefined4 *)(param_1 + 0xf3) = uVar6;
  *(undefined4 *)(param_1 + 0xf7) = uVar7;
  FUN_14180246c(param_1 + 0x100,param_2 + 0x100);
  return param_1;
}



// FUNCTION 148b98fce FUN_148b98fce body=152 status=ok
// SIG undefined FUN_148b98fce(void)

void FUN_148b98fce(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b603bc0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 148b99066 FUN_148b99066 body=56 status=ok
// SIG undefined FUN_148b99066(void)

void FUN_148b99066(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b6024d0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  FUN_14136b39e(param_2 + 0x1d);
  return;
}



// FUNCTION 148b990c2 FUN_148b990c2 body=99 status=ok
// SIG undefined FUN_148b990c2(void)

undefined1 FUN_148b990c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    FUN_14036fd5a(param_2 + 0xe8,param_3 + 0xe8);
    param_2 = param_2 + 0x210;
    param_3 = param_3 + 0x210;
  }
  return 1;
}



// FUNCTION 148b9914e FUN_148b9914e body=59 status=ok
// SIG undefined FUN_148b9914e(void)

undefined8 FUN_148b9914e(longlong *param_1)

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



// FUNCTION 148b9919a FUN_148b9919a body=60 status=ok
// SIG undefined FUN_148b9919a(void)

void FUN_148b9919a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *param_2 = &PTR_FUN_14b6024d0;
    FUN_140670012(param_2 + 0x1d);
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0x42) = 0;
  }
  return;
}



// FUNCTION 148b99224 FUN_148b99224 body=57 status=ok
// SIG undefined FUN_148b99224(void)

void FUN_148b99224(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0d10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0d10 = FUN_140002ddd(FUN_1465ac2bf,uVar1,L"GbxBrainAspect_CloakOverride");
  }
  return;
}



// FUNCTION 148b9925e FUN_148b9925e body=43 status=ok
// SIG undefined FUN_148b9925e(void)

void FUN_148b9925e(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e48d86(param_2);
  *param_2 = &PTR_FUN_14b602750;
  param_2[0x10] = 0;
  return;
}



// FUNCTION 148b992ce FUN_148b992ce body=63 status=ok
// SIG undefined FUN_148b992ce(void)

undefined1 FUN_148b992ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b99444(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148b99336 FUN_148b99336 body=59 status=ok
// SIG undefined FUN_148b99336(void)

undefined8 FUN_148b99336(longlong *param_1)

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



// FUNCTION 148b99382 FUN_148b99382 body=57 status=ok
// SIG undefined FUN_148b99382(void)

void FUN_148b99382(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 148b9940a FUN_148b9940a body=57 status=ok
// SIG undefined FUN_148b9940a(void)

void FUN_148b9940a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0d28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0d28 = FUN_140002ddd(FUN_1465ac319,uVar1,L"GbxBrainAspectSettings_Land");
  }
  return;
}



// FUNCTION 148b99444 FUN_148b99444 body=128 status=ok
// SIG undefined FUN_148b99444(void)

longlong FUN_148b99444(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  lVar8 = *(longlong *)(param_2 + 0x80);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0x80);
    }
  }
  *(longlong *)(param_1 + 0x80) = lVar8;
  return param_1;
}



// FUNCTION 148b994c6 FUN_148b994c6 body=76 status=ok
// SIG undefined FUN_148b994c6(void)

void FUN_148b994c6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b602950;
  param_2[0x1b] = 0;
  *(undefined2 *)(param_2 + 0x1f) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
  *(undefined1 *)(param_2 + 0x21) = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  return;
}



// FUNCTION 148b99536 FUN_148b99536 body=113 status=ok
// SIG undefined FUN_148b99536(void)

undefined8 FUN_148b99536(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    FUN_144983130(param_2 + 0xd8,param_3 + 0xd8);
    uVar1 = *(undefined4 *)(param_3 + 0x114);
    uVar2 = *(undefined4 *)(param_3 + 0x118);
    uVar3 = *(undefined4 *)(param_3 + 0x11c);
    *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(param_3 + 0x110);
    *(undefined4 *)(param_2 + 0x114) = uVar1;
    *(undefined4 *)(param_2 + 0x118) = uVar2;
    *(undefined4 *)(param_2 + 0x11c) = uVar3;
    *(undefined8 *)(param_2 + 0x120) = *(undefined8 *)(param_3 + 0x120);
    param_2 = param_2 + 0x128;
    param_3 = param_3 + 0x128;
  }
  return 1;
}



// FUNCTION 148b995d0 FUN_148b995d0 body=59 status=ok
// SIG undefined FUN_148b995d0(void)

undefined8 FUN_148b995d0(longlong *param_1)

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



// FUNCTION 148b9961c FUN_148b9961c body=60 status=ok
// SIG undefined FUN_148b9961c(void)

void FUN_148b9961c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x25) == '\x01') {
    *param_2 = &PTR_FUN_14b602950;
    FUN_144a2da94(param_2 + 0x1b);
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0x25) = 0;
  }
  return;
}



// FUNCTION 148b996a6 FUN_148b996a6 body=57 status=ok
// SIG undefined FUN_148b996a6(void)

void FUN_148b996a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0d40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0d40 = FUN_140002ddd(FUN_1465ac373,uVar1,L"GbxBrainAspect_Land");
  }
  return;
}



// FUNCTION 148b996e0 FUN_148b996e0 body=90 status=ok
// SIG undefined FUN_148b996e0(void)

void FUN_148b996e0(undefined8 param_1,undefined8 *param_2)

{
  FUN_140eb491a(param_2);
  *param_2 = &PTR_FUN_14b602bd0;
  param_2[0x50] = 0;
  *(undefined2 *)(param_2 + 0x54) = 4;
  *(undefined4 *)(param_2 + 0x51) = 0;
  *(undefined1 *)(param_2 + 0x55) = 1;
  *(bool *)(param_2 + 0x56) = (DAT_14c9a8634 & 0x20) == 0;
  *(undefined1 *)(param_2 + 0x57) = 0;
  return;
}



// FUNCTION 148b99762 FUN_148b99762 body=97 status=ok
// SIG undefined FUN_148b99762(void)

undefined1 FUN_148b99762(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148673c4e(param_2,param_3);
    FUN_144983130(param_2 + 0x280,param_3 + 0x280);
    *(undefined1 *)(param_2 + 0x2b8) = *(undefined1 *)(param_3 + 0x2b8);
    param_2 = param_2 + 0x2c0;
    param_3 = param_3 + 0x2c0;
  }
  return 1;
}



// FUNCTION 148b997ec FUN_148b997ec body=59 status=ok
// SIG undefined FUN_148b997ec(void)

undefined8 FUN_148b997ec(longlong *param_1)

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



// FUNCTION 148b99838 FUN_148b99838 body=60 status=ok
// SIG undefined FUN_148b99838(void)

void FUN_148b99838(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *param_2 = &PTR_FUN_14b602bd0;
    FUN_144a2da94(param_2 + 0x50);
    FUN_140ffc9f6(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148b998c4 FUN_148b998c4 body=43 status=ok
// SIG undefined FUN_148b998c4(void)

void FUN_148b998c4(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x1c] = 0;
  *param_2 = &PTR_FUN_14b602dd0;
  return;
}



// FUNCTION 148b99914 FUN_148b99914 body=88 status=ok
// SIG undefined FUN_148b99914(void)

undefined1 FUN_148b99914(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xdc);
    uVar2 = *(undefined4 *)(param_3 + 0xe0);
    uVar3 = *(undefined4 *)(param_3 + 0xe4);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    *(undefined4 *)(param_2 + 0xdc) = uVar1;
    *(undefined4 *)(param_2 + 0xe0) = uVar2;
    *(undefined4 *)(param_2 + 0xe4) = uVar3;
    *(undefined1 *)(param_2 + 0xe8) = *(undefined1 *)(param_3 + 0xe8);
    param_2 = param_2 + 0xf0;
    param_3 = param_3 + 0xf0;
  }
  return 1;
}



// FUNCTION 148b99994 FUN_148b99994 body=59 status=ok
// SIG undefined FUN_148b99994(void)

undefined8 FUN_148b99994(longlong *param_1)

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



// FUNCTION 148b999e0 FUN_148b999e0 body=38 status=ok
// SIG undefined FUN_148b999e0(void)

void FUN_148b999e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148b99a56 FUN_148b99a56 body=32 status=ok
// SIG undefined FUN_148b99a56(void)

void FUN_148b99a56(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e48d86(param_2);
  *param_2 = &PTR_FUN_14b603060;
  return;
}



// FUNCTION 148b99a9e FUN_148b99a9e body=163 status=ok
// SIG undefined FUN_148b99a9e(void)

undefined8 FUN_148b99a9e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144983130(param_2 + 0x38 + lVar10,param_3 + 0x38 + lVar10);
      *(undefined8 *)(param_2 + 0x70 + lVar10) = *(undefined8 *)(param_3 + 0x70 + lVar10);
      *(undefined1 *)(param_2 + 0x7c + lVar10) = *(undefined1 *)(param_3 + 0x7c + lVar10);
      *(undefined4 *)(param_2 + 0x78 + lVar10) = *(undefined4 *)(param_3 + 0x78 + lVar10);
      lVar10 = lVar10 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b99b6a FUN_148b99b6a body=59 status=ok
// SIG undefined FUN_148b99b6a(void)

undefined8 FUN_148b99b6a(longlong *param_1)

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



// FUNCTION 148b99bb6 FUN_148b99bb6 body=57 status=ok
// SIG undefined FUN_148b99bb6(void)

void FUN_148b99bb6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 148b99c40 FUN_148b99c40 body=32 status=ok
// SIG undefined FUN_148b99c40(void)

void FUN_148b99c40(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b603260;
  return;
}



// FUNCTION 148b99c84 FUN_148b99c84 body=63 status=ok
// SIG undefined FUN_148b99c84(void)

undefined1 FUN_148b99c84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 148b99cec FUN_148b99cec body=59 status=ok
// SIG undefined FUN_148b99cec(void)

undefined8 FUN_148b99cec(longlong *param_1)

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



// FUNCTION 148b99d38 FUN_148b99d38 body=38 status=ok
// SIG undefined FUN_148b99d38(void)

void FUN_148b99d38(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 148b99dac FUN_148b99dac body=57 status=ok
// SIG undefined FUN_148b99dac(void)

void FUN_148b99dac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0da0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0da0 = FUN_140002ddd(FUN_1465ac54b,uVar1,L"GbxBrainAspect_OrderRewind");
  }
  return;
}



// FUNCTION 148b99de6 FUN_148b99de6 body=73 status=ok
// SIG undefined FUN_148b99de6(void)

void FUN_148b99de6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e48d86(param_2);
  *param_2 = &PTR_FUN_14b6034e0;
  param_2[0x10] = 0;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 0x15) = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined1 *)(param_2 + 0x17) = 1;
  return;
}



// FUNCTION 148b99e74 FUN_148b99e74 body=206 status=ok
// SIG undefined FUN_148b99e74(void)

undefined8 FUN_148b99e74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
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
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + lVar10;
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      FUN_1470d00c2();
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_144983130(lVar1 + 0x38,lVar2 + 0x38);
      *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar2 + 0x70);
      *(undefined1 *)(lVar1 + 0x7c) = *(undefined1 *)(lVar2 + 0x7c);
      *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(lVar2 + 0x78);
      FUN_144983130(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      *(undefined1 *)(lVar1 + 0xb8) = *(undefined1 *)(lVar2 + 0xb8);
      lVar10 = lVar10 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b99f6a FUN_148b99f6a body=59 status=ok
// SIG undefined FUN_148b99f6a(void)

undefined8 FUN_148b99f6a(longlong *param_1)

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



// FUNCTION 148b9a00c FUN_148b9a00c body=57 status=ok
// SIG undefined FUN_148b9a00c(void)

void FUN_148b9a00c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0db8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0db8 = FUN_140002ddd(FUN_1465ac5a5,uVar1,L"GbxBrainAspectSettings_Revive");
  }
  return;
}



// FUNCTION 148b9a046 FUN_148b9a046 body=79 status=ok
// SIG undefined FUN_148b9a046(void)

void FUN_148b9a046(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *param_1 = &PTR_FUN_14b6034e0;
    FUN_144a2da94(param_1 + 0x10);
    *param_1 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_1 + 7);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148b9a096 FUN_148b9a096 body=43 status=ok
// SIG undefined FUN_148b9a096(void)

void FUN_148b9a096(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b6036e0;
  param_2[0x1b] = 0;
  return;
}



// FUNCTION 148b9a0e6 FUN_148b9a0e6 body=76 status=ok
// SIG undefined FUN_148b9a0e6(void)

undefined8 FUN_148b9a0e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_3 + 0xd8);
    param_2 = param_2 + 0xe0;
    param_3 = param_3 + 0xe0;
  }
  return 1;
}



// FUNCTION 148b9a15a FUN_148b9a15a body=59 status=ok
// SIG undefined FUN_148b9a15a(void)

undefined8 FUN_148b9a15a(longlong *param_1)

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



// FUNCTION 148b9a1a6 FUN_148b9a1a6 body=38 status=ok
// SIG undefined FUN_148b9a1a6(void)

void FUN_148b9a1a6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 148b9a268 FUN_148b9a268 body=63 status=ok
// SIG undefined FUN_148b9a268(void)

undefined1 FUN_148b9a268(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b9a392(param_2,param_3);
    param_3 = param_3 + 0x310;
    param_2 = param_2 + 0x310;
  }
  return 1;
}



// FUNCTION 148b9a2d0 FUN_148b9a2d0 body=59 status=ok
// SIG undefined FUN_148b9a2d0(void)

undefined8 FUN_148b9a2d0(longlong *param_1)

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



// FUNCTION 148b9a31c FUN_148b9a31c body=40 status=ok
// SIG undefined FUN_148b9a31c(void)

void FUN_148b9a31c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x310) == '\x01') {
    FUN_14594d260(param_2);
    *(undefined1 *)(param_2 + 0x310) = 0;
  }
  return;
}



// FUNCTION 148b9a392 FUN_148b9a392 body=98 status=ok
// SIG undefined FUN_148b9a392(void)

longlong FUN_148b9a392(longlong param_1,longlong param_2)

{
  FUN_148b980b4();
  FUN_144983130(param_1 + 0x230,param_2 + 0x230);
  FUN_144983130(param_1 + 0x268,param_2 + 0x268);
  FUN_144983130(param_1 + 0x2a0,param_2 + 0x2a0);
  FUN_144983130(param_1 + 0x2d8,param_2 + 0x2d8);
  return param_1;
}



// FUNCTION 148b9a3f6 FUN_148b9a3f6 body=57 status=ok
// SIG undefined FUN_148b9a3f6(void)

void FUN_148b9a3f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0df0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0df0 = FUN_140002ddd(FUN_1465ac659,uVar1,L"GbxBrainAspectSettings_Swoop");
  }
  return;
}



// FUNCTION 148b9a45c FUN_148b9a45c body=63 status=ok
// SIG undefined FUN_148b9a45c(void)

undefined1 FUN_148b9a45c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b9a586(param_2,param_3);
    param_3 = param_3 + 0x430;
    param_2 = param_2 + 0x430;
  }
  return 1;
}



// FUNCTION 148b9a4c4 FUN_148b9a4c4 body=59 status=ok
// SIG undefined FUN_148b9a4c4(void)

undefined8 FUN_148b9a4c4(longlong *param_1)

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



// FUNCTION 148b9a510 FUN_148b9a510 body=40 status=ok
// SIG undefined FUN_148b9a510(void)

void FUN_148b9a510(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x430) == '\x01') {
    FUN_1458e5fb6(param_2);
    *(undefined1 *)(param_2 + 0x430) = 0;
  }
  return;
}



// FUNCTION 148b9a586 FUN_148b9a586 body=226 status=ok
// SIG undefined FUN_148b9a586(void)

longlong FUN_148b9a586(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  FUN_148b982aa();
  puVar10 = (undefined8 *)(param_2 + 0x398);
  puVar11 = (undefined8 *)(param_1 + 0x398);
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x410) == '\x01') {
      *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(param_2 + 0x408);
      uVar3 = *(undefined4 *)(param_2 + 0x3fc);
      uVar6 = *(undefined4 *)(param_2 + 0x400);
      uVar7 = *(undefined4 *)(param_2 + 0x404);
      *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_2 + 0x3f8);
      *(undefined4 *)(param_1 + 0x3fc) = uVar3;
      *(undefined4 *)(param_1 + 0x400) = uVar6;
      *(undefined4 *)(param_1 + 0x404) = uVar7;
      uVar8 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x410) != '\x01') goto LAB_148b9a5e3;
      uVar8 = 0;
    }
    *(undefined1 *)(param_1 + 0x410) = uVar8;
  }
LAB_148b9a5e3:
  uVar3 = *(undefined4 *)(param_2 + 0x418);
  *(undefined4 *)(param_1 + 0x41b) = *(undefined4 *)(param_2 + 0x41b);
  *(undefined4 *)(param_1 + 0x418) = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 0x420);
  lVar9 = *(longlong *)(param_2 + 0x428);
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x428);
  *(undefined8 *)(param_1 + 0x420) = uVar4;
  *(longlong *)(param_1 + 0x428) = lVar9;
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
  return param_1;
}



// FUNCTION 148b9a66a FUN_148b9a66a body=57 status=ok
// SIG undefined FUN_148b9a66a(void)

void FUN_148b9a66a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0e08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0e08 = FUN_140002ddd(FUN_1465ac6b3,uVar1,L"GbxBrainAspect_Swoop");
  }
  return;
}



// FUNCTION 148b9a8cc FUN_148b9a8cc body=48 status=ok
// SIG undefined FUN_148b9a8cc(void)

void FUN_148b9a8cc(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e48d86(param_2);
  *param_2 = &PTR_FUN_14b60a080;
  param_2[0x10] = 0;
  *(undefined8 *)((longlong)param_2 + 0x87) = 0;
  return;
}



// FUNCTION 148b9a940 FUN_148b9a940 body=63 status=ok
// SIG undefined FUN_148b9a940(void)

undefined1 FUN_148b9a940(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b9aab6(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 148b9a9a8 FUN_148b9a9a8 body=59 status=ok
// SIG undefined FUN_148b9a9a8(void)

undefined8 FUN_148b9a9a8(longlong *param_1)

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



// FUNCTION 148b9a9f4 FUN_148b9a9f4 body=57 status=ok
// SIG undefined FUN_148b9a9f4(void)

void FUN_148b9a9f4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 148b9aa7c FUN_148b9aa7c body=57 status=ok
// SIG undefined FUN_148b9aa7c(void)

void FUN_148b9aa7c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0e20 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0e20 = FUN_140002ddd(FUN_1465ad328,uVar1,L"GbxBrainAspectSettings_TakeOff");
  }
  return;
}



// FUNCTION 148b9aab6 FUN_148b9aab6 body=152 status=ok
// SIG undefined FUN_148b9aab6(void)

longlong FUN_148b9aab6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  lVar8 = *(longlong *)(param_2 + 0x80);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x80);
    }
  }
  *(longlong *)(param_1 + 0x80) = lVar8;
  uVar1 = *(undefined4 *)(param_2 + 0x8b);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8b) = uVar1;
  return param_1;
}



// FUNCTION 148b9ab50 FUN_148b9ab50 body=76 status=ok
// SIG undefined FUN_148b9ab50(void)

void FUN_148b9ab50(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b60a280;
  param_2[0x1c] = 0;
  *(undefined2 *)(param_2 + 0x20) = 0;
  *(undefined1 *)(param_2 + 0x21) = 0;
  *(undefined1 *)(param_2 + 0x22) = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  return;
}



// FUNCTION 148b9abc0 FUN_148b9abc0 body=129 status=ok
// SIG undefined FUN_148b9abc0(void)

undefined8 FUN_148b9abc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    FUN_144983130(param_2 + 0xe0,param_3 + 0xe0);
    uVar1 = *(undefined4 *)(param_3 + 0x11c);
    uVar2 = *(undefined4 *)(param_3 + 0x120);
    uVar3 = *(undefined4 *)(param_3 + 0x124);
    *(undefined4 *)(param_2 + 0x118) = *(undefined4 *)(param_3 + 0x118);
    *(undefined4 *)(param_2 + 0x11c) = uVar1;
    *(undefined4 *)(param_2 + 0x120) = uVar2;
    *(undefined4 *)(param_2 + 0x124) = uVar3;
    *(undefined8 *)(param_2 + 0x128) = *(undefined8 *)(param_3 + 0x128);
    param_2 = param_2 + 0x130;
    param_3 = param_3 + 0x130;
  }
  return 1;
}



// FUNCTION 148b9ac6a FUN_148b9ac6a body=59 status=ok
// SIG undefined FUN_148b9ac6a(void)

undefined8 FUN_148b9ac6a(longlong *param_1)

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



// FUNCTION 148b9acb6 FUN_148b9acb6 body=60 status=ok
// SIG undefined FUN_148b9acb6(void)

void FUN_148b9acb6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x26) == '\x01') {
    *param_2 = &PTR_FUN_14b60a280;
    FUN_144a2da94(param_2 + 0x1c);
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0x26) = 0;
  }
  return;
}



// FUNCTION 148b9ad40 FUN_148b9ad40 body=57 status=ok
// SIG undefined FUN_148b9ad40(void)

void FUN_148b9ad40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0e38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0e38 = FUN_140002ddd(FUN_1465ad383,uVar1,L"GbxBrainAspect_TakeOff");
  }
  return;
}



// FUNCTION 148b9adaa FUN_148b9adaa body=163 status=ok
// SIG undefined FUN_148b9adaa(void)

undefined8 FUN_148b9adaa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144983130(param_2 + 0x38 + lVar10,param_3 + 0x38 + lVar10);
      *(undefined8 *)(param_2 + 0x70 + lVar10) = *(undefined8 *)(param_3 + 0x70 + lVar10);
      *(undefined1 *)(param_2 + 0x7c + lVar10) = *(undefined1 *)(param_3 + 0x7c + lVar10);
      *(undefined4 *)(param_2 + 0x78 + lVar10) = *(undefined4 *)(param_3 + 0x78 + lVar10);
      lVar10 = lVar10 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b9ae76 FUN_148b9ae76 body=59 status=ok
// SIG undefined FUN_148b9ae76(void)

undefined8 FUN_148b9ae76(longlong *param_1)

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



// FUNCTION 148b9aec2 FUN_148b9aec2 body=57 status=ok
// SIG undefined FUN_148b9aec2(void)

void FUN_148b9aec2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 148b9af4c FUN_148b9af4c body=48 status=ok
// SIG undefined FUN_148b9af4c(void)

void FUN_148b9af4c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd8);
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b60a660;
  return;
}



// FUNCTION 148b9af7c FUN_148b9af7c body=32 status=ok
// SIG undefined FUN_148b9af7c(void)

void FUN_148b9af7c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  *param_2 = &PTR_FUN_14b60a660;
  return;
}



// FUNCTION 148b9afc0 FUN_148b9afc0 body=63 status=ok
// SIG undefined FUN_148b9afc0(void)

undefined1 FUN_148b9afc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f186d8(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 148b9b028 FUN_148b9b028 body=59 status=ok
// SIG undefined FUN_148b9b028(void)

undefined8 FUN_148b9b028(longlong *param_1)

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



// FUNCTION 148b9b074 FUN_148b9b074 body=38 status=ok
// SIG undefined FUN_148b9b074(void)

void FUN_148b9b074(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_14049e650(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 148b9b0e8 FUN_148b9b0e8 body=43 status=ok
// SIG undefined FUN_148b9b0e8(void)

undefined8 FUN_148b9b0e8(undefined8 param_1,int param_2)

{
  FUN_14049e650();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 148b9b114 FUN_148b9b114 body=55 status=ok
// SIG undefined FUN_148b9b114(void)

void FUN_148b9b114(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0e68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0e68 = FUN_140002ddd(FUN_1465ad437,uVar1,L"GbxBrainAspect_UseGadget");
  }
  return;
}



// FUNCTION 148b9b17c FUN_148b9b17c body=63 status=ok
// SIG undefined FUN_148b9b17c(void)

undefined1 FUN_148b9b17c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b9b2a6(param_2,param_3);
    param_3 = param_3 + 0x550;
    param_2 = param_2 + 0x550;
  }
  return 1;
}



// FUNCTION 148b9b1e4 FUN_148b9b1e4 body=59 status=ok
// SIG undefined FUN_148b9b1e4(void)

undefined8 FUN_148b9b1e4(longlong *param_1)

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



// FUNCTION 148b9b230 FUN_148b9b230 body=40 status=ok
// SIG undefined FUN_148b9b230(void)

void FUN_148b9b230(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x550) == '\x01') {
    FUN_145882fe6(param_2);
    *(undefined1 *)(param_2 + 0x550) = 0;
  }
  return;
}



// FUNCTION 148b9b2a6 FUN_148b9b2a6 body=300 status=ok
// SIG undefined FUN_148b9b2a6(void)

longlong FUN_148b9b2a6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  lVar8 = *(longlong *)(param_2 + 0x1d0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x1d0);
    }
  }
  *(longlong *)(param_1 + 0x1d0) = lVar8;
  FUN_144983130(param_1 + 0x1d8,param_2 + 0x1d8);
  FUN_144983130(param_1 + 0x210,param_2 + 0x210);
  *(undefined2 *)(param_1 + 0x248) = *(undefined2 *)(param_2 + 0x248);
  FUN_144983130(param_1 + 0x250,param_2 + 0x250);
  FUN_144983130(param_1 + 0x288,param_2 + 0x288);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_2 + 0x2c0);
  *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x2c8);
  FUN_14054d68c(param_1 + 0x2d0,param_2 + 0x2d0);
  *(undefined1 *)(param_1 + 0x548) = *(undefined1 *)(param_2 + 0x548);
  return param_1;
}



// FUNCTION 148b9b3d4 FUN_148b9b3d4 body=61 status=ok
// SIG undefined FUN_148b9b3d4(void)

void FUN_148b9b3d4(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c2310e(param_2);
  *param_2 = &PTR_FUN_14b60aae0;
  *(undefined2 *)(param_2 + 0x36) = 0x100;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined4 *)(param_2 + 0x35) = 0;
  return;
}



// FUNCTION 148b9b43a FUN_148b9b43a body=63 status=ok
// SIG undefined FUN_148b9b43a(void)

undefined1 FUN_148b9b43a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b9b544(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 148b9b4a2 FUN_148b9b4a2 body=59 status=ok
// SIG undefined FUN_148b9b4a2(void)

undefined8 FUN_148b9b4a2(longlong *param_1)

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



// FUNCTION 148b9b544 FUN_148b9b544 body=179 status=ok
// SIG undefined FUN_148b9b544(void)

longlong FUN_148b9b544(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  lVar8 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar8;
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined2 *)(param_1 + 0x1b0) = *(undefined2 *)(param_2 + 0x1b0);
  return param_1;
}



// FUNCTION 148b9b5f8 FUN_148b9b5f8 body=79 status=ok
// SIG undefined FUN_148b9b5f8(void)

void FUN_148b9b5f8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x37) == '\x01') {
    *param_1 = &PTR_FUN_14ac52c60;
    FUN_14076bc70(param_1 + 0x10);
    *param_1 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_1 + 7);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x37) = 0;
  }
  return;
}



// FUNCTION 148b9b648 FUN_148b9b648 body=61 status=ok
// SIG undefined FUN_148b9b648(void)

void FUN_148b9b648(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c2310e(param_2);
  *param_2 = &PTR_FUN_14b60acd0;
  *(undefined2 *)(param_2 + 0x36) = 0x100;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined4 *)(param_2 + 0x35) = 0;
  return;
}



// FUNCTION 148b9b6ae FUN_148b9b6ae body=63 status=ok
// SIG undefined FUN_148b9b6ae(void)

undefined1 FUN_148b9b6ae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b9b7b8(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 148b9b716 FUN_148b9b716 body=59 status=ok
// SIG undefined FUN_148b9b716(void)

undefined8 FUN_148b9b716(longlong *param_1)

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



// FUNCTION 148b9b7b8 FUN_148b9b7b8 body=179 status=ok
// SIG undefined FUN_148b9b7b8(void)

longlong FUN_148b9b7b8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  lVar8 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar8;
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined2 *)(param_1 + 0x1b0) = *(undefined2 *)(param_2 + 0x1b0);
  return param_1;
}



// FUNCTION 148b9b86c FUN_148b9b86c body=79 status=ok
// SIG undefined FUN_148b9b86c(void)

void FUN_148b9b86c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x37) == '\x01') {
    *param_1 = &PTR_FUN_14ac52c60;
    FUN_14076bc70(param_1 + 0x10);
    *param_1 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_1 + 7);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x37) = 0;
  }
  return;
}



// FUNCTION 148b9b8ec FUN_148b9b8ec body=63 status=ok
// SIG undefined FUN_148b9b8ec(void)

undefined1 FUN_148b9b8ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b9ba16(param_2,param_3);
    param_3 = param_3 + 0x2d8;
    param_2 = param_2 + 0x2d8;
  }
  return 1;
}



// FUNCTION 148b9b954 FUN_148b9b954 body=59 status=ok
// SIG undefined FUN_148b9b954(void)

undefined8 FUN_148b9b954(longlong *param_1)

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



// FUNCTION 148b9b9a0 FUN_148b9b9a0 body=40 status=ok
// SIG undefined FUN_148b9b9a0(void)

void FUN_148b9b9a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2d8) == '\x01') {
    FUN_145de6f40(param_2);
    *(undefined1 *)(param_2 + 0x2d8) = 0;
  }
  return;
}



// FUNCTION 148b9ba16 FUN_148b9ba16 body=283 status=ok
// SIG undefined FUN_148b9ba16(void)

longlong FUN_148b9ba16(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(param_2 + 0x1d0);
  lVar8 = *(longlong *)(param_2 + 0x1d8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x1d8);
    }
  }
  *(longlong *)(param_1 + 0x1d8) = lVar8;
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  FUN_144983130(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_144983130(param_1 + 0x228,param_2 + 0x228);
  FUN_144983130(param_1 + 0x260,param_2 + 0x260);
  FUN_144983130(param_1 + 0x298,param_2 + 0x298);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + 0x2d0);
  return param_1;
}



// FUNCTION 148b9bb32 FUN_148b9bb32 body=242 status=ok
// SIG undefined FUN_148b9bb32(void)

void FUN_148b9bb32(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 2;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_2 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x184) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x204) = 0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined8 *)((longlong)param_2 + 0x22d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x235) = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x26] = &PTR_FUN_14ac52c10;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  *param_2 = &PTR_FUN_14b60b0b0;
  return;
}



// FUNCTION 148b9bc74 FUN_148b9bc74 body=59 status=ok
// SIG undefined FUN_148b9bc74(void)

undefined8 FUN_148b9bc74(longlong *param_1)

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



// FUNCTION 148b9bcc0 FUN_148b9bcc0 body=38 status=ok
// SIG undefined FUN_148b9bcc0(void)

void FUN_148b9bcc0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_1411d7298(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 148b9bd66 FUN_148b9bd66 body=63 status=ok
// SIG undefined FUN_148b9bd66(void)

undefined1 FUN_148b9bd66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b9be90(param_2,param_3);
    param_3 = param_3 + 0x420;
    param_2 = param_2 + 0x420;
  }
  return 1;
}



// FUNCTION 148b9bdce FUN_148b9bdce body=59 status=ok
// SIG undefined FUN_148b9bdce(void)

undefined8 FUN_148b9bdce(longlong *param_1)

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



// FUNCTION 148b9be1a FUN_148b9be1a body=40 status=ok
// SIG undefined FUN_148b9be1a(void)

void FUN_148b9be1a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x420) == '\x01') {
    FUN_1459fe714(param_2);
    *(undefined1 *)(param_2 + 0x420) = 0;
  }
  return;
}



// FUNCTION 148b9be90 FUN_148b9be90 body=180 status=ok
// SIG undefined FUN_148b9be90(void)

longlong FUN_148b9be90(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  lVar8 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar8;
  FUN_14054d68c(param_1 + 0x1a0,param_2 + 0x1a0);
  *(undefined1 *)(param_1 + 0x41c) = *(undefined1 *)(param_2 + 0x41c);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_2 + 0x418);
  return param_1;
}



// FUNCTION 148b9bf46 FUN_148b9bf46 body=242 status=ok
// SIG undefined FUN_148b9bf46(void)

void FUN_148b9bf46(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 2;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_2 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x184) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x204) = 0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined8 *)((longlong)param_2 + 0x22d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x235) = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x26] = &PTR_FUN_14ac52c10;
  param_2[0x4c] = 0;
  *param_2 = &PTR_FUN_14b60b540;
  return;
}



// FUNCTION 148b9c088 FUN_148b9c088 body=59 status=ok
// SIG undefined FUN_148b9c088(void)

undefined8 FUN_148b9c088(longlong *param_1)

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



// FUNCTION 148b9c0d4 FUN_148b9c0d4 body=38 status=ok
// SIG undefined FUN_148b9c0d4(void)

void FUN_148b9c0d4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_1411d7298(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 148b9c148 FUN_148b9c148 body=57 status=ok
// SIG undefined FUN_148b9c148(void)

void FUN_148b9c148(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0f10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0f10 = FUN_140002ddd(FUN_1465ad7c5,uVar1,L"GbxBrainTask_Land");
  }
  return;
}



// FUNCTION 148b9c1b2 FUN_148b9c1b2 body=63 status=ok
// SIG undefined FUN_148b9c1b2(void)

undefined1 FUN_148b9c1b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b9c2dc(param_2,param_3);
    param_3 = param_3 + 0x640;
    param_2 = param_2 + 0x640;
  }
  return 1;
}



// FUNCTION 148b9c21a FUN_148b9c21a body=59 status=ok
// SIG undefined FUN_148b9c21a(void)

undefined8 FUN_148b9c21a(longlong *param_1)

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



// FUNCTION 148b9c266 FUN_148b9c266 body=40 status=ok
// SIG undefined FUN_148b9c266(void)

void FUN_148b9c266(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x640) == '\x01') {
    FUN_145c27a60(param_2);
    *(undefined1 *)(param_2 + 0x640) = 0;
  }
  return;
}



// FUNCTION 148b9c2dc FUN_148b9c2dc body=335 status=ok
// SIG undefined FUN_148b9c2dc(void)

longlong FUN_148b9c2dc(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  FUN_144983130(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_144983130(param_1 + 0x208,param_2 + 0x208);
  FUN_144983130(param_1 + 0x240,param_2 + 0x240);
  *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(param_2 + 0x278);
  lVar8 = *(longlong *)(param_2 + 0x280);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x280);
    }
  }
  *(longlong *)(param_1 + 0x280) = lVar8;
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_2 + 0x288);
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_2 + 0x290);
  FUN_144983130(param_1 + 0x298,param_2 + 0x298);
  FUN_144983130(param_1 + 0x2d0,param_2 + 0x2d0);
  *(undefined1 *)(param_1 + 0x308) = *(undefined1 *)(param_2 + 0x308);
  FUN_141689bc8(param_1 + 0x310,param_2 + 0x310);
  FUN_14054d68c(param_1 + 0x3c8,param_2 + 0x3c8);
  return param_1;
}



// FUNCTION 148b9c42c FUN_148b9c42c body=242 status=ok
// SIG undefined FUN_148b9c42c(void)

void FUN_148b9c42c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 2;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_2 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x184) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x204) = 0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined8 *)((longlong)param_2 + 0x22d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x235) = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x26] = &PTR_FUN_14ac52c10;
  param_2[0x4c] = 0;
  *param_2 = &PTR_FUN_14b60b9d0;
  return;
}



// FUNCTION 148b9c56e FUN_148b9c56e body=59 status=ok
// SIG undefined FUN_148b9c56e(void)

undefined8 FUN_148b9c56e(longlong *param_1)

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



// FUNCTION 148b9c5ba FUN_148b9c5ba body=38 status=ok
// SIG undefined FUN_148b9c5ba(void)

void FUN_148b9c5ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_1411d7298(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 148b9c660 FUN_148b9c660 body=63 status=ok
// SIG undefined FUN_148b9c660(void)

undefined1 FUN_148b9c660(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b9c78a(param_2,param_3);
    param_3 = param_3 + 0x538;
    param_2 = param_2 + 0x538;
  }
  return 1;
}



// FUNCTION 148b9c6c8 FUN_148b9c6c8 body=59 status=ok
// SIG undefined FUN_148b9c6c8(void)

undefined8 FUN_148b9c6c8(longlong *param_1)

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



// FUNCTION 148b9c714 FUN_148b9c714 body=40 status=ok
// SIG undefined FUN_148b9c714(void)

void FUN_148b9c714(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x538) == '\x01') {
    FUN_145741e30(param_2);
    *(undefined1 *)(param_2 + 0x538) = 0;
  }
  return;
}



// FUNCTION 148b9c78a FUN_148b9c78a body=272 status=ok
// SIG undefined FUN_148b9c78a(void)

longlong FUN_148b9c78a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  lVar8 = *(longlong *)(param_2 + 0x1d0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x1d0);
    }
  }
  *(longlong *)(param_1 + 0x1d0) = lVar8;
  FUN_14054d68c(param_1 + 0x1d8,param_2 + 0x1d8);
  FUN_144983130(param_1 + 0x450,param_2 + 0x450);
  FUN_144983130(param_1 + 0x488,param_2 + 0x488);
  FUN_144983130(param_1 + 0x4c0,param_2 + 0x4c0);
  FUN_144983130(param_1 + 0x4f8,param_2 + 0x4f8);
  *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_2 + 0x530);
  *(undefined1 *)(param_1 + 0x534) = *(undefined1 *)(param_2 + 0x534);
  return param_1;
}



// FUNCTION 148b9c89c FUN_148b9c89c body=48 status=ok
// SIG undefined FUN_148b9c89c(void)

void FUN_148b9c89c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c2310e(param_2);
  *param_2 = &PTR_FUN_14b60be60;
  param_2[0x33] = 0;
  *(undefined8 *)((longlong)param_2 + 0x19f) = 0;
  return;
}



// FUNCTION 148b9c8f4 FUN_148b9c8f4 body=63 status=ok
// SIG undefined FUN_148b9c8f4(void)

undefined1 FUN_148b9c8f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b9c9fe(param_2,param_3);
    param_3 = param_3 + 0x1a8;
    param_2 = param_2 + 0x1a8;
  }
  return 1;
}



// FUNCTION 148b9c95c FUN_148b9c95c body=59 status=ok
// SIG undefined FUN_148b9c95c(void)

undefined8 FUN_148b9c95c(longlong *param_1)

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



// FUNCTION 148b9c9fe FUN_148b9c9fe body=163 status=ok
// SIG undefined FUN_148b9c9fe(void)

longlong FUN_148b9c9fe(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
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
  lVar8 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar8;
  uVar1 = *(undefined4 *)(param_2 + 0x1a3);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a3) = uVar1;
  return param_1;
}



// FUNCTION 148b9caa2 FUN_148b9caa2 body=79 status=ok
// SIG undefined FUN_148b9caa2(void)

void FUN_148b9caa2(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x35) == '\x01') {
    *param_1 = &PTR_FUN_14ac52c60;
    FUN_14076bc70(param_1 + 0x10);
    *param_1 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_1 + 7);
    FUN_1403ecb9e(param_1);
    *(undefined1 *)(param_1 + 0x35) = 0;
  }
  return;
}



// FUNCTION 148b9cb22 FUN_148b9cb22 body=63 status=ok
// SIG undefined FUN_148b9cb22(void)

undefined1 FUN_148b9cb22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b9cc4c(param_2,param_3);
    param_3 = param_3 + 0x6c8;
    param_2 = param_2 + 0x6c8;
  }
  return 1;
}



// FUNCTION 148b9cb8a FUN_148b9cb8a body=59 status=ok
// SIG undefined FUN_148b9cb8a(void)

undefined8 FUN_148b9cb8a(longlong *param_1)

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



// FUNCTION 148b9cbd6 FUN_148b9cbd6 body=40 status=ok
// SIG undefined FUN_148b9cbd6(void)

void FUN_148b9cbd6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x6c8) == '\x01') {
    FUN_1458dfa0e(param_2);
    *(undefined1 *)(param_2 + 0x6c8) = 0;
  }
  return;
}



// FUNCTION 148b9cc4c FUN_148b9cc4c body=572 status=ok
// SIG undefined FUN_148b9cc4c(void)

longlong FUN_148b9cc4c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  
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
  FUN_14054d68c(param_1 + 0x1d0,param_2 + 0x1d0);
  *(undefined1 *)(param_1 + 0x448) = *(undefined1 *)(param_2 + 0x448);
  FUN_1461784b8(param_1 + 0x450,param_2 + 0x450);
  *(undefined8 *)(param_1 + 0x4e8) = *(undefined8 *)(param_2 + 0x4e8);
  *(undefined1 *)(param_1 + 0x4f0) = *(undefined1 *)(param_2 + 0x4f0);
  FUN_144983130(param_1 + 0x4f8,param_2 + 0x4f8);
  *(undefined2 *)(param_1 + 0x530) = *(undefined2 *)(param_2 + 0x530);
  FUN_144983130(param_1 + 0x538,param_2 + 0x538);
  *(undefined2 *)(param_1 + 0x570) = *(undefined2 *)(param_2 + 0x570);
  *(undefined1 *)(param_1 + 0x572) = *(undefined1 *)(param_2 + 0x572);
  FUN_144983130(param_1 + 0x578,param_2 + 0x578);
  FUN_144983130(param_1 + 0x5b0,param_2 + 0x5b0);
  *(undefined2 *)(param_1 + 0x5e8) = *(undefined2 *)(param_2 + 0x5e8);
  FUN_144983130(param_1 + 0x5f0,param_2 + 0x5f0);
  *(undefined1 *)(param_1 + 0x628) = *(undefined1 *)(param_2 + 0x628);
  FUN_144983130(param_1 + 0x630,param_2 + 0x630);
  FUN_1411157dc(param_1 + 0x668,param_2 + 0x668);
  *(undefined1 *)(param_1 + 0x680) = *(undefined1 *)(param_2 + 0x680);
  *(undefined8 *)(param_1 + 0x678) = *(undefined8 *)(param_2 + 0x678);
  lVar9 = *(longlong *)(param_2 + 0x688);
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = *(longlong *)(param_2 + 0x688);
    }
  }
  bVar8 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x688) = lVar9;
  *(undefined8 *)(param_1 + 0x690) = *(undefined8 *)(param_2 + 0x690);
  *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(param_2 + 0x698);
  *(undefined2 *)(param_1 + 0x6a0) = *(undefined2 *)(param_2 + 0x6a0);
  lVar9 = *(longlong *)(param_2 + 0x6a8);
  if ((bVar8 & 1) != 0) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = *(longlong *)(param_2 + 0x6a8);
    }
  }
  *(longlong *)(param_1 + 0x6a8) = lVar9;
  *(undefined8 *)(param_1 + 0x6b0) = *(undefined8 *)(param_2 + 0x6b0);
  *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_2 + 0x6b8);
  *(undefined2 *)(param_1 + 0x6c0) = *(undefined2 *)(param_2 + 0x6c0);
  return param_1;
}



// FUNCTION 148b9ceba FUN_148b9ceba body=153 status=ok
// SIG undefined FUN_148b9ceba(void)

undefined8 FUN_148b9ceba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144983130(param_2 + 0x38 + lVar10,param_3 + 0x38 + lVar10);
      *(undefined8 *)(param_2 + 0x70 + lVar10) = *(undefined8 *)(param_3 + 0x70 + lVar10);
      *(undefined1 *)(param_2 + 0x78 + lVar10) = *(undefined1 *)(param_3 + 0x78 + lVar10);
      lVar10 = lVar10 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b9cf7c FUN_148b9cf7c body=59 status=ok
// SIG undefined FUN_148b9cf7c(void)

undefined8 FUN_148b9cf7c(longlong *param_1)

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



// FUNCTION 148b9cfc8 FUN_148b9cfc8 body=57 status=ok
// SIG undefined FUN_148b9cfc8(void)

void FUN_148b9cfc8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14ac3d210;
    FUN_144a2da94(param_2 + 7);
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 148b9d052 FUN_148b9d052 body=260 status=ok
// SIG undefined FUN_148b9d052(void)

void FUN_148b9d052(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x268);
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 2;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_2 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x184) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x204) = 0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined8 *)((longlong)param_2 + 0x22d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x235) = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x26] = &PTR_FUN_14ac52c10;
  param_2[0x4c] = 0;
  *param_2 = &PTR_FUN_14b60c5d0;
  return;
}



// FUNCTION 148b9d156 FUN_148b9d156 body=242 status=ok
// SIG undefined FUN_148b9d156(void)

void FUN_148b9d156(undefined8 param_1,undefined8 *param_2)

{
  FUN_140ecb986(param_2);
  param_2[0x23] = 0;
  param_2[0x24] = 0x800000000;
  param_2[0x25] = 0xbf80000000000000;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  *(undefined4 *)(param_2 + 0x2d) = 2;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_2 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x184) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x194) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x204) = 0;
  param_2[0x42] = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined8 *)((longlong)param_2 + 0x22d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x235) = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x4a] = 0;
  param_2[0x4b] = 0;
  param_2[0x48] = 0;
  param_2[0x49] = 0;
  param_2[0x26] = &PTR_FUN_14ac52c10;
  param_2[0x4c] = 0;
  *param_2 = &PTR_FUN_14b60c5d0;
  return;
}



// FUNCTION 148b9d298 FUN_148b9d298 body=59 status=ok
// SIG undefined FUN_148b9d298(void)

undefined8 FUN_148b9d298(longlong *param_1)

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



// FUNCTION 148b9d2e4 FUN_148b9d2e4 body=38 status=ok
// SIG undefined FUN_148b9d2e4(void)

void FUN_148b9d2e4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_147f2886e(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 148b9d358 FUN_148b9d358 body=43 status=ok
// SIG undefined FUN_148b9d358(void)

undefined8 FUN_148b9d358(undefined8 param_1,int param_2)

{
  FUN_147f2886e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x268);
  }
  return param_1;
}



// FUNCTION 148b9d384 FUN_148b9d384 body=55 status=ok
// SIG undefined FUN_148b9d384(void)

void FUN_148b9d384(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba1028 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba1028 = FUN_140002ddd(FUN_1465adbb1,uVar1,L"GbxBrainTask_UseGadget");
  }
  return;
}



// FUNCTION 148b9d3ea FUN_148b9d3ea body=307 status=ok
// SIG undefined FUN_148b9d3ea(void)

undefined8 FUN_148b9d3ea(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_4 != 0) {
    do {
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *param_2 = *param_3;
      param_2[1] = uVar1;
      param_2[2] = uVar2;
      param_2[3] = uVar3;
      if (param_2 != param_3) {
        uStack_b0 = CONCAT71(uStack_b0._1_7_,*(byte *)(param_3 + 0x12));
        (*(code *)(&PTR_caseD_2_14b1f3420)[*(byte *)(param_3 + 0x12)])(&local_e8,param_3 + 4);
        local_78 = (undefined4)local_b8;
        uStack_74 = local_b8._4_4_;
        uStack_70 = (undefined4)uStack_b0;
        uStack_6c = uStack_b0._4_4_;
        local_88 = (undefined4)local_c8;
        uStack_84 = local_c8._4_4_;
        uStack_80 = (undefined4)uStack_c0;
        uStack_7c = uStack_c0._4_4_;
        local_98 = (undefined4)local_d8;
        uStack_94 = local_d8._4_4_;
        uStack_90 = (undefined4)uStack_d0;
        uStack_8c = uStack_d0._4_4_;
        local_a8 = (undefined4)local_e8;
        uStack_a4 = local_e8._4_4_;
        uStack_a0 = (undefined4)uStack_e0;
        uStack_9c = uStack_e0._4_4_;
        uVar4 = *(undefined8 *)(param_2 + 4);
        uVar5 = *(undefined8 *)(param_2 + 6);
        uVar6 = *(undefined8 *)(param_2 + 8);
        uVar7 = *(undefined8 *)(param_2 + 10);
        uVar8 = *(undefined8 *)(param_2 + 0xc);
        uVar9 = *(undefined8 *)(param_2 + 0xe);
        uVar10 = *(undefined8 *)(param_2 + 0x10);
        uVar11 = *(ulonglong *)(param_2 + 0x12);
        param_2[0x10] = (undefined4)local_b8;
        param_2[0x11] = local_b8._4_4_;
        param_2[0x12] = (undefined4)uStack_b0;
        param_2[0x13] = uStack_b0._4_4_;
        param_2[0xc] = (undefined4)local_c8;
        param_2[0xd] = local_c8._4_4_;
        param_2[0xe] = (undefined4)uStack_c0;
        param_2[0xf] = uStack_c0._4_4_;
        param_2[8] = (undefined4)local_d8;
        param_2[9] = local_d8._4_4_;
        param_2[10] = (undefined4)uStack_d0;
        param_2[0xb] = uStack_d0._4_4_;
        param_2[4] = (undefined4)local_e8;
        param_2[5] = local_e8._4_4_;
        param_2[6] = (undefined4)uStack_e0;
        param_2[7] = uStack_e0._4_4_;
        local_e8 = uVar4;
        uStack_e0 = uVar5;
        local_d8 = uVar6;
        uStack_d0 = uVar7;
        local_c8 = uVar8;
        uStack_c0 = uVar9;
        local_b8 = uVar10;
        uStack_b0 = uVar11;
        (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[uVar11 & 0xff])(&local_e8);
      }
      param_3 = param_3 + 0x14;
      param_2 = param_2 + 0x14;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9d546 FUN_148b9d546 body=59 status=ok
// SIG undefined FUN_148b9d546(void)

undefined8 FUN_148b9d546(longlong *param_1)

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



// FUNCTION 148b9d58c FUN_148b9d58c body=42 status=ok
// SIG undefined FUN_148b9d58c(void)

void FUN_148b9d58c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[*(byte *)(param_2 + 0x48)])
              (param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148b9d618 FUN_148b9d618 body=63 status=ok
// SIG undefined FUN_148b9d618(void)

undefined1 FUN_148b9d618(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14400f0ca(param_2,param_3);
    param_3 = param_3 + 0x4a8;
    param_2 = param_2 + 0x4a8;
  }
  return 1;
}



// FUNCTION 148b9d680 FUN_148b9d680 body=59 status=ok
// SIG undefined FUN_148b9d680(void)

undefined8 FUN_148b9d680(longlong *param_1)

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



// FUNCTION 148b9d6cc FUN_148b9d6cc body=38 status=ok
// SIG undefined FUN_148b9d6cc(void)

void FUN_148b9d6cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4a8) == '\x01') {
    FUN_140930edc(param_2);
    *(undefined1 *)(param_2 + 0x4a8) = 0;
  }
  return;
}



// FUNCTION 148b9d72c FUN_148b9d72c body=84 status=ok
// SIG undefined FUN_148b9d72c(void)

longlong * FUN_148b9d72c(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148b9d780 FUN_148b9d780 body=79 status=ok
// SIG undefined FUN_148b9d780(void)

undefined8 * FUN_148b9d780(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148b9db62(param_1,iVar1);
      FUN_148b9dbd5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b9d7d0 FUN_148b9d7d0 body=84 status=ok
// SIG undefined FUN_148b9d7d0(void)

longlong * FUN_148b9d7d0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148b9d824 FUN_148b9d824 body=79 status=ok
// SIG undefined FUN_148b9d824(void)

undefined8 * FUN_148b9d824(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148b9dc0a(param_1,iVar1);
      FUN_148b9dc7d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b9d874 FUN_148b9d874 body=84 status=ok
// SIG undefined FUN_148b9d874(void)

longlong * FUN_148b9d874(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148b9d8c8 FUN_148b9d8c8 body=79 status=ok
// SIG undefined FUN_148b9d8c8(void)

undefined8 * FUN_148b9d8c8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148b9dcaa(param_1,iVar1);
      FUN_148b9dd1d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b9d918 FUN_148b9d918 body=84 status=ok
// SIG undefined FUN_148b9d918(void)

longlong * FUN_148b9d918(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148b9d96c FUN_148b9d96c body=79 status=ok
// SIG undefined FUN_148b9d96c(void)

undefined8 * FUN_148b9d96c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148b9dd9a(param_1,iVar1);
      FUN_148b9de0d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b9d9bc FUN_148b9d9bc body=84 status=ok
// SIG undefined FUN_148b9d9bc(void)

longlong * FUN_148b9d9bc(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148b9da10 FUN_148b9da10 body=84 status=ok
// SIG undefined FUN_148b9da10(void)

undefined8 * FUN_148b9da10(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148b9de42(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 148b9da64 FUN_148b9da64 body=79 status=ok
// SIG undefined FUN_148b9da64(void)

undefined8 * FUN_148b9da64(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148b9de9c(param_1,iVar1);
      FUN_148b9df0f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b9dab4 FUN_148b9dab4 body=79 status=ok
// SIG undefined FUN_148b9dab4(void)

undefined8 * FUN_148b9dab4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148b9df8c(param_1,iVar1);
      FUN_148b9dfff(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b9db04 FUN_148b9db04 body=93 status=ok
// SIG undefined FUN_148b9db04(void)

undefined8 * FUN_148b9db04(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14400f095(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b9e07c(param_1,iVar1);
      FUN_148b9e0ef(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}


