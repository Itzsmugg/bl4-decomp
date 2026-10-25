// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148b7a3a4 FUN_148b7a3a4 body=52 status=ok
// SIG undefined FUN_148b7a3a4(void)

void FUN_148b7a3a4(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148b7a3d8(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 148b7a3d8 FUN_148b7a3d8 body=236 status=ok
// SIG undefined FUN_148b7a3d8(void)

undefined8 * FUN_148b7a3d8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  uVar2 = param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_140b856de(param_1 + 1,iVar1,0);
    FUN_140b8566a(param_1[1],uVar2,iVar1);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  uVar2 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_148b7a4c4(param_1 + 3,iVar1,0);
    FUN_148b7a537(param_1[3],uVar2,iVar1);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  _Src = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_148b7a1e8(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar1 << 4);
  }
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 148b7a4c4 FUN_148b7a4c4 body=115 status=ok
// SIG undefined FUN_148b7a4c4(void)

void FUN_148b7a4c4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148b7a537 FUN_148b7a537 body=52 status=ok
// SIG undefined FUN_148b7a537(void)

void FUN_148b7a537(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148b7a56c(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 148b7a56c FUN_148b7a56c body=176 status=ok
// SIG undefined FUN_148b7a56c(void)

undefined8 * FUN_148b7a56c(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1405b70fe(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 0x18);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 148b7a61e FUN_148b7a61e body=50 status=ok
// SIG undefined FUN_148b7a61e(void)

void FUN_148b7a61e(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_141285bfd(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148b7a6d2 FUN_148b7a6d2 body=59 status=ok
// SIG undefined FUN_148b7a6d2(void)

undefined8 FUN_148b7a6d2(longlong *param_1)

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



// FUNCTION 148b7a7d0 FUN_148b7a7d0 body=59 status=ok
// SIG undefined FUN_148b7a7d0(void)

undefined8 FUN_148b7a7d0(longlong *param_1)

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



// FUNCTION 148b7a816 FUN_148b7a816 body=37 status=ok
// SIG undefined FUN_148b7a816(void)

void FUN_148b7a816(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148b7a88c FUN_148b7a88c body=43 status=ok
// SIG undefined FUN_148b7a88c(void)

undefined8 FUN_148b7a88c(undefined8 param_1,int param_2)

{
  FUN_148b7a8d2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148b7a8d2 FUN_148b7a8d2 body=78 status=ok
// SIG undefined FUN_148b7a8d2(void)

void FUN_148b7a8d2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b5b6250;
  FUN_148b7a920(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148b7a915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148b7a920 FUN_148b7a920 body=47 status=ok
// SIG undefined FUN_148b7a920(void)

void FUN_148b7a920(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148b7a94f FUN_148b7a94f body=110 status=ok
// SIG undefined FUN_148b7a94f(void)

ulonglong FUN_148b7a94f(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      if ((((*(int *)(param_1 + lVar3) != *(int *)(param_2 + lVar3)) ||
           (*(int *)(param_1 + 4 + lVar3) != *(int *)(param_2 + 4 + lVar3))) ||
          (*(int *)(param_1 + 0x10 + lVar3) != *(int *)(param_2 + 0x10 + lVar3))) ||
         (cVar1 = FUN_148b7a9bd(*(undefined8 *)(param_1 + 8 + lVar3),
                                *(undefined8 *)(param_2 + 8 + lVar3)), cVar1 == '\0')) {
        uVar2 = 0;
        break;
      }
      lVar3 = lVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 148b7a9bd FUN_148b7a9bd body=64 status=ok
// SIG undefined FUN_148b7a9bd(void)

undefined8 FUN_148b7a9bd(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if (((*(int *)(param_1 + lVar1 * 8) != *(int *)(param_2 + lVar1 * 8)) ||
          (*(short *)(param_1 + 4 + lVar1 * 8) != *(short *)(param_2 + 4 + lVar1 * 8))) ||
         (*(short *)(param_1 + 6 + lVar1 * 8) != *(short *)(param_2 + 6 + lVar1 * 8))) {
        return 0;
      }
      lVar1 = lVar1 + 1;
    } while (param_3 != (int)lVar1);
  }
  return 1;
}



// FUNCTION 148b7aa4c FUN_148b7aa4c body=73 status=ok
// SIG undefined FUN_148b7aa4c(void)

undefined1 FUN_148b7aa4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_1413a517a(param_2 + 0x10,param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_3 + 0x28);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148b7aabe FUN_148b7aabe body=59 status=ok
// SIG undefined FUN_148b7aabe(void)

undefined8 FUN_148b7aabe(longlong *param_1)

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



// FUNCTION 148b7ab04 FUN_148b7ab04 body=32 status=ok
// SIG undefined FUN_148b7ab04(void)

void FUN_148b7ab04(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1456f46c6(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148b7abb2 FUN_148b7abb2 body=81 status=ok
// SIG undefined FUN_148b7abb2(void)

undefined8 FUN_148b7abb2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
    FUN_148b7ace0(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148b7ac2c FUN_148b7ac2c body=59 status=ok
// SIG undefined FUN_148b7ac2c(void)

undefined8 FUN_148b7ac2c(longlong *param_1)

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



// FUNCTION 148b7ac72 FUN_148b7ac72 body=32 status=ok
// SIG undefined FUN_148b7ac72(void)

void FUN_148b7ac72(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_146174426(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148b7ace0 FUN_148b7ace0 body=93 status=ok
// SIG undefined FUN_148b7ace0(void)

undefined8 * FUN_148b7ace0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1412d963a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b7ad3e(param_1,iVar1);
      FUN_148b7adb1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b7ad3e FUN_148b7ad3e body=115 status=ok
// SIG undefined FUN_148b7ad3e(void)

void FUN_148b7ad3e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148b7adb1 FUN_148b7adb1 body=52 status=ok
// SIG undefined FUN_148b7adb1(void)

void FUN_148b7adb1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1456f4712(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148b7ae24 FUN_148b7ae24 body=73 status=ok
// SIG undefined FUN_148b7ae24(void)

undefined1 FUN_148b7ae24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    FUN_148b7ace0(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 148b7ae96 FUN_148b7ae96 body=59 status=ok
// SIG undefined FUN_148b7ae96(void)

undefined8 FUN_148b7ae96(longlong *param_1)

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



// FUNCTION 148b7aedc FUN_148b7aedc body=34 status=ok
// SIG undefined FUN_148b7aedc(void)

void FUN_148b7aedc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_145cdc2a4(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148b7af86 FUN_148b7af86 body=54 status=ok
// SIG undefined FUN_148b7af86(void)

undefined1 FUN_148b7af86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b7b084(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 148b7afe4 FUN_148b7afe4 body=59 status=ok
// SIG undefined FUN_148b7afe4(void)

undefined8 FUN_148b7afe4(longlong *param_1)

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



// FUNCTION 148b7b084 FUN_148b7b084 body=127 status=ok
// SIG undefined FUN_148b7b084(void)

longlong * FUN_148b7b084(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar2;
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  return param_1;
}



// FUNCTION 148b7b104 FUN_148b7b104 body=43 status=ok
// SIG undefined FUN_148b7b104(void)

undefined8 FUN_148b7b104(undefined8 param_1,int param_2)

{
  FUN_14585efca();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 148b7b130 FUN_148b7b130 body=43 status=ok
// SIG undefined FUN_148b7b130(void)

undefined8 FUN_148b7b130(undefined8 param_1,int param_2)

{
  FUN_148b7b312();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x3a0);
  }
  return param_1;
}



// FUNCTION 148b7b15c FUN_148b7b15c body=67 status=ok
// SIG undefined FUN_148b7b15c(void)

void FUN_148b7b15c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x390)) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x388) + lVar2 * 8);
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x390));
  }
  return;
}



// FUNCTION 148b7b1a0 FUN_148b7b1a0 body=108 status=ok
// SIG undefined FUN_148b7b1a0(void)

void FUN_148b7b1a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x390)) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x388) + lVar2 * 8);
      (**(code **)(*plVar1 + 0xa0))(plVar1,param_2,param_3,param_4,param_5);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x390));
  }
  return;
}



// FUNCTION 148b7b20c FUN_148b7b20c body=173 status=ok
// SIG undefined FUN_148b7b20c(void)

undefined8 * FUN_148b7b20c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  byte local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)((longlong)param_2 + 4) = 2;
  *(undefined4 *)(param_2 + 2) = 0x80;
  if (0 < *(int *)(param_1 + 0x390)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x388) + lVar3 * 8);
      (**(code **)(*plVar1 + 200))(plVar1,local_48,param_3);
      lVar2 = 0;
      do {
        *(byte *)((longlong)param_2 + lVar2) =
             *(byte *)((longlong)param_2 + lVar2) | local_48[lVar2];
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x18);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x390));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7b2ba FUN_148b7b2ba body=88 status=ok
// SIG undefined FUN_148b7b2ba(void)

