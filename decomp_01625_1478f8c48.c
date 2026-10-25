// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1478f8c48 FUN_1478f8c48 body=54 status=ok
// SIG undefined FUN_1478f8c48(void)

undefined1 FUN_1478f8c48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14054c6c4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1478f8ca6 FUN_1478f8ca6 body=59 status=ok
// SIG undefined FUN_1478f8ca6(void)

undefined8 FUN_1478f8ca6(longlong *param_1)

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



// FUNCTION 1478f8cec FUN_1478f8cec body=37 status=ok
// SIG undefined FUN_1478f8cec(void)

void FUN_1478f8cec(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1478f8d8e FUN_1478f8d8e body=54 status=ok
// SIG undefined FUN_1478f8d8e(void)

undefined1 FUN_1478f8d8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14054c6c4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1478f8dec FUN_1478f8dec body=59 status=ok
// SIG undefined FUN_1478f8dec(void)

undefined8 FUN_1478f8dec(longlong *param_1)

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



// FUNCTION 1478f8e32 FUN_1478f8e32 body=37 status=ok
// SIG undefined FUN_1478f8e32(void)

void FUN_1478f8e32(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1478f8eec FUN_1478f8eec body=54 status=ok
// SIG undefined FUN_1478f8eec(void)

undefined1 FUN_1478f8eec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478f8fea(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 1478f8f4a FUN_1478f8f4a body=59 status=ok
// SIG undefined FUN_1478f8f4a(void)

undefined8 FUN_1478f8f4a(longlong *param_1)

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



// FUNCTION 1478f8fea FUN_1478f8fea body=112 status=ok
// SIG undefined FUN_1478f8fea(void)

undefined4 * FUN_1478f8fea(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  lVar2 = *(longlong *)(param_2 + 2);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 2);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 2) = lVar2;
  param_1[4] = param_2[4];
  lVar2 = *(longlong *)(param_2 + 6);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 6);
    }
  }
  *(longlong *)(param_1 + 6) = lVar2;
  return param_1;
}



// FUNCTION 1478f9084 FUN_1478f9084 body=100 status=ok
// SIG undefined FUN_1478f9084(void)

