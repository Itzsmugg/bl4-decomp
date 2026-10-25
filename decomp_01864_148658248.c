// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148658248 FUN_148658248 body=188 status=ok
// SIG undefined FUN_148658248(void)

longlong FUN_148658248(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  FUN_1403de7ba(param_1 + 0x18,param_2 + 0x18);
  FUN_14099a466(param_1 + 0x38,param_2 + 0x38);
  FUN_143c454fe(param_1 + 0x48,param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(longlong *)(param_2 + 0x60);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(longlong *)(param_1 + 0x60) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_143c4568c(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 1486583aa FUN_1486583aa body=59 status=ok
// SIG undefined FUN_1486583aa(void)

undefined8 FUN_1486583aa(longlong *param_1)

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



// FUNCTION 1486583f6 FUN_1486583f6 body=38 status=ok
// SIG undefined FUN_1486583f6(void)

void FUN_1486583f6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_14063adfa(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 14865848e FUN_14865848e body=67 status=ok
// SIG undefined FUN_14865848e(void)

undefined1 FUN_14865848e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862fb42(param_2,param_3);
    FUN_14099a466(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1486584fa FUN_1486584fa body=59 status=ok
// SIG undefined FUN_1486584fa(void)

undefined8 FUN_1486584fa(longlong *param_1)

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



// FUNCTION 148658540 FUN_148658540 body=32 status=ok
// SIG undefined FUN_148658540(void)

void FUN_148658540(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_14184a204(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1486585d6 FUN_1486585d6 body=94 status=ok
// SIG undefined FUN_1486585d6(void)

undefined1 FUN_1486585d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_1409e3b3c();
      FUN_144983130(param_2 + lVar1 + 0x20,param_3 + lVar1 + 0x20);
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14865865c FUN_14865865c body=59 status=ok
// SIG undefined FUN_14865865c(void)

undefined8 FUN_14865865c(longlong *param_1)

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



// FUNCTION 1486586a2 FUN_1486586a2 body=33 status=ok
// SIG undefined FUN_1486586a2(void)

void FUN_1486586a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_144a2da94(param_2 + 0x20);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148658732 FUN_148658732 body=87 status=ok
// SIG undefined FUN_148658732(void)

undefined1 FUN_148658732(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1409e3b3c(param_2,param_3);
    FUN_148658842(param_2 + 0x18,param_3 + 0x18);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 1486587b2 FUN_1486587b2 body=59 status=ok
// SIG undefined FUN_1486587b2(void)

undefined8 FUN_1486587b2(longlong *param_1)

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



// FUNCTION 148658842 FUN_148658842 body=93 status=ok
// SIG undefined FUN_148658842(void)

undefined8 * FUN_148658842(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14028f43e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14099a5ec(param_1,iVar1);
      FUN_14099a56b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486588a0 FUN_1486588a0 body=50 status=ok
// SIG undefined FUN_1486588a0(void)

void FUN_1486588a0(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_14028f43e(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14865892c FUN_14865892c body=67 status=ok
// SIG undefined FUN_14865892c(void)

undefined1 FUN_14865892c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14861edc2(param_2,param_3);
    FUN_14099a466(param_2 + 0x28,param_3 + 0x28);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 148658998 FUN_148658998 body=59 status=ok
// SIG undefined FUN_148658998(void)

undefined8 FUN_148658998(longlong *param_1)

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



// FUNCTION 1486589de FUN_1486589de body=32 status=ok
// SIG undefined FUN_1486589de(void)

void FUN_1486589de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_141022a1a(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148658a4c FUN_148658a4c body=38 status=ok
// SIG undefined FUN_148658a4c(void)

undefined8 FUN_148658a4c(undefined8 param_1,int param_2)

{
  FUN_141022a1a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148658afa FUN_148658afa body=59 status=ok
// SIG undefined FUN_148658afa(void)

undefined8 FUN_148658afa(longlong *param_1)

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



// FUNCTION 148658bbc FUN_148658bbc body=100 status=ok
// SIG undefined FUN_148658bbc(void)

undefined1 FUN_148658bbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148658c48 FUN_148658c48 body=59 status=ok
// SIG undefined FUN_148658c48(void)

undefined8 FUN_148658c48(longlong *param_1)

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



// FUNCTION 148658d2c FUN_148658d2c body=63 status=ok
// SIG undefined FUN_148658d2c(void)

undefined1 FUN_148658d2c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148658e54(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148658d94 FUN_148658d94 body=59 status=ok
// SIG undefined FUN_148658d94(void)

undefined8 FUN_148658d94(longlong *param_1)

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



// FUNCTION 148658de0 FUN_148658de0 body=38 status=ok
// SIG undefined FUN_148658de0(void)

void FUN_148658de0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1403d8344(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148658e54 FUN_148658e54 body=188 status=ok
// SIG undefined FUN_148658e54(void)

longlong * FUN_148658e54(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  *param_1 = lVar2;
  FUN_1447a122a(param_1 + 1,param_2 + 1);
  FUN_1402ae23a(param_1 + 3,param_2 + 3);
  FUN_1406fa324(param_1 + 5,param_2 + 5);
  FUN_148658f10(param_1 + 7,param_2 + 7);
  FUN_14620e1f0(param_1 + 9,param_2 + 9);
  FUN_1457d1b7e(param_1 + 0xb,param_2 + 0xb);
  *(char *)(param_1 + 0xd) = (char)param_2[0xd];
  if (param_2 != param_1) {
    if (*(char *)((longlong)param_2 + 0x74) == '\x01') {
      *(undefined8 *)((longlong)param_1 + 0x6c) = *(undefined8 *)((longlong)param_2 + 0x6c);
      uVar1 = 1;
    }
    else {
      if (*(char *)((longlong)param_1 + 0x74) != '\x01') goto LAB_148658eec;
      uVar1 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x74) = uVar1;
  }
LAB_148658eec:
  FUN_140670b3c(param_1 + 0xf,param_2 + 0xf);
  return param_1;
}



// FUNCTION 148658f10 FUN_148658f10 body=79 status=ok
// SIG undefined FUN_148658f10(void)

undefined8 * FUN_148658f10(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148658f60(param_1,iVar1);
      FUN_148658fc2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148658f60 FUN_148658f60 body=98 status=ok
// SIG undefined FUN_148658f60(void)

void FUN_148658f60(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148658fc2 FUN_148658fc2 body=96 status=ok
// SIG undefined FUN_148658fc2(void)

void FUN_148658fc2(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined8 *)(param_1 + 8 + lVar3) = *(undefined8 *)(param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1486590c4 FUN_1486590c4 body=63 status=ok
// SIG undefined FUN_1486590c4(void)

undefined1 FUN_1486590c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486591ec(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 14865912c FUN_14865912c body=59 status=ok
// SIG undefined FUN_14865912c(void)

undefined8 FUN_14865912c(longlong *param_1)

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



// FUNCTION 148659178 FUN_148659178 body=38 status=ok
// SIG undefined FUN_148659178(void)

void FUN_148659178(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1403d7bbc(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 1486591ec FUN_1486591ec body=189 status=ok
// SIG undefined FUN_1486591ec(void)

longlong FUN_1486591ec(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if (param_2 != param_1) {
    FUN_1401b31d8(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_1486592aa(param_1 + 0x20,param_2 + 0x20);
  FUN_1486592fa(param_1 + 0x30,param_2 + 0x30);
  FUN_14865934a(param_1 + 0x40,param_2 + 0x40);
  lVar2 = *(longlong *)(param_2 + 0x50);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x50);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x50) = lVar2;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  lVar2 = *(longlong *)(param_2 + 0x60);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x60);
    }
  }
  *(longlong *)(param_1 + 0x60) = lVar2;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  FUN_1486592fa(param_1 + 0x70,param_2 + 0x70);
  return param_1;
}



// FUNCTION 1486592aa FUN_1486592aa body=79 status=ok
// SIG undefined FUN_1486592aa(void)

undefined8 * FUN_1486592aa(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1486593a8(param_1,iVar1);
      FUN_14865940a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486592fa FUN_1486592fa body=79 status=ok
// SIG undefined FUN_1486592fa(void)

undefined8 * FUN_1486592fa(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14865945c(param_1,iVar1);
      FUN_1486594be(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14865934a FUN_14865934a body=93 status=ok
// SIG undefined FUN_14865934a(void)

undefined8 * FUN_14865934a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1403d7c40(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148659510(param_1,iVar1);
      FUN_148659586(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1486593a8 FUN_1486593a8 body=98 status=ok
// SIG undefined FUN_1486593a8(void)

void FUN_1486593a8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14865940a FUN_14865940a body=82 status=ok
// SIG undefined FUN_14865940a(void)

void FUN_14865940a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 14865945c FUN_14865945c body=98 status=ok
// SIG undefined FUN_14865945c(void)

void FUN_14865945c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1486594be FUN_1486594be body=82 status=ok
// SIG undefined FUN_1486594be(void)

void FUN_1486594be(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 148659510 FUN_148659510 body=118 status=ok
// SIG undefined FUN_148659510(void)

void FUN_148659510(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x88,8);
    iVar2 = (int)(uVar1 / 0x88);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x88,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148659586 FUN_148659586 body=60 status=ok
// SIG undefined FUN_148659586(void)

void FUN_148659586(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486595c2(param_1,param_2);
    param_1 = param_1 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return;
}



// FUNCTION 1486595c2 FUN_1486595c2 body=592 status=ok
// SIG undefined FUN_1486595c2(void)

longlong * FUN_1486595c2(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  
  lVar3 = *param_2;
  *param_1 = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = 0;
  iVar2 = (int)param_2[2];
  pvVar4 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 1,iVar2,0);
    memcpy((void *)param_1[1],pvVar4,(longlong)iVar2);
  }
  param_1[3] = 0;
  iVar2 = (int)param_2[4];
  lVar3 = param_2[3];
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1402ae8a8(param_1 + 3,iVar2,0);
    FUN_140160884(param_1[3],lVar3,iVar2);
  }
  param_1[5] = 0;
  iVar2 = (int)param_2[6];
  pvVar4 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 5,iVar2,0);
    memcpy((void *)param_1[5],pvVar4,(longlong)iVar2 << 3);
  }
  param_1[7] = 0;
  iVar2 = (int)param_2[8];
  lVar3 = param_2[7];
  *(int *)(param_1 + 8) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_148658f60(param_1 + 7,iVar2,0);
    FUN_148658fc2(param_1[7],lVar3,iVar2);
  }
  param_1[9] = 0;
  iVar2 = (int)param_2[10];
  lVar3 = param_2[9];
  *(int *)(param_1 + 10) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_14584f60e(param_1 + 9,iVar2,0);
    FUN_14584f5e2(param_1[9],lVar3,iVar2);
  }
  param_1[0xb] = 0;
  iVar2 = (int)param_2[0xc];
  lVar3 = param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1457d1bce(param_1 + 0xb,iVar2,0);
    FUN_140f746fd(param_1[0xb],lVar3,iVar2);
  }
  *(char *)(param_1 + 0xd) = (char)param_2[0xd];
  cVar1 = *(char *)((longlong)param_2 + 0x74);
  *(char *)((longlong)param_1 + 0x74) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)((longlong)param_1 + 0x6c) = *(undefined8 *)((longlong)param_2 + 0x6c);
  }
  param_1[0xf] = 0;
  iVar2 = (int)param_2[0x10];
  pvVar4 = (void *)param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1401254a2(param_1 + 0xf,iVar2,0);
    memcpy((void *)param_1[0xf],pvVar4,(longlong)iVar2 * 0x28);
  }
  return param_1;
}



// FUNCTION 148659844 FUN_148659844 body=48 status=ok
// SIG undefined FUN_148659844(void)

void FUN_148659844(undefined8 param_1,longlong param_2)

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



// FUNCTION 14865988a FUN_14865988a body=101 status=ok
// SIG undefined FUN_14865988a(void)

undefined8 FUN_14865988a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar4 = *(undefined4 *)(puVar1 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      FUN_144a787a6(param_2 + lVar6 + 0x28,param_3 + lVar6 + 0x28);
      lVar6 = lVar6 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148659918 FUN_148659918 body=59 status=ok
// SIG undefined FUN_148659918(void)

undefined8 FUN_148659918(longlong *param_1)

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



// FUNCTION 1486599b6 FUN_1486599b6 body=52 status=ok
// SIG undefined FUN_1486599b6(void)

void FUN_1486599b6(longlong param_1)

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



// FUNCTION 148659a1e FUN_148659a1e body=54 status=ok
// SIG undefined FUN_148659a1e(void)

undefined1 FUN_148659a1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148659b1c(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 148659a7c FUN_148659a7c body=59 status=ok
// SIG undefined FUN_148659a7c(void)

undefined8 FUN_148659a7c(longlong *param_1)

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



// FUNCTION 148659b1c FUN_148659b1c body=116 status=ok
// SIG undefined FUN_148659b1c(void)

undefined4 * FUN_148659b1c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  longlong lVar6;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  lVar6 = *(longlong *)(param_2 + 4);
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *(longlong *)(param_2 + 4);
    }
  }
  bVar5 = DAT_14c950c29;
  *(longlong *)(param_1 + 4) = lVar6;
  lVar6 = *(longlong *)(param_2 + 6);
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *(longlong *)(param_2 + 6);
    }
  }
  *(longlong *)(param_1 + 6) = lVar6;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x25);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x25) = uVar1;
  return param_1;
}



// FUNCTION 148659c12 FUN_148659c12 body=59 status=ok
// SIG undefined FUN_148659c12(void)

undefined8 FUN_148659c12(longlong *param_1)

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



// FUNCTION 148659cb4 FUN_148659cb4 body=88 status=ok
// SIG undefined FUN_148659cb4(void)

undefined8 * FUN_148659cb4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148659d0c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148659d0c FUN_148659d0c body=98 status=ok
// SIG undefined FUN_148659d0c(void)

void FUN_148659d0c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148659d7a FUN_148659d7a body=55 status=ok
// SIG undefined FUN_148659d7a(void)

void FUN_148659d7a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58d00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58d00 = FUN_140002ddd(FUN_1464c42b3,uVar1,L"GbxActorStateMachineAspect_PlayAnim");
  }
  return;
}



// FUNCTION 148659db2 FUN_148659db2 body=55 status=ok
// SIG undefined FUN_148659db2(void)

void FUN_148659db2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58ce8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58ce8 =
         FUN_140002ddd(FUN_1464c421d,uVar1,L"GbxActorStateMachineAspectSettings_PlayAnim");
  }
  return;
}



// FUNCTION 148659dfa FUN_148659dfa body=55 status=ok
// SIG undefined FUN_148659dfa(void)

void FUN_148659dfa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58d38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58d38 = FUN_140002ddd(FUN_1464c43df,uVar1,L"GbxActorStateMachineAspect_PlaySequence");
  }
  return;
}



// FUNCTION 148659e32 FUN_148659e32 body=55 status=ok
// SIG undefined FUN_148659e32(void)

void FUN_148659e32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58d20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58d20 =
         FUN_140002ddd(FUN_1464c4349,uVar1,L"GbxActorStateMachineAspectSettings_PlaySequence");
  }
  return;
}