int FUN_148b7b2ba(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = FUN_1405507b0();
  iVar1 = iVar1 + *(int *)(param_1 + 0x394) * 8;
  if (0 < *(int *)(param_1 + 0x390)) {
    lVar3 = 0;
    do {
      iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x388) + lVar3 * 8) + 0x170))();
      iVar1 = iVar1 + iVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x390));
  }
  return iVar1 + 0x3a0;
}



// FUNCTION 148b7b312 FUN_148b7b312 body=105 status=ok
// SIG undefined FUN_148b7b312(void)

void FUN_148b7b312(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14b5b68e0;
  iVar2 = *(int *)(param_1 + 0x72);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1[0x71] + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        iVar2 = *(int *)(param_1 + 0x72);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if (param_1[0x71] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d133e(param_1);
  return;
}



// FUNCTION 148b7b37c FUN_148b7b37c body=132 status=ok
// SIG undefined FUN_148b7b37c(void)

void FUN_148b7b37c(longlong param_1,int param_2)

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



// FUNCTION 148b7b42a FUN_148b7b42a body=47 status=ok
// SIG undefined FUN_148b7b42a(void)

void FUN_148b7b42a(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148b7b470 FUN_148b7b470 body=79 status=ok
// SIG undefined FUN_148b7b470(void)

undefined8 FUN_148b7b470(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1405b70a4(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined1 *)(param_2 + 0x24) = *(undefined1 *)(param_3 + 0x24);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 148b7b4e8 FUN_148b7b4e8 body=59 status=ok
// SIG undefined FUN_148b7b4e8(void)

undefined8 FUN_148b7b4e8(longlong *param_1)

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



// FUNCTION 148b7b586 FUN_148b7b586 body=51 status=ok
// SIG undefined FUN_148b7b586(void)

void FUN_148b7b586(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 148b7b63e FUN_148b7b63e body=59 status=ok
// SIG undefined FUN_148b7b63e(void)

undefined8 FUN_148b7b63e(longlong *param_1)

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



// FUNCTION 148b7b6e0 FUN_148b7b6e0 body=48 status=ok
// SIG undefined FUN_148b7b6e0(void)

void FUN_148b7b6e0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148b7b710 FUN_148b7b710 body=114 status=ok
// SIG undefined FUN_148b7b710(void)

void FUN_148b7b710(longlong *param_1,int param_2)

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



// FUNCTION 148b7b806 FUN_148b7b806 body=121 status=ok
// SIG undefined FUN_148b7b806(void)

void FUN_148b7b806(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1449db362(*param_1 + (longlong)param_2 * 0x28 + 8);
  FUN_148b7b710(param_1,param_2);
  return;
}



// FUNCTION 148b7b880 FUN_148b7b880 body=48 status=ok
// SIG undefined FUN_148b7b880(void)

void FUN_148b7b880(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148b7b8b0 FUN_148b7b8b0 body=147 status=ok
// SIG undefined FUN_148b7b8b0(void)

void FUN_148b7b8b0(longlong param_1,int param_2)

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



// FUNCTION 148b7b944 FUN_148b7b944 body=57 status=ok
// SIG undefined FUN_148b7b944(void)

void FUN_148b7b944(undefined8 *param_1,int param_2)

{
  FUN_1405d0e5d(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_148b7b97e(param_1,param_2);
  return;
}



// FUNCTION 148b7b97e FUN_148b7b97e body=112 status=ok
// SIG undefined FUN_148b7b97e(void)

void FUN_148b7b97e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 148b7b9ee FUN_148b7b9ee body=230 status=ok
// SIG undefined FUN_148b7b9ee(void)

undefined8 FUN_148b7b9ee(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  
  if ((*(char *)((longlong)param_1 + 0x24) == *(char *)((longlong)param_2 + 0x24)) &&
     ((int)param_1[4] == (int)param_2[4])) {
    uVar3 = *(uint *)(param_1 + 3);
    uVar5 = (ulonglong)uVar3;
    if (uVar3 == *(uint *)(param_2 + 3)) {
      if (1 < (int)uVar3) {
        uVar5 = param_2[2];
        lVar9 = 0;
        while( true ) {
          uVar11 = *(ushort *)(param_1[2] + lVar9);
          uVar12 = (ulonglong)uVar11;
          uVar6 = *(ushort *)(uVar5 + lVar9);
          if (uVar11 != uVar6) break;
          if (uVar11 == 0) goto LAB_148b7ba6c;
LAB_148b7ba38:
          lVar9 = lVar9 + 2;
        }
        if ((uVar6 | uVar11) < 0x80) {
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          uVar7 = (ulonglong)uVar6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar7]) goto LAB_148b7ba38;
        }
        if (uVar11 != uVar6) {
          return 0;
        }
      }
    }
    else if (*(uint *)(param_2 + 3) + uVar3 != 1) {
      return 0;
    }
LAB_148b7ba6c:
    iVar8 = (int)param_1[1];
    if (iVar8 == (int)param_2[1]) {
      lVar9 = *param_2;
      lVar4 = *param_1;
      if (iVar8 != 0) {
        lVar10 = 0;
        do {
          if ((((*(double *)(lVar4 + lVar10) != *(double *)(lVar9 + lVar10)) ||
               (NAN(*(double *)(lVar4 + lVar10)) || NAN(*(double *)(lVar9 + lVar10)))) ||
              (dVar2 = *(double *)(lVar4 + 8 + lVar10), pdVar1 = (double *)(lVar9 + 8 + lVar10),
              dVar2 != *pdVar1)) ||
             (((NAN(dVar2) || NAN(*pdVar1) ||
               (dVar2 = *(double *)(lVar4 + 0x10 + lVar10),
               pdVar1 = (double *)(lVar9 + 0x10 + lVar10), dVar2 != *pdVar1)) ||
              (NAN(dVar2) || NAN(*pdVar1))))) {
            return 0;
          }
          lVar10 = lVar10 + 0x18;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      return CONCAT71((int7)(uVar5 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 148b7bad4 FUN_148b7bad4 body=24 status=ok
// SIG undefined FUN_148b7bad4(void)

void FUN_148b7bad4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b7bae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148b7baec FUN_148b7baec body=34 status=ok
// SIG undefined FUN_148b7baec(void)

undefined8 FUN_148b7baec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 148b7bb0e FUN_148b7bb0e body=22 status=ok
// SIG undefined FUN_148b7bb0e(void)

void FUN_148b7bb0e(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x18);
    return;
  }
  return;
}



// FUNCTION 148b7bb24 FUN_148b7bb24 body=147 status=ok
// SIG undefined FUN_148b7bb24(void)

void FUN_148b7bb24(longlong param_1,int param_2)

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



// FUNCTION 148b7bbb8 FUN_148b7bbb8 body=98 status=ok
// SIG undefined FUN_148b7bbb8(void)

void FUN_148b7bbb8(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_148b7a920(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148b7bc1a FUN_148b7bc1a body=62 status=ok
// SIG undefined FUN_148b7bc1a(void)

void FUN_148b7bc1a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148b7bc58(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 148b7bc58 FUN_148b7bc58 body=112 status=ok
// SIG undefined FUN_148b7bc58(void)

ulonglong FUN_148b7bc58(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148b7bc92;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_148b7bc92:
  return param_2 & 0xffffffff;
}



// FUNCTION 148b7bcc8 FUN_148b7bcc8 body=31 status=ok
// SIG undefined FUN_148b7bcc8(void)

void FUN_148b7bcc8(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
    *(byte *)((longlong)param_1 + 0xc) = *(byte *)((longlong)param_1 + 0xc) & 0xfe;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 148b7bce8 FUN_148b7bce8 body=132 status=ok
// SIG undefined FUN_148b7bce8(void)

void FUN_148b7bce8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148b7bd6e FUN_148b7bd6e body=62 status=ok
// SIG undefined FUN_148b7bd6e(void)

void FUN_148b7bd6e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148b7bdac(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 148b7bdac FUN_148b7bdac body=93 status=ok
// SIG undefined FUN_148b7bdac(void)

ulonglong FUN_148b7bdac(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 148b7be09 FUN_148b7be09 body=19 status=ok
// SIG undefined FUN_148b7be09(void)

void FUN_148b7be09(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 148b7be1c FUN_148b7be1c body=132 status=ok
// SIG undefined FUN_148b7be1c(void)

void FUN_148b7be1c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148b7bea2 FUN_148b7bea2 body=62 status=ok
// SIG undefined FUN_148b7bea2(void)

void FUN_148b7bea2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148b7bee0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 148b7bee0 FUN_148b7bee0 body=93 status=ok
// SIG undefined FUN_148b7bee0(void)

ulonglong FUN_148b7bee0(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 148b7bf3e FUN_148b7bf3e body=63 status=ok
// SIG undefined FUN_148b7bf3e(void)

longlong FUN_148b7bf3e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148b7b8b0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_148b7bf7d(lVar2);
  return lVar2;
}



// FUNCTION 148b7bf7d FUN_148b7bf7d body=19 status=ok
// SIG undefined FUN_148b7bf7d(void)

void FUN_148b7bf7d(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d) = 0;
  return;
}



// FUNCTION 148b7bf90 FUN_148b7bf90 body=48 status=ok
// SIG undefined FUN_148b7bf90(void)

void FUN_148b7bf90(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 148b7bfc0 FUN_148b7bfc0 body=89 status=ok
// SIG undefined FUN_148b7bfc0(void)

void FUN_148b7bfc0(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
  FUN_141285bfd(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 148b7c01a FUN_148b7c01a body=62 status=ok
// SIG undefined FUN_148b7c01a(void)

void FUN_148b7c01a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148b7c058(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 148b7c058 FUN_148b7c058 body=93 status=ok
// SIG undefined FUN_148b7c058(void)

ulonglong FUN_148b7c058(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 148b7c0b6 FUN_148b7c0b6 body=36 status=ok
// SIG undefined FUN_148b7c0b6(void)

undefined8 FUN_148b7c0b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148b7c0f4 FUN_148b7c0f4 body=93 status=ok
// SIG undefined FUN_148b7c0f4(void)

void FUN_148b7c0f4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5b6fd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b7c152 FUN_148b7c152 body=93 status=ok
// SIG undefined FUN_148b7c152(void)

void FUN_148b7c152(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5b6fd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b7c1b0 FUN_148b7c1b0 body=126 status=ok
// SIG undefined FUN_148b7c1b0(void)

void FUN_148b7c1b0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5b6fd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b7c21f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b7c22e FUN_148b7c22e body=35 status=ok
// SIG undefined FUN_148b7c22e(void)

void FUN_148b7c22e(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b7c24d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 148b7c252 FUN_148b7c252 body=142 status=ok
// SIG undefined FUN_148b7c252(void)

bool FUN_148b7c252(longlong param_1)

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



// FUNCTION 148b7c2fe FUN_148b7c2fe body=101 status=ok
// SIG undefined FUN_148b7c2fe(void)

void FUN_148b7c2fe(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5b7040;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b7c364 FUN_148b7c364 body=134 status=ok
// SIG undefined FUN_148b7c364(void)

void FUN_148b7c364(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5b7040;
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
                    /* WARNING: Could not recover jumptable at 0x000148b7c3db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b7c3fa FUN_148b7c3fa body=25 status=ok
// SIG undefined FUN_148b7c3fa(void)

undefined8 FUN_148b7c3fa(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148b7c414 FUN_148b7c414 body=36 status=ok
// SIG undefined FUN_148b7c414(void)

undefined8 FUN_148b7c414(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148b7c454 FUN_148b7c454 body=101 status=ok
// SIG undefined FUN_148b7c454(void)

void FUN_148b7c454(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5b70d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b7c4ba FUN_148b7c4ba body=134 status=ok
// SIG undefined FUN_148b7c4ba(void)

void FUN_148b7c4ba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5b70d0;
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
                    /* WARNING: Could not recover jumptable at 0x000148b7c531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b7c550 FUN_148b7c550 body=25 status=ok
// SIG undefined FUN_148b7c550(void)

undefined8 FUN_148b7c550(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148b7c56a FUN_148b7c56a body=36 status=ok
// SIG undefined FUN_148b7c56a(void)

undefined8 FUN_148b7c56a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148b7c5aa FUN_148b7c5aa body=93 status=ok
// SIG undefined FUN_148b7c5aa(void)

void FUN_148b7c5aa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b5b7160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b7c608 FUN_148b7c608 body=126 status=ok
// SIG undefined FUN_148b7c608(void)

void FUN_148b7c608(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b5b7160;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b7c677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b7c686 FUN_148b7c686 body=21 status=ok
// SIG undefined FUN_148b7c686(void)

undefined8 FUN_148b7c686(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148b7c69c FUN_148b7c69c body=36 status=ok
// SIG undefined FUN_148b7c69c(void)

undefined8 FUN_148b7c69c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 148b7c6d0 FUN_148b7c6d0 body=93 status=ok
// SIG undefined FUN_148b7c6d0(void)

void FUN_148b7c6d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5b7250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b7c72e FUN_148b7c72e body=93 status=ok
// SIG undefined FUN_148b7c72e(void)

void FUN_148b7c72e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5b7250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148b7c78c FUN_148b7c78c body=126 status=ok
// SIG undefined FUN_148b7c78c(void)

void FUN_148b7c78c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca5b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5b7250;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b7c7fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b7c80a FUN_148b7c80a body=117 status=ok
// SIG undefined FUN_148b7c80a(void)

void FUN_148b7c80a(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_58 [40];
  undefined2 local_30 [4];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  local_30[0] = *param_3;
  local_28 = *(longlong *)(param_3 + 4);
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (*pcVar2)(uVar1,param_2,local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7c880 FUN_148b7c880 body=36 status=ok
// SIG undefined FUN_148b7c880(void)

undefined8 FUN_148b7c880(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 148b7c8c6 FUN_148b7c8c6 body=93 status=ok
// SIG undefined FUN_148b7c8c6(void)

void FUN_148b7c8c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5b7330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5b72c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148b7c924 FUN_148b7c924 body=126 status=ok
// SIG undefined FUN_148b7c924(void)

void FUN_148b7c924(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5b7330;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5b72c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b7c993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b7c9a2 FUN_148b7c9a2 body=102 status=ok
// SIG undefined FUN_148b7c9a2(void)

undefined8 FUN_148b7c9a2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(param_1 + 0x18))(local_20);
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



// FUNCTION 148b7ca0c FUN_148b7ca0c body=69 status=ok
// SIG undefined FUN_148b7ca0c(void)

void FUN_148b7ca0c(longlong param_1,uint param_2)

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
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1402caa5a(param_1);
    return;
  }
  return;
}



// FUNCTION 148b7ca52 FUN_148b7ca52 body=48 status=ok
// SIG undefined FUN_148b7ca52(void)

void FUN_148b7ca52(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148b7ca82 FUN_148b7ca82 body=36 status=ok
// SIG undefined FUN_148b7ca82(void)

undefined8 FUN_148b7ca82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148b7cac0 FUN_148b7cac0 body=101 status=ok
// SIG undefined FUN_148b7cac0(void)

void FUN_148b7cac0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5b73a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b7cb26 FUN_148b7cb26 body=101 status=ok
// SIG undefined FUN_148b7cb26(void)

void FUN_148b7cb26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5b73a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b7cb8c FUN_148b7cb8c body=134 status=ok
// SIG undefined FUN_148b7cb8c(void)

void FUN_148b7cb8c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5b73a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148b7cc03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b7cc12 FUN_148b7cc12 body=44 status=ok
// SIG undefined FUN_148b7cc12(void)

void FUN_148b7cc12(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b7cc3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148b7cc3e FUN_148b7cc3e body=156 status=ok
// SIG undefined FUN_148b7cc3e(void)

bool FUN_148b7cc3e(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 148b7ccdc FUN_148b7ccdc body=36 status=ok
// SIG undefined FUN_148b7ccdc(void)

undefined8 FUN_148b7ccdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148b7cd1a FUN_148b7cd1a body=101 status=ok
// SIG undefined FUN_148b7cd1a(void)

void FUN_148b7cd1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5b7410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b7cd80 FUN_148b7cd80 body=101 status=ok
// SIG undefined FUN_148b7cd80(void)

void FUN_148b7cd80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a8bcd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b5b7410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148b7cde6 FUN_148b7cde6 body=134 status=ok
// SIG undefined FUN_148b7cde6(void)

void FUN_148b7cde6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a8bcd00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b5b7410;
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
                    /* WARNING: Could not recover jumptable at 0x000148b7ce5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148b7ce6c FUN_148b7ce6c body=52 status=ok
// SIG undefined FUN_148b7ce6c(void)

void FUN_148b7ce6c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148b7ce9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148b7cea0 FUN_148b7cea0 body=132 status=ok
// SIG undefined FUN_148b7cea0(void)

void FUN_148b7cea0(longlong param_1,int param_2)

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



// FUNCTION 148b7cf26 FUN_148b7cf26 body=122 status=ok
// SIG undefined FUN_148b7cf26(void)

longlong * FUN_148b7cf26(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
    bVar2 = DAT_14c950c29;
  }
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 148b7cfa0 FUN_148b7cfa0 body=48 status=ok
// SIG undefined FUN_148b7cfa0(void)

void FUN_148b7cfa0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148b7cfd0 FUN_148b7cfd0 body=132 status=ok
// SIG undefined FUN_148b7cfd0(void)

void FUN_148b7cfd0(longlong param_1,int param_2)

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



// FUNCTION 148b7d056 FUN_148b7d056 body=89 status=ok
// SIG undefined FUN_148b7d056(void)

void FUN_148b7d056(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 148b7d0b0 FUN_148b7d0b0 body=148 status=ok
// SIG undefined FUN_148b7d0b0(void)

void FUN_148b7d0b0(undefined8 param_1,longlong param_2)

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
  FUN_148ce0b42(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7d14c FUN_148b7d14c body=156 status=ok
// SIG undefined FUN_148b7d14c(void)

void FUN_148b7d14c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_148ce0c14(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7d1f0 FUN_148b7d1f0 body=155 status=ok
// SIG undefined FUN_148b7d1f0(void)

void FUN_148b7d1f0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_148ce0bb0(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7d2c8 FUN_148b7d2c8 body=55 status=ok
// SIG undefined FUN_148b7d2c8(void)

void FUN_148b7d2c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f210 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f210 = FUN_14171c317(FUN_1465a2f2b,uVar1,L"EVehicleNotify");
  }
  return;
}



// FUNCTION 148b7d304 FUN_148b7d304 body=55 status=ok
// SIG undefined FUN_148b7d304(void)

void FUN_148b7d304(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f240 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f240 = FUN_14171c317(FUN_1465a2f8e,uVar1,L"EAtt_AnointedPerk");
  }
  return;
}



// FUNCTION 148b7d33b FUN_148b7d33b body=55 status=ok
// SIG undefined FUN_148b7d33b(void)

void FUN_148b7d33b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f270 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f270 = FUN_14171c317(FUN_1465a3056,uVar1,L"EAtt_AnointedPerkAspect");
  }
  return;
}



// FUNCTION 148b7d376 FUN_148b7d376 body=104 status=ok
// SIG undefined FUN_148b7d376(void)

void FUN_148b7d376(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb9f2b8) {
    FUN_144b3d300(&DAT_14cb9f2b8);
    if (DAT_14cb9f2b8 == -1) {
      FUN_1446f470e(&DAT_14cb9f2b0,L"GbxActorData",1);
      _Init_thread_footer(&DAT_14cb9f2b8);
      return;
    }
  }
  return;
}



// FUNCTION 148b7d3fc FUN_148b7d3fc body=155 status=ok
// SIG undefined FUN_148b7d3fc(void)

void FUN_148b7d3fc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_148cef8a2(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7d49e FUN_148b7d49e body=155 status=ok
// SIG undefined FUN_148b7d49e(void)

void FUN_148b7d49e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_148cef918(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7d546 FUN_148b7d546 body=239 status=ok
// SIG undefined FUN_148b7d546(void)

void FUN_148b7d546(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
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
  uVar1 = FUN_148cef3ae(local_20,local_24 != 0);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7d63c FUN_148b7d63c body=155 status=ok
// SIG undefined FUN_148b7d63c(void)

void FUN_148b7d63c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_148cef56a(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7d6db FUN_148b7d6db body=55 status=ok
// SIG undefined FUN_148b7d6db(void)

void FUN_148b7d6db(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f4e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f4e0 = FUN_14171c317(FUN_1465a3d84,uVar1,L"EAtt_WeaponAugmentElementalLeech");
  }
  return;
}



// FUNCTION 148b7d74a FUN_148b7d74a body=48 status=ok
// SIG undefined FUN_148b7d74a(void)

longlong FUN_148b7d74a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_145ff20c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b7d78c FUN_148b7d78c body=26 status=ok
// SIG undefined FUN_148b7d78c(void)

undefined8 FUN_148b7d78c(longlong param_1,undefined8 param_2)

{
  FUN_148dcb368(param_1 + -0x10);
  return param_2;
}



// FUNCTION 148b7d7b0 FUN_148b7d7b0 body=48 status=ok
// SIG undefined FUN_148b7d7b0(void)

longlong FUN_148b7d7b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_145ff20c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b7d7f0 FUN_148b7d7f0 body=48 status=ok
// SIG undefined FUN_148b7d7f0(void)

longlong FUN_148b7d7f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_145ff20c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b7d830 FUN_148b7d830 body=48 status=ok
// SIG undefined FUN_148b7d830(void)

longlong FUN_148b7d830(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_145ff20c8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b7d868 FUN_148b7d868 body=154 status=ok
// SIG undefined FUN_148b7d868(void)

undefined8 FUN_148b7d868(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1406c9d00(param_1 + 8,&local_58);
  if (local_50 == 0) {
    local_50 = FUN_140927942();
  }
  uVar1 = FUN_14477b664(local_50);
  local_40 = local_58;
  uVar1 = FUN_14477b664(uVar1);
  local_38 = FUN_14477b664(uVar1);
  local_30 = local_48;
  FUN_1411f1bdc(param_2,&local_40);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7d904 FUN_148b7d904 body=45 status=ok
// SIG undefined FUN_148b7d904(void)

longlong FUN_148b7d904(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b7d932 FUN_148b7d932 body=45 status=ok
// SIG undefined FUN_148b7d932(void)

longlong FUN_148b7d932(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b7d960 FUN_148b7d960 body=45 status=ok
// SIG undefined FUN_148b7d960(void)

longlong FUN_148b7d960(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b7d9c2 FUN_148b7d9c2 body=138 status=ok
// SIG undefined FUN_148b7d9c2(void)

undefined8 FUN_148b7d9c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x30);
      FUN_148b7db14(param_2 + lVar6 + 0x38,param_3 + lVar6 + 0x38);
      FUN_148b7db14(param_2 + lVar6 + 0x50,param_3 + lVar6 + 0x50);
      lVar6 = lVar6 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b7da74 FUN_148b7da74 body=59 status=ok
// SIG undefined FUN_148b7da74(void)

undefined8 FUN_148b7da74(longlong *param_1)

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



// FUNCTION 148b7db14 FUN_148b7db14 body=84 status=ok
// SIG undefined FUN_148b7db14(void)

longlong * FUN_148b7db14(longlong *param_1,longlong *param_2)

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



// FUNCTION 148b7dbd4 FUN_148b7dbd4 body=59 status=ok
// SIG undefined FUN_148b7dbd4(void)

undefined8 FUN_148b7dbd4(longlong *param_1)

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



// FUNCTION 148b7dc1a FUN_148b7dc1a body=32 status=ok
// SIG undefined FUN_148b7dc1a(void)

void FUN_148b7dc1a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14400779a(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148b7dcb8 FUN_148b7dcb8 body=63 status=ok
// SIG undefined FUN_148b7dcb8(void)

undefined1 FUN_148b7dcb8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b7dde0(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148b7dd20 FUN_148b7dd20 body=59 status=ok
// SIG undefined FUN_148b7dd20(void)

undefined8 FUN_148b7dd20(longlong *param_1)

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



// FUNCTION 148b7dd6c FUN_148b7dd6c body=38 status=ok
// SIG undefined FUN_148b7dd6c(void)

void FUN_148b7dd6c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1418c2cea(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148b7dde0 FUN_148b7dde0 body=144 status=ok
// SIG undefined FUN_148b7dde0(void)

longlong FUN_148b7dde0(longlong param_1,longlong param_2)

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
  longlong lVar12;
  
  FUN_140311eb6();
  if (param_2 != param_1) {
    FUN_148b7de70(param_1 + 0x10,param_2 + 0x10);
  }
  FUN_140311eb6(param_1 + 0x28,param_2 + 0x28);
  FUN_140311eb6(param_1 + 0x38,param_2 + 0x38);
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  uVar2 = *(undefined4 *)(param_2 + 0x4c);
  uVar3 = *(undefined4 *)(param_2 + 0x50);
  uVar4 = *(undefined4 *)(param_2 + 0x54);
  uVar5 = *(undefined4 *)(param_2 + 0x58);
  uVar6 = *(undefined4 *)(param_2 + 0x5c);
  uVar7 = *(undefined4 *)(param_2 + 0x60);
  uVar8 = *(undefined4 *)(param_2 + 100);
  uVar9 = *(undefined4 *)(param_2 + 0x6c);
  uVar10 = *(undefined4 *)(param_2 + 0x70);
  uVar11 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar9;
  *(undefined4 *)(param_1 + 0x70) = uVar10;
  *(undefined4 *)(param_1 + 0x74) = uVar11;
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(undefined4 *)(param_1 + 0x5c) = uVar6;
  *(undefined4 *)(param_1 + 0x60) = uVar7;
  *(undefined4 *)(param_1 + 100) = uVar8;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  lVar12 = *(longlong *)(param_2 + 0x78);
  if (DAT_14c950c29 == '\x01') {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0x78);
    }
  }
  *(longlong *)(param_1 + 0x78) = lVar12;
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  return param_1;
}



// FUNCTION 148b7de70 FUN_148b7de70 body=304 status=ok
// SIG undefined FUN_148b7de70(void)

void FUN_148b7de70(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b7dfa2 FUN_148b7dfa2 body=93 status=ok
// SIG undefined FUN_148b7dfa2(void)

undefined8 * FUN_148b7dfa2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1413db286(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b7e000(param_1,iVar1);
      FUN_148b7e076(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b7e000 FUN_148b7e000 body=118 status=ok
// SIG undefined FUN_148b7e000(void)

void FUN_148b7e000(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x188,8);
    iVar2 = (int)(uVar1 / 0x188);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x188,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148b7e076 FUN_148b7e076 body=74 status=ok
// SIG undefined FUN_148b7e076(void)

void FUN_148b7e076(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148b7e0c0(param_1,param_2);
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
    param_1 = param_1 + 0x188;
    param_2 = param_2 + 0x188;
  }
  return;
}



// FUNCTION 148b7e0c0 FUN_148b7e0c0 body=513 status=ok
// SIG undefined FUN_148b7e0c0(void)

undefined8 * FUN_148b7e0c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *param_1 = *param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
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
  param_1[5] = param_2[5];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 7);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[10] = param_2[10];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar5 = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(undefined4 *)((longlong)param_1 + 100) = uVar5;
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0xe);
  pvVar2 = (void *)param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xf] = param_2[0xf];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar4 = *(undefined4 *)(param_2 + 0x11);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x11) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar5;
  param_1[0x12] = 0;
  iVar1 = *(int *)(param_2 + 0x13);
  pvVar2 = (void *)param_2[0x12];
  *(int *)(param_1 + 0x13) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x12,iVar1,0);
    memcpy((void *)param_1[0x12],pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xa4);
  uVar5 = *(undefined4 *)(param_2 + 0x15);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xac);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xb4);
  uVar8 = *(undefined4 *)(param_2 + 0x17);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar7;
  *(undefined4 *)(param_1 + 0x17) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar9;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar4;
  *(undefined4 *)(param_1 + 0x15) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar6;
  FUN_1412bd664(param_1 + 0x18,param_2 + 0x18);
  FUN_1412bd664(param_1 + 0x1e,param_2 + 0x1e);
  FUN_1412bd664(param_1 + 0x24,param_2 + 0x24);
  FUN_1412bd664(param_1 + 0x2a,param_2 + 0x2a);
  return param_1;
}



// FUNCTION 148b7e32e FUN_148b7e32e body=59 status=ok
// SIG undefined FUN_148b7e32e(void)

undefined8 FUN_148b7e32e(longlong *param_1)

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



// FUNCTION 148b7e45c FUN_148b7e45c body=139 status=ok
// SIG undefined FUN_148b7e45c(void)

undefined8 FUN_148b7e45c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar2 = param_2 + lVar6;
      *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(lVar1 + 8);
      *(undefined4 *)(lVar2 + 0xc) = uVar3;
      *(undefined4 *)(lVar2 + 0x10) = uVar4;
      *(undefined4 *)(lVar2 + 0x14) = uVar5;
      FUN_1418443e8();
      FUN_1401f3db8(param_2 + lVar6 + 0x30,param_3 + lVar6 + 0x30);
      FUN_148b7e604(param_2 + lVar6 + 0x48,param_3 + lVar6 + 0x48);
      *(undefined8 *)(param_2 + lVar6 + 0x58) = *(undefined8 *)(param_3 + lVar6 + 0x58);
      lVar6 = lVar6 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b7e510 FUN_148b7e510 body=59 status=ok
// SIG undefined FUN_148b7e510(void)

undefined8 FUN_148b7e510(longlong *param_1)

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



// FUNCTION 148b7e556 FUN_148b7e556 body=34 status=ok
// SIG undefined FUN_148b7e556(void)

void FUN_148b7e556(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1458cb22c(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148b7e5c6 FUN_148b7e5c6 body=55 status=ok
// SIG undefined FUN_148b7e5c6(void)

void FUN_148b7e5c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f288 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f288 = FUN_140002ddd(FUN_1465a30bd,uVar1,L"AnointedPerkAspect");
  }
  return;
}



// FUNCTION 148b7e604 FUN_148b7e604 body=88 status=ok
// SIG undefined FUN_148b7e604(void)

undefined8 * FUN_148b7e604(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148b7e65c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148b7e65c FUN_148b7e65c body=98 status=ok
// SIG undefined FUN_148b7e65c(void)

void FUN_148b7e65c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148b7e6c0 FUN_148b7e6c0 body=66 status=ok
// SIG undefined FUN_148b7e6c0(void)

undefined8 * FUN_148b7e6c0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5c4a70;
  if (param_1[8] != 0) {
    FUN_140872868(param_1);
  }
  FUN_1403d7c6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b7e702 FUN_148b7e702 body=55 status=ok
// SIG undefined FUN_148b7e702(void)

void FUN_148b7e702(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f2f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f2f8 = FUN_140002ddd(FUN_1465a3291,uVar1,L"AOEActorBodyState");
  }
  return;
}



// FUNCTION 148b7e73a FUN_148b7e73a body=55 status=ok
// SIG undefined FUN_148b7e73a(void)

void FUN_148b7e73a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f2c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f2c8 = FUN_140002ddd(FUN_1465a3183,uVar1,L"AOEActorBodySettings");
  }
  return;
}



// FUNCTION 148b7e7ca FUN_148b7e7ca body=63 status=ok
// SIG undefined FUN_148b7e7ca(void)

undefined1 FUN_148b7e7ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862f10e(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 148b7e832 FUN_148b7e832 body=59 status=ok
// SIG undefined FUN_148b7e832(void)

undefined8 FUN_148b7e832(longlong *param_1)

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



// FUNCTION 148b7e87e FUN_148b7e87e body=38 status=ok
// SIG undefined FUN_148b7e87e(void)

void FUN_148b7e87e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 148b7e8fc FUN_148b7e8fc body=48 status=ok
// SIG undefined FUN_148b7e8fc(void)

void FUN_148b7e8fc(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b5c4a70;
  return;
}



// FUNCTION 148b7e92c FUN_148b7e92c body=32 status=ok
// SIG undefined FUN_148b7e92c(void)

void FUN_148b7e92c(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b5c4a70;
  return;
}



// FUNCTION 148b7e9a6 FUN_148b7e9a6 body=59 status=ok
// SIG undefined FUN_148b7e9a6(void)

undefined8 FUN_148b7e9a6(longlong *param_1)

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



// FUNCTION 148b7e9f2 FUN_148b7e9f2 body=63 status=ok
// SIG undefined FUN_148b7e9f2(void)

void FUN_148b7e9f2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14b5c4a70;
    if (param_2[8] != 0) {
      FUN_140872868(param_2);
    }
    FUN_1403d7c6c(param_2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 148b7ea82 FUN_148b7ea82 body=83 status=ok
// SIG undefined FUN_148b7ea82(void)

void FUN_148b7ea82(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,200);
  FUN_1404e2388(param_2);
  *param_2 = &PTR_FUN_14b5c4f60;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  return;
}



// FUNCTION 148b7ead6 FUN_148b7ead6 body=67 status=ok
// SIG undefined FUN_148b7ead6(void)

void FUN_148b7ead6(undefined8 param_1,undefined8 *param_2)

{
  FUN_1404e2388(param_2);
  *param_2 = &PTR_FUN_14b5c4f60;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  return;
}



// FUNCTION 148b7eb3e FUN_148b7eb3e body=136 status=ok
// SIG undefined FUN_148b7eb3e(void)

undefined8 FUN_148b7eb3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e1a790(param_2,param_3);
    *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_3 + 0x90);
    uVar1 = *(undefined4 *)(param_3 + 0x9c);
    uVar2 = *(undefined4 *)(param_3 + 0xa0);
    uVar3 = *(undefined4 *)(param_3 + 0xa4);
    *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(param_3 + 0x98);
    *(undefined4 *)(param_2 + 0x9c) = uVar1;
    *(undefined4 *)(param_2 + 0xa0) = uVar2;
    *(undefined4 *)(param_2 + 0xa4) = uVar3;
    FUN_144a787a6(param_2 + 0xa8,param_3 + 0xa8);
    FUN_148615fc0(param_2 + 0xb8,param_3 + 0xb8);
    param_2 = param_2 + 200;
    param_3 = param_3 + 200;
  }
  return 1;
}



// FUNCTION 148b7ebee FUN_148b7ebee body=59 status=ok
// SIG undefined FUN_148b7ebee(void)

undefined8 FUN_148b7ebee(longlong *param_1)

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



// FUNCTION 148b7ec3a FUN_148b7ec3a body=40 status=ok
// SIG undefined FUN_148b7ec3a(void)

void FUN_148b7ec3a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_148b7ed32(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 148b7ecd4 FUN_148b7ecd4 body=38 status=ok
// SIG undefined FUN_148b7ecd4(void)

undefined8 FUN_148b7ecd4(undefined8 param_1,int param_2)

{
  FUN_148b7ed32();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b7ecfa FUN_148b7ecfa body=55 status=ok
// SIG undefined FUN_148b7ecfa(void)

void FUN_148b7ecfa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f310 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f310 = FUN_140002ddd(FUN_1465a3327,uVar1,L"AOEActorDef");
  }
  return;
}



// FUNCTION 148b7ed32 FUN_148b7ed32 body=83 status=ok
// SIG undefined FUN_148b7ed32(void)

void FUN_148b7ed32(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5c4f60;
  FUN_140753a84(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140753ab6(param_1);
  return;
}



// FUNCTION 148b7edd2 FUN_148b7edd2 body=96 status=ok
// SIG undefined FUN_148b7edd2(void)

undefined8 FUN_148b7edd2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined1 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined1 *)(lVar2 + -8) = *puVar1;
      FUN_140d02432(lVar2,puVar1 + 8);
      *(undefined2 *)(lVar2 + 0x50) = *(undefined2 *)(puVar1 + 0x58);
      lVar3 = lVar3 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b7ee5a FUN_148b7ee5a body=59 status=ok
// SIG undefined FUN_148b7ee5a(void)

undefined8 FUN_148b7ee5a(longlong *param_1)

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



// FUNCTION 148b7ef4c FUN_148b7ef4c body=121 status=ok
// SIG undefined FUN_148b7ef4c(void)

undefined8 FUN_148b7ef4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_14862318e(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined1 *)(param_2 + 0x18 + lVar1) = *(undefined1 *)(param_3 + 0x18 + lVar1);
      FUN_140d02432(param_2 + 0x20 + lVar1,param_3 + 0x20 + lVar1);
      *(undefined2 *)(param_2 + 0x70 + lVar1) = *(undefined2 *)(param_3 + 0x70 + lVar1);
      lVar1 = lVar1 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b7efee FUN_148b7efee body=59 status=ok
// SIG undefined FUN_148b7efee(void)

undefined8 FUN_148b7efee(longlong *param_1)

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



// FUNCTION 148b7f034 FUN_148b7f034 body=32 status=ok
// SIG undefined FUN_148b7f034(void)

void FUN_148b7f034(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148b7f09e FUN_148b7f09e body=55 status=ok
// SIG undefined FUN_148b7f09e(void)

void FUN_148b7f09e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f358 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f358 = FUN_140002ddd(FUN_1465a3485,uVar1,L"BinderBehaviorMod_DownState");
  }
  return;
}



// FUNCTION 148b7f0f4 FUN_148b7f0f4 body=63 status=ok
// SIG undefined FUN_148b7f0f4(void)

undefined1 FUN_148b7f0f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b7f248(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148b7f15c FUN_148b7f15c body=59 status=ok
// SIG undefined FUN_148b7f15c(void)

undefined8 FUN_148b7f15c(longlong *param_1)

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



// FUNCTION 148b7f1a8 FUN_148b7f1a8 body=38 status=ok
// SIG undefined FUN_148b7f1a8(void)

void FUN_148b7f1a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_14104c46a(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148b7f210 FUN_148b7f210 body=55 status=ok
// SIG undefined FUN_148b7f210(void)

void FUN_148b7f210(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f370 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f370 = FUN_140002ddd(FUN_1465a351b,uVar1,L"BinderBehaviorMod_DropCarryableOnDeath");
  }
  return;
}



// FUNCTION 148b7f248 FUN_148b7f248 body=169 status=ok
// SIG undefined FUN_148b7f248(void)

longlong FUN_148b7f248(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_14862318e(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_144983130(param_1 + 0x48,param_2 + 0x48);
  FUN_145a39a7c(param_1 + 0x80,param_2 + 0x80);
  FUN_14117b026(param_1 + 0x98,param_2 + 0x98);
  FUN_1400fce78(param_1 + 0xd0,param_2 + 0xd0);
  uVar1 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  return param_1;
}



// FUNCTION 148b7f310 FUN_148b7f310 body=151 status=ok
// SIG undefined FUN_148b7f310(void)

undefined8 FUN_148b7f310(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_14862318e(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      FUN_140e8aa92(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      *(undefined2 *)(param_2 + lVar1 + 0x80) = *(undefined2 *)(param_3 + lVar1 + 0x80);
      FUN_140d02432(param_2 + lVar1 + 0x88,param_3 + lVar1 + 0x88);
      lVar1 = lVar1 + 0xd8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b7f3d0 FUN_148b7f3d0 body=59 status=ok
// SIG undefined FUN_148b7f3d0(void)

undefined8 FUN_148b7f3d0(longlong *param_1)

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



// FUNCTION 148b7f41c FUN_148b7f41c body=57 status=ok
// SIG undefined FUN_148b7f41c(void)

void FUN_148b7f41c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1b) == '\x01') {
    *param_2 = &PTR_FUN_14b5c5710;
    FUN_140485912(param_2 + 3);
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0x1b) = 0;
  }
  return;
}



// FUNCTION 148b7f4a4 FUN_148b7f4a4 body=55 status=ok
// SIG undefined FUN_148b7f4a4(void)

void FUN_148b7f4a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f388 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f388 = FUN_140002ddd(FUN_1465a35b1,uVar1,L"BinderBehaviorMod_MissionInventoryItem");
  }
  return;
}



// FUNCTION 148b7f52c FUN_148b7f52c body=75 status=ok
// SIG undefined FUN_148b7f52c(void)

undefined1 FUN_148b7f52c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_14862318e(param_2 + -0x10,param_3 + -0x10);
      FUN_141010638(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b7f5a0 FUN_148b7f5a0 body=59 status=ok
// SIG undefined FUN_148b7f5a0(void)

undefined8 FUN_148b7f5a0(longlong *param_1)

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



// FUNCTION 148b7f5e6 FUN_148b7f5e6 body=56 status=ok
// SIG undefined FUN_148b7f5e6(void)

void FUN_148b7f5e6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14b5c72c0;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 148b7f66c FUN_148b7f66c body=65 status=ok
// SIG undefined FUN_148b7f66c(void)

undefined8 * FUN_148b7f66c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5c72c0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_140f4e84a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b7f6ae FUN_148b7f6ae body=55 status=ok
// SIG undefined FUN_148b7f6ae(void)

void FUN_148b7f6ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f3a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f3a0 = FUN_140002ddd(FUN_1465a3647,uVar1,L"BinderBehaviorMod_MultiHackEchoPanel");
  }
  return;
}



// FUNCTION 148b7f6ea FUN_148b7f6ea body=54 status=ok
// SIG undefined FUN_148b7f6ea(void)

void FUN_148b7f6ea(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,800);
  *param_2 = &PTR_FUN_14b5c7300;
  FUN_144007dae(param_2 + 3);
  return;
}



// FUNCTION 148b7f75e FUN_148b7f75e body=83 status=ok
// SIG undefined FUN_148b7f75e(void)

undefined1 FUN_148b7f75e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_14862318e(param_2 + -0x10,param_3 + -0x10);
      FUN_14140cdf2(param_2,param_3);
      param_3 = param_3 + 0x328;
      param_2 = param_2 + 0x328;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b7f7da FUN_148b7f7da body=59 status=ok
// SIG undefined FUN_148b7f7da(void)

undefined8 FUN_148b7f7da(longlong *param_1)

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



// FUNCTION 148b7f826 FUN_148b7f826 body=57 status=ok
// SIG undefined FUN_148b7f826(void)

void FUN_148b7f826(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x65) == '\x01') {
    *param_2 = &PTR_FUN_14b5c7300;
    FUN_140d97376(param_2 + 3);
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0x65) = 0;
  }
  return;
}



// FUNCTION 148b7f8ae FUN_148b7f8ae body=60 status=ok
// SIG undefined FUN_148b7f8ae(void)

undefined8 * FUN_148b7f8ae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5c7300;
  FUN_140d97376(param_1 + 3);
  FUN_140f4e84a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b7f8ea FUN_148b7f8ea body=55 status=ok
// SIG undefined FUN_148b7f8ea(void)

void FUN_148b7f8ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f3b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f3b8 = FUN_140002ddd(FUN_1465a36dd,uVar1,L"BinderBehaviorMod_NPCGiveTake");
  }
  return;
}



// FUNCTION 148b7f9ac FUN_148b7f9ac body=54 status=ok
// SIG undefined FUN_148b7f9ac(void)

undefined1 FUN_148b7f9ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b7fb1e(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148b7fa0a FUN_148b7fa0a body=59 status=ok
// SIG undefined FUN_148b7fa0a(void)

undefined8 FUN_148b7fa0a(longlong *param_1)

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



// FUNCTION 148b7fa50 FUN_148b7fa50 body=32 status=ok
// SIG undefined FUN_148b7fa50(void)

void FUN_148b7fa50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148b7fabe FUN_148b7fabe body=38 status=ok
// SIG undefined FUN_148b7fabe(void)

undefined8 FUN_148b7fabe(undefined8 param_1,int param_2)

{
  FUN_140f4e84a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b7fae4 FUN_148b7fae4 body=57 status=ok
// SIG undefined FUN_148b7fae4(void)

void FUN_148b7fae4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f3d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f3d0 = FUN_140002ddd(FUN_1465a373c,uVar1,L"BinderBehaviorMod_OakCarryableContainer");
  }
  return;
}



// FUNCTION 148b7fb1e FUN_148b7fb1e body=99 status=ok
// SIG undefined FUN_148b7fb1e(void)

longlong FUN_148b7fb1e(longlong param_1,longlong param_2)

{
  FUN_14862318e(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_2 + 0x48);
  return param_1;
}



// FUNCTION 148b7fc0c FUN_148b7fc0c body=54 status=ok
// SIG undefined FUN_148b7fc0c(void)

undefined1 FUN_148b7fc0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b7fd7c(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148b7fc6a FUN_148b7fc6a body=59 status=ok
// SIG undefined FUN_148b7fc6a(void)

undefined8 FUN_148b7fc6a(longlong *param_1)

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



// FUNCTION 148b7fcb0 FUN_148b7fcb0 body=32 status=ok
// SIG undefined FUN_148b7fcb0(void)

void FUN_148b7fcb0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148b7fd1e FUN_148b7fd1e body=38 status=ok
// SIG undefined FUN_148b7fd1e(void)

undefined8 FUN_148b7fd1e(undefined8 param_1,int param_2)

{
  FUN_140f4e84a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b7fd44 FUN_148b7fd44 body=55 status=ok
// SIG undefined FUN_148b7fd44(void)

void FUN_148b7fd44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f3e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f3e8 = FUN_140002ddd(FUN_1465a37d3,uVar1,L"BinderBehaviorMod_OakCarryableDispenser");
  }
  return;
}



// FUNCTION 148b7fd7c FUN_148b7fd7c body=99 status=ok
// SIG undefined FUN_148b7fd7c(void)

longlong FUN_148b7fd7c(longlong param_1,longlong param_2)

{
  FUN_14862318e(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_2 + 0x48);
  return param_1;
}



// FUNCTION 148b7fe20 FUN_148b7fe20 body=54 status=ok
// SIG undefined FUN_148b7fe20(void)

undefined1 FUN_148b7fe20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b7ff5e(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148b7fe7e FUN_148b7fe7e body=59 status=ok
// SIG undefined FUN_148b7fe7e(void)

undefined8 FUN_148b7fe7e(longlong *param_1)

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



// FUNCTION 148b7fec4 FUN_148b7fec4 body=32 status=ok
// SIG undefined FUN_148b7fec4(void)

void FUN_148b7fec4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_140f4e84a(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148b7ff26 FUN_148b7ff26 body=55 status=ok
// SIG undefined FUN_148b7ff26(void)

void FUN_148b7ff26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f400 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f400 = FUN_140002ddd(FUN_1465a3869,uVar1,L"BinderBehaviorMod_OverrideUXName");
  }
  return;
}



// FUNCTION 148b7ff5e FUN_148b7ff5e body=91 status=ok
// SIG undefined FUN_148b7ff5e(void)

longlong FUN_148b7ff5e(longlong param_1,longlong param_2)

{
  FUN_14862318e(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 148b80098 FUN_148b80098 body=63 status=ok
// SIG undefined FUN_148b80098(void)

undefined1 FUN_148b80098(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b801fc(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 148b80100 FUN_148b80100 body=59 status=ok
// SIG undefined FUN_148b80100(void)

undefined8 FUN_148b80100(longlong *param_1)

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



// FUNCTION 148b8014c FUN_148b8014c body=40 status=ok
// SIG undefined FUN_148b8014c(void)

void FUN_148b8014c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_145a9d788(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 148b801c2 FUN_148b801c2 body=57 status=ok
// SIG undefined FUN_148b801c2(void)

void FUN_148b801c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f450 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f450 = FUN_140002ddd(FUN_1465a3a33,uVar1,L"BlackMarketWeeklyDef");
  }
  return;
}



// FUNCTION 148b801fc FUN_148b801fc body=132 status=ok
// SIG undefined FUN_148b801fc(void)

longlong FUN_148b801fc(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FUN_1410d4484(param_1 + 0x28,param_2 + 0x28);
  FUN_1400fce78(param_1 + 0x38,param_2 + 0x38);
  FUN_14876781e(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  FUN_14184b2ce(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  return param_1;
}



// FUNCTION 148b80314 FUN_148b80314 body=59 status=ok
// SIG undefined FUN_148b80314(void)

undefined8 FUN_148b80314(longlong *param_1)

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



// FUNCTION 148b803b4 FUN_148b803b4 body=29 status=ok
// SIG undefined FUN_148b803b4(void)

undefined8 FUN_148b803b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b803d2 FUN_148b803d2 body=55 status=ok
// SIG undefined FUN_148b803d2(void)

void FUN_148b803d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f468 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f468 = FUN_140002ddd(FUN_1465a3ac9,uVar1,L"BorgWeaponAugmentDef");
  }
  return;
}



// FUNCTION 148b8040a FUN_148b8040a body=42 status=ok
// SIG undefined FUN_148b8040a(void)

undefined8 FUN_148b8040a(void)

{
  FUN_140033559("D:\\Oak2\\OakGame\\Source\\OakGame/Weapon/Behaviors/BorgAugments/BorgWeaponAugment.h"
                ,0x16,L"Pure virtual not implemented (%s)",L"FBorgWeaponAugmentDef::GetAugmentClass"
               );
  return 0;
}



// FUNCTION 148b804c8 FUN_148b804c8 body=59 status=ok
// SIG undefined FUN_148b804c8(void)

undefined8 FUN_148b804c8(longlong *param_1)

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



// FUNCTION 148b80568 FUN_148b80568 body=29 status=ok
// SIG undefined FUN_148b80568(void)

undefined8 FUN_148b80568(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b80586 FUN_148b80586 body=55 status=ok
// SIG undefined FUN_148b80586(void)

void FUN_148b80586(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f480 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f480 = FUN_140002ddd(FUN_1465a3b61,uVar1,L"BorgWeaponAugment");
  }
  return;
}



// FUNCTION 148b80648 FUN_148b80648 body=59 status=ok
// SIG undefined FUN_148b80648(void)

undefined8 FUN_148b80648(longlong *param_1)

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



// FUNCTION 148b806e8 FUN_148b806e8 body=55 status=ok
// SIG undefined FUN_148b806e8(void)

void FUN_148b806e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f498 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f498 = FUN_140002ddd(FUN_1465a3bf9,uVar1,L"BorgWeaponAugmentContextResolver");
  }
  return;
}



// FUNCTION 148b80778 FUN_148b80778 body=70 status=ok
// SIG undefined FUN_148b80778(void)

undefined8 FUN_148b80778(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_1459a0a08(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b807e6 FUN_148b807e6 body=59 status=ok
// SIG undefined FUN_148b807e6(void)

undefined8 FUN_148b807e6(longlong *param_1)

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



// FUNCTION 148b8082c FUN_148b8082c body=48 status=ok
// SIG undefined FUN_148b8082c(void)

void FUN_148b8082c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14b5c66a0;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 148b808aa FUN_148b808aa body=57 status=ok
// SIG undefined FUN_148b808aa(void)

undefined8 * FUN_148b808aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5c66a0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b808e4 FUN_148b808e4 body=55 status=ok
// SIG undefined FUN_148b808e4(void)

void FUN_148b808e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f4b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f4b0 = FUN_140002ddd(FUN_1465a3c8f,uVar1,L"BorgWeaponAugmentDef_Attribute");
  }
  return;
}



// FUNCTION 148b8097c FUN_148b8097c body=54 status=ok
// SIG undefined FUN_148b8097c(void)

undefined1 FUN_148b8097c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b80b4e(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 148b809da FUN_148b809da body=59 status=ok
// SIG undefined FUN_148b809da(void)

undefined8 FUN_148b809da(longlong *param_1)

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



// FUNCTION 148b80a20 FUN_148b80a20 body=34 status=ok
// SIG undefined FUN_148b80a20(void)

void FUN_148b80a20(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_148b80aee(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148b80a90 FUN_148b80a90 body=38 status=ok
// SIG undefined FUN_148b80a90(void)

undefined8 FUN_148b80a90(undefined8 param_1,int param_2)

{
  FUN_148b80aee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b80ab6 FUN_148b80ab6 body=55 status=ok
// SIG undefined FUN_148b80ab6(void)

void FUN_148b80ab6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f4c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f4c8 = FUN_140002ddd(FUN_1465a3d25,uVar1,L"BorgWeaponAugment_Attribute");
  }
  return;
}



// FUNCTION 148b80aee FUN_148b80aee body=95 status=ok
// SIG undefined FUN_148b80aee(void)

void FUN_148b80aee(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5c6820;
  FUN_140368c45(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x000148b80b42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148b80b4e FUN_148b80b4e body=111 status=ok
// SIG undefined FUN_148b80b4e(void)

longlong FUN_148b80b4e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(longlong *)(param_1 + 0x18) = lVar4;
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
  FUN_140f82514(param_1 + 0x20,param_2 + 0x20);
  return param_1;
}



// FUNCTION 148b80bbe FUN_148b80bbe body=98 status=ok
// SIG undefined FUN_148b80bbe(void)

void FUN_148b80bbe(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148b80c20 FUN_148b80c20 body=45 status=ok
// SIG undefined FUN_148b80c20(void)

void FUN_148b80c20(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 148b80ce8 FUN_148b80ce8 body=95 status=ok
// SIG undefined FUN_148b80ce8(void)

undefined8 FUN_148b80ce8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + 8 + lVar1) = *(undefined8 *)(param_3 + 8 + lVar1);
      FUN_140d02432(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      *(undefined1 *)(param_2 + 0x60 + lVar1) = *(undefined1 *)(param_3 + 0x60 + lVar1);
      lVar1 = lVar1 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b80d70 FUN_148b80d70 body=59 status=ok
// SIG undefined FUN_148b80d70(void)

undefined8 FUN_148b80d70(longlong *param_1)

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



// FUNCTION 148b80e10 FUN_148b80e10 body=29 status=ok
// SIG undefined FUN_148b80e10(void)

undefined8 FUN_148b80e10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b80e2e FUN_148b80e2e body=55 status=ok
// SIG undefined FUN_148b80e2e(void)

void FUN_148b80e2e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9f4f8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9f4f8 = FUN_140002ddd(FUN_1465a3deb,uVar1,L"BorgWeaponAugmentDef_ElementalLeech");
  }
  return;
}