undefined1 FUN_1478f9084(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1478f9110 FUN_1478f9110 body=59 status=ok
// SIG undefined FUN_1478f9110(void)

undefined8 FUN_1478f9110(longlong *param_1)

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



// FUNCTION 1478f91da FUN_1478f91da body=48 status=ok
// SIG undefined FUN_1478f91da(void)

void FUN_1478f91da(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478f9220 FUN_1478f9220 body=54 status=ok
// SIG undefined FUN_1478f9220(void)

undefined1 FUN_1478f9220(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478f931a(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1478f927e FUN_1478f927e body=59 status=ok
// SIG undefined FUN_1478f927e(void)

undefined8 FUN_1478f927e(longlong *param_1)

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



// FUNCTION 1478f931a FUN_1478f931a body=99 status=ok
// SIG undefined FUN_1478f931a(void)

longlong * FUN_1478f931a(longlong *param_1,longlong *param_2)

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
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar3 = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 2) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x15) = *(undefined8 *)((longlong)param_2 + 0x15);
  FUN_1478f937e(param_1 + 4,param_2 + 4);
  FUN_1478f93ce(param_1 + 6,param_2 + 6);
  return param_1;
}



// FUNCTION 1478f937e FUN_1478f937e body=79 status=ok
// SIG undefined FUN_1478f937e(void)

undefined8 * FUN_1478f937e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1478f941e(param_1,iVar1);
      FUN_1478f9480(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1478f93ce FUN_1478f93ce body=79 status=ok
// SIG undefined FUN_1478f93ce(void)

undefined8 * FUN_1478f93ce(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1478f94d2(param_1,iVar1);
      FUN_1478f9534(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1478f941e FUN_1478f941e body=98 status=ok
// SIG undefined FUN_1478f941e(void)

void FUN_1478f941e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1478f9480 FUN_1478f9480 body=82 status=ok
// SIG undefined FUN_1478f9480(void)

void FUN_1478f9480(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1478f94d2 FUN_1478f94d2 body=98 status=ok
// SIG undefined FUN_1478f94d2(void)

void FUN_1478f94d2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1478f9534 FUN_1478f9534 body=82 status=ok
// SIG undefined FUN_1478f9534(void)

void FUN_1478f9534(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1478f9588 FUN_1478f9588 body=52 status=ok
// SIG undefined FUN_1478f9588(void)

void FUN_1478f9588(longlong param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1478f95cc FUN_1478f95cc body=44 status=ok
// SIG undefined FUN_1478f95cc(void)

void FUN_1478f95cc(undefined8 param_1,longlong *param_2)

{
  FUN_140eff75d(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478f960e FUN_1478f960e body=54 status=ok
// SIG undefined FUN_1478f960e(void)

undefined1 FUN_1478f960e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478f9708(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1478f966c FUN_1478f966c body=59 status=ok
// SIG undefined FUN_1478f966c(void)

undefined8 FUN_1478f966c(longlong *param_1)

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



// FUNCTION 1478f9708 FUN_1478f9708 body=93 status=ok
// SIG undefined FUN_1478f9708(void)

undefined8 * FUN_1478f9708(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140eff75d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1478f9766(param_1,iVar1);
      FUN_1478f97c8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1478f9766 FUN_1478f9766 body=98 status=ok
// SIG undefined FUN_1478f9766(void)

void FUN_1478f9766(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1478f97c8 FUN_1478f97c8 body=52 status=ok
// SIG undefined FUN_1478f97c8(void)

void FUN_1478f97c8(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1478f97fc(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 1478f97fc FUN_1478f97fc body=201 status=ok
// SIG undefined FUN_1478f97fc(void)

longlong * FUN_1478f97fc(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)((longlong)param_1 + 0x15) = *(undefined8 *)((longlong)param_2 + 0x15);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar2 = param_2[2];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(int *)(param_1 + 2) = (int)lVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[4] = 0;
  iVar1 = (int)param_2[5];
  lVar2 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1478f941e(param_1 + 4,iVar1,0);
    FUN_1478f9480(param_1[4],lVar2,iVar1);
  }
  param_1[6] = 0;
  iVar1 = (int)param_2[7];
  lVar2 = param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1478f94d2(param_1 + 6,iVar1,0);
    FUN_1478f9534(param_1[6],lVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1478f98c6 FUN_1478f98c6 body=48 status=ok
// SIG undefined FUN_1478f98c6(void)

void FUN_1478f98c6(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_140eff75d(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1478f98f6 FUN_1478f98f6 body=245 status=ok
// SIG undefined FUN_1478f98f6(void)

void FUN_1478f98f6(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_19 = param_2;
  local_28 = FUN_14636c9ce();
  if (*(longlong *)(param_1 + 8) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
  }
  local_30 = param_3;
  (**(code **)(*plVar3 + 0x180))(plVar3,&local_19,&local_30);
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
  }
  FUN_1478f99ec(*(undefined8 *)(param_1 + 0x18),&local_19,uVar4,&local_30);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (0 < *(int *)(lVar1 + 8)) {
    local_40 = *(longlong *)(param_1 + 8);
    if ((local_40 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_38 = *(undefined8 *)(param_1 + 0x10);
    FUN_147856f42(lVar1,local_19,&local_40,&local_30);
  }
  if (local_19 == '\0') {
    iVar2 = 1;
  }
  else {
    if (local_19 != '\x01') goto LAB_1478f99c7;
    iVar2 = -1;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar2;
LAB_1478f99c7:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478f99ec FUN_1478f99ec body=193 status=ok
// SIG undefined FUN_1478f99ec(void)

void FUN_1478f99ec(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1478f9a83;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1478f9a83:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1478f9aae FUN_1478f9aae body=29 status=ok
// SIG undefined FUN_1478f9aae(void)

undefined8 FUN_1478f9aae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478f9b0a FUN_1478f9b0a body=95 status=ok
// SIG undefined FUN_1478f9b0a(void)

undefined8 FUN_1478f9b0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    do {
      uVar2 = *(undefined8 *)(param_3 + lVar5);
      lVar3 = *(longlong *)(param_3 + 8 + lVar5);
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
        UNLOCK();
      }
      plVar4 = *(longlong **)(param_2 + 8 + lVar5);
      *(undefined8 *)(param_2 + lVar5) = uVar2;
      *(longlong *)(param_2 + 8 + lVar5) = lVar3;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      lVar5 = lVar5 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478f9b92 FUN_1478f9b92 body=59 status=ok
// SIG undefined FUN_1478f9b92(void)

undefined8 FUN_1478f9b92(longlong *param_1)

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



// FUNCTION 1478f9bd8 FUN_1478f9bd8 body=45 status=ok
// SIG undefined FUN_1478f9bd8(void)

void FUN_1478f9bd8(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar2 = *(longlong **)(param_2 + 8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1478f9c94 FUN_1478f9c94 body=95 status=ok
// SIG undefined FUN_1478f9c94(void)

undefined8 FUN_1478f9c94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    do {
      uVar2 = *(undefined8 *)(param_3 + lVar5);
      lVar3 = *(longlong *)(param_3 + 8 + lVar5);
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
        UNLOCK();
      }
      plVar4 = *(longlong **)(param_2 + 8 + lVar5);
      *(undefined8 *)(param_2 + lVar5) = uVar2;
      *(longlong *)(param_2 + 8 + lVar5) = lVar3;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      lVar5 = lVar5 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478f9d1c FUN_1478f9d1c body=59 status=ok
// SIG undefined FUN_1478f9d1c(void)

undefined8 FUN_1478f9d1c(longlong *param_1)

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



// FUNCTION 1478f9d62 FUN_1478f9d62 body=45 status=ok
// SIG undefined FUN_1478f9d62(void)

void FUN_1478f9d62(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar2 = *(longlong **)(param_2 + 8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1478f9e1e FUN_1478f9e1e body=95 status=ok
// SIG undefined FUN_1478f9e1e(void)

undefined8 FUN_1478f9e1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    do {
      uVar2 = *(undefined8 *)(param_3 + lVar5);
      lVar3 = *(longlong *)(param_3 + 8 + lVar5);
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
        UNLOCK();
      }
      plVar4 = *(longlong **)(param_2 + 8 + lVar5);
      *(undefined8 *)(param_2 + lVar5) = uVar2;
      *(longlong *)(param_2 + 8 + lVar5) = lVar3;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      lVar5 = lVar5 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478f9ea6 FUN_1478f9ea6 body=59 status=ok
// SIG undefined FUN_1478f9ea6(void)

undefined8 FUN_1478f9ea6(longlong *param_1)

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



// FUNCTION 1478f9eec FUN_1478f9eec body=45 status=ok
// SIG undefined FUN_1478f9eec(void)

void FUN_1478f9eec(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar2 = *(longlong **)(param_2 + 8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1478f9fa8 FUN_1478f9fa8 body=95 status=ok
// SIG undefined FUN_1478f9fa8(void)

undefined8 FUN_1478f9fa8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    do {
      uVar2 = *(undefined8 *)(param_3 + lVar5);
      lVar3 = *(longlong *)(param_3 + 8 + lVar5);
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
        UNLOCK();
      }
      plVar4 = *(longlong **)(param_2 + 8 + lVar5);
      *(undefined8 *)(param_2 + lVar5) = uVar2;
      *(longlong *)(param_2 + 8 + lVar5) = lVar3;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      lVar5 = lVar5 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478fa030 FUN_1478fa030 body=59 status=ok
// SIG undefined FUN_1478fa030(void)

undefined8 FUN_1478fa030(longlong *param_1)

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



// FUNCTION 1478fa076 FUN_1478fa076 body=45 status=ok
// SIG undefined FUN_1478fa076(void)

void FUN_1478fa076(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar2 = *(longlong **)(param_2 + 8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1478fa132 FUN_1478fa132 body=95 status=ok
// SIG undefined FUN_1478fa132(void)

undefined8 FUN_1478fa132(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    do {
      uVar2 = *(undefined8 *)(param_3 + lVar5);
      lVar3 = *(longlong *)(param_3 + 8 + lVar5);
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
        UNLOCK();
      }
      plVar4 = *(longlong **)(param_2 + 8 + lVar5);
      *(undefined8 *)(param_2 + lVar5) = uVar2;
      *(longlong *)(param_2 + 8 + lVar5) = lVar3;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
      lVar5 = lVar5 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478fa1ba FUN_1478fa1ba body=59 status=ok
// SIG undefined FUN_1478fa1ba(void)

undefined8 FUN_1478fa1ba(longlong *param_1)

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



// FUNCTION 1478fa200 FUN_1478fa200 body=45 status=ok
// SIG undefined FUN_1478fa200(void)

void FUN_1478fa200(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar2 = *(longlong **)(param_2 + 8);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1478fa2b2 FUN_1478fa2b2 body=54 status=ok
// SIG undefined FUN_1478fa2b2(void)

undefined1 FUN_1478fa2b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144756208(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1478fa310 FUN_1478fa310 body=59 status=ok
// SIG undefined FUN_1478fa310(void)

undefined8 FUN_1478fa310(longlong *param_1)

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



// FUNCTION 1478fa356 FUN_1478fa356 body=37 status=ok
// SIG undefined FUN_1478fa356(void)

void FUN_1478fa356(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1478fa3f4 FUN_1478fa3f4 body=47 status=ok
// SIG undefined FUN_1478fa3f4(void)

void FUN_1478fa3f4(undefined8 param_1,longlong *param_2)

{
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478fa43a FUN_1478fa43a body=75 status=ok
// SIG undefined FUN_1478fa43a(void)

undefined8 FUN_1478fa43a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144756208(param_2,param_3);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    FUN_1447a122a(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 1478fa4ae FUN_1478fa4ae body=59 status=ok
// SIG undefined FUN_1478fa4ae(void)

undefined8 FUN_1478fa4ae(longlong *param_1)

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



// FUNCTION 1478fa54c FUN_1478fa54c body=51 status=ok
// SIG undefined FUN_1478fa54c(void)

void FUN_1478fa54c(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1478fa580 FUN_1478fa580 body=79 status=ok
// SIG undefined FUN_1478fa580(void)

void FUN_1478fa580(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478fa5d0 FUN_1478fa5d0 body=140 status=ok
// SIG undefined FUN_1478fa5d0(void)

longlong FUN_1478fa5d0(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x140);
    FUN_145cfbc50((void *)(param_1 + 0x130),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x130);
      if (*(void **)(param_1 + 0x138) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x138);
      }
      _Src = (void *)(param_2 + 0x130);
      if (*(void **)(param_2 + 0x138) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x138);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x140) = iVar1;
    FUN_1478fa65c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1478fa65c FUN_1478fa65c body=307 status=ok
// SIG undefined FUN_1478fa65c(void)

longlong FUN_1478fa65c(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 0x108);
    FUN_1478fa790(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 0x108);
    *(uint *)(param_1 + 0x108) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x10c) - iVar2) < uVar1) {
      FUN_1478fa918(param_1);
    }
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
    FUN_1470c60fc(param_1 + 0x110,param_2 + 0x110);
    lVar7 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar7 = param_1;
    }
    lVar5 = *(longlong *)(param_2 + 0x100);
    if (*(longlong *)(param_2 + 0x100) == 0) {
      lVar5 = param_2;
    }
    if (0 < (int)uVar1) {
      lVar6 = 0;
      uVar4 = 0;
      do {
        lVar3 = *(longlong *)(param_2 + 0x118);
        if (*(longlong *)(param_2 + 0x118) == 0) {
          lVar3 = param_2 + 0x110;
        }
        if ((*(uint *)(lVar3 + (uVar4 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar4 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar7 + lVar6) = *(undefined4 *)(lVar5 + lVar6);
          *(undefined4 *)(lVar7 + 4 + lVar6) = *(undefined4 *)(lVar5 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar7 + lVar6) = *(undefined8 *)(lVar5 + lVar6);
          FUN_1478fa996(lVar7 + 8 + lVar6,lVar5 + 8 + lVar6);
          *(undefined8 *)(lVar7 + 0x38 + lVar6) = *(undefined8 *)(lVar5 + 0x38 + lVar6);
        }
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + 0x40;
      } while (uVar1 != uVar4);
    }
  }
  return param_1;
}



// FUNCTION 1478fa790 FUN_1478fa790 body=390 status=ok
// SIG undefined FUN_1478fa790(void)

void FUN_1478fa790(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x110;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = lVar1;
  if (*(int *)(param_1 + 0x120) != 0) {
    FUN_144a81a4c(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < *(int *)(local_40 + 0x10)) {
    do {
      lVar3 = *(longlong *)(local_70 + 0x100);
      if (*(longlong *)(local_70 + 0x100) == 0) {
        lVar3 = local_70;
      }
      if (*(longlong *)(lVar3 + 0x28 + (longlong)iStack_54 * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_144a81a4c(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x10));
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    if (*(int *)(param_1 + 0x10c) != param_2) {
      FUN_144729186(param_1,param_2);
    }
    *(undefined8 *)(param_1 + 0x128) = 0xffffffff;
    uVar4 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    if (*(int *)(param_1 + 0x124) < (int)uVar4 || 0x20 < *(int *)(param_1 + 0x124)) {
      uVar2 = 0x20;
      if (0x20 < (int)uVar4) {
        uVar2 = uVar4;
      }
      *(uint *)(param_1 + 0x124) = uVar2;
      FUN_14008f53c(lVar1,0);
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



// FUNCTION 1478fa918 FUN_1478fa918 body=125 status=ok
// SIG undefined FUN_1478fa918(void)

void FUN_1478fa918(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x10c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 6,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 6)) {
        uVar4 = uVar2 >> 6 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x10c) = (int)uVar4;
    FUN_1433d6f74(param_1,param_2,uVar4,0x40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1478fa996 FUN_1478fa996 body=100 status=ok
// SIG undefined FUN_1478fa996(void)

void * FUN_1478fa996(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x28);
  pvVar2 = *(void **)((longlong)param_2 + 0x20);
  *(int *)((longlong)param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  }
  else {
    if (pvVar2 != (void *)0x0) {
      param_2 = pvVar2;
    }
    FUN_1478fa9fa(param_1,iVar1);
    pvVar2 = *(void **)((longlong)param_1 + 0x20);
    if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
      pvVar2 = param_1;
    }
    memcpy(pvVar2,param_2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1478fa9fa FUN_1478fa9fa body=90 status=ok
// SIG undefined FUN_1478fa9fa(void)

void FUN_1478fa9fa(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 5) {
    iVar3 = 4;
  }
  else {
    iVar2 = 0;
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    iVar3 = (int)(uVar1 >> 3);
    if (iVar3 < (int)param_2) {
      iVar3 = 0x7fffffff;
    }
    else if (iVar3 < 1) goto LAB_1478faa2b;
  }
  iVar2 = iVar3;
  FUN_1478faa54(param_1,0,iVar2);
LAB_1478faa2b:
  *(int *)(param_1 + 0x2c) = iVar2;
  return;
}



// FUNCTION 1478faa54 FUN_1478faa54 body=132 status=ok
// SIG undefined FUN_1478faa54(void)

void FUN_1478faa54(void *param_1,int param_2,undefined8 param_3)

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
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 1478faad8 FUN_1478faad8 body=61 status=ok
// SIG undefined FUN_1478faad8(void)

void FUN_1478faad8(longlong param_1)

{
  FUN_1478fa790(param_1,0);
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478fab16 FUN_1478fab16 body=146 status=ok
// SIG undefined FUN_1478fab16(void)

void FUN_1478fab16(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x560);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x158);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x560,0,param_3,0x158);
    memmove(*(void **)((longlong)param_1 + 0x560),param_1,(longlong)param_2 * 0x158);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x560,param_2,param_3,0x158);
  return;
}



// FUNCTION 1478faba8 FUN_1478faba8 body=113 status=ok
// SIG undefined FUN_1478faba8(void)

void FUN_1478faba8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,8);
  }
  return;
}



// FUNCTION 1478fac1a FUN_1478fac1a body=132 status=ok
// SIG undefined FUN_1478fac1a(void)

void FUN_1478fac1a(longlong param_1,int param_2)

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



// FUNCTION 1478faca0 FUN_1478faca0 body=89 status=ok
// SIG undefined FUN_1478faca0(void)

void FUN_1478faca0(longlong param_1,int param_2)

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



// FUNCTION 1478facfa FUN_1478facfa body=29 status=ok
// SIG undefined FUN_1478facfa(void)

undefined8 FUN_1478facfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478fad76 FUN_1478fad76 body=82 status=ok
// SIG undefined FUN_1478fad76(void)

longlong * FUN_1478fad76(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1478fadc8 FUN_1478fadc8 body=132 status=ok
// SIG undefined FUN_1478fadc8(void)

void FUN_1478fadc8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1478fae4e FUN_1478fae4e body=147 status=ok
// SIG undefined FUN_1478fae4e(void)

void FUN_1478fae4e(longlong param_1,int param_2)

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



// FUNCTION 1478faee2 FUN_1478faee2 body=96 status=ok
// SIG undefined FUN_1478faee2(void)

void FUN_1478faee2(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,0);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0x1c) = iVar5;
    FUN_14015cd12(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1478faf44 FUN_1478faf44 body=84 status=ok
// SIG undefined FUN_1478faf44(void)

void FUN_1478faf44(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((((longlong)(iVar2 - iVar1) & 0x3ffffffffffff000U) != 0) || (iVar1 * 3 < iVar2 * 2)) {
    if ((iVar2 != iVar1) && (iVar1 == 0 || 0x40 < iVar2 - iVar1)) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_14015d2bc(param_1,iVar1,iVar1,4);
      return;
    }
  }
  return;
}



// FUNCTION 1478faf98 FUN_1478faf98 body=362 status=ok
// SIG undefined FUN_1478faf98(void)

longlong * FUN_1478faf98(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
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
      FUN_1457a6488(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1479398e8(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1457a6488(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1478fb104(param_2);
        FUN_1479398e8(param_1,uVar3);
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



// FUNCTION 1478fb104 FUN_1478fb104 body=64 status=ok
// SIG undefined FUN_1478fb104(void)

longlong FUN_1478fb104(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140f80f72(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_140f80f50(lVar2,1);
  return lVar2;
}



// FUNCTION 1478fb144 FUN_1478fb144 body=361 status=ok
// SIG undefined FUN_1478fb144(void)

undefined4 *
FUN_1478fb144(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1478fb2ae(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined2 *)(local_40 + 3) = 0xff;
  *(undefined1 *)((longlong)local_40 + 0x1a) = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_1478fb394(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x24) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1478fb4da(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478fb2ae FUN_1478fb2ae body=230 status=ok
// SIG undefined FUN_1478fb2ae(void)

int * FUN_1478fb2ae(longlong *param_1,int *param_2)

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



// FUNCTION 1478fb394 FUN_1478fb394 body=187 status=ok
// SIG undefined FUN_1478fb394(void)

void FUN_1478fb394(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
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
        plVar9 = (longlong *)(*param_1 + (longlong)iVar10 * 0x28);
        if (*plVar9 == *param_3) {
          if (plVar9[1] != 0) {
            FUN_1400020a8();
          }
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar9 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar9 + 0x14) = uVar3;
          *(int *)(plVar9 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar9 + 0x1c) = uVar4;
          *(int *)plVar9 = (int)lVar5;
          *(undefined4 *)((longlong)plVar9 + 4) = uVar1;
          *(int *)(plVar9 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar9 + 0xc) = uVar2;
          FUN_1478fb450(param_1,*param_4,1);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_1478fb406;
        }
        iVar10 = (int)plVar9[4];
      } while (iVar10 != -1);
    }
  }
  uVar8 = 0;
LAB_1478fb406:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 1478fb450 FUN_1478fb450 body=138 status=ok
// SIG undefined FUN_1478fb450(void)

void FUN_1478fb450(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1478fb4da FUN_1478fb4da body=473 status=ok
// SIG undefined FUN_1478fb4da(void)

void FUN_1478fb4da(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 1478fb6b4 FUN_1478fb6b4 body=132 status=ok
// SIG undefined FUN_1478fb6b4(void)

void FUN_1478fb6b4(longlong param_1,int param_2)

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



// FUNCTION 1478fb73a FUN_1478fb73a body=271 status=ok
// SIG undefined FUN_1478fb73a(void)

float * FUN_1478fb73a(float *param_1,float *param_2,float *param_3,uint *param_4)

{
  uint uVar1;
  float _X;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = *param_4;
  fVar3 = ((float)(int)((uVar1 >> 0x15) - 0x3ff) / 1023.0) * *param_3 + *param_2;
  fVar4 = ((float)(int)((uVar1 >> 10 & 0x7ff) - 0x3ff) / 1023.0) * param_3[1] + param_2[1];
  fVar5 = ((float)(int)((uVar1 & 0x3ff) - 0x1ff) / 511.0) * param_3[2] + param_2[2];
  _X = ((1.0 - fVar3 * fVar3) - fVar4 * fVar4) - fVar5 * fVar5;
  fVar2 = 0.0;
  if (0.0 < _X) {
    if (_X < 0.0) {
      fVar2 = sqrtf(_X);
    }
    else {
      fVar2 = SQRT(_X);
    }
  }
  *param_1 = fVar3;
  param_1[1] = fVar4;
  param_1[2] = fVar5;
  param_1[3] = fVar2;
  return param_1;
}



// FUNCTION 1478fb84a FUN_1478fb84a body=231 status=ok
// SIG undefined FUN_1478fb84a(void)

float * FUN_1478fb84a(float *param_1,uint *param_2)

{
  uint uVar1;
  float _X;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = *param_2;
  fVar3 = (float)(int)((uVar1 >> 0x15) - 0x3ff) / 1023.0;
  fVar4 = (float)(int)((uVar1 >> 10 & 0x7ff) - 0x3ff) / 1023.0;
  fVar5 = (float)(int)((uVar1 & 0x3ff) - 0x1ff) / 511.0;
  _X = ((1.0 - fVar3 * fVar3) - fVar4 * fVar4) - fVar5 * fVar5;
  fVar2 = 0.0;
  if (0.0 < _X) {
    if (_X < 0.0) {
      fVar2 = sqrtf(_X);
    }
    else {
      fVar2 = SQRT(_X);
    }
  }
  *param_1 = fVar3;
  param_1[1] = fVar4;
  param_1[2] = fVar5;
  param_1[3] = fVar2;
  return param_1;
}



// FUNCTION 1478fb932 FUN_1478fb932 body=336 status=ok
// SIG undefined FUN_1478fb932(void)

float * FUN_1478fb932(float *param_1,uint *param_2)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float _X;
  
  uVar1 = *param_2;
  uVar3 = uVar1 >> 10 & 0x7ff;
  fVar4 = 0.0;
  fVar5 = 0.0;
  if (0x1fffff < uVar1) {
    fVar5 = (float)((uVar1 >> 5 & 0x3800000 | uVar1 & 0x80000000) + (uVar1 >> 5 & 0x7f0000) +
                   0x3d800000);
  }
  if (uVar3 != 0) {
    uVar3 = uVar3 << 0x10;
    fVar4 = (float)((uVar3 & 0x3800000 | (uVar1 >> 10 & 0x400) << 0x15) + (uVar3 & 0x7f0000) +
                   0x3d800000);
  }
  fVar6 = 0.0;
  fVar2 = 0.0;
  if ((uVar1 & 0x3ff) != 0) {
    uVar3 = (uVar1 & 0x3ff) << 0x11;
    fVar2 = (float)((uVar3 & 0x7e0000) + (uVar3 & 0x3800000 | (uVar1 & 0x200) << 0x16) + 0x3d800000)
    ;
  }
  _X = ((1.0 - fVar5 * fVar5) - fVar4 * fVar4) - fVar2 * fVar2;
  if (0.0 < _X) {
    if (_X < 0.0) {
      fVar6 = sqrtf(_X);
    }
    else {
      fVar6 = SQRT(_X);
    }
  }
  *param_1 = fVar5;
  param_1[1] = fVar4;
  param_1[2] = fVar2;
  param_1[3] = fVar6;
  return param_1;
}



// FUNCTION 1478fba82 FUN_1478fba82 body=96 status=ok
// SIG undefined FUN_1478fba82(void)

void FUN_1478fba82(longlong param_1,int param_2)

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



// FUNCTION 1478fbae2 FUN_1478fbae2 body=63 status=ok
// SIG undefined FUN_1478fbae2(void)

void FUN_1478fbae2(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_14064f58a(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1478fbc66(param_1);
    return;
  }
  FUN_1478fbb22(param_1);
  FUN_14064f58a(param_1);
  return;
}



// FUNCTION 1478fbb22 FUN_1478fbb22 body=322 status=ok
// SIG undefined FUN_1478fbb22(void)

void FUN_1478fbb22(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1478fbc66 FUN_1478fbc66 body=474 status=ok
// SIG undefined FUN_1478fbc66(void)

void FUN_1478fbc66(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478fbe42 FUN_1478fbe42 body=326 status=ok
// SIG undefined FUN_1478fbe42(void)

void FUN_1478fbe42(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 1478fbf8a FUN_1478fbf8a body=313 status=ok
// SIG undefined FUN_1478fbf8a(void)

void FUN_1478fbf8a(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
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
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
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
      lVar1 = *local_70;
      lVar3 = (longlong)iStack_54;
      if (*(longlong *)(lVar1 + 0x38 + lVar3 * 0x60) != 0) {
        FUN_1400020a8();
      }
      plVar2 = *(longlong **)(lVar1 + lVar3 * 0x60 + 0x28);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478fc0c4 FUN_1478fc0c4 body=113 status=ok
// SIG undefined FUN_1478fc0c4(void)

void FUN_1478fc0c4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 1478fc136 FUN_1478fc136 body=48 status=ok
// SIG undefined FUN_1478fc136(void)

void FUN_1478fc136(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x70,0x10);
  }
  return;
}



// FUNCTION 1478fc166 FUN_1478fc166 body=63 status=ok
// SIG undefined FUN_1478fc166(void)

void FUN_1478fc166(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1478fc1a6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1478fc1a6 FUN_1478fc1a6 body=97 status=ok
// SIG undefined FUN_1478fc1a6(void)

ulonglong FUN_1478fc1a6(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1478fc208 FUN_1478fc208 body=63 status=ok
// SIG undefined FUN_1478fc208(void)

void FUN_1478fc208(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1478fc248(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xb8,8);
  }
  return;
}



// FUNCTION 1478fc248 FUN_1478fc248 body=118 status=ok
// SIG undefined FUN_1478fc248(void)

ulonglong FUN_1478fc248(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0xb8) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xb8,8);
      uVar1 = uVar1 / 0xb8;
    }
  }
  return uVar1;
}



// FUNCTION 1478fc2be FUN_1478fc2be body=63 status=ok
// SIG undefined FUN_1478fc2be(void)

void FUN_1478fc2be(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1478fc2fe(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 1478fc2fe FUN_1478fc2fe body=117 status=ok
// SIG undefined FUN_1478fc2fe(void)

ulonglong FUN_1478fc2fe(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x30) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
      uVar1 = uVar1 / 0x30;
    }
  }
  return uVar1;
}



// FUNCTION 1478fc374 FUN_1478fc374 body=189 status=ok
// SIG undefined FUN_1478fc374(void)

longlong * FUN_1478fc374(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x14);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1478fc414;
          break;
        }
        iVar1 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1478fc432(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x14);
LAB_1478fc414:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 1478fc432 FUN_1478fc432 body=293 status=ok
// SIG undefined FUN_1478fc432(void)

undefined4 *
FUN_1478fc432(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
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
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1408cb62c(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0xffffffff00000000;
  local_68 = param_5;
  cVar1 = FUN_1417b4c5a(param_1,param_3,local_50,local_58);
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
      *(uint *)(local_50 + 2) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_50 + 0xc) =
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
      FUN_1408cb1a2(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478fc558 FUN_1478fc558 body=188 status=ok
// SIG undefined FUN_1478fc558(void)

longlong FUN_1478fc558(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_1478fc5f7;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1478fc616(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_1478fc5f7:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1478fc616 FUN_1478fc616 body=272 status=ok
// SIG undefined FUN_1478fc616(void)

undefined4 * FUN_1478fc616(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1478fc728(param_1,local_48);
  FUN_1478fc8cc(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_1478fc816(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
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
      FUN_1478fc9ca(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478fc728 FUN_1478fc728 body=238 status=ok
// SIG undefined FUN_1478fc728(void)

int * FUN_1478fc728(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 1478fc816 FUN_1478fc816 body=182 status=ok
// SIG undefined FUN_1478fc816(void)

undefined8 FUN_1478fc816(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          if (*(longlong *)((longlong)_Dst + 0x38) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong **)((longlong)_Dst + 0x28) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)_Dst + 0x28) + 0x10))();
          }
          memmove(_Dst,param_3,0x58);
          FUN_1478fc950(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1478fc8cc FUN_1478fc8cc body=131 status=ok
// SIG undefined FUN_1478fc8cc(void)

undefined8 * FUN_1478fc8cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [32];
  longlong *local_50;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144ae08a0(local_70);
  *param_2 = *(undefined8 *)*param_1;
  FUN_1407b1558(param_2 + 1,local_70);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478fc950 FUN_1478fc950 body=122 status=ok
// SIG undefined FUN_1478fc950(void)

void FUN_1478fc950(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1478fc9ca FUN_1478fc9ca body=477 status=ok
// SIG undefined FUN_1478fc9ca(void)

void FUN_1478fc9ca(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 1478fcba8 FUN_1478fcba8 body=188 status=ok
// SIG undefined FUN_1478fcba8(void)

longlong FUN_1478fcba8(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_1478fcc47;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1478fcc66(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_1478fcc47:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1478fcc66 FUN_1478fcc66 body=272 status=ok
// SIG undefined FUN_1478fcc66(void)

undefined4 * FUN_1478fcc66(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1478fc728(param_1,local_48);
  FUN_1478fcd78(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_1478fc816(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
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
      FUN_1478fc9ca(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478fcd78 FUN_1478fcd78 body=131 status=ok
// SIG undefined FUN_1478fcd78(void)

undefined8 * FUN_1478fcd78(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [32];
  longlong *local_50;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144ae08a0(local_70);
  *param_2 = *(undefined8 *)*param_1;
  FUN_1407b1558(param_2 + 1,local_70);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478fcdfc FUN_1478fcdfc body=86 status=ok
// SIG undefined FUN_1478fcdfc(void)

longlong * FUN_1478fcdfc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(char *)(param_1 + 1) = (char)param_2[1];
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_1478fced8(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 1478fce52 FUN_1478fce52 body=132 status=ok
// SIG undefined FUN_1478fce52(void)

void FUN_1478fce52(longlong param_1,int param_2)

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



// FUNCTION 1478fced8 FUN_1478fced8 body=130 status=ok
// SIG undefined FUN_1478fced8(void)

void FUN_1478fced8(longlong *param_1,longlong *param_2)

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



// FUNCTION 1478fcf5c FUN_1478fcf5c body=80 status=ok
// SIG undefined FUN_1478fcf5c(void)

longlong * FUN_1478fcf5c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1478fd040(param_1 + 1,param_2 + 1);
  return param_1;
}



// FUNCTION 1478fcfac FUN_1478fcfac body=147 status=ok
// SIG undefined FUN_1478fcfac(void)

void FUN_1478fcfac(longlong param_1,int param_2)

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



// FUNCTION 1478fd040 FUN_1478fd040 body=130 status=ok
// SIG undefined FUN_1478fd040(void)

void FUN_1478fd040(longlong *param_1,longlong *param_2)

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



// FUNCTION 1478fd0c4 FUN_1478fd0c4 body=92 status=ok
// SIG undefined FUN_1478fd0c4(void)

longlong * FUN_1478fd0c4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_2 + 0xc);
  *(int *)(param_1 + 1) = (int)param_2[1];
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_1478fced8(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 1478fd120 FUN_1478fd120 body=132 status=ok
// SIG undefined FUN_1478fd120(void)

void FUN_1478fd120(longlong param_1,int param_2)

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



// FUNCTION 1478fd1a6 FUN_1478fd1a6 body=96 status=ok
// SIG undefined FUN_1478fd1a6(void)

void FUN_1478fd1a6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1478fd206 FUN_1478fd206 body=113 status=ok
// SIG undefined FUN_1478fd206(void)

void FUN_1478fd206(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1478fd278 FUN_1478fd278 body=96 status=ok
// SIG undefined FUN_1478fd278(void)

void FUN_1478fd278(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1478fd2d8 FUN_1478fd2d8 body=132 status=ok
// SIG undefined FUN_1478fd2d8(void)

void FUN_1478fd2d8(longlong param_1,int param_2)

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



// FUNCTION 1478fd35e FUN_1478fd35e body=326 status=ok
// SIG undefined FUN_1478fd35e(void)

undefined4 * FUN_1478fd35e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1478fd4a6(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1478fd58c(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1478fbc66(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478fd4a6 FUN_1478fd4a6 body=230 status=ok
// SIG undefined FUN_1478fd4a6(void)

int * FUN_1478fd4a6(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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



// FUNCTION 1478fd58c FUN_1478fd58c body=128 status=ok
// SIG undefined FUN_1478fd58c(void)

undefined8 FUN_1478fd58c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1478fd60c((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1478fd60c FUN_1478fd60c body=114 status=ok
// SIG undefined FUN_1478fd60c(void)

void FUN_1478fd60c(longlong *param_1,int param_2)

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



// FUNCTION 1478fd67e FUN_1478fd67e body=155 status=ok
// SIG undefined FUN_1478fd67e(void)

undefined8 FUN_1478fd67e(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1478fd71a(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1478fd71a FUN_1478fd71a body=87 status=ok
// SIG undefined FUN_1478fd71a(void)

void FUN_1478fd71a(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_1478fd60c();
  return;
}



// FUNCTION 1478fd772 FUN_1478fd772 body=132 status=ok
// SIG undefined FUN_1478fd772(void)

void FUN_1478fd772(longlong param_1,int param_2)

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



// FUNCTION 1478fd7f8 FUN_1478fd7f8 body=134 status=ok
// SIG undefined FUN_1478fd7f8(void)

longlong FUN_1478fd7f8(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1478fd880();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_1478fd8ee(param_1,&local_24,param_2);
    lVar1 = *(longlong *)(param_1 + 0x560);
    if (*(longlong *)(param_1 + 0x560) == 0) {
      lVar1 = param_1;
    }
    lVar1 = (longlong)local_24 * 0x158 + lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 1478fd880 FUN_1478fd880 body=110 status=ok
// SIG undefined FUN_1478fd880(void)

longlong FUN_1478fd880(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x568) != *(int *)(param_1 + 0x58c)) {
    lVar3 = param_1 + 0x590;
    if (*(longlong *)(param_1 + 0x598) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x598);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x5a0) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x560);
      if (*(longlong *)(param_1 + 0x560) == 0) {
        lVar3 = param_1;
      }
      do {
        lVar1 = lVar3 + (longlong)iVar2 * 0x158;
        if (*(longlong *)(lVar3 + (longlong)iVar2 * 0x158) == *param_3) {
          return lVar1;
        }
        iVar2 = *(int *)(lVar1 + 0x150);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1478fd8ee FUN_1478fd8ee body=270 status=ok
// SIG undefined FUN_1478fd8ee(void)

undefined4 * FUN_1478fd8ee(longlong param_1,undefined4 *param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1478fd9fe(param_1,local_48);
  FUN_1478fdc8c(param_4,local_40);
  *(undefined4 *)(local_40 + 0x150) = 0xffffffff;
  cVar1 = FUN_1478fdb2a(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    cVar1 = FUN_1478fe0de(param_1,*(int *)(param_1 + 0x568) - *(int *)(param_1 + 0x58c));
    if (cVar1 == '\0') {
      uVar3 = (longlong)param_3 & (longlong)*(int *)(param_1 + 0x5a0) - 1U;
      iVar2 = (int)uVar3;
      *(int *)(local_40 + 0x154) = iVar2;
      lVar4 = *(longlong *)(param_1 + 0x598);
      if (*(longlong *)(param_1 + 0x598) == 0) {
        lVar4 = param_1 + 0x590;
      }
      *(undefined4 *)(local_40 + 0x150) =
           *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x5a0) - 1U & uVar3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x598);
      if (*(longlong *)(param_1 + 0x598) == 0) {
        lVar4 = param_1 + 0x590;
      }
      *(undefined4 *)(lVar4 + ((longlong)iVar2 & (longlong)*(int *)(param_1 + 0x5a0) - 1U) * 4) =
           local_48[0];
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478fd9fe FUN_1478fd9fe body=299 status=ok
// SIG undefined FUN_1478fd9fe(void)

int * FUN_1478fd9fe(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x58c) == 0) {
    iVar6 = *(int *)(param_1 + 0x568);
    *(int *)(param_1 + 0x568) = iVar6 + 1;
    if (*(int *)(param_1 + 0x56c) == iVar6) {
      FUN_1478fdc04(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_14489e6aa(param_1 + 0x570,1);
    lVar5 = *(longlong *)(param_1 + 0x578);
    if (*(longlong *)(param_1 + 0x578) == 0) {
      lVar5 = param_1 + 0x570;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x560);
    if (*(longlong *)(param_1 + 0x560) == 0) {
      lVar5 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x588);
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(lVar5 + 4 + lVar7 * 0x158);
    *(int *)(param_1 + 0x588) = iVar4;
    iVar3 = *(int *)(param_1 + 0x58c) + -1;
    *(int *)(param_1 + 0x58c) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar4 * 0x158) = 0xffffffff;
    }
  }
  lVar5 = param_1 + 0x570;
  if (*(longlong *)(param_1 + 0x578) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x578);
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar5 = *(longlong *)(param_1 + 0x560);
  if (*(longlong *)(param_1 + 0x560) == 0) {
    lVar5 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 * 0x158 + lVar5;
  return param_2;
}



// FUNCTION 1478fdb2a FUN_1478fdb2a body=218 status=ok
// SIG undefined FUN_1478fdb2a(void)

undefined8 FUN_1478fdb2a(longlong param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x568) - *(int *)(param_1 + 0x58c) != 1) &&
     (*(int *)(param_1 + 0x568) != *(int *)(param_1 + 0x58c))) {
    lVar1 = param_1 + 0x590;
    if (*(longlong *)(param_1 + 0x598) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x598);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x5a0) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x560);
      if (*(longlong *)(param_1 + 0x560) == 0) {
        lVar1 = param_1;
      }
      do {
        _Dst = (void *)(lVar1 + (longlong)iVar2 * 0x158);
        if (*(longlong *)(lVar1 + (longlong)iVar2 * 0x158) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x148) = 0;
          if (*(longlong *)((longlong)_Dst + 0x140) != 0) {
            FUN_1400020a8();
          }
          FUN_1478faad8((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x150);
          FUN_1478fe042(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x150);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1478fdc04 FUN_1478fdc04 body=135 status=ok
// SIG undefined FUN_1478fdc04(void)

void FUN_1478fdc04(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x568);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x56c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x158,0);
      iVar4 = (int)(uVar3 / 0x158);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x56c) = iVar5;
    FUN_1478fab16(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1478fdc8c FUN_1478fdc8c body=182 status=ok
// SIG undefined FUN_1478fdc8c(void)

undefined8 * FUN_1478fdc8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_188 [32];
  undefined1 local_168 [268];
  undefined4 local_5c;
  undefined8 local_44;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  memset(local_168,0,0x148);
  local_5c = 4;
  local_44 = 0xffffffff00000020;
  *param_2 = *(undefined8 *)*param_1;
  FUN_1478fdd44(param_2 + 1,local_168);
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1478faad8(local_168);
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478fdd44 FUN_1478fdd44 body=180 status=ok
// SIG undefined FUN_1478fdd44(void)

longlong FUN_1478fdd44(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0x400000000;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0x20;
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  FUN_1478fddf8();
  if (*(longlong *)(param_2 + 0x138) == 0) {
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_2 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_2 + 0x140) = 0;
  return param_1;
}



// FUNCTION 1478fddf8 FUN_1478fddf8 body=446 status=ok
// SIG undefined FUN_1478fddf8(void)

longlong FUN_1478fddf8(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined4 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x110);
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar5 = 0;
    local_48 = puVar1;
    if (*(int *)(param_1 + 0x120) != 0) {
      FUN_144a81a4c(&local_50);
      iVar5 = *(int *)(param_1 + 0x120);
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar2 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar5) || (local_60 = uVar2, local_48 != puVar1)) {
      do {
        local_60 = uVar2;
        lVar4 = *(longlong *)(local_78 + 0x100);
        if (*(longlong *)(local_78 + 0x100) == 0) {
          lVar4 = local_78;
        }
        if (*(longlong *)(lVar4 + 0x28 + (longlong)iVar3 * 0x40) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_144a81a4c(&local_70);
        iVar3 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 || (local_68 != puVar1 || local_60._4_4_ != iVar5));
    }
    FUN_1478fdfb8(param_1,param_2);
    if (*(longlong *)(param_2 + 0x118) == 0) {
      *puVar1 = *(undefined4 *)(param_2 + 0x110);
    }
    if (*(longlong *)(param_1 + 0x118) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
    *(undefined8 *)(param_2 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
    *(undefined8 *)(param_2 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
    *(undefined8 *)(param_2 + 0x128) = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478fdfb8 FUN_1478fdfb8 body=137 status=ok
// SIG undefined FUN_1478fdfb8(void)

void * FUN_1478fdfb8(void *param_1,void *param_2)

{
  if (param_1 != param_2) {
    if (*(longlong *)((longlong)param_2 + 0x100) == 0) {
      memmove(param_1,param_2,0x100);
    }
    if (*(longlong *)((longlong)param_1 + 0x100) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)((longlong)param_1 + 0x100) = *(undefined8 *)((longlong)param_2 + 0x100);
    *(undefined8 *)((longlong)param_2 + 0x100) = 0;
    *(undefined4 *)((longlong)param_1 + 0x108) = *(undefined4 *)((longlong)param_2 + 0x108);
    *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)((longlong)param_2 + 0x10c);
    *(undefined8 *)((longlong)param_2 + 0x108) = 0x400000000;
  }
  return param_1;
}



// FUNCTION 1478fe042 FUN_1478fe042 body=156 status=ok
// SIG undefined FUN_1478fe042(void)

void FUN_1478fe042(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x560);
  if (*(longlong *)(param_1 + 0x560) == 0) {
    lVar4 = param_1;
  }
  if (*(int *)(param_1 + 0x58c) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x588) * 0x158) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x158) = 0xffffffff;
  if (*(int *)(param_1 + 0x58c) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x588);
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x158 + 4) = uVar5;
  *(int *)(param_1 + 0x588) = param_2;
  *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
  lVar4 = param_1 + 0x570;
  if (*(longlong *)(param_1 + 0x578) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x578);
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 1478fe0de FUN_1478fe0de body=104 status=ok
// SIG undefined FUN_1478fe0de(void)

undefined8 FUN_1478fe0de(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if (lVar2 == 0) {
    iVar4 = 2;
  }
  if (param_2 < 4) {
    iVar4 = 2;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x5a0))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x5a0) = iVar4;
    FUN_1478fe146(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1478fe146 FUN_1478fe146 body=534 status=ok
// SIG undefined FUN_1478fe146(void)

void FUN_1478fe146(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x598) != 0) {
    FUN_1446efa72(param_1 + 0x598,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 0x5a0);
  uVar2 = local_58;
  if (uVar7 != 0) {
    lVar1 = param_1 + 0x590;
    uVar6 = 0;
    FUN_145cfbc50(lVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x598);
        if (*(longlong *)(param_1 + 0x598) == 0) {
          lVar4 = lVar1;
        }
        *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x5a0) + 0x7fffffffU & uVar6) * 4) =
             0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = param_1 + 0x570;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x580) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_50 = local_30;
    local_4c = local_2c;
    local_58 = local_38;
    uVar2 = local_58;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar3 = local_58._4_4_;
      local_58 = uVar2;
      do {
        lVar4 = *(longlong *)(local_70 + 0x560);
        if (*(longlong *)(local_70 + 0x560) == 0) {
          lVar4 = local_70;
        }
        lVar5 = (longlong)iVar3 * 0x158;
        uVar7 = ((uint)(*(ulonglong *)(lVar4 + lVar5) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar4 + lVar5) >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)*(int *)(param_1 + 0x5a0) - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar4 + 0x154 + lVar5) = iVar9;
        lVar8 = *(longlong *)(param_1 + 0x598);
        if (*(longlong *)(param_1 + 0x598) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar4 + 0x150 + lVar5) =
             *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x5a0) - 1U & uVar10) * 4);
        lVar4 = *(longlong *)(param_1 + 0x598);
        if (*(longlong *)(param_1 + 0x598) == 0) {
          lVar4 = lVar1;
        }
        *(int *)(lVar4 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x5a0) - 1U) * 4) = iVar3;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar3 = local_58._4_4_;
        uVar2 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478fe35e FUN_1478fe35e body=131 status=ok
// SIG undefined FUN_1478fe35e(void)

longlong FUN_1478fe35e(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1478fe3e2();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_1478fe44c(param_1,&local_24,param_2);
    lVar1 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar1 = param_1;
    }
    lVar1 = (longlong)local_24 * 0x40 + lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 1478fe3e2 FUN_1478fe3e2 body=105 status=ok
// SIG undefined FUN_1478fe3e2(void)

longlong FUN_1478fe3e2(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 300)) {
    lVar3 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x138);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x140) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar3 = param_1;
      }
      do {
        lVar1 = lVar3 + (longlong)iVar2 * 0x40;
        if (*(longlong *)(lVar3 + (longlong)iVar2 * 0x40) == *param_3) {
          return lVar1;
        }
        iVar2 = *(int *)(lVar1 + 0x38);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1478fe44c FUN_1478fe44c body=281 status=ok
// SIG undefined FUN_1478fe44c(void)

undefined4 * FUN_1478fe44c(longlong param_1,undefined4 *param_2,int param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1478fe566(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[5] = 0;
  local_40[6] = 0x400000000;
  *(undefined4 *)(local_40 + 7) = 0xffffffff;
  cVar1 = FUN_1478fe68c(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    cVar1 = FUN_1478fe7f0(param_1,*(int *)(param_1 + 0x108) - *(int *)(param_1 + 300));
    if (cVar1 == '\0') {
      uVar3 = (longlong)param_3 & (longlong)*(int *)(param_1 + 0x140) - 1U;
      iVar2 = (int)uVar3;
      *(int *)((longlong)local_40 + 0x3c) = iVar2;
      lVar4 = *(longlong *)(param_1 + 0x138);
      if (*(longlong *)(param_1 + 0x138) == 0) {
        lVar4 = param_1 + 0x130;
      }
      *(undefined4 *)(local_40 + 7) =
           *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x140) - 1U & uVar3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x138);
      if (*(longlong *)(param_1 + 0x138) == 0) {
        lVar4 = param_1 + 0x130;
      }
      *(undefined4 *)(lVar4 + ((longlong)iVar2 & (longlong)*(int *)(param_1 + 0x140) - 1U) * 4) =
           local_48[0];
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478fe566 FUN_1478fe566 body=293 status=ok
// SIG undefined FUN_1478fe566(void)

int * FUN_1478fe566(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 300) == 0) {
    iVar6 = *(int *)(param_1 + 0x108);
    *(int *)(param_1 + 0x108) = iVar6 + 1;
    if (*(int *)(param_1 + 0x10c) == iVar6) {
      FUN_1478fa918(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_14489e6aa(param_1 + 0x110,1);
    lVar4 = *(longlong *)(param_1 + 0x118);
    if (*(longlong *)(param_1 + 0x118) == 0) {
      lVar4 = param_1 + 0x110;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)(lVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar4 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0x128);
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(lVar4 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 0x128) = iVar3;
    iVar5 = *(int *)(param_1 + 300) + -1;
    *(int *)(param_1 + 300) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x40) = 0xffffffff;
    }
  }
  lVar4 = param_1 + 0x110;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x118);
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar4 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar4 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + lVar4;
  return param_2;
}



// FUNCTION 1478fe68c FUN_1478fe68c body=205 status=ok
// SIG undefined FUN_1478fe68c(void)

undefined8 FUN_1478fe68c(longlong param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  
  if ((*(int *)(param_1 + 0x108) - *(int *)(param_1 + 300) != 1) &&
     (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 300))) {
    lVar13 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x138);
    }
    iVar14 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x140) - 1U & param_2) * 4);
    if (iVar14 != -1) {
      lVar13 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar13 = param_1;
      }
      do {
        puVar1 = (undefined4 *)(lVar13 + (longlong)iVar14 * 0x40);
        if (*(longlong *)(lVar13 + (longlong)iVar14 * 0x40) == *param_3) {
          if (*(longlong *)(puVar1 + 10) != 0) {
            FUN_1400020a8();
          }
          lVar13 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar8 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar9 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar10 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar11 = param_3[4];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar12 = param_3[5];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
          *(longlong *)(puVar1 + 0xc) = param_3[6];
          puVar1[8] = (int)lVar11;
          puVar1[9] = uVar6;
          puVar1[10] = (int)lVar12;
          puVar1[0xb] = uVar7;
          puVar1[4] = (int)lVar9;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar10;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar13;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar8;
          puVar1[3] = uVar3;
          FUN_1478fe75a(param_1,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = puVar1[0xe];
      } while (iVar14 != -1);
    }
  }
  return 0;
}



// FUNCTION 1478fe75a FUN_1478fe75a body=150 status=ok
// SIG undefined FUN_1478fe75a(void)

void FUN_1478fe75a(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar4 = param_1;
  }
  if (*(int *)(param_1 + 300) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x128) * 0x40) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)(param_1 + 300) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x128);
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x40 + 4) = uVar5;
  *(int *)(param_1 + 0x128) = param_2;
  *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
  lVar4 = param_1 + 0x110;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x118);
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 1478fe7f0 FUN_1478fe7f0 body=104 status=ok
// SIG undefined FUN_1478fe7f0(void)

undefined8 FUN_1478fe7f0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if (lVar2 == 0) {
    iVar4 = 2;
  }
  if (param_2 < 4) {
    iVar4 = 2;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x140))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x140) = iVar4;
    FUN_1478fe858(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1478fe858 FUN_1478fe858 body=527 status=ok
// SIG undefined FUN_1478fe858(void)

void FUN_1478fe858(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1446efa72(param_1 + 0x138,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 0x140);
  uVar3 = local_58;
  if (uVar2 != 0) {
    lVar1 = param_1 + 0x130;
    uVar7 = 0;
    FUN_145cfbc50(lVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x138);
        if (*(longlong *)(param_1 + 0x138) == 0) {
          lVar5 = lVar1;
        }
        *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x140) + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = param_1 + 0x110;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x120) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_50 = local_30;
    local_4c = local_2c;
    local_58 = local_38;
    uVar3 = local_58;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar5 = *(longlong *)(local_70 + 0x100);
        if (*(longlong *)(local_70 + 0x100) == 0) {
          lVar5 = local_70;
        }
        lVar6 = (longlong)iVar4 * 0x40;
        uVar3 = *(undefined8 *)(lVar5 + lVar6);
        uVar2 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar7 = (uint)uVar3 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar3 << 0x10 | uVar7) + (int)((ulonglong)uVar3 >> 0x20) +
                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) &
                (longlong)*(int *)(param_1 + 0x140) - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar5 + 0x3c + lVar6) = iVar8;
        lVar10 = *(longlong *)(param_1 + 0x138);
        if (*(longlong *)(param_1 + 0x138) == 0) {
          lVar10 = lVar1;
        }
        *(undefined4 *)(lVar5 + 0x38 + lVar6) =
             *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x140) - 1U & uVar9) * 4);
        lVar5 = *(longlong *)(param_1 + 0x138);
        if (*(longlong *)(param_1 + 0x138) == 0) {
          lVar5 = lVar1;
        }
        *(int *)(lVar5 + ((longlong)iVar8 & (longlong)*(int *)(param_1 + 0x140) - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478fea68 FUN_1478fea68 body=110 status=ok
// SIG undefined FUN_1478fea68(void)

void FUN_1478fea68(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_1478faa54(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1478fead8 FUN_1478fead8 body=131 status=ok
// SIG undefined FUN_1478fead8(void)

longlong FUN_1478fead8(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1478fe3e2();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_1478feb5c(param_1,&local_24,param_2);
    lVar1 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar1 = param_1;
    }
    lVar1 = (longlong)local_24 * 0x40 + lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 1478feb5c FUN_1478feb5c body=281 status=ok
// SIG undefined FUN_1478feb5c(void)

undefined4 * FUN_1478feb5c(longlong param_1,undefined4 *param_2,int param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1478fe566(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[5] = 0;
  local_40[6] = 0x400000000;
  *(undefined4 *)(local_40 + 7) = 0xffffffff;
  cVar1 = FUN_1478fe68c(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    cVar1 = FUN_1478fe7f0(param_1,*(int *)(param_1 + 0x108) - *(int *)(param_1 + 300));
    if (cVar1 == '\0') {
      uVar3 = (longlong)param_3 & (longlong)*(int *)(param_1 + 0x140) - 1U;
      iVar2 = (int)uVar3;
      *(int *)((longlong)local_40 + 0x3c) = iVar2;
      lVar4 = *(longlong *)(param_1 + 0x138);
      if (*(longlong *)(param_1 + 0x138) == 0) {
        lVar4 = param_1 + 0x130;
      }
      *(undefined4 *)(local_40 + 7) =
           *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x140) - 1U & uVar3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x138);
      if (*(longlong *)(param_1 + 0x138) == 0) {
        lVar4 = param_1 + 0x130;
      }
      *(undefined4 *)(lVar4 + ((longlong)iVar2 & (longlong)*(int *)(param_1 + 0x140) - 1U) * 4) =
           local_48[0];
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478fec76 FUN_1478fec76 body=132 status=ok
// SIG undefined FUN_1478fec76(void)

void FUN_1478fec76(longlong param_1,int param_2)

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



// FUNCTION 1478fecfc FUN_1478fecfc body=31 status=ok
// SIG undefined FUN_1478fecfc(void)

undefined8 FUN_1478fecfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478fed34 FUN_1478fed34 body=68 status=ok
// SIG undefined FUN_1478fed34(void)

void FUN_1478fed34(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a7b0030;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1478fed78 FUN_1478fed78 body=108 status=ok
// SIG undefined FUN_1478fed78(void)

void FUN_1478fed78(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_149e020b0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14a7b0030;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478fedd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478fede4 FUN_1478fede4 body=91 status=ok
// SIG undefined FUN_1478fede4(void)

void FUN_1478fede4(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 1;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(param_1 + 0x18),&local_1a);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478fee40 FUN_1478fee40 body=110 status=ok
// SIG undefined FUN_1478fee40(void)

void FUN_1478fee40(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_1478feeb0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1478feeb0 FUN_1478feeb0 body=132 status=ok
// SIG undefined FUN_1478feeb0(void)

void FUN_1478feeb0(void *param_1,int param_2,undefined8 param_3)

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
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 1478fef34 FUN_1478fef34 body=109 status=ok
// SIG undefined FUN_1478fef34(void)

void FUN_1478fef34(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x58)) {
      uVar2 = uVar1 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x58,8);
  }
  return;
}



// FUNCTION 1478fefa2 FUN_1478fefa2 body=143 status=ok
// SIG undefined FUN_1478fefa2(void)

void FUN_1478fefa2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1478ff032 FUN_1478ff032 body=143 status=ok
// SIG undefined FUN_1478ff032(void)

void FUN_1478ff032(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x70,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1478ff0c2 FUN_1478ff0c2 body=48 status=ok
// SIG undefined FUN_1478ff0c2(void)

void FUN_1478ff0c2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x68,8);
  }
  return;
}



// FUNCTION 1478ff0f2 FUN_1478ff0f2 body=147 status=ok
// SIG undefined FUN_1478ff0f2(void)

void FUN_1478ff0f2(longlong param_1,int param_2)

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



// FUNCTION 1478ff186 FUN_1478ff186 body=616 status=ok
// SIG undefined FUN_1478ff186(void)

void FUN_1478ff186(longlong param_1,longlong *param_2,double *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auVar3 [8];
  longlong *plVar4;
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [4];
  undefined4 local_1e4;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  longlong local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 *local_138;
  undefined4 local_130;
  undefined5 local_12c;
  undefined3 uStack_127;
  undefined5 uStack_124;
  undefined2 local_11f;
  undefined1 local_11d;
  undefined8 local_118;
  undefined1 local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [8];
  undefined2 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  float local_b4;
  float local_b0;
  undefined1 local_ac;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined6 local_94;
  undefined2 uStack_8e;
  undefined6 uStack_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_f0 = (undefined1  [8])0x3f800000;
  local_e8 = 0x100;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = (longlong *)0x0;
  local_98 = 0;
  local_94 = 0;
  uStack_8e = 0;
  uStack_8c = 0;
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  auVar3 = local_f0;
  local_b4 = (float)*param_3;
  local_b0 = (float)param_3[1];
  local_ac = 0;
  local_c8 = param_5;
  local_100 = param_9;
  local_a0 = param_10;
  local_f8 = param_7;
  local_f4 = 0x3f800000;
  local_f0[4] = param_6;
  local_f0._6_2_ = auVar3._6_2_;
  local_f0[5] = 0;
  local_a8 = &local_118;
  local_110 = 0;
  local_118 = 0;
  local_178 = *(undefined4 *)(param_1 + 0x3f8);
  local_1e8[0] = 0;
  local_1e4 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c4 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0x3ff00000;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_194 = 0x3ff00000;
  uStack_190 = 0;
  uStack_18c = 0x3ff00000;
  local_188 = 0x3ff0000000000000;
  uStack_180 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_138 = &DAT_14cacb0c0;
  local_130 = param_8;
  local_12c = 0;
  uStack_127 = 0;
  uStack_124 = 0;
  local_11f = 0x101;
  local_11d = 0;
  local_108 = param_2;
  local_c0 = param_4;
  (**(code **)(*param_2 + 0x2a0))(param_2,&local_108,param_1 + 0x338,local_1e8);
  if (local_170 != 0) {
    FUN_1400020a8();
  }
  plVar4 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ff3f0 FUN_1478ff3f0 body=12 status=ok
// SIG undefined FUN_1478ff3f0(void)

void FUN_1478ff3f0(longlong param_1)

{
  FUN_14792e424(param_1 + 0x1d0);
  return;
}



// FUNCTION 1478ff3fc FUN_1478ff3fc body=12 status=ok
// SIG undefined FUN_1478ff3fc(void)

void FUN_1478ff3fc(longlong param_1)

{
  FUN_14792e546(param_1 + 0x1d0);
  return;
}



// FUNCTION 1478ff408 FUN_1478ff408 body=12 status=ok
// SIG undefined FUN_1478ff408(void)

void FUN_1478ff408(longlong param_1)

{
  FUN_14792e64a(param_1 + 0x1d0);
  return;
}



// FUNCTION 1478ff414 FUN_1478ff414 body=29 status=ok
// SIG undefined FUN_1478ff414(void)

undefined8 FUN_1478ff414(longlong param_1,undefined8 param_2)

{
  FUN_14792e6d8(param_1 + 0x1d0);
  return param_2;
}



// FUNCTION 1478ff432 FUN_1478ff432 body=219 status=ok
// SIG undefined FUN_1478ff432(void)

ulonglong FUN_1478ff432(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x434)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar7 = (uint)lVar2 & 0xffff;
    lVar6 = param_1 + 0x438;
    if (*(longlong *)(param_1 + 0x440) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x440);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x448) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x400) + (longlong)iVar5 * 0x14);
        if (*plVar1 == lVar2) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            iVar5 = (int)plVar1[1];
            lVar2 = *(longlong *)
                     (param_1 + 0x450 + (1 - (longlong)*(int *)(param_1 + 0x330)) * 0x10);
            uVar4 = CONCAT71((int7)(int3)((uint)iVar5 >> 8),
                             *(byte *)(lVar2 + 9 + (longlong)iVar5 * 0xc) |
                             *(byte *)(lVar2 + 8 + (longlong)iVar5 * 0xc));
            goto LAB_1478ff442;
          }
          break;
        }
        iVar5 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar5 != -1);
    }
  }
  uVar4 = 0;
LAB_1478ff442:
  return uVar4 & 0xffffffffffffff01;
}



// FUNCTION 1478ff50e FUN_1478ff50e body=213 status=ok
// SIG undefined FUN_1478ff50e(void)

undefined4 FUN_1478ff50e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x434)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    lVar5 = param_1 + 0x438;
    if (*(longlong *)(param_1 + 0x440) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x440);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x448) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x400) + (longlong)iVar4 * 0x14);
        if (*plVar1 == lVar2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            return 0;
          }
          return *(undefined4 *)
                  (*(longlong *)(param_1 + 0x450 + (1 - (longlong)*(int *)(param_1 + 0x330)) * 0x10)
                   + 4 + (longlong)(int)plVar1[1] * 0xc);
        }
        iVar4 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 1478ff5e4 FUN_1478ff5e4 body=212 status=ok
// SIG undefined FUN_1478ff5e4(void)

undefined4 FUN_1478ff5e4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x408) != *(int *)(param_1 + 0x434)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    lVar5 = param_1 + 0x438;
    if (*(longlong *)(param_1 + 0x440) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x440);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x448) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x400) + (longlong)iVar4 * 0x14);
        if (*plVar1 == lVar2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            return 0;
          }
          return *(undefined4 *)
                  (*(longlong *)(param_1 + 0x450 + (1 - (longlong)*(int *)(param_1 + 0x330)) * 0x10)
                  + (longlong)(int)plVar1[1] * 0xc);
        }
        iVar4 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 1478ff6b8 FUN_1478ff6b8 body=63 status=ok
// SIG undefined FUN_1478ff6b8(void)

void FUN_1478ff6b8(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  
  *(longlong *)(param_1 + 0x10) = param_2;
  uVar1 = *(uint *)(param_2 + 8);
  FUN_140ee6e38(param_1,uVar1);
  iVar2 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = iVar2 + uVar1;
  if ((uint)(*(int *)(param_1 + 0xc) - iVar2) < uVar1) {
    FUN_144a2c682(param_1);
    return;
  }
  return;
}



// FUNCTION 1478ff6f8 FUN_1478ff6f8 body=33 status=ok
// SIG undefined FUN_1478ff6f8(void)

void FUN_1478ff6f8(longlong param_1)

{
  FUN_143417600(*(undefined8 *)(param_1 + 0x6a0));
  *(byte *)(param_1 + 0x7e1) = *(byte *)(param_1 + 0x7e1) | 1;
  return;
}



// FUNCTION 1478ff71a FUN_1478ff71a body=213 status=ok
// SIG undefined FUN_1478ff71a(void)

void FUN_1478ff71a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)FUN_147508a86();
  if ((plVar3 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x88) != 0)) {
    cVar2 = FUN_144966fca(plVar3[4]);
    if (cVar2 != '\0') {
      cVar2 = FUN_144a61b4f();
      if (cVar2 != '\0') {
        FUN_14036294a(plVar3[4],1,1);
      }
    }
    plVar4 = (longlong *)plVar3[0x7c];
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar3 + 0x350))(plVar3);
      plVar3[0x7c] = (longlong)plVar4;
    }
    (**(code **)(*plVar4 + 0x80))(plVar4,plVar3);
    lVar1 = *param_2;
    *(undefined2 *)(plVar4 + 0xb9) = *(undefined2 *)(lVar1 + 0x5c8);
    plVar4[0xb8] = *(longlong *)(lVar1 + 0x5c0);
    *(undefined2 *)((longlong)plVar4 + 0x5ca) = *(undefined2 *)(lVar1 + 0x5ca);
    FUN_140c4a63e(plVar4,*(undefined8 *)(param_1 + 0x88));
    return;
  }
  return;
}



// FUNCTION 1478ff7f0 FUN_1478ff7f0 body=250 status=ok
// SIG undefined FUN_1478ff7f0(void)

void FUN_1478ff7f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_147508a86();
  if ((plVar3 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x88) != 0)) {
    cVar2 = FUN_144966fca(plVar3[4]);
    if (cVar2 != '\0') {
      cVar2 = FUN_144a61b4f();
      if (cVar2 != '\0') {
        FUN_14036294a(plVar3[4],1,1);
      }
    }
    local_40 = plVar3[0x7c];
    if (local_40 == 0) {
      local_40 = (**(code **)(*plVar3 + 0x350))(plVar3);
      plVar3[0x7c] = local_40;
    }
    lVar1 = *param_2;
    *(undefined2 *)(local_40 + 0x5d8) = *(undefined2 *)(lVar1 + 0x5d8);
    *(undefined8 *)(local_40 + 0x5d0) = *(undefined8 *)(lVar1 + 0x5d0);
    *(undefined2 *)(local_40 + 0x5da) = *(undefined2 *)(lVar1 + 0x5da);
    local_38 = 0;
    local_30 = 1;
    local_2c = *(undefined4 *)(param_1 + 0x94);
    local_28 = 0xffffffff;
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478ff8ec FUN_1478ff8ec body=12 status=ok
// SIG undefined FUN_1478ff8ec(void)

void FUN_1478ff8ec(longlong param_1,undefined8 param_2)

{
  FUN_1433d87fe(param_1,param_2,*(undefined8 *)(param_1 + 0x170));
  return;
}



// FUNCTION 1478ff8f8 FUN_1478ff8f8 body=6081 status=ok
// SIG undefined FUN_1478ff8f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478ff8f8(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  longlong *param_5,float param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  void *_Src;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  char cVar43;
  byte bVar44;
  longlong lVar45;
  ulonglong uVar46;
  longlong *plVar47;
  longlong lVar48;
  undefined8 *puVar49;
  int iVar50;
  longlong lVar51;
  ulonglong uVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  ulonglong uVar57;
  uint uVar58;
  longlong lVar59;
  undefined4 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  double dVar71;
  double dVar74;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar75;
  double dVar76;
  double dVar80;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar81;
  double dVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  double dVar87;
  undefined1 auVar86 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auStack_3b8 [32];
  undefined4 local_398;
  undefined1 local_390;
  longlong local_388;
  longlong local_380;
  int local_374;
  undefined8 *local_370;
  longlong local_368;
  int local_35c;
  longlong local_358;
  longlong *local_350;
  longlong local_348;
  longlong local_340;
  longlong local_338;
  longlong local_330;
  undefined1 *local_328;
  longlong *local_320;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong *local_2e0;
  longlong local_2d8;
  longlong *local_2d0;
  longlong local_2c8;
  int local_2c0;
  longlong local_2b8;
  undefined4 local_2b0;
  longlong local_2a8;
  int local_2a0;
  longlong local_298;
  undefined4 local_290;
  undefined1 local_288 [64];
  undefined1 local_248 [64];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8;
  longlong local_1f0;
  undefined1 **local_1e0;
  undefined1 *local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined8 uStack_18f;
  longlong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  double local_138;
  undefined1 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined1 local_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  char local_f7;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  lVar45 = *param_3;
  lVar53 = param_3[1];
  local_308 = param_3[2];
  plVar10 = (longlong *)*param_5;
  lVar48 = param_5[1];
  local_2e8 = param_5[2];
  fVar70 = 1e-05;
  if (param_6 <= 1e-05) {
    FUN_14470ea10(plVar10,lVar45);
    plVar10[2] = *(longlong *)(lVar45 + 0x10);
    FUN_144717214(lVar48,lVar53);
    *(undefined1 *)(lVar48 + 0x10) = *(undefined1 *)(lVar53 + 0x10);
    *(undefined8 *)(lVar48 + 0x18) = *(undefined8 *)(lVar53 + 0x18);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_3b8);
  }
  auVar78._8_4_ = in_XMM3_Dc;
  auVar78._0_8_ = param_4;
  auVar78._12_4_ = in_XMM3_Dd;
  local_1b0 = local_288;
  local_1b8 = FUN_1417b5d4e;
  local_318 = lVar45;
  local_2f0 = lVar48;
  lVar45 = FUN_144a773aa(&local_1b8,&DAT_14c7612d4);
  plVar1 = (longlong *)(lVar45 + 0x20);
  uVar8 = *(uint *)(*(longlong *)(param_1 + 0x6a0) + 8);
  uVar52 = (ulonglong)uVar8;
  local_388 = param_1;
  FUN_14005ea14(plVar1,uVar52);
  iVar50 = *(int *)(lVar45 + 0x28);
  *(uint *)(lVar45 + 0x28) = iVar50 + uVar8;
  if ((uint)(*(int *)(lVar45 + 0x2c) - iVar50) < uVar8) {
    FUN_14475e4ac(plVar1);
  }
  local_2e0 = param_5;
  if (0 < (int)uVar8) {
    uVar46 = 0;
    do {
      *(undefined4 *)(*plVar1 + uVar46 * 4) = 0;
      uVar46 = uVar46 + 1;
    } while (uVar52 != uVar46);
  }
  local_320 = (longlong *)(lVar45 + 0x30);
  iVar50 = *(int *)(lVar45 + 0x28);
  _Src = *(void **)(lVar45 + 0x20);
  *(int *)(lVar45 + 0x38) = iVar50;
  local_310 = lVar53;
  if (iVar50 == 0 && *(int *)(lVar45 + 0x3c) == 0) {
    *(undefined4 *)(lVar45 + 0x3c) = 0;
  }
  else {
    FUN_1447c510a(local_320,iVar50);
    if (iVar50 != 0) {
      memcpy((void *)*local_320,_Src,(longlong)iVar50 << 2);
    }
  }
  plVar2 = (longlong *)(lVar45 + 0x10);
  lVar53 = local_388;
  if (((*(byte *)(local_388 + 0x7e1) & 0x10) != 0) &&
     (lVar53 = *(longlong *)(local_388 + 0x150), *(longlong *)(local_388 + 0x150) == 0)) {
    lVar53 = local_388;
  }
  local_2d0 = param_2;
  FUN_147901130(plVar2,*(undefined4 *)(lVar53 + 0x6c8));
  local_330 = lVar45 + 0x50;
  iVar50 = *(int *)(lVar45 + 0x5c);
  FUN_14061cc94(*(undefined8 *)(lVar45 + 0x50),*(undefined4 *)(lVar45 + 0x58));
  *(undefined4 *)(lVar45 + 0x58) = 0;
  if ((iVar50 < 0) && (*(int *)(lVar45 + 0x5c) != 0)) {
    FUN_14791baca(local_330);
  }
  local_350 = (longlong *)(lVar45 + 0x60);
  iVar50 = *(int *)(lVar45 + 0x6c);
  FUN_14061cc94(*(undefined8 *)(lVar45 + 0x60),*(undefined4 *)(lVar45 + 0x68));
  *(undefined4 *)(lVar45 + 0x68) = 0;
  if ((iVar50 < 0) && (*(int *)(lVar45 + 0x6c) != 0)) {
    FUN_14791baca(local_350);
  }
  local_380 = lVar45 + 0x70;
  *(undefined4 *)(lVar45 + 0x80) = 0;
  if (*(int *)(lVar45 + 0x84) < 0) {
    FUN_14791bafa(local_380);
  }
  local_358 = lVar45 + 0x88;
  *(undefined4 *)(lVar45 + 0x98) = 0;
  if (*(int *)(lVar45 + 0x9c) < 0) {
    FUN_14791bafa(local_358);
  }
  local_340 = lVar45 + 0xa0;
  *(undefined4 *)(lVar45 + 200) = 0;
  if (*(int *)(lVar45 + 0xcc) < 0) {
    FUN_14791bb40(local_340,0);
  }
  local_370 = (undefined8 *)(lVar45 + 0xd0);
  *(undefined4 *)(lVar45 + 0x118) = 0;
  if (*(int *)(lVar45 + 0x11c) < 0) {
    FUN_14791bba6(local_370);
  }
  lVar53 = lVar45 + 0x120;
  *(undefined4 *)(lVar45 + 0x168) = 0;
  if (*(int *)(lVar45 + 0x16c) < 0) {
    FUN_14791bc76(lVar53);
  }
  local_348 = lVar45 + 0x170;
  *(undefined4 *)(lVar45 + 0x1b8) = 0;
  if (*(int *)(lVar45 + 0x1bc) < 0) {
    FUN_14791bd46(local_348);
  }
  local_2f8 = lVar45 + 0x40;
  auVar84 = ZEXT816(0);
  local_328 = (undefined1 *)(local_388 + 0x620);
  lVar48 = 0;
  local_374 = 0;
  local_338 = lVar53;
LAB_1478ffcee:
  if ((*(byte *)(local_388 + 0x7e1) & 0x10) == 0) {
    iVar50 = *(int *)(local_388 + 0x6c8);
    lVar59 = local_388;
  }
  else {
    lVar59 = *(longlong *)(local_388 + 0x150);
    if (*(longlong *)(local_388 + 0x150) == 0) {
      lVar59 = local_388;
    }
    iVar50 = *(int *)(lVar59 + 0x6c8);
  }
  fVar81 = auVar84._0_4_;
  if (iVar50 <= lVar48) {
    if (1.0 <= (float)param_4) {
      auVar78._0_4_ = 0x3f800000;
    }
    if (auVar78._0_4_ <= 0.0) {
      auVar88._12_4_ = 0;
      auVar88._0_12_ = auVar78._4_12_;
      auVar78 = auVar88 << 0x20;
    }
    fVar75 = auVar78._0_4_;
    if (1e-05 < fVar75) {
      iVar50 = *(int *)(lVar45 + 0x18);
      *(uint *)(lVar45 + 0x18) = iVar50 + 1U;
      if (*(uint *)(lVar45 + 0x1c) < iVar50 + 1U) {
        FUN_146d8b2f2(plVar2,iVar50);
      }
      lVar48 = *plVar2;
      lVar59 = (longlong)iVar50 * 0x10;
      *(undefined8 *)(lVar48 + lVar59) = 0;
      ((undefined8 *)(lVar48 + lVar59))[1] = 0;
      FUN_14005ea14(*plVar2 + lVar59,uVar8);
      lVar48 = *plVar2;
      iVar9 = *(int *)(lVar48 + 8 + lVar59);
      *(uint *)(lVar48 + 8 + lVar59) = iVar9 + uVar8;
      if ((uint)(*(int *)(lVar48 + 0xc + lVar59) - iVar9) < uVar8) {
        FUN_14475e4ac();
      }
      if (0 < (int)uVar8) {
        uVar46 = 0;
        do {
          *(float *)(*(longlong *)(*plVar2 + lVar59) + uVar46 * 4) = fVar75;
          uVar46 = uVar46 + 1;
        } while (uVar52 != uVar46);
      }
      iVar9 = *(int *)(lVar45 + 0x80);
      *(uint *)(lVar45 + 0x80) = iVar9 + 1U;
      if (*(uint *)(lVar45 + 0x84) < iVar9 + 1U) {
        FUN_14726c186(local_380,iVar9);
      }
      lVar48 = *(longlong *)(lVar45 + 0x78);
      if (*(longlong *)(lVar45 + 0x78) == 0) {
        lVar48 = local_380;
      }
      *(char *)(lVar48 + iVar9) = (char)iVar50;
      fVar70 = 1.00001;
    }
    lVar59 = local_340;
    lVar48 = local_348;
    iVar50 = *(int *)(lVar45 + 0x58);
    if (0 < (longlong)iVar50) {
      lVar54 = 0;
      do {
        if (0 < (int)uVar8) {
          lVar55 = *(longlong *)(lVar45 + 0x78);
          if (*(longlong *)(lVar45 + 0x78) == 0) {
            lVar55 = local_380;
          }
          bVar44 = *(byte *)(lVar55 + lVar54);
          uVar46 = 0;
          do {
            fVar7 = *(float *)(*plVar1 + uVar46 * 4);
            if (fVar7 <= fVar70) {
              if (fVar75 <= 1e-05) {
                *(undefined4 *)(*(longlong *)(*plVar2 + (ulonglong)bVar44 * 0x10) + uVar46 * 4) =
                     0x3f800000;
              }
            }
            else {
              lVar55 = *(longlong *)(*plVar2 + (ulonglong)bVar44 * 0x10);
              *(float *)(lVar55 + uVar46 * 4) = *(float *)(lVar55 + uVar46 * 4) / fVar7;
            }
            uVar46 = uVar46 + 1;
          } while (uVar52 != uVar46);
        }
        lVar54 = lVar54 + 1;
      } while (lVar54 != iVar50);
    }
    if ((1e-05 < fVar75) && (0 < (int)uVar8)) {
      iVar50 = *(int *)(lVar45 + 0x80);
      lVar54 = (longlong)iVar50;
      uVar46 = 0;
      while( true ) {
        lVar55 = *(longlong *)(lVar45 + 0x78);
        fVar70 = 0.0;
        if (1 < iVar50) {
          lVar51 = lVar55;
          if (lVar55 == 0) {
            lVar51 = local_380;
          }
          uVar57 = 0;
          do {
            fVar70 = fVar70 + *(float *)(*(longlong *)
                                          (*(longlong *)(lVar45 + 0x10) +
                                          (ulonglong)*(byte *)(lVar51 + uVar57) * 0x10) + uVar46 * 4
                                        );
            uVar57 = uVar57 + 1;
          } while (iVar50 - 1 != uVar57);
        }
        if (lVar55 == 0) {
          lVar55 = local_380;
        }
        *(float *)(*(longlong *)
                    (*(longlong *)(lVar45 + 0x10) +
                    (ulonglong)*(byte *)(lVar55 + -1 + lVar54) * 0x10) + uVar46 * 4) = 1.0 - fVar70;
        uVar46 = uVar46 + 1;
        if (uVar46 == uVar52) break;
        iVar50 = *(int *)(lVar45 + 0x80);
      }
    }
    iVar50 = *(int *)(lVar45 + 0x58);
    if (0 < iVar50 && 1.00001 < fVar81) {
      lVar54 = 4;
      lVar55 = 0;
      do {
        *(float *)(*(longlong *)(lVar45 + 0x50) + lVar54) =
             *(float *)(*(longlong *)(lVar45 + 0x50) + lVar54) / fVar81;
        lVar55 = lVar55 + 1;
        iVar50 = *(int *)(lVar45 + 0x58);
        lVar54 = lVar54 + 0x80;
      } while (lVar55 < iVar50);
    }
    uVar58 = (uint)(1e-05 < fVar75) + iVar50;
    iVar50 = *(int *)(lVar45 + 0x118);
    *(uint *)(lVar45 + 0x118) = iVar50 + uVar58;
    if ((uint)(*(int *)(lVar45 + 0x11c) - iVar50) < uVar58) {
      FUN_14791be16(local_370);
    }
    iVar50 = *(int *)(lVar45 + 0x168);
    *(uint *)(lVar45 + 0x168) = iVar50 + uVar58;
    if ((uint)(*(int *)(lVar45 + 0x16c) - iVar50) < uVar58) {
      FUN_14791be86(lVar53);
    }
    iVar50 = *(int *)(lVar45 + 0x1b8);
    *(uint *)(lVar45 + 0x1b8) = iVar50 + uVar58;
    if ((uint)(*(int *)(lVar45 + 0x1bc) - iVar50) < uVar58) {
      FUN_14791bef6(lVar48);
    }
    iVar50 = *(int *)(lVar45 + 200);
    *(uint *)(lVar45 + 200) = iVar50 + uVar58;
    if ((uint)(*(int *)(lVar45 + 0xcc) - iVar50) < uVar58) {
      FUN_140e79564();
    }
    lVar54 = local_318;
    iVar50 = *(int *)(lVar45 + 0x58);
    if (0 < iVar50) {
      lVar55 = 0x20;
      lVar51 = 0;
      do {
        puVar49 = *(undefined8 **)(lVar45 + 0x110);
        if (*(undefined8 **)(lVar45 + 0x110) == (undefined8 *)0x0) {
          puVar49 = local_370;
        }
        puVar49[lVar51] = *(longlong *)(lVar45 + 0x50) + lVar55 + -0x18;
        lVar56 = *(longlong *)(lVar45 + 0x160);
        if (*(longlong *)(lVar45 + 0x160) == 0) {
          lVar56 = lVar53;
        }
        *(longlong *)(lVar56 + lVar51 * 8) = *(longlong *)(lVar45 + 0x50) + lVar55;
        lVar56 = *(longlong *)(lVar45 + 0x1b0);
        if (*(longlong *)(lVar45 + 0x1b0) == 0) {
          lVar56 = lVar48;
        }
        *(longlong *)(lVar56 + lVar51 * 8) = *(longlong *)(lVar45 + 0x50) + lVar55 + 0x20;
        lVar56 = *(longlong *)(lVar45 + 0xc0);
        if (*(longlong *)(lVar45 + 0xc0) == 0) {
          lVar56 = lVar59;
        }
        *(undefined4 *)(lVar56 + lVar51 * 4) =
             *(undefined4 *)(*(longlong *)(lVar45 + 0x50) + -0x1c + lVar55);
        lVar51 = lVar51 + 1;
        iVar50 = *(int *)(lVar45 + 0x58);
        lVar55 = lVar55 + 0x80;
      } while (lVar51 < iVar50);
    }
    if (1e-05 < fVar75) {
      puVar49 = *(undefined8 **)(lVar45 + 0x110);
      if (*(undefined8 **)(lVar45 + 0x110) == (undefined8 *)0x0) {
        puVar49 = local_370;
      }
      lVar51 = (longlong)(int)uVar58;
      puVar49[lVar51 + -1] = local_318;
      lVar55 = *(longlong *)(lVar45 + 0x160);
      if (*(longlong *)(lVar45 + 0x160) == 0) {
        lVar55 = lVar53;
      }
      *(longlong *)(lVar55 + -8 + lVar51 * 8) = local_310;
      lVar55 = *(longlong *)(lVar45 + 0x1b0);
      if (*(longlong *)(lVar45 + 0x1b0) == 0) {
        lVar55 = lVar48;
      }
      *(longlong *)(lVar55 + -8 + lVar51 * 8) = local_308;
      lVar48 = *(longlong *)(lVar45 + 0xc0);
      if (*(longlong *)(lVar45 + 0xc0) == 0) {
        lVar48 = lVar59;
      }
      *(float *)(lVar48 + -4 + lVar51 * 4) =
           fVar75 / (float)(~-(uint)(1.00001 < fVar81) & 0x3f800000 |
                           (uint)fVar81 & -(uint)(1.00001 < fVar81));
      iVar50 = *(int *)(lVar45 + 0x58);
    }
    if (iVar50 == 0) {
      FUN_14470ea10(plVar10,local_318);
      lVar59 = local_2f0;
      lVar48 = local_310;
      plVar10[2] = *(longlong *)(lVar54 + 0x10);
      FUN_144717214(local_2f0,local_310);
      *(undefined1 *)(lVar59 + 0x10) = *(undefined1 *)(lVar48 + 0x10);
      *(undefined8 *)(lVar59 + 0x18) = *(undefined8 *)(lVar48 + 0x18);
      FUN_140341952(local_2e8,local_308);
    }
    else {
      if (0 < (int)uVar58) {
        uVar46 = 0;
        do {
          lVar48 = *(longlong *)(lVar45 + 0x78);
          if (*(longlong *)(lVar45 + 0x78) == 0) {
            lVar48 = local_380;
          }
          bVar44 = *(byte *)(lVar48 + uVar46);
          if (uVar46 == 0) {
            if (0 < (int)uVar8) {
              lVar48 = 0x14;
              uVar57 = 0;
              do {
                puVar49 = *(undefined8 **)(lVar45 + 0x110);
                if (*(undefined8 **)(lVar45 + 0x110) == (undefined8 *)0x0) {
                  puVar49 = local_370;
                }
                lVar59 = *plVar10;
                lVar54 = *(longlong *)*puVar49;
                fVar70 = *(float *)(*(longlong *)
                                     (*(longlong *)(lVar45 + 0x10) + (ulonglong)bVar44 * 0x10) +
                                   uVar57 * 4);
                dVar74 = (double)fVar70;
                dVar76 = (double)fVar70;
                pdVar3 = (double *)(lVar54 + -0x10 + lVar48 * 4);
                dVar16 = *pdVar3;
                dVar20 = pdVar3[1] * dVar76;
                pdVar3 = (double *)(lVar54 + lVar48 * 4);
                dVar27 = *pdVar3;
                dVar21 = pdVar3[1] * dVar76;
                pdVar3 = (double *)(lVar54 + -0x30 + lVar48 * 4);
                dVar28 = *pdVar3;
                dVar15 = pdVar3[1] * dVar76;
                pdVar3 = (double *)(lVar54 + -0x20 + lVar48 * 4);
                dVar22 = *pdVar3;
                dVar29 = pdVar3[1];
                pdVar3 = (double *)(lVar54 + -0x50 + lVar48 * 4);
                dVar71 = pdVar3[1];
                pdVar4 = (double *)(lVar54 + -0x40 + lVar48 * 4);
                auVar63._0_8_ = dVar74 * *pdVar4;
                auVar63._8_8_ = dVar76 * pdVar4[1];
                pdVar4 = (double *)(lVar59 + -0x50 + lVar48 * 4);
                *pdVar4 = *pdVar3 * dVar74;
                pdVar4[1] = dVar71 * dVar76;
                *(undefined1 (*) [16])(lVar59 + -0x40 + lVar48 * 4) = auVar63;
                auVar26._8_4_ = SUB84(dVar15,0);
                auVar26._0_8_ = dVar28 * dVar74;
                auVar26._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
                *(undefined1 (*) [16])(lVar59 + -0x30 + lVar48 * 4) = auVar26;
                pdVar3 = (double *)(lVar59 + -0x20 + lVar48 * 4);
                *pdVar3 = dVar22 * dVar74;
                pdVar3[1] = dVar29 * dVar76;
                auVar14._8_4_ = SUB84(dVar20,0);
                auVar14._0_8_ = dVar16 * dVar74;
                auVar14._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
                *(undefined1 (*) [16])(lVar59 + -0x10 + lVar48 * 4) = auVar14;
                auVar19._8_4_ = SUB84(dVar21,0);
                auVar19._0_8_ = dVar27 * dVar74;
                auVar19._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
                *(undefined1 (*) [16])(lVar59 + lVar48 * 4) = auVar19;
                uVar57 = uVar57 + 1;
                lVar48 = lVar48 + 0x18;
              } while (uVar52 != uVar57);
            }
          }
          else if (0 < (int)uVar8) {
            lVar48 = 0x14;
            uVar57 = 0;
            do {
              lVar59 = *plVar10;
              puVar49 = *(undefined8 **)(lVar45 + 0x110);
              if (*(undefined8 **)(lVar45 + 0x110) == (undefined8 *)0x0) {
                puVar49 = local_370;
              }
              lVar54 = *(longlong *)puVar49[uVar46];
              fVar70 = *(float *)(*(longlong *)
                                   (*(longlong *)(lVar45 + 0x10) + (ulonglong)bVar44 * 0x10) +
                                 uVar57 * 4);
              dVar15 = (double)fVar70;
              dVar16 = (double)fVar70;
              pdVar3 = (double *)(lVar54 + -0x50 + lVar48 * 4);
              dVar20 = *pdVar3 * dVar15;
              dVar21 = pdVar3[1] * dVar16;
              pdVar3 = (double *)(lVar54 + -0x40 + lVar48 * 4);
              dVar27 = *pdVar3 * dVar15;
              dVar28 = pdVar3[1] * dVar16;
              pdVar3 = (double *)(lVar59 + -0x50 + lVar48 * 4);
              dVar22 = *pdVar3;
              dVar29 = pdVar3[1];
              pdVar3 = (double *)(lVar59 + -0x40 + lVar48 * 4);
              dVar71 = *pdVar3;
              dVar74 = pdVar3[1];
              dVar76 = dVar27 * dVar71 + dVar20 * dVar22;
              dVar80 = dVar28 * dVar74 + dVar21 * dVar29;
              auVar61._8_8_ = -(ulonglong)(0.0 <= dVar76 + dVar80);
              auVar61._0_8_ = -(ulonglong)(0.0 <= dVar76 + dVar80);
              auVar77._0_8_ = 0.0 - dVar20;
              auVar77._8_8_ = 0.0 - dVar21;
              auVar17._8_4_ = SUB84(dVar21,0);
              auVar17._0_8_ = dVar20;
              auVar17._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
              auVar78 = blendvpd(auVar77,auVar17,auVar61);
              auVar83._0_8_ = 0.0 - dVar27;
              auVar83._8_8_ = 0.0 - dVar28;
              auVar23._8_4_ = SUB84(dVar28,0);
              auVar23._0_8_ = dVar27;
              auVar23._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
              auVar84 = blendvpd(auVar83,auVar23,auVar61);
              auVar79._0_8_ = auVar78._0_8_ + dVar22;
              auVar79._8_8_ = auVar78._8_8_ + dVar29;
              auVar85._0_8_ = auVar84._0_8_ + dVar71;
              auVar85._8_8_ = auVar84._8_8_ + dVar74;
              *(undefined1 (*) [16])(lVar59 + -0x50 + lVar48 * 4) = auVar79;
              *(undefined1 (*) [16])(lVar59 + -0x40 + lVar48 * 4) = auVar85;
              pdVar3 = (double *)(lVar54 + -0x30 + lVar48 * 4);
              dVar28 = pdVar3[1];
              pdVar4 = (double *)(lVar54 + -0x20 + lVar48 * 4);
              dVar22 = *pdVar4;
              pdVar5 = (double *)(lVar59 + -0x30 + lVar48 * 4);
              dVar21 = pdVar5[1];
              pdVar6 = (double *)(lVar59 + -0x20 + lVar48 * 4);
              dVar20 = *pdVar6;
              dVar27 = pdVar4[1] * dVar16 + pdVar6[1];
              pdVar4 = (double *)(lVar59 + -0x30 + lVar48 * 4);
              *pdVar4 = *pdVar3 * dVar15 + *pdVar5;
              pdVar4[1] = dVar28 * dVar16 + dVar21;
              auVar18._8_4_ = SUB84(dVar27,0);
              auVar18._0_8_ = dVar22 * dVar15 + dVar20;
              auVar18._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
              *(undefined1 (*) [16])(lVar59 + -0x20 + lVar48 * 4) = auVar18;
              pdVar4 = (double *)(lVar54 + -0x10 + lVar48 * 4);
              pdVar3 = (double *)(lVar54 + lVar48 * 4);
              dVar21 = *pdVar3;
              pdVar5 = (double *)(lVar59 + -0x10 + lVar48 * 4);
              auVar62._0_8_ = *pdVar4 * dVar15 + *pdVar5;
              auVar62._8_8_ = pdVar4[1] * dVar16 + pdVar5[1];
              pdVar4 = (double *)(lVar59 + lVar48 * 4);
              dVar20 = dVar16 * pdVar3[1] + pdVar4[1];
              *(undefined1 (*) [16])(lVar59 + -0x10 + lVar48 * 4) = auVar62;
              auVar11._8_4_ = SUB84(dVar20,0);
              auVar11._0_8_ = dVar15 * dVar21 + *pdVar4;
              auVar11._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
              *(undefined1 (*) [16])(lVar59 + lVar48 * 4) = auVar11;
              uVar57 = uVar57 + 1;
              lVar48 = lVar48 + 0x18;
            } while (uVar52 != uVar57);
          }
          uVar46 = uVar46 + 1;
        } while (uVar46 != uVar58);
      }
      FUN_142400cf0(*plVar10,(int)plVar10[1]);
    }
    auVar78 = _DAT_149934d80;
    if (0 < *(int *)(lVar45 + 0x68)) {
      lVar48 = 0;
      dVar20 = (double)DAT_149934d80;
      dVar21 = DAT_149934d80._8_8_;
      do {
        lVar59 = *(longlong *)(lVar45 + 0x90);
        if (*(longlong *)(lVar45 + 0x90) == 0) {
          lVar59 = local_358;
        }
        lVar54 = *(longlong *)(lVar45 + 0x60) + lVar48 * 0x80;
        bVar44 = *(byte *)(lVar59 + lVar48);
        if (*(char *)(*(longlong *)(lVar45 + 0x60) + lVar48 * 0x80) == '\x02') {
          FUN_1433cec0c();
          if (0 < (int)uVar8) {
            lVar59 = 0x14;
            uVar46 = 0;
            do {
              lVar55 = *(longlong *)(lVar54 + 8);
              fVar70 = *(float *)(*(longlong *)(*plVar2 + (ulonglong)bVar44 * 0x10) + uVar46 * 4);
              dVar16 = (double)fVar70;
              dVar27 = (double)fVar70;
              pdVar3 = (double *)(lVar55 + -0x40 + lVar59 * 4);
              dVar15 = *pdVar3;
              dVar29 = pdVar3[1];
              auVar64._8_8_ = -(ulonglong)(0.0 <= dVar29);
              auVar64._0_8_ = -(ulonglong)(0.0 <= dVar15);
              pdVar3 = (double *)(lVar55 + -0x50 + lVar59 * 4);
              auVar30._12_4_ = 0x3ff00000;
              auVar30._0_12_ = ZEXT812(0);
              auVar84 = blendvpd(ZEXT816(0xbff0000000000000) << 0x40,auVar30,auVar64);
              dVar28 = (dVar20 - dVar16) * 0.0;
              dVar22 = (dVar21 - dVar27) * 0.0;
              dVar76 = auVar84._0_8_ * (dVar20 - dVar16) + dVar15 * dVar16;
              dVar80 = auVar84._8_8_ * (dVar21 - dVar27) + dVar29 * dVar27;
              dVar15 = *pdVar3 * dVar16 + dVar28;
              dVar29 = pdVar3[1] * dVar27 + dVar22;
              dVar71 = dVar76 * dVar76 + dVar15 * dVar15;
              dVar74 = dVar80 * dVar80 + dVar29 * dVar29;
              auVar72._0_8_ = dVar71 + dVar74;
              auVar72._8_8_ = dVar71 + dVar74;
              auVar65._8_8_ = -(ulonglong)(1e-08 <= auVar72._8_8_);
              auVar65._0_8_ = -(ulonglong)(1e-08 <= auVar72._0_8_);
              auVar84 = sqrtpd(auVar72,auVar72);
              auVar88 = divpd(auVar78,auVar84);
              auVar89._0_8_ = auVar88._0_8_ * dVar76;
              auVar89._8_8_ = auVar88._8_8_ * dVar80;
              auVar84 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar89,auVar65);
              lVar51 = *plVar10;
              dVar82 = auVar84._0_8_;
              dVar87 = auVar84._8_8_;
              pdVar3 = (double *)(lVar51 + -0x50 + lVar59 * 4);
              dVar74 = *pdVar3;
              dVar76 = pdVar3[1];
              pdVar3 = (double *)(lVar51 + -0x40 + lVar59 * 4);
              dVar80 = *pdVar3;
              dVar34 = pdVar3[1];
              dVar15 = (double)((ulonglong)(dVar15 * auVar88._0_8_) &
                               -(ulonglong)(1e-08 <= auVar72._0_8_));
              dVar29 = (double)((ulonglong)(dVar29 * auVar88._8_8_) &
                               -(ulonglong)(1e-08 <= auVar72._8_8_));
              auVar66._8_4_ = SUB84(dVar15,0);
              auVar66._0_8_ = dVar15;
              auVar66._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
              dVar71 = dVar74 * dVar82 * 1.0 +
                       dVar34 * dVar29 + dVar80 * auVar66._8_8_ * -1.0 + dVar76 * dVar87;
              pdVar3 = (double *)(lVar55 + -0x30 + lVar59 * 4);
              dVar35 = *pdVar3;
              dVar36 = pdVar3[1];
              pdVar3 = (double *)(lVar55 + -0x20 + lVar59 * 4);
              dVar37 = *pdVar3;
              dVar38 = pdVar3[1];
              pdVar3 = (double *)(lVar55 + -0x10 + lVar59 * 4);
              dVar39 = *pdVar3;
              dVar40 = pdVar3[1];
              pdVar3 = (double *)(lVar55 + lVar59 * 4);
              dVar41 = *pdVar3;
              dVar42 = pdVar3[1];
              auVar32._8_4_ = SUB84(dVar71,0);
              auVar32._0_8_ =
                   dVar76 * dVar82 * -1.0 +
                   dVar80 * dVar29 + dVar34 * dVar15 * 1.0 + dVar74 * dVar87;
              auVar32._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
              *(undefined1 (*) [16])(lVar51 + -0x50 + lVar59 * 4) = auVar32;
              pdVar3 = (double *)(lVar51 + -0x40 + lVar59 * 4);
              *pdVar3 = dVar34 * dVar82 * 1.0 +
                        ((dVar15 * dVar76 * 1.0 + dVar87 * dVar80) - dVar74 * dVar29);
              pdVar3[1] = dVar80 * dVar82 * -1.0 +
                          ((auVar66._8_8_ * dVar74 * -1.0 + dVar87 * dVar34) - dVar76 * dVar29);
              pdVar3 = (double *)(lVar51 + -0x30 + lVar59 * 4);
              dVar29 = dVar36 * dVar27 + dVar22 + pdVar3[1];
              pdVar4 = (double *)(lVar51 + -0x20 + lVar59 * 4);
              dVar15 = pdVar4[1];
              auVar24._8_4_ = SUB84(dVar29,0);
              auVar24._0_8_ = dVar35 * dVar16 + dVar28 + *pdVar3;
              auVar24._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
              *(undefined1 (*) [16])(lVar51 + -0x30 + lVar59 * 4) = auVar24;
              pdVar3 = (double *)(lVar51 + -0x20 + lVar59 * 4);
              *pdVar3 = dVar37 * dVar16 + dVar28 + *pdVar4;
              pdVar3[1] = dVar38 * dVar27 + dVar22 + dVar15;
              pdVar4 = (double *)(lVar51 + -0x10 + lVar59 * 4);
              dVar29 = pdVar4[1];
              pdVar3 = (double *)(lVar51 + lVar59 * 4);
              dVar71 = *pdVar3;
              dVar15 = (dVar27 * dVar42 + dVar22 + 0.0) * pdVar3[1];
              pdVar3 = (double *)(lVar51 + -0x10 + lVar59 * 4);
              *pdVar3 = (dVar39 * dVar16 + dVar28 + dVar20) * *pdVar4;
              pdVar3[1] = (dVar40 * dVar27 + dVar22 + dVar21) * dVar29;
              auVar12._8_4_ = SUB84(dVar15,0);
              auVar12._0_8_ = (dVar16 * dVar41 + dVar28 + 1.0) * dVar71;
              auVar12._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
              *(undefined1 (*) [16])(lVar51 + lVar59 * 4) = auVar12;
              uVar46 = uVar46 + 1;
              lVar59 = lVar59 + 0x18;
            } while (uVar52 != uVar46);
          }
          FUN_1433cec24(plVar10);
        }
        else if (0 < (int)uVar8) {
          lVar59 = 0x14;
          uVar46 = 0;
          do {
            lVar55 = *(longlong *)(lVar54 + 8);
            fVar70 = *(float *)(*(longlong *)(*plVar2 + (ulonglong)bVar44 * 0x10) + uVar46 * 4);
            dVar16 = (double)fVar70;
            dVar27 = (double)fVar70;
            pdVar3 = (double *)(lVar55 + -0x40 + lVar59 * 4);
            dVar15 = *pdVar3;
            dVar29 = pdVar3[1];
            auVar67._8_8_ = -(ulonglong)(0.0 <= dVar29);
            auVar67._0_8_ = -(ulonglong)(0.0 <= dVar15);
            pdVar3 = (double *)(lVar55 + -0x50 + lVar59 * 4);
            auVar31._12_4_ = 0x3ff00000;
            auVar31._0_12_ = ZEXT812(0);
            auVar84 = blendvpd(ZEXT816(0xbff0000000000000) << 0x40,auVar31,auVar67);
            dVar28 = (dVar20 - dVar16) * 0.0;
            dVar22 = (dVar21 - dVar27) * 0.0;
            dVar76 = auVar84._0_8_ * (dVar20 - dVar16) + dVar15 * dVar16;
            dVar80 = auVar84._8_8_ * (dVar21 - dVar27) + dVar29 * dVar27;
            dVar15 = *pdVar3 * dVar16 + dVar28;
            dVar29 = pdVar3[1] * dVar27 + dVar22;
            dVar71 = dVar76 * dVar76 + dVar15 * dVar15;
            dVar74 = dVar80 * dVar80 + dVar29 * dVar29;
            auVar73._0_8_ = dVar71 + dVar74;
            auVar73._8_8_ = dVar71 + dVar74;
            auVar68._8_8_ = -(ulonglong)(1e-08 <= auVar73._8_8_);
            auVar68._0_8_ = -(ulonglong)(1e-08 <= auVar73._0_8_);
            auVar84 = sqrtpd(auVar73,auVar73);
            auVar84 = divpd(auVar78,auVar84);
            auVar86._0_8_ = auVar84._0_8_ * dVar76;
            auVar86._8_8_ = auVar84._8_8_ * dVar80;
            auVar88 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar86,auVar68);
            lVar51 = *plVar10;
            dVar82 = auVar88._0_8_;
            dVar87 = auVar88._8_8_;
            pdVar3 = (double *)(lVar51 + -0x50 + lVar59 * 4);
            dVar74 = *pdVar3;
            dVar76 = pdVar3[1];
            pdVar3 = (double *)(lVar51 + -0x40 + lVar59 * 4);
            dVar80 = *pdVar3;
            dVar34 = pdVar3[1];
            dVar15 = (double)((ulonglong)(dVar15 * auVar84._0_8_) &
                             -(ulonglong)(1e-08 <= auVar73._0_8_));
            dVar29 = (double)((ulonglong)(dVar29 * auVar84._8_8_) &
                             -(ulonglong)(1e-08 <= auVar73._8_8_));
            auVar69._8_4_ = SUB84(dVar15,0);
            auVar69._0_8_ = dVar15;
            auVar69._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
            dVar71 = dVar74 * dVar82 * 1.0 +
                     dVar34 * dVar29 + dVar80 * auVar69._8_8_ * -1.0 + dVar76 * dVar87;
            pdVar3 = (double *)(lVar55 + -0x30 + lVar59 * 4);
            dVar35 = *pdVar3;
            dVar36 = pdVar3[1];
            pdVar3 = (double *)(lVar55 + -0x20 + lVar59 * 4);
            dVar37 = *pdVar3;
            dVar38 = pdVar3[1];
            pdVar3 = (double *)(lVar55 + -0x10 + lVar59 * 4);
            dVar39 = *pdVar3;
            dVar40 = pdVar3[1];
            pdVar3 = (double *)(lVar55 + lVar59 * 4);
            dVar41 = *pdVar3;
            dVar42 = pdVar3[1];
            auVar33._8_4_ = SUB84(dVar71,0);
            auVar33._0_8_ =
                 dVar76 * dVar82 * -1.0 + dVar80 * dVar29 + dVar34 * dVar15 * 1.0 + dVar74 * dVar87;
            auVar33._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
            *(undefined1 (*) [16])(lVar51 + -0x50 + lVar59 * 4) = auVar33;
            pdVar3 = (double *)(lVar51 + -0x40 + lVar59 * 4);
            *pdVar3 = dVar34 * dVar82 * 1.0 +
                      ((dVar15 * dVar76 * 1.0 + dVar87 * dVar80) - dVar74 * dVar29);
            pdVar3[1] = dVar80 * dVar82 * -1.0 +
                        ((auVar69._8_8_ * dVar74 * -1.0 + dVar87 * dVar34) - dVar76 * dVar29);
            pdVar3 = (double *)(lVar51 + -0x30 + lVar59 * 4);
            dVar29 = dVar36 * dVar27 + dVar22 + pdVar3[1];
            pdVar4 = (double *)(lVar51 + -0x20 + lVar59 * 4);
            dVar15 = pdVar4[1];
            auVar25._8_4_ = SUB84(dVar29,0);
            auVar25._0_8_ = dVar35 * dVar16 + dVar28 + *pdVar3;
            auVar25._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
            *(undefined1 (*) [16])(lVar51 + -0x30 + lVar59 * 4) = auVar25;
            pdVar3 = (double *)(lVar51 + -0x20 + lVar59 * 4);
            *pdVar3 = dVar37 * dVar16 + dVar28 + *pdVar4;
            pdVar3[1] = dVar38 * dVar27 + dVar22 + dVar15;
            pdVar4 = (double *)(lVar51 + -0x10 + lVar59 * 4);
            dVar29 = pdVar4[1];
            pdVar3 = (double *)(lVar51 + lVar59 * 4);
            dVar71 = *pdVar3;
            dVar15 = (dVar27 * dVar42 + dVar22 + 0.0) * pdVar3[1];
            pdVar3 = (double *)(lVar51 + -0x10 + lVar59 * 4);
            *pdVar3 = (dVar39 * dVar16 + dVar28 + dVar20) * *pdVar4;
            pdVar3[1] = (dVar40 * dVar27 + dVar22 + dVar21) * dVar29;
            auVar13._8_4_ = SUB84(dVar15,0);
            auVar13._0_8_ = (dVar16 * dVar41 + dVar28 + 1.0) * dVar71;
            auVar13._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
            *(undefined1 (*) [16])(lVar51 + lVar59 * 4) = auVar13;
            uVar46 = uVar46 + 1;
            lVar59 = lVar59 + 0x18;
          } while (uVar52 != uVar46);
        }
        FUN_142400cf0(*plVar10,(int)plVar10[1]);
        lVar48 = lVar48 + 1;
      } while (lVar48 < *(int *)(lVar45 + 0x68));
    }
    plVar10 = local_2e0;
    lVar48 = local_340;
    if (0 < *(int *)(lVar45 + 0x168)) {
      local_298 = *(longlong *)(lVar45 + 0xc0);
      if (*(longlong *)(lVar45 + 0xc0) == 0) {
        local_298 = local_340;
      }
      local_290 = *(undefined4 *)(lVar45 + 200);
      local_2a8 = lVar53;
      if (*(longlong *)(lVar45 + 0x160) != 0) {
        local_2a8 = *(longlong *)(lVar45 + 0x160);
      }
      local_2a0 = *(int *)(lVar45 + 0x168);
      FUN_1417b3a00(&local_2a8,&local_298,local_2e0[1]);
    }
    plVar1 = local_350;
    if (0 < *(int *)(lVar45 + 0x1b8)) {
      local_2b8 = lVar48;
      if (*(longlong *)(lVar45 + 0xc0) != 0) {
        local_2b8 = *(longlong *)(lVar45 + 0xc0);
      }
      local_2b0 = *(undefined4 *)(lVar45 + 200);
      local_2c8 = local_348;
      if (*(longlong *)(lVar45 + 0x1b0) != 0) {
        local_2c8 = *(longlong *)(lVar45 + 0x1b0);
      }
      local_2c0 = *(int *)(lVar45 + 0x1b8);
      FUN_1433ea9e8(&local_2c8,&local_2b8,plVar10[2]);
    }
    if (0 < *(int *)(lVar45 + 0x68)) {
      lVar48 = 0x20;
      lVar53 = 0;
      do {
        lVar59 = *plVar1;
        fVar70 = *(float *)(lVar59 + -0x1c + lVar48);
        if (1e-05 < fVar70) {
          FUN_144716836(plVar10[1],lVar59 + lVar48,fVar70);
          fVar70 = *(float *)(lVar59 + -0x1c + lVar48);
        }
        FUN_140035fa4(lVar59 + lVar48 + 0x20,plVar10[2],fVar70,
                      *(undefined1 *)(lVar59 + lVar48 + -0x20));
        lVar53 = lVar53 + 1;
        lVar48 = lVar48 + 0x80;
      } while (lVar53 < *(int *)(lVar45 + 0x68));
    }
    if ((local_f0 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar59 = lVar48 * 0x58 + *(longlong *)(lVar59 + 0x6c0);
  local_368 = lVar48;
  plVar47 = (longlong *)FUN_14479d2ce(lVar59);
  if ((plVar47 != (longlong *)0x0) && (lVar48 = (longlong)(int)plVar47[0x2e], 0 < lVar48)) {
    lVar54 = plVar47[0x2d];
    lVar55 = 0;
    do {
      lVar53 = local_338;
      if (*(longlong *)(lVar54 + lVar55) == *local_2d0) {
        if (0 < *(int *)(lVar54 + 0x10 + lVar55)) {
          local_300 = *(longlong *)(lVar59 + 0x38);
          lVar54 = lVar54 + 8;
          goto LAB_1478ffe87;
        }
        break;
      }
      lVar55 = lVar55 + 0x18;
    } while (lVar48 * 0x18 != lVar55);
  }
  goto LAB_1478ffd8c;
  while( true ) {
    lVar54 = lVar54 + 0x18;
    lVar48 = lVar48 + -1;
    if (lVar48 == 0) break;
LAB_1478ffe87:
    if (*(longlong *)(lVar54 + -8) == *local_2d0) goto LAB_1478ffe98;
  }
  lVar54 = 0;
LAB_1478ffe98:
  cVar43 = FUN_1456b2ef6();
  iVar50 = 0;
  if (cVar43 != '\0') {
    bVar44 = FUN_1478df6d8(lVar54);
    iVar50 = bVar44 + 1;
  }
  local_1b8 = (code *)CONCAT71(local_1b8._1_7_,(char)iVar50);
  local_1b8 = (code *)CONCAT44(*(undefined4 *)(lVar59 + 0x20),(undefined4)local_1b8);
  uStack_190 = 0;
  uStack_18f = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  uStack_197 = 0;
  local_1b0 = (undefined1 *)0x0;
  uStack_1a8 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_140 = 0;
  local_35c = iVar50;
  FUN_144717630(&local_1b0,*(undefined8 *)(local_388 + 0x6a0));
  local_180 = *(longlong *)(local_388 + 0x6a0) + 0xb0;
  local_1c8 = *(undefined8 *)(lVar59 + 0x44);
  local_1c0 = *(undefined4 *)(lVar59 + 0x4c);
  cVar43 = (**(code **)(*plVar47 + 0x340))(plVar47);
  lVar53 = local_388;
  if (cVar43 == '\0') {
    local_130 = false;
  }
  else {
    local_130 = *(int *)(local_388 + 0x3f8) != 0;
  }
  local_138 = (double)*(float *)(lVar59 + 0x40);
  local_12c = local_1c8;
  local_124 = local_1c0;
  local_120 = 0;
  local_f7 = '\0';
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  if ((local_328 != &local_f8) && (*(char *)(local_388 + 0x621) == '\x01')) {
    local_f8 = *local_328;
    local_f7 = '\x01';
  }
  local_1e0 = &local_1b0;
  local_1d8 = &uStack_198;
  local_1d0 = &uStack_178;
  FUN_140cc2a2a(lVar54,&local_1e0,&local_138);
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1f0 = *(longlong *)(lVar53 + 0x6a0) + 0xb0;
  (**(code **)(*plVar47 + 0x2e8))(plVar47,&local_208,*(undefined4 *)(lVar59 + 0x40));
  FUN_1449802a2(&uStack_198,&local_208);
  if (local_35c == 0) {
    FUN_1479011a8(local_288,&local_1b8);
    iVar50 = *(int *)(lVar45 + 0x58);
    *(uint *)(lVar45 + 0x58) = iVar50 + 1U;
    if (*(uint *)(lVar45 + 0x5c) < iVar50 + 1U) {
      FUN_14061cf10(local_330,iVar50);
    }
    FUN_1479011a8((longlong)iVar50 * 0x80 + *(longlong *)(lVar45 + 0x50),local_288);
    FUN_1447166b4(local_248);
    iVar50 = *(int *)(lVar45 + 0x80);
    *(uint *)(lVar45 + 0x80) = iVar50 + 1U;
    if (*(uint *)(lVar45 + 0x84) < iVar50 + 1U) {
      FUN_14726c186(local_380,iVar50);
    }
    lVar53 = *(longlong *)(lVar45 + 0x78);
    if (*(longlong *)(lVar45 + 0x78) == 0) {
      lVar53 = local_380;
    }
    *(char *)(lVar53 + iVar50) = (char)local_374;
    auVar84._0_4_ = fVar81 + local_1b8._4_4_;
  }
  else {
    FUN_1479011a8(local_288,&local_1b8);
    iVar50 = *(int *)(lVar45 + 0x68);
    *(uint *)(lVar45 + 0x68) = iVar50 + 1U;
    if (*(uint *)(lVar45 + 0x6c) < iVar50 + 1U) {
      FUN_14061cf10(local_350,iVar50);
    }
    FUN_1479011a8((longlong)iVar50 * 0x80 + *(longlong *)(lVar45 + 0x60),local_288);
    FUN_1447166b4(local_248);
    iVar50 = *(int *)(lVar45 + 0x98);
    *(uint *)(lVar45 + 0x98) = iVar50 + 1U;
    if (*(uint *)(lVar45 + 0x9c) < iVar50 + 1U) {
      FUN_14726c186(local_358,iVar50);
    }
    lVar53 = *(longlong *)(lVar45 + 0x90);
    if (*(longlong *)(lVar45 + 0x90) == 0) {
      lVar53 = local_358;
    }
    *(char *)(lVar53 + iVar50) = (char)local_374;
  }
  iVar50 = *(int *)(lVar45 + 0x18);
  *(uint *)(lVar45 + 0x18) = iVar50 + 1U;
  if (*(uint *)(lVar45 + 0x1c) < iVar50 + 1U) {
    FUN_146d8b2f2(plVar2,iVar50);
  }
  puVar49 = (undefined8 *)(*plVar2 + (longlong)iVar50 * 0x10);
  *puVar49 = 0;
  puVar49[1] = 0;
  lVar48 = (longlong)local_374 * 0x10;
  FUN_14005ea14(*plVar2 + lVar48,uVar52);
  lVar53 = *plVar2;
  iVar50 = *(int *)(lVar53 + 8 + lVar48);
  *(uint *)(lVar53 + 8 + lVar48) = iVar50 + uVar8;
  if ((uint)(*(int *)(lVar53 + 0xc + lVar48) - iVar50) < uVar8) {
    FUN_14475e4ac(lVar53 + lVar48);
  }
  if (local_300 == 0) {
    if (0 < (int)uVar8) {
      uVar60 = *(undefined4 *)(lVar59 + 0x20);
      uVar46 = 0;
      do {
        *(undefined4 *)(*(longlong *)(*plVar2 + lVar48) + uVar46 * 4) = uVar60;
        uVar46 = uVar46 + 1;
      } while (uVar52 != uVar46);
    }
  }
  else {
    FUN_147938618(local_300,local_2f8,*(undefined8 *)(local_388 + 0x6a0));
    if (0 < (int)uVar8) {
      local_2d8 = lVar59 + 8;
      uVar46 = 0;
      do {
        local_398 = local_1b8._4_4_;
        local_390 = 0;
        uVar60 = FUN_147938aa4();
        *(undefined4 *)(*(longlong *)(*plVar2 + lVar48) + uVar46 * 4) = uVar60;
        uVar46 = uVar46 + 1;
      } while (uVar52 != uVar46);
    }
  }
  lVar53 = local_338;
  if (local_35c == 0) {
    if (0 < (int)uVar8) {
      uVar46 = 0;
      do {
        *(float *)(*plVar1 + uVar46 * 4) =
             *(float *)(*(longlong *)(*plVar2 + lVar48) + uVar46 * 4) +
             *(float *)(*plVar1 + uVar46 * 4);
        uVar46 = uVar46 + 1;
      } while (uVar52 != uVar46);
    }
  }
  else if (0 < (int)uVar8) {
    uVar46 = 0;
    do {
      *(float *)(*local_320 + uVar46 * 4) =
           *(float *)(*(longlong *)(*plVar2 + lVar48) + uVar46 * 4) +
           *(float *)(*local_320 + uVar46 * 4);
      uVar46 = uVar46 + 1;
    } while (uVar52 != uVar46);
  }
  if (local_f7 == '\x01') {
    local_f7 = '\0';
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  local_374 = local_374 + 1;
  FUN_1447166b4(&uStack_178);
LAB_1478ffd8c:
  lVar48 = local_368 + 1;
  goto LAB_1478ffcee;
}



// FUNCTION 147901130 FUN_147901130 body=61 status=ok
// SIG undefined FUN_147901130(void)

void FUN_147901130(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    FUN_1411d370f(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  FUN_146d8c1fe(param_1);
  return;
}



// FUNCTION 14790116e FUN_14790116e body=57 status=ok
// SIG undefined FUN_14790116e(void)

undefined8 FUN_14790116e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < (longlong)*(int *)(param_1 + 0x170)) {
    lVar1 = *(longlong *)(param_1 + 0x168);
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar2) == param_2) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),0 < *(int *)(lVar1 + 0x10 + lVar2));
      }
      lVar2 = lVar2 + 0x18;
    } while ((longlong)*(int *)(param_1 + 0x170) * 0x18 != lVar2);
  }
  return 0;
}