// FUNCTION 148659e72 FUN_148659e72 body=55 status=ok
// SIG undefined FUN_148659e72(void)

void FUN_148659e72(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58d68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58d68 = FUN_140002ddd(FUN_1464c450b,uVar1,L"GbxActorStateMachineAspect_PlayTrick");
  }
  return;
}



// FUNCTION 148659eaa FUN_148659eaa body=55 status=ok
// SIG undefined FUN_148659eaa(void)

void FUN_148659eaa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58d50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58d50 =
         FUN_140002ddd(FUN_1464c4475,uVar1,L"GbxActorStateMachineAspectSettings_PlayTrick");
  }
  return;
}



// FUNCTION 148659ee2 FUN_148659ee2 body=357 status=ok
// SIG undefined FUN_148659ee2(void)

void FUN_148659ee2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [3];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  FUN_14894f504(&local_50,local_28,local_30,local_48);
  *param_3 = local_50;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14865a04e FUN_14865a04e body=343 status=ok
// SIG undefined FUN_14865a04e(void)

void FUN_14865a04e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[3] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 3);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14894f57e(local_38[3],local_38[2],local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14865a1a6 FUN_14865a1a6 body=419 status=ok
// SIG undefined FUN_14865a1a6(void)

void FUN_14865a1a6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38 [6];
  
  local_38[5] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[4] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 4);
  }
  local_38[3] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 3);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14894f5e2(local_38[4],local_38[3],local_38[2],local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[5] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14865a350 FUN_14865a350 body=424 status=ok
// SIG undefined FUN_14865a350(void)

void FUN_14865a350(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_144a63fc8();
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
  iVar1 = local_24;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14894f658(local_20,iVar1 != 0,local_30,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14865a504 FUN_14865a504 body=75 status=ok
// SIG undefined FUN_14865a504(void)

void FUN_14865a504(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_143e154c4(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14865a55c FUN_14865a55c body=38 status=ok
// SIG undefined FUN_14865a55c(void)

void FUN_14865a55c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1488be0a6();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14865a592 FUN_14865a592 body=156 status=ok
// SIG undefined FUN_14865a592(void)

void FUN_14865a592(undefined8 param_1,longlong param_2)

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
  FUN_1487c6062(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14865a646 FUN_14865a646 body=346 status=ok
// SIG undefined FUN_14865a646(void)

void FUN_14865a646(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong lStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0;
  lStack_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  plVar1 = &local_40;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  local_48 = lStack_28;
  if ((lStack_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1487c60f0(param_1,&local_58,plVar1);
  if ((DAT_14c950c29 == 1) && (*plVar1 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14865a7a2 FUN_14865a7a2 body=38 status=ok
// SIG undefined FUN_14865a7a2(void)

void FUN_14865a7a2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1487c6074();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14865a7cc FUN_14865a7cc body=37 status=ok
// SIG undefined FUN_14865a7cc(void)

void FUN_14865a7cc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1487c5fb4();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14865a80e FUN_14865a80e body=274 status=ok
// SIG undefined FUN_14865a80e(void)

void FUN_14865a80e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0x4000;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1487c6438(param_1,puVar2,local_3c != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14865a9e4 FUN_14865a9e4 body=164 status=ok
// SIG undefined FUN_14865a9e4(void)

void FUN_14865a9e4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_14577087a(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14865aaa0 FUN_14865aaa0 body=180 status=ok
// SIG undefined FUN_14865aaa0(void)

void FUN_14865aaa0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1487c6e54(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14865ab56 FUN_14865ab56 body=180 status=ok
// SIG undefined FUN_14865ab56(void)

void FUN_14865ab56(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1487c6dde(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14865ac0c FUN_14865ac0c body=428 status=ok
// SIG undefined FUN_14865ac0c(void)

void FUN_14865ac0c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong lStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0;
  lStack_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  plVar1 = &local_40;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  local_48 = lStack_28;
  if ((lStack_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1487c6164(local_20,&local_58,plVar1);
  if ((DAT_14c950c29 == 1) && (*plVar1 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14865adba FUN_14865adba body=38 status=ok
// SIG undefined FUN_14865adba(void)

void FUN_14865adba(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1487c6088();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14865ade0 FUN_14865ade0 body=139 status=ok
// SIG undefined FUN_14865ade0(void)

void FUN_14865ade0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1487c78c6(param_1,&local_28);
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



// FUNCTION 14865ae70 FUN_14865ae70 body=37 status=ok
// SIG undefined FUN_14865ae70(void)

void FUN_14865ae70(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143ca0fcc();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14865aeb2 FUN_14865aeb2 body=274 status=ok
// SIG undefined FUN_14865aeb2(void)

void FUN_14865aeb2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0x4000;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1487c6482(param_1,puVar2,local_3c != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14865b07e FUN_14865b07e body=77 status=ok
// SIG undefined FUN_14865b07e(void)

void FUN_14865b07e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14865b0cc FUN_14865b0cc body=75 status=ok
// SIG undefined FUN_14865b0cc(void)

void FUN_14865b0cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_140921b24(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14865b118 FUN_14865b118 body=45 status=ok
// SIG undefined FUN_14865b118(void)

longlong FUN_14865b118(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14042c3da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b14c FUN_14865b14c body=45 status=ok
// SIG undefined FUN_14865b14c(void)

longlong FUN_14865b14c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14042c3da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b180 FUN_14865b180 body=48 status=ok
// SIG undefined FUN_14865b180(void)

longlong FUN_14865b180(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xa0;
  FUN_14042c3da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b1b8 FUN_14865b1b8 body=45 status=ok
// SIG undefined FUN_14865b1b8(void)

longlong FUN_14865b1b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x68;
  FUN_140e799ca(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b1ec FUN_14865b1ec body=48 status=ok
// SIG undefined FUN_14865b1ec(void)

longlong FUN_14865b1ec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb0;
  FUN_140e799ca(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b224 FUN_14865b224 body=48 status=ok
// SIG undefined FUN_14865b224(void)

longlong FUN_14865b224(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xb8;
  FUN_140e799ca(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b25c FUN_14865b25c body=48 status=ok
// SIG undefined FUN_14865b25c(void)

longlong FUN_14865b25c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xc0;
  FUN_140e799ca(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b294 FUN_14865b294 body=48 status=ok
// SIG undefined FUN_14865b294(void)

longlong FUN_14865b294(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe8;
  FUN_140e799ca(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b2c4 FUN_14865b2c4 body=45 status=ok
// SIG undefined FUN_14865b2c4(void)

longlong FUN_14865b2c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140a07062(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b2f2 FUN_14865b2f2 body=48 status=ok
// SIG undefined FUN_14865b2f2(void)

longlong FUN_14865b2f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x210;
  FUN_140a07062(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b32a FUN_14865b32a body=48 status=ok
// SIG undefined FUN_14865b32a(void)

longlong FUN_14865b32a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x5b8;
  FUN_140a07062(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b362 FUN_14865b362 body=48 status=ok
// SIG undefined FUN_14865b362(void)

longlong FUN_14865b362(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x880;
  FUN_140a07062(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b39a FUN_14865b39a body=45 status=ok
// SIG undefined FUN_14865b39a(void)

longlong FUN_14865b39a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140bcc9da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b3c8 FUN_14865b3c8 body=45 status=ok
// SIG undefined FUN_14865b3c8(void)

longlong FUN_14865b3c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140bcc9da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b3f6 FUN_14865b3f6 body=45 status=ok
// SIG undefined FUN_14865b3f6(void)

longlong FUN_14865b3f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140bcc9da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b424 FUN_14865b424 body=45 status=ok
// SIG undefined FUN_14865b424(void)

longlong FUN_14865b424(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140bcc9da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b462 FUN_14865b462 body=48 status=ok
// SIG undefined FUN_14865b462(void)

longlong FUN_14865b462(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_1409f2bb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b4b2 FUN_14865b4b2 body=48 status=ok
// SIG undefined FUN_14865b4b2(void)

longlong FUN_14865b4b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_1409f2bb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b4f0 FUN_14865b4f0 body=45 status=ok
// SIG undefined FUN_14865b4f0(void)

longlong FUN_14865b4f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140b21418(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b524 FUN_14865b524 body=48 status=ok
// SIG undefined FUN_14865b524(void)

longlong FUN_14865b524(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_140b21418(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b55c FUN_14865b55c body=48 status=ok
// SIG undefined FUN_14865b55c(void)

longlong FUN_14865b55c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_140b21418(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b594 FUN_14865b594 body=48 status=ok
// SIG undefined FUN_14865b594(void)

longlong FUN_14865b594(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_140b21418(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b5cc FUN_14865b5cc body=48 status=ok
// SIG undefined FUN_14865b5cc(void)

longlong FUN_14865b5cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x690;
  FUN_140b21418(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b634 FUN_14865b634 body=48 status=ok
// SIG undefined FUN_14865b634(void)

longlong FUN_14865b634(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x698;
  FUN_140b21418(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b664 FUN_14865b664 body=48 status=ok
// SIG undefined FUN_14865b664(void)

longlong FUN_14865b664(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x6a0;
  FUN_140b21418(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865b6b4 FUN_14865b6b4 body=96 status=ok
// SIG undefined FUN_14865b6b4(void)

void FUN_14865b6b4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x88);
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  param_2[3] = 0xffffffff00000000;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0xf00000d0;
  *param_2 = &PTR_FUN_14b094890;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined8 *)((longlong)param_2 + 0x79) = 0;
  *(undefined8 *)((longlong)param_2 + 0x81) = 0;
  return;
}



// FUNCTION 14865b77c FUN_14865b77c body=63 status=ok
// SIG undefined FUN_14865b77c(void)

undefined1 FUN_14865b77c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865b8f4(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 14865b7e4 FUN_14865b7e4 body=59 status=ok
// SIG undefined FUN_14865b7e4(void)

undefined8 FUN_14865b7e4(longlong *param_1)

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



// FUNCTION 14865b830 FUN_14865b830 body=62 status=ok
// SIG undefined FUN_14865b830(void)

void FUN_14865b830(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14b094890;
    if (param_2[0xf] != 0) {
      FUN_1400020a8();
    }
    FUN_1410fee06(param_2);
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 14865b8bc FUN_14865b8bc body=55 status=ok
// SIG undefined FUN_14865b8bc(void)

void FUN_14865b8bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58ce8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58ce8 =
         FUN_140002ddd(FUN_1464c421d,uVar1,L"GbxActorStateMachineAspectSettings_PlayAnim");
  }
  return;
}



// FUNCTION 14865b8f4 FUN_14865b8f4 body=122 status=ok
// SIG undefined FUN_14865b8f4(void)

longlong FUN_14865b8f4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  }
  if (*(longlong *)(param_1 + 0x14) != *(longlong *)(param_2 + 0x14)) {
    *(longlong *)(param_1 + 0x14) = *(longlong *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  }
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  FUN_14117b026(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  return param_1;
}



// FUNCTION 14865b9f4 FUN_14865b9f4 body=54 status=ok
// SIG undefined FUN_14865b9f4(void)

undefined1 FUN_14865b9f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470baa6e(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 14865ba52 FUN_14865ba52 body=59 status=ok
// SIG undefined FUN_14865ba52(void)

undefined8 FUN_14865ba52(longlong *param_1)

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



// FUNCTION 14865ba98 FUN_14865ba98 body=57 status=ok
// SIG undefined FUN_14865ba98(void)

void FUN_14865ba98(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14b094a10;
    if (param_2[7] != 0) {
      FUN_14078b1f4(param_2);
    }
    FUN_141313ea4(param_2);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 14865bb20 FUN_14865bb20 body=66 status=ok
// SIG undefined FUN_14865bb20(void)

undefined8 * FUN_14865bb20(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b094a10;
  if (param_1[7] != 0) {
    FUN_14078b1f4(param_1);
  }
  FUN_141313ea4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865bb62 FUN_14865bb62 body=55 status=ok
// SIG undefined FUN_14865bb62(void)

void FUN_14865bb62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58d00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58d00 = FUN_140002ddd(FUN_1464c42b3,uVar1,L"GbxActorStateMachineAspect_PlayAnim");
  }
  return;
}



// FUNCTION 14865bbe0 FUN_14865bbe0 body=59 status=ok
// SIG undefined FUN_14865bbe0(void)

undefined8 FUN_14865bbe0(longlong *param_1)

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



// FUNCTION 14865bc2c FUN_14865bc2c body=62 status=ok
// SIG undefined FUN_14865bc2c(void)

void FUN_14865bc2c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *param_2 = &PTR_FUN_14b094bd0;
    if (param_2[0xf] != 0) {
      FUN_1400020a8();
    }
    FUN_1410fee06(param_2);
    *(undefined1 *)(param_2 + 0x14) = 0;
  }
  return;
}



// FUNCTION 14865bd2c FUN_14865bd2c body=55 status=ok
// SIG undefined FUN_14865bd2c(void)

void FUN_14865bd2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58d20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58d20 =
         FUN_140002ddd(FUN_1464c4349,uVar1,L"GbxActorStateMachineAspectSettings_PlaySequence");
  }
  return;
}



// FUNCTION 14865bdf0 FUN_14865bdf0 body=54 status=ok
// SIG undefined FUN_14865bdf0(void)

undefined1 FUN_14865bdf0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865bf66(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 14865be4e FUN_14865be4e body=59 status=ok
// SIG undefined FUN_14865be4e(void)

undefined8 FUN_14865be4e(longlong *param_1)

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



// FUNCTION 14865be94 FUN_14865be94 body=32 status=ok
// SIG undefined FUN_14865be94(void)

void FUN_14865be94(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14097199e(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14865bf02 FUN_14865bf02 body=38 status=ok
// SIG undefined FUN_14865bf02(void)

undefined8 FUN_14865bf02(undefined8 param_1,int param_2)

{
  FUN_14097199e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865bf28 FUN_14865bf28 body=55 status=ok
// SIG undefined FUN_14865bf28(void)

void FUN_14865bf28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58d38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58d38 = FUN_140002ddd(FUN_1464c43df,uVar1,L"GbxActorStateMachineAspect_PlaySequence");
  }
  return;
}



// FUNCTION 14865bf66 FUN_14865bf66 body=87 status=ok
// SIG undefined FUN_14865bf66(void)

longlong FUN_14865bf66(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1470baa6e();
  lVar1 = *(longlong *)(param_2 + 0x50);
  lVar2 = *(longlong *)(param_1 + 0x50);
  if (lVar1 == 0) {
    if (lVar2 == 0) goto LAB_14865bfa0;
    FUN_140113f3a();
  }
  else {
    if (lVar2 == lVar1) goto LAB_14865bfa0;
    if (lVar2 != 0) {
      FUN_140113f3a();
    }
    FUN_1401924dc(lVar1);
  }
  *(longlong *)(param_1 + 0x50) = lVar1;
LAB_14865bfa0:
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  return param_1;
}



// FUNCTION 14865bfbe FUN_14865bfbe body=96 status=ok
// SIG undefined FUN_14865bfbe(void)

void FUN_14865bfbe(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x88);
  *(undefined4 *)(param_2 + 2) = 0xffffffff;
  param_2[3] = 0xffffffff00000000;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0xf00000d0;
  *param_2 = &PTR_FUN_14b094f10;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined8 *)((longlong)param_2 + 0x79) = 0;
  *(undefined8 *)((longlong)param_2 + 0x81) = 0;
  return;
}



// FUNCTION 14865c086 FUN_14865c086 body=63 status=ok
// SIG undefined FUN_14865c086(void)

undefined1 FUN_14865c086(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865c1fa(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 14865c0ee FUN_14865c0ee body=59 status=ok
// SIG undefined FUN_14865c0ee(void)

undefined8 FUN_14865c0ee(longlong *param_1)

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



// FUNCTION 14865c13a FUN_14865c13a body=62 status=ok
// SIG undefined FUN_14865c13a(void)

void FUN_14865c13a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14b094f10;
    if (param_2[0xf] != 0) {
      FUN_1400020a8();
    }
    FUN_1410fee06(param_2);
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 14865c1c2 FUN_14865c1c2 body=55 status=ok
// SIG undefined FUN_14865c1c2(void)

void FUN_14865c1c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58d50 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58d50 =
         FUN_140002ddd(FUN_1464c4475,uVar1,L"GbxActorStateMachineAspectSettings_PlayTrick");
  }
  return;
}



// FUNCTION 14865c1fa FUN_14865c1fa body=122 status=ok
// SIG undefined FUN_14865c1fa(void)

longlong FUN_14865c1fa(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  }
  if (*(longlong *)(param_1 + 0x14) != *(longlong *)(param_2 + 0x14)) {
    *(longlong *)(param_1 + 0x14) = *(longlong *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  }
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  FUN_14117b026(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  return param_1;
}



// FUNCTION 14865c2fa FUN_14865c2fa body=60 status=ok
// SIG undefined FUN_14865c2fa(void)

undefined1 FUN_14865c2fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470baa6e(param_2,param_3);
    *(undefined1 *)(param_2 + 0x50) = *(undefined1 *)(param_3 + 0x50);
    param_2 = param_2 + 0x58;
    param_3 = param_3 + 0x58;
  }
  return 1;
}



// FUNCTION 14865c35e FUN_14865c35e body=59 status=ok
// SIG undefined FUN_14865c35e(void)

undefined8 FUN_14865c35e(longlong *param_1)

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



// FUNCTION 14865c3a4 FUN_14865c3a4 body=57 status=ok
// SIG undefined FUN_14865c3a4(void)

void FUN_14865c3a4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xb) == '\x01') {
    *param_2 = &PTR_FUN_14b095090;
    if (param_2[7] != 0) {
      FUN_14078b1f4(param_2);
    }
    FUN_141313ea4(param_2);
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  return;
}



// FUNCTION 14865c42c FUN_14865c42c body=66 status=ok
// SIG undefined FUN_14865c42c(void)

undefined8 * FUN_14865c42c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b095090;
  if (param_1[7] != 0) {
    FUN_14078b1f4(param_1);
  }
  FUN_141313ea4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865c46e FUN_14865c46e body=55 status=ok
// SIG undefined FUN_14865c46e(void)

void FUN_14865c46e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58d68 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58d68 = FUN_140002ddd(FUN_1464c450b,uVar1,L"GbxActorStateMachineAspect_PlayTrick");
  }
  return;
}



// FUNCTION 14865c526 FUN_14865c526 body=59 status=ok
// SIG undefined FUN_14865c526(void)

undefined8 FUN_14865c526(longlong *param_1)

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



// FUNCTION 14865c690 FUN_14865c690 body=59 status=ok
// SIG undefined FUN_14865c690(void)

undefined8 FUN_14865c690(longlong *param_1)

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



// FUNCTION 14865c78a FUN_14865c78a body=112 status=ok
// SIG undefined FUN_14865c78a(void)

undefined8 FUN_14865c78a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar4 = *(undefined4 *)(puVar1 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 3);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[5];
      *(undefined4 *)(lVar2 + 0x17) = *(undefined4 *)((longlong)puVar1 + 0x2f);
      lVar6 = lVar6 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14865c822 FUN_14865c822 body=59 status=ok
// SIG undefined FUN_14865c822(void)

undefined8 FUN_14865c822(longlong *param_1)

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



// FUNCTION 14865c868 FUN_14865c868 body=38 status=ok
// SIG undefined FUN_14865c868(void)

void FUN_14865c868(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14865c8de FUN_14865c8de body=37 status=ok
// SIG undefined FUN_14865c8de(void)

void FUN_14865c8de(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x138);
  FUN_143c460ce(param_2);
  return;
}



// FUNCTION 14865c92a FUN_14865c92a body=63 status=ok
// SIG undefined FUN_14865c92a(void)

undefined1 FUN_14865c92a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865ca52(param_2,param_3);
    param_3 = param_3 + 0x138;
    param_2 = param_2 + 0x138;
  }
  return 1;
}



// FUNCTION 14865c992 FUN_14865c992 body=59 status=ok
// SIG undefined FUN_14865c992(void)

undefined8 FUN_14865c992(longlong *param_1)

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



// FUNCTION 14865c9de FUN_14865c9de body=38 status=ok
// SIG undefined FUN_14865c9de(void)

void FUN_14865c9de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x138) == '\x01') {
    FUN_140b21dd6(param_2);
    *(undefined1 *)(param_2 + 0x138) = 0;
  }
  return;
}



// FUNCTION 14865ca52 FUN_14865ca52 body=167 status=ok
// SIG undefined FUN_14865ca52(void)

undefined8 * FUN_14865ca52(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  FUN_144983130(param_1 + 7,param_2 + 7);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  FUN_144983130(param_1 + 0xf,param_2 + 0xf);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  FUN_144983130(param_1 + 0x17,param_2 + 0x17);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0x1e);
  FUN_144983130(param_1 + 0x1f,param_2 + 0x1f);
  *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(param_2 + 0x26);
  return param_1;
}



// FUNCTION 14865cafa FUN_14865cafa body=37 status=ok
// SIG undefined FUN_14865cafa(void)

void FUN_14865cafa(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa8);
  FUN_143c461c2(param_2);
  return;
}



// FUNCTION 14865cb46 FUN_14865cb46 body=63 status=ok
// SIG undefined FUN_14865cb46(void)

undefined1 FUN_14865cb46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865cc6e(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 14865cbae FUN_14865cbae body=59 status=ok
// SIG undefined FUN_14865cbae(void)

undefined8 FUN_14865cbae(longlong *param_1)

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



// FUNCTION 14865cbfa FUN_14865cbfa body=38 status=ok
// SIG undefined FUN_14865cbfa(void)

void FUN_14865cbfa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_14865b07e(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 14865cc6e FUN_14865cc6e body=122 status=ok
// SIG undefined FUN_14865cc6e(void)

undefined4 * FUN_14865cc6e(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  lVar8 = *(longlong *)(param_2 + 0xc);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 0xc);
    }
  }
  *(longlong *)(param_1 + 0xc) = lVar8;
  uVar1 = param_2[0xf];
  uVar2 = param_2[0x10];
  uVar3 = param_2[0x11];
  uVar4 = param_2[0x11];
  uVar5 = param_2[0x12];
  uVar6 = param_2[0x13];
  uVar7 = param_2[0x14];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar3;
  param_1[0x11] = uVar4;
  param_1[0x12] = uVar5;
  param_1[0x13] = uVar6;
  param_1[0x14] = uVar7;
  FUN_14054d9c0(param_1 + 0x16,param_2 + 0x16);
  return param_1;
}



// FUNCTION 14865cd26 FUN_14865cd26 body=120 status=ok
// SIG undefined FUN_14865cd26(void)

undefined1 FUN_14865cd26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(param_3 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar3;
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar4);
      *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(param_3 + 0x10 + lVar4);
      *(undefined2 *)(plVar1 + 3) = *(undefined2 *)(param_3 + 0x18 + lVar4);
      lVar4 = lVar4 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14865cdc6 FUN_14865cdc6 body=59 status=ok
// SIG undefined FUN_14865cdc6(void)

undefined8 FUN_14865cdc6(longlong *param_1)

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



// FUNCTION 14865ce68 FUN_14865ce68 body=37 status=ok
// SIG undefined FUN_14865ce68(void)

void FUN_14865ce68(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd8);
  FUN_143c4622c(param_2);
  return;
}



// FUNCTION 14865ce96 FUN_14865ce96 body=46 status=ok
// SIG undefined FUN_14865ce96(void)

void FUN_14865ce96(undefined8 param_1,longlong param_2)

{
  FUN_144a2da94(param_2 + 0x90);
  FUN_144a2da94(param_2 + 0x58);
  FUN_144a2da94(param_2 + 0x20);
  return;
}



// FUNCTION 14865ceda FUN_14865ceda body=63 status=ok
// SIG undefined FUN_14865ceda(void)

undefined1 FUN_14865ceda(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865cfe4(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 14865cf42 FUN_14865cf42 body=59 status=ok
// SIG undefined FUN_14865cf42(void)

undefined8 FUN_14865cf42(longlong *param_1)

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



// FUNCTION 14865cfe4 FUN_14865cfe4 body=110 status=ok
// SIG undefined FUN_14865cfe4(void)

undefined1 * FUN_14865cfe4(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  FUN_14184a5b6(param_1 + 8,param_2 + 8);
  FUN_144983130(param_1 + 0x20,param_2 + 0x20);
  FUN_144983130(param_1 + 0x58,param_2 + 0x58);
  FUN_144983130(param_1 + 0x90,param_2 + 0x90);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(param_2 + 0xd0);
  return param_1;
}



// FUNCTION 14865d054 FUN_14865d054 body=60 status=ok
// SIG undefined FUN_14865d054(void)

void FUN_14865d054(longlong param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    FUN_144a2da94(param_1 + 0x90);
    FUN_144a2da94(param_1 + 0x58);
    FUN_144a2da94(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 14865d090 FUN_14865d090 body=37 status=ok
// SIG undefined FUN_14865d090(void)

void FUN_14865d090(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd8);
  FUN_143c462e6(param_2);
  return;
}



// FUNCTION 14865d0be FUN_14865d0be body=46 status=ok
// SIG undefined FUN_14865d0be(void)

void FUN_14865d0be(undefined8 param_1,longlong param_2)

{
  FUN_144a2da94(param_2 + 0x98);
  FUN_144a2da94(param_2 + 0x58);
  FUN_144a2da94(param_2 + 0x20);
  return;
}



// FUNCTION 14865d102 FUN_14865d102 body=63 status=ok
// SIG undefined FUN_14865d102(void)

undefined1 FUN_14865d102(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865d20c(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 14865d16a FUN_14865d16a body=59 status=ok
// SIG undefined FUN_14865d16a(void)

undefined8 FUN_14865d16a(longlong *param_1)

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



// FUNCTION 14865d20c FUN_14865d20c body=108 status=ok
// SIG undefined FUN_14865d20c(void)

undefined1 * FUN_14865d20c(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  FUN_14184a60c(param_1 + 8,param_2 + 8);
  FUN_144983130(param_1 + 0x20,param_2 + 0x20);
  FUN_144983130(param_1 + 0x58,param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  FUN_144983130(param_1 + 0x98,param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  return param_1;
}



// FUNCTION 14865d27a FUN_14865d27a body=60 status=ok
// SIG undefined FUN_14865d27a(void)

void FUN_14865d27a(longlong param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    FUN_144a2da94(param_1 + 0x98);
    FUN_144a2da94(param_1 + 0x58);
    FUN_144a2da94(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 14865d2b6 FUN_14865d2b6 body=135 status=ok
// SIG undefined FUN_14865d2b6(void)

void FUN_14865d2b6(undefined8 param_1,undefined1 *param_2)

{
  memset(param_2,0,0xa0);
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined2 *)(param_2 + 0x40) = 4;
  *(undefined4 *)(param_2 + 0x28) = 0x43960000;
  param_2[0x48] = 3;
  param_2[0x50] = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)(param_2 + 0x58) = 0x451c4000449c4000;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined2 *)(param_2 + 0x80) = 0;
  param_2[0x88] = 0;
  param_2[0x90] = 0;
  param_2[0x98] = 0;
  return;
}



// FUNCTION 14865d3a4 FUN_14865d3a4 body=34 status=ok
// SIG undefined FUN_14865d3a4(void)

void FUN_14865d3a4(undefined8 param_1,longlong param_2)

{
  FUN_144a2da94(param_2 + 0x60);
  FUN_144a2da94(param_2 + 0x20);
  return;
}



// FUNCTION 14865d3dc FUN_14865d3dc body=154 status=ok
// SIG undefined FUN_14865d3dc(void)

undefined8 FUN_14865d3dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_14184a60c();
      FUN_144983130(param_2 + lVar1 + 0x20,param_3 + lVar1 + 0x20);
      *(undefined8 *)(param_2 + lVar1 + 0x58) = *(undefined8 *)(param_3 + lVar1 + 0x58);
      FUN_144983130(param_2 + lVar1 + 0x60,param_3 + lVar1 + 0x60);
      *(undefined1 *)(param_2 + lVar1 + 0x98) = *(undefined1 *)(param_3 + lVar1 + 0x98);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14865d49e FUN_14865d49e body=59 status=ok
// SIG undefined FUN_14865d49e(void)

undefined8 FUN_14865d49e(longlong *param_1)

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



// FUNCTION 14865d4ea FUN_14865d4ea body=48 status=ok
// SIG undefined FUN_14865d4ea(void)

void FUN_14865d4ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_144a2da94(param_2 + 0x60);
    FUN_144a2da94(param_2 + 0x20);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 14865d56a FUN_14865d56a body=31 status=ok
// SIG undefined FUN_14865d56a(void)

undefined8 FUN_14865d56a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865d58a FUN_14865d58a body=29 status=ok
// SIG undefined FUN_14865d58a(void)

undefined8 FUN_14865d58a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865d664 FUN_14865d664 body=45 status=ok
// SIG undefined FUN_14865d664(void)

longlong FUN_14865d664(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14006e79a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865d6b2 FUN_14865d6b2 body=134 status=ok
// SIG undefined FUN_14865d6b2(void)

undefined8 FUN_14865d6b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_141289ada(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      FUN_144983130(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      FUN_144983130(param_2 + lVar1 + 0x50,param_3 + lVar1 + 0x50);
      *(undefined8 *)(param_2 + lVar1 + 0x88) = *(undefined8 *)(param_3 + lVar1 + 0x88);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14865d760 FUN_14865d760 body=59 status=ok
// SIG undefined FUN_14865d760(void)

undefined8 FUN_14865d760(longlong *param_1)

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



// FUNCTION 14865d7ac FUN_14865d7ac body=40 status=ok
// SIG undefined FUN_14865d7ac(void)

void FUN_14865d7ac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_14582d940(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 14865d81a FUN_14865d81a body=57 status=ok
// SIG undefined FUN_14865d81a(void)

void FUN_14865d81a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb590c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb590c8 = FUN_140002ddd(FUN_1464c55d7,uVar1,L"GbxAINodeFollowSettingsDef");
  }
  return;
}



// FUNCTION 14865d854 FUN_14865d854 body=28 status=ok
// SIG undefined FUN_14865d854(void)

undefined8 FUN_14865d854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14865d8a0 FUN_14865d8a0 body=63 status=ok
// SIG undefined FUN_14865d8a0(void)

undefined1 FUN_14865d8a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865da0e(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 14865d908 FUN_14865d908 body=59 status=ok
// SIG undefined FUN_14865d908(void)

undefined8 FUN_14865d908(longlong *param_1)

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



// FUNCTION 14865d954 FUN_14865d954 body=49 status=ok
// SIG undefined FUN_14865d954(void)

void FUN_14865d954(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x16) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 0x16) = 0;
  }
  return;
}



// FUNCTION 14865d9d4 FUN_14865d9d4 body=57 status=ok
// SIG undefined FUN_14865d9d4(void)

void FUN_14865d9d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb590f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb590f8 = FUN_140002ddd(FUN_1464c569f,uVar1,L"GbxAINodeGlobals");
  }
  return;
}



// FUNCTION 14865da0e FUN_14865da0e body=153 status=ok
// SIG undefined FUN_14865da0e(void)

longlong FUN_14865da0e(longlong param_1,longlong param_2)

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
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  uVar2 = *(undefined4 *)(param_2 + 0x3c);
  uVar3 = *(undefined4 *)(param_2 + 0x40);
  uVar4 = *(undefined4 *)(param_2 + 0x44);
  uVar5 = *(undefined4 *)(param_2 + 0x48);
  uVar6 = *(undefined4 *)(param_2 + 0x4c);
  uVar7 = *(undefined4 *)(param_2 + 0x50);
  uVar8 = *(undefined4 *)(param_2 + 0x54);
  uVar9 = *(undefined4 *)(param_2 + 0x58);
  uVar10 = *(undefined4 *)(param_2 + 0x5c);
  uVar11 = *(undefined4 *)(param_2 + 0x60);
  uVar12 = *(undefined4 *)(param_2 + 100);
  uVar13 = *(undefined4 *)(param_2 + 0x68);
  uVar14 = *(undefined4 *)(param_2 + 0x6c);
  uVar15 = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = uVar13;
  *(undefined4 *)(param_1 + 0x6c) = uVar14;
  *(undefined4 *)(param_1 + 0x70) = uVar15;
  *(undefined4 *)(param_1 + 0x58) = uVar9;
  *(undefined4 *)(param_1 + 0x5c) = uVar10;
  *(undefined4 *)(param_1 + 0x60) = uVar11;
  *(undefined4 *)(param_1 + 100) = uVar12;
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  *(undefined4 *)(param_1 + 0x50) = uVar7;
  *(undefined4 *)(param_1 + 0x54) = uVar8;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  FUN_14184a60c(param_1 + 0x78,param_2 + 0x78);
  FUN_14184a5b6(param_1 + 0x90,param_2 + 0x90);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  return param_1;
}



// FUNCTION 14865dac6 FUN_14865dac6 body=63 status=ok
// SIG undefined FUN_14865dac6(void)

undefined1 FUN_14865dac6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865dc22(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 14865db2e FUN_14865db2e body=59 status=ok
// SIG undefined FUN_14865db2e(void)

undefined8 FUN_14865db2e(longlong *param_1)

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



// FUNCTION 14865db7a FUN_14865db7a body=40 status=ok
// SIG undefined FUN_14865db7a(void)

void FUN_14865db7a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_14581d736(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 14865dbe8 FUN_14865dbe8 body=57 status=ok
// SIG undefined FUN_14865dbe8(void)

void FUN_14865dbe8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59110 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59110 = FUN_140002ddd(FUN_1464c56ce,uVar1,L"GbxAINodeLeadSettingsDef");
  }
  return;
}



// FUNCTION 14865dc22 FUN_14865dc22 body=92 status=ok
// SIG undefined FUN_14865dc22(void)

longlong FUN_14865dc22(longlong param_1,longlong param_2)

{
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_144983130(param_1 + 0x18,param_2 + 0x18);
  FUN_144983130(param_1 + 0x50,param_2 + 0x50);
  FUN_144983130(param_1 + 0x88,param_2 + 0x88);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  return param_1;
}



// FUNCTION 14865dc80 FUN_14865dc80 body=28 status=ok
// SIG undefined FUN_14865dc80(void)

undefined8 FUN_14865dc80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 14865dd00 FUN_14865dd00 body=54 status=ok
// SIG undefined FUN_14865dd00(void)

undefined1 FUN_14865dd00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865de3c(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 14865dd46 FUN_14865dd46 body=39 status=ok
// SIG undefined FUN_14865dd46(void)

void FUN_14865dd46(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1487cd196(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 14865dd82 FUN_14865dd82 body=59 status=ok
// SIG undefined FUN_14865dd82(void)

undefined8 FUN_14865dd82(longlong *param_1)

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



// FUNCTION 14865ddc8 FUN_14865ddc8 body=38 status=ok
// SIG undefined FUN_14865ddc8(void)

void FUN_14865ddc8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14865de3c FUN_14865de3c body=118 status=ok
// SIG undefined FUN_14865de3c(void)

longlong * FUN_14865de3c(longlong *param_1,longlong *param_2)

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
      FUN_14689c22e();
      lVar3 = *param_2;
    }
  }
  *param_1 = lVar3;
  param_1[1] = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar3 = param_2[3];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(int *)(param_1 + 3) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  lVar3 = param_2[6];
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = param_2[6];
    }
  }
  param_1[6] = lVar3;
  return param_1;
}



// FUNCTION 14865df56 FUN_14865df56 body=59 status=ok
// SIG undefined FUN_14865df56(void)

undefined8 FUN_14865df56(longlong *param_1)

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



// FUNCTION 14865dff6 FUN_14865dff6 body=29 status=ok
// SIG undefined FUN_14865dff6(void)

undefined8 FUN_14865dff6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865e0d6 FUN_14865e0d6 body=59 status=ok
// SIG undefined FUN_14865e0d6(void)

undefined8 FUN_14865e0d6(longlong *param_1)

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



// FUNCTION 14865e232 FUN_14865e232 body=59 status=ok
// SIG undefined FUN_14865e232(void)

undefined8 FUN_14865e232(longlong *param_1)

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



// FUNCTION 14865e390 FUN_14865e390 body=63 status=ok
// SIG undefined FUN_14865e390(void)

undefined1 FUN_14865e390(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865e4a8(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 14865e3fc FUN_14865e3fc body=59 status=ok
// SIG undefined FUN_14865e3fc(void)

undefined8 FUN_14865e3fc(longlong *param_1)

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



// FUNCTION 14865e4a8 FUN_14865e4a8 body=131 status=ok
// SIG undefined FUN_14865e4a8(void)

longlong FUN_14865e4a8(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  FUN_147e2f622(param_1 + 0x40,param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  if ((*(longlong *)(param_1 + 0x60) != *(longlong *)(param_2 + 0x60)) ||
     (*(int *)(param_1 + 0x68) != *(int *)(param_2 + 0x68))) {
    *(longlong *)(param_1 + 0x60) = *(longlong *)(param_2 + 0x60);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_2 + 0x78);
  return param_1;
}



// FUNCTION 14865e52c FUN_14865e52c body=132 status=ok
// SIG undefined FUN_14865e52c(void)

void FUN_14865e52c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x148);
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14b0a0930;
  param_2[0x22] = 0;
  *(undefined4 *)(param_2 + 0x23) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *(undefined1 *)(param_2 + 0x1d) = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  *(undefined8 *)((longlong)param_2 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x124) = 0;
  param_2[0x26] = 0;
  *(undefined4 *)(param_2 + 0x27) = 0;
  *(undefined1 *)(param_2 + 0x28) = 0;
  return;
}



// FUNCTION 14865e5b0 FUN_14865e5b0 body=112 status=ok
// SIG undefined FUN_14865e5b0(void)

void FUN_14865e5b0(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14b0a0930;
  param_2[0x22] = 0;
  *(undefined4 *)(param_2 + 0x23) = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  *(undefined1 *)(param_2 + 0x1d) = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  *(undefined8 *)((longlong)param_2 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x124) = 0;
  param_2[0x26] = 0;
  *(undefined4 *)(param_2 + 0x27) = 0;
  *(undefined1 *)(param_2 + 0x28) = 0;
  return;
}



// FUNCTION 14865e644 FUN_14865e644 body=63 status=ok
// SIG undefined FUN_14865e644(void)

undefined1 FUN_14865e644(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865e7f6(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 14865e6ac FUN_14865e6ac body=59 status=ok
// SIG undefined FUN_14865e6ac(void)

undefined8 FUN_14865e6ac(longlong *param_1)

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



// FUNCTION 14865e6f8 FUN_14865e6f8 body=38 status=ok
// SIG undefined FUN_14865e6f8(void)

void FUN_14865e6f8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_14865e76c(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 14865e76c FUN_14865e76c body=138 status=ok
// SIG undefined FUN_14865e76c(void)

void FUN_14865e76c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0a0930;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_14090bbce(param_1 + 0x1e);
  FUN_144909e75(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14865e7f6 FUN_14865e7f6 body=218 status=ok
// SIG undefined FUN_14865e7f6(void)

longlong FUN_14865e7f6(longlong param_1,longlong param_2)

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
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_14123bd80(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0xa0);
  uVar7 = *(undefined4 *)(param_2 + 0xa4);
  uVar8 = *(undefined4 *)(param_2 + 0xa8);
  uVar9 = *(undefined4 *)(param_2 + 0xac);
  uVar10 = *(undefined4 *)(param_2 + 0xb0);
  uVar11 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar8;
  *(undefined4 *)(param_1 + 0xac) = uVar9;
  *(undefined4 *)(param_1 + 0xb0) = uVar10;
  *(undefined4 *)(param_1 + 0xb4) = uVar11;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_140d2c6ac(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  FUN_140123c3c(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
  FUN_1404233de(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
  return param_1;
}



// FUNCTION 14865e8d2 FUN_14865e8d2 body=181 status=ok
// SIG undefined FUN_14865e8d2(void)

void FUN_14865e8d2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x3e0);
  FUN_140e47e4e(param_2);
  *param_2 = &PTR_FUN_14b0a0bc0;
  *(undefined8 *)((longlong)param_2 + 0x2dc) = 0xffffffff7fffffff;
  param_2[0x5e] = 0;
  param_2[0x5f] = 0;
  *(undefined4 *)(param_2 + 0x60) = 0;
  *(undefined4 *)((longlong)param_2 + 0x304) = 0;
  *(undefined4 *)(param_2 + 0x61) = 0;
  *(undefined4 *)((longlong)param_2 + 0x30c) = 0x3ff00000;
  param_2[0x62] = 0;
  param_2[99] = 0;
  param_2[100] = 0;
  param_2[0x65] = 0;
  param_2[0x66] = 0x3ff0000000000000;
  param_2[0x67] = 0x3ff0000000000000;
  param_2[0x68] = 0x3ff0000000000000;
  param_2[0x69] = 0;
  param_2[0x6a] = 0;
  param_2[0x6b] = 0xffffffffffffffff;
  *(undefined1 *)(param_2 + 0x5a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2d4) = 0;
  param_2[0x6c] = 0;
  *(undefined1 *)(param_2 + 0x7a) = 0;
  return;
}



// FUNCTION 14865e988 FUN_14865e988 body=161 status=ok
// SIG undefined FUN_14865e988(void)

void FUN_14865e988(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e47e4e(param_2);
  *param_2 = &PTR_FUN_14b0a0bc0;
  *(undefined8 *)((longlong)param_2 + 0x2dc) = 0xffffffff7fffffff;
  param_2[0x5e] = 0;
  param_2[0x5f] = 0;
  *(undefined4 *)(param_2 + 0x60) = 0;
  *(undefined4 *)((longlong)param_2 + 0x304) = 0;
  *(undefined4 *)(param_2 + 0x61) = 0;
  *(undefined4 *)((longlong)param_2 + 0x30c) = 0x3ff00000;
  param_2[0x62] = 0;
  param_2[99] = 0;
  param_2[100] = 0;
  param_2[0x65] = 0;
  param_2[0x66] = 0x3ff0000000000000;
  param_2[0x67] = 0x3ff0000000000000;
  param_2[0x68] = 0x3ff0000000000000;
  param_2[0x69] = 0;
  param_2[0x6a] = 0;
  param_2[0x6b] = 0xffffffffffffffff;
  *(undefined1 *)(param_2 + 0x5a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2d4) = 0;
  param_2[0x6c] = 0;
  *(undefined1 *)(param_2 + 0x7a) = 0;
  return;
}



// FUNCTION 14865ea4e FUN_14865ea4e body=174 status=ok
// SIG undefined FUN_14865ea4e(void)

undefined8 FUN_14865ea4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  do {
    if (param_4 == 0) {
      return 1;
    }
    memcpy((void *)(param_2 + 0x10),(void *)(param_3 + 0x10),0x2b4);
    memcpy((void *)(param_2 + 0x2d0),(void *)(param_3 + 0x2d0),0x98);
    if (param_2 != param_3) {
      if (*(char *)(param_3 + 0x3d0) == '\x01') {
        puVar3 = (undefined8 *)(param_3 + 0x370);
        puVar4 = (undefined8 *)(param_2 + 0x370);
        for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        uVar1 = 1;
      }
      else {
        if (*(char *)(param_2 + 0x3d0) != '\x01') goto LAB_14865eacf;
        uVar1 = 0;
      }
      *(undefined1 *)(param_2 + 0x3d0) = uVar1;
    }
LAB_14865eacf:
    param_3 = param_3 + 0x3e0;
    param_2 = param_2 + 0x3e0;
    param_4 = param_4 + -1;
  } while( true );
}



// FUNCTION 14865eb24 FUN_14865eb24 body=59 status=ok
// SIG undefined FUN_14865eb24(void)

undefined8 FUN_14865eb24(longlong *param_1)

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



// FUNCTION 14865ebbe FUN_14865ebbe body=161 status=ok
// SIG undefined FUN_14865ebbe(void)

undefined8 * FUN_14865ebbe(undefined8 *param_1)

{
  FUN_140e47e4e();
  *param_1 = &PTR_FUN_14b0a0bc0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0xffffffff7fffffff;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x3ff00000;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0x3ff0000000000000;
  param_1[0x67] = 0x3ff0000000000000;
  param_1[0x68] = 0x3ff0000000000000;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x6c] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  return param_1;
}



// FUNCTION 14865ec60 FUN_14865ec60 body=76 status=ok
// SIG undefined FUN_14865ec60(void)

void FUN_14865ec60(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x100);
  FUN_140c83e26(param_2);
  param_2[0x1e] = 0;
  param_2[0x1f] = 0x200000000;
  *param_2 = &PTR_FUN_14b0a0d50;
  return;
}



// FUNCTION 14865ecac FUN_14865ecac body=60 status=ok
// SIG undefined FUN_14865ecac(void)

void FUN_14865ecac(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  param_2[0x1e] = 0;
  param_2[0x1f] = 0x200000000;
  *param_2 = &PTR_FUN_14b0a0d50;
  return;
}



// FUNCTION 14865ed0c FUN_14865ed0c body=63 status=ok
// SIG undefined FUN_14865ed0c(void)

undefined1 FUN_14865ed0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140e7c0e8(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 14865ed74 FUN_14865ed74 body=59 status=ok
// SIG undefined FUN_14865ed74(void)

undefined8 FUN_14865ed74(longlong *param_1)

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



// FUNCTION 14865edc0 FUN_14865edc0 body=38 status=ok
// SIG undefined FUN_14865edc0(void)

void FUN_14865edc0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_14184a80a(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 14865ee34 FUN_14865ee34 body=38 status=ok
// SIG undefined FUN_14865ee34(void)

undefined8 FUN_14865ee34(undefined8 param_1,int param_2)

{
  FUN_14184a80a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865ee5a FUN_14865ee5a body=55 status=ok
// SIG undefined FUN_14865ee5a(void)

void FUN_14865ee5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59298 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59298 = FUN_140002ddd(FUN_1464c5dd7,uVar1,L"GbxAnimNode_ArmIK");
  }
  return;
}



// FUNCTION 14865ee92 FUN_14865ee92 body=139 status=ok
// SIG undefined FUN_14865ee92(void)

undefined * FUN_14865ee92(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Animation/ArmIK/GbxAnimNode_ArmIK.h"
                ,0x38,L"Pure virtual not implemented (%s)",L"FGbxAnimNode_ArmIK::GetLeftArm");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb59900) {
    FUN_144b3d300(&DAT_14cb59900);
    if (DAT_14cb59900 == -1) {
      FUN_14865ebbe(&DAT_14cb59520);
      atexit((_func_5014 *)&LAB_143c46b06);
      _Init_thread_footer(&DAT_14cb59900);
    }
  }
  return &DAT_14cb59520;
}



// FUNCTION 14865ef1e FUN_14865ef1e body=139 status=ok
// SIG undefined FUN_14865ef1e(void)

undefined * FUN_14865ef1e(void)

{
  FUN_140033559("..\\Plugins\\Gearbox\\GbxGame\\Source\\GbxGame/Public/Animation/ArmIK/GbxAnimNode_ArmIK.h"
                ,0x39,L"Pure virtual not implemented (%s)",L"FGbxAnimNode_ArmIK::GetRightArm");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb59cf0) {
    FUN_144b3d300(&DAT_14cb59cf0);
    if (DAT_14cb59cf0 == -1) {
      FUN_14865ebbe(&DAT_14cb59910);
      atexit((_func_5014 *)&LAB_143c46b25);
      _Init_thread_footer(&DAT_14cb59cf0);
    }
  }
  return &DAT_14cb59910;
}



// FUNCTION 14865efaa FUN_14865efaa body=38 status=ok
// SIG undefined FUN_14865efaa(void)

undefined8 FUN_14865efaa(undefined8 param_1,int param_2)

{
  FUN_14184a80a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865efd0 FUN_14865efd0 body=55 status=ok
// SIG undefined FUN_14865efd0(void)

void FUN_14865efd0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59480 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59480 = FUN_140002ddd(FUN_1464c5e06,uVar1,L"GbxAnimNode_MultiTwoBoneIK");
  }
  return;
}



// FUNCTION 14865f08a FUN_14865f08a body=54 status=ok
// SIG undefined FUN_14865f08a(void)

undefined1 FUN_14865f08a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865f34a(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 14865f0e8 FUN_14865f0e8 body=59 status=ok
// SIG undefined FUN_14865f0e8(void)

undefined8 FUN_14865f0e8(longlong *param_1)

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



// FUNCTION 14865f12e FUN_14865f12e body=56 status=ok
// SIG undefined FUN_14865f12e(void)

void FUN_14865f12e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b0a1200;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    FUN_141798252(param_2);
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 14865f1b4 FUN_14865f1b4 body=65 status=ok
// SIG undefined FUN_14865f1b4(void)

undefined8 * FUN_14865f1b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0a1200;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_141798252(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865f1f6 FUN_14865f1f6 body=55 status=ok
// SIG undefined FUN_14865f1f6(void)

void FUN_14865f1f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb592b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb592b0 = FUN_140002ddd(FUN_1464c5e9d,uVar1,L"GbxAnimNode_BlendListByDirection");
  }
  return;
}



// FUNCTION 14865f22e FUN_14865f22e body=25 status=ok
// SIG undefined FUN_14865f22e(void)

undefined8 FUN_14865f22e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14865f248(param_3);
  return param_2;
}



// FUNCTION 14865f248 FUN_14865f248 body=256 status=ok
// SIG undefined FUN_14865f248(void)

undefined8 FUN_14865f248(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cb592b0 == 0) {
    uVar2 = FUN_140325e72();
    DAT_14cb592b0 = FUN_140002ddd(FUN_1464c5e9d,uVar2,L"GbxAnimNode_BlendListByDirection");
  }
  local_48 = *(undefined8 *)(DAT_14cb592b0 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14865f34a FUN_14865f34a body=112 status=ok
// SIG undefined FUN_14865f34a(void)

longlong FUN_14865f34a(longlong param_1,longlong param_2)

{
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_1404306dc(param_1 + 0x18,param_2 + 0x18);
  FUN_1408cbbee(param_1 + 0x28,param_2 + 0x28);
  FUN_140472cde(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  FUN_140c19cf6(param_1 + 0x58,param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 14865f44c FUN_14865f44c body=54 status=ok
// SIG undefined FUN_14865f44c(void)

undefined1 FUN_14865f44c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865f702(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 14865f4aa FUN_14865f4aa body=59 status=ok
// SIG undefined FUN_14865f4aa(void)

undefined8 FUN_14865f4aa(longlong *param_1)

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



// FUNCTION 14865f4f0 FUN_14865f4f0 body=51 status=ok
// SIG undefined FUN_14865f4f0(void)

void FUN_14865f4f0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b0a1560;
    FUN_1449db362(param_2 + 0xc);
    FUN_141798252(param_2);
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 14865f572 FUN_14865f572 body=60 status=ok
// SIG undefined FUN_14865f572(void)

undefined8 * FUN_14865f572(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0a1560;
  FUN_1449db362(param_1 + 0xc);
  FUN_141798252(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865f5ae FUN_14865f5ae body=55 status=ok
// SIG undefined FUN_14865f5ae(void)

void FUN_14865f5ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb592e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb592e0 = FUN_140002ddd(FUN_1464c5f63,uVar1,L"GbxAnimNode_BlendListByFloatComparison");
  }
  return;
}



// FUNCTION 14865f5e6 FUN_14865f5e6 body=25 status=ok
// SIG undefined FUN_14865f5e6(void)

undefined8 FUN_14865f5e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14865f600(param_3);
  return param_2;
}



// FUNCTION 14865f600 FUN_14865f600 body=256 status=ok
// SIG undefined FUN_14865f600(void)

undefined8 FUN_14865f600(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cb592e0 == 0) {
    uVar2 = FUN_140325e72();
    DAT_14cb592e0 = FUN_140002ddd(FUN_1464c5f63,uVar2,L"GbxAnimNode_BlendListByFloatComparison");
  }
  local_48 = *(undefined8 *)(DAT_14cb592e0 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14865f702 FUN_14865f702 body=113 status=ok
// SIG undefined FUN_14865f702(void)

longlong FUN_14865f702(longlong param_1,longlong param_2)

{
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_1404306dc(param_1 + 0x18,param_2 + 0x18);
  FUN_1408cbbee(param_1 + 0x28,param_2 + 0x28);
  FUN_140472cde(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  FUN_14096c7c0(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 14865f7e0 FUN_14865f7e0 body=59 status=ok
// SIG undefined FUN_14865f7e0(void)

undefined8 FUN_14865f7e0(longlong *param_1)

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



// FUNCTION 14865f8f2 FUN_14865f8f2 body=59 status=ok
// SIG undefined FUN_14865f8f2(void)

undefined8 FUN_14865f8f2(longlong *param_1)

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



// FUNCTION 14865f938 FUN_14865f938 body=56 status=ok
// SIG undefined FUN_14865f938(void)

void FUN_14865f938(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b0a1920;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    FUN_141798252(param_2);
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 14865f9be FUN_14865f9be body=55 status=ok
// SIG undefined FUN_14865f9be(void)

void FUN_14865f9be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59310 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59310 = FUN_140002ddd(FUN_1464c608f,uVar1,L"GbxAnimNode_BlendListByFloatRange");
  }
  return;
}



// FUNCTION 14865f9f6 FUN_14865f9f6 body=25 status=ok
// SIG undefined FUN_14865f9f6(void)

undefined8 FUN_14865f9f6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14865fa10(param_3);
  return param_2;
}



// FUNCTION 14865fa10 FUN_14865fa10 body=256 status=ok
// SIG undefined FUN_14865fa10(void)

undefined8 FUN_14865fa10(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14cb59310 == 0) {
    uVar2 = FUN_140325e72();
    DAT_14cb59310 = FUN_140002ddd(FUN_1464c608f,uVar2,L"GbxAnimNode_BlendListByFloatRange");
  }
  local_48 = *(undefined8 *)(DAT_14cb59310 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14865fb7e FUN_14865fb7e body=59 status=ok
// SIG undefined FUN_14865fb7e(void)

undefined8 FUN_14865fb7e(longlong *param_1)

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



// FUNCTION 14865fca8 FUN_14865fca8 body=54 status=ok
// SIG undefined FUN_14865fca8(void)

undefined1 FUN_14865fca8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14865ff68(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 14865fd06 FUN_14865fd06 body=59 status=ok
// SIG undefined FUN_14865fd06(void)

undefined8 FUN_14865fd06(longlong *param_1)

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



// FUNCTION 14865fd4c FUN_14865fd4c body=56 status=ok
// SIG undefined FUN_14865fd4c(void)

void FUN_14865fd4c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b0a1ce0;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    FUN_141798252(param_2);
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 14865fdd2 FUN_14865fdd2 body=65 status=ok
// SIG undefined FUN_14865fdd2(void)

undefined8 * FUN_14865fdd2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0a1ce0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_141798252(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14865fe14 FUN_14865fe14 body=55 status=ok
// SIG undefined FUN_14865fe14(void)

void FUN_14865fe14(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59340 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59340 = FUN_140002ddd(FUN_1464c61bb,uVar1,L"GbxAnimNode_BlendListByIntRange");
  }
  return;
}