// FUNCTION 1479011a8 FUN_1479011a8 body=168 status=ok
// SIG undefined FUN_1479011a8(void)

undefined1 * FUN_1479011a8(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x29) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  param_1[0x30] = param_2[0x30];
  param_2[0x30] = 0;
  FUN_1447e1642(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 147901250 FUN_147901250 body=39 status=ok
// SIG undefined FUN_147901250(void)

undefined8 FUN_147901250(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_147901278();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147901268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147901278 FUN_147901278 body=76 status=ok
// SIG undefined FUN_147901278(void)

void FUN_147901278(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cacbcb0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacbcb0 = FUN_140002ddd(FUN_1463a51e9,uVar1,L"AnimNode_AssetPlayerBase");
  }
  FUN_1401837d0(param_1,param_2,DAT_14cacbcb0);
  return;
}



// FUNCTION 1479012c4 FUN_1479012c4 body=39 status=ok
// SIG undefined FUN_1479012c4(void)

undefined8 FUN_1479012c4(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_147901278();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479012dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x118))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1479012ec FUN_1479012ec body=78 status=ok
// SIG undefined FUN_1479012ec(void)

undefined8 FUN_1479012ec(void)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  
  plVar1 = (longlong *)FUN_147901278();
  if (plVar1 == (longlong *)0x0) {
    fVar3 = 0.0;
    uVar5 = 0;
  }
  else {
    fVar2 = (float)(**(code **)(*plVar1 + 0x108))(plVar1);
    fVar3 = 0.0;
    uVar5 = 0;
    if (0.0 < fVar2) {
      uVar4 = (**(code **)(*plVar1 + 0x118))(plVar1);
      uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
      fVar3 = (float)uVar4 / fVar2;
    }
  }
  return CONCAT44(uVar5,fVar3);
}



// FUNCTION 14790133a FUN_14790133a body=101 status=ok
// SIG undefined FUN_14790133a(void)

undefined8 FUN_14790133a(void)

{
  longlong *plVar1;
  float fVar2;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar3;
  
  plVar1 = (longlong *)FUN_147901278();
  fVar4 = 1.0;
  uVar5 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
    fVar2 = (float)uVar3;
    if (0.0 < fVar2) {
      fVar4 = (float)(**(code **)(*plVar1 + 0x118))(plVar1);
      fVar4 = (fVar2 - fVar4) / fVar2;
      uVar5 = (int)((ulonglong)uVar3 >> 0x20);
    }
  }
  return CONCAT44(uVar5,fVar4);
}



// FUNCTION 1479013a0 FUN_1479013a0 body=78 status=ok
// SIG undefined FUN_1479013a0(void)

undefined8 FUN_1479013a0(void)

{
  longlong *plVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  plVar1 = (longlong *)FUN_147901278();
  if (plVar1 == (longlong *)0x0) {
    fVar2 = 3.4028235e+38;
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    fVar2 = (float)(**(code **)(*plVar1 + 0x118))(plVar1);
    fVar2 = (float)uVar3 - fVar2;
  }
  return CONCAT44(uVar4,fVar2);
}



// FUNCTION 1479013ee FUN_1479013ee body=126 status=ok
// SIG undefined FUN_1479013ee(void)

undefined4 FUN_1479013ee(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
    if (((-1 < (int)param_2) && ((int)param_2 < (int)plVar1[1])) &&
       (lVar2 = (longlong)
                *(int *)(*(longlong *)(*plVar1 + (longlong)(int)((int)plVar1[1] + ~param_2) * 8) +
                        0x44) + *(longlong *)(param_1 + 0x130), lVar2 != 0)) {
      uVar3 = *(undefined4 *)
               (*(longlong *)(param_1 + 0x2a0 + (1 - (longlong)*(int *)(param_1 + 0x330)) * 0x10) +
               (longlong)*(int *)(lVar2 + 0x18) * 4);
    }
  }
  return uVar3;
}



// FUNCTION 14790146c FUN_14790146c body=76 status=ok
// SIG undefined FUN_14790146c(void)

longlong FUN_14790146c(longlong param_1,uint param_2)

{
  longlong *plVar1;
  
  if (((*(longlong **)(param_1 + 0x138) != (longlong *)0x0) &&
      (plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))(),
      -1 < (int)param_2)) && ((int)param_2 < (int)plVar1[1])) {
    return (longlong)
           *(int *)(*(longlong *)(*plVar1 + (longlong)(int)((int)plVar1[1] + ~param_2) * 8) + 0x44)
           + *(longlong *)(param_1 + 0x130);
  }
  return 0;
}



// FUNCTION 1479014b8 FUN_1479014b8 body=103 status=ok
// SIG undefined FUN_1479014b8(void)

undefined8 FUN_1479014b8(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
    if (((-1 < (int)param_2) && ((int)param_2 < (int)plVar1[1])) &&
       (lVar2 = (longlong)
                *(int *)(*(longlong *)(*plVar1 + (longlong)(int)((int)plVar1[1] + ~param_2) * 8) +
                        0x44) + *(longlong *)(param_1 + 0x130), lVar2 != 0)) {
      uVar3 = FUN_147901520(param_1,*(undefined4 *)(lVar2 + 0x18),param_3);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 147901520 FUN_147901520 body=161 status=ok
// SIG undefined FUN_147901520(void)

undefined4 FUN_147901520(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
    lVar2 = param_1 + 0x318;
    if (*(longlong *)(param_1 + 800) != 0) {
      lVar2 = *(longlong *)(param_1 + 800);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x328) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x2e0) + (longlong)iVar1 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 0x2e0) + (longlong)iVar1 * 0x10) == param_2) {
          if ((int *)(lVar2 + 4) == (int *)0x0 || lVar2 == 0) {
            return 0;
          }
          return *(undefined4 *)
                  (*(longlong *)(param_1 + 0x2c0 + (1 - (longlong)*(int *)(param_1 + 0x330)) * 0x10)
                  + ((longlong)param_3 + (longlong)*(int *)(lVar2 + 4)) * 4);
        }
        iVar1 = *(int *)(lVar2 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1479015c2 FUN_1479015c2 body=95 status=ok
// SIG undefined FUN_1479015c2(void)

undefined4 FUN_1479015c2(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
    if (((-1 < (int)param_2) && ((int)param_2 < (int)plVar1[1])) &&
       (lVar2 = (longlong)
                *(int *)(*(longlong *)(*plVar1 + (longlong)(int)((int)plVar1[1] + ~param_2) * 8) +
                        0x44) + *(longlong *)(param_1 + 0x130), lVar2 != 0)) {
      uVar3 = *(undefined4 *)(lVar2 + 0x30);
    }
  }
  return uVar3;
}



// FUNCTION 147901622 FUN_147901622 body=124 status=ok
// SIG undefined FUN_147901622(void)

undefined4 FUN_147901622(longlong param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
    if ((((-1 < (int)param_2) && ((int)param_2 < (int)plVar1[1])) && (-1 < (int)param_3)) &&
       ((lVar2 = (longlong)
                 *(int *)(*(longlong *)(*plVar1 + (longlong)(int)((int)plVar1[1] + ~param_2) * 8) +
                         0x44) + *(longlong *)(param_1 + 0x130), lVar2 != 0 &&
        (lVar2 = *(longlong *)(lVar2 + 0x38), (int)param_3 < *(int *)(lVar2 + 0x28))))) {
      uVar3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x20) + 0x10 + (ulonglong)param_3 * 0x40);
    }
  }
  return uVar3;
}



// FUNCTION 14790169e FUN_14790169e body=209 status=ok
// SIG undefined FUN_14790169e(void)

undefined4 FUN_14790169e(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((((*(longlong **)(param_1 + 0x138) != (longlong *)0x0) &&
       (plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))(),
       -1 < (int)param_2)) && ((int)param_2 < (int)plVar1[1])) &&
     (((-1 < param_3 &&
       (lVar2 = (longlong)
                *(int *)(*(longlong *)(*plVar1 + (longlong)(int)((int)plVar1[1] + ~param_2) * 8) +
                        0x44) + *(longlong *)(param_1 + 0x130), lVar2 != 0)) &&
      ((param_3 < *(int *)(*(longlong *)(lVar2 + 0x38) + 0x28) &&
       ((longlong)*(int *)(lVar2 + 0x48) != 0)))))) {
    puVar3 = *(undefined4 **)(lVar2 + 0x40);
    puVar4 = puVar3 + (longlong)*(int *)(lVar2 + 0x48) * 0x32;
    do {
      puVar5 = puVar3 + 0x1a;
      if (*(undefined4 **)(puVar3 + 0x1e) != (undefined4 *)0x0) {
        puVar5 = *(undefined4 **)(puVar3 + 0x1e);
      }
      if ((longlong)(int)puVar3[0x20] != 0) {
        lVar2 = 0;
        do {
          if (*(int *)((longlong)puVar5 + lVar2) == param_3) {
            return *puVar3;
          }
          lVar2 = lVar2 + 4;
        } while ((longlong)(int)puVar3[0x20] * 4 != lVar2);
      }
      puVar3 = puVar3 + 0x32;
    } while (puVar3 != puVar4);
  }
  return 0;
}



// FUNCTION 147901770 FUN_147901770 body=218 status=ok
// SIG undefined FUN_147901770(void)

float FUN_147901770(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  
  if ((((*(longlong **)(param_1 + 0x138) != (longlong *)0x0) &&
       (plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))(),
       -1 < (int)param_2)) && ((int)param_2 < (int)plVar1[1])) &&
     (((-1 < param_3 &&
       (lVar2 = (longlong)
                *(int *)(*(longlong *)(*plVar1 + (longlong)(int)((int)plVar1[1] + ~param_2) * 8) +
                        0x44) + *(longlong *)(param_1 + 0x130), lVar2 != 0)) &&
      ((param_3 < *(int *)(*(longlong *)(lVar2 + 0x38) + 0x28) &&
       ((longlong)*(int *)(lVar2 + 0x48) != 0)))))) {
    pfVar3 = *(float **)(lVar2 + 0x40);
    pfVar4 = pfVar3 + (longlong)*(int *)(lVar2 + 0x48) * 0x32;
    do {
      pfVar5 = pfVar3 + 0x1a;
      if (*(float **)(pfVar3 + 0x1e) != (float *)0x0) {
        pfVar5 = *(float **)(pfVar3 + 0x1e);
      }
      if ((longlong)(int)pfVar3[0x20] != 0) {
        lVar2 = 0;
        do {
          if (*(int *)((longlong)pfVar5 + lVar2) == param_3) {
            return *pfVar3 / pfVar3[2];
          }
          lVar2 = lVar2 + 4;
        } while ((longlong)(int)pfVar3[0x20] * 4 != lVar2);
      }
      pfVar3 = pfVar3 + 0x32;
    } while (pfVar3 != pfVar4);
  }
  return 0.0;
}



// FUNCTION 14790184a FUN_14790184a body=105 status=ok
// SIG undefined FUN_14790184a(void)

undefined8 FUN_14790184a(longlong param_1,uint param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
    if (((-1 < (int)param_2) && ((int)param_2 < (int)plVar1[1])) &&
       (lVar2 = (longlong)
                *(int *)(*(longlong *)(*plVar1 + (longlong)(int)((int)plVar1[1] + ~param_2) * 8) +
                        0x44) + *(longlong *)(param_1 + 0x130), lVar2 != 0)) {
      uVar3 = FUN_1479018b4(lVar2,param_1,param_3);
      return uVar3;
    }
  }
  return 0x3f800000;
}



// FUNCTION 1479018b4 FUN_1479018b4 body=133 status=ok
// SIG undefined FUN_1479018b4(void)

undefined8 FUN_1479018b4(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar4;
  
  plVar1 = (longlong *)
           FUN_14018358c((longlong)param_3,param_2,
                         (longlong)param_3 * 0x78 +
                         *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10));
  fVar5 = 1.0;
  uVar6 = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0xf0))(plVar1);
    if (lVar2 != 0) {
      uVar4 = (**(code **)(*plVar1 + 0x108))(plVar1);
      fVar3 = (float)uVar4;
      if (0.0 < fVar3) {
        fVar5 = (float)(**(code **)(*plVar1 + 0x118))(plVar1);
        fVar5 = (fVar3 - fVar5) / fVar3;
        uVar6 = (int)((ulonglong)uVar4 >> 0x20);
      }
    }
  }
  return CONCAT44(uVar6,fVar5);
}



// FUNCTION 14790193a FUN_14790193a body=62 status=ok
// SIG undefined FUN_14790193a(void)

undefined8 FUN_14790193a(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)FUN_147901978();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0xf0))(plVar1);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147901968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 147901978 FUN_147901978 body=111 status=ok
// SIG undefined FUN_147901978(void)

undefined8 FUN_147901978(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
    if (((-1 < (int)param_2) && ((int)param_2 < (int)plVar1[1])) &&
       (lVar2 = (longlong)
                *(int *)(*(longlong *)(*plVar1 + (longlong)(int)((int)plVar1[1] + ~param_2) * 8) +
                        0x44) + *(longlong *)(param_1 + 0x130), lVar2 != 0)) {
      uVar3 = FUN_14018358c((longlong)param_3,param_1,
                            (longlong)param_3 * 0x78 +
                            *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x10));
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1479019e8 FUN_1479019e8 body=39 status=ok
// SIG undefined FUN_1479019e8(void)

undefined8 FUN_1479019e8(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_147901978();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147901a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x118))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147901a10 FUN_147901a10 body=78 status=ok
// SIG undefined FUN_147901a10(void)

undefined8 FUN_147901a10(void)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  
  plVar1 = (longlong *)FUN_147901978();
  if (plVar1 == (longlong *)0x0) {
    fVar3 = 0.0;
    uVar5 = 0;
  }
  else {
    fVar2 = (float)(**(code **)(*plVar1 + 0x108))(plVar1);
    fVar3 = 0.0;
    uVar5 = 0;
    if (0.0 < fVar2) {
      uVar4 = (**(code **)(*plVar1 + 0x118))(plVar1);
      uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
      fVar3 = (float)uVar4 / fVar2;
    }
  }
  return CONCAT44(uVar5,fVar3);
}



// FUNCTION 147901a5e FUN_147901a5e body=215 status=ok
// SIG undefined FUN_147901a5e(void)

undefined8 FUN_147901a5e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x5b8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x5b0);
    lVar6 = 0;
    do {
      if (((*(longlong *)(lVar2 + 0x20 + lVar6) != 0) &&
          (lVar3 = *(longlong *)(lVar2 + 0x10 + lVar6), lVar3 != 0)) &&
         (lVar3 = *(longlong *)(lVar3 + 0x50), lVar3 != 0)) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_147901ac8:
          lVar4 = FUN_141116c40();
          if ((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) goto LAB_147901adb;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30) {
            lVar5 = 0;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_147901ac8;
LAB_147901adb:
          lVar5 = 0;
        }
        lVar3 = *(longlong *)(lVar3 + 0x10);
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
           (lVar3 = *(longlong *)(lVar3 + 0x30),
           *(longlong *)(lVar3 + (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
        }
      }
      lVar6 = lVar6 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar6);
  }
  return 0;
}



// FUNCTION 147901b36 FUN_147901b36 body=236 status=ok
// SIG undefined FUN_147901b36(void)

undefined8 FUN_147901b36(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x5b8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x5b0);
    lVar6 = (longlong)*(int *)(param_1 + 0x5b8) * 0x30;
    do {
      if (((*(longlong *)(lVar4 + 0x20) != 0) && (*(longlong *)(lVar4 + 0x10) != 0)) &&
         (lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x50), lVar1 != 0)) {
        lVar5 = *param_3;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_147901b9d:
          lVar2 = FUN_141116c40();
          if ((lVar2 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar2 + 0x38))) goto LAB_147901bb1;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30) {
            lVar5 = 0;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_147901b9d;
LAB_147901bb1:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) {
          uVar3 = FUN_147922238(lVar4,param_2);
          return uVar3;
        }
      }
      lVar4 = lVar4 + 0x30;
      lVar6 = lVar6 + -0x30;
    } while (lVar6 != 0);
  }
  return 0;
}



// FUNCTION 147901c22 FUN_147901c22 body=245 status=ok
// SIG undefined FUN_147901c22(void)

undefined8 FUN_147901c22(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x5b8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x5b0);
    lVar4 = (longlong)*(int *)(param_1 + 0x5b8) * 0x30;
    do {
      if (((*(longlong *)(lVar5 + 0x20) != 0) && (*(longlong *)(lVar5 + 0x10) != 0)) &&
         (lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x50), lVar1 != 0)) {
        lVar6 = *param_4;
        if ((lVar6 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar6);
LAB_147901c8d:
          lVar2 = FUN_141116c40();
          if ((lVar2 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar2 + 0x38))) goto LAB_147901ca1;
          if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30) {
            lVar6 = 0;
          }
        }
        else {
          if (lVar6 != 0) goto LAB_147901c8d;
LAB_147901ca1:
          lVar6 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)) {
          uVar3 = FUN_1479222d8(lVar5,param_2,param_3);
          return uVar3;
        }
      }
      lVar5 = lVar5 + 0x30;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 147901d18 FUN_147901d18 body=245 status=ok
// SIG undefined FUN_147901d18(void)

undefined8 FUN_147901d18(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x5b8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x5b0);
    lVar4 = (longlong)*(int *)(param_1 + 0x5b8) * 0x30;
    do {
      if (((*(longlong *)(lVar5 + 0x20) != 0) && (*(longlong *)(lVar5 + 0x10) != 0)) &&
         (lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x48), lVar1 != 0)) {
        lVar6 = *param_4;
        if ((lVar6 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar6);
LAB_147901d83:
          lVar2 = FUN_14105c5c0();
          if ((lVar2 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar2 + 0x38))) goto LAB_147901d97;
          if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30) {
            lVar6 = 0;
          }
        }
        else {
          if (lVar6 != 0) goto LAB_147901d83;
LAB_147901d97:
          lVar6 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)) {
          uVar3 = FUN_1479222d8(lVar5,param_2,param_3);
          return uVar3;
        }
      }
      lVar5 = lVar5 + 0x30;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 147901e0e FUN_147901e0e body=278 status=ok
// SIG undefined FUN_147901e0e(void)

undefined8 FUN_147901e0e(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  if ((longlong)*(int *)(param_1 + 0x5b8) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x5b0);
    lVar4 = (longlong)*(int *)(param_1 + 0x5b8) * 0x30 + lVar6;
    do {
      if ((*(longlong *)(lVar6 + 0x20) != 0) && (*(longlong *)(lVar6 + 0x10) != 0)) {
        lVar10 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x3c);
        lVar2 = *(longlong *)(lVar6 + 0x18);
        if ((lVar2 != 0) && (*(int *)(lVar2 + 0x158) != *(int *)(lVar2 + 0x184))) {
          uVar3 = (uint)((ulonglong)lVar10 >> 0x10);
          uVar8 = (uint)lVar10 & 0xffff;
          lVar7 = lVar2 + 0x188;
          if (*(longlong *)(lVar2 + 400) != 0) {
            lVar7 = *(longlong *)(lVar2 + 400);
          }
          iVar9 = *(int *)(lVar7 + (ulonglong)
                                   (*(int *)(lVar2 + 0x198) - 1U &
                                   (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar8)
                                   + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
          if (iVar9 != -1) {
            do {
              plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x150) + (longlong)iVar9 * 0x18);
              if (*plVar1 == lVar10) {
                if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
                  lVar10 = plVar1[1];
                }
                break;
              }
              iVar9 = (int)plVar1[2];
            } while (iVar9 != -1);
          }
        }
        if (lVar10 == param_4) {
          uVar5 = FUN_1479222d8();
          return uVar5;
        }
      }
      lVar6 = lVar6 + 0x30;
    } while (lVar6 != lVar4);
  }
  return 0;
}



// FUNCTION 147901f24 FUN_147901f24 body=236 status=ok
// SIG undefined FUN_147901f24(void)

undefined8 FUN_147901f24(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x5b8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x5b0);
    lVar6 = (longlong)*(int *)(param_1 + 0x5b8) * 0x30;
    do {
      if (((*(longlong *)(lVar4 + 0x20) != 0) && (*(longlong *)(lVar4 + 0x10) != 0)) &&
         (lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x48), lVar1 != 0)) {
        lVar5 = *param_3;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_147901f8b:
          lVar2 = FUN_14105c5c0();
          if ((lVar2 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar2 + 0x38))) goto LAB_147901f9f;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30) {
            lVar5 = 0;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_147901f8b;
LAB_147901f9f:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) {
          uVar3 = FUN_147922238(lVar4,param_2);
          return uVar3;
        }
      }
      lVar4 = lVar4 + 0x30;
      lVar6 = lVar6 + -0x30;
    } while (lVar6 != 0);
  }
  return 0;
}



// FUNCTION 147902010 FUN_147902010 body=215 status=ok
// SIG undefined FUN_147902010(void)

undefined8 FUN_147902010(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x5b8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x5b0);
    lVar6 = 0;
    do {
      if (((*(longlong *)(lVar2 + 0x20 + lVar6) != 0) &&
          (lVar3 = *(longlong *)(lVar2 + 0x10 + lVar6), lVar3 != 0)) &&
         (lVar3 = *(longlong *)(lVar3 + 0x48), lVar3 != 0)) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_14790207a:
          lVar4 = FUN_14105c5c0();
          if ((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) goto LAB_14790208d;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30) {
            lVar5 = 0;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_14790207a;
LAB_14790208d:
          lVar5 = 0;
        }
        lVar3 = *(longlong *)(lVar3 + 0x10);
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
           (lVar3 = *(longlong *)(lVar3 + 0x30),
           *(longlong *)(lVar3 + (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
        }
      }
      lVar6 = lVar6 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar6);
  }
  return 0;
}



// FUNCTION 1479020e8 FUN_1479020e8 body=276 status=ok
// SIG undefined FUN_1479020e8(void)

undefined8 FUN_1479020e8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  
  if ((longlong)*(int *)(param_1 + 0x5b8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x5b0);
    lVar5 = (longlong)*(int *)(param_1 + 0x5b8) * 0x30 + lVar4;
    do {
      if ((*(longlong *)(lVar4 + 0x20) != 0) && (*(longlong *)(lVar4 + 0x10) != 0)) {
        lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x3c);
        lVar2 = *(longlong *)(lVar4 + 0x18);
        if ((lVar2 != 0) && (*(int *)(lVar2 + 0x158) != *(int *)(lVar2 + 0x184))) {
          uVar3 = (uint)((ulonglong)lVar6 >> 0x10);
          uVar8 = (uint)lVar6 & 0xffff;
          lVar7 = lVar2 + 0x188;
          if (*(longlong *)(lVar2 + 400) != 0) {
            lVar7 = *(longlong *)(lVar2 + 400);
          }
          iVar9 = *(int *)(lVar7 + (ulonglong)
                                   (*(int *)(lVar2 + 0x198) - 1U &
                                   (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar8) +
                                   (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
          if (iVar9 != -1) {
            do {
              plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x150) + (longlong)iVar9 * 0x18);
              if (*plVar1 == lVar6) {
                if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
                  lVar6 = plVar1[1];
                }
                break;
              }
              iVar9 = (int)plVar1[2];
            } while (iVar9 != -1);
          }
        }
        if (lVar6 == param_2) {
          return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
        }
      }
      lVar4 = lVar4 + 0x30;
    } while (lVar4 != lVar5);
  }
  return 0;
}



// FUNCTION 1479021fc FUN_1479021fc body=275 status=ok
// SIG undefined FUN_1479021fc(void)

undefined8 FUN_1479021fc(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  if ((longlong)*(int *)(param_1 + 0x5b8) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x5b0);
    lVar4 = (longlong)*(int *)(param_1 + 0x5b8) * 0x30 + lVar6;
    do {
      if ((*(longlong *)(lVar6 + 0x20) != 0) && (*(longlong *)(lVar6 + 0x10) != 0)) {
        lVar9 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x3c);
        lVar2 = *(longlong *)(lVar6 + 0x18);
        if ((lVar2 != 0) && (*(int *)(lVar2 + 0x158) != *(int *)(lVar2 + 0x184))) {
          uVar3 = (uint)((ulonglong)lVar9 >> 0x10);
          uVar7 = (uint)lVar9 & 0xffff;
          lVar10 = lVar2 + 0x188;
          if (*(longlong *)(lVar2 + 400) != 0) {
            lVar10 = *(longlong *)(lVar2 + 400);
          }
          iVar8 = *(int *)(lVar10 + (ulonglong)
                                    (*(int *)(lVar2 + 0x198) - 1U &
                                    (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar7)
                                    + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
          if (iVar8 != -1) {
            do {
              plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x150) + (longlong)iVar8 * 0x18);
              if (*plVar1 == lVar9) {
                if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
                  lVar9 = plVar1[1];
                }
                break;
              }
              iVar8 = (int)plVar1[2];
            } while (iVar8 != -1);
          }
        }
        if (lVar9 == param_3) {
          uVar5 = FUN_147922238();
          return uVar5;
        }
      }
      lVar6 = lVar6 + 0x30;
    } while (lVar6 != lVar4);
  }
  return 0;
}



// FUNCTION 147902310 FUN_147902310 body=300 status=ok
// SIG undefined FUN_147902310(void)

bool FUN_147902310(undefined8 param_1,undefined8 *param_2,double param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  undefined1 auStack_118 [40];
  code *local_f0;
  LARGE_INTEGER *local_e8;
  LARGE_INTEGER local_e0 [4];
  longlong local_c0;
  undefined1 local_90 [32];
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_47;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_70 = 0;
  local_68 = 0x800000000;
  local_50 = *param_2;
  local_48 = *param_4;
  local_47 = *param_5;
  local_58 = param_3;
  QueryPerformanceCounter(local_e0);
  local_60 = (double)local_e0[0].QuadPart * DAT_14c83f420 + 16777216.0;
  if (0.0 < param_3) {
    FUN_147902516(local_e0,local_90);
    local_f0 = FUN_1433e388e;
    local_e8 = local_e0;
    FUN_14790243e(param_1);
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 0.0 < param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14790243e FUN_14790243e body=215 status=ok
// SIG undefined FUN_14790243e(void)

void FUN_14790243e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
    iVar3 = (int)plVar4[1];
    if (0 < iVar3) {
      iVar6 = 0;
      iVar7 = -1;
      do {
        lVar1 = *(longlong *)(*plVar4 + (longlong)(iVar3 + iVar7) * 8);
        if (lVar1 != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x70);
          if (DAT_14cacbf18 == 0) {
            uVar5 = FUN_140002dac();
            DAT_14cacbf18 = FUN_140002ddd(FUN_1463a5bfa,uVar5,L"AnimNode_StateMachine");
            if (DAT_14cacbf18 == 0) goto LAB_1479024f8;
          }
          if (((*(int *)(DAT_14cacbf18 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cacbf18 + 0x38) * 8) ==
               DAT_14cacbf18 + 0x30)) &&
             ((longlong)*(int *)(lVar1 + 0x44) + *(longlong *)(param_1 + 0x130) != 0)) {
            (*(code *)*param_2)(param_2[1]);
          }
        }
LAB_1479024f8:
        iVar6 = iVar6 + 1;
        iVar3 = (int)plVar4[1];
        iVar7 = iVar7 + -1;
      } while (iVar6 < iVar3);
    }
  }
  return;
}



// FUNCTION 147902516 FUN_147902516 body=123 status=ok
// SIG undefined FUN_147902516(void)

void * FUN_147902516(void *param_1,void *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *_Dst;
  void *_Src;
  
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x28);
  _Src = *(void **)((longlong)param_2 + 0x20);
  *(int *)((longlong)param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 8;
  }
  else {
    if (_Src == (void *)0x0) {
      _Src = param_2;
    }
    FUN_146ec8ea8(param_1,iVar1,0);
    _Dst = *(void **)((longlong)param_1 + 0x20);
    if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(longlong)iVar1 << 2);
  }
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x30);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x38);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x42);
  *(undefined8 *)((longlong)param_1 + 0x3a) = *(undefined8 *)((longlong)param_2 + 0x3a);
  *(undefined8 *)((longlong)param_1 + 0x42) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar3;
  return param_1;
}



// FUNCTION 147902592 FUN_147902592 body=211 status=ok
// SIG undefined FUN_147902592(void)

undefined8 FUN_147902592(longlong param_1,uint param_2,int param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((((*(longlong **)(param_1 + 0x138) == (longlong *)0x0) ||
       (plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))(),
       (int)param_2 < 0)) || ((int)plVar1[1] <= (int)param_2)) ||
     (lVar2 = (longlong)
              *(int *)(*(longlong *)(*plVar1 + (longlong)(int)((int)plVar1[1] + ~param_2) * 8) +
                      0x44) + *(longlong *)(param_1 + 0x130), lVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    if ((longlong)*(int *)(lVar2 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x90);
      lVar2 = (longlong)*(int *)(lVar2 + 0x98) * 0x50 + lVar3;
      do {
        if ((*(int *)(lVar3 + 0x40) == (int)*param_4) &&
           (*(int *)(lVar3 + 0x44) == (int)((ulonglong)*param_4 >> 0x20))) {
          lVar5 = *(longlong *)(lVar3 + 0x20);
          if (*(longlong *)(lVar3 + 0x20) == 0) {
            lVar5 = lVar3;
          }
          if ((longlong)*(int *)(lVar3 + 0x28) == 0) goto LAB_147902652;
          lVar6 = 0;
          while (*(int *)(lVar5 + lVar6) != param_3) {
            lVar6 = lVar6 + 4;
            if ((longlong)*(int *)(lVar3 + 0x28) * 4 == lVar6) goto LAB_147902652;
          }
        }
        lVar3 = lVar3 + 0x50;
      } while (lVar3 != lVar2);
    }
    lVar3 = 0;
LAB_147902652:
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar3 != 0);
  }
  return uVar4;
}



// FUNCTION 147902666 FUN_147902666 body=81 status=ok
// SIG undefined FUN_147902666(void)

void FUN_147902666(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_10 = &local_20;
  local_18 = FUN_1433e3a0a;
  FUN_14790243e();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479026b8 FUN_1479026b8 body=75 status=ok
// SIG undefined FUN_1479026b8(void)

void FUN_1479026b8(void)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  code *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_19;
  local_18 = FUN_1433e3aa0;
  FUN_14790243e();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147902704 FUN_147902704 body=194 status=ok
// SIG undefined FUN_147902704(void)

undefined8 FUN_147902704(longlong param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
    lVar4 = *(longlong *)(*plVar2 + (longlong)(int)(~param_2 + (int)plVar2[1]) * 8);
    if (lVar4 != 0) {
      lVar1 = *(longlong *)(lVar4 + 0x70);
      if (DAT_14cacbf18 == 0) {
        uVar3 = FUN_140002dac();
        DAT_14cacbf18 = FUN_140002ddd(FUN_1463a5bfa,uVar3,L"AnimNode_StateMachine");
        if (DAT_14cacbf18 == 0) {
          return 0;
        }
      }
      if (((*(int *)(DAT_14cacbf18 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cacbf18 + 0x38) * 8)
           == DAT_14cacbf18 + 0x30)) &&
         (lVar4 = (longlong)*(int *)(lVar4 + 0x44) + *(longlong *)(param_1 + 0x130), lVar4 != 0)) {
        uVar3 = FUN_1433d8aac(lVar4,param_3,param_4);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1479027c6 FUN_1479027c6 body=16 status=ok
// SIG undefined FUN_1479027c6(void)

longlong FUN_1479027c6(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x78 + *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
}



// FUNCTION 1479027d6 FUN_1479027d6 body=210 status=ok
// SIG undefined FUN_1479027d6(void)

void FUN_1479027d6(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_40 = *param_3;
  local_38 = 0;
  local_30 = 0;
  FUN_14791467e(&local_38,param_4);
  iVar2 = *(int *)(param_1 + 0x7b8);
  *(uint *)(param_1 + 0x7b8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x7bc) < iVar2 + 1U) {
    FUN_14791bf66((longlong *)(param_1 + 0x7b0),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x7b0);
  lVar4 = (longlong)iVar2 * 0x20;
  puVar1 = (undefined4 *)(lVar3 + lVar4);
  *puVar1 = (undefined4)local_48;
  puVar1[1] = local_48._4_4_;
  puVar1[2] = (undefined4)uStack_40;
  puVar1[3] = uStack_40._4_4_;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
  *(undefined4 *)(lVar3 + 0x18 + lVar4) = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = local_38;
  local_38 = 0;
  *(undefined4 *)(lVar3 + 0x18 + lVar4) = local_30;
  local_30 = 0;
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479028aa FUN_1479028aa body=210 status=ok
// SIG undefined FUN_1479028aa(void)

void FUN_1479028aa(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_40 = *param_3;
  local_38 = 0;
  local_30 = 0;
  FUN_14791467e(&local_38,param_4);
  iVar2 = *(int *)(param_1 + 0x7c8);
  *(uint *)(param_1 + 0x7c8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x7cc) < iVar2 + 1U) {
    FUN_14791bf66((longlong *)(param_1 + 0x7c0),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x7c0);
  lVar4 = (longlong)iVar2 * 0x20;
  puVar1 = (undefined4 *)(lVar3 + lVar4);
  *puVar1 = (undefined4)local_48;
  puVar1[1] = local_48._4_4_;
  puVar1[2] = (undefined4)uStack_40;
  puVar1[3] = uStack_40._4_4_;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
  *(undefined4 *)(lVar3 + 0x18 + lVar4) = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = local_38;
  local_38 = 0;
  *(undefined4 *)(lVar3 + 0x18 + lVar4) = local_30;
  local_30 = 0;
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14790297e FUN_14790297e body=275 status=ok
// SIG undefined FUN_14790297e(void)

longlong * FUN_14790297e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
    iVar2 = (int)plVar3[1];
    if (0 < iVar2) {
      iVar6 = -1;
      iVar8 = 0;
      do {
        lVar7 = *(longlong *)(*plVar3 + (longlong)(iVar2 + iVar6) * 8);
        if (lVar7 != 0) {
          lVar1 = *(longlong *)(lVar7 + 0x70);
          if (DAT_14cacbf18 == 0) {
            uVar5 = FUN_140002dac();
            DAT_14cacbf18 = FUN_140002ddd(FUN_1463a5bfa,uVar5,L"AnimNode_StateMachine");
            if (DAT_14cacbf18 == 0) goto LAB_147902a6d;
          }
          if (((*(int *)(DAT_14cacbf18 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cacbf18 + 0x38) * 8) ==
               DAT_14cacbf18 + 0x30)) &&
             (lVar7 = (longlong)*(int *)(lVar7 + 0x44) + *(longlong *)(param_1 + 0x130), lVar7 != 0)
             ) {
            plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))();
            iVar2 = *(int *)(lVar7 + 0x18);
            if (((-1 < (longlong)iVar2) && (iVar2 < (int)plVar4[1])) &&
               ((plVar4 = (longlong *)((longlong)iVar2 * 0x38 + *plVar4), plVar4 != (longlong *)0x0
                && (*plVar4 == param_2)))) {
              return plVar4;
            }
          }
        }
LAB_147902a6d:
        iVar8 = iVar8 + 1;
        iVar2 = (int)plVar3[1];
        iVar6 = iVar6 + -1;
      } while (iVar8 < iVar2);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 147902a92 FUN_147902a92 body=280 status=ok
// SIG undefined FUN_147902a92(void)

int FUN_147902a92(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
    iVar2 = (int)plVar3[1];
    if (0 < iVar2) {
      iVar7 = 0;
      iVar6 = -1;
      do {
        lVar8 = *(longlong *)(*plVar3 + (longlong)(iVar2 + iVar6) * 8);
        if (lVar8 != 0) {
          lVar1 = *(longlong *)(lVar8 + 0x70);
          if (DAT_14cacbf18 == 0) {
            uVar5 = FUN_140002dac();
            DAT_14cacbf18 = FUN_140002ddd(FUN_1463a5bfa,uVar5,L"AnimNode_StateMachine");
            if (DAT_14cacbf18 == 0) goto LAB_147902b82;
          }
          if (((*(int *)(DAT_14cacbf18 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cacbf18 + 0x38) * 8) ==
               DAT_14cacbf18 + 0x30)) &&
             (lVar8 = (longlong)*(int *)(lVar8 + 0x44) + *(longlong *)(param_1 + 0x130), lVar8 != 0)
             ) {
            plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))();
            iVar2 = *(int *)(lVar8 + 0x18);
            if (((-1 < (longlong)iVar2) && (iVar2 < (int)plVar4[1])) &&
               ((plVar4 = (longlong *)((longlong)iVar2 * 0x38 + *plVar4), plVar4 != (longlong *)0x0
                && (*plVar4 == param_2)))) {
              return iVar7;
            }
          }
        }
LAB_147902b82:
        iVar7 = iVar7 + 1;
        iVar2 = (int)plVar3[1];
        iVar6 = iVar6 + -1;
      } while (iVar7 < iVar2);
    }
  }
  return -1;
}



// FUNCTION 147902baa FUN_147902baa body=294 status=ok
// SIG undefined FUN_147902baa(void)

void FUN_147902baa(longlong param_1,longlong param_2,int *param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
    iVar2 = (int)plVar3[1];
    if (0 < iVar2) {
      iVar7 = 0;
      iVar6 = -1;
      do {
        lVar8 = *(longlong *)(*plVar3 + (longlong)(iVar2 + iVar6) * 8);
        if (lVar8 != 0) {
          lVar1 = *(longlong *)(lVar8 + 0x70);
          if (DAT_14cacbf18 == 0) {
            uVar5 = FUN_140002dac();
            DAT_14cacbf18 = FUN_140002ddd(FUN_1463a5bfa,uVar5,L"AnimNode_StateMachine");
            if (DAT_14cacbf18 == 0) goto LAB_147902c96;
          }
          if (((*(int *)(DAT_14cacbf18 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cacbf18 + 0x38) * 8) ==
               DAT_14cacbf18 + 0x30)) &&
             (lVar8 = (longlong)*(int *)(lVar8 + 0x44) + *(longlong *)(param_1 + 0x130), lVar8 != 0)
             ) {
            plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))();
            iVar2 = *(int *)(lVar8 + 0x18);
            if (((-1 < (longlong)iVar2) && (iVar2 < (int)plVar4[1])) &&
               ((plVar4 = (longlong *)((longlong)iVar2 * 0x38 + *plVar4), plVar4 != (longlong *)0x0
                && (*plVar4 == param_2)))) {
              *param_3 = iVar7;
              if (param_4 == (undefined8 *)0x0) {
                return;
              }
              goto LAB_147902cb3;
            }
          }
        }
LAB_147902c96:
        iVar7 = iVar7 + 1;
        iVar2 = (int)plVar3[1];
        iVar6 = iVar6 + -1;
      } while (iVar7 < iVar2);
    }
  }
  *param_3 = -1;
  if (param_4 != (undefined8 *)0x0) {
    plVar4 = (longlong *)0x0;
LAB_147902cb3:
    *param_4 = plVar4;
  }
  return;
}



// FUNCTION 147902cd0 FUN_147902cd0 body=363 status=ok
// SIG undefined FUN_147902cd0(void)

undefined4 FUN_147902cd0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  if ((*(longlong *)(param_1 + 0x138) != 0) && (lVar3 = FUN_14790297e(), lVar3 != 0)) {
    plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
    iVar2 = *(int *)(lVar3 + 0x18);
    if (0 < iVar2) {
      lVar9 = 0;
      do {
        if ((*(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar9 * 0x78) == param_3) &&
           (lVar8 = *(longlong *)(lVar3 + 0x10) + lVar9 * 0x78, 0 < *(int *)(lVar8 + 0x38))) {
          lVar10 = 0;
          do {
            lVar5 = *(longlong *)
                     (*plVar4 +
                     (longlong)
                     (int)(~*(uint *)(*(longlong *)(lVar8 + 0x30) + lVar10 * 4) + (int)plVar4[1]) *
                     8);
            if (lVar5 != 0) {
              lVar1 = *(longlong *)(lVar5 + 0x70);
              if (DAT_14cacbcb0 == 0) {
                uVar6 = FUN_140002dac();
                DAT_14cacbcb0 = FUN_140002ddd(FUN_1463a51e9,uVar6,L"AnimNode_AssetPlayerBase");
                if (DAT_14cacbcb0 == 0) goto LAB_147902dfc;
              }
              if ((((*(int *)(DAT_14cacbcb0 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cacbcb0 + 0x38) * 8) ==
                    DAT_14cacbcb0 + 0x30)) &&
                  (plVar7 = (longlong *)
                            ((longlong)*(int *)(lVar5 + 0x44) + *(longlong *)(param_1 + 0x130)),
                  plVar7 != (longlong *)0x0)) &&
                 ((param_4 == 0 ||
                  (lVar5 = (**(code **)(*plVar7 + 0xf0))(), *(longlong *)(lVar5 + 0x18) == param_4))
                 )) {
                return *(undefined4 *)(*(longlong *)(lVar8 + 0x30) + lVar10 * 4);
              }
            }
LAB_147902dfc:
            lVar10 = lVar10 + 1;
          } while (lVar10 < *(int *)(lVar8 + 0x38));
          iVar2 = *(int *)(lVar3 + 0x18);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar2);
    }
  }
  return 0xffffffff;
}



// FUNCTION 147902e3c FUN_147902e3c body=308 status=ok
// SIG undefined FUN_147902e3c(void)

longlong * FUN_147902e3c(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(longlong **)(param_1 + 0x138) != (longlong *)0x0) &&
     (plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x88))(),
     (int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34))) {
    lVar2 = *param_3;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar8 = (uint)lVar2 & 0xffff;
    plVar7 = plVar4 + 7;
    if ((longlong *)plVar4[8] != (longlong *)0x0) {
      plVar7 = (longlong *)plVar4[8];
    }
    iVar6 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)plVar4[9] - 1U &
                    (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar8) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar9 = *plVar4 + (longlong)iVar6 * 0x20;
        if (*(longlong *)(*plVar4 + (longlong)iVar6 * 0x20) == lVar2) {
          if ((lVar9 + 8U & 0xfffffffffffffff7) == 0) {
            return param_2;
          }
          iVar6 = *(int *)(lVar9 + 0x10);
          if ((longlong)iVar6 == 0) {
            return param_2;
          }
          lVar2 = *(longlong *)(lVar9 + 8);
          lVar9 = 0;
          do {
            lVar5 = FUN_140183782(param_1,*(undefined4 *)(lVar2 + lVar9));
            if (lVar5 != 0) {
              iVar1 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar1 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
                FUN_14791c1fe(param_2,iVar1);
              }
              *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
            }
            lVar9 = lVar9 + 4;
          } while ((longlong)iVar6 * 4 != lVar9);
          return param_2;
        }
        iVar6 = *(int *)(lVar9 + 0x18);
      } while (iVar6 != -1);
    }
  }
  return param_2;
}



// FUNCTION 147902f70 FUN_147902f70 body=308 status=ok
// SIG undefined FUN_147902f70(void)

longlong * FUN_147902f70(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(longlong **)(param_1 + 0x138) != (longlong *)0x0) &&
     (plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x88))(),
     (int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34))) {
    lVar2 = *param_3;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar8 = (uint)lVar2 & 0xffff;
    plVar7 = plVar4 + 7;
    if ((longlong *)plVar4[8] != (longlong *)0x0) {
      plVar7 = (longlong *)plVar4[8];
    }
    iVar6 = *(int *)((longlong)plVar7 +
                    (ulonglong)
                    ((int)plVar4[9] - 1U &
                    (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar8) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar9 = *plVar4 + (longlong)iVar6 * 0x20;
        if (*(longlong *)(*plVar4 + (longlong)iVar6 * 0x20) == lVar2) {
          if ((lVar9 + 8U & 0xfffffffffffffff7) == 0) {
            return param_2;
          }
          iVar6 = *(int *)(lVar9 + 0x10);
          if ((longlong)iVar6 == 0) {
            return param_2;
          }
          lVar2 = *(longlong *)(lVar9 + 8);
          lVar9 = 0;
          do {
            lVar5 = FUN_1417b4e96(param_1,*(undefined4 *)(lVar2 + lVar9));
            if (lVar5 != 0) {
              iVar1 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar1 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
                FUN_14791c284(param_2,iVar1);
              }
              *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
            }
            lVar9 = lVar9 + 4;
          } while ((longlong)iVar6 * 4 != lVar9);
          return param_2;
        }
        iVar6 = *(int *)(lVar9 + 0x18);
      } while (iVar6 != -1);
    }
  }
  return param_2;
}



// FUNCTION 1479030a4 FUN_1479030a4 body=81 status=ok
// SIG undefined FUN_1479030a4(void)

void FUN_1479030a4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_1401a2688(param_1,0);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1402191ca(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1479030f6 FUN_1479030f6 body=100 status=ok
// SIG undefined FUN_1479030f6(void)

void FUN_1479030f6(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if ((longlong)*(int *)(param_1 + 0x7d8) != 0) {
    uVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 2000) + 0x28 + uVar1) == param_2) {
        if ((int)(uVar1 >> 3) * -0x49249249 == -1) {
          return;
        }
        FUN_14791c30a(param_1 + 2000);
        FUN_14791c382(param_1 + 2000);
        return;
      }
      uVar1 = uVar1 + 0x38;
    } while ((longlong)*(int *)(param_1 + 0x7d8) * 0x38 - uVar1 != 0);
  }
  return;
}



// FUNCTION 14790315a FUN_14790315a body=42 status=ok
// SIG undefined FUN_14790315a(void)

longlong FUN_14790315a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x7d8) != 0) {
    lVar1 = *(longlong *)(param_1 + 2000);
    lVar2 = (longlong)*(int *)(param_1 + 0x7d8) * 0x38;
    do {
      if (*(longlong *)(lVar1 + 0x28) == param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x38;
      lVar2 = lVar2 + -0x38;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 147903184 FUN_147903184 body=29 status=ok
// SIG undefined FUN_147903184(void)

void FUN_147903184(longlong *param_1,longlong param_2)

{
  if (param_1 != (longlong *)0x0 && param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014790319d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



// FUNCTION 1479031a2 FUN_1479031a2 body=25 status=ok
// SIG undefined FUN_1479031a2(void)

void FUN_1479031a2(longlong param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_1433d89c4(param_1,param_2,*(undefined8 *)(param_1 + 0x170),DAT_14cacc360);
    return;
  }
  return;
}



// FUNCTION 1479031bc FUN_1479031bc body=13 status=ok
// SIG undefined FUN_1479031bc(void)

void FUN_1479031bc(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479031c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x50))();
    return;
  }
  return;
}



// FUNCTION 1479031ca FUN_1479031ca body=16 status=ok
// SIG undefined FUN_1479031ca(void)

void FUN_1479031ca(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479031d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))();
    return;
  }
  return;
}



// FUNCTION 1479031da FUN_1479031da body=76 status=ok
// SIG undefined FUN_1479031da(void)

void FUN_1479031da(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  if (param_1 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x60))();
    if (cVar1 == '\0') {
      if (*(char *)(param_2 + 0x98) == '\x01') {
        FUN_142400d60(*(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x28));
        return;
      }
      FUN_1448859f0(param_2 + 0x20,*(undefined8 *)(param_2 + 0x30));
      return;
    }
  }
  return;
}



// FUNCTION 147903226 FUN_147903226 body=57 status=ok
// SIG undefined FUN_147903226(void)

void FUN_147903226(longlong param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x5e8) = 0xffff;
    *(undefined8 *)(param_1 + 0x5e0) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x5f8) = 0xffff;
    *(undefined8 *)(param_1 + 0x5f0) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x5d8) = 0xffff;
    *(undefined8 *)(param_1 + 0x5d0) = 0xffffffffffffffff;
  }
  return;
}



// FUNCTION 147903260 FUN_147903260 body=546 status=ok
// SIG undefined FUN_147903260(void)

void FUN_147903260(longlong param_1,longlong *param_2,longlong *param_3)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  double *pdVar21;
  longlong *plVar22;
  double *pdVar23;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  if (*param_3 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1447d6d9c(param_1,0);
    }
    if (*(int *)(param_1 + 0x1c) < 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      FUN_1401017f4(param_1 + 0x10,0);
      return;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    FUN_1410914fc(param_2,*param_3 + 0xd0,param_1);
    uVar9 = *(uint *)(param_2 + 1);
    plVar22 = (longlong *)(param_1 + 0x10);
    FUN_144a72a68(plVar22,(ulonglong)uVar9,1);
    if (param_2[0x1d] == 0) {
      puVar20 = (undefined8 *)
                ((ulonglong)((uint)*(ushort *)*param_2 * 0x60) + *(longlong *)(param_2[9] + 0x30));
    }
    else {
      puVar20 = *(undefined8 **)(param_2[0x1d] + 0x10);
    }
    uVar16 = puVar20[1];
    uVar17 = puVar20[2];
    uVar18 = puVar20[3];
    puVar10 = (undefined8 *)*plVar22;
    *puVar10 = *puVar20;
    puVar10[1] = uVar16;
    puVar10[2] = uVar17;
    puVar10[3] = uVar18;
    if (1 < (int)uVar9) {
      uVar19 = 1;
      do {
        if (param_2[0x1d] == 0) {
          pdVar23 = (double *)
                    ((ulonglong)((uint)*(ushort *)(*param_2 + uVar19 * 2) * 0x60) +
                    *(longlong *)(param_2[9] + 0x30));
        }
        else {
          pdVar23 = (double *)(uVar19 * 0x60 + *(longlong *)(param_2[0x1d] + 0x10));
        }
        lVar11 = *plVar22;
        pdVar21 = (double *)((longlong)*(int *)(param_2[0x12] + uVar19 * 4) * 0x20 + lVar11);
        dVar12 = *pdVar23;
        dVar13 = pdVar23[1];
        dVar14 = pdVar23[2];
        dVar15 = pdVar23[3];
        dVar1 = pdVar21[3];
        dVar2 = pdVar21[3];
        dVar3 = *pdVar21;
        dVar4 = *pdVar21;
        dVar5 = pdVar21[1];
        dVar6 = pdVar21[1];
        dVar7 = pdVar21[2];
        dVar8 = pdVar21[2];
        pdVar23 = (double *)(lVar11 + uVar19 * 0x20);
        *pdVar23 = dVar13 * dVar7 * -1.0 + dVar14 * dVar5 + dVar15 * dVar3 * 1.0 + dVar12 * dVar1;
        pdVar23[1] = dVar12 * dVar8 * 1.0 + dVar15 * dVar6 + dVar14 * dVar4 * -1.0 + dVar13 * dVar2;
        pdVar23 = (double *)(lVar11 + 0x10 + uVar19 * 0x20);
        *pdVar23 = dVar15 * dVar7 * 1.0 + ((dVar3 * dVar13 * 1.0 + dVar1 * dVar14) - dVar12 * dVar5)
        ;
        pdVar23[1] = dVar14 * dVar8 * -1.0 +
                     ((dVar4 * dVar12 * -1.0 + dVar2 * dVar15) - dVar13 * dVar6);
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar9);
    }
  }
  return;
}



// FUNCTION 147903482 FUN_147903482 body=19 status=ok
// SIG undefined FUN_147903482(void)

void FUN_147903482(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  if (0 < (int)param_1[0xc]) {
    **(undefined4 **)(param_1 + 10) = param_2;
  }
  return;
}



// FUNCTION 147903496 FUN_147903496 body=411 status=ok
// SIG undefined FUN_147903496(void)

void FUN_147903496(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    uVar4 = *(uint *)(param_1 + 0x14);
    if ((ulonglong)uVar4 != 0xffffffff) {
      iVar1 = *(int *)(param_1 + 0x10);
      if ((((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0x170))) && (-1 < (int)uVar4)) &&
         (lVar2 = *(longlong *)(lVar2 + 0x168) + (longlong)iVar1 * 0x18,
         (int)uVar4 < *(int *)(lVar2 + 0x10))) {
        plVar3 = (longlong *)((ulonglong)uVar4 * 0x40 + *(longlong *)(lVar2 + 8));
        lVar2 = *(longlong *)(param_1 + 0x28);
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
        }
        if (*plVar3 == lVar2) {
          if (*(char *)(param_1 + 0x19) == '\x01') {
            if (lVar2 == 0) {
              fVar5 = 1.0;
            }
            else {
              fVar5 = *(float *)(*plVar3 + 0xb0);
            }
            fVar5 = ABS(fVar5 * *(float *)((longlong)plVar3 + 0x14));
            uVar4 = -(uint)(fVar5 <= 1e-08);
            fVar6 = ((float)(int)plVar3[3] *
                    (*(float *)(plVar3 + 2) - *(float *)((longlong)plVar3 + 0xc))) /
                    (float)(uVar4 & 0x3f800000 | ~uVar4 & (uint)fVar5);
            fVar5 = *(float *)(param_1 + 0x24);
            if (fVar6 <= *(float *)(param_1 + 0x24)) {
              fVar5 = fVar6;
            }
            if (fVar5 <= 0.0) {
              fVar5 = 0.0;
            }
            *(float *)(param_1 + 0x24) = fVar5;
          }
          *(int *)(param_1 + 0x1c) = (int)plVar3[1];
          if (*plVar3 == 0) {
            fVar5 = 1.0;
          }
          else {
            fVar5 = *(float *)(*plVar3 + 0xb0);
          }
          fVar5 = ABS(fVar5 * *(float *)((longlong)plVar3 + 0x14));
          uVar4 = -(uint)(fVar5 <= 1e-08);
          *(float *)(param_1 + 0x20) =
               ((float)(int)plVar3[3] *
               (*(float *)(plVar3 + 2) - *(float *)((longlong)plVar3 + 0xc))) /
               (float)(uVar4 & 0x3f800000 | ~uVar4 & (uint)fVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 14790363c FUN_14790363c body=772 status=ok
// SIG undefined FUN_14790363c(void)

void FUN_14790363c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0x3e4ccccd;
  local_44 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0x3e4ccccd;
  local_64 = 0;
  local_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_80 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  puVar4 = &local_78;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = &local_58;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_84;
  local_a0 = local_80;
  uVar2 = FUN_1433d9104(local_30,local_38,puVar3,puVar4);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147903942 FUN_147903942 body=137 status=ok
// SIG undefined FUN_147903942(void)

void FUN_147903942(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1433c5d2c(&local_28,param_1 + 200);
  if (DAT_14c950c29 == '\x01') {
    if (local_28 == 0) {
      local_28 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *param_3 = local_28;
  *(undefined4 *)(param_3 + 1) = local_20;
  *(undefined1 *)((longlong)param_3 + 0xc) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479039cc FUN_1479039cc body=137 status=ok
// SIG undefined FUN_1479039cc(void)

void FUN_1479039cc(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1433c5d2c(&local_28,param_1 + 0xf8);
  if (DAT_14c950c29 == '\x01') {
    if (local_28 == 0) {
      local_28 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *param_3 = local_28;
  *(undefined4 *)(param_3 + 1) = local_20;
  *(undefined1 *)((longlong)param_3 + 0xc) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147903ac8 FUN_147903ac8 body=33 status=ok
// SIG undefined FUN_147903ac8(void)

undefined8 FUN_147903ac8(longlong param_1)

{
  if ((*(int *)(param_1 + 0x170) != 0) && (*(int *)(*(longlong *)(param_1 + 0x168) + 0x10) != 0)) {
    return **(undefined8 **)(*(longlong *)(param_1 + 0x168) + 8);
  }
  return 0;
}



// FUNCTION 147903aea FUN_147903aea body=123 status=ok
// SIG undefined FUN_147903aea(void)

void FUN_147903aea(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = &DAT_14cacd708;
  if ((*(longlong *)(param_1 + 0x40) != 0) && (0 < *(int *)(param_1 + 0x170))) {
    puVar1 = &local_20;
    FUN_144b2079a(*(longlong *)(param_1 + 0x40),puVar1,*(undefined8 *)(param_1 + 0x168));
  }
  *param_3 = *puVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147903b66 FUN_147903b66 body=65 status=ok
// SIG undefined FUN_147903b66(void)

undefined8 * FUN_147903b66(longlong param_1,undefined8 *param_2)

{
  if ((*(longlong *)(param_1 + 0x40) == 0) || (*(int *)(param_1 + 0x170) < 1)) {
    *param_2 = DAT_14cacd708;
  }
  else {
    FUN_144b2079a(*(longlong *)(param_1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x168));
  }
  return param_2;
}



// FUNCTION 147903bc2 FUN_147903bc2 body=208 status=ok
// SIG undefined FUN_147903bc2(void)

void FUN_147903bc2(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = 0xffffffff;
  if (0 < (longlong)*(int *)(param_1 + 0x160)) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x158) + 0x30);
    lVar3 = 0;
    do {
      if (*plVar2 == local_28) {
        uVar1 = (undefined4)lVar3;
        break;
      }
      lVar3 = lVar3 + 1;
      plVar2 = plVar2 + 10;
    } while (*(int *)(param_1 + 0x160) != lVar3);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147903c94 FUN_147903c94 body=54 status=ok
// SIG undefined FUN_147903c94(void)

ulonglong FUN_147903c94(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (0 < (longlong)*(int *)(param_1 + 0x160)) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x158) + 0x30);
    uVar2 = 0;
    do {
      if (*plVar1 == param_2) {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 10;
    } while ((longlong)*(int *)(param_1 + 0x160) != uVar2);
  }
  return 0xffffffff;
}



// FUNCTION 147903cca FUN_147903cca body=192 status=ok
// SIG undefined FUN_147903cca(void)

void FUN_147903cca(longlong param_1,longlong param_2,undefined8 *param_3)

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
  if (((longlong)local_24 < 0) || (*(int *)(param_1 + 0x160) <= local_24)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x158) + 0x30 + (longlong)local_24 * 0x50);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147903d90 FUN_147903d90 body=45 status=ok
// SIG undefined FUN_147903d90(void)

void FUN_147903d90(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_144b00ba4();
  *(bool *)param_3 = lVar1 == DAT_14c951640;
  return;
}


